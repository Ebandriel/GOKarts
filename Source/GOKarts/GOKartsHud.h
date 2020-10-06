// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "GOKartsHud.generated.h"


UCLASS(config = Game)
class AGOKartsHud : public AHUD
{
	GENERATED_BODY()

public:
	AGOKartsHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
