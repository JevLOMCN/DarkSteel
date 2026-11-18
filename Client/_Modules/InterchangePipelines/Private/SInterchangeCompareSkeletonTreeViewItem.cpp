// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 1

// Construct @ 14e785b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
SInterchangeCompareSkeletonTreeViewItem::Construct
          (SInterchangeCompareSkeletonTreeViewItem *this,FArguments *param_1,
          TSharedRef<STableViewBase,1> *param_2)

{
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *this_00;
  longlong *this_01;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  SHorizontalBox *pSVar8;
  code *pcVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  undefined4 uVar12;
  ISlateStyle *pIVar13;
  FSlateBrush *pFVar14;
  FText *pFVar15;
  FString *pFVar16;
  FName *pFVar17;
  FSkeletonJoint *pFVar18;
  FArguments *pFVar19;
  FSlot *this_02;
  FSlot *pFVar20;
  FSizeParam *pFVar21;
  FArguments *pFVar22;
  TSharedRef<SWidget,1> *pTVar23;
  TSharedRef<SExpanderArrow,1> *pTVar24;
  FSlotArguments *pFVar25;
  FArguments *pFVar26;
  FSlateBrush *pFVar27;
  TSharedRef<SImage,1> *pTVar28;
  FSlotArguments *pFVar29;
  FArguments *pFVar30;
  TSharedRef<STextBlock,1> *pTVar31;
  TSharedRef<SHorizontalBox,1> *pTVar32;
  FArguments *pFVar33;
  longlong lVar34;
  FLinearColor_u_0 FVar35;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  TSharedRef<STableViewBase,1> *local_res18;
  T0RequiredArgs local_res20 [8];
  FString local_15f8;
  FLLMScope local_15e8;
  FLLMScope local_15e4;
  FLLMScope local_15e0;
  FLLMScope local_15dc;
  SImage *local_15d8;
  FSharedReferencer<1> local_15d0;
  STextBlock *local_15c8;
  FSharedReferencer<1> local_15c0;
  FLinearColor_u_0 local_15b8;
  undefined2 local_15a8;
  undefined2 uStack_15a6;
  uchar local_15a0;
  undefined1 local_159f;
  undefined1 local_1598 [8];
  void *pvStack_1590;
  undefined8 local_1588;
  SHorizontalBox *local_1580;
  TReferenceControllerBase<1> *pTStack_1578;
  TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1> local_1570;
  undefined8 local_1560;
  FSharedReferencer<1> local_1558;
  FSlateBrush *local_1550;
  undefined1 local_1548;
  undefined1 local_1540 [8];
  void *pvStack_1538;
  undefined8 local_1530;
  undefined4 local_1528 [2];
  FSlot *local_1520;
  FName local_1518;
  T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&> local_1510;
  FMemScope local_1508;
  FSlot *local_1500;
  FName local_14f8;
  FMemScope local_14f0;
  FSlot *local_14e8;
  FName local_14e0;
  FMemScope local_14d8;
  FName local_14d0;
  FMemScope local_14c8;
  TAttribute<float> local_14c0;
  FLinearColor_u_0 local_14a0;
  ESlateColorStylingMode local_1490;
  EStyleColor EStack_148f;
  undefined2 uStack_148e;
  undefined1 local_148c;
  undefined8 local_1488;
  undefined8 uStack_1480;
  undefined8 local_1478;
  TAttribute<FText> local_1470;
  TAttribute<FText> local_1440;
  TSharedRef<SHorizontalBox,1> local_1410;
  TSharedRef<STextBlock,1> local_1400;
  FText local_13f0;
  FText local_13e0;
  TSharedRef<SImage,1> local_13d0;
  TSharedRef<SExpanderArrow,1> local_13c0;
  FName local_13b0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_13a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1390;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1378;
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
  local_1360;
  FName local_1348;
  FSkeletonJoint *local_1340;
  TReferenceControllerBase<1> *pTStack_1338;
  FText local_1330;
  FText local_1320;
  FText local_1310;
  TSharedRef<SWidget,1> local_1300;
  undefined1 local_12f0 [16];
  undefined1 local_12e0 [32];
  undefined1 local_12c0 [24];
  undefined1 local_12a8 [16];
  undefined1 local_1298 [32];
  undefined1 local_1278 [24];
  undefined8 *local_1260;
  SExpanderArrow *local_1258;
  FSharedReferencer<1> local_1250 [4];
  undefined1 local_1230 [40];
  FSlotArgumentsMixin local_1208;
  undefined8 *local_1178 [2];
  TReferenceControllerBase<1> *local_1168;
  undefined1 local_1160 [24];
  undefined1 local_1148 [40];
  FSlotArgumentsMixin local_1120;
  undefined8 *local_1090 [2];
  TReferenceControllerBase<1> *local_1080;
  undefined1 local_1060 [40];
  FSlotArgumentsMixin local_1038;
  undefined1 local_fa8 [520];
  undefined1 local_da0 [32];
  undefined1 local_d80 [32];
  undefined1 local_d60 [24];
  FArguments local_d48;
  FArguments local_b40;
  FArguments local_898;
  FArguments local_5a0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14e785b33;
  pTVar2 = (param_1->_SkeletonCompareData).SharedReferenceCount.ReferenceController;
  this_00 = &this->SkeletonCompareData;
  pFVar18 = (param_1->_SkeletonCompareData).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1340 = this_00->Object;
  pTStack_1338 = (this->SkeletonCompareData).SharedReferenceCount.ReferenceController;
  this_00->Object = pFVar18;
  (this->SkeletonCompareData).SharedReferenceCount.ReferenceController = pTVar2;
  local_res18 = param_2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1338);
  if ((this_00->Object == (FSkeletonJoint *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SkeletonCompareData.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
                          ,0x98b,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar13 = FAppStyle::Get();
  pFVar14 = (FSlateBrush *)(**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_1330,L"SInterchangeCompareSkeletonTreeViewItem",
                       L"Construct_Joint_tooltip",
                       L"Re-import joint match skeletal mesh skeleton joint.");
  pFVar16 = FText::ToString(pFVar15);
  pFVar20 = (FSlot *)0x0;
  local_15f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_15f8.Data.ArrayNum = (pFVar16->Data).ArrayNum;
  lVar34 = (longlong)local_15f8.Data.ArrayNum;
  pFVar3 = (pFVar16->Data).AllocatorInstance.Data;
  if (local_15f8.Data.ArrayNum == 0) {
    local_15f8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_15f8.Data.ArrayNum,0,(ForAnyElementType *)&local_15f8,
               local_15f8.Data.ArrayNum,&local_15f8.Data.ArrayMax);
    memcpy(local_15f8.Data.AllocatorInstance.Data,pFVar3,lVar34 * 2);
  }
  if (local_1330.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1330.TextData.Reference + 0x10))();
  }
  if ((this_00->Object == (FSkeletonJoint *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (this_00->Object->bAdded == false) {
    pFVar18 = TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>::operator->(this_00);
    if (pFVar18->bRemoved != false) {
      pFVar17 = ::FName::FName(&local_1348,"FBXIcon.ReimportCompareRemoved");
      FVar4 = *pFVar17;
      pIVar13 = FAppStyle::Get();
      pFVar14 = (FSlateBrush *)(**(code **)((longlong)*pIVar13 + 0x50))(pIVar13,FVar4,0,0);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_1310,L"SInterchangeCompareSkeletonTreeViewItem",
                           L"Construct_RemoveJoint_tooltip",L"Re-import remove this joint.");
      pFVar16 = FText::ToString(pFVar15);
      ::FString::operator=(&local_15f8,pFVar16);
      local_1320.TextData.Reference = local_1310.TextData.Reference;
      goto LAB_14e785dd9;
    }
  }
  else {
    pFVar17 = ::FName::FName(&local_13b0,"FBXIcon.ReimportCompareAdd");
    FVar4 = *pFVar17;
    pIVar13 = FAppStyle::Get();
    pFVar14 = (FSlateBrush *)(**(code **)((longlong)*pIVar13 + 0x50))(pIVar13,FVar4,0,0);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_1320,L"SInterchangeCompareSkeletonTreeViewItem",
                         L"Construct_AddJoint_tooltip",L"Re-import add this joint.");
    pFVar16 = FText::ToString(pFVar15);
    if (&local_15f8 != pFVar16) {
      iVar1 = (pFVar16->Data).ArrayNum;
      pFVar3 = (pFVar16->Data).AllocatorInstance.Data;
      local_15f8.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_15f8.Data.ArrayMax == 0)) {
        local_15f8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_15f8.Data.ArrayMax,(ForAnyElementType *)&local_15f8,iVar1,
                   &local_15f8.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_15f8.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
        }
      }
    }
