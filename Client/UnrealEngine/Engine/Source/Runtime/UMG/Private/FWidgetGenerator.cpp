// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 12

// ~FWidgetGenerator @ 146992350

void __thiscall SListView<UObject_*>::FWidgetGenerator::~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_*,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 1469923e0

void __thiscall SListView<FName>::FWidgetGenerator::~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// Clear @ 1469a6190

void __thiscall SListView<UObject_*>::FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  
  TArray<UObject_*,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsToBeCleanedUp,
             (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)&this->ItemsWithGeneratedWidgets);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ItemsWithGeneratedWidgets).AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 1469a6200

void __thiscall SListView<FName>::FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsToBeCleanedUp,&this->ItemsWithGeneratedWidgets);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ItemsWithGeneratedWidgets).AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// OnItemSeen @ 1469e8700

void __thiscall
SListView<UObject_*>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,UObject *param_1,TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar2;
  SListView<UObject_*> *pSVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TSharedRef<ITableRow,1> *pTVar9;
  int iVar10;
  longlong lVar11;
  UObject *pUVar12;
  int iVar13;
  int iVar14;
  UObject *local_res10;
  TSharedRef<ITableRow,1> *local_res18;
  int local_res20;
  UObject *local_a8;
  undefined1 local_a0 [8];
  TSharedRef<ITableRow,1> *local_98;
  UObject *local_90;
  UObject **local_88;
  TSharedRef<ITableRow,1> *local_80;
  TSharedRef<ITableRow,1> **local_78;
  UObject **local_70;
  FReadAccessScope local_68;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1 == (UObject *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8670646794247470361>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar12 = local_res10;
  pTVar9 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
           ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                   *)&this->ItemToWidgetMap,local_res10);
  if (pTVar9 == (TSharedRef<ITableRow,1> *)0x0) {
    local_88 = &local_res10;
    local_80 = param_2;
    TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObject_*_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,
               (TPairInitializer<UObject_*_const_&,TSharedRef<ITableRow,1>_const_&> *)local_a0,
               (bool *)&local_88);
    local_90 = local_res10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    local_98 = (TSharedRef<ITableRow,1> *)param_2->Object;
    local_78 = &local_98;
    local_70 = &local_90;
    TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<ITableRow_const_*_&&,TObjectPtr<UObject>_&&>_>
              ((TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TObjectPtr<UObject>_&&> *)(local_a0 + 4),
               (bool *)&local_78);
    (**(code **)*param_2->Object)();
    pUVar12 = local_res10;
    pSVar3 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar3->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar3->OnEntryInitialized).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(pSVar3->OnEntryInitialized).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x68))(plVar4,pUVar12,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    pUVar12 = local_res10;
  }
  pFVar5 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  local_a8 = pUVar12;
  if (((pFVar5 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar5 + (longlong)(this->ItemsToBeCleanedUp).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), local_a8 = local_res10, bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ItemsToBeCleanedUp).ArrayNum;
  if (iVar8 != 0) {
    iVar10 = 0;
    pFVar5 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    local_res20 = 0;
    bVar7 = *(UObject **)pFVar5 != local_a8;
    lVar11 = 0;
    iVar13 = 0;
    do {
      iVar14 = iVar13;
      do {
        lVar11 = lVar11 + 1;
        iVar14 = iVar14 + 1;
        if (iVar8 <= lVar11) break;
        iVar10 = local_res20;
      } while (bVar7 == (*(UObject **)(pFVar5 + lVar11 * 8) != local_a8));
      if (bVar7 != false) {
        if (iVar10 != iVar13) {
          memmove(pFVar5 + (longlong)iVar10 * 8,pFVar5 + (longlong)iVar13 * 8,
                  (longlong)(iVar14 - iVar13) << 3);
          local_a8 = local_res10;
          iVar10 = local_res20;
        }
        iVar10 = iVar10 + (iVar14 - iVar13);
        local_res20 = iVar10;
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar13 = iVar14;
    } while (lVar11 < iVar8);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar10;
    param_2 = local_res18;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= (FScriptContainerElement *)&local_a8) &&
      ((FScriptContainerElement *)&local_a8 <
       pFVar5 + (longlong)(this->ItemsWithGeneratedWidgets).ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar8 + 1;
  *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 1469e8a80

void __thiscall
SListView<FName>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,FName param_1,TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  SListView<FName> *pSVar3;
  longlong *plVar4;
  FName *pFVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<ITableRow,1> *pTVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FName local_res10;
  TSharedRef<ITableRow,1> *local_res18;
  TPairInitializer<ITableRow_const_*_&&,FName_const_&> local_98;
  FName *local_88;
  TSharedRef<ITableRow,1> *local_80;
  FName **local_78;
  FName *local_70;
  FReadAccessScope local_68;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1 == (FName)0x0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8670646794247470361>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                         ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar10 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,local_res10);
  if (pTVar10 == (TSharedRef<ITableRow,1> *)0x0) {
    local_88 = &local_res10;
    local_80 = param_2;
    TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,
               (TPairInitializer<FName_const_&,TSharedRef<ITableRow,1>_const_&> *)&stack0x00000020,
               (bool *)&local_88);
    local_98.Value = (FName *)param_2->Object;
    local_78 = &local_98.Value;
    local_70 = &local_res10;
    TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<ITableRow_const_*_&&,FName_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,&local_98,(bool *)&local_78);
    (**(code **)*param_2->Object)();
    FVar7 = local_res10;
    pSVar3 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar3->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar3->OnEntryInitialized).field_0x10 != 0) &&
       (plVar4 = *(longlong **)&(pSVar3->OnEntryInitialized).field_0x8, plVar4 != (longlong *)0x0))
    {
      (**(code **)(*plVar4 + 0x68))(plVar4,FVar7,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  pFVar5 = (FName *)(this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (((pFVar5 <= &local_res10) && (&local_res10 < pFVar5 + (this->ItemsToBeCleanedUp).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->ItemsToBeCleanedUp).ArrayNum;
  if (iVar9 != 0) {
    iVar14 = 0;
    pFVar5 = (FName *)(this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    bVar8 = *pFVar5 != local_res10;
    lVar11 = 0;
    iVar12 = 0;
    do {
      iVar13 = iVar12;
      do {
        lVar11 = lVar11 + 1;
        iVar13 = iVar13 + 1;
        if (iVar9 <= lVar11) break;
      } while (bVar8 == (pFVar5[lVar11] != local_res10));
      if (bVar8 != false) {
        if (iVar14 != iVar12) {
          memmove(pFVar5 + iVar14,pFVar5 + iVar12,(longlong)(iVar13 - iVar12) << 3);
        }
        iVar14 = iVar14 + (iVar13 - iVar12);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar12 = iVar13;
    } while (lVar11 < iVar9);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar14;
    param_2 = local_res18;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pFVar5 = (FName *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar5 <= &local_res10) &&
      (&local_res10 < pFVar5 + (this->ItemsWithGeneratedWidgets).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar9 + 1;
  *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_res10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessItemCleanUp @ 1469f6e30

void __thiscall SListView<UObject_*>::FWidgetGenerator::ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  uint *puVar2;
  SListView<UObject_*> *pSVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  ulonglong *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  longlong local_148;
  ITableRow *local_140;
  TReferenceControllerBase<1> *local_138;
  TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
  *local_128;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_f8;
  undefined2 local_f0;
  ITableRow *local_e8;
  ITableRow *local_e0;
  TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FReadAccessScope local_b0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  
  local_res10 = 0;
  if ((this->ItemsToBeCleanedUp).ArrayNum < 1) {
LAB_1469f73b9:
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,
                 &(this->ItemsToBeCleanedUp).ArrayMax);
    }
    return;
  }
  this_00 = &this->ItemToWidgetMap;
  local_148 = 0;
LAB_1469f6e90:
  puVar16 = (ulonglong *)0x0;
  uVar17 = 0;
  uVar11 = uVar17;
  if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
    uVar11 = ~local_res10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar14 = *(ulonglong *)((this->ItemsToBeCleanedUp).AllocatorInstance.Data + local_148);
  uVar11 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
  uVar11 = uVar11 >> 0x10 ^ uVar11;
  if (*(int *)&(this->ItemToWidgetMap).field_0x8 != *(int *)&(this->ItemToWidgetMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
    puVar18 = &(this->ItemToWidgetMap).field_0x38;
    puVar15 = puVar18;
    if (puVar1 != (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    iVar9 = *(int *)(puVar15 +
                    (ulonglong)(*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U & uVar11) * 4);
    if (iVar9 != -1) {
      do {
        puVar12 = (ulonglong *)((longlong)iVar9 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*puVar12 == uVar14) {
          puVar10 = puVar12 + 1;
          if (puVar12 == (ulonglong *)0x0) {
            puVar10 = puVar16;
          }
          if (puVar10 != (ulonglong *)0x0) {
            local_138 = (TReferenceControllerBase<1> *)puVar10[1];
            local_140 = (ITableRow *)*puVar10;
            if (local_138 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_138->SharedReferenceCount =
                   (atomic<int>)((int)local_138->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (*(int *)&(this->ItemToWidgetMap).field_0x8 ==
                *(int *)&(this->ItemToWidgetMap).field_0x34) goto LAB_1469f71e5;
            puVar1 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
            if (puVar1 != (undefined1 *)0x0) {
              puVar18 = puVar1;
            }
            iVar9 = *(int *)(puVar18 +
                            ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                            (longlong)(int)uVar11) * 4);
            if (iVar9 == -1) goto LAB_1469f71e5;
            goto LAB_1469f71c0;
          }
          break;
        }
        iVar9 = (int)puVar12[3];
      } while (iVar9 != -1);
    }
  }
  if (uVar14 == 0) {
    local_128 = &this->WidgetMapToItem;
    TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
    auStack_120._4_4_ = 1;
    uVar11 = *(uint *)&(this->WidgetMapToItem).field_0x28;
    puVar12 = puVar16;
    uVar19 = uVar17;
    if (uVar11 != 0) {
      puVar2 = *(uint **)&(this->WidgetMapToItem).field_0x20;
      puVar12 = (ulonglong *)(ulonglong)uVar11;
      puVar20 = (uint *)TStack_d0.Array;
      if (puVar2 != (uint *)0x0) {
        puVar20 = puVar2;
      }
      uVar8 = *puVar20;
      puVar10 = puVar16;
      while( true ) {
        uVar17 = (uint)puVar16;
        uVar19 = (uint)puVar10;
        if (uVar8 != 0) break;
        lVar13 = (longlong)(int)uVar17;
        uVar19 = uVar19 + 0x20;
        puVar10 = (ulonglong *)(ulonglong)uVar19;
        uVar17 = uVar17 + 1;
        puVar16 = (ulonglong *)(ulonglong)uVar17;
        if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
        goto LAB_1469f7003;
        uVar8 = puVar20[lVar13 + 1];
      }
      auStack_120._4_4_ = -uVar8 & uVar8;
      uVar14 = (ulonglong)(uint)auStack_120._4_4_ * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_res18 = (int)lVar13;
      uVar8 = (uVar19 - 1) + local_res18;
      if ((int)uVar11 < (int)uVar8) {
        uVar8 = uVar11;
      }
      puVar12 = (ulonglong *)(ulonglong)uVar8;
    }
LAB_1469f7003:
    auStack_120._0_4_ = uVar17;
    uStack_110 = 0xffffffff;
    auStack_120._8_8_ = TStack_d0.Array;
    uStack_10c = (int)puVar12;
    auVar6 = stack0xfffffffffffffee8;
    local_108 = CONCAT44(local_4c,uVar19);
    TStack_d0._padding_ = auStack_120._0_8_;
    TStack_d0._24_8_ = local_108;
    TStack_d0.UnvisitedBitMask = uStack_110;
    TStack_d0.CurrentBitIndex = uStack_10c;
    unique0x10000805 = auVar6;
    local_d8 = local_128;
    if ((int)puVar12 < (int)uVar11) {
      do {
        puVar16 = (ulonglong *)(*(longlong *)local_d8 + (longlong)(int)puVar12 * 0x18);
        if (*(longlong *)(*(longlong *)local_d8 + 8 + (longlong)(int)puVar12 * 0x18) == 0)
        goto LAB_1469f7094;
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        puVar12 = (ulonglong *)(ulonglong)(uint)TStack_d0.CurrentBitIndex;
      } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
    }
    puVar16 = (ulonglong *)0x0;
LAB_1469f7094:
    if (puVar16 != (ulonglong *)0x0) {
      TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  *)this_00);
      local_f0 = 0;
      stack0xfffffffffffffee8 = local_98._16_16_;
      local_128 = (TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
                   *)local_98._0_8_;
      auStack_120._0_8_ = local_98._8_8_;
      local_108 = local_78;
      pTStack_100 = pTStack_70;
      uVar14 = local_98._24_8_ >> 0x20;
      uVar11 = local_98._28_4_;
      local_f8 = (TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  *)this_00;
      if ((int)uVar11 < *(int *)(local_98._16_8_ + 0x18)) {
        do {
          if (*(ulonglong *)((longlong)(int)uVar14 * 0x20 + 8 + *(longlong *)local_128) == *puVar16)
          {
            TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_100,uVar11);
            local_f0 = CONCAT11(local_f0._1_1_,1);
            goto LAB_1469f72c4;
          }
          uStack_110 = uStack_110 & ~auStack_120._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
          uVar14 = (ulonglong)uStack_10c;
          uVar11 = uStack_10c;
        } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
        if ((char)local_f0 != '\0') {
LAB_1469f72c4:
          if (local_f0._1_1_ != '\0') {
            uVar11 = *(int *)&(local_f8->Elements).field_0x8 -
                     *(int *)&(local_f8->Elements).field_0x34;
            if (uVar11 < 4) {
              iVar9 = 1;
            }
            else {
              uVar14 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
              lVar13 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              local_res20 = (undefined4)lVar13;
              iVar9 = 1 << ((byte)lVar13 & 0x1f);
            }
            if (((0 < (int)uVar11) && (local_f8->HashSize < iVar9)) || (iVar9 < local_f8->HashSize))
            {
              local_f8->HashSize = iVar9;
              TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::Rehash(local_f8);
            }
          }
        }
      }
      local_e0 = (ITableRow *)*puVar16;
      if (*(int *)&(this->WidgetMapToItem).field_0x8 != *(int *)&(this->WidgetMapToItem).field_0x34)
      {
        uVar11 = ((uint)((ulonglong)local_e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_e0 >> 4)) *
                 -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
        ::RemoveImpl<ITableRow_const_*>
                  ((TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                    *)&this->WidgetMapToItem,uVar11 >> 0x10 ^ uVar11,&local_e0);
      }
    }
  }
  goto LAB_1469f7371;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0),
        iVar9 != -1) {
LAB_1469f71c0:
    if (*(ulonglong *)((longlong)iVar9 * 0x20 + *(longlong *)&this_00->field_0x0) == uVar14) {
      TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UObject_*,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                       *)this_00,iVar9);
      break;
    }
  }
LAB_1469f71e5:
  local_e8 = local_140;
  if (*(int *)&(this->WidgetMapToItem).field_0x8 != *(int *)&(this->WidgetMapToItem).field_0x34) {
    uVar11 = ((uint)((ulonglong)local_140 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_140 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
    ::RemoveImpl<ITableRow_const_*>
              ((TSet<TTuple<ITableRow_const_*,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,uVar11 >> 0x10 ^ uVar11,&local_e8);
  }
  if (this->OwnerList == (SListView<UObject_*> *)0x0) {
    local_res8[0] = 0;
    bVar7 = `SListView<UObject_*>::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::
            operator()(local_res8);
    if (!bVar7) goto LAB_1469f729c;
  }
  (**(code **)((longlong)*local_140 + 8))(local_140);
  pSVar3 = this->OwnerList;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar3->OnRowReleased,
             &local_b0);
  if ((*(int *)&(pSVar3->OnRowReleased).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(pSVar3->OnRowReleased).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,&local_140);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
LAB_1469f729c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_138);
LAB_1469f7371:
  local_res10 = local_res10 + 1;
  local_148 = local_148 + 8;
  if ((this->ItemsToBeCleanedUp).ArrayNum <= (int)local_res10) goto LAB_1469f73b9;
  goto LAB_1469f6e90;
}

// ProcessItemCleanUp @ 1469f7410

void __thiscall SListView<FName>::FWidgetGenerator::ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  undefined1 *puVar1;
  uint *puVar2;
  SListView<FName> *pSVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 local_res18;
  longlong local_res20;
  undefined1 auStack_130 [16];
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_110;
  TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_108;
  undefined2 local_100;
  ITableRow *local_f8;
  TReferenceControllerBase<1> *local_f0;
  ITableRow *local_e8;
  ITableRow *local_e0;
  TMap<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  FReadAccessScope local_b0;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  undefined4 local_4c;
  
  uVar20 = 0;
  if ((this->ItemsToBeCleanedUp).ArrayNum < 1) {
LAB_1469f7945:
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,
                 &(this->ItemsToBeCleanedUp).ArrayMax);
    }
    return;
  }
  this_00 = &this->ItemToWidgetMap;
  local_res20 = 0;
LAB_1469f7460:
  lVar12 = local_res20;
  uVar8 = 0;
  if ((int)uVar20 < (this->ItemsToBeCleanedUp).ArrayNum) {
    uVar8 = ~uVar20 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar12 = *(longlong *)((this->ItemsToBeCleanedUp).AllocatorInstance.Data + lVar12);
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
  iVar10 = (int)((ulonglong)lVar12 >> 0x20);
  if (*(int *)&(this->ItemToWidgetMap).field_0x8 != *(int *)&(this->ItemToWidgetMap).field_0x34) {
    puVar1 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
    puVar21 = &(this->ItemToWidgetMap).field_0x38;
    puVar14 = puVar21;
    if (puVar1 != (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    iVar18 = *(int *)(puVar14 +
                     (ulonglong)(*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U & uVar8 + iVar10)
                     * 4);
    if (iVar18 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar18 * 0x20 + *(longlong *)&this_00->field_0x0);
        if (*plVar11 == lVar12) {
          plVar15 = plVar11 + 1;
          if (plVar11 == (longlong *)0x0) {
            plVar15 = (longlong *)0x0;
          }
          if (plVar15 != (longlong *)0x0) {
            local_f8 = (ITableRow *)*plVar15;
            local_f0 = (TReferenceControllerBase<1> *)plVar15[1];
            if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_f0->SharedReferenceCount =
                   (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (*(int *)&(this->ItemToWidgetMap).field_0x8 ==
                *(int *)&(this->ItemToWidgetMap).field_0x34) goto LAB_1469f7790;
            uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar12);
            puVar1 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
            if (puVar1 != (undefined1 *)0x0) {
              puVar21 = puVar1;
            }
            iVar10 = *(int *)(puVar21 +
                             ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                             (longlong)(int)(uVar8 + iVar10)) * 4);
            if (iVar10 == -1) goto LAB_1469f7790;
            goto LAB_1469f7770;
          }
          break;
        }
        iVar18 = (int)plVar11[3];
      } while (iVar18 != -1);
    }
  }
  if (lVar12 == 0) {
    local_d8 = &this->WidgetMapToItem;
    auStack_130._0_4_ = 0;
    iVar10 = *(int *)&(this->WidgetMapToItem).field_0x28;
    TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
    iVar18 = 0;
    auStack_130._4_4_ = 1;
    iVar9 = 0;
    if (iVar10 != 0) {
      puVar2 = *(uint **)&(this->WidgetMapToItem).field_0x20;
      puVar19 = (uint *)TStack_d0.Array;
      if (puVar2 != (uint *)0x0) {
        puVar19 = puVar2;
      }
      uVar8 = *puVar19;
      while (uVar8 == 0) {
        lVar12 = (longlong)(int)auStack_130._0_4_;
        iVar18 = iVar18 + 0x20;
        auStack_130._0_4_ = auStack_130._0_4_ + 1;
        iVar9 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_130._0_4_)
        goto LAB_1469f75ae;
        uVar8 = puVar19[lVar12 + 1];
      }
      auStack_130._4_4_ = -uVar8 & uVar8;
      uVar13 = (ulonglong)(uint)auStack_130._4_4_ * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iVar9 = iVar18 + -1 + local_res10;
      if (iVar10 < iVar9) {
        iVar9 = iVar10;
      }
    }
LAB_1469f75ae:
    uStack_120 = 0xffffffff;
    auStack_130._8_8_ = TStack_d0.Array;
    uStack_11c = iVar9;
    auVar5 = stack0xfffffffffffffed8;
    local_118 = CONCAT44(local_4c,iVar18);
    TStack_d0._padding_ = auStack_130._0_8_;
    TStack_d0._24_8_ = local_118;
    TStack_d0.UnvisitedBitMask = uStack_120;
    TStack_d0.CurrentBitIndex = uStack_11c;
    unique0x1000083e = auVar5;
    if (iVar9 < iVar10) {
      do {
        puVar16 = (ulonglong *)(*(longlong *)local_d8 + (longlong)iVar9 * 0x18);
        if (*(longlong *)(*(longlong *)local_d8 + 8 + (longlong)iVar9 * 0x18) == 0)
        goto LAB_1469f7643;
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        iVar9 = TStack_d0.CurrentBitIndex;
      } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
    }
    puVar16 = (ulonglong *)0x0;
LAB_1469f7643:
    if (puVar16 != (ulonglong *)0x0) {
      TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_98,
                 (TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  *)this_00);
      uVar6 = local_98._0_8_;
      local_100 = 0;
      stack0xfffffffffffffed8 = local_98._16_16_;
      auStack_130._0_8_ = local_98._8_8_;
      local_118 = local_78;
      pTStack_110 = pTStack_70;
      uVar13 = local_98._24_8_ >> 0x20;
      local_108 = (TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                   *)this_00;
      if ((int)local_98._28_4_ < *(int *)(local_98._16_8_ + 0x18)) {
        uVar17 = (ulonglong)local_98._28_4_;
        do {
          if (*(ulonglong *)((longlong)(int)uVar13 * 0x20 + 8 + *(longlong *)uVar6) == *puVar16) {
            TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_110,(int)uVar17);
            local_100 = CONCAT11(local_100._1_1_,1);
            goto LAB_1469f7860;
          }
          uStack_120 = uStack_120 & ~auStack_130._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_130);
          uVar13 = (ulonglong)uStack_11c;
          uVar17 = uVar13;
        } while ((int)uStack_11c < *(int *)(auStack_130._8_8_ + 0x18));
        if ((char)local_100 != '\0') {
LAB_1469f7860:
          if (local_100._1_1_ != '\0') {
            uVar8 = *(int *)&(local_108->Elements).field_0x8 -
                    *(int *)&(local_108->Elements).field_0x34;
            if (uVar8 < 4) {
              iVar10 = 1;
            }
            else {
              uVar13 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_res18 = (undefined4)lVar12;
              iVar10 = 1 << ((byte)lVar12 & 0x1f);
            }
            if (((0 < (int)uVar8) && (local_108->HashSize < iVar10)) ||
               (iVar10 < local_108->HashSize)) {
              local_108->HashSize = iVar10;
              TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::Rehash(local_108);
            }
          }
        }
      }
      local_e0 = (ITableRow *)*puVar16;
      if (*(int *)&(this->WidgetMapToItem).field_0x8 != *(int *)&(this->WidgetMapToItem).field_0x34)
      {
        uVar8 = ((uint)((ulonglong)local_e0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_e0 >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
        ::RemoveImpl<ITableRow_const_*>
                  ((TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
                    *)&this->WidgetMapToItem,uVar8 >> 0x10 ^ uVar8,&local_e0);
      }
    }
  }
  goto LAB_1469f7903;
  while (iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0),
        iVar10 != -1) {
LAB_1469f7770:
    if (*(longlong *)((longlong)iVar10 * 0x20 + *(longlong *)&this_00->field_0x0) == lVar12) {
      TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FName,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                       *)this_00,iVar10);
      break;
    }
  }
LAB_1469f7790:
  local_e8 = local_f8;
  if (*(int *)&(this->WidgetMapToItem).field_0x8 != *(int *)&(this->WidgetMapToItem).field_0x34) {
    uVar8 = ((uint)((ulonglong)local_f8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_f8 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
    ::RemoveImpl<ITableRow_const_*>
              ((TSet<TTuple<ITableRow_const_*,FName>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,uVar8 >> 0x10 ^ uVar8,&local_e8);
  }
  if (this->OwnerList == (SListView<FName> *)0x0) {
    local_res8[0] = 0;
    bVar7 = `SListView<FName>::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()
                      (local_res8);
    if (!bVar7) goto LAB_1469f7837;
  }
  (**(code **)((longlong)*local_f8 + 8))();
  pSVar3 = this->OwnerList;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar3->OnRowReleased,
             &local_b0);
  if ((*(int *)&(pSVar3->OnRowReleased).field_0x10 != 0) &&
     (plVar11 = *(longlong **)&(pSVar3->OnRowReleased).field_0x8, plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar11 + 0x68))(plVar11,&local_f8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
LAB_1469f7837:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
LAB_1469f7903:
  uVar20 = uVar20 + 1;
  local_res20 = local_res20 + 8;
  if ((this->ItemsToBeCleanedUp).ArrayNum <= (int)uVar20) goto LAB_1469f7945;
  goto LAB_1469f7460;
}

// ValidateWidgetGeneration @ 146a2cca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<UObject_*>::FWidgetGenerator::ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<UObject_*> *pSVar4;
  undefined8 uVar5;
  code *pcVar6;
  TMap<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
  *pTVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  void *local_1a8 [2];
  longlong *local_198;
  TReferenceControllerBase<1> *local_190;
  void *local_188 [2];
  void *local_178 [2];
  TMap<ITableRow_const_*,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TObjectPtr<UObject>,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  TMap<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [2];
  void *local_e0 [2];
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  iVar14 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar16 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar16 != iVar14) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<UObject_*> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<UObject_*> *)0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar14 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<UObject_*> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<UObject_*> *)0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar16 != iVar14) || (iVar14 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar13 == (longlong *)0x0 || (cVar8 = (**(code **)(*plVar13 + 0x38))(), cVar8 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_138 = &this->ItemToWidgetMap;
      iVar14 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_1d0.BaseBitIndex = 0;
      uVar10 = 1;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)TStack_1d0.Array;
        }
        uVar10 = *puVar15;
        while (uVar10 == 0) {
          lVar12 = (longlong)iVar14;
          TStack_1d0.BaseBitIndex = TStack_1d0.BaseBitIndex + 0x20;
          iVar14 = iVar14 + 1;
          uVar10 = 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146a2cf01;
          uVar10 = puVar15[lVar12 + 1];
        }
        uVar10 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar16 = TStack_1d0.BaseBitIndex + -1 + (int)lVar12;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_146a2cf01:
      TStack_1d0._padding_ = CONCAT44(uVar10,iVar14);
      TStack_1d0.CurrentBitIndex = iVar16;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._28_4_ = local_3c;
      TStack_130._padding_ = TStack_1d0._padding_;
      TStack_130.BaseBitIndex = TStack_1d0.BaseBitIndex;
      TStack_130._28_4_ = local_3c;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      TStack_130.CurrentBitIndex = iVar16;
      TStack_130.Array = TStack_1d0.Array;
      if (iVar16 < iVar3) {
        do {
          pTVar7 = local_138;
          plVar13 = *(longlong **)((longlong)iVar16 * 0x20 + 8 + *(longlong *)local_138);
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_198);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_198 + 0x1e0))(local_198,local_f0);
            pSVar4 = this->OwnerList;
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + *(longlong *)pTVar7);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_1a8,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190);
          TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
          iVar16 = TStack_130.CurrentBitIndex;
        } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
      }
      uVar10 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_160 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_148 = 0;
      iVar14 = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)TStack_1d0.Array;
        }
        uVar11 = *puVar15;
        while (uVar11 == 0) {
          lVar12 = (longlong)iStack_160;
          local_148 = local_148 + 0x20;
          iStack_160 = iStack_160 + 1;
          iVar14 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160)
          goto LAB_146a2d131;
          uVar11 = puVar15[lVar12 + 1];
        }
        uVar10 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar14 = local_148 + -1 + (int)lVar12;
        if (iVar3 < iVar14) {
          iVar14 = iVar3;
        }
      }
