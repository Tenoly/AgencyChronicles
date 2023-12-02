#include "ACCharacter.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

AACCharacter::AACCharacter() {
	PrimaryActorTick.bCanEverTick = true;
}

void AACCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void AACCharacter::LoadFromSaveData(FCharacterSaveData saveData) {}
FCharacterSaveData AACCharacter::GetSaveData() const { return FCharacterSaveData(); }

void AACCharacter::SetMaxWalkingSpeed(float speed) {
	GetCharacterMovement()->MaxWalkSpeed = speed; 
}

FVector AACCharacter::GetFeetLocation() const {
	return GetActorLocation() + FVector::DownVector * GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
}

void AACCharacter::BeginPlay() {
	Super::BeginPlay();
	
}
