// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticsUtils.h"

#include "AgencyChronicles/3C/Character/ACCharacter.h"
#include "AgencyChronicles/3C/Character/ACPlayerState.h"
#include "AgencyChronicles/SaveSystem/ACGameInstance.h"
#include "Kismet/GameplayStatics.h"

UACGameInstance* UStaticsUtils::GetACGameInstance(const UObject* worldContext) {
	return Cast<UACGameInstance>(UGameplayStatics::GetGameInstance(worldContext));
}

AACCharacter* UStaticsUtils::GetACCharacter(const UObject* worldContext) {
	return Cast<AACCharacter>(UGameplayStatics::GetPlayerCharacter(worldContext, 0));
}

AACPlayerState* UStaticsUtils::GetACPlayerState(const UObject* worldContext) {
	return Cast<AACPlayerState>(UGameplayStatics::GetPlayerState(worldContext, 0));
}
