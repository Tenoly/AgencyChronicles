#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "AgencyChronicles/3C/Character/ACCharacter.h"
#include "AgencyChronicles/UI/ACHud.h"
#include "GameFramework/PlayerController.h"
#include "InGamePlayerController.generated.h"

class AACHud;
class UInputAction;

UENUM(BlueprintType)
enum EInputActionType {
	IAT_None,
	// In-game
	IAT_Moving,
	IAT_Looking,
	IAT_Interact,
	IAT_Zoom,
	IAT_Jump,
	IAT_ToggleRunning,

	IAT_OpenPauseMenu,
	IAT_OpenNotebookMenu,
};

UENUM()
enum EInputMappingContextType {
	IMCT_None,

	IMCT_InGame,
	IMCT_Menu
};

UCLASS()
class AGENCYCHRONICLES_API AInGamePlayerController : public APlayerController {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable) AACCharacter* GetACCharacter() const;
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	void TryBindInput(	EInputActionType type, FEnhancedInputActionHandlerSignature::TMethodPtr<AInGamePlayerController,
					const FInputActionInstance&> callback, ETriggerEvent triggerEvent = ETriggerEvent::Triggered);

	void Move(const FInputActionInstance& inputActionInstance);
	void TogglePauseMenu(const FInputActionInstance& inputActionInstance);
	void ToggleNotebookMenu(const FInputActionInstance& inputActionInstance);
	UFUNCTION(BlueprintImplementableEvent) void StartRunning(const FInputActionInstance& inputActionInstance);
	UFUNCTION(BlueprintImplementableEvent) void StopRunning(const FInputActionInstance& inputActionInstance);

	AACHud* GetACHud() const { return Cast<AACHud>(GetHUD()); }

	void OnMenuOpened();
	void OnMenuClosed();

	void CastForInteractableObject();
	AActor* PickBestFocusCandidate(TArray<AActor*> candidates, FVector start);
	
	UPROPERTY(EditDefaultsOnly, Category = "Inputs") TMap<TEnumAsByte<EInputActionType>, UInputAction*> Inputs;
	UPROPERTY(EditDefaultsOnly, Category = "Inputs") TMap<TEnumAsByte<EInputMappingContextType>, UInputMappingContext*> MappingContexts;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interaction") float InteractionDetectionRadius = 150.f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Interaction") float InteractionDetectionAngle = 45.f;

	UPROPERTY() TObjectPtr<AActor> CurrentFocusedInteractable = nullptr;
};