// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 2

// Get @ 1462f6400

UScriptStruct * __cdecl TBaseStructureBase<FDataflowSimulationProperty,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationProperty,(UObject *)pUVar1,
                         L"DataflowSimulationProperty");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationProperty.OuterSingleton;
}

// Get @ 1462f6440

UScriptStruct * __cdecl TBaseStructureBase<FDataflowSimulationTime,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSimulationTime,(UObject *)pUVar1,
                         L"DataflowSimulationTime");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSimulationTime.OuterSingleton;
}

