// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// FToolUIActionChoice @ 142d62a90

FToolUIActionChoice * __thiscall
FToolUIActionChoice::FToolUIActionChoice(FToolUIActionChoice *this,FUIAction *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  
  *(undefined8 *)&(this->Action).TypedValue.ExecuteAction = 0;
  *(undefined8 *)&(this->Action).TypedValue.ExecuteAction.field_0x8 = 0;
  *(undefined4 *)&(this->Action).TypedValue.ExecuteAction.field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this,
             &param_1->ExecuteAction);
  pTVar1 = &(this->Action).TypedValue.CanExecuteAction;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Action).TypedValue.CanExecuteAction.field_0x8 = 0;
  *(undefined4 *)&(this->Action).TypedValue.CanExecuteAction.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_1->CanExecuteAction);
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Action).TypedValue.GetActionCheckState,&param_1->GetActionCheckState);
  pTVar1 = &(this->Action).TypedValue.IsActionVisibleDelegate;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Action).TypedValue.IsActionVisibleDelegate.field_0x8 = 0;
  *(undefined4 *)&(this->Action).TypedValue.IsActionVisibleDelegate.field_0x10 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_1->IsActionVisibleDelegate);
  (this->Action).TypedValue.RepeatMode = param_1->RepeatMode;
  (this->Action).bIsSet = true;
  (this->ToolAction).bIsSet = false;
  (this->DynamicToolAction).bIsSet = false;
  return this;
}

