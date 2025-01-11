// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechSummit2025GameMode.h"
#include "TechSummit2025Character.h"
#include "UObject/ConstructorHelpers.h"

ATechSummit2025GameMode::ATechSummit2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
