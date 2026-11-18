// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 5

// operator() @ 14d83cec0

FSlateBrush * __thiscall
`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
Construct'::__l2::<lambda_1>::operator()(void *this)

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

// Construct @ 14d84e770

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
Construct(SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
         TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *param_3,
         int param_4,int param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  ITableRow *pIVar2;
  code *pcVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  SOverlay *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  ISlateStyle *pIVar15;
  FName *pFVar16;
  SExpanderArrow *this_00;
  FName FVar17;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar18;
  FSlotArguments *pFVar19;
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
  FArguments *pFVar34;
  TSharedRef<SImage,1> *pTVar35;
  FArguments *pFVar36;
  TSharedRef<SOverlay,1> *pTVar37;
  undefined ***pppuVar38;
  FSlotArguments *pFVar39;
  TEnumAsByte<EVisibility::Private> TVar40;
  int iVar41;
  longlong *plVar42;
  undefined1 auStackY_17a8 [32];
  T0RequiredArgs local_1778;
  T0RequiredArgs local_1777;
  T0RequiredArgs local_1776;
  T0RequiredArgs local_1775;
  T0RequiredArgs local_1774 [4];
  int local_1770;
  FName local_1768;
  FLLMScope local_1760;
  FLLMScope local_175c;
  FLLMScope local_1758;
  FLLMScope local_1754;
  FLLMScope local_1750 [2];
  FArguments *local_1748;
  int local_1740 [2];
  STextBlock *local_1738;
  FSharedReferencer<1> local_1730;
  FArguments *local_1728;
  FSlotArguments *local_1720;
  SBorder *local_1718;
  FSharedReferencer<1> local_1710;
  SImage *local_1708;
  FSharedReferencer<1> local_1700;
  code *local_16f8;
  FSharedReferencer<1> FStack_16f0;
  FMemScope local_16e8;
  undefined1 local_16e0 [8];
  ForAnyElementType local_16d8;
  int local_16d0;
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *local_16c8;
  FSharedReferencer<1> local_16c0;
  uchar local_16b8;
  undefined1 local_16b7;
  undefined1 local_16b0 [8];
  void *pvStack_16a8;
  undefined8 local_16a0;
  SHorizontalBox *local_1698;
  TReferenceControllerBase<1> *pTStack_1690;
  SOverlay *local_1688;
  TReferenceControllerBase<1> *pTStack_1680;
  longlong *local_1678;
  TReferenceControllerBase<1> *local_1670;
  FName local_1668;
  undefined4 uStack_1660;
  uint uStack_165c;
  undefined2 local_1658;
  undefined1 local_1650 [24];
  undefined4 local_1638 [2];
  undefined4 local_1630 [2];
  FName local_1628;
  FMemScope local_1620;
  FName local_1618;
  FMemScope local_1610;
  FName local_1608;
  FMemScope local_1600;
  FName local_15f8;
  FMemScope local_15f0;
  TReferenceControllerBase<1> *local_15e8;
  TSharedPtr<ITableRow,1> *local_15e0;
  TSharedRef<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *local_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  undefined1 local_15c0;
  undefined1 local_15b8 [8];
  void *pvStack_15b0;
  undefined8 local_15a8;
  uchar local_15a0 [8];
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  TAttribute<EVisibility> local_1580;
  TAttribute<float> local_1560;
  FText local_1540;
  TAttribute<FSlateBrush_const_*> local_1530;
  TAttribute<FSlateBrush_const_*> local_1508;
  FDestructionSentinel local_14e0;
  FDestructionSentinel local_14c8;
  undefined1 *local_14b0;
  FDestructionSentinel local_14a8;
  longlong *local_1490;
  TAttribute<FText> local_1488;
  TSharedRef<STextBlock,1> local_1458;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1448;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1430;
  ITableRow *local_1418;
  TReferenceControllerBase<1> *pTStack_1410;
  code *local_1408;
  longlong lStack_1400;
  TSharedRef<SWidget_const_,1> local_13f8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_13e8;
  TSharedRef<SOverlay,1> local_13d0;
  TSharedRef<SImage,1> local_13c0;
  TSharedRef<SBorder,1> local_13b0;
  TSharedRef<SHorizontalBox,1> local_13a0;
  FName local_1390;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1388;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1370;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_17a8;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_1748 = (FArguments *)((ulonglong)local_1748 & 0xffffffff00000000);
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  local_1770 = param_4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1418 = (this->PinnedItemRow).Object;
  pTStack_1410 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar2;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar1;
  local_15e0 = param_2;
  local_15d8 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1410);
  local_16c0.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  local_16c8 = param_3->Object;
  if (local_16c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16c0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_16c0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView !=
      (TSharedPtr<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1> *)&local_16c8)
  {
    (this->OwnerListView).Object = local_16c8;
    local_16c8 = (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_16c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16c0.ReferenceController);
  local_15e8 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (local_15e8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_15e8->SharedReferenceCount = (atomic<int>)((int)local_15e8->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar41 = param_4;
  if (pIVar2 != (ITableRow *)0x0) {
    pIVar15 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar15 + 0x50);
    pFVar16 = ::FName::FName(&local_1668,"NoBrush");
    local_1530.Value = (FSlateBrush *)(*pcVar3)(pIVar15,*pFVar16,0,0);
    local_1530.bIsSet = true;
    local_1530.Getter._16_8_ = 0;
    local_1530.Getter._0_8_ = 0;
    local_1530.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)(pIVar2 + 1),&local_1530);
    TVar40 = EVisibility::Hidden.Value.Value;
    iVar41 = local_1770;
    if (((TSharedPtr<SExpanderArrow,1> *)(pIVar2 + 99))->Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->
                          ((TSharedPtr<SExpanderArrow,1> *)(pIVar2 + 99));
      local_1580.bIsSet = true;
      local_1580.Getter._0_8_ = 0;
      local_1580.Getter._8_8_ = 0;
      local_1580.Getter._16_8_ = 0;
      local_1580.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar40.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_1580);
      iVar41 = local_1770;
    }
  }
  pFVar26 = (FSlot *)0x0;
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1678);
  local_15a0[1] = 1;
  local_1598 = 0;
  uStack_1590 = 0;
  local_15a0[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1588 = 0;
  (**(code **)(*local_1678 + 0x1c8))(local_1678,local_15a0);
  FVar17 = (FName)SOverlay::FArguments::FArguments(&local_e78);
  uStack_1660 = 0;
  local_1668 = (FName)SetPinnedItemVisibility;
  lStack_1400 = (ulonglong)uStack_165c << 0x20;
  local_1408 = SetPinnedItemVisibility;
  local_1740[0] = param_5;
  local_1748 = (FArguments *)CONCAT44(local_1748._4_4_,iVar41);
  local_1768 = FVar17;
  pTVar18 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_16e0
                       ,this,(pmf_5c5526ce *)&local_1408,(int *)&local_1748,local_1740);
  local_1658 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar18);
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
  *(undefined1 *)((longlong)FVar17 + 0x88) = (undefined1)local_1658;
  *(undefined1 *)((longlong)FVar17 + 0x89) = local_1658._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar17 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1650);
  if ((void *)local_1650._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1650._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1650);
  pFVar19 = SOverlay::Slot((FSlotArguments *)local_12b0,0);
  local_15c0 = 1;
  local_15a8 = 0;
  local_15d0 = 0;
  uStack_15c8 = 0;
  local_15b8 = (undefined1  [8])0x0;
  pvStack_15b0 = (void *)0x0;
  pFVar19->_padding_ = 0;
  pFVar19->_padding_ = 0;
  *(undefined1 *)&pFVar19->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15b8);
  if (pvStack_15b0 != (void *)0x0) {
    FMemory::Free(pvStack_15b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15b8);
  pFVar20 = SBorder::FArguments::FArguments(&local_9c8);
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
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
      pppuVar38 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar38 = local_60;
      }
      (*(code *)**pppuVar38)();
    }
  }
  if (local_14c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14c8.Accessor,&local_14c8);
  }
  local_1748 = SBorder::FArguments::Padding(pFVar20,0.0);
  pFVar23 = SHorizontalBox::FArguments::FArguments(&local_1080);
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
            ((FSlotArguments *)&local_1250,(FSlot *)&local_1728);
  pFVar25 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1358);
  TOptional<FSizeParam>::operator=(&local_11f8._SizeParam,pFVar25);
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
  FStack_16f0.ReferenceController = local_1670;
  if (local_1670 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1670->SharedReferenceCount = (atomic<int>)((int)local_1670->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1248 = local_1678;
  local_16f8 = (code *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1240,&FStack_16f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_16f0.ReferenceController);
  local_1728 = SHorizontalBox::FArguments::operator+(pFVar23,(FSlotArguments *)&local_1250);
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
  local_1720 = (FSlotArguments *)pFVar26;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1168,(FSlot *)&local_1720);
  local_1560.Value = 1.0;
  local_1560.Getter._16_8_ = 0;
  local_1560.bIsSet = true;
  local_1560.Getter._0_8_ = 0;
  local_1560.Getter._8_8_ = 0;
  pFVar27 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1168,&local_1560);
  local_1720 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)&pFVar27->field_0x18,__real_40000000,
                          __real_40000000,0.0,0.0);
  pFVar28 = STextBlock::FArguments::FArguments(&local_5e8);
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
  FVar17 = local_1668;
  if (puVar21 != (undefined8 *)0x0) {
    local_16f8 = SetPinnedItemEllipsesVisibility;
    FStack_16f0.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1540._12_4_ << 0x20);
    pTVar30 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13f8);
    FVar17 = (FName)(pTVar30->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar30->Object;
    if (FVar17 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar17 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar17 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar17 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar17 + 8) + 1);
      UNLOCK();
    }
    *puVar21 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar21 + 1) = local_1770;
    uVar22 = FDelegateHandle::GenerateNewID();
    puVar21[2] = uVar22;
    *puVar21 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar21[3] = pSVar4;
    *(FName *)(puVar21 + 4) = FVar17;
    if (FVar17 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar17 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar17 + 0xc) + 1);
      UNLOCK();
    }
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    puVar21[5] = local_16f8;
    puVar21[6] = FStack_16f0.ReferenceController;
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar17);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar17);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13f8.SharedReferenceCount.ReferenceController);
  }
  if (local_14a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14a8.Accessor,&local_14a8);
  }
  FLLMScope::FLLMScope(&local_1760,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1628 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_1628,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1430,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_1778);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(&local_1760);
  pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1430,&local_1458,pFVar28);
  pFVar27 = local_1720;
  pTVar1 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_1738 = pTVar31->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1730.ReferenceController = pTVar1;
  if ((STextBlock **)&local_1720->field_0x8 != &local_1738) {
    *(STextBlock **)&local_1720->field_0x8 = local_1738;
    local_1738 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1720->field_0x10,&local_1730);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1730.ReferenceController);
  pFVar23 = SHorizontalBox::FArguments::operator+(local_1728,pFVar27);
  FLLMScope::FLLMScope(&local_175c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1618 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1610,&local_1618,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1448,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_1777);
  FMemScope::~FMemScope(&local_1610);
  FLLMScope::~FLLMScope(&local_175c);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1448,&local_13a0,pFVar23);
  pFVar20 = local_1748;
  pTVar5 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1698 = pTVar32->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (local_1748->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1748->_Content).Widget.Object = (SWidget *)local_1698;
  (local_1748->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_1690 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_1758,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1608 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_16e8,&local_1608,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_13e8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_1776);
  FMemScope::~FMemScope(&local_16e8);
  FLLMScope::~FLLMScope(&local_1758);
  pTVar33 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e8,&local_13b0,pFVar20);
  pTVar6 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_1718 = pTVar33->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1710.ReferenceController = pTVar6;
  if ((SBorder **)&pFVar19->_padding_ != &local_1718) {
    pFVar19->_padding_ = (longlong)local_1718;
    local_1718 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_1710);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1710.ReferenceController);
  local_16e8 = (FMemScope)SOverlay::FArguments::operator+((FArguments *)local_1768,pFVar19);
  pFVar19 = SOverlay::Slot((FSlotArguments *)local_1310,0);
  plVar42 = &pFVar19->_padding_;
  if ((longlong *)local_1638 != plVar42) {
    *(undefined4 *)plVar42 = 0;
    *(undefined1 *)((longlong)&pFVar19->_padding_ + 4) = 1;
  }
  pFVar39 = (FSlotArguments *)0x0;
  if (plVar42 != (longlong *)0x0) {
    pFVar39 = pFVar19;
  }
  if ((longlong *)local_1630 != &pFVar39->_padding_) {
    *(undefined4 *)&pFVar39->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar39->_padding_ + 4) = 1;
  }
  pFVar19 = (FSlotArguments *)0x0;
  if (pFVar39 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar19 = pFVar39;
  }
  local_1768 = (FName)SImage::FArguments::FArguments(&local_c70);
  local_16b8 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_16b7 = 1;
  local_16a0 = 0;
  local_16b0 = (undefined1  [8])0x0;
  pvStack_16a8 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)((longlong)local_1768 + 0x88) =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)local_1768 + 0x89) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_1768 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16b0);
  if (pvStack_16a8 != (void *)0x0) {
    FMemory::Free(pvStack_16a8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16b0);
  pIVar15 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar15 + 0x50);
  pFVar16 = ::FName::FName(&local_1390,"ListView.PinnedItemShadow");
  local_1508.Value = (FSlateBrush *)(*pcVar3)(pIVar15,*pFVar16);
  local_1508.bIsSet = true;
  local_1508.Getter._16_8_ = 0;
  local_1508.Getter._0_8_ = 0;
  local_1508.Getter._8_8_ = 0;
  pFVar34 = SImage::FArguments::Image((FArguments *)local_1768,&local_1508);
  FLLMScope::FLLMScope(&local_1754,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1768 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1600,&local_1768,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1370,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_1775);
  FMemScope::~FMemScope(&local_1600);
  FLLMScope::~FLLMScope(&local_1754);
  pTVar35 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1370,&local_13c0,pFVar34);
  pTVar7 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_1708 = pTVar35->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1700.ReferenceController = pTVar7;
  if ((SImage **)&pFVar19->_padding_ != &local_1708) {
    pFVar19->_padding_ = (longlong)local_1708;
    local_1708 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar19->_padding_,&local_1700);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1700.ReferenceController);
  pFVar36 = SOverlay::FArguments::operator+((FArguments *)local_16e8,pFVar19);
  FLLMScope::FLLMScope(local_1750,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_15f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_15f0,&local_15f8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1388,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_1774);
  FMemScope::~FMemScope(&local_15f0);
  FLLMScope::~FLLMScope(local_1750);
  pTVar37 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1388,&local_13d0,pFVar36);
  plVar42 = &this->_padding_;
  pTVar8 = (pTVar37->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar37->Object;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar42);
  }
  else {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar42);
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar9;
  this->_padding_ = (longlong)pTVar8;
  local_1688 = pSVar9;
  pTStack_1680 = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar42);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1388._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1370._Widget.SharedReferenceCount.ReferenceController);
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
            (local_13b0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13e8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1448._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1458.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430._Widget.SharedReferenceCount.ReferenceController);
  if (local_1540.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1540.TextData.Reference + 0x10))();
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
    pppuVar38 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar38 = local_60;
    }
    (*(code *)(*pppuVar38)[2])();
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
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_e78._Slots.AllocatorInstance.Data,local_e78._Slots.ArrayNum);
  if ((FSlotArguments *)local_e78._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e78._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1670);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_15e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_15e0->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_15d8->SharedReferenceCount).ReferenceController);
  return;
}

// OnMouseButtonDown @ 14d877780

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
OnMouseButtonDown(SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
                 FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar3;
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
    if ((this->OwnerListView).Object ==
        (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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
      if ((this->OwnerListView).Object ==
          (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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
      goto LAB_14d877864;
    }
  }
  bVar7 = false;
LAB_14d877864:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 14d8876e0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
SetPinnedItemEllipsesVisibility(SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object ==
      (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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
  if (pSVar1 == (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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

// SetPinnedItemVisibility @ 14d8877d0

EVisibility __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
SetPinnedItemVisibility(SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object ==
      (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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
    if (pSVar1 == (SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
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
    goto LAB_14d88788c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_14d88788c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

