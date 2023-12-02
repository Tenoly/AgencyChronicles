#include "PCInGame.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "AgencyChronicles/Misc/Interfaces/Interactable.h"
#include "AgencyChronicles/Misc/Utils/MathUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AACCharacter* APCInGame::GetACCharacter() const {
	return Cast<AACCharacter>(GetPawn());
}

void APCInGame::BeginPlay() {
	Super::BeginPlay();

	OnMenuClosed();
}

void APCInGame::SetupInputComponent() {
	Super::SetupInputComponent();

	TryBindInput(IAT_Moving, &APCInGame::Move);
	TryBindInput(IAT_ToggleRunning, &APCInGame::StartRunning);
	TryBindInput(IAT_ToggleRunning, &APCInGame::StopRunning, ETriggerEvent::Completed);
}

void APCInGame::TryBindInput(EInputActionType type, FEnhancedInputActionHandlerSignature::TMethodPtr<APCInGame, const FInputActionInstance&> callback, ETriggerEvent triggerEvent) {
	if (UEnhancedInputComponent* inputComponent = Cast<UEnhancedInputComponent>(InputComponent)) {
		if (UInputAction* inputAction = Inputs.FindRef(type)) {
			inputComponent->BindAction(inputAction, triggerEvent, this, callback);
		}
	}
}

void APCInGame::Move(const FInputActionInstance& instance) {
	const FVector2D axisValue = instance.GetValue().Get<FVector2D>();

	const FVector forwardDirection = UMathUtils::ClearZAndNormalize(UKismetMathLibrary::GetForwardVector(UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation()));
	GetPawn()->AddMovementInput(forwardDirection, axisValue.X);

	const FVector rightDirection = UMathUtils::ClearZAndNormalize(UKismetMathLibrary::GetRightVector(UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation()));
	GetPawn()->AddMovementInput(rightDirection, axisValue.Y);
}

void APCInGame::OnMenuClosed()
{
	SetShowMouseCursor(false);
	SetInputMode(FInputModeGameOnly());
	
	if (const ULocalPlayer* localPlayer = Cast<ULocalPlayer>(Player)) {
		if (UEnhancedInputLocalPlayerSubsystem* inputSystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			if (inputSystem->HasMappingContext(MappingContexts.FindRef(IMCT_Menu))) {
				inputSystem->RemoveMappingContext(MappingContexts.FindRef(IMCT_Menu));	
			}
			
			if (MappingContexts.FindRef(IMCT_InGame)) {
				inputSystem->AddMappingContext(MappingContexts.FindRef(IMCT_InGame), 0);
			}
		}
	}

	SetPause(false);
}

void APCInGame::CastForInteractableObject() {
	TArray<FHitResult> hits;
	FVector start = GetACCharacter()->GetFeetLocation();
	GetWorld()->SweepMultiByChannel(hits, start, start, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeSphere(InteractionDetectionRadius));

	TArray<AActor*> newHitActors;
	for (FHitResult hit : hits) {
		AActor* hitActor = hit.GetActor();
		if (hitActor && hitActor->Implements<UInteractable>()) {
			newHitActors.AddUnique(hitActor);
		}
	}
	AActor* candidate = PickBestFocusCandidate(newHitActors, start);

	if (CurrentFocusedInteractable == candidate)
		return;
	
	if (CurrentFocusedInteractable)
		IInteractable::Execute_OnFocusEnd(CurrentFocusedInteractable);

	CurrentFocusedInteractable = candidate;

	if (CurrentFocusedInteractable)
		IInteractable::Execute_OnFocusStart(CurrentFocusedInteractable);
}

AActor* APCInGame::PickBestFocusCandidate(TArray<AActor*> candidates, FVector start) {
	if (candidates.IsEmpty())
		return nullptr;

	AActor* candidate = nullptr;
	float min = TNumericLimits<float>::Max();
	for (AActor* actor : candidates) {
		const float dist = (actor->GetActorLocation() - start).SquaredLength();
		if (dist < min) {
			min = dist;
			candidate = actor;
		}
	}

	return candidate;
}
