// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgencyChronicles/InGame/3C/Character/ACCharacter.h"
#include "AgencyChronicles/InGame/3C/Character/ACPlayerState.h"
#include "GameFramework/SaveGame.h"
#include "Save.generated.h"

class USave;

DECLARE_DELEGATE_OneParam(FOnLoad, USave*);

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API USave : public USaveGame {
	GENERATED_BODY()
	
public:
	void SetSaveData(FName levelName, FCharacterSaveData characterSaveData, FPlayerStateSaveData playerStateSaveData);
	void OverrideDataOnLoad();

	FName LevelName = "";
	FCharacterSaveData CharacterSaveData;
	FPlayerStateSaveData PlayerStateSaveData;
	
protected:
	FOnLoad OnLoad;
};
