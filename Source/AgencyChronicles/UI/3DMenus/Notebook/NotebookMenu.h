// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NotebookMenu.generated.h"

class UCase;
class UNotebookPage;
class UWidgetSwitcher;
class UImage;
class UCaseClueData;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UNotebookMenu : public UUserWidget {
	GENERATED_BODY()

public:
	UPROPERTY() TArray<UCaseClueData*> CluesToDisplay;
	UPROPERTY(EditDefaultsOnly) TSubclassOf<UNotebookPage> NotebookPageClass;

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta=(BindWidget)) TObjectPtr<UImage> BackgroundImage;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UWidgetSwitcher> Tabs;

	// needs tab if nb clues > 4
	// intermediate class ?
	// need bgimage bind
};
