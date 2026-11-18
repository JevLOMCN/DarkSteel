// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 36

// OnContextMenuOpening<UE::PropertyViewer::Private::FPropertyViewerImpl> @ 14d82fd10

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
OnContextMenuOpening<UE::PropertyViewer::Private::FPropertyViewerImpl>
          (FArguments *this,FPropertyViewerImpl *param_1,pmf_a7d7b150 param_2)

{
  FPropertyViewerImpl *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnContextMenuOpening).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                       ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)
                        param_1,&local_48);
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar6->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedPtr_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pFVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_a7d7b150 *)(puVar5 + 5) = param_2;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnGenerateRow<UE::PropertyViewer::Private::FPropertyViewerImpl> @ 14d82fe40

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
OnGenerateRow<UE::PropertyViewer::Private::FPropertyViewerImpl>
          (FArguments *this,FPropertyViewerImpl *param_1,pmf_43452e41 param_2)

{
  FPropertyViewerImpl *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnGenerateRow).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                       ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)
                        param_1,&local_48);
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar6->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6A_AV__TSharedRef_VITableRow___00__V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__AEBV__TSharedRef_VSTableViewBase___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pFVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_43452e41 *)(puVar5 + 5) = param_2;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnMouseButtonDoubleClick<UE::PropertyViewer::Private::FPropertyViewerImpl> @ 14d82ff70

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
OnMouseButtonDoubleClick<UE::PropertyViewer::Private::FPropertyViewerImpl>
          (FArguments *this,FPropertyViewerImpl *param_1,pmf_b066fb78 param_2)

{
  FPropertyViewerImpl *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->_OnMouseButtonDoubleClick,(FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnMouseButtonDoubleClick).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                       ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)
                        param_1,&local_48);
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar6->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pFVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_b066fb78 *)(puVar5 + 5) = param_2;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// OnSelectionChanged<UE::PropertyViewer::Private::FPropertyViewerImpl> @ 14d8300a0

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::
OnSelectionChanged<UE::PropertyViewer::Private::FPropertyViewerImpl>
          (FArguments *this,FPropertyViewerImpl *param_1,pmf_6902b847 param_2)

{
  FPropertyViewerImpl *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *pTVar6;
  ulong64 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  uint uStackX_c;
  TSharedRef<UE::PropertyViewer::Private::FPropertyViewerImpl,1> local_48;
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged,
             (FWriteAccessScope *)&local_38);
  local_20 = &(this->_OnSelectionChanged).field_0x8;
  puVar5 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_20);
  if (puVar5 == (undefined8 *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1>::AsShared
                       ((TSharedFromThis<UE::PropertyViewer::Private::FPropertyViewerImpl,1> *)
                        param_1,&local_48);
    pTVar8 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar1 = pTVar6->Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar7;
    *puVar5 = &
              ___7__TBaseSPMethodDelegateInstance__0A_VFPropertyViewerImpl_Private_PropertyViewer_UE___00__A6AXV__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00__W4Type_ESelectInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[3] = pFVar1;
    puVar5[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
      UNLOCK();
    }
    *(pmf_6902b847 *)(puVar5 + 5) = param_2;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar3) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return this;
}

// FArguments @ 14d834950

FArguments * __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::FArguments
          (FArguments *this)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableRowStyle *pFVar5;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TableView.Row");
  pFVar5 = (FTableRowStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableRowStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableRowStyle *)0x0) {
    pFVar5 = FTableRowStyle::GetDefault();
  }
  this->_Style = pFVar5;
  pIVar3 = FAppStyle::Get();
  this->_ExpanderStyleSet = pIVar3;
  *(undefined8 *)&this->_OnCanAcceptDrop = 0;
  *(undefined8 *)&(this->_OnCanAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCanAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnAcceptDrop = 0;
  *(undefined8 *)&(this->_OnAcceptDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnAcceptDrop).field_0x10 = 0;
  *(undefined8 *)&this->_OnPaintDropIndicator = 0;
  *(undefined8 *)&(this->_OnPaintDropIndicator).field_0x8 = 0;
  *(undefined4 *)&(this->_OnPaintDropIndicator).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragDetected = 0;
  *(undefined8 *)&(this->_OnDragDetected).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragDetected).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragEnter = 0;
  *(undefined8 *)&(this->_OnDragEnter).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragEnter).field_0x10 = 0;
  *(undefined8 *)&this->_OnDragLeave = 0;
  *(undefined8 *)&(this->_OnDragLeave).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDragLeave).field_0x10 = 0;
  *(undefined8 *)&this->_OnDrop = 0;
  *(undefined8 *)&(this->_OnDrop).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDrop).field_0x10 = 0;
  (this->_Padding).Value.Left = 0.0;
  (this->_Padding).Value.Top = 0.0;
  (this->_Padding).Value.Right = 0.0;
  (this->_Padding).Value.Bottom = 0.0;
  (this->_Padding).bIsSet = true;
  *(undefined8 *)&(this->_Padding).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Padding).Getter = 0;
  *(undefined8 *)&(this->_Padding).Getter.field_0x8 = 0;
  this->_ShowSelection = true;
  this->_ShowWires = false;
  this->_bAllowPreselectedItemActivation = false;
  this->_SignalSelectionMode = Deferred;
  (this->_Content).Widget.Object = SNullWidget::NullWidget.Object;
  FVar2 = SNullWidget::NullWidget.SharedReferenceCount;
  (this->_Content).Widget.SharedReferenceCount.ReferenceController =
       SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FArguments @ 14d834ac0

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::FArguments
          (FArguments *this)

