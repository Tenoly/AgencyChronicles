#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PCMainMenu.generated.h"

/**
 * 
 */
UCLASS()
class AGENCYCHRONICLES_API APCMainMenu : public APlayerController {
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};
