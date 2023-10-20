// Fill out your copyright notice in the Description page of Project Settings.


#include "GMMainMenu.h"
#include "Kismet/GameplayStatics.h"

void AGMMainMenu::BeginPlay() {
	Super::BeginPlay();

	MainMenu = CreateWidget<UMainMenu>(UGameplayStatics::GetPlayerController(this, 0), MainMenuClass);
	MainMenu->AddToViewport();
}
