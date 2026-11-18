// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// Apply @ 149692020

void __thiscall FFloatParameterProxyChange::Apply(FFloatParameterProxyChange *this,UObject *param_1)

{
  UGizmoLocalFloatParameterSource *pUVar1;
  
  pUVar1 = CastChecked<UGizmoLocalFloatParameterSource,UObject>(param_1);
                    /* WARNING: Could not recover jumptable at 0x000149692043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x20))(&pUVar1->_padding_,(this->To).CurrentValue);
  return;
}

// Revert @ 1496bbd40

void __thiscall
FFloatParameterProxyChange::Revert(FFloatParameterProxyChange *this,UObject *param_1)

{
  UGizmoLocalFloatParameterSource *pUVar1;
  
  pUVar1 = CastChecked<UGizmoLocalFloatParameterSource,UObject>(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001496bbd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x20))(&pUVar1->_padding_,(this->From).CurrentValue);
  return;
}

// ToString @ 1496c3270

FString * __thiscall
FFloatParameterProxyChange::ToString
          (FFloatParameterProxyChange *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FFloatParameterProxyChange");
  return __return_storage_ptr__;
}

