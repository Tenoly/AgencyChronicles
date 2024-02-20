// Fill out your copyright notice in the Description page of Project Settings.


#include "Case.h"

#include "CaseClueData.h"

void UCase::CreateClueInfo(UCaseClueData* clue) {
	FRuntimeClueInfo clueInfo;
	clueInfo.Found = clue->FoundAtStart;
	
	CluesInfo.Add(clue, clueInfo);

	for (UCaseClueData* subClue : clue->SubClues) {
		CreateClueInfo(subClue);
	}
}

TArray<UCaseClueData*> UCase::GetCluesToDisplay() {
	TArray<UCaseClueData*> clues;
	CluesInfo.GetKeys(clues);

	for (int i = 0; i < clues.Num(); ++i) {
		if (CluesInfo.FindRef(clues[i]).Found) continue;

		clues.RemoveAt(i);
		--i;
	}

	return clues;
}

void UCase::LoadFromSaveData(const FCaseSaveData& saveData) {
	Data = saveData.Data;
	CluesInfo = saveData.CluesInfo;
}

FCaseSaveData UCase::GetSaveData() const {
	FCaseSaveData saveData;
	saveData.Data = Data;
	saveData.CluesInfo = CluesInfo;

	return saveData;
}