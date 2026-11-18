// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 28

// ConstructListView<SListView,UListView> @ 1469705f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SListView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructListView<SListView,UListView>
          (TSharedRef<SListView<UObject_*>,1> *__return_storage_ptr__,UListView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FListViewConstructArgs *param_3)

{
  SListView<UObject_*> *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FArguments *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  UListView *local_res8;
  UListView *local_res18;
  FName local_res20;
  code *local_5a8;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  bool local_598;
  undefined1 local_588 [16];
  int local_578;
  undefined1 *local_570;
  undefined1 local_568 [16];
  ForAnyElementType FStack_558;
  undefined1 *local_550;
  undefined1 local_548;
  undefined1 local_547;
  undefined1 local_540 [8];
  ForAnyElementType FStack_538;
  ulonglong local_530;
  undefined8 local_528;
  FSharedReferencer<1> FStack_520;
  FArguments local_518;
  
  pFVar5 = SListView<UObject_*>::FArguments::FArguments(&local_518);
  local_528 = 0;
  FStack_520.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar5->_HandleGamepadEvents = true;
  pFVar5->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar5->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar5->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_528) {
    (pFVar5->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar5->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_520);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_520.ReferenceController);
  pFVar5->_ListItemsSource_ArrayPointer = param_2;
  local_548 = param_3->bAllowFocus;
  local_547 = 1;
  local_530 = 0;
  local_540 = (undefined1  [8])0x0;
  FStack_538.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_IsFocusable).Value = (bool)local_548;
  (pFVar5->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_IsFocusable).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_540,
             (FWriteAccessScope *)local_588);
  if (((int)local_530 != 0) && (FStack_538.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_538.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_538,0,0,0x10);
    local_530 = local_530 & 0xffffffff00000000;
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  if (FStack_538.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_538.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_540);
  pFVar5->_ClearSelectionOnClick = param_3->bClearSelectionOnClick;
  pFVar5->_ConsumeMouseWheel = param_3->ConsumeMouseWheel;
  local_568._0_4_ = param_3->SelectionMode;
  local_568[4] = 1;
  local_550 = (undefined1 *)0x0;
  local_568._8_8_ = (FMRSWRecursiveAccessDetector *)0x0;
  FStack_558.Data = (FScriptContainerElement *)0x0;
  (pFVar5->_SelectionMode).Value = local_568._0_4_;
  (pFVar5->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar5->_SelectionMode).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)(local_568 + 8));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_568 + 8),
             (FWriteAccessScope *)local_588);
  if (((int)local_550 != 0) && (FStack_558.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_558.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_558,0,0,0x10);
    local_550 = (undefined1 *)((ulonglong)local_550 & 0xffffffff00000000);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  if (FStack_558.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_558.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_568 + 8));
  pFVar5->_ReturnFocusToSelection = param_3->bReturnFocusToSelection;
  pFVar5->_ClearScrollVelocityOnSelection = param_3->bClearScrollVelocityOnSelection;
  pFVar5->_Orientation = param_3->Orientation;
  pFVar5->_ScrollIntoViewAlignment = param_3->ScrollIntoViewAlignment;
  pFVar5->_bEnableShadowBoxStyle = param_3->bEnableShadowBoxStyle;
  pFVar5->_ListViewStyle = param_3->ListViewStyle;
  pFVar5->_ShadowBoxStyle = param_3->ShadowBoxStyle;
  pFVar5->_ScrollBarStyle = param_3->ScrollBarStyle;
  fVar2 = (param_3->ScrollBarPadding).Top;
  fVar3 = (param_3->ScrollBarPadding).Right;
  fVar4 = (param_3->ScrollBarPadding).Bottom;
  uStack_5a0 = 0x348;
  (pFVar5->_ScrollBarPadding).Left = (param_3->ScrollBarPadding).Left;
  (pFVar5->_ScrollBarPadding).Top = fVar2;
  (pFVar5->_ScrollBarPadding).Right = fVar3;
  (pFVar5->_ScrollBarPadding).Bottom = fVar4;
  pFVar5->_PreventThrottling = param_3->bPreventThrottling;
  local_5a8 = HandleGenerateRow;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnGenerateRow,
             (FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnGenerateRow).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnSelectionChanged,
             (FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnSelectionChanged).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar5->_OnIsSelectableOrNavigable,(FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnIsSelectableOrNavigable).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0;
  local_5a8 = UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnRowReleased,
             (FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnRowReleased).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar5->_OnItemScrolledIntoView,(FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnItemScrolledIntoView).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnListViewScrolled,
             (FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnListViewScrolled).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnFinishedScrolling
             ,(FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnFinishedScrolling).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->_OnMouseButtonClick,
             (FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnMouseButtonClick).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  uStack_5a0 = 0x348;
  local_5a8 = HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar5->_OnMouseButtonDoubleClick,(FWriteAccessScope *)local_588);
  local_570 = &(pFVar5->_OnMouseButtonDoubleClick).field_0x8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_570);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res18 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (local_578._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_588._8_8_,(FDestructionSentinel *)local_588);
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_5a8,&local_res20,true);
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs> *)local_588,
             "ListViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x111,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_5a8);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
  TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs>::operator<<=
            ((TSlateDecl<SListView<UObject_*>,RequiredArgs::T0RequiredArgs> *)local_588,
             __return_storage_ptr__,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_588._8_8_);
  SListView<UObject_*>::FArguments::~FArguments(&local_518);
  pSVar1 = __return_storage_ptr__->Object;
  local_5a8 = HandleRefreshRow;
  uStack_5a0 = 0x348;
  local_588._0_8_ = (atomic<unsigned___int64>)0x0;
  local_588._8_8_ = (TReferenceControllerBase<1> *)0x0;
  local_578 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)local_568);
  local_550 = local_588 + 8;
  puVar6 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_588 + 8));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUListView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar6[3] = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UListView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res8);
    *(code **)(puVar6 + 4) = local_5a8;
    puVar6[5] = CONCAT44(uStack_59c,uStack_5a0);
  }
  if (FStack_558.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_568._8_8_,(FDestructionSentinel *)local_568);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            (&pSVar1->OnRefreshRow,
             (TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_588);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
             (FWriteAccessScope *)&local_5a8);
  if ((local_578 != 0) &&
     ((TReferenceControllerBase<1> *)local_588._8_8_ != (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_588._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_588 + 8),0,0,0x10);
    local_578 = 0;
  }
  if (local_598 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_59c,uStack_5a0),
               (FDestructionSentinel *)&local_5a8);
  }
  if ((TReferenceControllerBase<1> *)local_588._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_588._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_588);
  return __return_storage_ptr__;
}

