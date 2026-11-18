// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 5

// operator() @ 14d0f15c0

FSlateBrush * __thiscall
`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::
<lambda_1>::operator()(void *this)

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

// Construct @ 14d0f6310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *param_3,int param_4,
          int param_5)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  ITableRow *pIVar3;
  code *pcVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  SHorizontalBox *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  bool bVar11;
  FSharedReferencer<1> FVar12;
  SListViewPinnedRowWidget *pSVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  bool bVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  SExpanderArrow *this_00;
  FName FVar20;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar21;
  FSlotArguments *pFVar22;
  FArguments *pFVar23;
  undefined8 *puVar24;
  ulong64 uVar25;
  FArguments *pFVar26;
  FSlot *pFVar27;
  FSizeParam *pFVar28;
  FSlot *pFVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  FText *pFVar32;
  TSharedRef<SWidget_const_,1> *pTVar33;
  TSharedRef<STextBlock,1> *pTVar34;
  TSharedRef<SHorizontalBox,1> *pTVar35;
  TSharedRef<SBorder,1> *pTVar36;
  FArguments *pFVar37;
  TSharedRef<SImage,1> *pTVar38;
  FArguments *pFVar39;
  SOverlay *pSVar40;
  SOverlay *pSVar41;
  undefined ***pppuVar42;
  FSlotArguments *pFVar43;
  TEnumAsByte<EVisibility::Private> TVar44;
  longlong *plVar45;
  undefined1 auStackY_17d8 [32];
  T0RequiredArgs local_17a8;
  T0RequiredArgs local_17a7;
  T0RequiredArgs local_17a6;
  T0RequiredArgs local_17a5;
  T0RequiredArgs local_17a4 [4];
  FArguments *local_17a0;
  int local_1798 [2];
  FLLMScope local_1790;
  FLLMScope local_178c;
  FLLMScope local_1788;
  FLLMScope local_1784;
  FLLMScope local_1780 [2];
  FName local_1778;
  undefined4 uStack_1770;
  uint uStack_176c;
  int local_1768 [2];
  SImage *local_1760;
  FSharedReferencer<1> local_1758;
  FName local_1750;
  FName local_1748;
  STextBlock *local_1740;
  FSharedReferencer<1> local_1738;
  FName local_1730;
  SBorder *local_1728;
  FSharedReferencer<1> local_1720;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1718;
  undefined1 local_1700 [8];
  ForAnyElementType local_16f8;
  int local_16f0;
  SListViewPinnedRowWidget *local_16e8;
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *local_16e0;
  FSharedReferencer<1> local_16d8;
  SWidget *local_16d0;
  TReferenceControllerBase<1> *pTStack_16c8;
  uchar local_16c0;
  undefined1 local_16bf;
  undefined1 local_16b8 [8];
  void *pvStack_16b0;
  undefined8 local_16a8;
  undefined8 local_16a0;
  undefined8 uStack_1698;
  undefined1 local_1690;
  undefined1 local_1688 [8];
  ForAnyElementType FStack_1680;
  ulonglong local_1678;
  longlong *local_1670;
  TReferenceControllerBase<1> *local_1668;
  undefined2 local_1660;
  undefined1 local_1658 [24];
  FSlot *local_1640;
  FName local_1638;
  FMemScope local_1630;
  FMemScope local_1628;
  FMemScope local_1620;
  FMemScope local_1618;
  FMemScope local_1610;
  TReferenceControllerBase<1> *local_1608;
  TSharedPtr<ITableRow,1> *local_1600;
  FName local_15f8;
  undefined8 local_15f0;
  FSharedReferencer<1> local_15e8;
  TSharedRef<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *local_15e0;
  undefined4 local_15d8 [2];
  undefined4 local_15d0 [2];
  FSlot *local_15c8;
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
  undefined8 *local_1238 [2];
  TReferenceControllerBase<1> *local_1228;
  undefined1 local_1208 [40];
  FSlotArgumentsMixin local_11e0;
  undefined1 local_1150 [16];
  FSharedReferencer<1> local_1140 [9];
  TOptional<FSizeParam> local_10f8;
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
  
  uStack_40 = 0x14d0f6332;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_17d8;
  bVar11 = false;
  bVar10 = false;
  bVar17 = false;
  local_1798[0] = 0;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  local_17a0 = (FArguments *)CONCAT44(local_17a0._4_4_,param_4);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1350 = (this->PinnedItemRow).Object;
  pTStack_1348 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar3;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar2;
  local_16e8 = this;
  local_1600 = param_2;
  local_15e0 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1348);
  local_16d8.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  local_16e0 = param_3->Object;
  if (local_16d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16d8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_16d8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView !=
      (TSharedPtr<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>,1> *)&local_16e0) {
    (this->OwnerListView).Object = local_16e0;
    local_16e0 = (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_16d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16d8.ReferenceController);
  local_1608 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar3 = param_2->Object;
  if (local_1608 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1608->SharedReferenceCount = (atomic<int>)((int)local_1608->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar3 != (ITableRow *)0x0) {
    pIVar18 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar18 + 0x50);
    pFVar19 = ::FName::FName(&local_15f8,"NoBrush");
    local_1520.Value = (FSlateBrush *)(*pcVar4)(pIVar18,*pFVar19,0,0);
    local_1520.bIsSet = true;
    local_1520.Getter._16_8_ = 0;
    local_1520.Getter._0_8_ = 0;
    local_1520.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)(pIVar3 + 1),&local_1520);
    TVar44 = EVisibility::Hidden.Value.Value;
    if (((TSharedPtr<SExpanderArrow,1> *)(pIVar3 + 99))->Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->
                          ((TSharedPtr<SExpanderArrow,1> *)(pIVar3 + 99));
      local_1590.bIsSet = true;
      local_1590.Getter._16_8_ = 0;
      local_1590.Getter._0_8_ = 0;
      local_1590.Getter._8_8_ = 0;
      local_1590.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar44.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_1590);
    }
    param_4 = (int)local_17a0;
  }
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1670);
  pFVar29 = (FSlot *)0x0;
  local_1570[1] = 1;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1570[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1558 = 0;
  (**(code **)(*local_1670 + 0x1c8))(local_1670,local_1570);
  FVar20 = (FName)SOverlay::FArguments::FArguments(&local_e60);
  uStack_1770 = 0;
  local_1778 = (FName)SetPinnedItemVisibility;
  lStack_13c0 = (ulonglong)uStack_176c << 0x20;
  local_13c8 = SetPinnedItemVisibility;
  local_1768[0] = param_5;
  local_1798[0] = param_4;
  local_1730 = FVar20;
  pTVar21 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1700
                       ,this,(pmf_a5b6b842 *)&local_13c8,local_1798,local_1768);
  local_1660 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1658,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar21);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1700,
             (FWriteAccessScope *)&local_14d0);
  if ((local_16f0 != 0) && (local_16f8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_16f8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_16f8,0,0,0x10);
    local_16f0 = 0;
  }
  if (local_14d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14d0.Accessor,&local_14d0);
  }
  if (local_16f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_16f8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1700);
  *(undefined1 *)((longlong)FVar20 + 0x88) = (undefined1)local_1660;
  *(undefined1 *)((longlong)FVar20 + 0x89) = local_1660._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar20 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1658);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1658);
  if ((void *)local_1658._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1658._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1658);
  pFVar22 = SOverlay::Slot((FSlotArguments *)local_1298,0);
  local_15b0 = 1;
  local_1598 = 0;
  local_15c0 = 0;
  uStack_15b8 = 0;
  local_15a8 = (undefined1  [8])0x0;
  pvStack_15a0 = (void *)0x0;
  pFVar22->_padding_ = 0;
  pFVar22->_padding_ = 0;
  *(undefined1 *)&pFVar22->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15a8);
  if (pvStack_15a0 != (void *)0x0) {
    FMemory::Free(pvStack_15a0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15a8);
  pFVar23 = SBorder::FArguments::FArguments(&local_9b0);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar23->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar23->_BorderImage).Getter,(FWriteAccessScope *)&local_14a0);
  local_1488 = &(pFVar23->_BorderImage).Getter.field_0x8;
  puVar24 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1488);
  if (puVar24 != (undefined8 *)0x0) {
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar24[4] = local_78;
    puVar24[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar42 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar42 = local_50;
      }
      (*(code *)**pppuVar42)();
    }
  }
  if (local_14a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14a0.Accessor,&local_14a0);
  }
  local_1690 = 1;
  (pFVar23->_Padding).bIsSet = true;
  local_1678 = 0;
  local_16a0 = 0;
  uStack_1698 = 0;
  local_1688 = (undefined1  [8])0x0;
  FStack_1680.Data = (FScriptContainerElement *)0x0;
  (pFVar23->_Padding).Value.Left = 0.0;
  (pFVar23->_Padding).Value.Top = 0.0;
  (pFVar23->_Padding).Value.Right = 0.0;
  (pFVar23->_Padding).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar23->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1688);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1688,
             (FWriteAccessScope *)&local_14b8);
  if (((int)local_1678 != 0) && (FStack_1680.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1680.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1680,0,0,0x10);
    local_1678 = local_1678 & 0xffffffff00000000;
  }
  if (local_14b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b8.Accessor,&local_14b8);
  }
  if (FStack_1680.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1680.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1688);
  pFVar26 = SHorizontalBox::FArguments::FArguments(&local_1068);
  pFVar27 = ::operator_new(0x58);
  local_15c8 = pFVar29;
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    local_15c8 = SHorizontalBox::FSlot::FSlot(pFVar27);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1150,(FSlot *)&local_15c8);
  pFVar28 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1340);
  TOptional<FSizeParam>::operator=(&local_10f8,pFVar28);
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
  local_15e8.ReferenceController = local_1668;
  if (local_1668 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1668->SharedReferenceCount = (atomic<int>)((int)local_1668->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1150._8_8_ = local_1670;
  local_15f0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1140,&local_15e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15e8.ReferenceController);
  local_1748 = (FName)SHorizontalBox::FArguments::operator+(pFVar26,(FSlotArguments *)local_1150);
  pFVar27 = ::operator_new(0x58);
  if (pFVar27 != (FSlot *)0x0) {
    *(undefined8 *)pFVar27 = 0;
    *(undefined8 *)&pFVar27->field_0x8 = 0;
    *(undefined8 *)&pFVar27->field_0x10 = 0;
    *(undefined8 *)&pFVar27->field_0x18 = 0;
    *(undefined8 *)&pFVar27->field_0x20 = 0;
    *(undefined8 *)&pFVar27->field_0x28 = 0;
    *(undefined8 *)&pFVar27->field_0x30 = 0;
    *(undefined8 *)&pFVar27->field_0x38 = 0;
    *(undefined8 *)&pFVar27->field_0x40 = 0;
    *(undefined8 *)&pFVar27->field_0x48 = 0;
    *(undefined8 *)&pFVar27->field_0x50 = 0;
    pFVar29 = SHorizontalBox::FSlot::FSlot(pFVar27);
  }
  local_1640 = pFVar29;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1238,(FSlot *)&local_1640);
  local_1550.Value = 1.0;
  local_1550.Getter._16_8_ = 0;
  local_1550.bIsSet = true;
  local_1550.Getter._0_8_ = 0;
  local_1550.Getter._8_8_ = 0;
  pFVar30 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1238,&local_1550);
  local_1750 = (FName)TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)&pFVar30->field_0x18,__real_40000000,
                                 __real_40000000,0.0,0.0);
  pFVar31 = STextBlock::FArguments::FArguments(&local_5d0);
  pFVar32 = FText::AsLocalizable_Advanced_LocText(&local_1530,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1460.Value,pFVar32);
  local_1460.bIsSet = true;
  local_1460.Getter._16_8_ = 0;
  local_1460.Getter._0_8_ = 0;
  local_1460.Getter._8_8_ = 0;
  pFVar31 = STextBlock::FArguments::Text(pFVar31,&local_1460);
  *(undefined1 *)((longlong)&pFVar31->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar31->_padding_,
             (FWriteAccessScope *)&local_1480);
  local_1468 = &pFVar31->_padding_;
  puVar24 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1468);
  FVar20 = local_15f8;
  if (puVar24 != (undefined8 *)0x0) {
    uStack_176c = local_1530._12_4_;
    local_1778 = (FName)SetPinnedItemEllipsesVisibility;
    uStack_1770 = 0;
    pTVar33 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13b8);
    FVar20 = (FName)(pTVar33->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar33->Object;
    if (FVar20 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar20 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar20 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar20 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar20 + 8) + 1);
      UNLOCK();
    }
    *puVar24 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar24 + 1) = (int)local_17a0;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar24[2] = uVar25;
    *puVar24 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFNamingTokenDataTreeItem___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar24[3] = pSVar5;
    *(FName *)(puVar24 + 4) = FVar20;
    if (FVar20 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar20 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar20 + 0xc) + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar17 = true;
    *(FName *)(puVar24 + 5) = local_1778;
    puVar24[6] = CONCAT44(uStack_176c,uStack_1770);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar20);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar20);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13b8.SharedReferenceCount.ReferenceController);
  }
  if (local_1480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1480.Accessor,&local_1480);
  }
  FLLMScope::FLLMScope(&local_1790,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1638 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1630,&local_1638,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_13e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_17a8);
  FMemScope::~FMemScope(&local_1630);
  FLLMScope::~FLLMScope(&local_1790);
  pTVar34 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e8,&local_1378,pFVar31);
  FVar20 = local_1750;
  pTVar2 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1740 = pTVar34->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1738.ReferenceController = pTVar2;
  if ((STextBlock **)((longlong)local_1750 + 8) != &local_1740) {
    *(STextBlock **)((longlong)local_1750 + 8) = local_1740;
    local_1740 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1750 + 0x10),&local_1738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738.ReferenceController);
  pFVar26 = SHorizontalBox::FArguments::operator+((FArguments *)local_1748,(FSlotArguments *)FVar20)
  ;
  FLLMScope::FLLMScope(&local_178c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1748 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1748,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1400,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_17a7);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_178c);
  pTVar35 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1400,&local_1388,pFVar26);
  pTVar6 = (pTVar35->SharedReferenceCount).ReferenceController;
  pSVar7 = pTVar35->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_16d0 = (pFVar23->_Content).Widget.Object;
  pTStack_16c8 = (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar23->_Content).Widget.Object = (SWidget *)pSVar7;
  (pFVar23->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_16c8);
  FLLMScope::FLLMScope(&local_1788,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1750 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_1750,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1418,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_17a6);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(&local_1788);
  pTVar36 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1418,&local_1398,pFVar23);
  pTVar8 = (pTVar36->SharedReferenceCount).ReferenceController;
  local_1728 = pTVar36->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1720.ReferenceController = pTVar8;
  if ((SBorder **)&pFVar22->_padding_ != &local_1728) {
    pFVar22->_padding_ = (longlong)local_1728;
    local_1728 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar22->_padding_,&local_1720);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720.ReferenceController);
  local_17a0 = SOverlay::FArguments::operator+((FArguments *)local_1730,pFVar22);
  pFVar22 = SOverlay::Slot((FSlotArguments *)local_12f8,0);
  plVar45 = &pFVar22->_padding_;
  if ((longlong *)local_15d8 != plVar45) {
    *(undefined4 *)plVar45 = 0;
    *(undefined1 *)((longlong)&pFVar22->_padding_ + 4) = 1;
  }
  pFVar43 = (FSlotArguments *)0x0;
  if (plVar45 != (longlong *)0x0) {
    pFVar43 = pFVar22;
  }
  if ((longlong *)local_15d0 != &pFVar43->_padding_) {
    *(undefined4 *)&pFVar43->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar43->_padding_ + 4) = 1;
  }
  pFVar22 = (FSlotArguments *)0x0;
  if (pFVar43 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar22 = pFVar43;
  }
  pFVar37 = SImage::FArguments::FArguments(&local_c58);
  local_16c0 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_16bf = 1;
  local_16a8 = 0;
  local_16b8 = (undefined1  [8])0x0;
  pvStack_16b0 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar37->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar37->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar37->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16b8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_16b8);
  if (pvStack_16b0 != (void *)0x0) {
    FMemory::Free(pvStack_16b0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16b8);
  pIVar18 = FAppStyle::Get();
  pcVar4 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1358,"ListView.PinnedItemShadow");
  local_14f8.Value = (FSlateBrush *)(*pcVar4)(pIVar18,*pFVar19);
  local_14f8.bIsSet = true;
  local_14f8.Getter._16_8_ = 0;
  local_14f8.Getter._0_8_ = 0;
  local_14f8.Getter._8_8_ = 0;
  pFVar37 = SImage::FArguments::Image(pFVar37,&local_14f8);
  FLLMScope::FLLMScope(&local_1784,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1730 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1618,&local_1730,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1430,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_17a5);
  FMemScope::~FMemScope(&local_1618);
  FLLMScope::~FLLMScope(&local_1784);
  pTVar38 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1430,&local_13a8,pFVar37);
  pTVar9 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_1760 = pTVar38->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1758.ReferenceController = pTVar9;
  if ((SImage **)&pFVar22->_padding_ != &local_1760) {
    pFVar22->_padding_ = (longlong)local_1760;
    local_1760 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar22->_padding_,&local_1758);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ReferenceController);
  pFVar39 = SOverlay::FArguments::operator+(local_17a0,pFVar22);
  FLLMScope::FLLMScope(local_1780,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1778 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1610,&local_1778,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1718,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_17a4);
  FMemScope::~FMemScope(&local_1610);
  FLLMScope::~FLLMScope(local_1780);
  pSVar40 = TSharedPtr<SOverlay,1>::operator->(&local_1718._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar40,(FSlateBaseNamedArgs *)pFVar39);
  pSVar40 = local_1718._Widget.Object;
  SOverlay::Construct(local_1718._Widget.Object,pFVar39);
  pSVar41 = TSharedPtr<SOverlay,1>::operator->(&local_1718._Widget);
  if ((pSVar41->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar41->_padding_ + 0x228))(pSVar41);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_14d0f71bd;
  }
  bVar16 = 0x20;
LAB_14d0f71bd:
  *(byte *)&pSVar41->_padding_ = (byte)pSVar41->_padding_ & 0xdf;
  *(byte *)&pSVar41->_padding_ = (byte)pSVar41->_padding_ | bVar16;
  pSVar41 = TSharedPtr<SOverlay,1>::operator->(&local_1718._Widget);
  pbVar1 = (byte *)((longlong)&pSVar41->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1718._Widget.Object == (SOverlay *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar12.ReferenceController = local_1718._Widget.SharedReferenceCount.ReferenceController;
  local_1718._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1718._Widget.Object = (SOverlay *)0x0;
  if ((pSVar40 == (SOverlay *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar13 = local_16e8;
  plVar45 = &local_16e8->_padding_;
  if (FVar12.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar45);
  }
  else {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar45);
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1368 = pSVar13->_padding_;
  pTStack_1360 = (TReferenceControllerBase<1> *)pSVar13->_padding_;
  pSVar13->_padding_ = (longlong)pSVar40;
  pSVar13->_padding_ = (longlong)FVar12.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1360);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar45);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1718._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1418._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1388.SharedReferenceCount.ReferenceController);
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
            (&local_11e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1208);
  if ((void *)local_1208._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1208._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1208);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1228);
  if (local_1238[0] != (undefined8 *)0x0) {
    (**(code **)*local_1238[0])(local_1238[0],1);
  }
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)local_1150);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data,local_1068._Slots.ArrayNum);
  if ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1068._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1068);
  if (local_78 != (code *)0x0) {
    pppuVar42 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar42 = local_50;
    }
    (*(code *)(*pppuVar42)[2])();
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
            ((FSlotArguments *)local_e60._Slots.AllocatorInstance.Data,local_e60._Slots.ArrayNum);
  if ((FSlotArguments *)local_e60._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e60._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1668);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1608);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1600->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_15e0->SharedReferenceCount).ReferenceController);
  return;
}

// OnMouseButtonDown @ 14d10fbc0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *pSVar3;
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
    if ((this->OwnerListView).Object == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
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
      if ((this->OwnerListView).Object == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0)
      {
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
      goto LAB_14d10fca4;
    }
  }
  bVar7 = false;
LAB_14d10fca4:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 14d11a6c0

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::
SetPinnedItemEllipsesVisibility(SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
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
  if (pSVar1 == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
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

// SetPinnedItemVisibility @ 14d11a7b0

EVisibility __thiscall
SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_>::SListViewPinnedRowWidget::
SetPinnedItemVisibility(SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
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
    if (pSVar1 == (SListView<TSharedPtr<FNamingTokenDataTreeItem,1>_> *)0x0) {
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
    goto LAB_14d11a86c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_14d11a86c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

