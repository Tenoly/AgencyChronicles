// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Case.generated.h"

class UCaseData;
class UCaseClueData;

USTRUCT()
struct FRuntimeClueInfo
{
	GENERATED_BODY()

	bool Found = false;
	bool AlreadyFound = false;
};

USTRUCT()
struct FCaseSaveData
{
	GENERATED_BODY()
	
	TObjectPtr<UCaseData> Data;
	
	TMap<UCaseClueData*, FRuntimeClueInfo> CluesInfo;
};

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UCase : public UObject {
	GENERATED_BODY()
	
public:
	void CreateClueInfo(UCaseClueData* clue);
	
#pragma region Save
	void LoadFromSaveData(const FCaseSaveData& saveData);
	FCaseSaveData GetSaveData() const;
#pragma endregion
	
	UPROPERTY()	TObjectPtr<UCaseData> Data;

	UPROPERTY()	TMap<UCaseClueData*, FRuntimeClueInfo> CluesInfo;
};
