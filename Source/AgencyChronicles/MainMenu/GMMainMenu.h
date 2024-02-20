// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgencyChronicles/UI/MainMenu/MainMenu.h"
#include "GameFramework/GameModeBase.h"
#include "GMMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API AGMMainMenu : public AGameModeBase {
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UMainMenu> MainMenuClass;

	UPROPERTY()
	TObjectPtr<UMainMenu> MainMenu;
};
