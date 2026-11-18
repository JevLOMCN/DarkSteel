// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 41

// ~STreeView<TSharedPtr<int,1>_> @ 142f386a0

void __thiscall
STreeView<TSharedPtr<int,1>_>::~STreeView<TSharedPtr<int,1>_>(STreeView<TSharedPtr<int,1>_> *this)

{
  void *pvVar1;
  IItemsSource<TSharedPtr<int,1>_> *pIVar2;
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
  if (pIVar2 != (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>
            (&this->OnExpansionChanged);
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->LinearizedItems).AllocatorInstance.Data,
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SparseItemInfos);
  TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>
            (&this->OnSetExpansionRecursive);
  TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
            (&this->OnGetChildren);
  SListView<TSharedPtr<int,1>_>::~SListView<TSharedPtr<int,1>_>
            ((SListView<TSharedPtr<int,1>_> *)this);
  return;
}

// ~STreeView<TSharedPtr<FTestData,1>_> @ 142f387a0

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::~STreeView<TSharedPtr<FTestData,1>_>
          (STreeView<TSharedPtr<FTestData,1>_> *this)

{
  void *pvVar1;
  IItemsSource<TSharedPtr<FTestData,1>_> *pIVar2;
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
  if (pIVar2 != (IItemsSource<TSharedPtr<FTestData,1>_> *)0x0) {
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
  DestructItems<TSharedPtr<FTestData,1>,int>
            ((TSharedPtr<FTestData,1> *)(this->LinearizedItems).AllocatorInstance.Data,
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  SListView<TSharedPtr<FTestData,1>_>::~SListView<TSharedPtr<FTestData,1>_>
            ((SListView<TSharedPtr<FTestData,1>_> *)this);
  return;
}

// operator() @ 142f482c0

void __thiscall
`STreeView<TSharedPtr<int,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
          (void *this,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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
LAB_142f48300:
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
          goto LAB_142f48300;
        }
      }
    } while (iVar1 != -1);
  }
  return;
}

// operator() @ 142f484a0

void __thiscall
`STreeView<TSharedPtr<FTestData,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
          (void *this,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1,
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
LAB_142f484e0:
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
          goto LAB_142f484e0;
        }
      }
    } while (iVar1 != -1);
  }
  return;
}

// ClearRootItemsSource @ 142f5bc20

void __thiscall
STreeView<TSharedPtr<int,1>_>::ClearRootItemsSource(STreeView<TSharedPtr<int,1>_> *this)

{
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
  *pTVar1;
  IItemsSource<TSharedPtr<int,1>_> *pIVar2;
  longlong local_18 [2];
  
  pTVar1 = &this->TreeViewSource;
  if (pTVar1 != (TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
                 *)local_18) {
    pIVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<TSharedPtr<int,1>_> *)0x0;
    if (pIVar2 != (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
      (**(code **)*pIVar2)(pIVar2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142f5bc5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// Construct @ 142f68190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STreeView<TSharedPtr<int,1>_>::Construct(STreeView<TSharedPtr<int,1>_> *this,FArguments *param_1)

{
  TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
  *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  IItemsSource<TSharedPtr<int,1>_> *pIVar4;
  IItemsSource<TSharedPtr<int,1>_> IVar5;
  FTableViewStyle *pFVar6;
  STextBlock *pSVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  char cVar10;
  bool bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<int,1>_>_>_>
  TVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  undefined4 *puVar16;
  FArguments *pFVar17;
  FText *pFVar18;
  TSharedRef<STextBlock,1> *pTVar19;
  SScrollBar *this_01;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *pTVar23;
  FSlotBase *this_02;
  TReferenceControllerBase<1> *pTVar24;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_898 [8];
  ForAnyElementType local_890;
  int local_888;
  FString local_880;
  undefined1 local_870 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_868;
  ForAnyElementType FStack_860;
  ulonglong local_858;
  undefined1 local_850 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_848;
  ForAnyElementType FStack_840;
  ulonglong local_838;
  undefined1 local_830 [8];
  FScriptContainerElement *local_828;
  int local_820;
  undefined1 local_818 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_808;
  ForAnyElementType FStack_800;
  ulonglong local_7f8;
  undefined1 local_7f0 [8];
  FDelegateAllocation local_7e8;
  STextBlock *local_7d8;
  TReferenceControllerBase<1> *pTStack_7d0;
  TSharedRef<ISlateMetaData,1> local_7c8;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> local_7b8;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> local_7a8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_798;
  TAttribute<EListItemAlignment> local_780;
  FDestructionSentinel local_760;
  FDestructionSentinel local_748;
  FDestructionSentinel local_730;
  FDestructionSentinel local_718;
  FDestructionSentinel local_700;
  FDestructionSentinel local_6e8;
  FDelegateAllocation *local_6d0;
  TAttribute<FText> local_6c8;
  FReadAccessScope local_698;
  FReadAccessScope local_680;
  FReadAccessScope local_668;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_650;
  FText local_638;
  TSharedRef<SWidget,1> local_628;
  undefined1 local_618 [16];
  TReferenceControllerBase<1> *local_608;
  STreeView<TSharedPtr<int,1>_> *local_5f8;
  TReferenceControllerBase<1> *pTStack_5f0;
  TSharedRef<STextBlock,1> local_5e8;
  FReadAccessScope local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<int,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x760,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshRow);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnRowReleased);
  TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<int,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x7d8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  this_00 = &this->OnGetChildren;
  if (&param_1->_OnGetChildren != this_00) {
    local_798._0_8_ = 0;
    local_798._8_8_ = 0;
    local_798._16_4_ = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetChildren,
               &local_5d8);
    if ((*(int *)&(param_1->_OnGetChildren).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnGetChildren).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,&local_798);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5d8);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,&local_798);
    TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
    ::
    ~TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(TSharedPtr<int,1>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
                *)&local_798);
  }
  TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSetExpansionRecursive,&param_1->_OnSetExpansionRecursive);
  pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,
                       (TSharedRef<SWidget,1> *)(local_618 + 8));
  local_7a8.Object = (STreeView<TSharedPtr<int,1>_> *)pTVar12->Object;
  local_7a8.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_7a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_608);
  local_5f8 = local_7a8.Object;
  pTStack_5f0 = local_7a8.SharedReferenceCount.ReferenceController;
  if (local_7a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_7a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TVar13 = FArguments::MakeTreeItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_618);
  pTVar1 = &this->TreeViewSource;
  if ((IItemsSource<TSharedPtr<int,1>_> *)pTVar1 != TVar13.Ptr) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<TSharedPtr<int,1>_> *)*TVar13.Ptr;
    *TVar13.Ptr = (IItemsSource<TSharedPtr<int,1>_>)0x0;
    if (pIVar4 != (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  (**(code **)(*(longlong *)this + 0x248))(this);
  IVar5 = *TVar13.Ptr;
  if (IVar5 != (IItemsSource<TSharedPtr<int,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar5)(IVar5,1);
  }
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
            (&local_7a8);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x960,&param_1->_OnKeyDownHandler);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<int,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>::
  operator=(&this->field_0x900,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<int,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExpansionChanged,&param_1->_OnExpansionChanged);
  TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
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
  pTVar23 = &param_1->_OnItemToString_Debug;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,&local_698);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar3 == (longlong *)0x0)
     ) {
LAB_142f68603:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_698);
    local_7f0 = (undefined1  [8])0x0;
    local_7e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_7e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7f0,
               (FWriteAccessScope *)&local_6e8);
    local_6d0 = &local_7e8;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,&local_7e8);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_H_00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar14[3] = TListTypeTraits<TSharedPtr<int,1>,void>::DebugDump;
    }
    if (local_6e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6e8.Accessor,&local_6e8);
    }
    TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_7f0
              );
    pTVar23 = (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_7f0;
  }
  else {
    cVar10 = (**(code **)(*plVar3 + 0x38))();
    if (cVar10 == '\0') goto LAB_142f68603;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_698);
    local_898 = (undefined1  [8])0x0;
    local_890.Data = (FScriptContainerElement *)0x0;
    local_888 = 0;
    if (pTVar23 !=
        (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_898) {
      local_830 = (undefined1  [8])0x0;
      local_828 = (FScriptContainerElement *)0x0;
      local_820 = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pTVar23,&local_5c0);
      if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 != 0) &&
         (plVar3 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8,
         plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x50))(plVar3,local_830);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5c0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_830,
                 (FWriteAccessScope *)&local_748);
      iVar22 = local_820;
      pFVar9 = local_828;
      local_828 = (FScriptContainerElement *)0x0;
      local_820 = 0;
      if (local_748.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_748.Accessor,&local_748);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_898,
                 (FWriteAccessScope *)&local_760);
      if (local_888 == 0) {
LAB_142f685a8:
        if (local_890.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.Data);
        }
      }
      else if (local_890.Data != (FScriptContainerElement *)0x0) {
        (*(code *)**(undefined8 **)local_890.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_890,0,0,0x10);
        local_888 = 0;
        goto LAB_142f685a8;
      }
      local_890.Data = pFVar9;
      local_888 = iVar22;
      if (local_760.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_760.Accessor,&local_760);
      }
      TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
      ~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>
                ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
                 local_830);
    }
    TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_898
              );
    pTVar23 = (TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy> *)local_898;
  }
  TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>::
  ~TDelegate<FString___cdecl(TSharedPtr<int,1>),FDefaultDelegateUserPolicy>(pTVar23);
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
  pFVar6 = param_1->_TreeViewStyle;
  this->Style = pFVar6;
  if (pFVar6 == (FTableViewStyle *)0x0) {
    local_818._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_818._0_8_ = &pFVar6->BackgroundBrush;
  }
  local_818[8] = true;
  local_7f8 = 0;
  local_808.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_800.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_818);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_808,(FWriteAccessScope *)&local_730);
  if (((int)local_7f8 != 0) && (FStack_800.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_800.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_800,0,0,0x10);
    local_7f8 = local_7f8 & 0xffffffff00000000;
  }
  if (local_730.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_730.Accessor,&local_730);
  }
  if (FStack_800.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_800.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_808.AccessDetector);
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  *(int *)&this->field_0x9b0 = (param_1->_MaxPinnedItems).Value;
  this->field_0x9b4 = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x9b8,
             &(param_1->_MaxPinnedItems).Getter);
  *(int *)&this->field_0x9d0 = (param_1->_MaxPinnedItems).Value;
  this->field_0x9d4 = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x9d8,
             &(param_1->_MaxPinnedItems).Getter);
  local_880.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_880.Data.ArrayNum = 0;
  local_880.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_680
            );
  if ((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0)) {
LAB_142f6889e:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
    ::FString::AppendChars(&local_880,L"Please specify an OnGenerateRow. \n",0x22);
  }
  else {
    cVar10 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar10 == '\0') goto LAB_142f6889e;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_680);
  }
  if (pTVar1->Ptr == (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
    ::FString::AppendChars(&local_880,L"Please specify a TreeItemsSource. \n",0x23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_668);
  if ((*(int *)&(this->OnGetChildren).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnGetChildren).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar10 = (**(code **)(*plVar3 + 0x38))();
    if (cVar10 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_668);
      goto LAB_142f68937;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_668);
  ::FString::AppendChars(&local_880,L"Please specify an OnGetChildren. \n",0x22);
LAB_142f68937:
  iVar22 = local_880.Data.ArrayNum + -1;
  if (local_880.Data.ArrayNum == 0) {
    iVar22 = 0;
  }
  if (iVar22 < 1) {
    local_780.Value = LeftAligned;
    local_780.bIsSet = true;
    local_850._0_4_ = 0.0;
    local_870._0_4_ = 0.0;
    local_780.Getter._0_8_ = 0;
    local_780.Getter._8_8_ = 0;
    local_780.Getter._16_8_ = 0;
    local_850[4] = true;
    local_848.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_840.Data = (FScriptContainerElement *)0x0;
    local_838 = 0;
    local_870[4] = true;
    local_868.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_860.Data = (FScriptContainerElement *)0x0;
    local_858 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_870,(TAttribute<float> *)local_850,
               &local_780,&param_1->_HeaderRow,&param_1->_ExternalScrollbar,Orient_Vertical,
               &param_1->_OnTreeViewScrolled,param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_868,(FWriteAccessScope *)&local_718);
    if (((int)local_858 != 0) && (FStack_860.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_860.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_860,0,0,0x10);
      local_858 = local_858 & 0xffffffff00000000;
    }
    if (local_718.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_718.Accessor,&local_718);
    }
    if (FStack_860.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_860.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_868.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_848,(FWriteAccessScope *)&local_700);
    if (((int)local_838 != 0) && (FStack_840.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_840.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_840,0,0,0x10);
      local_838 = local_838 & 0xffffffff00000000;
    }
    if (local_700.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_700.Accessor,&local_700);
    }
    if (FStack_840.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_840.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_848.AccessDetector);
    TAttribute<enum_EListItemAlignment>::~TAttribute<enum_EListItemAlignment>(&local_780);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      this_01 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(this_01,param_1->_ScrollbarDragFocusCause);
    }
    pTVar12 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_628);
    local_7b8.Object = (STreeView<TSharedPtr<int,1>_> *)pTVar12->Object;
    local_7b8.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_7b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_7b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_7b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_628.SharedReferenceCount.ReferenceController);
    pTVar20 = ::operator_new(0x28);
    if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
      local_7c8.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_7c8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar20->SharedReferenceCount = (atomic<int>)0x1;
      pTVar20->WeakReferenceCount = (atomic<int>)0x1;
      pTVar20->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_H_00_____00_SharedPointerInternals__6B_
      ;
      pTVar21 = (TReferenceControllerBase<1> *)&(local_7b8.Object)->field_0x588;
      if (local_7b8.Object == (STreeView<TSharedPtr<int,1>_> *)0x0) {
        pTVar21 = pTVar24;
      }
      if (local_7b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0)
      {
        pTVar20[1]._padding_ = (longlong)&___7__TTableViewMetadata_V__TSharedPtr_H_00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar21;
        pTVar20[2]._padding_ = 0;
      }
      else {
        LOCK();
        (local_7b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_7b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        pTVar20[1]._padding_ = (longlong)&___7__TTableViewMetadata_V__TSharedPtr_H_00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar20[1].SharedReferenceCount = pTVar21;
        pTVar20[2]._padding_ = (longlong)local_7b8.SharedReferenceCount.ReferenceController;
        LOCK();
        (local_7b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_7b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_7b8.SharedReferenceCount.ReferenceController);
      local_7c8.Object = (ISlateMetaData *)(pTVar20 + 1);
      if ((TReferenceControllerBase<1> *)local_7c8.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      LOCK();
      pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
      UNLOCK();
      pTVar24 = pTVar20;
      local_7c8.SharedReferenceCount.ReferenceController = pTVar20;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_7c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
              (&local_7b8);
  }
  else {
    puVar2 = &this->field_0x268;
    *(undefined4 *)puVar2 = 2;
    puVar16 = (undefined4 *)&this->field_0x26c;
    if (puVar2 == (undefined1 *)0x0) {
      puVar16 = (undefined4 *)&DAT_00000054;
    }
    *puVar16 = 2;
    pFVar17 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar18 = FText::FromString(&local_638,&local_880);
    FText::FText(&local_6c8.Value,pFVar18);
    local_6c8.bIsSet = true;
    local_6c8.Getter._16_8_ = 0;
    local_6c8.Getter._0_8_ = 0;
    local_6c8.Getter._8_8_ = 0;
    pFVar17 = STextBlock::FArguments::Text(pFVar17,&local_6c8);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_650,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x151,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar19 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_650,&local_5e8,pFVar17);
    this_02 = (FSlotBase *)&this->field_0x238;
    pTVar24 = (pTVar19->SharedReferenceCount).ReferenceController;
    pSVar7 = pTVar19->Object;
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar2 == (undefined1 *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
    }
    else {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar2 == (undefined1 *)0x0) {
        this_02 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_02);
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar20 = (this_02->Widget).SharedReferenceCount.ReferenceController;
    (this_02->Widget).Object = (SWidget *)pSVar7;
    (this_02->Widget).SharedReferenceCount.ReferenceController = pTVar24;
    local_7d8 = pSVar7;
    pTStack_7d0 = pTVar24;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    FSlotBase::AfterContentOrOwnerAssigned(this_02);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5e8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_650._Widget.SharedReferenceCount.ReferenceController);
    if (local_638.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_638.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_880.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_880.Data.AllocatorInstance.Data);
  }
  return;
}

