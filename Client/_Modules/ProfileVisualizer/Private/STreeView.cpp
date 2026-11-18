// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 20

// ~STreeView<TSharedPtr<FVisualizerEvent,1>_> @ 148d575c0

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::~STreeView<TSharedPtr<FVisualizerEvent,1>_>
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  void *pvVar1;
  IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *pIVar2;
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
  if (pIVar2 != (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
            (&this->OnExpansionChanged);
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->LinearizedItems).AllocatorInstance.Data,
             (this->LinearizedItems).ArrayNum);
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SparseItemInfos);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>
            (&this->OnSetExpansionRecursive);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            (&this->OnGetChildren);
  SListView<TSharedPtr<FVisualizerEvent,1>_>::~SListView<TSharedPtr<FVisualizerEvent,1>_>
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)this);
  return;
}

// operator() @ 148d59cd0

void __thiscall
`STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
          (void *this,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if ((-1 < param_2) &&
     (uVar11 = (ulonglong)(uint)param_2, param_2 < *(int *)(*(longlong *)this + 0xa90))) {
LAB_148d59d10:
    do {
      lVar2 = *(longlong *)this;
      uVar10 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(lVar2 + 0xa90)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0xa88) + 0x24 + (longlong)(int)uVar10 * 0x28);
      uVar11 = (ulonglong)iVar1;
      if (((-1 < iVar1) && (plVar3 = *(longlong **)((longlong)this + 8), iVar1 < (int)plVar3[1])) &&
         (iVar1 < *(int *)((longlong)this + 0x10))) {
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar9 = (FScriptContainerElement *)(*plVar3 + uVar11 * 0x10);
        pFVar8 = (param_1->AllocatorInstance).Data;
        if (((pFVar8 <= pFVar9) && (pFVar9 < pFVar8 + (longlong)param_1->ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = param_1->ArrayNum;
        if (iVar7 == param_1->ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar7 + 1;
        pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
        *(undefined8 *)pFVar8 = *(undefined8 *)pFVar9;
        lVar2 = *(longlong *)(pFVar9 + 8);
        *(longlong *)(pFVar8 + 8) = lVar2;
        if (lVar2 != 0) {
          LOCK();
          *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
          UNLOCK();
          goto LAB_148d59d10;
        }
      }
    } while (iVar1 != -1);
  }
  return;
}

// Construct @ 148d5eee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Construct
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,FArguments *param_1)

{
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
  *pTVar1;
  longlong *plVar2;
  IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *pIVar3;
  IItemsSource<TSharedPtr<FVisualizerEvent,1>_> IVar4;
  FTableViewStyle *pFVar5;
  STextBlock *pSVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  bool bVar10;
  TSharedRef<SWidget,1> *pTVar11;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FVisualizerEvent,1>_>_>_>
  TVar12;
  undefined8 *puVar13;
  ulong64 uVar14;
  undefined4 *puVar15;
  FArguments *pFVar16;
  FText *pFVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  SScrollBar *this_01;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  int iVar21;
  TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *pTVar22;
  FSlotBase *this_02;
  undefined1 *puVar23;
  TReferenceControllerBase<1> *pTVar24;
  int local_res8 [2];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_8a8 [8];
  ForAnyElementType local_8a0;
  int local_898;
  FString local_890;
  undefined1 local_880 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_878;
  ForAnyElementType FStack_870;
  ulonglong local_868;
  undefined1 local_860 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_858;
  ForAnyElementType FStack_850;
  ulonglong local_848;
  undefined1 local_840 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_838;
  ForAnyElementType FStack_830;
  ulonglong local_828;
  undefined1 local_820 [8];
  FScriptContainerElement *local_818;
  int local_810;
  undefined1 local_808 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7f8;
  ForAnyElementType FStack_7f0;
  ulonglong local_7e8;
  undefined1 local_7e0 [8];
  FDelegateAllocation local_7d8;
  STextBlock *local_7c8;
  TReferenceControllerBase<1> *pTStack_7c0;
  TSharedRef<ISlateMetaData,1> local_7b8;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> local_7a8;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> local_798;
  TDelegateBase<FNotThreadSafeDelegateMode> local_788;
  FDestructionSentinel local_770;
  FDestructionSentinel local_758;
  FDestructionSentinel local_740;
  FDestructionSentinel local_728;
  FDestructionSentinel local_710;
  FDestructionSentinel local_6f8;
  FDestructionSentinel local_6e0;
  FDelegateAllocation *local_6c8;
  TAttribute<FText> local_6c0;
  FReadAccessScope local_690;
  FReadAccessScope local_678;
  FReadAccessScope local_660;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_648;
  FText local_630;
  TSharedRef<SWidget,1> local_620;
  undefined1 local_610 [16];
  TReferenceControllerBase<1> *local_600;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *local_5f8;
  TReferenceControllerBase<1> *pTStack_5f0;
  TSharedRef<STextBlock,1> local_5e8;
  FReadAccessScope local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x760,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshRow);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnRowReleased);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x7d8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  this_00 = &this->OnGetChildren;
  if (&param_1->_OnGetChildren != this_00) {
    local_788._0_8_ = 0;
    local_788._8_8_ = 0;
    local_788._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetChildren,
               &local_5d8);
    if ((*(int *)&(param_1->_OnGetChildren).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,&local_788);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,&local_788);
    TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::
    ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *)&local_788);
  }
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSetExpansionRecursive,&param_1->_OnSetExpansionRecursive);
  pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                       (TSharedRef<SWidget,1> *)(local_610 + 8));
  local_798.Object = (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)pTVar11->Object;
  local_798.SharedReferenceCount.ReferenceController =
       (pTVar11->SharedReferenceCount).ReferenceController;
  if (local_798.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_600);
  local_5f8 = local_798.Object;
  pTStack_5f0 = local_798.SharedReferenceCount.ReferenceController;
  if (local_798.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_798.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar12 = FArguments::MakeTreeItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_610);
  pTVar1 = &this->TreeViewSource;
  if ((IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)pTVar1 != TVar12.Ptr) {
    pIVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)*TVar12.Ptr;
    *TVar12.Ptr = (IItemsSource<TSharedPtr<FVisualizerEvent,1>_>)0x0;
    if (pIVar3 != (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  (**(code **)(*(longlong *)this + 0x248))(this);
  IVar4 = *TVar12.Ptr;
  if (IVar4 != (IItemsSource<TSharedPtr<FVisualizerEvent,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar4)(IVar4,1);
  }
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_798);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x960,&param_1->_OnKeyDownHandler);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->field_0x900,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExpansionChanged,&param_1->_OnExpansionChanged);
  TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x918,&param_1->_OnIsSelectableOrNavigable);
  TAttribute<enum_ESelectionMode::Type>::operator=(&this->field_0x3e8,&param_1->_SelectionMode);
  this->field_0x99c = param_1->_ClearSelectionOnClick;
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
  pTVar22 = &param_1->_OnItemToString_Debug;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar22,&local_690);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_148d5f356:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_7e0 = (undefined1  [8])0x0;
    local_7d8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_7d8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7e0,
               (FWriteAccessScope *)&local_6e0);
    local_6c8 = &local_7d8;
    puVar13 = UE::Core::Private::DelegateAllocate(0x20,&local_7d8);
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar14 = FDelegateHandle::GenerateNewID();
      puVar13[2] = uVar14;
      *puVar13 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFVisualizerEvent___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar13[3] = TListTypeTraits<TSharedPtr<FVisualizerEvent,1>,void>::DebugDump;
    }
    if (local_6e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e0.Accessor,&local_6e0);
    }
    TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *)local_7e0);
    pTVar22 = (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
               *)local_7e0;
  }
  else {
    cVar9 = (**(code **)(*plVar2 + 0x38))();
    if (cVar9 == '\0') goto LAB_148d5f356;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_690);
    local_8a8 = (undefined1  [8])0x0;
    local_8a0.Data = (FScriptContainerElement *)0x0;
    local_898 = 0;
    if (pTVar22 !=
        (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy> *)
        local_8a8) {
      local_820 = (undefined1  [8])0x0;
      local_818 = (FScriptContainerElement *)0x0;
      local_810 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar22,&local_5c0);
      if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 != 0) &&
         (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
         plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x50))(plVar2,local_820);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_820,
                 (FWriteAccessScope *)&local_758);
      pFVar8 = local_818;
      local_res8[0] = local_810;
      local_810 = 0;
      local_818 = (FScriptContainerElement *)0x0;
      if (local_758.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_758.Accessor,&local_758);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8a8,
                 (FWriteAccessScope *)&local_740);
      if (local_898 == 0) {
LAB_148d5f2fd:
        if (local_8a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_8a0.Data);
        }
      }
      else if (local_8a0.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_8a0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8a0,0,0,0x10);
        local_898 = 0;
        goto LAB_148d5f2fd;
      }
      local_898 = local_res8[0];
      local_8a0.Data = pFVar8;
      if (local_740.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_740.Accessor,&local_740);
      }
      TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
      ~TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                ((TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                  *)local_820);
    }
    TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
                *)local_8a8);
    pTVar22 = (TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>
               *)local_8a8;
  }
  TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<FString___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>(pTVar22);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7a8,
             &param_1->_OnEnteredBadState);
  this->field_0x99d = param_1->_HandleGamepadEvents;
  this->field_0x99e = param_1->_HandleDirectionalNavigation;
  this->bAllowInvisibleItemSelection = param_1->_AllowInvisibleItemSelection;
  this->bHighlightParentNodesForSelection = param_1->_HighlightParentNodesForSelection;
  this->field_0x9a0 = param_1->_ReturnFocusToSelection;
  (this->bShouldStackHierarchyHeaders).Value = (param_1->_ShouldStackHierarchyHeaders).Value;
  (this->bShouldStackHierarchyHeaders).bIsSet = (param_1->_ShouldStackHierarchyHeaders).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bShouldStackHierarchyHeaders).Getter,
             &(param_1->_ShouldStackHierarchyHeaders).Getter);
  pFVar5 = param_1->_TreeViewStyle;
  this->Style = pFVar5;
  if (pFVar5 == (FTableViewStyle *)0x0) {
    local_808._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_808._0_8_ = &pFVar5->BackgroundBrush;
  }
  local_808[8] = true;
  local_7e8 = 0;
  local_7f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7f0.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_808);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7f8,(FWriteAccessScope *)&local_770);
  if (((int)local_7e8 != 0) && (FStack_7f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7f0,0,0,0x10);
    local_7e8 = local_7e8 & 0xffffffff00000000;
  }
  if (local_770.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_770.Accessor,&local_770);
  }
  if (FStack_7f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7f8.AccessDetector);
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9b0,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9d0,&param_1->_MaxPinnedItems);
  local_890.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_890.Data.ArrayNum = 0;
  local_890.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_678
            );
  if ((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0)) {
LAB_148d5f5c4:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_678);
    ::FString::AppendChars(&local_890,L"Please specify an OnGenerateRow. \n",0x22);
  }
  else {
    cVar9 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar9 == '\0') goto LAB_148d5f5c4;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_678);
  }
  if (pTVar1->Ptr == (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    ::FString::AppendChars(&local_890,L"Please specify a TreeItemsSource. \n",0x23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_660);
  if ((*(int *)&(this->OnGetChildren).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar9 = (**(code **)(*plVar2 + 0x38))();
    if (cVar9 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_660);
      goto LAB_148d5f65d;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_660);
  ::FString::AppendChars(&local_890,L"Please specify an OnGetChildren. \n",0x22);
LAB_148d5f65d:
  iVar21 = local_890.Data.ArrayNum + -1;
  if (local_890.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if (iVar21 < 1) {
    local_840[0] = LeftAligned;
    local_840[1] = true;
    local_860._0_4_ = 0.0;
    local_880._0_4_ = 0.0;
    local_838.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_830.Data = (FScriptContainerElement *)0x0;
    local_828 = 0;
    local_860[4] = true;
    local_858.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_850.Data = (FScriptContainerElement *)0x0;
    local_848 = 0;
    local_880[4] = true;
    local_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_870.Data = (FScriptContainerElement *)0x0;
    local_868 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_880,(TAttribute<float> *)local_860,
               (TAttribute<EListItemAlignment> *)local_840,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,Orient_Vertical,&param_1->_OnTreeViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_878,(FWriteAccessScope *)&local_728);
    if (((int)local_868 != 0) && (FStack_870.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_870.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_870,0,0,0x10);
      local_868 = local_868 & 0xffffffff00000000;
    }
    if (local_728.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_728.Accessor,&local_728);
    }
    if (FStack_870.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_870.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_878.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_858,(FWriteAccessScope *)&local_710);
    if (((int)local_848 != 0) && (FStack_850.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_850.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_850,0,0,0x10);
      local_848 = local_848 & 0xffffffff00000000;
    }
    if (local_710.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_710.Accessor,&local_710);
    }
    if (FStack_850.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_850.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_858.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_838,(FWriteAccessScope *)&local_6f8);
    if (((int)local_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_830.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
      local_828 = local_828 & 0xffffffff00000000;
    }
    if (local_6f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f8.Accessor,&local_6f8);
    }
    if (FStack_830.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_830.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_838.AccessDetector);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      this_01 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(this_01,param_1->_ScrollbarDragFocusCause);
    }
    pTVar11 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_620);
    local_7a8.Object = (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)pTVar11->Object;
    local_7a8.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_7a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_620.SharedReferenceCount.ReferenceController);
    pTVar19 = ::operator_new(0x28);
    if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
      local_7b8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_7b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar19->SharedReferenceCount = (atomic<int>)0x1;
      pTVar19->WeakReferenceCount = (atomic<int>)0x1;
      pTVar19->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
      ;
      pTVar20 = (TReferenceControllerBase<1> *)&(local_7a8.Object)->field_0x588;
      if (local_7a8.Object == (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
        pTVar20 = pTVar24;
      }
      if (local_7a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        pTVar19[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_UFVisualizerEvent___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar19[1].SharedReferenceCount = pTVar20;
        pTVar19[2]._padding_ = 0;
      }
      else {
        LOCK();
        (local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar19[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_UFVisualizerEvent___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar19[1].SharedReferenceCount = pTVar20;
        pTVar19[2]._padding_ = (longlong)local_7a8.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_7a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_7a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7a8.SharedReferenceCount.ReferenceController);
      local_7b8.Object = (ISlateMetaData *)(pTVar19 + 1);
      if ((TReferenceControllerBase<1> *)local_7b8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      LOCK();
      pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
      UNLOCK();
      pTVar24 = pTVar19;
      local_7b8.SharedReferenceCount.ReferenceController = pTVar19;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_7b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_7a8);
  }
  else {
    puVar23 = &this->field_0x268;
    *(undefined4 *)puVar23 = 2;
    puVar15 = (undefined4 *)&this->field_0x26c;
    if (puVar23 == (undefined1 *)0x0) {
      puVar15 = (undefined4 *)&DAT_00000054;
    }
    *puVar15 = 2;
    pFVar16 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar17 = FText::FromString(&local_630,&local_890);
    FText::FText(&local_6c0.Value,pFVar17);
    local_6c0.bIsSet = true;
    local_6c0.Getter._16_8_ = 0;
    local_6c0.Getter._0_8_ = 0;
    local_6c0.Getter._8_8_ = 0;
    pFVar16 = STextBlock::FArguments::Text(pFVar16,&local_6c0);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_648,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x151,(T0RequiredArgs *)local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_648,&local_5e8,pFVar16);
    this_02 = (FSlotBase *)&this->field_0x238;
    pTVar24 = (pTVar18->SharedReferenceCount).ReferenceController;
    pSVar6 = pTVar18->Object;
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar23 == (undefined1 *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
    }
    else {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar23 == (undefined1 *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar19 = (this_02->Widget).SharedReferenceCount.ReferenceController;
    (this_02->Widget).Object = (SWidget *)pSVar6;
    (this_02->Widget).SharedReferenceCount.ReferenceController = pTVar24;
    local_7c8 = pSVar6;
    pTStack_7c0 = pTVar24;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    FSlotBase::AfterContentOrOwnerAssigned(this_02);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_648._Widget.SharedReferenceCount.ReferenceController);
    if (local_630.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_630.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_890.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateNewWidget @ 148d78eb0

TSharedRef<ITableRow,1> * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::GenerateNewWidget
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  FVisualizerEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  STextBlock *pSVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FArguments *pFVar8;
  FArguments *pFVar9;
  FText *pFVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> *this_00;
  TReferenceControllerBase<1> *pTVar14;
  longlong *plVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_a18 [2];
  FText local_a10;
  bool local_a00;
  undefined1 local_9f8 [8];
  ForAnyElementType FStack_9f0;
  ulonglong local_9e8;
  SWidget *local_9e0;
  TReferenceControllerBase<1> *pTStack_9d8;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
  local_9d0;
  TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_9b8;
  FName local_9a8;
  FMemScope local_9a0;
  FName local_998;
  T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&> local_990;
  FMemScope local_988 [2];
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> local_978;
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_968;
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1> local_958;
  FVisualizerEvent *local_948;
  TReferenceControllerBase<1> *local_940;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *local_938;
  TReferenceControllerBase<1> *pTStack_930;
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_928;
  FDestructionSentinel local_918;
  TSharedRef<SWidget,1> local_900;
  TSharedRef<SWidget,1> local_8f0;
  TSharedRef<STextBlock,1> local_8e0;
  FText local_8d0;
  FReadAccessScope local_8c0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8a8;
  FReadAccessScope local_890;
  FArguments local_878;
  FArguments local_580;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_8c0
            );
  if (((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0))
     || (cVar5 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))(), cVar5 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c0);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_8f0);
    local_958.Object = (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)pTVar7->Object;
    local_958.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_958.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_958.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_958.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f0.SharedReferenceCount.ReferenceController);
    pFVar8 = STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_878);
    pFVar9 = STextBlock::FArguments::FArguments(&local_580);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_8d0,L"STreeView",L"BrokenSetupMessage",
                         L"OnGenerateWidget() not assigned.");
    FText::FText(&local_a10,pFVar10);
    local_a00 = true;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    local_9e8 = 0;
    local_9f8 = (undefined1  [8])0x0;
    FStack_9f0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar9->_Text).Value,&local_a10);
    (pFVar9->_Text).bIsSet = local_a00;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9f8,
               (FWriteAccessScope *)&local_918);
    if (((int)local_9e8 != 0) && (FStack_9f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_9f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9f0,0,0,0x10);
      local_9e8 = local_9e8 & 0xffffffff00000000;
    }
    if (local_918.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_918.Accessor,&local_918);
    }
    if (FStack_9f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_9f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9f8);
    if (local_a10.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a10.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_9a8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_9a0,&local_9a8,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8a8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x361,local_res8);
    FMemScope::~FMemScope(&local_9a0);
    FLLMScope::~FLLMScope(local_res20);
    pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_8a8,&local_8e0,pFVar9);
    pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar11->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9e0 = (pFVar8->_Content).Widget.Object;
    pTStack_9d8 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar8->_Content).Widget.Object = (SWidget *)pSVar3;
    (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9d8)
    ;
    local_990.Arg0 = &local_958;
    FLLMScope::FLLMScope(local_a18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_998 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(local_988,&local_998,true);
    local_9d0._RequiredArgs = &local_990;
    local_9d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar12 = ::operator_new(0x408);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFVisualizerEvent___00_____00_SharedPointerInternals__6B_
      ;
      STableRow<TSharedPtr<FVisualizerEvent,1>_>::STableRow<TSharedPtr<FVisualizerEvent,1>_>
                ((STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar12 + 1));
      pTVar14 = pTVar12;
    }
    TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>
              (&local_928,(STableRow<TSharedPtr<FVisualizerEvent,1>_> *)(pTVar14 + 1),pTVar14);
    local_9b8.SharedReferenceCount.ReferenceController =
         local_928.SharedReferenceCount.ReferenceController;
    if (local_928.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_928.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_928.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9d0._Widget.Object = local_928.Object;
    local_9b8.Object = (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_9d0._Widget.SharedReferenceCount,&local_9b8.SharedReferenceCount);
    TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_9b8);
    TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_928);
    if ((local_9d0._Widget.Object == (STableRow<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedRef<ITableRow,1> *)(*pcVar4)();
      return pTVar13;
    }
    SWidget::SetDebugInfo
              ((SWidget *)&(local_9d0._Widget.Object)->_padding_,"STableRow<ItemType>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x35e,0x3f8);
    FMemScope::~FMemScope(local_988);
    FLLMScope::~FLLMScope(local_a18);
    TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>_&>_>
    ::operator<<=(&local_9d0,&local_968,pFVar8);
    TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedPtr<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_9d0._Widget);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8e0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8a8._Widget.SharedReferenceCount.ReferenceController);
    if (local_8d0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8d0.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_580);
    STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_878);
    __return_storage_ptr__->Object = (ITableRow *)local_968.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_968.SharedReferenceCount.ReferenceController;
    if (local_968.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_968);
    this_00 = &local_958;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c0);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_900);
    local_978.Object = (STreeView<TSharedPtr<FVisualizerEvent,1>_> *)pTVar7->Object;
    local_978.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_978.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_900.SharedReferenceCount.ReferenceController);
    local_938 = local_978.Object;
    pTStack_930 = local_978.SharedReferenceCount.ReferenceController;
    if (local_978.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar14 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar1 = param_1->Object;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,
               &local_890);
    if (*(int *)&this->field_0x758 == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)&this->field_0x750;
    }
    local_948 = pFVar1;
    local_940 = pTVar14;
    (**(code **)(*plVar15 + 0x60))(plVar15,__return_storage_ptr__,&local_948,&local_938);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_890);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_930)
    ;
    this_00 = &local_978;
  }
  TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<STreeView<TSharedPtr<FVisualizerEvent,1>_>,1>(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 148d85c70

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::OnKeyDown
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,FReply *__return_storage_ptr__,
          FGeometry *param_1,FKeyEvent *param_2)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  FReply *pFVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  bool bVar16;
  longlong local_158;
  TReferenceControllerBase<1> *pTStack_150;
  longlong local_148;
  TReferenceControllerBase<1> *pTStack_140;
  longlong local_138;
  TReferenceControllerBase<1> *pTStack_130;
  longlong local_128;
  TReferenceControllerBase<1> *pTStack_120;
  FReadAccessScope local_118;
  FReadAccessScope local_100;
  FReply local_e8;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x960,&local_118
            );
  if (((*(int *)&this->field_0x970 == 0) ||
      (plVar11 = *(longlong **)&this->field_0x968, plVar11 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*plVar11 + 0x38))(), cVar7 == '\0')) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_118);
  if (bVar16) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x960,
               &local_100);
    if (*(int *)&this->field_0x970 == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)&this->field_0x968;
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,&local_e8,param_1,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_100);
    if ((char)local_e8._padding_ != '\0') {
      FReply::FReply(__return_storage_ptr__,&local_e8);
      FReply::~FReply(&local_e8);
      return __return_storage_ptr__;
    }
    FReply::~FReply(&local_e8);
  }
  if ((*(longlong *)&this->field_0x858 == 0) || ((param_2->_padding_ & 0x30) != 0)) {
LAB_148d860f3:
    SListView<TSharedPtr<FVisualizerEvent,1>_>::OnKeyDown_Internal
              ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)this,__return_storage_ptr__,param_1,
               param_2);
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
      local_158 = *(longlong *)&this->field_0x858;
      if (local_158 != 0) {
        pTStack_150 = *(TReferenceControllerBase<1> **)&this->field_0x860;
        if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_150->SharedReferenceCount =
               (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar4 = (this->LinearizedItems).AllocatorInstance.Data;
        pFVar14 = pFVar4;
        do {
          if (pFVar14 == pFVar4 + (longlong)(this->LinearizedItems).ArrayNum * 0x10) {
            uVar15 = 0xffffffff;
LAB_148d85e0e:
            puVar1 = &this->field_0x588;
            cVar7 = (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1,uVar15 & 0xffffffff);
            if ((cVar7 != '\0') &&
               (cVar7 = (**(code **)(*(longlong *)puVar1 + 0x60))(puVar1,&local_158), cVar7 != '\0')
               ) {
              local_138 = local_158;
              pTStack_130 = pTStack_150;
              pcVar5 = *(code **)(*(longlong *)puVar1 + 0x50);
              if (pTStack_150 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStack_150->SharedReferenceCount =
                     (atomic<int>)((int)pTStack_150->SharedReferenceCount + 1);
                UNLOCK();
              }
              (*pcVar5)(puVar1,&local_138,0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_150);
              FReply::FReply(__return_storage_ptr__,true);
              return __return_storage_ptr__;
            }
            iVar8 = (**(code **)(*(longlong *)puVar1 + 0x88))(puVar1,uVar15 & 0xffffffff);
            uVar12 = (int)uVar15 - 1;
            if (-1 < (int)uVar12) {
              while (iVar9 = (**(code **)(*(longlong *)puVar1 + 0x88))(puVar1,uVar12),
                    iVar8 <= iVar9) {
                uVar12 = uVar12 - 1;
                if ((int)uVar12 < 0) {
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTStack_150);
                  FReply::FReply(__return_storage_ptr__,true);
                  return __return_storage_ptr__;
                }
              }
              pcVar5 = *(code **)(*(longlong *)this + 0x2e8);
              uVar13 = 0;
              if ((int)uVar12 < (this->LinearizedItems).ArrayNum) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FReply *)(*pcVar5)();
                return pFVar10;
              }
              (*pcVar5)(this,(this->LinearizedItems).AllocatorInstance.Data +
                             (ulonglong)uVar12 * 0x10,param_2);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_150);
            FReply::FReply(__return_storage_ptr__,true);
            return __return_storage_ptr__;
          }
          if (*(longlong *)pFVar14 == local_158) {
            uVar15 = (longlong)pFVar14 - (longlong)pFVar4 >> 4;
            goto LAB_148d85e0e;
          }
          pFVar14 = pFVar14 + 0x10;
        } while( true );
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
      if (bVar16) goto LAB_148d860f3;
      lVar6 = *(longlong *)&this->field_0x858;
      if (lVar6 != 0) {
        pTStack_140 = *(TReferenceControllerBase<1> **)&this->field_0x860;
        if (pTStack_140 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_140->SharedReferenceCount =
               (atomic<int>)((int)pTStack_140->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar4 = (this->LinearizedItems).AllocatorInstance.Data;
        for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)(this->LinearizedItems).ArrayNum * 0x10
            ; pFVar14 = pFVar14 + 0x10) {
          if (*(longlong *)pFVar14 == lVar6) {
            uVar15 = (longlong)pFVar14 - (longlong)pFVar4 >> 4;
            goto LAB_148d85ff5;
          }
        }
        uVar15 = 0xffffffff;
LAB_148d85ff5:
        puVar1 = &this->field_0x588;
        local_148 = lVar6;
        cVar7 = (**(code **)(*(longlong *)puVar1 + 0x68))(puVar1,uVar15 & 0xffffffff);
        if (cVar7 != '\0') {
          cVar7 = (**(code **)(*(longlong *)puVar1 + 0x60))(puVar1,&local_148);
          if (cVar7 == '\0') {
            local_128 = local_148;
            pTStack_120 = pTStack_140;
            pcVar5 = *(code **)(*(longlong *)puVar1 + 0x50);
            if (pTStack_140 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStack_140->SharedReferenceCount =
                   (atomic<int>)((int)pTStack_140->SharedReferenceCount + 1);
              UNLOCK();
            }
            (*pcVar5)(puVar1,&local_128,1);
          }
          else {
            iVar8 = (this->LinearizedItems).ArrayNum;
            if ((int)uVar15 < iVar8 + -1) {
              uVar13 = (int)uVar15 + 1;
              pcVar5 = *(code **)(*(longlong *)this + 0x2e8);
              uVar12 = 0;
              if ((int)uVar13 < iVar8) {
                uVar12 = ~uVar13 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FReply *)(*pcVar5)();
                return pFVar10;
              }
              (*pcVar5)(this,(this->LinearizedItems).AllocatorInstance.Data +
                             (longlong)(int)uVar13 * 0x10,param_2);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_140);
      }
    }
    FReply::FReply(__return_storage_ptr__,true);
  }
  return __return_storage_ptr__;
}

// PopulateLinearizedItems @ 148d8aa70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulateLinearizedItems
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,
          TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FItemInfo,TSizedDefaultAllocator<32>_> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
          *param_5,TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
                   *param_6,bool param_7,int param_8)

{
  uint *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FVisualizerEvent *pFVar3;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FItemInfo *pFVar5;
  code *pcVar6;
  byte bVar7;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *pSVar10;
  FSharedReferencer<1> FVar11;
  TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  Type *pTVar21;
  longlong *plVar22;
  ForElementType<unsigned_int> FVar23;
  ForElementType<unsigned_int> FVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  char cVar27;
  longlong lVar28;
  int iVar29;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar30;
  uint uVar31;
  char *pcVar32;
  char cVar33;
  bool bVar34;
  undefined1 auStackY_208 [32];
  bool local_1b8;
  char local_1b6;
  undefined1 local_1b5;
  uint local_1b4;
  uint local_1b0;
  ForElementType<unsigned_int> local_1a8;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *local_198;
  TSharedPtr<FVisualizerEvent,1> *local_190;
  undefined8 local_188;
  int local_180;
  longlong local_178;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *local_150;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  *local_148;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *local_140;
  TSharedPtr<FVisualizerEvent_const_,1> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  longlong local_f8;
  TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_f0;
  TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_e8;
  FVisualizerEvent *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedPtr<FVisualizerEvent,1> *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *local_b8;
  char *local_b0;
  TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> local_a8;
  FReadAccessScope local_98;
  FItemInfo local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_148 = param_5;
  local_1a8 = (ForElementType<unsigned_int>)param_4;
  local_e8 = (TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)param_6;
  bVar34 = -1 < CpuChannel->Enabled;
  local_1a0 = param_2;
  local_198 = param_1;
  local_150 = param_3;
  local_140 = this;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId674,"STreeView::PopulateLinearizedItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x2a2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
               ::__l2::__CpuProfilerEventSpecId674);
  }
  iVar17 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(param_4,1);
  pTVar8 = local_1a0;
  FVar23 = (param_4->AllocatorInstance).SecondaryData;
  FVar24 = (ForElementType<unsigned_int>)param_4;
  if (FVar23 != (ForElementType<unsigned_int>)0x0) {
    FVar24 = FVar23;
  }
  uVar25 = iVar17 >> 0x1f & 0x1f;
  iVar17 = iVar17 + uVar25;
  bVar13 = false;
  local_1b8 = false;
  puVar1 = (uint *)((longlong)FVar24 + (longlong)(iVar17 >> 5) * 4);
  iVar29 = param_1->ArrayNum;
  local_1b4 = 0;
  *puVar1 = *puVar1 & ~(1 << (((byte)iVar17 & 0x1f) - (char)uVar25 & 0x1f));
  local_180 = param_4->NumBits + -1;
  if (0 < iVar29) {
    bVar7 = (byte)local_180 & 0x1f;
    local_1b0 = 1 << bVar7 | 1U >> 0x20 - bVar7;
    local_100.ReferenceController = (TReferenceControllerBase<1> *)&this->OnGetChildren;
    local_178 = 0;
    local_f0 = (TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->SparseItemInfos;
    local_f8 = (longlong)((int)(local_180 + (local_180 >> 0x1f & 0x1fU)) >> 5) * 4;
    do {
      lVar28 = local_178;
      uVar25 = local_1b4;
      uVar31 = ~local_1b4;
      uVar18 = 0;
      if ((int)local_1b4 < iVar29) {
        uVar18 = uVar31 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      local_1a0 = (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                  (param_1->DataPtr + lVar28);
      local_190 = (TSharedPtr<FVisualizerEvent,1> *)0x0;
      local_188 = 0;
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_bool___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId687,"STreeView_GetChildren",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
                   ,0x2af);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int>,TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                   ::__l5::__CpuProfilerEventSpecId687);
      }
      uVar18 = 0;
      if ((int)uVar25 < iVar29) {
        uVar18 = uVar31 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      FVar11.ReferenceController = local_100.ReferenceController;
      pTVar2 = local_198->DataPtr[lVar28].SharedReferenceCount.ReferenceController;
      pFVar3 = local_198->DataPtr[lVar28].Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 local_100.ReferenceController,&local_98);
      if ((int)FVar11.ReferenceController[1]._padding_ == 0) {
        plVar22 = (longlong *)0x0;
      }
      else {
        plVar22 = *(longlong **)&(FVar11.ReferenceController)->SharedReferenceCount;
      }
      local_e0 = pFVar3;
      local_d8 = pTVar2;
      (**(code **)(*plVar22 + 0x60))(plVar22,&local_e0,&local_190);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar23 = local_1a8;
      iVar17 = (int)local_188;
      if (((local_180 < 0) || (*(int *)((longlong)local_1a8 + 0x18) <= local_180)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      FVar24 = *(ForElementType<unsigned_int> *)((longlong)FVar23 + 0x10);
      if (FVar24 != (ForElementType<unsigned_int>)0x0) {
        FVar23 = FVar24;
      }
      uVar25 = *(uint *)(local_f8 + (longlong)FVar23);
      if (local_1b4 == iVar29 - 1U) {
        uVar25 = uVar25 & ~local_1b0;
      }
      else {
        uVar25 = uVar25 | local_1b0;
      }
      *(uint *)(local_f8 + (longlong)FVar23) = uVar25;
      pTVar2 = ((FSharedReferencer<1> *)&local_1a0->ArrayNum)->ReferenceController;
      local_138.Object = (FVisualizerEvent *)(local_1a0->AllocatorInstance).Data;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar25 = ((uint)((ulonglong)local_138.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_138.Object >> 4)) * -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      local_138.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar12 = local_f0;
      iVar19 = TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FVisualizerEvent_const_,1>_>
                         (local_f0,uVar25 >> 0x10 ^ uVar25,&local_138);
      if (iVar19 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_148d8ae6c:
        cVar33 = '\0';
        cVar27 = '\0';
      }
      else {
        lVar28 = (longlong)iVar19 * 0x20 + *(longlong *)&pTVar12->Elements;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pcVar32 = (char *)(lVar28 + 0x10);
        if (lVar28 == 0) {
          pcVar32 = (char *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pcVar32 == (char *)0x0) goto LAB_148d8ae6c;
        cVar27 = pcVar32[1];
        cVar33 = *pcVar32;
      }
      pTVar9 = local_1a0;
      pTVar30 = local_150;
      if (param_7) {
        pTVar4 = (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                 (pTVar8->AllocatorInstance).Data;
        if (((pTVar4 <= local_1a0) && (local_1a0 < pTVar4 + pTVar8->ArrayMax)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        iVar19 = pTVar8->ArrayNum;
        if (iVar19 == pTVar8->ArrayMax) {
          iVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        FVar23 = local_1a8;
        pTVar8->ArrayNum = iVar19 + 1;
        pFVar26 = (pTVar8->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
        *(FVisualizerEvent **)pFVar26 = (FVisualizerEvent *)(pTVar9->AllocatorInstance).Data;
        pTVar2 = ((FSharedReferencer<1> *)&pTVar9->ArrayNum)->ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar26 + 8) = pTVar2;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_170.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_170.NumBits = 0;
        local_170.MaxBits = 0;
        uVar25 = *(int *)((longlong)local_1a8 + 0x18) + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar25) {
          uVar18 = 0x80;
          if (0x80 < (int)uVar25) {
            uVar18 = uVar25;
          }
          local_170._24_8_ = (ulonglong)uVar18 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_170,0);
        }
        iVar19 = *(int *)((longlong)FVar23 + 0x18);
        local_170.NumBits = iVar19;
        iVar20 = 0;
        if (iVar19 != 0) {
          if (*(ForElementType<unsigned_int> *)((longlong)FVar23 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar23 = *(ForElementType<unsigned_int> *)((longlong)FVar23 + 0x10);
          }
          FVar24 = (ForElementType<unsigned_int>)&local_170;
          if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_170.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar24,(void *)FVar23,(ulonglong)(iVar19 + 0x1fU >> 5) << 2);
          iVar20 = local_170.NumBits;
        }
        local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_80.NeedsVerticalWire.NumBits = 0;
        local_80.NeedsVerticalWire.MaxBits = 0;
        uVar25 = iVar20 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar25) {
          uVar18 = 0x80;
          if (0x80 < (int)uVar25) {
            uVar18 = uVar25;
          }
          local_80.NeedsVerticalWire._24_8_ = (ulonglong)uVar18 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.NeedsVerticalWire,0);
          iVar20 = local_170.NumBits;
        }
        local_80.NeedsVerticalWire.NumBits = iVar20;
        if (iVar20 != 0) {
          FVar23 = (ForElementType<unsigned_int>)&local_170;
          if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar23 = local_170.AllocatorInstance.SecondaryData;
          }
          FVar24 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar24,(void *)FVar23,(ulonglong)(iVar20 + 0x1fU >> 5) << 2);
        }
        uVar25 = 0;
        if (local_1b4 == iVar29 - 1U) {
          uVar25 = 2;
        }
        local_80.bIsLastChild = uVar25 >> 1;
        local_80.bHasChildren = 0 < iVar17;
        local_80.ParentIndex = param_8;
        if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_170.AllocatorInstance.SecondaryData);
        }
        pTVar30 = local_150;
        pFVar5 = (FItemInfo *)(local_150->AllocatorInstance).Data;
        if (((pFVar5 <= &local_80) && (&local_80 < pFVar5 + local_150->ArrayMax)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        iVar17 = pTVar30->ArrayNum;
        if (iVar17 == pTVar30->ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
        }
        pTVar30->ArrayNum = iVar17 + 1;
        FItemInfo::FItemInfo
                  ((FItemInfo *)((pTVar30->AllocatorInstance).Data + (longlong)iVar17 * 0x28),
                   &local_80);
        if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData);
        }
        pSVar10 = local_140;
        pTVar21 = TAttribute<enum_ESelectionMode::Type>::Get(&local_140->field_0x3e8);
        if ((*pTVar21 != None) &&
           (cVar16 = (**(code **)(*(longlong *)&pSVar10->field_0x588 + 0x10))(), cVar16 != '\0')) {
          TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
          ::Emplace<TSharedPtr<FVisualizerEvent,1>_const_&>
                    (local_148,(TSharedPtr<FVisualizerEvent,1> *)local_108,(bool *)pTVar9);
        }
      }
      param_4 = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8;
      if ((cVar33 == '\0') && (cVar27 == '\0')) {
        bVar13 = false;
      }
      else {
        if ((param_7) && (cVar33 != '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        iVar17 = pTVar8->ArrayNum;
        local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_128.NumBits = 0;
        local_128.MaxBits = 0;
        uVar25 = *(int *)((longlong)local_1a8 + 0x18) + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar25) {
          uVar18 = 0x80;
          if (0x80 < (int)uVar25) {
            uVar18 = uVar25;
          }
          local_128._24_8_ = (ulonglong)uVar18 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128,0);
        }
        iVar29 = *(int *)((longlong)param_4 + 0x18);
        local_128.NumBits = iVar29;
        if (iVar29 != 0) {
          FVar23 = (ForElementType<unsigned_int>)param_4;
          if (*(ForElementType<unsigned_int> *)((longlong)param_4 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar23 = *(ForElementType<unsigned_int> *)((longlong)param_4 + 0x10);
          }
          FVar24 = (ForElementType<unsigned_int>)&local_128;
          if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_128.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar24,(void *)FVar23,(ulonglong)(iVar29 + 0x1fU >> 5) << 2);
        }
        iVar29 = (int)local_188;
        local_c8 = local_190;
        if (((int)local_188 < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar15)) {
          pcVar6 = (code *)swi(3);
          uVar14 = (*pcVar6)();
          return (bool)uVar14;
        }
        pTVar12 = local_e8;
        iStack_c0 = iVar29;
        local_a8._12_4_ = uStack_bc;
        local_a8.ArrayNum = iVar29;
        local_a8.DataPtr = local_c8;
        bVar13 = PopulateLinearizedItems
                           (local_140,&local_a8,pTVar8,pTVar30,&local_128,local_148,
                            (TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
                             *)local_e8,bVar13,iVar17 + -1);
        if ((cVar33 != '\0') || (bVar13)) {
          local_b8 = local_1a0;
          local_b0 = &local_1b6;
          local_1b6 = cVar33;
          local_1b5 = bVar13;
          TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&>_>
                    (pTVar12,(TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&>
                              *)(local_108 + 4),(bool *)&local_b8);
        }
      }
      if (((local_1b8 == false) && (cVar33 == '\0')) && (bVar13 == false)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      DestructItems<TSharedPtr<FVisualizerEvent,1>,int>(local_190,(int)local_188);
      if (local_190 != (TSharedPtr<FVisualizerEvent,1> *)0x0) {
        FMemory::Free(local_190);
      }
      local_1b4 = local_1b4 + 1;
      local_178 = local_178 + 1;
      iVar29 = local_198->ArrayNum;
      param_1 = local_198;
      local_1b8 = bVar13;
    } while ((int)local_1b4 < iVar29);
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(void **)((longlong)param_4 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_4 + 0x10));
  }
  return bVar13;
}

// PopulatePinnedItems @ 148d8b370

int __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulatePinnedItems
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2,
          FReGenerateResults *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auVar15 [16];
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> local_58;
  STreeView<TSharedPtr<FVisualizerEvent,1>_> *local_48;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *local_40;
  int local_38;
  
  iVar5 = -1;
  if (param_1->ArrayNum == 0) {
    return -1;
  }
  iVar14 = param_1->ArrayNum + -1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3->NewScrollOffset;
  auVar15 = roundpd(auVar15,auVar15,1);
  iVar6 = iVar14;
  if ((int)auVar15._0_8_ < iVar14) {
    iVar6 = (int)auVar15._0_8_;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    iVar4 = iVar6;
  }
  local_48 = this;
  local_40 = param_1;
  local_38 = iVar4;
  if ((param_3->bGeneratedPastLastItem != false) && (0.0 < param_3->NewScrollOffset)) {
    piVar7 = TAttribute<int>::Get((TAttribute<int> *)&this->field_0x9b0);
    iVar6 = *piVar7;
    iVar4 = STableViewBase::GetNumPinnedItems((STableViewBase *)this);
    iVar5 = iVar6;
    if (iVar4 < iVar6) {
      iVar5 = STableViewBase::GetNumPinnedItems((STableViewBase *)this);
    }
    iVar11 = 0x7fffffff;
    iVar4 = -1;
    iVar5 = (int)(param_3->NewScrollOffset - (double)iVar5);
    iVar10 = iVar5;
    if (iVar14 < iVar5) {
      return -1;
    }
    do {
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      `STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::
      operator()(&local_48,&local_58,iVar10);
      if (((iVar10 - iVar5 <= local_58.ArrayNum) &&
          (iVar12 = (local_58.ArrayNum - iVar10) + iVar5, iVar12 < iVar11)) &&
         (iVar10 - iVar5 <= iVar6)) {
        iVar11 = iVar12;
        iVar4 = iVar10;
      }
      DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
                ((TSharedPtr<FVisualizerEvent,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum
                );
      if ((TSharedPtr<FVisualizerEvent,1> *)local_58.AllocatorInstance.Data !=
          (TSharedPtr<FVisualizerEvent,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar14);
    if (iVar4 == -1) {
      return -1;
    }
    iVar5 = iVar4 - iVar5;
  }
  `STreeView<TSharedPtr<FVisualizerEvent,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
            (&local_48,param_2,iVar4);
  pFVar13 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum / 2;
  lVar9 = (longlong)iVar6;
  if (0 < iVar6) {
    pFVar8 = pFVar13 + (longlong)(param_2->ArrayNum + -1) * 0x10;
    do {
      uVar1 = *(undefined8 *)(pFVar8 + 8);
      uVar2 = *(undefined8 *)pFVar13;
      uVar3 = *(undefined8 *)(pFVar13 + 8);
      *(undefined8 *)pFVar13 = *(undefined8 *)pFVar8;
      *(undefined8 *)(pFVar13 + 8) = uVar1;
      pFVar13 = pFVar13 + 0x10;
      *(undefined8 *)pFVar8 = uVar2;
      *(undefined8 *)(pFVar8 + 8) = uVar3;
      lVar9 = lVar9 + -1;
      pFVar8 = pFVar8 + -0x10;
    } while (lVar9 != 0);
  }
  return iVar5;
}

// Private_DoesItemHaveChildren @ 148d8b6f0

bool __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_DoesItemHaveChildren
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x508)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x508) {
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
    return (bool)(*(byte *)(*(longlong *)&this->field_0x500 + 0x20 + (longlong)param_1 * 0x28) & 1);
  }
  return false;
}

// Private_GetNestingDepth @ 148d8bd70

int __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_GetNestingDepth
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x508)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x508) {
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
    return *(int *)(*(longlong *)&this->field_0x500 + 0x18 + (longlong)param_1 * 0x28) + -1;
  }
  return 0;
}

// Private_GetWiresNeededByDepth @ 148d8be70

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_GetWiresNeededByDepth
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x508)) {
    uVar3 = 0;
    if (param_1 < *(int *)&this->field_0x508) {
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
           (*(longlong *)&this->field_0x500 + (longlong)param_1 * 0x28);
  }
  pTVar4 = TableViewHelpers::GetEmptyBitArray();
  return pTVar4;
}

// Private_IsItemExpanded @ 148d8bf40

bool __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_IsItemExpanded
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSparseItemInfo *pFVar2;
  TSharedPtr<FVisualizerEvent_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  pFVar2 = TMapBase<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pFVar2 != (FSparseItemInfo *)0x0) && (pFVar2->bIsExpanded != false)) {
    return true;
  }
  return false;
}

// Private_IsLastChild @ 148d8c120

bool __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_IsLastChild
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < *(int *)&this->field_0x508)) {
    uVar4 = 0;
    if (param_1 < *(int *)&this->field_0x508) {
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
    return (bool)((byte)(*(uint *)(*(longlong *)&this->field_0x500 + 0x20 + (longlong)param_1 * 0x28
                                  ) >> 1) & 1);
  }
  return false;
}

// Private_OnExpanderArrowShiftClicked @ 148d8c3b0

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_OnExpanderArrowShiftClicked
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          bool param_2)

{
  char cVar1;
  longlong *plVar2;
  FVisualizerEvent *local_48;
  TReferenceControllerBase<1> *local_40;
  FReadAccessScope local_30;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x490,
             (FReadAccessScope *)&local_48);
  if ((*(int *)&this->field_0x4a0 != 0) && (*(longlong **)&this->field_0x498 != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)&this->field_0x498 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_48);
      local_40 = (param_1->SharedReferenceCount).ReferenceController;
      local_48 = param_1->Object;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x490,
                 &local_30);
      if (*(int *)&this->field_0x4a0 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&this->field_0x498;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_48,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x248))();
      goto LAB_148d8c48f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_148d8c48f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemExpansion @ 148d8c880

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_SetItemExpansion
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          bool param_2)

{
  bool bVar1;
  FVisualizerEvent *pFVar2;
  longlong *plVar3;
  FSparseItemInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> local_res18;
  TSharedPtr<FVisualizerEvent_const_,1> local_58;
  FReadAccessScope local_48;
  
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar4 = TMapBase<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_58);
  if (pFVar4 == (FSparseItemInfo *)0x0) {
    if (!param_2) goto LAB_148d8c9ec;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._1_1_ = 0;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FVisualizerEvent *)param_1;
    TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&> *)
               &stack0x00000008,(bool *)&local_58);
  }
  else {
    bVar1 = pFVar4->bIsExpanded;
    local_res18._padding_._1_1_ = pFVar4->bHasExpandedChildren;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FVisualizerEvent *)param_1;
    TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<FVisualizerEvent,1>_const_&,FSparseItemInfo_&&> *)
               &stack0x00000008,(bool *)&local_58);
    if (bVar1 == param_2) goto LAB_148d8c9ec;
  }
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x520,&local_48)
  ;
  if ((*(int *)&this->field_0x530 == 0) ||
     (plVar3 = *(longlong **)&this->field_0x528, plVar3 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
  }
  else {
    local_58.Object = pFVar2;
    local_58.SharedReferenceCount.ReferenceController = pTVar5;
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_58,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x248))();
LAB_148d8c9ec:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SignalSelectionChanged @ 148d8d010

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_SignalSelectionChanged
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,Type param_1)

{
  bool bVar1;
  char cVar2;
  Type *pTVar3;
  TIterator *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  TIterator local_58;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar3 = TAttribute<enum_ESelectionMode::Type>::Get(&this[-1].field_0x960);
  if (*pTVar3 != None) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x378,
               (FReadAccessScope *)&local_58);
    if (((*(int *)&this->field_0x388 == 0) || (*(longlong **)&this->field_0x380 == (longlong *)0x0))
       || (cVar2 = (**(code **)(**(longlong **)&this->field_0x380 + 0x38))(), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_58);
    if (bVar1) {
      if (*(int *)&this->field_0x288 - *(int *)&this->field_0x2b4 < 1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        local_58._padding_ = (longlong)pTVar6;
      }
      else {
        pTVar4 = TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                 ::TIterator::TIterator
                           (&local_58,
                            (TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                             *)&this->field_0x280);
        lVar5 = (longlong)*(int *)((longlong)&pTVar4->_padding_ + 4);
        pTVar6 = *(TReferenceControllerBase<1> **)
                  (*(longlong *)pTVar4->_padding_ + 8 + lVar5 * 0x18);
        local_58._padding_ = *(undefined8 *)(*(longlong *)pTVar4->_padding_ + lVar5 * 0x18);
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58._padding_ = (longlong)pTVar6;
      TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
      ::ExecuteIfBound(&this->field_0x378,(TSharedPtr<FVisualizerEvent,1> *)&local_58,param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
  }
  if (this->field_0x54a == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148d8d168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x2f0))(&this[-1].field_0x578);
  return;
}

// Private_UpdateParentHighlights @ 148d8d180

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Private_UpdateParentHighlights
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  undefined8 local_98;
  longlong local_90;
  undefined1 *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  (**(code **)(*(longlong *)&this->field_0x588 + 0x80))(&this->field_0x588);
  local_88 = &this->field_0x808;
  iStack_80 = 0;
  iVar2 = *(int *)&this->field_0x830;
  local_78 = &this->field_0x818;
  local_68 = 0;
  uStack_7c = 1;
  iStack_6c = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)&this->field_0x828;
    if (*(uint **)&this->field_0x828 == (uint *)0x0) {
      puVar10 = (uint *)local_78;
    }
    uVar8 = *puVar10;
    while (uVar8 == 0) {
      lVar6 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_148d8d23d;
      uVar8 = puVar10[lVar6 + 1];
    }
    uStack_7c = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_7c * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_6c = (int)lVar6 + -1 + local_68;
    if (iVar2 < iStack_6c) {
      iStack_6c = iVar2;
    }
  }
LAB_148d8d23d:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = (longlong *)local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar2) {
    do {
      pFVar7 = (this->LinearizedItems).AllocatorInstance.Data;
      if (pFVar7 != pFVar7 + (longlong)(this->LinearizedItems).ArrayNum * 0x10) {
        pFVar9 = pFVar7;
        do {
          if (*(longlong *)pFVar9 ==
              *(longlong *)(*local_58 + (longlong)TStack_50.CurrentBitIndex * 0x18)) {
            uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar7 >> 4);
            if ((-1 < (int)uVar8) && ((int)uVar8 < (this->DenseItemInfos).ArrayNum)) {
              uVar5 = 0;
              if ((int)uVar8 < (this->DenseItemInfos).ArrayNum) {
                uVar5 = ~uVar8 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              for (uVar8 = *(uint *)((this->DenseItemInfos).AllocatorInstance.Data +
                                    (longlong)(int)uVar8 * 0x28 + 0x24); uVar8 != 0xffffffff;
                  uVar8 = *(uint *)((this->DenseItemInfos).AllocatorInstance.Data +
                                   (longlong)(int)uVar8 * 0x28 + 0x24)) {
                uVar5 = 0;
                if ((int)uVar8 < (this->LinearizedItems).ArrayNum) {
                  uVar5 = ~uVar8 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar7 = (this->LinearizedItems).AllocatorInstance.Data +
                         (longlong)(int)uVar8 * 0x10;
                pcVar3 = *(code **)(*(longlong *)&this->field_0x588 + 0x78);
                local_98 = *(undefined8 *)pFVar7;
                local_90 = *(longlong *)(pFVar7 + 8);
                if (local_90 != 0) {
                  LOCK();
                  *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
                  UNLOCK();
                }
                (*pcVar3)(&this->field_0x588,&local_98,1);
                uVar5 = 0;
                if ((int)uVar8 < (this->DenseItemInfos).ArrayNum) {
                  uVar5 = ~uVar8 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
            break;
          }
          pFVar9 = pFVar9 + 0x10;
        } while (pFVar9 != pFVar7 + (longlong)(this->LinearizedItems).ArrayNum * 0x10);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return;
}

// ReGenerateItems @ 148d8e100

FReGenerateResults * __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::ReGenerateItems
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,
          FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  int iVar1;
  bool *pbVar2;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> local_18;
  
  SListView<TSharedPtr<FVisualizerEvent,1>_>::ReGenerateItems
            ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)this,__return_storage_ptr__,param_1);
  pbVar2 = TAttribute<bool>::Get(&this->bShouldStackHierarchyHeaders);
  if (*pbVar2 == false) {
    STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = PopulatePinnedItems(this,&this->LinearizedItems,&local_18,__return_storage_ptr__);
    SListView<TSharedPtr<FVisualizerEvent,1>_>::ReGeneratePinnedItems
              ((SListView<TSharedPtr<FVisualizerEvent,1>_> *)this,&local_18,param_1,iVar1);
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TSharedPtr<FVisualizerEvent,1> *)local_18.AllocatorInstance.Data !=
        (TSharedPtr<FVisualizerEvent,1> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// RebuildList @ 148d8e460

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::RebuildList
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->LinearizedItems).AllocatorInstance.Data,
             (this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar1);
  }
  SListView<TSharedPtr<FVisualizerEvent,1>_>::FWidgetGenerator::Clear
            ((FWidgetGenerator *)&this->field_0x590);
  SListView<TSharedPtr<FVisualizerEvent,1>_>::FWidgetGenerator::Clear
            ((FWidgetGenerator *)&this->field_0x660);
                    /* WARNING: Could not recover jumptable at 0x000148d8e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// RequestListRefresh @ 148d8f150

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::RequestListRefresh
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this)

{
  if (this->bTreeItemsAreDirty == false) {
    this->bTreeItemsAreDirty = true;
    STableViewBase::RequestListRefresh((STableViewBase *)this);
    return;
  }
  return;
}

// Tick @ 148d91db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STreeView<TSharedPtr<FVisualizerEvent,1>_>::Tick
          (STreeView<TSharedPtr<FVisualizerEvent,1>_> *this,FGeometry *param_1,double param_2,
          float param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
  *this_00;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *pIVar5;
  FVisualizerEvent *pFVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulonglong *puVar12;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  *pTVar13;
  uint uVar14;
  FVisualizerEvent *pFVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [12];
  uint uStack_1ec;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> local_1e8;
  TBitArray<FDefaultBitArrayAllocator> local_1d8;
  undefined1 local_1b8 [32];
  void *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  void *local_178;
  undefined4 local_170;
  undefined1 local_168 [32];
  void *local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  local_118;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar9 = false;
  bVar17 = false;
  local_1f8._0_8_ = local_1f8._0_8_ & 0xffffffff00000000;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId582,"STreeView::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x246);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_STreeView<TSharedPtr<FVisualizerEvent,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId582);
  }
  if ((this->bTreeItemsAreDirty == false) || (*(longlong *)&this->field_0x2b8 == 0))
  goto LAB_148d924e5;
  this->bTreeItemsAreDirty = false;
  bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  if ((!bVar10) ||
     ((this->TreeViewSource).Ptr == (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)0x0))
  goto LAB_148d924e5;
  pTVar3 = &this->LinearizedItems;
  local_168._0_8_ = (FScriptContainerElement *)0x0;
  local_168._8_8_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_13c = 0x80;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (ForElementType<FSetElementId>)0x0;
  local_120 = 0;
  local_1b8._0_8_ = (FScriptContainerElement *)0x0;
  local_1b8._8_8_ = 0;
  local_198 = (void *)0x0;
  local_190 = 0x8000000000;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_178 = (void *)0x0;
  local_170 = 0;
  local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.ArrayNum = 0;
  local_1e8.ArrayMax = 0;
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(pTVar3->AllocatorInstance).Data,
             (this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pIVar5 = (this->TreeViewSource).Ptr;
  local_1d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1d8.NumBits = 0;
  local_1d8.MaxBits = 0x80;
  if (pIVar5 == (IItemsSource<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    local_1f8._0_8_ = (FVisualizerEvent *)0x0;
    puVar12 = (ulonglong *)local_1f8;
    stack0xfffffffffffffe10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1ec << 0x20);
  }
  else {
    puVar12 = (ulonglong *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1f8);
  }
  local_1f8._0_8_ = *puVar12;
  unique0x10000613 = (TReferenceControllerBase<1> *)puVar12[1];
  PopulateLinearizedItems
            (this,(TArrayView<TSharedPtr<FVisualizerEvent,1>_const_,int> *)local_1f8,pTVar3,
             &local_1e8,&local_1d8,
             (TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
              *)local_168,
             (TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
              *)local_1b8,true,-1);
  if (this->bAllowInvisibleItemSelection == false) {
    if (*(int *)&this->field_0x810 - *(int *)&this->field_0x83c == local_168._8_4_ - local_134) {
      pTVar13 = TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                ::Difference((TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                              *)&this->field_0x808,&local_c8,
                             (TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                              *)local_168);
      bVar9 = true;
      bVar17 = false;
      if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1) {
        pTVar13 = TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                  ::Difference((TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                                *)local_168,&local_118,
                               (TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                                *)&this->field_0x808);
        bVar9 = true;
        bVar17 = true;
        if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1)
        goto LAB_148d92022;
      }
    }
    bVar10 = true;
  }
  else {
LAB_148d92022:
    bVar10 = false;
  }
  if (bVar17) {
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  if (bVar9) {
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  bVar17 = false;
  if (bVar10) {
    TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                 *)&this->field_0x808,
                (TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                 *)local_168);
    pFVar6 = *(FVisualizerEvent **)&this->field_0x868;
    pFVar15 = (FVisualizerEvent *)local_1f8._0_8_;
    if (pFVar6 == (FVisualizerEvent *)0x0) {
LAB_148d92135:
      bVar9 = true;
    }
    else {
      pFVar15 = *(FVisualizerEvent **)&this->field_0x870;
      bVar17 = true;
      if (pFVar15 != (FVisualizerEvent *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->Duration =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar15->Duration =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar15->Duration =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
        UNLOCK();
      }
      uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      local_1f8._0_8_ = pFVar6;
      unique0x10000ca7 = (TReferenceControllerBase<1> *)pFVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
      iVar11 = TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FVisualizerEvent_const_,1>_>
                         ((TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                           *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                          (TSharedPtr<FVisualizerEvent_const_,1> *)local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
      if (iVar11 == -1) goto LAB_148d92135;
      bVar9 = false;
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    bVar17 = false;
    if (bVar9) {
      TListTypeTraits<TSharedPtr<FVisualizerEvent,1>,void>::ResetPtr
                ((TSharedPtr<FVisualizerEvent,1> *)&this->field_0x868);
      TListTypeTraits<TSharedPtr<FVisualizerEvent,1>,void>::ResetPtr
                ((TSharedPtr<FVisualizerEvent,1> *)&this->field_0x858);
    }
    else {
      pFVar6 = *(FVisualizerEvent **)&this->field_0x858;
      pFVar15 = (FVisualizerEvent *)local_1f8._0_8_;
      if (pFVar6 == (FVisualizerEvent *)0x0) {
LAB_148d92210:
        bVar9 = true;
      }
      else {
        pFVar15 = *(FVisualizerEvent **)&this->field_0x860;
        bVar17 = true;
        if (pFVar15 != (FVisualizerEvent *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->Duration =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar15->Duration =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar15->Duration =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->Duration + 1);
          UNLOCK();
        }
        uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        local_1f8._0_8_ = pFVar6;
        unique0x10000caf = (TReferenceControllerBase<1> *)pFVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        iVar11 = TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TSharedPtr<FVisualizerEvent_const_,1>_>
                           ((TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
                             *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                            (TSharedPtr<FVisualizerEvent_const_,1> *)local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        if (iVar11 == -1) goto LAB_148d92210;
        bVar9 = false;
      }
      if (bVar17) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
      }
      if (bVar9) {
        TSharedPtr<FVisualizerEvent,1>::operator=
                  ((TSharedPtr<FVisualizerEvent,1> *)&this->field_0x858,
                   (TSharedPtr<FVisualizerEvent,1> *)&this->field_0x868);
      }
    }
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))();
  }
  this_00 = &this->SparseItemInfos;
  if (this_00 !=
      (TMap<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo,0>_>
       *)local_1b8) {
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->SparseItemInfos).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar2 = &(this->SparseItemInfos).field_0x10;
    *(undefined8 *)this_00 = local_1b8._0_8_;
    *(undefined4 *)&(this->SparseItemInfos).field_0x8 = local_1b8._8_4_;
    *(undefined4 *)&(this->SparseItemInfos).field_0xc = local_1b8._12_4_;
    local_1b8._0_8_ = (FScriptContainerElement *)0x0;
    local_1b8._8_8_ = 0;
    if (puVar2 != local_1b8 + 0x10) {
      if (local_198 == (void *)0x0) {
        *(undefined8 *)puVar2 = local_1b8._16_8_;
        *(undefined8 *)&(this->SparseItemInfos).field_0x18 = local_1b8._24_8_;
      }
      pvVar7 = *(void **)&(this->SparseItemInfos).field_0x20;
      if (pvVar7 != (void *)0x0) {
        FMemory::Free(pvVar7);
      }
      *(void **)&(this->SparseItemInfos).field_0x20 = local_198;
      *(undefined4 *)&(this->SparseItemInfos).field_0x28 = (undefined4)local_190;
      *(uint *)&(this->SparseItemInfos).field_0x2c = local_190._4_4_;
      local_190 = 0;
      local_198 = (void *)0x0;
    }
    *(undefined4 *)&(this->SparseItemInfos).field_0x30 = local_188;
    *(undefined4 *)&(this->SparseItemInfos).field_0x34 = local_184;
    local_184 = 0;
    local_188 = 0xffffffff;
    if (local_178 == (void *)0x0) {
      *(undefined4 *)&(this->SparseItemInfos).field_0x38 = local_180;
    }
    pvVar7 = *(void **)&(this->SparseItemInfos).field_0x40;
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    *(void **)&(this->SparseItemInfos).field_0x40 = local_178;
    *(undefined4 *)&(this->SparseItemInfos).field_0x48 = local_170;
    local_170 = 0;
    local_178 = (void *)0x0;
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
    (**(code **)(*(longlong *)this + 0x2f0))(this);
  }
  DestructItems<FItemInfo,int>((FItemInfo *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
  if ((FItemInfo *)local_1e8.AllocatorInstance.Data != (FItemInfo *)0x0) {
    FMemory::Free(local_1e8.AllocatorInstance.Data);
  }
  local_170 = 0;
  if (local_178 != (void *)0x0) {
    FMemory::Free(local_178);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FVisualizerEvent,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1b8,0,local_1b8._8_4_);
  bVar17 = local_1b8._12_4_ != 0;
  local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  if (bVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
  }
  uVar14 = local_190._4_4_;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_190 = (ulonglong)local_190._4_4_ << 0x20;
  if (0x80 < uVar14) {
    local_190 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10),0);
  }
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b8._0_8_);
  }
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FVisualizerEvent,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,0,local_168._8_4_);
  bVar17 = local_168._12_4_ != 0;
  local_168._8_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
  if (bVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_168,0,(int *)(local_168 + 0xc));
  }
  local_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10),0);
  }
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  if ((FScriptContainerElement *)local_168._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
LAB_148d924e5:
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

