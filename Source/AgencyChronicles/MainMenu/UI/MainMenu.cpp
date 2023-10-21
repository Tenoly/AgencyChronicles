#include "MainMenu.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UMainMenu::NativeConstruct() {
	Super::NativeConstruct();
	NewGameButton->OnClicked.AddDynamic(this, &UMainMenu::NewGame);
	LoadButton->OnClicked.AddDynamic(this, &UMainMenu::CreateLoadPromptWindow);
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::Quit);
}

void UMainMenu::NativeDestruct() {
	Super::NativeDestruct();
	NewGameButton->OnClicked.RemoveDynamic(this, &UMainMenu::NewGame);
	LoadButton->OnClicked.RemoveDynamic(this, &UMainMenu::CreateLoadPromptWindow);
	QuitButton->OnClicked.RemoveDynamic(this, &UMainMenu::Quit);
}

void UMainMenu::NewGame() {
	UGameplayStatics::OpenLevel(this, NewGameMapName);
}

void UMainMenu::CreateLoadPromptWindow() {
	USavePrompt* window = Cast<USavePrompt>(CreateWidget(GetOwningPlayer(), SavePromptClass));
	window->SetType(SLT_Load);
	window->AddToViewport();
}

void UMainMenu::Quit() {
	UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
}
