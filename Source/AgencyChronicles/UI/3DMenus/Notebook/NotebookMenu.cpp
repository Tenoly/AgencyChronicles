// Fill out your copyright notice in the Description page of Project Settings.


#include "NotebookMenu.h"

#include "NotebookPage.h"
#include "AgencyChronicles/Misc/Utils/LogUtils.h"
#include "Components/WidgetSwitcher.h"

void UNotebookMenu::NativeConstruct() {
	Super::NativeConstruct();

	if (IsValid(NotebookPageClass)) {
		const int nbTabs = 1 + CluesToDisplay.Num()/4;
		for (int i = 0; i < nbTabs; ++i) {
			UNotebookPage* page = Cast<UNotebookPage>(CreateWidget(GetOwningPlayer(), NotebookPageClass));
			Tabs->AddChild(page);
			for (int j = i*4; j < (i+1)*4 && j < CluesToDisplay.Num(); ++j) {
				page->AddClueToDisplay(CluesToDisplay[j]);
			}
		}
	}
	else ULogUtils::UnsetBPValue("NotebookPageClass", "NotebookMenu");
}
