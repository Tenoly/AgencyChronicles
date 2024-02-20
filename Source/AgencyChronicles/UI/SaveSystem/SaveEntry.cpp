// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveEntry.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/BlueprintPathsLibrary.h"

FString USaveEntry::GetSaveSlotPath() const {
	return SaveSlotPath;
}

void USaveEntry::SetSaveSlotPath(FString path) {
	SaveSlotPath = path;
	const FString name = UBlueprintPathsLibrary::GetBaseFilename(path, true);
	SaveName->SetText(FText::FromString(name));
}

void USaveEntry::NativeConstruct() {
	Super::NativeConstruct();

	EntryButton->OnClicked.AddDynamic(this, &USaveEntry::BroadcastClick);
}

void USaveEntry::NativeDestruct() {
	Super::NativeDestruct();
	
	EntryButton->OnClicked.RemoveDynamic(this, &USaveEntry::BroadcastClick);
}

void USaveEntry::BroadcastClick() {
	OnEntryClicked.Broadcast(this);
}


