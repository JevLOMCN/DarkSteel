// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a86bf20

UScriptStruct * __cdecl FChooserParameterFloatBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterFloatBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterFloatBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterFloatBase,(UObject *)pUVar1,
                         L"ChooserParameterFloatBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterFloatBase.OuterSingleton;
}

// GetValue @ 14a86bf60

bool __thiscall
FChooserParameterFloatBase::GetValue
          (FChooserParameterFloatBase *this,FChooserEvaluationContext *param_1,double *param_2)

{
  return false;
}

// SetValue @ 14a86bf70

bool __thiscall
FChooserParameterFloatBase::SetValue
          (FChooserParameterFloatBase *this,FChooserEvaluationContext *param_1,double param_2)

{
  return false;
}

