// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 7

// Construct @ 1427ed510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STileView<TSharedPtr<SWidget,1>_>::Construct
          (STileView<TSharedPtr<SWidget,1>_> *this,FArguments *param_1)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar1;
  TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  IItemsSource<TSharedPtr<SWidget,1>_> IVar5;
  STextBlock *pSVar6;
  void *pvVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  TSharedRef<SWidget,1> *pTVar11;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SWidget,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<SWidget,1>_>_>_>
  TVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined4 *puVar15;
  FArguments *pFVar16;
  FText *pFVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  SScrollBar *pSVar19;
  TAttribute<EVisibility> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  FMRSWRecursiveAccessDetector *this_02;
  FSlotBase *this_03;
  undefined1 *puVar23;
  TReferenceControllerBase<1> *pTVar24;
  atomic<int> *paVar25;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_958 [8];
  FDelegateAllocation local_950;
  undefined1 local_940 [8];
  ForAnyElementType local_938;
  int local_930;
  undefined1 local_928 [8];
  ForAnyElementType local_920;
  int local_918;
  undefined1 local_910 [8];
  ForAnyElementType local_908;
  int local_900;
  undefined1 local_8f8 [8];
  ForAnyElementType local_8f0;
  int local_8e8;
  undefined1 local_8e0 [8];
  ForAnyElementType local_8d8;
  int local_8d0;
  undefined1 local_8c8 [8];
  ForAnyElementType local_8c0;
  int local_8b8;
  undefined1 local_8b0 [8];
  ForAnyElementType local_8a8;
  int local_8a0;
  undefined1 local_898 [8];
  ForAnyElementType local_890;
  int local_888;
  FString local_880;
  SWidget *local_870;
  TReferenceControllerBase<1> *local_868;
  STextBlock *local_860;
  TReferenceControllerBase<1> *pTStack_858;
  TSharedRef<ISlateMetaData,1> local_850;
  undefined8 local_840;
  FSharedReferencer<1> FStack_838;
  TSharedRef<SWidget,1> local_830;
  TSharedPtr<SHeaderRow,1> local_820;
  FDestructionSentinel local_810;
  FDestructionSentinel local_7f8;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDelegateAllocation *local_720;
  TAttribute<FText> local_718;
  FText local_6e8;
  TSharedRef<SWidget,1> local_6d8;
  FReadAccessScope local_6c8;
  FReadAccessScope local_6b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_698;
  undefined1 local_680 [16];
  TReferenceControllerBase<1> *local_670;
  FReadAccessScope local_668;
  FReadAccessScope local_650;
  FReadAccessScope local_638;
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  FReadAccessScope local_5d8;
  TAttribute<EVisibility> local_5c0;
  FArguments local_5a0;
  
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  puVar23 = &this->field_0x748;
  if (&param_1->_OnGenerateTile !=
      (TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<SWidget,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
       *)puVar23) {
    local_910 = (undefined1  [8])0x0;
    local_908.Data = (FScriptContainerElement *)0x0;
    local_900 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGenerateTile,
               &local_5f0);
    if ((*(int *)&(param_1->_OnGenerateTile).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGenerateTile).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_910);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)puVar23,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_910);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_910,
               (FWriteAccessScope *)&local_7f8);
    if ((local_900 != 0) && (local_908.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_908.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_908,0,0,0x10);
      local_900 = 0;
    }
    if (local_7f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f8.Accessor,&local_7f8);
    }
    if (local_908.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_908.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_910);
  }
  TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshTile);
  if (&param_1->_OnTileReleased !=
      (TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
      &this->field_0x7c0) {
    local_8f8 = (undefined1  [8])0x0;
    local_8f0.Data = (FScriptContainerElement *)0x0;
    local_8e8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnTileReleased,
               &local_5d8);
    if ((*(int *)&(param_1->_OnTileReleased).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnTileReleased).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_8f8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x7c0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8f8,
               (FWriteAccessScope *)&local_810);
    if ((local_8e8 != 0) && (local_8f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8f0,0,0,0x10);
      local_8e8 = 0;
    }
    if (local_810.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
    }
    if (local_8f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8f8);
  }
  if (&param_1->_OnItemScrolledIntoView !=
      (TDelegate<void___cdecl(TSharedPtr<SWidget,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
       *)&this->field_0x7d8) {
    local_8e0 = (undefined1  [8])0x0;
    local_8d8.Data = (FScriptContainerElement *)0x0;
    local_8d0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_668);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_8e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_668);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x7d8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e0,
               (FWriteAccessScope *)&local_7e0);
    if ((local_8d0 != 0) && (local_8d8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8d8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8d8,0,0,0x10);
      local_8d0 = 0;
    }
    if (local_7e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
    }
    if (local_8d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8d8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8e0);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_830);
  pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar11->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_830.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_870 = pSVar4;
  local_868 = pTVar3;
  TVar12 = FArguments::MakeListItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_680);
  if ((this->field_0x31 & 4) == 0) {
    puVar1 = &this->field_0x9f8;
    if ((IItemsSource<TSharedPtr<SWidget,1>_> *)puVar1 != TVar12.Ptr) {
      puVar13 = *(undefined8 **)puVar1;
      *(IItemsSource<TSharedPtr<SWidget,1>_> *)puVar1 = *TVar12.Ptr;
      *TVar12.Ptr = (IItemsSource<TSharedPtr<SWidget,1>_>)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)&this->field_0x588 + 0x30))();
    *(undefined4 *)&this->field_0x8e0 = 0;
    this->field_0x9a2 = 0;
    local_840 = 0;
    FStack_838.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)&this->field_0x8d0 != &local_840) {
      *(undefined8 *)&this->field_0x8d0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,&FStack_838);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_838.ReferenceController);
    STableViewBase::ClearWidgets((STableViewBase *)this);
    puVar1 = &this->field_0x9f8;
    if ((IItemsSource<TSharedPtr<SWidget,1>_> *)puVar1 != TVar12.Ptr) {
      puVar13 = *(undefined8 **)puVar1;
      *(IItemsSource<TSharedPtr<SWidget,1>_> *)puVar1 = *TVar12.Ptr;
      *TVar12.Ptr = (IItemsSource<TSharedPtr<SWidget,1>_>)0x0;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)(puVar13,1);
      }
    }
    (**(code **)(*(longlong *)this + 0x250))(this);
  }
  IVar5 = *TVar12.Ptr;
  if (IVar5 != (IItemsSource<TSharedPtr<SWidget,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar5)(IVar5,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (&param_1->_OnContextMenuOpening !=
      (TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
      &this->field_0x3b8) {
    local_8c8 = (undefined1  [8])0x0;
    local_8c0.Data = (FScriptContainerElement *)0x0;
    local_8b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnContextMenuOpening,&local_650);
    if ((*(int *)&(param_1->_OnContextMenuOpening).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnContextMenuOpening).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_8c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_650);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x3b8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8c8,
               (FWriteAccessScope *)&local_7c8);
    if ((local_8b8 != 0) && (local_8c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8c0,0,0,0x10);
      local_8b8 = 0;
    }
    if (local_7c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
    }
    if (local_8c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8c8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  if (&param_1->_OnSelectionChanged !=
      (TDelegate<void___cdecl(TSharedPtr<SWidget,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy> *
      )&this->field_0x900) {
    local_8b0 = (undefined1  [8])0x0;
    local_8a8.Data = (FScriptContainerElement *)0x0;
    local_8a0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectionChanged,&local_638);
    if ((*(int *)&(param_1->_OnSelectionChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnSelectionChanged).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_8b0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_638);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x900,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8b0,
               (FWriteAccessScope *)&local_7b0);
    if ((local_8a0 != 0) && (local_8a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8a8,0,0,0x10);
      local_8a0 = 0;
    }
    if (local_7b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
    }
    if (local_8a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8b0);
  }
  if (&param_1->_OnIsSelectableOrNavigable !=
      (TDelegate<bool___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
      &this->field_0x918) {
    local_898 = (undefined1  [8])0x0;
    local_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_620);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_898);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x918,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_898);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_898,
               (FWriteAccessScope *)&local_798);
    if ((local_888 != 0) && (local_890.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_890.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_890,0,0,0x10);
      local_888 = 0;
    }
    if (local_798.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
    }
    if (local_890.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_890.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_898);
  }
  this_01 = &(param_1->_SelectionMode).Getter;
  *(Type *)&this->field_0x3e8 = (param_1->_SelectionMode).Value;
  this->field_0x3ec = (param_1->_SelectionMode).bIsSet;
  if (this_01 !=
      (TDelegate<ESelectionMode::Type___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3f0
     ) {
    local_940 = (undefined1  [8])0x0;
    local_938.Data = (FScriptContainerElement *)0x0;
    local_930 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_608);
    if ((*(int *)&(param_1->_SelectionMode).Getter.field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_SelectionMode).Getter.field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_940);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x3f0,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_940);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_940,
               (FWriteAccessScope *)&local_780);
    if ((local_930 != 0) && (local_938.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_938.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_938,0,0,0x10);
      local_930 = 0;
    }
    if (local_780.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
    }
    if (local_938.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_940);
  }
  this->field_0x99c = param_1->_ClearSelectionOnClick;
  this->field_0x548 = param_1->_AllowOverscroll;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
  this->field_0x99d = param_1->_HandleGamepadEvents;
  this->field_0x99e = param_1->_HandleDirectionalNavigation;
  this->field_0x978 = (param_1->_IsFocusable).Value;
  this->field_0x979 = (param_1->_IsFocusable).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x980,
             &(param_1->_IsFocusable).Getter);
  this->field_0x320 = param_1->_EnableAnimatedScrolling;
  if (&param_1->_FixedLineScrollOffset != (TOptional<double> *)&this->field_0x310) {
    if ((param_1->_FixedLineScrollOffset).bIsSet == false) {
      if (this->field_0x318 != '\0') {
        this->field_0x318 = 0;
      }
    }
    else {
      *(double *)&this->field_0x310 = (param_1->_FixedLineScrollOffset).TypedValue;
      this->field_0x318 = 1;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,&local_6c8);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_1427ede6a:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6c8);
    local_958 = (undefined1  [8])0x0;
    local_950.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_950.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_958,
               (FWriteAccessScope *)&local_738);
    local_720 = &local_950;
    puVar13 = UE::Core::Private::DelegateAllocate(0x20,&local_950);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VSWidget___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = TListTypeTraits<TSharedPtr<SWidget,1>,void>::DebugDump;
    }
    if (local_738.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
    }
    TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
               local_958);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_958,
               (FWriteAccessScope *)&local_750);
    if ((local_950.DelegateSize != 0) &&
       (local_950.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_950.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_950,0,0,0x10);
      local_950.DelegateSize = 0;
    }
    if (local_750.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
    }
    if (local_950.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_950.DelegateAllocator);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_958;
  }
  else {
    cVar9 = (**(code **)(*plVar2 + 0x38))();
    if (cVar9 == '\0') goto LAB_1427ede6a;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_6c8);
    local_928 = (undefined1  [8])0x0;
    local_920.Data = (FScriptContainerElement *)0x0;
    local_918 = 0;
    TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
               local_928,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<SWidget,1>),FDefaultDelegateUserPolicy> *)
               local_928);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_928,
               (FWriteAccessScope *)&local_768);
    if ((local_918 != 0) && (local_920.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_920.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_920,0,0,0x10);
      local_918 = 0;
    }
    if (local_768.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
    }
    if (local_920.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_920.Data);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_928;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_02);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7a8,
             &param_1->_OnEnteredBadState);
  this->bWrapHorizontalNavigation = param_1->_WrapHorizontalNavigation;
  local_880.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_880.Data.ArrayNum = 0;
  local_880.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)puVar23,&local_6b0);
  if ((*(int *)&this->field_0x758 != 0) && (*(longlong **)&this->field_0x750 != (longlong *)0x0)) {
    cVar9 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar9 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_6b0);
      goto LAB_1427ee007;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_6b0);
  ::FString::AppendChars(&local_880,L"Please specify an OnGenerateTile. \n",0x23);