{
  TConsoleVariableData<float> *pTVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FTableViewStyle *pFVar5;
  FScrollBarStyle *pFVar6;
  longlong lVar7;
  FName local_res8;
  FName local_res10;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"TreeView");
  pFVar5 = (FTableViewStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FTableViewStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FTableViewStyle *)0x0) {
    pFVar5 = FTableViewStyle::GetDefault();
  }
  this->_TreeViewStyle = pFVar5;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGenerateRow = 0;
  *(undefined8 *)&(this->_OnGenerateRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnGeneratePinnedRow = 0;
  *(undefined8 *)&(this->_OnGeneratePinnedRow).field_0x8 = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x10 = 0;
  *(undefined8 *)&this->_OnRefreshRow = 0;
  *(undefined8 *)&(this->_OnRefreshRow).field_0x8 = 0;
  *(undefined8 *)&this->_OnRowReleased = 0;
  *(undefined8 *)&(this->_OnRowReleased).field_0x8 = 0;
  *(undefined4 *)&(this->_OnRowReleased).field_0x10 = 0;
  *(undefined8 *)&this->_OnTreeViewScrolled = 0;
  *(undefined8 *)&(this->_OnTreeViewScrolled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnTreeViewScrolled).field_0x10 = 0;
  *(undefined8 *)&this->_OnFinishedScrolling = 0;
  *(undefined8 *)&(this->_OnFinishedScrolling).field_0x8 = 0;
  *(undefined4 *)&(this->_OnFinishedScrolling).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemScrolledIntoView = 0;
  *(undefined8 *)&(this->_OnItemScrolledIntoView).field_0x8 = 0;
  *(undefined4 *)&(this->_OnItemScrolledIntoView).field_0x10 = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x10 = 0;
  *(undefined8 *)&this->_OnGetChildren = 0;
  *(undefined8 *)&(this->_OnGetChildren).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x10 = 0;
  *(undefined8 *)&this->_OnSetExpansionRecursive = 0;
  *(undefined8 *)&(this->_OnSetExpansionRecursive).field_0x8 = 0;
  (this->_TreeItemsSource_SharedObservableArray).Object =
       (TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->_ItemHeight).Value = 0.0;
  (this->_ItemHeight).bIsSet = false;
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *)
       0x0;
  this->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter = 0;
  *(undefined8 *)&(this->_ItemHeight).Getter.field_0x8 = 0;
  (this->_MaxPinnedItems).Value = 6;
  (this->_MaxPinnedItems).bIsSet = true;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter = 0;
  *(undefined8 *)&(this->_MaxPinnedItems).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x10 = 0;
  *(undefined8 *)&this->_OnContextMenuOpening = 0;
  *(undefined8 *)&(this->_OnContextMenuOpening).field_0x8 = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemsRebuilt = 0;
  *(undefined8 *)&(this->_OnItemsRebuilt).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseButtonDoubleClick = 0;
  *(undefined8 *)&(this->_OnMouseButtonDoubleClick).field_0x8 = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnSelectionChanged = 0;
  *(undefined8 *)&(this->_OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnExpansionChanged = 0;
  *(undefined8 *)&(this->_OnExpansionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x10 = 0;
  *(undefined8 *)&this->_OnIsSelectableOrNavigable = 0;
  *(undefined8 *)&(this->_OnIsSelectableOrNavigable).field_0x8 = 0;
  (this->_SelectionMode).Value = Multi;
  (this->_SelectionMode).bIsSet = true;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter = 0;
  *(undefined8 *)&(this->_SelectionMode).Getter.field_0x8 = 0;
  (this->_HeaderRow).Object = (SHeaderRow *)0x0;
  (this->_HeaderRow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_ClearSelectionOnClick = true;
  (this->_ExternalScrollbar).Object = (SScrollBar *)0x0;
  (this->_ExternalScrollbar).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_EnableAnimatedScrolling = false;
  (this->_FixedLineScrollOffset).bIsSet = false;
  this->_ScrollbarDragFocusCause = Mouse;
  this->_ConsumeMouseWheel = WhenScrollingPossible;
  this->_AllowOverscroll = Yes;
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res10,"ScrollBar");
  pFVar6 = (FScrollBarStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FScrollBarStyle::TypeName,*pFVar4,0,1);
  if (pFVar6 == (FScrollBarStyle *)0x0) {
    pFVar6 = FScrollBarStyle::GetDefault();
  }
  this->_ScrollBarStyle = pFVar6;
  this->_PreventThrottling = false;
  pTVar1 = GlobalScrollAmount.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar7 = 4;
    if (!bVar2) goto LAB_14d834dae;
  }
  lVar7 = 0;
LAB_14d834dae:
  this->_WheelScrollMultiplier = *(float *)((longlong)pTVar1->ShadowedValue + lVar7);
  this->_ShadowBoxStyle = (FScrollBoxStyle *)0x0;
  this->_bEnableShadowBoxStyle = false;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x10 = 0;
  *(undefined8 *)&this->_OnItemToString_Debug = 0;
  *(undefined8 *)&(this->_OnItemToString_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x10 = 0;
  *(undefined8 *)&this->_OnEnteredBadState = 0;
  *(undefined8 *)&(this->_OnEnteredBadState).field_0x8 = 0;
  this->_ReturnFocusToSelection = false;
  (this->_ShouldStackHierarchyHeaders).Value = false;
  (this->_ShouldStackHierarchyHeaders).bIsSet = true;
  this->_HandleGamepadEvents = true;
  this->_HandleDirectionalNavigation = true;
  this->_AllowInvisibleItemSelection = false;
  this->_HighlightParentNodesForSelection = false;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter = 0;
  *(undefined8 *)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnKeyDownHandler = 0;
  *(undefined8 *)&(this->_OnKeyDownHandler).field_0x8 = 0;
  *(undefined4 *)&(this->_OnKeyDownHandler).field_0x10 = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// FArguments @ 14d834e60

FArguments * __thiscall
UE::PropertyViewer::SBoolPropertyValue::FArguments::FArguments(FArguments *this)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Path).TopLevelContainer_Object.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_Path,(FObjectPtr)&local_res8);
  this_00 = &(this->_Path).TopLevelContainer_ScriptStruct;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->_Path).TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->_Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->_Path).Properties.ArrayNum = 0;
  (this->_Path).Properties.ArrayMax = 1;
  return this;
}

