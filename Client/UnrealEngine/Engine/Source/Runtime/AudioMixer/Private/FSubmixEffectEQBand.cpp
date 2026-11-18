// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// StaticStruct @ 146535c40

UScriptStruct * __cdecl FSubmixEffectEQBand::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AudioMixer();
    Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectEQBand,(UObject *)pUVar1,
                         L"SubmixEffectEQBand");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectEQBand.OuterSingleton;
}

