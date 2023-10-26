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