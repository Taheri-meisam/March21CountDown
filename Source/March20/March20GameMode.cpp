// Copyright Epic Games, Inc. All Rights Reserved.

#include "March20GameMode.h"
#include "March20Character.h"
#include "UObject/ConstructorHelpers.h"

AMarch20GameMode::AMarch20GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
