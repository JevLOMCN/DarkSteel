// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 10

// operator() @ 142f44f40

FSlateBrush * __thiscall
`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>::operator()
          (void *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName local_res8;
  FName local_res10;
  
  if (*(char *)(*(longlong *)this + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// operator() @ 142f44fb0

FSlateBrush * __thiscall
`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>::
operator()(void *this)

{
  ISlateStyle *pIVar1;
  FName *pFVar2;
  FSlateBrush *pFVar3;
  char *pcVar4;
  code *pcVar5;
  FName local_res8;
  FName local_res10;
  
  if (*(char *)(*(longlong *)this + 0x3b) == '\0') {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Header";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res10;
  }
  else {
    pIVar1 = FAppStyle::Get();
    pcVar4 = "Brushes.Hover";
    pcVar5 = *(code **)((longlong)*pIVar1 + 0x50);
    pFVar2 = &local_res8;
  }
  pFVar2 = ::FName::FName(pFVar2,pcVar4);
  pFVar3 = (FSlateBrush *)(*pcVar5)(pIVar1,*pFVar2,0,0);
  return pFVar3;
}

// Construct @ 142f749f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<TSharedPtr<int,1>_>,1> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITableRow *pIVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FSlotArguments *pFVar14;
  STableRow<TSharedPtr<int,1>_> *pSVar15;
  bool bVar16;
  ISlateStyle *pIVar17;
  FName *pFVar18;
  SExpanderArrow *this_00;
  FName FVar19;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar20;
  FArguments *pFVar21;
  undefined8 *puVar22;
  ulong64 uVar23;
  FArguments *pFVar24;
  FSlot *pFVar25;
  FSizeParam *pFVar26;
  FSlot *pFVar27;
  FSlotArguments *pFVar28;
  FArguments *pFVar29;
  FText *pFVar30;
  TSharedRef<SWidget_const_,1> *pTVar31;
  TSharedRef<STextBlock,1> *pTVar32;
  TSharedRef<SHorizontalBox,1> *pTVar33;
  TSharedRef<SBorder,1> *pTVar34;
  FMemScope FVar35;
  FArguments *pFVar36;
  TSharedRef<SImage,1> *pTVar37;
  FArguments *pFVar38;
  TSharedRef<SOverlay,1> *pTVar39;
  undefined ***pppuVar40;
  FMemScope FVar41;
  TEnumAsByte<EVisibility::Private> TVar42;
  int iVar43;
  FMemScope FVar44;
  undefined1 auStackY_17b8 [32];
  T0RequiredArgs local_1788;
  T0RequiredArgs local_1787;
  T0RequiredArgs local_1786;
  T0RequiredArgs local_1785;
  T0RequiredArgs local_1784 [4];
  int local_1780;
  FArguments *local_1778;
  FLLMScope local_1770;
  FLLMScope local_176c;
  FLLMScope local_1768;
  FLLMScope local_1764;
  FLLMScope local_1760 [2];
  FSlotArguments *local_1758;
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> local_1750;
  SImage *local_1740;
  FSharedReferencer<1> local_1738;
  FArguments *local_1730;
  SBorder *local_1728;
  FSharedReferencer<1> local_1720;
  STextBlock *local_1718;
  FSharedReferencer<1> local_1710;
  FName local_1708;
  code *local_1700;
  FSharedReferencer<1> FStack_16f8;
  FName local_16f0;
  FMemScope local_16e8;
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1> local_16e0;
  undefined1 local_16d0 [8];
  ForAnyElementType local_16c8;
  int local_16c0;
  FName local_16b8;
  undefined4 uStack_16b0;
  uint uStack_16ac;
  SHorizontalBox *local_16a8;
  TReferenceControllerBase<1> *pTStack_16a0;
  FArguments *local_1698;
  TReferenceControllerBase<1> *pTStack_1690;
  longlong *local_1688;
  TReferenceControllerBase<1> *local_1680;
  undefined2 local_1678;
  undefined1 local_1670 [24];
  FMemScope local_1658;
  FName local_1650;
  FName local_1648;
  FSlot *local_1640;
  undefined4 local_1638 [2];
  undefined4 local_1630 [2];
  FMemScope local_1628;
  FName local_1620;
  FMemScope local_1618;
  TSharedPtr<ITableRow,1> *local_1610;
  TSharedRef<SListView<TSharedPtr<int,1>_>,1> *local_1608;
  FMemScope local_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined1 local_15e8;
  undefined1 local_15e0 [8];
  void *pvStack_15d8;
  undefined8 local_15d0;
  TAttribute<EVisibility> local_15c8;
  uchar local_15a8 [8];
  undefined8 local_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  TAttribute<float> local_1588;
  TAttribute<EVisibility> local_1568;
  FText local_1548;
  TAttribute<FSlateBrush_const_*> local_1538;
  TAttribute<FSlateBrush_const_*> local_1510;
  FDestructionSentinel local_14e8;
  FDestructionSentinel local_14d0;
  undefined1 *local_14b8;
  FDestructionSentinel local_14b0;
  longlong *local_1498;
  TAttribute<FText> local_1490;
  TSharedRef<STextBlock,1> local_1460;
  FName local_1450;
  ITableRow *local_1448;
  TReferenceControllerBase<1> *pTStack_1440;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1438;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1420;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1408;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_13f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_13d8;
  code *local_13b8;
  longlong lStack_13b0;
  TSharedRef<SWidget_const_,1> local_13a8;
  TSharedRef<SOverlay,1> local_1398;
  TSharedRef<SImage,1> local_1388;
  TSharedRef<SBorder,1> local_1378;
  TSharedRef<SHorizontalBox,1> local_1368;
  undefined1 local_1358 [16];
  undefined1 local_1348 [32];
  undefined1 local_1328 [24];
  undefined1 local_1310 [56];
  void *local_12d8;
  undefined1 local_12b0 [56];
  void *local_1278;
  undefined8 *local_1250;
  longlong *local_1248;
  FSharedReferencer<1> local_1240 [4];
  undefined1 local_1220 [40];
  FSlotArgumentsMixin local_11f8;
  undefined8 *local_1168 [2];
  TReferenceControllerBase<1> *local_1158;
  undefined1 local_1138 [40];
  FSlotArgumentsMixin local_1110;
  FArguments local_1080;
  FArguments local_e78;
  FArguments local_c70;
  FArguments local_9c8;
  FArguments local_5e8;
  code *local_88;
  undefined **local_78;
  SListViewPinnedRowWidget *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_17b8;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_1778 = (FArguments *)((ulonglong)local_1778 & 0xffffffff00000000);
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  local_1780 = param_4;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1448 = (this->PinnedItemRow).Object;
  pTStack_1440 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar3;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar2;
  local_1610 = param_2;
  local_1608 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1440);
  local_16e0.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  local_16e0.Object = param_3->Object;
  if (local_16e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_16e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView != &local_16e0) {
    (this->OwnerListView).Object = local_16e0.Object;
    local_16e0.Object = (SListView<TSharedPtr<int,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_16e0.SharedReferenceCount);
  }
  TSharedPtr<SListView<TSharedPtr<int,1>_>,1>::~TSharedPtr<SListView<TSharedPtr<int,1>_>,1>
            (&local_16e0);
  local_1750.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_1750.Object = (STableRow<TSharedPtr<int,1>_> *)param_2->Object;
  if (local_1750.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1750.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1750.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar43 = param_4;
  if (local_1750.Object != (STableRow<TSharedPtr<int,1>_> *)0x0) {
    if ((local_1750.Object == (STableRow<TSharedPtr<int,1>_> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar15 = local_1750.Object;
    pIVar17 = FAppStyle::Get();
    pcVar9 = *(code **)((longlong)*pIVar17 + 0x50);
    pFVar18 = ::FName::FName(&local_16b8,"NoBrush");
    local_1538.Value = (FSlateBrush *)(*pcVar9)(pIVar17,*pFVar18,0,0);
    local_1538.bIsSet = true;
    local_1538.Getter._16_8_ = 0;
    local_1538.Getter._0_8_ = 0;
    local_1538.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)&pSVar15->_padding_,&local_1538);
    if ((local_1750.Object == (STableRow<TSharedPtr<int,1>_> *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar42 = EVisibility::Hidden.Value.Value;
    iVar43 = local_1780;
    if (((local_1750.Object)->ExpanderArrowWidget).Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->(&(local_1750.Object)->ExpanderArrowWidget);
      local_15c8.bIsSet = true;
      local_15c8.Getter._0_8_ = 0;
      local_15c8.Getter._8_8_ = 0;
      local_15c8.Getter._16_8_ = 0;
      local_15c8.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar42.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_15c8);
      iVar43 = local_1780;
    }
  }
  pFVar27 = (FSlot *)0x0;
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1688);
  local_15a8[1] = 1;
  local_15a0 = 0;
  uStack_1598 = 0;
  local_15a8[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1590 = 0;
  (**(code **)(*local_1688 + 0x1c8))(local_1688,local_15a8);
  FVar19 = (FName)SOverlay::FArguments::FArguments(&local_e78);
  uStack_16b0 = 0;
  local_16b8 = (FName)SetPinnedItemVisibility;
  lStack_13b0 = (ulonglong)uStack_16ac << 0x20;
  local_13b8 = SetPinnedItemVisibility;
  local_1758 = (FSlotArguments *)CONCAT44(local_1758._4_4_,param_5);
  local_1778 = (FArguments *)CONCAT44(local_1778._4_4_,iVar43);
  local_1708 = FVar19;
  pTVar20 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_16d0
                       ,this,(pmf_fdf5e901 *)&local_13b8,(int *)&local_1778,(int *)&local_1758);
  local_1678 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16d0,
             (FWriteAccessScope *)&local_14e8);
  if ((local_16c0 != 0) && (local_16c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_16c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_16c8,0,0,0x10);
    local_16c0 = 0;
  }
  if (local_14e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e8.Accessor,&local_14e8);
  }
  if (local_16c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16d0);
  *(undefined1 *)((longlong)FVar19 + 0x88) = (undefined1)local_1678;
  *(undefined1 *)((longlong)FVar19 + 0x89) = local_1678._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar19 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  if ((void *)local_1670._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1670._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1670);
  local_1758 = SOverlay::Slot((FSlotArguments *)local_12b0,0);
  local_15e8 = 1;
  local_15d0 = 0;
  local_15f8 = 0;
  uStack_15f0 = 0;
  local_15e0 = (undefined1  [8])0x0;
  pvStack_15d8 = (void *)0x0;
  local_1758->_padding_ = 0;
  local_1758->_padding_ = 0;
  *(undefined1 *)&local_1758->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1758->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e0);
  if (pvStack_15d8 != (void *)0x0) {
    FMemory::Free(pvStack_15d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15e0);
  pFVar21 = SBorder::FArguments::FArguments(&local_9c8);
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_H_00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar21->_BorderImage).bIsSet = true;
  local_70 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar21->_BorderImage).Getter,(FWriteAccessScope *)&local_14d0);
  local_14b8 = &(pFVar21->_BorderImage).Getter.field_0x8;
  puVar22 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_14b8);
  if (puVar22 != (undefined8 *)0x0) {
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar22[4] = local_88;
    puVar22[9] = 0;
    if (local_88 != (code *)0x0) {
      pppuVar40 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar40 = local_60;
      }
      (*(code *)**pppuVar40)();
    }
  }
  if (local_14d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14d0.Accessor,&local_14d0);
  }
  local_1778 = SBorder::FArguments::Padding(pFVar21,0.0);
  pFVar24 = SHorizontalBox::FArguments::FArguments(&local_1080);
  pFVar25 = ::operator_new(0x58);
  local_1730 = (FArguments *)pFVar27;
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    local_1730 = (FArguments *)SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1250,(FSlot *)&local_1730);
  pFVar26 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1358);
  TOptional<FSizeParam>::operator=(&local_11f8._SizeParam,pFVar26);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1328);
  if ((void *)local_1328._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1328._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1328);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1348);
  if ((void *)local_1348._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1348._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1348);
  FStack_16f8.ReferenceController = local_1680;
  if (local_1680 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1680->SharedReferenceCount = (atomic<int>)((int)local_1680->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1248 = local_1688;
  local_1700 = (code *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1240,&FStack_16f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_16f8.ReferenceController);
  local_1730 = SHorizontalBox::FArguments::operator+(pFVar24,(FSlotArguments *)&local_1250);
  pFVar25 = ::operator_new(0x58);
  if (pFVar25 != (FSlot *)0x0) {
    *(undefined8 *)pFVar25 = 0;
    *(undefined8 *)&pFVar25->field_0x8 = 0;
    *(undefined8 *)&pFVar25->field_0x10 = 0;
    *(undefined8 *)&pFVar25->field_0x18 = 0;
    *(undefined8 *)&pFVar25->field_0x20 = 0;
    *(undefined8 *)&pFVar25->field_0x28 = 0;
    *(undefined8 *)&pFVar25->field_0x30 = 0;
    *(undefined8 *)&pFVar25->field_0x38 = 0;
    *(undefined8 *)&pFVar25->field_0x40 = 0;
    *(undefined8 *)&pFVar25->field_0x48 = 0;
    *(undefined8 *)&pFVar25->field_0x50 = 0;
    pFVar27 = SHorizontalBox::FSlot::FSlot(pFVar25);
  }
  local_1640 = pFVar27;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1168,(FSlot *)&local_1640);
  local_1588.Value = 1.0;
  local_1588.Getter._16_8_ = 0;
  local_1588.bIsSet = true;
  local_1588.Getter._0_8_ = 0;
  local_1588.Getter._8_8_ = 0;
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1168,&local_1588);
  pFVar28 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar28->field_0x18,__real_40000000,__real_40000000,
                       0.0,0.0);
  pFVar29 = STextBlock::FArguments::FArguments(&local_5e8);
  pFVar30 = FText::AsLocalizable_Advanced_LocText(&local_1548,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1490.Value,pFVar30);
  local_1490.bIsSet = true;
  local_1490.Getter._16_8_ = 0;
  local_1490.Getter._0_8_ = 0;
  local_1490.Getter._8_8_ = 0;
  pFVar29 = STextBlock::FArguments::Text(pFVar29,&local_1490);
  *(undefined1 *)((longlong)&pFVar29->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_padding_,
             (FWriteAccessScope *)&local_14b0);
  local_1498 = &pFVar29->_padding_;
  puVar22 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1498);
  FVar19 = local_16b8;
  if (puVar22 != (undefined8 *)0x0) {
    local_1700 = SetPinnedItemEllipsesVisibility;
    FStack_16f8.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1548._12_4_ << 0x20);
    pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13a8);
    FVar19 = (FName)(pTVar31->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar31->Object;
    if (FVar19 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar19 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar19 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar19 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar19 + 8) + 1);
      UNLOCK();
    }
    *puVar22 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar22 + 1) = local_1780;
    uVar23 = FDelegateHandle::GenerateNewID();
    puVar22[2] = uVar23;
    *puVar22 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_H_00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar22[3] = pSVar4;
    *(FName *)(puVar22 + 4) = FVar19;
    if (FVar19 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar19 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar19 + 0xc) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    puVar22[5] = local_1700;
    puVar22[6] = FStack_16f8.ReferenceController;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar19);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar19);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13a8.SharedReferenceCount.ReferenceController);
  }
  if (local_14b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b0.Accessor,&local_14b0);
  }
  FLLMScope::FLLMScope(local_1760,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1648 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1600,&local_1648,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_13d8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_1788);
  FMemScope::~FMemScope(&local_1600);
  FLLMScope::~FLLMScope(local_1760);
  pTVar32 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13d8,&local_1460,pFVar29);
  pTVar2 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1718 = pTVar32->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar44.Inner.bActive = false;
  FVar44._1_3_ = 0;
  FVar44.PrevTag = 0;
  local_1710.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar28->field_0x8 != &local_1718) {
    *(STextBlock **)&pFVar28->field_0x8 = local_1718;
    local_1718 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar28->field_0x10,&local_1710);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1710.ReferenceController);
  pFVar24 = SHorizontalBox::FArguments::operator+(local_1730,pFVar28);
  FLLMScope::FLLMScope(&local_1770,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1650 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1658,&local_1650,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_13f0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_1787);
  FMemScope::~FMemScope(&local_1658);
  FLLMScope::~FLLMScope(&local_1770);
  pTVar33 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13f0,&local_1368,pFVar24);
  pFVar21 = local_1778;
  pTVar5 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_16a8 = pTVar33->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (local_1778->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1778->_Content).Widget.Object = (SWidget *)local_16a8;
  (local_1778->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_16a0 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_176c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16e8,&local_16f0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1408,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_1786);
  FMemScope::~FMemScope(&local_16e8);
  FLLMScope::~FLLMScope(&local_176c);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1408,&local_1378,pFVar21);
  pFVar14 = local_1758;
  pTVar6 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1728 = pTVar34->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1720.ReferenceController = pTVar6;
  if ((SBorder **)&local_1758->_padding_ != &local_1728) {
    local_1758->_padding_ = (longlong)local_1728;
    local_1728 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1758->_padding_,&local_1720);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720.ReferenceController);
  local_16f0 = (FName)SOverlay::FArguments::operator+((FArguments *)local_1708,pFVar14);
  FVar35 = (FMemScope)SOverlay::Slot((FSlotArguments *)local_1310,0);
  plVar1 = (longlong *)((longlong)FVar35 + 0x48);
  if ((longlong *)local_1630 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)FVar35 + 0x4c) = 1;
  }
  FVar41 = FVar44;
  if (plVar1 != (longlong *)0x0) {
    FVar41 = FVar35;
  }
  if ((longlong *)local_1638 != (longlong *)((longlong)FVar41 + 0x50)) {
    *(undefined4 *)((longlong)FVar41 + 0x50) = 1;
    *(undefined1 *)((longlong)FVar41 + 0x54) = 1;
  }
  local_16e8 = FVar44;
  if (FVar41 != (FMemScope)0xffffffffffffffb8) {
    local_16e8 = FVar41;
  }
  pFVar36 = SImage::FArguments::FArguments(&local_c70);
  local_1568.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_1568.bIsSet = true;
  local_1568.Getter._0_8_ = 0;
  local_1568.Getter._8_8_ = 0;
  local_1568.Getter._16_8_ = 0;
  pFVar36 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar36,&local_1568);
  pIVar17 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar17 + 0x50);
  pFVar18 = ::FName::FName(&local_1450,"ListView.PinnedItemShadow");
  local_1510.Value = (FSlateBrush *)(*pcVar9)(pIVar17,*pFVar18);
  local_1510.bIsSet = true;
  local_1510.Getter._16_8_ = 0;
  local_1510.Getter._0_8_ = 0;
  local_1510.Getter._8_8_ = 0;
  pFVar36 = SImage::FArguments::Image(pFVar36,&local_1510);
  FLLMScope::FLLMScope(&local_1768,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1708,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1420,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_1785);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_1768);
  pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1420,&local_1388,pFVar36);
  FVar44 = local_16e8;
  pTVar7 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_1740 = pTVar37->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1738.ReferenceController = pTVar7;
  if ((SImage **)((longlong)local_16e8 + 8) != &local_1740) {
    *(SImage **)((longlong)local_16e8 + 8) = local_1740;
    local_1740 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_16e8 + 0x10),&local_1738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738.ReferenceController);
  pFVar38 = SOverlay::FArguments::operator+((FArguments *)local_16f0,(FSlotArguments *)FVar44);
  FLLMScope::FLLMScope(&local_1764,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1620 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1618,&local_1620,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1438,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_1784);
  FMemScope::~FMemScope(&local_1618);
  FLLMScope::~FLLMScope(&local_1764);
  pTVar39 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1438,&local_1398,pFVar38);
  plVar1 = &this->_padding_;
  local_1778 = (FArguments *)pTVar39->Object;
  pTVar8 = (pTVar39->SharedReferenceCount).ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  local_1698 = local_1778;
  this->_padding_ = (longlong)local_1778;
  this->_padding_ = (longlong)pTVar8;
  pTStack_1690 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_1398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1438._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1388.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1420._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_c70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1310 + 0x30));
  if (local_12d8 != (void *)0x0) {
    FMemory::Free(local_12d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1310 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1310._16_8_);
  if ((undefined8 *)local_1310._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1310._0_8_)(local_1310._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1408._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1368.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13f0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1460.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d8._Widget.SharedReferenceCount.ReferenceController);
  if (local_1548.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1548.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5e8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1110);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1138);
  if ((void *)local_1138._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1138._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1158);
  if (local_1168[0] != (undefined8 *)0x0) {
    (**(code **)*local_1168[0])(local_1168[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_11f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1220);
  if ((void *)local_1220._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1220._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1220);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1240[0].ReferenceController);
  if (local_1250 != (undefined8 *)0x0) {
    (**(code **)*local_1250)(local_1250,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1080._Slots.AllocatorInstance.Data,local_1080._Slots.ArrayNum);
  if ((FSlotArguments *)local_1080._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1080._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1080);
  if (local_88 != (code *)0x0) {
    pppuVar40 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar40 = local_60;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  SBorder::FArguments::~FArguments(&local_9c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_12b0 + 0x30));
  if (local_1278 != (void *)0x0) {
    FMemory::Free(local_1278);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_12b0 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_12b0._16_8_);
  if ((undefined8 *)local_12b0._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_12b0._0_8_)(local_12b0._0_8_,1);
  }
  SOverlay::FArguments::~FArguments(&local_e78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1680);
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
            (&local_1750);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1610->SharedReferenceCount).ReferenceController);
  TSharedRef<SListView<TSharedPtr<int,1>_>,1>::~TSharedRef<SListView<TSharedPtr<int,1>_>,1>
            (local_1608);
  return;
}

