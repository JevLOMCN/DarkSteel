// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 14707e5d0

UScriptStruct * __cdecl FHarvestTimerFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHarvestTimerFragment,(UObject *)pUVar1,
                         L"HarvestTimerFragment");
  }
  return Z_Registration_Info_UScriptStruct_FHarvestTimerFragment.OuterSingleton;
}

