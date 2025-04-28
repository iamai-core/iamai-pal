using System.IO;
using UnrealBuildTool;

public class iamaiUnreal : ModuleRules {
    public iamaiUnreal( ReadOnlyTargetRules Target ) : base( Target ) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;
        // PublicDefinitions.Add( "PLATFORM_EXCEPTIONS_DISABLED=0" );

        PublicDependencyModuleNames.AddRange( new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "AudioCapture",
            "AudioCaptureCore",
            "AudioMixer",
            "AudioMixerCore"
        } );

        PrivateDependencyModuleNames.AddRange( new string[] {
            "Slate",
            "SlateCore",
            "AudioMixer"
        } );
    }
}