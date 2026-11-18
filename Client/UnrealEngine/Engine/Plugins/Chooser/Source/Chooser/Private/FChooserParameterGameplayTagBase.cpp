// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a86c8b0

UScriptStruct * __cdecl FChooserParameterGameplayTagBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterGameplayTagBase,
                         (UObject *)pUVar1,L"ChooserParameterGameplayTagBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterGameplayTagBase.OuterSingleton;
}

// GetValue @ 14a86c8f0

bool __thiscall
FChooserParameterGameplayTagBase::GetValue
          (FChooserParameterGameplayTagBase *this,FChooserEvaluationContext *param_1,
          FGameplayTagContainer **param_2)

{
  return false;
}

