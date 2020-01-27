// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "World_CreatorGameMode.h"
#include "World_CreatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWorld_CreatorGameMode::AWorld_CreatorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
