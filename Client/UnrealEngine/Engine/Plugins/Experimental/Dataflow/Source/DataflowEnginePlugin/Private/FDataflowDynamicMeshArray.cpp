// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEnginePlugin
// Functions: 1

// StaticStruct @ 14daae7c0

UScriptStruct * __cdecl FDataflowDynamicMeshArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEnginePlugin();
    Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowDynamicMeshArray,(UObject *)pUVar1,
                         L"DataflowDynamicMeshArray");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowDynamicMeshArray.OuterSingleton;
}

