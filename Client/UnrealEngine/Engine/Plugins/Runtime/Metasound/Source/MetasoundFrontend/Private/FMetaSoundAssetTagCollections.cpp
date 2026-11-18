// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// StaticStruct @ 14ad6acf0

UScriptStruct * __cdecl FMetaSoundAssetTagCollections::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundAssetTagCollections.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetaSoundAssetTagCollections.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundAssetTagCollections,(UObject *)pUVar1,
                         L"MetaSoundAssetTagCollections");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundAssetTagCollections.OuterSingleton;
}

