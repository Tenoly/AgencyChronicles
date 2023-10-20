#include "PCMainMenu.h"

void APCMainMenu::BeginPlay() {
	Super::BeginPlay();

	SetShowMouseCursor(true);
	SetInputMode(FInputModeUIOnly());
}
