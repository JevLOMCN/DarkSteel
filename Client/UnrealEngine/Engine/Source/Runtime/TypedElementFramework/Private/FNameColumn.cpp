// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 1

// StaticStruct @ 142c7b740

UScriptStruct * __cdecl FNameColumn::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNameColumn.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FNameColumn.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNameColumn,(UObject *)pUVar1,L"NameColumn");
  }
  return Z_Registration_Info_UScriptStruct_FNameColumn.OuterSingleton;
}

