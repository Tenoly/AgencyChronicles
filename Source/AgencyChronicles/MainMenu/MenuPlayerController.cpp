#include "MenuPlayerController.h"

void AMenuPlayerController::BeginPlay() {
	Super::BeginPlay();

	SetShowMouseCursor(true);
	SetInputMode(FInputModeUIOnly());
}
