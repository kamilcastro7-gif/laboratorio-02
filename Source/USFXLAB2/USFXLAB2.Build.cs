// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class USFXLAB2 : ModuleRules
{
	public USFXLAB2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
