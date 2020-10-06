// Copyright Epic Games, Inc. All Rights Reserved.

#include "GOKartsGameMode.h"
#include "GOKartsPawn.h"
#include "GOKartsHud.h"

AGOKartsGameMode::AGOKartsGameMode()
{
	DefaultPawnClass = AGOKartsPawn::StaticClass();
	HUDClass = AGOKartsHud::StaticClass();
}
