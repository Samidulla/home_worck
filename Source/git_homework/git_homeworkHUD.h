// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "git_homeworkHUD.generated.h"

UCLASS()
class Agit_homeworkHUD : public AHUD
{
	GENERATED_BODY()

public:
	Agit_homeworkHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

