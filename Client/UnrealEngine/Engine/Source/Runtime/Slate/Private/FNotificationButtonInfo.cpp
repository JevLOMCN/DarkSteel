// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FNotificationButtonInfo @ 1427b3c70

FNotificationButtonInfo * __thiscall
FNotificationButtonInfo::FNotificationButtonInfo
          (FNotificationButtonInfo *this,FNotificationButtonInfo *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  (this->Text).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Text).Value.TextData.Reference;
  (this->Text).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->Text).Getter;
  (this->Text).Value.Flags = (param_1->Text).Value.Flags;
  (this->Text).bIsSet = (param_1->Text).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Text).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->Text).Getter);
  (this->ToolTip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->ToolTip).Value.TextData.Reference;
  (this->ToolTip).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->ToolTip).Getter;
  (this->ToolTip).Value.Flags = (param_1->ToolTip).Value.Flags;
  (this->ToolTip).bIsSet = (param_1->ToolTip).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTip).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolTip).Getter);
  *(undefined8 *)&this->Callback = 0;
  *(undefined8 *)&(this->Callback).field_0x8 = 0;
  *(undefined4 *)&(this->Callback).field_0x10 = 0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->Callback,&param_1->Callback);
  TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
  ::
  TDelegate<EVisibility___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
            (&this->VisibilityCallback,&param_1->VisibilityCallback);
  TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(enum_SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
            (&this->IsEnabledCallback,&param_1->IsEnabledCallback);
  (this->VisibilityOnNone).Value.Value = (param_1->VisibilityOnNone).Value.Value;
  (this->VisibilityOnPending).Value.Value = (param_1->VisibilityOnPending).Value.Value;
  (this->VisibilityOnSuccess).Value.Value = (param_1->VisibilityOnSuccess).Value.Value;
  (this->VisibilityOnFail).Value.Value = (param_1->VisibilityOnFail).Value.Value;
  return this;
}

// FNotificationButtonInfo @ 1427b3d90

FNotificationButtonInfo * __thiscall
FNotificationButtonInfo::FNotificationButtonInfo
          (FNotificationButtonInfo *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          TDelegate<EVisibility___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<bool___cdecl(SNotificationItem::ECompletionState),FDefaultDelegateUserPolicy>
                   *param_5)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  EVisibility EVar6;
  undefined1 local_res8 [8];
  FReadAccessScope local_48;
  
  (this->Text).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Value).TextData.Reference;
  (this->Text).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->Text).Getter;
  (this->Text).Value.Flags = (param_1->Value).Flags;
  (this->Text).bIsSet = param_1->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Text).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Text).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_1->Getter);
  (this->ToolTip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->ToolTip).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  pTVar1 = &(this->ToolTip).Getter;
  (this->ToolTip).Value.Flags = (param_2->Value).Flags;
  (this->ToolTip).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTip).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Callback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsEnabledCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             &local_48);
  if ((*(int *)&(this->VisibilityCallback).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(this->VisibilityCallback).field_0x8, plVar3 == (longlong *)0x0)) {
LAB_1427b3ea4:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_1427b3ea4;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  EVar6 = EVisibility::Visible;
  if (bVar4) {
    EVar6 = EVisibility::Collapsed;
  }
  (this->VisibilityOnNone).Value.Value = (uchar)EVar6.Value.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             &local_48);
  if ((*(int *)&(this->VisibilityCallback).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(this->VisibilityCallback).field_0x8, plVar3 == (longlong *)0x0)) {
LAB_1427b3ef9:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_1427b3ef9;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  EVar6 = EVisibility::Visible;
  if (bVar4) {
    EVar6 = EVisibility::Collapsed;
  }
  (this->VisibilityOnPending).Value.Value = (uchar)EVar6.Value.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             &local_48);
  if ((*(int *)&(this->VisibilityCallback).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(this->VisibilityCallback).field_0x8, plVar3 == (longlong *)0x0)) {
LAB_1427b3f4e:
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_1427b3f4e;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  EVar6 = EVisibility::Visible;
  if (bVar4) {
    EVar6 = EVisibility::Collapsed;
  }
  (this->VisibilityOnSuccess).Value.Value = (uchar)EVar6.Value.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback,
             &local_48);
  if ((*(int *)&(this->VisibilityCallback).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->VisibilityCallback).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*plVar3 + 0x38))();
    bVar4 = true;
    if (cVar5 != '\0') goto LAB_1427b3fa4;
  }
  bVar4 = false;
LAB_1427b3fa4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  EVar6 = EVisibility::Visible;
  if (bVar4) {
    EVar6 = EVisibility::Collapsed;
  }
  (this->VisibilityOnFail).Value.Value = (uchar)EVar6.Value.Value;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  if (*(void **)&param_3->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_3->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  if (*(void **)&param_4->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_4->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  return this;
}

// ~FNotificationButtonInfo @ 1427b9580

void __thiscall FNotificationButtonInfo::~FNotificationButtonInfo(FNotificationButtonInfo *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->IsEnabledCallback);
  pvVar1 = *(void **)&(this->IsEnabledCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->IsEnabledCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->VisibilityCallback);
  pvVar1 = *(void **)&(this->VisibilityCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VisibilityCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Callback);
  pvVar1 = *(void **)&(this->Callback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Callback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTip).Getter);
  pvVar1 = *(void **)&(this->ToolTip).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTip).Getter);
  pIVar2 = (this->ToolTip).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Text).Getter);
  pvVar1 = *(void **)&(this->Text).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Text).Getter);
  pIVar2 = (this->Text).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return;
}

