// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// StaticStruct @ 1470b2180

UScriptStruct * __cdecl FTestFragment_Bool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Bool,(UObject *)pUVar1,
                         L"TestFragment_Bool");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Bool.OuterSingleton;
}

// FTestFragment_Bool @ 1470f5760

FTestFragment_Bool * __thiscall
FTestFragment_Bool::FTestFragment_Bool(FTestFragment_Bool *this,bool param_1)

{
  this->bValue = param_1;
  return this;
}

