// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FToolBarComboButtonBlock @ 1427b5480

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FToolBarComboButtonBlock * __thiscall
FToolBarComboButtonBlock::FToolBarComboButtonBlock
          (FToolBarComboButtonBlock *this,FUIAction *param_1,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TAttribute<FText> *param_3,TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,
          bool param_6,TAttribute<FText> *param_7,TAttribute<EMenuPlacement> *param_8,
          EUserInterfaceActionType param_9)

{
  TDelegate<EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  ITextData *pIVar2;
  void *pvVar3;
  FName FVar4;
  TAttribute<FText> *pTVar5;
  TAttribute<EMenuPlacement> *pTVar6;
  undefined8 local_res8;
  TSharedPtr<FUICommandList_const_,1> local_28;
  
  local_res8 = 0;
  local_28.Object = (FUICommandList *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock
            ((FMultiBlock *)this,param_1,(FName)0x0,ToolBarComboButton,false,&local_28);
  this->_padding_ = (longlong)&___7FToolBarComboButtonBlock__6B_;
  *(undefined8 *)&this->MenuContentGenerator = 0;
  *(undefined8 *)&(this->MenuContentGenerator).field_0x8 = 0;
  *(undefined4 *)&(this->MenuContentGenerator).field_0x10 = 0;
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this->MenuContentGenerator,param_2);
  (this->Label).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_3->Value).TextData.Reference;
  (this->Label).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  pTVar1 = &(this->Label).Getter;
  (this->Label).Value.Flags = (param_3->Value).Flags;
  (this->Label).bIsSet = param_3->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Label).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Label).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_3->Getter);
  pTVar5 = param_7;
  (this->ToolbarLabelOverride).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_7->Value).TextData.Reference;
  (this->ToolbarLabelOverride).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_7);
  }
  pTVar1 = &(this->ToolbarLabelOverride).Getter;
  (this->ToolbarLabelOverride).Value.Flags = (pTVar5->Value).Flags;
  (this->ToolbarLabelOverride).bIsSet = pTVar5->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolbarLabelOverride).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolbarLabelOverride).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&pTVar5->Getter);
  (this->ToolTip).Value.TextData.Reference = (ITextData *)0x0;
  pIVar2 = (param_4->Value).TextData.Reference;
  (this->ToolTip).Value.TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&param_7);
  }
  pTVar1 = &(this->ToolTip).Getter;
  (this->ToolTip).Value.Flags = (param_4->Value).Flags;
  (this->ToolTip).bIsSet = param_4->bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ToolTip).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ToolTip).Getter.field_0x10 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&param_4->Getter);
  this_01 = &(this->Icon).Getter;
  FVar4 = (param_5->Value).StyleName;
  (this->Icon).Value.StyleSetName = (param_5->Value).StyleSetName;
  (this->Icon).Value.StyleName = FVar4;
  FVar4 = (param_5->Value).StatusOverlayStyleName;
  (this->Icon).Value.SmallStyleName = (param_5->Value).SmallStyleName;
  (this->Icon).Value.StatusOverlayStyleName = FVar4;
  (this->Icon).bIsSet = param_5->bIsSet;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->Icon).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Icon).Getter.field_0x10 = 0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_01,&param_5->Getter);
  pTVar6 = param_8;
  this_00 = &param_8->Getter;
  (this->PlacementOverride).Value = param_8->Value;
  (this->PlacementOverride).bIsSet = param_8->bIsSet;
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->PlacementOverride).Getter,this_00);
  this->UserInterfaceActionType = param_9;
  this->bSimpleComboBox = param_6;
  (this->LabelVisibility).bIsSet = false;
  this->bForceSmallIcons = false;
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar3 = *(void **)&(pTVar6->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ~FToolBarComboButtonBlock @ 1427ba0a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarComboButtonBlock::~FToolBarComboButtonBlock(FToolBarComboButtonBlock *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->PlacementOverride).Getter);
  pvVar1 = *(void **)&(this->PlacementOverride).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->PlacementOverride).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Icon).Getter);
  pvVar1 = *(void **)&(this->Icon).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Icon).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Label).Getter);
  pvVar1 = *(void **)&(this->Label).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Label).Getter);
  pIVar2 = (this->Label).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->MenuContentGenerator);
  pvVar1 = *(void **)&(this->MenuContentGenerator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MenuContentGenerator);
  FMultiBlock::~FMultiBlock((FMultiBlock *)this);
  return;
}

