// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// StaticStruct @ 1465343b0

UScriptStruct * __cdecl FSubmixEffectDynamicProcessorFilterSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings,
                         (UObject *)pUVar1,L"SubmixEffectDynamicProcessorFilterSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings.
         OuterSingleton;
}

