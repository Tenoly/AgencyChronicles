// Fill out your copyright notice in the Description page of Project Settings.


#include "SavePrompt.h"

#include "AgencyChronicles/MainMenu/SaveSystem/ACGameInstance.h"
#include "AgencyChronicles/Misc/Utils/StaticsUtils.h"
#include "AgencyChronicles/Misc/Utils/UIUtils.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/TextBlock.h"
#include "Kismet/BlueprintPathsLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetTextLibrary.h"

void USavePrompt::NativeConstruct()
{
	Super::NativeConstruct();
	TArray<FString> saveFiles = UUIUtils::GetAllSaveSlotNames();

	for (const FString path : saveFiles) {
		USaveEntry* entry = Cast<USaveEntry>(CreateWidget(GetOwningPlayer(), SaveEntryClass));
		entry->SetSaveSlotPath(path);

		if (SaveEntryList)
		{
			SaveEntryList->AddChild(entry);
			Cast<UScrollBoxSlot>(SaveEntryList->Slot)->SetHorizontalAlignment(HAlign_Fill);
			entry->OnEntryClicked.AddDynamic(this, &USavePrompt::OnNewSaveSelected);
		}
	}

	SaveButton->OnClicked.AddDynamic(this, &USavePrompt::OnValidateButtonClicked);
	CancelButton->OnClicked.AddDynamic(this, &USavePrompt::OnCancelButtonClicked);
}

void USavePrompt::NativeDestruct() {
	Super::NativeDestruct();
	SaveButton->OnClicked.RemoveDynamic(this, &USavePrompt::OnValidateButtonClicked);
	CancelButton->OnClicked.RemoveDynamic(this, &USavePrompt::OnCancelButtonClicked);
}

void USavePrompt::OnValidateButtonClicked()
{
	const FString promptString = PromptText->GetText().ToString();
	
	const bool loadNotFind = !UGameplayStatics::DoesSaveGameExist(promptString, 0) && Type == SLT_Load;
	const bool textEmpty = promptString.IsEmpty();

	if (loadNotFind || textEmpty)
	{
		ErrorText->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		ErrorText->SetVisibility(ESlateVisibility::Collapsed);
		
		UACGameInstance* gameInstance = UStaticsUtils::GetACGameInstance(this);
		if (Type == SLT_Save)
		{
			gameInstance->SaveToSlot(promptString);
		}
		else
		{
			gameInstance->LoadSaveFromSlot(promptString);
		}
		
		RemoveFromParent();
	}
}

void USavePrompt::OnCancelButtonClicked()
{
	RemoveFromParent();
}

void USavePrompt::OnNewSaveSelected(USaveEntry* saveEntry)
{
	SelectedEntry = saveEntry;
	if (PromptText)
	{
		PromptText->SetText(UKismetTextLibrary::Conv_StringToText(UBlueprintPathsLibrary::GetBaseFilename(saveEntry->GetSaveSlotPath(), true)));
	}
}