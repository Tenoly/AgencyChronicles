// Fill out your copyright notice in the Description page of Project Settings.


#include "LogUtils.h"
void ULogUtils::LogOnScreen(FString msg, ELogCategory category) {
	FColor color;
	switch (category) {
		case LC_Log: color = FColor::White;
		case LC_Warning: color = FColor::Orange;
		case LC_Error: color = FColor::Red;
		default:;
	}
	GEngine->AddOnScreenDebugMessage(-1, 10.f, color, msg);
}

void ULogUtils::UnsetBPValue(FString valueName, FString className) {
	FString msg = "Value ";
	msg.Append(valueName);
	msg.Append(" is not set in ");
	msg.Append(className);
	msg.Append("BP.");

	LogOnScreen(msg, LC_Error);
}
