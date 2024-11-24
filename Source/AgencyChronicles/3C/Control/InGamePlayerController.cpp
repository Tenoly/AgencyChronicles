#include "InGamePlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "AgencyChronicles/Misc/Interfaces/Interactable.h"
#include "AgencyChronicles/Misc/Utils/MathUtils.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

AACCharacter* AInGamePlayerController::GetACCharacter() const {
	return Cast<AACCharacter>(GetPawn());
}

void AInGamePlayerController::BeginPlay() {
	Super::BeginPlay();

	OnMenuClosed();
}

void AInGamePlayerController::SetupInputComponent() {
	Super::SetupInputComponent();

	TryBindInput(IAT_Moving, &AInGamePlayerController::Move);
	TryBindInput(IAT_Looking, &AInGamePlayerController::Look);
	TryBindInput(IAT_ToggleRunning, &AInGamePlayerController::StartRunning);
	TryBindInput(IAT_ToggleRunning, &AInGamePlayerController::StopRunning, ETriggerEvent::Completed);
	TryBindInput(IAT_OpenPauseMenu, &AInGamePlayerController::TogglePauseMenu);
	TryBindInput(IAT_OpenNotebookMenu, &AInGamePlayerController::ToggleNotebookMenu);
}

void AInGamePlayerController::TryBindInput(EInputActionType type, FEnhancedInputActionHandlerSignature::TMethodPtr<AInGamePlayerController, const FInputActionInstance&> callback, ETriggerEvent triggerEvent) {
	if (UEnhancedInputComponent* inputComponent = Cast<UEnhancedInputComponent>(InputComponent)) {
		if (UInputAction* inputAction = Inputs.FindRef(type)) {
			inputComponent->BindAction(inputAction, triggerEvent, this, callback);
		}
	}
}

void AInGamePlayerController::Move(const FInputActionInstance& inputActionInstance) {
	const FVector2D axisValue = inputActionInstance.GetValue().Get<FVector2D>();

	const FVector forwardDirection = UMathUtils::ClearZAndNormalize(UKismetMathLibrary::GetForwardVector(UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation()));
	GetPawn()->AddMovementInput(forwardDirection, axisValue.X);

	const FVector rightDirection = UMathUtils::ClearZAndNormalize(UKismetMathLibrary::GetRightVector(UGameplayStatics::GetPlayerCameraManager(this, 0)->GetCameraRotation()));
	GetPawn()->AddMovementInput(rightDirection, axisValue.Y);
}

void AInGamePlayerController::Look(const FInputActionInstance& inputActionInstance) {
	const FVector2D axisValue = inputActionInstance.GetValue().Get<FVector2D>();

	AddYawInput(axisValue.X);
	AddPitchInput(axisValue.Y);
}

void AInGamePlayerController::TogglePauseMenu(const FInputActionInstance& inputActionInstance) {
	bool open = GetACHud()->TogglePauseMenu();
	
	if (open)
		OnMenuOpened();
	else
		OnMenuClosed();
}

void AInGamePlayerController::ToggleNotebookMenu(const FInputActionInstance& inputActionInstance) {
	bool open = GetACHud()->ToggleNotebookMenu();

	if (open)
		OnMenuOpened();
	else
		OnMenuClosed();
}

void AInGamePlayerController::OnMenuOpened() {
	SetShowMouseCursor(true);
	SetInputMode(FInputModeGameAndUI());
	
	if (const ULocalPlayer* localPlayer = Cast<ULocalPlayer>(Player))
	{
		if (UEnhancedInputLocalPlayerSubsystem* inputSystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (inputSystem->HasMappingContext(MappingContexts.FindRef(IMCT_InGame))) {
				inputSystem->RemoveMappingContext(MappingContexts.FindRef(IMCT_InGame));	
			}
			
			if (MappingContexts.Find(IMCT_Menu)) {
				inputSystem->AddMappingContext(MappingContexts.FindRef(IMCT_Menu), 0);
			}
		}
	}

	//SetPause(true);
}

void AInGamePlayerController::OnMenuClosed()
{
	SetShowMouseCursor(false);
	SetInputMode(FInputModeGameOnly());
	
	if (const ULocalPlayer* localPlayer = Cast<ULocalPlayer>(Player)) {
		if (UEnhancedInputLocalPlayerSubsystem* inputSystem = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>()) {
			if (inputSystem->HasMappingContext(MappingContexts.FindRef(IMCT_Menu))) {
				inputSystem->RemoveMappingContext(MappingContexts.FindRef(IMCT_Menu));	
			}
			
			if (MappingContexts.Find(IMCT_InGame)) {
				inputSystem->AddMappingContext(MappingContexts.FindRef(IMCT_InGame), 0);
			}
		}
	}

	//SetPause(false);
}

void AInGamePlayerController::CastForInteractableObject() {
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

AActor* AInGamePlayerController::PickBestFocusCandidate(TArray<AActor*> candidates, FVector start) {
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
