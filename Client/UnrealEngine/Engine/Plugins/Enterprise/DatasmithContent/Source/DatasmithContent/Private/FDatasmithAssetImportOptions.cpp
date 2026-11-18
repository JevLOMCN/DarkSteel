// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 1

// StaticStruct @ 14e2ead80

UScriptStruct * __cdecl FDatasmithAssetImportOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithAssetImportOptions,(UObject *)pUVar1,
                         L"DatasmithAssetImportOptions");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithAssetImportOptions.OuterSingleton;
}

