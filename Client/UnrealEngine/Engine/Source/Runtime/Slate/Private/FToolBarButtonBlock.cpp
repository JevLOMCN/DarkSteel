// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 12

// FToolBarButtonBlock @ 1427b4cc0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarButtonBlock * __thiscall
FToolBarButtonBlock::FToolBarButtonBlock
          (FToolBarButtonBlock *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TAttribute<FSlateIcon> *param_3,FUIAction *param_4,EUserInterfaceActionType param_5,
          TAttribute<FText> *param_6)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  ITextData *pIVar2;
  void *pvVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_28;
  
  local_res8 = 0;
  local_28.Object = (FUICommandList *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,param_4,(FName)0x0,None,false,&local_28);
  this->_padding_ = (longlong)&___7FToolBarButtonBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_1->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_1->Value).Flags;
  (this->LabelOverride).bIsSet = param_1->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_1->Getter);
  pTVar5 = param_6;
  (this->ToolbarLabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_6->Value).TextData.Reference;
  (this->ToolbarLabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_6);
  }
  pTVar1 = &(this->ToolbarLabelOverride).Getter;
  (this->ToolbarLabelOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->ToolbarLabelOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolbarLabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolbarLabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_2->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_6);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_2->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_2->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_2->Getter);
  (this->BorderBrushName).Value.ComparisonIndex = 0;
  (this->BorderBrushName).Value.Number = 0;
  this_00 = &(this->IconOverride).Getter;
  (this->BorderBrushName).bIsSet = false;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x8 = 0;
  FVar4 = (param_3->Value).StyleName;
  (this->IconOverride).Value.StyleSetName = (param_3->Value).StyleSetName;
  (this->IconOverride).Value.StyleName = FVar4;
  FVar4 = (param_3->Value).StatusOverlayStyleName;
  (this->IconOverride).Value.SmallStyleName = (param_3->Value).SmallStyleName;
  (this->IconOverride).Value.StatusOverlayStyleName = FVar4;
  (this->IconOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IconOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->IconOverride).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&param_3->Getter);
  this->UserInterfaceActionType = param_5;
  (this->LabelVisibility).bIsSet = false;
  (this->CustomWidget).Object = (SWidget *)0x0;
  (this->CustomWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bIsFocusable = false;
  this->bForceSmallIcons = false;
  *(undefined8 *)&this->CustomMenuDelegate = 0;
  *(undefined8 *)&(this->CustomMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->GetDecoratedButtonDelegate = 0;
  *(undefined8 *)&(this->GetDecoratedButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetDecoratedButtonDelegate).field_0x10 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
  pvVar3 = *(void **)&(pTVar5->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar5->Getter);
  pIVar2 = (pTVar5->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// FToolBarButtonBlock @ 1427b4f40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarButtonBlock * __thiscall
FToolBarButtonBlock::FToolBarButtonBlock(FToolBarButtonBlock *this,FButtonArgs *param_1)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  EUserInterfaceActionType EVar2;
  ITextData *pIVar3;
  FName FVar4;
  EUserInterfaceActionType EVar5;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_28.Object = (param_1->CommandList).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (param_1->CommandList).SharedReferenceCount.ReferenceController;
  local_res8 = 0;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = (param_1->Command).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->Command).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,(FName)0x0,ToolBarButton,false);
  this->_padding_ = (longlong)&___7FToolBarButtonBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar3 = (param_1->LabelOverride).Value.TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
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
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
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
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_1->ToolTipOverride).Value.Flags;
  (this->ToolTipOverride).bIsSet = (param_1->ToolTipOverride).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ToolTipOverride).Getter);
  (this->BorderBrushName).Value.ComparisonIndex = 0;
  (this->BorderBrushName).Value.Number = 0;
  this_00 = &(this->IconOverride).Getter;
  (this->BorderBrushName).bIsSet = false;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x8 = 0;
  FVar4 = (param_1->IconOverride).Value.StyleName;
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
  (this->LabelVisibility).bIsSet = false;
  (this->CustomWidget).Object = (SWidget *)0x0;
  (this->CustomWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  EVar2 = param_1->UserInterfaceActionType;
  this->bIsFocusable = false;
  this->bForceSmallIcons = false;
  *(undefined8 *)&this->CustomMenuDelegate = 0;
  EVar5 = Button;
  if (EVar2 != None) {
    EVar5 = EVar2;
  }
  *(undefined8 *)&(this->CustomMenuDelegate).field_0x8 = 0;
  this->UserInterfaceActionType = EVar5;
  *(undefined8 *)&this->GetDecoratedButtonDelegate = 0;
  *(undefined8 *)&(this->GetDecoratedButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetDecoratedButtonDelegate).field_0x10 = 0;
  *(undefined4 *)&(this->CustomMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&this->GetDecoratedButtonDelegate,&param_1->GetDecoratedButtonDelegate);
  FButtonArgs::~FButtonArgs(param_1);
  return this;
}

