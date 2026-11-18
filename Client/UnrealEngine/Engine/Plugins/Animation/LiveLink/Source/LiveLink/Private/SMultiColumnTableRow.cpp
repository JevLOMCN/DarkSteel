// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 3

// Construct @ 14d02bca0

void __thiscall
SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::Construct
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *this,FArguments *param_1,
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
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> local_578;
  undefined1 local_560 [32];
  TReferenceControllerBase<1> *local_540;
  FArguments local_538;
  FArguments local_240;
  
  pFVar5 = STableRow<TSharedPtr<FProviderPollResult,1>_>::FArguments::FArguments(&local_538);
  pFVar5->_Style = param_1->_Style;
  pFVar5->_ExpanderStyleSet = param_1->_ExpanderStyleSet;
  local_580 = (param_1->_Padding).bIsSet;
  local_590._0_4_ = (param_1->_Padding).Value.Left;
  local_590._4_4_ = (param_1->_Padding).Value.Top;
  uStack_588._0_4_ = (param_1->_Padding).Value.Right;
  uStack_588._4_4_ = (param_1->_Padding).Value.Bottom;
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy>
            (&local_578,&(param_1->_Padding).Getter);
  (pFVar5->_Padding).Value.Left = (float)(undefined4)local_590;
  (pFVar5->_Padding).Value.Top = (float)local_590._4_4_;
  (pFVar5->_Padding).Value.Right = (float)(undefined4)uStack_588;
  (pFVar5->_Padding).Value.Bottom = (float)uStack_588._4_4_;
  (pFVar5->_Padding).bIsSet = local_580;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_578);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_578);
  pFVar5->_ShowSelection = param_1->_ShowSelection;
  TDelegate<TOptional<enum_EItemDropZone>___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar5->_OnCanAcceptDrop,&param_1->_OnCanAcceptDrop);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&,enum_EItemDropZone,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
  ::operator=(&pFVar5->_OnAcceptDrop,&param_1->_OnAcceptDrop);
  TDelegate<FReply___cdecl(FGeometry_const_&,FPointerEvent_const_&),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(&pFVar5->_OnDragDetected,&param_1->_OnDragDetected);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDragEnter,&param_1->_OnDragEnter);
  TDelegate<void___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDragLeave,&param_1->_OnDragLeave);
  TDelegate<FReply___cdecl(FDragDropEvent_const_&),FDefaultDelegateUserPolicy>::operator=
            (&pFVar5->_OnDrop,&param_1->_OnDrop);
  pFVar6 = SHorizontalBox::FArguments::FArguments(&local_240);
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
  STableRow<TSharedPtr<FProviderPollResult,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<FProviderPollResult,1>_> *)this,pFVar5,param_2);
  (**(code **)(this->_padding_ + 0x80))
            (this,param_2->Object->TableViewMode,&pFVar5->_Padding,&pFVar5->_Content);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_540);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5a8._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data,local_240._Slots.ArrayNum);
  if ((FSlotArguments *)local_240._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_240._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_538._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._Padding.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_538._OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_538);
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
  ::AddSP<SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>_>
            ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<SHeaderRow,1>_const_&),FDefaultDelegateUserPolicy>
              *)&(local_5e8.Object)->ColumnsChanged,
             (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *)local_560,
             (pmf_84383b01 *)this);
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

// ConstructChildren @ 14d02e440

void __thiscall
SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::ConstructChildren
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *this,Type param_1,
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

