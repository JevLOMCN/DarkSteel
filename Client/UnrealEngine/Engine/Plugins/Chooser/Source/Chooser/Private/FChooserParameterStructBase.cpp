// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// StaticStruct @ 14a8701a0

UScriptStruct * __cdecl FChooserParameterStructBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterStructBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chooser();
    Z_Registration_Info_UScriptStruct_FChooserParameterStructBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterStructBase,(UObject *)pUVar1,
                         L"ChooserParameterStructBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterStructBase.OuterSingleton;
}

// SetValue @ 14a8701e0

bool __thiscall
FChooserParameterStructBase::SetValue
          (FChooserParameterStructBase *this,FChooserEvaluationContext *param_1,
          FInstancedStruct *param_2)

{
  return false;
}