// Construct @ 142f68e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Construct
          (STreeView<TSharedPtr<FTestData,1>_> *this,FArguments *param_1)

{
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  *this_00;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
  *pTVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  IItemsSource<TSharedPtr<FTestData,1>_> *pIVar6;
  IItemsSource<TSharedPtr<FTestData,1>_> IVar7;
  FTableViewStyle *pFVar8;
  STextBlock *pSVar9;
  code *pcVar10;
  char cVar11;
  bool bVar12;
  TSharedRef<SWidget,1> *pTVar13;
  TUniquePtr<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>,TDefaultDelete<UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTestData,1>_>_>_>
  TVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined4 *puVar17;
  FArguments *pFVar18;
  FText *pFVar19;
  TSharedRef<STextBlock,1> *pTVar20;
  SScrollBar *this_01;
  TReferenceControllerBase<1> *pTVar21;
  int iVar22;
  FMRSWRecursiveAccessDetector *this_02;
  FSlotBase *this_03;
  TReferenceControllerBase<1> *pTVar23;
  atomic<int> *paVar24;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  undefined1 local_858 [8];
  FDelegateAllocation local_850;
  undefined1 local_840 [8];
  ForAnyElementType local_838;
  int local_830;
  undefined1 local_828 [8];
  ForAnyElementType local_820;
  int local_818;
  FString local_810;
  undefined1 local_800 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7f8;
  ForAnyElementType FStack_7f0;
  ulonglong local_7e8;
  undefined1 local_7e0 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7d8;
  ForAnyElementType FStack_7d0;
  ulonglong local_7c8;
  undefined1 local_7c0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_7b0;
  ForAnyElementType FStack_7a8;
  ulonglong local_7a0;
  SWidget *local_798;
  TReferenceControllerBase<1> *local_790;
  STextBlock *local_788;
  TReferenceControllerBase<1> *pTStack_780;
  TSharedRef<ISlateMetaData,1> local_778;
  TAttribute<EListItemAlignment> local_768;
  TSharedRef<SWidget,1> local_748;
  FDestructionSentinel local_738;
  FDestructionSentinel local_720;
  FDestructionSentinel local_708;
  FDestructionSentinel local_6f0;
  FDestructionSentinel local_6d8;
  FDestructionSentinel local_6c0;
  FDestructionSentinel local_6a8;
  FDelegateAllocation *local_690;
  TAttribute<FText> local_688;
  undefined1 local_658 [16];
  TReferenceControllerBase<1> *local_648;
  FText local_640;
  TSharedRef<SWidget,1> local_630;
  FReadAccessScope local_620;
  FReadAccessScope local_608;
  FReadAccessScope local_5f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_5d8;
  FReadAccessScope local_5c0;
  FArguments local_5a8;
  
  this->field_0x35 = *(undefined1 *)((longlong)&param_1->_padding_ + 2);
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x748,&param_1->_OnGenerateRow);
  TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTestData,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x760,&param_1->_OnGeneratePinnedRow);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x778,&param_1->_OnRefreshRow);
  TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedRef<ITableRow,1>_const_&),FDefaultDelegateUserPolicy> *)
             &this->field_0x7c0,&param_1->_OnRowReleased);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
  ::operator=((TDelegate<void___cdecl(TSharedPtr<FTestData,1>,TSharedPtr<ITableRow,1>_const_&),FDefaultDelegateUserPolicy>
               *)&this->field_0x7d8,&param_1->_OnItemScrolledIntoView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x7f0,
             &param_1->_OnFinishedScrolling);
  this_00 = &this->OnGetChildren;
  if (&param_1->_OnGetChildren != this_00) {
    local_840 = (undefined1  [8])0x0;
    local_838.Data = (FScriptContainerElement *)0x0;
    local_830 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetChildren,
               &local_5c0);
    if ((*(int *)&(param_1->_OnGetChildren).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(param_1->_OnGetChildren).field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_840);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_5c0);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_840,
               (FWriteAccessScope *)&local_738);
    if ((local_830 != 0) && (local_838.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_838.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_838,0,0,0x10);
      local_830 = 0;
    }
    if (local_738.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_738.Accessor,&local_738);
    }
    if (local_838.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_840);
  }
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSetExpansionRecursive,&param_1->_OnSetExpansionRecursive);
  pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_748);
  pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
  pSVar5 = pTVar13->Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_748.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_748.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_798 = pSVar5;
  local_790 = pTVar4;
  TVar14 = FArguments::MakeTreeItemsSource(param_1,(TSharedRef<STableViewBase,1> *)local_658);
  pTVar1 = &this->TreeViewSource;
  if ((IItemsSource<TSharedPtr<FTestData,1>_> *)pTVar1 != TVar14.Ptr) {
    pIVar6 = pTVar1->Ptr;
    pTVar1->Ptr = (IItemsSource<TSharedPtr<FTestData,1>_> *)*TVar14.Ptr;
    *TVar14.Ptr = (IItemsSource<TSharedPtr<FTestData,1>_>)0x0;
    if (pIVar6 != (IItemsSource<TSharedPtr<FTestData,1>_> *)0x0) {
      (**(code **)*pIVar6)(pIVar6,1);
    }
  }
  (**(code **)(*(longlong *)this + 0x248))(this);
  IVar7 = *TVar14.Ptr;
  if (IVar7 != (IItemsSource<TSharedPtr<FTestData,1>_>)0x0) {
    (*(code *)**(undefined8 **)IVar7)(IVar7,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>::
  operator=((TDelegate<FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
             *)&this->field_0x960,&param_1->_OnKeyDownHandler);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *)
             &this->field_0x3b8,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x3d0,
             &param_1->_OnItemsRebuilt);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x930,&param_1->_OnMouseButtonClick);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<void___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
             &this->field_0x948,&param_1->_OnMouseButtonDoubleClick);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::operator=(&this->field_0x900,&param_1->_OnSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FTestData,1>,bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnExpansionChanged,&param_1->_OnExpansionChanged);
  TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::operator=
            ((TDelegate<bool___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
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
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->_OnItemToString_Debug,&local_620);
  if ((*(int *)&(param_1->_OnItemToString_Debug).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(param_1->_OnItemToString_Debug).field_0x8, plVar3 == (longlong *)0x0)
     ) {
LAB_142f6925a:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    local_858 = (undefined1  [8])0x0;
    local_850.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_850.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
               (FWriteAccessScope *)&local_6a8);
    local_690 = &local_850;
    puVar15 = UE::Core::Private::DelegateAllocate(0x20,&local_850);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = &
                 ___7__TCommonDelegateInstanceState___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar16 = FDelegateHandle::GenerateNewID();
      puVar15[2] = uVar16;
      *puVar15 = &
                 ___7__TBaseStaticDelegateInstance___A6A_AVFString__V__TSharedPtr_VFTestData___00___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar15[3] = TListTypeTraits<TSharedPtr<FTestData,1>,void>::DebugDump;
    }
    if (local_6a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6a8.Accessor,&local_6a8);
    }
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_858);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_858,
               (FWriteAccessScope *)&local_708);
    if ((local_850.DelegateSize != 0) &&
       (local_850.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_850.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_850,0,0,0x10);
      local_850.DelegateSize = 0;
    }
    if (local_708.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_708.Accessor,&local_708);
    }
    if (local_850.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_850.DelegateAllocator);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_858;
  }
  else {
    cVar11 = (**(code **)(*plVar3 + 0x38))();
    if (cVar11 == '\0') goto LAB_142f6925a;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_620);
    local_828 = (undefined1  [8])0x0;
    local_820.Data = (FScriptContainerElement *)0x0;
    local_818 = 0;
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_828,&param_1->_OnItemToString_Debug);
    TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy>::
    CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               &this->field_0x790,
               (TDelegate<FString___cdecl(TSharedPtr<FTestData,1>),FDefaultDelegateUserPolicy> *)
               local_828);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_828,
               (FWriteAccessScope *)&local_720);
    if ((local_818 != 0) && (local_820.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_820.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_820,0,0,0x10);
      local_818 = 0;
    }
    if (local_720.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_720.Accessor,&local_720);
    }
    if (local_820.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.Data);
    }
    this_02 = (FMRSWRecursiveAccessDetector *)local_828;
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
  pFVar8 = param_1->_TreeViewStyle;
  this->Style = pFVar8;
  if (pFVar8 == (FTableViewStyle *)0x0) {
    local_7c0._0_8_ = FStyleDefaults::GetNoBrush();
  }
  else {
    local_7c0._0_8_ = &pFVar8->BackgroundBrush;
  }
  local_7c0[8] = true;
  local_7a0 = 0;
  local_7b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_7a8.Data = (FScriptContainerElement *)0x0;
  STableViewBase::SetBackgroundBrush
            ((STableViewBase *)this,(TAttribute<FSlateBrush_const_*> *)local_7c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_7b0,(FWriteAccessScope *)&local_6f0);
  if (((int)local_7a0 != 0) && (FStack_7a8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_7a8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7a8,0,0,0x10);
    local_7a0 = local_7a0 & 0xffffffff00000000;
  }
  if (local_6f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6f0.Accessor,&local_6f0);
  }
  if (FStack_7a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_7a8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7b0.AccessDetector);
  *(FScrollBoxStyle **)&this->field_0x458 = param_1->_ShadowBoxStyle;
  this->field_0x450 = param_1->_bEnableShadowBoxStyle;
  *(int *)&this->field_0x9b0 = (param_1->_MaxPinnedItems).Value;
  this->field_0x9b4 = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x9b8,
             &(param_1->_MaxPinnedItems).Getter);
  *(int *)&this->field_0x9d0 = (param_1->_MaxPinnedItems).Value;
  this->field_0x9d4 = (param_1->_MaxPinnedItems).bIsSet;
  TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<int___cdecl(void),FDefaultDelegateUserPolicy> *)&this->field_0x9d8,
             &(param_1->_MaxPinnedItems).Getter);
  local_810.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_810.Data.ArrayNum = 0;
  local_810.Data.ArrayMax = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_608
            );
  if ((*(int *)&this->field_0x758 == 0) || (*(longlong **)&this->field_0x750 == (longlong *)0x0)) {
LAB_142f69573:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
    ::FString::AppendChars(&local_810,L"Please specify an OnGenerateRow. \n",0x22);
  }
  else {
    cVar11 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))();
    if (cVar11 == '\0') goto LAB_142f69573;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_608);
  }
  if (pTVar1->Ptr == (IItemsSource<TSharedPtr<FTestData,1>_> *)0x0) {
    ::FString::AppendChars(&local_810,L"Please specify a TreeItemsSource. \n",0x23);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_5f0);
  if ((*(int *)&(this->OnGetChildren).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->OnGetChildren).field_0x8, plVar3 != (longlong *)0x0)) {
    cVar11 = (**(code **)(*plVar3 + 0x38))();
    if (cVar11 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_5f0);
      goto LAB_142f69609;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_5f0);
  ::FString::AppendChars(&local_810,L"Please specify an OnGetChildren. \n",0x22);
