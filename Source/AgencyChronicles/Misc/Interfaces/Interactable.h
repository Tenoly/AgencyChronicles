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
	UFUNCTION(BlueprintNativeEvent)	virtual void OnFocusStart();
	UFUNCTION(BlueprintNativeEvent)	virtual void OnFocusEnd();
	UFUNCTION(BlueprintNativeEvent)	virtual void OnInteraction();
};
