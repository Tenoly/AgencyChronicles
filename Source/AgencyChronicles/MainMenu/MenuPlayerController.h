#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MenuPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API AMenuPlayerController : public APlayerController {
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
