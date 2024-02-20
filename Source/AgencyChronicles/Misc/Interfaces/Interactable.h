#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable.generated.h"

UINTERFACE()
class UInteractable : public UInterface {
	GENERATED_BODY()
};

class AGENCYCHRONICLES_API IInteractable {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)	void OnFocusStart();
	UFUNCTION(BlueprintNativeEvent)	void OnFocusEnd();
	UFUNCTION(BlueprintNativeEvent)	void OnInteraction();
};
