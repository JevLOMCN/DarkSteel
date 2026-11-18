// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// StaticStruct @ 142524e60

UScriptStruct * __cdecl FStyleTheme::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStyleTheme.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FStyleTheme.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStyleTheme,(UObject *)pUVar1,L"StyleTheme");
  }
  return Z_Registration_Info_UScriptStruct_FStyleTheme.OuterSingleton;
}