LAB_142f69609:
  iVar22 = local_810.Data.ArrayNum + -1;
  if (local_810.Data.ArrayNum == 0) {
    iVar22 = 0;
  }
  if (iVar22 < 1) {
    local_768.Value = LeftAligned;
    local_768.bIsSet = true;
    local_7e0._0_4_ = 0.0;
    local_800._0_4_ = 0.0;
    local_768.Getter._0_8_ = 0;
    local_768.Getter._8_8_ = 0;
    local_768.Getter._16_8_ = 0;
    local_7e0[4] = true;
    local_7d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7d0.Data = (FScriptContainerElement *)0x0;
    local_7c8 = 0;
    local_800[4] = true;
    local_7f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_7f0.Data = (FScriptContainerElement *)0x0;
    local_7e8 = 0;
    STableViewBase::ConstructChildren
              ((STableViewBase *)this,(TAttribute<float> *)local_800,(TAttribute<float> *)local_7e0,
               &local_768,&param_1->_HeaderRow,&param_1->_ExternalScrollbar,Orient_Vertical,
               &param_1->_OnTreeViewScrolled,param_1->_ScrollBarStyle,param_1->_PreventThrottling);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7f8,(FWriteAccessScope *)&local_6d8);
    if (((int)local_7e8 != 0) && (FStack_7f0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7f0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7f0,0,0,0x10);
      local_7e8 = local_7e8 & 0xffffffff00000000;
    }
    if (local_6d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6d8.Accessor,&local_6d8);
    }
    if (FStack_7f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7f0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7f8.AccessDetector);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_7d8,(FWriteAccessScope *)&local_6c0);
    if (((int)local_7c8 != 0) && (FStack_7d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_7d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_7d0,0,0,0x10);
      local_7c8 = local_7c8 & 0xffffffff00000000;
    }
    if (local_6c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_6c0.Accessor,&local_6c0);
    }
    if (FStack_7d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_7d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_7d8.AccessDetector);
    TAttribute<enum_EListItemAlignment>::~TAttribute<enum_EListItemAlignment>(&local_768);
    if (*(longlong *)&this->field_0x2d8 != 0) {
      this_01 = TSharedPtr<SScrollBar,1>::operator->((TSharedPtr<SScrollBar,1> *)&this->field_0x2d8)
      ;
      SScrollBar::SetDragFocusCause(this_01,param_1->_ScrollbarDragFocusCause);
    }
    pTVar13 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_630);
    pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
    pSVar5 = pTVar13->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar24 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar24 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_630.SharedReferenceCount.ReferenceController);
    pTVar21 = ::operator_new(0x28);
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      local_778.Object = (ISlateMetaData *)___xmm_00000000000000000000000000000010;
      local_778.SharedReferenceCount.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar21->SharedReferenceCount = (atomic<int>)0x1;
      pTVar21->WeakReferenceCount = (atomic<int>)0x1;
      pTVar21->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TTableViewMetadata_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
      ;
      if (pSVar5 != (SWidget *)0x0) {
        pTVar23 = (TReferenceControllerBase<1> *)
                  &pSVar5[2].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount;
      }
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        pTVar21[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFTestData___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar23;
        pTVar21[2]._padding_ = 0;
      }
      else {
        LOCK();
        *paVar24 = (atomic<int>)((int)*paVar24 + 1);
        UNLOCK();
        pTVar21[1]._padding_ =
             (longlong)&___7__TTableViewMetadata_V__TSharedPtr_VFTestData___00____6B_;
        *(TReferenceControllerBase<1> **)&pTVar21[1].SharedReferenceCount = pTVar23;
        pTVar21[2]._padding_ = (longlong)pTVar4;
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_778.Object = (ISlateMetaData *)(pTVar21 + 1);
      if ((TReferenceControllerBase<1> *)local_778.Object == (TReferenceControllerBase<1> *)0x0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L"");
        if (bVar12) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      LOCK();
      pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
      UNLOCK();
      pTVar23 = pTVar21;
      local_778.SharedReferenceCount.ReferenceController = pTVar21;
    }
    SWidget::AddMetadataInternal((SWidget *)this,&local_778);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_778.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  else {
    puVar2 = &this->field_0x268;
    *(undefined4 *)puVar2 = 2;
    puVar17 = (undefined4 *)&this->field_0x26c;
    if (puVar2 == (undefined1 *)0x0) {
      puVar17 = (undefined4 *)&DAT_00000054;
    }
    *puVar17 = 2;
    pFVar18 = STextBlock::FArguments::FArguments(&local_5a8);
    pFVar19 = FText::FromString(&local_640,&local_810);
    FText::FText(&local_688.Value,pFVar19);
    local_688.bIsSet = true;
    local_688.Getter._16_8_ = 0;
    local_688.Getter._0_8_ = 0;
    local_688.Getter._8_8_ = 0;
    pFVar18 = STextBlock::FArguments::Text(pFVar18,&local_688);
    FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_res20,&local_res18,true);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
              (&local_5d8,"STextBlock",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x151,local_res8);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
    pTVar20 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_5d8,(TSharedRef<STextBlock,1> *)(local_658 + 8),pFVar18);
    this_03 = (FSlotBase *)&this->field_0x238;
    pTVar23 = (pTVar20->SharedReferenceCount).ReferenceController;
    pSVar9 = pTVar20->Object;
    if (pTVar23 == (TReferenceControllerBase<1> *)0x0) {
      if (puVar2 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
    }
    else {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
      if (puVar2 == (undefined1 *)0x0) {
        this_03 = (FSlotBase *)&DAT_00000020;
      }
      FSlotBase::DetatchParentFromContent(this_03);
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this_03->Widget).SharedReferenceCount.ReferenceController;
    (this_03->Widget).Object = (SWidget *)pSVar9;
    (this_03->Widget).SharedReferenceCount.ReferenceController = pTVar23;
    local_788 = pSVar9;
    pTStack_780 = pTVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    FSlotBase::AfterContentOrOwnerAssigned(this_03);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_648);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5d8._Widget.SharedReferenceCount.ReferenceController);
    if (local_640.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_640.TextData.Reference + 0x10))();
    }
    STextBlock::FArguments::~FArguments(&local_5a8);
  }
  if (local_810.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_810.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateNewWidget @ 142fcc500

TSharedRef<ITableRow,1> * __thiscall
STreeView<TSharedPtr<int,1>_>::GenerateNewWidget
          (STreeView<TSharedPtr<int,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  int *piVar2;
  STextBlock *pSVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  TSharedRef<SWidget,1> *pTVar7;
  FArguments *pFVar8;
  FArguments *pFVar9;
  FText *pFVar10;
  TSharedRef<STextBlock,1> *pTVar11;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> *pTVar12;
  TSharedRef<ITableRow,1> *pTVar13;
  longlong *plVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res20 [2];
  FLLMScope local_a28 [2];
  FText local_a20;
  bool local_a10;
  undefined1 local_a08 [8];
  ForAnyElementType FStack_a00;
  ulonglong local_9f8;
  SWidget *local_9f0;
  TReferenceControllerBase<1> *pTStack_9e8;
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1> local_9e0;
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
  local_9d0;
  FName local_9b8;
  FMemScope local_9b0;
  FName local_9a8;
  T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&> local_9a0;
  FMemScope local_998 [2];
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> local_988;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_978;
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1> local_968;
  int *local_958;
  TReferenceControllerBase<1> *local_950;
  STreeView<TSharedPtr<int,1>_> *local_948;
  TReferenceControllerBase<1> *pTStack_940;
  FDestructionSentinel local_938;
  TSharedRef<SWidget,1> local_920;
  TSharedRef<SWidget,1> local_910;
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1> local_900;
  TSharedRef<STextBlock,1> local_8f0;
  FText local_8e0;
  FReadAccessScope local_8d0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8b8;
  FReadAccessScope local_8a0;
  FArguments local_888;
  FArguments local_590;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,&local_8d0
            );
  if (((*(int *)&this->field_0x758 != 0) && (*(longlong **)&this->field_0x750 != (longlong *)0x0))
     && (cVar5 = (**(code **)(**(longlong **)&this->field_0x750 + 0x38))(), cVar5 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8d0);
    pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_920);
    local_988.Object = (STreeView<TSharedPtr<int,1>_> *)pTVar7->Object;
    local_988.SharedReferenceCount.ReferenceController =
         (pTVar7->SharedReferenceCount).ReferenceController;
    if (local_988.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_920.SharedReferenceCount.ReferenceController);
    local_948 = local_988.Object;
    pTStack_940 = local_988.SharedReferenceCount.ReferenceController;
    if (local_988.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_988.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    piVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x748,
               &local_8a0);
    if (*(int *)&this->field_0x758 == 0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = *(longlong **)&this->field_0x750;
    }
    local_958 = piVar2;
    local_950 = pTVar1;
    (**(code **)(*plVar14 + 0x60))(plVar14,__return_storage_ptr__,&local_958,&local_948);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_8a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_940)
    ;
    TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
              (&local_988);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_8d0);
  pTVar7 = TSharedFromThis<SWidget,1>::AsShared
                     ((TSharedFromThis<SWidget,1> *)&this->field_0x8,&local_910);
  local_968.Object = (STreeView<TSharedPtr<int,1>_> *)pTVar7->Object;
  local_968.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_968.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_968.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_910.SharedReferenceCount.ReferenceController);
  pFVar8 = STableRow<TSharedPtr<int,1>_>::FArguments::FArguments(&local_888);
  pFVar9 = STextBlock::FArguments::FArguments(&local_590);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_8e0,L"STreeView",L"BrokenSetupMessage",
                       L"OnGenerateWidget() not assigned.");
  FText::FText(&local_a20,pFVar10);
  local_a10 = true;
  local_9f8 = 0;
  local_a08 = (undefined1  [8])0x0;
  FStack_a00.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar9->_Text).Value,&local_a20);
  (pFVar9->_Text).bIsSet = local_a10;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a08);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a08,
             (FWriteAccessScope *)&local_938);
  if (((int)local_9f8 != 0) && (FStack_a00.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a00.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a00,0,0,0x10);
    local_9f8 = local_9f8 & 0xffffffff00000000;
  }
  if (local_938.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_938.Accessor,&local_938);
  }
  if (FStack_a00.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a00.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a08);
  if (local_a20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a20.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_9b0,&local_9b8,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_8b8,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
             ,0x361,local_res8);
  FMemScope::~FMemScope(&local_9b0);
  FLLMScope::~FLLMScope(local_res20);
  pTVar11 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_8b8,&local_8f0,pFVar9);
  pTVar1 = (pTVar11->SharedReferenceCount).ReferenceController;
  pSVar3 = pTVar11->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9f0 = (pFVar8->_Content).Widget.Object;
  pTStack_9e8 = (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar8->_Content).Widget.Object = (SWidget *)pSVar3;
  (pFVar8->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9e8);
  local_9a0.Arg0 = &local_968;
  FLLMScope::FLLMScope(local_a28,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9a8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(local_998,&local_9a8,true);
  local_9d0._RequiredArgs = &local_9a0;
  local_9d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar12 = MakeShared<STableRow<TSharedPtr<int,1>_>,1>(&local_900);
  local_9d0._Widget.Object = pTVar12->Object;
  local_9e0.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_9e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_9e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_9e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_9e0.Object = (STableRow<TSharedPtr<int,1>_> *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&local_9d0._Widget.SharedReferenceCount,&local_9e0.SharedReferenceCount);
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
            (&local_9e0);
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_900);
  if ((local_9d0._Widget.Object == (STableRow<TSharedPtr<int,1>_> *)0x0) &&
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
  FMemScope::~FMemScope(local_998);
  FLLMScope::~FLLMScope(local_a28);
  TSlateDecl<STableRow<TSharedPtr<int,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<int,1>_>,1>_&>_>
  ::operator<<=(&local_9d0,&local_978,pFVar8);
  TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>::~TSharedPtr<STableRow<TSharedPtr<int,1>_>,1>
            (&local_9d0._Widget);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8f0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_8b8._Widget.SharedReferenceCount.ReferenceController);
  if (local_8e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_8e0.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_590);
  STableRow<TSharedPtr<int,1>_>::FArguments::~FArguments(&local_888);
  __return_storage_ptr__->Object = (ITableRow *)local_978.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_978.SharedReferenceCount.ReferenceController;
  if (local_978.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_978.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSharedRef<STableRow<TSharedPtr<int,1>_>,1>::~TSharedRef<STableRow<TSharedPtr<int,1>_>,1>
            (&local_978);
  TSharedRef<STreeView<TSharedPtr<int,1>_>,1>::~TSharedRef<STreeView<TSharedPtr<int,1>_>,1>
            (&local_968);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GenerateNewWidget @ 142fcca30

TSharedRef<ITableRow,1> * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::GenerateNewWidget
          (STreeView<TSharedPtr<FTestData,1>_> *this,TSharedRef<ITableRow,1> *__return_storage_ptr__
          ,TSharedPtr<FTestData,1> *param_1)

{
  SWidget *pSVar1;
  FTestData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  STextBlock *pSVar4;
  code *pcVar5;
  STableRow<TSharedPtr<FTestData,1>_> *pSVar6;
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
  TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
  local_9b0;
  FName local_998;
  FMemScope local_990;
  FName local_988;
  T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&> local_980;
  FMemScope local_978;
  undefined8 local_970;
  FSharedReferencer<1> local_968;
  TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1> local_960;
  TSharedRef<SWidget,1> local_950;
  FTestData *local_940;
  TReferenceControllerBase<1> *local_938;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> local_930;
  TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1> local_920;
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
    local_960.Object = (STreeView<TSharedPtr<FTestData,1>_> *)pTVar9->Object;
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
    pFVar10 = STableRow<TSharedPtr<FTestData,1>_>::FArguments::FArguments(&local_880);
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
           ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_VFTestData___00_____00_SharedPointerInternals__6B_
      ;
      STableRow<TSharedPtr<FTestData,1>_>::STableRow<TSharedPtr<FTestData,1>_>
                ((STableRow<TSharedPtr<FTestData,1>_> *)(pTVar14 + 1));
      pTVar17 = pTVar14;
    }
    TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>::
    TSharedRef<STableRow<TSharedPtr<FTestData,1>_>,1>
              (&local_930,(STableRow<TSharedPtr<FTestData,1>_> *)(pTVar17 + 1),pTVar17);
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
    if ((local_9b0._Widget.Object == (STableRow<TSharedPtr<FTestData,1>_> *)0x0) &&
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
    TSlateDecl<STableRow<TSharedPtr<FTestData,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STreeView<TSharedPtr<FTestData,1>_>,1>_&>_>
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
    STableRow<TSharedPtr<FTestData,1>_>::FArguments::~FArguments(&local_880);
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

// OnKeyDown @ 142ff28d0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STreeView<TSharedPtr<int,1>_>::OnKeyDown
          (STreeView<TSharedPtr<int,1>_> *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FKeyEvent *param_2)

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
LAB_142ff2d53:
    SListView<TSharedPtr<int,1>_>::OnKeyDown_Internal
              ((SListView<TSharedPtr<int,1>_> *)this,__return_storage_ptr__,param_1,param_2);
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
LAB_142ff2a6e:
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
            goto LAB_142ff2a6e;
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
      if (bVar16) goto LAB_142ff2d53;
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
            goto LAB_142ff2c55;
          }
        }
        uVar15 = 0xffffffff;
