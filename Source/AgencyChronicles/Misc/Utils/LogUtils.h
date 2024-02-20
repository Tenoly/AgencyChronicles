// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LogUtils.generated.h"

UENUM()
enum ELogCategory {
	LC_Log,
	LC_Warning,
	LC_Error
};

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API ULogUtils : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	static void LogOnScreen(FString msg, ELogCategory category);
	static void UnsetBPValue(FString valueName, FString className);
};
