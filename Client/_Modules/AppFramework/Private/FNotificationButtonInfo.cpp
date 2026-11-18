// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FNotificationButtonInfo @ 14305c620

FNotificationButtonInfo * __thiscall
FNotificationButtonInfo::FNotificationButtonInfo
          (FNotificationButtonInfo *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,ECompletionState param_4
          )

{
  ITextData *pIVar1;
  EVisibility EVar2;
  undefined1 local_res8 [8];
  
  (this->Text).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Value).TextData.Reference;
  (this->Text).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Value.Flags = (param_1->Value).Flags;
  (this->Text).bIsSet = param_1->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>(&(this->Text).Getter,&param_1->Getter);
  (this->ToolTip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->Value).TextData.Reference;
  (this->ToolTip).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ToolTip).Value.Flags = (param_2->Value).Flags;
  (this->ToolTip).bIsSet = param_2->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->ToolTip).Getter,&param_2->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Callback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  *(undefined8 *)&(this->VisibilityCallback).field_0x10 = 0;
  *(undefined8 *)&this->VisibilityCallback = 0;
  *(undefined8 *)&(this->VisibilityCallback).field_0x8 = 0;
  *(undefined8 *)&(this->IsEnabledCallback).field_0x10 = 0;
  *(undefined8 *)&this->IsEnabledCallback = 0;
  *(undefined8 *)&(this->IsEnabledCallback).field_0x8 = 0;
  EVar2 = EVisibility::Collapsed;
  if (param_4 == CS_None) {
    EVar2 = EVisibility::Visible;
  }
  (this->VisibilityOnNone).Value.Value = (uchar)EVar2.Value.Value;
  EVar2 = EVisibility::Collapsed;
  if (param_4 == CS_Pending) {
    EVar2 = EVisibility::Visible;
  }
  (this->VisibilityOnPending).Value.Value = (uchar)EVar2.Value.Value;
  EVar2 = EVisibility::Collapsed;
  if (param_4 == CS_Success) {
    EVar2 = EVisibility::Visible;
  }
  (this->VisibilityOnSuccess).Value.Value = (uchar)EVar2.Value.Value;
  EVar2 = EVisibility::Collapsed;
  if (param_4 == CS_Fail) {
    EVar2 = EVisibility::Visible;
  }
  (this->VisibilityOnFail).Value.Value = (uchar)EVar2.Value.Value;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  return this;
}

