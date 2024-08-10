// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuImagRealmsGameMode.h"
#include "LuImagRealmsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuImagRealmsGameMode::ALuImagRealmsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
