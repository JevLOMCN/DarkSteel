// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 5

// operator() @ 14e76dd10

FSlateBrush * __thiscall
`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>::operator()(void *this)

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

// Construct @ 14e789590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::Construct
          (SListViewPinnedRowWidget *this,FArguments *param_1,TSharedPtr<ITableRow,1> *param_2,
          TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
          *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  byte *pbVar2;
  TReferenceControllerBase<1> *pTVar3;
  ITableRow *pIVar4;
  code *pcVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  SHorizontalBox *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  bool bVar12;
  FSharedReferencer<1> FVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  bool bVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  SExpanderArrow *this_00;
  FName FVar20;
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *pTVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  ulong64 uVar24;
  FArguments *pFVar25;
  FSlot *pFVar26;
  FSizeParam *pFVar27;
  FSlot *pFVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  FText *pFVar31;
  TSharedRef<SWidget_const_,1> *pTVar32;
  TSharedRef<STextBlock,1> *pTVar33;
  TSharedRef<SHorizontalBox,1> *pTVar34;
  TSharedRef<SBorder,1> *pTVar35;
  FArguments *pFVar36;
  FArguments *pFVar37;
  TSharedRef<SImage,1> *pTVar38;
  SOverlay *pSVar39;
  SOverlay *pSVar40;
  undefined ***pppuVar41;
  FName FVar42;
  TEnumAsByte<EVisibility::Private> TVar43;
  FName FVar44;
  undefined1 auStackY_17d8 [32];
  T0RequiredArgs local_17a0;
  T0RequiredArgs local_179f;
  T0RequiredArgs local_179e;
  T0RequiredArgs local_179d;
  T0RequiredArgs local_179c [4];
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
  undefined1 local_1718 [8];
  ForAnyElementType local_1710;
  int local_1708;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1700;
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *local_16e8;
  FSharedReferencer<1> local_16e0;
  SWidget *local_16d8;
  TReferenceControllerBase<1> *pTStack_16d0;
  FName local_16c8;
  undefined4 uStack_16c0;
  undefined4 uStack_16bc;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined1 local_16a8;
  undefined1 local_16a0 [8];
  ForAnyElementType FStack_1698;
  ulonglong local_1690;
  longlong *local_1688;
  TReferenceControllerBase<1> *local_1680;
  undefined2 local_1678;
  undefined1 local_1670 [24];
  FSlot *local_1658;
  FSlot *local_1650;
  FMemScope local_1648;
  FMemScope local_1640;
  FMemScope local_1638;
  FMemScope local_1630;
  FMemScope local_1628;
  TReferenceControllerBase<1> *local_1620;
  TSharedPtr<ITableRow,1> *local_1618;
  TSharedRef<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  *local_1610;
  undefined8 local_1608;
  FSharedReferencer<1> local_1600;
  FName local_15f8;
  undefined4 local_15f0 [2];
  undefined4 local_15e8 [2];
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined1 local_15d0;
  undefined1 local_15c8 [8];
  void *pvStack_15c0;
  undefined8 local_15b8;
  TAttribute<EVisibility> local_15b0;
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
  longlong local_13b8;
  TReferenceControllerBase<1> *pTStack_13b0;
  TSharedRef<SImage,1> local_13a8;
  TSharedRef<SBorder,1> local_1398;
  TSharedRef<SHorizontalBox,1> local_1388;
  TSharedRef<STextBlock,1> local_1378;
  TSharedRef<SWidget_const_,1> local_1368;
  ITableRow *local_1358;
  TReferenceControllerBase<1> *pTStack_1350;
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
  
  uStack_40 = 0x14e7895b2;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_17d8;
  bVar12 = false;
  bVar11 = false;
  bVar17 = false;
  local_1798[0] = 0;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar4 = param_2->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1358 = (this->PinnedItemRow).Object;
  pTStack_1350 = (this->PinnedItemRow).SharedReferenceCount.ReferenceController;
  (this->PinnedItemRow).Object = pIVar4;
  (this->PinnedItemRow).SharedReferenceCount.ReferenceController = pTVar3;
  local_1618 = param_2;
  local_1610 = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1350);
  local_16e0.ReferenceController = (param_3->SharedReferenceCount).ReferenceController;
  local_16e8 = param_3->Object;
  if (local_16e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_16e0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_16e0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->OwnerListView !=
      (TSharedPtr<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> *)
      &local_16e8) {
    (this->OwnerListView).Object = local_16e8;
    local_16e8 = (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OwnerListView).SharedReferenceCount,&local_16e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_16e0.ReferenceController);
  local_1620 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar4 = param_2->Object;
  if (local_1620 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1620->SharedReferenceCount = (atomic<int>)((int)local_1620->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pIVar4 != (ITableRow *)0x0) {
    pIVar18 = FAppStyle::Get();
    pcVar5 = *(code **)((longlong)*pIVar18 + 0x50);
    pFVar19 = ::FName::FName(&local_15f8,"NoBrush");
    local_1520.Value = (FSlateBrush *)(*pcVar5)(pIVar18,*pFVar19,0,0);
    local_1520.bIsSet = true;
    local_1520.Getter._16_8_ = 0;
    local_1520.Getter._0_8_ = 0;
    local_1520.Getter._8_8_ = 0;
    SBorder::SetBorderImage((SBorder *)(pIVar4 + 1),&local_1520);
    TVar43 = EVisibility::Hidden.Value.Value;
    if (((TSharedPtr<SExpanderArrow,1> *)(pIVar4 + 99))->Object != (SExpanderArrow *)0x0) {
      this_00 = TSharedPtr<SExpanderArrow,1>::operator->
                          ((TSharedPtr<SExpanderArrow,1> *)(pIVar4 + 99));
      local_1590.bIsSet = true;
      local_1590.Getter._0_8_ = 0;
      local_1590.Getter._8_8_ = 0;
      local_1590.Getter._16_8_ = 0;
      local_1590.Value.Value.Value =
           (TEnumAsByte<EVisibility::Private>)(TEnumAsByte<EVisibility::Private>)TVar43.Value;
      SCompoundWidget::SetVisibility((SCompoundWidget *)this_00,&local_1590);
    }
  }
  pFVar28 = (FSlot *)0x0;
  if ((param_2->Object == (ITableRow *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (**(code **)((longlong)*param_2->Object + 0x58))(param_2->Object,&local_1688);
  local_1570[1] = 1;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1570[0] = (uchar)EVisibility::HitTestInvisible.Value.Value;
  local_1558 = 0;
  (**(code **)(*local_1688 + 0x1c8))(local_1688,local_1570);
  FVar20 = (FName)SOverlay::FArguments::FArguments(&local_e60);
  uStack_1770 = 0;
  local_1778 = (FName)SetPinnedItemVisibility;
  lStack_13c0 = (ulonglong)uStack_176c << 0x20;
  local_13c8 = SetPinnedItemVisibility;
  local_1768[0] = param_5;
  local_1798[0] = param_4;
  local_1730 = FVar20;
  pTVar21 = TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
            CreateSP<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,int,int>
                      ((TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)local_1718
                       ,this,(pmf_c3fd120e *)&local_13c8,local_1798,local_1768);
  local_1678 = 0x119;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar21);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1718,
             (FWriteAccessScope *)&local_14d0);
  if ((local_1708 != 0) && (local_1710.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1710.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1710,0,0,0x10);
    local_1708 = 0;
  }
  if (local_14d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14d0.Accessor,&local_14d0);
  }
  if (local_1710.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1710.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1718);
  *(undefined1 *)((longlong)FVar20 + 0x88) = (undefined1)local_1678;
  *(undefined1 *)((longlong)FVar20 + 0x89) = local_1678._1_1_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)FVar20 + 0x90),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1670);
  if ((void *)local_1670._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1670._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1670);
  local_1778 = (FName)SOverlay::Slot((FSlotArguments *)local_1298,0);
  local_15d0 = 1;
  local_15b8 = 0;
  local_15e0 = 0;
  uStack_15d8 = 0;
  local_15c8 = (undefined1  [8])0x0;
  pvStack_15c0 = (void *)0x0;
  *(longlong *)((longlong)local_1778 + 0x18) = 0;
  *(longlong *)((longlong)local_1778 + 0x20) = 0;
  *(undefined1 *)((longlong)local_1778 + 0x28) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)local_1778 + 0x30),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_15c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_15c8);
  if (pvStack_15c0 != (void *)0x0) {
    FMemory::Free(pvStack_15c0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_15c8);
  pFVar22 = SBorder::FArguments::FArguments(&local_9b0);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Construct_SListViewPinnedRowWidget___SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____QEAAXAEBUFArguments_34_V__TSharedPtr_VITableRow___00__V__TSharedRef_V__SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00__HH_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget::Construct'::__l2::<lambda_1>,FSlateBrush_const_*>
             ::Call;
  (pFVar22->_BorderImage).bIsSet = true;
  local_60 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(pFVar22->_BorderImage).Getter,(FWriteAccessScope *)&local_14a0);
  local_1488 = &(pFVar22->_BorderImage).Getter.field_0x8;
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
  local_16a8 = 1;
  (pFVar22->_Padding).bIsSet = true;
  local_1690 = 0;
  local_16b8 = 0;
  uStack_16b0 = 0;
  local_16a0 = (undefined1  [8])0x0;
  FStack_1698.Data = (FScriptContainerElement *)0x0;
  (pFVar22->_Padding).Value.Left = 0.0;
  (pFVar22->_Padding).Value.Top = 0.0;
  (pFVar22->_Padding).Value.Right = 0.0;
  (pFVar22->_Padding).Value.Bottom = 0.0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_16a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_16a0,
             (FWriteAccessScope *)&local_14b8);
  if (((int)local_1690 != 0) && (FStack_1698.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1698.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1698,0,0,0x10);
    local_1690 = local_1690 & 0xffffffff00000000;
  }
  if (local_14b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_14b8.Accessor,&local_14b8);
  }
  if (FStack_1698.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1698.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_16a0);
  pFVar25 = SHorizontalBox::FArguments::FArguments(&local_1068);
  pFVar26 = ::operator_new(0x58);
  local_1658 = pFVar28;
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
    local_1658 = SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1238,(FSlot *)&local_1658);
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
  local_1600.ReferenceController = local_1680;
  if (local_1680 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_1680->SharedReferenceCount = (atomic<int>)((int)local_1680->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1230 = local_1688;
  local_1608 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1228,&local_1600);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1600.ReferenceController);
  local_1748 = (FName)SHorizontalBox::FArguments::operator+(pFVar25,(FSlotArguments *)&local_1238);
  pFVar26 = ::operator_new(0x58);
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
    pFVar28 = SHorizontalBox::FSlot::FSlot(pFVar26);
  }
  local_1650 = pFVar28;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1150,(FSlot *)&local_1650);
  local_1550.Value = 1.0;
  local_1550.Getter._16_8_ = 0;
  local_1550.bIsSet = true;
  local_1550.Getter._0_8_ = 0;
  local_1550.Getter._8_8_ = 0;
  pFVar29 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1150,&local_1550);
  local_1750 = (FName)TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                                ((FSlotArgumentsMixin *)&pFVar29->field_0x18,__real_40000000,
                                 __real_40000000,0.0,0.0);
  pFVar30 = STextBlock::FArguments::FArguments(&local_5d0);
  pFVar31 = FText::AsLocalizable_Advanced_LocText(&local_1530,L"SListView",L"Ellipses",L"...");
  FText::FText(&local_1460.Value,pFVar31);
  local_1460.bIsSet = true;
  local_1460.Getter._16_8_ = 0;
  local_1460.Getter._0_8_ = 0;
  local_1460.Getter._8_8_ = 0;
  pFVar30 = STextBlock::FArguments::Text(pFVar30,&local_1460);
  *(undefined1 *)((longlong)&pFVar30->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar30->_padding_,
             (FWriteAccessScope *)&local_1480);
  local_1468 = &pFVar30->_padding_;
  puVar23 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1468);
  FVar20 = local_15f8;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_16bc = local_1530._12_4_;
    local_16c8 = (FName)SetPinnedItemEllipsesVisibility;
    uStack_16c0 = 0;
    pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1368);
    FVar20 = (FName)(pTVar32->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar32->Object;
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
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    *(int *)(puVar23 + 1) = param_4;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSListViewPinnedRowWidget___SListView_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00__A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__H__6B_
    ;
    puVar23[3] = pSVar6;
    *(FName *)(puVar23 + 4) = FVar20;
    if (FVar20 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar20 + 0xc) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar20 + 0xc) + 1);
      UNLOCK();
    }
    bVar12 = true;
    bVar11 = true;
    bVar17 = true;
    *(FName *)(puVar23 + 5) = local_16c8;
    puVar23[6] = CONCAT44(uStack_16bc,uStack_16c0);
  }
  if (bVar17) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar20);
  }
  if (bVar11) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar20);
  }
  if (bVar12) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1368.SharedReferenceCount.ReferenceController);
  }
  if (local_1480.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1480.Accessor,&local_1480);
  }
  FLLMScope::FLLMScope(&local_1790,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_16c8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1648,&local_16c8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_13e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4d8,&local_17a0);
  FMemScope::~FMemScope(&local_1648);
  FLLMScope::~FLLMScope(&local_1790);
  pTVar33 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13e8,&local_1378,pFVar30);
  FVar20 = local_1750;
  pTVar3 = (pTVar33->SharedReferenceCount).ReferenceController;
  local_1740 = pTVar33->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FVar44.ComparisonIndex.Value = 0;
  FVar44.Number = 0;
  local_1738.ReferenceController = pTVar3;
  if ((STextBlock **)((longlong)local_1750 + 8) != &local_1740) {
    *(STextBlock **)((longlong)local_1750 + 8) = local_1740;
    local_1740 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1750 + 0x10),&local_1738);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1738.ReferenceController);
  pFVar25 = SHorizontalBox::FArguments::operator+((FArguments *)local_1748,(FSlotArguments *)FVar20)
  ;
  FLLMScope::FLLMScope(&local_178c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1748 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1640,&local_1748,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1400,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4cd,&local_179f);
  FMemScope::~FMemScope(&local_1640);
  FLLMScope::~FLLMScope(&local_178c);
  pTVar34 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1400,&local_1388,pFVar25);
  pTVar7 = (pTVar34->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar34->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_16d8 = (pFVar22->_Content).Widget.Object;
  pTStack_16d0 = (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar22->_Content).Widget.Object = (SWidget *)pSVar8;
  (pFVar22->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_16d0);
  FLLMScope::FLLMScope(&local_1788,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1750 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1638,&local_1750,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1418,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4c5,&local_179e);
  FMemScope::~FMemScope(&local_1638);
  FLLMScope::~FLLMScope(&local_1788);
  pTVar35 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1418,&local_1398,pFVar22);
  FVar20 = local_1778;
  pTVar9 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_1728 = pTVar35->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1720.ReferenceController = pTVar9;
  if ((SBorder **)((longlong)local_1778 + 8) != &local_1728) {
    *(SBorder **)((longlong)local_1778 + 8) = local_1728;
    local_1728 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1778 + 0x10),&local_1720);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1720.ReferenceController);
  pFVar36 = SOverlay::FArguments::operator+((FArguments *)local_1730,(FSlotArguments *)FVar20);
  FVar20 = (FName)SOverlay::Slot((FSlotArguments *)local_12f8,0);
  plVar1 = (longlong *)((longlong)FVar20 + 0x48);
  if ((longlong *)local_15f0 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)FVar20 + 0x4c) = 1;
  }
  FVar42 = FVar44;
  if (plVar1 != (longlong *)0x0) {
    FVar42 = FVar20;
  }
  if ((longlong *)local_15e8 != (longlong *)((longlong)FVar42 + 0x50)) {
    *(undefined4 *)((longlong)FVar42 + 0x50) = 1;
    *(undefined1 *)((longlong)FVar42 + 0x54) = 1;
  }
  local_1778 = FVar44;
  if (FVar42 != (FName)0xffffffffffffffb8) {
    local_1778 = FVar42;
  }
  pFVar37 = SImage::FArguments::FArguments(&local_c58);
  local_15b0.Value = (EVisibility)EVisibility::HitTestInvisible.Value.Value;
  local_15b0.bIsSet = true;
  local_15b0.Getter._0_8_ = 0;
  local_15b0.Getter._8_8_ = 0;
  local_15b0.Getter._16_8_ = 0;
  pFVar37 = TSlateBaseNamedArgs<SImage>::Visibility
                      ((TSlateBaseNamedArgs<SImage> *)pFVar37,&local_15b0);
  pIVar18 = FAppStyle::Get();
  pcVar5 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1348,"ListView.PinnedItemShadow");
  local_14f8.Value = (FSlateBrush *)(*pcVar5)(pIVar18,*pFVar19);
  local_14f8.bIsSet = true;
  local_14f8.Getter._16_8_ = 0;
  local_14f8.Getter._0_8_ = 0;
  local_14f8.Getter._8_8_ = 0;
  pFVar37 = SImage::FArguments::Image(pFVar37,&local_14f8);
  FLLMScope::FLLMScope(&local_1784,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1730 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1630,&local_1730,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1430,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4e2,&local_179d);
  FMemScope::~FMemScope(&local_1630);
  FLLMScope::~FLLMScope(&local_1784);
  pTVar38 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1430,&local_13a8,pFVar37);
  FVar20 = local_1778;
  pTVar10 = (pTVar38->SharedReferenceCount).ReferenceController;
  local_1760 = pTVar38->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1758.ReferenceController = pTVar10;
  if ((SImage **)((longlong)local_1778 + 8) != &local_1760) {
    *(SImage **)((longlong)local_1778 + 8) = local_1760;
    local_1760 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)local_1778 + 0x10),&local_1758);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1758.ReferenceController);
  pFVar36 = SOverlay::FArguments::operator+(pFVar36,(FSlotArguments *)FVar20);
  FLLMScope::FLLMScope(local_1780,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1778 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1628,&local_1778,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1700,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
             ,0x4bf,local_179c);
  FMemScope::~FMemScope(&local_1628);
  FLLMScope::~FLLMScope(local_1780);
  pSVar39 = TSharedPtr<SOverlay,1>::operator->(&local_1700._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar39,(FSlateBaseNamedArgs *)pFVar36);
  pSVar39 = local_1700._Widget.Object;
  SOverlay::Construct(local_1700._Widget.Object,pFVar36);
  pSVar40 = TSharedPtr<SOverlay,1>::operator->(&local_1700._Widget);
  if ((pSVar40->_padding_ & 0x10) == 0) {
    cVar15 = (**(code **)(pSVar40->_padding_ + 0x228))(pSVar40);
    bVar16 = 0;
    if (cVar15 == '\0') goto LAB_14e78a41a;
  }
  bVar16 = 0x20;
LAB_14e78a41a:
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ & 0xdf;
  *(byte *)&pSVar40->_padding_ = (byte)pSVar40->_padding_ | bVar16;
  pSVar40 = TSharedPtr<SOverlay,1>::operator->(&local_1700._Widget);
  pbVar2 = (byte *)((longlong)&pSVar40->_padding_ + 1);
  *pbVar2 = *pbVar2 | 4;
  if ((local_1700._Widget.Object == (SOverlay *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar13.ReferenceController = local_1700._Widget.SharedReferenceCount.ReferenceController;
  local_1700._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1700._Widget.Object = (SOverlay *)0x0;
  if ((pSVar39 == (SOverlay *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar17)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar1 = &this->_padding_;
  if (FVar13.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
  }
  else {
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)plVar1);
    LOCK();
    (FVar13.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_13b8 = this->_padding_;
  pTStack_13b0 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar39;
  this->_padding_ = (longlong)FVar13.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_13b0);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)plVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1700._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a8.SharedReferenceCount.ReferenceController);
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1398.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1418._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1388.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1400._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
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
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data,local_1068._Slots.ArrayNum);
  if ((FSlotArguments *)local_1068._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1068._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1068);
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
            ((FSlotArguments *)local_e60._Slots.AllocatorInstance.Data,local_e60._Slots.ArrayNum);
  if ((FSlotArguments *)local_e60._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e60._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1680);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1620);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1618->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_1610->SharedReferenceCount).ReferenceController);
  return;
}

// OnMouseButtonDown @ 14e7cfa80

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::OnMouseButtonDown
          (SListViewPinnedRowWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar3;
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
        (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
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
          (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
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
      goto LAB_14e7cfb64;
    }
  }
  bVar7 = false;
LAB_14e7cfb64:
  FReply::FReply(__return_storage_ptr__,bVar7);
  return __return_storage_ptr__;
}

// SetPinnedItemEllipsesVisibility @ 14e7df590

/* WARNING: Type propagation algorithm not settling */

EVisibility __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::SetPinnedItemEllipsesVisibility
          (SListViewPinnedRowWidget *this,int param_1)

{
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar1;
  code *pcVar2;
  EVisibility EVar3;
  bool bVar4;
  TEnumAsByte<EVisibility::Private> TVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R8D;
  
  if ((this->OwnerListView).Object ==
      (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
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
  if (pSVar1 == (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0)
  {
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

// SetPinnedItemVisibility @ 14e7df680

EVisibility __thiscall
SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
SListViewPinnedRowWidget::SetPinnedItemVisibility
          (SListViewPinnedRowWidget *this,int param_1,int param_2)

{
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar1;
  code *pcVar2;
  bool bVar3;
  TEnumAsByte<EVisibility::Private> TVar4;
  EVisibility EVar5;
  int *piVar6;
  undefined4 in_register_00000014;
  int in_R9D;
  
  if ((this->OwnerListView).Object ==
      (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
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
    if (pSVar1 == (SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0
       ) {
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
    goto LAB_14e7df73c;
  }
  EVar5.Value.Value = EVisibility::Visible.Value.Value;
LAB_14e7df73c:
  *(TEnumAsByte<EVisibility::Private> *)CONCAT44(in_register_00000014,param_1) = EVar5.Value.Value;
  return (EVisibility)SUB41(param_1,0);
}