// ConstructTileView<STileView,UTileView> @ 146971aa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STileView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTileView<STileView,UTileView>
          (TSharedRef<STileView<UObject_*>,1> *__return_storage_ptr__,UTileView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FTileViewConstructArgs *param_3)

{
  STileView<UObject_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedRef<STileView<UObject_*>,1> *pTVar9;
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
  TSlateDecl<STileView<UObject_*>,RequiredArgs::T0RequiredArgs> local_720;
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
  
  pFVar6 = STileView<UObject_*>::FArguments::FArguments(&local_4c0);
  local_670 = 0;
  FStack_668.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6->_HandleGamepadEvents = true;
  pFVar6->_ListItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar6->_ListItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar6->_ListItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_670) {
    (pFVar6->_ListItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar6->_ListItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_668);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_668.ReferenceController);
  pFVar6->_ListItemsSource_ArrayPointer = param_2;
  local_780 = (undefined1)param_3->_padding_;
  local_77f = 1;
  local_768 = 0;
  local_778 = (undefined1  [8])0x0;
  FStack_770.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_IsFocusable).Value = (bool)local_780;
  (pFVar6->_IsFocusable).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_IsFocusable).Getter,
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
  pFVar6->_ClearSelectionOnClick = SUB81(param_3->_padding_,0);
  pFVar6->_WrapHorizontalNavigation = param_3->bWrapDirectionalNavigation;
  pFVar6->_ConsumeMouseWheel = *(EConsumeMouseWheel *)((longlong)&param_3->_padding_ + 1);
  local_760 = *(Type *)((longlong)&param_3->_padding_ + 4);
  local_75c = 1;
  local_748 = 0;
  local_758 = (undefined1  [8])0x0;
  FStack_750.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_SelectionMode).Value = local_760;
  (pFVar6->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_SelectionMode).Getter,
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
  (pFVar6->_ItemHeight).Value = local_6f8;
  (pFVar6->_ItemHeight).bIsSet = local_6f4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_ItemHeight).Getter,
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
  (pFVar6->_ItemWidth).Value = local_6d8;
  (pFVar6->_ItemWidth).bIsSet = local_6d4;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_ItemWidth).Getter,
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
  (pFVar6->_ItemAlignment).Value = local_740;
  (pFVar6->_ItemAlignment).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_ItemAlignment).Getter,
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
  pFVar6->_Orientation = *(EOrientation *)((longlong)&param_3->_padding_ + 4);
  pFVar6->_ScrollBarStyle = param_3->ScrollBarStyle;
  (pFVar6->_ScrollbarDisabledVisibility).Value.Value =
       (param_3->ScrollbarDisabledVisibility).Value.Value;
  local_7a8 = (UTileView *)HandleGenerateRow;
  uStack_7a0 = 0x348;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnGenerateTile,
             (FWriteAccessScope *)&local_600);
  local_5e8 = &(pFVar6->_OnGenerateTile).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5e8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_600.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_600.Accessor,&local_600);
  }
  uStack_7a0 = 0;
  local_7a8 = (UTileView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnTileReleased,
             (FWriteAccessScope *)&local_5e0);
  local_5c8 = &(pFVar6->_OnTileReleased).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6b8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6b8);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5e0.Accessor,&local_5e0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnSelectionChanged,
             (FWriteAccessScope *)&local_5c0);
  local_5a8 = &(pFVar6->_OnSelectionChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5a8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6b0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6b0);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_5a0);
  local_588 = &(pFVar6->_OnIsSelectableOrNavigable).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_588);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6a8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6a8);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_5a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a0.Accessor,&local_5a0);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_580);
  local_568 = &(pFVar6->_OnItemScrolledIntoView).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_568);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6a0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6a0);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_580.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_580.Accessor,&local_580);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnTileViewScrolled,
             (FWriteAccessScope *)&local_560);
  local_548 = &(pFVar6->_OnTileViewScrolled).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_548);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_698 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_698);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_560.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_560.Accessor,&local_560);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnFinishedScrolling
             ,(FWriteAccessScope *)&local_540);
  local_528 = &(pFVar6->_OnFinishedScrolling).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_528);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_690 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_690);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_540.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnMouseButtonClick,
             (FWriteAccessScope *)&local_520);
  local_508 = &(pFVar6->_OnMouseButtonClick).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_508);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_688 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_688);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_520.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_520.Accessor,&local_520);
  }
  uStack_7a0 = 0x348;
  local_7a8 = (UTileView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_500);
  local_4e8 = &(pFVar6->_OnMouseButtonDoubleClick).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_4e8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_680 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_680);
    puVar7[4] = local_7a8;
    puVar7[5] = CONCAT44(uStack_79c,uStack_7a0);
  }
  if (local_500.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_500.Accessor,&local_500);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_678 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_708,&local_678,true);
  TSlateDecl<STileView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STileView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_720,"TileViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x140,local_res8);
  FMemScope::~FMemScope(&local_708);
  FLLMScope::~FLLMScope(local_res18);
  pSVar1 = local_720._Widget.Object;
  if (local_720._Widget.Object == (STileView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_720._Widget.Object,(FSlateBaseNamedArgs *)pFVar6);
  STileView<UObject_*>::Construct(local_720._Widget.Object,pFVar6);
  if (local_720._Widget.Object == (STileView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  if (((local_720._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)local_720._Widget.Object + 0x228))(local_720._Widget.Object);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_1469726c3;
  }
  bVar5 = 0x20;
LAB_1469726c3:
  (local_720._Widget.Object)->field_0x30 = (local_720._Widget.Object)->field_0x30 & 0xdf;
  (local_720._Widget.Object)->field_0x30 = (local_720._Widget.Object)->field_0x30 | bVar5;
  if (local_720._Widget.Object == (STileView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  (local_720._Widget.Object)->field_0x31 = (local_720._Widget.Object)->field_0x31 | 4;
  if (local_720._Widget.Object == (STileView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = local_720._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_720._Widget.SharedReferenceCount.ReferenceController;
  local_720._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_720._Widget.Object = (STileView<UObject_*> *)0x0;
  if (pSVar1 == (STileView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STileView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STileView<UObject_*>::FArguments::~FArguments(&local_4c0);
  pSVar1 = __return_storage_ptr__->Object;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_790);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTileView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_7a8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTileView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_7a8);
    *(FMemScope *)(puVar7 + 4) = local_708;
    puVar7[5] = CONCAT44(uStack_6fc,uStack_700);
  }
  if (local_4e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar1->field_0x788,
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

// ConstructTreeView<STreeView,UTreeView> @ 146972ce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<STreeView<UObject_*>,1> * __cdecl
ITypedUMGListView<UObject_*>::ConstructTreeView<STreeView,UTreeView>
          (TSharedRef<STreeView<UObject_*>,1> *__return_storage_ptr__,UTreeView *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FTreeViewConstructArgs *param_3)

{
  STreeView<UObject_*> *pSVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  FArguments *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  TSharedRef<STreeView<UObject_*>,1> *pTVar9;
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
  TSlateDecl<STreeView<UObject_*>,RequiredArgs::T0RequiredArgs> local_750;
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
  
  pFVar6 = STreeView<UObject_*>::FArguments::FArguments(&local_510);
  local_6d0 = 0;
  FStack_6c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar6->_HandleGamepadEvents = true;
  pFVar6->_TreeItemsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar6->_TreeItemsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar6->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_6d0) {
    (pFVar6->_TreeItemsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar6->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_6c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_6c8.ReferenceController);
  pFVar6->_TreeItemsSource_ArrayPointer = param_2;
  pFVar6->_ClearSelectionOnClick = param_3->bClearSelectionOnClick;
  pFVar6->_ConsumeMouseWheel = param_3->ConsumeMouseWheel;
  local_770 = param_3->SelectionMode;
  local_76c = 1;
  local_758 = 0;
  local_768 = (undefined1  [8])0x0;
  FStack_760.Data = (FScriptContainerElement *)0x0;
  (pFVar6->_SelectionMode).Value = local_770;
  (pFVar6->_SelectionMode).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar6->_SelectionMode).Getter,
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
  pFVar6->_ReturnFocusToSelection = param_3->bReturnFocusToSelection;
  pFVar6->_TreeViewStyle = param_3->TreeViewStyle;
  pFVar6->_ScrollBarStyle = param_3->ScrollBarStyle;
  local_798 = (UTreeView *)HandleGenerateRow;
  uStack_790 = 0x348;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnGenerateRow,
             (FWriteAccessScope *)&local_690);
  local_678 = &(pFVar6->_OnGenerateRow).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_678);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6A_AV__TSharedRef_VITableRow___00__PEAVUObject__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res20);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_690.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_690.Accessor,&local_690);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleSelectionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnSelectionChanged,
             (FWriteAccessScope *)&local_670);
  local_658 = &(pFVar6->_OnSelectionChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_658);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_728 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_728);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_670.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_670.Accessor,&local_670);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleIsSelectableOrNavigable;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnIsSelectableOrNavigable,(FWriteAccessScope *)&local_650);
  local_638 = &(pFVar6->_OnIsSelectableOrNavigable).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_638);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6A_NPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_720 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_720);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_650.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_650.Accessor,&local_650);
  }
  uStack_790 = 0;
  local_798 = (UTreeView *)UListViewBase::HandleRowReleased;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnRowReleased,
             (FWriteAccessScope *)&local_630);
  local_618 = &(pFVar6->_OnRowReleased).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_618);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXAEBV__TSharedRef_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_718 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_718);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_630.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_630.Accessor,&local_630);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemScrolledIntoView;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnItemScrolledIntoView,(FWriteAccessScope *)&local_610);
  local_5f8 = &(pFVar6->_OnItemScrolledIntoView).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5f8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject__AEBV__TSharedPtr_VITableRow___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_710 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_710);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_610.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_610.Accessor,&local_610);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleListViewScrolled;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnTreeViewScrolled,
             (FWriteAccessScope *)&local_5f0);
  local_5d8 = &(pFVar6->_OnTreeViewScrolled).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5d8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXN_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_708 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_708);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleFinishedScrolling;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnFinishedScrolling
             ,(FWriteAccessScope *)&local_5d0);
  local_5b8 = &(pFVar6->_OnFinishedScrolling).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_5b8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_700 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_700);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d0.Accessor,&local_5d0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnMouseButtonClick,
             (FWriteAccessScope *)&local_5b0);
  local_598 = &(pFVar6->_OnMouseButtonClick).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_598);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6f8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6f8);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_5b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5b0.Accessor,&local_5b0);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleItemDoubleClicked;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pFVar6->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_590);
  local_578 = &(pFVar6->_OnMouseButtonDoubleClick).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_578);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6f0);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_590.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_590.Accessor,&local_590);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleGetChildren;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnGetChildren,
             (FWriteAccessScope *)&local_570);
  local_558 = &(pFVar6->_OnGetChildren).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_558);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUTreeView____A6AXPEAVUObject__AEAV__TArray_PEAVUObject__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6e8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6e8);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_570.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_570.Accessor,&local_570);
  }
  uStack_790 = 0x348;
  local_798 = (UTreeView *)HandleExpansionChanged;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->_OnExpansionChanged,
             (FWriteAccessScope *)&local_550);
  local_538 = &(pFVar6->_OnExpansionChanged).field_0x8;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_538);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_6e0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_6e0);
    puVar7[4] = local_798;
    puVar7[5] = CONCAT44(uStack_78c,uStack_790);
  }
  if (local_550.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_550.Accessor,&local_550);
  }
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_6d8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_738,&local_6d8,true);
  TSlateDecl<STreeView<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STreeView<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_750,"TreeViewT<ItemType>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
             ,0x16c,local_res8);
  FMemScope::~FMemScope(&local_738);
  FLLMScope::~FLLMScope(local_res18);
  pSVar1 = local_750._Widget.Object;
  if (local_750._Widget.Object == (STreeView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_750._Widget.Object,(FSlateBaseNamedArgs *)pFVar6);
  STreeView<UObject_*>::Construct(local_750._Widget.Object,pFVar6);
  if (local_750._Widget.Object == (STreeView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  if (((local_750._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)local_750._Widget.Object + 0x228))(local_750._Widget.Object);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_14697383f;
  }
  bVar5 = 0x20;
LAB_14697383f:
  (local_750._Widget.Object)->field_0x30 = (local_750._Widget.Object)->field_0x30 & 0xdf;
  (local_750._Widget.Object)->field_0x30 = (local_750._Widget.Object)->field_0x30 | bVar5;
  if (local_750._Widget.Object == (STreeView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  (local_750._Widget.Object)->field_0x31 = (local_750._Widget.Object)->field_0x31 | 4;
  if (local_750._Widget.Object == (STreeView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = local_750._Widget.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_750._Widget.SharedReferenceCount.ReferenceController;
  local_750._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_750._Widget.Object = (STreeView<UObject_*> *)0x0;
  if (pSVar1 == (STreeView<UObject_*> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<STreeView<UObject_*>,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  STreeView<UObject_*>::FArguments::~FArguments(&local_510);
  pSVar1 = __return_storage_ptr__->Object;
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
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_780);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUTreeView____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    puVar7[3] = 0;
    local_798 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UTreeView *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_798);
    *(FMemScope *)(puVar7 + 4) = local_738;
    puVar7[5] = CONCAT44(uStack_72c,uStack_730);
  }
  if (local_530.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_530.Accessor,&local_530);
  }
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&pSVar1->field_0x788,
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

// GetEntryWidgetFromItem<UUserWidget> @ 146976a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
ITypedUMGListView<UObject_*>::GetEntryWidgetFromItem<UUserWidget>
          (ITypedUMGListView<UObject_*> *this,UObject **param_1)

{
  longlong lVar1;
  UUserWidget *pUVar2;
  UUserWidget *pUVar3;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  lVar1 = (**(code **)((longlong)*this + 0x88))();
  if (lVar1 == 0) {
    pUVar2 = (UUserWidget *)0x0;
    local_10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x598) + 0xd8))
              ((longlong *)(lVar1 + 0x598),&local_18,param_1);
    pUVar2 = (UUserWidget *)0x0;
    pUVar3 = (UUserWidget *)(local_18 + -0x2f0);
    if (local_18 == 0) {
      pUVar3 = pUVar2;
    }
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (pUVar3 != (UUserWidget *)0x0) {
      pUVar2 = *(UUserWidget **)&pUVar3->Padding;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  return pUVar2;
}

// GetDesiredEntryClassForItem @ 1469cf990

TSubclassOf<UUserWidget> __thiscall
ITypedUMGListView<UObject_*>::GetDesiredEntryClassForItem
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar4;
  UClass *pUVar5;
  atomic<unsigned___int64> aVar6;
  UObject *pUVar7;
  UObject *local_res8;
  FReadAccessScope local_28;
  
  cVar3 = (**(code **)((longlong)*this + 0x98))();
  if (cVar3 == '\0') {
    pTVar4 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             (**(code **)((longlong)*this + 0x70))(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar4,&local_28);
    if (((*(int *)&pTVar4[2].AccessDetector.State == 0) ||
        (aVar6 = pTVar4[1].AccessDetector.State, aVar6 == (atomic<unsigned___int64>)0x0)) ||
       (cVar3 = (**(code **)(*(longlong *)aVar6 + 0x38))(), cVar3 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pUVar7 = (UObject *)0x0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar4 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (**(code **)((longlong)*this + 0x70))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar4,&local_28);
      if (*(int *)&pTVar4[2].AccessDetector.State == 0) {
        aVar6 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar6 = pTVar4[1].AccessDetector.State;
      }
      (**(code **)(*(longlong *)aVar6 + 0x60))(aVar6,&local_res8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pUVar7 = local_res8;
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar7 == (UObject *)0x0) goto LAB_1469cfab0;
    }
    else {
      if (pUVar7 == (UObject *)0x0) goto LAB_1469cfab0;
      UE::GC::MarkAsReachable(pUVar7);
    }
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar7[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(UObject **)param_1 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          return (TSubclassOf<UUserWidget>)(TObjectPtr<UClass>)param_1;
        }
        UE::GC::MarkAsReachable(pUVar7);
        return (TSubclassOf<UUserWidget>)(TObjectPtr<UClass>)param_1;
      }
    }
  }
LAB_1469cfab0:
  (**(code **)((longlong)*this + 0x78))(this,param_1);
  return (TSubclassOf<UUserWidget>)(TObjectPtr<UClass>)param_1;
}

