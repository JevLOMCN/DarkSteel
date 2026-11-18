// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a86f8a0

UScriptStruct * __cdecl FChooserParameterRandomizeBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterRandomizeBase,(UObject *)pUVar1,
                         L"ChooserParameterRandomizeBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterRandomizeBase.OuterSingleton;
}

// GetValue @ 14a86f9b0

bool __thiscall
FChooserParameterRandomizeBase::GetValue
          (FChooserParameterRandomizeBase *this,FChooserEvaluationContext *param_1,
          FChooserRandomizationContext **param_2)

{
  return false;
}

// IsBound @ 14a86f9c0

bool __thiscall FChooserParameterRandomizeBase::IsBound(FChooserParameterRandomizeBase *this)

{
  return false;
}