// FToolBarButtonBlock @ 1427b51c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarButtonBlock * __thiscall
FToolBarButtonBlock::FToolBarButtonBlock
          (FToolBarButtonBlock *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,
          TSharedPtr<FUICommandList_const_,1> *param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,TAttribute<FText> *param_6)

{
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  ITextData *pIVar2;
  void *pvVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_48;
  TSharedPtr<FUICommandInfo_const_,1> local_38;
  
  local_48.Object = param_2->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_res8 = 0;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_38,&local_48,(FName)0x0,ToolBarButton,false);
  this->_padding_ = (longlong)&___7FToolBarButtonBlock__6B_;
  (this->LabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->LabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->LabelOverride).Getter;
  (this->LabelOverride).Value.Flags = (param_3->Value).Flags;
  (this->LabelOverride).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->LabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->LabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar5 = param_6;
  (this->ToolbarLabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_6->Value).TextData.Reference;
  (this->ToolbarLabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_6);
  }
  pTVar1 = &(this->ToolbarLabelOverride).Getter;
  (this->ToolbarLabelOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->ToolbarLabelOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolbarLabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolbarLabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  (this->ToolTipOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->Value).TextData.Reference;
  (this->ToolTipOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_6);
  }
  pTVar1 = &(this->ToolTipOverride).Getter;
  (this->ToolTipOverride).Value.Flags = (param_4->Value).Flags;
  (this->ToolTipOverride).bIsSet = param_4->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTipOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTipOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_4->Getter);
  this_00 = &(this->IconOverride).Getter;
  (this->BorderBrushName).Value.ComparisonIndex = 0;
  (this->BorderBrushName).Value.Number = 0;
  (this->BorderBrushName).bIsSet = false;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter = 0;
  *(undefined8 *)&(this->BorderBrushName).Getter.field_0x8 = 0;
  FVar4 = (param_5->Value).StyleName;
  (this->IconOverride).Value.StyleSetName = (param_5->Value).StyleSetName;
  (this->IconOverride).Value.StyleName = FVar4;
  FVar4 = (param_5->Value).StatusOverlayStyleName;
  (this->IconOverride).Value.SmallStyleName = (param_5->Value).SmallStyleName;
  (this->IconOverride).Value.StatusOverlayStyleName = FVar4;
  (this->IconOverride).bIsSet = param_5->bIsSet;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->IconOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->IconOverride).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,&param_5->Getter);
  (this->LabelVisibility).bIsSet = false;
  (this->CustomWidget).Object = (SWidget *)0x0;
  (this->CustomWidget).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->UserInterfaceActionType = Button;
  this->bIsFocusable = false;
  this->bForceSmallIcons = false;
  *(undefined8 *)&this->CustomMenuDelegate = 0;
  *(undefined8 *)&(this->CustomMenuDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->CustomMenuDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnGetMenuContent = 0;
  *(undefined8 *)&(this->OnGetMenuContent).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetMenuContent).field_0x10 = 0;
  *(undefined8 *)&this->GetDecoratedButtonDelegate = 0;
  *(undefined8 *)&(this->GetDecoratedButtonDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->GetDecoratedButtonDelegate).field_0x10 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
  pvVar3 = *(void **)&(pTVar5->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar5->Getter);
  pIVar2 = (pTVar5->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// ~FToolBarButtonBlock @ 1427b9ef0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarButtonBlock::~FToolBarButtonBlock(FToolBarButtonBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GetDecoratedButtonDelegate);
  pvVar1 = *(void **)&(this->GetDecoratedButtonDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->GetDecoratedButtonDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContent);
  pvVar1 = *(void **)&(this->OnGetMenuContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate);
  pvVar1 = *(void **)&(this->CustomMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CustomMenuDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CustomWidget).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->IconOverride).Getter);
  pvVar1 = *(void **)&(this->IconOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->IconOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BorderBrushName).Getter);
  pvVar1 = *(void **)&(this->BorderBrushName).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BorderBrushName).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolTipOverride).Getter);
  pvVar1 = *(void **)&(this->ToolTipOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolTipOverride).Getter);
  pIVar2 = (this->ToolTipOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ToolbarLabelOverride).Getter);
  pvVar1 = *(void **)&(this->ToolbarLabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ToolbarLabelOverride).Getter);
  pIVar2 = (this->ToolbarLabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->LabelOverride).Getter);
  pvVar1 = *(void **)&(this->LabelOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->LabelOverride).Getter);
  pIVar2 = (this->LabelOverride).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  return;
}

