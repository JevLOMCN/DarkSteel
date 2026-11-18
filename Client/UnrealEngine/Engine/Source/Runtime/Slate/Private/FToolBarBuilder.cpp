// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 22

// ~FToolBarBuilder @ 1427b9e50

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::~FToolBarBuilder(FToolBarBuilder *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CurrentSectionResizeParams).Getter
            );
  pvVar1 = *(void **)&(this->CurrentSectionResizeParams).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CurrentSectionResizeParams).Getter);
  FMenuEntryResizeParams::~FMenuEntryResizeParams(&(this->CurrentSectionResizeParams).Value);
  this->_padding_ = (longlong)&___7FMultiBoxBuilder__6B_;
  DestructItems<TSharedPtr<FExtender,1>,int>
            ((TSharedPtr<FExtender,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<TSharedPtr<FUICommandList_const_,1>,int>
            ((TSharedPtr<FUICommandList_const_,1> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// AddComboButton @ 1427c7250

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddComboButton
          (FToolBarBuilder *this,FUIAction *param_1,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_2,
          TAttribute<FText> *param_3,TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,
          bool param_6,FName param_7,TAttribute<EVisibility> *param_8,TAttribute<FText> *param_9,
          TAttribute<EMenuPlacement> *param_10,EUserInterfaceActionType param_11,
          TAttribute<FMenuEntryResizeParams> *param_12)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FMultiBox *this_01;
  void *pvVar1;
  ITextData *pIVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  TAttribute<EMenuPlacement> *pTVar7;
  undefined1 auVar8 [8];
  FToolBarComboButtonBlock *this_02;
  FToolBarComboButtonBlock *pFVar9;
  FName FVar10;
  atomic<int> *paVar11;
  undefined1 local_a8 [16];
  TSharedRef<FToolBarComboButtonBlock,1> local_98;
  undefined1 local_88 [8];
  undefined1 auStack_80 [8];
  void *local_78;
  undefined4 local_70;
  TAttribute<FText> local_68;
  
  (**(code **)(this->_padding_ + 0x18))();
  this_02 = ::operator_new(0x2d8);
  auVar8 = local_88;
  pTVar7 = param_10;
  pFVar9 = (FToolBarComboButtonBlock *)0x0;
  if (this_02 != (FToolBarComboButtonBlock *)0x0) {
    uVar3 = param_10->Value;
    uVar4 = param_10->bIsSet;
    local_88[4] = uVar4;
    local_88._0_4_ = uVar3;
    local_88._5_3_ = auVar8._5_3_;
    TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<enum_EMenuPlacement___cdecl(void),FDefaultDelegateUserPolicy>
              (auStack_80,&param_10->Getter);
    local_68.Value.TextData.Reference = (param_9->Value).TextData.Reference;
    if (local_68.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.Value.TextData.Reference + 8))
                (local_68.Value.TextData.Reference,&param_10);
    }
    local_68.Value.Flags = (param_9->Value).Flags;
    local_68.bIsSet = param_9->bIsSet;
    local_68.Getter._0_8_ = 0;
    local_68.Getter._8_8_ = 0;
    local_68.Getter._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_68.Getter,&param_9->Getter);
    pFVar9 = FToolBarComboButtonBlock::FToolBarComboButtonBlock
                       (this_02,param_1,param_2,param_3,param_4,param_5,param_6,&local_68,
                        (TAttribute<EMenuPlacement> *)local_88,param_11);
  }
  TSharedRef<FToolBarComboButtonBlock,1>::
  TSharedRef<FToolBarComboButtonBlock,1><FToolBarComboButtonBlock>(&local_98,pFVar9);
  pFVar9 = local_98.Object;
  if ((this->LabelVisibility).bIsSet != false) {
    if ((TOptional<EVisibility> *)local_a8 != &(local_98.Object)->LabelVisibility) {
      ((local_98.Object)->LabelVisibility).TypedValue.Value.Value =
           (this->LabelVisibility).TypedValue.Value.Value;
      ((local_98.Object)->LabelVisibility).bIsSet = true;
    }
  }
  (local_98.Object)->bForceSmallIcons = this->bForceSmallIcons;
  local_88 = (undefined1  [8])0x0;
  auStack_80 = (undefined1  [8])0x0;
  FVar10 = GenerateTutorialIdentifierName
                     ((FName)&param_10,(FName)this->_padding_,
                      (TSharedPtr<FUICommandInfo_const_,1> *)param_7,(int)local_88);
  auVar8 = local_88;
  local_70 = 0;
  auStack_80 = (undefined1  [8])0x0;
  local_78 = (void *)0x0;
  *(undefined8 *)((longlong)&pFVar9->_padding_ + 4) = *(undefined8 *)FVar10;
  *(FName *)((longlong)&pFVar9->_padding_ + 4) = this->CurrentStyleOverride;
  this_00 = &param_8->Getter;
  uVar5 = param_8->Value;
  uVar6 = param_8->bIsSet;
  local_88[1] = uVar6;
  local_88[0] = uVar5;
  local_88._2_6_ = auVar8._2_6_;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_80,this_00);
  *(undefined1 *)&pFVar9->_padding_ = local_88[0];
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = local_88[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar9->_padding_,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_80);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_80);
  TAttribute<FMenuEntryResizeParams>::operator=
            ((TAttribute<FMenuEntryResizeParams> *)&pFVar9->_padding_,param_12);
  local_88 = (undefined1  [8])local_98.Object;
  auStack_80 = (undefined1  [8])local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar11 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar11 = &(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  UE::Slate::Private::ApplySectionOverridesToBlock
            ((TSharedRef<FMultiBlock,1> *)local_88,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  this_01 = (FMultiBox *)this->_padding_;
  local_88 = (undefined1  [8])local_98.Object;
  auStack_80 = (undefined1  [8])local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar11 = (atomic<int>)((int)*paVar11 + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_01,(TSharedRef<FMultiBlock_const_,1> *)local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_8->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_9->Getter);
  pvVar1 = *(void **)&(param_9->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_9->Getter);
  pIVar2 = (param_9->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar7->Getter);
  pvVar1 = *(void **)&(pTVar7->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar7->Getter);
  return;
}

// AddSeparator @ 1427c9980

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddSeparator
          (FToolBarBuilder *this,FName param_1,TAttribute<EVisibility> *param_2,
          TAttribute<FMenuEntryResizeParams> *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  TReferenceControllerBase<1> *pTVar7;
  FMultiBlock *pFVar8;
  TSharedRef<FMultiBlock,1> local_a8;
  TSharedRef<FMultiBlock_const_,1> local_98;
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FUICommandInfo_const_,1> local_78;
  FDestructionSentinel local_68;
  uchar local_50;
  bool local_4f;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_1);
  pTVar7 = ::operator_new(0x1d8);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar8 = (FMultiBlock *)&DAT_00000010;
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFToolBarSeparatorBlock___00_SharedPointerInternals__6B_
    ;
    local_88.Object = (FUICommandList *)0x0;
    local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_78.Object = (FUICommandInfo *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              ((FMultiBlock *)(pTVar7 + 1),&local_78,&local_88,param_1,Separator,false);
    pFVar8 = (FMultiBlock *)(pTVar7 + 1);
    pTVar7[1]._padding_ = (longlong)&___7FToolBarSeparatorBlock__6B_;
    if (pFVar8 == (FMultiBlock *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_1427c9acc;
    }
  }
  if (((*(longlong *)&pFVar8->_padding_ == 0) || (pFVar8->_padding_ == 0)) ||
     (*(int *)(pFVar8->_padding_ + 8) < 1)) {
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar8->_padding_ = pFVar8;
    if (pTVar7 != (TReferenceControllerBase<1> *)pFVar8->_padding_) {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar8->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar8->_padding_ = (longlong)pTVar7;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  }
LAB_1427c9acc:
  pFVar8->StyleNameOverride = this->CurrentStyleOverride;
  local_50 = (param_2->Value).Value.Value;
  local_4f = param_2->bIsSet;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,
             &param_2->Getter);
  (pFVar8->VisibilityOverride).Value.Value.Value = local_50;
  (pFVar8->VisibilityOverride).bIsSet = local_4f;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(pFVar8->VisibilityOverride).Getter,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_68);
  if ((local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  TAttribute<FMenuEntryResizeParams>::operator=(&pFVar8->ResizeParams,param_3);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8.Object = pFVar8;
  local_a8.SharedReferenceCount.ReferenceController = pTVar7;
  UE::Slate::Private::ApplySectionOverridesToBlock(&local_a8,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_98.Object = pFVar8;
  local_98.SharedReferenceCount.ReferenceController = pTVar7;
  FMultiBox::AddMultiBlock(this_00,&local_98);
  (**(code **)(this->_padding_ + 0x10))(this,param_1,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_2->Getter);
  pvVar4 = *(void **)&(param_2->Getter).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_2->Getter);
  return;
}

// AddToolBarButton @ 1427cb4c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FToolBarButtonBlock,1> * __thiscall
FToolBarBuilder::AddToolBarButton
          (FToolBarBuilder *this,TSharedPtr<FToolBarButtonBlock,1> *__return_storage_ptr__,
          FUIAction *param_1,FName param_2,TAttribute<FText> *param_3,TAttribute<FText> *param_4,
          TAttribute<FSlateIcon> *param_5,EUserInterfaceActionType param_6,FName param_7,
          TAttribute<EVisibility> *param_8,TAttribute<FText> *param_9,
          TAttribute<FMenuEntryResizeParams> *param_10)

{
  FMultiBox *this_00;
  void *pvVar1;
  ITextData *pIVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  TAttribute<FText> *pTVar5;
  TAttribute<FText> *this_01;
  undefined1 auVar6 [8];
  FToolBarButtonBlock *this_02;
  FToolBarButtonBlock *pFVar7;
  FName FVar8;
  atomic<int> *paVar9;
  ITextData local_88 [2];
  TSharedRef<FToolBarButtonBlock,1> local_78;
  undefined1 local_68 [8];
  undefined1 auStack_60 [8];
  void *local_58;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> local_50;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_2,0);
  this_02 = ::operator_new(0x328);
  pTVar5 = param_9;
  pFVar7 = (FToolBarButtonBlock *)0x0;
  if (this_02 != (FToolBarButtonBlock *)0x0) {
    local_68 = (undefined1  [8])(param_9->Value).TextData.Reference;
    if (local_68 != (undefined1  [8])0x0) {
      (**(code **)((longlong)*(ITextData *)local_68 + 8))(local_68,&param_9);
    }
    auStack_60._0_4_ = (pTVar5->Value).Flags;
    local_58 = (void *)CONCAT71(local_58._1_7_,pTVar5->bIsSet);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    local_50._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_50,&pTVar5->Getter);
    pFVar7 = FToolBarButtonBlock::FToolBarButtonBlock
                       (this_02,param_3,param_4,param_5,param_1,param_6,
                        (TAttribute<FText> *)local_68);
  }
  TSharedRef<FToolBarButtonBlock,1>::TSharedRef<FToolBarButtonBlock,1><FToolBarButtonBlock>
            (&local_78,pFVar7);
  pFVar7 = local_78.Object;
  if ((this->LabelVisibility).bIsSet != false) {
    if (local_88 != (ITextData *)&(local_78.Object)->LabelVisibility) {
      ((local_78.Object)->LabelVisibility).TypedValue.Value.Value =
           (this->LabelVisibility).TypedValue.Value.Value;
      ((local_78.Object)->LabelVisibility).bIsSet = true;
    }
  }
  (local_78.Object)->bIsFocusable = this->bIsFocusable;
  (local_78.Object)->bForceSmallIcons = this->bForceSmallIcons;
  local_68 = (undefined1  [8])0x0;
  auStack_60 = (undefined1  [8])0x0;
  FVar8 = GenerateTutorialIdentifierName
                    ((FName)&param_9,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_7,(int)local_68);
  auVar6 = local_68;
  local_50._0_8_ = local_50._0_8_ & 0xffffffff00000000;
  auStack_60 = (undefined1  [8])0x0;
  local_58 = (void *)0x0;
  *(undefined8 *)((longlong)&pFVar7->_padding_ + 4) = *(undefined8 *)FVar8;
  *(FName *)((longlong)&pFVar7->_padding_ + 4) = this->CurrentStyleOverride;
  uVar3 = param_8->Value;
  uVar4 = param_8->bIsSet;
  local_68[1] = uVar4;
  local_68[0] = uVar3;
  local_68._2_6_ = auVar6._2_6_;
  param_9 = (TAttribute<FText> *)&param_8->Getter;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_60,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)param_9);
  *(undefined1 *)&pFVar7->_padding_ = local_68[0];
  *(undefined1 *)((longlong)&pFVar7->_padding_ + 1) = local_68[1];
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar7->_padding_,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_60);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_60);
  TAttribute<FMenuEntryResizeParams>::operator=
            ((TAttribute<FMenuEntryResizeParams> *)&pFVar7->_padding_,param_10);
  local_68 = (undefined1  [8])local_78.Object;
  auStack_60 = (undefined1  [8])local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar9 = &(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  UE::Slate::Private::ApplySectionOverridesToBlock
            ((TSharedRef<FMultiBlock,1> *)local_68,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  this_00 = (FMultiBox *)this->_padding_;
  local_68 = (undefined1  [8])local_78.Object;
  auStack_60 = (undefined1  [8])local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,(TSharedRef<FMultiBlock_const_,1> *)local_68);
  (**(code **)(this->_padding_ + 0x10))(this,param_2,1);
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_78.SharedReferenceCount.ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  this_01 = param_9;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_9);
  pvVar1 = *(void **)&(this_01->Value).Flags;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_01);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
  pvVar1 = *(void **)&(pTVar5->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar5->Getter);
  pIVar2 = (pTVar5->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return __return_storage_ptr__;
}

