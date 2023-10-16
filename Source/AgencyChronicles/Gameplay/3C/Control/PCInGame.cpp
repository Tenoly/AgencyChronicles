#include "PCInGame.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "AgencyChronicles/Misc/Utils/MathUtils.h"
#include "boost/test/utils/runtime/modifier.hpp"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void APCInGame::BeginPlay() {
	Super::BeginPlay();

	OnMenuClosed();
}

void APCInGame::SetupInputComponent() {
	Super::SetupInputComponent();

	BindInput(IAT_Moving, &APCInGame::Move);
}

void APCInGame::BindInput(EInputActionType type, FEnhancedInputActionHandlerSignature::TMethodPtr<APCInGame, const FInputActionInstance&> callback, ETriggerEvent triggerEvent) {
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