// GetDesiredEntryPadding @ 1469cfae0

FMargin * __thiscall
ITypedUMGListView<UObject_*>::GetDesiredEntryPadding
          (ITypedUMGListView<UObject_*> *this,FMargin *__return_storage_ptr__,UObject *param_1)

{
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  return __return_storage_ptr__;
}

// HandleExpansionChanged @ 1469dad90

void __thiscall
ITypedUMGListView<UObject_*>::HandleExpansionChanged
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,bool param_2)

{
  longlong lVar1;
  TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *this_00;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  UObject *local_res10;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  local_res10 = param_1;
  lVar1 = (**(code **)((longlong)*this + 0x88))();
  if (lVar1 == 0) {
    pTVar2 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x598) + 0xd8))
              ((longlong *)(lVar1 + 0x598),&local_18,&local_res10);
    plVar3 = (longlong *)(local_18 + -0x2f0);
    if (local_18 == 0) {
      plVar3 = (longlong *)0x0;
    }
    if (local_10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    pTVar2 = local_10;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 600))(plVar3,param_2);
    }
  }
  (**(code **)((longlong)*this + 0xf8))(this,local_res10,param_2);
  this_00 = (TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*this + 0x68))(this);
  TMulticastDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::Broadcast
            (this_00,local_res10,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// HandleFinishedScrolling @ 1469dae80

void __thiscall
ITypedUMGListView<UObject_*>::HandleFinishedScrolling(ITypedUMGListView<UObject_*> *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_28;
  
  (**(code **)((longlong)*this + 0xf0))();
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*this + 0x58))(this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_28);
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this_00->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this_00->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// HandleGenerateRow @ 1469db280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
ITypedUMGListView<UObject_*>::HandleGenerateRow
          (ITypedUMGListView<UObject_*> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          UObject *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  EWidgetUpdateFlags EVar1;
  code *pcVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  UUserWidget *this_00;
  UUserWidget *this_01;
  float *pfVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  ITableRow *pIVar7;
  EWidgetUpdateFlags EVar8;
  UObject *local_res8;
  UObject *local_res10;
  FMargin local_58;
  FMargin local_48;
  TSharedPtr<SWidget,1> local_38;
  undefined1 local_28 [16];
  
  (**(code **)((longlong)*this + 0xa0))(this,&local_res8);
  local_res10 = local_res8;
  pcVar2 = *(code **)((longlong)*this + 0xa8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  this_00 = (UUserWidget *)(*pcVar2)(this,param_1,&local_res10,param_2);
  this_01 = UClass::GetDefaultObject<UUserWidget>((UClass *)this_00->_padding_);
  UUserWidget::GetPadding(this_01,&local_58);
  pfVar5 = (float *)(**(code **)((longlong)*this + 0xb0))(this,local_28,param_1);
  local_48.Left = local_58.Left + *pfVar5;
  local_48.Top = local_58.Top + pfVar5[1];
  local_48.Right = local_58.Right + pfVar5[2];
  local_48.Bottom = local_58.Bottom + pfVar5[3];
  UUserWidget::SetPadding(this_00,&local_48);
  UWidget::GetCachedWidget((UWidget *)this_00,&local_38);
  if ((local_38.Object == (SWidget *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
    return pTVar6;
  }
  EVar1 = (local_38.Object)->UpdateFlags;
  EVar8 = EVar1 | NeedsTick;
  (local_38.Object)->UpdateFlags = EVar8;
  FWidgetProxyHandle::UpdateWidgetFlags
            (&(local_38.Object)->FastPathProxyHandle,local_38.Object,EVar1,EVar8);
  FVar3.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_38.Object == (SWidget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
      return pTVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TSharedRef<ITableRow,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  pIVar7 = (ITableRow *)&local_38.Object[1].PersistentState.DesktopGeometry;
  if (local_38.Object == (SWidget *)0x0) {
    pIVar7 = (ITableRow *)0x0;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar3.ReferenceController;
  if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar3.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// HandleGetChildren @ 1469dbc50

void __thiscall
ITypedUMGListView<UObject_*>::HandleGetChildren
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001469dbc53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0xb8))();
  return;
}

// HandleIsSelectableOrNavigable @ 1469dbfc0

bool __thiscall
ITypedUMGListView<UObject_*>::HandleIsSelectableOrNavigable
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001469dbfc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0xd8))();
  return (bool)uVar1;
}

