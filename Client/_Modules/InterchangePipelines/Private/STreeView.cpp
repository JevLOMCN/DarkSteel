// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 20

// ~STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> @ 14e769a40

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
~STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this)

{
  void *pvVar1;
  IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pIVar2;
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
  if (pIVar2 != (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
                0x0) {
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
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             (this->LinearizedItems).AllocatorInstance.Data,(this->LinearizedItems).ArrayNum);
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  ~SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
            ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this);
  return;
}

// operator() @ 14e76fcd0

void __thiscall
`STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulatePinnedItems'::
__l2::<lambda_1>::operator()
          (void *this,
          TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
          *param_1,int param_2)

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
LAB_14e76fd10:
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
          goto LAB_14e76fd10;
        }
      }
    } while (iVar1 != -1);
  }
  return;
}

// Construct @ 14e784b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Construct
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          FArguments *param_1)

{
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
  *pTVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pIVar5;
  IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> IVar6;
  FTableViewStyle *pFVar7;
  STextBlock *pSVar8;
  code *pcVar9;
  char cVar10;
  bool bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_>_>
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
  undefined1 local_948 [8];
  FDelegateAllocation local_940;
  undefined1 local_930 [8];
  ForAnyElementType local_928;
  int local_920;
  undefined1 local_918 [8];
  ForAnyElementType local_910;
  int local_908;
  undefined1 local_900 [8];
  ForAnyElementType local_8f8;
  int local_8f0;
  undefined1 local_8e8 [8];
  ForAnyElementType local_8e0;
  int local_8d8;
  undefined1 local_8d0 [8];
  ForAnyElementType local_8c8;
  int local_8c0;
  FString local_8b8;
  undefined1 local_8a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_8a0;
  ForAnyElementType FStack_898;
  ulonglong local_890;
  undefined1 local_888 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_880;
  ForAnyElementType FStack_878;
  ulonglong local_870;
  undefined1 local_868 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_860;
  ForAnyElementType FStack_858;
  ulonglong local_850;
  undefined1 local_848 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_838;
  ForAnyElementType FStack_830;
  ulonglong local_828;
  SWidget *local_820;
  TReferenceControllerBase<1> *local_818;
  STextBlock *local_810;
  TReferenceControllerBase<1> *pTStack_808;
  TSharedRef<ISlateMetaData,1> local_800;
  TSharedRef<SWidget,1> local_7f0;
  FDestructionSentinel local_7e0;
  FDestructionSentinel local_7c8;
  FDestructionSentinel local_7b0;
  FDestructionSentinel local_798;
  FDestructionSentinel local_780;
  FDestructionSentinel local_768;
  FDestructionSentinel local_750;
  FDestructionSentinel local_738;
  FDestructionSentinel local_720;
  FDestructionSentinel local_708;
  FDestructionSentinel local_6f0;
  FDelegateAllocation *local_6d8;
  TAttribute<FText> local_6d0;
  FReadAccessScope local_6a0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_688;
  TSharedRef<STextBlock,1> local_670;
  FText local_660;
  TSharedRef<SWidget,1> local_650;
  undefined1 local_640 [32];
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  FReadAccessScope local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x760,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x778,&param_1->_OnRefreshRow);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnRowReleased);
  if (&param_1->_OnItemScrolledIntoView !=
      (TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
       *)&this->field_0x7d8) {
    local_930 = (undefined1  [8])0x0;
    local_928.Data = (FScriptContainerElement *)0x0;
    local_920 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnItemScrolledIntoView,&local_5d8);
    if ((*(int *)&(param_1->_OnItemScrolledIntoView).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnItemScrolledIntoView).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_930);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x7d8,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_930);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_930,
               (FWriteAccessScope *)&local_780);
    if ((local_920 != 0) && (local_928.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_928.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_928,0,0,0x10);
      local_920 = 0;
    }
    if (local_780.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_780.Accessor,&local_780);
    }
    if (local_928.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_930);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  this_00 = &this->OnGetChildren;
  if (&param_1->_OnGetChildren != this_00) {
    local_918 = (undefined1  [8])0x0;
    local_910.Data = (FScriptContainerElement *)0x0;
    local_908 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetChildren,
               &local_5c0);
    if ((*(int *)&(param_1->_OnGetChildren).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_918);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_918);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_918,
               (FWriteAccessScope *)&local_768);
    if ((local_908 != 0) && (local_910.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_910.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_910,0,0,0x10);
      local_908 = 0;
    }
    if (local_768.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_768.Accessor,&local_768);
    }
    if (local_910.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_910.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_918);
  }
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,bool),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnSetExpansionRecursive,&param_1->_OnSetExpansionRecursive);
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_7f0);
  pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
  pSVar4 = pTVar12->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7f0.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_820 = pSVar4;
  local_818 = pTVar3;
  TVar13 = FArguments::MakeTreeItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_640);
  pTVar1 = &this->TreeViewSource;
  if ((IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)pTVar1 !=
      TVar13.Ptr) {
    pIVar5 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
                  *TVar13.Ptr;
    *TVar13.Ptr = (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>)
                  0x0;
    if (pIVar5 != (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
                  0x0) {
      (**(code **)*pIVar5)(pIVar5,1);
    }
  }
  (**(code **)(*(longlong *)this + 0x248))(this);
  IVar6 = *TVar13.Ptr;
  if (IVar6 != (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>)0x0)
  {
    (*(code *)**(undefined8 **)IVar6)(IVar6,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x960,&param_1->_OnKeyDownHandler);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
               *)&this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  if (&param_1->_OnSelectionChanged !=
      (TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,ESelectInfo::Type),FDefaultDelegateUserPolicy>
       *)&this->field_0x900) {
    local_900 = (undefined1  [8])0x0;
    local_8f8.Data = (FScriptContainerElement *)0x0;
    local_8f0 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnSelectionChanged,&local_608);
    if ((*(int *)&(param_1->_OnSelectionChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnSelectionChanged).field_0x8, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_900);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x900,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_900);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_900,
               (FWriteAccessScope *)&local_7c8);
    if ((local_8f0 != 0) && (local_8f8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8f8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8f8,0,0,0x10);
      local_8f0 = 0;
    }
    if (local_7c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7c8.Accessor,&local_7c8);
    }
    if (local_8f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_900);
  }
  TDelegate<void___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,bool),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnExpansionChanged,&param_1->_OnExpansionChanged);
  if (&param_1->_OnIsSelectableOrNavigable !=
      (TDelegate<bool___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
       *)&this->field_0x918) {
    local_8e8 = (undefined1  [8])0x0;
    local_8e0.Data = (FScriptContainerElement *)0x0;
    local_8d8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &param_1->_OnIsSelectableOrNavigable,&local_5f0);
    if ((*(int *)&(param_1->_OnIsSelectableOrNavigable).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(param_1->_OnIsSelectableOrNavigable).field_0x8,
       plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_8e8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5f0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->field_0x918,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_8e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8e8,
               (FWriteAccessScope *)&local_7b0);
    if ((local_8d8 != 0) && (local_8e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8e0,0,0,0x10);
      local_8d8 = 0;
    }
    if (local_7b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7b0.Accessor,&local_7b0);
    }
    if (local_8e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_8e8);
  }
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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,(FReadAccessScope *)(local_640 + 8));
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar2 == (longlong *)0x0)
     ) {
LAB_14e7851c2:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_640 + 8));
    local_948 = (undefined1  [8])0x0;
    local_940.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_940.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_6f0);
    local_6d8 = &local_940;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,&local_940);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar14[3] = TListTypeTraits<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,void>
                   ::DebugDump;
    }
    if (local_6f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f0.Accessor,&local_6f0);
    }
    TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
                *)local_948);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_948,
               (FWriteAccessScope *)&local_7e0);
    if ((local_940.DelegateSize != 0) &&
       (local_940.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_940.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_940,0,0,0x10);
      local_940.DelegateSize = 0;
    }
    if (local_7e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7e0.Accessor,&local_7e0);
    }
    if (local_940.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_940.DelegateAllocator);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_948;
  }
  else {
    cVar10 = (**(code **)(*plVar2 + 0x38))();
    if (cVar10 == '\0') goto LAB_14e7851c2;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_640 + 8));
    local_8d0 = (undefined1  [8])0x0;
    local_8c8.Data = (FScriptContainerElement *)0x0;
    local_8c0 = 0;
    TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
                *)local_8d0,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
    ::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
                *)&this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>),FDefaultDelegateUserPolicy>
                *)local_8d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_8d0,
               (FWriteAccessScope *)&local_798);
    if ((local_8c0 != 0) && (local_8c8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_8c8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_8c8,0,0,0x10);
      local_8c0 = 0;
    }
    if (local_798.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_798.Accessor,&local_798);
    }
    if (local_8c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c8.Data);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_8d0;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_02);
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
  pFVar7 = param_1->_TreeViewStyle;
  this->Style = pFVar7;
  if (pFVar7 == (FTableViewStyle *)0x0) {
    local_848._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_848._0_8_ = &pFVar7->BackgroundBrush;
  }
  local_848[8] = true;
  local_828 = 0;
  local_838.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_830.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_848);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_838,(FWriteAccessScope *)&local_750);
  if (((int)local_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_830.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
    local_828 = local_828 & 0xffffffff00000000;
  }
  if (local_750.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_750.Accessor,&local_750);
  }
  if (FStack_830.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_830.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_838.AccessDetector);
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9b0,&param_1->_MaxPinnedItems);
  TAttribute<int>::operator=((TAttribute<int> *)&this->field_0x9d0,&param_1->_MaxPinnedItems);
  local_8b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_8b8.Data.ArrayNum = 0;
  local_8b8.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_620
            );
  if ((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0)) {
LAB_14e7854a5:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    ::FString::AppendChars(&local_8b8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  else {
    cVar10 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar10 == '\0') goto LAB_14e7854a5;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
  }
  if (pTVar1->Ptr ==
      (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) {
    ::FString::AppendChars(&local_8b8,L"Please specify a TreeItemsSource. \n",0x23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_6a0);
  if ((*(int *)&(this->OnGetChildren).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnGetChildren).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar10 = (**(code **)(*plVar2 + 0x38))();
    if (cVar10 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_6a0);
      goto LAB_14e78553b;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_6a0);
  ::FString::AppendChars(&local_8b8,L"Please specify an OnGetChildren. \n",0x22);
LAB_14e78553b:
  iVar21 = local_8b8.Data.ArrayNum + -1;
  if (local_8b8.Data.ArrayNum == 0) {
    iVar21 = 0;
  }
  if (iVar21 < 1) {
    local_868[0] = LeftAligned;
    local_868[1] = true;
    local_888._0_4_ = 0.0;
    local_8a8._0_4_ = 0.0;
    local_860.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_858.Data = (FScriptContainerElement *)0x0;
    local_850 = 0;
    local_888[4] = true;
    local_880.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_878.Data = (FScriptContainerElement *)0x0;
    local_870 = 0;
    local_8a8[4] = true;
    local_8a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_898.Data = (FScriptContainerElement *)0x0;
    local_890 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_8a8,(TAttribute<float> *)local_888,
               (TAttribute<EListItemAlignment> *)local_868,&param_1->_HeaderRow,
               &param_1->_ExternalScrollbar,Orient_Vertical,&param_1->_OnTreeViewScrolled,
               param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_8a0,(FWriteAccessScope *)&local_738);
    if (((int)local_890 != 0) && (FStack_898.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_898.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_898,0,0,0x10);
      local_890 = local_890 & 0xffffffff00000000;
    }
    if (local_738.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
    }
    if (FStack_898.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_898.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_8a0.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_880,(FWriteAccessScope *)&local_720);
    if (((int)local_870 != 0) && (FStack_878.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_878.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_878,0,0,0x10);
      local_870 = local_870 & 0xffffffff00000000;
    }
    if (local_720.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
    }
    if (FStack_878.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_878.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_880.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_860,(FWriteAccessScope *)&local_708);
    if (((int)local_850 != 0) && (FStack_858.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_858.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_858,0,0,0x10);
      local_850 = local_850 & 0xffffffff00000000;
    }
    if (local_708.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
    }
    if (FStack_858.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_858.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_860.AccessDetector);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      this_01 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(this_01,param_1->_ScrollbarDragFocusCause);
    }
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_650);
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
              (local_650.SharedReferenceCount.ReferenceController);
    pTVar20 = ::operator_new(0x28);
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      local_800.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_800.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar20->SharedReferenceCount = (atomic<int>)0x1;
      pTVar20->WeakReferenceCount = (atomic<int>)0x1;
      pTVar20->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar4 != (SWidget *)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)
                  &pSVar4[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
        pTVar20[1]._padding_ =
             (longlong)
             &
             ___7__TTableViewMetadata_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____6B_
        ;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
        pTVar20[1]._padding_ =
             (longlong)
             &
             ___7__TTableViewMetadata_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00____6B_
        ;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar23;
        pTVar20[2]._padding_ = (longlong)pTVar3;
        LOCK();
        pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_800.Object = (ISlateMetaData *)(pTVar20 + 1);
      if ((TReferenceControllerBase<1> *)local_800.Object == (TReferenceControllerBase<1> *)0x0) {
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
      local_800.SharedReferenceCount.ReferenceController = pTVar20;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_800);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_800.SharedReferenceCount.ReferenceController);
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
    pFVar17 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar18 = FText::FromString(&local_660,&local_8b8);
    FText::FText(&local_6d0.Value,pFVar18);
    local_6d0.bIsSet = true;
    local_6d0.Getter._16_8_ = 0;
    local_6d0.Getter._0_8_ = 0;
    local_6d0.Getter._8_8_ = 0;
    pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_6d0);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_688,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x151,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_688,&local_670,pFVar17);
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
    local_810 = pSVar8;
    pTStack_808 = pTVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FSlotBase::AfterContentOrOwnerAssigned(this_03);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_670.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_688._Widget.SharedReferenceCount.ReferenceController);
    if (local_660.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_660.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_8b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8b8.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateNewWidget @ 14e7b16c0

TSharedRef<ITableRow,1> * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::GenerateNewWidget
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1)

{
  SWidget *pSVar1;
  FSkeletonJoint *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  code *pcVar5;
  STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar6;
  char cVar7;
  bool bVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FArguments *pFVar10;
  FArguments *pFVar11;
  FText *pFVar12;
  TSharedRef<STextBlock,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TSharedRef<ITableRow,1> *pTVar15;
  FSharedReferencer<1> FVar16;
  TReferenceControllerBase<1> *pTVar17;
  longlong *plVar18;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_a08 [2];
  FText local_a00;
  bool local_9f0;
  undefined1 local_9e8 [8];
  ForAnyElementType FStack_9e0;
  ulonglong local_9d8;
  SWidget *local_9d0;
  TReferenceControllerBase<1> *local_9c8;
  SWidget *local_9c0;
  TReferenceControllerBase<1> *pTStack_9b8;
  TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
  local_9b0;
  FName local_998;
  FMemScope local_990;
  FName local_988;
  T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>
  local_980;
  FMemScope local_978;
  undefined8 local_970;
  FSharedReferencer<1> local_968;
  TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_960;
  TSharedRef<SWidget,1> local_950;
  FSkeletonJoint *local_940;
  TReferenceControllerBase<1> *local_938;
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_930;
  TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
  local_920;
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
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_8c8
            );
  if (((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0))
     || (cVar7 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c8);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_8f8);
    local_960.Object =
         (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
         pTVar9->Object;
    local_960.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_960.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_960.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_960.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8f8.SharedReferenceCount.ReferenceController);
    pFVar10 = STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
              FArguments::FArguments(&local_880);
    pFVar11 = STextBlock::FArguments::FArguments(&local_588);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_8d8,L"STreeView",L"BrokenSetupMessage",
                         L"OnGenerateWidget() not assigned.");
    FText::FText(&local_a00,pFVar12);
    local_9f0 = true;
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    local_9d8 = 0;
    local_9e8 = (undefined1  [8])0x0;
    FStack_9e0.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&(pFVar11->_Text).Value,&local_a00);
    (pFVar11->_Text).bIsSet = local_9f0;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar11->_Text).Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e8,
               (FWriteAccessScope *)&local_910);
    if (((int)local_9d8 != 0) && (FStack_9e0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_9e0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9e0,0,0,0x10);
      local_9d8 = local_9d8 & 0xffffffff00000000;
    }
    if (local_910.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
    }
    if (FStack_9e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_9e0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_9e8);
    if (local_a00.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a00.TextData.Reference + 0x10))();
    }
    FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_998 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_990,&local_998,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_8b0,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x361,local_res8);
    FMemScope::~FMemScope(&local_990);
    FLLMScope::~FLLMScope(local_res20);
    pTVar13 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_8b0,&local_8e8,pFVar11);
    pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar13->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9c0 = (pFVar10->_Content).Widget.Object;
    pTStack_9b8 = (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController;
    (pFVar10->_Content).Widget.Object = (SWidget *)pSVar4;
    (pFVar10->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9b8)
    ;
    local_980.Arg0 = &local_960;
    FLLMScope::FLLMScope(local_a08,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_988 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_978,&local_988,true);
    local_9b0._RequiredArgs = &local_980;
    local_9b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar14 = ::operator_new(0x408);
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFSkeletonJoint_UInterchangeGenericAssetsPipeline___00_____00_SharedPointerInternals__6B_
      ;
      STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
      STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
                ((STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
                 (pTVar14 + 1));
      pTVar17 = pTVar14;
    }
    TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>::
    TSharedRef<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
              (&local_930,
               (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
               (pTVar17 + 1),pTVar17);
    local_968.ReferenceController = local_930.SharedReferenceCount.ReferenceController;
    if (local_930.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_930.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9b0._Widget.Object = local_930.Object;
    local_970 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_9b0._Widget.SharedReferenceCount,&local_968);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_968.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_930.SharedReferenceCount.ReferenceController);
    pSVar6 = local_9b0._Widget.Object;
    if ((local_9b0._Widget.Object ==
         (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      pTVar15 = (TSharedRef<ITableRow,1> *)(*pcVar5)();
      return pTVar15;
    }
    SWidget::SetDebugInfo
              ((SWidget *)&pSVar6->_padding_,"STableRow<ItemType>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x35e,0x3f8);
    FMemScope::~FMemScope(&local_978);
    FLLMScope::~FLLMScope(local_a08);
    TSlateDecl<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>_&>_>
    ::operator<<=(&local_9b0,&local_920,pFVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_9b0._Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_8b0._Widget.SharedReferenceCount.ReferenceController);
    if (local_8d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_8d8.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_588);
    STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FArguments::
    ~FArguments(&local_880);
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
    FVar16.ReferenceController = local_960.SharedReferenceCount.ReferenceController;
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8c8);
    pTVar9 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_950);
    FVar16.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    pSVar1 = pTVar9->Object;
    if (FVar16.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_950.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_950.SharedReferenceCount.ReferenceController);
      LOCK();
      (FVar16.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar16.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar17 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_9d0 = pSVar1;
    local_9c8 = FVar16.ReferenceController;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,
               &local_898);
    if (*(int *)&this->field_0x758 == 0) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = *(longlong **)&this->field_0x750;
    }
    local_940 = pFVar2;
    local_938 = pTVar17;
    (**(code **)(*plVar18 + 0x60))(plVar18,__return_storage_ptr__,&local_940,&local_9d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_898);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnKeyDown @ 14e7cd840

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::OnKeyDown
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

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
LAB_14e7cdcc3:
    SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::OnKeyDown_Internal
              ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this,
               __return_storage_ptr__,param_1,param_2);
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
LAB_14e7cd9de:
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
            goto LAB_14e7cd9de;
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
      if (bVar16) goto LAB_14e7cdcc3;
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
            goto LAB_14e7cdbc5;
          }
        }
        uVar15 = 0xffffffff;
LAB_14e7cdbc5:
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

// PopulateLinearizedItems @ 14e7d2bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulateLinearizedItems
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>
          *param_1,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
                   *param_2,TArray<FItemInfo,TSizedDefaultAllocator<32>_> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
          *param_5,TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
                   *param_6,bool param_7,int param_8)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSkeletonJoint *pFVar3;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *pTVar4;
  FItemInfo *pFVar5;
  code *pcVar6;
  byte bVar7;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pSVar10;
  FSharedReferencer<1> FVar11;
  TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *pTVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  Type *pTVar21;
  uint uVar22;
  longlong *plVar23;
  ForElementType<unsigned_int> FVar24;
  ForElementType<unsigned_int> FVar25;
  FScriptContainerElement *pFVar26;
  char cVar27;
  longlong lVar28;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar29;
  uint uVar30;
  char *pcVar31;
  char cVar32;
  bool bVar33;
  undefined1 auStackY_208 [32];
  bool local_1b8;
  char local_1b6;
  undefined1 local_1b5;
  uint local_1b4;
  uint local_1b0;
  ForElementType<unsigned_int> local_1a8;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *local_1a0;
  TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int> *local_198;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *local_190;
  undefined8 local_188;
  int local_180;
  longlong local_178;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *local_150;
  TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
  *local_148;
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *local_140;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  longlong local_f8;
  TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_f0;
  TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_e8;
  FSkeletonJoint *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *local_b8;
  char *local_b0;
  TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int> local_a8;
  FReadAccessScope local_98;
  FItemInfo local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_148 = param_5;
  local_1a8 = (ForElementType<unsigned_int>)param_4;
  local_e8 = (TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)param_6;
  bVar33 = -1 < CpuChannel->Enabled;
  local_1a0 = param_2;
  local_198 = param_1;
  local_150 = param_3;
  local_140 = this;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId674,"STreeView::PopulateLinearizedItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x2a2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
               ::__l2::__CpuProfilerEventSpecId674);
  }
  TBitArray<FDefaultBitArrayAllocator>::Add(param_4,false);
  pTVar8 = local_1a0;
  bVar13 = false;
  iVar20 = param_1->ArrayNum;
  local_180 = param_4->NumBits + -1;
  local_1b8 = false;
  local_1b4 = 0;
  if (0 < iVar20) {
    local_178 = 0;
    bVar7 = (byte)local_180 & 0x1f;
    local_1b0 = 1 << bVar7 | 1U >> 0x20 - bVar7;
    local_100.ReferenceController = (TReferenceControllerBase<1> *)&this->OnGetChildren;
    local_f0 = (TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->SparseItemInfos;
    local_f8 = (longlong)((int)(local_180 + (local_180 >> 0x1f & 0x1fU)) >> 5) * 4;
    do {
      lVar28 = local_178;
      uVar22 = local_1b4;
      uVar30 = ~local_1b4;
      uVar17 = 0;
      if ((int)local_1b4 < iVar20) {
        uVar17 = uVar30 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      local_1a0 = (TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
                   *)(param_1->DataPtr + lVar28);
      local_190 = (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0;
      local_188 = 0;
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_bool___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId687,"STreeView_GetChildren",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
                   ,0x2af);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                   ::__l5::__CpuProfilerEventSpecId687);
      }
      uVar17 = 0;
      if ((int)uVar22 < iVar20) {
        uVar17 = uVar30 >> 0x1f;
      }
      if ((uVar17 == 0) &&
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
        plVar23 = (longlong *)0x0;
      }
      else {
        plVar23 = *(longlong **)&(FVar11.ReferenceController)->SharedReferenceCount;
      }
      local_e0 = pFVar3;
      local_d8 = pTVar2;
      (**(code **)(*plVar23 + 0x60))(plVar23,&local_e0,&local_190);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FVar24 = local_1a8;
      iVar1 = (int)local_188;
      if (((local_180 < 0) || (*(int *)((longlong)local_1a8 + 0x18) <= local_180)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      FVar25 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
      if (FVar25 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = FVar25;
      }
      uVar22 = *(uint *)(local_f8 + (longlong)FVar24);
      if (local_1b4 == iVar20 - 1U) {
        uVar22 = uVar22 & ~local_1b0;
      }
      else {
        uVar22 = uVar22 | local_1b0;
      }
      *(uint *)(local_f8 + (longlong)FVar24) = uVar22;
      pTVar2 = ((FSharedReferencer<1> *)&local_1a0->ArrayNum)->ReferenceController;
      local_138.Object = (FSkeletonJoint *)(local_1a0->AllocatorInstance).Data;
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
      uVar22 = ((uint)((ulonglong)local_138.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_138.Object >> 4)) * -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      local_138.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar12 = local_f0;
      iVar18 = TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
               ::
               FindIndexByHash<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>_>
                         (local_f0,uVar22 >> 0x10 ^ uVar22,&local_138);
      if (iVar18 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_14e7d2fac:
        cVar32 = '\0';
        cVar27 = '\0';
      }
      else {
        lVar28 = (longlong)iVar18 * 0x20 + *(longlong *)&pTVar12->Elements;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        pcVar31 = (char *)(lVar28 + 0x10);
        if (lVar28 == 0) {
          pcVar31 = (char *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pcVar31 == (char *)0x0) goto LAB_14e7d2fac;
        cVar27 = pcVar31[1];
        cVar32 = *pcVar31;
      }
      pTVar9 = local_1a0;
      pTVar29 = local_150;
      if (param_7) {
        pTVar4 = (TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
                  *)(pTVar8->AllocatorInstance).Data;
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
        iVar18 = pTVar8->ArrayNum;
        if (iVar18 == pTVar8->ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
        }
        FVar24 = local_1a8;
        pTVar8->ArrayNum = iVar18 + 1;
        pFVar26 = (pTVar8->AllocatorInstance).Data + (longlong)iVar18 * 0x10;
        *(FSkeletonJoint **)pFVar26 = (FSkeletonJoint *)(pTVar9->AllocatorInstance).Data;
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
        uVar22 = *(int *)((longlong)local_1a8 + 0x18) + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar17 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar17 = uVar22;
          }
          local_170._24_8_ = (ulonglong)uVar17 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_170,0);
        }
        iVar18 = *(int *)((longlong)FVar24 + 0x18);
        local_170.NumBits = iVar18;
        iVar19 = 0;
        if (iVar18 != 0) {
          if (*(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar24 = *(ForElementType<unsigned_int> *)((longlong)FVar24 + 0x10);
          }
          FVar25 = (ForElementType<unsigned_int>)&local_170;
          if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_170.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar25,(void *)FVar24,(ulonglong)(iVar18 + 0x1fU >> 5) << 2);
          iVar19 = local_170.NumBits;
        }
        local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)0x0;
        local_80.NeedsVerticalWire.NumBits = 0;
        local_80.NeedsVerticalWire.MaxBits = 0;
        uVar22 = iVar19 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar17 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar17 = uVar22;
          }
          local_80.NeedsVerticalWire._24_8_ = (ulonglong)uVar17 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_80.NeedsVerticalWire,0);
          iVar19 = local_170.NumBits;
        }
        local_80.NeedsVerticalWire.NumBits = iVar19;
        if (iVar19 != 0) {
          FVar24 = (ForElementType<unsigned_int>)&local_170;
          if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_170.AllocatorInstance.SecondaryData;
          }
          FVar25 = (ForElementType<unsigned_int>)&local_80;
          if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar25,(void *)FVar24,(ulonglong)(iVar19 + 0x1fU >> 5) << 2);
        }
        uVar22 = 0;
        if (local_1b4 == iVar20 - 1U) {
          uVar22 = 2;
        }
        local_80.bIsLastChild = uVar22 >> 1;
        local_80.bHasChildren = 0 < iVar1;
        local_80.ParentIndex = param_8;
        if (local_170.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_170.AllocatorInstance.SecondaryData);
        }
        pTVar29 = local_150;
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
        iVar20 = pTVar29->ArrayNum;
        if (iVar20 == pTVar29->ArrayMax) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar29->AllocatorInstance,&pTVar29->ArrayMax);
        }
        pTVar29->ArrayNum = iVar20 + 1;
        FItemInfo::FItemInfo
                  ((FItemInfo *)((pTVar29->AllocatorInstance).Data + (longlong)iVar20 * 0x28),
                   &local_80);
        if (local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_80.NeedsVerticalWire.AllocatorInstance.SecondaryData);
        }
        pSVar10 = local_140;
        pTVar21 = TAttribute<enum_ESelectionMode::Type>::Get(&local_140->field_0x3e8);
        if ((*pTVar21 != None) &&
           (cVar16 = (**(code **)(*(longlong *)&pSVar10->field_0x588 + 0x10))(), cVar16 != '\0')) {
          TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
          ::Emplace<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&>
                    (local_148,
                     (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)local_108,
                     (bool *)pTVar9);
        }
      }
      param_4 = (TBitArray<FDefaultBitArrayAllocator> *)local_1a8;
      if ((cVar32 == '\0') && (cVar27 == '\0')) {
        bVar13 = false;
      }
      else {
        if ((param_7) && (cVar32 != '\0')) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        iVar20 = pTVar8->ArrayNum;
        local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_128.NumBits = 0;
        local_128.MaxBits = 0;
        uVar22 = *(int *)((longlong)local_1a8 + 0x18) + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar22) {
          uVar17 = 0x80;
          if (0x80 < (int)uVar22) {
            uVar17 = uVar22;
          }
          local_128._24_8_ = (ulonglong)uVar17 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128,0);
        }
        iVar1 = *(int *)((longlong)param_4 + 0x18);
        local_128.NumBits = iVar1;
        if (iVar1 != 0) {
          FVar24 = (ForElementType<unsigned_int>)param_4;
          if (*(ForElementType<unsigned_int> *)((longlong)param_4 + 0x10) !=
              (ForElementType<unsigned_int>)0x0) {
            FVar24 = *(ForElementType<unsigned_int> *)((longlong)param_4 + 0x10);
          }
          FVar25 = (ForElementType<unsigned_int>)&local_128;
          if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar25 = local_128.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar25,(void *)FVar24,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
        }
        iVar1 = (int)local_188;
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
        iStack_c0 = iVar1;
        local_a8._12_4_ = uStack_bc;
        local_a8.ArrayNum = iVar1;
        local_a8.DataPtr = local_c8;
        bVar13 = PopulateLinearizedItems
                           (local_140,&local_a8,pTVar8,pTVar29,&local_128,local_148,
                            (TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
                             *)local_e8,bVar13,iVar20 + -1);
        if ((cVar32 != '\0') || (bVar13)) {
          local_b8 = local_1a0;
          local_b0 = &local_1b6;
          local_1b6 = cVar32;
          local_1b5 = bVar13;
          TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>_>
                    (pTVar12,(TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>
                              *)(local_108 + 4),(bool *)&local_b8);
        }
      }
      if (((local_1b8 == false) && (cVar32 == '\0')) && (bVar13 == false)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
                (local_190,(int)local_188);
      if (local_190 != (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
        FMemory::Free(local_190);
      }
      local_1b4 = local_1b4 + 1;
      local_178 = local_178 + 1;
      iVar20 = local_198->ArrayNum;
      param_1 = local_198;
      local_1b8 = bVar13;
    } while ((int)local_1b4 < iVar20);
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(void **)((longlong)param_4 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_4 + 0x10));
  }
  return bVar13;
}

// PopulatePinnedItems @ 14e7d34e0

int __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulatePinnedItems
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
          *param_1,TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
                   *param_2,FReGenerateResults *param_3)

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
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  local_58;
  STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *local_48;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *local_40;
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
      `STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
      PopulatePinnedItems'::__l2::<lambda_1>::operator()(&local_48,&local_58,iVar10);
      if (((iVar10 - iVar5 <= local_58.ArrayNum) &&
          (iVar12 = (local_58.ArrayNum - iVar10) + iVar5, iVar12 < iVar11)) &&
         (iVar10 - iVar5 <= iVar6)) {
        iVar11 = iVar12;
        iVar4 = iVar10;
      }
      DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
                ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
                 local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
          local_58.AllocatorInstance.Data !=
          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar14);
    if (iVar4 == -1) {
      return -1;
    }
    iVar5 = iVar4 - iVar5;
  }
  `STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::PopulatePinnedItems'
  ::__l2::<lambda_1>::operator()(&local_48,param_2,iVar4);
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

// Private_DoesItemHaveChildren @ 14e7d3f40

bool __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_DoesItemHaveChildren
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          int param_1)

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

// Private_GetNestingDepth @ 14e7d4ba0

int __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Private_GetNestingDepth
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          int param_1)

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

// Private_GetWiresNeededByDepth @ 14e7d4d00

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_GetWiresNeededByDepth
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          int param_1)

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

// Private_IsItemExpanded @ 14e7d4e00

bool __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Private_IsItemExpanded
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSparseItemInfo *pFVar2;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> local_18;
  
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
  pFVar2 = TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pFVar2 != (FSparseItemInfo *)0x0) && (pFVar2->bIsExpanded != false)) {
    return true;
  }
  return false;
}

// Private_IsLastChild @ 14e7d5150

bool __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Private_IsLastChild
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          int param_1)

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

// Private_OnExpanderArrowShiftClicked @ 14e7d55d0

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_OnExpanderArrowShiftClicked
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  FSkeletonJoint *local_48;
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
      goto LAB_14e7d56af;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_14e7d56af:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemExpansion @ 14e7d5e70

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_SetItemExpansion
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_1,bool param_2)

{
  bool bVar1;
  FSkeletonJoint *pFVar2;
  longlong *plVar3;
  FSparseItemInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> local_res18;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> local_58;
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
  pFVar4 = TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_58);
  if (pFVar4 == (FSparseItemInfo *)0x0) {
    if (!param_2) goto LAB_14e7d5fdc;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._1_1_ = 0;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FSkeletonJoint *)param_1;
    TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>
                *)&stack0x00000008,(bool *)&local_58);
  }
  else {
    bVar1 = pFVar4->bIsExpanded;
    local_res18._padding_._1_1_ = pFVar4->bHasExpandedChildren;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FSkeletonJoint *)param_1;
    TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_&,FSparseItemInfo_&&>
                *)&stack0x00000008,(bool *)&local_58);
    if (bVar1 == param_2) goto LAB_14e7d5fdc;
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
LAB_14e7d5fdc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SignalSelectionChanged @ 14e7d6920

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_SignalSelectionChanged
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          Type param_1)

{
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
  Private_SignalSelectionChanged
            ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this,
             param_1);
  if (this->field_0x54a != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014e7d6946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x2f0))();
    return;
  }
  return;
}

// Private_UpdateParentHighlights @ 14e7d6960

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
Private_UpdateParentHighlights
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this)

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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_14e7d6a1d;
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
LAB_14e7d6a1d:
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

// ReGenerateItems @ 14e7d8400

FReGenerateResults * __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::ReGenerateItems
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          FReGenerateResults *__return_storage_ptr__,FGeometry *param_1)

{
  int iVar1;
  bool *pbVar2;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  local_18;
  
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::ReGenerateItems
            ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this,
             __return_storage_ptr__,param_1);
  pbVar2 = TAttribute<bool>::Get(&this->bShouldStackHierarchyHeaders);
  if (*pbVar2 == false) {
    STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = PopulatePinnedItems(this,&this->LinearizedItems,&local_18,__return_storage_ptr__);
    SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::
    ReGeneratePinnedItems
              ((SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)this,
               &local_18,param_1,iVar1);
    DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
              ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
               local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
        local_18.AllocatorInstance.Data !=
        (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// RebuildList @ 14e7d87a0

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::RebuildList
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             (this->LinearizedItems).AllocatorInstance.Data,(this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar1);
  }
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FWidgetGenerator::
  Clear((FWidgetGenerator *)&this->field_0x590);
  SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::FWidgetGenerator::
  Clear((FWidgetGenerator *)&this->field_0x660);
                    /* WARNING: Could not recover jumptable at 0x00014e7d881c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// RequestListRefresh @ 14e7dc670

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::RequestListRefresh
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this)

{
  if (this->bTreeItemsAreDirty == false) {
    this->bTreeItemsAreDirty = true;
    STableViewBase::RequestListRefresh((STableViewBase *)this);
    return;
  }
  return;
}

// Tick @ 14e7e4780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Tick
          (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *this,
          FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
  *this_00;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *pIVar5;
  FSkeletonJoint *pFVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulonglong *puVar12;
  TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
  *pTVar13;
  uint uVar14;
  FSkeletonJoint *pFVar15;
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
  TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
  local_118;
  TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar9 = false;
  bVar17 = false;
  local_1f8._0_8_ = local_1f8._0_8_ & 0xffffffff00000000;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId582,"STreeView::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x246);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId582);
  }
  if ((this->bTreeItemsAreDirty == false) || (*(longlong *)&this->field_0x2b8 == 0))
  goto LAB_14e7e4eb5;
  this->bTreeItemsAreDirty = false;
  bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  if ((!bVar10) ||
     ((this->TreeViewSource).Ptr ==
      (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0))
  goto LAB_14e7e4eb5;
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
  DestructItems<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int>
            ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
             (pTVar3->AllocatorInstance).Data,(this->LinearizedItems).ArrayNum);
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
  if (pIVar5 == (IItemsSource<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)
                0x0) {
    local_1f8._0_8_ = (FSkeletonJoint *)0x0;
    puVar12 = (ulonglong *)local_1f8;
    stack0xfffffffffffffe10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1ec << 0x20);
  }
  else {
    puVar12 = (ulonglong *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1f8);
  }
  local_1f8._0_8_ = *puVar12;
  unique0x10000613 = (TReferenceControllerBase<1> *)puVar12[1];
  PopulateLinearizedItems
            (this,(TArrayView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_const_,int>
                   *)local_1f8,pTVar3,&local_1e8,&local_1d8,
             (TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
              *)local_168,
             (TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
              *)local_1b8,true,-1);
  if (this->bAllowInvisibleItemSelection == false) {
    if (*(int *)&this->field_0x810 - *(int *)&this->field_0x83c == local_168._8_4_ - local_134) {
      pTVar13 = TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                ::Difference((TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                              *)&this->field_0x808,&local_c8,
                             (TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                              *)local_168);
      bVar9 = true;
      bVar17 = false;
      if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1) {
        pTVar13 = TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                  ::Difference((TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                                *)local_168,&local_118,
                               (TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                                *)&this->field_0x808);
        bVar9 = true;
        bVar17 = true;
        if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1)
        goto LAB_14e7e49f2;
      }
    }
    bVar10 = true;
  }
  else {
LAB_14e7e49f2:
    bVar10 = false;
  }
  if (bVar17) {
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  if (bVar9) {
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  bVar17 = false;
  if (bVar10) {
    TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
    ::operator=((TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                 *)&this->field_0x808,
                (TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                 *)local_168);
    pFVar6 = *(FSkeletonJoint **)&this->field_0x868;
    pFVar15 = (FSkeletonJoint *)local_1f8._0_8_;
    if (pFVar6 == (FSkeletonJoint *)0x0) {
LAB_14e7e4b05:
      bVar9 = true;
    }
    else {
      pFVar15 = *(FSkeletonJoint **)&this->field_0x870;
      bVar17 = true;
      if (pFVar15 != (FSkeletonJoint *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pFVar15->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
        UNLOCK();
      }
      uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      local_1f8._0_8_ = pFVar6;
      unique0x10000ca7 = (TReferenceControllerBase<1> *)pFVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
      iVar11 = TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
               ::
               FindIndexByHash<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>_>
                         ((TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                           *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                          (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1> *)
                          local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
      if (iVar11 == -1) goto LAB_14e7e4b05;
      bVar9 = false;
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar15);
    }
    bVar17 = false;
    if (bVar9) {
      TListTypeTraits<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,void>::
      ResetPtr((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)&this->field_0x868
              );
      TListTypeTraits<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,void>::
      ResetPtr((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)&this->field_0x858
              );
    }
    else {
      pFVar6 = *(FSkeletonJoint **)&this->field_0x858;
      pFVar15 = (FSkeletonJoint *)local_1f8._0_8_;
      if (pFVar6 == (FSkeletonJoint *)0x0) {
LAB_14e7e4be0:
        bVar9 = true;
      }
      else {
        pFVar15 = *(FSkeletonJoint **)&this->field_0x860;
        bVar17 = true;
        if (pFVar15 != (FSkeletonJoint *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar15->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar15->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
          UNLOCK();
          LOCK();
          *(atomic<int> *)&pFVar15->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&pFVar15->_padding_ + 1);
          UNLOCK();
        }
        uVar14 = ((uint)((ulonglong)pFVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar6 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        local_1f8._0_8_ = pFVar6;
        unique0x10000caf = (TReferenceControllerBase<1> *)pFVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        iVar11 = TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                 ::
                 FindIndexByHash<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>_>
                           ((TSet<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,DefaultKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,0>,FDefaultSetAllocator>
                             *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                            (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint_const_,1>
                             *)local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
        if (iVar11 == -1) goto LAB_14e7e4be0;
        bVar9 = false;
      }
      if (bVar17) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar15);
      }
      if (bVar9) {
        TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>::operator=
                  ((TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
                   &this->field_0x858,
                   (TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *)
                   &this->field_0x868);
      }
    }
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))();
  }
  this_00 = &this->SparseItemInfos;
  if (this_00 !=
      (TMap<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo,0>_>
       *)local_1b8) {
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
LAB_14e7e4eb5:
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

