// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 1470b5790

UScriptStruct * __cdecl FTestTag_C::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestTag_C,(UObject *)pUVar1,L"TestTag_C");
  }
  return Z_Registration_Info_UScriptStruct_FTestTag_C.OuterSingleton;
}

