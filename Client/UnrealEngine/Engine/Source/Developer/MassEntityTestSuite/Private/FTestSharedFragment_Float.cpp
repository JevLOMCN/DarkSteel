// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// StaticStruct @ 1470b4300

UScriptStruct * __cdecl FTestSharedFragment_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Float,(UObject *)pUVar1,
                         L"TestSharedFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestSharedFragment_Float.OuterSingleton;
}

