// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 1

// StaticStruct @ 148c4ac20

UScriptStruct * __cdecl FAutomatedTestGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AutomationController();
    Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutomatedTestGroup,(UObject *)pUVar1,
                         L"AutomatedTestGroup");
  }
  return Z_Registration_Info_UScriptStruct_FAutomatedTestGroup.OuterSingleton;
}