LAB_146a2d131:
      uStack_150 = 0xffffffff;
      TStack_1d0._padding_ = CONCAT44(uVar10,iStack_160);
      TStack_1d0.CurrentBitIndex = iVar14;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._28_4_ = iVar14;
      TStack_1d0.BaseBitIndex = local_148;
      local_168 = pTVar1;
      uStack_15c = uVar10;
      local_158 = (undefined1 *)TStack_1d0.Array;
      iStack_14c = iVar14;
      iStack_144 = iVar14;
      if (iVar14 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar5 = *(undefined8 *)(*(longlong *)pTVar1 + 8 + (longlong)iVar14 * 0x18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_188,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_188[0] != (void *)0x0) {
              FMemory::Free(local_188[0]);
            }
          }
          TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
          iVar14 = TStack_1d0.CurrentBitIndex;
        } while (TStack_1d0.CurrentBitIndex < (TStack_1d0.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar10 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar12 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar11 = 0;
            if ((int)uVar10 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar5 = *(undefined8 *)
                     ((this->ItemsWithGeneratedWidgets).AllocatorInstance.Data + lVar12);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_178,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_178[0] != (void *)0x0) {
              FMemory::Free(local_178[0]);
            }
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar10 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar13 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar13 != (longlong *)0x0))
    {
      (**(code **)(*plVar13 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x37b,
                       L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                      );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 146a2d460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<FName> *pSVar4;
  undefined8 uVar5;
  code *pcVar6;
  TMap<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
  *pTVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  void *local_1a8 [2];
  longlong *local_198;
  TReferenceControllerBase<1> *local_190;
  void *local_188 [2];
  void *local_178 [2];
  TMap<ITableRow_const_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,FName,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  TMap<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [2];
  void *local_e0 [2];
  FReadAccessScope local_d0;
  FReadAccessScope local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70 [2];
  undefined4 local_3c;
  
  iVar14 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar16 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar16 != iVar14) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<FName> *)0x0) {
      (**(code **)(*(longlong *)pSVar4 + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<FName> *)0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar14 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<FName> *)0x0) {
      (**(code **)(*(longlong *)pSVar4 + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<FName> *)0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar16 != iVar14) || (iVar14 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar13 == (longlong *)0x0 || (cVar8 = (**(code **)(*plVar13 + 0x38))(), cVar8 == '\0')))) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_138 = &this->ItemToWidgetMap;
      iVar14 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_1d0.BaseBitIndex = 0;
      uVar10 = 1;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)TStack_1d0.Array;
        }
        uVar10 = *puVar15;
        while (uVar10 == 0) {
          lVar12 = (longlong)iVar14;
          TStack_1d0.BaseBitIndex = TStack_1d0.BaseBitIndex + 0x20;
          iVar14 = iVar14 + 1;
          uVar10 = 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146a2d6c1;
          uVar10 = puVar15[lVar12 + 1];
        }
        uVar10 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar16 = TStack_1d0.BaseBitIndex + -1 + (int)lVar12;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_146a2d6c1:
      TStack_1d0._padding_ = CONCAT44(uVar10,iVar14);
      TStack_1d0.CurrentBitIndex = iVar16;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._28_4_ = local_3c;
      TStack_130._padding_ = TStack_1d0._padding_;
      TStack_130.BaseBitIndex = TStack_1d0.BaseBitIndex;
      TStack_130._28_4_ = local_3c;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      TStack_130.CurrentBitIndex = iVar16;
      TStack_130.Array = TStack_1d0.Array;
      if (iVar16 < iVar3) {
        do {
          pTVar7 = local_138;
          plVar13 = *(longlong **)((longlong)iVar16 * 0x20 + 8 + *(longlong *)local_138);
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_198);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_198 + 0x1e0))(local_198,local_f0);
            pSVar4 = this->OwnerList;
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + *(longlong *)pTVar7);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_1a8,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_190);
          TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
          iVar16 = TStack_130.CurrentBitIndex;
        } while (TStack_130.CurrentBitIndex < (TStack_130.Array)->NumBits);
      }
      uVar10 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_160 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_148 = 0;
      iVar14 = 0;
      if (iVar3 != 0) {
        puVar15 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar15 == (uint *)0x0) {
          puVar15 = (uint *)TStack_1d0.Array;
        }
        uVar11 = *puVar15;
        while (uVar11 == 0) {
          lVar12 = (longlong)iStack_160;
          local_148 = local_148 + 0x20;
          iStack_160 = iStack_160 + 1;
          iVar14 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_160)
          goto LAB_146a2d8f1;
          uVar11 = puVar15[lVar12 + 1];
        }
        uVar10 = -uVar11 & uVar11;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar14 = local_148 + -1 + (int)lVar12;
        if (iVar3 < iVar14) {
          iVar14 = iVar3;
        }
      }
