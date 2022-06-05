// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyWidgetCPPGameMode.h"
#include "MyWidgetCPPHUD.h"
#include "MyWidgetCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyWidgetCPPGameMode::AMyWidgetCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyWidgetCPPHUD::StaticClass();
}
