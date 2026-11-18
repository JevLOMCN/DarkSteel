// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 3

// StaticStruct @ 14a86b740

UScriptStruct * __cdecl FChooserParameterEnumBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterEnumBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterEnumBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterEnumBase,(UObject *)pUVar1,
                         L"ChooserParameterEnumBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterEnumBase.OuterSingleton;
}

// GetValue @ 14a86b780

bool __thiscall
FChooserParameterEnumBase::GetValue
          (FChooserParameterEnumBase *this,FChooserEvaluationContext *param_1,uchar *param_2)

{
  return false;
}

// SetValue @ 14a86b790

bool __thiscall
FChooserParameterEnumBase::SetValue
          (FChooserParameterEnumBase *this,FChooserEvaluationContext *param_1,uchar param_2)

{
  return false;
}

