// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CaseClueData.generated.h"

class UCaseData;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UCaseClueData : public UPrimaryDataAsset {
	GENERATED_BODY()

public:

	UFUNCTION()
	int GetClueDepth() const;

	UFUNCTION()
	int GetIndexInParent();
	
	UPROPERTY(EditDefaultsOnly, Category = "Display")
	FString Name = "";

	UPROPERTY(EditDefaultsOnly, Category = "Display", meta = (AllowedClasses="/Script/Engine.Texture, /Script/Engine.MaterialInterface"))
	TObjectPtr<UObject> Icon = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category = "Case") TObjectPtr<UCaseData> RelatedCase;
	UPROPERTY(EditDefaultsOnly, Category = "Behavior") bool FoundAtStart = false;
	UPROPERTY(EditDefaultsOnly, Category = "Links")	bool IsRoot = true;

	UPROPERTY(EditDefaultsOnly, Category = "Links", meta=(EditCondition = "!IsRoot", EditConditionHides))
	TObjectPtr<UCaseClueData> ParentClue = nullptr;
	
	UPROPERTY(EditDefaultsOnly, Category = "Links") TArray<TObjectPtr<UCaseClueData>> SubClues;
	UPROPERTY(EditDefaultsOnly, Category = "Links") TArray<TObjectPtr<UCaseClueData>> LinkedClues;
};
