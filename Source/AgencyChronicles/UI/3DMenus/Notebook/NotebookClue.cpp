// Fill out your copyright notice in the Description page of Project Settings.


#include "NotebookClue.h"

#include "AgencyChronicles/Story/Cases/CaseClueData.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"

void UNotebookClue::SetClueData(UCaseClueData* clue) {
	if (UTexture2D* tex = Cast<UTexture2D>(clue->NotebookSketch)) {
		Sketch->SetBrush(UWidgetBlueprintLibrary::MakeBrushFromTexture(tex));
	}
	else if (UMaterialInterface* mat = Cast<UMaterialInterface>(clue->NotebookSketch)) {
		Sketch->SetBrush(UWidgetBlueprintLibrary::MakeBrushFromMaterial(mat));
	}

	for (FNotebookTextFormat textFormat : clue->Description) {
		UTextBlock* text = WidgetTree->ConstructWidget<UTextBlock>();
		text->SetText(textFormat.Text);
		text->SetRenderTranslation(textFormat.Offset);
		text->SetRenderTransformAngle(textFormat.Angle);
		text->SetRenderShear(FVector2D(textFormat.HShear, 0.f));
		
		FSlateFontInfo font = DefaultNotebookFont;
		font.Size = textFormat.FontSize;
		text->SetFont(font);

		text->SetColorAndOpacity(DefaultFontColor);
		
		Description->AddChildToVerticalBox(text);
	}
}
