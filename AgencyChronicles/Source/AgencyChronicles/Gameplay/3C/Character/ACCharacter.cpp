#include "ACCharacter.h"

AACCharacter::AACCharacter() {
	PrimaryActorTick.bCanEverTick = true;
}

void AACCharacter::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void AACCharacter::BeginPlay() {
	Super::BeginPlay();
	
}