// ConstructWidget @ 1427f3610

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FToolBarButtonBlock::ConstructWidget
          (FToolBarButtonBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  SToolBarButtonBlock *pSVar2;
  bool bVar3;
  FArguments *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar6;
  TSharedRef<SToolBarButtonBlock,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TEnumAsByte<EVisibility::Private> local_2d8 [8];
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined1 local_2c8;
  undefined1 local_2c0 [8];
  ForAnyElementType FStack_2b8;
  ulonglong local_2b0;
  TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs> local_2a8;
  undefined8 local_290;
  FSharedReferencer<1> local_288;
  TSharedRef<SToolBarButtonBlock,1> local_280;
  FDestructionSentinel local_270;
  TSharedRef<SToolBarButtonBlock,1> local_258;
  FArguments local_248;
  
  pFVar4 = SToolBarButtonBlock::FArguments::FArguments(&local_248);
  bVar3 = (this->LabelVisibility).bIsSet;
  if (bVar3 != false) {
    local_2d8[0].Value = (this->LabelVisibility).TypedValue.Value.Value;
  }
  if ((TOptional<EVisibility> *)local_2d8 != &pFVar4->_LabelVisibility) {
    if (bVar3 == false) {
      if ((pFVar4->_LabelVisibility).bIsSet != false) {
        (pFVar4->_LabelVisibility).bIsSet = false;
      }
    }
    else {
      (pFVar4->_LabelVisibility).TypedValue.Value.Value = local_2d8[0].Value;
      (pFVar4->_LabelVisibility).bIsSet = true;
    }
  }
  pFVar4->_IsFocusable = this->bIsFocusable;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pFVar4->_ForceSmallIcons = this->bForceSmallIcons;
  pFVar4->_TutorialHighlightName = *(FName *)((longlong)&this->_padding_ + 4);
  local_2d0 = 1;
  local_2cc = 1;
  local_2c8 = 1;
  local_2b0 = 0;
  local_2c0 = (undefined1  [8])0x0;
  FStack_2b8.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_2d0 != &pFVar4->_padding_) {
    *(undefined4 *)&pFVar4->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar4->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar4->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2c0,
             (FWriteAccessScope *)&local_270);
  if (((int)local_2b0 != 0) && (FStack_2b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2b8,0,0,0x10);
    local_2b0 = local_2b0 & 0xffffffff00000000;
  }
  if (local_270.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_270.Accessor,&local_270);
  }
  if (FStack_2b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2c0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  local_2a8._RequiredArgs = local_res8;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x350);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSToolBarButtonBlock___00_SharedPointerInternals__6B_;
    memset(pTVar5 + 1,0,0x340);
    SToolBarButtonBlock::SToolBarButtonBlock((SToolBarButtonBlock *)(pTVar5 + 1));
    pTVar8 = pTVar5;
  }
  TSharedRef<SToolBarButtonBlock,1>::TSharedRef<SToolBarButtonBlock,1>
            (&local_280,(SToolBarButtonBlock *)(pTVar8 + 1),pTVar8);
  local_288.ReferenceController = local_280.SharedReferenceCount.ReferenceController;
  if (local_280.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_280.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2a8._Widget.Object = local_280.Object;
  local_290 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_2a8._Widget.SharedReferenceCount,&local_288);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  pSVar2 = local_2a8._Widget.Object;
  if ((local_2a8._Widget.Object == (SToolBarButtonBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar6;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&pSVar2->_padding_,"SToolBarButtonBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarButtonBlock.cpp"
             ,0x90,0x340);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SToolBarButtonBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_2a8,&local_258,pFVar4);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar7->Object;
  pTVar8 = (pTVar7->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8._Widget.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_248);
  return __return_storage_ptr__;
}

// CreateMenuEntry @ 1427fdd10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarButtonBlock::CreateMenuEntry(FToolBarButtonBlock *this,FMenuBuilder *param_1)