// Construct @ 142f75b30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITableRow *pIVar3;
  code *pcVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FSlotArguments *pFVar14;
  bool bVar15;
  ISlateStyle *pIVar16;
  FName *pFVar17;
  SExpanderArrow *this_00;
  FName FVar18;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar19;
  FArguments *pFVar20;
  undefined8 *puVar21;
  ulong64 uVar22;
  FArguments *pFVar23;
  FSlot *pFVar24;
  FSizeParam *pFVar25;
  FSlot *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  FText *pFVar29;
  TSharedRef<SWidget_const_,1> *pTVar30;
  TSharedRef<STextBlock,1> *pTVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  TSharedRef<SBorder,1> *pTVar33;
  FMemScope FVar34;
  FArguments *pFVar35;
  TSharedRef<SImage,1> *pTVar36;
  FArguments *pFVar37;
  TSharedRef<SOverlay,1> *pTVar38;
  undefined ***pppuVar39;
  FMemScope FVar40;
  TEnumAsByte<EVisibility::Private> TVar41;
  FMemScope FVar42;
  undefined1 auStackY_17a8 [32];
  T0RequiredArgs local_1778;
  T0RequiredArgs local_1777;
  T0RequiredArgs local_1776;
  T0RequiredArgs local_1775;
  T0RequiredArgs local_1774 [4];
  int local_1770;
  FArguments *local_1768;
  FLLMScope local_1760;
  FLLMScope local_175c;
  FLLMScope local_1758;
  FLLMScope local_1754;
  FLLMScope local_1750 [2];
  FSlotArguments *local_1748;
  FName local_1740;
  code *local_1738;
  FSharedReferencer<1> FStack_1730;
  FArguments *local_1728;
  STextBlock *local_1720;
  FSharedReferencer<1> local_1718;
  SBorder *local_1710;
  FSharedReferencer<1> local_1708;
  SImage *local_1700;
  FSharedReferencer<1> local_16f8;
  FName local_16f0;
  FMemScope local_16e8;
  undefined1 local_16e0 [8];
  ForAnyElementType local_16d8;
  int local_16d0;
  SListView<TSharedPtr<FTestData,1>_> *local_16c8;
  FSharedReferencer<1> local_16c0;
  FName local_16b8;
  undefined4 uStack_16b0;
  uint uStack_16ac;
  SHorizontalBox *local_16a8;
  TReferenceControllerBase<1> *pTStack_16a0;
  FArguments *local_1698;
  TReferenceControllerBase<1> *pTStack_1690;
  longlong *local_1688;
  TReferenceControllerBase<1> *local_1680;
  undefined2 local_1678;
  undefined1 local_1670 [24];
  undefined4 local_1658 [2];
  undefined4 local_1650 [2];
  FSlot *local_1648;
  FName local_1640;
  FMemScope local_1638;
  FName local_1630;
  FMemScope local_1628;
  FMemScope local_1620;
  FName local_1618;
  FMemScope local_1610;
  TReferenceControllerBase<1> *local_1608;
  TSharedPtr<ITableRow,1> *local_1600;
  TSharedRef<SListView<TSharedPtr<FTestData,1>_>,1> *local_15f8;
  undefined8 local_15f0;
  undefined8 uStack_15e8;
  undefined1 local_15e0;
  undefined1 local_15d8 [8];
  void *pvStack_15d0;
  undefined8 local_15c8;
  uchar local_15c0 [8];
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  TAttribute<EVisibility> local_15a0;
  TAttribute<float> local_1580;
  TAttribute<EVisibility> local_1560;
  FText local_1540;
  TAttribute<FSlateBrush_const_*> local_1530;
  TAttribute<FSlateBrush_const_*> local_1508;
  FDestructionSentinel local_14e0;
  FDestructionSentinel local_14c8;
  undefined1 *local_14b0;
  FDestructionSentinel local_14a8;
  longlong *local_1490;
  TAttribute<FText> local_1488;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1458;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1440;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1428;
  ITableRow *local_1410;
  TReferenceControllerBase<1> *pTStack_1408;
  code *local_13f8;
  longlong lStack_13f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_13e8;
  TSharedRef<SWidget_const_,1> local_13d0;
  TSharedRef<SOverlay,1> local_13c0;
  TSharedRef<SImage,1> local_13b0;
  TSharedRef<SBorder,1> local_13a0;
  TSharedRef<STextBlock,1> local_1390;
  FName local_1380;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1378;
  TSharedRef<SHorizontalBox,1> local_1360;
  undefined1 local_1350 [16];
  undefined1 local_1340 [32];
  undefined1 local_1320 [24];
  undefined1 local_1308 [56];
  void *local_12d0;
  undefined1 local_12a8 [56];
  void *local_1270;
  undefined8 *local_1248;
  longlong *local_1240;
  FSharedReferencer<1> local_1238 [4];
  undefined1 local_1218 [40];
  FSlotArgumentsMixin local_11f0;
  undefined8 *local_1160 [2];
  TReferenceControllerBase<1> *local_1150;
  undefined1 local_1130 [40];
  FSlotArgumentsMixin local_1108;
  FArguments local_1078;
  FArguments local_e70;
  FArguments local_c68;
  FArguments local_9c0;
  FArguments local_5e0;
  code *local_88;
  undefined **local_78;
  SListViewPinnedRowWidget *local_70;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_17a8;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_1768 = (FArguments *)((ulonglong)local_1768 & 0xffffffff00000000);
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  local_1770 = param_4;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1410 = (this->PinnedItemRow).Object;
  pTStack_1408 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar3;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar2;
  local_1600 = param_2;
  local_15f8 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1408);
  local_16c0.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  local_16c8 = param_3->Object;
  if (local_16c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_16c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView != (TSharedPtr<SListView<TSharedPtr<FTestData,1>_>,1> *)&local_16c8) {
    (this->OwnerListView).Object = local_16c8;
    local_16c8 = (SListView<TSharedPtr<FTestData,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_16c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c0.ReferenceController);
  local_1608 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (local_1608 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1608->SharedReferenceCount = (atomic<int>)((int)local_1608->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 != (ITableRow *)0x0) {
    pIVar16 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar16 + 0x50);
    pFVar17 = ::FName::FName(&local_16b8,"NoBrush");
    local_1530.Value = (FSlateBrush *)(*pcVar4)(pIVar16,*pFVar17,0,0);
    local_1530.bIsSet = true;
    local_1530.Getter._16_8_ = 0;
    local_1530.Getter._0_8_ = 0;
    local_1530.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)(pIVar3 + 1),&local_1530);
    TVar41 = EVisibility::Hidden.Value.Value;
    param_4 = local_1770;
    if (((TSharedPtr<SExpanderArrow,1> *)(pIVar3 + 99))->Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->
                          ((TSharedPtr<SExpanderArrow,1> *)(pIVar3 + 99));
      local_15a0.bIsSet = true;
      local_15a0.Getter._16_8_ = 0;
      local_15a0.Getter._0_8_ = 0;
      local_15a0.Getter._8_8_ = 0;
      local_15a0.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar41.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_15a0);
      param_4 = local_1770;
    }
  }
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1688);
  pFVar26 = (FSlot *)0x0;
  local_15c0[1] = 1;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15c0[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_15a8 = 0;
  (**(code **)(*local_1688 + 0x1c8))(local_1688,local_15c0);
  FVar18 = (FName)SOverlay::FArguments::FArguments(&local_e70);
  uStack_16b0 = 0;
  local_16b8 = (FName)SetPinnedItemVisibility;
  lStack_13f0 = (ulonglong)uStack_16ac << 0x20;
  local_13f8 = SetPinnedItemVisibility;
  local_1748 = (FSlotArguments *)CONCAT44(local_1748._4_4_,param_5);
  local_1768 = (FArguments *)CONCAT44(local_1768._4_4_,param_4);
  local_1740 = FVar18;
  pTVar19 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_16e0
                       ,this,(pmf_203cd0f4 *)&local_13f8,(int *)&local_1768,(int *)&local_1748);
  local_1678 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar19);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16e0,
             (FWriteAccessScope *)&local_14e0);
  if ((local_16d0 != 0) && (local_16d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_16d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_16d8,0,0,0x10);
    local_16d0 = 0;
  }
  if (local_14e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e0.Accessor,&local_14e0);
  }
  if (local_16d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16e0);
  *(undefined1 *)((longlong)FVar18 + 0x88) = (undefined1)local_1678;
  *(undefined1 *)((longlong)FVar18 + 0x89) = local_1678._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar18 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  if ((void *)local_1670._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1670._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1670);
  local_1748 = SOverlay::Slot((FSlotArguments *)local_12a8,0);
  local_15e0 = 1;
  local_15c8 = 0;
  local_15f0 = 0;
  uStack_15e8 = 0;
  local_15d8 = (undefined1  [8])0x0;
  pvStack_15d0 = (void *)0x0;
  local_1748->_padding_ = 0;
  local_1748->_padding_ = 0;
  *(undefined1 *)&local_1748->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1748->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15d8);
  if (pvStack_15d0 != (void *)0x0) {
    FMemory::Free(pvStack_15d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15d8);
  pFVar20 = SBorder::FArguments::FArguments(&local_9c0);
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_VFTestData___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar20->_BorderImage).bIsSet = true;
  local_70 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar20->_BorderImage).Getter,(FWriteAccessScope *)&local_14c8);
  local_14b0 = &(pFVar20->_BorderImage).Getter.field_0x8;
  puVar21 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_14b0);
  if (puVar21 != (undefined8 *)0x0) {
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar21[4] = local_88;
    puVar21[9] = 0;
    if (local_88 != (code *)0x0) {
      pppuVar39 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar39 = local_60;
      }
      (*(code *)**pppuVar39)();
    }
  }
  if (local_14c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14c8.Accessor,&local_14c8);
  }
  local_1768 = SBorder::FArguments::Padding(pFVar20,0.0);
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_1078);
  pFVar24 = ::operator_new(0x58);
  local_1728 = (FArguments *)pFVar26;
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    local_1728 = (FArguments *)SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1248,(FSlot *)&local_1728);
  pFVar25 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1350);
  TOptional<FSizeParam>::operator=(&local_11f0._SizeParam,pFVar25);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1320);
  if ((void *)local_1320._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1320._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1320);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1340);
  if ((void *)local_1340._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1340._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1340);
  FStack_1730.ReferenceController = local_1680;
  if (local_1680 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1680->SharedReferenceCount = (atomic<int>)((int)local_1680->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1240 = local_1688;
  local_1738 = (code *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1238,&FStack_1730);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1730.ReferenceController);
  local_1728 = SHorizontalBox::FArguments::operator+(pFVar23,(FSlotArguments *)&local_1248);
  pFVar24 = ::operator_new(0x58);
  if (pFVar24 != (FSlot *)0x0) {
    *(undefined8 *)pFVar24 = 0;
    *(undefined8 *)&pFVar24->field_0x8 = 0;
    *(undefined8 *)&pFVar24->field_0x10 = 0;
    *(undefined8 *)&pFVar24->field_0x18 = 0;
    *(undefined8 *)&pFVar24->field_0x20 = 0;
    *(undefined8 *)&pFVar24->field_0x28 = 0;
    *(undefined8 *)&pFVar24->field_0x30 = 0;
    *(undefined8 *)&pFVar24->field_0x38 = 0;
    *(undefined8 *)&pFVar24->field_0x40 = 0;
    *(undefined8 *)&pFVar24->field_0x48 = 0;
    *(undefined8 *)&pFVar24->field_0x50 = 0;
    pFVar26 = SHorizontalBox::FSlot::FSlot(pFVar24);
  }
  local_1648 = pFVar26;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1160,(FSlot *)&local_1648);
  local_1580.Value = 1.0;
  local_1580.Getter._16_8_ = 0;
  local_1580.bIsSet = true;
  local_1580.Getter._0_8_ = 0;
  local_1580.Getter._8_8_ = 0;
  pFVar27 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1160,&local_1580);
  pFVar27 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar27->field_0x18,__real_40000000,__real_40000000,
                       0.0,0.0);
  pFVar28 = STextBlock::FArguments::FArguments(&local_5e0);
  pFVar29 = FText::AsLocalizable_Advanced_LocText(&local_1540,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1488.Value,pFVar29);
  local_1488.bIsSet = true;
  local_1488.Getter._16_8_ = 0;
  local_1488.Getter._0_8_ = 0;
  local_1488.Getter._8_8_ = 0;
  pFVar28 = STextBlock::FArguments::Text(pFVar28,&local_1488);
  *(undefined1 *)((longlong)&pFVar28->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar28->_padding_,
             (FWriteAccessScope *)&local_14a8);
  local_1490 = &pFVar28->_padding_;
  puVar21 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1490);
  FVar18 = local_16b8;
  if (puVar21 != (undefined8 *)0x0) {
    local_1738 = SetPinnedItemEllipsesVisibility;
    FStack_1730.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1540._12_4_ << 0x20);
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13d0);
    FVar18 = (FName)(pTVar30->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar30->Object;
    if (FVar18 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar18 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar18 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar18 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar18 + 8) + 1);
      UNLOCK();
    }
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar21 + 1) = local_1770;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_VFTestData___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar21[3] = pSVar5;
    *(FName *)(puVar21 + 4) = FVar18;
    if (FVar18 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar18 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar18 + 0xc) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    puVar21[5] = local_1738;
    puVar21[6] = FStack_1730.ReferenceController;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar18);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar18);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13d0.SharedReferenceCount.ReferenceController);
  }
  if (local_14a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14a8.Accessor,&local_14a8);
  }
  FLLMScope::FLLMScope(&local_1760,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1640 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1638,&local_1640,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1428,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_1778);
  FMemScope::~FMemScope(&local_1638);
  FLLMScope::~FLLMScope(&local_1760);
  pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1428,&local_1390,pFVar28);
  pTVar2 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1720 = pTVar31->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar42.Inner.bActive = false;
  FVar42._1_3_ = 0;
  FVar42.PrevTag = 0;
  local_1718.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar27->field_0x8 != &local_1720) {
    *(STextBlock **)&pFVar27->field_0x8 = local_1720;
    local_1720 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->field_0x10,&local_1718);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1718.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(local_1728,pFVar27);
  FLLMScope::FLLMScope(&local_175c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1630 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1630,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1440,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_1777);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_175c);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1440,&local_1360,pFVar23);
  pFVar20 = local_1768;
  pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_16a8 = pTVar32->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar7 = (local_1768->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1768->_Content).Widget.Object = (SWidget *)local_16a8;
  (local_1768->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  pTStack_16a0 = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  FLLMScope::FLLMScope(&local_1758,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16f0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16e8,&local_16f0,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1458,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_1776);
  FMemScope::~FMemScope(&local_16e8);
  FLLMScope::~FLLMScope(&local_1758);
  pTVar33 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1458,&local_13a0,pFVar20);
  pFVar14 = local_1748;
  pTVar7 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_1710 = pTVar33->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1708.ReferenceController = pTVar7;
  if ((SBorder **)&local_1748->_padding_ != &local_1710) {
    local_1748->_padding_ = (longlong)local_1710;
    local_1710 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1748->_padding_,&local_1708);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708.ReferenceController);
  local_16f0 = (FName)SOverlay::FArguments::operator+((FArguments *)local_1740,pFVar14);
  FVar34 = (FMemScope)SOverlay::Slot((FSlotArguments *)local_1308,0);
  plVar1 = (longlong *)((longlong)FVar34 + 0x48);
  if ((longlong *)local_1658 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)FVar34 + 0x4c) = 1;
  }
  FVar40 = FVar42;
  if (plVar1 != (longlong *)0x0) {
    FVar40 = FVar34;
  }
  if ((longlong *)local_1650 != (longlong *)((longlong)FVar40 + 0x50)) {
    *(undefined4 *)((longlong)FVar40 + 0x50) = 1;
    *(undefined1 *)((longlong)FVar40 + 0x54) = 1;
  }
  local_16e8 = FVar42;
  if (FVar40 != (FMemScope)0xffffffffffffffb8) {
    local_16e8 = FVar40;
  }
  pFVar35 = SImage::FArguments::FArguments(&local_c68);
  local_1560.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_1560.bIsSet = true;
  local_1560.Getter._0_8_ = 0;
  local_1560.Getter._8_8_ = 0;
  local_1560.Getter._16_8_ = 0;
  pFVar35 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar35,&local_1560);
  pIVar16 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar16 + 0x50);
  pFVar17 = ::FName::FName(&local_1380,"ListView.PinnedItemShadow");
  local_1508.Value = (FSlateBrush *)(*pcVar4)(pIVar16,*pFVar17);
  local_1508.bIsSet = true;
  local_1508.Getter._16_8_ = 0;
  local_1508.Getter._0_8_ = 0;
  local_1508.Getter._8_8_ = 0;
  pFVar35 = SImage::FArguments::Image(pFVar35,&local_1508);
  FLLMScope::FLLMScope(&local_1754,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1740 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_1740,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_13e8,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_1775);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(&local_1754);
  pTVar36 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e8,&local_13b0,pFVar35);
  FVar42 = local_16e8;
  pTVar8 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_1700 = pTVar36->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_16f8.ReferenceController = pTVar8;
  if ((SImage **)((longlong)local_16e8 + 8) != &local_1700) {
    *(SImage **)((longlong)local_16e8 + 8) = local_1700;
    local_1700 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_16e8 + 0x10),&local_16f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16f8.ReferenceController);
  pFVar37 = SOverlay::FArguments::operator+((FArguments *)local_16f0,(FSlotArguments *)FVar42);
  FLLMScope::FLLMScope(local_1750,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1618 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1610,&local_1618,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1378,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_1774);
  FMemScope::~FMemScope(&local_1610);
  FLLMScope::~FLLMScope(local_1750);
  pTVar38 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1378,&local_13c0,pFVar37);
  plVar1 = &this->_padding_;
  local_1768 = (FArguments *)pTVar38->Object;
  pTVar9 = (pTVar38->SharedReferenceCount).ReferenceController;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  local_1698 = local_1768;
  this->_padding_ = (longlong)local_1768;
  this->_padding_ = (longlong)pTVar9;
  pTStack_1690 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  TSharedRef<SOverlay,1>::~TSharedRef<SOverlay,1>(&local_13c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13e8._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_c68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1308 + 0x30));
  if (local_12d0 != (void *)0x0) {
    FMemory::Free(local_12d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1308 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1308._16_8_);
  if ((undefined8 *)local_1308._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1308._0_8_)(local_1308._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1458._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1360.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1440._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1390.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1428._Widget.SharedReferenceCount.ReferenceController);
  if (local_1540.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1540.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5e0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1108);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1130);
  if ((void *)local_1130._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1130._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1130);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1150);
  if (local_1160[0] != (undefined8 *)0x0) {
    (**(code **)*local_1160[0])(local_1160[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_11f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1218);
  if ((void *)local_1218._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1218._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1218);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1238[0].ReferenceController);
  if (local_1248 != (undefined8 *)0x0) {
    (**(code **)*local_1248)(local_1248,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1078._Slots.AllocatorInstance.Data,local_1078._Slots.ArrayNum);
  if ((FSlotArguments *)local_1078._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1078._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1078);
  if (local_88 != (code *)0x0) {
    pppuVar39 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar39 = local_60;
    }
    (*(code *)(*pppuVar39)[2])();
  }
  SBorder::FArguments::~FArguments(&local_9c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_12a8 + 0x30));
  if (local_1270 != (void *)0x0) {
    FMemory::Free(local_1270);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_12a8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_12a8._16_8_);
  if ((undefined8 *)local_12a8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_12a8._0_8_)(local_12a8._0_8_,1);
  }
  SOverlay::FArguments::~FArguments(&local_e70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1608);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1600->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_15f8->SharedReferenceCount).ReferenceController);
  return;
}

