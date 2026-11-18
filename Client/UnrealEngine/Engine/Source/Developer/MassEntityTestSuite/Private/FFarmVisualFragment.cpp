// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 14707ddf0

UScriptStruct * __cdecl FFarmVisualFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmVisualFragment,(UObject *)pUVar1,
                         L"FarmVisualFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmVisualFragment.OuterSingleton;
}

