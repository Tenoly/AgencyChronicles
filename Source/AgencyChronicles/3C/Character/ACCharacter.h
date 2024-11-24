#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

USTRUCT(BlueprintType)
struct FCameraTransform {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmLength = 500.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SocketOffset = FVector(0.f, 0.f, 500.f);
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Roll = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pitch = -45.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float Yaw = 0.f;
};

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

	UFUNCTION(BlueprintCallable) void SetMaxWalkingSpeed(float speed);
	UFUNCTION(BlueprintCallable) void SetCameraTransform(FCameraTransform cameraTransform);
	UFUNCTION(BlueprintCallable) void ResetCameraTransform();

	FVector GetFeetLocation() const;
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere) TObjectPtr<USpringArmComponent> SpringArm;
	UPROPERTY(EditAnywhere) TObjectPtr<UCameraComponent> Camera;

	UPROPERTY(EditAnywhere, Category="ACCharacter|Camera") FCameraTransform DefaultCameraTransform;
	UPROPERTY(EditAnywhere, Category="ACCharacter|Camera") FCameraTransform NotebookCameraTransform;
};
