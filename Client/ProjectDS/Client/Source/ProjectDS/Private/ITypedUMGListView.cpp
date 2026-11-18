// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ConstructListView<SDS_ListView,UListView> @ 14bc77370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructListView<SDS_ListView,UListView>
          (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *__return_storage_ptr__,
          UListView *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          FListViewConstructArgs *param_3)

{
  byte *pbVar1;
  SDS_TableViewBase<SListView,UObject_*> *pSVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FArguments *pFVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *pTVar13;
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
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs> local_720;
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
  
  pFVar10 = SListView<UObject_*>::FArguments::FArguments(&local_518);
  local_6b0 = 0;
  FStack_6a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar10->_HandleGamepadEvents = true;
  pFVar10->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar10->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar10->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_6b0) {
    (pFVar10->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar10->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_6a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6a8.ReferenceController);
  pFVar10->_ListItemsSource_ArrayPointer = param_2;
  local_760 = param_3->bAllowFocus;
  local_75f = 1;
  local_748 = 0;
  local_758 = (undefined1  [8])0x0;
  FStack_750.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_IsFocusable).Value = (bool)local_760;
  (pFVar10->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_IsFocusable).Getter,
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
  pFVar10->_ClearSelectionOnClick = param_3->bClearSelectionOnClick;
  pFVar10->_ConsumeMouseWheel = param_3->ConsumeMouseWheel;
  local_740 = param_3->SelectionMode;
  local_73c = 1;
  local_728 = 0;
  local_738 = (undefined1  [8])0x0;
  FStack_730.Data = (FScriptContainerElement *)0x0;
  (pFVar10->_SelectionMode).Value = local_740;
  (pFVar10->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_SelectionMode).Getter,
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
  pFVar10->_ReturnFocusToSelection = param_3->bReturnFocusToSelection;
  pFVar10->_ClearScrollVelocityOnSelection = param_3->bClearScrollVelocityOnSelection;
  pFVar10->_Orientation = param_3->Orientation;
  pFVar10->_ScrollIntoViewAlignment = param_3->ScrollIntoViewAlignment;
  pFVar10->_bEnableShadowBoxStyle = param_3->bEnableShadowBoxStyle;
  pFVar10->_ListViewStyle = param_3->ListViewStyle;
  pFVar10->_ShadowBoxStyle = param_3->ShadowBoxStyle;
  pFVar10->_ScrollBarStyle = param_3->ScrollBarStyle;
  fVar4 = (param_3->ScrollBarPadding).Top;
  fVar5 = (param_3->ScrollBarPadding).Right;
  fVar6 = (param_3->ScrollBarPadding).Bottom;
  uStack_780 = 0x348;
  (pFVar10->_ScrollBarPadding).Left = (param_3->ScrollBarPadding).Left;
  (pFVar10->_ScrollBarPadding).Top = fVar4;
  (pFVar10->_ScrollBarPadding).Right = fVar5;
  (pFVar10->_ScrollBarPadding).Bottom = fVar6;
  pFVar10->_PreventThrottling = param_3->bPreventThrottling;
  local_788 = (UListView *)HandleGenerateRow;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnGenerateRow,
             (FWriteAccessScope *)&local_658);
  local_640 = &(pFVar10->_OnGenerateRow).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_640);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_res20);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_658.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_658.Accessor,&local_658);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnSelectionChanged
             ,(FWriteAccessScope *)&local_638);
  local_620 = &(pFVar10->_OnSelectionChanged).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_620);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6f8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6f8);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_638.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_638.Accessor,&local_638);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_618);
  local_600 = &(pFVar10->_OnIsSelectableOrNavigable).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_600);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6f0);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  uStack_780 = 0;
  local_788 = (UListView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnRowReleased,
             (FWriteAccessScope *)&local_5f8);
  local_5e0 = &(pFVar10->_OnRowReleased).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5e0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6e8);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f8.Accessor,&local_5f8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_5d8);
  local_5c0 = &(pFVar10->_OnItemScrolledIntoView).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6e0);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnListViewScrolled
             ,(FWriteAccessScope *)&local_5b8);
  local_5a0 = &(pFVar10->_OnListViewScrolled).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6d8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6d8);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_5b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b8.Accessor,&local_5b8);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnFinishedScrolling,(FWriteAccessScope *)&local_598);
  local_580 = &(pFVar10->_OnFinishedScrolling).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_580);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6d0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6d0);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_598.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_598.Accessor,&local_598);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar10->_OnMouseButtonClick
             ,(FWriteAccessScope *)&local_578);
  local_560 = &(pFVar10->_OnMouseButtonClick).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_560);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6c8);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_578.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_578.Accessor,&local_578);
  }
  uStack_780 = 0x348;
  local_788 = (UListView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar10->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_558);
  local_540 = &(pFVar10->_OnMouseButtonDoubleClick).field_0x8;
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_540);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_6c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_6c0);
    puVar11[4] = local_788;
    puVar11[5] = CONCAT44(uStack_77c,uStack_780);
  }
  if (local_558.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_558.Accessor,&local_558);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_6b8,true);
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SListView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_720,"ListViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x111,local_res8);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_720._Widget.Object;
  if (local_720._Widget.Object == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_720._Widget.Object,(FSlateBaseNamedArgs *)pFVar10);
  SListView<UObject_*>::Construct((SListView<UObject_*> *)local_720._Widget.Object,pFVar10);
  if (local_720._Widget.Object == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  if (((local_720._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar8 = (**(code **)((local_720._Widget.Object)->_padding_ + 0x228))(local_720._Widget.Object);
    bVar9 = 0;
    if (cVar8 == '\0') goto LAB_14bc77e2c;
  }
  bVar9 = 0x20;
LAB_14bc77e2c:
  *(byte *)&(local_720._Widget.Object)->_padding_ =
       (byte)(local_720._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_720._Widget.Object)->_padding_ =
       (byte)(local_720._Widget.Object)->_padding_ | bVar9;
  if (local_720._Widget.Object == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_720._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_720._Widget.Object == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = local_720._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_720._Widget.SharedReferenceCount.ReferenceController;
  local_720._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_720._Widget.Object = (SDS_TableViewBase<SListView,UObject_*> *)0x0;
  if (pSVar2 == (SDS_TableViewBase<SListView,UObject_*> *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pTVar13 = (TSharedRef<SDS_TableViewBase<SListView,UObject_*>,1> *)(*pcVar3)();
      return pTVar13;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SListView<UObject_*>::FArguments::~FArguments(&local_518);
  pSVar2 = __return_storage_ptr__->Object;
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
  puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_770);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[2] = uVar12;
    *puVar11 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar11[3] = 0;
    local_788 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_788);
    *(FMemScope *)(puVar11 + 4) = local_708;
    puVar11[5] = CONCAT44(uStack_6fc,uStack_700);
  }
  if (local_538.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_538.Accessor,&local_538);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar2->_padding_,
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

// ConstructTileView<SDS_TileView,UTileView> @ 14bc78890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTileView<SDS_TileView,UTileView>
          (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *__return_storage_ptr__,
          UTileView *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          FTileViewConstructArgs *param_3)

{
  byte *pbVar1;
  SDS_TableViewBase<SCommonTileView,UObject_*> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *pTVar10;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res18 [2];
  UTileView *local_res20;
  UTileView *local_7d8;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined1 local_7c8 [8];
  FDelegateAllocation local_7c0;
  undefined1 local_7b0;
  undefined1 local_7af;
  undefined1 local_7a8 [8];
  ForAnyElementType FStack_7a0;
  ulonglong local_798;
  Type local_790;
  undefined1 local_78c;
  undefined1 local_788 [8];
  ForAnyElementType FStack_780;
  ulonglong local_778;
  float local_770;
  bool local_76c;
  undefined1 local_768 [8];
  ForAnyElementType FStack_760;
  int local_758;
  float local_750;
  bool local_74c;
  undefined1 local_748 [8];
  ForAnyElementType FStack_740;
  int local_738;
  EListItemAlignment local_730;
  undefined1 local_72f;
  undefined1 local_728 [8];
  ForAnyElementType FStack_720;
  ulonglong local_718;
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs> local_710;
  FMemScope local_6f8;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  UTileView *local_6e8;
  UTileView *local_6e0;
  UTileView *local_6d8;
  UTileView *local_6d0;
  UTileView *local_6c8;
  UTileView *local_6c0;
  UTileView *local_6b8;
  UTileView *local_6b0;
  FName local_6a8;
  undefined8 local_6a0;
  FSharedReferencer<1> FStack_698;
  FDestructionSentinel local_690;
  FDestructionSentinel local_678;
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
  local_6a0 = 0;
  FStack_698.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar7->_HandleGamepadEvents = true;
  pFVar7->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar7->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar7->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_6a0) {
    (pFVar7->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar7->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_698);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_698.ReferenceController);
  pFVar7->_ListItemsSource_ArrayPointer = param_2;
  local_7b0 = (undefined1)param_3->_padding_;
  local_7af = 1;
  local_798 = 0;
  local_7a8 = (undefined1  [8])0x0;
  FStack_7a0.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_IsFocusable).Value = (bool)local_7b0;
  (pFVar7->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_IsFocusable).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7a8,
             (FWriteAccessScope *)&local_678);
  if (((int)local_798 != 0) && (FStack_7a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7a0,0,0,0x10);
    local_798 = local_798 & 0xffffffff00000000;
  }
  if (local_678.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_678.Accessor,&local_678);
  }
  if (FStack_7a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7a8);
  pFVar7->_ClearSelectionOnClick = SUB81(param_3->_padding_,0);
  pFVar7->_WrapHorizontalNavigation = param_3->bWrapDirectionalNavigation;
  pFVar7->_ConsumeMouseWheel = *(EConsumeMouseWheel *)((longlong)&param_3->_padding_ + 1);
  local_790 = *(Type *)((longlong)&param_3->_padding_ + 4);
  local_78c = 1;
  local_778 = 0;
  local_788 = (undefined1  [8])0x0;
  FStack_780.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_SelectionMode).Value = local_790;
  (pFVar7->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_788);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_788,
             (FWriteAccessScope *)&local_660);
  if (((int)local_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_780.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
    local_778 = local_778 & 0xffffffff00000000;
  }
  if (local_660.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_660.Accessor,&local_660);
  }
  if (FStack_780.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_780.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_788);
  local_770 = (param_3->EntryHeight).Value;
  local_76c = (param_3->EntryHeight).bIsSet;
  local_768 = (undefined1  [8])0x0;
  FStack_760.Data = (FScriptContainerElement *)0x0;
  local_758 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_768,
             &(param_3->EntryHeight).Getter);
  (pFVar7->_ItemHeight).Value = local_770;
  (pFVar7->_ItemHeight).bIsSet = local_76c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemHeight).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_648);
  if ((local_758 != 0) && (FStack_760.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_760.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_760,0,0,0x10);
    local_758 = 0;
  }
  if (local_648.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_648.Accessor,&local_648);
  }
  if (FStack_760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_760.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_768);
  local_750 = (param_3->EntryWidth).Value;
  local_74c = (param_3->EntryWidth).bIsSet;
  local_748 = (undefined1  [8])0x0;
  FStack_740.Data = (FScriptContainerElement *)0x0;
  local_738 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *)local_748,
             &(param_3->EntryWidth).Getter);
  (pFVar7->_ItemWidth).Value = local_750;
  (pFVar7->_ItemWidth).bIsSet = local_74c;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemWidth).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_748);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_748,
             (FWriteAccessScope *)&local_630);
  if ((local_738 != 0) && (FStack_740.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_740.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_740,0,0,0x10);
    local_738 = 0;
  }
  if (local_630.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
  }
  if (FStack_740.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_740.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_748);
  local_730 = param_3->TileAlignment;
  local_72f = 1;
  local_718 = 0;
  local_728 = (undefined1  [8])0x0;
  FStack_720.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_ItemAlignment).Value = local_730;
  (pFVar7->_ItemAlignment).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ItemAlignment).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_728);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_728,
             (FWriteAccessScope *)&local_618);
  if (((int)local_718 != 0) && (FStack_720.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_720.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_720,0,0,0x10);
    local_718 = local_718 & 0xffffffff00000000;
  }
  if (local_618.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_618.Accessor,&local_618);
  }
  if (FStack_720.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_720.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_728);
  pFVar7->_Orientation = *(EOrientation *)((longlong)&param_3->_padding_ + 4);
  pFVar7->_ScrollBarStyle = param_3->ScrollBarStyle;
  (pFVar7->_ScrollbarDisabledVisibility).Value.Value =
       (param_3->ScrollbarDisabledVisibility).Value.Value;
  local_7d8 = (UTileView *)HandleGenerateRow;
  uStack_7d0 = 0x348;
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
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  uStack_7d0 = 0;
  local_7d8 = (UTileView *)UListViewBase::HandleRowReleased;
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
    local_6e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6e8);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_5e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleSelectionChanged;
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
    local_6e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6e0);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleIsSelectableOrNavigable;
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
    local_6d8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6d8);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_5a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleItemScrolledIntoView;
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
    local_6d0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6d0);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleListViewScrolled;
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
    local_6c8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6c8);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleFinishedScrolling;
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
    local_6c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6c0);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_540.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleItemClicked;
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
    local_6b8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6b8);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
  }
  uStack_7d0 = 0x348;
  local_7d8 = (UTileView *)HandleItemDoubleClicked;
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
    local_6b0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_6b0);
    puVar8[4] = local_7d8;
    puVar8[5] = CONCAT44(uStack_7cc,uStack_7d0);
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_6f8,&local_6a8,true);
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SCommonTileView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_710,"TileViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x140,local_res8);
  FMemScope::~FMemScope(&local_6f8);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_710._Widget.Object;
  if (local_710._Widget.Object == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_710._Widget.Object,(FSlateBaseNamedArgs *)pFVar7);
  STileView<UObject_*>::Construct((STileView<UObject_*> *)local_710._Widget.Object,pFVar7);
  if (local_710._Widget.Object == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  if (((local_710._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_710._Widget.Object)->_padding_ + 0x228))(local_710._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bc7957b;
  }
  bVar6 = 0x20;
LAB_14bc7957b:
  *(byte *)&(local_710._Widget.Object)->_padding_ =
       (byte)(local_710._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_710._Widget.Object)->_padding_ =
       (byte)(local_710._Widget.Object)->_padding_ | bVar6;
  if (local_710._Widget.Object == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_710._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_710._Widget.Object == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = local_710._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_710._Widget.SharedReferenceCount.ReferenceController;
  local_710._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_710._Widget.Object = (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0;
  if (pSVar2 == (SDS_TableViewBase<SCommonTileView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTileView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STileView<UObject_*>::FArguments::~FArguments(&local_4c0);
  pSVar2 = __return_storage_ptr__->Object;
  local_6f8 = (FMemScope)HandleRefreshRow;
  uStack_6ec = uStack_7cc;
  uStack_6f0 = 0x348;
  local_7c8 = (undefined1  [8])0x0;
  local_7c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_7c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c8,
             (FWriteAccessScope *)&local_4e0);
  local_4c8 = &local_7c0;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_7c0);
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
    local_7d8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_7d8);
    *(FMemScope *)(puVar8 + 4) = local_6f8;
    puVar8[5] = CONCAT44(uStack_6ec,uStack_6f0);
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar2->_padding_,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_7c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c8,
             (FWriteAccessScope *)&local_690);
  if ((local_7c0.DelegateSize != 0) &&
     (local_7c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_7c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_7c0,0,0,0x10);
    local_7c0.DelegateSize = 0;
  }
  if (local_690.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
  }
  if (local_7c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_7c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_7c8);
  return __return_storage_ptr__;
}