// AddToolBarButton @ 1427cb7c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedPtr<FToolBarButtonBlock,1> * __thiscall
FToolBarBuilder::AddToolBarButton
          (FToolBarBuilder *this,TSharedPtr<FToolBarButtonBlock,1> *__return_storage_ptr__,
          TSharedPtr<FUICommandInfo_const_,1> *param_1,FName param_2,TAttribute<FText> *param_3,
          TAttribute<FText> *param_4,TAttribute<FSlateIcon> *param_5,FName param_6,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_7,
          TAttribute<EVisibility> *param_8,TAttribute<FText> *param_9,
          TAttribute<FMenuEntryResizeParams> *param_10)

{
  int iVar1;
  FUICommandInfo *pFVar2;
  FMultiBox *this_00;
  void *pvVar3;
  ITextData *pIVar4;
  code *pcVar5;
  TAttribute<FText> *pTVar6;
  bool bVar7;
  uint uVar8;
  FToolBarButtonBlock *pFVar9;
  TSharedPtr<FToolBarButtonBlock,1> *pTVar10;
  FName FVar11;
  uint uVar12;
  longlong lVar13;
  TReferenceControllerBase<1> *pTVar14;
  atomic<int> *paVar15;
  undefined4 local_res8 [2];
  TReferenceControllerBase<1> *local_res10;
  undefined1 local_108 [8];
  uchar local_100;
  undefined1 local_ff;
  undefined1 local_f8 [8];
  void *pvStack_f0;
  undefined4 local_e8;
  TSharedPtr<FUICommandList_const_,1> local_e0;
  TSharedPtr<FUICommandInfo_const_,1> local_d0;
  FUICommandInfo *local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedRef<FToolBarButtonBlock,1> local_a8;
  TAttribute<FText> local_98;
  TSharedRef<FMultiBlock,1> local_68;
  TSharedRef<FMultiBlock_const_,1> local_58 [2];
  
  bVar7 = false;
  local_res8[0] = 0;
  local_res10 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_2,0);
  pFVar9 = ::operator_new(0x328);
  pTVar6 = param_9;
  if (pFVar9 == (FToolBarButtonBlock *)0x0) {
    pFVar9 = (FToolBarButtonBlock *)0x0;
    pTVar14 = local_res10;
  }
  else {
    local_98.Value.TextData.Reference = (param_9->Value).TextData.Reference;
    if (local_98.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.Value.TextData.Reference + 8))
                (local_98.Value.TextData.Reference,&param_9);
    }
    local_98.Value.Flags = (pTVar6->Value).Flags;
    local_98.bIsSet = pTVar6->bIsSet;
    local_98.Getter._0_8_ = 0;
    local_98.Getter._8_8_ = 0;
    local_98.Getter._16_4_ = 0;
    TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&local_98.Getter,&pTVar6->Getter);
    iVar1 = (int)this->_padding_;
    uVar12 = iVar1 - 1;
    uVar8 = 0;
    if ((int)uVar12 < iVar1) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FToolBarButtonBlock,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    lVar13 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
    local_e0.Object = *(FUICommandList **)(lVar13 + -0x10);
    local_e0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar13 + -8);
    if (local_e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1->Object == (FUICommandInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FToolBarButtonBlock,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    pTVar14 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FUICommandInfo *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TSharedPtr<FToolBarButtonBlock,1> *)(*pcVar5)();
        return pTVar10;
      }
    }
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_d0.Object = pFVar2;
    local_d0.SharedReferenceCount.ReferenceController = pTVar14;
    pFVar9 = FToolBarButtonBlock::FToolBarButtonBlock
                       (pFVar9,&local_d0,&local_e0,param_3,param_4,param_5,&local_98);
    bVar7 = true;
  }
  TSharedRef<FToolBarButtonBlock,1>::TSharedRef<FToolBarButtonBlock,1><FToolBarButtonBlock>
            (&local_a8,pFVar9);
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  pFVar9 = local_a8.Object;
  if ((this->LabelVisibility).bIsSet != false) {
    if ((TOptional<EVisibility> *)local_108 != &(local_a8.Object)->LabelVisibility) {
      ((local_a8.Object)->LabelVisibility).TypedValue.Value.Value =
           (this->LabelVisibility).TypedValue.Value.Value;
      ((local_a8.Object)->LabelVisibility).bIsSet = true;
    }
  }
  (local_a8.Object)->bIsFocusable = this->bIsFocusable;
  (local_a8.Object)->bForceSmallIcons = this->bForceSmallIcons;
  local_c0 = param_1->Object;
  local_b8 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_b8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b8->SharedReferenceCount = (atomic<int>)((int)local_b8->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar11 = GenerateTutorialIdentifierName
                     ((FName)local_res8,(FName)this->_padding_,
                      (TSharedPtr<FUICommandInfo_const_,1> *)param_6,(int)&local_c0);
  *(undefined8 *)((longlong)&pFVar9->_padding_ + 4) = *(undefined8 *)FVar11;
  *(FName *)((longlong)&pFVar9->_padding_ + 4) = this->CurrentStyleOverride;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar9->CustomMenuDelegate,param_7);
  local_f8 = (undefined1  [8])0x0;
  pvStack_f0 = (void *)0x0;
  local_e8 = 0;
  local_100 = (param_8->Value).Value.Value;
  local_ff = param_8->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,
             &param_8->Getter);
  *(uchar *)&pFVar9->_padding_ = local_100;
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = local_ff;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)&pFVar9->_padding_,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f8);
  if (pvStack_f0 != (void *)0x0) {
    FMemory::Free(pvStack_f0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f8);
  TAttribute<FMenuEntryResizeParams>::operator=
            ((TAttribute<FMenuEntryResizeParams> *)&pFVar9->_padding_,param_10);
  local_68.Object = (FMultiBlock *)local_a8.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar15 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar15 = &(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  UE::Slate::Private::ApplySectionOverridesToBlock(&local_68,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  this_00 = (FMultiBox *)this->_padding_;
  local_58[0].Object = (FMultiBlock *)local_a8.Object;
  local_58[0].SharedReferenceCount.ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,local_58);
  (**(code **)(this->_padding_ + 0x10))(this,param_2,1);
  pTVar14 = local_res10;
  local_res10->_padding_ = (longlong)pFVar9;
  ((FSharedReferencer<1> *)&local_res10->SharedReferenceCount)->ReferenceController =
       local_a8.SharedReferenceCount.ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_7);
  if (*(void **)&param_7->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_7->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_7);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_8->Getter);
  pvVar3 = *(void **)&(param_8->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_8->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
  pvVar3 = *(void **)&(pTVar6->Getter).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&pTVar6->Getter);
  pIVar4 = (pTVar6->Value).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  return (TSharedPtr<FToolBarButtonBlock,1> *)pTVar14;
}