// HandleItemClicked @ 1469dbff0

void __thiscall
ITypedUMGListView<UObject_*>::HandleItemClicked(ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  
  (**(code **)((longlong)*this + 0xc0))();
  this_00 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
            (**(code **)*this)(this);
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast(this_00,param_1)
  ;
  return;
}

// HandleItemDoubleClicked @ 1469dc030

void __thiscall
ITypedUMGListView<UObject_*>::HandleItemDoubleClicked
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  
  (**(code **)((longlong)*this + 200))();
  this_00 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*this + 8))(this);
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast(this_00,param_1)
  ;
  return;
}

// HandleItemScrolledIntoView @ 1469dc070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ITypedUMGListView<UObject_*>::HandleItemScrolledIntoView
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,TSharedPtr<ITableRow,1> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  UObject *pUVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UUserWidget *pUVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar10;
  longlong lVar11;
  UObject *local_res10;
  FDestructionSentinel local_48;
  
  local_res10 = param_1;
  pUVar9 = GetEntryWidgetFromItem<UUserWidget>(this,&local_res10);
  if (pUVar9 == (UUserWidget *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<883302746462093808>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x1f0,"RowWidget");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    (**(code **)((longlong)*this + 0xe0))(this,local_res10,pUVar9);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*this + 0x60))(this);
    pUVar4 = local_res10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar5 = false;
    uVar10 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar11 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar11 + 8) == 0) ||
            (plVar2 = *(longlong **)(pFVar1 + lVar11), plVar2 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar2 + 0x68))(plVar2,pUVar4,pUVar9), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar11 = lVar11 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// HandleListViewScrolled @ 1469dcc80

