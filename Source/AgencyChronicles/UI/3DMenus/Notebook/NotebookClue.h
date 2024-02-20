// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NotebookClue.generated.h"

class UVerticalBox;
class UCaseClueData;
class UImage;
/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API UNotebookClue : public UUserWidget {
	GENERATED_BODY()

public:
	void SetClueData(UCaseClueData* clue);
	
	UPROPERTY() TObjectPtr<UCaseClueData> ClueData;
	

protected:
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UImage> Sketch;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UVerticalBox> Description;

	UPROPERTY(EditAnywhere) FSlateFontInfo DefaultNotebookFont;
	UPROPERTY(EditAnywhere) FSlateColor DefaultFontColor;
};
