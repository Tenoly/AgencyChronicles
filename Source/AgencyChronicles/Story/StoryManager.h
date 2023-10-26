// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Cases/Case.h"
#include "GameFramework/Actor.h"
#include "StoryManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCurrentCaseModified, UCase*, Case);

USTRUCT()
struct FStoryManagerSaveData
{
	GENERATED_BODY()

	FCaseSaveData CurrentCase;
};

UCLASS()
class AGENCYCHRONICLES_API UStoryManager : public UActorComponent {
	GENERATED_BODY()

public:
	UStoryManager();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	void SetCurrentCaseFromData(UCaseData* data);
	
	void SetCurrentCaseFromSave(FCaseSaveData saveData);
	
	void SetCurrentCase(UCase* newCase);
	
	UCase* GetCurrentCase() const;

#pragma region Save
	void LoadFromSaveData(FStoryManagerSaveData saveData);
	FStoryManagerSaveData GetSaveData() const;
#pragma endregion

	FOnCurrentCaseModified OnCurrentCaseModified;

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UCase> CurrentCase = nullptr;	
};
