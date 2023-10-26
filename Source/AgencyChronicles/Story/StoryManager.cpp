// Fill out your copyright notice in the Description page of Project Settings.


#include "StoryManager.h"

#include "Cases/CaseClueData.h"
#include "Cases/CaseData.h"

UStoryManager::UStoryManager() {
	PrimaryComponentTick.bCanEverTick = true;
}

void UStoryManager::BeginPlay() {
	Super::BeginPlay();	
}

void UStoryManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UStoryManager::SetCurrentCaseFromData(UCaseData* data) {
	UCase* newCase = NewObject<UCase>();
	newCase->Data = data;

	for (UCaseClueData* clue : newCase->Data->RootClues) {
		newCase->CreateClueInfo(clue);
	}
	
	SetCurrentCase(newCase);
}

void UStoryManager::SetCurrentCaseFromSave(FCaseSaveData saveData) {
	UCase* newCase = NewObject<UCase>();

	for (UCaseClueData* clue : newCase->Data->RootClues) {
		newCase->CreateClueInfo(clue);
	}
	newCase->LoadFromSaveData(saveData);

	SetCurrentCase(newCase);
}

void UStoryManager::SetCurrentCase(UCase* newCase) {
	CurrentCase = newCase;
	OnCurrentCaseModified.Broadcast(CurrentCase);
}

UCase* UStoryManager::GetCurrentCase() const {
	return CurrentCase;
}

#pragma region Save
void UStoryManager::LoadFromSaveData(FStoryManagerSaveData saveData) {
	SetCurrentCaseFromSave(saveData.CurrentCase);
}

FStoryManagerSaveData UStoryManager::GetSaveData() const {
	FStoryManagerSaveData saveData;
	saveData.CurrentCase = CurrentCase->GetSaveData();

	return saveData;
}
#pragma endregion