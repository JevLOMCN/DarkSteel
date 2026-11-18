// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// StaticStruct @ 14dac1a10

UScriptStruct * __cdecl FDataflowSkinWeightData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowSkinWeightData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowSkinWeightData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSkinWeightData,(UObject *)pUVar1,
                         L"DataflowSkinWeightData");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowSkinWeightData.OuterSingleton;
}

