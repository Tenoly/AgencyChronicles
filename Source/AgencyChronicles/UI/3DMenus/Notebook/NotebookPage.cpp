// Fill out your copyright notice in the Description page of Project Settings.


#include "NotebookPage.h"

#include "AgencyChronicles/Misc/Utils/LogUtils.h"
#include "Components/CanvasPanel.h"


void UNotebookPage::AddClueToDisplay(UCaseClueData* clueData) {
	const int32 index = CluesToDisplay.Add(clueData);
	
	if (IsValid(NotebookClueClass)) {
		UNotebookClue* clue = Cast<UNotebookClue>(CreateWidget(GetOwningPlayer(), NotebookClueClass));
		UCanvasPanelSlot* slot = Canvas->AddChildToCanvas(clue);
		slot->SetLayout(ClueSlotData[index]);
		clue->SetClueData(clueData);
	}
	else ULogUtils::UnsetBPValue("NotebookClueClass", "NotebookPage");
}
