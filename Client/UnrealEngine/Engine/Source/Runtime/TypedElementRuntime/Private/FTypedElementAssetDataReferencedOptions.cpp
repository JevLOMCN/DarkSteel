// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementRuntime
// Functions: 1

// StaticStruct @ 14453b900

UScriptStruct * __cdecl FTypedElementAssetDataReferencedOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTypedElementAssetDataReferencedOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementRuntime();
    Z_Registration_Info_UScriptStruct_FTypedElementAssetDataReferencedOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementAssetDataReferencedOptions,
                         (UObject *)pUVar1,L"TypedElementAssetDataReferencedOptions");
  }
  return Z_Registration_Info_UScriptStruct_FTypedElementAssetDataReferencedOptions.OuterSingleton;
}

