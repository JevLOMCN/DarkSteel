// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UObjectPlugin
// Functions: 1

// StaticStruct @ 14e2cc6d0

UScriptStruct * __cdecl FMyPluginStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMyPluginStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UObjectPlugin();
    Z_Registration_Info_UScriptStruct_FMyPluginStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMyPluginStruct,(UObject *)pUVar1,
                         L"MyPluginStruct");
  }
  return Z_Registration_Info_UScriptStruct_FMyPluginStruct.OuterSingleton;
}

