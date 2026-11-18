// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 18

// operator() @ 142e1ce40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
          (void *this,FText *param_1,TAttribute<FText> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FScopedWidgetSlotArguments *pFVar2;
  FArguments *pFVar3;
  TSharedRef<STextBlock,1> *pTVar4;
  FScopedWidgetSlotArguments *pFVar5;
  undefined1 auStackY_768 [32];
  T0RequiredArgs local_738 [4];
  FLLMScope local_734;
  FText local_730;
  bool local_720;
  undefined1 local_718 [8];
  ForAnyElementType FStack_710;
  ulonglong local_708;
  FDestructionSentinel local_700;
  FName local_6e8;
  FName local_6e0;
  STextBlock *local_6d8;
  FSharedReferencer<1> local_6d0;
  STextBlock *local_6c8;
  FSharedReferencer<1> local_6c0;
  TSharedRef<STextBlock,1> local_6b8;
  FText local_6a8;
  bool local_698;
  undefined1 local_690 [24];
  FArguments local_678;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pFVar2 = SGridPanel::AddSlot(*(SGridPanel **)this,&local_118,0,**(int **)((longlong)this + 0x10),
                               (Layer)0x0);
  pFVar3 = STextBlock::FArguments::FArguments(&local_678);
  local_730.TextData.Reference = (param_1->TextData).Reference;
  if (local_730.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_730.TextData.Reference + 8))
              (local_730.TextData.Reference,&local_734);
  }
  local_730.Flags = param_1->Flags;
  local_708 = 0;
  local_720 = true;
  local_718 = (undefined1  [8])0x0;
  FStack_710.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->_Text).Value,&local_730);
  (pFVar3->_Text).bIsSet = local_720;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_718);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_718,
             (FWriteAccessScope *)&local_700);
  if (((int)local_708 != 0) && (FStack_710.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_710.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_710,0,0,0x10);
    local_708 = local_708 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_710.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_710.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_718);
  if (local_730.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_730.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_734,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6e8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6e0,&local_6e8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_700,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
             ,0x3a,local_738);
  FMemScope::~FMemScope((FMemScope *)&local_6e0);
  FLLMScope::~FLLMScope(&local_734);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_700,&local_6b8,
                      pFVar3);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  local_6d8 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6d0.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar2->_padding_ != &local_6d8) {
    pFVar2->_padding_ = (longlong)local_6d8;
    local_6d8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar2->_padding_,&local_6d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_700.Accessor);
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  pFVar2 = SGridPanel::AddSlot(*(SGridPanel **)this,&local_118,1,**(int **)((longlong)this + 0x10),
                               (Layer)0x0);
  local_730._8_8_ = _UNK_150a07f48;
  local_730.TextData.Reference = ___xmm_00000000000000000000000040a00000;
  local_720 = true;
  *(undefined1 *)&pFVar2->_padding_ = 1;
  local_708 = 0;
  local_718 = (undefined1  [8])0x0;
  FStack_710.Data = (FScriptContainerElement *)0x0;
  pFVar2->_padding_ = (longlong)local_730.TextData.Reference;
  pFVar2->_padding_ = local_730._8_8_;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar2->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_718);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_718,
             (FWriteAccessScope *)&local_700);
  if (((int)local_708 != 0) && (FStack_710.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_710.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_710,0,0,0x10);
    local_708 = local_708 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_710.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_710.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_718);
  pFVar5 = (FScopedWidgetSlotArguments *)0x0;
  if (&pFVar2->_padding_ != (longlong *)0x0) {
    pFVar5 = pFVar2;
  }
  pFVar3 = STextBlock::FArguments::FArguments(&local_678);
  local_6a8.TextData.Reference = (param_2->Value).TextData.Reference;
  if (local_6a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.TextData.Reference + 8))
              (local_6a8.TextData.Reference,&local_734);
  }
  local_6a8.Flags = (param_2->Value).Flags;
  local_698 = param_2->bIsSet;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_690,&param_2->Getter
            );
  FText::operator=(&(pFVar3->_Text).Value,&local_6a8);
  (pFVar3->_Text).bIsSet = local_698;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_690);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_690);
  if ((void *)local_690._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_690._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_690);
  if (local_6a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6a8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_734,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_6e8,&local_6e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_700,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
             ,0x41,local_738);
  FMemScope::~FMemScope((FMemScope *)&local_6e8);
  FLLMScope::~FLLMScope(&local_734);
  pTVar4 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_700,&local_6b8,
                      pFVar3);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  local_6c8 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6c0.ReferenceController = pTVar1;
  if ((STextBlock **)&pFVar5->_padding_ != &local_6c8) {
    pFVar5->_padding_ = (longlong)local_6c8;
    local_6c8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar5->_padding_,&local_6c0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6c0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_700.Accessor);
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  return;
}

