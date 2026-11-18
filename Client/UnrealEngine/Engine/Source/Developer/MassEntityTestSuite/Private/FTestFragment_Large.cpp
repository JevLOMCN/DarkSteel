// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 1470b21c0

UScriptStruct * __cdecl FTestFragment_Large::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Large,(UObject *)pUVar1,
                         L"TestFragment_Large");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Large.OuterSingleton;
}