void __thiscall
ITypedUMGListView<UObject_*>::HandleListViewScrolled
          (ITypedUMGListView<UObject_*> *this,double param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  uint uVar10;
  undefined1 local_58 [16];
  FDestructionSentinel local_48 [2];
  
  lVar9 = (**(code **)((longlong)*this + 0x88))();
  if (lVar9 != 0) {
    lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x2a8) + 0x10))((longlong *)(lVar9 + 0x2a8),local_58)
    ;
    dVar1 = *(double *)(lVar9 + 8);
    (**(code **)((longlong)*this + 0xe8))(this,(float)param_1,(float)dVar1);
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              (**(code **)((longlong)*this + 0x50))(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)local_48);
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + 1;
    bVar5 = false;
    uVar10 = (this_00->InvocationList).ArrayNum - 1;
    if (-1 < (int)uVar10) {
      lVar9 = (longlong)(int)uVar10 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this_00->InvocationList).AllocatorInstance.Data;
        if (((*(int *)(pFVar2 + lVar9 + 8) == 0) ||
            (plVar3 = *(longlong **)(pFVar2 + lVar9), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(plVar3,(float)param_1,(float)dVar1), cVar7 == '\0'
           )) {
          bVar5 = true;
        }
        lVar9 = lVar9 + -0x10;
        uVar10 = uVar10 - 1;
      } while (-1 < (int)uVar10);
    }
    this_00->InvocationListLockCount = this_00->InvocationListLockCount + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
    }
    if (local_48[0].bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
    }
  }
  return;
}

