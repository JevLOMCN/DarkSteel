// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a876860

UScriptStruct * __cdecl FChooserParameterBoolBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterBoolBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterBoolBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBoolBase,(UObject *)pUVar1,
                         L"ChooserParameterBoolBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterBoolBase.OuterSingleton;
}

// GetValue @ 14a8768c0

bool __thiscall
FChooserParameterBoolBase::GetValue
          (FChooserParameterBoolBase *this,FChooserEvaluationContext *param_1,bool *param_2)

{
  return false;
}

// SetValue @ 14a8768d0

bool __thiscall
FChooserParameterBoolBase::SetValue
          (FChooserParameterBoolBase *this,FChooserEvaluationContext *param_1,bool param_2)

{
  return false;
}

