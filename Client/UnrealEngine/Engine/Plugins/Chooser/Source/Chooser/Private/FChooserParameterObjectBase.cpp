// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 4

// StaticStruct @ 14a86d350

UScriptStruct * __cdecl FChooserParameterObjectBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterObjectBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterObjectBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterObjectBase,(UObject *)pUVar1,
                         L"ChooserParameterObjectBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterObjectBase.OuterSingleton;
}

// GetValue @ 14a86d390

bool __thiscall
FChooserParameterObjectBase::GetValue
          (FChooserParameterObjectBase *this,FChooserEvaluationContext *param_1,
          FSoftObjectPath *param_2)

{
  return false;
}

// GetValue @ 14a86d3a0

bool __thiscall
FChooserParameterObjectBase::GetValue
          (FChooserParameterObjectBase *this,FChooserEvaluationContext *param_1,UObject **param_2)

{
  return false;
}

// SetValue @ 14a86d3b0

bool __thiscall
FChooserParameterObjectBase::SetValue
          (FChooserParameterObjectBase *this,FChooserEvaluationContext *param_1,UObject *param_2)

{
  return false;
}

