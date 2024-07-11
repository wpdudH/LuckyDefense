// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuckyDefenseGameMode.h"
#include "LuckyDefenseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuckyDefenseGameMode::ALuckyDefenseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
