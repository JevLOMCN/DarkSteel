// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 9

// SUniformToolbarPanel @ 1427b6050

SUniformToolbarPanel * __thiscall
SUniformToolbarPanel::SUniformToolbarPanel(SUniformToolbarPanel *this)

{
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SUniformToolbarPanel__6B_;
  (this->Dropdown).Object = (SComboButton *)0x0;
  (this->Dropdown).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  (this->Children)._padding_ = (longlong)this;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TPanelChildren_UFSlot_SUniformToolbarPanel____6B_;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotPadding).bIsSet = false;
  *(undefined8 *)&(this->SlotPadding).Getter.field_0x8 = 0;
  (this->SlotPadding).Value.Left = 0.0;
  (this->SlotPadding).Value.Top = 0.0;
  (this->SlotPadding).Value.Right = 0.0;
  (this->SlotPadding).Value.Bottom = 0.0;
  *(undefined8 *)&(this->SlotPadding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SlotPadding).Getter = 0;
  this->MajorAxisUniformDesiredSize = 0.0;
  (this->MinDesiredSlotSize).Value.field0_0x0._s_0.X = 0.0;
  (this->MinDesiredSlotSize).Value.field0_0x0._s_0.Y = 0.0;
  (this->MinDesiredSlotSize).bIsSet = false;
  *(undefined8 *)&(this->MinDesiredSlotSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinDesiredSlotSize).Getter = 0;
  *(undefined8 *)&(this->MinDesiredSlotSize).Getter.field_0x8 = 0;
  (this->MaxUniformSize).Value = 0.0;
  (this->MaxUniformSize).bIsSet = false;
  *(undefined8 *)&(this->MaxUniformSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MaxUniformSize).Getter = 0;
  *(undefined8 *)&(this->MaxUniformSize).Getter.field_0x8 = 0;
  (this->MinUniformSize).Value = 0.0;
  (this->MinUniformSize).bIsSet = false;
  *(undefined8 *)&(this->MinUniformSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MinUniformSize).Getter = 0;
  *(undefined8 *)&(this->MinUniformSize).Getter.field_0x8 = 0;
  (this->StyleName).ComparisonIndex = 0;
  (this->StyleName).Number = 0;
  return this;
}

// AddSlot @ 1427ca1c0

FScopedWidgetSlotArguments * __thiscall
SUniformToolbarPanel::AddSlot
          (SUniformToolbarPanel *this,FScopedWidgetSlotArguments *__return_storage_ptr__)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x28);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8[1]._padding_ = 0;
    local_res8->_padding_ = (longlong)&___7FSlot_SUniformToolbarPanel__6B_;
  }
  FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)__return_storage_ptr__,(FSlot *)&local_res8);
  __return_storage_ptr__->Children = &this->Children;
  __return_storage_ptr__->Index = -1;
  *(undefined8 *)&__return_storage_ptr__->Added = 0;
  *(undefined8 *)&(__return_storage_ptr__->Added).field_0x28 = 0;
  return __return_storage_ptr__;
}

// ComputeDesiredSize @ 1427ed120

