// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 15

// ~SDetailView @ 142e14b70

void __thiscall SNavigationSimulationListInternal::SDetailView::~SDetailView(SDetailView *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigateToSnapshotWidget);
  pvVar1 = *(void **)&(this->OnNavigateToSnapshotWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigateToSnapshotWidget);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNavigateToLiveWidget);
  pvVar1 = *(void **)&(this->OnNavigateToLiveWidget).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNavigateToLiveWidget);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DetailOwner).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WidgetItem).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// BuildContent @ 142e2d320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
SNavigationSimulationListInternal::SDetailView::BuildContent
          (SDetailView *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  EUINavigationRule EVar1;
  byte bVar2;
  int iVar3;
  ERoutedReason EVar4;
  FNavigationSimulationWidgetNode *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FText *pFVar12;
  FText *pFVar13;
  FScopedWidgetSlotArguments *pFVar14;
  FArguments *pFVar15;
  TSharedRef<SSeparator,1> *pTVar16;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar17;
  atomic<int> *paVar18;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar19;
  undefined1 auStackY_878 [32];
  undefined1 local_848;
  T0RequiredArgs local_847;
  T0RequiredArgs local_846 [2];
  FLLMScope local_844;
  FLLMScope local_840 [2];
  SSeparator *local_838;
  FSharedReferencer<1> local_830;
  undefined1 local_828 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_820;
  ForAnyElementType FStack_818;
  ulonglong local_810;
  undefined1 local_808 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_800;
  ForAnyElementType FStack_7f8;
  ulonglong local_7f0;
  FMemScope local_7e8;
  FName local_7e0;
  FMemScope local_7d8;
  FName local_7d0;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FText local_780;
  TSharedRef<SSeparator,1> local_770;
  TSharedRef<SGridPanel,1> local_758;
  FText local_748;
  TSharedRef<SGridPanel,1> local_738;
  FText local_728;
  TSharedRef<SGridPanel,1> local_718;
  FText local_708;
  TSharedRef<SGridPanel,1> local_6f8;
  FText local_6e8;
  TSharedRef<SGridPanel,1> local_6d8;
  FText local_6c8;
  FText local_6b8;
  TSharedRef<SGridPanel,1> local_6a8;
  FText local_698;
  TSharedRef<SGridPanel,1> local_688;
  FText local_678;
  TSharedRef<SGridPanel,1> local_668;
  FText local_658;
  TSharedRef<SGridPanel,1> local_648;
  FText local_638;
  TSharedRef<SGridPanel,1> local_628;
  FText local_618;
  undefined4 local_608 [4];
  TSharedRef<SGridPanel,1> local_5f8;
  TSharedRef<SGridPanel,1> local_5e8;
  TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs> local_5d8;
  FText local_5c0;
  TSharedRef<SGridPanel,1> local_5a8;
  FArguments local_598;
  undefined1 local_370 [544];
  undefined1 local_150 [24];
  FScopedWidgetSlotArguments local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_878;
  __return_storage_ptr__->Object = SNullWidget::NullWidget.Object;
  FVar8 = SNullWidget::NullWidget.SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar18 = &(FVar8.ReferenceController)->SharedReferenceCount;
    *paVar18 = (atomic<int>)((int)*paVar18 + 1);
    UNLOCK();
  }
  pFVar5 = (this->WidgetItem).Object;
  if (pFVar5 != (FNavigationSimulationWidgetNode *)0x0) {
    FVar17 = (pFVar5->Simulations).AllocatorInstance.SecondaryData;
    FVar19 = FVar17;
    if (FVar17 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar19 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar5->Simulations;
    }
    iVar3 = (pFVar5->Simulations).ArrayNum;
    if (FVar17 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar17 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar5->Simulations;
    }
    while( true ) {
      if ((pFVar5->Simulations).ArrayNum != iVar3) {
        local_848 = 0;
        `TCheckedPointerIterator<FNavigationSimulationWidgetNodeItem,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_848);
      }
      if (FVar19 == (ForElementType<FNavigationSimulationWidgetNodeItem>)
                    ((longlong)FVar17 + (longlong)iVar3 * 0x220)) {
        return __return_storage_ptr__;
      }
      if (*(EUINavigation *)FVar19 == this->CurrentNavigationToDisplay) break;
      FVar19 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar19 + 0x220);
    }
    pFVar10 = SGridPanel::FArguments::FArguments(&local_598);
    local_808._0_4_ = 0.5;
    local_808[4] = true;
    local_7f0 = 0;
    local_800.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7f8.Data = (FScriptContainerElement *)0x0;
    pFVar10 = SGridPanel::FArguments::FillColumn(pFVar10,0,(TAttribute<float> *)local_808);
    local_828._0_4_ = 0.5;
    local_828[4] = true;
    local_810 = 0;
    local_820.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_818.Data = (FScriptContainerElement *)0x0;
    pFVar10 = SGridPanel::FArguments::FillColumn(pFVar10,1,(TAttribute<float> *)local_828);
    FLLMScope::FLLMScope(&local_844,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_7d0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_7e8,&local_7d0,true);
    TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
              (&local_7c8,"SGridPanel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
               ,0x236,&local_847);
    FMemScope::~FMemScope(&local_7e8);
    FLLMScope::~FLLMScope(&local_844);
    if ((local_7c8._Widget.Object == (SGridPanel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar11;
    }
    FVar8.ReferenceController = local_7c8._Widget.SharedReferenceCount.ReferenceController;
    if (local_7c8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if ((local_7c8._Widget.Object == (SGridPanel *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar11;
    }
    if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->Object = (SWidget *)local_7c8._Widget.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar8.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::operator<<=(&local_7c8,&local_5f8,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c8._Widget.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_820,(FWriteAccessScope *)&local_7b0);
    if (((int)local_810 != 0) && (FStack_818.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_818.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_818,0,0,0x10);
      local_810 = local_810 & 0xffffffff00000000;
    }
    if (local_7b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
    }
    if (FStack_818.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_818.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_820.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_800,(FWriteAccessScope *)&local_798);
    if (((int)local_7f0 != 0) && (FStack_7f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7f8,0,0,0x10);
      local_7f0 = local_7f0 & 0xffffffff00000000;
    }
    if (local_798.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
    }
    if (FStack_7f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_800.AccessDetector);
    DestructItems<TAttribute<float>,int>
              ((TAttribute<float> *)local_598.RowFillCoefficients.AllocatorInstance.Data,
               local_598.RowFillCoefficients.ArrayNum);
    if ((TAttribute<float> *)local_598.RowFillCoefficients.AllocatorInstance.Data !=
        (TAttribute<float> *)0x0) {
      FMemory::Free(local_598.RowFillCoefficients.AllocatorInstance.Data);
    }
    DestructItems<TAttribute<float>,int>
              ((TAttribute<float> *)local_598.ColFillCoefficients.AllocatorInstance.Data,
               local_598.ColFillCoefficients.ArrayNum);
    if ((TAttribute<float> *)local_598.ColFillCoefficients.AllocatorInstance.Data !=
        (TAttribute<float> *)0x0) {
      FMemory::Free(local_598.ColFillCoefficients.AllocatorInstance.Data);
    }
    DestructItems<SGridPanel::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_598._Slots.AllocatorInstance.Data,local_598._Slots.ArrayNum);
    if ((FSlotArguments *)local_598._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_598._Slots.AllocatorInstance.Data);
    }
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_598);
    if (((this->WidgetItem).Object == (FNavigationSimulationWidgetNode *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar11;
    }
    pFVar5 = (this->WidgetItem).Object;
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_5c0,L"SSlateNavigationSimulation",L"NavigationSourceLabel",L"Source"
                        );
    local_5e8.Object = local_5f8.Object;
    local_5e8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar18 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar18 = &(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_5e8,0,pFVar13,pFVar12,&pFVar5->NavigationSource);
    if (local_5c0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5c0.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_780,L"SSlateNavigationSimulation",L"NavigationDestinationLabel",
                         L"Destination");
    local_5a8.Object = local_5f8.Object;
    local_5a8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_5a8,1,pFVar13,pFVar12,
              (FNavigationSimulationWidgetInfo *)((longlong)FVar19 + 8));
    if (local_780.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_780.TextData.Reference + 0x10))();
    }
    pFVar14 = SGridPanel::AddSlot(local_5f8.Object,&local_138,0,2,(Layer)0x0);
    if ((longlong *)local_608 != &pFVar14->_padding_) {
      *(undefined4 *)&pFVar14->_padding_ = 2;
      *(undefined1 *)((longlong)&pFVar14->_padding_ + 4) = 1;
    }
    pFVar15 = SSeparator::FArguments::FArguments((FArguments *)local_370);
    FLLMScope::FLLMScope(local_840,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_7e0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_7d8,&local_7e0,true);
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>
              (&local_5d8,"SSeparator",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
               ,0x24a,local_846);
    FMemScope::~FMemScope(&local_7d8);
    FLLMScope::~FLLMScope(local_840);
    pTVar16 = TSlateDecl<SSeparator,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5d8,&local_770,pFVar15);
    pTVar6 = (pTVar16->SharedReferenceCount).ReferenceController;
    local_838 = pTVar16->Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_830.ReferenceController = pTVar6;
    if ((SSeparator **)&pFVar14->_padding_ != &local_838) {
      pFVar14->_padding_ = (longlong)local_838;
      local_838 = (SSeparator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_830);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_770.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d8._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_150);
    if ((void *)local_150._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_150._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_150);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_370);
    TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_138);
    EVar4 = *(ERoutedReason *)((longlong)FVar19 + 0x144);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_748,L"SSlateNavigationSimulation",L"RoutedReasonLabel",L"Routed");
    local_758.Object = local_5f8.Object;
    local_758.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      paVar18 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar18 = &(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_758,3,pFVar13,pFVar12,EVar4);
    if (local_748.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_748.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_728,L"SSlateNavigationSimulation",L"ReplyEventHandlerLabel",
                         L"Reply Event Handler");
    local_738.Object = local_5f8.Object;
    local_738.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_738,4,pFVar13,pFVar12,
              (FNavigationSimulationWidgetInfo *)((longlong)FVar19 + 0x70));
    if (local_728.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_728.TextData.Reference + 0x10))();
    }
    EVar1 = *(EUINavigationRule *)((longlong)FVar19 + 0x140);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_708,L"SSlateNavigationSimulation",L"ReplyBoundaryRuleLabel",
                         L"Reply Boundary Rule");
    local_718.Object = local_5f8.Object;
    local_718.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_718,5,pFVar13,pFVar12,EVar1);
    if (local_708.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_708.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_6e8,L"SSlateNavigationSimulation",L"ReplyFocusRecipientLabel",
                         L"Reply Focus Recipient (Custom)");
    local_6f8.Object = local_5f8.Object;
    local_6f8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_6f8,6,pFVar13,pFVar12,
              (FNavigationSimulationWidgetInfo *)((longlong)FVar19 + 0xd8));
    if (local_6e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_6b8,L"SSlateNavigationSimulation",
                         L"WidgetThatShouldReceivedFocusTooltip",
                         L"Widget that should received the focus after the navigation.");
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_6c8,L"SSlateNavigationSimulation",
                         L"WidgetThatShouldReceivedFocusLabel",L"Should Focus");
    local_6d8.Object = local_5f8.Object;
    local_6d8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_6d8,7,pFVar13,pFVar12,
              (FNavigationSimulationWidgetInfo *)((longlong)FVar19 + 0x148));
    if (local_6c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6c8.TextData.Reference + 0x10))();
    }
    if (local_6b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6b8.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_698,L"SSlateNavigationSimulation",L"NavigationFocusedLabel",
                         L"Focused");
    local_6a8.Object = local_5f8.Object;
    local_6a8.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_6a8,8,pFVar13,pFVar12,
              (FNavigationSimulationWidgetInfo *)((longlong)FVar19 + 0x1b0));
    if (local_698.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_698.TextData.Reference + 0x10))();
    }
    bVar2 = *(byte *)((longlong)FVar19 + 0x218);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_678,L"SSlateNavigationSimulation",L"IsDynamicLabel",L"Is Dynamic");
    local_688.Object = local_5f8.Object;
    local_688.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_688,9,pFVar13,pFVar12,bVar2 & 1);
    if (local_678.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_678.TextData.Reference + 0x10))();
    }
    bVar2 = *(byte *)((longlong)FVar19 + 0x218);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_658,L"SSlateNavigationSimulation",
                         L"AlwaysHandleNavigationAttemptLabel",L"Always Handle Navigation");
    local_668.Object = local_5f8.Object;
    local_668.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_668,10,pFVar13,pFVar12,bVar2 >> 1 & 1);
    if (local_658.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_658.TextData.Reference + 0x10))();
    }
    bVar2 = *(byte *)((longlong)FVar19 + 0x218);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_638,L"SSlateNavigationSimulation",L"CanFindWidgetForSetFocusLabel",
                         L"Can Find Widget for Set Focus");
    local_648.Object = local_5f8.Object;
    local_648.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_648,0xb,pFVar13,pFVar12,bVar2 >> 2 & 1);
    if (local_638.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_638.TextData.Reference + 0x10))();
    }
    bVar2 = *(byte *)((longlong)FVar19 + 0x218);
    pFVar12 = FText::GetEmpty();
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        (&local_618,L"SSlateNavigationSimulation",
                         L"RoutedHandlerHasNavigationMetaLabel",L"Reply Event Handler has Meta Data"
                        );
    local_628.Object = local_5f8.Object;
    local_628.SharedReferenceCount.ReferenceController =
         local_5f8.SharedReferenceCount.ReferenceController;
    if (local_5f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_5f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    BuildSlot(this,&local_628,0xc,pFVar13,pFVar12,bVar2 >> 3 & 1);
    if (local_618.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5f8.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// BuildNaviationSlot @ 142e2dec0

/* WARNING: Removing unreachable block (ram,0x000142e2e387) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<SWidget,1> * __thiscall
SNavigationSimulationListInternal::SDetailView::BuildNaviationSlot
          (SDetailView *this,TSharedRef<SWidget,1> *__return_storage_ptr__,EUINavigation param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  FArguments *pFVar11;
  TSharedRef<SWidget,1> *pTVar12;
  FCheckBoxStyle *pFVar13;
  undefined8 *puVar14;
  TSharedRef<SWidget_const_,1> *pTVar15;
  ulong64 uVar16;
  FArguments *pFVar17;
  FArguments *pFVar18;
  UEnum *this_00;
  TSharedRef<STextBlock,1> *pTVar19;
  TSharedRef<SBox,1> *pTVar20;
  TSharedRef<SCheckBox,1> *pTVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined4 local_res20 [2];
  T0RequiredArgs local_f28;
  T0RequiredArgs local_f27 [3];
  FLLMScope local_f24;
  FLLMScope local_f20;
  FLLMScope local_f1c;
  code *local_f18;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  bool local_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined4 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8 [8];
  ForAnyElementType FStack_ee0;
  ulonglong local_ed8;
  FText local_ed0;
  bool local_ec0;
  undefined1 local_eb8 [8];
  ForAnyElementType FStack_eb0;
  ulonglong local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined1 local_e90;
  undefined1 local_e88 [8];
  ForAnyElementType FStack_e80;
  ulonglong local_e78;
  STextBlock *local_e70;
  TReferenceControllerBase<1> *pTStack_e68;
  SBox *local_e60;
  TReferenceControllerBase<1> *pTStack_e58;
  TSharedRef<STextBlock,1> local_e50;
  FName local_e40;
  FName local_e38;
  FMemScope local_e30;
  FName local_e28;
  FMemScope local_e20;
  FName local_e18;
  FMemScope local_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined4 local_df8;
  FText local_df0;
  FDestructionSentinel local_de0;
  FDestructionSentinel local_dc8;
  FDestructionSentinel local_db0;
  undefined1 *local_d98;
  FDestructionSentinel local_d90;
  undefined1 *local_d78;
  FDestructionSentinel local_d70;
  longlong *local_d58;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_d50;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_d38;
  TSharedRef<SBox,1> local_d20;
  TSharedRef<SWidget_const_,1> local_d10;
  TSharedRef<SWidget,1> local_d00;
  TSharedRef<SWidget_const_,1> local_cf0;
  TSharedRef<SCheckBox,1> local_ce0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_cd0;
  FArguments local_cb8;
  FArguments local_978;
  FArguments local_598;
  
  local_res20[0] = 0;
  bVar6 = false;
  bVar5 = false;
  bVar10 = false;
  pFVar11 = SCheckBox::FArguments::FArguments(&local_978);
  ::FName::FName(&local_e40,"CheckBox");
  if ((FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  pFVar13 = (FCheckBoxStyle *)
            (**(code **)((FWidgetReflectorStyle::StyleInstance.Object)->_padding_ + 0xa0))
                      (FWidgetReflectorStyle::StyleInstance.Object,FCheckBoxStyle::TypeName,
                       local_e40,0,1);
  if (pFVar13 == (FCheckBoxStyle *)0x0) {
    pFVar13 = FCheckBoxStyle::GetDefault();
  }
  uStack_ef8 = _UNK_15090c6d8;
  local_f00 = ___xmm_3f8000003f800000000000003f800000;
  pFVar11->_Style = pFVar13;
  local_eec = 1;
  local_df8 = CONCAT22(local_df8._2_2_,2);
  uVar7 = local_df8;
  local_ef0 = local_df8;
  local_ed8 = 0;
  local_ee8 = (undefined1  [8])0x0;
  FStack_ee0.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar11->_ForegroundColor).Value.SpecifiedColor.field0_0x0 = local_f00;
  *(undefined8 *)((longlong)&(pFVar11->_ForegroundColor).Value.SpecifiedColor.field0_0x0 + 8) =
       uStack_ef8;
  local_df8._0_1_ = (undefined1)2;
  local_df8._1_1_ = (undefined1)(2 >> 8);
  (pFVar11->_ForegroundColor).Value.ColorUseRule = (undefined1)local_df8;
  (pFVar11->_ForegroundColor).Value.ColorTableId = local_df8._1_1_;
  *(undefined2 *)&(pFVar11->_ForegroundColor).Value.field_0x12 = local_df8._2_2_;
  (pFVar11->_ForegroundColor).bIsSet = true;
  local_e08 = local_f00;
  uStack_e00 = uStack_ef8;
  local_df8 = uVar7;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_ForegroundColor).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_ee8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_ee8,
             (FWriteAccessScope *)&local_de0);
  if (((int)local_ed8 != 0) && (FStack_ee0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_ee0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_ee0,0,0,0x10);
    local_ed8 = local_ed8 & 0xffffffff00000000;
  }
  if (local_de0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_de0.Accessor,&local_de0);
  }
  if (FStack_ee0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_ee0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_ee8);
  (pFVar11->_IsChecked).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_IsChecked).Getter
             ,(FWriteAccessScope *)&local_db0);
  local_d98 = &(pFVar11->_IsChecked).Getter.field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_d98);
  pTVar22 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar14 != (undefined8 *)0x0) {
    uStack_f0c = local_e50.SharedReferenceCount.ReferenceController._4_4_;
    local_f18 = GetNavigationSlotChecked;
    uStack_f10 = 0;
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d10);
    pTVar22 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar15->Object;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    *(EUINavigation *)(puVar14 + 1) = param_1;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDetailView_SNavigationSimulationListInternal___00__A6A_AW4ECheckBoxState__XZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    puVar14[3] = pSVar1;
    puVar14[4] = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar10 = true;
    puVar14[5] = local_f18;
    puVar14[6] = CONCAT44(uStack_f0c,uStack_f10);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d10.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar10 = false;
  if (local_db0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_db0.Accessor,&local_db0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar11->_OnCheckStateChanged,(FWriteAccessScope *)&local_d90);
  local_d78 = &(pFVar11->_OnCheckStateChanged).field_0x8;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_d78);
  pTVar22 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar14 != (undefined8 *)0x0) {
    uStack_f0c = local_e50.SharedReferenceCount.ReferenceController._4_4_;
    local_f18 = HandleNavigationSlotCheckStateChanged;
    uStack_f10 = 0;
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d00);
    pTVar22 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar12->Object;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar10 = true;
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    *(EUINavigation *)(puVar14 + 1) = param_1;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSDetailView_SNavigationSimulationListInternal___00__A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    puVar14[3] = pSVar1;
    puVar14[4] = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar14[5] = local_f18;
    puVar14[6] = CONCAT44(uStack_f0c,uStack_f10);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d00.SharedReferenceCount.ReferenceController);
  }
  bVar5 = false;
  bVar10 = false;
  if (local_d90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d90.Accessor,&local_d90);
  }
  *(undefined1 *)((longlong)&pFVar11->_padding_ + 1) = 1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar11->_padding_,
             (FWriteAccessScope *)&local_d70);
  local_d58 = &pFVar11->_padding_;
  puVar14 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_d58);
  pTVar22 = (TReferenceControllerBase<1> *)__return_storage_ptr__;
  if (puVar14 != (undefined8 *)0x0) {
    uStack_f0c = local_e50.SharedReferenceCount.ReferenceController._4_4_;
    local_f18 = IsNavigationSlotEnabled;
    uStack_f10 = 0;
    pTVar15 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_cf0);
    pTVar22 = (pTVar15->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar15->Object;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar14 = &
               ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    bVar5 = true;
    bVar10 = true;
    *(EUINavigation *)(puVar14 + 1) = param_1;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar14[2] = uVar16;
    *puVar14 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSDetailView_SNavigationSimulationListInternal___00__A6A_NXZUFDefaultDelegateUserPolicy__W4EUINavigation____6B_
    ;
    puVar14[3] = pSVar1;
    puVar14[4] = pTVar22;
    if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar22->WeakReferenceCount = (atomic<int>)((int)pTVar22->WeakReferenceCount + 1);
      UNLOCK();
    }
    puVar14[5] = local_f18;
    puVar14[6] = CONCAT44(uStack_f0c,uStack_f10);
  }
  if (bVar10) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_cf0.SharedReferenceCount.ReferenceController);
  }
  if (local_d70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d70.Accessor,&local_d70);
  }
  pFVar17 = SBox::FArguments::FArguments(&local_cb8);
  uStack_e98 = _UNK_150925358;
  local_ea0 = ___xmm_40000000408000004000000040800000;
  pFVar17->_VAlign = VAlign_Center;
  pFVar17->_HAlign = HAlign_Center;
  uVar8 = ___xmm_40000000408000004000000040800000;
  local_e90 = 1;
  local_e78 = 0;
  local_e88 = (undefined1  [8])0x0;
  FStack_e80.Data = (FScriptContainerElement *)0x0;
  ___xmm_40000000408000004000000040800000 = (undefined4)local_ea0;
  _UNK_150925354 = SUB84(local_ea0,4);
  uVar7 = _UNK_150925354;
  (pFVar17->_Padding).Value.Left = (float)___xmm_40000000408000004000000040800000;
  ___xmm_40000000408000004000000040800000 = uVar8;
  uVar8 = _UNK_150925358;
  (pFVar17->_Padding).Value.Top = (float)uVar7;
  _UNK_150925358 = (undefined4)uStack_e98;
  _UNK_15092535c = SUB84(uStack_e98,4);
  uVar7 = _UNK_15092535c;
  (pFVar17->_Padding).Value.Right = (float)_UNK_150925358;
  _UNK_150925358 = uVar8;
  (pFVar17->_Padding).Value.Bottom = (float)uVar7;
  (pFVar17->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e88);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e88,
             (FWriteAccessScope *)&local_f18);
  if (((int)local_e78 != 0) && (FStack_e80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e80,0,0,0x10);
    local_e78 = local_e78 & 0xffffffff00000000;
  }
  if (local_f08 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_f0c,uStack_f10),
               (FDestructionSentinel *)&local_f18);
  }
  if (FStack_e80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e88);
  pFVar18 = STextBlock::FArguments::FArguments(&local_598);
  this_00 = StaticEnum<enum_EUINavigation>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("EnumClass != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0xd13,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_df0,(ulonglong)param_1);
  FText::FText(&local_ed0,&local_df0);
  local_ec0 = true;
  local_ea8 = 0;
  local_eb8 = (undefined1  [8])0x0;
  FStack_eb0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar18->_Text).Value,&local_ed0);
  (pFVar18->_Text).bIsSet = local_ec0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_eb8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_eb8,
             (FWriteAccessScope *)&local_dc8);
  if (((int)local_ea8 != 0) && (FStack_eb0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_eb0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_eb0,0,0,0x10);
    local_ea8 = local_ea8 & 0xffffffff00000000;
  }
  if (local_dc8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_dc8.Accessor,&local_dc8);
  }
  if (FStack_eb0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_eb0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_eb8);
  if (local_ed0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_ed0.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_f24,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e30,&local_e38,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_d38,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x227,(T0RequiredArgs *)local_res20);
  FMemScope::~FMemScope(&local_e30);
  FLLMScope::~FLLMScope(&local_f24);
  pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d38,&local_e50,pFVar18);
  pTVar22 = (pTVar19->SharedReferenceCount).ReferenceController;
  local_e70 = pTVar19->Object;
  if (pTVar22 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_e70;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar22;
  pTStack_e68 = pTVar22;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(&local_f20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e28 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e20,&local_e28,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_d50,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x222,&local_f28);
  FMemScope::~FMemScope(&local_e20);
  FLLMScope::~FLLMScope(&local_f20);
  pTVar20 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_d50,&local_d20,pFVar17);
  pTVar2 = (pTVar20->SharedReferenceCount).ReferenceController;
  local_e60 = pTVar20->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar11->_Content).Widget.Object = (SWidget *)local_e60;
  (pFVar11->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
  pTStack_e58 = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(&local_f1c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_e18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_e10,&local_e18,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_cd0,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x21b,local_f27);
  FMemScope::~FMemScope(&local_e10);
  FLLMScope::~FLLMScope(&local_f1c);
  pTVar21 = TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_cd0,&local_ce0,pFVar11);
  __return_storage_ptr__->Object = (SWidget *)pTVar21->Object;
  pTVar3 = (pTVar21->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ce0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d50._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_e50.SharedReferenceCount.ReferenceController._4_4_,
                      local_e50.SharedReferenceCount.ReferenceController._0_4_));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d38._Widget.SharedReferenceCount.ReferenceController);
  if (local_df0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_df0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_598);
  SBox::FArguments::~FArguments(&local_cb8);
  SCheckBox::FArguments::~FArguments(&local_978);
  return __return_storage_ptr__;
}

// BuildNaviationSlots @ 142e2e8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
SNavigationSimulationListInternal::SDetailView::BuildNaviationSlots
          (SDetailView *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SWidget *pSVar2;
  code *pcVar3;
  SUniformGridPanel *this_00;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FScopedWidgetSlotArguments *pFVar10;
  undefined1 auStackY_3a8 [32];
  SWidget *local_378;
  FSharedReferencer<1> local_370;
  T0RequiredArgs local_368 [8];
  TSharedRef<SWidget,1> local_360;
  FLLMScope local_350 [2];
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_348;
  FName local_330;
  FMemScope local_328;
  undefined1 local_320 [544];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [24];
  FScopedWidgetSlotArguments local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  pFVar8 = SUniformGridPanel::FArguments::FArguments((FArguments *)local_320);
  FLLMScope::FLLMScope(local_350,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_330 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_328,&local_330,true);
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_348,"SUniformGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x20c,local_368);
  FMemScope::~FMemScope(&local_328);
  FLLMScope::~FLLMScope(local_350);
  this_00 = local_348._Widget.Object;
  if (local_348._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_348._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  SUniformGridPanel::Construct(local_348._Widget.Object,pFVar8);
  if (local_348._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  if (((local_348._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_348._Widget.Object)->_padding_ + 0x228))(local_348._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142e2ea00;
  }
  bVar7 = 0x20;
LAB_142e2ea00:
  *(byte *)&(local_348._Widget.Object)->_padding_ =
       (byte)(local_348._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_348._Widget.Object)->_padding_ =
       (byte)(local_348._Widget.Object)->_padding_ | bVar7;
  if (local_348._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_348._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_348._Widget.Object == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  FVar4.ReferenceController = local_348._Widget.SharedReferenceCount.ReferenceController;
  local_348._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_348._Widget.Object = (SUniformGridPanel *)0x0;
  if (this_00 == (SUniformGridPanel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c0);
  if ((void *)local_c0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_100);
  if ((void *)local_100._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_100._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_100);
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_320._504_8_,local_320._512_4_);
  if ((FSlotArguments *)local_320._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_320._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_320);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,0,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Left);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)pSVar2;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,1,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Right);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)pSVar2;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,2,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Up);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)pSVar2;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,3,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Down);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)pSVar2;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,4,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Next);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  pSVar2 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)pSVar2;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  pFVar10 = SUniformGridPanel::AddSlot(this_00,&local_a8,5,0);
  pTVar9 = BuildNaviationSlot(this,&local_360,Previous);
  local_370.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
  local_378 = pTVar9->Object;
  if (local_370.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_370.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_370.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar10->_padding_ != &local_378) {
    pFVar10->_padding_ = (longlong)local_378;
    local_378 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar10->_padding_,&local_370);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_370.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_360.SharedReferenceCount.ReferenceController);
  TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_a8);
  __return_storage_ptr__->Object = (SWidget *)this_00;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return __return_storage_ptr__;
}

// BuildSlot @ 142e2f350

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::BuildSlot
          (SDetailView *this,TSharedRef<SGridPanel,1> *param_1,int param_2,FText *param_3,
          FText *param_4,FNavigationSimulationWidgetInfo *param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  STextBlock *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FScopedWidgetSlotArguments *pFVar7;
  FArguments *pFVar8;
  TSharedRef<STextBlock,1> *pTVar9;
  FArguments *pFVar10;
  TSharedRef<SHyperlink,1> *pTVar11;
  FScopedWidgetSlotArguments *pFVar12;
  undefined1 auStackY_1248 [32];
  T0RequiredArgs local_1218;
  T0RequiredArgs local_1217;
  T0RequiredArgs local_1216 [2];
  FLLMScope local_1214;
  FLLMScope local_1210;
  FLLMScope local_120c;
  STextBlock *local_1208;
  FSharedReferencer<1> local_1200;
  STextBlock *local_11f8;
  FSharedReferencer<1> local_11f0;
  code *local_11e8;
  FSharedReferencer<1> FStack_11e0;
  FText local_11d8;
  bool local_11c8;
  undefined1 local_11c0 [8];
  ForAnyElementType FStack_11b8;
  ulonglong local_11b0;
  FText local_11a8;
  undefined1 local_1198;
  undefined1 local_1190 [8];
  ForAnyElementType FStack_1188;
  ulonglong local_1180;
  STextBlock *local_1178;
  FSharedReferencer<1> local_1170;
  undefined1 local_1168 [8];
  undefined4 local_1160 [2];
  FName local_1158;
  FMemScope local_1150;
  FName local_1148;
  FMemScope local_1140;
  FName local_1138;
  FMemScope local_1130;
  undefined8 local_1128;
  FSharedReferencer<1> local_1120;
  undefined1 local_1118 [4];
  undefined1 local_1114 [4];
  undefined1 local_1110 [8];
  TWeakPtr<SWidget_const_,1> local_1108;
  FDestructionSentinel local_10f8;
  FDestructionSentinel local_10e0;
  TAttribute<FText> local_10c8;
  TAttribute<FText> local_1098;
  TSharedRef<STextBlock,1> local_1068;
  code *local_1058;
  TReferenceControllerBase<1> *pTStack_1050;
  TSharedRef<SHyperlink,1> local_1048;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1038;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1020;
  TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs> local_1008;
  TSharedRef<STextBlock,1> local_ff0;
  FArguments local_fe0;
  FArguments local_cc0;
  FArguments local_768;
  FScopedWidgetSlotArguments local_208;
  FScopedWidgetSlotArguments local_128;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x142e2f372;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1248;
  pFVar7 = SGridPanel::AddSlot(param_1->Object,&local_208,0,param_2,(Layer)0x0);
  pFVar8 = STextBlock::FArguments::FArguments(&local_cc0);
  local_11d8.TextData.Reference = (param_3->TextData).Reference;
  if (local_11d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11d8.TextData.Reference + 8))
              (local_11d8.TextData.Reference,local_1118);
  }
  local_11d8.Flags = param_3->Flags;
  local_11b0 = 0;
  local_11c8 = true;
  local_11c0 = (undefined1  [8])0x0;
  FStack_11b8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar8->_Text).Value,&local_11d8);
  (pFVar8->_Text).bIsSet = local_11c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar8->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_11c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_11c0,
             (FWriteAccessScope *)&local_10f8);
  if (((int)local_11b0 != 0) && (FStack_11b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_11b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_11b8,0,0,0x10);
    local_11b0 = local_11b0 & 0xffffffff00000000;
  }
  if (local_10f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10f8.Accessor,&local_10f8);
  }
  if (FStack_11b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_11b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_11c0);
  if (local_11d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11d8.TextData.Reference + 0x10))();
  }
  local_11a8.TextData.Reference = (param_4->TextData).Reference;
  if (local_11a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11a8.TextData.Reference + 8))
              (local_11a8.TextData.Reference,local_1114);
  }
  local_11a8.Flags = param_4->Flags;
  local_1198 = 1;
  local_1180 = 0;
  local_1190 = (undefined1  [8])0x0;
  FStack_1188.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar8,&local_11a8);
  *(undefined1 *)&pFVar8->_padding_ = local_1198;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1190);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1190,
             (FWriteAccessScope *)&local_10e0);
  if (((int)local_1180 != 0) && (FStack_1188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1188,0,0,0x10);
    local_1180 = local_1180 & 0xffffffff00000000;
  }
  if (local_10e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10e0.Accessor,&local_10e0);
  }
  if (FStack_1188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1190);
  if (local_11a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_11a8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_1214,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1158 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1150,&local_1158,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1038,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x294,&local_1218);
  FMemScope::~FMemScope(&local_1150);
  FLLMScope::~FLLMScope(&local_1214);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_1038,&local_ff0,pFVar8);
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  local_11f8 = pTVar9->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11f0.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar7->_padding_ != &local_11f8) {
    pFVar7->_padding_ = (longlong)local_11f8;
    local_11f8 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_11f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_ff0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1038._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_cc0);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_208);
  local_1200.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_5->WidgetPtr == 0) {
    pFVar8 = STextBlock::FArguments::FArguments(&local_768);
    local_10c8.Value.TextData.Reference = (param_5->WidgetTypeAndShortName).TextData.Reference;
    if (local_10c8.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10c8.Value.TextData.Reference + 8))
                (local_10c8.Value.TextData.Reference,local_1110);
    }
    local_10c8.Value.Flags = (param_5->WidgetTypeAndShortName).Flags;
    local_10c8.Getter._16_8_ = 0;
    local_10c8.bIsSet = true;
    local_10c8.Getter._0_8_ = 0;
    local_10c8.Getter._8_8_ = 0;
    pFVar8 = STextBlock::FArguments::Text(pFVar8,&local_10c8);
    FLLMScope::FLLMScope(&local_1210,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1148 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1140,&local_1148,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_1020,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
               ,0x29c,&local_1217);
    FMemScope::~FMemScope(&local_1140);
    FLLMScope::~FLLMScope(&local_1210);
    pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_1020,&local_1068,pFVar8);
    local_1120.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_1208 = pTVar9->Object;
    if (local_1120.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1120.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_1120.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_1128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1200,&local_1120);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1120.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1068.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1020._Widget.SharedReferenceCount.ReferenceController);
    STextBlock::FArguments::~FArguments(&local_768);
  }
  else {
    pFVar10 = SHyperlink::FArguments::FArguments(&local_fe0);
    local_1098.Value.TextData.Reference = (param_5->WidgetTypeAndShortName).TextData.Reference;
    if (local_1098.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1098.Value.TextData.Reference + 8))
                (local_1098.Value.TextData.Reference,local_1168);
    }
    local_1098.Value.Flags = (param_5->WidgetTypeAndShortName).Flags;
    local_1098.Getter._16_8_ = 0;
    local_1098.bIsSet = true;
    local_1098.Getter._0_8_ = 0;
    local_1098.Getter._8_8_ = 0;
    pFVar10 = SHyperlink::FArguments::Text(pFVar10,&local_1098);
    local_1108.Object = (param_5->WidgetLive).Object;
    local_1108.WeakReferenceCount.ReferenceController =
         (param_5->WidgetLive).WeakReferenceCount.ReferenceController;
    if (local_1108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1108.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_1108.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    local_11e8 = HandleNavigateToWidgetInfo;
    FStack_11e0.ReferenceController =
         (TReferenceControllerBase<1> *)((ulonglong)FStack_11e0.ReferenceController._4_4_ << 0x20);
    local_1058 = HandleNavigateToWidgetInfo;
    pTStack_1050 = FStack_11e0.ReferenceController;
    pFVar10 = SHyperlink::FArguments::
              OnNavigate<SNavigationSimulationListInternal::SDetailView,unsigned___int64,TWeakPtr<SWidget_const_,1>_>
                        (pFVar10,this,(pmf_1c72bd16 *)&local_1058,param_5->WidgetPtr,&local_1108);
    FLLMScope::FLLMScope(&local_120c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1138 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1130,&local_1138,true);
    TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>
              (&local_1008,"SHyperlink",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
               ,0x2a1,local_1216);
    FMemScope::~FMemScope(&local_1130);
    FLLMScope::~FLLMScope(&local_120c);
    pTVar11 = TSlateDecl<SHyperlink,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1008,&local_1048,pFVar10);
    FStack_11e0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_1208 = (STextBlock *)pTVar11->Object;
    if (FStack_11e0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_11e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_11e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_11e8 = (code *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1200,&FStack_11e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_11e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1048.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1008._Widget.SharedReferenceCount.ReferenceController);
    SHyperlink::FArguments::~FArguments(&local_fe0);
  }
  pFVar7 = SGridPanel::AddSlot(param_1->Object,&local_128,1,param_2,(Layer)0x0);
  pSVar4 = local_1208;
  plVar1 = &pFVar7->_padding_;
  if ((longlong *)local_1160 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar7->_padding_ + 4) = 1;
  }
  pFVar12 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar12 = pFVar7;
  }
  if (local_1208 == (STextBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar5.ReferenceController = local_1200.ReferenceController;
  if (local_1200.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1200.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1200.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar4 == (STextBlock *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_1178 = pSVar4;
  local_1170.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((STextBlock **)&pFVar12->_padding_ != &local_1178) {
    pFVar12->_padding_ = (longlong)pSVar4;
    local_1178 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar12->_padding_,&local_1170);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1170.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BuildSlot @ 142e2faf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::BuildSlot
          (SDetailView *this,TSharedRef<SGridPanel,1> *param_1,int param_2,FText *param_3,
          FText *param_4,uchar param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScopedWidgetSlotArguments *pFVar3;
  FArguments *pFVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  FText *pFVar6;
  FDestructionSentinel *__return_storage_ptr__;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FScopedWidgetSlotArguments *pFVar9;
  undefined1 auStackY_798 [32];
  T0RequiredArgs local_768 [4];
  undefined4 local_764;
  FText local_760;
  bool local_750;
  undefined1 local_748 [8];
  ForAnyElementType FStack_740;
  ulonglong local_738;
  FName local_730;
  FName local_728;
  STextBlock *local_720;
  FSharedReferencer<1> local_718;
  STextBlock *local_710;
  FSharedReferencer<1> local_708;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FText local_6d0;
  bool local_6c0;
  undefined1 local_6b8 [8];
  ForAnyElementType FStack_6b0;
  ulonglong local_6a8;
  undefined4 local_6a0 [2];
  TSharedRef<STextBlock,1> local_698;
  FText local_688;
  FArguments local_678;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_798;
  local_764 = 0;
  pFVar3 = SGridPanel::AddSlot(param_1->Object,&local_118,0,param_2,(Layer)0x0);
  pFVar4 = STextBlock::FArguments::FArguments(&local_678);
  local_6d0.TextData.Reference = (param_3->TextData).Reference;
  if (local_6d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6d0.TextData.Reference + 8))
              (local_6d0.TextData.Reference,&local_764);
  }
  local_6d0.Flags = param_3->Flags;
  local_6a8 = 0;
  local_6c0 = true;
  local_6b8 = (undefined1  [8])0x0;
  FStack_6b0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_6d0);
  (pFVar4->_Text).bIsSet = local_6c0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6b8,
             (FWriteAccessScope *)&local_700);
  if (((int)local_6a8 != 0) && (FStack_6b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_6b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_6b0,0,0,0x10);
    local_6a8 = local_6a8 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_6b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_6b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6b8);
  if (local_6d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6d0.TextData.Reference + 0x10))();
  }
  local_760.TextData.Reference = (param_4->TextData).Reference;
  if (local_760.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_760.TextData.Reference + 8))
              (local_760.TextData.Reference,&local_764);
  }
  local_760.Flags = param_4->Flags;
  local_750 = true;
  local_738 = 0;
  local_748 = (undefined1  [8])0x0;
  FStack_740.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar4,&local_760);
  *(bool *)&pFVar4->_padding_ = local_750;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_700);
  if (((int)local_738 != 0) && (FStack_740.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_740.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10);
    local_738 = local_738 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_740.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_740.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_748);
  if (local_760.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_760.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_764,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_730 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_728,&local_730,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2d3,local_768);
  FMemScope::~FMemScope((FMemScope *)&local_728);
  FLLMScope::~FLLMScope((FLLMScope *)&local_764);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6e8,&local_698,
                      pFVar4);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_720 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_718.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar3->_padding_ != &local_720) {
    pFVar3->_padding_ = (longlong)local_720;
    local_720 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_718);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_718.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_698.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6e8.Accessor);
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  pFVar3 = SGridPanel::AddSlot(param_1->Object,&local_118,1,param_2,(Layer)0x0);
  plVar1 = &pFVar3->_padding_;
  if ((longlong *)local_6a0 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 4) = 1;
  }
  pFVar9 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar9 = pFVar3;
  }
  pFVar4 = STextBlock::FArguments::FArguments(&local_678);
  pwVar8 = L"True";
  pwVar7 = L"TrueValue";
  __return_storage_ptr__ = &local_700;
  if (param_5 == '\0') {
    pwVar8 = L"False";
    pwVar7 = L"FalseValue";
    __return_storage_ptr__ = (FDestructionSentinel *)&local_688;
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)__return_storage_ptr__,L"SSlateNavigationSimulation",pwVar7,pwVar8);
  FText::FText(&local_760,pFVar6);
  local_750 = true;
  local_738 = 0;
  local_748 = (undefined1  [8])0x0;
  FStack_740.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_760);
  (pFVar4->_Text).bIsSet = local_750;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_6e8);
  if (((int)local_738 != 0) && (FStack_740.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_740.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10);
    local_738 = local_738 & 0xffffffff00000000;
  }
  if (local_6e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
  }
  if (FStack_740.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_740.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_748);
  if (local_760.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_760.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_764,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_728 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_730,&local_728,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6e8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2db,local_768);
  FMemScope::~FMemScope((FMemScope *)&local_730);
  FLLMScope::~FLLMScope((FLLMScope *)&local_764);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6e8,&local_698,
                      pFVar4);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_710 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_708.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar9->_padding_ != &local_710) {
    pFVar9->_padding_ = (longlong)local_710;
    local_710 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar9->_padding_,&local_708);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_708.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_698.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6e8.Accessor);
  if (((2U - (param_5 != '\0') & 2) != 0) && (local_688.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)(*(longlong *)local_688.TextData.Reference + 0x10))();
  }
  if ((param_5 != '\0') && ((longlong *)local_700._0_8_ != (longlong *)0x0)) {
    (**(code **)(*(longlong *)local_700._0_8_ + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BuildSlot @ 142e30100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::BuildSlot
          (SDetailView *this,TSharedRef<SGridPanel,1> *param_1,int param_2,FText *param_3,
          FText *param_4,ERoutedReason param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FScopedWidgetSlotArguments *pFVar3;
  FArguments *pFVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  FText *pFVar6;
  FScopedWidgetSlotArguments *pFVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 auStackY_788 [32];
  T0RequiredArgs local_758 [4];
  FLLMScope local_754;
  FText local_750;
  bool local_740;
  undefined1 local_738 [8];
  ForAnyElementType FStack_730;
  ulonglong local_728;
  TSharedRef<STextBlock,1> local_720;
  FName local_710;
  FName local_708;
  STextBlock *local_700;
  FSharedReferencer<1> local_6f8;
  STextBlock *local_6f0;
  FSharedReferencer<1> local_6e8;
  FDestructionSentinel local_6e0;
  FDestructionSentinel local_6c8;
  FText local_6b0;
  bool local_6a0;
  undefined1 local_698 [8];
  ForAnyElementType FStack_690;
  ulonglong local_688;
  undefined4 local_680 [2];
  FArguments local_678;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_788;
  pFVar3 = SGridPanel::AddSlot(param_1->Object,&local_118,0,param_2,(Layer)0x0);
  pFVar4 = STextBlock::FArguments::FArguments(&local_678);
  local_6b0.TextData.Reference = (param_3->TextData).Reference;
  if (local_6b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6b0.TextData.Reference + 8))
              (local_6b0.TextData.Reference,&local_754);
  }
  local_6b0.Flags = param_3->Flags;
  local_688 = 0;
  local_6a0 = true;
  local_698 = (undefined1  [8])0x0;
  FStack_690.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_6b0);
  (pFVar4->_Text).bIsSet = local_6a0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_698);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_698,
             (FWriteAccessScope *)&local_6e0);
  if (((int)local_688 != 0) && (FStack_690.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_690.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_690,0,0,0x10);
    local_688 = local_688 & 0xffffffff00000000;
  }
  if (local_6e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
  }
  if (FStack_690.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_690.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_698);
  if (local_6b0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_6b0.TextData.Reference + 0x10))();
  }
  local_750.TextData.Reference = (param_4->TextData).Reference;
  if (local_750.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_750.TextData.Reference + 8))
              (local_750.TextData.Reference,&local_754);
  }
  local_750.Flags = param_4->Flags;
  local_740 = true;
  local_728 = 0;
  local_738 = (undefined1  [8])0x0;
  FStack_730.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar4,&local_750);
  *(bool *)&pFVar4->_padding_ = local_740;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar4->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_738);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
             (FWriteAccessScope *)&local_6e0);
  if (((int)local_728 != 0) && (FStack_730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_730,0,0,0x10);
    local_728 = local_728 & 0xffffffff00000000;
  }
  if (local_6e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
  }
  if (FStack_730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_738);
  if (local_750.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_750.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_754,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_710 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_708,&local_710,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2b1,local_758);
  FMemScope::~FMemScope((FMemScope *)&local_708);
  FLLMScope::~FLLMScope(&local_754);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6c8,&local_720,
                      pFVar4);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_700 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6f8.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar3->_padding_ != &local_700) {
    pFVar3->_padding_ = (longlong)local_700;
    local_700 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_6f8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6f8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_720.SharedReferenceCount.ReferenceController._4_4_,
                      (uint)local_720.SharedReferenceCount.ReferenceController));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c8.Accessor);
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  pFVar3 = SGridPanel::AddSlot(param_1->Object,&local_118,1,param_2,(Layer)0x0);
  plVar1 = &pFVar3->_padding_;
  if ((longlong *)local_680 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar3->_padding_ + 4) = 1;
  }
  pFVar7 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar7 = pFVar3;
  }
  pFVar4 = STextBlock::FArguments::FArguments(&local_678);
  if (param_5 == BoundaryRule) {
    pwVar9 = L"BoundaryRule";
    pwVar8 = L"ERoutedReason_BoundaryRule";
  }
  else if (param_5 == Window) {
    pwVar9 = L"Window";
    pwVar8 = L"ERoutedReason_Window";
  }
  else {
    if (param_5 != LastWidget) {
      pFVar6 = FText::GetEmpty();
      local_720.Object = (STextBlock *)(pFVar6->TextData).Reference;
      if (local_720.Object != (STextBlock *)0x0) {
        (**(code **)((local_720.Object)->_padding_ + 8))(local_720.Object,&local_754);
      }
      local_720.SharedReferenceCount.ReferenceController._0_4_ = pFVar6->Flags;
      goto LAB_142e304f6;
    }
    pwVar9 = L"LastWidget";
    pwVar8 = L"ERoutedReason_LastWidget";
  }
  FText::AsLocalizable_Advanced_LocText
            ((FText *)&local_720,L"SlateNavigationSimulatioN",pwVar8,pwVar9);
LAB_142e304f6:
  FText::FText(&local_750,(FText *)&local_720);
  local_740 = true;
  local_728 = 0;
  local_738 = (undefined1  [8])0x0;
  FStack_730.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_750);
  (pFVar4->_Text).bIsSet = local_740;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_738);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
             (FWriteAccessScope *)&local_6c8);
  if (((int)local_728 != 0) && (FStack_730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_730,0,0,0x10);
    local_728 = local_728 & 0xffffffff00000000;
  }
  if (local_6c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c8.Accessor,&local_6c8);
  }
  if (FStack_730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_738);
  if (local_750.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_750.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_754,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_708 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_710,&local_708,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6c8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2b9,local_758);
  FMemScope::~FMemScope((FMemScope *)&local_710);
  FLLMScope::~FLLMScope(&local_754);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *)&local_6c8,
                      (TSharedRef<STextBlock,1> *)&local_6e0,pFVar4);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  local_6f0 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_6e8.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar7->_padding_ != &local_6f0) {
    pFVar7->_padding_ = (longlong)local_6f0;
    local_6f0 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar7->_padding_,&local_6e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6e0.Accessor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_6c8.Accessor);
  if (local_720.Object != (STextBlock *)0x0) {
    (**(code **)((local_720.Object)->_padding_ + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_678);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_118);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// BuildSlot @ 142e30720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::BuildSlot
          (SDetailView *this,TSharedRef<SGridPanel,1> *param_1,int param_2,FText *param_3,
          FText *param_4,EUINavigationRule param_5)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FScopedWidgetSlotArguments *pFVar5;
  FArguments *pFVar6;
  TSharedRef<STextBlock,1> *pTVar7;
  UEnum *this_00;
  FScopedWidgetSlotArguments *pFVar8;
  undefined1 auStackY_e88 [32];
  T0RequiredArgs local_e58;
  T0RequiredArgs local_e57 [3];
  FLLMScope local_e54;
  FLLMScope local_e50 [2];
  STextBlock *local_e48;
  FSharedReferencer<1> local_e40;
  STextBlock *local_e38;
  FSharedReferencer<1> local_e30;
  FText local_e28;
  bool local_e18;
  undefined1 local_e10 [8];
  ForAnyElementType FStack_e08;
  ulonglong local_e00;
  FText local_df8;
  undefined1 local_de8;
  undefined1 local_de0 [8];
  ForAnyElementType FStack_dd8;
  ulonglong local_dd0;
  FText local_dc8;
  bool local_db8;
  undefined1 local_db0 [8];
  ForAnyElementType FStack_da8;
  ulonglong local_da0;
  undefined1 local_d98 [4];
  undefined1 local_d94 [4];
  undefined4 local_d90 [2];
  FName local_d88;
  FMemScope local_d80;
  FName local_d78;
  FMemScope local_d70;
  FText local_d68;
  FDestructionSentinel local_d58;
  FDestructionSentinel local_d40;
  FDestructionSentinel local_d28;
  TSharedRef<STextBlock,1> local_d10;
  TSharedRef<STextBlock,1> local_d00;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_cf0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_cd8;
  FArguments local_cc0;
  FArguments local_768;
  FScopedWidgetSlotArguments local_208;
  FScopedWidgetSlotArguments local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e88;
  pFVar5 = SGridPanel::AddSlot(param_1->Object,&local_208,0,param_2,(Layer)0x0);
  pFVar6 = STextBlock::FArguments::FArguments(&local_cc0);
  local_e28.TextData.Reference = (param_3->TextData).Reference;
  if (local_e28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e28.TextData.Reference + 8))
              (local_e28.TextData.Reference,local_d98);
  }
  local_e28.Flags = param_3->Flags;
  local_e00 = 0;
  local_e18 = true;
  local_e10 = (undefined1  [8])0x0;
  FStack_e08.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar6->_Text).Value,&local_e28);
  (pFVar6->_Text).bIsSet = local_e18;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_e10);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e10,
             (FWriteAccessScope *)&local_d58);
  if (((int)local_e00 != 0) && (FStack_e08.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_e08.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_e08,0,0,0x10);
    local_e00 = local_e00 & 0xffffffff00000000;
  }
  if (local_d58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d58.Accessor,&local_d58);
  }
  if (FStack_e08.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_e08.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e10);
  if (local_e28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e28.TextData.Reference + 0x10))();
  }
  local_df8.TextData.Reference = (param_4->TextData).Reference;
  if (local_df8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_df8.TextData.Reference + 8))
              (local_df8.TextData.Reference,local_d94);
  }
  local_df8.Flags = param_4->Flags;
  local_de8 = 1;
  local_dd0 = 0;
  local_de0 = (undefined1  [8])0x0;
  FStack_dd8.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar6,&local_df8);
  *(undefined1 *)&pFVar6->_padding_ = local_de8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar6->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_de0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_de0,
             (FWriteAccessScope *)&local_d40);
  if (((int)local_dd0 != 0) && (FStack_dd8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_dd8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_dd8,0,0,0x10);
    local_dd0 = local_dd0 & 0xffffffff00000000;
  }
  if (local_d40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d40.Accessor,&local_d40);
  }
  if (FStack_dd8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_dd8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_de0);
  if (local_df8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_df8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(&local_e54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d80,&local_d88,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_cf0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2c2,&local_e58);
  FMemScope::~FMemScope(&local_d80);
  FLLMScope::~FLLMScope(&local_e54);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_cf0,&local_d10,pFVar6);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_e48 = pTVar7->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e40.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar5->_padding_ != &local_e48) {
    pFVar5->_padding_ = (longlong)local_e48;
    local_e48 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar5->_padding_,&local_e40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cf0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_cc0);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_208);
  pFVar5 = SGridPanel::AddSlot(param_1->Object,&local_128,1,param_2,(Layer)0x0);
  plVar1 = &pFVar5->_padding_;
  if ((longlong *)local_d90 != plVar1) {
    *(undefined4 *)plVar1 = 3;
    *(undefined1 *)((longlong)&pFVar5->_padding_ + 4) = 1;
  }
  pFVar8 = (FScopedWidgetSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar8 = pFVar5;
  }
  pFVar6 = STextBlock::FArguments::FArguments(&local_768);
  this_00 = StaticEnum<enum_EUINavigationRule>();
  if (this_00 == (UEnum *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xd13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  UEnum::GetDisplayNameTextByValue(this_00,&local_d68,(ulonglong)param_5);
  FText::FText(&local_dc8,&local_d68);
  local_db8 = true;
  local_da0 = 0;
  local_db0 = (undefined1  [8])0x0;
  FStack_da8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar6->_Text).Value,&local_dc8);
  (pFVar6->_Text).bIsSet = local_db8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_db0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_db0,
             (FWriteAccessScope *)&local_d28);
  if (((int)local_da0 != 0) && (FStack_da8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_da8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_da8,0,0,0x10);
    local_da0 = local_da0 & 0xffffffff00000000;
  }
  if (local_d28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d28.Accessor,&local_d28);
  }
  if (FStack_da8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_da8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_db0);
  if (local_dc8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_dc8.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_e50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_d78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_d70,&local_d78,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_cd8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x2ca,local_e57);
  FMemScope::~FMemScope(&local_d70);
  FLLMScope::~FLLMScope(local_e50);
  pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_cd8,&local_d00,pFVar6);
  pTVar2 = (pTVar7->SharedReferenceCount).ReferenceController;
  local_e38 = pTVar7->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e30.ReferenceController = pTVar2;
  if ((STextBlock **)&pFVar8->_padding_ != &local_e38) {
    pFVar8->_padding_ = (longlong)local_e38;
    local_e38 = (STextBlock *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar8->_padding_,&local_e30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_cd8._Widget.SharedReferenceCount.ReferenceController);
  if (local_d68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d68.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_768);
  TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
            (&local_128);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Construct @ 142e3e650

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
SNavigationSimulationListInternal::SDetailView::Construct(SDetailView *this,FArguments *param_1)

{
  int *piVar1;
  TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  FSlotArguments *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  SVerticalBox *pSVar10;
  TReferenceControllerBase<1> *pTVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  FArguments *pFVar15;
  FSlotArguments *pFVar16;
  FArguments *pFVar17;
  ISlateStyle *pIVar18;
  FName *pFVar19;
  TSharedRef<SWidget,1> *pTVar20;
  TSharedRef<SBorder,1> *pTVar21;
  FArguments *pFVar22;
  FSlotArguments *pFVar23;
  TSharedRef<SScrollBox,1> *pTVar24;
  TSharedRef<SVerticalBox,1> *pTVar25;
  longlong *this_00;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  FLLMScope local_11c8;
  FLLMScope local_11c4;
  FLLMScope local_11c0;
  FLLMScope local_11bc;
  SBorder *local_11b8;
  FSharedReferencer<1> local_11b0;
  SBorder *local_11a8;
  FSharedReferencer<1> local_11a0;
  FSlateBrush *local_1198;
  undefined1 local_1190;
  undefined1 local_1188 [8];
  ForAnyElementType FStack_1180;
  ulonglong local_1178;
  FSlateBrush *local_1170;
  undefined1 local_1168;
  undefined1 local_1160 [8];
  ForAnyElementType FStack_1158;
  ulonglong local_1150;
  SWidget *local_1148;
  FSharedReferencer<1> local_1140;
  SScrollBox *local_1138;
  TReferenceControllerBase<1> *pTStack_1130;
  SVerticalBox *local_1128;
  TReferenceControllerBase<1> *pTStack_1120;
  FName local_1118;
  FMemScope local_1110;
  FName local_1108;
  FMemScope local_1100;
  FName local_10f8;
  FMemScope local_10f0;
  FArguments *local_10e8;
  FName local_10e0;
  FMemScope local_10d8;
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs> local_10d0;
  FDestructionSentinel local_10b8;
  FDestructionSentinel local_10a0;
  TSharedRef<SBorder,1> local_1088;
  TSharedRef<SScrollBox,1> local_1078;
  TSharedRef<SWidget,1> local_1068;
  TSharedRef<SBorder,1> local_1058;
  TSharedRef<SWidget,1> local_1048;
  FName local_1038;
  FName local_1030;
  SWidget *local_1028;
  TReferenceControllerBase<1> *pTStack_1020;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_1018;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1000;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_fe8;
  SScrollBox *local_fd0;
  TReferenceControllerBase<1> *pTStack_fc8;
  TSharedRef<SVerticalBox,1> local_fc0;
  undefined8 *local_fb0 [2];
  TReferenceControllerBase<1> *local_fa0;
  undefined1 local_f80 [40];
  FSlotArgumentsMixin local_f58;
  undefined8 *local_ec8 [2];
  TReferenceControllerBase<1> *local_eb8;
  undefined1 local_e98 [40];
  FSlotArgumentsMixin local_e70;
  undefined8 *local_de0 [2];
  TReferenceControllerBase<1> *local_dd0;
  undefined1 local_db0 [40];
  FSlotArgumentsMixin local_d88;
  FArguments local_cf8;
  FArguments local_af0;
  FArguments local_828;
  FArguments local_448;
  undefined8 uStack_48;
  
  uStack_48 = 0x142e3e66f;
  TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnNavigateToLiveWidget,&param_1->_OnNavigateToLiveWidget);
  TDelegate<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::operator=
            (&this->OnNavigateToSnapshotWidget,&param_1->_OnNavigateToSnapshotWidget);
  this->NavigationToDisplay = Down;
  this->CurrentNavigationToDisplay = Down;
  pFVar15 = SVerticalBox::FArguments::FArguments(&local_cf8);
  pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_de0);
  pFVar16 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar16);
  fVar12 = __real_40800000;
  pFVar16 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar16->field_0x18,0.0,__real_40800000);
  pFVar17 = SBorder::FArguments::FArguments(&local_448);
  pIVar18 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1038,"ToolPanel.GroupBorder");
  local_1198 = (FSlateBrush *)(*pcVar3)(pIVar18,*pFVar19);
  local_1190 = 1;
  local_1188 = (undefined1  [8])0x0;
  FStack_1180.Data = (FScriptContainerElement *)0x0;
  local_1178 = 0;
  (pFVar17->_BorderImage).Value = local_1198;
  (pFVar17->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1188);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1188,
             (FWriteAccessScope *)&local_10b8);
  if (((int)local_1178 != 0) && (FStack_1180.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1180.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1180,0,0,0x10);
    local_1178 = local_1178 & 0xffffffff00000000;
  }
  if (local_10b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10b8.Accessor,&local_10b8);
  }
  if (FStack_1180.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1180.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1188);
  pTVar20 = BuildNaviationSlots(this,&local_1048);
  pTVar4 = (pTVar20->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar20->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1028 = (pFVar17->_Content).Widget.Object;
  pTStack_1020 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = pSVar5;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1020);
  FLLMScope::FLLMScope(&local_11c8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1118 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1110,&local_1118,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_fe8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x19c,local_res8);
  FMemScope::~FMemScope(&local_1110);
  FLLMScope::~FLLMScope(&local_11c8);
  pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_fe8,&local_1058,pFVar17);
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_11b8 = pTVar21->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11b0.ReferenceController = pTVar4;
  if ((SBorder **)&pFVar16->field_0x8 != &local_11b8) {
    *(SBorder **)&pFVar16->field_0x8 = local_11b8;
    local_11b8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->field_0x10,&local_11b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11b0.ReferenceController);
  local_10e8 = SVerticalBox::FArguments::operator+(pFVar15,pFVar16);
  pFVar16 = SVerticalBox::Slot((FSlotArguments *)local_ec8);
  pFVar16 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar16->field_0x18,0.0,fVar12);
  pFVar17 = SBorder::FArguments::FArguments(&local_828);
  pIVar18 = FAppStyle::Get();
  pcVar3 = *(code **)((longlong)*pIVar18 + 0x50);
  pFVar19 = ::FName::FName(&local_1030,"ToolPanel.GroupBorder");
  local_1170 = (FSlateBrush *)(*pcVar3)(pIVar18,*pFVar19);
  local_1168 = 1;
  local_1160 = (undefined1  [8])0x0;
  FStack_1158.Data = (FScriptContainerElement *)0x0;
  local_1150 = 0;
  (pFVar17->_BorderImage).Value = local_1170;
  (pFVar17->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar17->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1160);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1160,
             (FWriteAccessScope *)&local_10a0);
  if (((int)local_1150 != 0) && (FStack_1158.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1158.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1158,0,0,0x10);
    local_1150 = local_1150 & 0xffffffff00000000;
  }
  if (local_10a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_10a0.Accessor,&local_10a0);
  }
  if (FStack_1158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1158.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1160);
  pFVar22 = SScrollBox::FArguments::FArguments(&local_af0);
  pFVar22->_Orientation = Orient_Vertical;
  pFVar23 = SScrollBox::Slot((FSlotArguments *)local_fb0);
  pTVar20 = BuildContent(this,&local_1068);
  local_1140.ReferenceController = (pTVar20->SharedReferenceCount).ReferenceController;
  local_1148 = pTVar20->Object;
  if (local_1140.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1140.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1140.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((SWidget **)&pFVar23->field_0x8 != &local_1148) {
    *(SWidget **)&pFVar23->field_0x8 = local_1148;
    local_1148 = (SWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar23->field_0x10,&local_1140);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1140.ReferenceController);
  pTVar2 = &pFVar22->_Slots;
  pFVar6 = (FSlotArguments *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar6 <= pFVar23) && (pFVar23 < pFVar6 + (pFVar22->_Slots).ArrayMax)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar14 = (pFVar22->_Slots).ArrayNum;
  piVar1 = &(pFVar22->_Slots).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8e8,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar22->_Slots).ArrayNum = iVar14 + 1;
  SScrollBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0xe8),pFVar23)
  ;
  FLLMScope::FLLMScope(&local_11c4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1108 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1100,&local_1108,true);
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>
            (&local_10d0,"SScrollBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x1a9,local_res10);
  FMemScope::~FMemScope(&local_1100);
  FLLMScope::~FLLMScope(&local_11c4);
  if (local_10d0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_10d0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_fd0 = (this->DetailOwner).Object;
  pTStack_fc8 = (this->DetailOwner).SharedReferenceCount.ReferenceController;
  (this->DetailOwner).Object = local_10d0._Widget.Object;
  (this->DetailOwner).SharedReferenceCount.ReferenceController =
       local_10d0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_fc8);
  pTVar24 = TSlateDecl<SScrollBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_10d0,&local_1078,pFVar22);
  pTVar7 = (pTVar24->SharedReferenceCount).ReferenceController;
  local_1138 = pTVar24->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar17->_Content).Widget.Object = (SWidget *)local_1138;
  (pFVar17->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_1130 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FLLMScope::FLLMScope(&local_11c0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10f0,&local_10f8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1000,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x1a6,local_res18);
  FMemScope::~FMemScope(&local_10f0);
  FLLMScope::~FLLMScope(&local_11c0);
  pTVar21 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1000,&local_1088,pFVar17);
  pTVar8 = (pTVar21->SharedReferenceCount).ReferenceController;
  local_11a8 = pTVar21->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_11a0.ReferenceController = pTVar8;
  if ((SBorder **)&pFVar16->field_0x8 != &local_11a8) {
    *(SBorder **)&pFVar16->field_0x8 = local_11a8;
    local_11a8 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar16->field_0x10,&local_11a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_11a0.ReferenceController);
  pFVar15 = SVerticalBox::FArguments::operator+(local_10e8,pFVar16);
  FLLMScope::FLLMScope(&local_11bc,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_10e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10d8,&local_10e0,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_1018,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SNavigationSimulationList.cpp"
             ,0x196,local_res20);
  FMemScope::~FMemScope(&local_10d8);
  FLLMScope::~FLLMScope(&local_11bc);
  pTVar25 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1018,&local_fc0,pFVar15);
  this_00 = &this->_padding_;
  pTVar9 = (pTVar25->SharedReferenceCount).ReferenceController;
  pSVar10 = pTVar25->Object;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar10;
  this->_padding_ = (longlong)pTVar9;
  local_1128 = pSVar10;
  pTStack_1120 = pTVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fc0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1018._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1088.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1000._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1078.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10d0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1068.SharedReferenceCount.ReferenceController);
  TResizingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin(&local_f58)
  ;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_f80);
  if ((void *)local_f80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_f80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_fa0);
  if (local_fb0[0] != (undefined8 *)0x0) {
    (**(code **)*local_fb0[0])(local_fb0[0],1);
  }
  SScrollBox::FArguments::~FArguments(&local_af0);
  SBorder::FArguments::~FArguments(&local_828);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_e70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e98);
  if ((void *)local_e98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_eb8);
  if (local_ec8[0] != (undefined8 *)0x0) {
    (**(code **)*local_ec8[0])(local_ec8[0],1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1058.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_fe8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1048.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_448);
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_d88);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_db0);
  if ((void *)local_db0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_db0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_db0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_dd0);
  if (local_de0[0] != (undefined8 *)0x0) {
    (**(code **)*local_de0[0])(local_de0[0],1);
  }
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_cf8._Slots.AllocatorInstance.Data,local_cf8._Slots.ArrayNum);
  if ((FSlotArguments *)local_cf8._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_cf8._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_cf8);
  return;
}

// GetNavigationSlotChecked @ 142ea06f0

ECheckBoxState __thiscall
SNavigationSimulationListInternal::SDetailView::GetNavigationSlotChecked
          (SDetailView *this,EUINavigation param_1)

{
  return param_1 == this->CurrentNavigationToDisplay;
}

// HandleNavigateToWidgetInfo @ 142eb1080

void __thiscall
SNavigationSimulationListInternal::SDetailView::HandleNavigateToWidgetInfo
          (SDetailView *this,ulong64 param_1,TWeakPtr<SWidget_const_,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FNavigationSimulationWidgetNode *pFVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FReadAccessScope local_28;
  
  pFVar3 = (this->WidgetItem).Object;
  if (pFVar3 != (FNavigationSimulationWidgetNode *)0x0) {
    if (pFVar3->NodeType == Live) {
      local_28.DestructionSentinel._0_8_ = param_2->Object;
      local_28.DestructionSentinel.Accessor =
           (FMRSWRecursiveAccessDetector *)(param_2->WeakReferenceCount).ReferenceController;
      if ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        ((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->WeakReferenceCount =
             (atomic<int>)
             ((int)((TReferenceControllerBase<1> *)local_28.DestructionSentinel.Accessor)->
                   WeakReferenceCount + 1);
        UNLOCK();
      }
      TDelegate<void___cdecl(TWeakPtr<SWidget_const_,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->OnNavigateToLiveWidget,(TWeakPtr<SWidget_const_,1> *)&local_28);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnNavigateToSnapshotWidget,&local_28);
      if ((*(int *)&(this->OnNavigateToSnapshotWidget).field_0x10 != 0) &&
         (plVar4 = *(longlong **)&(this->OnNavigateToSnapshotWidget).field_0x8,
         plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000142eb1144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      return;
    }
  }
  return;
}

// HandleNavigationSlotCheckStateChanged @ 142eb1200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::HandleNavigationSlotCheckStateChanged
          (SDetailView *this,ECheckBoxState param_1,EUINavigation param_2)

{
  code *pcVar1;
  bool bVar2;
  FScopedWidgetSlotArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined1 auStack_188 [32];
  SWidget *local_168;
  FSharedReferencer<1> local_160;
  TSharedRef<SWidget,1> local_158;
  FScopedWidgetSlotArguments local_148;
  ulonglong local_18;
  
  if (param_1 == Checked) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
    this->NavigationToDisplay = param_2;
    if (this->CurrentNavigationToDisplay != param_2) {
      this->CurrentNavigationToDisplay = param_2;
      if (((this->DetailOwner).Object == (SScrollBox *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      SScrollBox::ClearChildren((this->DetailOwner).Object);
      if (((this->DetailOwner).Object == (SScrollBox *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = SScrollBox::AddSlot((this->DetailOwner).Object,&local_148);
      pTVar4 = BuildContent(this,&local_158);
      local_160.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
      local_168 = pTVar4->Object;
      if (local_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_160.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_160.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((SWidget **)&pFVar3->_padding_ != &local_168) {
        pFVar3->_padding_ = (longlong)local_168;
        local_168 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_160);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_160.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                (&local_148);
    }
  }
  return;
}

// IsNavigationSlotEnabled @ 142ebce50

bool __thiscall
SNavigationSimulationListInternal::SDetailView::IsNavigationSlotEnabled
          (SDetailView *this,EUINavigation param_1)

{
  FNavigationSimulationWidgetNode *pFVar1;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar2;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar3;
  
  pFVar1 = (this->WidgetItem).Object;
  if (pFVar1 != (FNavigationSimulationWidgetNode *)0x0) {
    FVar2 = (pFVar1->Simulations).AllocatorInstance.SecondaryData;
    if (FVar2 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar2 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar1->Simulations;
    }
    FVar3 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
            ((longlong)FVar2 + (longlong)(pFVar1->Simulations).ArrayNum * 0x220);
    for (; FVar2 != FVar3;
        FVar2 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar2 + 0x220)) {
      if (*(EUINavigation *)FVar2 == param_1) {
        return true;
      }
    }
  }
  return false;
}

// SetNavigation @ 142f04270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::SetNavigation
          (SDetailView *this,EUINavigation param_1)

{
  code *pcVar1;
  bool bVar2;
  FScopedWidgetSlotArguments *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  undefined1 auStack_188 [32];
  SWidget *local_168;
  FSharedReferencer<1> local_160;
  TSharedRef<SWidget,1> local_158;
  FScopedWidgetSlotArguments local_148;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->NavigationToDisplay = param_1;
  if (this->CurrentNavigationToDisplay != param_1) {
    this->CurrentNavigationToDisplay = param_1;
    if ((this->DetailOwner).Object == (SScrollBox *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    SScrollBox::ClearChildren((this->DetailOwner).Object);
    if ((this->DetailOwner).Object == (SScrollBox *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar3 = SScrollBox::AddSlot((this->DetailOwner).Object,&local_148);
    pTVar4 = BuildContent(this,&local_158);
    local_160.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_168 = pTVar4->Object;
    if (local_160.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_160.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_160.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar3->_padding_ != &local_168) {
      pFVar3->_padding_ = (longlong)local_168;
      local_168 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar3->_padding_,&local_160);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_148);
  }
  return;
}

// SetWidgetItem @ 142f05f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
SNavigationSimulationListInternal::SDetailView::SetWidgetItem
          (SDetailView *this,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1)

{
  TSharedPtr<FNavigationSimulationWidgetNode,1> *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FNavigationSimulationWidgetNode *pFVar5;
  FScopedWidgetSlotArguments *pFVar6;
  TSharedRef<SWidget,1> *pTVar7;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar8;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar9;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  SWidget *local_190;
  FSharedReferencer<1> local_188;
  FNavigationSimulationWidgetNode *local_180;
  TReferenceControllerBase<1> *pTStack_178;
  TSharedRef<SWidget,1> local_170;
  FScopedWidgetSlotArguments local_158;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  pFVar5 = param_1->Object;
  this_00 = &this->WidgetItem;
  if (this_00->Object != pFVar5) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_180 = this_00->Object;
    pTStack_178 = (this->WidgetItem).SharedReferenceCount.ReferenceController;
    this_00->Object = pFVar5;
    (this->WidgetItem).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_178)
    ;
    pFVar5 = this_00->Object;
    if ((pFVar5 == (FNavigationSimulationWidgetNode *)0x0) || ((pFVar5->Simulations).ArrayNum == 0))
    {
      this->CurrentNavigationToDisplay = Invalid;
    }
    else {
      FVar9 = (pFVar5->Simulations).AllocatorInstance.SecondaryData;
      if (FVar9 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
        FVar9 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar5->Simulations;
      }
      FVar8 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
              ((longlong)FVar9 + (longlong)(pFVar5->Simulations).ArrayNum * 0x220);
      for (; FVar9 != FVar8;
          FVar9 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar9 + 0x220)) {
        if (*(EUINavigation *)FVar9 == this->NavigationToDisplay) {
          if (FVar9 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
            this->CurrentNavigationToDisplay = this->NavigationToDisplay;
            goto LAB_142f060cd;
          }
          break;
        }
      }
      this->CurrentNavigationToDisplay = Invalid;
      pFVar5 = TSharedPtr<FNavigationSimulationWidgetNode,1>::operator->(this_00);
      FVar9 = (pFVar5->Simulations).AllocatorInstance.SecondaryData;
      iVar1 = (pFVar5->Simulations).ArrayNum;
      if (FVar9 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
        FVar9 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar5->Simulations;
      }
      FVar8 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
              ((longlong)iVar1 * 0x220 + (longlong)FVar9);
      while( true ) {
        if ((pFVar5->Simulations).ArrayNum != iVar1) {
          local_198[0] = 0;
          `TCheckedPointerIterator<FNavigationSimulationWidgetNodeItem,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_198);
        }
        if (FVar9 == FVar8) break;
        if (*(longlong *)((longlong)FVar9 + 8) != 0) {
          this->CurrentNavigationToDisplay = *(EUINavigation *)FVar9;
        }
        FVar9 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar9 + 0x220);
      }
    }
LAB_142f060cd:
    if (((this->DetailOwner).Object == (SScrollBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SScrollBox::ClearChildren((this->DetailOwner).Object);
    if (((this->DetailOwner).Object == (SScrollBox *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar6 = SScrollBox::AddSlot((this->DetailOwner).Object,&local_158);
    pTVar7 = BuildContent(this,&local_170);
    local_188.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_190 = pTVar7->Object;
    if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_188.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_188.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar6->_padding_ != &local_190) {
      pFVar6->_padding_ = (longlong)local_190;
      local_190 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar6->_padding_,&local_188);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
    TPanelChildren<SScrollBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_158);
  }
  return;
}

