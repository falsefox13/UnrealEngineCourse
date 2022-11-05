// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lesson1_try2GameMode.h"
#include "Lesson1_try2Character.h"
#include "UObject/ConstructorHelpers.h"

ALesson1_try2GameMode::ALesson1_try2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