TVector2<double> * __thiscall
SUniformToolbarPanel::ComputeDesiredSize
          (SUniformToolbarPanel *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  SWidget *this_00;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  EVisibility EVar13;
  bool bVar14;
  FMargin *pFVar15;
  TVector2<double> *pTVar16;
  float *pfVar17;
  FDeprecateSlateVector2D FVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  
  uVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar15 = TAttribute<FMargin>::Get(&this->SlotPadding);
  fVar2 = pFVar15->Right;
  fVar3 = pFVar15->Bottom;
  fVar4 = pFVar15->Left;
  fVar5 = pFVar15->Top;
  pTVar16 = TAttribute<UE::Math::TVector2<double>_>::Get(&this->MinDesiredSlotSize);
  dVar25 = (pTVar16->field0_0x0)._s_0.X;
  dVar30 = (pTVar16->field0_0x0)._s_0.Y;
  pfVar17 = TAttribute<float>::Get(&this->MaxUniformSize);
  fVar6 = *pfVar17;
  pfVar17 = TAttribute<float>::Get(&this->MinUniformSize);
  iVar8 = (this->Children).Children.ArrayNum;
  iVar20 = 0;
  uVar22 = 0;
  fVar31 = 0.0;
  fVar7 = *pfVar17;
  iVar1 = iVar8 + -1;
  if (0 < iVar1) {
    lVar21 = 0;
    fVar32 = fVar31;
    EVar13 = EVisibility::Collapsed;
    do {
      uVar19 = 0;
      if ((int)uVar22 < (this->Children).Children.ArrayNum) {
        uVar19 = ~uVar22 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         EVar13 = EVisibility::Collapsed, bVar14)) {
        pcVar9 = (code *)swi(3);
        pTVar16 = (TVector2<double> *)(*pcVar9)();
        return pTVar16;
      }
      this_00 = *(SWidget **)
                 (*(longlong *)((this->Children).Children.AllocatorInstance.Data + lVar21 * 8) +
                 0x10);
      fVar31 = fVar32;
      if ((TEnumAsByte<EVisibility::Private>)this_00->VisibilityAttribute != EVar13.Value.Value) {
        FVar18 = SWidget::GetDesiredSize(this_00);
        dVar23 = (double)(fVar2 + fVar4 + *(float *)FVar18);
        dVar26 = (double)(fVar3 + fVar5 + *(float *)((longlong)FVar18 + 4));
        if (dVar23 <= dVar25) {
          dVar23 = dVar25;
        }
        if (dVar26 <= dVar30) {
          dVar26 = dVar30;
        }
        dVar24 = dVar26;
        dVar28 = dVar23;
        if (this->Orientation == Orient_Horizontal) {
          dVar24 = dVar23;
          dVar28 = dVar26;
        }
        fVar31 = (float)dVar24;
        if (((0.0 < fVar6) && (fVar6 < fVar31)) || ((0.0 < fVar7 && (fVar31 < fVar7)))) {
          uVar10 = (double)uVar10 + dVar23;
          uVar11 = (double)uVar11 + dVar26;
        }
        else {
          iVar20 = iVar20 + 1;
          fVar12 = this->MajorAxisUniformDesiredSize;
          if (this->MajorAxisUniformDesiredSize <= fVar31) {
            fVar12 = fVar31;
          }
          this->MajorAxisUniformDesiredSize = fVar12;
        }
        fVar31 = (float)dVar28;
        EVar13.Value.Value = EVisibility::Collapsed.Value.Value;
        if ((float)dVar28 <= fVar32) {
          fVar31 = fVar32;
        }
      }
      uVar22 = uVar22 + 1;
      lVar21 = lVar21 + 1;
      fVar32 = fVar31;
    } while (lVar21 < iVar1);
  }
  uVar27 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  uVar29 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  if (this->ClippedIndex != -1) {
    if (((this->Dropdown).Object == (SComboButton *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      pTVar16 = (TVector2<double> *)(*pcVar9)();
      return pTVar16;
    }
    FVar18 = SWidget::GetDesiredSize((SWidget *)(this->Dropdown).Object);
    uVar27 = (undefined8)*(float *)FVar18;
    uVar29 = (undefined8)*(float *)((longlong)FVar18 + 4);
  }
  dVar25 = (double)((float)iVar8 * fVar31);
  dVar30 = (double)((float)iVar20 * this->MajorAxisUniformDesiredSize);
  if (this->Orientation == Orient_Horizontal) {
    dVar26 = dVar25;
    dVar25 = dVar30 + (double)uVar10;
  }
  else {
    dVar26 = dVar30 + (double)uVar11;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)uVar27 + dVar25;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar29 + dVar26;
  return __return_storage_ptr__;
}

// Construct @ 1427efc80

void __thiscall SUniformToolbarPanel::Construct(SUniformToolbarPanel *this,FArguments *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  SImage *pSVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FToolBarStyle *pFVar9;
  FArguments *this_00;
  FText *pFVar10;
  FArguments *pFVar11;
  TSharedRef<SImage,1> *pTVar12;
  TSharedRef<SComboButton,1> *pTVar13;
  FSlotBase *this_01;
  FSlotBase *pFVar14;
  FSlotBase *pFVar15;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FLLMScope local_res20 [2];
  undefined4 local_818;
  undefined1 local_814;
  undefined1 local_810;
  undefined1 local_808 [8];
  ForAnyElementType FStack_800;
  ulonglong local_7f8;
  FSlateBrush *local_7f0;
  undefined1 local_7e8;
  undefined1 local_7e0 [8];
  ForAnyElementType FStack_7d8;
  ulonglong local_7d0;
  FText local_7c8;
  undefined1 local_7b8;
  undefined1 local_7b0 [8];
  ForAnyElementType FStack_7a8;
  ulonglong local_7a0;
  SWidget *local_798;
  TReferenceControllerBase<1> *pTStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined1 local_778;
  undefined1 local_770 [8];
  ForAnyElementType FStack_768;
  ulonglong local_760;
  FName local_758;
  FMemScope local_750;
  FName local_748;
  FMemScope local_740;
  TArray<SUniformToolbarPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> local_738;
  TSharedRef<SWidget,1> local_728;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_718;
  FSlotBase *local_700;
  undefined8 local_6f8;
  TReferenceControllerBase<1> *pTStack_6f0;
  undefined1 local_6e4;
  undefined1 local_6dc;
  FDestructionSentinel local_6d8;
  FDestructionSentinel local_6c0;
  FDestructionSentinel local_6a8;
  FDestructionSentinel local_690;
  SComboButton *local_678;
  TReferenceControllerBase<1> *pTStack_670;
  TSharedRef<SComboButton,1> local_668;
  TSharedRef<SImage,1> local_658;
  FText local_648;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_638;
  FArguments local_620;
  FArguments local_378;
  
  pFVar14 = (FSlotBase *)0x0;
  local_res8[0] = 0;
  fVar5 = (param_1->_SlotPadding).Value.Top;
  fVar6 = (param_1->_SlotPadding).Value.Right;
  fVar7 = (param_1->_SlotPadding).Value.Bottom;
  (this->SlotPadding).Value.Left = (param_1->_SlotPadding).Value.Left;
  (this->SlotPadding).Value.Top = fVar5;
  (this->SlotPadding).Value.Right = fVar6;
  (this->SlotPadding).Value.Bottom = fVar7;
  (this->SlotPadding).bIsSet = (param_1->_SlotPadding).bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SlotPadding).Getter,&(param_1->_SlotPadding).Getter);
  dVar4 = (param_1->_MinDesiredSlotSize).Value.field0_0x0._s_0.Y;
  (this->MinDesiredSlotSize).Value.field0_0x0._s_0.X =
       (param_1->_MinDesiredSlotSize).Value.field0_0x0._s_0.X;
  (this->MinDesiredSlotSize).Value.field0_0x0._s_0.Y = dVar4;
  (this->MinDesiredSlotSize).bIsSet = (param_1->_MinDesiredSlotSize).bIsSet;
  TDelegate<UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinDesiredSlotSize).Getter,&(param_1->_MinDesiredSlotSize).Getter);
  (this->MaxUniformSize).Value = (param_1->_MaxUniformSize).Value;
  (this->MaxUniformSize).bIsSet = (param_1->_MaxUniformSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MaxUniformSize).Getter,&(param_1->_MaxUniformSize).Getter);
  (this->MinUniformSize).Value = (param_1->_MinUniformSize).Value;
  (this->MinUniformSize).bIsSet = (param_1->_MinUniformSize).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->MinUniformSize).Getter,&(param_1->_MinUniformSize).Getter);
  this->StyleSet = param_1->_StyleSet;
  this->StyleName = param_1->_StyleName;
  this->Orientation = param_1->_Orientation;
  this->ClippedIndex = -1;
  local_738.AllocatorInstance.Data = (param_1->_Slots).AllocatorInstance.Data;
  (param_1->_Slots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_738.ArrayNum = (param_1->_Slots).ArrayNum;
  local_738.ArrayMax = (param_1->_Slots).ArrayMax;
  (param_1->_Slots).ArrayNum = 0;
  (param_1->_Slots).ArrayMax = 0;
  TPanelChildren<SUniformToolbarPanel::FSlot>::AddSlots(&this->Children,&local_738);
  pFVar9 = (FToolBarStyle *)
           (**(code **)((longlong)*this->StyleSet + 0xa0))
                     (this->StyleSet,FToolBarStyle::TypeName,this->StyleName,0,1);
  if (pFVar9 == (FToolBarStyle *)0x0) {
    pFVar9 = FToolBarStyle::GetDefault();
  }
  this_00 = SComboButton::FArguments::FArguments(&local_378);
  this_00->_ButtonStyle = &pFVar9->ButtonStyle;
  this_00->_HasDownArrow = false;
  local_778 = 1;
  local_760 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_770 = (undefined1  [8])0x0;
  FStack_768.Data = (FScriptContainerElement *)0x0;
  (this_00->_ContentPadding).Value.Left = 0.0;
  (this_00->_ContentPadding).Value.Top = 0.0;
  (this_00->_ContentPadding).Value.Right = 0.0;
  (this_00->_ContentPadding).Value.Bottom = 0.0;
  (this_00->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this_00->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_770);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_770,
             (FWriteAccessScope *)&local_6d8);
  if (((int)local_760 != 0) && (FStack_768.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_768.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_768,0,0,0x10);
    local_760 = local_760 & 0xffffffff00000000;
  }
  if (local_6d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
  }
  if (FStack_768.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_768.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_770);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_648,L"Slate",L"ExpandToolbar",L"Click to expand toolbar");
  FText::FText(&local_7c8,pFVar10);
  local_7b8 = 1;
  local_7a0 = 0;
  local_7b0 = (undefined1  [8])0x0;
  FStack_7a8.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)this_00,&local_7c8);
  *(undefined1 *)&this_00->_padding_ = local_7b8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
             (FWriteAccessScope *)&local_6c0);
  if (((int)local_7a0 != 0) && (FStack_7a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7a8,0,0,0x10);
    local_7a0 = local_7a0 & 0xffffffff00000000;
  }
  if (local_6c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
  }
  if (FStack_7a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7b0);
  if (local_7c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_7c8.TextData.Reference + 0x10))();
  }
  TDelegate<TSharedRef<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&this_00->_OnGetMenuContent,&param_1->_OnDropdownOpened);
  local_818 = 1;
  local_7f8 = 0;
  local_814 = 1;
  local_810 = 1;
  local_808 = (undefined1  [8])0x0;
  FStack_800.Data = (FScriptContainerElement *)0x0;
  if ((longlong *)&local_818 != &this_00->_padding_) {
    *(undefined4 *)&this_00->_padding_ = 1;
    *(undefined1 *)((longlong)&this_00->_padding_ + 4) = 1;
  }
  *(undefined1 *)&this_00->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_808);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_808,
             (FWriteAccessScope *)&local_6a8);
  if (((int)local_7f8 != 0) && (FStack_800.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_800.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_800,0,0,0x10);
    local_7f8 = local_7f8 & 0xffffffff00000000;
  }
  if (local_6a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
  }
  if (FStack_800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_800.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_808);
  pFVar11 = SImage::FArguments::FArguments(&local_620);
  local_7e8 = 1;
  local_7f0 = &(pFVar9->WrapButtonStyle).ExpandBrush;
  local_7d0 = 0;
  local_7e0 = (undefined1  [8])0x0;
  FStack_7d8.Data = (FScriptContainerElement *)0x0;
  (pFVar11->_Image).Value = local_7f0;
  (pFVar11->_Image).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7e0,
             (FWriteAccessScope *)&local_690);
  if (((int)local_7d0 != 0) && (FStack_7d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d8,0,0,0x10);
    local_7d0 = local_7d0 & 0xffffffff00000000;
  }
  if (local_690.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
  }
  if (FStack_7d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7e0);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_758 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_750,&local_758,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_638,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SUniformToolbarPanel.cpp"
             ,0x2c,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope(&local_750);
  FLLMScope::~FLLMScope(local_res18);
  pTVar12 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_638,&local_658,pFVar11);
  pTVar1 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar12->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_798 = (this_00->_ButtonContent).Widget.Object;
  pTStack_790 = (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController;
  (this_00->_ButtonContent).Widget.Object = (SWidget *)pSVar2;
  (this_00->_ButtonContent).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_790);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_748 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_740,&local_748,true);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>
            (&local_718,"SComboButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SUniformToolbarPanel.cpp"
             ,0x23,local_res10);
  FMemScope::~FMemScope(&local_740);
  FLLMScope::~FLLMScope(local_res20);
  if (local_718._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_718._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_718._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_678 = (this->Dropdown).Object;
  pTStack_670 = (this->Dropdown).SharedReferenceCount.ReferenceController;
  (this->Dropdown).Object = local_718._Widget.Object;
  (this->Dropdown).SharedReferenceCount.ReferenceController =
       local_718._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_670);
  pTVar13 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_718,&local_668,this_00);
  this_01 = ::operator_new(0x28);
  pFVar15 = pFVar14;
  if (this_01 != (FSlotBase *)0x0) {
    local_728.SharedReferenceCount.ReferenceController =
         (pTVar13->SharedReferenceCount).ReferenceController;
    local_728.Object = (SWidget *)pTVar13->Object;
    if (local_728.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_728.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::FSlotBase(this_01,&local_728);
    this_01[1]._padding_ = 0;
    this_01->_padding_ = (longlong)&___7FSlot_SUniformToolbarPanel__6B_;
    pFVar14 = (FSlotBase *)&DAT_00000001;
    pFVar15 = this_01;
  }
  if (pFVar14 != (FSlotBase *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_728.SharedReferenceCount.ReferenceController);
  }
  local_6f8 = 0;
  pTStack_6f0 = (TReferenceControllerBase<1> *)0x0;
  local_700 = pFVar15;
  if ((pFVar15 == (FSlotBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Slot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\SlotBase.h"
                         ,0x9b,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_6e4 = 0;
  local_6dc = 0;
  TPanelChildren<SUniformToolbarPanel::FSlot>::AddSlot(&this->Children,(FSlotArguments *)&local_700)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_6f0);
  if (local_700 != (FSlotBase *)0x0) {
    (**(code **)local_700->_padding_)(local_700,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_668.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_718._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_658.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_638._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_620);
  if (local_648.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_648.TextData.Reference + 0x10))();
  }
  SComboButton::FArguments::~FArguments(&local_378);
  return;
}

// GetChildren @ 14280ed40

FChildren * __thiscall SUniformToolbarPanel::GetChildren(SUniformToolbarPanel *this)

{
  return (FChildren *)&this->Children;
}

// OnArrangeChildren @ 142823910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
SUniformToolbarPanel::OnArrangeChildren
          (SUniformToolbarPanel *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  float fVar1;
  float fVar2;
  EVisibility EVar3;
  int iVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  double dVar8;
  undefined1 auVar9 [8];
  float fVar10;
  TVector2<double>_u_0 TVar11;
  FGeometry *this_00;
  FSharedReferencer<1> FVar12;
  SWidget *pSVar13;
  FSharedReferencer<1> FVar14;
  bool bVar15;
  uint uVar16;
  float *pfVar17;
  FMargin *pFVar18;
  FSlot *pFVar19;
  FDeprecateSlateVector2D FVar20;
  FArrangedWidget *pFVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStackY_378 [32];
  float local_348;
  float local_340;
  float fStack_33c;
  undefined8 local_338;
  undefined8 local_330;
  float fStack_314;
  undefined1 local_310 [8];
  double dStack_308;
  undefined8 local_300;
  float local_2f8;
  float fStack_2f4;
  undefined8 local_2f0;
  float local_2e8;
  float fStack_2e4;
  float local_2e0;
  float fStack_2dc;
  FGeometry *local_2d8;
  FArrangedChildren *local_2d0;
  FSlateLayoutTransform local_2c8;
  FSlateLayoutTransform local_2bc;
  double local_2b0;
  double local_2a8;
  FDeprecateVector2DParameter local_2a0;
  FDeprecateVector2DParameter local_298;
  double local_290;
  FDeprecateVector2DParameter local_288;
  double local_280;
  TSharedRef<SWidget,1> local_278 [5];
  FArrangedWidget local_228;
  FArrangedWidget local_1d8;
  FArrangedWidget local_188;
  FArrangedWidget local_138;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  if (0 < (this->Children).Children.ArrayNum) {
    this->ClippedIndex = -1;
    local_2d8 = param_1;
    local_2d0 = param_2;
    pfVar17 = TAttribute<float>::Get(&this->MaxUniformSize);
    fVar1 = *pfVar17;
    pfVar17 = TAttribute<float>::Get(&this->MinUniformSize);
    fVar2 = *pfVar17;
    if (this->Orientation == Orient_Horizontal) {
      local_330._4_4_ = SUB84(param_1->Size,4);
      fVar10 = local_330._4_4_;
      local_348 = this->MajorAxisUniformDesiredSize;
    }
    else {
      local_348 = SUB84(param_1->Size,0);
      fVar10 = this->MajorAxisUniformDesiredSize;
    }
    pFVar18 = TAttribute<FMargin>::Get(&this->SlotPadding);
    fVar25 = pFVar18->Right + pFVar18->Left;
    fVar28 = pFVar18->Bottom + pFVar18->Top;
    local_338 = (double)CONCAT44(fVar28,fVar25);
    local_300 = local_338;
    dVar29 = (double)fVar25;
    dVar8 = (double)fVar28;
    local_2b0 = dVar29;
    local_2a8 = dVar8;
    pFVar18 = TAttribute<FMargin>::Get(&this->SlotPadding);
    iVar4 = (this->Children).Children.ArrayNum;
    iVar22 = iVar4 + -1;
    _local_310 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    pFVar19 = TPanelChildren<SUniformToolbarPanel::FSlot>::operator[](&this->Children,iVar22);
    FVar20 = SWidget::GetDesiredSize(*(SWidget **)&pFVar19->field_0x10);
    fVar25 = __real_3f000000;
    uVar24 = 0;
    local_290 = (double)*(float *)FVar20;
    local_280 = (double)*(float *)((longlong)FVar20 + 4);
    if (0 < iVar22) {
      local_338 = dStack_308;
      local_330 = 0;
      auVar9 = local_310;
      do {
        uVar16 = 0;
        if ((int)uVar24 < (this->Children).Children.ArrayNum) {
          uVar16 = ~uVar24 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)((this->Children).Children.AllocatorInstance.Data + local_330 * 8);
        EVar3.Value.Value =
             *(TEnumAsByte<EVisibility::Private> *)
              &(*(SWidget **)(lVar5 + 0x10))->VisibilityAttribute;
        if (((param_2->VisibilityFilter).Value.Value & (byte)EVar3.Value.Value) != 0) {
          FVar20 = SWidget::GetDesiredSize(*(SWidget **)(lVar5 + 0x10));
          fStack_2f4 = (float)dVar8 + *(float *)((longlong)FVar20 + 4);
          fVar26 = (float)dVar29 + *(float *)FVar20;
          local_2f0 = CONCAT44(fStack_2f4,fVar26);
          fVar28 = fStack_2f4;
          if (this->Orientation == Orient_Horizontal) {
            fVar28 = fVar26;
          }
          local_2f8 = fVar26;
          if (((0.0 < fVar1) && (fVar1 < fVar28)) || ((0.0 < fVar2 && (fVar28 < fVar2)))) {
            fVar28 = pFVar18->Right;
            fVar30 = pFVar18->Left;
            iVar23 = *(int *)(lVar5 + 0x20);
            if (iVar23 == 0) {
LAB_142823c7e:
              fVar32 = fVar26 - (fVar28 + fVar30);
              if (fVar32 <= 0.0) {
                fVar32 = 0.0;
              }
            }
            else {
              FVar20 = SWidget::GetDesiredSize(*(SWidget **)(lVar5 + 0x10));
              fVar32 = fVar26 - (fVar28 + fVar30);
              if (*(float *)FVar20 <= fVar32) {
                fVar32 = *(float *)FVar20;
              }
              if (fVar32 <= 0.0) {
                fVar32 = 0.0;
              }
              if (iVar23 != 1) {
                if (iVar23 == 2) {
                  fVar30 = ((fVar26 - fVar32) * fVar25 + fVar30) - fVar28;
                }
                else {
                  if (iVar23 != 3) goto LAB_142823c7e;
                  fVar30 = (fVar26 - fVar32) - fVar28;
                }
              }
            }
            fVar28 = pFVar18->Bottom;
            fVar26 = pFVar18->Top;
            iVar23 = *(int *)(lVar5 + 0x24);
            fVar31 = fVar10 - (fVar28 + fVar26);
            if (iVar23 != 0) goto LAB_142823d71;
LAB_142823dcf:
            fVar27 = fVar31;
            if (fVar27 <= 0.0) {
              fVar27 = 0.0;
            }
          }
          else {
            fVar30 = pFVar18->Left;
            iVar23 = *(int *)(lVar5 + 0x20);
            fVar28 = pFVar18->Right;
            fVar26 = local_348 - (fVar30 + fVar28);
            if (iVar23 == 0) {
LAB_142823d3b:
              fVar32 = fVar26;
              if (fVar26 <= 0.0) {
                fVar32 = 0.0;
              }
            }
            else {
              FVar20 = SWidget::GetDesiredSize(*(SWidget **)(lVar5 + 0x10));
              fVar32 = fVar26;
              if (*(float *)FVar20 <= fVar26) {
                fVar32 = *(float *)FVar20;
              }
              if (fVar32 <= 0.0) {
                fVar32 = 0.0;
              }
              if (iVar23 != 1) {
                if (iVar23 == 2) {
                  fVar30 = ((local_348 - fVar32) * fVar25 + fVar30) - fVar28;
                }
                else {
                  if (iVar23 != 3) goto LAB_142823d3b;
                  fVar30 = (local_348 - fVar32) - fVar28;
                }
              }
            }
            fVar28 = pFVar18->Bottom;
            fVar26 = pFVar18->Top;
            iVar23 = *(int *)(lVar5 + 0x24);
            fVar31 = fVar10 - (fVar28 + fVar26);
            if (iVar23 == 0) goto LAB_142823dcf;
LAB_142823d71:
            FVar20 = SWidget::GetDesiredSize(*(SWidget **)(lVar5 + 0x10));
            fVar27 = *(float *)((longlong)FVar20 + 4);
            if (fVar31 <= *(float *)((longlong)FVar20 + 4)) {
              fVar27 = fVar31;
            }
            if (fVar27 <= 0.0) {
              fVar27 = 0.0;
            }
            if (iVar23 != 1) {
              if (iVar23 == 2) {
                fVar26 = ((fVar10 - fVar27) * fVar25 + fVar26) - fVar28;
              }
              else {
                if (iVar23 != 3) goto LAB_142823dcf;
                fVar26 = (fVar10 - fVar27) - fVar28;
              }
            }
          }
          pFVar21 = FArrangedWidget::GetNullWidget();
          this_00 = local_2d8;
          local_228.Geometry.Size = (pFVar21->Geometry).Size;
          local_228.Geometry._8_8_ = *(undefined8 *)&(pFVar21->Geometry).Scale;
          local_228.Geometry._16_8_ =
               *(undefined8 *)((longlong)&(pFVar21->Geometry).AbsolutePosition.field0_0x0 + 4);
          local_228.Geometry._24_8_ =
               *(undefined8 *)((longlong)&(pFVar21->Geometry).Position.field0_0x0 + 4);
          local_228.Geometry.AccumulatedRenderTransform.M.M._4_8_ =
               *(undefined8 *)((pFVar21->Geometry).AccumulatedRenderTransform.M.M[0] + 1);
          local_228.Geometry.AccumulatedRenderTransform._12_8_ =
               *(undefined8 *)((pFVar21->Geometry).AccumulatedRenderTransform.M.M[1] + 1);
          local_228.Geometry._48_8_ =
               *(undefined8 *)
                ((longlong)&(pFVar21->Geometry).AccumulatedRenderTransform.Trans.field0_0x0 + 4);
          local_228.Widget.Object = (pFVar21->Widget).Object;
          local_228.Widget.SharedReferenceCount.ReferenceController =
               (pFVar21->Widget).SharedReferenceCount.ReferenceController;
          if (local_228.Widget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_228.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_228.Widget.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          if (this->Orientation == Orient_Horizontal) {
            local_2c8.Scale = 1.0;
            local_2a0._4_4_ = fVar27;
            local_2a0._0_4_ = fVar32;
            local_2c8.Translation.field0_0x0._s_0.X = (float)((double)fVar30 + (double)auVar9);
            local_2e8 = fVar32;
            fStack_2e4 = fVar27;
            local_2c8.Translation.field0_0x0._s_0.Y = fVar26;
            FGeometry::MakeChild
                      (local_2d8,&local_1d8,(TSharedRef<SWidget,1> *)(lVar5 + 0x10),&local_2a0,
                       &local_2c8);
            FGeometry::operator=(&local_228.Geometry,&local_1d8.Geometry);
            FVar14.ReferenceController = local_1d8.Widget.SharedReferenceCount.ReferenceController;
            pSVar13 = local_1d8.Widget.Object;
            FVar12.ReferenceController = local_228.Widget.SharedReferenceCount.ReferenceController;
            local_1d8.Widget.Object = local_228.Widget.Object;
            local_1d8.Widget.SharedReferenceCount.ReferenceController =
                 local_228.Widget.SharedReferenceCount.ReferenceController;
            local_228.Widget.Object = pSVar13;
            local_228.Widget.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            local_340 = local_228.Geometry.Size._0_4_;
            fVar28 = local_340 * local_228.Geometry.Scale;
            local_340 = SUB84(this_00->Size,0);
            fVar28 = fVar28 + local_228.Geometry.AbsolutePosition.field0_0x0._s_0.X;
            dVar29 = (double)(local_340 * this_00->Scale +
                             (this_00->AbsolutePosition).field0_0x0._s_0.X) - local_290;
          }
          else {
            local_2bc.Scale = 1.0;
            local_288._4_4_ = fVar27;
            local_288._0_4_ = fVar32;
            local_2bc.Translation.field0_0x0._s_0.Y = (float)((double)fVar26 + local_338);
            local_2e0 = fVar32;
            fStack_2dc = fVar27;
            local_2bc.Translation.field0_0x0._s_0.X = fVar30;
            FGeometry::MakeChild
                      (local_2d8,&local_188,(TSharedRef<SWidget,1> *)(lVar5 + 0x10),&local_288,
                       &local_2bc);
            FGeometry::operator=(&local_228.Geometry,&local_188.Geometry);
            FVar14.ReferenceController = local_188.Widget.SharedReferenceCount.ReferenceController;
            pSVar13 = local_188.Widget.Object;
            FVar12.ReferenceController = local_228.Widget.SharedReferenceCount.ReferenceController;
            local_188.Widget.Object = local_228.Widget.Object;
            local_188.Widget.SharedReferenceCount.ReferenceController =
                 local_228.Widget.SharedReferenceCount.ReferenceController;
            local_228.Widget.Object = pSVar13;
            local_228.Widget.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            fStack_33c = local_228.Geometry.Size._4_4_;
            fVar28 = fStack_33c * local_228.Geometry.Scale;
            fStack_33c = SUB84(this_00->Size,4);
            fVar28 = fVar28 + local_228.Geometry.AbsolutePosition.field0_0x0._s_0.Y;
            dVar29 = (double)(fStack_33c * this_00->Scale +
                             (this_00->AbsolutePosition).field0_0x0._s_0.Y) - local_280;
          }
          param_2 = local_2d0;
          if ((int)(longlong)dVar29 < (int)fVar28) {
            this->ClippedIndex = uVar24;
            pFVar19 = TPanelChildren<SUniformToolbarPanel::FSlot>::operator[]
                                (&this->Children,iVar22);
            pTVar6 = *(TReferenceControllerBase<1> **)&pFVar19->field_0x18;
            local_278[0].Object = *(SWidget **)&pFVar19->field_0x10;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_278[0].SharedReferenceCount.ReferenceController = pTVar6;
            FVar20 = SWidget::GetDesiredSize(local_278[0].Object);
            TVar11 = _local_310;
            local_298 = *(FDeprecateVector2DParameter *)FVar20;
            local_310._4_4_ = (float)(double)auVar9;
            local_310._0_4_ = 1.0;
            fStack_314 = SUB84(this_00->Size,4);
            dStack_308._4_4_ = TVar11._12_4_;
            dStack_308._0_4_ =
                 (float)(((double)fStack_314 - (double)*(float *)((longlong)FVar20 + 4)) *
                        __real_3fe0000000000000);
            FGeometry::MakeChild
                      (this_00,&local_138,local_278,&local_298,(FSlateLayoutTransform *)local_310);
            FArrangedChildren::AddWidget(local_2d0,&local_138);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_138.Widget.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_228.Widget.SharedReferenceCount.ReferenceController);
            return;
          }
          FArrangedChildren::AddWidget(local_2d0,EVar3,&local_228);
          local_338 = local_338 + (double)fVar27;
          auVar9 = (undefined1  [8])((double)auVar9 + (double)fVar32);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_228.Widget.SharedReferenceCount.ReferenceController);
          dVar29 = local_2b0;
          dVar8 = local_2a8;
        }
        uVar24 = uVar24 + 1;
        local_330 = local_330 + 1;
      } while (local_330 < (longlong)iVar4 + -1);
    }
  }
  return;
}