LAB_142ff2c55:
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

// OnKeyDown @ 142ff2d90

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::OnKeyDown
          (STreeView<TSharedPtr<FTestData,1>_> *this,FReply *__return_storage_ptr__,
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
LAB_142ff3213:
    SListView<TSharedPtr<FTestData,1>_>::OnKeyDown_Internal
              ((SListView<TSharedPtr<FTestData,1>_> *)this,__return_storage_ptr__,param_1,param_2);
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
LAB_142ff2f2e:
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
            goto LAB_142ff2f2e;
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
      if (bVar16) goto LAB_142ff3213;
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
            goto LAB_142ff3115;
          }
        }
        uVar15 = 0xffffffff;
LAB_142ff3115:
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

// PopulateLinearizedItems @ 142ffbde0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
STreeView<TSharedPtr<int,1>_>::PopulateLinearizedItems
          (STreeView<TSharedPtr<int,1>_> *this,TArrayView<TSharedPtr<int,1>_const_,int> *param_1,
          TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FItemInfo,TSizedDefaultAllocator<32>_> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *param_5
          ,TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
           *param_6,bool param_7,int param_8)

{
  uint *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  int *piVar3;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FItemInfo *pFVar5;
  code *pcVar6;
  byte bVar7;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  STreeView<TSharedPtr<int,1>_> *pSVar10;
  FSharedReferencer<1> FVar11;
  TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
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
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArrayView<TSharedPtr<int,1>_const_,int> *local_198;
  TSharedPtr<int,1> *local_190;
  undefined8 local_188;
  int local_180;
  longlong local_178;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *local_150;
  TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *local_148;
  STreeView<TSharedPtr<int,1>_> *local_140;
  TSharedPtr<int_const_,1> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  longlong local_f8;
  TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_f0;
  TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_e8;
  int *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedPtr<int,1> *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *local_b8;
  char *local_b0;
  TArrayView<TSharedPtr<int,1>_const_,int> local_a8;
  FReadAccessScope local_98;
  FItemInfo local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_148 = param_5;
  local_1a8 = (ForElementType<unsigned_int>)param_4;
  local_e8 = (TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)param_6;
  bVar34 = -1 < CpuChannel->Enabled;
  local_1a0 = param_2;
  local_198 = param_1;
  local_150 = param_3;
  local_140 = this;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_STreeView<TSharedPtr<int,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<int,1>_const_,int>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId674,"STreeView::PopulateLinearizedItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x2a2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_STreeView<TSharedPtr<int,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<int,1>_const_,int>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
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
    local_f0 = (TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
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
      local_1a0 = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)
                  (param_1->DataPtr + lVar28);
      local_190 = (TSharedPtr<int,1> *)0x0;
      local_188 = 0;
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_bool___cdecl_STreeView<TSharedPtr<int,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<int,1>_const_,int>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId687,"STreeView_GetChildren",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
                   ,0x2af);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_STreeView<TSharedPtr<int,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<int,1>_const_,int>,TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
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
      piVar3 = local_198->DataPtr[lVar28].Object;
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
      local_e0 = piVar3;
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
      local_138.Object = (int *)(local_1a0->AllocatorInstance).Data;
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
      iVar19 = TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<int_const_,1>_>
                         (local_f0,uVar25 >> 0x10 ^ uVar25,&local_138);
      if (iVar19 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_142ffc1dc:
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
        if (pcVar32 == (char *)0x0) goto LAB_142ffc1dc;
        cVar27 = pcVar32[1];
        cVar33 = *pcVar32;
      }
      pTVar9 = local_1a0;
      pTVar30 = local_150;
      if (param_7) {
        pTVar4 = (TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *)
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
        *(FScriptContainerElement **)pFVar26 = (pTVar9->AllocatorInstance).Data;
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
          TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>::
          Emplace<TSharedPtr<int,1>_const_&>
                    (local_148,(TSharedPtr<int,1> *)local_108,(bool *)pTVar9);
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
                            (TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
                             *)local_e8,bVar13,iVar17 + -1);
        if ((cVar33 != '\0') || (bVar13)) {
          local_b8 = local_1a0;
          local_b0 = &local_1b6;
          local_1b6 = cVar33;
          local_1b5 = bVar13;
          TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&>_>
                    (pTVar12,(TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&> *)
                             (local_108 + 4),(bool *)&local_b8);
        }
      }
      if (((local_1b8 == false) && (cVar33 == '\0')) && (bVar13 == false)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      DestructItems<TSharedPtr<int,1>,int>(local_190,(int)local_188);
      if (local_190 != (TSharedPtr<int,1> *)0x0) {
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

// PopulateLinearizedItems @ 142ffc6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
STreeView<TSharedPtr<FTestData,1>_>::PopulateLinearizedItems
          (STreeView<TSharedPtr<FTestData,1>_> *this,
          TArrayView<TSharedPtr<FTestData,1>_const_,int> *param_1,
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FItemInfo,TSizedDefaultAllocator<32>_> *param_3,
          TBitArray<FDefaultBitArrayAllocator> *param_4,
          TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
          *param_5,TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
                   *param_6,bool param_7,int param_8)

{
  uint *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  FTestData *pFVar3;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  FItemInfo *pFVar5;
  code *pcVar6;
  byte bVar7;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  STreeView<TSharedPtr<FTestData,1>_> *pSVar10;
  FSharedReferencer<1> FVar11;
  TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
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
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *local_1a0;
  TArrayView<TSharedPtr<FTestData,1>_const_,int> *local_198;
  TSharedPtr<FTestData,1> *local_190;
  undefined8 local_188;
  int local_180;
  longlong local_178;
  TBitArray<FDefaultBitArrayAllocator> local_170;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *local_150;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *local_148;
  STreeView<TSharedPtr<FTestData,1>_> *local_140;
  TSharedPtr<FTestData_const_,1> local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  undefined1 local_108 [8];
  FSharedReferencer<1> local_100;
  longlong local_f8;
  TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_f0;
  TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
  *local_e8;
  FTestData *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TSharedPtr<FTestData,1> *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *local_b8;
  char *local_b0;
  TArrayView<TSharedPtr<FTestData,1>_const_,int> local_a8;
  FReadAccessScope local_98;
  FItemInfo local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_148 = param_5;
  local_1a8 = (ForElementType<unsigned_int>)param_4;
  local_e8 = (TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
              *)param_6;
  bVar34 = -1 < CpuChannel->Enabled;
  local_1a0 = param_2;
  local_198 = param_1;
  local_150 = param_3;
  local_140 = this;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_STreeView<TSharedPtr<FTestData,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FTestData,1>_const_,int>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                ::__l2::__CpuProfilerEventSpecId674,"STreeView::PopulateLinearizedItems",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x2a2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_STreeView<TSharedPtr<FTestData,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FTestData,1>_const_,int>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
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
    local_f0 = (TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
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
      local_1a0 = (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)
                  (param_1->DataPtr + lVar28);
      local_190 = (TSharedPtr<FTestData,1> *)0x0;
      local_188 = 0;
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:_bool___cdecl_STreeView<TSharedPtr<FTestData,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FTestData,1>_const_,int>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId687,"STreeView_GetChildren",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
                   ,0x2af);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:_bool___cdecl_STreeView<TSharedPtr<FTestData,1>_>::PopulateLinearizedItems(TArrayView<TSharedPtr<FTestData,1>_const_,int>,TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_>&___ptr64,TArray<FItemInfo,TSizedDefaultAllocator<32>_>&___ptr64,TBitArray<FDefaultBitArrayAllocator>,TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>&___ptr64,TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>&___ptr64,bool,int)___ptr64'
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
      local_138.Object = (FTestData *)(local_1a0->AllocatorInstance).Data;
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
      iVar19 = TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FTestData_const_,1>_>
                         (local_f0,uVar25 >> 0x10 ^ uVar25,&local_138);
      if (iVar19 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
LAB_142ffcadc:
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
        if (pcVar32 == (char *)0x0) goto LAB_142ffcadc;
        cVar27 = pcVar32[1];
        cVar33 = *pcVar32;
      }
      pTVar9 = local_1a0;
      pTVar30 = local_150;
      if (param_7) {
        pTVar4 = (TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *)
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
        *(FTestData **)pFVar26 = (FTestData *)(pTVar9->AllocatorInstance).Data;
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
          TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
          ::Emplace<TSharedPtr<FTestData,1>_const_&>
                    (local_148,(TSharedPtr<FTestData,1> *)local_108,(bool *)pTVar9);
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
                            (TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
                             *)local_e8,bVar13,iVar17 + -1);
        if ((cVar33 != '\0') || (bVar13)) {
          local_b8 = local_1a0;
          local_b0 = &local_1b6;
          local_1b6 = cVar33;
          local_1b5 = bVar13;
          TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&>_>
                    (pTVar12,(TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&> *
                             )(local_108 + 4),(bool *)&local_b8);
        }
      }
      if (((local_1b8 == false) && (cVar33 == '\0')) && (bVar13 == false)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      DestructItems<TSharedPtr<FTestData,1>,int>(local_190,(int)local_188);
      if (local_190 != (TSharedPtr<FTestData,1> *)0x0) {
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

// PopulatePinnedItems @ 142ffcfe0

int __thiscall
STreeView<TSharedPtr<int,1>_>::PopulatePinnedItems
          (STreeView<TSharedPtr<int,1>_> *this,
          TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *param_2,FReGenerateResults *param_3
          )

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
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> local_58;
  STreeView<TSharedPtr<int,1>_> *local_48;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *local_40;
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
      `STreeView<TSharedPtr<int,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
                (&local_48,&local_58,iVar10);
      if (((iVar10 - iVar5 <= local_58.ArrayNum) &&
          (iVar12 = (local_58.ArrayNum - iVar10) + iVar5, iVar12 < iVar11)) &&
         (iVar10 - iVar5 <= iVar6)) {
        iVar11 = iVar12;
        iVar4 = iVar10;
      }
      DestructItems<TSharedPtr<int,1>,int>
                ((TSharedPtr<int,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((TSharedPtr<int,1> *)local_58.AllocatorInstance.Data != (TSharedPtr<int,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar14);
    if (iVar4 == -1) {
      return -1;
    }
    iVar5 = iVar4 - iVar5;
  }
  `STreeView<TSharedPtr<int,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
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

// PopulatePinnedItems @ 142ffd1b0

int __thiscall
STreeView<TSharedPtr<FTestData,1>_>::PopulatePinnedItems
          (STreeView<TSharedPtr<FTestData,1>_> *this,
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *param_2,
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
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> local_58;
  STreeView<TSharedPtr<FTestData,1>_> *local_48;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *local_40;
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
      `STreeView<TSharedPtr<FTestData,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
                (&local_48,&local_58,iVar10);
      if (((iVar10 - iVar5 <= local_58.ArrayNum) &&
          (iVar12 = (local_58.ArrayNum - iVar10) + iVar5, iVar12 < iVar11)) &&
         (iVar10 - iVar5 <= iVar6)) {
        iVar11 = iVar12;
        iVar4 = iVar10;
      }
      DestructItems<TSharedPtr<FTestData,1>,int>
                ((TSharedPtr<FTestData,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
      if ((TSharedPtr<FTestData,1> *)local_58.AllocatorInstance.Data !=
          (TSharedPtr<FTestData,1> *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar14);
    if (iVar4 == -1) {
      return -1;
    }
    iVar5 = iVar4 - iVar5;
  }
  `STreeView<TSharedPtr<FTestData,1>_>::PopulatePinnedItems'::__l2::<lambda_1>::operator()
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

// Private_DoesItemHaveChildren @ 142ffd6e0

bool __thiscall
STreeView<TSharedPtr<int,1>_>::Private_DoesItemHaveChildren
          (STreeView<TSharedPtr<int,1>_> *this,int param_1)

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

// Private_DoesItemHaveChildren @ 142ffd780

bool __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_DoesItemHaveChildren
          (STreeView<TSharedPtr<FTestData,1>_> *this,int param_1)

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

// Private_GetNestingDepth @ 142ffe3e0

int __thiscall
STreeView<TSharedPtr<int,1>_>::Private_GetNestingDepth
          (STreeView<TSharedPtr<int,1>_> *this,int param_1)

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

// Private_GetNestingDepth @ 142ffe480

int __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_GetNestingDepth
          (STreeView<TSharedPtr<FTestData,1>_> *this,int param_1)

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

// Private_GetWiresNeededByDepth @ 142ffe5e0

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STreeView<TSharedPtr<int,1>_>::Private_GetWiresNeededByDepth
          (STreeView<TSharedPtr<int,1>_> *this,int param_1)

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

// Private_GetWiresNeededByDepth @ 142ffe680

TBitArray<FDefaultBitArrayAllocator> * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_GetWiresNeededByDepth
          (STreeView<TSharedPtr<FTestData,1>_> *this,int param_1)

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

// Private_IsItemExpanded @ 142ffe780

bool __thiscall
STreeView<TSharedPtr<int,1>_>::Private_IsItemExpanded
          (STreeView<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSparseItemInfo *pFVar2;
  TSharedPtr<int_const_,1> local_18;
  
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
  pFVar2 = TMapBase<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pFVar2 != (FSparseItemInfo *)0x0) && (pFVar2->bIsExpanded != false)) {
    return true;
  }
  return false;
}

// Private_IsItemExpanded @ 142ffe7f0

bool __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_IsItemExpanded
          (STreeView<TSharedPtr<FTestData,1>_> *this,TSharedPtr<FTestData,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSparseItemInfo *pFVar2;
  TSharedPtr<FTestData_const_,1> local_18;
  
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
  pFVar2 = TMapBase<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((pFVar2 != (FSparseItemInfo *)0x0) && (pFVar2->bIsExpanded != false)) {
    return true;
  }
  return false;
}

// Private_IsLastChild @ 142ffeb40

bool __thiscall
STreeView<TSharedPtr<int,1>_>::Private_IsLastChild(STreeView<TSharedPtr<int,1>_> *this,int param_1)

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

// Private_IsLastChild @ 142ffebe0

bool __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_IsLastChild
          (STreeView<TSharedPtr<FTestData,1>_> *this,int param_1)

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

// Private_OnExpanderArrowShiftClicked @ 142fff060

void __thiscall
STreeView<TSharedPtr<int,1>_>::Private_OnExpanderArrowShiftClicked
          (STreeView<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  int *local_48;
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
      goto LAB_142fff13f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_142fff13f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_OnExpanderArrowShiftClicked @ 142fff160

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_OnExpanderArrowShiftClicked
          (STreeView<TSharedPtr<FTestData,1>_> *this,TSharedPtr<FTestData,1> *param_1,bool param_2)

{
  char cVar1;
  longlong *plVar2;
  FTestData *local_48;
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
      goto LAB_142fff23f;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
LAB_142fff23f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemExpansion @ 142fffa00

void __thiscall
STreeView<TSharedPtr<int,1>_>::Private_SetItemExpansion
          (STreeView<TSharedPtr<int,1>_> *this,TSharedPtr<int,1> *param_1,bool param_2)

{
  bool bVar1;
  TSharedPtr<int,1> *pTVar2;
  longlong *plVar3;
  FSparseItemInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> local_res18;
  TSharedPtr<int_const_,1> local_58;
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
  pFVar4 = TMapBase<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_58);
  if (pFVar4 == (FSparseItemInfo *)0x0) {
    if (!param_2) goto LAB_142fffb6c;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._1_1_ = 0;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (int *)param_1;
    TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&> *)&stack0x00000008,
               (bool *)&local_58);
  }
  else {
    bVar1 = pFVar4->bIsExpanded;
    local_res18._padding_._1_1_ = pFVar4->bHasExpandedChildren;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (int *)param_1;
    TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<int,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<int,1>_const_&,FSparseItemInfo_&&> *)&stack0x00000008,
               (bool *)&local_58);
    if (bVar1 == param_2) goto LAB_142fffb6c;
  }
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = (TSharedPtr<int,1> *)param_1->Object;
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
    local_58.Object = (int *)pTVar2;
    local_58.SharedReferenceCount.ReferenceController = pTVar5;
    (**(code **)(*plVar3 + 0x68))(plVar3,&local_58,param_2);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_48);
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x248))();
LAB_142fffb6c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SetItemExpansion @ 142fffb90

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_SetItemExpansion
          (STreeView<TSharedPtr<FTestData,1>_> *this,TSharedPtr<FTestData,1> *param_1,bool param_2)

