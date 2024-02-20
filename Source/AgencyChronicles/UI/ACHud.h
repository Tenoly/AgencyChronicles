// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ACHud.generated.h"

class UCase;
class UNotebookMenu;
class UPauseMenu;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API AACHud : public AHUD {
	GENERATED_BODY()

public:
	void CloseAllMenus();
	bool TogglePauseMenu();
	bool ToggleNotebookMenu();

	UFUNCTION() void OnCaseChanged(UCase* newCase);
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere)	TSubclassOf<UPauseMenu> PauseMenuClass;
	UPROPERTY(EditAnywhere)	TSubclassOf<UNotebookMenu> NotebookMenuClass;

	UPROPERTY() TObjectPtr<UPauseMenu> PauseMenu;
	UPROPERTY() TObjectPtr<UNotebookMenu> NotebookMenu;

private:
	void RemoveCurrentWidgetFromParent();
	
	UPROPERTY()	TObjectPtr<UUserWidget> CurrentMenu;
};
