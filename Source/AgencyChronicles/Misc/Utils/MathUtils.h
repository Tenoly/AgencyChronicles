// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MathUtils.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UMathUtils : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
public:
	static FVector ClearZAndNormalize(const FVector& in); 
};
