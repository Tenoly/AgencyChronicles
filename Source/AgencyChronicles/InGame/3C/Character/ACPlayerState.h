#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ACPlayerState.generated.h"

USTRUCT()
struct FPlayerStateSaveData {
	GENERATED_BODY()
};

UCLASS()
class AGENCYCHRONICLES_API AACPlayerState : public APlayerState {
	GENERATED_BODY()

public:

#pragma region Save
	void LoadFromSaveData(FPlayerStateSaveData saveData);
	FPlayerStateSaveData GetSaveData() const;
#pragma endregion
};
