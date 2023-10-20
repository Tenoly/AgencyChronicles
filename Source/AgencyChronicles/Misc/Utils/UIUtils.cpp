// Fill out your copyright notice in the Description page of Project Settings.


#include "UIUtils.h"
#include "Kismet/KismetSystemLibrary.h"

TArray<FString> UUIUtils::GetAllSaveSlotNames()
{
	TArray<FString> saveFiles;
	const FString fileExtension = "*.sav";
	IFileManager::Get().FindFilesRecursive(saveFiles, *UKismetSystemLibrary::GetProjectSavedDirectory(), *fileExtension, true, false, true);
	return saveFiles;
}
