// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// StaticStruct @ 14f0a7390

UScriptStruct * __cdecl FSubmixEffectTapDelaySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectTapDelaySettings,(UObject *)pUVar1,
                         L"SubmixEffectTapDelaySettings");
  }
  return Z_Registration_Info_UScriptStruct_FSubmixEffectTapDelaySettings.OuterSingleton;
}