// Construct @ 142e41530

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SReflectorToolTipWidget::Construct(SReflectorToolTipWidget *this,FArguments *param_1)

{
  FWidgetReflectorNodeBase *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SVerticalBox *pSVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> aVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  atomic<int> aVar11;
  FGeometry *this_00;
  FString *pFVar12;
  FText *pFVar13;
  FArguments *pFVar14;
  FArguments *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  FArguments *pFVar20;
  TSharedRef<STextBlock,1> *pTVar21;
  TSharedRef<SBorder,1> *pTVar22;
  TSharedRef<SVerticalBox,1> *pTVar23;
  atomic<int> *paVar24;
  TReferenceControllerBase<1> *pTVar25;
  TReferenceControllerBase<1> *pTVar26;
  FWidgetReflectorNodeBase *pFVar27;
  longlong *this_01;
  undefined1 auStackY_17c8 [32];
  code *local_1798;
  undefined8 uStack_1790;
  T0RequiredArgs local_1788;
  T0RequiredArgs local_1787;
  T0RequiredArgs local_1786;
  T0RequiredArgs local_1785 [5];
  SGridPanel *local_1780;
  TReferenceControllerBase<1> *local_1778;
  undefined4 *local_1770;
  FLLMScope local_1768;
  FLLMScope local_1764;
  FLLMScope local_1760;
  FLLMScope local_175c;
  undefined4 local_1758 [2];
  SBorder *local_1750;
  FSharedReferencer<1> local_1748;
  undefined1 local_1740 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1738;
  ForAnyElementType FStack_1730;
  ulonglong local_1728;
  TSharedRef<SGridPanel,1> local_1718;
  FText local_1708;
  float local_16f8;
  float local_16f4;
  STextBlock *local_16f0;
  TReferenceControllerBase<1> *pTStack_16e8;
  SGridPanel *local_16d8;
  FSharedReferencer<1> FStack_16d0;
  SVerticalBox *local_16c8;
  TReferenceControllerBase<1> *pTStack_16c0;
  FName local_16b8;
  FMemScope local_16b0;
  undefined1 local_16a8 [4];
  FSlateLayoutTransform local_16a4;
  undefined1 local_1698 [4];
  FDeprecateSlateVector2D local_1694;
  FMemScope local_1688;
  FName local_1680;
  FName local_1678;
  FMemScope local_1670;
  FName local_1668;
  FMemScope local_1660;
  TAttribute<float> local_1658;
  TAttribute<FSlateBrush_const_*> local_1638;
  FDestructionSentinel local_1610;
  TAttribute<FText> local_15f8;
  code *local_15c8;
  ulonglong uStack_15c0;
  FText local_15b8;
  code *local_15a8;
  ulonglong uStack_15a0;
  FText local_1598;
  code *local_1588;
  ulonglong uStack_1580;
  FText local_1578;
  code *local_1568;
  ulonglong uStack_1560;
  FText local_1558;
  code *local_1548;
  ulonglong uStack_1540;
  FText local_1538;
  code *local_1528;
  ulonglong uStack_1520;
  FText local_1518;
  code *local_1508;
  ulonglong uStack_1500;
  FText local_14f8;
  code *local_14e8;
  ulonglong uStack_14e0;
  FText local_14d8;
  code *local_14c8;
  ulonglong uStack_14c0;
  FText local_14b8;
  code *local_14a8;
  ulonglong uStack_14a0;
  FText local_1498;
  code *local_1488;
  ulonglong uStack_1480;
  FText local_1478;
  code *local_1468;
  ulonglong uStack_1460;
  FText local_1458;
  FText local_1448;
  code *local_1438;
  ulonglong uStack_1430;
  FText local_1428;
  code *local_1418;
  ulonglong uStack_1410;
  FText local_1408;
  code *local_13f8;
  ulonglong uStack_13f0;
  FText local_13e8;
  TSharedRef<SVerticalBox,1> local_13d8;
  TSharedRef<SBorder,1> local_13c8;
  TSharedRef<STextBlock,1> local_13b8;
  TSharedRef<SWidget,1> local_13a8;
  FName local_1398;
  FWidgetReflectorNodeBase *local_1390;
  TReferenceControllerBase<1> *pTStack_1388;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_1380;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1368;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1350;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1338;
  FText local_1320;
  FString local_1310;
  FText local_1300;
  FText local_12f0;
  undefined1 local_12e0 [24];
  undefined1 local_12c8 [24];
  undefined1 local_12b0 [24];
  undefined1 local_1298 [24];
  undefined1 local_1280 [24];
  undefined1 local_1268 [24];
  undefined1 local_1250 [24];
  undefined1 local_1238 [24];
  undefined1 local_1220 [24];
  undefined1 local_1208 [24];
  undefined1 local_11f0 [24];
  undefined1 local_11d8 [24];
  undefined1 local_11c0 [24];
  undefined1 local_11a8 [24];
  undefined1 local_1190 [24];
  undefined1 local_1178 [24];
  undefined1 local_1160 [24];
  undefined1 local_1148 [24];
  undefined1 local_1130 [24];
  undefined1 local_1118 [24];
  undefined1 local_1100 [24];
  undefined1 local_10e8 [24];
  undefined1 local_10d0 [24];
  undefined1 local_10b8 [24];
  undefined1 local_10a0 [24];
  undefined1 local_1088 [24];
  undefined1 local_1070 [24];
  undefined1 local_1058 [24];
  undefined1 local_1040 [24];
  undefined1 local_1028 [24];
  undefined1 local_1010 [24];
  undefined1 local_ff8 [24];
  undefined8 *local_fe0 [2];
  TReferenceControllerBase<1> *local_fd0;
  undefined1 local_fb0 [40];
  FSlotArgumentsMixin local_f88;
  undefined8 *local_ef8 [2];
  TReferenceControllerBase<1> *local_ee8;
  undefined1 local_ec8 [40];
  FSlotArgumentsMixin local_ea0;
  FArguments local_e10;
  FArguments local_be8;
  FArguments local_9e0;
  FArguments local_600;
  FGeometry local_a8;
  FGeometry local_70;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x142e4155a;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_17c8;
  pTVar25 = (param_1->_WidgetInfoToVisualize).SharedReferenceCount.ReferenceController;
  pFVar27 = (param_1->_WidgetInfoToVisualize).Object;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1390 = (this->WidgetInfo).Object;
  pTStack_1388 = (this->WidgetInfo).SharedReferenceCount.ReferenceController;
  (this->WidgetInfo).Object = pFVar27;
  (this->WidgetInfo).SharedReferenceCount.ReferenceController = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1388);
  if (((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("WidgetInfo.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
                         ,0x15,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = FGeometry::FGeometry(&local_70);
  local_16f8 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  local_16f4 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  if (((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar27 = (this->WidgetInfo).Object;
  if ((pFVar27 == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar1 = (this->WidgetInfo).Object;
  local_16a4.Scale = (pFVar1->WidgetGeometry).Scale;
  local_16a4.Translation.field0_0x0 = (pFVar1->WidgetGeometry).AbsolutePosition.field0_0x0;
  if ((pFVar1 == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1694 = (((this->WidgetInfo).Object)->WidgetGeometry).Size;
  FGeometry::MakeChild
            (this_00,&local_a8,(FDeprecateVector2DParameter *)&local_1694,&local_16a4,
             &(pFVar27->WidgetGeometry).AccumulatedRenderTransform,
             (FDeprecateVector2DParameter *)&local_16f8);
  pFVar12 = FGeometry::ToString(&local_a8,&local_1310);
  pFVar13 = FText::FromString(&local_1320,pFVar12);
  FText::operator=(&this->SizeInfoText,pFVar13);
  if (local_1320.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1320.TextData.Reference + 0x10))();
  }
  if (local_1310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1310.Data.AllocatorInstance.Data);
  }
  bVar8 = false;
  pFVar13 = FText::GetEmpty();
  local_1708.TextData.Reference = (pFVar13->TextData).Reference;
  if (local_1708.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1708.TextData.Reference + 8))
              (local_1708.TextData.Reference,local_16a8);
  }
  pTVar25 = (this->WidgetInfo).SharedReferenceCount.ReferenceController;
  local_1708.Flags = pFVar13->Flags;
  pFVar27 = (this->WidgetInfo).Object;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar27 == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar10 = (**(code **)(pFVar27->_padding_ + 0x90))(pFVar27);
  if (cVar10 == '\0') {
    pTVar26 = pTVar25;
    if (pFVar27 != (FWidgetReflectorNodeBase *)0x0) {
      while( true ) {
        cVar10 = (**(code **)(pFVar27->_padding_ + 0x90))(pFVar27);
        if (cVar10 != '\0') {
          pFVar13 = FText::AsLocalizable_Advanced_LocText
                              (&local_12f0,L"SReflectorToolTipWidget",L"FromInvalidationRoot",
                               L"Controlled by an Invalidation Root");
          FText::operator=(&local_1708,pFVar13);
          local_1300.TextData.Reference = local_12f0.TextData.Reference;
          goto LAB_142e418f4;
        }
        if ((pFVar27 == (FWidgetReflectorNodeBase *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar26 = (pFVar27->ParentNode).WeakReferenceCount.ReferenceController;
        if (pTVar26 == (TReferenceControllerBase<1> *)0x0) break;
        aVar6 = pTVar26->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar25);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            pTVar26 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_142e418ff;
          }
          LOCK();
          aVar11 = pTVar26->SharedReferenceCount;
          bVar9 = aVar6 == aVar11;
          if (bVar9) {
            pTVar26->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar11 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar11;
        } while (!bVar9);
        pFVar27 = (pFVar27->ParentNode).Object;
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26)
        ;
        pTVar25 = pTVar26;
        if (pFVar27 == (FWidgetReflectorNodeBase *)0x0) goto LAB_142e418ff;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
  }
  else {
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1300,L"SReflectorToolTipWidget",L"IsInvalidationRoot",
                         L"Is an Invalidation Root");
    FText::operator=(&local_1708,pFVar13);
LAB_142e418f4:
    bVar8 = true;
    pTVar26 = pTVar25;
    if (local_1300.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1300.TextData.Reference + 0x10))();
    }
  }
LAB_142e418ff:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
  pFVar14 = SGridPanel::FArguments::FArguments(&local_e10);
  local_1740._0_4_ = 1.0;
  local_1740[4] = true;
  local_1728 = 0;
  local_1738.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1730.Data = (FScriptContainerElement *)0x0;
  pFVar14 = SGridPanel::FArguments::FillColumn(pFVar14,1,(TAttribute<float> *)local_1740);
  FLLMScope::FLLMScope(&local_1768,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1680 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1688,&local_1680,true);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_1380,"SGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
             ,0x32,&local_1788);
  FMemScope::~FMemScope(&local_1688);
  FLLMScope::~FLLMScope(&local_1768);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=(&local_1380,&local_1718,pFVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1380._Widget.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1738,(FWriteAccessScope *)&local_1610);
  if (((int)local_1728 != 0) && (FStack_1730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1730,0,0,0x10);
    local_1728 = local_1728 & 0xffffffff00000000;
  }
  if (local_1610.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1610.Accessor,&local_1610);
  }
  if (FStack_1730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1738.AccessDetector);
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_e10.RowFillCoefficients.AllocatorInstance.Data,
             local_e10.RowFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_e10.RowFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_e10.RowFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_e10.ColFillCoefficients.AllocatorInstance.Data,
             local_e10.ColFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_e10.ColFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_e10.ColFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<SGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_e10._Slots.AllocatorInstance.Data,local_e10._Slots.ArrayNum);
  if ((FSlotArguments *)local_e10._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_e10._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_e10);
  FVar7.ReferenceController = local_1718.SharedReferenceCount.ReferenceController;
  local_1780 = local_1718.Object;
  local_1758[0] = 0;
  local_1778 = local_1718.SharedReferenceCount.ReferenceController;
  if (local_1718.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1718.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1718.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1770 = local_1758;
  uStack_1790 = (ulonglong)uStack_1790._4_4_ << 0x20;
  local_1798 = GetWidgetsSourceName;
  local_15c8 = GetWidgetsSourceName;
  uStack_15c0 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_12e0,this,(pmf_1ceb03a4 *)&local_15c8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_15b8,L"SReflectorToolTipWidget",L"SourceName",L"Source");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_12e0);
  if (local_15b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_15b8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_12c8);
  if ((void *)local_12c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_12c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_12c8);
  if ((ITextData *)local_12e0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_12e0._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetWidgetsDesiredSize;
  local_15a8 = GetWidgetsDesiredSize;
  uStack_15a0 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_12b0,this,(pmf_1ceb03a4 *)&local_15a8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1598,L"SReflectorToolTipWidget",L"DesiredSize",L"Desired Size");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_12b0);
  if (local_1598.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1598.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1298);
  if ((void *)local_1298._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1298._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1298);
  if ((ITextData *)local_12b0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_12b0._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetWidgetActualSize;
  local_1588 = GetWidgetActualSize;
  uStack_1580 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_1280,this,(pmf_1ceb03a4 *)&local_1588);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1578,L"SReflectorToolTipWidget",L"ActualSize",L"Actual Size");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_1280);
  if (local_1578.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1578.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1268);
  if ((void *)local_1268._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1268._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1268);
  if ((ITextData *)local_1280._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1280._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetSizeInfo;
  local_1568 = GetSizeInfo;
  uStack_1560 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_1250,this,(pmf_1ceb03a4 *)&local_1568);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1558,L"SReflectorToolTipWidget",L"SizeInfo",L"Size Info");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_1250);
  if (local_1558.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1558.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1238);
  if ((void *)local_1238._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1238._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1238);
  if ((ITextData *)local_1250._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1250._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetEnabled;
  local_1548 = GetEnabled;
  uStack_1540 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_1220,this,(pmf_1ceb03a4 *)&local_1548);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1538,L"SReflectorToolTipWidget",L"Enabled",L"Enabled");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_1220);
  if (local_1538.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1538.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1208);
  if ((void *)local_1208._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1208._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1208);
  if ((ITextData *)local_1220._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1220._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetNeedsTick;
  local_1528 = GetNeedsTick;
  uStack_1520 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_11f0,this,(pmf_1ceb03a4 *)&local_1528);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1518,L"SReflectorToolTipWidget",L"NeedsTick",L"Needs Tick");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_11f0);
  if (local_1518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1518.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11d8);
  if ((void *)local_11d8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11d8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11d8);
  if ((ITextData *)local_11f0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_11f0._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetIsVolatile;
  local_1508 = GetIsVolatile;
  uStack_1500 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_11c0,this,(pmf_1ceb03a4 *)&local_1508);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_14f8,L"SReflectorToolTipWidget",L"IsVolatile",L"Is Volatile");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_11c0);
  if (local_14f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14f8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_11a8);
  if ((void *)local_11a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_11a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11a8);
  if ((ITextData *)local_11c0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_11c0._0_8_ + 0x10))();
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetIsVolatileIndirectly;
  local_14e8 = GetIsVolatileIndirectly;
  uStack_14e0 = uStack_1790;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_1190,this,(pmf_1ceb03a4 *)&local_14e8);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_14d8,L"SReflectorToolTipWidget",L"IsVolatileIndirectly",
                       L"Is Volatile Indirectly");
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_1190);
  if (local_14d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14d8.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1178);
  if ((void *)local_1178._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1178._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1178);
  if ((ITextData *)local_1190._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1190._0_8_ + 0x10))();
  }
  if (bVar8) {
    uStack_1790 = uStack_1790 & 0xffffffff00000000;
    local_1798 = GetIsVisible;
    local_14c8 = GetIsVisible;
    uStack_14c0 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1160,this,(pmf_1ceb03a4 *)&local_14c8);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_14b8,L"SReflectorToolTipWidget",L"IsVisible",L"Is Visible");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1160);
    if (local_14b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_14b8.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1148);
    if ((void *)local_1148._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1148._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1148);
    if ((ITextData *)local_1160._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1160._0_8_ + 0x10))();
    }
    uStack_1790 = uStack_1790 & 0xffffffff00000000;
    local_1798 = GetIsVisibleInherited;
    local_14a8 = GetIsVisibleInherited;
    uStack_14a0 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1130,this,(pmf_1ceb03a4 *)&local_14a8);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1498,L"SReflectorToolTipWidget",L"IsVisibleInherited",
                         L"Is Visible Inherited");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1130);
    if (local_1498.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1498.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1118);
    if ((void *)local_1118._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1118._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1118);
    if ((ITextData *)local_1130._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1130._0_8_ + 0x10))();
    }
    uStack_1790 = uStack_1790 & 0xffffffff00000000;
    local_1798 = GetSupportsInvalidation;
    local_1488 = GetSupportsInvalidation;
    uStack_1480 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1100,this,(pmf_1ceb03a4 *)&local_1488);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1478,L"SReflectorToolTipWidget",L"SupportsInvalidation",
                         L"Supports Invalidation");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1100);
    if (local_1478.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1478.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10e8);
    if ((void *)local_10e8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_10e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_10e8);
    if ((ITextData *)local_1100._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1100._0_8_ + 0x10))();
    }
    uStack_1790 = uStack_1790 & 0xffffffff00000000;
    local_1798 = GetSupportsInvalidationRecursive;
    local_1468 = GetSupportsInvalidationRecursive;
    uStack_1460 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_10d0,this,(pmf_1ceb03a4 *)&local_1468);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1458,L"SReflectorToolTipWidget",L"SupportsInvalidationRecursive",
                         L"Recursively Supports Invalidation");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_10d0);
    if (local_1458.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1458.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_10b8);
    if ((void *)local_10b8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_10b8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_10b8);
    if ((ITextData *)local_10d0._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_10d0._0_8_ + 0x10))();
    }
  }
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  local_1798 = GetHasActiveTimers;
  TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
            ((TAttribute<FText> *)local_10a0,this,(pmf_1ceb03a4 *)&local_1798);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_1448,L"SReflectorToolTipWidget",L"HasActiveTimers",L"Has Active Timer"
                      );
  `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
            (&local_1780,pFVar13,(TAttribute<FText> *)local_10a0);
  if (local_1448.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1448.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1088);
  if ((void *)local_1088._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1088._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1088);
  if ((ITextData *)local_10a0._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_10a0._0_8_ + 0x10))();
  }
  if (((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar10 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 8))();
  uStack_1790 = uStack_1790 & 0xffffffff00000000;
  if (cVar10 == '\0') {
    local_1798 = GetLiveAttributeName;
    local_1438 = GetLiveAttributeName;
    uStack_1430 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1070,this,(pmf_1ceb03a4 *)&local_1438);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1428,L"SReflectorToolTipWidget",L"HasRegisteredAttribute",
                         L"Attributes");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1070);
    if (local_1428.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1428.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1058);
    if ((void *)local_1058._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1058._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1058);
  }
  else {
    local_1798 = GetAttributeCount;
    local_1418 = GetAttributeCount;
    uStack_1410 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1040,this,(pmf_1ceb03a4 *)&local_1418);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_1408,L"SReflectorToolTipWidget",L"HasRegisteredAttribute",
                         L"Attributes");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1040);
    if (local_1408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1408.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1028);
    if ((void *)local_1028._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_1028._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1028);
    if ((ITextData *)local_1040._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_1040._0_8_ + 0x10))();
    }
    uStack_1790 = uStack_1790 & 0xffffffff00000000;
    local_1798 = GetCollapsedAttributeCount;
    local_13f8 = GetCollapsedAttributeCount;
    uStack_13f0 = uStack_1790;
    TAttribute<FText>::TAttribute<FText><SReflectorToolTipWidget>
              ((TAttribute<FText> *)local_1010,this,(pmf_1ceb03a4 *)&local_13f8);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_13e8,L"SReflectorToolTipWidget",L"HasCollapsedAttribute",
                         L"Affect Visibility Attributes");
    `SReflectorToolTipWidget::Construct'::__l21::<lambda_1>::operator()
              (&local_1780,pFVar13,(TAttribute<FText> *)local_1010);
    if (local_13e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_13e8.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ff8);
    if ((void *)local_ff8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ff8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ff8);
    local_1070._0_8_ = local_1010._0_8_;
  }
  if ((ITextData *)local_1070._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_1070._0_8_ + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1778);
  if (bVar8) {
    pFVar15 = SVerticalBox::FArguments::FArguments(&local_be8);
    pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_ef8);
    pFVar16 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar16);
    pFVar17 = SBorder::FArguments::FArguments(&local_9e0);
    pIVar18 = FAppStyle::Get();
    pcVar4 = *(code **)((longlong)*pIVar18 + 0x50);
    pFVar19 = ::FName::FName(&local_1398,"ToolPanel.GroupBorder");
    local_1638.Value = (FSlateBrush *)(*pcVar4)(pIVar18,*pFVar19);
    local_1638.bIsSet = true;
    local_1638.Getter._16_8_ = 0;
    local_1638.Getter._0_8_ = 0;
    local_1638.Getter._8_8_ = 0;
    pFVar17 = SBorder::FArguments::BorderImage(pFVar17,&local_1638);
    pFVar17->_HAlign = HAlign_Center;
    pFVar20 = STextBlock::FArguments::FArguments(&local_600);
    local_15f8.Value.TextData.Reference = local_1708.TextData.Reference;
    if (local_1708.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1708.TextData.Reference + 8))
                (local_1708.TextData.Reference,local_1698);
    }
    local_15f8.Value.Flags = local_1708.Flags;
    local_15f8.Getter._16_8_ = 0;
    local_15f8.bIsSet = true;
    local_15f8.Getter._0_8_ = 0;
    local_15f8.Getter._8_8_ = 0;
    pFVar20 = STextBlock::FArguments::Text(pFVar20,&local_15f8);
    FLLMScope::FLLMScope(&local_1764,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1678 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1670,&local_1678,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1338,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
               ,0x6f,&local_1787);
    FMemScope::~FMemScope(&local_1670);
    FLLMScope::~FLLMScope(&local_1764);
    pTVar21 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1338,&local_13b8,pFVar20);
    pTVar25 = (pTVar21->SharedReferenceCount).ReferenceController;
    local_16f0 = pTVar21->Object;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar26 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar17->_Content).Widget.Object = (SWidget *)local_16f0;
    (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar25;
    pTStack_16e8 = pTVar25;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
    FLLMScope::FLLMScope(&local_1760,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1668 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1660,&local_1668,true);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
              (&local_1350,"SBorder",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
               ,0x6b,&local_1786);
    FMemScope::~FMemScope(&local_1660);
    FLLMScope::~FLLMScope(&local_1760);
    pTVar22 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1350,&local_13c8,pFVar17);
    pTVar26 = (pTVar22->SharedReferenceCount).ReferenceController;
    local_1750 = pTVar22->Object;
    if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1748.ReferenceController = pTVar26;
    if ((SBorder **)&pFVar16->field_0x8 != &local_1750) {
      *(SBorder **)&pFVar16->field_0x8 = local_1750;
      local_1750 = (SBorder *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar16->field_0x10,&local_1748);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1748.ReferenceController);
    pFVar15 = SVerticalBox::FArguments::operator+(pFVar15,pFVar16);
    pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_fe0);
    local_1658.Value = 1.0;
    local_1658.bIsSet = true;
    local_1658.Getter._0_8_ = 0;
    local_1658.Getter._8_8_ = 0;
    local_1658.Getter._16_8_ = 0;
    pFVar16 = SVerticalBox::FSlot::FSlotArguments::FillHeight(pFVar16,&local_1658);
    if (FVar7.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar24 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar24 = &(FVar7.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    local_16d8 = local_1718.Object;
    FStack_16d0.ReferenceController = local_1718.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    if ((SGridPanel **)&pFVar16->field_0x8 != &local_16d8) {
      *(SGridPanel **)&pFVar16->field_0x8 = local_1718.Object;
      local_16d8 = (SGridPanel *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar16->field_0x10,&FStack_16d0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_16d0.ReferenceController);
    pFVar15 = SVerticalBox::FArguments::operator+(pFVar15,pFVar16);
    FLLMScope::FLLMScope(&local_175c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_16b8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_16b0,&local_16b8,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_1368,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetReflectorToolTipWidget.cpp"
               ,0x67,local_1785);
    FMemScope::~FMemScope(&local_16b0);
    FLLMScope::~FLLMScope(&local_175c);
    pTVar23 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1368,&local_13d8,pFVar15);
    this_01 = &this->_padding_;
    pTVar2 = (pTVar23->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar23->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      FSlotBase::DetatchParentFromContent((FSlotBase *)this_01);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)pSVar3;
    this->_padding_ = (longlong)pTVar2;
    local_16c8 = pSVar3;
    pTStack_16c0 = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_01);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1368._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_f88);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_fb0);
    if ((void *)local_fb0._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_fb0._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_fb0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_fd0);
    if (local_fe0[0] != (undefined8 *)0x0) {
      (**(code **)*local_fe0[0])(local_fe0[0],1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1350._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_13b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1338._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_600);
    SBorder::FArguments::~FArguments(&local_9e0);
    TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
              (&local_ea0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_ec8);
    if ((void *)local_ec8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_ec8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_ec8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_ee8);
    if (local_ef8[0] != (undefined8 *)0x0) {
      (**(code **)*local_ef8[0])(local_ef8[0],1);
    }
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_be8._Slots.AllocatorInstance.Data,local_be8._Slots.ArrayNum);
    if ((FSlotArguments *)local_be8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_be8._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_be8);
  }
  else {
    local_13a8.Object = (SWidget *)local_1718.Object;
    local_13a8.SharedReferenceCount.ReferenceController =
         local_1718.SharedReferenceCount.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_13a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  if (local_1708.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1708.TextData.Reference + 0x10))();
  }
  return;
}