// GenerateColumns @ 14d043490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_>::GenerateColumns
          (SMultiColumnTableRow<TSharedPtr<FProviderPollResult,1>_> *this,
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
  FSizeParam *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SBox,1> *pTVar23;
  float *pfVar24;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_00;
  FSlotArguments *pFVar25;
  FName *pFVar26;
  FSharedReferencer<1> FVar27;
  undefined1 *puVar28;
  ForElementType<FSetElementId> _Src;
  ulonglong uVar29;
  void *_Dst;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auStackY_d58 [32];
  T0RequiredArgs local_d28;
  T0RequiredArgs local_d27 [15];
  undefined1 local_d18 [12];
  undefined4 uStack_d0c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d08;
  FDelegateAllocation local_d00;
  FLLMScope local_cf0 [2];
  float local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0 [8];
  FDelegateAllocation FStack_cd8;
  float local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0 [8];
  ForAnyElementType FStack_cb8;
  ulonglong local_cb0;
  undefined8 local_ca8;
  FSharedReferencer<1> local_ca0;
  undefined8 local_c98;
  FSharedReferencer<1> local_c90;
  undefined8 local_c88;
  FSharedReferencer<1> local_c80;
  float local_c78;
  undefined1 local_c74;
  TDelegateBase<FNotThreadSafeDelegateMode> local_c70;
  TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&> local_c58;
  FName local_c48;
  FMemScope local_c40;
  TIndirectArray<SHeaderRow::FColumn,TSizedDefaultAllocator<32>_> *local_c38;
  FSlot *local_c30;
  FSlot *local_c28;
  longlong local_c20;
  float local_c18;
  bool local_c14;
  TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> local_c10;
  FName *local_bf8;
  undefined1 *local_bf0;
  TAttribute<float> local_be8;
  FDestructionSentinel local_bc8;
  FDestructionSentinel local_bb0;
  FDestructionSentinel local_b98;
  FDestructionSentinel local_b80;
  FDestructionSentinel local_b68;
  FDelegateAllocation *local_b50;
  FDestructionSentinel local_b48;
  FDelegateAllocation *local_b30;
  SWidget *local_b28;
  TReferenceControllerBase<1> *pTStack_b20;
  TSharedRef<SBox,1> local_b18;
  SWidget *local_b08;
  TReferenceControllerBase<1> *pTStack_b00;
  TSharedRef<SBox,1> local_af8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ae8;
  undefined1 local_ad0 [8];
  TReferenceControllerBase<1> *local_ac8;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_ac0;
  undefined1 local_aa8 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_a78;
  undefined1 local_a60 [48];
  TDelegateBase<FNotThreadSafeDelegateMode> local_a30;
  undefined1 local_a18 [80];
  uint local_9c8;
  undefined1 local_9c4;
  uint local_9c0;
  undefined1 local_9bc;
  TPanelChildren<SBoxPanel::FSlot> *local_928;
  int local_920;
  undefined1 local_918 [16];
  SBox *local_908;
  FSharedReferencer<1> local_900 [9];
  TOptional<FSizeParam> local_8b8;
  TPanelChildren<SBoxPanel::FSlot> *local_828;
  int local_820;
  undefined1 local_818 [16];
  SBox *local_808;
  FSharedReferencer<1> local_800 [9];
  TOptional<FSizeParam> local_7b8;
  TPanelChildren<SBoxPanel::FSlot> *local_728;
  int local_720;
  FArguments local_718;
  FArguments local_3d8;
  TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d58;
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
  uVar29 = 0;
  iVar2 = (pTVar14->Array).ArrayNum;
  local_c20 = (longlong)iVar2;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  uVar31 = uVar29;
  local_c38 = pTVar14;
  if (0 < iVar2) {
    do {
      uVar30 = (uint)uVar31;
      uVar13 = 0;
      if ((int)uVar30 < (pTVar14->Array).ArrayNum) {
        uVar13 = ~uVar30 >> 0x1f;
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
      pFVar3 = *(FName **)((pTVar14->Array).AllocatorInstance.Data + uVar29 * 8);
      bVar12 = SHeaderRow::ShouldGeneratedColumn(param_1->Object,pFVar3);
      if (bVar12) {
        FVar4 = *pFVar3;
        uVar13 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
        FVar27 = SNullWidget::NullWidget.SharedReferenceCount;
        if (*(int *)&(this->ColumnIdToSlotContents).field_0x8 !=
            *(int *)&(this->ColumnIdToSlotContents).field_0x34) {
          puVar5 = *(undefined1 **)&(this->ColumnIdToSlotContents).field_0x40;
          puVar28 = &(this->ColumnIdToSlotContents).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar28 = puVar5;
          }
          uVar13 = *(uint *)(puVar28 +
                            (ulonglong)
                            (*(int *)&(this->ColumnIdToSlotContents).field_0x48 - 1U &
                            FVar4.Number + uVar13) * 4);
          if (uVar13 != 0xffffffff) {
            do {
              pFVar26 = (FName *)((longlong)(int)uVar13 * 0x20 +
                                 *(longlong *)&this->ColumnIdToSlotContents);
              if (*pFVar26 == FVar4) goto LAB_14d04365b;
              uVar13 = pFVar26[3].ComparisonIndex.Value;
            } while (uVar13 != 0xffffffff);
          }
        }
        pFVar26 = (FName *)0x0;
LAB_14d04365b:
        unique0x10000c95 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
        local_d18._0_8_ = SNullWidget::NullWidget.Object;
        pFVar15 = pFVar26 + 1;
        if (pFVar26 == (FName *)0x0) {
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
          pauVar16 = (undefined1 (*) [16])(**(code **)(this->_padding_ + 0xa0))(this,local_ad0);
          auVar10 = *pauVar16;
          *(undefined4 *)*pauVar16 = local_d18._0_4_;
          *(undefined4 *)(*pauVar16 + 4) = local_d18._4_4_;
          *(undefined4 *)(*pauVar16 + 8) = local_d18._8_4_;
          *(undefined4 *)(*pauVar16 + 0xc) = uStack_d0c;
          FVar27.ReferenceController = local_ac8;
          _local_d18 = auVar10;
        }
        else {
          _local_d18 = *(undefined1 (*) [16])pFVar15;
          if (pFVar15[1] != (FName)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)pFVar15[1] + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar27.ReferenceController);
        if ((SWidget *)local_d18._0_8_ == SNullWidget::NullWidget.Object) {
          bVar12 = SHeaderRow::ShouldGenerateEmptyColumnForSpacing(param_1->Object,pFVar3);
          if (bVar12) goto LAB_14d043716;
        }
        else {
          SWidget::SetClipping((SWidget *)local_d18._0_8_,OnDemand);
LAB_14d043716:
          uVar13 = pFVar3[0x1b].Number;
          if (uVar13 == 0) {
            local_ce8 = 0.0;
            FStack_cd8._8_8_ = 0;
            local_ce4 = 1;
            local_ce0 = (undefined1  [8])0x0;
            FStack_cd8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ce0,
                       (FWriteAccessScope *)&local_b48);
            local_b30 = &FStack_cd8;
            puVar17 = UE::Core::Private::DelegateAllocate(0x28,&FStack_cd8);
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
            if (local_b48.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b48.Accessor,&local_b48);
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
            local_c28 = pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_a18 + 8),(FSlot *)&local_c28);
            local_a18._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_928 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            local_be8.Value = local_ce8;
            local_9c8 = pFVar3[0x2a].ComparisonIndex.Value;
            local_9c0 = pFVar3[0x2a].Number;
            local_be8.bIsSet = (bool)local_ce4;
            local_920 = -1;
            local_9c4 = 1;
            local_9bc = 1;
            local_be8.Getter._0_8_ = 0;
            local_be8.Getter._8_8_ = 0;
            local_be8.Getter._16_4_ = 0;
            TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      (&local_be8.Getter,
                       (TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_ce0);
            pFVar25 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                                ((FSlotArguments *)(local_a18 + 8),&local_be8);
            local_ca8 = local_d18._0_8_;
            local_ca0.ReferenceController = stack0xfffffffffffff2f0;
            if (stack0xfffffffffffff2f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff2f0->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff2f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((undefined8 *)&pFVar25->field_0x8 != &local_ca8) {
              *(undefined8 *)&pFVar25->field_0x8 = local_d18._0_8_;
              local_ca8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_ca0);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_ca0.ReferenceController);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_a18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ce0,
                       (FWriteAccessScope *)&local_b80);
            if ((FStack_cd8.DelegateSize != 0) &&
               (FStack_cd8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_cd8.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&FStack_cd8,0,0,0x10);
              FStack_cd8._8_8_ = FStack_cd8._8_8_ & 0xffffffff00000000;
            }
            if (local_b80.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b80.Accessor,&local_b80);
            }
            if (FStack_cd8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_cd8.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_ce0);
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
            local_c30 = pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_818 + 8),(FSlot *)&local_c30);
            local_720 = -1;
            local_818._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_728 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_a60);
            TOptional<FSizeParam>::operator=(&local_7b8,pFVar21);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (&local_a30);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_a60 + 0x10));
            pFVar22 = SBox::FArguments::FArguments(&local_718);
            pfVar24 = TAttribute<float>::Get((TAttribute<float> *)(pFVar3 + 0x13));
            local_c78 = *pfVar24;
            local_c70._16_8_ = 0;
            local_c74 = 1;
            local_c70._0_8_ = 0;
            local_c70._8_8_ = 0;
            (pFVar22->_WidthOverride).Value.Size = local_c78;
            (pFVar22->_WidthOverride).bIsSet = true;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar22->_WidthOverride).Getter,&local_c70);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (&local_c70);
            pFVar22->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar22->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar22->_padding_ + 2) = 4;
            if (stack0xfffffffffffff2f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff2f0->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff2f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_b08 = (pFVar22->_Content).Widget.Object;
            pTStack_b00 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar22->_Content).Widget.Object = (SWidget *)local_d18._0_8_;
            (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff2f0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_b00);
            this_00 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                                (&local_ac0,"SBox",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                                 ,0x59c,local_d27);
            pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (this_00,&local_af8,pFVar22);
            pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
            local_808 = pTVar23->Object;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c88 = 0;
            local_c80.ReferenceController = pTVar7;
            SharedPointerInternals::FSharedReferencer<1>::operator=(local_800,&local_c80);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c80.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_af8.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_ac0._Widget.SharedReferenceCount.ReferenceController);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MaxAspectRatio.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MinAspectRatio.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MaxDesiredHeight.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MaxDesiredWidth.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MinDesiredHeight.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._MinDesiredWidth.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_718._HeightOverride.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_718._WidthOverride.Getter
                      );
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_718._Content.Widget.SharedReferenceCount.ReferenceController);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_718._Padding.Getter);
            FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_718);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_818);
          }
          else if ((uVar13 == 2) || (uVar13 == 3)) {
            local_cc8 = FOptionalSize::Unspecified;
            local_cc4 = 0;
            local_cc0 = (undefined1  [8])0x0;
            FStack_cb8.Data = (FScriptContainerElement *)0x0;
            local_cb0 = 0;
            local_d08.AccessDetector.State =
                 (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
            local_d00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_d00.DelegateSize = 0;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_d08,(FWriteAccessScope *)&local_b68);
            local_b50 = &local_d00;
            puVar17 = UE::Core::Private::DelegateAllocate(0x20,&local_d00);
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = &
                         ___7__TCommonDelegateInstanceState___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar18 = FDelegateHandle::GenerateNewID();
              puVar17[2] = uVar18;
              *puVar17 = &
                         ___7__TBaseFunctorDelegateInstance___A6A_AUFOptionalSize__XZUFDefaultDelegateUserPolicy__V<lambda_1>__BL___GenerateColumns___SMultiColumnTableRow_V__TSharedPtr_UFProviderPollResult___00____IEAAXAEBV__TSharedRef_VSHeaderRow___00___Z___V__6B_
              ;
              puVar17[3] = pFVar3;
            }
            if (local_b68.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b68.Accessor,&local_b68);
            }
            local_cc4 = 1;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_d08,(FWriteAccessScope *)&local_bc8);
            iVar2 = local_d00.DelegateSize;
            FVar11 = local_d00.DelegateAllocator;
            local_d00.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            local_d00.DelegateSize = 0;
            if (local_bc8.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bc8.Accessor,&local_bc8);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_cc0,
                       (FWriteAccessScope *)&local_bb0);
            if ((int)local_cb0 == 0) {
LAB_14d043898:
              if (FStack_cb8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FStack_cb8.Data);
              }
            }
            else if (FStack_cb8.Data != (FScriptContainerElement *)0x0) {
              (*(code *)**(undefined8 **)FStack_cb8.Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&FStack_cb8,0,0,0x10);
              local_cb0 = local_cb0 & 0xffffffff00000000;
              goto LAB_14d043898;
            }
            FStack_cb8.Data = (FScriptContainerElement *)FVar11;
            local_cb0 = CONCAT44(local_cb0._4_4_,iVar2);
            if (local_bb0.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_bb0.Accessor,&local_bb0);
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      (&local_d08,(FWriteAccessScope *)&local_b98);
            if ((local_d00.DelegateSize != 0) &&
               (local_d00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)local_d00.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&local_d00,0,0,0x10);
              local_d00.DelegateSize = 0;
            }
            if (local_b98.bDestroyed == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b98.Accessor,&local_b98);
            }
            if (local_d00.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_d00.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d08.AccessDetector);
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
            local_c58.Value = (TSharedRef<SWidget,1> *)pFVar20;
            SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                      ((FSlotArguments *)(local_918 + 8),
                       (TUniquePtr<SHorizontalBox::FSlot,TDefaultDelete<SHorizontalBox::FSlot>_>)
                       &local_c58.Value);
            local_820 = -1;
            local_918._0_8_ =
                 &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
            local_828 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar6->field_0x218;
            pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_aa8);
            TOptional<FSizeParam>::operator=(&local_8b8,pFVar21);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      (&local_a78);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_aa8 + 0x10));
            pFVar22 = SBox::FArguments::FArguments(&local_3d8);
            local_c14 = (bool)local_cc4;
            local_c18 = local_cc8;
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>::
            TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy>
                      (&local_c10,
                       (TDelegate<FOptionalSize___cdecl(void),FDefaultDelegateUserPolicy> *)
                       local_cc0);
            (pFVar22->_WidthOverride).Value.Size = local_c18;
            (pFVar22->_WidthOverride).bIsSet = local_c14;
            TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &(pFVar22->_WidthOverride).Getter,
                       (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_c10);
            pFVar22->_HAlign = pFVar3[0x2a].ComparisonIndex.Value;
            pFVar22->_VAlign = pFVar3[0x2a].Number;
            *(undefined1 *)((longlong)&pFVar22->_padding_ + 2) = 4;
            if (stack0xfffffffffffff2f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              stack0xfffffffffffff2f0->SharedReferenceCount =
                   (atomic<int>)((int)stack0xfffffffffffff2f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_b28 = (pFVar22->_Content).Widget.Object;
            pTStack_b20 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
            (pFVar22->_Content).Widget.Object = (SWidget *)local_d18._0_8_;
            (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController =
                 stack0xfffffffffffff2f0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_b20);
            FLLMScope::FLLMScope
                      (local_cf0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
            local_c48 = LLMTagDeclaration_UI_Slate.UniqueName;
            FMemScope::FMemScope(&local_c40,&local_c48,true);
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::
            TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_ae8,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STableRow.h"
                       ,0x5b7,&local_d28);
            FMemScope::~FMemScope(&local_c40);
            FLLMScope::~FLLMScope(local_cf0);
            pTVar23 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                                (&local_ae8,&local_b18,pFVar22);
            pTVar7 = (pTVar23->SharedReferenceCount).ReferenceController;
            local_908 = pTVar23->Object;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c98 = 0;
            local_c90.ReferenceController = pTVar7;
            SharedPointerInternals::FSharedReferencer<1>::operator=(local_900,&local_c90);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c90.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b18.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_ae8._Widget.SharedReferenceCount.ReferenceController);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MaxAspectRatio.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MinAspectRatio.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MaxDesiredHeight.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MaxDesiredWidth.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MinDesiredHeight.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._MinDesiredWidth.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                       &local_3d8._HeightOverride.Getter);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d8._WidthOverride.Getter
                      );
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_3d8._Content.Widget.SharedReferenceCount.ReferenceController);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_3d8._Padding.Getter);
            FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_3d8);
            SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
            ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
                      ((FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *)local_918);
            TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_cc0);
            pTVar14 = local_c38;
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
        local_bf0 = local_d18;
        local_bf8 = pFVar3;
        TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,TSharedRef<SWidget,1>_const_&>_>
                  (&local_98,&local_c58,(bool *)&local_bf8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (stack0xfffffffffffff2f0);
      }
      uVar31 = (ulonglong)(uVar30 + 1);
      uVar29 = uVar29 + 1;
    } while ((longlong)uVar29 < local_c20);
  }
  iVar2 = local_98.HashSize;
  if ((TSet<TTuple<FName,TSharedRef<SWidget,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<SWidget,1>,0>,FDefaultSetAllocator>
       *)&this->ColumnIdToSlotContents == &local_98) goto LAB_14d044277;
  uVar13 = local_98.HashSize;
  if ((uint)local_98.HashSize < 2) {
    if (*(longlong *)&(this->ColumnIdToSlotContents).field_0x40 != 0) {
      uVar13 = 0;
      goto LAB_14d044221;
    }
  }
  else {
LAB_14d044221:
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
LAB_14d044277:
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

