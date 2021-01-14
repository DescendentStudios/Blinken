// Copyright (C) 2016 Descendent Studios, Inc.

using UnrealBuildTool;
using System.IO;

public class Blinken : ModuleRules
{
	public Blinken(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange( new string[] { "Engine", "Core", "InputCore", "CoreUObject" } ); 

		if(Target.Platform == UnrealTargetPlatform.Win32 || Target.Platform == UnrealTargetPlatform.Win64)
		{
			// AlienFX SDK
			PublicIncludePaths.Add( Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/AlienFXSDK/includes") ) );
            RuntimeDependencies.Add(
				new RuntimeDependency(Path.Combine(ModuleDirectory, "../../ThirdParty/AlienFXSDK/dll", Target.Platform.ToString(), "LightFX.dll"))
				);
		}
	}
}
