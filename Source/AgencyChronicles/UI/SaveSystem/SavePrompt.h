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
	void SetType(ESaveOrLoadType type);
	TEnumAsByte<ESaveOrLoadType> GetType() const { return Type; }

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	UFUNCTION()	void OnValidateButtonClicked();
	UFUNCTION()	void OnCancelButtonClicked();

	UPROPERTY(meta=(BindWidget)) TObjectPtr<UScrollBox> SaveEntryList;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> Title;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UEditableTextBox> PromptText;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> ErrorText;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> ValidationButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> ValidationText;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> CancelButton;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Sub Widget Classes")
	TSubclassOf<USaveEntry> SaveEntryClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText SaveTitle;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText LoadTitle;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText SaveButtonText;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText LoadButtonText;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText SaveErrorText;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Texts") FText LoadErrorText;

private:
	void OnNewSaveSelected(USaveEntry* saveEntry);
	
	UPROPERTY() TEnumAsByte<ESaveOrLoadType> Type = SLT_Save;
	UPROPERTY()	TObjectPtr<USaveEntry> SelectedEntry;
};