// GetAttributeCount @ 142e97bd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
SReflectorToolTipWidget::GetAttributeCount
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x98))();
  FText::AsNumber(__return_storage_ptr__,iVar3,(FNumberFormattingOptions *)0x0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetCollapsedAttributeCount @ 142e9a3a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FText * __thiscall
SReflectorToolTipWidget::GetCollapsedAttributeCount
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  TSharedPtr<FCulture,1> local_18;
  
  local_18.Object = (FCulture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar1)();
      return pFVar4;
    }
  }
  iVar3 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0xa0))();
  FText::AsNumber(__return_storage_ptr__,iVar3,(FNumberFormattingOptions *)0x0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetEnabled @ 142e9cca0

FText * __thiscall
SReflectorToolTipWidget::GetEnabled(SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0xe8))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetHasActiveTimers @ 142e9f0a0

FText * __thiscall
SReflectorToolTipWidget::GetHasActiveTimers
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x88))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetIsVisible @ 142e9f690

FText * __thiscall
SReflectorToolTipWidget::GetIsVisible(SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x50))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetIsVisibleInherited @ 142e9f730

FText * __thiscall
SReflectorToolTipWidget::GetIsVisibleInherited
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x58))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetIsVolatile @ 142e9f7d0

FText * __thiscall
SReflectorToolTipWidget::GetIsVolatile(SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x78))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetIsVolatileIndirectly @ 142e9f870

