// Copyright Epic Games, Inc. All Rights Reserved.

#include "git_homeworkGameMode.h"
#include "git_homeworkHUD.h"
#include "git_homeworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

Agit_homeworkGameMode::Agit_homeworkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Agit_homeworkHUD::StaticClass();
}
