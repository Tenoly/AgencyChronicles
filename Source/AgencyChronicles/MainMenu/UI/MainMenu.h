// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgencyChronicles/SaveSystem/UI/SavePrompt.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UMainMenu : public UUserWidget {
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	UFUNCTION()	void NewGame();
	UFUNCTION() void CreateLoadPromptWindow();
	UFUNCTION() void Quit();

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USavePrompt> SavePromptClass;
	
	UPROPERTY(EditDefaultsOnly)
	FName NewGameMapName = "C0_Map";
	
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> NewGameButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> LoadButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> OptionsButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> QuitButton;
};
