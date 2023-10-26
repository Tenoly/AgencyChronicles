#include "ACPlayerState.h"

#include "AgencyChronicles/Inventory/InventoryComponent.h"
#include "AgencyChronicles/Misc/Utils/StaticsUtils.h"
#include "AgencyChronicles/SaveSystem/ACGameInstance.h"
#include "AgencyChronicles/SaveSystem/Save.h"
#include "AgencyChronicles/Story/StoryManager.h"

AACPlayerState::AACPlayerState() {
	StoryManager = CreateDefaultSubobject<UStoryManager>("StoryManager");
	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>("Inventory");
}

void AACPlayerState::LoadFromSaveData(FPlayerStateSaveData saveData) {
	StoryManager->LoadFromSaveData(saveData.StoryManager);
	InventoryComponent->LoadFromSaveData(saveData.Inventory);
}

FPlayerStateSaveData AACPlayerState::GetSaveData() const {
	FPlayerStateSaveData saveData;
	saveData.StoryManager = StoryManager->GetSaveData();
	saveData.Inventory = InventoryComponent->GetSaveData();

	return saveData;
}

void AACPlayerState::BeginPlay() {
	Super::BeginPlay();

	const USave* saveGame = UStaticsUtils::GetACGameInstance(GetWorld())->LoadedSaveGame;
	if (IsValid(saveGame)) {
		LoadFromSaveData(saveGame->PlayerStateSaveData);
	}
}
