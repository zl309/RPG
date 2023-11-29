// Copyright Epic Games, Inc. All Rights Reserved.

#include "MultiRPG_GameGameMode.h"
#include "MultiRPG_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMultiRPG_GameGameMode::AMultiRPG_GameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