// AddToolBarButton @ 1427cbc60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::AddToolBarButton(FToolBarBuilder *this,FButtonArgs *param_1)

{
  EUserInterfaceActionType EVar1;
  int iVar2;
  FMultiBox *this_00;
  code *pcVar3;
  bool bVar4;
  FToolBarButtonBlock *this_01;
  TAttribute<FText> *pTVar5;
  FToolBarButtonBlock *pFVar6;
  TSharedRef<FUICommandInfo_const_,1> *pTVar7;
  FName FVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FToolBarButtonBlock *pFVar12;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_f8 [16];
  TSharedPtr<FToolBarButtonBlock,1> local_e8;
  TSharedPtr<FUICommandList_const_,1> local_d8;
  TSharedPtr<FUICommandInfo_const_,1> local_c8;
  FUICommandInfo *local_b8;
  TReferenceControllerBase<1> *local_b0;
  TAttribute<FText> local_a8;
  TSharedRef<FUICommandInfo_const_,1> local_78;
  TSharedRef<FMultiBlock_const_,1> local_68;
  TAttribute<FText> local_58;
  
  pFVar12 = (FToolBarButtonBlock *)0x0;
  local_res8[0] = 0;
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_1->ExtensionHook,0);
  EVar1 = param_1->UserInterfaceActionType;
  this_01 = ::operator_new(0x328);
  pFVar6 = pFVar12;
  if (EVar1 == None) {
    if (this_01 != (FToolBarButtonBlock *)0x0) {
      local_a8.Value.TextData.Reference = (param_1->ToolbarLabelOverride).Value.TextData.Reference;
      if (local_a8.Value.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.Value.TextData.Reference + 8))
                  (local_a8.Value.TextData.Reference,local_res8);
      }
      local_a8.Value.Flags = (param_1->ToolbarLabelOverride).Value.Flags;
      local_a8.bIsSet = (param_1->ToolbarLabelOverride).bIsSet;
      local_a8.Getter._0_8_ = 0;
      local_a8.Getter._8_8_ = 0;
      local_a8.Getter._16_4_ = 0;
      TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&local_a8.Getter,&(param_1->ToolbarLabelOverride).Getter)
      ;
      iVar2 = (int)this->_padding_;
      uVar9 = iVar2 - 1;
      uVar11 = 0;
      if ((int)uVar9 < iVar2) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar10 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
      local_d8.Object = *(FUICommandList **)(lVar10 + -0x10);
      local_d8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar10 + -8);
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar7 = TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(&param_1->Command,&local_78);
      local_c8.Object = pTVar7->Object;
      local_c8.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar6 = FToolBarButtonBlock::FToolBarButtonBlock
                         (this_01,&local_c8,&local_d8,&param_1->LabelOverride,
                          &param_1->ToolTipOverride,&param_1->IconOverride,&local_a8);
      pFVar12 = (FToolBarButtonBlock *)&DAT_00000001;
    }
  }
  else if (this_01 != (FToolBarButtonBlock *)0x0) {
    pTVar5 = TAttribute<FText>::TAttribute<FText>(&local_58,&param_1->ToolbarLabelOverride);
    pFVar6 = FToolBarButtonBlock::FToolBarButtonBlock
                       (this_01,&param_1->LabelOverride,&param_1->ToolTipOverride,
                        &param_1->IconOverride,&param_1->Action,param_1->UserInterfaceActionType,
                        pTVar5);
  }
  TSharedPtr<FToolBarButtonBlock,1>::TSharedPtr<FToolBarButtonBlock,1><FToolBarButtonBlock>
            (&local_e8,pFVar6);
  if (pFVar12 != (FToolBarButtonBlock *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  pFVar6 = local_e8.Object;
  if ((this->LabelVisibility).bIsSet != false) {
    if ((local_e8.Object == (FToolBarButtonBlock *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((this->LabelVisibility).bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((TOptional<EVisibility> *)local_f8 != &pFVar6->LabelVisibility) {
      (pFVar6->LabelVisibility).TypedValue.Value.Value =
           (this->LabelVisibility).TypedValue.Value.Value;
      (pFVar6->LabelVisibility).bIsSet = true;
    }
  }
  if ((pFVar6 == (FToolBarButtonBlock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6->bIsFocusable = this->bIsFocusable;
  pFVar6->bForceSmallIcons = this->bForceSmallIcons;
  local_b8 = (param_1->Command).Object;
  local_b0 = (param_1->Command).SharedReferenceCount.ReferenceController;
  if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar8 = GenerateTutorialIdentifierName
                    ((FName)local_res10,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_1->TutorialHighlightName,
                     (int)&local_b8);
  *(undefined8 *)((longlong)&pFVar6->_padding_ + 4) = *(undefined8 *)FVar8;
  *(FName *)((longlong)&pFVar6->_padding_ + 4) = this->CurrentStyleOverride;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar6->CustomMenuDelegate,&param_1->CustomMenuDelegate);
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar6->OnGetMenuContent,&param_1->OnGetMenuContent);
  TDelegate<TSharedRef<SWidget,1>___cdecl(TSharedRef<SWidget,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar6->GetDecoratedButtonDelegate,&param_1->GetDecoratedButtonDelegate);
  if (EVar1 != None) {
    *(FName *)((longlong)&pFVar6->_padding_ + 4) = this->CurrentStyleOverride;
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>(&pFVar6->CustomMenuDelegate,&param_1->CustomMenuDelegate);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = (FMultiBlock *)local_e8.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_e8.SharedReferenceCount.ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  (**(code **)(this->_padding_ + 0x10))(this,param_1->ExtensionHook,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  return;
}

// AddToolBarWidget @ 1427cc280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddToolBarWidget
          (FToolBarBuilder *this,TSharedRef<SWidget,1> *param_1,TAttribute<FText> *param_2,
          FName param_3,bool param_4,TAttribute<FText> *param_5)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SVerticalBox *pSVar6;
  FMultiBox *this_00;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  int iVar10;
  FArguments *pFVar11;
  TSharedRef<FTagMetaData,1> *pTVar12;
  FSlot *pFVar13;
  FSizeParam *pFVar14;
  FSlot *pFVar15;
  FArguments *pFVar16;
  ulong64 uVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  TSharedRef<SVerticalBox,1> *pTVar19;
  FText *pFVar20;
  undefined ***pppuVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  undefined1 auStackY_dc8 [32];
  T0RequiredArgs local_d78;
  T0RequiredArgs local_d77 [3];
  FLLMScope local_d74;
  FLLMScope local_d70 [2];
  FToolBarStyle *local_d68;
  FArguments *local_d60;
  FTagMetaData *local_d58;
  TReferenceControllerBase<1> *local_d50;
  FText local_d48;
  undefined1 local_d38;
  undefined1 local_d30 [8];
  ForAnyElementType FStack_d28;
  int local_d20;
  FText local_d18;
  bool local_d08;
  undefined1 local_d00 [8];
  ForAnyElementType FStack_cf8;
  int local_cf0;
  FToolBarBuilder *local_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined1 local_cd0;
  undefined1 local_cc8 [8];
  ForAnyElementType FStack_cc0;
  ulonglong local_cb8;
  undefined8 local_cb0;
  FSharedReferencer<1> local_ca8;
  undefined1 local_ca0 [4];
  undefined1 local_c9c [4];
  FSlot *local_c98;
  FName local_c90;
  FMemScope local_c88;
  FName local_c80;
  FMemScope local_c78;
  undefined8 local_c70;
  FSharedReferencer<1> local_c68;
  FTagMetaData local_c60;
  FDestructionSentinel local_c50;
  FDestructionSentinel local_c38;
  FDestructionSentinel local_c20;
  FDestructionSentinel local_c08;
  longlong *local_bf0;
  FDestructionSentinel local_be8;
  longlong *local_bd0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_bc8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_bb0;
  TSharedRef<FWidgetBlock,1> local_b98;
  TSharedRef<FMultiBlock_const_,1> local_b88;
  TSharedRef<FTagMetaData,1> local_b78;
  TSharedRef<SVerticalBox,1> local_b68;
  TSharedRef<STextBlock,1> local_b58;
  undefined1 local_b48 [16];
  undefined1 local_b38 [32];
  undefined1 local_b18 [24];
  undefined1 local_b00 [16];
  undefined1 local_af0 [32];
  undefined1 local_ad0 [24];
  undefined8 *local_ab8;
  STextBlock *local_ab0;
  FSharedReferencer<1> local_aa8 [3];
  undefined1 local_a90;
  undefined1 local_a88 [24];
  undefined4 local_a70;
  undefined1 local_a6c;
  FSlotArgumentsMixin local_a60;
  undefined8 *local_9d0;
  SWidget *local_9c8;
  FSharedReferencer<1> local_9c0 [4];
  undefined1 local_9a0 [24];
  undefined4 local_988;
  undefined1 local_984;
  FSlotArgumentsMixin local_978;
  FMenuEntryStyleParams local_8e8;
  FArguments local_820;
  FArguments local_618;
  code *local_b8;
  undefined **local_a8;
  SWidget *local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined ***local_90;
  code *local_88;
  longlong local_78 [3];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_dc8;
  local_ce8 = this;
  (**(code **)(this->_padding_ + 0x18))();
  plVar22 = *(longlong **)(this->_padding_ + 0x60);
  local_d68 = (FToolBarStyle *)
              (**(code **)(*plVar22 + 0xa0))
                        (plVar22,FToolBarStyle::TypeName,*(undefined8 *)(this->_padding_ + 0x68));
  if (local_d68 == (FToolBarStyle *)0x0) {
    local_d68 = FToolBarStyle::GetDefault();
  }
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar11 = SVerticalBox::FArguments::FArguments(&local_820);
  local_c60._padding_ = (longlong)&___7FTagMetaData__6B_;
  plVar22 = &pFVar11->_padding_;
  local_c60.Tag = param_3;
  pTVar12 = MakeShared<FTagMetaData,1,FTagMetaData_&>(&local_b78,&local_c60);
  local_d58 = pTVar12->Object;
  local_d50 = (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_d50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d50->SharedReferenceCount = (atomic<int>)((int)local_d50->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((((FTagMetaData **)*plVar22 <= &local_d58) &&
      (&local_d58 <
       (FTagMetaData **)*plVar22 + (longlong)*(int *)((longlong)&pFVar11->_padding_ + 4) * 2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (int)pFVar11->_padding_;
  piVar1 = (int *)((longlong)&pFVar11->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)plVar22,piVar1);
  }
  puVar23 = (undefined8 *)(*plVar22 + (longlong)iVar10 * 0x10);
  *(int *)&pFVar11->_padding_ = iVar10 + 1;
  *puVar23 = local_d58;
  puVar23[1] = local_d50;
  if (local_d50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_d50->SharedReferenceCount = (atomic<int>)((int)local_d50->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b78.SharedReferenceCount.ReferenceController);
  local_d48.TextData.Reference = (param_5->Value).TextData.Reference;
  if (local_d48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d48.TextData.Reference + 8))
              (local_d48.TextData.Reference,local_ca0);
  }
  local_d48.Flags = (param_5->Value).Flags;
  local_d38 = param_5->bIsSet;
  pFVar15 = (FSlot *)0x0;
  local_d30 = (undefined1  [8])0x0;
  FStack_d28.Data = (FScriptContainerElement *)0x0;
  local_d20 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d30,&param_5->Getter
            );
  FText::operator=((FText *)pFVar11,&local_d48);
  *(undefined1 *)&pFVar11->_padding_ = local_d38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d30,
             (FWriteAccessScope *)&local_c50);
  if ((local_d20 != 0) && (FStack_d28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d28,0,0,0x10);
    local_d20 = 0;
  }
  if (local_c50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c50.Accessor,&local_c50);
  }
  if (FStack_d28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d30);
  if (local_d48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d48.TextData.Reference + 0x10))();
  }
  pFVar13 = ::operator_new(0x58);
  local_d60 = (FArguments *)pFVar15;
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    local_d60 = (FArguments *)SVerticalBox::FSlot::FSlot(pFVar13);
  }
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_9d0,(FSlot *)&local_d60);
  pFVar14 = (FSizeParam *)FAuto::FAuto((FAuto *)local_b48);
  TOptional<FSizeParam>::operator=(&local_978._SizeParam,pFVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b18);
  if ((void *)local_b18._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b18._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b18);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b38);
  if ((void *)local_b38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_b38);
  local_988 = 2;
  local_984 = 1;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c70 = 0;
  local_c68.ReferenceController = pTVar2;
  local_9c8 = pSVar3;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_9c0,&local_c68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c68.ReferenceController);
  local_d60 = SVerticalBox::FArguments::operator+(pFVar11,(FSlotArguments *)&local_9d0);
  pFVar13 = ::operator_new(0x58);
  if (pFVar13 != (FSlot *)0x0) {
    *(undefined8 *)pFVar13 = 0;
    *(undefined8 *)&pFVar13->field_0x8 = 0;
    *(undefined8 *)&pFVar13->field_0x10 = 0;
    *(undefined8 *)&pFVar13->field_0x18 = 0;
    *(undefined8 *)&pFVar13->field_0x20 = 0;
    *(undefined8 *)&pFVar13->field_0x28 = 0;
    *(undefined8 *)&pFVar13->field_0x30 = 0;
    *(undefined8 *)&pFVar13->field_0x38 = 0;
    *(undefined8 *)&pFVar13->field_0x40 = 0;
    *(undefined8 *)&pFVar13->field_0x48 = 0;
    *(undefined8 *)&pFVar13->field_0x50 = 0;
    pFVar15 = SVerticalBox::FSlot::FSlot(pFVar13);
  }
  local_c98 = pFVar15;
  SVerticalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_ab8,(FSlot *)&local_c98);
  pFVar14 = (FSizeParam *)FAuto::FAuto((FAuto *)local_b00);
  TOptional<FSizeParam>::operator=(&local_a60._SizeParam,pFVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ad0);
  if ((void *)local_ad0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_ad0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ad0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_af0);
  if ((void *)local_af0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_af0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_af0);
  local_cd0 = 1;
  local_a90 = 1;
  local_cc8 = (undefined1  [8])0x0;
  FStack_cc0.Data = (FScriptContainerElement *)0x0;
  local_ce0._0_4_ = (local_d68->LabelPadding).Left;
  local_ce0._4_4_ = (local_d68->LabelPadding).Top;
  uStack_cd8._0_4_ = (local_d68->LabelPadding).Right;
  uStack_cd8._4_4_ = (local_d68->LabelPadding).Bottom;
  local_cb8 = 0;
  local_aa8[1].ReferenceController = (TReferenceControllerBase<1> *)local_ce0;
  local_aa8[2].ReferenceController = (TReferenceControllerBase<1> *)uStack_cd8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a88,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_cc8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_cc8,
             (FWriteAccessScope *)&local_c38);
  if (((int)local_cb8 != 0) && (FStack_cc0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_cc0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_cc0,0,0,0x10);
    local_cb8 = local_cb8 & 0xffffffff00000000;
  }
  if (local_c38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c38.Accessor,&local_c38);
  }
  if (FStack_cc0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_cc0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_cc8);
  local_a70 = 2;
  local_a6c = 1;
  pFVar16 = STextBlock::FArguments::FArguments(&local_618);
  bVar9 = (local_ce8->LabelVisibility).bIsSet;
  if (bVar9 != false) {
    local_d78 = (T0RequiredArgs)(local_ce8->LabelVisibility).TypedValue.Value.Value;
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = (code *)0x0;
  local_60 = FMemory::Malloc(0x20,8);
  *(bool *)((longlong)local_60 + 9) = bVar9;
  *local_60 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_1>,0,1>::
               _vftable_;
  if (bVar9 != false) {
    *(T0RequiredArgs *)(local_60 + 1) = local_d78;
  }
  local_60[2] = (longlong)pSVar3;
  local_60[3] = (longlong)pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((T0RequiredArgs *)(local_60 + 1) != (T0RequiredArgs *)0x0) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_1>,EVisibility>
               ::Call;
  }
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (FWriteAccessScope *)&local_c08);
  local_bf0 = &pFVar16->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_bf0);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar17;
    *puVar23 = &
               ___7__TBaseFunctorDelegateInstance___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TFunction___A6A_AUEVisibility__XZ____V__6B_
    ;
    puVar23[4] = local_88;
    puVar23[9] = 0;
    if (local_88 != (code *)0x0) {
      plVar22 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar22 = local_60;
      }
      (**(code **)*plVar22)();
    }
  }
  if (local_c08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c08.Accessor,&local_c08);
  }
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = (undefined ***)0x0;
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FToolBarBuilder::AddToolBarWidget'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FToolBarBuilder::AddToolBarWidget'::__l2::<lambda_2>,bool>::Call;
  *(undefined1 *)((longlong)&pFVar16->_padding_ + 1) = 1;
  local_a0 = pSVar3;
  local_98 = pTVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_,
             (FWriteAccessScope *)&local_be8);
  local_bd0 = &pFVar16->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_bd0);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar17;
    *puVar23 = &
               ___7__TBaseFunctorDelegateInstance___A6A_NXZUFDefaultDelegateUserPolicy__V__TFunction___A6A_NXZ____V__6B_
    ;
    puVar23[4] = local_b8;
    puVar23[9] = 0;
    if (local_b8 != (code *)0x0) {
      pppuVar21 = &local_a8;
      if (local_90 != (undefined ***)0x0) {
        pppuVar21 = local_90;
      }
      (*(code *)**pppuVar21)();
    }
  }
  if (local_be8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_be8.Accessor,&local_be8);
  }
  local_d18.TextData.Reference = (param_2->Value).TextData.Reference;
  if (local_d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d18.TextData.Reference + 8))
              (local_d18.TextData.Reference,local_c9c);
  }
  local_d18.Flags = (param_2->Value).Flags;
  local_d08 = param_2->bIsSet;
  local_d00 = (undefined1  [8])0x0;
  FStack_cf8.Data = (FScriptContainerElement *)0x0;
  local_cf0 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_d00,&param_2->Getter
            );
  FText::operator=(&(pFVar16->_Text).Value,&local_d18);
  (pFVar16->_Text).bIsSet = local_d08;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar16->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_d00);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_d00,
             (FWriteAccessScope *)&local_c20);
  if ((local_cf0 != 0) && (FStack_cf8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_cf8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_cf8,0,0,0x10);
    local_cf0 = 0;
  }
  if (local_c20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c20.Accessor,&local_c20);
  }
  if (FStack_cf8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_cf8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d00);
  if (local_d18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d18.TextData.Reference + 0x10))();
  }
  pFVar16->_TextStyle = &local_d68->LabelStyle;
  FLLMScope::FLLMScope(&local_d74,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_c90 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c88,&local_c90,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_bb0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
             ,0x33b,&local_d78);
  FMemScope::~FMemScope(&local_c88);
  FLLMScope::~FLLMScope(&local_d74);
  pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_bb0,&local_b58,pFVar16);
  pTVar4 = (pTVar18->SharedReferenceCount).ReferenceController;
  local_ab0 = pTVar18->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_cb0 = 0;
  local_ca8.ReferenceController = pTVar4;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_aa8,&local_ca8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ca8.ReferenceController);
  pFVar11 = SVerticalBox::FArguments::operator+(local_d60,(FSlotArguments *)&local_ab8);
  FLLMScope::FLLMScope(local_d70,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_c80 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_c78,&local_c80,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_bc8,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
             ,0x32b,local_d77);
  FMemScope::~FMemScope(&local_c78);
  FLLMScope::~FLLMScope(local_d70);
  pTVar19 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_bc8,&local_b68,pFVar11);
  pTVar5 = (pTVar19->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar19->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = (SWidget *)pSVar6;
  (param_1->SharedReferenceCount).ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bc8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_bb0._Widget.SharedReferenceCount.ReferenceController);
  if (local_b8 != (code *)0x0) {
    pppuVar21 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar21 = local_90;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (local_88 != (code *)0x0) {
    plVar22 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar22 = local_60;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  STextBlock::FArguments::~FArguments(&local_618);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_a60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a88);
  if ((void *)local_a88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_aa8[0].ReferenceController);
  if (local_ab8 != (undefined8 *)0x0) {
    (**(code **)*local_ab8)(local_ab8,1);
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_978);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a0);
  if ((void *)local_9a0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_9a0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9c0[0].ReferenceController);
  if (local_9d0 != (undefined8 *)0x0) {
    (**(code **)*local_9d0)(local_9d0,1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_820._Slots.AllocatorInstance.Data,local_820._Slots.ArrayNum);
  if ((FSlotArguments *)local_820._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_820._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_820);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::FText(&EmptyTextAttribute.Value);
    EmptyTextAttribute.bIsSet = false;
    EmptyTextAttribute.Getter._16_8_ = 0;
    EmptyTextAttribute.Getter._0_8_ = 0;
    EmptyTextAttribute.Getter._8_8_ = 0;
    atexit(`FToolBarBuilder::AddToolBarWidget'::__l2::
           _dynamic_atexit_destructor_for__EmptyTextAttribute__);
    _Init_thread_footer(&::_TSS0);
  }
  FMenuEntryStyleParams::FMenuEntryStyleParams(&local_8e8);
  local_8e8.bNoIndent = true;
  pFVar20 = FText::GetEmpty();
  MakeShared<FWidgetBlock,1,TSharedRef<SWidget,1>_&,FText_const_&,TAttribute<FText>_const_&,FMenuEntryStyleParams_&>
            (&local_b98,param_1,pFVar20,&EmptyTextAttribute,&local_8e8);
  local_b88.Object = (FMultiBlock *)local_b98.Object;
  local_b88.SharedReferenceCount.ReferenceController =
       local_b98.SharedReferenceCount.ReferenceController;
  this_00 = (FMultiBox *)local_ce8->_padding_;
  if (local_b98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_b88);
  *(bool *)((longlong)&(local_b98.Object)->_padding_ + 4) = param_4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b98.SharedReferenceCount.ReferenceController);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_8e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddToolbarStackButton @ 1427ccf80

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddToolbarStackButton
          (FToolBarBuilder *this,TSharedPtr<FUICommandInfo_const_,1> *param_1,FName param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FUICommandList *pFVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FToolBarStackButtonBlock *this_01;
  TSharedRef<FUICommandInfo_const_,1> *pTVar7;
  FName FVar8;
  longlong lVar9;
  uint uVar10;
  FToolBarStackButtonBlock *pFVar11;
  undefined1 local_res10 [8];
  undefined1 local_a8 [8];
  TSharedPtr<FUICommandList_const_,1> local_a0;
  TSharedPtr<FUICommandInfo_const_,1> local_90;
  FUICommandInfo *local_80;
  TReferenceControllerBase<1> *local_78;
  TSharedRef<FToolBarStackButtonBlock,1> local_68;
  TSharedRef<FUICommandInfo_const_,1> local_58;
  TSharedRef<FMultiBlock_const_,1> local_48;
  
  (**(code **)(this->_padding_ + 0x18))();
  this_01 = ::operator_new(0x208);
  pFVar11 = (FToolBarStackButtonBlock *)0x0;
  if (this_01 != (FToolBarStackButtonBlock *)0x0) {
    iVar1 = (int)this->_padding_;
    uVar10 = iVar1 - 1;
    uVar6 = 0;
    if ((int)uVar10 < iVar1) {
      uVar6 = ~uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar9 = (longlong)(int)this->_padding_;
    pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + -8 + lVar9 * 0x10);
    pFVar3 = *(FUICommandList **)(this->_padding_ + -0x10 + lVar9 * 0x10);
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      pTVar7 = TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(param_1,&local_58);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      pTVar7 = TSharedPtr<FUICommandInfo_const_,1>::ToSharedRef(param_1,&local_58);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_90.Object = pTVar7->Object;
    local_90.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0.Object = pFVar3;
    local_a0.SharedReferenceCount.ReferenceController = pTVar2;
    FMultiBlock::FMultiBlock((FMultiBlock *)this_01,&local_90,&local_a0,(FName)0x0,None,false);
    this_01->_padding_ = (longlong)&___7FToolBarStackButtonBlock__6B_;
    *(undefined8 *)&(this_01->MenuContentGenerator).field_0x0 = 0;
    *(undefined8 *)&(this_01->MenuContentGenerator).field_0x8 = 0;
    *(undefined4 *)&(this_01->MenuContentGenerator).field_0x10 = 0;
    *(undefined2 *)&(this_01->LabelVisibility).bIsSet = 0;
    (this_01->CachedStackIdentifier).Object = (FUIIdentifierContext *)0x0;
    (this_01->CachedStackIdentifier).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this_01->CachedStackContent).Object = (FUIContentContext *)0x0;
    (this_01->CachedStackContent).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar7->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pFVar11 = this_01;
  }
  TSharedRef<FToolBarStackButtonBlock,1>::
  TSharedRef<FToolBarStackButtonBlock,1><FToolBarStackButtonBlock>(&local_68,pFVar11);
  pFVar11 = local_68.Object;
  if ((this->LabelVisibility).bIsSet != false) {
    if ((TOptional<EVisibility> *)local_a8 != &(local_68.Object)->LabelVisibility) {
      ((local_68.Object)->LabelVisibility).TypedValue.Value.Value =
           (this->LabelVisibility).TypedValue.Value.Value;
      ((local_68.Object)->LabelVisibility).bIsSet = true;
    }
  }
  (local_68.Object)->bForceSmallIcons = this->bForceSmallIcons;
  local_80 = param_1->Object;
  local_78 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_78 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar8 = GenerateTutorialIdentifierName
                    ((FName)local_res10,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_2,(int)&local_80);
  local_48.Object = (FMultiBlock *)local_68.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  *(undefined8 *)((longlong)&pFVar11->_padding_ + 4) = *(undefined8 *)FVar8;
  *(FName *)((longlong)&pFVar11->_padding_ + 4) = this->CurrentStyleOverride;
  this_00 = (FMultiBox *)this->_padding_;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddWidget @ 1427cde10

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddWidget
          (FToolBarBuilder *this,TSharedRef<SWidget,1> *param_1,FMenuEntryStyleParams *param_2,
          FName param_3,bool param_4,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_5,
          TAttribute<EVisibility> *param_6,TAttribute<FMenuEntryResizeParams> *param_7)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_118;
  TSharedRef<SWidget,1> local_100;
  TAttribute<EVisibility> local_f0;
  FMenuEntryStyleParams local_d0;
  
  FMenuEntryStyleParams::FMenuEntryStyleParams(&local_d0,param_2);
  if (local_d0.VerticalAlignment.bIsSet == false) {
    local_d0.VerticalAlignment.TypedValue = VAlign_Center;
    local_d0.VerticalAlignment.bIsSet = true;
  }
  local_f0.Getter._0_8_ = 0;
  local_f0.Getter._8_8_ = 0;
  local_f0.Getter._16_4_ = 0;
  local_f0.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)(param_6->Value).Value.Value;
  this_00 = &param_6->Getter;
  local_f0.bIsSet = param_6->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_f0.Getter,this_00);
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_118._16_4_ = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_118,param_5);
  local_100.Object = param_1->Object;
  local_100.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_100.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_100.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddWidgetInternal(this,&local_100,&local_d0,param_3,param_4,&local_118,&local_f0,param_7);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_6->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// AddWidget @ 1427cdfa0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddWidget
          (FToolBarBuilder *this,TSharedRef<SWidget,1> *param_1,FName param_2,bool param_3,
          EHorizontalAlignment param_4,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_5,
          TAttribute<EVisibility> *param_6)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  SWidget *local_228;
  TReferenceControllerBase<1> *local_220;
  bool local_218;
  FDestructionSentinel local_210;
  undefined1 local_1f8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1f0;
  ForAnyElementType FStack_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d0;
  ForAnyElementType FStack_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  undefined1 local_198 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_190;
  ForAnyElementType FStack_188;
  ulonglong local_180;
  int local_178;
  bool local_174;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_170;
  ForAnyElementType FStack_168;
  ulonglong local_160;
  undefined1 local_158 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_150;
  ForAnyElementType FStack_148;
  ulonglong local_140;
  bool local_137;
  bool local_135;
  bool local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  ulonglong local_118;
  undefined1 local_110 [80];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  float local_a8;
  bool local_a4;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  FOptionalSize local_88;
  bool local_84;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_80;
  ForAnyElementType FStack_78;
  ulonglong local_70;
  FOptionalSize local_68;
  bool local_64;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  ForAnyElementType FStack_58;
  ulonglong local_50;
  TAttribute<EVisibility> local_48;
  
  local_a8 = 0.0;
  local_a4 = false;
  local_84 = false;
  local_64 = false;
  local_110._4_4_ = param_4;
  local_88.Size = FOptionalSize::Unspecified;
  local_68.Size = FOptionalSize::Unspecified;
  local_110[0] = false;
  local_110[0xc] = false;
  local_110[0x14] = false;
  local_110[0x1c] = false;
  local_110[0x24] = false;
  local_110[0x2c] = false;
  local_110[0x34] = false;
  local_110[0x3c] = false;
  local_110[0x44] = false;
  local_110._72_4_ = 0.0;
  local_110[0x4c] = false;
  local_c0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  memset(local_1f8,0,200);
  local_1d8[0] = false;
  local_1d8[1] = false;
  local_1b8[0] = false;
  local_1b8[1] = false;
  local_198[0] = false;
  local_198[1] = false;
  local_174 = false;
  local_158[0] = Preferred;
  local_158[1] = false;
  local_137 = false;
  local_135 = false;
  local_130 = false;
  local_48.Value.Value.Value = (TEnumAsByte<EVisibility::Private>)(param_6->Value).Value.Value;
  local_48.bIsSet = param_6->bIsSet;
  local_1f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  local_1d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0 = 0;
  local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  local_190.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  local_178 = 0;
  local_170.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_150.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  this_00 = &param_6->Getter;
  local_48.Getter._16_4_ = 0;
  local_48.Getter._0_8_ = 0;
  local_48.Getter._8_8_ = 0;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&local_48.Getter,this_00);
  local_210.AccessType = Reader;
  local_210._4_4_ = 0;
  local_210.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
  local_210.bDestroyed = false;
  local_210._17_3_ = 0;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)&local_210,
             param_5);
  local_228 = param_1->Object;
  local_220 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_220 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_220->SharedReferenceCount = (atomic<int>)((int)local_220->SharedReferenceCount + 1);
    UNLOCK();
  }
  AddWidgetInternal(this,(TSharedRef<SWidget,1> *)&local_228,(FMenuEntryStyleParams *)local_110,
                    param_2,param_3,
                    (TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *)&local_210
                    ,&local_48,(TAttribute<FMenuEntryResizeParams> *)local_1f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_228);
  if (((int)local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = local_118 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_150,(FWriteAccessScope *)&local_228);
  if (((int)local_140 != 0) && (FStack_148.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_148.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_148,0,0,0x10);
    local_140 = local_140 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_148.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_150.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_170,(FWriteAccessScope *)&local_228);
  if (((int)local_160 != 0) && (FStack_168.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_168,0,0,0x10);
    local_160 = local_160 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_168.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_170.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_190,(FWriteAccessScope *)&local_228);
  if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
    local_180 = local_180 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_190.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1b0,(FWriteAccessScope *)&local_228);
  if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
    local_1a0 = local_1a0 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1d0,(FWriteAccessScope *)&local_228);
  if (((int)local_1c0 != 0) && (FStack_1c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c8,0,0,0x10);
    local_1c0 = local_1c0 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_1c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1f0,(FWriteAccessScope *)&local_228);
  if (((int)local_1e0 != 0) && (FStack_1e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1e8,0,0,0x10);
    local_1e0 = local_1e0 & 0xffffffff00000000;
  }
  if (local_218 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_220,(FDestructionSentinel *)&local_228);
  }
  if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1f0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_210);
  if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_210);
  if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_210);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_210);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_210.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_210.Accessor,&local_210);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_6->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// AddWidgetInternal @ 1427ce780

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::AddWidgetInternal
          (FToolBarBuilder *this,TSharedRef<SWidget,1> *param_1,FMenuEntryStyleParams *param_2,
          FName param_3,bool param_4,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_5,
          TAttribute<EVisibility> *param_6,TAttribute<FMenuEntryResizeParams> *param_7)

{
  int *piVar1;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SBox *pSVar6;
  FMultiBox *this_01;
  void *pvVar7;
  code *pcVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  int iVar11;
  FArguments *pFVar12;
  TSharedRef<FTagMetaData,1> *pTVar13;
  TSharedRef<SBox,1> *pTVar14;
  FText *pFVar15;
  undefined8 *puVar16;
  atomic<int> *paVar17;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FTagMetaData *local_568;
  TReferenceControllerBase<1> *local_560;
  uchar local_558;
  undefined1 local_557;
  undefined1 local_550 [8];
  void *pvStack_548;
  undefined4 local_540;
  float local_538;
  bool local_534;
  undefined1 local_530 [24];
  float local_518;
  bool local_514;
  undefined1 local_510 [24];
  FMemScope local_4f8;
  FTagMetaData local_4f0;
  TSharedRef<FTagMetaData,1> local_4e0;
  SWidget *local_4d0;
  TReferenceControllerBase<1> *pTStack_4c8;
  TSharedRef<SBox,1> local_4c0;
  TSharedRef<FWidgetBlock,1> local_4a8;
  TSharedRef<FMultiBlock_const_,1> local_498;
  TSharedRef<FMultiBlock,1> local_488;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_478;
  FMenuEntryStyleParams local_460;
  FArguments local_398;
  
  (**(code **)(this->_padding_ + 0x18))();
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar12 = SBox::FArguments::FArguments(&local_398);
  local_534 = (param_2->DesiredWidthOverride).bIsSet;
  local_538 = (param_2->DesiredWidthOverride).Value.Size;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_530,
             &(param_2->DesiredWidthOverride).Getter);
  (pFVar12->_WidthOverride).Value.Size = local_538;
  (pFVar12->_WidthOverride).bIsSet = local_534;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
  if ((void *)local_530._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_530._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_530);
  local_518 = (param_2->DesiredHeightOverride).Value.Size;
  local_514 = (param_2->DesiredHeightOverride).bIsSet;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)local_510,
             &(param_2->DesiredHeightOverride).Getter);
  (pFVar12->_HeightOverride).Value.Size = local_518;
  (pFVar12->_HeightOverride).bIsSet = local_514;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar12->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
  if ((void *)local_510._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_510._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_510);
  local_4f0._padding_ = (longlong)&___7FTagMetaData__6B_;
  plVar2 = &pFVar12->_padding_;
  local_4f0.Tag = param_3;
  pTVar13 = MakeShared<FTagMetaData,1,FTagMetaData_&>(&local_4e0,&local_4f0);
  local_568 = pTVar13->Object;
  local_560 = (pTVar13->SharedReferenceCount).ReferenceController;
  if (local_560 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_560->SharedReferenceCount = (atomic<int>)((int)local_560->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((FTagMetaData **)*plVar2 <= &local_568) &&
     (&local_568 <
      (FTagMetaData **)*plVar2 + (longlong)*(int *)((longlong)&pFVar12->_padding_ + 4) * 2)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = (int)pFVar12->_padding_;
  piVar1 = (int *)((longlong)&pFVar12->_padding_ + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)plVar2,piVar1);
  }
  puVar16 = (undefined8 *)(*plVar2 + (longlong)iVar11 * 0x10);
  *(int *)&pFVar12->_padding_ = iVar11 + 1;
  *puVar16 = local_568;
  puVar16[1] = local_560;
  if (local_560 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_560->SharedReferenceCount = (atomic<int>)((int)local_560->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_560);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4e0.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_4d0 = (pFVar12->_Content).Widget.Object;
  pTStack_4c8 = (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar12->_Content).Widget.Object = pSVar4;
  (pFVar12->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_4c8);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_4f8,&local_res20,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_478,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
             ,0x388,local_res10);
  FMemScope::~FMemScope(&local_4f8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar14 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_478,&local_4c0,pFVar12);
  pTVar5 = (pTVar14->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar14->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (param_1->SharedReferenceCount).ReferenceController;
  param_1->Object = (SWidget *)pSVar6;
  (param_1->SharedReferenceCount).ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_478._Widget.SharedReferenceCount.ReferenceController);
  SBox::FArguments::~FArguments(&local_398);
  FMenuEntryStyleParams::FMenuEntryStyleParams(&local_460,param_2);
  local_460.bNoIndent = true;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::FText(&EmptyTextAttribute.Value);
      EmptyTextAttribute.bIsSet = false;
      EmptyTextAttribute.Getter._16_8_ = 0;
      EmptyTextAttribute.Getter._0_8_ = 0;
      EmptyTextAttribute.Getter._8_8_ = 0;
      atexit(`FToolBarBuilder::AddWidgetInternal'::__l2::
             _dynamic_atexit_destructor_for__EmptyTextAttribute__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar15 = FText::GetEmpty();
  MakeShared<FWidgetBlock,1,TSharedRef<SWidget,1>_&,FText_const_&,TAttribute<FText>_const_&,FMenuEntryStyleParams_&>
            (&local_4a8,param_1,pFVar15,&EmptyTextAttribute,&local_460);
  this_01 = (FMultiBox *)this->_padding_;
  local_498.Object = (FMultiBlock *)local_4a8.Object;
  local_498.SharedReferenceCount.ReferenceController =
       local_4a8.SharedReferenceCount.ReferenceController;
  if (local_4a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar17 = &(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_01,&local_498);
  *(bool *)((longlong)&(local_4a8.Object)->_padding_ + 4) = param_4;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(local_4a8.Object)->CustomMenuDelegate,param_5);
  local_540 = 0;
  local_550 = (undefined1  [8])0x0;
  pvStack_548 = (void *)0x0;
  local_558 = (param_6->Value).Value.Value;
  this_00 = &param_6->Getter;
  local_557 = param_6->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_550,this_00);
  *(uchar *)&(local_4a8.Object)->_padding_ = local_558;
  *(undefined1 *)((longlong)&(local_4a8.Object)->_padding_ + 1) = local_557;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(local_4a8.Object)->_padding_,
             (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_550);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_550);
  if (pvStack_548 != (void *)0x0) {
    FMemory::Free(pvStack_548);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_550);
  TAttribute<FMenuEntryResizeParams>::operator=
            ((TAttribute<FMenuEntryResizeParams> *)&(local_4a8.Object)->_padding_,param_7);
  local_488.Object = (FMultiBlock *)local_4a8.Object;
  local_488.SharedReferenceCount.ReferenceController =
       local_4a8.SharedReferenceCount.ReferenceController;
  if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  UE::Slate::Private::ApplySectionOverridesToBlock(&local_488,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a8.SharedReferenceCount.ReferenceController);
  FMenuEntryStyleParams::~FMenuEntryStyleParams(&local_460);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  if (*(void **)&param_5->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_5->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_5);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar7 = *(void **)&(param_6->Getter).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// ApplyHook @ 1427d1780

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::ApplyHook(FToolBarBuilder *this,FName param_1,Position param_2)