// HandleRefreshRow @ 1469dd8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ITypedUMGListView<UObject_*>::HandleRefreshRow(ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  UUserWidget *this_00;
  UUserWidget *this_01;
  float *pfVar1;
  UObject *local_res10 [3];
  FMargin local_38;
  FMargin local_28;
  undefined1 local_18 [16];
  
  local_res10[0] = param_1;
  this_00 = GetEntryWidgetFromItem<UUserWidget>(this,local_res10);
  if (this_00 != (UUserWidget *)0x0) {
    this_01 = UClass::GetDefaultObject<UUserWidget>((UClass *)this_00->_padding_);
    UUserWidget::GetPadding(this_01,&local_38);
    pfVar1 = (float *)(**(code **)((longlong)*this + 0xb0))(this,local_18,local_res10[0]);
    local_28.Left = local_38.Left + *pfVar1;
    local_28.Top = local_38.Top + pfVar1[1];
    local_28.Right = local_38.Right + pfVar1[2];
    local_28.Bottom = local_38.Bottom + pfVar1[3];
    UUserWidget::SetPadding(this_00,&local_28);
  }
  return;
}

// HandleSelectionChanged @ 1469ddbe0

void __thiscall
ITypedUMGListView<UObject_*>::HandleSelectionChanged
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,Type param_2)

