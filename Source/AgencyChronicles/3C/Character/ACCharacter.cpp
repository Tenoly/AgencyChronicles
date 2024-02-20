#include "ACCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

AACCharacter::AACCharacter() {
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(GetMesh());
	
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
}

void AACCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void AACCharacter::LoadFromSaveData(FCharacterSaveData saveData) {}
FCharacterSaveData AACCharacter::GetSaveData() const { return FCharacterSaveData(); }

void AACCharacter::SetMaxWalkingSpeed(float speed) {
	GetCharacterMovement()->MaxWalkSpeed = speed; 
}

void AACCharacter::SetCameraTransform(FCameraTransform cameraTransform) {
	SpringArm->TargetArmLength = cameraTransform.ArmLength;
	SpringArm->SocketOffset = cameraTransform.SocketOffset;
	Camera->SetRelativeRotation(cameraTransform.CameraRotation);
}

FVector AACCharacter::GetFeetLocation() const {
	return GetActorLocation() + FVector::DownVector * GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
}

void AACCharacter::BeginPlay() {
	Super::BeginPlay();

	SetCameraTransform(DefaultCameraTransform);
}