{
  bool bVar1;
  FTestData *pFVar2;
  longlong *plVar3;
  FSparseItemInfo *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> local_res18;
  TSharedPtr<FTestData_const_,1> local_58;
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
  pFVar4 = TMapBase<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
           ::Find((TMapBase<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
                   *)&this->field_0x4b0,&local_58);
  if (pFVar4 == (FSparseItemInfo *)0x0) {
    if (!param_2) goto LAB_142fffcfc;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._1_1_ = 0;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FTestData *)param_1;
    TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&> *)
               &stack0x00000008,(bool *)&local_58);
  }
  else {
    bVar1 = pFVar4->bIsExpanded;
    local_res18._padding_._1_1_ = pFVar4->bHasExpandedChildren;
    local_58.SharedReferenceCount.ReferenceController = &local_res18;
    local_res18._padding_._0_1_ = param_2;
    local_58.Object = (FTestData *)param_1;
    TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&>_>
              ((TSet<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
                *)&this->field_0x4b0,
               (TPairInitializer<TSharedPtr<FTestData,1>_const_&,FSparseItemInfo_&&> *)
               &stack0x00000008,(bool *)&local_58);
    if (bVar1 == param_2) goto LAB_142fffcfc;
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
LAB_142fffcfc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Private_SignalSelectionChanged @ 1430008a0

void __thiscall
STreeView<TSharedPtr<int,1>_>::Private_SignalSelectionChanged
          (STreeView<TSharedPtr<int,1>_> *this,Type param_1)

{
  SListView<TSharedPtr<int,1>_>::Private_SignalSelectionChanged
            ((SListView<TSharedPtr<int,1>_> *)this,param_1);
  if (this->field_0x54a != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001430008c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x2f0))();
    return;
  }
  return;
}

