// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ACGameInstance.generated.h"

class USave;
class AACPlayerState;
class AACCharacter;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UACGameInstance : public UGameInstance {
	GENERATED_BODY()

public:
	void SaveToSlot(FString slotName);
	void LoadSaveFromSlot(FString slotName);
	
	TObjectPtr<USave> LoadedSaveGame = nullptr;
};
