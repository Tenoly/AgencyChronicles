#include "ACCharacter.h"

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

void AACCharacter::BeginPlay() {
	Super::BeginPlay();
	
}
