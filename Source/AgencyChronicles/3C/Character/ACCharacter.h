#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACCharacter.generated.h"

USTRUCT()
struct FCharacterSaveData {
	GENERATED_BODY()
};

UCLASS()
class AGENCYCHRONICLES_API AACCharacter : public ACharacter {
	GENERATED_BODY()

public:
	AACCharacter();
	virtual void Tick(float DeltaTime) override;

#pragma region Save
	void LoadFromSaveData(FCharacterSaveData saveData);
	FCharacterSaveData GetSaveData() const;
#pragma endregion

	UFUNCTION(BlueprintCallable)
	void SetMaxWalkingSpeed(float speed);

protected:
	virtual void BeginPlay() override;
};