FText * __thiscall
SReflectorToolTipWidget::GetIsVolatileIndirectly
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x80))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetLiveAttributeName @ 142ea0080

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
SReflectorToolTipWidget::GetLiveAttributeName
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  FName *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FSlateAttributeMetaData *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  int iVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [16];
  uint local_res18 [2];
  int local_res20 [2];
  TArray<FText,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_b8;
  SWidget *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [8];
  FName local_90;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FTextFormat local_48;
  
  if (((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FText *)(*pcVar3)();
    return pFVar6;
  }
  (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x10))();
  if ((local_a8 == (SWidget *)0x0) ||
     (pFVar7 = FSlateAttributeMetaData::FindMetaData(local_a8),
     pFVar7 == (FSlateAttributeMetaData *)0x0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_98);
    }
    __return_storage_ptr__->Flags = pFVar6->Flags;
  }
  else {
    FSlateAttributeMetaData::GetAttributeNames(&local_b8,local_a8);
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    iVar10 = local_b8.ArrayNum;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_b8._8_8_ & 0xffffffff);
    }
    if (0 < iVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar10,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    }
    iVar10 = local_b8.ArrayNum;
    pFVar1 = (FName *)(local_b8.AllocatorInstance.Data + (longlong)iVar10 * 8);
    FVar11.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if ((FName *)FVar11.Data == pFVar1) break;
      local_90 = *(FName *)FVar11.Data;
      pFVar6 = FText::FromName(&local_88,&local_90);
      if (((local_c8.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < (FText *)(local_c8.AllocatorInstance.Data + (longlong)local_c8.ArrayMax * 0x10))
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar3)();
        return pFVar6;
      }
      iVar5 = local_c8.ArrayNum;
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      local_c8.ArrayNum = iVar5 + 1;
      FText::FText((FText *)(local_c8.AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar6);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FVar11.Data = FVar11.Data + 8;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"SReflectorToolTipWidget",L"LiveAttributeNamesDelimiter",L"\n  ")
    ;
    pFVar6 = FText::Join(&local_68,pFVar6,&local_c8);
    local_res18[0] = (uint)pFVar7->AffectVisibilityCounter;
    local_res20[0] = (pFVar7->Attributes).ArrayNum;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"SReflectorToolTipWidget",L"LiveAttributeNames",
                        L"{0} ({1} affect widget visibility) \n  {2}");
    pFVar9 = FTextFormat::FTextFormat(&local_48,pFVar8,Default);
    FText::FormatOrdered<int,int,FText>
              (__return_storage_ptr__,pFVar9,local_res20,(int *)local_res18,pFVar6);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    DestructItems<FText,int>((FText *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FText *)local_c8.AllocatorInstance.Data != (FText *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  }
  return __return_storage_ptr__;
}

