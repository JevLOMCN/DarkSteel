// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// Get @ 14dad50c0

UScriptStruct * __cdecl TBaseStructureBase<FCollectionAttributeKey,1>::Get(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEnginePlugin();
    Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionAttributeKey,(UObject *)pUVar1,
                         L"CollectionAttributeKey");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionAttributeKey.OuterSingleton;
}

