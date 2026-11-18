// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// StaticStruct @ 146535040

UScriptStruct * __cdecl FSubmixEffectReverbSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectReverbSettings,(UObject *)pUVar1,
                         L"SubmixEffectReverbSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectReverbSettings.OuterSingleton;
}