{
  int iVar1;
  FExtender *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  if ((char)this->_padding_ != '\0') {
    iVar1 = (int)this->_padding_;
    uVar5 = iVar1 - 1;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((param_1 != (FName)0x0) &&
       (this_00 = *(FExtender **)(this->_padding_ + -0x10 + (longlong)(int)this->_padding_ * 0x10),
       this_00 != (FExtender *)0x0)) {
      FExtender::Apply(this_00,param_1,param_2,this);
    }
  }
  return;
}

// ApplySectionBeginning @ 1427d1b20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::ApplySectionBeginning(FToolBarBuilder *this)

{
  FMultiBox *this_00;
  bool *pbVar1;
  TSharedRef<FMultiBlock_const_,1> local_18;
  
  if (this->bSectionNeedsToBeApplied != false) {
    if ((this->bSectionShouldHaveSeparator != false) &&
       ((0 < *(int *)(this->_padding_ + 0x58) ||
        (pbVar1 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks), *pbVar1 != false)
        ))) {
      MakeShared<FToolBarSeparatorBlock,1,FName_&>
                ((TSharedRef<FToolBarSeparatorBlock,1> *)&local_18,
                 &this->CurrentSectionExtensionHook);
      (local_18.Object)->StyleNameOverride = this->CurrentStyleOverride;
      TAttribute<FMenuEntryResizeParams>::operator=
                (&(local_18.Object)->ResizeParams,&this->CurrentSectionResizeParams);
      this_00 = (FMultiBox *)this->_padding_;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FMultiBox::AddMultiBlock(this_00,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
    this->bSectionNeedsToBeApplied = false;
  }
  return;
}

// BeginBlockGroup @ 1427d41f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::BeginBlockGroup(FToolBarBuilder *this)

{
  FMultiBox *this_00;
  FSharedReferencer<1> FVar1;
  FMultiBlock *this_01;
  TSharedRef<FGroupStartBlock,1> local_28;
  TSharedRef<FMultiBlock_const_,1> local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  this_01 = ::operator_new(0x1c8);
  if (this_01 == (FMultiBlock *)0x0) {
    this_01 = (FMultiBlock *)0x0;
  }
  else {
    local_28.Object = (FGroupStartBlock *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (FMultiBlock *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              (this_01,(TSharedPtr<FUICommandInfo_const_,1> *)&local_18,
               (TSharedPtr<FUICommandList_const_,1> *)&local_28,(FName)0x0,None,false);
    this_01->_padding_ = (longlong)&___7FGroupStartBlock__6B_;
  }
  TSharedRef<FGroupStartBlock,1>::TSharedRef<FGroupStartBlock,1><FGroupStartBlock>
            (&local_28,(FGroupStartBlock *)this_01);
  FVar1.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  local_18.Object = (FMultiBlock *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  *(FName *)&(local_28.Object)->field_0xb4 = this->CurrentStyleOverride;
  this_00 = (FMultiBox *)this->_padding_;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  return;
}

// BeginSection @ 1427d4860

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::BeginSection
          (FToolBarBuilder *this,FName param_1,bool param_2,
          TAttribute<FMenuEntryResizeParams> *param_3)

{
  code *pcVar1;
  bool bVar2;
  bool *pbVar3;
  
  if (((this->CurrentSectionExtensionHook != (FName)0x0) ||
      (this->bSectionNeedsToBeApplied != false)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentSectionExtensionHook == NAME_None && !bSectionNeedsToBeApplied",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
                         ,0x3b4,L"Did you forget to call EndSection()?"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  this->bSectionNeedsToBeApplied = true;
  this->bSectionShouldHaveSeparator = param_2;
  this->CurrentSectionExtensionHook = param_1;
  TAttribute<FMenuEntryResizeParams>::operator=(&this->CurrentSectionResizeParams,param_3);
  pbVar3 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks);
  if (*pbVar3 != false) {
    (**(code **)(this->_padding_ + 0x18))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d492d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,2);
  return;
}

// BeginStyleOverride @ 1427d4940

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::BeginStyleOverride(FToolBarBuilder *this,FName param_1)

{
  this->CurrentStyleOverride = param_1;
  return;
}

// EndBlockGroup @ 142802060

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::EndBlockGroup(FToolBarBuilder *this)

{
  FMultiBox *this_00;
  FSharedReferencer<1> FVar1;
  FMultiBlock *this_01;
  TSharedRef<FGroupEndBlock,1> local_28;
  TSharedRef<FMultiBlock_const_,1> local_18;
  
  (**(code **)(this->_padding_ + 0x18))();
  this_01 = ::operator_new(0x1c8);
  if (this_01 == (FMultiBlock *)0x0) {
    this_01 = (FMultiBlock *)0x0;
  }
  else {
    local_28.Object = (FGroupEndBlock *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = (FMultiBlock *)0x0;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              (this_01,(TSharedPtr<FUICommandInfo_const_,1> *)&local_18,
               (TSharedPtr<FUICommandList_const_,1> *)&local_28,(FName)0x0,None,false);
    this_01->_padding_ = (longlong)&___7FGroupEndBlock__6B_;
  }
  TSharedRef<FGroupEndBlock,1>::TSharedRef<FGroupEndBlock,1><FGroupEndBlock>
            (&local_28,(FGroupEndBlock *)this_01);
  FVar1.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
  local_18.Object = (FMultiBlock *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  *(FName *)&(local_28.Object)->field_0xb4 = this->CurrentStyleOverride;
  this_00 = (FMultiBox *)this->_padding_;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  return;
}

// EndSection @ 142802700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::EndSection(FToolBarBuilder *this)

{
  FName FVar1;
  FDestructionSentinel local_118;
  undefined1 local_100 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  ForAnyElementType FStack_f0;
  ulonglong local_e8;
  undefined1 local_e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  ForAnyElementType FStack_d0;
  ulonglong local_c8;
  undefined1 local_c0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType FStack_b0;
  ulonglong local_a8;
  undefined1 local_a0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  ForAnyElementType FStack_90;
  ulonglong local_88;
  int local_80;
  bool local_7c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  ulonglong local_68;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  bool local_3f;
  bool local_3d;
  bool local_38;
  undefined1 local_30 [8];
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  FVar1 = this->CurrentSectionExtensionHook;
  (this->CurrentSectionExtensionHook).ComparisonIndex = 0;
  (this->CurrentSectionExtensionHook).Number = 0;
  memset(local_100,0,200);
  local_80 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_68 = 0;
  local_48 = 0;
  local_20 = 0;
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_f0.Data = (FScriptContainerElement *)0x0;
  local_e0[0] = false;
  local_e0[1] = false;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_d0.Data = (FScriptContainerElement *)0x0;
  local_c0[0] = false;
  local_c0[1] = false;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_b0.Data = (FScriptContainerElement *)0x0;
  local_a0[0] = false;
  local_a0[1] = false;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_90.Data = (FScriptContainerElement *)0x0;
  local_7c = false;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_70.Data = (FScriptContainerElement *)0x0;
  local_60[0] = Preferred;
  local_60[1] = false;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  local_3f = false;
  local_3d = false;
  local_38 = false;
  local_30 = (undefined1  [8])0x0;
  FStack_28.Data = (FScriptContainerElement *)0x0;
  FMenuEntryResizeParams::operator=
            (&(this->CurrentSectionResizeParams).Value,(FMenuEntryResizeParams *)local_100);
  (this->CurrentSectionResizeParams).bIsSet = local_38;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CurrentSectionResizeParams).Getter
             ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_30,
             (FWriteAccessScope *)&local_118);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_118);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_118);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_118);
  if (((int)local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_118);
  if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_118);
  if (((int)local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_118);
  if (((int)local_e8 != 0) && (FStack_f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f0,0,0,0x10);
    local_e8 = local_e8 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
  this->bSectionNeedsToBeApplied = false;
                    /* WARNING: Could not recover jumptable at 0x000142802b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,FVar1,1);
  return;
}

// EndStyleOverride @ 142802b40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::EndStyleOverride(FToolBarBuilder *this)

{
  (this->CurrentStyleOverride).ComparisonIndex = 0;
  (this->CurrentStyleOverride).Number = 0;
  return;
}

// InitializeToolBarButtonBlock @ 14281a8c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FToolBarBuilder::InitializeToolBarButtonBlock
          (FToolBarBuilder *this,TSharedPtr<FToolBarButtonBlock,1> *param_1,FButtonArgs *param_2)

{
  TOptional<EVisibility> *pTVar1;
  FToolBarButtonBlock *pFVar2;
  FMultiBox *this_00;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FName FVar6;
  undefined1 local_res8 [8];
  TEnumAsByte<EVisibility::Private> local_98 [8];
  FUICommandInfo *local_90;
  TReferenceControllerBase<1> *local_88;
  TSharedRef<FMultiBlock_const_,1> local_80;
  FDestructionSentinel local_70;
  FName local_58;
  undefined1 local_50;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  ulonglong local_38;
  
  if ((this->LabelVisibility).bIsSet != false) {
    if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = param_1->Object;
    if (((this->LabelVisibility).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = &pFVar2->LabelVisibility;
    if ((TOptional<EVisibility> *)local_98 != pTVar1) {
      (pTVar1->TypedValue).Value.Value = (this->LabelVisibility).TypedValue.Value.Value;
      (pFVar2->LabelVisibility).bIsSet = true;
    }
  }
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58 = param_2->BorderBrushName;
  pFVar2 = param_1->Object;
  local_50 = 1;
  local_48 = (undefined1  [8])0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  (pFVar2->BorderBrushName).Value = local_58;
  (pFVar2->BorderBrushName).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->BorderBrushName).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_70);
  if (((int)local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = local_38 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->Object->bIsFocusable = this->bIsFocusable;
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->Object->bForceSmallIcons = this->bForceSmallIcons;
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1->Object;
  local_90 = (param_2->Command).Object;
  local_88 = (param_2->Command).SharedReferenceCount.ReferenceController;
  if (local_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar6 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_2->TutorialHighlightName,
                     (int)&local_90);
  *(undefined8 *)((longlong)&pFVar2->_padding_ + 4) = *(undefined8 *)FVar6;
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&param_1->Object->CustomMenuDelegate,&param_2->CustomMenuDelegate);
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&param_1->Object->OnGetMenuContent,&param_2->OnGetMenuContent);
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(FName *)((longlong)&param_1->Object->_padding_ + 4) = this->CurrentStyleOverride;
  this_00 = (FMultiBox *)this->_padding_;
  if ((param_1->Object == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FToolBarButtonBlock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80.Object = (FMultiBlock *)pFVar2;
  local_80.SharedReferenceCount.ReferenceController = pTVar3;
  FMultiBox::AddMultiBlock(this_00,&local_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  (**(code **)(this->_padding_ + 0x10))(this,param_2->ExtensionHook,1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAllowWrapButton @ 142834ce0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::SetAllowWrapButton(FToolBarBuilder *this,TOptional<bool> *param_1)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (param_1 != (TOptional<bool> *)(lVar1 + 0x3a)) {
    if (param_1->bIsSet != false) {
      ((TOptional<bool> *)(lVar1 + 0x3a))->TypedValue = param_1->TypedValue;
      *(undefined1 *)(lVar1 + 0x3b) = 1;
      return;
    }
    if (*(char *)(lVar1 + 0x3b) != '\0') {
      *(undefined1 *)(lVar1 + 0x3b) = 0;
    }
  }
  return;
}

// SetIsFocusable @ 142834fe0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FToolBarBuilder::SetIsFocusable(FToolBarBuilder *this,bool param_1)

{
  this->bIsFocusable = param_1;
  *(bool *)(this->_padding_ + 0x39) = param_1;
  return;
}

