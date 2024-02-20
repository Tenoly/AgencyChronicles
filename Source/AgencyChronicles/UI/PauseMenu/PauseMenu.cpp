// Fill out your copyright notice in the Description page of Project Settings.


#include "PauseMenu.h"

#include "AgencyChronicles/Misc/Utils/LogUtils.h"
#include "AgencyChronicles/UI/SaveSystem/SavePrompt.h"
#include "Components/Button.h"

void UPauseMenu::NativeConstruct() {
	Super::NativeConstruct();
	SaveButton->OnClicked.AddDynamic(this, &UPauseMenu::CreateSavePromptWindow);
	LoadButton->OnClicked.AddDynamic(this, &UPauseMenu::CreateLoadPromptWindow);
}

void UPauseMenu::NativeDestruct() {
	Super::NativeDestruct();
	SaveButton->OnClicked.RemoveDynamic(this, &UPauseMenu::CreateSavePromptWindow);
	LoadButton->OnClicked.RemoveDynamic(this, &UPauseMenu::CreateLoadPromptWindow);
}

void UPauseMenu::CreateSavePromptWindow() {
	if (!IsValid(SavePromptClass))
		ULogUtils::UnsetBPValue("SavePromptClass", "PauseMenu");
	
	USavePrompt* window = Cast<USavePrompt>(CreateWidget(GetOwningPlayer(), SavePromptClass));
	window->SetType(SLT_Save);
	window->AddToViewport();
}

void UPauseMenu::CreateLoadPromptWindow() {
	if (!IsValid(SavePromptClass))
		ULogUtils::UnsetBPValue("SavePromptClass", "PauseMenu");
	
	USavePrompt* window = Cast<USavePrompt>(CreateWidget(GetOwningPlayer(), SavePromptClass));
	window->SetType(SLT_Load);
	window->AddToViewport();
}