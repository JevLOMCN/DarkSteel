// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// StaticStruct @ 14f0a7ce0

UScriptStruct * __cdecl FSourceEffectIndividualFilterSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings,
                         (UObject *)pUVar1,L"SourceEffectIndividualFilterSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectIndividualFilterSettings.OuterSingleton;
}

