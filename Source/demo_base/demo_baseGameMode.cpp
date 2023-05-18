// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo_baseGameMode.h"
#include "demo_baseCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ademo_baseGameMode::Ademo_baseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
