// Copyright Epic Games, Inc. All Rights Reserved.

#include "C_arkde_curso_muliGameMode.h"
#include "C_arkde_curso_muliCharacter.h"
#include "UObject/ConstructorHelpers.h"

AC_arkde_curso_muliGameMode::AC_arkde_curso_muliGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