// ConstructWidget @ 1427f3930

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FToolBarComboButtonBlock::ConstructWidget
          (FToolBarComboButtonBlock *this,
          TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FArguments *pFVar2;
  TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SToolBarComboButtonBlock,1> *pTVar3;
  bool bVar4;
  T0RequiredArgs local_res8 [8];
  TEnumAsByte<EVisibility::Private> local_318 [8];
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 local_308;
  undefined1 local_300 [8];
  ForAnyElementType FStack_2f8;
  ulonglong local_2f0;
  FDestructionSentinel local_2e8;
  FName local_2d0;
  FName FStack_2c8;
  FName local_2c0;
  FName FStack_2b8;
  bool local_2b0;
  undefined1 local_2a8 [8];
  ForAnyElementType FStack_2a0;
  int local_298;
  TSharedRef<SToolBarComboButtonBlock,1> local_290;
  TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs> local_280;
  undefined1 local_268 [552];
  undefined1 local_40 [40];
  
  pFVar2 = SToolBarComboButtonBlock::FArguments::FArguments((FArguments *)local_268);
  bVar4 = (this->LabelVisibility).bIsSet == false;
  if (!bVar4) {
    local_318[0].Value = (this->LabelVisibility).TypedValue.Value.Value;
  }
  if ((TOptional<EVisibility> *)local_318 != &pFVar2->_LabelVisibility) {
    if (bVar4) {
      if ((pFVar2->_LabelVisibility).bIsSet != false) {
        (pFVar2->_LabelVisibility).bIsSet = false;
      }
    }
    else {
      (pFVar2->_LabelVisibility).TypedValue.Value.Value = local_318[0].Value;
      (pFVar2->_LabelVisibility).bIsSet = true;
    }
  }
  local_2d0 = (this->Icon).Value.StyleSetName;
  FStack_2c8 = (this->Icon).Value.StyleName;
  local_2b0 = (this->Icon).bIsSet;
  local_2c0 = (this->Icon).Value.SmallStyleName;
  FStack_2b8 = (this->Icon).Value.StatusOverlayStyleName;
  local_298 = 0;
  local_2a8 = (undefined1  [8])0x0;
  FStack_2a0.Data = (FScriptContainerElement *)0x0;
  TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FSlateIcon___cdecl(void),FDefaultDelegateUserPolicy> *)local_2a8,
             &(this->Icon).Getter);
  (pFVar2->_Icon).Value.StyleSetName = local_2d0;
  (pFVar2->_Icon).Value.StyleName = FStack_2c8;
  (pFVar2->_Icon).Value.SmallStyleName = local_2c0;
  (pFVar2->_Icon).Value.StatusOverlayStyleName = FStack_2b8;
  (pFVar2->_Icon).bIsSet = local_2b0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Icon).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2a8,
             (FWriteAccessScope *)&local_2e8);
  if ((local_298 != 0) && (FStack_2a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2a0,0,0,0x10);
    local_298 = 0;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_2a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2a8);
  pFVar2->_ForceSmallIcons = this->bForceSmallIcons;
  local_310 = 1;
  local_30c = 1;
  local_308 = 1;
  local_2f0 = 0;
  local_300 = (undefined1  [8])0x0;
  FStack_2f8.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_310 != &pFVar2->_padding_) {
    *(undefined4 *)&pFVar2->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar2->_padding_ + 4) = 1;
  }
  *(undefined1 *)&pFVar2->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar2->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_300);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_300,
             (FWriteAccessScope *)&local_2e8);
  if (((int)local_2f0 != 0) && (FStack_2f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2f8,0,0,0x10);
    local_2f0 = local_2f0 & 0xffffffff00000000;
  }
  if (local_2e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
  }
  if (FStack_2f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_300);
  this_00 = MakeTDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs>
                      (&local_280,"SToolBarComboButtonBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SToolBarComboButtonBlock.cpp"
                       ,0x3e,local_res8);
  pTVar3 = TSlateDecl<SToolBarComboButtonBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_290,pFVar2);
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)pTVar3->Object;
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
  if ((void *)local_40._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_40._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_268);
  return __return_storage_ptr__;
}

// CreateMenuEntry @ 1427fe390

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarComboButtonBlock::CreateMenuEntry(FToolBarComboButtonBlock *this,FMenuBuilder *param_1)

{
  bool bVar1;
  FText *pFVar2;
  FSlateIcon *pFVar3;
  undefined1 local_res8 [8];
  FText local_28;
  FText local_18;
  
  pFVar2 = TAttribute<FText>::Get(&this->Label);
  local_28.TextData.Reference = (pFVar2->TextData).Reference;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res8);
  }
  local_28.Flags = pFVar2->Flags;
  bVar1 = FText::IsEmpty(&local_28);
  if (bVar1) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"ToolBar",L"CustomControlLabel",L"Custom Control");
    FText::operator=(&local_28,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  pFVar3 = TAttribute<FSlateIcon>::Get(&this->Icon);
  pFVar2 = TAttribute<FText>::Get(&this->ToolTip);
  FMenuBuilder::AddWrapperSubMenu
            (param_1,&local_28,pFVar2,&this->MenuContentGenerator,pFVar3,
             (FUIAction *)&this->_padding_);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// HasIcon @ 142818910

bool __thiscall FToolBarComboButtonBlock::HasIcon(FToolBarComboButtonBlock *this)

{
  UObject *pUVar1;
  FSlateIcon *this_00;
  FSlateBrush *pFVar2;
  longlong lVar3;
  bool bVar4;
  
  this_00 = TAttribute<FSlateIcon>::Get(&this->Icon);
  pFVar2 = FSlateIcon::GetIcon(this_00);
  bVar4 = false;
  if (pFVar2->ResourceName == (FName)0x0) {
    pUVar1 = (pFVar2->ResourceObject).field0_0x0.DebugPtr;
    lVar3 = 0;
    if (pUVar1 != (UObject *)0x0) {
      lVar3 = *(longlong *)&pUVar1->field_0x18;
    }
    bVar4 = lVar3 == 0;
  }
  return !bVar4;
}

