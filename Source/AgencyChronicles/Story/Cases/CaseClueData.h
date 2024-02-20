// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CaseClueData.generated.h"

USTRUCT(BlueprintType)
struct FNotebookTextFormat {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere) FText Text;
	
	UPROPERTY(EditAnywhere) int FontSize = 20;
	UPROPERTY(EditAnywhere) FVector2D Offset;
	UPROPERTY(EditAnywhere) float Angle = 0.f;
	UPROPERTY(EditAnywhere) float HShear = 0.f;
};

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
	
	UPROPERTY(EditDefaultsOnly, Category = "Case") TObjectPtr<UCaseData> RelatedCase;
	
	UPROPERTY(EditDefaultsOnly, Category = "Behavior") bool FoundAtStart = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Links")	bool IsRoot = true;
	UPROPERTY(EditDefaultsOnly, Category = "Links", meta=(EditCondition = "!IsRoot", EditConditionHides))
	TObjectPtr<UCaseClueData> ParentClue = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = "Links") TArray<TObjectPtr<UCaseClueData>> SubClues;
	UPROPERTY(EditDefaultsOnly, Category = "Links") TArray<TObjectPtr<UCaseClueData>> LinkedClues;

	UPROPERTY(EditDefaultsOnly, Category = "Display") FString Name = "";
	UPROPERTY(EditDefaultsOnly, Category = "Display", meta = (AllowedClasses="/Script/Engine.Texture, /Script/Engine.MaterialInterface"))
	TObjectPtr<UObject> NotebookSketch = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = "Display") TArray<FNotebookTextFormat> Description;
};
