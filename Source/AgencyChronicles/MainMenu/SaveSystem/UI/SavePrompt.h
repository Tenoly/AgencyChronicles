// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SaveEntry.h"
#include "Blueprint/UserWidget.h"
#include "SavePrompt.generated.h"

class UButton;
class UTextBlock;
class UEditableTextBox;
class UScrollBox;

UENUM(BlueprintType)
enum ESaveOrLoadType
{
	SLT_Save,
	SLT_Load
};

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API USavePrompt : public UUserWidget {
	GENERATED_BODY()

public:
	void SetType(ESaveOrLoadType type) { Type = type; }

	UFUNCTION(BlueprintCallable, Category = "Type")
	TEnumAsByte<ESaveOrLoadType> GetType() const { return Type; }

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	UFUNCTION(BlueprintCallable)
	void OnValidateButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCancelButtonClicked();

	UPROPERTY(meta=(BindWidget)) TObjectPtr<UScrollBox> SaveEntryList;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UEditableTextBox> PromptText;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> ErrorText;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> SaveButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> CancelButton;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sub Widget Classes")
	TSubclassOf<USaveEntry> SaveEntryClass;

private:
	void OnNewSaveSelected(USaveEntry* saveEntry);
	
	ESaveOrLoadType Type = SLT_Save;

	UPROPERTY()
	TObjectPtr<USaveEntry> SelectedEntry;
};
