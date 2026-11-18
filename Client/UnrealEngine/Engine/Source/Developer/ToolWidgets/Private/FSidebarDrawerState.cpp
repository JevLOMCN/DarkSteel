// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// StaticStruct @ 142d52610

UScriptStruct * __cdecl FSidebarDrawerState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSidebarDrawerState.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FSidebarDrawerState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSidebarDrawerState,(UObject *)pUVar1,
                         L"SidebarDrawerState");
  }
  return Z_Registration_Info_UScriptStruct_FSidebarDrawerState.OuterSingleton;
}

