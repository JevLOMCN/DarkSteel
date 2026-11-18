// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// StaticStruct @ 1470b3270

UScriptStruct * __cdecl FTestSharedFragment_Int::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestSharedFragment_Int,(UObject *)pUVar1,
                         L"TestSharedFragment_Int");
  }
  return Z_Registration_Info_UScriptStruct_FTestSharedFragment_Int.OuterSingleton;
}

// FTestSharedFragment_Int @ 1470f57f0

FTestSharedFragment_Int * __thiscall
FTestSharedFragment_Int::FTestSharedFragment_Int(FTestSharedFragment_Int *this,int param_1)

{
  this->Value = param_1;
  return this;
}

