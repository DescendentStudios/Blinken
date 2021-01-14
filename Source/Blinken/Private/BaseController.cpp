// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "BaseController.h"
#include "BlinkenPrivatePCH.h"


FBaseController::FBaseController()
{	
}

void FBaseController::SetGlobalColor(const FColor color)
{
	if (!bEnabled)
	{
		return;
	}

	globalColor = color;

	// force set the color now
	SetCurrentColor(globalColor);
}