LAB_1427ee007:
  if (*(longlong *)&this->field_0x9f8 == 0) {
    ::FString::AppendChars(&local_880,L"Please specify a ListItemsSource. \n",0x23);
  }
  iVar22 = local_880.Data.ArrayNum + -1;
  if (local_880.Data.ArrayNum == 0) {
    iVar22 = 0;
  }
  if (iVar22 < 1) {
    local_820.Object = (SHeaderRow *)0x0;
    local_820.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,&param_1->_ItemWidth,&param_1->_ItemHeight,
               &param_1->_ItemAlignment,&local_820,&param_1->_ExternalScrollbar,
               param_1->_Orientation,&param_1->_OnTileViewScrolled,param_1->_ScrollBarStyle,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_820.SharedReferenceCount.ReferenceController);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      pSVar19 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(pSVar19,param_1->_ScrollbarDragFocusCause);
      pSVar19 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      pTVar20 = TAttribute<EVisibility>::TAttribute<EVisibility>
                          (&local_5c0,&param_1->_ScrollbarVisibility);
      this_00 = &pTVar20->Getter;
      (pSVar19->UserVisibility).Value.Value.Value = (pTVar20->Value).Value.Value;
      (pSVar19->UserVisibility).bIsSet = pTVar20->bIsSet;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(pSVar19->UserVisibility).Getter,this_00);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
      pvVar7 = *(void **)&(pTVar20->Getter).field_0x8;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this_00);
      pSVar19 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetScrollbarDisabledVisibility
                (pSVar19,(EVisibility)(param_1->_ScrollbarDisabledVisibility).Value.Value);
    }
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_6d8);
    pTVar3 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar11->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar25 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar25 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar25 = (atomic<int>)((int)*paVar25 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6d8.SharedReferenceCount.ReferenceController);
    pTVar21 = ::operator_new(0x28);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      local_850.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_850.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_VSWidget___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar4 != (SWidget *)0x0) {
        pTVar24 = (TReferenceControllerBase<1> *)
                  &pSVar4[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VSWidget___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar24;
        pTVar21[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar25 = (atomic<int>)((int)*paVar25 + 1);
        UNLOCK();
        pTVar21[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VSWidget___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar24;
        pTVar21[2]._padding_ = (longlong)pTVar3;
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_850.Object = (ISlateMetaData *)(pTVar21 + 1);
      if ((TReferenceControllerBase<1> *)local_850.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      pTVar24 = pTVar21;
      local_850.SharedReferenceCount.ReferenceController = pTVar21;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_850);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_850.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    puVar23 = &this->field_0x268;
    *(undefined4 *)puVar23 = 2;
    puVar15 = (undefined4 *)&this->field_0x26c;
    if (puVar23 == (undefined1 *)0x0) {
      puVar15 = (undefined4 *)&DAT_00000054;
    }
    *puVar15 = 2;
    pFVar16 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar17 = FText::FromString(&local_6e8,&local_880);
    FText::FText(&local_718.Value,pFVar17);
    local_718.bIsSet = true;
    local_718.Getter._16_8_ = 0;
    local_718.Getter._0_8_ = 0;
    local_718.Getter._8_8_ = 0;
    pFVar16 = STextBlock::FArguments::Text(pFVar16,&local_718);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_698,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STileView.h"
               ,0xd8,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_698,(TSharedRef<STextBlock,1> *)(local_680 + 8),pFVar16);
    this_03 = (FSlotBase *)&this->field_0x238;
    pTVar24 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar18->Object;
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar23 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
    }
    else {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar23 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this_03->Widget).SharedReferenceCount.ReferenceController;
    (this_03->Widget).Object = (SWidget *)pSVar6;
    (this_03->Widget).SharedReferenceCount.ReferenceController = pTVar24;
    local_860 = pSVar6;
    pTStack_858 = pTVar24;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned(this_03);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_670);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_698._Widget.SharedReferenceCount.ReferenceController);
    if (local_6e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_6e8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNumItemsBeingObserved @ 142811970

int __thiscall
STileView<TSharedPtr<SWidget,1>_>::GetNumItemsBeingObserved(STileView<TSharedPtr<SWidget,1>_> *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong uStack_10;
  
  plVar1 = *(longlong **)&this->field_0x9f8;
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
    puVar4 = &local_18;
    uStack_10 = uStack_10 & 0xffffffff00000000;
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 8))(plVar1,&local_18);
  }
  local_18 = *puVar4;
  uStack_10 = puVar4[1];
  iVar3 = (**(code **)(*(longlong *)this + 0x270))(this);
  iVar2 = (int)uStack_10;
  if (0 < iVar3) {
    iVar5 = iVar3 - (int)((longlong)
                          ((ulonglong)(uint)(iVar2 >> 0x1f) << 0x20 | uStack_10 & 0xffffffff) %
                         (longlong)iVar3);
    if (iVar3 <= iVar5) {
      iVar5 = 0;
    }
    return iVar2 + iVar5;
  }
  return iVar2;
}

