// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 1

// StaticStruct @ 1462ecba0

UScriptStruct * __cdecl FDataflowSimulationAsset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationAsset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationAsset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationAsset,(UObject *)pUVar1,
                         L"DataflowSimulationAsset");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationAsset.OuterSingleton;
}

