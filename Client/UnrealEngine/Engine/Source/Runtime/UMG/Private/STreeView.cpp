// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// ~STreeView<UObject_*> @ 146990330

void __thiscall STreeView<UObject_*>::~STreeView<UObject_*>(STreeView<UObject_*> *this)

{
  void *pvVar1;
  IItemsSource<UObject_*> *pIVar2;
  FScriptContainerElement *pFVar3;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bShouldStackHierarchyHeaders).Getter);
  pvVar1 = *(void **)&(this->bShouldStackHierarchyHeaders).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bShouldStackHierarchyHeaders).Getter);
  pIVar2 = (this->TreeViewSource).Ptr;
  if (pIVar2 != (IItemsSource<UObject_*> *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExpansionChanged);
  pvVar1 = *(void **)&(this->OnExpansionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExpansionChanged);
  pFVar3 = (this->LinearizedItems).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FItemInfo,int>
            ((FItemInfo *)(this->DenseItemInfos).AllocatorInstance.Data,
             (this->DenseItemInfos).ArrayNum);
  pFVar3 = (this->DenseItemInfos).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->SparseItemInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SparseItemInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SparseItemInfos);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSetExpansionRecursive);
  pvVar1 = *(void **)&(this->OnSetExpansionRecursive).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSetExpansionRecursive);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  pvVar1 = *(void **)&(this->OnGetChildren).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetChildren);
  SListView<UObject_*>::~SListView<UObject_*>((SListView<UObject_*> *)this);
  return;
}

// operator() @ 146997a50