// RemoveSlot @ 1428329b0

bool __thiscall
SUniformToolbarPanel::RemoveSlot(SUniformToolbarPanel *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  TArray<TUniquePtr<SUniformToolbarPanel::FSlot,TDefaultDelete<SUniformToolbarPanel::FSlot>_>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  iVar10 = (this->Children).Children.ArrayNum;
  uVar11 = 0;
  if (0 < iVar10) {
    pTVar2 = &(this->Children).Children;
    uVar14 = uVar11;
    do {
      uVar13 = (uint)uVar14;
      uVar12 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < iVar10) {
        uVar9 = uVar12;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((pTVar2->AllocatorInstance).Data + uVar11) + 0x10)) {
        uVar9 = 0;
        if ((int)uVar13 < (this->Children).Children.ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        lVar15 = (longlong)(int)uVar13;
        puVar4 = *(undefined8 **)(pFVar3 + lVar15 * 8);
        *(undefined8 *)(pFVar3 + lVar15 * 8) = 0;
        uVar9 = 0;
        if ((int)uVar13 < (this->Children).Children.ArrayNum) {
          uVar9 = uVar12;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        puVar5 = *(undefined8 **)(pFVar3 + lVar15 * 8);
        pFVar3 = pFVar3 + lVar15 * 8;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        iVar10 = (this->Children).Children.ArrayNum + ~uVar13;
        if (iVar10 != 0) {
          memmove(pFVar3,pFVar3 + 8,(longlong)iVar10 << 3);
        }
        piVar1 = &(this->Children).Children.ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->Children).Children.ArrayNum,
                   &(this->Children).Children.ArrayMax);
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
        return true;
      }
      iVar10 = (this->Children).Children.ArrayNum;
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar13 + 1) < iVar10);
  }
  return false;
}

