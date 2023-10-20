// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UIUtils.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UUIUtils : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	static TArray<FString> GetAllSaveSlotNames();
};
