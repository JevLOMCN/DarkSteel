// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// StaticStruct @ 14f0a7d20

UScriptStruct * __cdecl FSourceEffectMotionFilterModulationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings,
                         (UObject *)pUVar1,L"SourceEffectMotionFilterModulationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterModulationSettings.
         OuterSingleton;
}

