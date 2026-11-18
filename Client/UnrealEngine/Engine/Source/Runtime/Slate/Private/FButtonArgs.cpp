// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FButtonArgs @ 1427b0840

FButtonArgs * __thiscall FButtonArgs::FButtonArgs(FButtonArgs *this,FButtonArgs *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar2;
  ITextData *pIVar3;
  FName FVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Command).Object = (param_1->Command).Object;
  pTVar2 = (param_1->Command).SharedReferenceCount.ReferenceController;
  (this->Command).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->CommandList).Object = (param_1->CommandList).Object;
  pTVar2 = (param_1->CommandList).SharedReferenceCount.ReferenceController;
  (this->CommandList).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ExtensionHook = param_1->ExtensionHook;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->LabelOverride).Value.TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_1->LabelOverride).Value.Flags;
  (this->LabelOverride).bIsSet = (param_1->LabelOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->LabelOverride).Getter);
  (this->ToolbarLabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->ToolbarLabelOverride).Value.TextData.Reference;
  (this->ToolbarLabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->ToolbarLabelOverride).Getter;
  (this->ToolbarLabelOverride).Value.Flags = (param_1->ToolbarLabelOverride).Value.Flags;
  (this->ToolbarLabelOverride).bIsSet = (param_1->ToolbarLabelOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolbarLabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolbarLabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolbarLabelOverride).Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->ToolTipOverride).Value.TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_1->ToolTipOverride).Value.Flags;
  (this->ToolTipOverride).bIsSet = (param_1->ToolTipOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolTipOverride).Getter);
  FVar4 = (param_1->IconOverride).Value.StyleName;
  this_00 = &(this->IconOverride).Getter;
  (this->IconOverride).Value.StyleSetName = (param_1->IconOverride).Value.StyleSetName;
  (this->IconOverride).Value.StyleName = FVar4;
  FVar4 = (param_1->IconOverride).Value.StatusOverlayStyleName;
  (this->IconOverride).Value.SmallStyleName = (param_1->IconOverride).Value.SmallStyleName;
  (this->IconOverride).Value.StatusOverlayStyleName = FVar4;
  (this->IconOverride).bIsSet = (param_1->IconOverride).bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IconOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->IconOverride).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&(param_1->IconOverride).Getter);
  this->TutorialHighlightName = param_1->TutorialHighlightName;
  this->BorderBrushName = param_1->BorderBrushName;
  this->UserInterfaceActionType = param_1->UserInterfaceActionType;
  FUIAction::FUIAction(&this->Action,&param_1->Action);
  *(undefined8 *)&this->CustomMenuDelegate = 0;
  *(undefined8 *)&(this->CustomMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomMenuDelegate).field_0x10 = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->CustomMenuDelegate,&param_1->CustomMenuDelegate);
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetMenuContent,&param_1->OnGetMenuContent);
  *(undefined8 *)&this->GetDecoratedButtonDelegate = 0;
  *(undefined8 *)&(this->GetDecoratedButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetDecoratedButtonDelegate).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->GetDecoratedButtonDelegate,&param_1->GetDecoratedButtonDelegate);
  return this;
}

// ~FButtonArgs @ 1427b8ea0

void __thiscall FButtonArgs::~FButtonArgs(FButtonArgs *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetDecoratedButtonDelegate);
  pvVar3 = *(void **)&(this->GetDecoratedButtonDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetDecoratedButtonDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar3 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate);
  pvVar3 = *(void **)&(this->CustomMenuDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CustomMenuDelegate);
  FUIAction::~FUIAction(&this->Action);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IconOverride).Getter);
  pvVar3 = *(void **)&(this->IconOverride).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IconOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar3 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar4 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolbarLabelOverride).Getter);
  pvVar3 = *(void **)&(this->ToolbarLabelOverride).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolbarLabelOverride).Getter);
  pIVar4 = (this->ToolbarLabelOverride).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar3 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar4 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CommandList).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Command).SharedReferenceCount.ReferenceController);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

