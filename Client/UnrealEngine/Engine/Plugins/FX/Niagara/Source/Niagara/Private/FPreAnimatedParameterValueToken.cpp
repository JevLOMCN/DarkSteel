// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// RestoreState @ 148fcb840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreAnimatedParameterValueToken::RestoreState
          (FPreAnimatedParameterValueToken *this,UObject *param_1,FRestoreStateParams *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FNiagaraVariable *pFVar5;
  FNiagaraVariable local_28;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    param_2 = (FRestoreStateParams *)&pUVar4->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((FRestoreStateParams *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) == param_2)
       ) goto LAB_148fcb87a;
  }
  param_1 = (UObject *)0x0;
LAB_148fcb87a:
  if ((this->PreviousValueData).field0_0x0.TypedValue.ArrayMax == -1) {
                    /* WARNING: Could not recover jumptable at 0x000148fcb89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&param_1[0x22].field_0x10 + 0x18))
              (&param_1[0x22].field_0x10,&this->Parameter,param_2);
    return;
  }
  pFVar5 = FNiagaraVariable::FNiagaraVariable(&local_28,&this->Parameter);
  if ((this->PreviousValueData).field0_0x0.TypedValue.ArrayMax == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraParameterStore::SetParameterData
            ((FNiagaraParameterStore *)&param_1[0x22].field_0x10,
             (uchar *)(this->PreviousValueData).field0_0x0.TypedValue.AllocatorInstance.Data,pFVar5,
             false);
  return;
}

