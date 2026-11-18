// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// StaticStruct @ 142c2dc00

UScriptStruct * __cdecl FToolMenuProfileMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ToolMenus();
    Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuProfileMap,(UObject *)pUVar1,
                         L"ToolMenuProfileMap");
  }
  return Z_Registration_Info_UScriptStruct_FToolMenuProfileMap.OuterSingleton;
}

