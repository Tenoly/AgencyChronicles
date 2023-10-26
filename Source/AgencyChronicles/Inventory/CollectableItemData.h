// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CollectableItemData.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UCollectableItemData : public UPrimaryDataAsset {
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Display Info")
	FString DisplayName = "";

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Display Info", meta = (AllowedClasses="/Script/Engine.Texture, /Script/Engine.MaterialInterface"))
	TObjectPtr<UObject> Icon = nullptr;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Display Info")
	TObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Display Info", DisplayName = "3DUIOffset")
	FVector UIOffset;
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Container")
	bool IsContainer = false;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Container", meta=(EditCondition = "IsContainer", EditConditionHides))
	TArray<TObjectPtr<UObject>> ObjectsInContainer;
};
