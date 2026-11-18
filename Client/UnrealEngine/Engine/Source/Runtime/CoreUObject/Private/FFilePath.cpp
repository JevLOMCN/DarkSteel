// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// StaticStruct @ 1421f28f0

UScriptStruct * __cdecl FFilePath::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilePath.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FFilePath.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilePath,(UObject *)pUVar1,L"FilePath");
  }
  return Z_Registration_Info_UScriptStruct_FFilePath.OuterSingleton;
}

