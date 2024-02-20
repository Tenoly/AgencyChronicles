// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NotebookClue.h"
#include "Blueprint/UserWidget.h"
#include "Components/CanvasPanelSlot.h"
#include "NotebookPage.generated.h"

class UCanvasPanel;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UNotebookPage : public UUserWidget {
	GENERATED_BODY()

public:
	void AddClueToDisplay(UCaseClueData* clueData);

	UPROPERTY() TArray<UCaseClueData*> CluesToDisplay;

protected:
	UPROPERTY(EditDefaultsOnly) TSubclassOf<UNotebookClue> NotebookClueClass;
	UPROPERTY(EditDefaultsOnly) TArray<FAnchorData> ClueSlotData;

	UPROPERTY(meta=(BindWidget)) TObjectPtr<UCanvasPanel> Canvas;
};