{
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *this_00;
  
  (**(code **)((longlong)*this + 0xd0))();
  this_00 = (TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
            (**(code **)((longlong)*this + 0x48))(this);
  TMulticastDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::Broadcast(this_00,param_1)
  ;
  return;
}

// ItemFromEntryWidget @ 1469e3900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TObjectPtr<UObject> * __thiscall
ITypedUMGListView<UObject_*>::ItemFromEntryWidget
          (ITypedUMGListView<UObject_*> *this,UUserWidget *param_1)

{
  UClass *this_00;
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UClass *pUVar6;
  TSharedPtr<SWidget,1> *pTVar7;
  TObjectPtr<UObject> *pTVar8;
  TSharedPtr<SWidget,1> local_18;
  
  lVar5 = (**(code **)((longlong)*this + 0x88))();
  this_00 = (UClass *)param_1->_padding_;
  if (this_00 != (UClass *)0x0) {
    pUVar6 = Z_Construct_UClass_UUserListEntry_NoRegister();
    bVar4 = UClass::ImplementsInterface(this_00,pUVar6);
    if (bVar4) {
      if (lVar5 == 0) {
        return (TObjectPtr<UObject> *)0x0;
      }
      pTVar7 = UWidget::GetCachedWidget((UWidget *)param_1,&local_18);
      pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
      pSVar2 = pTVar7->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      if (pSVar2 == (SWidget *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return (TObjectPtr<UObject> *)0x0;
      }
      pTVar8 = (TObjectPtr<UObject> *)
               (**(code **)(*(longlong *)(lVar5 + 0x598) + 0x48))
                         ((longlong *)(lVar5 + 0x598),&pSVar2[1].PersistentState.DesktopGeometry);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return pTVar8;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<883302746462093448>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                     ,0x88,"EntryWidget.Implements<UUserListEntry>()");
  if (!bVar4) {
    return (TObjectPtr<UObject> *)0x0;
  }
  pcVar3 = (code *)swi(3);
  pTVar8 = (TObjectPtr<UObject> *)(*pcVar3)();
  return pTVar8;
}

// OnGetChildrenInternal @ 1469e7fc0

void __thiscall
ITypedUMGListView<UObject_*>::OnGetChildrenInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// OnIsSelectableOrNavigableInternal @ 1469e81f0

bool __thiscall
ITypedUMGListView<UObject_*>::OnIsSelectableOrNavigableInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  char cVar1;
  undefined1 uVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *pTVar3;
  atomic<unsigned___int64> aVar4;
  FReadAccessScope local_28;
  
  pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           (**(code **)((longlong)*this + 0x80))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_28);
  if ((*(int *)&pTVar3[2].AccessDetector.State != 0) &&
     (aVar4 = pTVar3[1].AccessDetector.State, aVar4 != (atomic<unsigned___int64>)0x0)) {
    cVar1 = (**(code **)(*(longlong *)aVar4 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      pTVar3 = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               (**(code **)((longlong)*this + 0x80))(this);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(pTVar3,&local_28);
      if (*(int *)&pTVar3[2].AccessDetector.State == 0) {
        aVar4 = (atomic<unsigned___int64>)0x0;
      }
      else {
        aVar4 = pTVar3[1].AccessDetector.State;
      }
      uVar2 = (**(code **)(*(longlong *)aVar4 + 0x60))(aVar4,param_1);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar2;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// OnItemClickedInternal @ 1469e8400

void __thiscall
ITypedUMGListView<UObject_*>::OnItemClickedInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  return;
}

// OnItemDoubleClickedInternal @ 1469e85d0

void __thiscall
ITypedUMGListView<UObject_*>::OnItemDoubleClickedInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  return;
}

// OnItemExpansionChangedInternal @ 1469e8660

void __thiscall
ITypedUMGListView<UObject_*>::OnItemExpansionChangedInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,bool param_2)

{
  return;
}

// OnItemScrolledIntoViewInternal @ 1469e86c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ITypedUMGListView<UObject_*>::OnItemScrolledIntoViewInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1,UUserWidget *param_2)

{
  return;
}

// OnListViewFinishedScrollingInternal @ 1469eb990

void __thiscall
ITypedUMGListView<UObject_*>::OnListViewFinishedScrollingInternal
          (ITypedUMGListView<UObject_*> *this)

{
  return;
}

// OnListViewScrolledInternal @ 1469eb9d0

void __thiscall
ITypedUMGListView<UObject_*>::OnListViewScrolledInternal
          (ITypedUMGListView<UObject_*> *this,float param_1,float param_2)

{
  return;
}

// OnSelectionChangedInternal @ 1469f0310

void __thiscall
ITypedUMGListView<UObject_*>::OnSelectionChangedInternal
          (ITypedUMGListView<UObject_*> *this,UObject *param_1)

{
  return;
}

// RequestNavigateToItem @ 146a0d880

void __thiscall
ITypedUMGListView<UObject_*>::RequestNavigateToItem
          (ITypedUMGListView<UObject_*> *this,UObject **param_1)

{
  uint uVar1;
  SListView<UObject_*> *this_00;
  UObject *local_res8;
  TOptional<UObject_*> local_18;
  
  this_00 = (SListView<UObject_*> *)(**(code **)((longlong)*this + 0x88))();
  if (this_00 != (SListView<UObject_*> *)0x0) {
    uVar1 = (**(code **)((longlong)*this + 0x90))(this);
    local_res8 = *param_1;
    SListView<UObject_*>::Private_FindNextSelectableOrNavigable(this_00,&local_18,&local_res8);
    if (local_18.bIsSet != false) {
      this_00->ItemToScrollIntoView = local_18.TypedValue;
      this_00->bNavigateOnScrollIntoView = true;
      this_00->UserRequestingScrollIntoView = uVar1;
      STableViewBase::RequestLayoutRefresh((STableViewBase *)this_00);
    }
  }
  return;
}