// OnMouseButtonDown @ 142ff5610

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<int,1>_> *pSVar3;
  code *pcVar4;
  FReply *pFVar5;
  longlong lVar6;
  bool bVar7;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar7) {
    if ((this->OwnerListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar4)();
        return pFVar5;
      }
    }
    lVar6 = (**(code **)(((this->OwnerListView).Object)->_padding_ + 0x48))();
    if (lVar6 != 0) {
      if ((this->OwnerListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar4)();
          return pFVar5;
        }
      }
      pSVar3 = (this->OwnerListView).Object;
      (**(code **)(pSVar3->_padding_ + 0x2e8))(pSVar3,lVar6,param_2);
      bVar7 = true;
      goto LAB_142ff56f4;
    }
  }
  bVar7 = false;
LAB_142ff56f4:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// OnMouseButtonDown @ 142ff5720

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FTestData,1>_> *pSVar3;
  code *pcVar4;
  FReply *pFVar5;
  longlong lVar6;
  bool bVar7;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar7 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar7) {
    if ((this->OwnerListView).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar4)();
        return pFVar5;
      }
    }
    lVar6 = (**(code **)(((this->OwnerListView).Object)->_padding_ + 0x48))();
    if (lVar6 != 0) {
      if ((this->OwnerListView).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar4)();
          return pFVar5;
        }
      }
      pSVar3 = (this->OwnerListView).Object;
      (**(code **)(pSVar3->_padding_ + 0x2e8))(pSVar3,lVar6,param_2);
      bVar7 = true;
      goto LAB_142ff5804;
    }
  }
  bVar7 = false;
