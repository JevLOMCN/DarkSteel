// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a86c980

UScriptStruct * __cdecl FChooserParameterGameplayTagQueryBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagQueryBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagQueryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterGameplayTagQueryBase,
                         (UObject *)pUVar1,L"ChooserParameterGameplayTagQueryBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagQueryBase.OuterSingleton;
}

// SetValue @ 14a86c9c0

bool __thiscall
FChooserParameterGameplayTagQueryBase::SetValue
          (FChooserParameterGameplayTagQueryBase *this,FChooserEvaluationContext *param_1,
          FGameplayTagQuery *param_2)

{
  return false;
}