{
  EUserInterfaceActionType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSlateIcon *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  char cVar6;
  FSlateIcon *pFVar7;
  FText *pFVar8;
  longlong *plVar9;
  FName local_res8;
  FDestructionSentinel local_108;
  undefined1 local_f0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  ForAnyElementType FStack_e0;
  ulonglong local_d8;
  undefined1 local_d0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType FStack_b0;
  ulonglong local_a8;
  undefined1 local_a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  ForAnyElementType FStack_80;
  ulonglong local_78;
  undefined1 local_70 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar3 = (FSlateIcon *)this->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar7 = (FSlateIcon *)this->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar3 == (FSlateIcon *)0x0) || (pFVar7 == (FSlateIcon *)0x0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108._0_8_ = pFVar7;
    local_108.Accessor = (FMRSWRecursiveAccessDetector *)pTVar4;
    FMultiBoxBuilder::PushCommandList
              ((FMultiBoxBuilder *)param_1,(TSharedRef<FUICommandList_const_,1> *)&local_108);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate,
             (FReadAccessScope *)&local_108);
  if ((*(int *)&(this->CustomMenuDelegate).field_0x10 != 0) &&
     (plVar9 = *(longlong **)&(this->CustomMenuDelegate).field_0x8, plVar9 != (longlong *)0x0)) {
    cVar6 = (**(code **)(*plVar9 + 0x38))();
    if (cVar6 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_108);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CustomMenuDelegate
                 ,(FReadAccessScope *)&local_108);
      if (*(int *)&(this->CustomMenuDelegate).field_0x10 == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = *(longlong **)&(this->CustomMenuDelegate).field_0x8;
      }
      (**(code **)(*plVar9 + 0x60))(plVar9,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_108);
      if (bVar5) {
        FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_1);
      }
      goto LAB_1427fe35d;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_108);
  if (bVar5) {
    local_f0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_f0[1] = false;
    local_d8 = 0;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_e0.Data = (FScriptContainerElement *)0x0;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pFVar7 = FSlateIcon::FSlateIcon((FSlateIcon *)local_70);
    FText::FText((FText *)local_a0);
    local_a0[0x10] = false;
    local_78 = 0;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_d0);
    local_d0[0x10] = false;
    local_a8 = 0;
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b0.Data = (FScriptContainerElement *)0x0;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_108._0_8_ = pFVar3;
    local_108.Accessor = (FMRSWRecursiveAccessDetector *)pTVar2;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TSharedPtr<FUICommandInfo_const_,1> *)&local_108,
               (FName)0x0,(TAttribute<FText> *)local_d0,(TAttribute<FText> *)local_a0,pFVar7,
               local_res8,(TAttribute<EVisibility> *)local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_108);
    if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    if ((ITextData *)local_d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_108);
    if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = local_78 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
    if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_108);
    if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
      local_d8 = local_d8 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
    FMultiBoxBuilder::PopCommandList((FMultiBoxBuilder *)param_1);
  }
  else if ((this->LabelOverride).bIsSet != false) {
    local_f0[0] = (TEnumAsByte<EVisibility::Private>)0x19;
    local_f0[1] = false;
    local_d8 = 0;
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_e0.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)local_a0);
    EVar1 = this->UserInterfaceActionType;
    local_a0[0x10] = false;
    local_78 = 0;
    local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_80.Data = (FScriptContainerElement *)0x0;
    local_108._0_8_ = TAttribute<FSlateIcon>::Get(&this->IconOverride);
    pFVar8 = TAttribute<FText>::Get(&this->ToolTipOverride);
    local_d0._0_8_ = (pFVar8->TextData).Reference;
    if ((ITextData *)local_d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d0._0_8_ + 8))(local_d0._0_8_,&local_res8);
    }
    local_d0._8_4_ = pFVar8->Flags;
    local_d0[0x10] = true;
    local_a8 = 0;
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_b0.Data = (FScriptContainerElement *)0x0;
    pFVar8 = TAttribute<FText>::Get(&this->LabelOverride);
    local_70._0_8_ = (pFVar8->TextData).Reference;
    if ((FName)local_70._0_8_ != (FName)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 8))(local_70._0_8_,&local_res8);
    }
    local_70._8_4_ = pFVar8->Flags;
    local_70[0x10] = true;
    local_48 = 0;
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,(TAttribute<FText> *)local_70,
               (TAttribute<FText> *)local_d0,(FSlateIcon *)local_108._0_8_,
               (FUIAction *)&this->_padding_,(FName)0x0,EVar1,(FName)0x0,
               (TAttribute<FText> *)local_a0,(TAttribute<EVisibility> *)local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_108);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
    if ((FName)local_70._0_8_ != (FName)0x0) {
      (**(code **)((longlong)*(ITextData *)local_70._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_108);
    if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_b0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
      local_a8 = local_a8 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    if ((ITextData *)local_d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_88,(FWriteAccessScope *)&local_108);
    if (((int)local_78 != 0) && (FStack_80.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_80.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_80,0,0,0x10);
      local_78 = local_78 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_80.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
    if ((ITextData *)local_a0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a0._0_8_ + 0x10))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_108);
    if (((int)local_d8 != 0) && (FStack_e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e0,0,0,0x10);
      local_d8 = local_d8 & 0xffffffff00000000;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    if (FStack_e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
LAB_1427fe35d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// GetIsFocusable @ 142810a00

bool __thiscall FToolBarButtonBlock::GetIsFocusable(FToolBarButtonBlock *this)

{
  return this->bIsFocusable;
}

// HasIcon @ 1428187a0

bool __thiscall FToolBarButtonBlock::HasIcon(FToolBarButtonBlock *this)

{
  TReferenceControllerBase<1> *pTVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FSlateIcon *pFVar6;
  FSlateBrush *pFVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  uint uStackX_c;
  FSlateIcon local_68;
  FSlateIcon local_48;
  FSlateIcon local_28;
  
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  bVar4 = false;
  lVar8 = this->_padding_;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (lVar8 == 0) {
    pFVar6 = FSlateIcon::FSlateIcon(&local_28);
    pTVar9 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar9 = (TReferenceControllerBase<1> *)this->_padding_;
    lVar8 = this->_padding_;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar6 = &local_68;
    bVar4 = true;
    local_68.StyleSetName = *(FName *)(lVar8 + 0x40);
    local_68.StyleName = *(FName *)(lVar8 + 0x48);
    local_68.SmallStyleName = *(FName *)(lVar8 + 0x50);
    local_68.StatusOverlayStyleName = *(FName *)(lVar8 + 0x58);
  }
  local_48.StyleSetName = pFVar6->StyleSetName;
  local_48.StyleName = pFVar6->StyleName;
  local_48.SmallStyleName = pFVar6->SmallStyleName;
  local_48.StatusOverlayStyleName = pFVar6->StatusOverlayStyleName;
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->IconOverride).bIsSet == false) {
    pFVar6 = &local_48;
  }
  else {
    pFVar6 = TAttribute<FSlateIcon>::Get(&this->IconOverride);
  }
  if ((pFVar6->StyleSetName != (FName)0x0) && (pFVar6->StyleName != (FName)0x0)) {
    pFVar7 = FSlateIcon::GetIcon(pFVar6);
    bVar4 = false;
    if (pFVar7->ResourceName == (FName)0x0) {
      pUVar2 = (pFVar7->ResourceObject).field0_0x0.DebugPtr;
      lVar8 = 0;
      if (pUVar2 != (UObject *)0x0) {
        lVar8 = *(longlong *)&pUVar2->field_0x18;
      }
      bVar4 = lVar8 == 0;
    }
    return !bVar4;
  }
  return false;
}

// SetCustomMenuDelegate @ 142834ee0

void __thiscall
FToolBarButtonBlock::SetCustomMenuDelegate
          (FToolBarButtonBlock *this,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->CustomMenuDelegate,param_1);
  return;
}

// SetCustomWidget @ 142834f20

void __thiscall
FToolBarButtonBlock::SetCustomWidget(FToolBarButtonBlock *this,TSharedPtr<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->CustomWidget).SharedReferenceCount.ReferenceController;
  (this->CustomWidget).Object = pSVar2;
  (this->CustomWidget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetGetDecoratedButtonDelegate @ 142834fb0

void __thiscall
FToolBarButtonBlock::SetGetDecoratedButtonDelegate
          (FToolBarButtonBlock *this,
          TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->GetDecoratedButtonDelegate,param_1);
  return;
}

// SetOnGetMenuContent @ 1428355c0

void __thiscall
FToolBarButtonBlock::SetOnGetMenuContent
          (FToolBarButtonBlock *this,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->OnGetMenuContent,param_1);
  return;
}

