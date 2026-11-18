// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 3

// ConstructListView<SCommonListView,UListView> @ 14a7937c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SCommonListView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructListView<SCommonListView,UListView>
          (TSharedRef<SCommonListView<UObject_*>,1> *__return_storage_ptr__,UListView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FListViewConstructArgs *param_3)

{
  SCommonListView<UObject_*> *pSVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SCommonListView<UObject_*>,1> *pTVar12;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  UListView *local_res20;
  UListView *local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined1 local_778 [8];
  FDelegateAllocation local_770;
  undefined1 local_760;
  undefined1 local_75f;
  undefined1 local_758 [8];
  ForAnyElementType FStack_750;
  ulonglong local_748;
  Type local_740;
  undefined1 local_73c;
  undefined1 local_738 [8];
  ForAnyElementType FStack_730;
  ulonglong local_728;
  TSlateDecl<SCommonListView<UObject_*>,RequiredArgs::T0RequiredArgs> local_720;
  FMemScope local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  UListView *local_6f8;
  UListView *local_6f0;
  UListView *local_6e8;
  UListView *local_6e0;
  UListView *local_6d8;
  UListView *local_6d0;
  UListView *local_6c8;
  UListView *local_6c0;
  FName local_6b8;
  undefined8 local_6b0;
  FSharedReferencer<1> FStack_6a8;
  FDestructionSentinel local_6a0;
  FDestructionSentinel local_688;
  FDestructionSentinel local_670;
  FDestructionSentinel local_658;
  undefined1 *local_640;
  FDestructionSentinel local_638;
  undefined1 *local_620;
  FDestructionSentinel local_618;
  undefined1 *local_600;
  FDestructionSentinel local_5f8;
  undefined1 *local_5e0;
  FDestructionSentinel local_5d8;
  undefined1 *local_5c0;
  FDestructionSentinel local_5b8;
  undefined1 *local_5a0;
  FDestructionSentinel local_598;
  undefined1 *local_580;
  FDestructionSentinel local_578;
  undefined1 *local_560;
  FDestructionSentinel local_558;
  undefined1 *local_540;
  FDestructionSentinel local_538;
  FDelegateAllocation *local_520;
  FArguments local_518;
  
  pFVar9 = SListView<UObject_*>::FArguments::FArguments(&local_518);
  local_6b0 = 0;
  FStack_6a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar9->_HandleGamepadEvents = true;
  pFVar9->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar9->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar9->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_6b0) {
    (pFVar9->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar9->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_6a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6a8.ReferenceController);
  pFVar9->_ListItemsSource_ArrayPointer = param_2;
  local_760 = param_3->bAllowFocus;
  local_75f = 1;
  local_748 = 0;
  local_758 = (undefined1  [8])0x0;
  FStack_750.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_IsFocusable).Value = (bool)local_760;
  (pFVar9->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_IsFocusable).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_758);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
             (FWriteAccessScope *)&local_6a0);
  if (((int)local_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_750.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
    local_748 = local_748 & 0xffffffff00000000;
  }
  if (local_6a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
  }
  if (FStack_750.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_750.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_758);
  pFVar9->_ClearSelectionOnClick = param_3->bClearSelectionOnClick;
  pFVar9->_ConsumeMouseWheel = param_3->ConsumeMouseWheel;
  local_740 = param_3->SelectionMode;
  local_73c = 1;
  local_728 = 0;
  local_738 = (undefined1  [8])0x0;
  FStack_730.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_SelectionMode).Value = local_740;
  (pFVar9->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_738);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
             (FWriteAccessScope *)&local_688);
  if (((int)local_728 != 0) && (FStack_730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_730,0,0,0x10);
    local_728 = local_728 & 0xffffffff00000000;
  }
  if (local_688.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_688.Accessor,&local_688);
  }
  if (FStack_730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_738);
  pFVar9->_ReturnFocusToSelection = param_3->bReturnFocusToSelection;
  pFVar9->_ClearScrollVelocityOnSelection = param_3->bClearScrollVelocityOnSelection;
  pFVar9->_Orientation = param_3->Orientation;
  pFVar9->_ScrollIntoViewAlignment = param_3->ScrollIntoViewAlignment;
  pFVar9->_bEnableShadowBoxStyle = param_3->bEnableShadowBoxStyle;
  pFVar9->_ListViewStyle = param_3->ListViewStyle;
  pFVar9->_ShadowBoxStyle = param_3->ShadowBoxStyle;
  pFVar9->_ScrollBarStyle = param_3->ScrollBarStyle;
  fVar3 = (param_3->ScrollBarPadding).Top;
  fVar4 = (param_3->ScrollBarPadding).Right;
  fVar5 = (param_3->ScrollBarPadding).Bottom;
  uStack_780 = 0x348;
  (pFVar9->_ScrollBarPadding).Left = (param_3->ScrollBarPadding).Left;
  (pFVar9->_ScrollBarPadding).Top = fVar3;
  (pFVar9->_ScrollBarPadding).Right = fVar4;
  (pFVar9->_ScrollBarPadding).Bottom = fVar5;
  pFVar9->_PreventThrottling = param_3->bPreventThrottling;
  local_788 = (UListView *)HandleGenerateRow;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnGenerateRow,
             (FWriteAccessScope *)&local_658);
  local_640 = &(pFVar9->_OnGenerateRow).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_640);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnSelectionChanged,
             (FWriteAccessScope *)&local_638);
  local_620 = &(pFVar9->_OnSelectionChanged).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_620);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6f8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6f8);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar9->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_618);
  local_600 = &(pFVar9->_OnIsSelectableOrNavigable).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_600);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6f0);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  uStack_780 = 0;
  local_788 = (UListView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnRowReleased,
             (FWriteAccessScope *)&local_5f8);
  local_5e0 = &(pFVar9->_OnRowReleased).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5e0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6e8);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar9->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_5d8);
  local_5c0 = &(pFVar9->_OnItemScrolledIntoView).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6e0);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnListViewScrolled,
             (FWriteAccessScope *)&local_5b8);
  local_5a0 = &(pFVar9->_OnListViewScrolled).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5a0);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6d8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6d8);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnFinishedScrolling
             ,(FWriteAccessScope *)&local_598);
  local_580 = &(pFVar9->_OnFinishedScrolling).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_580);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6d0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6d0);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_598.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_598.Accessor,&local_598);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMouseButtonClick,
             (FWriteAccessScope *)&local_578);
  local_560 = &(pFVar9->_OnMouseButtonClick).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_560);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6c8);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar9->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_558);
  local_540 = &(pFVar9->_OnMouseButtonDoubleClick).field_0x8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_540);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_6c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_6c0);
    puVar10[4] = local_788;
    puVar10[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_558.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_558.Accessor,&local_558);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_6b8,true);
  TSlateDecl<SCommonListView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonListView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_720,"ListViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x111,local_res8);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  pSVar1 = local_720._Widget.Object;
  if (local_720._Widget.Object == (SCommonListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TSharedRef<SCommonListView<UObject_*>,1> *)(*pcVar2)();
      return pTVar12;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_720._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SListView<UObject_*>::Construct((SListView<UObject_*> *)local_720._Widget.Object,pFVar9);
  if (local_720._Widget.Object == (SCommonListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TSharedRef<SCommonListView<UObject_*>,1> *)(*pcVar2)();
      return pTVar12;
    }
  }
  if (((local_720._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar7 = (**(code **)(*(longlong *)local_720._Widget.Object + 0x228))(local_720._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14a79427c;
  }
  bVar8 = 0x20;
LAB_14a79427c:
  (local_720._Widget.Object)->field_0x30 = (local_720._Widget.Object)->field_0x30 & 0xdf;
  (local_720._Widget.Object)->field_0x30 = (local_720._Widget.Object)->field_0x30 | bVar8;
  if (local_720._Widget.Object == (SCommonListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TSharedRef<SCommonListView<UObject_*>,1> *)(*pcVar2)();
      return pTVar12;
    }
  }
  (local_720._Widget.Object)->field_0x31 = (local_720._Widget.Object)->field_0x31 | 4;
  if (local_720._Widget.Object == (SCommonListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TSharedRef<SCommonListView<UObject_*>,1> *)(*pcVar2)();
      return pTVar12;
    }
  }
  __return_storage_ptr__->Object = local_720._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_720._Widget.SharedReferenceCount.ReferenceController;
  local_720._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_720._Widget.Object = (SCommonListView<UObject_*> *)0x0;
  if (pSVar1 == (SCommonListView<UObject_*> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      pTVar12 = (TSharedRef<SCommonListView<UObject_*>,1> *)(*pcVar2)();
      return pTVar12;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SListView<UObject_*>::FArguments::~FArguments(&local_518);
  pSVar1 = __return_storage_ptr__->Object;
  local_708 = (FMemScope)HandleRefreshRow;
  uStack_6fc = uStack_77c;
  uStack_700 = 0x348;
  local_778 = (undefined1  [8])0x0;
  local_770.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_770.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_778,
             (FWriteAccessScope *)&local_538);
  local_520 = &local_770;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_770);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar10[3] = 0;
    local_788 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_788);
    *(FMemScope *)(puVar10 + 4) = local_708;
    puVar10[5] = CONCAT44(uStack_6fc,uStack_700);
  }
  if (local_538.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar1->field_0x788,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_778);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_778,
             (FWriteAccessScope *)&local_670);
  if ((local_770.DelegateSize != 0) &&
     (local_770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_770.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_770,0,0,0x10);
    local_770.DelegateSize = 0;
  }
  if (local_670.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_670.Accessor,&local_670);
  }
  if (local_770.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_770.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_778);
  return __return_storage_ptr__;
}

