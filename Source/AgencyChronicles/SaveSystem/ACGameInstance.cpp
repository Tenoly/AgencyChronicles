// Fill out your copyright notice in the Description page of Project Settings.


#include "ACGameInstance.h"

#include "Save.h"
#include "AgencyChronicles/Misc/Utils/StaticsUtils.h"
#include "Kismet/GameplayStatics.h"

void UACGameInstance::SaveToSlot(FString slotName) {
	USave* saveGame = NewObject<USave>();
	const FName levelName = FName(UGameplayStatics::GetCurrentLevelName(GetWorld()));

	const FCharacterSaveData characterSaveData = UStaticsUtils::GetACCharacter(this)->GetSaveData();
	const FPlayerStateSaveData psSaveData = UStaticsUtils::GetACPlayerState(this)->GetSaveData();

	saveGame->SetSaveData(levelName, characterSaveData, psSaveData);

	UGameplayStatics::SaveGameToSlot(saveGame, slotName, 0);
}

void UACGameInstance::LoadSaveFromSlot(FString slotName) {
	LoadedSaveGame = Cast<USave>(UGameplayStatics::LoadGameFromSlot(slotName, 0));
	UGameplayStatics::OpenLevel(GetWorld(), LoadedSaveGame->LevelName);
}