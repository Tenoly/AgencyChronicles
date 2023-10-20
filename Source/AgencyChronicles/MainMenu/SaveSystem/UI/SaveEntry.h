// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveEntry.generated.h"

class UButton;
class UTextBlock;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEntryClicked, USaveEntry*, saveEntry);

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API USaveEntry : public UUserWidget {
	GENERATED_BODY()

public:

	FString GetSaveSlotPath() const;
	void SetSaveSlotPath(FString path);
	FOnEntryClicked OnEntryClicked;

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	void BroadcastClick();
	
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> EntryButton;
	UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> SaveName;
	
	FString SaveSlotPath = "";
};