LAB_14e785dd9:
    if (local_1320.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1320.TextData.Reference + 0x10))();
    }
  }
  local_15b8._8_8_ = _UNK_15090c6d8;
  local_15b8._0_8_ = ___xmm_3f8000003f800000000000003f800000;
  local_15a8._0_1_ = UseColor_Foreground;
  local_15a8._1_1_ = Black;
  if ((this_00->Object == (FSkeletonJoint *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((this_00->Object->bMatch == false) ||
     (pFVar18 = TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>::operator->(this_00)
     , FVar35 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorSubConflict.SpecifiedColor
                .field0_0x0,
     uVar12 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorSubConflict._16_4_,
     pFVar18->bChildConflict == false)) {
    if ((this_00->Object == (FSkeletonJoint *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar35 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict.SpecifiedColor.
             field0_0x0;
    uVar12 = SInterchangeGenericAssetMaterialConflictWidget::SlateColorFullConflict._16_4_;
    if (this_00->Object->bMatch != false) goto LAB_14e785e8f;
  }
  local_15b8 = FVar35;
  _local_15a8 = uVar12;
LAB_14e785e8f:
  pFVar19 = SHorizontalBox::FArguments::FArguments(&local_d48);
  this_02 = ::operator_new(0x58);
  if (this_02 != (FSlot *)0x0) {
    *(undefined8 *)this_02 = 0;
    *(undefined8 *)&this_02->field_0x8 = 0;
    *(undefined8 *)&this_02->field_0x10 = 0;
    *(undefined8 *)&this_02->field_0x18 = 0;
    *(undefined8 *)&this_02->field_0x20 = 0;
    *(undefined8 *)&this_02->field_0x28 = 0;
    *(undefined8 *)&this_02->field_0x30 = 0;
    *(undefined8 *)&this_02->field_0x38 = 0;
    *(undefined8 *)&this_02->field_0x40 = 0;
    *(undefined8 *)&this_02->field_0x48 = 0;
    *(undefined8 *)&this_02->field_0x50 = 0;
    pFVar20 = SHorizontalBox::FSlot::FSlot(this_02);
  }
  local_1520 = pFVar20;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1260,(FSlot *)&local_1520);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_12f0);
  TOptional<FSizeParam>::operator=(&local_1208._SizeParam,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12c0);
  if ((void *)local_12c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12e0);
  if ((void *)local_12e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12e0);
  pFVar22 = SExpanderArrow::FArguments::FArguments((FArguments *)local_fa8);
  pTVar23 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1300);
  if (pTVar23->Object == (SWidget *)0x0) {
    local_1570.Object = (SInterchangeCompareSkeletonTreeViewItem *)0x0;
  }
  else {
    local_1570.Object = (SInterchangeCompareSkeletonTreeViewItem *)&pTVar23->Object[-1].StatID;
  }
  local_1570.SharedReferenceCount.ReferenceController =
       (pTVar23->SharedReferenceCount).ReferenceController;
  if (local_1570.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1570.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1570.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1300.SharedReferenceCount.ReferenceController);
  local_1510.Arg0 = &local_1570;
  FLLMScope::FLLMScope(&local_15e8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1518 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1508,&local_1518,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
            (&local_1360,"SExpanderArrow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9a9,&local_1510);
  FMemScope::~FMemScope(&local_1508);
  FLLMScope::~FLLMScope(&local_15e8);
  pTVar24 = TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<SInterchangeCompareSkeletonTreeViewItem,1>_&&>_>
            ::operator<<=(&local_1360,&local_13c0,pFVar22);
  pTVar2 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1258 = pTVar24->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1560 = 0;
  local_1558.ReferenceController = pTVar2;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1250,&local_1558);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1558.ReferenceController);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,(FSlotArguments *)&local_1260);
  pFVar20 = ::operator_new(0x58);
  local_1500 = (FSlot *)0x0;
  if (pFVar20 != (FSlot *)0x0) {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_1500 = SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1178,(FSlot *)&local_1500);
  pFVar21 = (FSizeParam *)FAuto::FAuto((FAuto *)local_12a8);
  TOptional<FSizeParam>::operator=(&local_1120._SizeParam,pFVar21);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1278);
  if ((void *)local_1278._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1278._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1278);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1298);
  if ((void *)local_1298._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1298._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1298);
  pFVar25 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)local_1160,0.0,__real_40000000,__real_40c00000,
                       __real_40000000);
  pFVar26 = SImage::FArguments::FArguments(&local_b40);
  local_1548 = 1;
  local_1530 = 0;
  local_1540 = (undefined1  [8])0x0;
  pvStack_1538 = (void *)0x0;
  (pFVar26->_Image).Value = pFVar14;
  (pFVar26->_Image).bIsSet = true;
  local_1550 = pFVar14;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar26->_Image).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1540);
  if (pvStack_1538 != (void *)0x0) {
    FMemory::Free(pvStack_1538);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1540);
  pIVar13 = FAppStyle::Get();
  pFVar27 = (FSlateBrush *)(**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
  local_15a0 = (uchar)EVisibility::Collapsed;
  if (pFVar14 != pFVar27) {
    local_15a0 = (uchar)EVisibility::Visible;
  }
  local_159f = 1;
  local_1588 = 0;
  local_1598 = (undefined1  [8])0x0;
  pvStack_1590 = (void *)0x0;
  *(uchar *)&pFVar26->_padding_ = local_15a0;
  *(undefined1 *)((longlong)&pFVar26->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1598);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1598);
  if (pvStack_1590 != (void *)0x0) {
    FMemory::Free(pvStack_1590);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1598);
  FLLMScope::FLLMScope(&local_15e4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14f0,&local_14f8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1378,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9b0,local_res8);
  FMemScope::~FMemScope(&local_14f0);
  FLLMScope::~FLLMScope(&local_15e4);
  pTVar28 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1378,&local_13d0,pFVar26);
  pTVar5 = (pTVar28->SharedReferenceCount).ReferenceController;
  local_15d8 = pTVar28->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15d0.ReferenceController = pTVar5;
  if ((SImage **)&pFVar25->field_0x8 != &local_15d8) {
    *(SImage **)&pFVar25->field_0x8 = local_15d8;
    local_15d8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_15d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15d0.ReferenceController);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar25);
  pFVar20 = ::operator_new(0x58);
  if (pFVar20 == (FSlot *)0x0) {
    local_14e8 = (FSlot *)0x0;
  }
  else {
    *(undefined8 *)pFVar20 = 0;
    *(undefined8 *)&pFVar20->field_0x8 = 0;
    *(undefined8 *)&pFVar20->field_0x10 = 0;
    *(undefined8 *)&pFVar20->field_0x18 = 0;
    *(undefined8 *)&pFVar20->field_0x20 = 0;
    *(undefined8 *)&pFVar20->field_0x28 = 0;
    *(undefined8 *)&pFVar20->field_0x30 = 0;
    *(undefined8 *)&pFVar20->field_0x38 = 0;
    *(undefined8 *)&pFVar20->field_0x40 = 0;
    *(undefined8 *)&pFVar20->field_0x48 = 0;
    *(undefined8 *)&pFVar20->field_0x50 = 0;
    local_14e8 = SHorizontalBox::FSlot::FSlot(pFVar20);
  }
  pFVar25 = (FSlotArguments *)0x0;
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1090,(FSlot *)&local_14e8);
  local_14c0.Value = 1.0;
  local_14c0.Getter._16_8_ = 0;
  local_14c0.bIsSet = true;
  local_14c0.Getter._0_8_ = 0;
  local_14c0.Getter._8_8_ = 0;
  pFVar29 = SHorizontalBox::FSlot::FSlotArguments::FillWidth
                      ((FSlotArguments *)local_1090,&local_14c0);
  pFVar29 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar29->field_0x18,0.0,__real_40400000,
                       __real_40c00000,__real_40400000);
  if (local_1528 != (undefined4 *)&pFVar29->field_0x50) {
    *(undefined4 *)&pFVar29->field_0x50 = 2;
    pFVar29->field_0x54 = 1;
  }
  if (pFVar29 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar25 = pFVar29;
  }
  pFVar30 = STextBlock::FArguments::FArguments(&local_5a0);
  if (((this->SkeletonCompareData).Object == (FSkeletonJoint *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar15 = FText::FromString(&local_13e0,&((this->SkeletonCompareData).Object)->JointName);
  FText::FText(&local_1470.Value,pFVar15);
  local_1470.bIsSet = true;
  local_1470.Getter._16_8_ = 0;
  local_1470.Getter._0_8_ = 0;
  local_1470.Getter._8_8_ = 0;
  pFVar30 = STextBlock::FArguments::Text(pFVar30,&local_1470);
  pFVar15 = FText::FromString(&local_13f0,&local_15f8);
  FText::FText(&local_1440.Value,pFVar15);
  local_1440.bIsSet = true;
  local_1440.Getter._16_8_ = 0;
  local_1440.Getter._0_8_ = 0;
  local_1440.Getter._8_8_ = 0;
  pFVar30 = TSlateBaseNamedArgs<STextBlock>::ToolTipText
                      ((TSlateBaseNamedArgs<STextBlock> *)pFVar30,&local_1440);
  local_1490 = (ESlateColorStylingMode)local_15a8;
  EStack_148f = local_15a8._1_1_;
  uStack_148e = uStack_15a6;
  local_148c = 1;
  local_14a0._0_8_ = local_15b8._0_8_;
  local_14a0._8_8_ = local_15b8._8_8_;
  local_1478 = 0;
  local_1488 = 0;
  uStack_1480 = 0;
  pFVar30 = STextBlock::FArguments::ColorAndOpacity
                      (pFVar30,(TAttribute<FSlateColor> *)&local_14a0._s_0);
  FLLMScope::FLLMScope(&local_15e0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14d8,&local_14e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1390,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9b9,local_res10);
  FMemScope::~FMemScope(&local_14d8);
  FLLMScope::~FLLMScope(&local_15e0);
  pTVar31 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1390,&local_1400,pFVar30);
  pTVar6 = (pTVar31->SharedReferenceCount).ReferenceController;
  local_15c8 = pTVar31->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_15c0.ReferenceController = pTVar6;
  if ((STextBlock **)&pFVar25->field_0x8 != &local_15c8) {
    *(STextBlock **)&pFVar25->field_0x8 = local_15c8;
    local_15c8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar25->field_0x10,&local_15c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_15c0.ReferenceController);
  pFVar19 = SHorizontalBox::FArguments::operator+(pFVar19,pFVar25);
  FLLMScope::FLLMScope(&local_15dc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_14d0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_14c8,&local_14d0,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_13a8,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeGenericAssetsPipeline.cpp"
             ,0x9a5,local_res20);
  FMemScope::~FMemScope(&local_14c8);
  FLLMScope::~FLLMScope(&local_15dc);
  pTVar32 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_13a8,&local_1410,pFVar19);
  this_01 = &this->_padding_;
  pTVar7 = (pTVar32->SharedReferenceCount).ReferenceController;
  pSVar8 = pTVar32->Object;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
  }
  else {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar8;
  this->_padding_ = (longlong)pTVar7;
  local_1580 = pSVar8;
  pTStack_1578 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1410.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13a8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1400.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1390._Widget.SharedReferenceCount.ReferenceController);
  if (local_13f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_13f0.TextData.Reference + 0x10))();
  }
  if (local_13e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_13e0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_5a0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1038);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1060);
  if ((void *)local_1060._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1060._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1060);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1080);
  if (local_1090[0] != (undefined8 *)0x0) {
    (**(code **)*local_1090[0])(local_1090[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13d0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1378._Widget.SharedReferenceCount.ReferenceController);
  SImage::FArguments::~FArguments(&local_b40);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1120);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1148);
  if ((void *)local_1148._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1148._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1148);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1168);
  if (local_1178[0] != (undefined8 *)0x0) {
    (**(code **)*local_1178[0])(local_1178[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_13c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1360._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1570.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d60);
  if ((void *)local_d60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_d80);
  if ((void *)local_d80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_d80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_da0);
  if ((void *)local_da0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_da0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_da0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_fa8);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1208);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1230);
  if ((void *)local_1230._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1230._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1230);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1250[0].ReferenceController);
  if (local_1260 != (undefined8 *)0x0) {
    (**(code **)*local_1260)(local_1260,1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_d48._Slots.AllocatorInstance.Data,local_d48._Slots.ArrayNum);
  if ((FSlotArguments *)local_d48._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_d48._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_d48);
  pFVar33 = STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments
            ::FArguments(&local_898);
  pFVar33->_ShowSelection = true;
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::ConstructInternal
            ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this,
             pFVar33,local_res18);
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::
  ~FArguments(&local_898);
  if (local_15f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_15f8.Data.AllocatorInstance.Data);
  }
  return;
}

