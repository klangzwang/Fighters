// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Fighters : ModuleRules
{
	public Fighters(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	    bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicIncludePaths.AddRange(
			new string[]
			{
				"Fighters",
				"Fighters/Animation",
				"Fighters/Character",
				"Fighters/Component",
				"Fighters/Controller",
				"Fighters/State",
				"Fighters/Core",
				"Fighters/Stage",
				"Fighters/UI"
            }
			);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"EnhancedInput",
				"InputSystem",
				"MovieScene",
				"LevelSequence",
				"PropertyPath",
				"Slate",
				"SlateCore",
				"AIModule",
				"UMG"
			}
			);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Json",
				"CommonUI",
				"CommonInput",
				"GameplayTags",
				"CinematicCamera"
			}
			);
	}
}
