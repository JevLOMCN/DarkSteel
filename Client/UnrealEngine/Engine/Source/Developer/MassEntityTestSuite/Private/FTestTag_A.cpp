// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 1470b5710

UScriptStruct * __cdecl FTestTag_A::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_A,(UObject *)pUVar1,L"TestTag_A");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_A.OuterSingleton;
}

