// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 1

// StaticStruct @ 14b2fe650

UScriptStruct * __cdecl FMetaSoundAsyncAssetDependencies::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetaSoundAsyncAssetDependencies.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundEngine();
    Z_Registration_Info_UScriptStruct_FMetaSoundAsyncAssetDependencies.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies,
                         (UObject *)pUVar1,L"MetaSoundAsyncAssetDependencies");
  }
  return Z_Registration_Info_UScriptStruct_FMetaSoundAsyncAssetDependencies.OuterSingleton;
}

