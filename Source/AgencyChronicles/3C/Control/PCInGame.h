#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "AgencyChronicles/3C/Character/ACCharacter.h"
#include "GameFramework/PlayerController.h"
#include "PCInGame.generated.h"

class UInputAction;

UENUM(BlueprintType)
enum EInputActionType {
	IAT_None,
	// General
	IAT_Moving,
	IAT_Looking,
	IAT_Interact,
	IAT_Zoom,
	IAT_Jump,
	IAT_ToggleRunning,

	// Menus
	IAT_OpenCaseMenu,
	IAT_OpenInventoryMenu,
	IAT_OpenMapMenu,
	IAT_OpenOptionMenuOrCloseAllMenu,
	IAT_SwitchGameplayMenu
};

UENUM()
enum EInputMappingContextType {
	IMCT_None,

	IMCT_InGame,
	IMCT_Menu
};

UCLASS()
class AGENCYCHRONICLES_API APCInGame : public APlayerController {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	AACCharacter* GetACCharacter() const;
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	void TryBindInput(	EInputActionType type, FEnhancedInputActionHandlerSignature::TMethodPtr<APCInGame,
					const FInputActionInstance&> callback, ETriggerEvent triggerEvent = ETriggerEvent::Triggered);

	void Move(const FInputActionInstance& inputActionInstance);

	UFUNCTION(BlueprintImplementableEvent)
	void StartRunning(const FInputActionInstance& inputActionInstance);
	UFUNCTION(BlueprintImplementableEvent)
	void StopRunning(const FInputActionInstance& inputActionInstance);
	
	
	void OnMenuClosed();


	UPROPERTY(EditDefaultsOnly, Category = "Inputs")
	TMap<TEnumAsByte<EInputActionType>, UInputAction*> Inputs;

	UPROPERTY(EditDefaultsOnly, Category = "Inputs")
	TMap<TEnumAsByte<EInputMappingContextType>, UInputMappingContext*> MappingContexts;
};