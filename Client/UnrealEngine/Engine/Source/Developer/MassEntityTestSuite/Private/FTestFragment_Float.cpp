// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// StaticStruct @ 1470b1cb0

UScriptStruct * __cdecl FTestFragment_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MassEntityTestSuite();
    Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestFragment_Float,(UObject *)pUVar1,
                         L"TestFragment_Float");
  }
  return Z_Registration_Info_UScriptStruct_FTestFragment_Float.OuterSingleton;
}

// FTestFragment_Float @ 1470f5770

FTestFragment_Float * __thiscall
FTestFragment_Float::FTestFragment_Float(FTestFragment_Float *this,float param_1)

{
  this->Value = param_1;
  return this;
}

