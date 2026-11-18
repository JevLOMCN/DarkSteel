// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// operator() @ 146997120

FSlateBrush * __thiscall
`SListView<UObject_*>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>::operator()
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

// Construct @ 1469ad9c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SListView<UObject_*>::SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<UObject_*>,1> *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  ITableRow *pIVar2;
  code *pcVar3;
  SWidget *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ISlateStyle *pIVar13;
  FName *pFVar14;
  SExpanderArrow *this_00;
  FName FVar15;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar16;
  FArguments *pFVar17;
  undefined8 *puVar18;
  ulong64 uVar19;
  FArguments *pFVar20;
  FSlot *pFVar21;
  FSizeParam *pFVar22;
  FSlotArguments *pFVar23;
  FArguments *pFVar24;
  FText *pFVar25;
  TSharedRef<SWidget_const_,1> *pTVar26;
  TSharedRef<STextBlock,1> *pTVar27;
  TSharedRef<SHorizontalBox,1> *pTVar28;
  TSharedRef<SBorder,1> *pTVar29;
  FSlotArguments *pFVar30;
  FArguments *pFVar31;
  TSharedRef<SImage,1> *pTVar32;
  FArguments *pFVar33;
  TSharedRef<SOverlay,1> *pTVar34;
  undefined ***pppuVar35;
  FSlotArguments *pFVar36;
  TEnumAsByte<EVisibility::Private> TVar37;
  int iVar38;
  FSlotArguments *pFVar39;
  TReferenceControllerBase<1> *pTVar40;
  undefined1 auStackY_1818 [32];
  T0RequiredArgs local_17e8;
  T0RequiredArgs local_17e7;
  T0RequiredArgs local_17e6;
  T0RequiredArgs local_17e5;
  T0RequiredArgs local_17e4 [4];
  int local_17e0;
  FLLMScope local_17dc;
  FLLMScope local_17d8;
  FLLMScope local_17d4;
  FLLMScope local_17d0;
  FLLMScope local_17cc;
  FSlotArguments *local_17c8;
  int local_17c0 [2];
  FArguments *local_17b8;
  FMemScope local_17b0;
  FName local_17a8;
  STextBlock *local_17a0;
  FSharedReferencer<1> local_1798;
  SBorder *local_1790;
  FSharedReferencer<1> local_1788;
  SImage *local_1780;
  FSharedReferencer<1> local_1778;
  code *local_1770;
  FSharedReferencer<1> FStack_1768;
  undefined1 local_1760 [8];
  ForAnyElementType local_1758;
  int local_1750;
  FName local_1748;
  SListView<UObject_*> *local_1740;
  FSharedReferencer<1> local_1738;
  TReferenceControllerBase<1> *local_1730;
  uchar local_1728;
  undefined1 local_1727;
  undefined1 local_1720 [8];
  void *pvStack_1718;
  undefined8 local_1710;
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined1 local_16f8;
  undefined1 local_16f0 [8];
  ForAnyElementType FStack_16e8;
  ulonglong local_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined1 local_16c8;
  undefined1 local_16c0 [8];
  ForAnyElementType FStack_16b8;
  ulonglong local_16b0;
  FName local_16a8;
  undefined4 uStack_16a0;
  uint uStack_169c;
  SHorizontalBox *local_1698;
  TReferenceControllerBase<1> *pTStack_1690;
  longlong *local_1688;
  TReferenceControllerBase<1> *local_1680;
  undefined2 local_1678;
  undefined1 local_1670 [24];
  undefined4 local_1658 [2];
  FSlotArguments *local_1650;
  FName local_1648;
  TReferenceControllerBase<1> *local_1640;
  FMemScope local_1638;
  FName local_1630;
  FMemScope local_1628;
  FMemScope local_1620;
  FMemScope local_1618;
  FName local_1610;
  TSharedPtr<ITableRow,1> *local_1608;
  undefined4 local_1600 [2];
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
  TSharedRef<SWidget,1> local_1568;
  FText local_1558;
  TAttribute<FSlateBrush_const_*> local_1548;
  TAttribute<FSlateBrush_const_*> local_1520;
  FDestructionSentinel local_14f8;
  FDestructionSentinel local_14e0;
  FDestructionSentinel local_14c8;
  FDestructionSentinel local_14b0;
  undefined1 *local_1498;
  FDestructionSentinel local_1490;
  longlong *local_1478;
  TAttribute<FText> local_1470;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1440;
  TSharedRef<SBorder,1> local_1428;
  TSharedRef<SHorizontalBox,1> local_1418;
  TSharedRef<STextBlock,1> local_1408;
  ITableRow *local_13f8;
  TReferenceControllerBase<1> *pTStack_13f0;
  TSharedRef<SWidget_const_,1> local_13e8;
  TSharedRef<SOverlay,1> local_13d8;
  code *local_13c8;
  longlong lStack_13c0;
  TSharedRef<SImage,1> local_13b8;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_13a8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1390;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1378;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1360;
  FName local_1348;
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
  
  uStack_40 = 0x1469ad9e2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1818;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  local_17c8 = (FSlotArguments *)((ulonglong)local_17c8 & 0xffffffff00000000);
  pTVar40 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  local_17e0 = param_4;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_13f8 = (this->PinnedItemRow).Object;
  pTStack_13f0 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar2;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar40;
  local_1730 = (TReferenceControllerBase<1> *)param_3;
  local_1608 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_13f0);
  local_1738.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  local_1740 = param_3->Object;
  if (local_1738.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1738.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1738.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView != (TSharedPtr<SListView<UObject_*>,1> *)&local_1740) {
    (this->OwnerListView).Object = local_1740;
    local_1740 = (SListView<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_1738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738.ReferenceController);
  local_1640 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (local_1640 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1640->SharedReferenceCount = (atomic<int>)((int)local_1640->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar38 = param_4;
  if (pIVar2 != (ITableRow *)0x0) {
    pIVar13 = FAppStyle::Get();
    pcVar3 = *(code **)((longlong)*pIVar13 + 0x50);
    pFVar14 = ::FName::FName(&local_1748,"NoBrush");
    local_1548.Value = (FSlateBrush *)(*pcVar3)(pIVar13,*pFVar14,0,0);
    local_1548.bIsSet = true;
    local_1548.Getter._16_8_ = 0;
    local_1548.Getter._0_8_ = 0;
    local_1548.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)(pIVar2 + 1),&local_1548);
    TVar37 = EVisibility::Hidden.Value.Value;
    iVar38 = local_17e0;
    if (((TSharedPtr<SExpanderArrow,1> *)(pIVar2 + 99))->Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->
                          ((TSharedPtr<SExpanderArrow,1> *)(pIVar2 + 99));
      local_15c8.bIsSet = true;
      local_15c8.Getter._0_8_ = 0;
      local_15c8.Getter._8_8_ = 0;
      local_15c8.Getter._16_8_ = 0;
      local_15c8.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar37.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_15c8);
      iVar38 = local_17e0;
    }
  }
  pFVar39 = (FSlotArguments *)0x0;
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1688);
  local_15a8[1] = 1;
  local_15a0 = 0;
  uStack_1598 = 0;
  local_15a8[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1590 = 0;
  (**(code **)(*local_1688 + 0x1c8))(local_1688,local_15a8);
  local_1748 = (FName)&this->_padding_;
  FVar15 = (FName)SOverlay::FArguments::FArguments(&local_e60);
  uStack_16a0 = 0;
  local_16a8 = (FName)SetPinnedItemVisibility;
  lStack_13c0 = (ulonglong)uStack_169c << 0x20;
  local_13c8 = SetPinnedItemVisibility;
  local_17c0[0] = param_5;
  local_17c8 = (FSlotArguments *)CONCAT44(local_17c8._4_4_,iVar38);
  local_17a8 = FVar15;
  pTVar16 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<UObject_*>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1760
                       ,this,(pmf_05856a98 *)&local_13c8,(int *)&local_17c8,local_17c0);
  local_1678 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar16);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1760,
             (FWriteAccessScope *)&local_14c8);
  if ((local_1750 != 0) && (local_1758.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1758.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1758,0,0,0x10);
    local_1750 = 0;
  }
  if (local_14c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14c8.Accessor,&local_14c8);
  }
  if (local_1758.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1758.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1760);
  *(undefined1 *)((longlong)FVar15 + 0x88) = (undefined1)local_1678;
  *(undefined1 *)((longlong)FVar15 + 0x89) = local_1678._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar15 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  if ((void *)local_1670._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1670._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1670);
  local_17c8 = SOverlay::Slot((FSlotArguments *)local_1298,0);
  local_15e8 = 1;
  local_15d0 = 0;
  local_15f8 = 0;
  uStack_15f0 = 0;
  local_15e0 = (undefined1  [8])0x0;
  pvStack_15d8 = (void *)0x0;
  local_17c8->_padding_ = 0;
  local_17c8->_padding_ = 0;
  *(undefined1 *)&local_17c8->_padding_ = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_17c8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15e0);
  if (pvStack_15d8 != (void *)0x0) {
    FMemory::Free(pvStack_15d8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15e0);
  pFVar17 = SBorder::FArguments::FArguments(&local_9b0);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_PEAVUObject____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_PEAVUObject_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<UObject_*>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar17->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar17->_BorderImage).Getter,(FWriteAccessScope *)&local_14b0);
  local_1498 = &(pFVar17->_BorderImage).Getter.field_0x8;
  puVar18 = UE::Core::Private::DelegateAllocate(0x50,(FDelegateAllocation *)local_1498);
  if (puVar18 != (undefined8 *)0x0) {
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseFunctorDelegateInstance___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy__V__TFunction___A6APEBUFSlateBrush__XZ____V__6B_
    ;
    puVar18[4] = local_78;
    puVar18[9] = 0;
    if (local_78 != (code *)0x0) {
      pppuVar35 = &local_68;
      if (local_50 != (undefined ***)0x0) {
        pppuVar35 = local_50;
      }
      (*(code *)**pppuVar35)();
    }
  }
  if (local_14b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b0.Accessor,&local_14b0);
  }
  local_16f8 = 1;
  (pFVar17->_Padding).bIsSet = true;
  local_16e0 = 0;
  local_1708 = 0;
  uStack_1700 = 0;
  local_16f0 = (undefined1  [8])0x0;
  FStack_16e8.Data = (FScriptContainerElement *)0x0;
  (pFVar17->_Padding).Value.Left = 0.0;
  (pFVar17->_Padding).Value.Top = 0.0;
  (pFVar17->_Padding).Value.Right = 0.0;
  (pFVar17->_Padding).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16f0,
             (FWriteAccessScope *)&local_14e0);
  if (((int)local_16e0 != 0) && (FStack_16e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_16e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_16e8,0,0,0x10);
    local_16e0 = local_16e0 & 0xffffffff00000000;
  }
  if (local_14e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14e0.Accessor,&local_14e0);
  }
  if (FStack_16e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_16e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16f0);
  pFVar20 = SHorizontalBox::FArguments::FArguments(&local_1068);
  pFVar21 = ::operator_new(0x58);
  local_17b8 = (FArguments *)pFVar39;
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_17b8 = (FArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1238,(FSlot *)&local_17b8);
  pFVar22 = (FSizeParam *)FAuto::FAuto((FAuto *)local_1340);
  TOptional<FSizeParam>::operator=(&local_11e0._SizeParam,pFVar22);
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
  FStack_1768.ReferenceController = local_1680;
  if (local_1680 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1680->SharedReferenceCount = (atomic<int>)((int)local_1680->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1230 = local_1688;
  local_1770 = (code *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1228,&FStack_1768);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1768.ReferenceController);
  local_17b8 = SHorizontalBox::FArguments::operator+(pFVar20,(FSlotArguments *)&local_1238);
  pFVar21 = ::operator_new(0x58);
  local_1650 = pFVar39;
  if (pFVar21 != (FSlot *)0x0) {
    *(undefined8 *)pFVar21 = 0;
    *(undefined8 *)&pFVar21->field_0x8 = 0;
    *(undefined8 *)&pFVar21->field_0x10 = 0;
    *(undefined8 *)&pFVar21->field_0x18 = 0;
    *(undefined8 *)&pFVar21->field_0x20 = 0;
    *(undefined8 *)&pFVar21->field_0x28 = 0;
    *(undefined8 *)&pFVar21->field_0x30 = 0;
    *(undefined8 *)&pFVar21->field_0x38 = 0;
    *(undefined8 *)&pFVar21->field_0x40 = 0;
    *(undefined8 *)&pFVar21->field_0x48 = 0;
    *(undefined8 *)&pFVar21->field_0x50 = 0;
    local_1650 = (FSlotArguments *)SHorizontalBox::FSlot::FSlot(pFVar21);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1150,(FSlot *)&local_1650);
  local_1588.Value = 1.0;
  local_1588.Getter._16_8_ = 0;
  local_1588.bIsSet = true;
  local_1588.Getter._0_8_ = 0;
  local_1588.Getter._8_8_ = 0;
  pFVar23 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1150,&local_1588);
  uStack_16d0 = _UNK_1513b2f08;
  local_16d8 = ___xmm_00000000000000004000000040000000;
  local_16c8 = 1;
  pFVar23->field_0x28 = 1;
  local_16b0 = 0;
  local_16c0 = (undefined1  [8])0x0;
  FStack_16b8.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar23->field_0x18 = local_16d8;
  *(undefined8 *)&pFVar23->field_0x20 = uStack_16d0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar23->field_0x30,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16c0,
             (FWriteAccessScope *)&local_14f8);
  if (((int)local_16b0 != 0) && (FStack_16b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_16b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_16b8,0,0,0x10);
    local_16b0 = local_16b0 & 0xffffffff00000000;
  }
  if (local_14f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14f8.Accessor,&local_14f8);
  }
  if (FStack_16b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_16b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16c0);
  if (&pFVar23->field_0x18 != (undefined1 *)0x0) {
    pFVar39 = pFVar23;
  }
  pFVar24 = STextBlock::FArguments::FArguments(&local_5d0);
  pFVar25 = FText::AsLocalizable_Advanced_LocText(&local_1558,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1470.Value,pFVar25);
  local_1470.bIsSet = true;
  local_1470.Getter._16_8_ = 0;
  local_1470.Getter._0_8_ = 0;
  local_1470.Getter._8_8_ = 0;
  pFVar24 = STextBlock::FArguments::Text(pFVar24,&local_1470);
  *(undefined1 *)((longlong)&pFVar24->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar24->_padding_,
             (FWriteAccessScope *)&local_1490);
  local_1478 = &pFVar24->_padding_;
  puVar18 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1478);
  pTVar40 = local_1730;
  if (puVar18 != (undefined8 *)0x0) {
    local_1770 = SetPinnedItemEllipsesVisibility;
    FStack_1768.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1558._12_4_ << 0x20);
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_13e8);
    pTVar40 = (pTVar26->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar26->Object;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar18 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar18 + 1) = local_17e0;
    uVar19 = FDelegateHandle::GenerateNewID();
    puVar18[2] = uVar19;
    *puVar18 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_PEAVUObject_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar18[3] = pSVar4;
    puVar18[4] = pTVar40;
    if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar40->WeakReferenceCount = (atomic<int>)((int)pTVar40->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    puVar18[5] = local_1770;
    puVar18[6] = FStack_1768.ReferenceController;
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13e8.SharedReferenceCount.ReferenceController);
  }
  if (local_1490.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1490.Accessor,&local_1490);
  }
  FLLMScope::FLLMScope(&local_17dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1648 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1638,&local_1648,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1440,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_17e8);
  FMemScope::~FMemScope(&local_1638);
  FLLMScope::~FLLMScope(&local_17dc);
  pTVar27 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1440,&local_1408,pFVar24);
  pTVar40 = (pTVar27->SharedReferenceCount).ReferenceController;
  local_17a0 = pTVar27->Object;
  if (pTVar40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar40->SharedReferenceCount = (atomic<int>)((int)pTVar40->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1798.ReferenceController = pTVar40;
  if ((STextBlock **)&pFVar39->field_0x8 != &local_17a0) {
    *(STextBlock **)&pFVar39->field_0x8 = local_17a0;
    local_17a0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar39->field_0x10,&local_1798);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1798.ReferenceController);
  pFVar20 = SHorizontalBox::FArguments::operator+(local_17b8,pFVar39);
  FLLMScope::FLLMScope(&local_17d8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1630 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1630,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1360,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_17e7);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(&local_17d8);
  pTVar28 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1360,&local_1418,pFVar20);
  pTVar5 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_1698 = pTVar28->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_1698;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
  pTStack_1690 = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  FLLMScope::FLLMScope(&local_17d4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1610 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_17b0,&local_1610,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1378,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_17e6);
  FMemScope::~FMemScope(&local_17b0);
  FLLMScope::~FLLMScope(&local_17d4);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1378,&local_1428,pFVar17);
  pFVar30 = local_17c8;
  pTVar6 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_1790 = pTVar29->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1788.ReferenceController = pTVar6;
  if ((SBorder **)&local_17c8->_padding_ != &local_1790) {
    local_17c8->_padding_ = (longlong)local_1790;
    local_1790 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_17c8->_padding_,&local_1788);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1788.ReferenceController);
  local_17b0 = (FMemScope)SOverlay::FArguments::operator+((FArguments *)local_17a8,pFVar30);
  pFVar30 = SOverlay::Slot((FSlotArguments *)local_12f8,0);
  plVar1 = &pFVar30->_padding_;
  if ((longlong *)local_1600 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar30->_padding_ + 4) = 1;
  }
  pFVar36 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar36 = pFVar30;
  }
  if ((longlong *)local_1658 != &pFVar36->_padding_) {
    *(undefined4 *)&pFVar36->_padding_ = 1;
    *(undefined1 *)((longlong)&pFVar36->_padding_ + 4) = 1;
  }
  pFVar30 = (FSlotArguments *)0x0;
  if (pFVar36 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar30 = pFVar36;
  }
  pFVar31 = SImage::FArguments::FArguments(&local_c58);
  local_1728 = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1727 = 1;
  local_1710 = 0;
  local_1720 = (undefined1  [8])0x0;
  pvStack_1718 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar31->_padding_ =
       EVisibility::HitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar31->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar31->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1720);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1720);
  if (pvStack_1718 != (void *)0x0) {
    FMemory::Free(pvStack_1718);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1720);
  pIVar13 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar13 + 0x50);
  pFVar14 = ::FName::FName(&local_1348,"ListView.PinnedItemShadow");
  local_1520.Value = (FSlateBrush *)(*pcVar3)(pIVar13,*pFVar14);
  local_1520.bIsSet = true;
  local_1520.Getter._16_8_ = 0;
  local_1520.Getter._0_8_ = 0;
  local_1520.Getter._8_8_ = 0;
  pFVar31 = SImage::FArguments::Image(pFVar31,&local_1520);
  FLLMScope::FLLMScope(&local_17d0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_17a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1620,&local_17a8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1390,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_17e5);
  FMemScope::~FMemScope(&local_1620);
  FLLMScope::~FLLMScope(&local_17d0);
  pTVar32 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1390,&local_13b8,pFVar31);
  pTVar7 = (pTVar32->SharedReferenceCount).ReferenceController;
  local_1780 = pTVar32->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1778.ReferenceController = pTVar7;
  if ((SImage **)&pFVar30->_padding_ != &local_1780) {
    pFVar30->_padding_ = (longlong)local_1780;
    local_1780 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar30->_padding_,&local_1778);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1778.ReferenceController);
  pFVar33 = SOverlay::FArguments::operator+((FArguments *)local_17b0,pFVar30);
  FLLMScope::FLLMScope(&local_17cc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1618,&local_16a8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_13a8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_17e4);
  FMemScope::~FMemScope(&local_1618);
  FLLMScope::~FLLMScope(&local_17cc);
  pTVar34 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13a8,&local_13d8,pFVar33);
  pTVar8 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_1568.Object = (SWidget *)pTVar34->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1568.SharedReferenceCount.ReferenceController = pTVar8;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             local_1748,&local_1568);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1390._Widget.SharedReferenceCount.ReferenceController);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1428.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1418.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1360._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1440._Widget.SharedReferenceCount.ReferenceController);
  if (local_1558.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1558.TextData.Reference + 0x10))();
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
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data,local_1068._Slots.ArrayNum);
  if ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1068._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1068);
  if (local_78 != (code *)0x0) {
    pppuVar35 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar35 = local_50;
    }
    (*(code *)(*pppuVar35)[2])();
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1640);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1608->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (((FSharedReferencer<1> *)&local_1730->SharedReferenceCount)->ReferenceController);
  return;
}

// OnMouseButtonDown @ 1469ed450

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<UObject_*>::SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<UObject_*> *pSVar3;
  code *pcVar4;
  FReply *pFVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 local_res20;
  
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
    if ((this->OwnerListView).Object == (SListView<UObject_*> *)0x0) {
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
    puVar6 = (undefined8 *)(**(code **)(((this->OwnerListView).Object)->_padding_ + 0x48))();
    if (puVar6 != (undefined8 *)0x0) {
      if ((this->OwnerListView).Object == (SListView<UObject_*> *)0x0) {
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
      local_res20 = *puVar6;
      (**(code **)(pSVar3->_padding_ + 0x2d8))(pSVar3,&local_res20,param_2);
      bVar7 = true;
      goto LAB_1469ed542;
    }
  }
  bVar7 = false;
LAB_1469ed542:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 146a18f70

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<UObject_*>::SListViewPinnedRowWidget::SetPinnedItemEllipsesVisibility
          (SListViewPinnedRowWidget *this,int param_1)

{
  SListView<UObject_*> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object == (SListView<UObject_*> *)0x0) {
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
  if (pSVar1 == (SListView<UObject_*> *)0x0) {
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

// SetPinnedItemVisibility @ 146a19060

EVisibility __thiscall
SListView<UObject_*>::SListViewPinnedRowWidget::SetPinnedItemVisibility
          (SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<UObject_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object == (SListView<UObject_*> *)0x0) {
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
    if (pSVar1 == (SListView<UObject_*> *)0x0) {
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
    goto LAB_146a1911c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_146a1911c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

