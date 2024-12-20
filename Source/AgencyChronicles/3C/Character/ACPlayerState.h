#pragma once

#include "CoreMinimal.h"
#include "AgencyChronicles/Items & Inventory/InventoryComponent.h"
#include "AgencyChronicles/Story/StoryManager.h"
#include "GameFramework/PlayerState.h"
#include "ACPlayerState.generated.h"

USTRUCT()
struct FPlayerStateSaveData {
	GENERATED_BODY()
	
	FStoryManagerSaveData StoryManager;
	FInventory Inventory;
};

UCLASS()
class AGENCYCHRONICLES_API AACPlayerState : public APlayerState {
	GENERATED_BODY()

public:
	AACPlayerState();
	
#pragma region Save
	void LoadFromSaveData(FPlayerStateSaveData saveData);
	FPlayerStateSaveData GetSaveData() const;
#pragma endregion

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)	TObjectPtr<UStoryManager> StoryManager;
	UPROPERTY(EditDefaultsOnly) TObjectPtr<UInventoryComponent> InventoryComponent;

protected:
	virtual void BeginPlay() override;
	
};
