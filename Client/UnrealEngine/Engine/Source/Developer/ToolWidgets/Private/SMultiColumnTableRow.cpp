// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// Construct @ 142d78880

void __thiscall
SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::Construct
          (SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SHorizontalBox *pSVar2;
  code *pcVar3;
  bool bVar4;
  FArguments *pFVar5;
  FArguments *pFVar6;
  TSharedRef<SHorizontalBox,1> *pTVar7;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  TSharedPtr<SHeaderRow,1> local_5e8;
  SWidget *local_5d8;
  TReferenceControllerBase<1> *pTStack_5d0;
  code *local_5c8;
  undefined8 uStack_5c0;
  TSharedRef<SHeaderRow,1> local_5b8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_5a8;
  undefined8 local_590;
  undefined8 uStack_588;
  bool local_580;
  undefined1 local_578 [24];
  undefined1 local_560 [32];
  TReferenceControllerBase<1> *local_540;
  FArguments local_538;
  FArguments local_330;
  
  pFVar5 = STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::FArguments(&local_330);
  pFVar5->_Style = param_1->_Style;
  pFVar5->_ExpanderStyleSet = param_1->_ExpanderStyleSet;
  local_580 = (param_1->_Padding).bIsSet;
  local_590._0_4_ = (param_1->_Padding).Value.Left;
  local_590._4_4_ = (param_1->_Padding).Value.Top;
  uStack_588._0_4_ = (param_1->_Padding).Value.Right;
  uStack_588._4_4_ = (param_1->_Padding).Value.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *)local_578,
             &(param_1->_Padding).Getter);
  (pFVar5->_Padding).Value.Left = (float)(undefined4)local_590;
  (pFVar5->_Padding).Value.Top = (float)local_590._4_4_;
  (pFVar5->_Padding).Value.Right = (float)(undefined4)uStack_588;
  (pFVar5->_Padding).Value.Bottom = (float)uStack_588._4_4_;
  (pFVar5->_Padding).bIsSet = local_580;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
  if ((void *)local_578._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_578._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_578);
  pFVar5->_ShowSelection = param_1->_ShowSelection;
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<CheckBoxList::FItemPair,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar5->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedRef<CheckBoxList::FItemPair,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar5->_OnAcceptDrop,&param_1->_OnAcceptDrop);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar5->_OnDragDetected,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDragEnter,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDragLeave,&param_1->_OnDragLeave);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDrop,&param_1->_OnDrop);
  pFVar6 = SHorizontalBox::FArguments::FArguments(&local_538);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_5a8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
             ,0x549,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  if (local_5a8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5a8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_560._8_8_ = (this->Box).Object;
  local_560._16_8_ = (this->Box).SharedReferenceCount.ReferenceController;
  (this->Box).Object = local_5a8._Widget.Object;
  (this->Box).SharedReferenceCount.ReferenceController =
       local_5a8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_560._16_8_);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_5a8,(TSharedRef<SHorizontalBox,1> *)(local_560 + 0x18),pFVar6);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_5d8 = (pFVar5->_Content).Widget.Object;
  pTStack_5d0 = (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar5->_Content).Widget.Object = (SWidget *)pSVar2;
  (pFVar5->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_5d0);
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::ConstructInternal
            ((STableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)this,pFVar5,param_2);
  (**(code **)(this->_padding_ + 0x80))
            (this,param_2->Object->TableViewMode,&pFVar5->_Padding,&pFVar5->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_540);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_538._Slots.AllocatorInstance.Data,local_538._Slots.ArrayNum);
  if ((FSlotArguments *)local_538._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_538._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_538);
  STableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::FArguments::~FArguments(&local_330);
  STableViewBase::GetHeaderRow(param_2->Object,&local_5e8);
  if (local_5e8.Object == (SHeaderRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderRow.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                       ,0x550,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((local_5e8.Object == (SHeaderRow *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uStack_5c0 = (ulonglong)uStack_5c0._4_4_ << 0x20;
  local_5c8 = GenerateColumns;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>_>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
              *)&(local_5e8.Object)->ColumnsChanged,
             (SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *)local_560,
             (pmf_d1084845 *)this);
  if ((local_5e8.Object == (SHeaderRow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_5b8.SharedReferenceCount.ReferenceController =
       local_5e8.SharedReferenceCount.ReferenceController;
  if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_5e8.Object == (SHeaderRow *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  GenerateColumns(this,&local_5b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5e8.SharedReferenceCount.ReferenceController);
  return;
}

// ConstructChildren @ 142d8f140

void __thiscall
SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::ConstructChildren
          (SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *this,Type param_1,
          TAttribute<FMargin> *param_2,TSharedRef<SWidget,1> *param_3)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSingleWidgetChildrenWithBasicLayoutSlot<0> *pTVar7;
  TAttribute<FMargin> local_38;
  
  this->_padding_ = (longlong)param_3->Object;
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)this->_padding_) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar4 = (longlong *)this->_padding_;
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
    this->_padding_ = (longlong)pTVar3;
  }
  local_38.Value.Left = (param_2->Value).Left;
  local_38.Value.Top = (param_2->Value).Top;
  local_38.Value.Right = (param_2->Value).Right;
  local_38.Value.Bottom = (param_2->Value).Bottom;
  local_38.bIsSet = param_2->bIsSet;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>(&local_38.Getter,&param_2->Getter);
  pTVar7 = TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>::Padding
                     ((TPaddingSingleWidgetSlotMixin<TSingleWidgetChildrenWithBasicLayoutSlot<0>,0>
                       *)&this->_padding_,&local_38);
  FSlotBase::DetatchParentFromContent((FSlotBase *)&pTVar7->field_0x20);
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  pSVar5 = param_3->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)&pTVar7->field_0x38;
  *(SWidget **)&pTVar7->field_0x30 = pSVar5;
  *(TReferenceControllerBase<1> **)&pTVar7->field_0x38 = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)&pTVar7->field_0x20);
  return;
}

