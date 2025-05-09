using System.Collections.Generic;
using System.IO;
using UnrealBuildTool;

public class iamaiUnreal : ModuleRules {
    public iamaiUnreal( ReadOnlyTargetRules Target ) : base( Target ) {

        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnableExceptions = true;

        PublicDependencyModuleNames.AddRange( new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "AudioCapture",
            "AudioCaptureCore",
            "AudioMixer",
            "AudioMixerCore",
            "SignalProcessing"
        } );

        string ModelsFolder = Path.Combine(PluginDirectory, "Models");
        if ( Directory.Exists( ModelsFolder ) ) {
            string[] ModelFiles = Directory.GetFiles(ModelsFolder, "*", SearchOption.AllDirectories);
            foreach ( string FilePath in ModelFiles ) RuntimeDependencies.Add( FilePath, StagedFileType.NonUFS );
        }

        string PluginBaseDir = Path.GetFullPath(Path.Combine(ModuleDirectory, "../.."));
        string ThirdPartyPath = Path.Combine(PluginBaseDir, "ThirdParty");

        if ( !Directory.Exists( ThirdPartyPath ) ) return;

        if ( Target.Platform == UnrealTargetPlatform.Win64 ) {
            try {
                IEnumerable<string> ThirdPartyDLLs = Directory.EnumerateFiles(ThirdPartyPath, "*.dll", SearchOption.TopDirectoryOnly);
                foreach ( string SourceDllPath in ThirdPartyDLLs ) {
                    string DllName = Path.GetFileName(SourceDllPath);
                    string DestDllPath = Path.Combine("$(TargetOutputDir)", DllName);
                    RuntimeDependencies.Add( DestDllPath, SourceDllPath );
                }
            } catch ( System.Exception ex ) {
                System.Console.WriteLine( $"Error finding DLLs in {ThirdPartyPath}: {ex.Message}" );
            }
        }
    }
}