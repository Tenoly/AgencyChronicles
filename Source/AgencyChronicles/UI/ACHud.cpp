// Fill out your copyright notice in the Description page of Project Settings.


#include "ACHud.h"

#include "3DMenus/Notebook/NotebookMenu.h"
#include "AgencyChronicles/3C/Character/ACPlayerState.h"
#include "AgencyChronicles/Misc/Utils/LogUtils.h"
#include "AgencyChronicles/Misc/Utils/StaticsUtils.h"
#include "PauseMenu/PauseMenu.h"

void AACHud::CloseAllMenus() {
	RemoveCurrentWidgetFromParent();
	CurrentMenu = nullptr;
}

bool AACHud::TogglePauseMenu() {
	if (CurrentMenu == PauseMenu) {
		RemoveCurrentWidgetFromParent();
		CurrentMenu = nullptr;
		return false;
	}
		
	RemoveCurrentWidgetFromParent();
	PauseMenu->AddToViewport();
	CurrentMenu = PauseMenu;

	return true;
}

bool AACHud::ToggleNotebookMenu() {
	if (CurrentMenu == NotebookMenu) {
		RemoveCurrentWidgetFromParent();
		CurrentMenu = nullptr;
		return false;
	}
	
	RemoveCurrentWidgetFromParent();
	NotebookMenu->AddToViewport();
	CurrentMenu = NotebookMenu;

	return true;
}

void AACHud::OnCaseChanged(UCase* newCase) {
	if (IsValid(newCase)) {
		if (NotebookMenu->CluesToDisplay != newCase->GetCluesToDisplay())
			NotebookMenu->CluesToDisplay = newCase->GetCluesToDisplay();
	}
}

void AACHud::BeginPlay() {
	Super::BeginPlay();

	if (!IsValid(PauseMenuClass))
		ULogUtils::UnsetBPValue("PauseMenuClass", "ACHud");
	else
		PauseMenu = Cast<UPauseMenu>(CreateWidget(GetOwningPlayerController(), PauseMenuClass));
	
	if (!IsValid(NotebookMenuClass))
		ULogUtils::UnsetBPValue("PauseMenuClass", "ACHud");
	else {
		NotebookMenu = Cast<UNotebookMenu>(CreateWidget(GetOwningPlayerController(), NotebookMenuClass));

		if (UStoryManager* storyManager = UStaticsUtils::GetACPlayerState(this)->StoryManager) {
			storyManager->OnCurrentCaseModified.AddDynamic(this, &AACHud::OnCaseChanged);
			OnCaseChanged(storyManager->GetCurrentCase());
		}
	}
}

void AACHud::RemoveCurrentWidgetFromParent() {
	if (IsValid(CurrentMenu))
		CurrentMenu->RemoveFromParent();
}