// Private_SignalSelectionChanged @ 1430008e0

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_SignalSelectionChanged
          (STreeView<TSharedPtr<FTestData,1>_> *this,Type param_1)

{
  SListView<TSharedPtr<FTestData,1>_>::Private_SignalSelectionChanged
            ((SListView<TSharedPtr<FTestData,1>_> *)this,param_1);
  if (this->field_0x54a != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000143000906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)&this[-1].field_0x578 + 0x2f0))();
    return;
  }
  return;
}

// Private_UpdateParentHighlights @ 143000920

void __thiscall
STreeView<TSharedPtr<int,1>_>::Private_UpdateParentHighlights(STreeView<TSharedPtr<int,1>_> *this)

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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_1430009dd;
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
LAB_1430009dd:
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

// Private_UpdateParentHighlights @ 143000c40

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Private_UpdateParentHighlights
          (STreeView<TSharedPtr<FTestData,1>_> *this)

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
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_143000cfd;
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
LAB_143000cfd:
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

// ReGenerateItems @ 1430042d0

FReGenerateResults * __thiscall
STreeView<TSharedPtr<int,1>_>::ReGenerateItems
          (STreeView<TSharedPtr<int,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  int iVar1;
  bool *pbVar2;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> local_18;
  
  SListView<TSharedPtr<int,1>_>::ReGenerateItems
            ((SListView<TSharedPtr<int,1>_> *)this,__return_storage_ptr__,param_1);
  pbVar2 = TAttribute<bool>::Get(&this->bShouldStackHierarchyHeaders);
  if (*pbVar2 == false) {
    STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = PopulatePinnedItems(this,&this->LinearizedItems,&local_18,__return_storage_ptr__);
    SListView<TSharedPtr<int,1>_>::ReGeneratePinnedItems
              ((SListView<TSharedPtr<int,1>_> *)this,&local_18,param_1,iVar1);
    DestructItems<TSharedPtr<int,1>,int>
              ((TSharedPtr<int,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TSharedPtr<int,1> *)local_18.AllocatorInstance.Data != (TSharedPtr<int,1> *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ReGenerateItems @ 143004390

FReGenerateResults * __thiscall
STreeView<TSharedPtr<FTestData,1>_>::ReGenerateItems
          (STreeView<TSharedPtr<FTestData,1>_> *this,FReGenerateResults *__return_storage_ptr__,
          FGeometry *param_1)

{
  int iVar1;
  bool *pbVar2;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> local_18;
  
  SListView<TSharedPtr<FTestData,1>_>::ReGenerateItems
            ((SListView<TSharedPtr<FTestData,1>_> *)this,__return_storage_ptr__,param_1);
  pbVar2 = TAttribute<bool>::Get(&this->bShouldStackHierarchyHeaders);
  if (*pbVar2 == false) {
    STableViewBase::ClearPinnedWidgets((STableViewBase *)this);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    iVar1 = PopulatePinnedItems(this,&this->LinearizedItems,&local_18,__return_storage_ptr__);
    SListView<TSharedPtr<FTestData,1>_>::ReGeneratePinnedItems
              ((SListView<TSharedPtr<FTestData,1>_> *)this,&local_18,param_1,iVar1);
    DestructItems<TSharedPtr<FTestData,1>,int>
              ((TSharedPtr<FTestData,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
    if ((TSharedPtr<FTestData,1> *)local_18.AllocatorInstance.Data != (TSharedPtr<FTestData,1> *)0x0
       ) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// RebuildList @ 1430067f0

void __thiscall STreeView<TSharedPtr<int,1>_>::RebuildList(STreeView<TSharedPtr<int,1>_> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->LinearizedItems).AllocatorInstance.Data,
             (this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar1);
  }
  SListView<TSharedPtr<int,1>_>::FWidgetGenerator::Clear((FWidgetGenerator *)&this->field_0x590);
  SListView<TSharedPtr<int,1>_>::FWidgetGenerator::Clear((FWidgetGenerator *)&this->field_0x660);
                    /* WARNING: Could not recover jumptable at 0x00014300686c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// RebuildList @ 143006880

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::RebuildList(STreeView<TSharedPtr<FTestData,1>_> *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FTestData,1>,int>
            ((TSharedPtr<FTestData,1> *)(this->LinearizedItems).AllocatorInstance.Data,
             (this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->LinearizedItems).AllocatorInstance,0,piVar1);
  }
  SListView<TSharedPtr<FTestData,1>_>::FWidgetGenerator::Clear
            ((FWidgetGenerator *)&this->field_0x590);
  SListView<TSharedPtr<FTestData,1>_>::FWidgetGenerator::Clear
            ((FWidgetGenerator *)&this->field_0x660);
                    /* WARNING: Could not recover jumptable at 0x0001430068fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x248))(this);
  return;
}

// RequestListRefresh @ 143008630

void __thiscall
STreeView<TSharedPtr<int,1>_>::RequestListRefresh(STreeView<TSharedPtr<int,1>_> *this)

{
  if (this->bTreeItemsAreDirty == false) {
    this->bTreeItemsAreDirty = true;
    STableViewBase::RequestListRefresh((STableViewBase *)this);
    return;
  }
  return;
}

// RequestListRefresh @ 143008650

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::RequestListRefresh(STreeView<TSharedPtr<FTestData,1>_> *this)

{
  if (this->bTreeItemsAreDirty == false) {
    this->bTreeItemsAreDirty = true;
    STableViewBase::RequestListRefresh((STableViewBase *)this);
    return;
  }
  return;
}

// Tick @ 143012230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STreeView<TSharedPtr<int,1>_>::Tick
          (STreeView<TSharedPtr<int,1>_> *this,FGeometry *param_1,double param_2,float param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
  *this_00;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  IItemsSource<TSharedPtr<int,1>_> *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  void *pvVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulonglong *puVar12;
  TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *pTVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
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
  TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> local_118;
  TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar9 = false;
  bVar17 = false;
  local_1f8._0_8_ = local_1f8._0_8_ & 0xffffffff00000000;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_STreeView<TSharedPtr<int,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId582,"STreeView::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x246);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_STreeView<TSharedPtr<int,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId582);
  }
  if ((this->bTreeItemsAreDirty == false) || (*(longlong *)&this->field_0x2b8 == 0))
  goto LAB_143012965;
  this->bTreeItemsAreDirty = false;
  bVar10 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  if ((!bVar10) || ((this->TreeViewSource).Ptr == (IItemsSource<TSharedPtr<int,1>_> *)0x0))
  goto LAB_143012965;
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
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(pTVar3->AllocatorInstance).Data,(this->LinearizedItems).ArrayNum)
  ;
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
  if (pIVar5 == (IItemsSource<TSharedPtr<int,1>_> *)0x0) {
    local_1f8._0_8_ = (TSharedPtr<int,1> *)0x0;
    puVar12 = (ulonglong *)local_1f8;
    stack0xfffffffffffffe10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1ec << 0x20);
  }
  else {
    puVar12 = (ulonglong *)(**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_1f8);
  }
  local_1f8._0_8_ = *puVar12;
  unique0x10000613 = (TReferenceControllerBase<1> *)puVar12[1];
  PopulateLinearizedItems
            (this,(TArrayView<TSharedPtr<int,1>_const_,int> *)local_1f8,pTVar3,&local_1e8,&local_1d8
             ,(TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *)
              local_168,
             (TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
              *)local_1b8,true,-1);
  if (this->bAllowInvisibleItemSelection == false) {
    if (*(int *)&this->field_0x810 - *(int *)&this->field_0x83c == local_168._8_4_ - local_134) {
      pTVar13 = TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>::
                Difference((TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                            *)&this->field_0x808,&local_c8,
                           (TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                            *)local_168);
      bVar9 = true;
      bVar17 = false;
      if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1) {
        pTVar13 = TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                  ::Difference((TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                                *)local_168,&local_118,
                               (TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                                *)&this->field_0x808);
        bVar9 = true;
        bVar17 = true;
        if (*(int *)&(pTVar13->Elements).field_0x8 - *(int *)&(pTVar13->Elements).field_0x34 < 1)
        goto LAB_1430124a2;
      }
    }
    bVar10 = true;
  }
  else {
LAB_1430124a2:
    bVar10 = false;
  }
  if (bVar17) {
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  if (bVar9) {
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  bVar17 = false;
  if (bVar10) {
    TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>::operator=
              ((TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *)
               &this->field_0x808,
               (TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator> *)
               local_168);
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x868;
    pTVar15 = (TReferenceControllerBase<1> *)local_1f8._0_8_;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_1430125b5:
      bVar9 = true;
    }
    else {
      pTVar15 = *(TReferenceControllerBase<1> **)&this->field_0x870;
      bVar17 = true;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar14 = ((uint)((ulonglong)pTVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar6 >> 4)) *
               -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      local_1f8._0_8_ = pTVar6;
      unique0x10000ca7 = pTVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      iVar11 = TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>::
               FindIndexByHash<TSharedPtr<int_const_,1>_>
                         ((TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                           *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                          (TSharedPtr<int_const_,1> *)local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      if (iVar11 == -1) goto LAB_1430125b5;
      bVar9 = false;
    }
    if (bVar17) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
    bVar17 = false;
    if (bVar9) {
      TListTypeTraits<TSharedPtr<int,1>,void>::ResetPtr((TSharedPtr<int,1> *)&this->field_0x868);
      TListTypeTraits<TSharedPtr<int,1>,void>::ResetPtr((TSharedPtr<int,1> *)&this->field_0x858);
    }
    else {
      pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x858;
      pTVar15 = (TReferenceControllerBase<1> *)local_1f8._0_8_;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
LAB_143012690:
        bVar9 = true;
      }
      else {
        pTVar15 = *(TReferenceControllerBase<1> **)&this->field_0x860;
        bVar17 = true;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar14 = ((uint)((ulonglong)pTVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar6 >> 4)) *
                 -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        local_1f8._0_8_ = pTVar6;
        unique0x10000caf = pTVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        iVar11 = TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>::
                 FindIndexByHash<TSharedPtr<int_const_,1>_>
                           ((TSet<TSharedPtr<int,1>,DefaultKeyFuncs<TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                             *)&this->field_0x808,uVar14 >> 0x10 ^ uVar14,
                            (TSharedPtr<int_const_,1> *)local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
        if (iVar11 == -1) goto LAB_143012690;
        bVar9 = false;
      }
      if (bVar17) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      if (bVar9) {
        TSharedPtr<int,1>::operator=
                  ((TSharedPtr<int,1> *)&this->field_0x858,(TSharedPtr<int,1> *)&this->field_0x868);
      }
    }
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))();
  }
  this_00 = &this->SparseItemInfos;
  if (this_00 !=
      (TMap<TSharedPtr<int,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,FSparseItemInfo,0>_>
       *)local_1b8) {
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<int,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
LAB_143012965:
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Tick @ 1430129e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
STreeView<TSharedPtr<FTestData,1>_>::Tick
          (STreeView<TSharedPtr<FTestData,1>_> *this,FGeometry *param_1,double param_2,float param_3
          )

{
  int *piVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  TArray<TSharedPtr<FTestData,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
  *this_00;
  TArray<FItemInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  IItemsSource<TSharedPtr<FTestData,1>_> *pIVar6;
  FTestData *pFVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  ulonglong *puVar13;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  *pTVar14;
  uint uVar15;
  FTestData *pFVar16;
  bool bVar17;
  bool bVar18;
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
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  local_118;
  TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
  local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_248;
  bVar10 = false;
  bVar18 = false;
  local_1f8._0_8_ = local_1f8._0_8_ & 0xffffffff00000000;
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_void___cdecl_STreeView<TSharedPtr<FTestData,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
                ::__l2::__CpuProfilerEventSpecId582,"STreeView::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\STreeView.h"
               ,0x246);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_void___cdecl_STreeView<TSharedPtr<FTestData,1>_>::Tick(FGeometry_const&___ptr64,double,float)___ptr64'
               ::__l2::__CpuProfilerEventSpecId582);
  }
  if ((this->bTreeItemsAreDirty == false) || (*(longlong *)&this->field_0x2b8 == 0))
  goto LAB_143013115;
  this->bTreeItemsAreDirty = false;
  bVar11 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                     ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetChildren);
  if ((!bVar11) || ((this->TreeViewSource).Ptr == (IItemsSource<TSharedPtr<FTestData,1>_> *)0x0))
  goto LAB_143013115;
  pTVar4 = &this->LinearizedItems;
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
  DestructItems<TSharedPtr<FTestData,1>,int>
            ((TSharedPtr<FTestData,1> *)(pTVar4->AllocatorInstance).Data,
             (this->LinearizedItems).ArrayNum);
  piVar1 = &(this->LinearizedItems).ArrayMax;
  (this->LinearizedItems).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  pIVar6 = (this->TreeViewSource).Ptr;
  local_1d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1d8.NumBits = 0;
  local_1d8.MaxBits = 0x80;
  if (pIVar6 == (IItemsSource<TSharedPtr<FTestData,1>_> *)0x0) {
    local_1f8._0_8_ = (FTestData *)0x0;
    puVar13 = (ulonglong *)local_1f8;
    stack0xfffffffffffffe10 = (TReferenceControllerBase<1> *)((ulonglong)uStack_1ec << 0x20);
  }
  else {
    puVar13 = (ulonglong *)(**(code **)((longlong)*pIVar6 + 8))(pIVar6,local_1f8);
  }
  local_1f8._0_8_ = *puVar13;
  unique0x10000613 = (TReferenceControllerBase<1> *)puVar13[1];
  PopulateLinearizedItems
            (this,(TArrayView<TSharedPtr<FTestData,1>_const_,int> *)local_1f8,pTVar4,&local_1e8,
             &local_1d8,
             (TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
              *)local_168,
             (TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
              *)local_1b8,true,-1);
  if (this->bAllowInvisibleItemSelection == false) {
    if (*(int *)&this->field_0x810 - *(int *)&this->field_0x83c == local_168._8_4_ - local_134) {
      pTVar14 = TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                ::Difference((TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                              *)&this->field_0x808,&local_c8,
                             (TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                              *)local_168);
      bVar10 = true;
      bVar18 = false;
      if (*(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34 < 1) {
        pTVar14 = TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                  ::Difference((TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                                *)local_168,&local_118,
                               (TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                                *)&this->field_0x808);
        bVar10 = true;
        bVar18 = true;
        if (*(int *)&(pTVar14->Elements).field_0x8 - *(int *)&(pTVar14->Elements).field_0x34 < 1)
        goto LAB_143012c52;
      }
    }
    bVar11 = true;
  }
  else {
LAB_143012c52:
    bVar11 = false;
  }
  if (bVar18) {
    local_118.HashSize = 0;
    if (local_118.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_118.Elements);
  }
  if (bVar10) {
    local_c8.HashSize = 0;
    if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_c8.Elements);
  }
  bVar18 = false;
  if (bVar11) {
    TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>::
    operator=((TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
               *)&this->field_0x808,
              (TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
               *)local_168);
    pFVar7 = *(FTestData **)&this->field_0x868;
    pFVar16 = (FTestData *)local_1f8._0_8_;
    if (pFVar7 == (FTestData *)0x0) {
LAB_143012d65:
      bVar10 = true;
    }
    else {
      pFVar16 = *(FTestData **)&this->field_0x870;
      bVar18 = true;
      if (pFVar16 != (FTestData *)0x0) {
        LOCK();
        paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
        LOCK();
        paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
        LOCK();
        paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
        *paVar2 = (atomic<int>)((int)*paVar2 + 1);
        UNLOCK();
      }
      uVar15 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      local_1f8._0_8_ = pFVar7;
      unique0x10000d07 = (TReferenceControllerBase<1> *)pFVar16;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      iVar12 = TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FTestData_const_,1>_>
                         ((TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                           *)&this->field_0x808,uVar15 >> 0x10 ^ uVar15,
                          (TSharedPtr<FTestData_const_,1> *)local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
      if (iVar12 == -1) goto LAB_143012d65;
      bVar10 = false;
    }
    if (bVar18) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar16);
    }
    bVar18 = false;
    if (bVar10) {
      TListTypeTraits<TSharedPtr<FTestData,1>,void>::ResetPtr
                ((TSharedPtr<FTestData,1> *)&this->field_0x868);
      TListTypeTraits<TSharedPtr<FTestData,1>,void>::ResetPtr
                ((TSharedPtr<FTestData,1> *)&this->field_0x858);
    }
    else {
      pFVar7 = *(FTestData **)&this->field_0x858;
      pFVar16 = (FTestData *)local_1f8._0_8_;
      if (pFVar7 == (FTestData *)0x0) {
LAB_143012e40:
        bVar10 = true;
      }
      else {
        pFVar16 = *(FTestData **)&this->field_0x860;
        bVar18 = true;
        if (pFVar16 != (FTestData *)0x0) {
          LOCK();
          paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
          LOCK();
          paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
          LOCK();
          paVar2 = (atomic<int> *)&(pFVar16->Children).ArrayNum;
          *paVar2 = (atomic<int>)((int)*paVar2 + 1);
          UNLOCK();
        }
        uVar15 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
                 -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        local_1f8._0_8_ = pFVar7;
        unique0x10000d0f = (TReferenceControllerBase<1> *)pFVar16;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
        iVar12 = TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TSharedPtr<FTestData_const_,1>_>
                           ((TSet<TSharedPtr<FTestData,1>,DefaultKeyFuncs<TSharedPtr<FTestData,1>,0>,FDefaultSetAllocator>
                             *)&this->field_0x808,uVar15 >> 0x10 ^ uVar15,
                            (TSharedPtr<FTestData_const_,1> *)local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
        if (iVar12 == -1) goto LAB_143012e40;
        bVar10 = false;
      }
      if (bVar18) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar16);
      }
      if (bVar10) {
        TSharedPtr<FTestData,1>::operator=
                  ((TSharedPtr<FTestData,1> *)&this->field_0x858,
                   (TSharedPtr<FTestData,1> *)&this->field_0x868);
      }
    }
    (**(code **)(*(longlong *)&this->field_0x588 + 0x40))();
  }
  this_00 = &this->SparseItemInfos;
  if (this_00 !=
      (TMap<TSharedPtr<FTestData,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,FSparseItemInfo,0>_>
       *)local_1b8) {
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->SparseItemInfos).field_0x8);
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    puVar3 = &(this->SparseItemInfos).field_0x10;
    *(undefined8 *)this_00 = local_1b8._0_8_;
    *(undefined4 *)&(this->SparseItemInfos).field_0x8 = local_1b8._8_4_;
    *(undefined4 *)&(this->SparseItemInfos).field_0xc = local_1b8._12_4_;
    local_1b8._0_8_ = (FScriptContainerElement *)0x0;
    local_1b8._8_8_ = 0;
    if (puVar3 != local_1b8 + 0x10) {
      if (local_198 == (void *)0x0) {
        *(undefined8 *)puVar3 = local_1b8._16_8_;
        *(undefined8 *)&(this->SparseItemInfos).field_0x18 = local_1b8._24_8_;
      }
      pvVar8 = *(void **)&(this->SparseItemInfos).field_0x20;
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
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
    pvVar8 = *(void **)&(this->SparseItemInfos).field_0x40;
    if (pvVar8 != (void *)0x0) {
      FMemory::Free(pvVar8);
    }
    *(void **)&(this->SparseItemInfos).field_0x40 = local_178;
    *(undefined4 *)&(this->SparseItemInfos).field_0x48 = local_170;
    local_170 = 0;
    local_178 = (void *)0x0;
  }
  pTVar5 = &this->DenseItemInfos;
  if (pTVar5 != &local_1e8) {
    DestructItems<FItemInfo,int>
              ((FItemInfo *)(pTVar5->AllocatorInstance).Data,(this->DenseItemInfos).ArrayNum);
    pFVar9 = (pTVar5->AllocatorInstance).Data;
    if (pFVar9 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar9);
    }
    (pTVar5->AllocatorInstance).Data = local_1e8.AllocatorInstance.Data;
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
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FTestData,1>,FSparseItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1b8,0,local_1b8._8_4_);
  bVar18 = local_1b8._12_4_ != 0;
  local_1b8._8_8_ = (ulonglong)(uint)local_1b8._12_4_ << 0x20;
  if (bVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_1b8,0,(int *)(local_1b8 + 0xc));
  }
  uVar15 = local_190._4_4_;
  local_188 = 0xffffffff;
  local_184 = 0;
  local_190 = (ulonglong)local_190._4_4_ << 0x20;
  if (0x80 < uVar15) {
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
  TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FTestData,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_168,0,local_168._8_4_);
  bVar18 = local_168._12_4_ != 0;
  local_168._8_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
  if (bVar18) {
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
LAB_143013115:
  STableViewBase::Tick((STableViewBase *)this,param_1,param_2,param_3);
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

