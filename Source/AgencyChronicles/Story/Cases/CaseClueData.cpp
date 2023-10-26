// Fill out your copyright notice in the Description page of Project Settings.


#include "CaseClueData.h"

#include "CaseData.h"

int UCaseClueData::GetClueDepth() const {
	if (IsRoot)
		return 0;
	
	return ParentClue->GetClueDepth();
}

int UCaseClueData::GetIndexInParent() {
	if (IsRoot)
		return RelatedCase->RootClues.Find(this);

	return ParentClue->SubClues.Find(this);
}


