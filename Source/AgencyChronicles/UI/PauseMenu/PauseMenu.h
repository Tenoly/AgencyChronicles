// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenu.generated.h"

class UButton;
class USavePrompt;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UPauseMenu : public UUserWidget {
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
	UFUNCTION() void CreateSavePromptWindow();
	UFUNCTION() void CreateLoadPromptWindow();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Save And Load Prompt Window")
	TSubclassOf<USavePrompt> SavePromptClass;

	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> SaveButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> LoadButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> OptionsButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> QuitButton;
};
