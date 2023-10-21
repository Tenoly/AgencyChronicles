// Fill out your copyright notice in the Description page of Project Settings.


#include "Save.h"

void USave::SetSaveData(FName levelName, FCharacterSaveData characterSaveData,
                        FPlayerStateSaveData playerStateSaveData)
{
	LevelName = levelName;
	CharacterSaveData = characterSaveData;
	PlayerStateSaveData = playerStateSaveData;
}

void USave::OverrideDataOnLoad()
{
	OnLoad.ExecuteIfBound(this);
}