LAB_142ff5804:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 14300d620

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::SetPinnedItemEllipsesVisibility
          (SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<int,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar5.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  pSVar1 = (this->OwnerListView).Object;
  if (pSVar1->bIsHierarchyCollapsed == false) {
    ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
         (uchar)EVisibility::Collapsed.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)param_1;
  }
  if (pSVar1 == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar5.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  piVar6 = TAttribute<int>::Get(&((this->OwnerListView).Object)->MaxPinnedItems);
  EVar3 = EVisibility::Collapsed;
  if (in_R8D == *piVar6 + -2) {
    EVar3 = EVisibility::Visible;
  }
  ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
       (uchar)EVar3.Value.Value;
  return (EVisibility)(uchar)param_1;
}

// SetPinnedItemEllipsesVisibility @ 14300d710

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::SetPinnedItemEllipsesVisibility
          (SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<FTestData,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar5.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  pSVar1 = (this->OwnerListView).Object;
  if (pSVar1->bIsHierarchyCollapsed == false) {
    ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
         (uchar)EVisibility::Collapsed.Value.Value;
    return (TEnumAsByte<EVisibility::Private>)(uchar)param_1;
  }
  if (pSVar1 == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      TVar5.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar5.Value;
    }
  }
  piVar6 = TAttribute<int>::Get(&((this->OwnerListView).Object)->MaxPinnedItems);
  EVar3 = EVisibility::Collapsed;
  if (in_R8D == *piVar6 + -2) {
    EVar3 = EVisibility::Visible;
  }
  ((TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1))->Value =
       (uchar)EVar3.Value.Value;
  return (EVisibility)(uchar)param_1;
}

