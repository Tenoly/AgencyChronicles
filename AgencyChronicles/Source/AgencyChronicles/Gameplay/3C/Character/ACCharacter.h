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

protected:
	virtual void BeginPlay() override;
};
