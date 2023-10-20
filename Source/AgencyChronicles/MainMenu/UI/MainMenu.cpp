#include "MainMenu.h"

#include "AgencyChronicles/MainMenu/SaveSystem/UI/SavePrompt.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct() {
	Super::NativeConstruct();
	NewGameButton->OnClicked.AddDynamic(this, &UMainMenu::NewGame);
	LoadButton->OnClicked.AddDynamic(this, &UMainMenu::CreateLoadPromptWindow);
}

void UMainMenu::NativeDestruct() {
	Super::NativeDestruct();
	NewGameButton->OnClicked.RemoveDynamic(this, &UMainMenu::NewGame);
	LoadButton->OnClicked.RemoveDynamic(this, &UMainMenu::CreateLoadPromptWindow);
}

void UMainMenu::NewGame() {
	UGameplayStatics::OpenLevel(this, NewGameMapName);
}

void UMainMenu::CreateLoadPromptWindow() {
	USavePrompt* window = Cast<USavePrompt>(CreateWidget(GetOwningPlayer(), SavePromptClass));
	window->SetType(SLT_Load);
	window->AddToViewport();
}