// SetSlotPadding @ 1428359c0

void __thiscall
SUniformToolbarPanel::SetSlotPadding(SUniformToolbarPanel *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->SlotPadding).Value.Left = (param_1->Value).Left;
  (this->SlotPadding).Value.Top = fVar2;
  (this->SlotPadding).Value.Right = fVar3;
  (this->SlotPadding).Value.Bottom = fVar4;
  (this->SlotPadding).bIsSet = param_1->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->SlotPadding).Getter,this_00);
  SWidget::Invalidate((SWidget *)this,Layout);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return;
}

// Slot @ 1428360e0

FSlotArguments * __cdecl SUniformToolbarPanel::Slot(FSlotArguments *__return_storage_ptr__)

{
  FSlotBase *local_res8;
  
  local_res8 = ::operator_new(0x28);
  if (local_res8 == (FSlotBase *)0x0) {
    local_res8 = (FSlotBase *)0x0;
  }
  else {
    local_res8->_padding_ = 0;
    local_res8->Owner = (FChildren *)0x0;
    (local_res8->Widget).Object = (SWidget *)0x0;
    (local_res8->Widget).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSlotBase::FSlotBase(local_res8);
    local_res8[1]._padding_ = 0;
    local_res8->_padding_ = (longlong)&___7FSlot_SUniformToolbarPanel__6B_;
  }
  FSlot::FSlotArguments::FSlotArguments(__return_storage_ptr__,(FSlot *)&local_res8);
  return __return_storage_ptr__;
}

