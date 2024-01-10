// Copyright Epic Games, Inc. All Rights Reserved.

#include "SolusGameMode.h"
#include "SolusCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASolusGameMode::ASolusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
