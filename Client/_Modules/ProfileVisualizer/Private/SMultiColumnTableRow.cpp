// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 3

// Construct @ 148d5ead0

void __thiscall
SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::Construct
          (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *this,FArguments *param_1,
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
  undefined1 local_560 [40];
  FArguments local_538;
  FArguments local_330;
  
  pFVar5 = STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_330);
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
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar5->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
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
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)this,pFVar5,param_2);
  (**(code **)(this->_padding_ + 0x80))
            (this,param_2->Object->TableViewMode,&pFVar5->_Padding,&pFVar5->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>
            ((TSharedRef<SHorizontalBox,1> *)(local_560 + 0x18));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8._Widget.SharedReferenceCount.ReferenceController);
  SHorizontalBox::FArguments::~FArguments(&local_538);
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_330);
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
    if (local_5e8.Object == (SHeaderRow *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  uStack_5c0 = (ulonglong)uStack_5c0._4_4_ << 0x20;
  local_5c8 = GenerateColumns;
  TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::AddSP<SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>_>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
              *)&(local_5e8.Object)->ColumnsChanged,
             (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *)local_560,(pmf_df0eef60 *)this
            );
  if (local_5e8.Object == (SHeaderRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_5b8.Object = local_5e8.Object;
  local_5b8.SharedReferenceCount.ReferenceController =
       local_5e8.SharedReferenceCount.ReferenceController;
  if (local_5e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_5e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_5e8.Object == (SHeaderRow *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  GenerateColumns(this,&local_5b8);
  TSharedRef<SHeaderRow,1>::~TSharedRef<SHeaderRow,1>(&local_5b8);
  TSharedPtr<SHeaderRow,1>::~TSharedPtr<SHeaderRow,1>(&local_5e8);
  return;
}

// ConstructChildren @ 148d69a70

void __thiscall
SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::ConstructChildren
          (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *this,Type param_1,
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

// GenerateColumns @ 148d77890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_>::GenerateColumns
          (SMultiColumnTableRow<TSharedPtr<FVisualizerEvent,1>_> *this,
          TSharedRef<SHeaderRow,1> *param_1)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  FName FVar4;
  undefined1 *puVar5;
  SHorizontalBox *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  void *pvVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  ForElementType<TAlignedBytes<16,16>_> FVar11;
  bool bVar12;
  uint uVar13;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *pTVar14;
  FName *pFVar15;
  undefined1 (*pauVar16) [16];
  undefined8 *puVar17;
  ulong64 uVar18;
  FSlot *pFVar19;
  FSlot *pFVar20;
  FSlotArguments *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SBox,1> *pTVar23;
  float *pfVar24;
  FName *pFVar25;
  FSharedReferencer<1> FVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> _Src;
  ulonglong uVar28;
  void *_Dst;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auStackY_cd8 [32];
  T0RequiredArgs local_ca8;
  T0RequiredArgs local_ca7 [15];
  undefined1 local_c98 [12];
  undefined4 uStack_c8c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c88;
  FDelegateAllocation local_c80;
  float local_c70;
  undefined1 local_c6c;
  undefined1 local_c68 [8];
  ForAnyElementType FStack_c60;
  ulonglong local_c58;
  FLLMScope local_c50;
  FLLMScope local_c4c;
  float local_c48;
  undefined1 local_c44;
  undefined1 local_c40 [8];
  FDelegateAllocation FStack_c38;
  SBox *local_c28;
  FSharedReferencer<1> local_c20;
  SBox *local_c18;
  FSharedReferencer<1> local_c10;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *local_c08;
  undefined8 local_c00;
  FSharedReferencer<1> local_bf8;
  float local_bf0;
  undefined1 local_bec;
  undefined1 local_be8 [8];
  void *pvStack_be0;
  undefined8 local_bd8;
  float local_bd0;
  bool local_bcc;
  undefined1 local_bc8 [24];
  TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&> local_bb0;
  FName local_ba0;
  FMemScope local_b98;
  FSlot *local_b90;
  FName local_b88;
  FMemScope local_b80;
  FSlot *local_b78;
  longlong local_b70;
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
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_a98;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_a80;
  SWidget *local_a68;
  TReferenceControllerBase<1> *pTStack_a60;
  undefined1 local_a58 [8];
  TReferenceControllerBase<1> *local_a50;
  TSharedRef<SBox,1> local_a48;
  SWidget *local_a38;
  TReferenceControllerBase<1> *pTStack_a30;
  TSharedRef<SBox,1> local_a28;
  undefined1 local_a18 [80];
  uint local_9c8;
  undefined1 local_9c4;
  uint local_9c0;
  undefined1 local_9bc;
  TPanelChildren<SBoxPanel::FSlot> *local_928;
  int local_920;
  undefined1 local_918 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_828;
  int local_820;
  undefined1 local_818 [240];
  TPanelChildren<SBoxPanel::FSlot> *local_728;
  int local_720;
  FArguments local_718;
  FArguments local_3d8;
  TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_cd8;
  if (((this->Box).Object == (SHorizontalBox *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  SBoxPanel::ClearChildren((SBoxPanel *)(this->Box).Object);
  pTVar14 = SHeaderRow::GetColumns(param_1->Object);
  uVar28 = 0;
  iVar2 = (pTVar14->Array).ArrayNum;
  local_b70 = (longlong)iVar2;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar30 = uVar28;
  local_c08 = pTVar14;
  if (0 < iVar2) {
    do {
      uVar29 = (uint)uVar30;
      uVar13 = 0;
      if ((int)uVar29 < (pTVar14->Array).ArrayNum) {
        uVar13 = ~uVar29 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = *(FName **)((pTVar14->Array).AllocatorInstance.Data + uVar28 * 8);
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
              if (*pFVar25 == FVar4) goto LAB_148d77a4b;
              uVar13 = pFVar25[3].ComparisonIndex.Value;
            } while (uVar13 != 0xffffffff);
          }
        }
        pFVar25 = (FName *)0x0;
LAB_148d77a4b:
        unique0x10000bde = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
        local_c98._0_8_ = SNullWidget::NullWidget.Object;
        pFVar15 = pFVar25 + 1;
        if (pFVar25 == (FName *)0x0) {
          pFVar15 = (FName *)0x0;
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
        if (pFVar15 == (FName *)0x0) {
          pauVar16 = (undefined1 (*) [16])(**(code **)(this->_padding_ + 0xa0))(this,local_a58);
          auVar10 = *pauVar16;
          *(undefined4 *)*pauVar16 = local_c98._0_4_;
          *(undefined4 *)(*pauVar16 + 4) = local_c98._4_4_;
          *(undefined4 *)(*pauVar16 + 8) = local_c98._8_4_;
          *(undefined4 *)(*pauVar16 + 0xc) = uStack_c8c;
          FVar26.ReferenceController = local_a50;
          _local_c98 = auVar10;
        }
        else {
          _local_c98 = *(undefined1 (*) [16])pFVar15;
          if (pFVar15[1] != (FName)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)pFVar15[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar26.ReferenceController);
        if ((SWidget *)local_c98._0_8_ == SNullWidget::NullWidget.Object) {
          bVar12 = SHeaderRow::ShouldGenerateEmptyColumnForSpacing(param_1->Object,pFVar3);
          if (bVar12) goto LAB_148d77b06;
        }
        else {
          SWidget::SetClipping((SWidget *)local_c98._0_8_,OnDemand);
LAB_148d77b06:
          uVar13 = pFVar3[0x1b].Number;
          if (uVar13 == 0) {
            local_c48 = 0.0;
            FStack_c38._8_8_ = 0;
            local_c44 = 1;
            local_c40 = (undefined1  [8])0x0;
            FStack_c38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c40,
                       (FWriteAccessScope *)&local_ab8);
            local_aa0 = &FStack_c38;
            puVar17 = UE::Core::Private::DelegateAllocate(0x28,&FStack_c38);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = &
                         ___7__TCommonDelegateInstanceState___A6AMXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar18 = FDelegateHandle::GenerateNewID();
              puVar17[2] = uVar18;
              *puVar17 = &
                         ___7__TBaseRawMethodDelegateInstance__00__CBVFColumn_SHeaderRow____A6AMXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              puVar17[4] = SHeaderRow::FColumn::GetWidth;
              puVar17[3] = pFVar3;
            }
            if (local_ab8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ab8.Accessor,&local_ab8);
            }
            if (((this->Box).Object == (SHorizontalBox *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pSVar6 = (this->Box).Object;
            pFVar19 = ::operator_new(0x58);
            pFVar20 = (FSlot *)0x0;
            if (pFVar19 != (FSlot *)0x0) {
              *(undefined8 *)pFVar19 = 0;
              *(undefined8 *)&pFVar19->field_0x8 = 0;
              *(undefined8 *)&pFVar19->field_0x10 = 0;
              *(undefined8 *)&pFVar19->field_0x18 = 0;
              *(undefined8 *)&pFVar19->field_0x20 = 0;
              *(undefined8 *)&pFVar19->field_0x28 = 0;
              *(undefined8 *)&pFVar19->field_0x30 = 0;
              *(undefined8 *)&pFVar19->field_0x38 = 0;
              *(undefined8 *)&pFVar19->field_0x40 = 0;
              *(undefined8 *)&pFVar19->field_0x48 = 0;
              *(undefined8 *)&pFVar19->field_0x50 = 0;
              pFVar20 = SHorizontalBox::FSlot::FSlot(pFVar19);
            }
            local_b78 = pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_a18 + 8),(FSlot *)&local_b78);
            local_a18._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_928 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            local_b58.Value = local_c48;
            local_9c8 = pFVar3[0x2a].ComparisonIndex.Value;
            local_9c0 = pFVar3[0x2a].Number;
            local_b58.bIsSet = (bool)local_c44;
            local_920 = -1;
            local_9c4 = 1;
            local_9bc = 1;
            local_b58.Getter._0_8_ = 0;
            local_b58.Getter._8_8_ = 0;
            local_b58.Getter._16_4_ = 0;
            TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&local_b58.Getter,
                       (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_c40);
            pFVar21 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                                ((FSlotArguments *)(local_a18 + 8),&local_b58);
            local_c00 = local_c98._0_8_;
            local_bf8.ReferenceController = stack0xfffffffffffff370;
            if (stack0xfffffffffffff370 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff370->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff370->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((undefined8 *)&pFVar21->field_0x8 != &local_c00) {
              *(undefined8 *)&pFVar21->field_0x8 = local_c98._0_8_;
              local_c00 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_bf8);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_bf8.ReferenceController);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_a18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c40,
                       (FWriteAccessScope *)&local_b38);
            if ((FStack_c38.DelegateSize != 0) &&
               (FStack_c38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_c38.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&FStack_c38,0,0,0x10);
              FStack_c38._8_8_ = FStack_c38._8_8_ & 0xffffffff00000000;
            }
            if (local_b38.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b38.Accessor,&local_b38);
            }
            if (FStack_c38.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_c38.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_c40);
          }
          else if (uVar13 == 1) {
            if (((this->Box).Object == (SHorizontalBox *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pSVar6 = (this->Box).Object;
            pFVar19 = ::operator_new(0x58);
            pFVar20 = (FSlot *)0x0;
            if (pFVar19 != (FSlot *)0x0) {
              *(undefined8 *)pFVar19 = 0;
              *(undefined8 *)&pFVar19->field_0x8 = 0;
              *(undefined8 *)&pFVar19->field_0x10 = 0;
              *(undefined8 *)&pFVar19->field_0x18 = 0;
              *(undefined8 *)&pFVar19->field_0x20 = 0;
              *(undefined8 *)&pFVar19->field_0x28 = 0;
              *(undefined8 *)&pFVar19->field_0x30 = 0;
              *(undefined8 *)&pFVar19->field_0x38 = 0;
              *(undefined8 *)&pFVar19->field_0x40 = 0;
              *(undefined8 *)&pFVar19->field_0x48 = 0;
              *(undefined8 *)&pFVar19->field_0x50 = 0;
              pFVar20 = SHorizontalBox::FSlot::FSlot(pFVar19);
            }
            local_b90 = pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_818 + 8),(FSlot *)&local_b90);
            local_720 = -1;
            local_818._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_728 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            pFVar21 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                                ((FSlotArguments *)(local_818 + 8));
            pFVar22 = SBox::FArguments::FArguments(&local_718);
            pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(pFVar3 + 0x13));
            local_bf0 = *pfVar24;
            local_bd8 = 0;
            local_bec = 1;
            local_be8 = (undefined1  [8])0x0;
            pvStack_be0 = (void *)0x0;
            (pFVar22->_WidthOverride).Value.Size = local_bf0;
            (pFVar22->_WidthOverride).bIsSet = true;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar22->_WidthOverride).Getter,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_be8);
            if (pvStack_be0 != (void *)0x0) {
              FMemory::Free(pvStack_be0);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_be8);
            pFVar22->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar22->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar22->_padding_ + 2) = 4;
            if (stack0xfffffffffffff370 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff370->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff370->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a38 = (pFVar22->_Content).Widget.Object;
            pTStack_a30 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar22->_Content).Widget.Object = (SWidget *)local_c98._0_8_;
            (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff370;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a30);
            FLLMScope::FLLMScope
                      (&local_c4c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_b88 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_b80,&local_b88,true);
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_a80,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                       ,0x59c,local_ca7);
            FMemScope::~FMemScope(&local_b80);
            FLLMScope::~FLLMScope(&local_c4c);
            pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (&local_a80,&local_a28,pFVar22);
            pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
            local_c18 = pTVar23->Object;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c10.ReferenceController = pTVar7;
            if ((SBox **)&pFVar21->field_0x8 != &local_c18) {
              *(SBox **)&pFVar21->field_0x8 = local_c18;
              local_c18 = (SBox *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_c10);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c10.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a28.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a80._Widget.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&local_718);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_818);
            pTVar14 = local_c08;
          }
          else if ((uVar13 == 2) || (uVar13 == 3)) {
            local_c70 = FOptionalSize::Unspecified;
            local_c6c = 0;
            local_c68 = (undefined1  [8])0x0;
            FStack_c60.Data = (FScriptContainerElement *)0x0;
            local_c58 = 0;
            local_c88.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_c80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_c80.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c88,(FWriteAccessScope *)&local_ad8);
            local_ac0 = &local_c80;
            puVar17 = UE::Core::Private::DelegateAllocate(0x20,&local_c80);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = &
                         ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar18 = FDelegateHandle::GenerateNewID();
              puVar17[2] = uVar18;
              *puVar17 = &
                         ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFVisualizerEvent___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
              ;
              puVar17[3] = pFVar3;
            }
            if (local_ad8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_ad8.Accessor,&local_ad8);
            }
            local_c6c = 1;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c88,(FWriteAccessScope *)&local_b08);
            iVar2 = local_c80.DelegateSize;
            FVar11 = local_c80.DelegateAllocator;
            local_c80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_c80.DelegateSize = 0;
            if (local_b08.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b08.Accessor,&local_b08);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c68,
                       (FWriteAccessScope *)&local_af0);
            if ((int)local_c58 == 0) {
LAB_148d77c8f:
              if (FStack_c60.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_c60.Data);
              }
            }
            else if (FStack_c60.Data != (FScriptContainerElement *)0x0) {
              (*(code *)**(undefined8 **)FStack_c60.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_c60,0,0,0x10);
              local_c58 = local_c58 & 0xffffffff00000000;
              goto LAB_148d77c8f;
            }
            FStack_c60.Data = (FScriptContainerElement *)FVar11;
            local_c58 = CONCAT44(local_c58._4_4_,iVar2);
            if (local_af0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_af0.Accessor,&local_af0);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_c88,(FWriteAccessScope *)&local_b20);
            if ((local_c80.DelegateSize != 0) &&
               (local_c80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_c80.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_c80,0,0,0x10);
              local_c80.DelegateSize = 0;
            }
            if (local_b20.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b20.Accessor,&local_b20);
            }
            if (local_c80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_c80.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c88.AccessDetector);
            if (((this->Box).Object == (SHorizontalBox *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pSVar6 = (this->Box).Object;
            pFVar19 = ::operator_new(0x58);
            pFVar20 = (FSlot *)0x0;
            if (pFVar19 != (FSlot *)0x0) {
              *(undefined8 *)pFVar19 = 0;
              *(undefined8 *)&pFVar19->field_0x8 = 0;
              *(undefined8 *)&pFVar19->field_0x10 = 0;
              *(undefined8 *)&pFVar19->field_0x18 = 0;
              *(undefined8 *)&pFVar19->field_0x20 = 0;
              *(undefined8 *)&pFVar19->field_0x28 = 0;
              *(undefined8 *)&pFVar19->field_0x30 = 0;
              *(undefined8 *)&pFVar19->field_0x38 = 0;
              *(undefined8 *)&pFVar19->field_0x40 = 0;
              *(undefined8 *)&pFVar19->field_0x48 = 0;
              *(undefined8 *)&pFVar19->field_0x50 = 0;
              pFVar20 = SHorizontalBox::FSlot::FSlot(pFVar19);
            }
            local_bb0.Value = (TSharedRef<SWidget,1> *)pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_918 + 8),
                       (TUniquePtr<SHorizontalBox::FSlot,TDefaultDelete<SHorizontalBox::FSlot>_>)
                       &local_bb0.Value);
            local_820 = -1;
            local_918._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_828 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            pFVar21 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth
                                ((FSlotArguments *)(local_918 + 8));
            pFVar22 = SBox::FArguments::FArguments(&local_3d8);
            local_bcc = (bool)local_c6c;
            local_bd0 = local_c70;
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                      ((TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_bc8,
                       (TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_c68);
            (pFVar22->_WidthOverride).Value.Size = local_bd0;
            (pFVar22->_WidthOverride).bIsSet = local_bcc;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar22->_WidthOverride).Getter,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc8);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_bc8);
            if ((void *)local_bc8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_bc8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_bc8);
            pFVar22->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar22->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar22->_padding_ + 2) = 4;
            if (stack0xfffffffffffff370 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff370->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff370->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_a68 = (pFVar22->_Content).Widget.Object;
            pTStack_a60 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar22->_Content).Widget.Object = (SWidget *)local_c98._0_8_;
            (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff370;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_a60);
            FLLMScope::FLLMScope
                      (&local_c50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_ba0 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_b98,&local_ba0,true);
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_a98,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                       ,0x5b7,&local_ca8);
            FMemScope::~FMemScope(&local_b98);
            FLLMScope::~FLLMScope(&local_c50);
            pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (&local_a98,&local_a48,pFVar22);
            pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
            local_c28 = pTVar23->Object;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c20.ReferenceController = pTVar7;
            if ((SBox **)&pFVar21->field_0x8 != &local_c28) {
              *(SBox **)&pFVar21->field_0x8 = local_c28;
              local_c28 = (SBox *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar21->field_0x10,&local_c20);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c20.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a48.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a98._Widget.SharedReferenceCount.ReferenceController);
            SBox::FArguments::~FArguments(&local_3d8);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_918);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c68);
            if ((ForElementType<TAlignedBytes<16,16>_>)FStack_c60.Data !=
                (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free(FStack_c60.Data);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_c68);
            pTVar14 = local_c08;
          }
          else {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<958789906245617092>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                ,0x5c4,"false");
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        local_b60 = local_c98;
        local_b68 = pFVar3;
        TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&>_>
                  (&local_98,&local_bb0,(bool *)&local_b68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (stack0xfffffffffffff370);
      }
      uVar30 = (ulonglong)(uVar29 + 1);
      uVar28 = uVar28 + 1;
    } while ((longlong)uVar28 < local_b70);
  }
  iVar2 = local_98.HashSize;
  if ((TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
       *)&this->ColumnIdToSlotContents == &local_98) goto LAB_148d785df;
  uVar13 = local_98.HashSize;
  if ((uint)local_98.HashSize < 2) {
    if (*(longlong *)&(this->ColumnIdToSlotContents).field_0x40 != 0) {
      uVar13 = 0;
      goto LAB_148d78589;
    }
  }
  else {
LAB_148d78589:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ColumnIdToSlotContents).field_0x40,0,uVar13,4);
  }
  pvVar8 = *(void **)&(this->ColumnIdToSlotContents).field_0x40;
  _Src = (ForElementType<FSetElementId>)&local_98.Hash;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    _Src = local_98.Hash.SecondaryData;
  }
  _Dst = &(this->ColumnIdToSlotContents).field_0x38;
  if (pvVar8 != (void *)0x0) {
    _Dst = pvVar8;
  }
  if (iVar2 != 0) {
    memcpy(_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  *(int *)&(this->ColumnIdToSlotContents).field_0x48 = iVar2;
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<SWidget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ColumnIdToSlotContents,&local_98.Elements);
LAB_148d785df:
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