// GetNumItemsPerLine @ 142811a10

/* WARNING: Removing unreachable block (ram,0x000142811ab0) */

int __thiscall
STileView<TSharedPtr<SWidget,1>_>::GetNumItemsPerLine(STileView<TSharedPtr<SWidget,1>_> *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  FDeprecateVector2DParameter local_res8 [4];
  FTableViewDimensions local_38;
  FTableViewDimensions local_28 [2];
  
  local_res8[0] = *(FDeprecateVector2DParameter *)&this->field_0x37c;
  FTableViewDimensions::FTableViewDimensions
            (local_28,*(EOrientation *)&this->field_0x44c,local_res8);
  fVar2 = STableViewBase::GetItemHeight((STableViewBase *)this);
  fVar3 = STableViewBase::GetItemWidth((STableViewBase *)this);
  FTableViewDimensions::FTableViewDimensions
            (&local_38,*(EOrientation *)&this->field_0x44c,fVar3,fVar2);
  if (local_38.LineAxis <= 0.0) {
    return 1;
  }
  iVar1 = (int)ROUND((local_28[0].LineAxis / local_38.LineAxis +
                     local_28[0].LineAxis / local_38.LineAxis) - __real_3f000000) >> 1;
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// OnNavigation @ 14282ac80

FNavigationReply * __thiscall
STileView<TSharedPtr<SWidget,1>_>::OnNavigation
          (STileView<TSharedPtr<SWidget,1>_> *this,FNavigationReply *__return_storage_ptr__,
          FGeometry *param_1,FNavigationEvent *param_2)

{
  EUINavigation EVar1;
  SWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  SWidget *pSVar5;
  int iVar6;
  longlong *plVar7;
  TSharedPtr<SWidget,1> *pTVar8;
  int iVar9;
  SWidget *pSVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 local_48 [8];
  FSharedReferencer<1> FStack_40;
  
  uVar11 = 0;
  plVar7 = *(longlong **)&this->field_0x9f8;
  if (((plVar7 == (longlong *)0x0) || (this->field_0x99e == '\0')) ||
     ((this->field_0x99d == '\0' && (param_2->NavigationGenesis == Controller))))
  goto LAB_14282ad74;
  plVar7 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,local_48);
  pSVar5 = (SWidget *)*plVar7;
  pTVar3 = (TReferenceControllerBase<1> *)plVar7[1];
  local_48 = (undefined1  [8])pSVar5;
  FStack_40.ReferenceController = pTVar3;
  iVar6 = (**(code **)(*(longlong *)this + 0x270))(this);
  pSVar2 = *(SWidget **)&this->field_0x858;
  iVar12 = (int)pTVar3;
  if (pSVar2 != (SWidget *)0x0) {
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x860;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (pSVar10 = pSVar5; pSVar10 != (SWidget *)(&pSVar5->_padding_ + (longlong)iVar12 * 2);
        pSVar10 = (SWidget *)&pSVar10->_padding_) {
      if ((SWidget *)pSVar10->_padding_ == pSVar2) {
        uVar11 = (longlong)pSVar10 - (longlong)pSVar5 >> 4;
        goto LAB_14282ad53;
      }
    }
    uVar11 = 0xffffffff;
LAB_14282ad53:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  EVar1 = param_2->NavigationType;
  iVar9 = (int)uVar11;
  if (*(int *)&this->field_0x44c == 1) {
    if (EVar1 != Left) {
      if (EVar1 != Right) goto LAB_14282ad74;
      goto LAB_14282adcf;
    }
LAB_14282adb3:
    if ((this->bWrapHorizontalNavigation == false) &&
       ((int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6) < 1)) goto LAB_14282ad74;
    iVar9 = iVar9 + -1;
  }
  else {
    if (*(int *)&this->field_0x44c != 0) goto LAB_14282ad74;
    if (EVar1 == Up) goto LAB_14282adb3;
    if (EVar1 != Down) goto LAB_14282ad74;
LAB_14282adcf:
    if ((this->bWrapHorizontalNavigation == false) &&
       (iVar6 + -1 <=
        (int)((longlong)((ulonglong)(uint)(iVar9 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) %
             (longlong)iVar6))) goto LAB_14282ad74;
    iVar9 = iVar9 + 1;
  }
  if (((-1 < iVar9) && (iVar9 < iVar12)) && (this->field_0x449 != '\0')) {
    pcVar4 = *(code **)(*(longlong *)this + 0x2e0);
    pTVar8 = TArrayView<TSharedPtr<SWidget,1>_const_,int>::operator[]
                       ((TArrayView<TSharedPtr<SWidget,1>_const_,int> *)local_48,iVar9);
    (*pcVar4)(this,pTVar8,param_2);
    local_48 = (undefined1  [8])0x0;
    FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FNavigationReply::Explicit(__return_storage_ptr__,(TSharedPtr<SWidget,1> *)local_48);
    return __return_storage_ptr__;
  }
LAB_14282ad74:
  SListView<TSharedPtr<SWidget,1>_>::OnNavigation
            ((SListView<TSharedPtr<SWidget,1>_> *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// ReGenerateItems @ 142830120

FReGenerateResults * __thiscall
STileView<TSharedPtr<SWidget,1>_>::ReGenerateItems
          (STileView<TSharedPtr<SWidget,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  FReGenerateResults *pFVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  TSharedPtr<SWidget,1> *pTVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  double dVar25;
  FDeprecateSlateVector2D local_118;
  FWidgetGenerator *local_110;
  FTableViewDimensions local_108;
  FTableViewDimensions local_f8;
  FTableViewDimensions local_e8;
  longlong local_d8;
  undefined4 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [128];
  
  STableViewBase::ClearWidgets((STableViewBase *)this);
  plVar13 = *(longlong **)&this->field_0x9f8;
  bVar10 = false;
  if (plVar13 == (longlong *)0x0) {
    local_d8 = 0;
    plVar13 = &local_d8;
    uStack_d0 = 0;
  }
  else {
    plVar13 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13,local_b8);
  }
  local_c8 = *plVar13;
  lStack_c0 = plVar13[1];
  uVar1 = plVar13[1];
  iVar18 = (int)uVar1;
  if (iVar18 < 1) {
    __return_storage_ptr__->NewScrollOffset = 0.0;
    __return_storage_ptr__->LengthOfGeneratedItems = 0.0;
    __return_storage_ptr__->ExactNumLinesOnScreen = 0.0;
    __return_storage_ptr__->bGeneratedPastLastItem = false;
  }
  else {
    fVar21 = STableViewBase::GetItemHeight((STableViewBase *)this);
    fVar22 = STableViewBase::GetItemWidth((STableViewBase *)this);
    FTableViewDimensions::FTableViewDimensions
              (&local_e8,*(EOrientation *)&this->field_0x44c,fVar22,fVar21);
    local_118 = param_1->Size;
    FTableViewDimensions::FTableViewDimensions
              (&local_f8,*(EOrientation *)&this->field_0x44c,
               (FDeprecateVector2DParameter *)&local_118);
    iVar11 = (**(code **)(*(longlong *)this + 0x270))(this);
    fVar21 = param_1->Scale;
    dVar4 = 0.0;
    iVar16 = (int)((longlong)((ulonglong)(uint)(iVar18 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) %
                  (longlong)iVar11);
    iVar15 = iVar18;
    if (iVar16 != 0) {
      iVar15 = (iVar18 - iVar16) + iVar11;
    }
    dVar25 = (double)iVar15 - (double)(local_f8.ScrollAxis / local_e8.ScrollAxis) * (double)iVar11;
    if (*(double *)&this->field_0x330 <= dVar25) {
      dVar25 = *(double *)&this->field_0x330;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    FTableViewDimensions::FTableViewDimensions(&local_108,*(EOrientation *)&this->field_0x44c);
    local_110 = (FWidgetGenerator *)&this->field_0x590;
    dVar5 = dVar25 / (double)iVar11;
    uVar20 = ((int)ROUND((dVar5 + dVar5) - __real_3fe0000000000000) >> 1) * iVar11;
    if ((int)uVar20 < 0) {
      uVar20 = 0;
    }
    SListView<TSharedPtr<SWidget,1>_>::FWidgetGenerator::OnBeginGenerationPass(local_110);
    fVar8 = __real_3a83126f;
    fVar22 = __real_3f800000;
    bVar7 = true;
    bVar6 = true;
    bVar9 = false;
    uVar17 = uVar20;
    do {
      if (iVar18 <= (int)uVar17) break;
      uVar12 = 0;
      if ((int)uVar17 < iVar18) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          pFVar14 = (FReGenerateResults *)(*pcVar2)();
          return pFVar14;
        }
      }
      pTVar19 = (TSharedPtr<SWidget,1> *)((longlong)(int)uVar17 * 0x10 + local_c8);
      if (bVar7) {
        bVar7 = false;
        fVar23 = fVar22;
        if (bVar6) {
          bVar6 = false;
          dVar3 = (double)trunc(SUB84(dVar5,0));
          fVar23 = fVar22 - (float)(dVar5 - dVar3);
        }
        local_108.ScrollAxis = fVar23 * local_e8.ScrollAxis + local_108.ScrollAxis;
        if ((local_f8.ScrollAxis < local_108.ScrollAxis) &&
           (fVar23 = fVar22 - (local_108.ScrollAxis - local_f8.ScrollAxis) / local_e8.ScrollAxis,
           fVar23 <= 0.0)) {
          fVar23 = 0.0;
        }
        dVar4 = dVar4 + (double)fVar23;
      }
      SListView<TSharedPtr<SWidget,1>_>::GenerateWidgetForItem
                ((SListView<TSharedPtr<SWidget,1>_> *)this,pTVar19,uVar17,uVar20,fVar21);
      local_108.LineAxis = local_108.LineAxis + local_e8.LineAxis;
      bVar9 = iVar18 + -1 <= (int)uVar17;
      if (local_f8.LineAxis < local_108.LineAxis + local_e8.LineAxis) {
        local_108.LineAxis = 0.0;
        bVar7 = true;
      }
      if ((iVar18 + -1 <= (int)uVar17) || (bVar7)) {
        bVar10 = local_f8.ScrollAxis + fVar8 < local_108.ScrollAxis;
      }
      uVar17 = uVar17 + 1;
    } while (!bVar10);
    SListView<TSharedPtr<SWidget,1>_>::FWidgetGenerator::ProcessItemCleanUp(local_110);
    SListView<TSharedPtr<SWidget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(local_110);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar4;
    auVar24 = roundpd(auVar24,auVar24,2);
    if ((!bVar9) || (bVar10)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    __return_storage_ptr__->bGeneratedPastLastItem = bVar10;
    __return_storage_ptr__->NewScrollOffset = dVar25;
    __return_storage_ptr__->ExactNumLinesOnScreen = dVar4;
    __return_storage_ptr__->LengthOfGeneratedItems =
         (double)(float)((double)local_e8.ScrollAxis * auVar24._0_8_);
  }
  return __return_storage_ptr__;
}

// ScrollBy @ 142833960

float __thiscall
STileView<TSharedPtr<SWidget,1>_>::ScrollBy
          (STileView<TSharedPtr<SWidget,1>_> *this,FGeometry *param_1,float param_2,
          EAllowOverscroll param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FTableViewDimensions local_38 [4];
  
  if ((*(double *)&this->field_0x338 == 0.0) && (this->field_0x378 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_3 != Yes) goto LAB_1428339f9;
  if (((*(double *)&this->field_0x338 == 0.0) && (param_2 < 0.0)) ||
     ((this->field_0x378 != '\0' && (0.0 < param_2)))) {
LAB_142833a68:
    iVar2 = (**(code **)(*(longlong *)this + 0x270))();
    fVar3 = FOverscroll::ScrollBy((FOverscroll *)&this->field_0x544,param_1,param_2 / (float)iVar2);
    if (fVar3 != 0.0) {
      (**(code **)(*(longlong *)this + 0x248))(this);
    }
  }
  else {
    if (*(float *)&this->field_0x544 <= 0.0) {
      if ((*(float *)&this->field_0x544 < 0.0) && (0.0 < param_2)) goto LAB_142833a68;
    }
    else if (param_2 < 0.0) goto LAB_142833a68;
LAB_1428339f9:
    if (bVar1) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = STableViewBase::GetItemHeight((STableViewBase *)this);
      fVar4 = STableViewBase::GetItemWidth((STableViewBase *)this);
      FTableViewDimensions::FTableViewDimensions
                (local_38,*(EOrientation *)&this->field_0x44c,fVar4,fVar3);
      iVar2 = (**(code **)(*(longlong *)this + 0x270))(this);
      fVar3 = (float)(**(code **)(*(longlong *)this + 0x260))
                               (this,(float)((double)(((float)iVar2 * param_2) /
                                                     local_38[0].ScrollAxis) +
                                            *(double *)&this->field_0x338));
    }
  }
  return fVar3;
}

// ScrollIntoView @ 142834390

EScrollIntoViewResult __thiscall
STileView<TSharedPtr<SWidget,1>_>::ScrollIntoView
          (STileView<TSharedPtr<SWidget,1>_> *this,FGeometry *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  float fVar7;
  bool bVar8;
  EScrollIntoViewResult EVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  FTableViewDimensions *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  int iVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  FDeprecateSlateVector2D local_res8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  longlong local_c8;
  FSharedReferencer<1> aFStack_c0 [21];
  
  puVar1 = &this->field_0x8d0;
  if ((*(longlong *)puVar1 != 0) &&
     (plVar12 = *(longlong **)&this->field_0x9f8, plVar12 != (longlong *)0x0)) {
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 8))(plVar12,local_d8);
    pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8d8;
    lVar2 = *(longlong *)puVar1;
    plVar12 = (longlong *)*puVar11;
    uVar4 = puVar11[1];
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    for (plVar16 = plVar12; plVar16 != plVar12 + (longlong)(int)uVar4 * 2; plVar16 = plVar16 + 2) {
      if (*plVar16 == lVar2) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        iVar15 = (int)((longlong)plVar16 - (longlong)plVar12 >> 4);
        if (iVar15 == -1) goto LAB_14283444a;
        local_res8 = param_1->Size;
        fVar17 = STableViewBase::GetItemHeight((STableViewBase *)this);
        fVar18 = STableViewBase::GetItemWidth((STableViewBase *)this);
        FTableViewDimensions::FTableViewDimensions
                  ((FTableViewDimensions *)local_e8,*(EOrientation *)&this->field_0x44c,fVar18,
                   fVar17);
        pFVar13 = FTableViewDimensions::FTableViewDimensions
                            ((FTableViewDimensions *)local_d8,*(EOrientation *)&this->field_0x44c,
                             (FDeprecateVector2DParameter *)&local_res8);
        fVar7 = __real_3f800000;
        fVar26 = __real_3f800000 / (float)local_e8._4_4_;
        fVar17 = pFVar13->ScrollAxis;
        fVar27 = fVar17 * fVar26;
        fVar19 = (float)(**(code **)(*(longlong *)this + 0x268))(this);
        fVar18 = 0.0;
        if (((fVar19 == 0.0) &&
            (bVar8 = STableViewBase::IsPendingRefresh((STableViewBase *)this), bVar8)) &&
           (*(double *)&this->field_0x368 == 0.0)) {
          return Deferred;
        }
        STableViewBase::EndInertialScrolling((STableViewBase *)this,false);
        iVar10 = (**(code **)(*(longlong *)this + 0x270))(this);
        dVar6 = (double)iVar10;
        dVar20 = STableViewBase::GetTargetScrollOffset((STableViewBase *)this);
        fVar19 = (float)iVar15;
        dVar20 = dVar20 / dVar6;
        fVar28 = (float)iVar10;
        auVar23._0_8_ = __real_bfe0000000000000 - (dVar20 + dVar20);
        auVar23._8_8_ = 0;
        iVar15 = (int)ROUND((fVar19 + fVar19) / fVar28 - __real_3f000000) >> 1;
        dVar25 = (double)fVar27 + dVar20;
        auVar24._0_8_ =
             (double)(((int)ROUND(auVar23._0_8_) >> 1) +
                     ((int)ROUND((dVar25 + dVar25) - __real_3fe0000000000000) >> 1)) + dVar20;
        auVar24._8_8_ = 0;
        if (this->field_0x9a2 == '\0') {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar22,2);
          auVar24 = roundpd(auVar23,auVar24,1);
          dVar25 = auVar24._0_8_;
        }
        else {
          auVar24 = roundpd(auVar23,auVar24,2);
          dVar25 = auVar24._0_8_;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar20;
          auVar22 = roundpd(in_XMM1,auVar5,1);
        }
        dVar20 = (double)iVar15;
        dVar21 = auVar22._0_8_;
        if ((dVar20 < dVar21) || (dVar25 < dVar20)) {
          if ((dVar20 < dVar21 - __real_3ff0000000000000) ||
             (dVar25 + __real_3ff0000000000000 < dVar20)) {
            fVar18 = ((float)iVar15 - fVar27 * __real_3f000000) + __real_3f000000;
          }
          else {
            fVar18 = (float)iVar15;
            if (dVar20 != dVar21 - __real_3ff0000000000000) {
              if (this->field_0x318 == '\0') {
                fVar18 = (fVar18 - fVar27) + fVar7 + *(float *)&this->field_0x998;
              }
              else {
                fVar18 = fVar18 - ((float)((int)ROUND((fVar26 + fVar26) * fVar17 - __real_3f000000)
                                          >> 1) - fVar7);
              }
            }
          }
          iVar15 = (**(code **)(*(longlong *)this + 0x2a0))(this);
          dVar20 = (double)iVar15 - (double)fVar27 * dVar6;
          if ((double)fVar18 * dVar6 <= dVar20) {
            dVar20 = (double)fVar18 * dVar6;
          }
          if (dVar20 <= 0.0) {
            dVar20 = 0.0;
          }
          fVar18 = (float)dVar20;
LAB_14283480a:
          STableViewBase::SetScrollOffset((STableViewBase *)this,fVar18);
        }
        else {
          if (dVar20 == dVar21) {
            if ((this->field_0x318 == '\0') || (iVar15 < 1)) {
              fVar18 = *(float *)&this->field_0x998;
            }
            fVar18 = (float)(iVar15 * iVar10) - fVar18;
            goto LAB_14283480a;
          }
          if (dVar20 == dVar25) {
            if (this->field_0x318 == '\0') {
              fVar18 = (((float)iVar15 - fVar27) + fVar7 + *(float *)&this->field_0x998) * fVar28;
            }
            else {
              auVar24 = roundps(auVar22,ZEXT416((uint)fVar27),1);
              fVar18 = (((float)iVar15 - auVar24._0_4_) + fVar7) * fVar28;
            }
            goto LAB_14283480a;
          }
        }
        (**(code **)(*(longlong *)this + 0x248))(this);
        lVar2 = *(longlong *)&this->field_0x8d8;
        uVar4 = *(undefined8 *)puVar1;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
        }
        pTVar14 = *(TReferenceControllerBase<1> **)&this->field_0x8f0;
        *(undefined8 *)&this->field_0x8e8 = uVar4;
        *(longlong *)&this->field_0x8f0 = lVar2;
        break;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
LAB_14283444a:
    local_c8 = 0;
    aFStack_c0[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((longlong *)puVar1 != &local_c8) {
      *(undefined8 *)puVar1 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0x8d8,aFStack_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (aFStack_c0[0].ReferenceController);
  }
  local_d8._0_8_ = *(undefined8 *)&this->field_0x8e8;
  if ((local_d8._0_8_ == 0) || (this->field_0x320 == '\0')) {
    EVar9 = Success;
  }
  else {
    pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0xd8);
    local_d8._8_8_ = *(undefined8 *)&this->field_0x8f0;
    if ((TReferenceControllerBase<1> *)local_d8._8_8_ != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      ((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount =
           (atomic<int>)
           ((int)((TReferenceControllerBase<1> *)local_d8._8_8_)->SharedReferenceCount + 1);
      UNLOCK();
    }
    plVar12 = (longlong *)(*pcVar3)(&this->field_0x588,local_e8,local_d8);
    lVar2 = *plVar12;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_e8._8_8_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d8._8_8_);
    EVar9 = (EScrollIntoViewResult)(lVar2 == 0);
  }
  return EVar9;
}

