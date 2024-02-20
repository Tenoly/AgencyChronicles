// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CaseData.generated.h"

class UCaseClueData;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UCaseData : public UPrimaryDataAsset {
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly) int32 CaseID = -1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly) FText DisplayName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Clues")	TArray<TObjectPtr<UCaseClueData>> RootClues;
};
