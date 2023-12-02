#pragma once

#include "CoreMinimal.h"
#include "AgencyChronicles/Misc/Interfaces/Interactable.h"
#include "GameFramework/Actor.h"
#include "CollectableItem.generated.h"

class UCollectableItemData;
class UWidgetComponent;

UCLASS()
class AGENCYCHRONICLES_API ACollectableItem : public AActor, public IInteractable {
	GENERATED_BODY()

public:
	ACollectableItem();
	virtual void Tick(float deltaTime) override;
	virtual void OnConstruction(const FTransform& transform) override;

#pragma region Interactable
	virtual void OnFocusStart() override;
	virtual void OnFocusEnd() override;
	virtual void OnInteraction() override;
#pragma endregion

	UPROPERTY()	TObjectPtr<UStaticMeshComponent> Mesh = nullptr;
	UPROPERTY()	TObjectPtr<UWidgetComponent> Widget = nullptr;
	UPROPERTY()	TObjectPtr<UCollectableItemData> Data = nullptr;

protected:
	virtual void BeginPlay() override;
	void Collect();
};