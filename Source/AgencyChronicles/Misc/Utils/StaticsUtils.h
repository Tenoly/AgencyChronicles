// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StaticsUtils.generated.h"

class AACPlayerState;
class AACCharacter;
class UACGameInstance;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UStaticsUtils : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	static UACGameInstance* GetACGameInstance(const UObject* worldContext);
	static AACCharacter* GetACCharacter(const UObject* worldContext);
	static AACPlayerState* GetACPlayerState(const UObject* worldContext);	
};