void __thiscall
`STreeView<UObject_*>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
          (void *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((-1 < param_2) &&
     (uVar10 = (ulonglong)(uint)param_2, param_2 < *(int *)(*(longlong *)this + 0xa80))) {
    do {
      while( true ) {
        lVar2 = *(longlong *)this;
        uVar9 = (uint)uVar10;
        uVar7 = 0;
        if ((int)uVar9 < *(int *)(lVar2 + 0xa80)) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)(*(longlong *)(lVar2 + 0xa78) + 0x24 + (longlong)(int)uVar9 * 0x28);
        uVar10 = (ulonglong)iVar8;
        if (((iVar8 < 0) || (plVar3 = *(longlong **)((longlong)this + 8), (int)plVar3[1] <= iVar8))
           || (*(int *)((longlong)this + 0x10) <= iVar8)) break;
        if ((iVar8 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (param_1->AllocatorInstance).Data;
        pFVar1 = (FScriptContainerElement *)(*plVar3 + uVar10 * 8);
        if (((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar1;
      }
    } while (iVar8 != -1);
  }
  return;
}

// Construct @ 1469aca70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall STreeView<UObject_*>::Construct(STreeView<UObject_*> *this,FArguments *param_1)

{
  TDelegate<void___cdecl(UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
  *pTVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  IItemsSource<UObject_*> *pIVar5;
  IItemsSource<UObject_*> IVar6;
  FTableViewStyle *pFVar7;
  STextBlock *pSVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<UObject_*>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<UObject_*>_>_>
  TVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  undefined4 *puVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  SScrollBar *this_01;
  TReferenceControllerBase<1> *pTVar20;
  int iVar21;
  FMRSWRecursiveAccessDetector *this_02;
  FSlotBase *this_03;
  undefined1 *puVar22;
  TReferenceControllerBase<1> *pTVar23;
  atomic<int> *paVar24;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_868 [8];
  FDelegateAllocation local_860;
  undefined1 local_850 [8];
  ForAnyElementType local_848;
  int local_840;
  undefined1 local_838 [8];
  ForAnyElementType local_830;
  int local_828;
  FString local_820;
  undefined1 local_810 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_808;
  ForAnyElementType FStack_800;
  ulonglong local_7f8;
  undefined1 local_7f0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7e8;
  ForAnyElementType FStack_7e0;
  ulonglong local_7d8;
  undefined1 local_7d0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7c8;
  ForAnyElementType FStack_7c0;
  ulonglong local_7b8;
  undefined1 local_7b0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7a0;
  ForAnyElementType FStack_798;
  ulonglong local_790;
  SWidget *local_788;
  TReferenceControllerBase<1> *local_780;
  STextBlock *local_778;
  TReferenceControllerBase<1> *pTStack_770;
  TSharedRef<ISlateMetaData,1> local_768;
  TSharedRef<SWidget,1> local_758;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FDestructionSentinel local_6d0;
  FDestructionSentinel local_6b8;
  FDestructionSentinel local_6a0;
  FDelegateAllocation *local_688;
  TAttribute<FText> local_680;
  undefined1 local_650 [16];
  TReferenceControllerBase<1> *local_640;
  FText local_638;
  TSharedRef<SWidget,1> local_628;
  FReadAccessScope local_618;
  FReadAccessScope local_600;
  FReadAccessScope local_5e8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5d0;
  FReadAccessScope local_5b8;
  FArguments local_5a0;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x758,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(UObject_*,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x770,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x788,
             &param_1->_OnRefreshRow);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7d0,&param_1->_OnRowReleased);
  TDelegate<void___cdecl(UObject_*,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<void___cdecl(UObject_*,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x7e8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x800,
             &param_1->_OnFinishedScrolling);
  this_00 = &this->OnGetChildren;
  if (&param_1->_OnGetChildren != this_00) {
    local_850 = (undefined1  [8])0x0;
    local_848.Data = (FScriptContainerElement *)0x0;
    local_840 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetChildren,
               &local_5b8);
    if ((*(int *)&(param_1->_OnGetChildren).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_850);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_850);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_850,
               (FWriteAccessScope *)&local_748);
    if ((local_840 != 0) && (local_848.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_848.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_848,0,0,0x10);
      local_840 = 0;
    }
    if (local_748.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
    }
    if (local_848.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_848.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_850);
  }
  TDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSetExpansionRecursive,&param_1->_OnSetExpansionRecursive);
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_758);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar12->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_758.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_758.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_788 = pSVar4;
  local_780 = pTVar3;
  TVar13 = FArguments::MakeTreeItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_650);
  pTVar1 = &this->TreeViewSource;
  if ((IItemsSource<UObject_*> *)pTVar1 != TVar13.Ptr) {
    pIVar5 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<UObject_*> *)*TVar13.Ptr;
    *TVar13.Ptr = (IItemsSource<UObject_*>)0x0;
    if (pIVar5 != (IItemsSource<UObject_*> *)0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
  }
  (**(code **)(*(longlong *)this + 0x248))(this);
  IVar6 = *TVar13.Ptr;
  if (IVar6 != (IItemsSource<UObject_*>)0x0) {
    (*(code *)**(undefined8 **)IVar6)(IVar6,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x950,&param_1->_OnKeyDownHandler);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x920,
             &param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x938,
             &param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::operator=
            (&this->field_0x8f0,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(UObject_*,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExpansionChanged,&param_1->_OnExpansionChanged);
  TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)&this->field_0x908,
             &param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x98c = param_1->_ClearSelectionOnClick;
  this->field_0x549 = param_1->_ConsumeMouseWheel;
  this->field_0x548 = param_1->_AllowOverscroll;
  *(float *)&this->field_0x444 = param_1->_WheelScrollMultiplier;
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
             &param_1->_OnItemToString_Debug,&local_618);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_1469aceaa:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_618);
    local_868 = (undefined1  [8])0x0;
    local_860.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_860.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_868,
               (FWriteAccessScope *)&local_6a0);
    local_688 = &local_860;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,&local_860);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar14[3] = TListTypeTraits<UObject_*,void>::DebugDump;
    }
    if (local_6a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a0.Accessor,&local_6a0);
    }
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
               &this->field_0x7a0,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_868);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_868,
               (FWriteAccessScope *)&local_718);
    if ((local_860.DelegateSize != 0) &&
       (local_860.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_860.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_860,0,0,0x10);
      local_860.DelegateSize = 0;
    }
    if (local_718.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
    }
    if (local_860.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_860.DelegateAllocator);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_868;
  }
  else {
    cVar10 = (**(code **)(*plVar2 + 0x38))();
    if (cVar10 == '\0') goto LAB_1469aceaa;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_618);
    local_838 = (undefined1  [8])0x0;
    local_830.Data = (FScriptContainerElement *)0x0;
    local_828 = 0;
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_838,
               &param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)
               &this->field_0x7a0,
               (TDelegate<FString___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_838);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_838,
               (FWriteAccessScope *)&local_730);
    if ((local_828 != 0) && (local_830.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_830.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_830,0,0,0x10);
      local_828 = 0;
    }
    if (local_730.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
    }
    if (local_830.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_830.Data);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_838;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_02);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7b8,
             &param_1->_OnEnteredBadState);
  this->field_0x98d = param_1->_HandleGamepadEvents;
  this->field_0x98e = param_1->_HandleDirectionalNavigation;
  this->bAllowInvisibleItemSelection = param_1->_AllowInvisibleItemSelection;
  this->bHighlightParentNodesForSelection = param_1->_HighlightParentNodesForSelection;
  this->field_0x990 = param_1->_ReturnFocusToSelection;
  TAttribute<bool>::operator=
            (&this->bShouldStackHierarchyHeaders,&param_1->_ShouldStackHierarchyHeaders);
  pFVar7 = param_1->_TreeViewStyle;
  this->Style = pFVar7;
  if (pFVar7 == (FTableViewStyle *)0x0) {
    local_7b0._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_7b0._0_8_ = &pFVar7->BackgroundBrush;
  }
  local_7b0[8] = true;
  local_790 = 0;
  local_7a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_798.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_7b0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7a0,(FWriteAccessScope *)&local_700);
  if (((int)local_790 != 0) && (FStack_798.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_798.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_798,0,0,0x10);
    local_790 = local_790 & 0xffffffff00000000;
  }
  if (local_700.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
  }
  if (FStack_798.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_798.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7a0.AccessDetector);
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9a0,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9c0,&param_1->_MaxPinnedItems);
  local_820.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_820.Data.ArrayNum = 0;
  local_820.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x758,&local_600
            );
  if ((*(int *)&this->field_0x768 == 0) || (*(longlong **)&this->field_0x760 == (longlong *)0x0)) {
LAB_1469ad171:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_600);
    ::FString::AppendChars(&local_820,L"Please specify an OnGenerateRow. \n",0x22);
  }
  else {
    cVar10 = (**(code **)(**(longlong **)&this->field_0x760 + 0x38))();
    if (cVar10 == '\0') goto LAB_1469ad171;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_600);
  }
  if (pTVar1->Ptr == (IItemsSource<UObject_*> *)0x0) {
    ::FString::AppendChars(&local_820,L"Please specify a TreeItemsSource. \n",0x23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_5e8);
  if ((*(int *)&(this->OnGetChildren).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar10 = (**(code **)(*plVar2 + 0x38))();
    if (cVar10 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5e8);
      goto LAB_1469ad207;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5e8);
  ::FString::AppendChars(&local_820,L"Please specify an OnGetChildren. \n",0x22);
LAB_1469ad207:
  iVar21 = local_820.Data.ArrayNum + -1;
  if (local_820.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if (iVar21 < 1) {
    local_7d0[0] = LeftAligned;
    local_7d0[1] = true;
    local_7f0._0_4_ = 0.0;
    local_810._0_4_ = 0.0;
    local_7c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7c0.Data = (FScriptContainerElement *)0x0;
    local_7b8 = 0;
    local_7f0[4] = true;
    local_7e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7e0.Data = (FScriptContainerElement *)0x0;
    local_7d8 = 0;
    local_810[4] = true;
    local_808.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_800.Data = (FScriptContainerElement *)0x0;
    local_7f8 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_810,(TAttribute<float> *)local_7f0,
               (TAttribute<EListItemAlignment> *)local_7d0,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,Orient_Vertical,&param_1->_OnTreeViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_808,(FWriteAccessScope *)&local_6e8);
    if (((int)local_7f8 != 0) && (FStack_800.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_800.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_800,0,0,0x10);
      local_7f8 = local_7f8 & 0xffffffff00000000;
    }
    if (local_6e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
    }
    if (FStack_800.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_800.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_808.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7e8,(FWriteAccessScope *)&local_6d0);
    if (((int)local_7d8 != 0) && (FStack_7e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7e0,0,0,0x10);
      local_7d8 = local_7d8 & 0xffffffff00000000;
    }
    if (local_6d0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d0.Accessor,&local_6d0);
    }
    if (FStack_7e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7e8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7c8,(FWriteAccessScope *)&local_6b8);
    if (((int)local_7b8 != 0) && (FStack_7c0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7c0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7c0,0,0,0x10);
      local_7b8 = local_7b8 & 0xffffffff00000000;
    }
    if (local_6b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6b8.Accessor,&local_6b8);
    }
    if (FStack_7c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7c0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7c8.AccessDetector);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      this_01 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(this_01,param_1->_ScrollbarDragFocusCause);
    }
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_628);
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar12->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar24 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar24 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.SharedReferenceCount.ReferenceController);
    pTVar20 = ::operator_new(0x28);
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      local_768.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_768.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar20->SharedReferenceCount = (atomic<int>)0x1;
      pTVar20->WeakReferenceCount = (atomic<int>)0x1;
      pTVar20->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_PEAVUObject_____00_SharedPointerInternals__6B_
      ;
      if (pSVar4 != (SWidget *)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)&pSVar4[2].PersistentState.IncomingUserIndex;
      }
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        pTVar20[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
        pTVar20[1]._padding_ = (longlong)&___7__TTableViewMetadata_PEAVUObject____6B_;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = (longlong)pTVar3;
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_768.Object = (ISlateMetaData *)(pTVar20 + 1);
      if ((TReferenceControllerBase<1> *)local_768.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar11) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      pTVar23 = pTVar20;
      local_768.SharedReferenceCount.ReferenceController = pTVar20;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_768);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_768.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  else {
    puVar22 = &this->field_0x268;
    *(undefined4 *)puVar22 = 2;
    puVar16 = (undefined4 *)&this->field_0x26c;
    if (puVar22 == (undefined1 *)0x0) {
      puVar16 = (undefined4 *)&DAT_00000054;
    }
    *puVar16 = 2;
    pFVar17 = STextBlock::FArguments::FArguments(&local_5a0);
    pFVar18 = FText::FromString(&local_638,&local_820);
    FText::FText(&local_680.Value,pFVar18);
    local_680.bIsSet = true;
    local_680.Getter._16_8_ = 0;
    local_680.Getter._0_8_ = 0;
    local_680.Getter._8_8_ = 0;
    pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_680);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5d0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x151,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5d0,(TSharedRef<STextBlock,1> *)(local_650 + 8),pFVar17);
    this_03 = (FSlotBase *)&this->field_0x238;
    pTVar23 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar19->Object;
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar22 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
    }
    else {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar22 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar3 = (this_03->Widget).SharedReferenceCount.ReferenceController;
    (this_03->Widget).Object = (SWidget *)pSVar8;
    (this_03->Widget).SharedReferenceCount.ReferenceController = pTVar23;
    local_778 = pSVar8;
    pTStack_770 = pTVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned(this_03);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_640);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d0._Widget.SharedReferenceCount.ReferenceController);
    if (local_638.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_638.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a0);
  }
  if (local_820.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_820.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateNewWidget @ 1469cb990

TSharedRef<ITableRow,1> * __thiscall
STreeView<UObject_*>::GenerateNewWidget
          (STreeView<UObject_*> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          UObject *param_1)

{
  SWidget *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  STextBlock *pSVar3;
  code *pcVar4;
  STableRow<UObject_*> *pSVar5;
  char cVar6;
  bool bVar7;
  TSharedRef<SWidget,1> *pTVar8;
  FArguments *pFVar9;
  FArguments *pFVar10;
  FText *pFVar11;
  TSharedRef<STextBlock,1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  TSharedRef<ITableRow,1> *pTVar14;
  FSharedReferencer<1> FVar15;
  TReferenceControllerBase<1> *pTVar16;
  longlong *plVar17;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_9f8 [2];
  FText local_9f0;
  bool local_9e0;
  undefined1 local_9d8 [8];
  ForAnyElementType FStack_9d0;
  ulonglong local_9c8;
  SWidget *local_9c0;
  TReferenceControllerBase<1> *local_9b8;
  SWidget *local_9b0;
  TReferenceControllerBase<1> *pTStack_9a8;
  TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<UObject_*>,1>_&>_>
  local_9a0;
  FName local_988;
  FMemScope local_980;
  FName local_978;
  T1RequiredArgs<TSharedRef<STreeView<UObject_*>,1>_&> local_970;
  FMemScope local_968;
  undefined8 local_960;
  FSharedReferencer<1> local_958;
  TSharedRef<STreeView<UObject_*>,1> local_950;
  TSharedRef<SWidget,1> local_940;
  TSharedRef<STableRow<UObject_*>,1> local_930;
  TSharedRef<STableRow<UObject_*>,1> local_920;
  FDestructionSentinel local_910;
  TSharedRef<SWidget,1> local_8f8;
  TSharedRef<STextBlock,1> local_8e8;
  FText local_8d8;
  FReadAccessScope local_8c8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b0;
  FReadAccessScope local_898;
  FArguments local_880;
  FArguments local_588;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x758,&local_8c8
            );
  if (((*(int *)&this->field_0x768 == 0) || (*(longlong **)&this->field_0x760 == (longlong *)0x0))
     || (cVar6 = (**(code **)(**(longlong **)&this->field_0x760 + 0x38))(), cVar6 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c8);
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_8f8);
    local_950.Object = (STreeView<UObject_*> *)pTVar8->Object;
    local_950.SharedReferenceCount.ReferenceController =
         (pTVar8->SharedReferenceCount).ReferenceController;
    if (local_950.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_950.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_950.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f8.SharedReferenceCount.ReferenceController);
    pFVar9 = STableRow<UObject_*>::FArguments::FArguments(&local_880);
    pFVar10 = STextBlock::FArguments::FArguments(&local_588);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_8d8,L"STreeView",L"BrokenSetupMessage",
                         L"OnGenerateWidget() not assigned.");
    FText::FText(&local_9f0,pFVar11);
    local_9e0 = true;
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    local_9c8 = 0;
    local_9d8 = (undefined1  [8])0x0;
    FStack_9d0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar10->_Text).Value,&local_9f0);
    (pFVar10->_Text).bIsSet = local_9e0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar10->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9d8,
               (FWriteAccessScope *)&local_910);
    if (((int)local_9c8 != 0) && (FStack_9d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_9d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d0,0,0,0x10);
      local_9c8 = local_9c8 & 0xffffffff00000000;
    }
    if (local_910.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
    }
    if (FStack_9d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_9d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9d8);
    if (local_9f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_9f0.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_988 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_980,&local_988,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8b0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x361,local_res8);
    FMemScope::~FMemScope(&local_980);
    FLLMScope::~FLLMScope(local_res20);
    pTVar12 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_8b0,&local_8e8,pFVar10);
    pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar12->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9b0 = (pFVar9->_Content).Widget.Object;
    pTStack_9a8 = (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar9->_Content).Widget.Object = (SWidget *)pSVar3;
    (pFVar9->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9a8)
    ;
    local_970.Arg0 = &local_950;
    FLLMScope::FLLMScope(local_9f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_978 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_968,&local_978,true);
    local_9a0._RequiredArgs = &local_970;
    local_9a0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar13 = ::operator_new(0x408);
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      pTVar13->SharedReferenceCount = (atomic<int>)0x1;
      pTVar13->WeakReferenceCount = (atomic<int>)0x1;
      pTVar13->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__STableRow_PEAVUObject_____00_SharedPointerInternals__6B_
      ;
      STableRow<UObject_*>::STableRow<UObject_*>((STableRow<UObject_*> *)(pTVar13 + 1));
      pTVar16 = pTVar13;
    }
    TSharedRef<STableRow<UObject_*>,1>::TSharedRef<STableRow<UObject_*>,1>
              (&local_930,(STableRow<UObject_*> *)(pTVar16 + 1),pTVar16);
    local_958.ReferenceController = local_930.SharedReferenceCount.ReferenceController;
    if (local_930.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9a0._Widget.Object = local_930.Object;
    local_960 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_9a0._Widget.SharedReferenceCount,&local_958);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_958.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_930.SharedReferenceCount.ReferenceController);
    pSVar5 = local_9a0._Widget.Object;
    if ((local_9a0._Widget.Object == (STableRow<UObject_*> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
      return pTVar14;
    }
    SWidget::SetDebugInfo
              ((SWidget *)&pSVar5->_padding_,"STableRow<ItemType>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x35e,0x3f8);
    FMemScope::~FMemScope(&local_968);
    FLLMScope::~FLLMScope(local_9f8);
    TSlateDecl<STableRow<UObject_*>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<UObject_*>,1>_&>_>
    ::operator<<=(&local_9a0,&local_920,pFVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9a0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0._Widget.SharedReferenceCount.ReferenceController);
    if (local_8d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8d8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
    STableRow<UObject_*>::FArguments::~FArguments(&local_880);
    __return_storage_ptr__->Object = (ITableRow *)local_920.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_920.SharedReferenceCount.ReferenceController;
    if (local_920.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_920.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_920.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_920.SharedReferenceCount.ReferenceController);
    FVar15.ReferenceController = local_950.SharedReferenceCount.ReferenceController;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c8);
    pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_940);
    FVar15.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar8->Object;
    if (FVar15.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_940.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      (FVar15.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_940.SharedReferenceCount.ReferenceController);
      LOCK();
      (FVar15.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar15.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9c0 = pSVar1;
    local_9b8 = FVar15.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x758,
               &local_898);
    if (*(int *)&this->field_0x768 == 0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)&this->field_0x760;
    }
    (**(code **)(*plVar17 + 0x60))(plVar17,__return_storage_ptr__,param_1,&local_9c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_898);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar15.ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 1469ea150

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STreeView<UObject_*>::OnKeyDown
          (STreeView<UObject_*> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  FReply *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  code *pcVar15;
  bool bVar16;
  longlong local_res8;
  longlong local_128;
  FReadAccessScope local_120;
  FReadAccessScope local_108;
  FReply local_e8;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x950,&local_120
            );
  if (((*(int *)&this->field_0x960 == 0) ||
      (plVar9 = *(longlong **)&this->field_0x958, plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar9 + 0x38))(), cVar5 == '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_120);
  if (bVar16) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x950,
               &local_108);
    if (*(int *)&this->field_0x960 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)&this->field_0x958;
    }
    (**(code **)(*plVar9 + 0x60))(plVar9,&local_e8,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_108);
    if ((char)local_e8._padding_ != '\0') {
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    FReply::~FReply(&local_e8);
  }
  if ((*(longlong *)&this->field_0x868 == 0) || ((param_2->_padding_ & 0x30) != 0)) {
LAB_1469ea51f:
    SListView<UObject_*>::OnKeyDown_Internal
              ((SListView<UObject_*> *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar3 = (param_2->Key).KeyName;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar16 = FVar3 == EKeys::Left.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (bVar16) {
      lVar4 = *(longlong *)&this->field_0x868;
      if (lVar4 != 0) {
        pFVar10 = (this->LinearizedItems).AllocatorInstance.Data;
        for (pFVar13 = pFVar10; pFVar13 != pFVar10 + (longlong)(this->LinearizedItems).ArrayNum * 8;
            pFVar13 = pFVar13 + 8) {
          if (*(longlong *)pFVar13 == lVar4) {
            uVar14 = (longlong)pFVar13 - (longlong)pFVar10 >> 3;
            goto LAB_1469ea2c4;
          }
        }
        uVar14 = 0xffffffff;
LAB_1469ea2c4:
        puVar1 = &this->field_0x598;
        local_res8 = lVar4;
        cVar5 = (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1,uVar14 & 0xffffffff);
        if ((cVar5 != '\0') &&
           (cVar5 = (**(code **)(*(longlong *)puVar1 + 0x60))(puVar1,&local_res8), cVar5 != '\0')) {
          (**(code **)(*(longlong *)puVar1 + 0x50))(puVar1,local_res8,0);
          FReply::FReply(__return_storage_ptr__,true);
          return __return_storage_ptr__;
        }
        iVar6 = (**(code **)(*(longlong *)puVar1 + 0x88))(puVar1,uVar14 & 0xffffffff);
        uVar11 = (int)uVar14 - 1;
        if (-1 < (int)uVar11) {
          while( true ) {
            iVar7 = (**(code **)(*(longlong *)puVar1 + 0x88))(puVar1,(ulonglong)uVar11);
            if (iVar7 < iVar6) break;
            uVar11 = uVar11 - 1;
            if ((int)uVar11 < 0) {
              FReply::FReply(__return_storage_ptr__,true);
              return __return_storage_ptr__;
            }
          }
          pcVar15 = *(code **)(*(longlong *)this + 0x2d8);
          uVar12 = 0;
          if ((int)uVar11 < (this->LinearizedItems).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar15 = (code *)swi(3);
            pFVar8 = (FReply *)(*pcVar15)();
            return pFVar8;
          }
          pFVar10 = (this->LinearizedItems).AllocatorInstance.Data + (ulonglong)uVar11 * 8;
LAB_1469ea50b:
          (*pcVar15)(this,pFVar10,param_2);
        }
      }
    }
    else {
      pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
      FVar3 = (param_2->Key).KeyName;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar16 = FVar3 != EKeys::Right.KeyName;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (bVar16) goto LAB_1469ea51f;
      lVar4 = *(longlong *)&this->field_0x868;
      if (lVar4 != 0) {
        pFVar10 = (this->LinearizedItems).AllocatorInstance.Data;
        for (pFVar13 = pFVar10; pFVar13 != pFVar10 + (longlong)(this->LinearizedItems).ArrayNum * 8;
            pFVar13 = pFVar13 + 8) {
          if (*(longlong *)pFVar13 == lVar4) {
            uVar14 = (longlong)pFVar13 - (longlong)pFVar10 >> 3;
            goto LAB_1469ea443;
          }
        }
        uVar14 = 0xffffffff;
LAB_1469ea443:
        puVar1 = &this->field_0x598;
        local_128 = lVar4;
        cVar5 = (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1,uVar14 & 0xffffffff);
        if (cVar5 != '\0') {
          cVar5 = (**(code **)(*(longlong *)puVar1 + 0x60))(puVar1,&local_128);
          if (cVar5 == '\0') {
            (**(code **)(*(longlong *)puVar1 + 0x50))(puVar1,local_128,1);
            FReply::FReply(__return_storage_ptr__,true);
            return __return_storage_ptr__;
          }
          iVar6 = (this->LinearizedItems).ArrayNum;
          if ((int)uVar14 < iVar6 + -1) {
            uVar12 = (int)uVar14 + 1;
            pcVar15 = *(code **)(*(longlong *)this + 0x2d8);
            uVar11 = 0;
            if ((int)uVar12 < iVar6) {
              uVar11 = ~uVar12 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar15 = (code *)swi(3);
              pFVar8 = (FReply *)(*pcVar15)();
              return pFVar8;
            }
            pFVar10 = (this->LinearizedItems).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
            goto LAB_1469ea50b;
          }
        }
      }
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// PopulateLinearizedItems @ 1469f3430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
STreeView<UObject_*>::PopulateLinearizedItems
          (STreeView<UObject_*> *this,TArrayView<UObject_*_const,int> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FItemInfo,TSizedDefaultAllocator<32>_> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_5,TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
                   *param_6,bool param_7,int param_8)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  UObject *pUVar4;
  undefined1 *puVar5;
  FScriptContainerElement *pFVar6;
  FItemInfo *pFVar7;
  code *pcVar8;
  byte bVar9;
  STreeView<UObject_*> *pSVar10;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar11;
  TDelegate<void___cdecl(UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *pTVar12;
  TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  Type *pTVar21;
  uint uVar22;
  longlong *plVar23;
  ForElementType<unsigned_int> FVar24;
  char *pcVar25;
  ForElementType<unsigned_int> FVar26;
  uint uVar27;
  undefined1 *puVar28;
  char cVar29;
  int iVar30;
  char cVar31;
  bool bVar32;
  undefined1 auStackY_1d8 [32];
  bool local_188;
  char local_184;
  undefined1 local_183;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_180;
  uint local_178;
  longlong local_170;
  TArrayView<UObject_*_const,int> *local_168;
  int local_160;
  STreeView<UObject_*> *local_158;
  UObject **local_150;
  undefined8 local_148;
  TBitArray<FDefaultBitArrayAllocator> local_140;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_120;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *local_118;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  undefined1 local_f0 [8];
  TDelegate<void___cdecl(UObject_*,TArray<UObject_*,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *local_e8;
  longlong local_e0;
  UObject *local_d8;
  TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_d0;
  UObject **local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  char *local_b0;
  TArrayView<UObject_*_const,int> local_a8;
  FReadAccessScope local_98;
  FItemInfo local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_120 = param_5;
  local_d0 = (TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)param_6;
  bVar32 = -1 < CpuChannel->Enabled;
  local_180 = param_2;
  local_168 = param_1;
  local_158 = this;
  local_118 = param_3;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_STreeView<UObject*___ptr64>::PopulateLinearizedItems(TArrayView<UObject*___ptr64_const,int>,TArray<UObject*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>&___ptr64,TMap<UObject*___ptr64,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*___ptr64,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId674,"STreeView::PopulateLinearizedItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x2a2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_STreeView<UObject*___ptr64>::PopulateLinearizedItems(TArrayView<UObject*___ptr64_const,int>,TArray<UObject*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>&___ptr64,TMap<UObject*___ptr64,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*___ptr64,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
               ::__l2::__CpuProfilerEventSpecId674);
  }
  iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_4,1);
  FVar26 = (param_4->AllocatorInstance).SecondaryData;
  FVar24 = (ForElementType<unsigned_int>)param_4;
  if (FVar26 != (ForElementType<unsigned_int>)0x0) {
    FVar24 = FVar26;
  }
  uVar27 = iVar17 >> 0x1f & 0x1f;
  iVar17 = iVar17 + uVar27;
  bVar13 = false;
  local_188 = false;
  puVar1 = (uint *)((longlong)FVar24 + (longlong)(iVar17 >> 5) * 4);
  iVar30 = param_1->ArrayNum;
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar17 & 0x1f) - (char)uVar27 & 0x1f));
  uVar27 = 0;
  local_160 = param_4->NumBits + -1;
  if (0 < iVar30) {
    local_170 = 0;
    bVar9 = (byte)local_160 & 0x1f;
    local_178 = 1 << bVar9 | 1U >> 0x20 - bVar9;
    local_e8 = &this->OnGetChildren;
    local_e0 = (longlong)((int)(local_160 + (local_160 >> 0x1f & 0x1fU)) >> 5) * 4;
    do {
      lVar3 = local_170;
      uVar22 = 0;
      if ((int)uVar27 < iVar30) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      local_150 = (UObject **)0x0;
      local_148 = 0;
      pFVar2 = (FScriptContainerElement *)(param_1->DataPtr + lVar3);
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_bool___cdecl_STreeView<UObject*___ptr64>::PopulateLinearizedItems(TArrayView<UObject*___ptr64_const,int>,TArray<UObject*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>&___ptr64,TMap<UObject*___ptr64,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*___ptr64,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId687,"STreeView_GetChildren",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
                   ,0x2af);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_STreeView<UObject*___ptr64>::PopulateLinearizedItems(TArrayView<UObject*___ptr64_const,int>,TArray<UObject*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>&___ptr64,TMap<UObject*___ptr64,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject*___ptr64,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                   ::__l5::__CpuProfilerEventSpecId687);
      }
      lVar3 = local_170;
      uVar22 = 0;
      if ((int)uVar27 < iVar30) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      pTVar12 = local_e8;
      pUVar4 = local_168->DataPtr[lVar3];
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,&local_98);
      if (*(int *)&pTVar12->field_0x10 == 0) {
        plVar23 = (longlong *)0x0;
      }
      else {
        plVar23 = *(longlong **)&pTVar12->field_0x8;
      }
      (**(code **)(*plVar23 + 0x60))(plVar23,pUVar4,&local_150);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      iVar17 = (int)local_148;
      if (((local_160 < 0) || (param_4->NumBits <= local_160)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar14 = (*pcVar8)();
        return (bool)uVar14;
      }
      FVar26 = (param_4->AllocatorInstance).SecondaryData;
      FVar24 = (ForElementType<unsigned_int>)param_4;
      if (FVar26 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = FVar26;
      }
      uVar22 = *(uint *)(local_e0 + (longlong)FVar24);
      if (uVar27 == iVar30 - 1U) {
        uVar22 = uVar22 & ~local_178;
      }
      else {
        uVar22 = uVar22 | local_178;
      }
      *(uint *)(local_e0 + (longlong)FVar24) = uVar22;
      pUVar4 = *(UObject **)pFVar2;
      uVar22 = ((uint)((ulonglong)pUVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar4 >> 4)) *
               -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      if (*(int *)&(local_158->SparseItemInfos).field_0x8 !=
          *(int *)&(local_158->SparseItemInfos).field_0x34) {
        puVar5 = *(undefined1 **)&(local_158->SparseItemInfos).field_0x40;
        puVar28 = &(local_158->SparseItemInfos).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar28 = puVar5;
        }
        iVar18 = *(int *)(puVar28 +
                         (ulonglong)
                         (*(int *)&(local_158->SparseItemInfos).field_0x48 - 1U &
                         (uVar22 >> 0x10 ^ uVar22)) * 4);
        if (iVar18 != -1) {
          do {
            lVar3 = *(longlong *)&local_158->SparseItemInfos + (longlong)iVar18 * 0x18;
            if (*(UObject **)(*(longlong *)&local_158->SparseItemInfos + (longlong)iVar18 * 0x18) ==
                pUVar4) {
              pcVar25 = (char *)(lVar3 + 8);
              if (lVar3 == 0) {
                pcVar25 = (char *)0x0;
              }
              if (pcVar25 != (char *)0x0) {
                cVar29 = pcVar25[1];
                cVar31 = *pcVar25;
                goto LAB_1469f37d1;
              }
              break;
            }
            iVar18 = *(int *)(lVar3 + 0x10);
          } while (iVar18 != -1);
        }
      }
      cVar31 = '\0';
      cVar29 = '\0';
LAB_1469f37d1:
      if (param_7) {
        pFVar6 = (local_180->AllocatorInstance).Data;
        if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)local_180->ArrayMax * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        iVar18 = local_180->ArrayNum;
        if (iVar18 == local_180->ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_180->AllocatorInstance,&local_180->ArrayMax);
        }
        local_180->ArrayNum = iVar18 + 1;
        *(UObject **)((local_180->AllocatorInstance).Data + (longlong)iVar18 * 8) =
             *(UObject **)pFVar2;
        local_140.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_140.NumBits = 0;
        local_140.MaxBits = 0;
        uVar22 = param_4->NumBits + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar19 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar19 = uVar22;
          }
          local_140._24_8_ = (ulonglong)uVar19 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_140,0);
        }
        iVar18 = param_4->NumBits;
        local_140.NumBits = iVar18;
        iVar20 = 0;
        if (iVar18 != 0) {
          FVar26 = (param_4->AllocatorInstance).SecondaryData;
          FVar24 = (ForElementType<unsigned_int>)param_4;
          if (FVar26 != (ForElementType<unsigned_int>)0x0) {
            FVar24 = FVar26;
          }
          FVar26 = (ForElementType<unsigned_int>)&local_140;
          if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_140.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar26,(void *)FVar24,(ulonglong)(iVar18 + 0x1fU >> 5) << 2);
          iVar20 = local_140.NumBits;
        }
        local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_80.NeedsVerticalWire.NumBits = 0;
        local_80.NeedsVerticalWire.MaxBits = 0;
        uVar22 = iVar20 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar19 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar19 = uVar22;
          }
          local_80.NeedsVerticalWire._24_8_ = (ulonglong)uVar19 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.NeedsVerticalWire,0);
          iVar20 = local_140.NumBits;
        }
        local_80.NeedsVerticalWire.NumBits = iVar20;
        if (iVar20 != 0) {
          FVar26 = (ForElementType<unsigned_int>)&local_140;
          if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_140.AllocatorInstance.SecondaryData;
          }
          FVar24 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar24,(void *)FVar26,(ulonglong)(iVar20 + 0x1fU >> 5) << 2);
        }
        uVar22 = 0;
        if (uVar27 == iVar30 - 1U) {
          uVar22 = 2;
        }
        local_80.bIsLastChild = uVar22 >> 1;
        local_80.bHasChildren = 0 < iVar17;
        local_80.ParentIndex = param_8;
        if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_140.AllocatorInstance.SecondaryData);
        }
        pTVar11 = local_118;
        pFVar7 = (FItemInfo *)(local_118->AllocatorInstance).Data;
        if (((pFVar7 <= &local_80) && (&local_80 < pFVar7 + local_118->ArrayMax)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        iVar17 = pTVar11->ArrayNum;
        if (iVar17 == pTVar11->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
        }
        pTVar11->ArrayNum = iVar17 + 1;
        FItemInfo::FItemInfo
                  ((FItemInfo *)((pTVar11->AllocatorInstance).Data + (longlong)iVar17 * 0x28),
                   &local_80);
        if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData);
        }
        pSVar10 = local_158;
        pTVar21 = TAttribute<enum_ESelectionMode::Type>::Get(&local_158->field_0x3e8);
        if ((*pTVar21 != None) &&
           (cVar16 = (**(code **)(*(longlong *)&pSVar10->field_0x598 + 0x10))(), cVar16 != '\0')) {
          local_d8 = *(UObject **)pFVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_d8);
          }
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
          Emplace<TObjectPtr<UObject>_>(local_120,(TObjectPtr<UObject> *)local_f0,(bool *)&local_d8)
          ;
        }
      }
      if ((cVar31 != '\0') || (bVar13 = false, cVar29 != '\0')) {
        if ((param_7) && (cVar31 != '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_110.NumBits = 0;
        local_110.MaxBits = 0;
        iVar17 = local_180->ArrayNum;
        uVar22 = param_4->NumBits + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar19 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar19 = uVar22;
          }
          local_110._24_8_ = (ulonglong)uVar19 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_110,0);
        }
        iVar30 = param_4->NumBits;
        local_110.NumBits = iVar30;
        if (iVar30 != 0) {
          FVar26 = (param_4->AllocatorInstance).SecondaryData;
          FVar24 = (ForElementType<unsigned_int>)param_4;
          if (FVar26 != (ForElementType<unsigned_int>)0x0) {
            FVar24 = FVar26;
          }
          FVar26 = (ForElementType<unsigned_int>)&local_110;
          if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar26 = local_110.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar26,(void *)FVar24,(ulonglong)(iVar30 + 0x1fU >> 5) << 2);
        }
        iVar30 = (int)local_148;
        local_c8 = local_150;
        if (((int)local_148 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar14 = (*pcVar8)();
          return (bool)uVar14;
        }
        this_00 = local_d0;
        iStack_c0 = iVar30;
        local_a8._12_4_ = uStack_bc;
        local_a8.ArrayNum = iVar30;
        local_a8.DataPtr = local_c8;
        bVar13 = PopulateLinearizedItems
                           (local_158,&local_a8,local_180,local_118,&local_110,local_120,
                            (TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
                             *)local_d0,bVar13,iVar17 + -1);
        if ((cVar31 != '\0') || (bVar13)) {
          local_b0 = &local_184;
          local_184 = cVar31;
          local_183 = bVar13;
          local_b8 = pFVar2;
          TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
                    (this_00,(TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&> *)
                             (local_f0 + 4),(bool *)&local_b8);
        }
      }
      if (((local_188 == false) && (cVar31 == '\0')) && (bVar13 == false)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (local_150 != (UObject **)0x0) {
        FMemory::Free(local_150);
      }
      uVar27 = uVar27 + 1;
      local_170 = local_170 + 1;
      iVar30 = local_168->ArrayNum;
      param_1 = local_168;
      local_188 = bVar13;
    } while ((int)uVar27 < iVar30);
  }
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FVar26 = (param_4->AllocatorInstance).SecondaryData;
  if (FVar26 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar26);
  }
  return bVar13;
}

// PopulatePinnedItems @ 1469f3cc0

int __thiscall
STreeView<UObject_*>::PopulatePinnedItems
          (STreeView<UObject_*> *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,FReGenerateResults *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_58;
  STreeView<UObject_*> *local_48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_40;
  int local_38;
  
  iVar5 = -1;
  if (param_1->ArrayNum == 0) {
    return -1;
  }
  iVar11 = param_1->ArrayNum + -1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_3->NewScrollOffset;
  auVar13 = roundpd(auVar13,auVar13,1);
  iVar6 = iVar11;
  if ((int)auVar13._0_8_ < iVar11) {
    iVar6 = (int)auVar13._0_8_;
  }
  lVar8 = 0;
  iVar4 = 0;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  local_48 = this;
  local_40 = param_1;
  local_38 = iVar4;
  if ((param_3->bGeneratedPastLastItem != false) && (0.0 < param_3->NewScrollOffset)) {
    piVar7 = TAttribute<int>::Get((TAttribute<int> *)&this->field_0x9a0);
    iVar6 = *piVar7;
    iVar4 = STableViewBase::GetNumPinnedItems((STableViewBase *)this);
    iVar5 = iVar6;
    if (iVar4 < iVar6) {
      iVar5 = STableViewBase::GetNumPinnedItems((STableViewBase *)this);
    }
    iVar12 = 0x7fffffff;
    iVar4 = -1;
    iVar5 = (int)(param_3->NewScrollOffset - (double)iVar5);
    iVar9 = iVar5;
    if (iVar11 < iVar5) {
      return -1;
    }
    do {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      `STreeView<UObject_*>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
                (&local_48,&local_58,iVar9);
      if (((iVar9 - iVar5 <= local_58.ArrayNum) &&
          (iVar1 = (local_58.ArrayNum - iVar9) + iVar5, iVar1 < iVar12)) && (iVar9 - iVar5 <= iVar6)
         ) {
        iVar12 = iVar1;
        iVar4 = iVar9;
      }
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar11);
    if (iVar4 == -1) {
      return -1;
    }
    iVar5 = iVar4 - iVar5;
  }
  `STreeView<UObject_*>::PopulatePinnedItems'::__l2::<lambda_1>::operator()(&local_48,param_2,iVar4)
  ;
  pFVar2 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum / 2;
  if (0 < iVar6) {
    pFVar10 = pFVar2 + (longlong)(param_2->ArrayNum + -1) * 8;
    do {
      uVar3 = *(undefined8 *)(pFVar2 + lVar8 * 8);
      *(undefined8 *)(pFVar2 + lVar8 * 8) = *(undefined8 *)pFVar10;
      lVar8 = lVar8 + 1;
      *(undefined8 *)pFVar10 = uVar3;
      pFVar10 = pFVar10 + -8;
    } while (lVar8 < iVar6);
  }
  return iVar5;
}

// Private_DoesItemHaveChildren @ 1469f4500

bool __thiscall
STreeView<UObject_*>::Private_DoesItemHaveChildren(STreeView<UObject_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x4e8)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x4e8) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(*(byte *)(*(longlong *)&this->field_0x4e0 + 0x20 + (longlong)param_1 * 0x28) & 1);
  }
  return false;
}

// Private_GetNestingDepth @ 1469f4ce0

int __thiscall STreeView<UObject_*>::Private_GetNestingDepth(STreeView<UObject_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x4e8)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x4e8) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)(*(longlong *)&this->field_0x4e0 + 0x18 + (longlong)param_1 * 0x28) + -1;
  }
  return 0;
}

// Private_GetWiresNeededByDepth @ 1469f4e40

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STreeView<UObject_*>::Private_GetWiresNeededByDepth(STreeView<UObject_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x4e8)) {
    uVar3 = 0;
    if (param_1 < *(int *)&this->field_0x4e8) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return (TBitArray<FDefaultBitArrayAllocator> *)
           (*(longlong *)&this->field_0x4e0 + (longlong)param_1 * 0x28);
  }
  pTVar4 = TableViewHelpers::GetEmptyBitArray();
  return pTVar4;
}

// Private_IsItemExpanded @ 1469f4f40

bool __thiscall
STreeView<UObject_*>::Private_IsItemExpanded(STreeView<UObject_*> *this,UObject **param_1)

{
  FSparseItemInfo *pFVar1;
  
  pFVar1 = TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
           ::Find((TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
                   *)&this->field_0x490,*param_1);
  if ((pFVar1 != (FSparseItemInfo *)0x0) && (pFVar1->bIsExpanded != false)) {
    return true;
  }
  return false;
}

// Private_IsLastChild @ 1469f5240

bool __thiscall STreeView<UObject_*>::Private_IsLastChild(STreeView<UObject_*> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x4e8)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x4e8) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)((byte)(*(uint *)(*(longlong *)&this->field_0x4e0 + 0x20 + (longlong)param_1 * 0x28
                                  ) >> 1) & 1);
  }
  return false;
}

// Private_OnExpanderArrowShiftClicked @ 1469f5680

void __thiscall
STreeView<UObject_*>::Private_OnExpanderArrowShiftClicked
          (STreeView<UObject_*> *this,UObject *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x470,&local_28)
  ;
  if (((*(int *)&this->field_0x480 != 0) && (*(longlong **)&this->field_0x478 != (longlong *)0x0))
     && (cVar1 = (**(code **)(**(longlong **)&this->field_0x478 + 0x38))(), cVar1 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x470,
               &local_28);
    if (*(int *)&this->field_0x480 == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)&this->field_0x478;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    (**(code **)(*(longlong *)&this[-1].field_0x558 + 0x248))();
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Private_SetItemExpansion @ 1469f5f20

void __thiscall
STreeView<UObject_*>::Private_SetItemExpansion
          (STreeView<UObject_*> *this,UObject *param_1,bool param_2)

{
  bool bVar1;
  longlong *plVar2;
  FSparseItemInfo *pFVar3;
  TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&> local_res8;
  FMRSWRecursiveAccessDetector local_res18;
  FSparseItemInfo **local_38;
  FMRSWRecursiveAccessDetector *local_30;
  
  local_res8.Value = (FSparseItemInfo *)param_1;
  pFVar3 = TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
           ::Find((TMapBase<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
                   *)&this->field_0x490,param_1);
  local_res18.State._0_1_ = param_2;
  if (pFVar3 == (FSparseItemInfo *)0x0) {
    if (!param_2) {
      return;
    }
    local_38 = &local_res8.Value;
    local_30 = &local_res18;
    local_res18.State._1_1_ = 0;
    TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x490,&local_res8,(bool *)&local_38);
  }
  else {
    bVar1 = pFVar3->bIsExpanded;
    local_res18.State._1_1_ = pFVar3->bHasExpandedChildren;
    local_38 = &local_res8.Value;
    local_30 = &local_res18;
    TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x490,&local_res8,(bool *)&local_38);
    if (bVar1 == param_2) {
      return;
    }
  }
  pFVar3 = local_res8.Value;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x500,
             (FReadAccessScope *)&local_38);
  if ((*(int *)&this->field_0x510 != 0) &&
     (plVar2 = *(longlong **)&this->field_0x508, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pFVar3,param_2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  (**(code **)(*(longlong *)&this[-1].field_0x558 + 0x248))();
  return;
}

// Private_SignalSelectionChanged @ 1469f69c0

void __thiscall
STreeView<UObject_*>::Private_SignalSelectionChanged(STreeView<UObject_*> *this,Type param_1)

{
  bool bVar1;
  char cVar2;
  Type *pTVar3;
  TIterator *pTVar4;
  UObject *pUVar5;
  TIterator local_38;
  
  pTVar3 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].field_0x940);
  if (*pTVar3 == None) goto LAB_1469f6abd;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x358,
             (FReadAccessScope *)&local_38);
  if (((*(int *)&this->field_0x368 == 0) || (*(longlong **)&this->field_0x360 == (longlong *)0x0))
     || (cVar2 = (**(code **)(**(longlong **)&this->field_0x360 + 0x38))(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38);
  if (!bVar1) goto LAB_1469f6abd;
  if (*(int *)&this->field_0x288 - *(int *)&this->field_0x2b4 < 1) {
    pUVar5 = (UObject *)0x0;
LAB_1469f6a8b:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  else {
    pTVar4 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
             TIterator::TIterator
                       (&local_38,
                        (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                         *)&this->field_0x280);
    pUVar5 = *(UObject **)
              (*(longlong *)pTVar4->_padding_ +
              (longlong)*(int *)((longlong)&pTVar4->_padding_ + 4) * 0x10);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      goto LAB_1469f6a8b;
    }
  }
  TDelegate<void___cdecl(UObject_*,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  ExecuteIfBound(&this->field_0x358,pUVar5,param_1);
LAB_1469f6abd:
  if (this->field_0x52a == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001469f6adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0x558 + 0x2e0))(&this[-1].field_0x558);
  return;
}

// Private_UpdateParentHighlights @ 1469f6af0

void __thiscall STreeView<UObject_*>::Private_UpdateParentHighlights(STreeView<UObject_*> *this)

{
  ulonglong uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  (**(code **)(*(longlong *)&this->field_0x598 + 0x80))(&this->field_0x598);
  iVar10 = 0;
  iVar2 = *(int *)&this->field_0x840;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x828;
  iVar11 = 0;
  uVar6 = 1;
  TStack_40.CurrentBitIndex = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&this->field_0x838;
    if (*(uint **)&this->field_0x838 == (uint *)0x0) {
      puVar12 = (uint *)TStack_40.Array;
    }
    uVar7 = *puVar12;
    while (uVar7 == 0) {
      lVar8 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1469f6bb1;
      uVar7 = puVar12[lVar8 + 1];
    }
    uVar6 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar11;
    if (iVar2 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar2;
    }
  }
LAB_1469f6bb1:
  TStack_40._padding_ = CONCAT44(uVar6,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar11;
  if (TStack_40.CurrentBitIndex < iVar2) {
    do {
      pFVar3 = (this->LinearizedItems).AllocatorInstance.Data;
      for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)(this->LinearizedItems).ArrayNum * 8;
          pFVar9 = pFVar9 + 8) {
        if (*(longlong *)pFVar9 ==
            *(longlong *)
             (*(longlong *)&this->field_0x818 + (longlong)TStack_40.CurrentBitIndex * 0x10)) {
          uVar6 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
          if ((-1 < (int)uVar6) && ((int)uVar6 < (this->DenseItemInfos).ArrayNum)) {
            uVar7 = 0;
            if ((int)uVar6 < (this->DenseItemInfos).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            for (uVar6 = *(uint *)((this->DenseItemInfos).AllocatorInstance.Data +
                                  (longlong)(int)uVar6 * 0x28 + 0x24); uVar6 != 0xffffffff;
                uVar6 = *(uint *)((this->DenseItemInfos).AllocatorInstance.Data +
                                 (longlong)(int)uVar6 * 0x28 + 0x24)) {
              uVar7 = 0;
              if ((int)uVar6 < (this->LinearizedItems).ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              (**(code **)(*(longlong *)&this->field_0x598 + 0x78))
                        (&this->field_0x598,
                         *(undefined8 *)
                          ((this->LinearizedItems).AllocatorInstance.Data + (longlong)(int)uVar6 * 8
                          ),1);
              uVar7 = 0;
              if ((int)uVar6 < (this->DenseItemInfos).ArrayNum) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          break;
        }
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// ReGenerateItems @ 1469f88e0

FReGenerateResults * __thiscall
STreeView<UObject_*>::ReGenerateItems
          (STreeView<UObject_*> *this,FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  int iVar1;
  bool *pbVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  SListView<UObject_*>::ReGenerateItems((SListView<UObject_*> *)this,__return_storage_ptr__,param_1)
  ;
  pbVar2 = TAttribute<bool>::Get(&this->bShouldStackHierarchyHeaders);
  if (*pbVar2 == false) {
    STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = PopulatePinnedItems(this,&this->LinearizedItems,&local_18,__return_storage_ptr__);
    SListView<UObject_*>::ReGeneratePinnedItems
              ((SListView<UObject_*> *)this,&local_18,param_1,iVar1);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// RebuildList @ 1469f8c30

void __thiscall STreeView<UObject_*>::RebuildList(STreeView<UObject_*> *this)

{
  int *piVar1;
  
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar1);
  }
  SListView<UObject_*>::FWidgetGenerator::Clear((FWidgetGenerator *)&this->field_0x5a0);
  SListView<UObject_*>::FWidgetGenerator::Clear((FWidgetGenerator *)&this->field_0x670);
                    /* WARNING: Could not recover jumptable at 0x0001469f8c89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// RequestListRefresh @ 146a0d860

void __thiscall STreeView<UObject_*>::RequestListRefresh(STreeView<UObject_*> *this)

{
  if (this->bTreeItemsAreDirty == false) {
    this->bTreeItemsAreDirty = true;
    STableViewBase::RequestListRefresh((STableViewBase *)this);
    return;
  }
  return;
}

// Tick @ 146a29420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STreeView<UObject_*>::Tick
          (STreeView<UObject_*> *this,FGeometry *param_1,double param_2,float param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
  *pTVar3;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  IItemsSource<UObject_*> *pIVar5;
  TObjectPtr<UObject_const_>_u_0 TVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  TObjectPtr<UObject_const_>_u_0 *pTVar13;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStackY_238 [32];
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> local_1e8;
  TObjectPtr<UObject_const_>_u_0 local_1d8;
  TObjectPtr<UObject_const_>_u_0 TStack_1d0;
  TBitArray<FDefaultBitArrayAllocator> local_1c8;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  void *local_168;
  undefined4 local_160;
  undefined1 local_158 [32];
  void *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 local_128;
  int local_124;
  ForElementType<FSetElementId> local_118;
  int local_110;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> local_108;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> local_b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_238;
  bVar10 = false;
  bVar9 = false;
  local_1d8.DebugPtr = local_1d8.DebugPtr & 0xffffffff00000000;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_STreeView<UObject*___ptr64>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId582,"STreeView::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x246);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_STreeView<UObject*___ptr64>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId582);
  }
  if ((this->bTreeItemsAreDirty == false) || (*(longlong *)&this->field_0x2b8 == 0))
  goto LAB_146a29a6d;
  this->bTreeItemsAreDirty = false;
  bVar11 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  if ((!bVar11) || ((this->TreeViewSource).Ptr == (IItemsSource<UObject_*> *)0x0))
  goto LAB_146a29a6d;
  piVar2 = &(this->LinearizedItems).ArrayMax;
  local_158._0_8_ = (FScriptContainerElement *)0x0;
  local_158._8_8_ = 0;
  local_138 = (void *)0x0;
  local_130 = 0;
  local_12c = 0x80;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (ForElementType<FSetElementId>)0x0;
  local_110 = 0;
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_1a8._8_8_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0x8000000000;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar2);
  }
  pIVar5 = (this->TreeViewSource).Ptr;
  local_1c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1c8.NumBits = 0;
  local_1c8.MaxBits = 0x80;
  if (pIVar5 == (IItemsSource<UObject_*> *)0x0) {
    local_1d8.DebugPtr = (UObject *)0x0;
    pTVar13 = &local_1d8;
    TStack_1d0.DebugPtr = TStack_1d0.DebugPtr & 0xffffffff00000000;
  }
  else {
    pTVar13 = (TObjectPtr<UObject_const_>_u_0 *)
              (**(code **)((longlong)*pIVar5 + 8))(pIVar5,&local_1d8);
  }
  local_1d8 = *pTVar13;
  TStack_1d0 = pTVar13[1];
  PopulateLinearizedItems
            (this,(TArrayView<UObject_*_const,int> *)&local_1d8.ObjectPtr,&this->LinearizedItems,
             &local_1e8,&local_1c8,
             (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)local_158,
             (TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
              *)local_1a8,true,-1);
  if (this->bAllowInvisibleItemSelection == false) {
    if (*(int *)&this->field_0x820 - *(int *)&this->field_0x84c == local_158._8_4_ - local_124) {
      pTVar14 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                ::Difference((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                              *)&this->field_0x818,&local_b8,
                             (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                              *)local_158);
      bVar10 = true;
      bVar9 = false;
      if (*(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34 < 1) {
        pTVar14 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                  ::Difference((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                *)local_158,&local_108,
                               (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                                *)&this->field_0x818);
        bVar10 = true;
        bVar9 = true;
        if (*(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34 < 1)
        goto LAB_146a29688;
      }
    }
    bVar11 = true;
  }
  else {
LAB_146a29688:
    bVar11 = false;
  }
  if (bVar9) {
    local_108.HashSize = 0;
    if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Elements);
  }
  if (bVar10) {
    local_b8.HashSize = 0;
    if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_b8.Elements);
  }
  if (bVar11) {
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::operator=
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)&this->field_0x818,
               (TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)local_158);
    TVar6 = (TObjectPtr<UObject_const_>_u_0)*(TObjectPtr<UObject_const_>_u_0 *)&this->field_0x870;
    if (TVar6.DebugPtr == (UObject *)0x0) {
LAB_146a297ee:
      *(undefined8 *)&this->field_0x870 = 0;
      *(undefined8 *)&this->field_0x868 = 0;
    }
    else {
      local_1d8 = TVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(TVar6.DebugPtr),
         UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(TVar6.DebugPtr);
      }
      uVar15 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
               (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      iVar12 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                         ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                           *)&this->field_0x818,uVar15 ^ uVar15 >> 0x10,
                          (TObjectPtr<UObject_const_> *)&local_1d8.ObjectPtr);
      if (iVar12 == -1) goto LAB_146a297ee;
      TVar6 = (TObjectPtr<UObject_const_>_u_0)*(TObjectPtr<UObject_const_>_u_0 *)&this->field_0x868;
      if (TVar6.DebugPtr == (UObject *)0x0) {
LAB_146a297de:
        *(undefined8 *)&this->field_0x868 = *(undefined8 *)&this->field_0x870;
      }
      else {
        local_1d8 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (UE::GC::MarkAsReachable(TVar6.DebugPtr),
           UE::GC::GIsIncrementalReachabilityPending != false)) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
        uVar15 = ((uint)((ulonglong)TVar6.DebugPtr >> 0x14) & 0xffff ^
                 (uint)((ulonglong)TVar6.DebugPtr >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        iVar12 = TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                           ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                             *)&this->field_0x818,uVar15 >> 0x10 ^ uVar15,
                            (TObjectPtr<UObject_const_> *)&local_1d8.ObjectPtr);
        if (iVar12 == -1) goto LAB_146a297de;
      }
    }
    (**(code **)(*(longlong *)&this->field_0x598 + 0x40))(&this->field_0x598,3);
  }
  pTVar3 = &this->SparseItemInfos;
  if (pTVar3 != (TMap<UObject_*,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>_>
                 *)local_1a8) {
    if (*(void **)pTVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar3);
    }
    puVar1 = &(this->SparseItemInfos).field_0x10;
    *(undefined8 *)pTVar3 = local_1a8._0_8_;
    *(undefined4 *)&(this->SparseItemInfos).field_0x8 = local_1a8._8_4_;
    *(undefined4 *)&(this->SparseItemInfos).field_0xc = local_1a8._12_4_;
    local_1a8._0_8_ = (FScriptContainerElement *)0x0;
    local_1a8._8_8_ = 0;
    if (puVar1 != local_1a8 + 0x10) {
      if (local_188 == (void *)0x0) {
        *(undefined8 *)puVar1 = local_1a8._16_8_;
        *(undefined8 *)&(this->SparseItemInfos).field_0x18 = local_1a8._24_8_;
      }
      pvVar7 = *(void **)&(this->SparseItemInfos).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(void **)&(this->SparseItemInfos).field_0x20 = local_188;
      *(undefined4 *)&(this->SparseItemInfos).field_0x28 = (undefined4)local_180;
      *(uint *)&(this->SparseItemInfos).field_0x2c = local_180._4_4_;
      local_180 = 0;
      local_188 = (void *)0x0;
    }
    *(undefined4 *)&(this->SparseItemInfos).field_0x30 = local_178;
    *(undefined4 *)&(this->SparseItemInfos).field_0x34 = local_174;
    local_174 = 0;
    local_178 = 0xffffffff;
    if (local_168 == (void *)0x0) {
      *(undefined4 *)&(this->SparseItemInfos).field_0x38 = local_170;
    }
    pvVar7 = *(void **)&(this->SparseItemInfos).field_0x40;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(void **)&(this->SparseItemInfos).field_0x40 = local_168;
    *(undefined4 *)&(this->SparseItemInfos).field_0x48 = local_160;
    local_160 = 0;
    local_168 = (void *)0x0;
  }
  pTVar4 = &this->DenseItemInfos;
  if (pTVar4 != &local_1e8) {
    DestructItems<FItemInfo,int>
              ((FItemInfo *)(pTVar4->AllocatorInstance).Data,(this->DenseItemInfos).ArrayNum);
    pFVar8 = (pTVar4->AllocatorInstance).Data;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    (pTVar4->AllocatorInstance).Data = local_1e8.AllocatorInstance.Data;
    (this->DenseItemInfos).ArrayNum = local_1e8.ArrayNum;
    (this->DenseItemInfos).ArrayMax = local_1e8.ArrayMax;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (this->bHighlightParentNodesForSelection != false) {
    (**(code **)(*(longlong *)this + 0x2e0))(this);
  }
  DestructItems<FItemInfo,int>((FItemInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FItemInfo *)local_1e8.AllocatorInstance.Data != (FItemInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  iVar12 = SUB84(local_1a8._8_8_,4);
  local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  uVar15 = local_180._4_4_;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_180 = (ulonglong)local_180._4_4_ << 0x20;
  if (0x80 < uVar15) {
    local_180 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  local_110 = 0;
  if (local_118 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118);
  }
  iVar12 = SUB84(local_158._8_8_,4);
  local_158._8_8_ = local_158._8_8_ & 0xffffffff00000000;
  if (iVar12 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_158,0,(int *)(local_158 + 0xc));
  }
  local_128 = 0xffffffff;
  local_124 = 0;
  local_130 = 0;
  if (0x80 < local_12c) {
    local_12c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_158 + 0x10),0);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if ((FScriptContainerElement *)local_158._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
LAB_146a29a6d:
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

