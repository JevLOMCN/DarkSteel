// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StaticStruct @ 14a897040

UScriptStruct * __cdecl FChooserParameterPoseHistoryBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterPoseHistoryBase,
                         (UObject *)pUVar1,L"ChooserParameterPoseHistoryBase");
  }
  return Z_Registration_Info_UScriptStruct_FChooserParameterPoseHistoryBase.OuterSingleton;
}

// GetValue @ 14a897080

bool __thiscall
FChooserParameterPoseHistoryBase::GetValue
          (FChooserParameterPoseHistoryBase *this,FChooserEvaluationContext *param_1,
          FPoseHistoryReference *param_2)

{
  return false;
}

// IsBound @ 14a897090

bool __thiscall FChooserParameterPoseHistoryBase::IsBound(FChooserParameterPoseHistoryBase *this)

{
  return false;
}

