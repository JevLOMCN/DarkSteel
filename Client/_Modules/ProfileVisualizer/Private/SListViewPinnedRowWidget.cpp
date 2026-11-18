// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 5

// operator() @ 148d59840

FSlateBrush * __thiscall
`SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>
::operator()(void *this)

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

// Construct @ 148d665a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITableRow *pIVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  SHorizontalBox *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  STableRow<TSharedPtr<FVisualizerEvent,1>_> *pSVar12;
  FSharedReferencer<1> FVar13;
  SListViewPinnedRowWidget *pSVar14;
  bool bVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  ISlateStyle *pIVar19;
  FName *pFVar20;
  SExpanderArrow *this_00;
  FName FVar21;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar22;
  FArguments *this_01;
  undefined8 *puVar23;
  ulong64 uVar24;
  FArguments *pFVar25;
  FSlot *pFVar26;
  FSizeParam *pFVar27;
  FSlotArguments *pFVar28;
  FArguments *pFVar29;
  FText *pFVar30;
  TSharedRef<SWidget_const_,1> *pTVar31;
  TSharedRef<STextBlock,1> *pTVar32;
  TSharedRef<SHorizontalBox,1> *pTVar33;
  TSharedRef<SBorder,1> *pTVar34;
  FSlotArguments *pFVar35;
  FArguments *pFVar36;
  TSharedRef<SImage,1> *pTVar37;
  FArguments *pFVar38;
  SOverlay *pSVar39;
  SOverlay *pSVar40;
  undefined ***pppuVar41;
  FSlotArguments *pFVar42;
  TEnumAsByte<EVisibility::Private> TVar43;
  FSlotArguments *pFVar44;
  int iVar45;
  longlong *plVar46;
  undefined1 auStackY_17e8 [32];
  T0RequiredArgs local_17b8;
  T0RequiredArgs local_17b7;
  T0RequiredArgs local_17b6;
  T0RequiredArgs local_17b5;
  T0RequiredArgs local_17b4 [4];
  int local_17b0;
  int local_17a8 [2];
  FLLMScope local_17a0;
  FLLMScope local_179c;
  FLLMScope local_1798;
  FLLMScope local_1794;
  FLLMScope local_1790 [2];
  FName local_1788;
  undefined4 uStack_1780;
  uint uStack_177c;
  int local_1778 [2];
  STextBlock *local_1770;
  FSharedReferencer<1> local_1768;
  FName local_1760;
  SBorder *local_1758;
  FSharedReferencer<1> local_1750;
  FName local_1748;
  SImage *local_1740;
  FSharedReferencer<1> local_1738;
  FName local_1730;
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_1728;
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> local_1718;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1708;
  undefined1 local_16f0 [8];
  ForAnyElementType local_16e8;
  int local_16e0;
  SWidget *local_16d8;
  TReferenceControllerBase<1> *pTStack_16d0;
  SListViewPinnedRowWidget *local_16c8;
  FName local_16c0;
  undefined4 uStack_16b8;
  undefined4 uStack_16b4;
  uchar local_16b0;
  undefined1 local_16af;
  undefined1 local_16a8 [8];
  void *pvStack_16a0;
  undefined8 local_1698;
  undefined8 local_1690;
  undefined8 uStack_1688;
  undefined1 local_1680;
  undefined1 local_1678 [8];
  ForAnyElementType FStack_1670;
  ulonglong local_1668;
  longlong *local_1660;
  TReferenceControllerBase<1> *local_1658;
  undefined2 local_1650;
  undefined1 local_1648 [24];
  FSlotArguments *local_1630;
  FMemScope local_1628;
  FMemScope local_1620;
  FMemScope local_1618;
  FMemScope local_1610;
  FMemScope local_1608;
  TSharedPtr<ITableRow,1> *local_1600;
  TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *local_15f8;
  undefined8 local_15f0;
  FSharedReferencer<1> local_15e8;
  FName local_15e0;
  undefined4 local_15d8 [2];
  undefined4 local_15d0 [2];
  FSlotArguments *local_15c8;
  undefined8 local_15c0;
  undefined8 uStack_15b8;
  undefined1 local_15b0;
  undefined1 local_15a8 [8];
  void *pvStack_15a0;
  undefined8 local_1598;
  TAttribute<EVisibility> local_1590;
  uchar local_1570 [8];
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  TAttribute<float> local_1550;
  FText local_1530;
  TAttribute<FSlateBrush_const_*> local_1520;
  TAttribute<FSlateBrush_const_*> local_14f8;
  FDestructionSentinel local_14d0;
  FDestructionSentinel local_14b8;
  FDestructionSentinel local_14a0;
  undefined1 *local_1488;
  FDestructionSentinel local_1480;
  longlong *local_1468;
  TAttribute<FText> local_1460;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1430;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1418;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1400;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_13e8;
  code *local_13c8;
  longlong lStack_13c0;
  TSharedRef<SWidget_const_,1> local_13b8;
  TSharedRef<SImage,1> local_13a8;
  TSharedRef<SBorder,1> local_1398;
  TSharedRef<SHorizontalBox,1> local_1388;
  TSharedRef<STextBlock,1> local_1378;
  longlong local_1368;
  TReferenceControllerBase<1> *pTStack_1360;
  FName local_1358;
  ITableRow *local_1350;
  TReferenceControllerBase<1> *pTStack_1348;
  undefined1 local_1340 [16];
  undefined1 local_1330 [32];
  undefined1 local_1310 [24];
  undefined1 local_12f8 [56];
  void *local_12c0;
  undefined1 local_1298 [56];
  void *local_1260;
  undefined8 *local_1238;
  longlong *local_1230;
  FSharedReferencer<1> local_1228 [4];
  undefined1 local_1208 [40];
  FSlotArgumentsMixin local_11e0;
  undefined8 *local_1150 [2];
  TReferenceControllerBase<1> *local_1140;
  undefined1 local_1120 [40];
  FSlotArgumentsMixin local_10f8;
  FArguments local_1068;
  FArguments local_e60;
  FArguments local_c58;
  FArguments local_9b0;
  FArguments local_5d0;
  code *local_78;
  undefined **local_68;
  SListViewPinnedRowWidget *local_60;
  undefined ***local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x148d665c2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_17e8;
  bVar11 = false;
  bVar10 = false;
  bVar18 = false;
  local_17a8[0] = 0;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  local_17b0 = param_4;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1350 = (this->PinnedItemRow).Object;
  pTStack_1348 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar3;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar2;
  local_16c8 = this;
  local_1600 = param_2;
  local_15f8 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1348);
  local_1718.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  local_1718.Object = param_3->Object;
  if (local_1718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView != &local_1718) {
    (this->OwnerListView).Object = local_1718.Object;
    local_1718.Object = (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_1718.SharedReferenceCount);
  }
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_1718);
  local_1728.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_1728.Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)param_2->Object;
  if (local_1728.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1728.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1728.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar45 = param_4;
  if (local_1728.Object != (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    if ((local_1728.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pSVar12 = local_1728.Object;
    pIVar19 = FAppStyle::Get();
    pcVar9 = *(code **)((longlong)*pIVar19 + 0x50);
    pFVar20 = ::FName::FName(&local_15e0,"NoBrush");
    local_1520.Value = (FSlateBrush *)(*pcVar9)(pIVar19,*pFVar20,0,0);
    local_1520.bIsSet = true;
    local_1520.Getter._16_8_ = 0;
    local_1520.Getter._0_8_ = 0;
    local_1520.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)&pSVar12->_padding_,&local_1520);
    if ((local_1728.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    TVar43 = EVisibility::Hidden.Value.Value;
    iVar45 = local_17b0;
    if (((local_1728.Object)->ExpanderArrowWidget).Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->(&(local_1728.Object)->ExpanderArrowWidget);
      local_1590.bIsSet = true;
      local_1590.Getter._0_8_ = 0;
      local_1590.Getter._8_8_ = 0;
      local_1590.Getter._16_8_ = 0;
      local_1590.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar43.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_1590);
      iVar45 = local_17b0;
    }
  }
  pFVar44 = (FSlotArguments *)0x0;
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1660);
  local_1570[1] = 1;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1570[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1558 = 0;
  (**(code **)(*local_1660 + 0x1c8))(local_1660,local_1570);
  FVar21 = (FName)SOverlay::FArguments::FArguments(&local_1068);
  uStack_1780 = 0;
  local_1788 = (FName)SetPinnedItemVisibility;
  lStack_13c0 = (ulonglong)uStack_177c << 0x20;
  local_13c8 = SetPinnedItemVisibility;
  local_1778[0] = param_5;
  local_17a8[0] = iVar45;
  local_1730 = FVar21;
  pTVar22 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_16f0
                       ,this,(pmf_6bb36b72 *)&local_13c8,local_17a8,local_1778);
  local_1650 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1648,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar22);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16f0,
             (FWriteAccessScope *)&local_14d0);
  if ((local_16e0 != 0) && (local_16e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_16e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_16e8,0,0,0x10);
    local_16e0 = 0;
  }
  if (local_14d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14d0.Accessor,&local_14d0);
  }
  if (local_16e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16f0);
  *(undefined1 *)((longlong)FVar21 + 0x88) = (undefined1)local_1650;
  *(undefined1 *)((longlong)FVar21 + 0x89) = local_1650._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar21 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1648);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1648);
  if ((void *)local_1648._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1648._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1648);
  local_1788 = (FName)SOverlay::Slot((FSlotArguments *)local_1298,0);
  local_15b0 = 1;
  local_1598 = 0;
  local_15c0 = 0;
  uStack_15b8 = 0;
  local_15a8 = (undefined1  [8])0x0;
  pvStack_15a0 = (void *)0x0;
  *(longlong *)((longlong)local_1788 + 0x18) = 0;
  *(longlong *)((longlong)local_1788 + 0x20) = 0;
  *(undefined1 *)((longlong)local_1788 + 0x28) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_1788 + 0x30),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15a8);
  if (pvStack_15a0 != (void *)0x0) {
    FMemory::Free(pvStack_15a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15a8);
  this_01 = SBorder::FArguments::FArguments(&local_9b0);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (this_01->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this_01->_BorderImage).Getter,(FWriteAccessScope *)&local_14a0);
  local_1488 = &(this_01->_BorderImage).Getter.field_0x8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1488);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar23[4] = local_78;
    puVar23[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar41 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar41 = local_50;
      }
      (*(code *)**pppuVar41)();
    }
  }
  if (local_14a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14a0.Accessor,&local_14a0);
  }
  local_1748 = (FName)SBorder::FArguments::Padding(this_01,0.0);
  pFVar25 = SHorizontalBox::FArguments::FArguments(&local_e60);
  pFVar26 = ::operator_new(0x58);
  local_15c8 = pFVar44;
  if (pFVar26 != (FSlot *)0x0) {
    *(undefined8 *)pFVar26 = 0;
    *(undefined8 *)&pFVar26->field_0x8 = 0;
    *(undefined8 *)&pFVar26->field_0x10 = 0;
    *(undefined8 *)&pFVar26->field_0x18 = 0;
    *(undefined8 *)&pFVar26->field_0x20 = 0;
    *(undefined8 *)&pFVar26->field_0x28 = 0;
    *(undefined8 *)&pFVar26->field_0x30 = 0;
    *(undefined8 *)&pFVar26->field_0x38 = 0;
    *(undefined8 *)&pFVar26->field_0x40 = 0;
    *(undefined8 *)&pFVar26->field_0x48 = 0;
    *(undefined8 *)&pFVar26->field_0x50 = 0;
    local_15c8 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1238,(FSlot *)&local_15c8);
  pFVar27 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1340);
  TOptional<FSizeParam>::operator=(&local_11e0._SizeParam,pFVar27);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1310);
  if ((void *)local_1310._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1310._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1310);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1330);
  if ((void *)local_1330._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1330._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1330);
  local_15e8.ReferenceController = local_1658;
  if (local_1658 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1658->SharedReferenceCount = (atomic<int>)((int)local_1658->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1230 = local_1660;
  local_15f0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1228,&local_15e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e8.ReferenceController);
  local_1760 = (FName)SHorizontalBox::FArguments::operator+(pFVar25,(FSlotArguments *)&local_1238);
  pFVar26 = ::operator_new(0x58);
  local_1630 = pFVar44;
  if (pFVar26 != (FSlot *)0x0) {
    *(undefined8 *)pFVar26 = 0;
    *(undefined8 *)&pFVar26->field_0x8 = 0;
    *(undefined8 *)&pFVar26->field_0x10 = 0;
    *(undefined8 *)&pFVar26->field_0x18 = 0;
    *(undefined8 *)&pFVar26->field_0x20 = 0;
    *(undefined8 *)&pFVar26->field_0x28 = 0;
    *(undefined8 *)&pFVar26->field_0x30 = 0;
    *(undefined8 *)&pFVar26->field_0x38 = 0;
    *(undefined8 *)&pFVar26->field_0x40 = 0;
    *(undefined8 *)&pFVar26->field_0x48 = 0;
    *(undefined8 *)&pFVar26->field_0x50 = 0;
    local_1630 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1150,(FSlot *)&local_1630);
  local_1550.Value = 1.0;
  local_1550.Getter._16_8_ = 0;
  local_1550.bIsSet = true;
  local_1550.Getter._0_8_ = 0;
  local_1550.Getter._8_8_ = 0;
  pFVar28 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1150,&local_1550);
  uStack_1688 = _UNK_1513b2f08;
  local_1690 = ___xmm_00000000000000004000000040000000;
  local_1680 = 1;
  pFVar28->field_0x28 = 1;
  local_1668 = 0;
  local_1678 = (undefined1  [8])0x0;
  FStack_1670.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar28->field_0x18 = local_1690;
  *(undefined8 *)&pFVar28->field_0x20 = uStack_1688;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar28->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1678);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1678,
             (FWriteAccessScope *)&local_14b8);
  if (((int)local_1668 != 0) && (FStack_1670.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1670.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1670,0,0,0x10);
    local_1668 = local_1668 & 0xffffffff00000000;
  }
  if (local_14b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b8.Accessor,&local_14b8);
  }
  if (FStack_1670.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1670.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1678);
  if (&pFVar28->field_0x18 != (undefined1 *)0x0) {
    pFVar44 = pFVar28;
  }
  pFVar29 = STextBlock::FArguments::FArguments(&local_5d0);
  pFVar30 = FText::AsLocalizable_Advanced_LocText(&local_1530,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1460.Value,pFVar30);
  local_1460.bIsSet = true;
  local_1460.Getter._16_8_ = 0;
  local_1460.Getter._0_8_ = 0;
  local_1460.Getter._8_8_ = 0;
  pFVar29 = STextBlock::FArguments::Text(pFVar29,&local_1460);
  *(undefined1 *)((longlong)&pFVar29->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_padding_,
             (FWriteAccessScope *)&local_1480);
  local_1468 = &pFVar29->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1468);
  FVar21 = local_15e0;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_16b4 = local_1530._12_4_;
    local_16c0 = (FName)SetPinnedItemEllipsesVisibility;
    uStack_16b8 = 0;
    pTVar31 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13b8);
    FVar21 = (FName)(pTVar31->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar31->Object;
    if (FVar21 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar21 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar21 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar21 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar21 + 8) + 1);
      UNLOCK();
    }
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar23 + 1) = local_17b0;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFVisualizerEvent___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar23[3] = pSVar4;
    *(FName *)(puVar23 + 4) = FVar21;
    if (FVar21 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar21 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar21 + 0xc) + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar18 = true;
    *(FName *)(puVar23 + 5) = local_16c0;
    puVar23[6] = CONCAT44(uStack_16b4,uStack_16b8);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar21);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar21);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13b8.SharedReferenceCount.ReferenceController);
  }
  if (local_1480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1480.Accessor,&local_1480);
  }
  FLLMScope::FLLMScope(&local_17a0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_16c0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_13e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_17b8);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_17a0);
  pTVar32 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e8,&local_1378,pFVar29);
  pTVar2 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1770 = pTVar32->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1768.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar44->field_0x8 != &local_1770) {
    *(STextBlock **)&pFVar44->field_0x8 = local_1770;
    local_1770 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar44->field_0x10,&local_1768);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1768.ReferenceController);
  pFVar25 = SHorizontalBox::FArguments::operator+((FArguments *)local_1760,pFVar44);
  FLLMScope::FLLMScope(&local_179c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1760 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_1760,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1400,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_17b7);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(&local_179c);
  pTVar33 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1400,&local_1388,pFVar25);
  FVar21 = local_1748;
  pTVar5 = (pTVar33->SharedReferenceCount).ReferenceController;
  pSVar6 = pTVar33->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_16d8 = (((TAlwaysValidWidget *)((longlong)local_1748 + 0x1f8))->Widget).Object;
  pTStack_16d0 = ((FSharedReferencer<1> *)((longlong)local_1748 + 0x200))->ReferenceController;
  (((TAlwaysValidWidget *)((longlong)local_1748 + 0x1f8))->Widget).Object = (SWidget *)pSVar6;
  ((FSharedReferencer<1> *)((longlong)local_1748 + 0x200))->ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_16d0);
  FLLMScope::FLLMScope(&local_1798,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1748 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1618,&local_1748,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1418,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_17b6);
  FMemScope::~FMemScope(&local_1618);
  FLLMScope::~FLLMScope(&local_1798);
  pTVar34 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1418,&local_1398,(FArguments *)FVar21);
  FVar21 = local_1788;
  pTVar7 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1758 = pTVar34->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1750.ReferenceController = pTVar7;
  if ((SBorder **)((longlong)local_1788 + 8) != &local_1758) {
    *(SBorder **)((longlong)local_1788 + 8) = local_1758;
    local_1758 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1788 + 0x10),&local_1750);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1750.ReferenceController);
  local_1788 = (FName)SOverlay::FArguments::operator+
                                ((FArguments *)local_1730,(FSlotArguments *)FVar21);
  pFVar35 = SOverlay::Slot((FSlotArguments *)local_12f8,0);
  plVar46 = &pFVar35->_padding_;
  if ((longlong *)local_15d8 != plVar46) {
    *(undefined4 *)plVar46 = 0;
    *(undefined1 *)((longlong)&pFVar35->_padding_ + 4) = 1;
  }
  pFVar42 = (FSlotArguments *)0x0;
  if (plVar46 != (longlong *)0x0) {
    pFVar42 = pFVar35;
  }
  if ((longlong *)local_15d0 != &pFVar42->_padding_) {
    *(undefined4 *)&pFVar42->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar42->_padding_ + 4) = 1;
  }
  pFVar35 = (FSlotArguments *)0x0;
  if (pFVar42 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar35 = pFVar42;
  }
  pFVar36 = SImage::FArguments::FArguments(&local_c58);
  local_16b0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_16af = 1;
  local_1698 = 0;
  local_16a8 = (undefined1  [8])0x0;
  pvStack_16a0 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar36->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar36->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar36->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16a8);
  if (pvStack_16a0 != (void *)0x0) {
    FMemory::Free(pvStack_16a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16a8);
  pIVar19 = FAppStyle::Get();
  pcVar9 = *(code **)((longlong)*pIVar19 + 0x50);
  pFVar20 = ::FName::FName(&local_1358,"ListView.PinnedItemShadow");
  local_14f8.Value = (FSlateBrush *)(*pcVar9)(pIVar19,*pFVar20);
  local_14f8.bIsSet = true;
  local_14f8.Getter._16_8_ = 0;
  local_14f8.Getter._0_8_ = 0;
  local_14f8.Getter._8_8_ = 0;
  pFVar36 = SImage::FArguments::Image(pFVar36,&local_14f8);
  FLLMScope::FLLMScope(&local_1794,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1730 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1610,&local_1730,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1430,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_17b5);
  FMemScope::~FMemScope(&local_1610);
  FLLMScope::~FLLMScope(&local_1794);
  pTVar37 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1430,&local_13a8,pFVar36);
  pTVar8 = (pTVar37->SharedReferenceCount).ReferenceController;
  local_1740 = pTVar37->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1738.ReferenceController = pTVar8;
  if ((SImage **)&pFVar35->_padding_ != &local_1740) {
    pFVar35->_padding_ = (longlong)local_1740;
    local_1740 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar35->_padding_,&local_1738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738.ReferenceController);
  pFVar38 = SOverlay::FArguments::operator+((FArguments *)local_1788,pFVar35);
  FLLMScope::FLLMScope(local_1790,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1788 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1608,&local_1788,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1708,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_17b4);
  FMemScope::~FMemScope(&local_1608);
  FLLMScope::~FLLMScope(local_1790);
  pSVar39 = TSharedPtr<SOverlay,1>::operator->(&local_1708._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar39,(FSlateBaseNamedArgs *)pFVar38);
  pSVar39 = local_1708._Widget.Object;
  SOverlay::Construct(local_1708._Widget.Object,pFVar38);
  pSVar40 = TSharedPtr<SOverlay,1>::operator->(&local_1708._Widget);
  if ((pSVar40->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar40->_padding_ + 0x228))(pSVar40);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_148d674d2;
  }
  bVar17 = 0x20;
LAB_148d674d2:
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ & 0xdf;
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ | bVar17;
  pSVar40 = TSharedPtr<SOverlay,1>::operator->(&local_1708._Widget);
  pbVar1 = (byte *)((longlong)&pSVar40->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1708._Widget.Object == (SOverlay *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar13.ReferenceController = local_1708._Widget.SharedReferenceCount.ReferenceController;
  local_1708._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1708._Widget.Object = (SOverlay *)0x0;
  if ((pSVar39 == (SOverlay *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pSVar14 = local_16c8;
  plVar46 = &local_16c8->_padding_;
  if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar46);
  }
  else {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar46);
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1368 = pSVar14->_padding_;
  pTStack_1360 = (TReferenceControllerBase<1> *)pSVar14->_padding_;
  pSVar14->_padding_ = (longlong)pSVar39;
  pSVar14->_padding_ = (longlong)FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1360);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar46);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1708._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_13a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1430._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_c58);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_12f8 + 0x30));
  if (local_12c0 != (void *)0x0) {
    FMemory::Free(local_12c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_12f8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_12f8._16_8_);
  if ((undefined8 *)local_12f8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_12f8._0_8_)(local_12f8._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_1398);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1418._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_1388);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1400._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13e8._Widget.SharedReferenceCount.ReferenceController);
  if (local_1530.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1530.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5d0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_10f8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1120);
  if ((void *)local_1120._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1120._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1120);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1140);
  if (local_1150[0] != (undefined8 *)0x0) {
    (**(code **)*local_1150[0])(local_1150[0],1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_11e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1208);
  if ((void *)local_1208._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1208._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1208);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1228[0].ReferenceController);
  if (local_1238 != (undefined8 *)0x0) {
    (**(code **)*local_1238)(local_1238,1);
  }
  SHorizontalBox::FArguments::~FArguments(&local_e60);
  if (local_78 != (code *)0x0) {
    pppuVar41 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar41 = local_50;
    }
    (*(code *)(*pppuVar41)[2])();
  }
  SBorder::FArguments::~FArguments(&local_9b0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1298 + 0x30));
  if (local_1260 != (void *)0x0) {
    FMemory::Free(local_1260);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1298 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1298._16_8_);
  if ((undefined8 *)local_1298._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1298._0_8_)(local_1298._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data,local_1068._Slots.ArrayNum);
  if ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1068._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1068);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1658);
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_1728);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1600->SharedReferenceCount).ReferenceController);
  TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(local_15f8);
  return;
}

// OnMouseButtonDown @ 148d873c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FVisualizerEvent,1>_> *pSVar3;
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
    if ((this->OwnerListView).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
      if ((this->OwnerListView).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
      goto LAB_148d874a4;
    }
  }
  bVar7 = false;
LAB_148d874a4:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 148d913e0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::
SetPinnedItemEllipsesVisibility(SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<FVisualizerEvent,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
  if (pSVar1 == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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

// SetPinnedItemVisibility @ 148d914d0

EVisibility __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::SListViewPinnedRowWidget::SetPinnedItemVisibility
          (SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<FVisualizerEvent,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
    if (pSVar1 == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
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
    goto LAB_148d9158c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_148d9158c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

