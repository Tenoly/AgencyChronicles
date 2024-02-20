#include "CollectableItem.h"

#include "CollectableItemData.h"
#include "InventoryComponent.h"
#include "AgencyChronicles/3C/Character/ACPlayerState.h"
#include "AgencyChronicles/Misc/Utils/StaticsUtils.h"
#include "Components/WidgetComponent.h"

ACollectableItem::ACollectableItem() {
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	RootComponent = Mesh;
	
	Widget = CreateDefaultSubobject<UWidgetComponent>("3DWidget");
	Widget->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

void ACollectableItem::Tick(float deltaTime) {
	Super::Tick(deltaTime);
}

void ACollectableItem::OnConstruction(const FTransform& transform) {
	Super::OnConstruction(transform);

	if (IsValid(Data)) {
		Mesh->SetStaticMesh(Data->Mesh);
	}
}

#pragma region Interactable
void ACollectableItem::OnFocusStart_Implementation() {
	Widget->SetVisibility(true, true);
}

void ACollectableItem::OnFocusEnd_Implementation() {
	Widget->SetVisibility(false, true);
}

void ACollectableItem::OnInteraction_Implementation() {
	Collect();
}
#pragma endregion

void ACollectableItem::BeginPlay() {
	Super::BeginPlay();
}

void ACollectableItem::Collect() {
	UStaticsUtils::GetACPlayerState(this)->InventoryComponent->AddItemToInventory(Data, 1);
	Destroy();
}
