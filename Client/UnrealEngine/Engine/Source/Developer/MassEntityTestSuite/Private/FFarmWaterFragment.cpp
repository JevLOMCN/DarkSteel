// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 14707cdd0

UScriptStruct * __cdecl FFarmWaterFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFarmWaterFragment,(UObject *)pUVar1,
                         L"FarmWaterFragment");
  }
  return Z_Registration_Info_UScriptStruct_FFarmWaterFragment.OuterSingleton;
}

