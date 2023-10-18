#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACCharacter.generated.h"

UCLASS()
class AGENCYCHRONICLES_API AACCharacter : public ACharacter {
	GENERATED_BODY()

public:
	AACCharacter();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetMaxWalkingSpeed(float speed);

protected:
	virtual void BeginPlay() override;
};