// GetNeedsTick @ 142ea0750

FText * __thiscall
SReflectorToolTipWidget::GetNeedsTick(SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x70))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetSizeInfo @ 142ea81e0

FText * __thiscall
SReflectorToolTipWidget::GetSizeInfo(SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->SizeInfoText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->SizeInfoText).Flags;
  return __return_storage_ptr__;
}

// GetSupportsInvalidation @ 142ea82b0

FText * __thiscall
SReflectorToolTipWidget::GetSupportsInvalidation
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x60))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetSupportsInvalidationRecursive @ 142ea83c0

FText * __thiscall
SReflectorToolTipWidget::GetSupportsInvalidationRecursive
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FText *pFVar5;
  undefined1 local_res8 [8];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar2)();
      return pFVar5;
    }
  }
  cVar4 = (**(code **)(((this->WidgetInfo).Object)->_padding_ + 0x68))();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pFVar5 = &FalseText;
  if (cVar4 != '\0') {
    pFVar5 = &TrueText;
  }
  pIVar1 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar5->Flags;
  return __return_storage_ptr__;
}

// GetWidgetActualSize @ 142ea9de0

FText * __thiscall
SReflectorToolTipWidget::GetWidgetActualSize
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FString local_18;
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f");
  FText::FromString(__return_storage_ptr__,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWidgetsDesiredSize @ 142eac530

FText * __thiscall
SReflectorToolTipWidget::GetWidgetsDesiredSize
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  FWidgetReflectorNodeBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FString local_28;
  undefined1 local_18 [16];
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->WidgetInfo).Object;
  (**(code **)(pFVar1->_padding_ + 0xd0))(pFVar1,local_18);
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
  FText::FromString(__return_storage_ptr__,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetWidgetsSourceName @ 142eac5e0

FText * __thiscall
SReflectorToolTipWidget::GetWidgetsSourceName
          (SReflectorToolTipWidget *this,FText *__return_storage_ptr__)

{
  FWidgetReflectorNodeBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  
  if ((this->WidgetInfo).Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FText *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->WidgetInfo).Object;
  (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

