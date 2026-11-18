// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// FNotificationButtonInfo @ 142bc8830

FNotificationButtonInfo * __thiscall
FNotificationButtonInfo::FNotificationButtonInfo
          (FNotificationButtonInfo *this,FNotificationButtonInfo *param_1)

{
  FText::FText((FText *)this,(FText *)param_1);
  (this->Text).bIsSet = (param_1->Text).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Text).Getter);
  FText::FText(&(this->ToolTip).Value,&(param_1->ToolTip).Value);
  (this->ToolTip).bIsSet = (param_1->ToolTip).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ToolTip).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Callback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Callback);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->VisibilityCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsEnabledCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->IsEnabledCallback);
  (this->VisibilityOnNone).Value.Value = (param_1->VisibilityOnNone).Value.Value;
  (this->VisibilityOnPending).Value.Value = (param_1->VisibilityOnPending).Value.Value;
  (this->VisibilityOnSuccess).Value.Value = (param_1->VisibilityOnSuccess).Value.Value;
  (this->VisibilityOnFail).Value.Value = (param_1->VisibilityOnFail).Value.Value;
  return this;
}

