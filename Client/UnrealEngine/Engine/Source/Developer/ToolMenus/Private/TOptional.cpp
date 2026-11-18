// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 2

// operator= @ 142c3cd20

TOptional<FToolUIAction> * __thiscall
TOptional<FToolUIAction>::operator=
          (TOptional<FToolUIAction> *this,TOptional<FToolUIAction> *param_1)

{
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        FToolUIAction::~FToolUIAction(&this->TypedValue);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TypedValue).CanExecuteAction,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->TypedValue).CanExecuteAction);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(this->TypedValue).GetActionCheckState,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->TypedValue).GetActionCheckState);
      TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(this->TypedValue).IsActionVisibleDelegate,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)
                 &(param_1->TypedValue).IsActionVisibleDelegate);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      FToolUIAction::~FToolUIAction(&this->TypedValue);
      this->bIsSet = false;
    }
  }
  return this;
}

// operator= @ 142c3cdb0

TOptional<FToolUIAction> * __thiscall
TOptional<FToolUIAction>::operator=
          (TOptional<FToolUIAction> *this,TOptional<FToolUIAction> *param_1)

{
  if (param_1 != this) {
    if (param_1->bIsSet != false) {
      if (this->bIsSet != false) {
        FToolUIAction::~FToolUIAction(&this->TypedValue);
      }
      TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy> *)
                 this,(TDelegate<void___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                       *)param_1);
      TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                (&(this->TypedValue).CanExecuteAction,&(param_1->TypedValue).CanExecuteAction);
      TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<enum_ECheckBoxState___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                (&(this->TypedValue).GetActionCheckState,&(param_1->TypedValue).GetActionCheckState)
      ;
      TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>::
      TDelegate<bool___cdecl(FToolMenuContext_const_&),FDefaultDelegateUserPolicy>
                (&(this->TypedValue).IsActionVisibleDelegate,
                 &(param_1->TypedValue).IsActionVisibleDelegate);
      this->bIsSet = true;
      return this;
    }
    if (this->bIsSet != false) {
      FToolUIAction::~FToolUIAction(&this->TypedValue);
      this->bIsSet = false;
    }
  }
  return this;
}