// GenerateColumns @ 142da6d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_>::GenerateColumns
          (SMultiColumnTableRow<TSharedRef<CheckBoxList::FItemPair,1>_> *this,
          TSharedRef<SHeaderRow,1> *param_1)

{
  int *piVar1;
  TSharedPtr<SHorizontalBox,1> *this_00;
  int iVar2;
  FName *pFVar3;
  FName FVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  void *pvVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  ForElementType<TAlignedBytes<16,16>_> FVar10;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  undefined1 (*pauVar15) [16];
  undefined8 *puVar16;
  ulong64 uVar17;
  FSlot *pFVar18;
  FSlot *pFVar19;
  FSlotArguments *pFVar20;
  FArguments *pFVar21;
  TSharedRef<SBox,1> *pTVar22;
  SHorizontalBox *pSVar23;
  float *pfVar24;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_01;
  FName *pFVar25;
  FSharedReferencer<1> FVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> _Src;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  void *_Dst;
  undefined1 auStackY_cc8 [32];
  T0RequiredArgs local_c98;
  T0RequiredArgs local_c97 [15];
  undefined1 local_c88 [12];
  undefined4 uStack_c7c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c78;
  FDelegateAllocation local_c70;
  float local_c60;
  undefined1 local_c5c;
  undefined1 local_c58 [8];
  ForAnyElementType FStack_c50;
  ulonglong local_c48;
  FLLMScope local_c40 [2];
  float local_c38;
  undefined1 local_c34;
  undefined1 local_c30 [8];
  FDelegateAllocation FStack_c28;
  SBox *local_c18;
  FSharedReferencer<1> local_c10;
  SBox *local_c08;
  FSharedReferencer<1> local_c00;
  TSharedRef<SHeaderRow,1> *local_bf8;
  undefined8 local_bf0;
  FSharedReferencer<1> local_be8;
  float local_be0;
  bool local_bdc;
  undefined1 local_bd8 [24];
  TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&> local_bc0;
  FName local_bb0;
  FMemScope local_ba8;
  FSlot *local_ba0;
  longlong local_b98;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *local_b90;
  TAttribute<FOptionalSize> local_b88;
  FName *local_b68;
  undefined1 *local_b60;
  TAttribute<float> local_b58;
  FDestructionSentinel local_b38;
  FDestructionSentinel local_b20;
  FDestructionSentinel local_b08;
  FDestructionSentinel local_af0;
  FDestructionSentinel local_ad8;
  FDelegateAllocation *local_ac0;
  FDestructionSentinel local_ab8;
  FDelegateAllocation *local_aa0;
  SWidget *local_a98;
  TReferenceControllerBase<1> *pTStack_a90;
  TSharedRef<SBox,1> local_a88;
  SWidget *local_a78;
  TReferenceControllerBase<1> *pTStack_a70;
  TSharedRef<SBox,1> local_a68;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_a58;
  undefined1 local_a40 [8];
  TReferenceControllerBase<1> *local_a38;
  undefined **local_a30;
  undefined8 *local_a28 [2];
  TReferenceControllerBase<1> *local_a18;
  undefined1 local_9f8 [24];
  uint local_9e0;
  undefined1 local_9dc;
  uint local_9d8;
  undefined1 local_9d4;
  FSlotArgumentsMixin local_9d0;
  TPanelChildren<SBoxPanel::FSlot> *local_940;
  int local_938;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_930;
  undefined **local_918;
  undefined8 *local_910 [2];
  TReferenceControllerBase<1> *local_900;
  undefined1 local_8e0 [40];
  FSlotArgumentsMixin local_8b8;
  TPanelChildren<SBoxPanel::FSlot> *local_828;
  int local_820;
  undefined1 local_818 [256];
  FArguments local_718;
  FArguments local_3d8;
  TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_cc8;
  this_00 = &this->Box;
  local_bf8 = param_1;
  if ((this_00->Object == (SHorizontalBox *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  SBoxPanel::ClearChildren((SBoxPanel *)this_00->Object);
  local_b90 = SHeaderRow::GetColumns(param_1->Object);
  uVar29 = 0;
  iVar2 = (local_b90->Array).ArrayNum;
  local_b98 = (longlong)iVar2;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar30 = uVar29;
  if (0 < iVar2) {
    do {
      pTVar11 = local_b90;
      uVar28 = (uint)uVar29;
      uVar13 = 0;
      if ((int)uVar28 < (local_b90->Array).ArrayNum) {
        uVar13 = ~uVar28 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar3 = *(FName **)((pTVar11->Array).AllocatorInstance.Data + uVar30 * 8);
      bVar12 = SHeaderRow::ShouldGeneratedColumn(param_1->Object,pFVar3);
      if (bVar12) {
        FVar4 = *pFVar3;
        uVar13 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        FVar26 = SNullWidget::NullWidget.SharedReferenceCount;
        if (*(int *)&(this->ColumnIdToSlotContents).field_0x8 !=
            *(int *)&(this->ColumnIdToSlotContents).field_0x34) {
          puVar5 = *(undefined1 **)&(this->ColumnIdToSlotContents).field_0x40;
          puVar27 = &(this->ColumnIdToSlotContents).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar27 = puVar5;
          }
          uVar13 = *(uint *)(puVar27 +
                            (ulonglong)
                            (*(int *)&(this->ColumnIdToSlotContents).field_0x48 - 1U &
                            FVar4.Number + uVar13) * 4);
          if (uVar13 != 0xffffffff) {
            do {
              pFVar25 = (FName *)((longlong)(int)uVar13 * 0x20 +
                                 *(longlong *)&this->ColumnIdToSlotContents);
              if (*pFVar25 == FVar4) goto LAB_142da6f0b;
              uVar13 = pFVar25[3].ComparisonIndex.Value;
            } while (uVar13 != 0xffffffff);
          }
        }
        pFVar25 = (FName *)0x0;
LAB_142da6f0b:
        unique0x10000bdd = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
        local_c88._0_8_ = SNullWidget::NullWidget.Object;
        pFVar14 = pFVar25 + 1;
        if (pFVar25 == (FName *)0x0) {
          pFVar14 = (FName *)0x0;
        }
        if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pFVar14 == (FName *)0x0) {
          pauVar15 = (undefined1 (*) [16])(**(code **)(this->_padding_ + 0xa0))(this,local_a40);
          auVar9 = *pauVar15;
          *(undefined4 *)*pauVar15 = local_c88._0_4_;
          *(undefined4 *)(*pauVar15 + 4) = local_c88._4_4_;
          *(undefined4 *)(*pauVar15 + 8) = local_c88._8_4_;
          *(undefined4 *)(*pauVar15 + 0xc) = uStack_c7c;
          FVar26.ReferenceController = local_a38;
          _local_c88 = auVar9;
        }
        else {
          _local_c88 = *(undefined1 (*) [16])pFVar14;
          if (pFVar14[1] != (FName)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)pFVar14[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar26.ReferenceController);
        if ((SWidget *)local_c88._0_8_ == SNullWidget::NullWidget.Object) {
          bVar12 = SHeaderRow::ShouldGenerateEmptyColumnForSpacing(param_1->Object,pFVar3);
          if (bVar12) goto LAB_142da6fc5;
        }
        else {
          SWidget::SetClipping((SWidget *)local_c88._0_8_,OnDemand);
LAB_142da6fc5:
          uVar13 = pFVar3[0x1b].Number;
          if (uVar13 == 0) {
            local_c38 = 0.0;
            FStack_c28._8_8_ = 0;
            local_c34 = 1;
            local_c30 = (undefined1  [8])0x0;
            FStack_c28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c30,
                       (FWriteAccessScope *)&local_ab8);
            local_aa0 = &FStack_c28;
            puVar16 = UE::Core::Private::DelegateAllocate(0x28,&FStack_c28);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = &
                         ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar17 = FDelegateHandle::GenerateNewID();
              puVar16[2] = uVar17;
              *puVar16 = &
                         ___7__TBaseRawMethodDelegateInstance__00__CBVFColumn_SHeaderRow____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar16[4] = SHeaderRow::FColumn::GetWidth;
              puVar16[3] = pFVar3;
            }
            if (local_ab8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ab8.Accessor,&local_ab8);
            }
            if ((this_00->Object == (SHorizontalBox *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pSVar23 = this_00->Object;
            pFVar18 = ::operator_new(0x58);
            pFVar19 = (FSlot *)0x0;
            if (pFVar18 != (FSlot *)0x0) {
              *(undefined8 *)pFVar18 = 0;
              *(undefined8 *)&pFVar18->field_0x8 = 0;
              *(undefined8 *)&pFVar18->field_0x10 = 0;
              *(undefined8 *)&pFVar18->field_0x18 = 0;
              *(undefined8 *)&pFVar18->field_0x20 = 0;
              *(undefined8 *)&pFVar18->field_0x28 = 0;
              *(undefined8 *)&pFVar18->field_0x30 = 0;
              *(undefined8 *)&pFVar18->field_0x38 = 0;
              *(undefined8 *)&pFVar18->field_0x40 = 0;
              *(undefined8 *)&pFVar18->field_0x48 = 0;
              *(undefined8 *)&pFVar18->field_0x50 = 0;
              pFVar19 = SHorizontalBox::FSlot::FSlot(pFVar18);
            }
            local_ba0 = pFVar19;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)local_a28,(FSlot *)&local_ba0);
            local_a30 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_940 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar23->field_0x218;
            local_b58.Value = local_c38;
            local_9e0 = pFVar3[0x2a].ComparisonIndex.Value;
            local_9d8 = pFVar3[0x2a].Number;
            local_b58.bIsSet = (bool)local_c34;
            local_938 = -1;
            local_9dc = 1;
            local_9d4 = 1;
            local_b58.Getter._0_8_ = 0;
            local_b58.Getter._8_8_ = 0;
            local_b58.Getter._16_4_ = 0;
            TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&local_b58.Getter,
                       (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_c30);
            pFVar20 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                                ((FSlotArguments *)local_a28,&local_b58);
            local_bf0 = local_c88._0_8_;
            local_be8.ReferenceController = stack0xfffffffffffff380;
            if (stack0xfffffffffffff380 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff380->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff380->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((undefined8 *)&pFVar20->field_0x8 != &local_bf0) {
              *(undefined8 *)&pFVar20->field_0x8 = local_c88._0_8_;
              local_bf0 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_be8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_be8.ReferenceController);
            local_a30 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            if (local_a28[0] != (undefined8 *)0x0) {
              if (local_938 == -1) {
                TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_940,(FSlotArguments *)local_a28);
              }
              else {
                TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                          (local_940,(FSlotArguments *)local_a28,local_938);
              }
            }
            TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::
            ~FSlotArgumentsMixin(&local_9d0);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f8);
            if ((void *)local_9f8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_9f8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_9f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a18);
            if (local_a28[0] != (undefined8 *)0x0) {
              (**(code **)*local_a28[0])(local_a28[0],1);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c30,
                       (FWriteAccessScope *)&local_af0);
            if ((FStack_c28.DelegateSize != 0) &&
               (FStack_c28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_c28.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&FStack_c28,0,0,0x10);
              FStack_c28._8_8_ = FStack_c28._8_8_ & 0xffffffff00000000;
            }
            if (local_af0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_af0.Accessor,&local_af0);
            }
            if (FStack_c28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_c28.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_c30);
          }
          else if (uVar13 == 1) {
            pSVar23 = TSharedPtr<SHorizontalBox,1>::operator->(this_00);
            SHorizontalBox::InsertSlot
                      (pSVar23,(FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_818,-1);
            pFVar20 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                                ((FSlotArguments *)(local_818 + 8));
            pFVar21 = SBox::FArguments::FArguments(&local_3d8);
            pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(pFVar3 + 0x13));
            local_b88.Value.Size = *pfVar24;
            local_b88.Getter._0_8_ = 0;
            local_b88.Getter._8_8_ = 0;
            local_b88.bIsSet = true;
            local_b88.Getter._16_8_ = 0;
            pFVar21 = SBox::FArguments::WidthOverride(pFVar21,&local_b88);
            pFVar21->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar21->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar21->_padding_ + 2) = 4;
            if (stack0xfffffffffffff380 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff380->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff380->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a78 = (pFVar21->_Content).Widget.Object;
            pTStack_a70 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar21->_Content).Widget.Object = (SWidget *)local_c88._0_8_;
            (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff380;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a70);
            this_01 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                (&local_930,"SBox",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                 ,0x59c,local_c97);
            pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (this_01,&local_a68,pFVar21);
            pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
            local_c08 = pTVar22->Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c00.ReferenceController = pTVar6;
            if ((SBox **)&pFVar20->field_0x8 != &local_c08) {
              *(SBox **)&pFVar20->field_0x8 = local_c08;
              local_c08 = (SBox *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_c00);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c00.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a68.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_930._Widget.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&local_3d8);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_818);
            param_1 = local_bf8;
          }
          else if ((uVar13 == 2) || (uVar13 == 3)) {
            local_c60 = FOptionalSize::Unspecified;
            local_c5c = 0;
            local_c58 = (undefined1  [8])0x0;
            FStack_c50.Data = (FScriptContainerElement *)0x0;
            local_c48 = 0;
            local_c78.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_c70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_c70.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c78,(FWriteAccessScope *)&local_ad8);
            local_ac0 = &local_c70;
            puVar16 = UE::Core::Private::DelegateAllocate(0x20,&local_c70);
            if (puVar16 != (undefined8 *)0x0) {
              *puVar16 = &
                         ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar17 = FDelegateHandle::GenerateNewID();
              puVar16[2] = uVar17;
              *puVar16 = &
                         ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedRef_UFItemPair_CheckBoxList___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
              ;
              puVar16[3] = pFVar3;
            }
            if (local_ad8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ad8.Accessor,&local_ad8);
            }
            local_c5c = 1;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c78,(FWriteAccessScope *)&local_b38);
            iVar2 = local_c70.DelegateSize;
            FVar10 = local_c70.DelegateAllocator;
            local_c70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_c70.DelegateSize = 0;
            if (local_b38.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b38.Accessor,&local_b38);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c58,
                       (FWriteAccessScope *)&local_b20);
            if ((int)local_c48 == 0) {
LAB_142da714e:
              if (FStack_c50.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c50.Data);
              }
            }
            else if (FStack_c50.Data != (FScriptContainerElement *)0x0) {
              (*(code *)**(undefined8 **)FStack_c50.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_c50,0,0,0x10);
              local_c48 = local_c48 & 0xffffffff00000000;
              goto LAB_142da714e;
            }
            FStack_c50.Data = (FScriptContainerElement *)FVar10;
            local_c48 = CONCAT44(local_c48._4_4_,iVar2);
            if (local_b20.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b20.Accessor,&local_b20);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c78,(FWriteAccessScope *)&local_b08);
            if ((local_c70.DelegateSize != 0) &&
               (local_c70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_c70.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_c70,0,0,0x10);
              local_c70.DelegateSize = 0;
            }
            if (local_b08.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b08.Accessor,&local_b08);
            }
            if (local_c70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_c70.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c78.AccessDetector);
            if ((this_00->Object == (SHorizontalBox *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pSVar23 = this_00->Object;
            pFVar18 = ::operator_new(0x58);
            pFVar19 = (FSlot *)0x0;
            if (pFVar18 != (FSlot *)0x0) {
              *(undefined8 *)pFVar18 = 0;
              *(undefined8 *)&pFVar18->field_0x8 = 0;
              *(undefined8 *)&pFVar18->field_0x10 = 0;
              *(undefined8 *)&pFVar18->field_0x18 = 0;
              *(undefined8 *)&pFVar18->field_0x20 = 0;
              *(undefined8 *)&pFVar18->field_0x28 = 0;
              *(undefined8 *)&pFVar18->field_0x30 = 0;
              *(undefined8 *)&pFVar18->field_0x38 = 0;
              *(undefined8 *)&pFVar18->field_0x40 = 0;
              *(undefined8 *)&pFVar18->field_0x48 = 0;
              *(undefined8 *)&pFVar18->field_0x50 = 0;
              pFVar19 = SHorizontalBox::FSlot::FSlot(pFVar18);
            }
            local_bc0.Value = (TSharedRef<SWidget,1> *)pFVar19;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)local_910,
                       (TUniquePtr<SHorizontalBox::FSlot,TDefaultDelete<SHorizontalBox::FSlot>_>)
                       &local_bc0.Value);
            local_820 = -1;
            local_918 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_828 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar23->field_0x218;
            pFVar20 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_910);
            pFVar21 = SBox::FArguments::FArguments(&local_718);
            local_bdc = (bool)local_c5c;
            local_be0 = local_c60;
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_bd8,
                       (TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_c58);
            (pFVar21->_WidthOverride).Value.Size = local_be0;
            (pFVar21->_WidthOverride).bIsSet = local_bdc;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar21->_WidthOverride).Getter,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bd8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bd8);
            if ((void *)local_bd8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_bd8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_bd8);
            pFVar21->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar21->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar21->_padding_ + 2) = 4;
            if (stack0xfffffffffffff380 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff380->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff380->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a98 = (pFVar21->_Content).Widget.Object;
            pTStack_a90 = (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar21->_Content).Widget.Object = (SWidget *)local_c88._0_8_;
            (pFVar21->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff380;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a90);
            FLLMScope::FLLMScope
                      (local_c40,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_bb0 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_ba8,&local_bb0,true);
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_a58,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                       ,0x5b7,&local_c98);
            FMemScope::~FMemScope(&local_ba8);
            FLLMScope::~FLLMScope(local_c40);
            pTVar22 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (&local_a58,&local_a88,pFVar21);
            pTVar6 = (pTVar22->SharedReferenceCount).ReferenceController;
            local_c18 = pTVar22->Object;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c10.ReferenceController = pTVar6;
            if ((SBox **)&pFVar20->field_0x8 != &local_c18) {
              *(SBox **)&pFVar20->field_0x8 = local_c18;
              local_c18 = (SBox *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar20->field_0x10,&local_c10);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c10.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a88.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a58._Widget.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&local_718);
            local_918 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            if (local_910[0] != (undefined8 *)0x0) {
              if (local_820 == -1) {
                TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_828,(FSlotArguments *)local_910);
              }
              else {
                TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                          (local_828,(FSlotArguments *)local_910,local_820);
              }
            }
            TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::
            ~FSlotArgumentsMixin(&local_8b8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
            if ((void *)local_8e0._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_8e0._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_8e0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_900);
            if (local_910[0] != (undefined8 *)0x0) {
              (**(code **)*local_910[0])(local_910[0],1);
            }
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c58);
            if ((ForElementType<TAlignedBytes<16,16>_>)FStack_c50.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(FStack_c50.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_c58);
            param_1 = local_bf8;
          }
          else {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<958789906245617092>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                ,0x5c4,"false");
            if (bVar12) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
        local_b60 = local_c88;
        local_b68 = pFVar3;
        TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&>_>
                  (&local_98,&local_bc0,(bool *)&local_b68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (stack0xfffffffffffff380);
      }
      uVar29 = (ulonglong)(uVar28 + 1);
      uVar30 = uVar30 + 1;
    } while ((longlong)uVar30 < local_b98);
  }
  iVar2 = local_98.HashSize;
  if ((TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
       *)&this->ColumnIdToSlotContents == &local_98) goto LAB_142da7a8b;
  uVar13 = local_98.HashSize;
  if ((uint)local_98.HashSize < 2) {
    if (*(longlong *)&(this->ColumnIdToSlotContents).field_0x40 != 0) {
      uVar13 = 0;
      goto LAB_142da7a35;
    }
  }
  else {
LAB_142da7a35:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ColumnIdToSlotContents).field_0x40,0,uVar13,4);
  }
  pvVar7 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  _Src = (ForElementType<FSetElementId>)&local_98.Hash;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    _Src = local_98.Hash.SecondaryData;
  }
  _Dst = &(this->ColumnIdToSlotContents).field_0x38;
  if (pvVar7 != (void *)0x0) {
    _Dst = pvVar7;
  }
  if (iVar2 != 0) {
    memcpy(_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  *(int *)&(this->ColumnIdToSlotContents).field_0x48 = iVar2;
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ColumnIdToSlotContents,&local_98.Elements);
LAB_142da7a8b:
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return;
}