// ConstructTileView<SCommonTileView,UTileView> @ 14a794ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SCommonTileView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTileView<SCommonTileView,UTileView>
          (TSharedRef<SCommonTileView<UObject_*>,1> *__return_storage_ptr__,UTileView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FTileViewConstructArgs *param_3)

{
  byte *pbVar1;
  SCommonTileView<UObject_*> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<SCommonTileView<UObject_*>,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  UTileView *local_res20;
  UTileView *local_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined1 local_798 [8];
  FDelegateAllocation local_790;
  undefined1 local_780;
  undefined1 local_77f;
  undefined1 local_778 [8];
  ForAnyElementType FStack_770;
  ulonglong local_768;
  Type local_760;
  undefined1 local_75c;
  undefined1 local_758 [8];
  ForAnyElementType FStack_750;
  ulonglong local_748;
  EListItemAlignment local_740;
  undefined1 local_73f;
  undefined1 local_738 [8];
  ForAnyElementType FStack_730;
  ulonglong local_728;
  TSlateDecl<SCommonTileView<UObject_*>,RequiredArgs::T0RequiredArgs> local_720;
  FMemScope local_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  float local_6f8;
  bool local_6f4;
  undefined1 local_6f0 [24];
  float local_6d8;
  bool local_6d4;
  undefined1 local_6d0 [24];
  UTileView *local_6b8;
  UTileView *local_6b0;
  UTileView *local_6a8;
  UTileView *local_6a0;
  UTileView *local_698;
  UTileView *local_690;
  UTileView *local_688;
  UTileView *local_680;
  FName local_678;
  undefined8 local_670;
  FSharedReferencer<1> FStack_668;
  FDestructionSentinel local_660;
  FDestructionSentinel local_648;
  FDestructionSentinel local_630;
  FDestructionSentinel local_618;
  FDestructionSentinel local_600;
  undefined1 *local_5e8;
  FDestructionSentinel local_5e0;
  undefined1 *local_5c8;
  FDestructionSentinel local_5c0;
  undefined1 *local_5a8;
  FDestructionSentinel local_5a0;
  undefined1 *local_588;
  FDestructionSentinel local_580;
  undefined1 *local_568;
  FDestructionSentinel local_560;
  undefined1 *local_548;
  FDestructionSentinel local_540;
  undefined1 *local_528;
  FDestructionSentinel local_520;
  undefined1 *local_508;
  FDestructionSentinel local_500;
  undefined1 *local_4e8;
  FDestructionSentinel local_4e0;
  FDelegateAllocation *local_4c8;
  FArguments local_4c0;
  
  pFVar7 = STileView<UObject_*>::FArguments::FArguments(&local_4c0);
  local_670 = 0;
  FStack_668.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7->_HandleGamepadEvents = true;
  pFVar7->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar7->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar7->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_670) {
    (pFVar7->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar7->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_668);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_668.ReferenceController);
  pFVar7->_ListItemsSource_ArrayPointer = param_2;
  local_780 = (undefined1)param_3->_padding_;
  local_77f = 1;
  local_768 = 0;
  local_778 = (undefined1  [8])0x0;
  FStack_770.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_IsFocusable).Value = (bool)local_780;
  (pFVar7->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_IsFocusable).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_778);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_778,
             (FWriteAccessScope *)&local_618);
  if (((int)local_768 != 0) && (FStack_770.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_770.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_770,0,0,0x10);
    local_768 = local_768 & 0xffffffff00000000;
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  if (FStack_770.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_770.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_778);
  pFVar7->_ClearSelectionOnClick = SUB81(param_3->_padding_,0);
  pFVar7->_WrapHorizontalNavigation = param_3->bWrapDirectionalNavigation;
  pFVar7->_ConsumeMouseWheel = *(EConsumeMouseWheel *)((longlong)&param_3->_padding_ + 1);
  local_760 = *(Type *)((longlong)&param_3->_padding_ + 4);
  local_75c = 1;
  local_748 = 0;
  local_758 = (undefined1  [8])0x0;
  FStack_750.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_SelectionMode).Value = local_760;
  (pFVar7->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_758);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_758,
             (FWriteAccessScope *)&local_660);
  if (((int)local_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_750.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
    local_748 = local_748 & 0xffffffff00000000;
  }
  if (local_660.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_660.Accessor,&local_660);
  }
  if (FStack_750.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_750.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_758);
  local_6f8 = (param_3->EntryHeight).Value;
  local_6f4 = (param_3->EntryHeight).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_6f0,
             &(param_3->EntryHeight).Getter);
  (pFVar7->_ItemHeight).Value = local_6f8;
  (pFVar7->_ItemHeight).bIsSet = local_6f4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
  if ((void *)local_6f0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6f0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6f0);
  local_6d8 = (param_3->EntryWidth).Value;
  local_6d4 = (param_3->EntryWidth).bIsSet;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_6d0,
             &(param_3->EntryWidth).Getter);
  (pFVar7->_ItemWidth).Value = local_6d8;
  (pFVar7->_ItemWidth).bIsSet = local_6d4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d0);
  if ((void *)local_6d0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_6d0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_6d0);
  local_740 = param_3->TileAlignment;
  local_73f = 1;
  local_728 = 0;
  local_738 = (undefined1  [8])0x0;
  FStack_730.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_ItemAlignment).Value = local_740;
  (pFVar7->_ItemAlignment).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_738);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
             (FWriteAccessScope *)&local_648);
  if (((int)local_728 != 0) && (FStack_730.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_730.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_730,0,0,0x10);
    local_728 = local_728 & 0xffffffff00000000;
  }
  if (local_648.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_648.Accessor,&local_648);
  }
  if (FStack_730.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_730.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_738);
  pFVar7->_Orientation = *(EOrientation *)((longlong)&param_3->_padding_ + 4);
  pFVar7->_ScrollBarStyle = param_3->ScrollBarStyle;
  (pFVar7->_ScrollbarDisabledVisibility).Value.Value =
       (param_3->ScrollbarDisabledVisibility).Value.Value;
  local_7a8 = (UTileView *)HandleGenerateRow;
  uStack_7a0 = 0x348;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnGenerateTile,
             (FWriteAccessScope *)&local_600);
  local_5e8 = &(pFVar7->_OnGenerateTile).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5e8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res20);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  uStack_7a0 = 0;
  local_7a8 = (UTileView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnTileReleased,
             (FWriteAccessScope *)&local_5e0);
  local_5c8 = &(pFVar7->_OnTileReleased).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6b8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6b8);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnSelectionChanged,
             (FWriteAccessScope *)&local_5c0);
  local_5a8 = &(pFVar7->_OnSelectionChanged).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5a8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6b0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6b0);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_5a0);
  local_588 = &(pFVar7->_OnIsSelectableOrNavigable).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_588);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6a8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6a8);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_580);
  local_568 = &(pFVar7->_OnItemScrolledIntoView).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_568);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6a0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6a0);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnTileViewScrolled,
             (FWriteAccessScope *)&local_560);
  local_548 = &(pFVar7->_OnTileViewScrolled).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_548);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_698 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_698);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnFinishedScrolling
             ,(FWriteAccessScope *)&local_540);
  local_528 = &(pFVar7->_OnFinishedScrolling).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_528);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_690 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_690);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_540.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnMouseButtonClick,
             (FWriteAccessScope *)&local_520);
  local_508 = &(pFVar7->_OnMouseButtonClick).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_508);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_688 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_688);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_500);
  local_4e8 = &(pFVar7->_OnMouseButtonDoubleClick).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_4e8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_680 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_680);
    puVar8[4] = local_7a8;
    puVar8[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_678 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_678,true);
  TSlateDecl<SCommonTileView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonTileView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_720,"TileViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x140,local_res8);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_720._Widget.Object;
  if (local_720._Widget.Object == (SCommonTileView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_720._Widget.Object,(FSlateBaseNamedArgs *)pFVar7);
  STileView<UObject_*>::Construct((STileView<UObject_*> *)local_720._Widget.Object,pFVar7);
  if (local_720._Widget.Object == (SCommonTileView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  if (((local_720._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_720._Widget.Object)->_padding_ + 0x228))(local_720._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14a795903;
  }
  bVar6 = 0x20;
LAB_14a795903:
  *(byte *)&(local_720._Widget.Object)->_padding_ =
       (byte)(local_720._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_720._Widget.Object)->_padding_ =
       (byte)(local_720._Widget.Object)->_padding_ | bVar6;
  if (local_720._Widget.Object == (SCommonTileView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_720._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_720._Widget.Object == (SCommonTileView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = local_720._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_720._Widget.SharedReferenceCount.ReferenceController;
  local_720._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_720._Widget.Object = (SCommonTileView<UObject_*> *)0x0;
  if (pSVar2 == (SCommonTileView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTileView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STileView<UObject_*>::FArguments::~FArguments(&local_4c0);
  pSVar2 = __return_storage_ptr__->Object;
  local_708 = (FMemScope)HandleRefreshRow;
  uStack_6fc = uStack_79c;
  uStack_700 = 0x348;
  local_798 = (undefined1  [8])0x0;
  local_790.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_790.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_798,
             (FWriteAccessScope *)&local_4e0);
  local_4c8 = &local_790;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_790);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_7a8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_7a8);
    *(FMemScope *)(puVar8 + 4) = local_708;
    puVar8[5] = CONCAT44(uStack_6fc,uStack_700);
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar2->_padding_,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_798);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_798,
             (FWriteAccessScope *)&local_630);
  if ((local_790.DelegateSize != 0) &&
     (local_790.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_790.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_790,0,0,0x10);
    local_790.DelegateSize = 0;
  }
  if (local_630.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
  }
  if (local_790.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_790.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_798);
  return __return_storage_ptr__;
}

// ConstructTreeView<SCommonTreeView,UTreeView> @ 14a795f20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SCommonTreeView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTreeView<SCommonTreeView,UTreeView>
          (TSharedRef<SCommonTreeView<UObject_*>,1> *__return_storage_ptr__,UTreeView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FTreeViewConstructArgs *param_3)

{
  byte *pbVar1;
  SCommonTreeView<UObject_*> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<SCommonTreeView<UObject_*>,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  UTreeView *local_res20;
  UTreeView *local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined1 local_788 [8];
  FDelegateAllocation local_780;
  Type local_770;
  undefined1 local_76c;
  undefined1 local_768 [8];
  ForAnyElementType FStack_760;
  ulonglong local_758;
  TSlateDecl<SCommonTreeView<UObject_*>,RequiredArgs::T0RequiredArgs> local_750;
  FMemScope local_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  UTreeView *local_728;
  UTreeView *local_720;
  UTreeView *local_718;
  UTreeView *local_710;
  UTreeView *local_708;
  UTreeView *local_700;
  UTreeView *local_6f8;
  UTreeView *local_6f0;
  UTreeView *local_6e8;
  UTreeView *local_6e0;
  FName local_6d8;
  undefined8 local_6d0;
  FSharedReferencer<1> FStack_6c8;
  FDestructionSentinel local_6c0;
  FDestructionSentinel local_6a8;
  FDestructionSentinel local_690;
  undefined1 *local_678;
  FDestructionSentinel local_670;
  undefined1 *local_658;
  FDestructionSentinel local_650;
  undefined1 *local_638;
  FDestructionSentinel local_630;
  undefined1 *local_618;
  FDestructionSentinel local_610;
  undefined1 *local_5f8;
  FDestructionSentinel local_5f0;
  undefined1 *local_5d8;
  FDestructionSentinel local_5d0;
  undefined1 *local_5b8;
  FDestructionSentinel local_5b0;
  undefined1 *local_598;
  FDestructionSentinel local_590;
  undefined1 *local_578;
  FDestructionSentinel local_570;
  undefined1 *local_558;
  FDestructionSentinel local_550;
  undefined1 *local_538;
  FDestructionSentinel local_530;
  FDelegateAllocation *local_518;
  FArguments local_510;
  
  pFVar7 = STreeView<UObject_*>::FArguments::FArguments(&local_510);
  local_6d0 = 0;
  FStack_6c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7->_HandleGamepadEvents = true;
  pFVar7->_TreeItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar7->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar7->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_6d0) {
    (pFVar7->_TreeItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar7->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_6c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6c8.ReferenceController);
  pFVar7->_TreeItemsSource_ArrayPointer = param_2;
  pFVar7->_ClearSelectionOnClick = param_3->bClearSelectionOnClick;
  pFVar7->_ConsumeMouseWheel = param_3->ConsumeMouseWheel;
  local_770 = param_3->SelectionMode;
  local_76c = 1;
  local_758 = 0;
  local_768 = (undefined1  [8])0x0;
  FStack_760.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_SelectionMode).Value = local_770;
  (pFVar7->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_6c0);
  if (((int)local_758 != 0) && (FStack_760.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_760.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_760,0,0,0x10);
    local_758 = local_758 & 0xffffffff00000000;
  }
  if (local_6c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
  }
  if (FStack_760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_760.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_768);
  pFVar7->_ReturnFocusToSelection = param_3->bReturnFocusToSelection;
  pFVar7->_TreeViewStyle = param_3->TreeViewStyle;
  pFVar7->_ScrollBarStyle = param_3->ScrollBarStyle;
  local_798 = (UTreeView *)HandleGenerateRow;
  uStack_790 = 0x348;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnGenerateRow,
             (FWriteAccessScope *)&local_690);
  local_678 = &(pFVar7->_OnGenerateRow).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_678);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res20);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_690.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnSelectionChanged,
             (FWriteAccessScope *)&local_670);
  local_658 = &(pFVar7->_OnSelectionChanged).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_658);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_728 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_728);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_670.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_670.Accessor,&local_670);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_650);
  local_638 = &(pFVar7->_OnIsSelectableOrNavigable).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_638);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_720 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_720);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_650.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_650.Accessor,&local_650);
  }
  uStack_790 = 0;
  local_798 = (UTreeView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnRowReleased,
             (FWriteAccessScope *)&local_630);
  local_618 = &(pFVar7->_OnRowReleased).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_618);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_718 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_718);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_630.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_610);
  local_5f8 = &(pFVar7->_OnItemScrolledIntoView).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5f8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_710 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_710);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_610.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_610.Accessor,&local_610);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnTreeViewScrolled,
             (FWriteAccessScope *)&local_5f0);
  local_5d8 = &(pFVar7->_OnTreeViewScrolled).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5d8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_708 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_708);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnFinishedScrolling
             ,(FWriteAccessScope *)&local_5d0);
  local_5b8 = &(pFVar7->_OnFinishedScrolling).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5b8);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_700 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_700);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnMouseButtonClick,
             (FWriteAccessScope *)&local_5b0);
  local_598 = &(pFVar7->_OnMouseButtonClick).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_598);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6f8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6f8);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar7->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_590);
  local_578 = &(pFVar7->_OnMouseButtonDoubleClick).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_578);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6f0);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_590.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_590.Accessor,&local_590);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleGetChildren;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnGetChildren,
             (FWriteAccessScope *)&local_570);
  local_558 = &(pFVar7->_OnGetChildren).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_558);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUTreeView____A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6e8);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_570.Accessor,&local_570);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleExpansionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar7->_OnExpansionChanged,
             (FWriteAccessScope *)&local_550);
  local_538 = &(pFVar7->_OnExpansionChanged).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_538);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_6e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6e0);
    puVar8[4] = local_798;
    puVar8[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_550.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_738,&local_6d8,true);
  TSlateDecl<SCommonTreeView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCommonTreeView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_750,"TreeViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x16c,local_res8);
  FMemScope::~FMemScope(&local_738);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_750._Widget.Object;
  if (local_750._Widget.Object == (SCommonTreeView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTreeView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_750._Widget.Object,(FSlateBaseNamedArgs *)pFVar7);
  STreeView<UObject_*>::Construct((STreeView<UObject_*> *)local_750._Widget.Object,pFVar7);
  if (local_750._Widget.Object == (SCommonTreeView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTreeView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  if (((local_750._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_750._Widget.Object)->_padding_ + 0x228))(local_750._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14a796a7f;
  }
  bVar6 = 0x20;
LAB_14a796a7f:
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ | bVar6;
  if (local_750._Widget.Object == (SCommonTreeView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTreeView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_750._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_750._Widget.Object == (SCommonTreeView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTreeView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = local_750._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_750._Widget.SharedReferenceCount.ReferenceController;
  local_750._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_750._Widget.Object = (SCommonTreeView<UObject_*> *)0x0;
  if (pSVar2 == (SCommonTreeView<UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SCommonTreeView<UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STreeView<UObject_*>::FArguments::~FArguments(&local_510);
  pSVar2 = __return_storage_ptr__->Object;
  local_738 = (FMemScope)HandleRefreshRow;
  uStack_72c = uStack_78c;
  uStack_730 = 0x348;
  local_788 = (undefined1  [8])0x0;
  local_780.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_780.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
             (FWriteAccessScope *)&local_530);
  local_518 = &local_780;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_780);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar8[3] = 0;
    local_798 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_798);
    *(FMemScope *)(puVar8 + 4) = local_738;
    puVar8[5] = CONCAT44(uStack_72c,uStack_730);
  }
  if (local_530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar2->_padding_,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_788);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
             (FWriteAccessScope *)&local_6a8);
  if ((local_780.DelegateSize != 0) &&
     (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_780.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_780,0,0,0x10);
    local_780.DelegateSize = 0;
  }
  if (local_6a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
  }
  if (local_780.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_780.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_788);
  return __return_storage_ptr__;
}