LAB_146a2d8f1:
      uStack_150 = 0xffffffff;
      TStack_1d0._padding_ = CONCAT44(uVar10,iStack_160);
      TStack_1d0.CurrentBitIndex = iVar14;
      TStack_1d0.UnvisitedBitMask = 0xffffffff;
      TStack_1d0._28_4_ = iVar14;
      TStack_1d0.BaseBitIndex = local_148;
      local_168 = pTVar1;
      uStack_15c = uVar10;
      local_158 = (undefined1 *)TStack_1d0.Array;
      iStack_14c = iVar14;
      iStack_144 = iVar14;
      if (iVar14 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar5 = *(undefined8 *)(*(longlong *)pTVar1 + 8 + (longlong)iVar14 * 0x18);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_188,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_188[0] != (void *)0x0) {
              FMemory::Free(local_188[0]);
            }
          }
          TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
          iVar14 = TStack_1d0.CurrentBitIndex;
        } while (TStack_1d0.CurrentBitIndex < (TStack_1d0.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar10 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar12 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar11 = 0;
            if ((int)uVar10 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar5 = *(undefined8 *)
                     ((this->ItemsWithGeneratedWidgets).AllocatorInstance.Data + lVar12);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            (**(code **)(*plVar13 + 0x60))(plVar13,local_178,uVar5);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_178[0] != (void *)0x0) {
              FMemory::Free(local_178[0]);
            }
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 8;
        } while ((int)uVar10 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar13 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar13 != (longlong *)0x0))
    {
      (**(code **)(*plVar13 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(*(longlong *)this->OwnerList + 0x1e0))(this->OwnerList,local_e0);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x37b,
                       L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                      );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// operator() @ 1504f7070

bool __thiscall
`SListView<UObject_*>::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<UObject*___ptr64>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f70b0

bool __thiscall
`SListView<FName>::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<FName>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