// FArguments @ 14d834ee0

FArguments * __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::FArguments::FArguments(FArguments *this)

{
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar1;
  FName *pFVar2;
  FColorGradingSpinBoxStyle *pFVar3;
  FName local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  TVar1 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  pFVar2 = ::FName::FName(&local_res8,"ColorGradingSpinBox");
  pFVar3 = (FColorGradingSpinBoxStyle *)
           (**(code **)((TVar1.Ptr)->_padding_ + 0xa0))
                     (TVar1.Ptr,FColorGradingSpinBoxStyle::TypeName,*pFVar2,0,1);
  if ((pFVar3 == (FColorGradingSpinBoxStyle *)0x0) &&
     (pFVar3 = &::Default,
     *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
             0x9d4c) < ::_TSS0)) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FColorGradingSpinBoxStyle::FColorGradingSpinBoxStyle(&::Default);
      atexit(`FColorGradingSpinBoxStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->_Style = pFVar3;
  (this->_Value).Value = 0.0;
  (this->_Value).bIsSet = true;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_Component).Value = Red;
  (this->_Component).bIsSet = true;
  *(undefined8 *)&(this->_Component).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Component).Getter = 0;
  *(undefined8 *)&(this->_Component).Getter.field_0x8 = 0;
  (this->_ColorGradingMode).Value = Invalid;
  (this->_ColorGradingMode).bIsSet = true;
  *(undefined8 *)&(this->_ColorGradingMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ColorGradingMode).Getter = 0;
  *(undefined8 *)&(this->_ColorGradingMode).Getter.field_0x8 = 0;
  (this->_MinValue).Value.TypedValue = 0.0;
  (this->_MinValue).Value.bIsSet = true;
  (this->_MinValue).bIsSet = true;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinValue).Getter = 0;
  *(undefined8 *)&(this->_MinValue).Getter.field_0x8 = 0;
  (this->_MaxValue).Value.TypedValue = 2.0;
  (this->_MaxValue).Value.bIsSet = true;
  (this->_MaxValue).bIsSet = true;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxValue).Getter = 0;
  *(undefined8 *)&(this->_MaxValue).Getter.field_0x8 = 0;
  (this->_MinSliderValue).Value.bIsSet = false;
  (this->_MinSliderValue).bIsSet = false;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MinSliderValue).Getter.field_0x8 = 0;
  (this->_MaxSliderValue).Value.bIsSet = false;
  (this->_MaxSliderValue).bIsSet = false;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter = 0;
  *(undefined8 *)&(this->_MaxSliderValue).Getter.field_0x8 = 0;
  (this->_AlwaysUsesDeltaSnap).Value = false;
  (this->_AlwaysUsesDeltaSnap).bIsSet = false;
  *(undefined8 *)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_AlwaysUsesDeltaSnap).Getter = 0;
  *(undefined8 *)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8 = 0;
  (this->_Delta).Value = 0.0;
  (this->_Delta).bIsSet = true;
  *(undefined8 *)&(this->_Delta).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Delta).Getter = 0;
  *(undefined8 *)&(this->_Delta).Getter.field_0x8 = 0;
  (this->_ShiftMultiplier).Value = 10.0;
  (this->_ShiftMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter = 0;
  *(undefined8 *)&(this->_ShiftMultiplier).Getter.field_0x8 = 0;
  (this->_CtrlMultiplier).Value = 0.1;
  (this->_CtrlMultiplier).bIsSet = true;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter = 0;
  *(undefined8 *)&(this->_CtrlMultiplier).Getter.field_0x8 = 0;
  (this->_Sensitivity).Value = 1.0;
  (this->_Sensitivity).bIsSet = true;
  *(undefined8 *)&(this->_Sensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Sensitivity).Getter = 0;
  *(undefined8 *)&(this->_Sensitivity).Getter.field_0x8 = 0;
  (this->_LinearDeltaSensitivity).Value = 0;
  (this->_LinearDeltaSensitivity).bIsSet = false;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter = 0;
  *(undefined8 *)&(this->_LinearDeltaSensitivity).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMaxValue).Value = false;
  (this->_SupportDynamicSliderMaxValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8 = 0;
  (this->_SupportDynamicSliderMinValue).Value = false;
  (this->_SupportDynamicSliderMinValue).bIsSet = true;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter = 0;
  *(undefined8 *)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMaxValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMaxValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnDynamicSliderMinValueChanged = 0;
  *(undefined8 *)&(this->_OnDynamicSliderMinValueChanged).field_0x8 = 0;
  *(undefined4 *)&(this->_OnDynamicSliderMinValueChanged).field_0x10 = 0;
  (this->_SliderExponent).Value = 1.0;
  (this->_SliderExponent).bIsSet = true;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter = 0;
  *(undefined8 *)&(this->_SliderExponent).Getter.field_0x8 = 0;
  (this->_SliderExponentNeutralValue).Value = 0.0;
  (this->_SliderExponentNeutralValue).bIsSet = false;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter = 0;
  *(undefined8 *)&(this->_SliderExponentNeutralValue).Getter.field_0x8 = 0;
  (this->_WheelStep).Value.bIsSet = false;
  (this->_WheelStep).bIsSet = false;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_WheelStep).Getter = 0;
  *(undefined8 *)&(this->_WheelStep).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&this->_OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->_OnBeginSliderMovement).field_0x8 = 0;
  *(undefined4 *)&(this->_OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->_OnEndSliderMovement = 0;
  *(undefined8 *)&(this->_OnEndSliderMovement).field_0x8 = 0;
  *(undefined4 *)&(this->_OnEndSliderMovement).field_0x10 = 0;
  *(undefined8 *)&(this->_OnQueryCurrentColor).field_0x10 = 0;
  *(undefined8 *)&this->_OnQueryCurrentColor = 0;
  *(undefined8 *)&(this->_OnQueryCurrentColor).field_0x8 = 0;
  (this->_TypeInterface).Object = (INumericTypeInterface<float> *)0x0;
  (this->_TypeInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_AllowSpin = true;
  return this;
}

// FArguments @ 14d8352d0

FArguments * __thiscall
UE::ColorGrading::SColorGradingWheel::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  *(undefined8 *)&(this->_SelectedColor).Value.field0_0x0 = 0;
  *(undefined8 *)((longlong)&(this->_SelectedColor).Value.field0_0x0 + 8) = 0;
  (this->_SelectedColor).bIsSet = false;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter = 0;
  *(undefined8 *)&(this->_SelectedColor).Getter.field_0x8 = 0;
  (this->_DesiredWheelSize).Value = 0;
  (this->_DesiredWheelSize).bIsSet = false;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter = 0;
  *(undefined8 *)&(this->_DesiredWheelSize).Getter.field_0x8 = 0;
  (this->_ExponentDisplacement).Value = 0.0;
  (this->_ExponentDisplacement).bIsSet = false;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter = 0;
  *(undefined8 *)&(this->_ExponentDisplacement).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  return this;
}

// FArguments @ 14d8353a0

FArguments * __thiscall
UE::PropertyViewer::SDefaultPropertyValue::FArguments::FArguments(FArguments *this)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Path).TopLevelContainer_Object.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_Path,(FObjectPtr)&local_res8);
  this_00 = &(this->_Path).TopLevelContainer_ScriptStruct;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->_Path).TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->_Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->_Path).Properties.ArrayNum = 0;
  (this->_Path).Properties.ArrayMax = 1;
  return this;
}

// FArguments @ 14d835420

FArguments * __thiscall
UE::PropertyViewer::SEnumPropertyValue::FArguments::FArguments(FArguments *this)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Path).TopLevelContainer_Object.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_Path,(FObjectPtr)&local_res8);
  this_00 = &(this->_Path).TopLevelContainer_ScriptStruct;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->_Path).TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->_Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->_Path).Properties.ArrayNum = 0;
  (this->_Path).Properties.ArrayMax = 1;
  return this;
}

// FArguments @ 14d8354a0

FArguments * __thiscall UE::PropertyViewer::SFieldIcon::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_OverrideColorSettings).bIsSet = false;
  return this;
}

// FArguments @ 14d8354d0

FArguments * __thiscall UE::PropertyViewer::SFieldName::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_bShowIcon = true;
  this->_bSanitizeName = false;
  (this->_OverrideDisplayName).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
  (this->_OverrideDisplayName).field0_0x0.TypedValue.Flags = 0;
  (this->_OverrideIconColorSettings).bIsSet = false;
  FText::FText(&(this->_HighlightText).Value);
  (this->_HighlightText).bIsSet = false;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_HighlightText).Getter = 0;
  *(undefined8 *)&(this->_HighlightText).Getter.field_0x8 = 0;
  return this;
}

// FArguments @ 14d835550

FArguments * __thiscall
SListView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::SListViewPinnedRowWidget::
FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return this;
}

// FArguments @ 14d835570

FArguments * __thiscall
UE::PropertyViewer::SNumericPropertyValue::FArguments::FArguments(FArguments *this)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Path).TopLevelContainer_Object.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_Path,(FObjectPtr)&local_res8);
  this_00 = &(this->_Path).TopLevelContainer_ScriptStruct;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->_Path).TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->_Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->_Path).Properties.ArrayNum = 0;
  (this->_Path).Properties.ArrayMax = 1;
  return this;
}

// FArguments @ 14d8355f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FArguments * __thiscall SRadialSlider::FArguments::FArguments(FArguments *this)

{
  FLinearColor FVar1;
  FSlateBrush *pFVar2;
  ISlateStyle *pIVar3;
  FName *pFVar4;
  FSliderStyle *pFVar5;
  FName local_res8;
  TVector2<double>_u_0 local_c8;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  this->_MouseUsesStep = false;
  this->_RequiresControllerLock = true;
  (this->_Locked).Value = false;
  (this->_Locked).bIsSet = true;
  *(undefined8 *)&(this->_Locked).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Locked).Getter = 0;
  *(undefined8 *)&(this->_Locked).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Gray;
  (this->_SliderBarColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderBarColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_SliderBarColor).bIsSet = true;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter = 0;
  *(undefined8 *)&(this->_SliderBarColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_SliderProgressColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderProgressColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_SliderProgressColor).bIsSet = true;
  *(undefined8 *)&(this->_SliderProgressColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderProgressColor).Getter = 0;
  *(undefined8 *)&(this->_SliderProgressColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::White;
  (this->_SliderHandleColor).Value.ColorUseRule = UseColor_Specified;
  (this->_SliderHandleColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_SliderHandleColor).bIsSet = true;
  *(undefined8 *)&(this->_SliderHandleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_SliderHandleColor).Getter = 0;
  *(undefined8 *)&(this->_SliderHandleColor).Getter.field_0x8 = 0;
  FVar1 = FLinearColor::Transparent;
  (this->_CenterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->_CenterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->_CenterBackgroundColor).bIsSet = true;
  local_c8._s_0.Y = _UNK_152c06d58;
  local_c8._s_0.X = ___xmm_40568000000000004056800000000000;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->_CenterBackgroundColor).Getter.field_0x8 = 0;
  (this->_Thickness).Value = 0.0;
  (this->_Thickness).bIsSet = false;
  *(undefined8 *)&(this->_Thickness).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Thickness).Getter = 0;
  *(undefined8 *)&(this->_Thickness).Getter.field_0x8 = 0;
  pFVar2 = (FSlateBrush *)
           FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
                     ((FSlateRoundedBoxBrush *)local_b8,&FStyleColors::Transparent,
                      (TVector2<double> *)&local_c8._s_0);
  FSlateBrush::FSlateBrush(&this->_CenterBackgroundBrush,pFVar2);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  pIVar3 = FAppStyle::Get();
  pFVar4 = ::FName::FName(&local_res8,"Slider");
  pFVar5 = (FSliderStyle *)
           (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3,FSliderStyle::TypeName,*pFVar4,0,1);
  if (pFVar5 == (FSliderStyle *)0x0) {
    pFVar5 = FSliderStyle::GetDefault();
  }
  this->_Style = pFVar5;
  (this->_StepSize).Value = 0.01;
  (this->_StepSize).bIsSet = true;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_StepSize).Getter = 0;
  *(undefined8 *)&(this->_StepSize).Getter.field_0x8 = 0;
  (this->_Value).Value = 1.0;
  (this->_Value).bIsSet = true;
  *(undefined8 *)&(this->_Value).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Value).Getter = 0;
  *(undefined8 *)&(this->_Value).Getter.field_0x8 = 0;
  (this->_bUseCustomDefaultValue).Value = false;
  (this->_bUseCustomDefaultValue).bIsSet = true;
  *(undefined8 *)&(this->_bUseCustomDefaultValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_bUseCustomDefaultValue).Getter = 0;
  *(undefined8 *)&(this->_bUseCustomDefaultValue).Getter.field_0x8 = 0;
  (this->_CustomDefaultValue).Value = 0.0;
  (this->_CustomDefaultValue).bIsSet = true;
  *(undefined8 *)&(this->_CustomDefaultValue).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_CustomDefaultValue).Getter = 0;
  *(undefined8 *)&(this->_CustomDefaultValue).Getter.field_0x8 = 0;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&this->_SliderRange);
  (this->_ValueTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->_ValueTags).ArrayNum = 0;
  (this->_ValueTags).ArrayMax = 0;
  this->_SliderHandleStartAngle = 60.0;
  this->_SliderHandleEndAngle = 300.0;
  this->_AngularOffset = 0.0;
  this->_IsFocusable = true;
  this->_UseVerticalDrag = false;
  this->_ShowSliderHandle = true;
  this->_ShowSliderHand = false;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x8 = 0;
  (this->_HandStartEndRatio).field0_0x0._s_0.Y = 1.0;
  (this->_HandStartEndRatio).field0_0x0._s_0.X = 0.0;
  *(undefined8 *)&(this->_OnMouseCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureBegin = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&this->_OnMouseCaptureEnd = 0;
  *(undefined8 *)&(this->_OnMouseCaptureEnd).field_0x8 = 0;
  *(undefined8 *)&this->_OnControllerCaptureBegin = 0;
  *(undefined8 *)&(this->_OnControllerCaptureBegin).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureBegin).field_0x10 = 0;
  *(undefined8 *)&this->_OnControllerCaptureEnd = 0;
  *(undefined8 *)&(this->_OnControllerCaptureEnd).field_0x8 = 0;
  *(undefined4 *)&(this->_OnControllerCaptureEnd).field_0x10 = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->_OnValueChanged = 0;
  *(undefined8 *)&(this->_OnValueChanged).field_0x8 = 0;
  return this;
}

// FArguments @ 14d835920

FArguments * __thiscall
UE::PropertyViewer::SStringPropertyValue::FArguments::FArguments(FArguments *this)

{
  TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  (this->_Path).TopLevelContainer_Object.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_Path,(FObjectPtr)&local_res8);
  this_00 = &(this->_Path).TopLevelContainer_ScriptStruct;
  local_res8 = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->_Path).TopLevelContainer_ScriptStructData = (void *)0x0;
  (this->_Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  (this->_Path).Properties.ArrayNum = 0;
  (this->_Path).Properties.ArrayMax = 1;
  return this;
}

// ~FArguments @ 14d838e20

void __thiscall SSpinBox<__int64>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TypeInterface).Getter);
  pvVar1 = *(void **)&(this->_TypeInterface).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TypeInterface).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_KeyboardType).Getter);
  pvVar1 = *(void **)&(this->_KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextOnCommit).Getter);
  pvVar1 = *(void **)&(this->_SelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectAllTextOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter);
  pvVar1 = *(void **)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEditEditableText);
  pvVar1 = *(void **)&(this->_OnEditEditableText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEditEditableText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetDisplayValue);
  pvVar1 = *(void **)&(this->_OnGetDisplayValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetDisplayValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  pvVar1 = *(void **)&(this->_WheelStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_EnableSlider).Getter);
  pvVar1 = *(void **)&(this->_EnableSlider).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_EnableSlider).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxFractionalDigits).Getter);
  pvVar1 = *(void **)&(this->_MaxFractionalDigits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinFractionalDigits).Getter);
  pvVar1 = *(void **)&(this->_MinFractionalDigits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  pvVar1 = *(void **)&(this->_MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d839430

void __thiscall SSpinBox<unsigned___int64>::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_ContextMenuExtender);
  pvVar1 = *(void **)&(this->_ContextMenuExtender).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_ContextMenuExtender);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_TypeInterface).Getter);
  pvVar1 = *(void **)&(this->_TypeInterface).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_TypeInterface).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).Value.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_KeyboardType).Getter);
  pvVar1 = *(void **)&(this->_KeyboardType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_KeyboardType).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Justification).Getter);
  pvVar1 = *(void **)&(this->_Justification).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Justification).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinDesiredWidth).Getter);
  pvVar1 = *(void **)&(this->_MinDesiredWidth).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinDesiredWidth).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectAllTextOnCommit).Getter);
  pvVar1 = *(void **)&(this->_SelectAllTextOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectAllTextOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ClearKeyboardFocusOnCommit).Getter);
  pvVar1 = *(void **)&(this->_ClearKeyboardFocusOnCommit).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ClearKeyboardFocusOnCommit).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEditEditableText);
  pvVar1 = *(void **)&(this->_OnEditEditableText).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEditEditableText);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetDisplayValue);
  pvVar1 = *(void **)&(this->_OnGetDisplayValue).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetDisplayValue);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueCommitted);
  pvVar1 = *(void **)&(this->_OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueCommitted);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ContentPadding).Getter);
  pvVar1 = *(void **)&(this->_ContentPadding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ContentPadding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Font).Getter);
  pvVar1 = *(void **)&(this->_Font).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Font).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Font).Value.CompositeFont.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  pvVar1 = *(void **)&(this->_WheelStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShiftMouseMovePixelPerDelta).Getter);
  pvVar1 = *(void **)&(this->_ShiftMouseMovePixelPerDelta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMouseMovePixelPerDelta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_EnableSlider).Getter);
  pvVar1 = *(void **)&(this->_EnableSlider).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_EnableSlider).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxFractionalDigits).Getter);
  pvVar1 = *(void **)&(this->_MaxFractionalDigits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinFractionalDigits).Getter);
  pvVar1 = *(void **)&(this->_MinFractionalDigits).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinFractionalDigits).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  pvVar1 = *(void **)&(this->_MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d839a40

void __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_Content).Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter);
  pvVar1 = *(void **)&(this->_Padding).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Padding).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDrop);
  pvVar1 = *(void **)&(this->_OnDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragLeave);
  pvVar1 = *(void **)&(this->_OnDragLeave).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragLeave);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragEnter);
  pvVar1 = *(void **)&(this->_OnDragEnter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragEnter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDragDetected);
  pvVar1 = *(void **)&(this->_OnDragDetected).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDragDetected);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnPaintDropIndicator);
  pvVar1 = *(void **)&(this->_OnPaintDropIndicator).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnPaintDropIndicator);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnAcceptDrop);
  pvVar1 = *(void **)&(this->_OnAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnAcceptDrop);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnCanAcceptDrop);
  pvVar1 = *(void **)&(this->_OnCanAcceptDrop).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnCanAcceptDrop);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d839bc0

void __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::~FArguments
          (FArguments *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnKeyDownHandler);
  pvVar1 = *(void **)&(this->_OnKeyDownHandler).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnKeyDownHandler);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_ShouldStackHierarchyHeaders).Getter);
  pvVar1 = *(void **)&(this->_ShouldStackHierarchyHeaders).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShouldStackHierarchyHeaders).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEnteredBadState);
  pvVar1 = *(void **)&(this->_OnEnteredBadState).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEnteredBadState);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemToString_Debug);
  pvVar1 = *(void **)&(this->_OnItemToString_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemToString_Debug);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_ExternalScrollbar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_HeaderRow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SelectionMode).Getter);
  pvVar1 = *(void **)&(this->_SelectionMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SelectionMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnIsSelectableOrNavigable);
  pvVar1 = *(void **)&(this->_OnIsSelectableOrNavigable).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnIsSelectableOrNavigable);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnExpansionChanged);
  pvVar1 = *(void **)&(this->_OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnExpansionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSelectionChanged);
  pvVar1 = *(void **)&(this->_OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSelectionChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonDoubleClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonDoubleClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonDoubleClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseButtonClick);
  pvVar1 = *(void **)&(this->_OnMouseButtonClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseButtonClick);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemsRebuilt);
  pvVar1 = *(void **)&(this->_OnItemsRebuilt).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemsRebuilt);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnContextMenuOpening);
  pvVar1 = *(void **)&(this->_OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxPinnedItems).Getter);
  pvVar1 = *(void **)&(this->_MaxPinnedItems).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxPinnedItems).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ItemHeight).Getter);
  pvVar1 = *(void **)&(this->_ItemHeight).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ItemHeight).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.ReferenceController
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnSetExpansionRecursive);
  pvVar1 = *(void **)&(this->_OnSetExpansionRecursive).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGetChildren);
  pvVar1 = *(void **)&(this->_OnGetChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGetChildren);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnItemScrolledIntoView);
  pvVar1 = *(void **)&(this->_OnItemScrolledIntoView).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnItemScrolledIntoView);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnFinishedScrolling);
  pvVar1 = *(void **)&(this->_OnFinishedScrolling).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnFinishedScrolling);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnTreeViewScrolled);
  pvVar1 = *(void **)&(this->_OnTreeViewScrolled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnTreeViewScrolled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRowReleased);
  pvVar1 = *(void **)&(this->_OnRowReleased).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRowReleased);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnRefreshRow);
  pvVar1 = *(void **)&(this->_OnRefreshRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnRefreshRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGeneratePinnedRow);
  pvVar1 = *(void **)&(this->_OnGeneratePinnedRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGeneratePinnedRow);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnGenerateRow);
  pvVar1 = *(void **)&(this->_OnGenerateRow).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnGenerateRow);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d839fc0

void __thiscall
UE::ColorGrading::SColorGradingComponentSpinBox::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->_TypeInterface).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnQueryCurrentColor);
  pvVar1 = *(void **)&(this->_OnQueryCurrentColor).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnQueryCurrentColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnEndSliderMovement);
  pvVar1 = *(void **)&(this->_OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnEndSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->_OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnBeginSliderMovement);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_WheelStep).Getter);
  pvVar1 = *(void **)&(this->_WheelStep).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_WheelStep).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SliderExponentNeutralValue).Getter);
  pvVar1 = *(void **)&(this->_SliderExponentNeutralValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponentNeutralValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderExponent).Getter);
  pvVar1 = *(void **)&(this->_SliderExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMinValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMinValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMinValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnDynamicSliderMaxValueChanged);
  pvVar1 = *(void **)&(this->_OnDynamicSliderMaxValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnDynamicSliderMaxValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter);
  pvVar1 = *(void **)&(this->_SupportDynamicSliderMaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SupportDynamicSliderMaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_LinearDeltaSensitivity).Getter);
  pvVar1 = *(void **)&(this->_LinearDeltaSensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_LinearDeltaSensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Sensitivity).Getter);
  pvVar1 = *(void **)&(this->_Sensitivity).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Sensitivity).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter);
  pvVar1 = *(void **)&(this->_CtrlMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CtrlMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter);
  pvVar1 = *(void **)&(this->_ShiftMultiplier).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ShiftMultiplier).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Delta).Getter);
  pvVar1 = *(void **)&(this->_Delta).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Delta).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_AlwaysUsesDeltaSnap).Getter);
  pvVar1 = *(void **)&(this->_AlwaysUsesDeltaSnap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_AlwaysUsesDeltaSnap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MaxSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSliderValue).Getter);
  pvVar1 = *(void **)&(this->_MinSliderValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSliderValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxValue).Getter);
  pvVar1 = *(void **)&(this->_MaxValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinValue).Getter);
  pvVar1 = *(void **)&(this->_MinValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ColorGradingMode).Getter);
  pvVar1 = *(void **)&(this->_ColorGradingMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_ColorGradingMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Component).Getter);
  pvVar1 = *(void **)&(this->_Component).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Component).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d83a3d0

void __thiscall UE::PropertyViewer::SFieldName::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HighlightText).Getter);
  pvVar1 = *(void **)&(this->_HighlightText).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_HighlightText).Getter);
  pIVar2 = (this->_HighlightText).Value.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  if ((this->_OverrideIconColorSettings).bIsSet != false) {
    *(undefined4 *)&(this->_OverrideIconColorSettings).TypedValue.StructColors.field_0x48 = 0;
    pvVar1 = *(void **)&(this->_OverrideIconColorSettings).TypedValue.StructColors.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->_OverrideIconColorSettings).TypedValue.StructColors);
  }
  plVar3 = *(longlong **)&(this->_OverrideDisplayName).field0_0x0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// ~FArguments @ 14d83a480

void __thiscall SRadialSlider::FArguments::~FArguments(FArguments *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged);
  pvVar1 = *(void **)&(this->_OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnValueChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureEnd);
  pvVar1 = *(void **)&(this->_OnControllerCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnControllerCaptureBegin);
  pvVar1 = *(void **)&(this->_OnControllerCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnControllerCaptureBegin);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureEnd);
  pvVar1 = *(void **)&(this->_OnMouseCaptureEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureEnd);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_OnMouseCaptureBegin);
  pvVar1 = *(void **)&(this->_OnMouseCaptureBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_OnMouseCaptureBegin);
  pFVar2 = (this->_ValueTags).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->_SliderRange).EditorCurveData.Keys.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->_SliderRange).EditorCurveData._padding_ = (longlong)&___7FIndexedCurve__6B_;
  pvVar1 = (void *)(this->_SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->_SliderRange).EditorCurveData._padding_ = 0;
  pvVar1 = (void *)(this->_SliderRange).EditorCurveData._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->_SliderRange).EditorCurveData._padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CustomDefaultValue).Getter);
  pvVar1 = *(void **)&(this->_CustomDefaultValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CustomDefaultValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_bUseCustomDefaultValue).Getter);
  pvVar1 = *(void **)&(this->_bUseCustomDefaultValue).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_bUseCustomDefaultValue).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Value).Getter);
  pvVar1 = *(void **)&(this->_Value).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Value).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_StepSize).Getter);
  pvVar1 = *(void **)&(this->_StepSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_StepSize).Getter);
  pTVar3 = (this->_CenterBackgroundBrush).ResourceHandle.Data.SharedReferenceCount.
           ReferenceController;
  (this->_CenterBackgroundBrush)._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Thickness).Getter);
  pvVar1 = *(void **)&(this->_Thickness).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Thickness).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CenterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->_CenterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_CenterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderHandleColor).Getter);
  pvVar1 = *(void **)&(this->_SliderHandleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderHandleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderProgressColor).Getter);
  pvVar1 = *(void **)&(this->_SliderProgressColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderProgressColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_SliderBarColor).Getter);
  pvVar1 = *(void **)&(this->_SliderBarColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_SliderBarColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Locked).Getter);
  pvVar1 = *(void **)&(this->_Locked).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_Locked).Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  return;
}

// CtrlMultiplier @ 14d85bdc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::CtrlMultiplier(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_CtrlMultiplier).Value = param_1->Value;
  (this->_CtrlMultiplier).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_CtrlMultiplier).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// Font @ 14d861b60

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::Font(FArguments *this,TAttribute<FSlateFontInfo> *param_1)

{
  void *pvVar1;
  
  TAttribute<FSlateFontInfo>::operator=(&this->_Font,param_1);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Value).CompositeFont.SharedReferenceCount.ReferenceController);
  return this;
}

// HighlightText @ 14d871710

FArguments * __thiscall
UE::PropertyViewer::SFieldName::FArguments::HighlightText
          (FArguments *this,TAttribute<FText> *param_1)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  FText::operator=(&(this->_HighlightText).Value,&param_1->Value);
  (this->_HighlightText).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_HighlightText).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Getter);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&param_1->Getter);
  pIVar2 = (param_1->Value).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  return this;
}

// MakeTreeItemsSource @ 14d872f20

TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>_>
 __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::MakeTreeItemsSource
          (FArguments *this,TSharedRef<STableViewBase,1> *param_1)

{
  TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *pTVar3;
  STableViewBase *pSVar4;
  FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_00;
  FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *this_01;
  longlong *in_R8;
  TSharedRef<STableViewBase,1> local_28;
  TSharedRef<STableViewBase,1> local_18;
  
  if (this->_TreeItemsSource_ArrayPointer ==
      (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *)
      0x0) {
    if (this->_TreeItemsSource_ObservableArrayPointer ==
        (TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      pSVar4 = (STableViewBase *)(this->_TreeItemsSource_SharedObservableArray).Object;
      if (pSVar4 == (STableViewBase *)0x0) {
        pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
        param_1->Object = (STableViewBase *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      else {
        pTVar2 = (this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount.
                 ReferenceController;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        this_01 = ::operator_new(0x30);
        if (this_01 ==
            (FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
          pSVar4 = (STableViewBase *)0x0;
        }
        else {
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_18.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)in_R8[1];
          local_18.Object = (STableViewBase *)*in_R8;
          if (local_18.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          local_28.Object = pSVar4;
          local_28.SharedReferenceCount.ReferenceController = pTVar2;
          pSVar4 = (STableViewBase *)
                   UE::Slate::ItemsSource::
                   FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
                   FSharedObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                             (this_01,&local_18,
                              (TSharedRef<UE::Slate::Containers::TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
                               *)&local_28);
        }
        param_1->Object = pSVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)in_R8[1]);
      }
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>_>
              )(IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)param_1;
    }
    this_00 = ::operator_new(0x28);
    if (this_00 !=
        (FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0) {
      local_28.Object = (STableViewBase *)*in_R8;
      pTVar3 = this->_TreeItemsSource_ObservableArrayPointer;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)in_R8[1];
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSVar4 = (STableViewBase *)
               UE::Slate::ItemsSource::
               FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::
               FObservableArrayPointer<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>
                         (this_00,&local_28,pTVar3);
      goto LAB_14d872f8b;
    }
  }
  else {
    pSVar4 = ::operator_new(0x10);
    if (pSVar4 != (STableViewBase *)0x0) {
      pTVar1 = this->_TreeItemsSource_ArrayPointer;
      *(undefined ***)pSVar4 =
           &
           ___7__FArrayPointer_V__TSharedPtr_UFTreeNode_Private_PropertyViewer_UE___00___ItemsSource_Slate_UE__6B_
      ;
      *(TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> **)
       &pSVar4->field_0x8 = pTVar1;
      pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
      param_1->Object = pSVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>_>
              )(IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)param_1;
    }
  }
  pSVar4 = (STableViewBase *)0x0;
LAB_14d872f8b:
  pTVar2 = (TReferenceControllerBase<1> *)in_R8[1];
  param_1->Object = pSVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>_>_>
          )(IItemsSource<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)param_1;
}

// OverrideDisplayName @ 14d87d9c0

FArguments * __thiscall
UE::PropertyViewer::SFieldName::FArguments::OverrideDisplayName
          (FArguments *this,TOptional<FText> *param_1)

{
  TOptional<FText>::operator=(&this->_OverrideDisplayName,param_1);
  if (*(longlong **)&param_1->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&param_1->field0_0x0 + 0x10))();
  }
  return this;
}

// OverrideIconColorSettings @ 14d87da00

FArguments * __thiscall
UE::PropertyViewer::SFieldName::FArguments::OverrideIconColorSettings
          (FArguments *this,TOptional<UE::PropertyViewer::FFieldColorSettings_const_> *param_1)

{
  void *pvVar1;
  
  TOptional<UE::PropertyViewer::FFieldColorSettings_const_>::operator=
            (&this->_OverrideIconColorSettings,param_1);
  if (param_1->bIsSet != false) {
    *(undefined4 *)&(param_1->TypedValue).StructColors.field_0x48 = 0;
    pvVar1 = *(void **)&(param_1->TypedValue).StructColors.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->TypedValue).StructColors);
  }
  return this;
}

// Padding @ 14d87da60

FArguments * __thiscall
STableRow<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::Padding
          (FArguments *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar2;
  (this->_Padding).Value.Right = fVar3;
  (this->_Padding).Value.Bottom = fVar4;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// ShiftMultiplier @ 14d8888f0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::ShiftMultiplier(FArguments *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_ShiftMultiplier).Value = param_1->Value;
  (this->_ShiftMultiplier).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_ShiftMultiplier).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// SupportDynamicSliderMaxValue @ 14d888dc0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::SupportDynamicSliderMaxValue
          (FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SupportDynamicSliderMaxValue).Value = param_1->Value;
  (this->_SupportDynamicSliderMaxValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMaxValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// SupportDynamicSliderMinValue @ 14d888e30

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::SupportDynamicSliderMinValue
          (FArguments *this,TAttribute<bool> *param_1)

{
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  
  this_00 = &param_1->Getter;
  (this->_SupportDynamicSliderMinValue).Value = param_1->Value;
  (this->_SupportDynamicSliderMinValue).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->_SupportDynamicSliderMinValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return this;
}

// TreeItemsSource @ 14d88b320

FArguments * __thiscall
STreeView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>::FArguments::TreeItemsSource
          (FArguments *this,
          TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_TreeItemsSource_ArrayPointer =
       (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *)
       0x0;
  this->_TreeItemsSource_ObservableArrayPointer =
       (TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_TreeItemsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_>,1>
       *)&local_18) {
    (this->_TreeItemsSource_SharedObservableArray).Object =
         (TObservableArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->_TreeItemsSource_SharedObservableArray).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->_TreeItemsSource_ArrayPointer = param_1;
  return this;
}

// UndeterminedString @ 14d88b6e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FArguments * __thiscall
SNumericEntryBox<float>::FArguments::UndeterminedString(FArguments *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->_UndeterminedString).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->_UndeterminedString).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->_UndeterminedString).Flags = param_1->Flags;
  pIVar1 = (param_1->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

