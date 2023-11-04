// Copyright Epic Games, Inc. All Rights Reserved.

#include "Hunt_for_bloodGameMode.h"
#include "Hunt_for_bloodCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHunt_for_bloodGameMode::AHunt_for_bloodGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