// SetPinnedItemVisibility @ 14300d800

EVisibility __thiscall
SListView<TSharedPtr<int,1>_>::SListViewPinnedRowWidget::SetPinnedItemVisibility
          (SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<int,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<int,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  pSVar1 = (this->OwnerListView).Object;
  if (pSVar1->bIsHierarchyCollapsed != false) {
    if (pSVar1 == (SListView<TSharedPtr<int,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Value = (*pcVar2)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
      }
    }
    piVar6 = TAttribute<int>::Get(&((this->OwnerListView).Object)->MaxPinnedItems);
    if ((param_2 != in_R9D + -1) && (EVar5 = EVisibility::Collapsed, *piVar6 + -1 <= param_2))
    goto LAB_14300d8bc;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_14300d8bc:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

// SetPinnedItemVisibility @ 14300d8e0

EVisibility __thiscall
SListView<TSharedPtr<FTestData,1>_>::SListViewPinnedRowWidget::SetPinnedItemVisibility
          (SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<FTestData,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4.Value = (*pcVar2)();
      return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
    }
  }
  pSVar1 = (this->OwnerListView).Object;
  if (pSVar1->bIsHierarchyCollapsed != false) {
    if (pSVar1 == (SListView<TSharedPtr<FTestData,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Value = (*pcVar2)();
        return (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar4.Value;
      }
    }
    piVar6 = TAttribute<int>::Get(&((this->OwnerListView).Object)->MaxPinnedItems);
    if ((param_2 != in_R9D + -1) && (EVar5 = EVisibility::Collapsed, *piVar6 + -1 <= param_2))
    goto LAB_14300d99c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_14300d99c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

