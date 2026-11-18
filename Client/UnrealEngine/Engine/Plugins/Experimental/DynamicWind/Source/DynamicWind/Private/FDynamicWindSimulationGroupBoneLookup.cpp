// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// StaticStruct @ 14da49400

UScriptStruct * __cdecl FDynamicWindSimulationGroupBoneLookup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DynamicWind();
    Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDynamicWindSimulationGroupBoneLookup,
                         (UObject *)pUVar1,L"DynamicWindSimulationGroupBoneLookup");
  }
  return Z_Registration_Info_UScriptStruct_FDynamicWindSimulationGroupBoneLookup.OuterSingleton;
}

