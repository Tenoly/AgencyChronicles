// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UCollectableItemData;

USTRUCT()
struct FInventory
{
	GENERATED_BODY()

	TMap<TObjectPtr<UCollectableItemData>, int> Items;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryChanged, FInventory, Inventory);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class AGENCYCHRONICLES_API UInventoryComponent : public UActorComponent {
	GENERATED_BODY()

public:
	UInventoryComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void AddItemToInventory(UCollectableItemData* item, int amount);
	
#pragma region Save
	void LoadFromSaveData(FInventory saveData);
	FInventory GetSaveData() const;
#pragma endregion
	
	FOnInventoryChanged OnInventoryChanged;
	
protected:
	virtual void BeginPlay() override;

	FInventory Inventory;
};
