// Copyright Epic Games, Inc. All Rights Reserved.

#include "RollingGameGameMode.h"
#include "RollingGameBall.h"

ARollingGameGameMode::ARollingGameGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ARollingGameBall::StaticClass();
}
