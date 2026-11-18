// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// StaticStruct @ 14ad7a420

UScriptStruct * __cdecl FMetasoundFrontendClassEnvironmentVariable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MetasoundFrontend();
    Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable,
                         (UObject *)pUVar1,L"MetasoundFrontendClassEnvironmentVariable");
  }
  return Z_Registration_Info_UScriptStruct_FMetasoundFrontendClassEnvironmentVariable.OuterSingleton
  ;
}

// FMetasoundFrontendClassEnvironmentVariable @ 14ad9a1e0

FMetasoundFrontendClassEnvironmentVariable * __thiscall
FMetasoundFrontendClassEnvironmentVariable::FMetasoundFrontendClassEnvironmentVariable
          (FMetasoundFrontendClassEnvironmentVariable *this,FEnvironmentVariable *param_1)

{
  this->Name = param_1->ParamName;
  (this->TypeName).ComparisonIndex = 0;
  (this->TypeName).Number = 0;
  this->bIsRequired = true;
  return this;
}

