// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"


UInventoryComponent::UInventoryComponent() {
	PrimaryComponentTick.bCanEverTick = true;
}

void UInventoryComponent::TickComponent(float deltaTime, ELevelTick tickType, FActorComponentTickFunction* thisTickFunction) {
	Super::TickComponent(deltaTime, tickType, thisTickFunction);
}

void UInventoryComponent::AddItemToInventory(UCollectableItemData* item, int amount) {
	const int currentAmount = Inventory.Items.FindOrAdd(item, 0);
	Inventory.Items.Add(item, currentAmount + amount);

	OnInventoryChanged.Broadcast(Inventory);
}

void UInventoryComponent::LoadFromSaveData(FInventory saveData) {
	Inventory = saveData;
}

FInventory UInventoryComponent::GetSaveData() const {
	return Inventory;
}

void UInventoryComponent::BeginPlay() {
	Super::BeginPlay();
}