// ConstructTreeView<SDS_TreeView,UTreeView> @ 14bc79b90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTreeView<SDS_TreeView,UTreeView>
          (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *__return_storage_ptr__,
          UTreeView *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          FTreeViewConstructArgs *param_3)

{
  byte *pbVar1;
  SDS_TableViewBase<SCommonTreeView,UObject_*> *pSVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  FArguments *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *pTVar10;
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
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs> local_750;
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
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDS_TableViewBase<SCommonTreeView,UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_750,"TreeViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x16c,local_res8);
  FMemScope::~FMemScope(&local_738);
  FLLMScope::~FLLMScope(local_res18);
  pSVar2 = local_750._Widget.Object;
  if (local_750._Widget.Object == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_750._Widget.Object,(FSlateBaseNamedArgs *)pFVar7);
  STreeView<UObject_*>::Construct((STreeView<UObject_*> *)local_750._Widget.Object,pFVar7);
  if (local_750._Widget.Object == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  if (((local_750._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar5 = (**(code **)((local_750._Widget.Object)->_padding_ + 0x228))(local_750._Widget.Object);
    bVar6 = 0;
    if (cVar5 == '\0') goto LAB_14bc7a6ef;
  }
  bVar6 = 0x20;
LAB_14bc7a6ef:
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_750._Widget.Object)->_padding_ =
       (byte)(local_750._Widget.Object)->_padding_ | bVar6;
  if (local_750._Widget.Object == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_750._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_750._Widget.Object == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar3)();
      return pTVar10;
    }
  }
  __return_storage_ptr__->Object = local_750._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_750._Widget.SharedReferenceCount.ReferenceController;
  local_750._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_750._Widget.Object = (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0;
  if (pSVar2 == (SDS_TableViewBase<SCommonTreeView,UObject_*> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar10 = (TSharedRef<SDS_TableViewBase<SCommonTreeView,UObject_*>,1> *)(*pcVar3)();
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

