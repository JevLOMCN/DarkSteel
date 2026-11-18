// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 1

// StaticStruct @ 14f041e70

UScriptStruct * __cdecl FResonanceAudioReverbPluginSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ResonanceAudio();
    Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FResonanceAudioReverbPluginSettings,
                         (UObject *)pUVar1,L"ResonanceAudioReverbPluginSettings");
  }
  return Z_Registration_Info_UScriptStruct_FResonanceAudioReverbPluginSettings.OuterSingleton;
}

