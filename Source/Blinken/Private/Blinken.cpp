// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Blinken.h"
#include "BlinkenPrivatePCH.h"
#include "AlienFXController.h"

#define LOCTEXT_NAMESPACE "FBlinkenModule"

void FBlinkenModule::CreateControllers()
{
	controllers.push_back(FAlienFXController::Get());
}

void FBlinkenModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

#ifdef BLINKEN_EXPLICIT
	FAlienFXController::Get()->StartupModule();
#else
	CreateControllers();

	for (const auto i : controllers)
	{
		i->StartupModule();
	}
#endif
}

void FBlinkenModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

#ifdef BLINKEN_EXPLICIT
	FAlienFXController::Get()->ShutdownModule();
#else
	for (const auto i : controllers)
	{
		i->ShutdownModule();
	}
#endif
}

void FBlinkenModule::Tick(float DeltaTime)
{
#ifdef BLINKEN_EXPLICIT
	FAlienFXController::Get()->Tick(DeltaTime);
#else
	for (const auto i : controllers)
	{
		i->Tick(DeltaTime);
	}
#endif
}

void FBlinkenModule::SetGlobalColor(FColor color)
{
	if (!bEnabled)
	{
		return;
	}

#ifdef BLINKEN_EXPLICIT
	FAlienFXController::Get()->SetGlobalColor(color);
#else
	for (const auto i : controllers)
	{
		i->SetGlobalColor(color);
	}
#endif
}

void FBlinkenModule::FlashColor(FColor color, float duration)
{
	if (!bEnabled)
	{
		return;
	}

#ifdef BLINKEN_EXPLICIT
	FAlienFXController::Get()->FlashColor(color, duration);
#else
	for (const auto i : controllers)
	{
		i->FlashColor(color, duration);
	}
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlinkenModule, Blinken)