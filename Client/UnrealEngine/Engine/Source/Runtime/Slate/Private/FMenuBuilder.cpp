// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 21

// ~FMenuBuilder @ 142700d70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuBuilder::~FMenuBuilder(FMenuBuilder *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CurrentSectionVisibility).Getter);
  pvVar1 = *(void **)&(this->CurrentSectionVisibility).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CurrentSectionVisibility).Getter);
  pIVar2 = (this->CurrentSectionHeadingText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
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

// FMenuBuilder @ 1427b14d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuBuilder * __thiscall
FMenuBuilder::FMenuBuilder
          (FMenuBuilder *this,bool param_1,TSharedPtr<FUICommandList_const_,1> *param_2,
          TSharedPtr<FExtender,1> *param_3,bool param_4,ISlateStyle *param_5,bool param_6,
          FName param_7,bool param_8)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  atomic<int> *paVar3;
  FName local_res8;
  TSharedPtr<FUICommandList_const_,1> local_38;
  TSharedPtr<FExtender,1> local_28;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  local_28.Object = param_3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_38.Object = param_2->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  FMultiBoxBuilder::FMultiBoxBuilder
            ((FMultiBoxBuilder *)this,Menu,FMultiBoxCustomization::None,param_1,&local_38,&local_28,
             (FName)0x0,param_7);
  lVar2 = this->_padding_;
  this->_padding_ = (longlong)&___7FBaseMenuBuilder__6B_;
  *(bool *)&this->_padding_ = param_4;
  ::FName::FName(&local_res8,"Menu");
  *(ISlateStyle **)(lVar2 + 0x60) = param_5;
  *(FName *)(lVar2 + 0x68) = local_res8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7FMenuBuilder__6B_;
  (this->CurrentSectionExtensionHook).ComparisonIndex = 0;
  (this->CurrentSectionExtensionHook).Number = 0;
  FText::FText(&this->CurrentSectionHeadingText);
  (this->CurrentSectionVisibility).Value = (TEnumAsByte<EVisibility::Private>)0x19;
  (this->CurrentSectionVisibility).bIsSet = false;
  *(undefined8 *)&(this->CurrentSectionVisibility).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CurrentSectionVisibility).Getter = 0;
  *(undefined8 *)&(this->CurrentSectionVisibility).Getter.field_0x8 = 0;
  memset(&this->CurrentSectionResizeParams,0,200);
  (this->CurrentSectionResizeParams).bIsSet = false;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter = 0;
  *(undefined8 *)&(this->CurrentSectionResizeParams).Getter.field_0x8 = 0;
  this->bSectionNeedsToBeApplied = false;
  this->bSearchable = param_6;
  this->bRecursivelySearchable = param_8;
  this->bIsEditing = false;
  if (param_6) {
    *(undefined1 *)(this->_padding_ + 0x38) = 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// AddMenuSeparator @ 1427c87f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddMenuSeparator(FMenuBuilder *this,FName param_1,TAttribute<EVisibility> *param_2)

{
  FMultiBox *this_00;
  FSharedReferencer<1> FVar1;
  bool *pbVar2;
  FMultiBlock *this_01;
  TSharedRef<FMenuSeparatorBlock,1> TStack_38;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 auStack_20 [8];
  void *pvStack_18;
  undefined4 uStack_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  if (*(int *)(this->_padding_ + 0x58) < 1) {
    pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks);
    if (*pbVar2 == false) goto LAB_1427c9953;
  }
  this_01 = ::operator_new(0x1c8);
  if (this_01 == (FMultiBlock *)0x0) {
    this_01 = (FMultiBlock *)0x0;
  }
  else {
    TStack_38.Object = (FMenuSeparatorBlock *)0x0;
    TStack_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    _uStack_28 = (FMultiBlock *)0x0;
    auStack_20 = (undefined1  [8])0x0;
    FMultiBlock::FMultiBlock
              (this_01,(TSharedPtr<FUICommandInfo_const_,1> *)&uStack_28,
               (TSharedPtr<FUICommandList_const_,1> *)&TStack_38,param_1,Separator,false);
    this_01->bSearchable = false;
    this_01->_padding_ = (longlong)&___7FMenuSeparatorBlock__6B_;
  }
  TSharedRef<FMenuSeparatorBlock,1>::TSharedRef<FMenuSeparatorBlock,1><FMenuSeparatorBlock>
            (&TStack_38,(FMenuSeparatorBlock *)this_01);
  if (param_2->bIsSet != false) {
    _uStack_28 = (FMultiBlock *)
                 CONCAT71(CONCAT61(uStack_27._1_6_,param_2->bIsSet),(param_2->Value).Value.Value);
    auStack_20 = (undefined1  [8])0x0;
    pvStack_18 = (void *)0x0;
    uStack_10 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_20,
               &param_2->Getter);
    (((TAttribute<EVisibility> *)&(TStack_38.Object)->field_0xc0)->Value).Value.Value = uStack_28;
    ((TAttribute<EVisibility> *)&(TStack_38.Object)->field_0xc0)->bIsSet = uStack_27._0_1_;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&((TAttribute<EVisibility> *)&(TStack_38.Object)->field_0xc0)->Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_20);
    if (pvStack_18 != (void *)0x0) {
      FMemory::Free(pvStack_18);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_20);
  }
  FVar1.ReferenceController = TStack_38.SharedReferenceCount.ReferenceController;
  this_00 = (FMultiBox *)this->_padding_;
  _uStack_28 = (FMultiBlock *)TStack_38.Object;
  auStack_20 = (undefined1  [8])TStack_38.SharedReferenceCount.ReferenceController;
  if (TStack_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(TStack_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,(TSharedRef<FMultiBlock_const_,1> *)&uStack_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
LAB_1427c9953:
                    /* WARNING: Could not recover jumptable at 0x0001427c9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,1);
  return;
}

// AddSearchWidget @ 1427c9780

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuBuilder::AddSearchWidget(FMenuBuilder *this)

{
  *(undefined1 *)(this->_padding_ + 0x38) = 1;
  return;
}

// AddSeparator @ 1427c97e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddSeparator(FMenuBuilder *this,FName param_1,TAttribute<EVisibility> *param_2)

{
  FMultiBox *this_00;
  FSharedReferencer<1> FVar1;
  bool *pbVar2;
  FMultiBlock *this_01;
  TSharedRef<FMenuSeparatorBlock,1> local_38;
  undefined1 local_28;
  undefined7 uStack_27;
  undefined1 auStack_20 [8];
  void *local_18;
  undefined4 local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  if (*(int *)(this->_padding_ + 0x58) < 1) {
    pbVar2 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks);
    if (*pbVar2 == false) goto LAB_1427c9953;
  }
  this_01 = ::operator_new(0x1c8);
  if (this_01 == (FMultiBlock *)0x0) {
    this_01 = (FMultiBlock *)0x0;
  }
  else {
    local_38.Object = (FMenuSeparatorBlock *)0x0;
    local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    _local_28 = (FMultiBlock *)0x0;
    auStack_20 = (undefined1  [8])0x0;
    FMultiBlock::FMultiBlock
              (this_01,(TSharedPtr<FUICommandInfo_const_,1> *)&local_28,
               (TSharedPtr<FUICommandList_const_,1> *)&local_38,param_1,Separator,false);
    this_01->bSearchable = false;
    this_01->_padding_ = (longlong)&___7FMenuSeparatorBlock__6B_;
  }
  TSharedRef<FMenuSeparatorBlock,1>::TSharedRef<FMenuSeparatorBlock,1><FMenuSeparatorBlock>
            (&local_38,(FMenuSeparatorBlock *)this_01);
  if (param_2->bIsSet != false) {
    _local_28 = (FMultiBlock *)
                CONCAT71(CONCAT61(uStack_27._1_6_,param_2->bIsSet),(param_2->Value).Value.Value);
    auStack_20 = (undefined1  [8])0x0;
    local_18 = (void *)0x0;
    local_10 = 0;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_20,
               &param_2->Getter);
    (((TAttribute<EVisibility> *)&(local_38.Object)->field_0xc0)->Value).Value.Value = local_28;
    ((TAttribute<EVisibility> *)&(local_38.Object)->field_0xc0)->bIsSet = uStack_27._0_1_;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&((TAttribute<EVisibility> *)&(local_38.Object)->field_0xc0)->Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_20);
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_20);
  }
  FVar1.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  this_00 = (FMultiBox *)this->_padding_;
  _local_28 = (FMultiBlock *)local_38.Object;
  auStack_20 = (undefined1  [8])local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMultiBox::AddMultiBlock(this_00,(TSharedRef<FMultiBlock_const_,1> *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
LAB_1427c9953:
                    /* WARNING: Could not recover jumptable at 0x0001427c9975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,1);
  return;
}

// AddSubMenu @ 1427ca700

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddSubMenu
          (FMenuBuilder *this,FUIAction *param_1,TSharedRef<SWidget,1> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3,bool param_4,
          TAttribute<EVisibility> *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FMultiBox *this_00;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *pTVar10;
  uint uVar11;
  FMultiBlock *pFVar12;
  uint uVar13;
  bool local_res8 [8];
  TSharedRef<FMultiBlock_const_,1> local_48;
  uchar local_38;
  bool local_37;
  undefined1 local_30 [8];
  void *pvStack_28;
  undefined4 local_20;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  local_res8[0] = true;
  uVar13 = iVar2 - 1;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar7 = this->_padding_;
  uVar13 = iVar2 - 1;
  lVar3 = this->_padding_;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar8 = this->_padding_;
  lVar4 = this->_padding_;
  pTVar10 = ::operator_new(0x2f0);
  if (pTVar10 == (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    pTVar10 = (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0;
    pFVar12 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar10 = SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
              TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,TSharedRef<SWidget,1>_const_&,TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,TSharedPtr<FUICommandList_const_,1>_&,bool_&,bool_const_&>
                        (pTVar10,&NAME_None,param_1,param_2,param_3,
                         (TSharedPtr<FExtender,1> *)((longlong)((int)lVar8 + -1) * 0x10 + lVar4),
                         local_res8,
                         (TSharedPtr<FUICommandList_const_,1> *)
                         ((longlong)((int)lVar7 + -1) * 0x10 + lVar3),(bool *)&this->_padding_,
                         &param_4);
    pFVar12 = (FMultiBlock *)&pTVar10->ObjectStorage;
    if (pFVar12 == (FMultiBlock *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1427ca8ec;
    }
  }
  if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
     (*(int *)(pFVar12->_padding_ + 8) < 1)) {
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar12->_padding_ = (longlong)pFVar12;
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)pFVar12->_padding_) {
      if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar10->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar12->_padding_;
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
      pFVar12->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
LAB_1427ca8ec:
  pFVar12[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  if (param_5->bIsSet != false) {
    local_38 = (param_5->Value).Value.Value;
    local_30 = (undefined1  [8])0x0;
    pvStack_28 = (void *)0x0;
    local_20 = 0;
    local_37 = param_5->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30,
               &param_5->Getter);
    (pFVar12->VisibilityOverride).Value.Value.Value = local_38;
    (pFVar12->VisibilityOverride).bIsSet = local_37;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar12->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_30);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
    if (pvStack_28 != (void *)0x0) {
      FMemory::Free(pvStack_28);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_30);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
    UNLOCK();
  }
  local_48.Object = pFVar12;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar10;
  FMultiBox::AddMultiBlock(this_00,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// AddSubMenu @ 1427ca9e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddSubMenu
          (FMenuBuilder *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3,
          FUIAction *param_4,FName param_5,EUserInterfaceActionType param_6,bool param_7,
          FSlateIcon *param_8,bool param_9,TAttribute<EVisibility> *param_10,
          TAttribute<FText> *param_11)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  FMultiBlock *pFVar10;
  uint uVar11;
  TSharedPtr<FUICommandList_const_,1> local_98;
  TSharedPtr<FExtender,1> local_88;
  TSharedRef<FMultiBlock_const_,1> local_78;
  FDestructionSentinel local_68;
  uchar local_50;
  bool local_4f;
  undefined1 local_48 [8];
  ForAnyElementType FStack_40;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  uVar11 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar11 < iVar2) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar9 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  uVar11 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar11 < iVar2) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar8 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    local_98.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar9 + -8);
    local_98.Object = *(FUICommandList **)(lVar9 + -0x10);
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_88.Object = *(FExtender **)(lVar8 + -0x10);
    lVar9 = this->_padding_;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar8 + -8);
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuEntryBlock::FMenuEntryBlock
              ((FMenuEntryBlock *)(pTVar6 + 1),&param_5,param_1,param_2,param_3,&local_88,true,
               param_7,param_8,param_4,param_6,SUB81(lVar9,0),param_9,&local_98,param_11);
    pFVar10 = (FMultiBlock *)(pTVar6 + 1);
    if (pFVar10 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427cac3a;
    }
  }
  if (((*(longlong *)&pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
     (*(int *)(pFVar10->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar10->_padding_ = pFVar10;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar10->_padding_;
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
      pFVar10->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427cac3a:
  pFVar10[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  if (param_10->bIsSet != false) {
    local_50 = (param_10->Value).Value.Value;
    local_48 = (undefined1  [8])0x0;
    FStack_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    local_4f = param_10->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,
               &param_10->Getter);
    (pFVar10->VisibilityOverride).Value.Value.Value = local_50;
    (pFVar10->VisibilityOverride).bIsSet = local_4f;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar10->VisibilityOverride).Getter,
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
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78.Object = pFVar10;
  local_78.SharedReferenceCount.ReferenceController = pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddSubMenu @ 1427cad60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddSubMenu
          (FMenuBuilder *this,TAttribute<FText> *param_1,TAttribute<FText> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3,bool param_4,
          FSlateIcon *param_5,bool param_6,FName param_7,FName param_8,
          TAttribute<EVisibility> *param_9)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FName FVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FMultiBlock *pFVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FExtender,1> local_78;
  TSharedRef<FMultiBlock_const_,1> local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  uchar local_48;
  bool local_47;
  undefined1 local_40 [8];
  void *pvStack_38;
  undefined4 local_30;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  uVar12 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar2) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar10 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  uVar12 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar12 < iVar2) {
    uVar8 = ~uVar12 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar9 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar10 + -8);
    local_88.Object = *(FUICommandList **)(lVar10 + -0x10);
    lVar10 = this->_padding_;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = *(FExtender **)(lVar9 + -0x10);
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar9 + -8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMenuEntryBlock::FMenuEntryBlock
              ((FMenuEntryBlock *)(pTVar6 + 1),&param_7,param_1,param_2,param_3,&local_78,true,
               param_4,&local_88,SUB81(lVar10,0),param_5,param_6);
    pFVar11 = (FMultiBlock *)(pTVar6 + 1);
    if (pFVar11 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427caf9d;
    }
  }
  if (((*(longlong *)&pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar11->_padding_ = pFVar11;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
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
      pFVar11->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427caf9d:
  local_58 = 0;
  uStack_50 = 0;
  FVar7 = GenerateTutorialIdentifierName
                    ((FName)local_res8,(FName)this->_padding_,
                     (TSharedPtr<FUICommandInfo_const_,1> *)param_8,(int)&local_58);
  pFVar11->TutorialHighlightName = *(FName *)FVar7;
  pFVar11[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  *(longlong *)&pFVar11[1].ResizeParams.Value.AllowClipping.Getter.field_0x4 = this->_padding_;
  if (param_9->bIsSet != false) {
    local_48 = (param_9->Value).Value.Value;
    local_40 = (undefined1  [8])0x0;
    pvStack_38 = (void *)0x0;
    local_30 = 0;
    local_47 = param_9->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,
               &param_9->Getter);
    (pFVar11->VisibilityOverride).Value.Value.Value = local_48;
    (pFVar11->VisibilityOverride).bIsSet = local_47;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar11->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68.Object = pFVar11;
  local_68.SharedReferenceCount.ReferenceController = pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_68);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddSubMenu @ 1427cb0b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddSubMenu
          (FMenuBuilder *this,TSharedRef<SWidget,1> *param_1,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_2,bool param_3,
          bool param_4,TAttribute<EVisibility> *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  FMultiBlock *pFVar11;
  FName local_res8;
  TSharedPtr<FUICommandList_const_,1> local_88;
  TSharedPtr<FExtender,1> local_78;
  TSharedRef<SWidget,1> local_68;
  TSharedRef<FMultiBlock_const_,1> local_58;
  uchar local_48;
  bool local_47;
  undefined1 local_40 [8];
  void *pvStack_38;
  undefined4 local_30;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  uVar8 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar2) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar10 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  uVar8 = iVar2 - 1;
  uVar7 = 0;
  if ((int)uVar8 < iVar2) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar9 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
  pTVar6 = ::operator_new(0x2f0);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar11 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMenuEntryBlock___00_SharedPointerInternals__6B_;
    local_88.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar10 + -8);
    local_88.Object = *(FUICommandList **)(lVar10 + -0x10);
    lVar10 = this->_padding_;
    if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = *(FExtender **)(lVar9 + -0x10);
    local_78.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(lVar9 + -8);
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.Object = param_1->Object;
    local_68.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FMenuEntryBlock::FMenuEntryBlock
              ((FMenuEntryBlock *)(pTVar6 + 1),&local_res8,&local_68,param_2,&local_78,true,param_3,
               &local_88,SUB81(lVar10,0),param_4);
    pFVar11 = (FMultiBlock *)(pTVar6 + 1);
    if (pFVar11 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427cb2fb;
    }
  }
  if (((*(longlong *)&pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar11->_padding_ = pFVar11;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
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
      pFVar11->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427cb2fb:
  pFVar11[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  if (param_5->bIsSet != false) {
    local_48 = (param_5->Value).Value.Value;
    local_40 = (undefined1  [8])0x0;
    pvStack_38 = (void *)0x0;
    local_30 = 0;
    local_47 = param_5->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40,
               &param_5->Getter);
    (pFVar11->VisibilityOverride).Value.Value.Value = local_48;
    (pFVar11->VisibilityOverride).bIsSet = local_47;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar11->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_40);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_40);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar11;
  local_58.SharedReferenceCount.ReferenceController = pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddWidget @ 1427cd340

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWidget
          (FMenuBuilder *this,TSharedRef<SWidget,1> *param_1,FText *param_2,
          FMenuEntryStyleParams *param_3,TAttribute<FMenuEntryResizeParams> *param_4,bool param_5,
          TAttribute<FText> *param_6,TAttribute<FSlateIcon> *param_7,
          TAttribute<EVisibility> *param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FMultiBox *this_00;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FMultiBlock *pFVar7;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<FMultiBlock,1> local_48;
  TSharedRef<FMultiBlock_const_,1> local_38;
  uchar local_28;
  bool local_27;
  undefined1 local_20 [8];
  void *pvStack_18;
  undefined4 local_10;
  
  (**(code **)(this->_padding_ + 0x18))();
  pTVar6 = ::operator_new(0x348);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pFVar7 = (FMultiBlock *)&DAT_00000010;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFWidgetBlock___00_SharedPointerInternals__6B_;
    local_58.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    local_58.Object = param_1->Object;
    if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FWidgetBlock::FWidgetBlock
              ((FWidgetBlock *)(pTVar6 + 1),&local_58,param_2,param_6,param_3,param_7);
    pFVar7 = (FMultiBlock *)(pTVar6 + 1);
    if (pFVar7 == (FMultiBlock *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1427cd481;
    }
  }
  if (((*(longlong *)&pFVar7->_padding_ == 0) || (pFVar7->_padding_ == 0)) ||
     (*(int *)(pFVar7->_padding_ + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FMultiBlock **)&pFVar7->_padding_ = pFVar7;
    if (pTVar6 != (TReferenceControllerBase<1> *)pFVar7->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar7->_padding_;
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
      pFVar7->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_1427cd481:
  pFVar7->bSearchable = param_5;
  TAttribute<FMenuEntryResizeParams>::operator=(&pFVar7->ResizeParams,param_4);
  if (param_8->bIsSet != false) {
    local_28 = (param_8->Value).Value.Value;
    local_20 = (undefined1  [8])0x0;
    pvStack_18 = (void *)0x0;
    local_10 = 0;
    local_27 = param_8->bIsSet;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_20,
               &param_8->Getter);
    (pFVar7->VisibilityOverride).Value.Value.Value = local_28;
    (pFVar7->VisibilityOverride).bIsSet = local_27;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar7->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
    if (pvStack_18 != (void *)0x0) {
      FMemory::Free(pvStack_18);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_20);
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar7;
  local_48.SharedReferenceCount.ReferenceController = pTVar6;
  UE::Slate::Private::ApplySectionOverridesToBlock(&local_48,&this->CurrentSectionResizeParams);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar7;
  local_38.SharedReferenceCount.ReferenceController = pTVar6;
  FMultiBox::AddMultiBlock(this_00,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// AddWidget @ 1427cd5a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWidget
          (FMenuBuilder *this,TSharedRef<SWidget,1> *param_1,FText *param_2,
          FMenuEntryStyleParams *param_3,bool param_4,TAttribute<FText> *param_5,
          TAttribute<FSlateIcon> *param_6,TAttribute<EVisibility> *param_7)

{
  FDestructionSentinel local_1e8;
  undefined1 local_1d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  ulonglong local_1b8;
  undefined1 local_1b0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  ForAnyElementType FStack_1a0;
  ulonglong local_198;
  undefined1 local_190 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_188;
  ForAnyElementType FStack_180;
  ulonglong local_178;
  undefined1 local_170 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_168;
  ForAnyElementType FStack_160;
  ulonglong local_158;
  int local_150;
  bool local_14c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_148;
  ForAnyElementType FStack_140;
  ulonglong local_138;
  undefined1 local_130 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_128;
  ForAnyElementType FStack_120;
  ulonglong local_118;
  bool local_10f;
  bool local_10d;
  undefined1 local_108 [208];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  memset(local_1d0,0,200);
  local_1b8 = 0;
  local_198 = 0;
  local_178 = 0;
  local_158 = 0;
  local_138 = 0;
  local_118 = 0;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b0[0] = false;
  local_1b0[1] = false;
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1a0.Data = (FScriptContainerElement *)0x0;
  local_190[0] = false;
  local_190[1] = false;
  local_188.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_180.Data = (FScriptContainerElement *)0x0;
  local_170[0] = false;
  local_170[1] = false;
  local_168.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_160.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_14c = false;
  local_148.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_140.Data = (FScriptContainerElement *)0x0;
  local_130[0] = Preferred;
  local_130[1] = false;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_10f = false;
  local_10d = false;
  FMenuEntryResizeParams::FMenuEntryResizeParams
            ((FMenuEntryResizeParams *)local_108,(FMenuEntryResizeParams *)local_1d0);
  local_108[200] = true;
  local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  AddWidget(this,param_1,param_2,param_3,(TAttribute<FMenuEntryResizeParams> *)local_108,param_4,
            param_5,param_6,param_7);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_38,(FWriteAccessScope *)&local_1e8);
  if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28 = local_28 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  FMenuEntryResizeParams::~FMenuEntryResizeParams((FMenuEntryResizeParams *)local_108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_1e8);
  if (((int)local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = local_118 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_148,(FWriteAccessScope *)&local_1e8);
  if (((int)local_138 != 0) && (FStack_140.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_140.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_140,0,0,0x10);
    local_138 = local_138 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_140.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_148.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_168,(FWriteAccessScope *)&local_1e8);
  if (((int)local_158 != 0) && (FStack_160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_160,0,0,0x10);
    local_158 = local_158 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_168.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_188,(FWriteAccessScope *)&local_1e8);
  if (((int)local_178 != 0) && (FStack_180.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_180,0,0,0x10);
    local_178 = local_178 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_180.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_188.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_1e8);
  if (((int)local_198 != 0) && (FStack_1a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a0,0,0,0x10);
    local_198 = local_198 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_1a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_1e8);
  if (((int)local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = local_1b8 & 0xffffffff00000000;
  }
  if (local_1e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  return;
}

// AddWidget @ 1427cda20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWidget
          (FMenuBuilder *this,TSharedRef<SWidget,1> *param_1,FText *param_2,bool param_3,
          bool param_4,TAttribute<FText> *param_5)

{
  FDestructionSentinel local_148;
  undefined1 local_130 [8];
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
  undefined1 local_48 [40];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_88.Size = FOptionalSize::Unspecified;
  local_b0 = 0;
  local_90 = 0;
  local_70 = 0;
  local_50 = 0;
  local_118 = 0;
  local_68.Size = FOptionalSize::Unspecified;
  local_110._4_4_ = HAlign_Fill;
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
  local_a8 = 0.0;
  local_a4 = false;
  local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_98.Data = (FScriptContainerElement *)0x0;
  local_84 = false;
  local_80.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_78.Data = (FScriptContainerElement *)0x0;
  local_64 = false;
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_130[0] = (TEnumAsByte<EVisibility::Private>)0x19;
  local_130[1] = false;
  local_128.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_120.Data = (FScriptContainerElement *)0x0;
  local_110[0] = param_3;
  FSlateIcon::FSlateIcon((FSlateIcon *)local_48);
  local_48[0x20] = false;
  local_10 = 0;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  AddWidget(this,param_1,param_2,(FMenuEntryStyleParams *)local_110,param_4,param_5,
            (TAttribute<FSlateIcon> *)local_48,(TAttribute<EVisibility> *)local_130);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_148);
  if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = local_10 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_128,(FWriteAccessScope *)&local_148);
  if (((int)local_118 != 0) && (FStack_120.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_120.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_120,0,0,0x10);
    local_118 = local_118 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_120.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_128.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_60,(FWriteAccessScope *)&local_148);
  if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_58.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_80,(FWriteAccessScope *)&local_148);
  if (((int)local_70 != 0) && (FStack_78.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_78.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_78,0,0,0x10);
    local_70 = local_70 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_80.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a0,(FWriteAccessScope *)&local_148);
  if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_98.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c0,(FWriteAccessScope *)&local_148);
  if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b8,0,0,0x10);
    local_b0 = local_b0 & 0xffffffff00000000;
  }
  if (local_148.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
  }
  if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// AddWrapperSubMenu @ 1427d0140

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWrapperSubMenu
          (FMenuBuilder *this,FText *param_1,FText *param_2,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          FSlateIcon *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FMultiBox *this_00;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *this_01;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *pTVar10;
  uint uVar11;
  FMultiBlock *pFVar12;
  uint uVar13;
  bool local_res8 [8];
  bool local_48 [8];
  TSharedRef<FMultiBlock_const_,1> local_40;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  pTVar10 = (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0;
  local_48[0] = true;
  uVar13 = iVar2 - 1;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar7 = this->_padding_;
  local_res8[0] = false;
  uVar13 = iVar2 - 1;
  lVar3 = this->_padding_;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar8 = this->_padding_;
  lVar4 = this->_padding_;
  this_01 = ::operator_new(0x2f0);
  if (this_01 == (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    pFVar12 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar10 = SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
              TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&>
                        (this_01,&NAME_None,param_1,param_2,param_3,
                         (TSharedPtr<FExtender,1> *)((longlong)((int)lVar8 + -1) * 0x10 + lVar4),
                         local_48,local_res8,
                         (TSharedPtr<FUICommandList_const_,1> *)
                         ((longlong)((int)lVar7 + -1) * 0x10 + lVar3),(bool *)&this->_padding_,
                         param_4);
    pFVar12 = (FMultiBlock *)&pTVar10->ObjectStorage;
    if (pFVar12 == (FMultiBlock *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1427d033c;
    }
  }
  if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
     (*(int *)(pFVar12->_padding_ + 8) < 1)) {
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar12->_padding_ = (longlong)pFVar12;
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)pFVar12->_padding_) {
      if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar10->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar12->_padding_;
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
      pFVar12->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
LAB_1427d033c:
  pFVar12[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
    UNLOCK();
  }
  local_40.Object = pFVar12;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar10;
  FMultiBox::AddMultiBlock(this_00,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar10);
  return;
}

// AddWrapperSubMenu @ 1427d03a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWrapperSubMenu
          (FMenuBuilder *this,FText *param_1,FText *param_2,
          TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *param_3,
          FSlateIcon *param_4,FUIAction *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  FMultiBox *this_00;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *this_01;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *pTVar9;
  uint uVar10;
  FMultiBlock *pFVar11;
  bool local_res8 [8];
  bool local_38 [8];
  TSharedRef<FMultiBlock_const_,1> local_30;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  pTVar9 = (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0;
  local_38[0] = true;
  local_res8[0] = false;
  uVar10 = iVar2 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar2) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar6 = this->_padding_;
  lVar3 = this->_padding_;
  this_01 = ::operator_new(0x2f0);
  if (this_01 == (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    pFVar11 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar9 = SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
             TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FUIAction_const_&,FText_const_&,FText_const_&,TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,bool_&,FSlateIcon_const_&>
                       (this_01,&NAME_None,param_5,param_1,param_2,param_3,
                        (TSharedPtr<FExtender,1> *)((longlong)((int)lVar6 + -1) * 0x10 + lVar3),
                        local_38,local_res8,(bool *)&this->_padding_,param_4);
    pFVar11 = (FMultiBlock *)&pTVar9->ObjectStorage;
    if (pFVar11 == (FMultiBlock *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_1427d0541;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar9 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
      LOCK();
      *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar9 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)pFVar11->_padding_) {
      if (pTVar9 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar9->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar4 = (longlong *)pFVar11->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar9);
  }
LAB_1427d0541:
  pFVar11[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar9 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTVar9->_padding_ = (int)pTVar9->_padding_ + 1;
    UNLOCK();
  }
  local_30.Object = pFVar11;
  local_30.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar9;
  FMultiBox::AddMultiBlock(this_00,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar9);
  return;
}

// AddWrapperSubMenu @ 1427d05a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::AddWrapperSubMenu
          (FMenuBuilder *this,FText *param_1,FText *param_2,TSharedPtr<SWidget,1> *param_3,
          FSlateIcon *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FMultiBox *this_00;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *this_01;
  TIntrusiveReferenceController<FMenuEntryBlock,1> *pTVar10;
  uint uVar11;
  FMultiBlock *pFVar12;
  uint uVar13;
  bool local_res8 [8];
  bool local_48 [8];
  TSharedRef<FMultiBlock_const_,1> local_40;
  
  (**(code **)(this->_padding_ + 0x18))();
  iVar2 = (int)this->_padding_;
  pTVar10 = (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0;
  local_48[0] = true;
  uVar13 = iVar2 - 1;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = (int)this->_padding_;
  lVar7 = this->_padding_;
  local_res8[0] = false;
  uVar13 = iVar2 - 1;
  lVar3 = this->_padding_;
  uVar11 = 0;
  if ((int)uVar13 < iVar2) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar8 = this->_padding_;
  lVar4 = this->_padding_;
  this_01 = ::operator_new(0x2f0);
  if (this_01 == (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    pFVar12 = (FMultiBlock *)&DAT_00000010;
  }
  else {
    pTVar10 = SharedPointerInternals::TIntrusiveReferenceController<FMenuEntryBlock,1>::
              TIntrusiveReferenceController<FMenuEntryBlock,1><enum_EName_const_&,FText_const_&,FText_const_&,TSharedPtr<SWidget,1>_const_&,TSharedPtr<FExtender,1>_&,bool_const_&,bool,TSharedPtr<FUICommandList_const_,1>_&,bool_&,FSlateIcon_const_&>
                        (this_01,&NAME_None,param_1,param_2,param_3,
                         (TSharedPtr<FExtender,1> *)((longlong)((int)lVar8 + -1) * 0x10 + lVar4),
                         local_48,local_res8,
                         (TSharedPtr<FUICommandList_const_,1> *)
                         ((longlong)((int)lVar7 + -1) * 0x10 + lVar3),(bool *)&this->_padding_,
                         param_4);
    pFVar12 = (FMultiBlock *)&pTVar10->ObjectStorage;
    if (pFVar12 == (FMultiBlock *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1427d079c;
    }
  }
  if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
     (*(int *)(pFVar12->_padding_ + 8) < 1)) {
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
      LOCK();
      *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
      UNLOCK();
    }
    pFVar12->_padding_ = (longlong)pFVar12;
    if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)pFVar12->_padding_) {
      if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)&pTVar10->_padding_ + 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      plVar5 = (longlong *)pFVar12->_padding_;
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
      pFVar12->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar10);
  }
LAB_1427d079c:
  pFVar12[1].ResizeParams.Value.ClippingPriority.Getter.field_0x9 = this->bRecursivelySearchable;
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar10 != (TIntrusiveReferenceController<FMenuEntryBlock,1> *)0x0) {
    LOCK();
    *(int *)&pTVar10->_padding_ = (int)pTVar10->_padding_ + 1;
    UNLOCK();
  }
  local_40.Object = pFVar12;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar10;
  FMultiBox::AddMultiBlock(this_00,&local_40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar10);
  return;
}

// ApplyHook @ 1427d1690

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuBuilder::ApplyHook(FMenuBuilder *this,FName param_1,Position param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  UObject *pUVar6;
  FExtender *this_00;
  uint uVar7;
  longlong lVar8;
  
  if ((char)this->_padding_ != '\0') {
    iVar1 = (int)this->_padding_;
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar8 = (longlong)(int)this->_padding_ * 0x10 + this->_padding_;
    if (((param_1 != (FName)0x0) && (*(longlong *)(lVar8 + -0x10) != 0)) &&
       ((pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(this->_padding_ + 0x30)),
        pUVar6 == (UObject *)0x0 ||
        (cVar4 = (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6), cVar4 == '\0')))) {
      this_00 = TSharedPtr<FExtender,1>::operator->((TSharedPtr<FExtender,1> *)(lVar8 + -0x10));
      FExtender::Apply(this_00,param_1,param_2,this);
    }
  }
  return;
}

// ApplySectionBeginning @ 1427d1830

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuBuilder::ApplySectionBeginning(FMenuBuilder *this)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  FMultiBox *this_00;
  ITextData *pIVar5;
  code *pcVar6;
  bool bVar7;
  TReferenceControllerBase<1> *pTVar8;
  FText *pFVar9;
  FMultiBlock *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TSharedRef<FMultiBlock_const_,1> local_88;
  TSharedPtr<FUICommandList_const_,1> local_78;
  TSharedPtr<FUICommandInfo_const_,1> local_68;
  FDestructionSentinel local_58;
  uchar local_40;
  bool local_3f;
  undefined1 local_38 [8];
  ForAnyElementType FStack_30;
  int local_28;
  
  if (this->bSectionNeedsToBeApplied == false) {
    return;
  }
  bVar7 = FText::IsEmpty(&this->CurrentSectionHeadingText);
  if (bVar7) goto LAB_1427d1ab9;
  pTVar8 = ::operator_new(0x1e8);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    pFVar10 = (FMultiBlock *)&DAT_00000010;
LAB_1427d194d:
    if (((*(longlong *)&pFVar10->_padding_ == 0) || (pFVar10->_padding_ == 0)) ||
       (*(int *)(pFVar10->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FMultiBlock **)&pFVar10->_padding_ = pFVar10;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar10->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = (longlong *)pFVar10->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        pFVar10->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFHeadingBlock___00_SharedPointerInternals__6B_;
    local_78.Object = (FUICommandList *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_68.Object = (FUICommandInfo *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FMultiBlock::FMultiBlock
              ((FMultiBlock *)(pTVar8 + 1),&local_68,&local_78,this->CurrentSectionExtensionHook,
               Heading,true);
    pTVar8[1]._padding_ = (longlong)&___7FHeadingBlock__6B_;
    pTVar8[0x1d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x1d].WeakReferenceCount = (atomic<int>)0x0;
    pIVar3 = (this->CurrentSectionHeadingText).TextData.Reference;
    *(ITextData **)&pTVar8[0x1d].SharedReferenceCount = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
    }
    pFVar10 = (FMultiBlock *)(pTVar8 + 1);
    *(uint *)&pTVar8[0x1e]._padding_ = (this->CurrentSectionHeadingText).Flags;
    *(undefined1 *)&pTVar8[0xc].WeakReferenceCount = 0;
    if (pFVar10 != (FMultiBlock *)0x0) goto LAB_1427d194d;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TAttribute<FMenuEntryResizeParams>::operator=
            (&pFVar10->ResizeParams,&this->CurrentSectionResizeParams);
  bVar7 = (this->CurrentSectionVisibility).bIsSet;
  if (bVar7 != false) {
    local_40 = (this->CurrentSectionVisibility).Value.Value.Value;
    local_38 = (undefined1  [8])0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    local_3f = bVar7;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_38,
               &(this->CurrentSectionVisibility).Getter);
    (pFVar10->VisibilityOverride).Value.Value.Value = local_40;
    (pFVar10->VisibilityOverride).bIsSet = local_3f;
    TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              (&(pFVar10->VisibilityOverride).Getter,
               (TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_58);
    if ((local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  this_00 = (FMultiBox *)this->_padding_;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = pFVar10;
  local_88.SharedReferenceCount.ReferenceController = pTVar8;
  FMultiBox::AddMultiBlock(this_00,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
LAB_1427d1ab9:
  this->bSectionNeedsToBeApplied = false;
  pFVar9 = FText::GetEmpty();
  pIVar3 = (this->CurrentSectionHeadingText).TextData.Reference;
  pIVar5 = (pFVar9->TextData).Reference;
  if (pIVar3 != pIVar5) {
    (this->CurrentSectionHeadingText).TextData.Reference = pIVar5;
    if (pIVar5 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res10);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (this->CurrentSectionHeadingText).Flags = pFVar9->Flags;
  return;
}

// BeginSection @ 1427d4720

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
FMenuBuilder::BeginSection
          (FMenuBuilder *this,FName param_1,TAttribute<FText> *param_2,
          TAttribute<EVisibility> *param_3,TAttribute<FMenuEntryResizeParams> *param_4)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  bool *pbVar6;
  undefined1 local_res8 [8];
  
  if (((this->CurrentSectionExtensionHook != (FName)0x0) ||
      (this->bSectionNeedsToBeApplied != false)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentSectionExtensionHook == NAME_None && !bSectionNeedsToBeApplied",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
                         ,0x145,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(this->_padding_ + 0x10))(this,param_1,0);
  this->bSectionNeedsToBeApplied = true;
  this->CurrentSectionExtensionHook = param_1;
  pFVar5 = TAttribute<FText>::Get(param_2);
  pIVar1 = (this->CurrentSectionHeadingText).TextData.Reference;
  pIVar2 = (pFVar5->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->CurrentSectionHeadingText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->CurrentSectionHeadingText).Flags = pFVar5->Flags;
  (this->CurrentSectionVisibility).Value.Value.Value = (param_3->Value).Value.Value;
  (this->CurrentSectionVisibility).bIsSet = param_3->bIsSet;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&(this->CurrentSectionVisibility).Getter,&param_3->Getter);
  TAttribute<FMenuEntryResizeParams>::operator=(&this->CurrentSectionResizeParams,param_4);
  pbVar6 = TAttribute<bool>::Get(&FMultiBoxSettings::DisplayMultiboxHooks);
  if (*pbVar6 != false) {
    (**(code **)(this->_padding_ + 0x18))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001427d484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,param_1,2);
  return;
}

// EndSection @ 1428021d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall FMenuBuilder::EndSection(FMenuBuilder *this)

{
  FName FVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FText *pFVar4;
  undefined8 local_res8;
  FDestructionSentinel local_138;
  uchar local_120;
  undefined1 local_11f;
  undefined1 local_118 [8];
  ForAnyElementType FStack_110;
  ulonglong local_108;
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
  local_res8 = 0;
  (this->CurrentSectionExtensionHook).ComparisonIndex = 0;
  (this->CurrentSectionExtensionHook).Number = 0;
  this->bSectionNeedsToBeApplied = false;
  pFVar4 = FText::GetEmpty();
  pIVar2 = (this->CurrentSectionHeadingText).TextData.Reference;
  pIVar3 = (pFVar4->TextData).Reference;
  if (pIVar2 != pIVar3) {
    (this->CurrentSectionHeadingText).TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
  }
  (this->CurrentSectionHeadingText).Flags = pFVar4->Flags;
  local_120 = (uchar)EVisibility::Visible.Value.Value;
  (this->CurrentSectionVisibility).Value.Value.Value = (uchar)EVisibility::Visible.Value.Value;
  local_11f = 1;
  local_118 = (undefined1  [8])0x0;
  FStack_110.Data = (FScriptContainerElement *)0x0;
  local_108 = 0;
  (this->CurrentSectionVisibility).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CurrentSectionVisibility).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_118,
             (FWriteAccessScope *)&local_138);
  if (((int)local_108 != 0) && (FStack_110.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_110.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_110,0,0,0x10);
    local_108 = local_108 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_110.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
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
             (FWriteAccessScope *)&local_138);
  if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_28.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
    local_20 = local_20 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_138);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_138);
  if (((int)local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_70.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
    local_68 = local_68 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_138);
  if (((int)local_88 != 0) && (FStack_90.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_90.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_90,0,0,0x10);
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_90.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_138);
  if (((int)local_a8 != 0) && (FStack_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_b0,0,0,0x10);
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_138);
  if (((int)local_c8 != 0) && (FStack_d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_d0,0,0,0x10);
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_f8,(FWriteAccessScope *)&local_138);
  if (((int)local_e8 != 0) && (FStack_f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_f0,0,0,0x10);
    local_e8 = local_e8 & 0xffffffff00000000;
  }
  if (local_138.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_138.Accessor,&local_138);
  }
  if (FStack_f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
                    /* WARNING: Could not recover jumptable at 0x0001428026ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))(this,FVar1,1);
  return;
}

// MakeWidget @ 142821030

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FMenuBuilder::MakeWidget
          (FMenuBuilder *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  (**(code **)(this->_padding_ + 0x20))();
  return __return_storage_ptr__;
}

// MakeWidget @ 142821060

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
FMenuBuilder::MakeWidget
          (FMenuBuilder *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
          *param_1,uint param_2)

{
  FMultiBox *this_00;
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SMultiBoxWidget,1> *pTVar2;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  float local_58;
  undefined1 local_54;
  undefined1 local_50 [8];
  ForAnyElementType FStack_48;
  ulonglong local_40;
  TAttribute<float> local_38;
  
  local_38.bIsSet = false;
  local_54 = 0;
  local_58 = 0.0;
  local_40 = 0;
  local_50 = (undefined1  [8])0x0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  if (param_2 < 0x7fffffff) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
               (FWriteAccessScope *)&local_88);
    if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_48.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
      local_40 = local_40 & 0xffffffff00000000;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    local_38.bIsSet = true;
    local_58 = (float)param_2;
    local_54 = 1;
  }
  this_00 = (FMultiBox *)this->_padding_;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  local_38.Getter._16_4_ = 0;
  local_38.Value = local_58;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&local_38.Getter,(TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_50)
  ;
  pTVar2 = FMultiBox::MakeWidget
                     (this_00,(TSharedRef<SMultiBoxWidget,1> *)&local_88,this->bSearchable,param_1,
                      &local_38);
  __return_storage_ptr__->Object = (SWidget *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_88.Accessor);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_50,
             (FWriteAccessScope *)&local_70);
  if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_48.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
    local_40 = local_40 & 0xffffffff00000000;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  if (FStack_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_50);
  return __return_storage_ptr__;
}

