// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 36

// ~FWidgetGenerator @ 142e14520

void __thiscall
SListView<TSharedPtr<int,1>_>::FWidgetGenerator::~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->ItemsToBeCleanedUp).AllocatorInstance.Data,
             (this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 142e145d0

void __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::~FWidgetGenerator
          (FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 142e14680

void __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::
~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
            ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
            ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 142e14730

void __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::~FWidgetGenerator
          (FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
            ((TSharedPtr<FWidgetReflectorNodeBase,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
            ((TSharedPtr<FWidgetReflectorNodeBase,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 142e147e0

void __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
~FWidgetGenerator(FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
            ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
            ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// ~FWidgetGenerator @ 142e14890

void __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::~FWidgetGenerator
          (FWidgetGenerator *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->ItemsToBeCleanedUp).AllocatorInstance.Data,(this->ItemsToBeCleanedUp).ArrayNum);
  pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)
             (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  pFVar1 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->WidgetMapToItem).field_0x48 = 0;
  pvVar2 = *(void **)&(this->WidgetMapToItem).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->WidgetMapToItem);
  *(undefined4 *)&(this->ItemToWidgetMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ItemToWidgetMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ItemToWidgetMap);
  return;
}

// Clear @ 142e31550

void __thiscall SListView<TSharedPtr<int,1>_>::FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_>::operator=(&this->ItemsToBeCleanedUp,pTVar2)
  ;
  DestructItems<TSharedPtr<int,1>,int>
            ((TSharedPtr<int,1> *)(pTVar2->AllocatorInstance).Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 142e315d0

void __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::Clear
          (FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar2->AllocatorInstance).Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 142e31650

void __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::Clear
          (FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>::
  operator=(&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
            ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
             (pTVar2->AllocatorInstance).Data,(this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 142e316d0

void __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
            ((TSharedPtr<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 142e31750

void __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
Clear(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
  ::operator=(&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
            ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
             (pTVar2->AllocatorInstance).Data,(this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// Clear @ 142e317d0

void __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::Clear(FWidgetGenerator *this)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemsToBeCleanedUp,pTVar2);
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
            ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data,
             (this->ItemsWithGeneratedWidgets).ArrayNum);
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  (this->ItemsWithGeneratedWidgets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  ProcessItemCleanUp(this);
  return;
}

// OnItemSeen @ 142ecc4e0

void __thiscall
SListView<TSharedPtr<int,1>_>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,TSharedPtr<int,1> *param_1,TSharedRef<ITableRow,1> *param_2)

{
  TArray<TSharedPtr<int,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  int *piVar3;
  SListView<TSharedPtr<int,1>_> *pSVar4;
  longlong *plVar5;
  TSharedPtr<int,1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TSharedRef<ITableRow,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  TPairInitializer<TSharedPtr<int,1>_const_&,TSharedRef<ITableRow,1>_const_&> local_res10;
  ITableRow *local_b8;
  FScriptContainerElement *local_b0;
  TSharedPtr<int_const_,1> local_a8;
  TSharedPtr<int,1> *local_98;
  TSharedRef<ITableRow,1> *local_90;
  ITableRow **local_88;
  TSharedPtr<int,1> *local_80;
  int *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res10.Value = param_2;
  if (param_1->Object == (int *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar10 = TMapBase<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a8);
  if (pTVar10 == (TSharedRef<ITableRow,1> *)0x0) {
    local_98 = param_1;
    local_90 = param_2;
    TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TSharedPtr<int,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_98);
    local_b8 = param_2->Object;
    local_88 = &local_b8;
    local_80 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<int,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedPtr<int,1>_const_&> *)&stack0x00000020,
               (bool *)&local_88);
    (**(code **)*param_2->Object)();
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    piVar3 = param_1->Object;
    pSVar4 = this->OwnerList;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar4->OnEntryInitialized).field_0x10 == 0) ||
       (plVar5 = *(longlong **)&(pSVar4->OnEntryInitialized).field_0x8, plVar5 == (longlong *)0x0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar11 = pTVar2;
    }
    else {
      local_78 = piVar3;
      local_70 = pTVar2;
      (**(code **)(*plVar5 + 0x68))(plVar5,&local_78,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  pTVar6 = (TSharedPtr<int,1> *)(this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar6 <= param_1) && (param_1 < pTVar6 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar12 = (longlong)iVar9;
  if (iVar9 != 0) {
    pFVar14 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar18 = 0;
    bVar8 = *(int **)pFVar14 != param_1->Object;
    lVar15 = 0;
    iVar9 = 0;
    local_b0 = pFVar14;
    do {
      lVar15 = lVar15 + 1;
      iVar17 = iVar9 + 1;
      if (lVar15 < lVar12) {
        pFVar13 = pFVar14 + lVar15 * 0x10;
        do {
          if (bVar8 != (*(int **)pFVar13 != param_1->Object)) break;
          iVar17 = iVar17 + 1;
          lVar15 = lVar15 + 1;
          pFVar13 = pFVar13 + 0x10;
        } while (lVar15 < lVar12);
      }
      iVar16 = iVar17 - iVar9;
      if (bVar8 == false) {
        DestructItems<TSharedPtr<int,1>,int>
                  ((TSharedPtr<int,1> *)(pFVar14 + (longlong)iVar9 * 0x10),iVar16);
      }
      else {
        if (iVar18 != iVar9) {
          memmove(pFVar14 + (longlong)iVar18 * 0x10,pFVar14 + (longlong)iVar9 * 0x10,
                  (longlong)iVar16 << 4);
        }
        iVar18 = iVar18 + iVar16;
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar9 = iVar17;
    } while (lVar15 < lVar12);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar18;
    param_2 = local_res10.Value;
  }
  pTVar1 = &this->ItemsWithGeneratedWidgets;
  pTVar6 = (TSharedPtr<int,1> *)(pTVar1->AllocatorInstance).Data;
  if ((pTVar6 <= param_1) && (param_1 < pTVar6 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar3 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar9 == *piVar3) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar9 + 1;
  pFVar14 = (pTVar1->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(int **)pFVar14 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 142ecc8c0

void __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,TSharedPtr<FNavigationSimulationWidgetNode,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNavigationSimulationWidgetNode *pFVar4;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar5;
  longlong *plVar6;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_b8;
  FScriptContainerElement *local_b0;
  TSharedPtr<FNavigationSimulationWidgetNode_const_,1> local_a8;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *local_98;
  TSharedRef<ITableRow,1> *local_90;
  ITableRow **local_88;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *local_80;
  FNavigationSimulationWidgetNode *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res10.Value = param_2;
  if (param_1->Object == (FNavigationSimulationWidgetNode *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a8);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_98 = param_1;
    local_90 = param_2;
    TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_98);
    local_b8 = param_2->Object;
    local_88 = &local_b8;
    local_80 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<FNavigationSimulationWidgetNode,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedPtr<FNavigationSimulationWidgetNode,1>_const_&>
                *)&stack0x00000020,(bool *)&local_88);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 == 0) ||
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 == (longlong *)0x0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = pTVar3;
    }
    else {
      local_78 = pFVar4;
      local_70 = pTVar3;
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_78,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar13 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar15 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FNavigationSimulationWidgetNode **)pFVar15 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    local_b0 = pFVar15;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar13) {
        pFVar14 = pFVar15 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FNavigationSimulationWidgetNode **)pFVar14 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar14 = pFVar14 + 0x10;
        } while (lVar16 < lVar13);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                  ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
                   (pFVar15 + (longlong)iVar10 * 0x10),iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar15 + (longlong)iVar19 * 0x10,pFVar15 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar13);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FNavigationSimulationWidgetNode **)pFVar15 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 142eccca0

void __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWidgetSnapshotTarget *pFVar4;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar5;
  longlong *plVar6;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_b8;
  FScriptContainerElement *local_b0;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> local_a8;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *local_98;
  TSharedRef<ITableRow,1> *local_90;
  ITableRow **local_88;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *local_80;
  FWidgetSnapshotTarget *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res10.Value = param_2;
  if (param_1->Object == (FWidgetSnapshotTarget *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a8);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_98 = param_1;
    local_90 = param_2;
    TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_98);
    local_b8 = param_2->Object;
    local_88 = &local_b8;
    local_80 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_const_&>
                *)&stack0x00000020,(bool *)&local_88);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 == 0) ||
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 == (longlong *)0x0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = pTVar3;
    }
    else {
      local_78 = pFVar4;
      local_70 = pTVar3;
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_78,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar13 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar15 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FWidgetSnapshotTarget **)pFVar15 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    local_b0 = pFVar15;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar13) {
        pFVar14 = pFVar15 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FWidgetSnapshotTarget **)pFVar14 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar14 = pFVar14 + 0x10;
        } while (lVar16 < lVar13);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>
                  ((TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
                   (pFVar15 + (longlong)iVar10 * 0x10),iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar15 + (longlong)iVar19 * 0x10,pFVar15 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar13);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FWidgetSnapshotTarget **)pFVar15 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 142ecd080

void __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,TSharedPtr<FWidgetReflectorNodeBase,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWidgetReflectorNodeBase *pFVar4;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar5;
  longlong *plVar6;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedPtr<FWidgetReflectorNodeBase,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_b8;
  FScriptContainerElement *local_b0;
  TSharedPtr<FWidgetReflectorNodeBase_const_,1> local_a8;
  TSharedPtr<FWidgetReflectorNodeBase,1> *local_98;
  TSharedRef<ITableRow,1> *local_90;
  ITableRow **local_88;
  TSharedPtr<FWidgetReflectorNodeBase,1> *local_80;
  FWidgetReflectorNodeBase *local_78;
  TReferenceControllerBase<1> *local_70;
  FReadAccessScope local_68;
  
  local_res10.Value = param_2;
  if (param_1->Object == (FWidgetReflectorNodeBase *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_a8.Object = param_1->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a8);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_98 = param_1;
    local_90 = param_2;
    TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedPtr<FWidgetReflectorNodeBase,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_98);
    local_b8 = param_2->Object;
    local_88 = &local_b8;
    local_80 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<FWidgetReflectorNodeBase,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedPtr<FWidgetReflectorNodeBase,1>_const_&>
                *)&stack0x00000020,(bool *)&local_88);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_68);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 == 0) ||
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 == (longlong *)0x0))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = pTVar3;
    }
    else {
      local_78 = pFVar4;
      local_70 = pTVar3;
      (**(code **)(*plVar6 + 0x68))(plVar6,&local_78,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar13 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar15 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FWidgetReflectorNodeBase **)pFVar15 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    local_b0 = pFVar15;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar13) {
        pFVar14 = pFVar15 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FWidgetReflectorNodeBase **)pFVar14 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar14 = pFVar14 + 0x10;
        } while (lVar16 < lVar13);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
                  ((TSharedPtr<FWidgetReflectorNodeBase,1> *)(pFVar15 + (longlong)iVar10 * 0x10),
                   iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar15 + (longlong)iVar19 * 0x10,pFVar15 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar13);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar15 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FWidgetReflectorNodeBase **)pFVar15 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar15 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 142ecd460

void __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
OnItemSeen(FWidgetGenerator *this,
          TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FIntermediateResultNode *pFVar4;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar5;
  longlong *plVar6;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  atomic<int> *paVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_a8;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> local_a0;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *local_90;
  TSharedRef<ITableRow,1> *local_88;
  ITableRow **local_80;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *local_78;
  FIntermediateResultNode *local_70;
  TReferenceControllerBase<1> *local_68;
  FReadAccessScope local_60;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10.Value = param_2;
  if (pFVar4 == (FIntermediateResultNode *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_a0.Object = param_1->Object;
  local_a0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a0);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_90 = param_1;
    local_88 = param_2;
    TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_90);
    local_a8 = param_2->Object;
    local_80 = &local_a8;
    local_78 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_const_&>
                *)&stack0x00000020,(bool *)&local_80);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_60);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 != (longlong *)0x0))
    {
      lVar12 = *plVar6;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_70 = pFVar4;
      local_68 = pTVar3;
      (**(code **)(lVar12 + 0x68))(plVar6,&local_70,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar12 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar14 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FIntermediateResultNode **)pFVar14 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar12) {
        pFVar13 = pFVar14 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FIntermediateResultNode **)pFVar13 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar13 = pFVar13 + 0x10;
        } while (lVar16 < lVar12);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
                  ((TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
                   (pFVar14 + (longlong)iVar10 * 0x10),iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar14 + (longlong)iVar19 * 0x10,pFVar14 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar12);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
           (pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FIntermediateResultNode **)pFVar14 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// OnItemSeen @ 142ecd860

void __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::OnItemSeen
          (FWidgetGenerator *this,TSharedRef<FWidgetReflectorNodeBase,1> *param_1,
          TSharedRef<ITableRow,1> *param_2)

{
  int *piVar1;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWidgetReflectorNodeBase *pFVar4;
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar5;
  longlong *plVar6;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  atomic<int> *paVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TPairInitializer<TSharedRef<FWidgetReflectorNodeBase,1>_const_&,TSharedRef<ITableRow,1>_const_&>
  local_res10;
  ITableRow *local_a8;
  TSharedRef<FWidgetReflectorNodeBase_const_,1> local_a0;
  TSharedRef<FWidgetReflectorNodeBase,1> *local_90;
  TSharedRef<ITableRow,1> *local_88;
  ITableRow **local_80;
  TSharedRef<FWidgetReflectorNodeBase,1> *local_78;
  FWidgetReflectorNodeBase *local_70;
  TReferenceControllerBase<1> *local_68;
  FReadAccessScope local_60;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10.Value = param_2;
  if (pFVar4 == (FWidgetReflectorNodeBase *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8670646794247470361>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                       ,0x2e7,"TListTypeTraits<ItemType>::IsPtrValid(InItem)");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_a0.Object = param_1->Object;
  local_a0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
            ::Find((TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
                    *)&this->ItemToWidgetMap,&local_a0);
  if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
    local_90 = param_1;
    local_88 = param_2;
    TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<FWidgetReflectorNodeBase,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
              ((TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *)&this->ItemToWidgetMap,&local_res10,(bool *)&local_90);
    local_a8 = param_2->Object;
    local_80 = &local_a8;
    local_78 = param_1;
    TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<FWidgetReflectorNodeBase,1>_const_&>_>
              ((TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                *)&this->WidgetMapToItem,
               (TPairInitializer<ITableRow_const_*_&&,TSharedRef<FWidgetReflectorNodeBase,1>_const_&>
                *)&stack0x00000020,(bool *)&local_80);
    (**(code **)*param_2->Object)();
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    pSVar5 = this->OwnerList;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar5->OnEntryInitialized
               ,&local_60);
    if ((*(int *)&(pSVar5->OnEntryInitialized).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(pSVar5->OnEntryInitialized).field_0x8, plVar6 != (longlong *)0x0))
    {
      lVar12 = *plVar6;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
      local_70 = pFVar4;
      local_68 = pTVar3;
      (**(code **)(lVar12 + 0x68))(plVar6,&local_70,param_2);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  pTVar7 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
           (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsToBeCleanedUp).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsToBeCleanedUp).ArrayNum;
  lVar12 = (longlong)iVar10;
  if (iVar10 != 0) {
    pFVar14 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
    iVar19 = 0;
    bVar9 = *(FWidgetReflectorNodeBase **)pFVar14 != param_1->Object;
    lVar16 = 0;
    iVar10 = 0;
    do {
      lVar16 = lVar16 + 1;
      iVar18 = iVar10 + 1;
      if (lVar16 < lVar12) {
        pFVar13 = pFVar14 + lVar16 * 0x10;
        do {
          if (bVar9 != (*(FWidgetReflectorNodeBase **)pFVar13 != param_1->Object)) break;
          iVar18 = iVar18 + 1;
          lVar16 = lVar16 + 1;
          pFVar13 = pFVar13 + 0x10;
        } while (lVar16 < lVar12);
      }
      iVar17 = iVar18 - iVar10;
      if (bVar9 == false) {
        DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>
                  ((TSharedRef<FWidgetReflectorNodeBase,1> *)(pFVar14 + (longlong)iVar10 * 0x10),
                   iVar17);
      }
      else {
        if (iVar19 != iVar10) {
          memmove(pFVar14 + (longlong)iVar19 * 0x10,pFVar14 + (longlong)iVar10 * 0x10,
                  (longlong)iVar17 << 4);
        }
        iVar19 = iVar19 + iVar17;
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar10 = iVar18;
    } while (lVar16 < lVar12);
    (this->ItemsToBeCleanedUp).ArrayNum = iVar19;
    param_2 = local_res10.Value;
  }
  pTVar2 = &this->ItemsWithGeneratedWidgets;
  pTVar7 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar7 <= param_1) && (param_1 < pTVar7 + (this->ItemsWithGeneratedWidgets).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar10 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  piVar1 = &(this->ItemsWithGeneratedWidgets).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ItemsWithGeneratedWidgets).ArrayNum = iVar10 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
  *(FWidgetReflectorNodeBase **)pFVar14 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar14 + 8) = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// ProcessItemCleanUp @ 142eeede0

void __thiscall
SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 *puVar4;
  TReferenceControllerBase<1> *pTVar5;
  int *piVar6;
  SListView<TSharedPtr<int,1>_> *pSVar7;
  longlong *plVar8;
  uint *puVar9;
  TSharedPtr<int,1> *pTVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  atomic<int> *paVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  ulonglong *puVar23;
  int iVar24;
  uint *puVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedPtr<int_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedPtr<int,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar19 = local_108;
      uVar17 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar17 = ~local_res10 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar1 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      piVar2 = *(int **)(pFVar1 + lVar19);
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar1 + lVar19 + 8);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar17 = ((uint)((ulonglong)piVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)piVar2 >> 4)) *
               -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      local_100.Object = piVar2;
      local_100.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      iVar15 = TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<int_const_,1>_>
                         ((TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar17,&local_100);
      if (iVar15 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_142eef0d4:
        if (piVar2 == (int *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar15 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar24 = auStack_150._0_4_;
          iVar16 = 0;
          if (iVar15 != 0) {
            puVar9 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar25 = (uint *)TStack_d8.Array;
            if (puVar9 != (uint *)0x0) {
              puVar25 = puVar9;
            }
            uVar17 = *puVar25;
            auStack_150._0_4_ = 0;
            iVar24 = 0;
            while (uVar17 == 0) {
              lVar19 = (longlong)(int)auStack_150._0_4_;
              iVar24 = iVar24 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar16 = iVar15;
              if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142eef161;
              uVar17 = puVar25[lVar19 + 1];
            }
            auStack_150._4_4_ = -uVar17 & uVar17;
            uVar20 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            local_res18 = (int)lVar19;
            iVar16 = local_res18 + -1 + iVar24;
            if (iVar15 < iVar16) {
              iVar16 = iVar15;
            }
          }
LAB_142eef161:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar16;
          auVar12 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar24);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x100009fe = auVar12;
          if (iVar16 < iVar15) {
            do {
              puVar23 = (ulonglong *)((longlong)iVar16 * 0x20 + *(longlong *)local_e0);
              if (puVar23[1] == 0) goto LAB_142eef1e6;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar16 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar23 = (ulonglong *)0x0;
LAB_142eef1e6:
          if (puVar23 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar13 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar20 = local_a0._24_8_ >> 0x20;
            uVar17 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar17 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar13 + 0x10 + (longlong)(int)uVar20 * 0x28) ==
                    *puVar23) {
                  TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar17);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142eef2ab;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar20 = (ulonglong)uStack_13c;
                uVar17 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142eef2ab:
                if (local_120._1_1_ != '\0') {
                  uVar17 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar17 < 4) {
                    iVar15 = 1;
                  }
                  else {
                    uVar20 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
                    lVar19 = 0x3f;
                    if (uVar20 != 0) {
                      for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar19;
                    iVar15 = 1 << ((byte)lVar19 & 0x1f);
                  }
                  if (((0 < (int)uVar17) && (local_128->HashSize < iVar15)) ||
                     (iVar15 < local_128->HashSize)) {
                    local_128->HashSize = iVar15;
                    TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar23;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar17 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar17 ^ uVar17 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar19 = *(longlong *)&this_00->field_0x0 + (longlong)iVar15 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        puVar22 = (undefined8 *)(lVar19 + 0x10);
        if (lVar19 == 0) {
          puVar22 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        if (puVar22 == (undefined8 *)0x0) goto LAB_142eef0d4;
        local_118 = (ITableRow *)*puVar22;
        local_110 = (TReferenceControllerBase<1> *)puVar22[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          paVar18 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar18 = &pTVar3->SharedReferenceCount;
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar18 = (atomic<int>)((int)*paVar18 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          puVar4 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar21 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar21 = puVar4;
          }
          iVar15 = *(int *)(puVar21 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar17) * 4);
          while (iVar15 != -1) {
            puVar23 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar15 * 0x28);
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar5 = (TReferenceControllerBase<1> *)puVar23[1];
            piVar6 = (int *)*puVar23;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (piVar6 == piVar2) {
              TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar15);
              break;
            }
            iVar15 = (int)puVar23[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar17 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedPtr<int,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar17 ^ uVar17 >> 0x10,&local_f0);
        }
        if (this->OwnerList == (SListView<TSharedPtr<int,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar14 = `SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ProcessItemCleanUp'::__l8::
                   <lambda_1>::operator()(local_res8);
          if (bVar14) goto LAB_142eef072;
        }
        else {
LAB_142eef072:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar7 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar7->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar7->OnRowReleased).field_0x10 != 0) &&
             (plVar8 = *(longlong **)&(pSVar7->OnRowReleased).field_0x8, plVar8 != (longlong *)0x0))
          {
            (**(code **)(*plVar8 + 0x68))(plVar8,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar2 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar10 = (TSharedPtr<int,1> *)(this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar15 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedPtr<int,1>,int>(pTVar10,iVar15);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar2);
    }
    return;
  }
  DestructItems<TSharedPtr<int,1>,int>(pTVar10,iVar15);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ProcessItemCleanUp @ 142eef420

void __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ProcessItemCleanUp
          (FWidgetGenerator *this)

{
  TMap<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FNavigationSimulationWidgetNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNavigationSimulationWidgetNode *pFVar7;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedPtr<FNavigationSimulationWidgetNode_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FNavigationSimulationWidgetNode **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FNavigationSimulationWidgetNode_const_,1>_>
                         ((TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142eef714:
        if (pFVar3 == (FNavigationSimulationWidgetNode *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142eef7a1;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_142eef7a1:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x100009fe = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_142eef826;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_142eef826:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142eef8eb;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142eef8eb:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_142eef714;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FNavigationSimulationWidgetNode *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList == (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::
                   ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar15) goto LAB_142eef6b2;
        }
        else {
LAB_142eef6b2:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>(pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>(pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ProcessItemCleanUp @ 142eefa60

void __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::
ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWidgetSnapshotTarget *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetSnapshotTarget *pFVar7;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FWidgetSnapshotTarget **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1>_>
                         ((TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142eefd54:
        if (pFVar3 == (FWidgetSnapshotTarget *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142eefde1;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_142eefde1:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x100009fe = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_142eefe66;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_142eefe66:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142eeff2b;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142eeff2b:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_142eefd54;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FWidgetSnapshotTarget *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList ==
            (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::
                   FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar15) goto LAB_142eefcf2;
        }
        else {
LAB_142eefcf2:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,int>(pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ProcessItemCleanUp @ 142ef00a0

void __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp
          (FWidgetGenerator *this)

{
  TMap<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWidgetReflectorNodeBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetReflectorNodeBase *pFVar7;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedPtr<FWidgetReflectorNodeBase_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FWidgetReflectorNodeBase **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedPtr<FWidgetReflectorNodeBase_const_,1>_>
                         ((TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142ef0394:
        if (pFVar3 == (FWidgetReflectorNodeBase *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142ef0421;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_142ef0421:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x100009fe = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_142ef04a6;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_142ef04a6:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142ef056b;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142ef056b:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_142ef0394;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FWidgetReflectorNodeBase *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList == (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::
                   ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar15) goto LAB_142ef0332;
        }
        else {
LAB_142ef0332:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ProcessItemCleanUp @ 142ef06e0

void __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
ProcessItemCleanUp(FWidgetGenerator *this)

{
  TMap<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FIntermediateResultNode *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FIntermediateResultNode *pFVar7;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FIntermediateResultNode **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::
               FindIndexByHash<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1>_>
                         ((TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142ef09d4:
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (pFVar3 == (FIntermediateResultNode *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142ef0a72;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_142ef0a72:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x10000a18 = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_142ef0af7;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_142ef0af7:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142ef0bbb;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142ef0bbb:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_142ef09d4;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FIntermediateResultNode *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList ==
            (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::
                   FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar15) goto LAB_142ef0972;
        }
        else {
LAB_142ef0972:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
              (pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,int>
            (pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ProcessItemCleanUp @ 142ef0d30

void __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp
          (FWidgetGenerator *this)

{
  TMap<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWidgetReflectorNodeBase *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined1 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  FWidgetReflectorNodeBase *pFVar7;
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar8;
  longlong *plVar9;
  uint *puVar10;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  atomic<int> *paVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  ulonglong *puVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_res20;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  ITableRow *local_118;
  TReferenceControllerBase<1> *local_110;
  longlong local_108;
  TSharedRef<FWidgetReflectorNodeBase_const_,1> local_100;
  ITableRow *local_f0;
  ITableRow *local_e8;
  TMap<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>_>
  *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  FReadAccessScope local_b8;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  local_res10 = 0;
  if (0 < (this->ItemsToBeCleanedUp).ArrayNum) {
    this_00 = &this->ItemToWidgetMap;
    local_108 = 0;
    do {
      lVar20 = local_108;
      uVar18 = 0;
      if ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum) {
        uVar18 = ~local_res10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar2 = (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
      pFVar3 = *(FWidgetReflectorNodeBase **)(pFVar2 + lVar20);
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar20 + 8);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar18 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      local_100.Object = pFVar3;
      local_100.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      uVar18 = uVar18 >> 0x10 ^ uVar18;
      iVar16 = TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<TSharedRef<FWidgetReflectorNodeBase_const_,1>_>
                         ((TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                           *)this_00,uVar18,&local_100);
      if (iVar16 == -1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
LAB_142ef1024:
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (pFVar3 == (FWidgetReflectorNodeBase *)0x0) {
          local_e0 = &this->WidgetMapToItem;
          auStack_150._0_4_ = 0;
          TStack_d8.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10;
          auStack_150._4_4_ = 1;
          iVar16 = *(int *)&(this->WidgetMapToItem).field_0x28;
          iVar25 = auStack_150._0_4_;
          iVar17 = 0;
          if (iVar16 != 0) {
            puVar10 = *(uint **)&(this->WidgetMapToItem).field_0x20;
            puVar26 = (uint *)TStack_d8.Array;
            if (puVar10 != (uint *)0x0) {
              puVar26 = puVar10;
            }
            uVar18 = *puVar26;
            auStack_150._0_4_ = 0;
            iVar25 = 0;
            while (uVar18 == 0) {
              lVar20 = (longlong)(int)auStack_150._0_4_;
              iVar25 = iVar25 + 0x20;
              auStack_150._0_4_ = auStack_150._0_4_ + 1;
              iVar17 = iVar16;
              if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)auStack_150._0_4_)
              goto LAB_142ef10c2;
              uVar18 = puVar26[lVar20 + 1];
            }
            auStack_150._4_4_ = -uVar18 & uVar18;
            uVar21 = (ulonglong)(uint)auStack_150._4_4_ * 2 + 1;
            lVar20 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_res18 = (int)lVar20;
            iVar17 = local_res18 + -1 + iVar25;
            if (iVar16 < iVar17) {
              iVar17 = iVar16;
            }
          }
LAB_142ef10c2:
          uStack_140 = 0xffffffff;
          auStack_150._8_8_ = TStack_d8.Array;
          uStack_13c = iVar17;
          auVar13 = stack0xfffffffffffffeb8;
          local_138 = CONCAT44(local_54,iVar25);
          TStack_d8._padding_ = auStack_150._0_8_;
          TStack_d8._24_8_ = local_138;
          TStack_d8.UnvisitedBitMask = uStack_140;
          TStack_d8.CurrentBitIndex = uStack_13c;
          unique0x10000a18 = auVar13;
          if (iVar17 < iVar16) {
            do {
              puVar24 = (ulonglong *)((longlong)iVar17 * 0x20 + *(longlong *)local_e0);
              if (puVar24[1] == 0) goto LAB_142ef1147;
              TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
              iVar17 = TStack_d8.CurrentBitIndex;
            } while (TStack_d8.CurrentBitIndex < (TStack_d8.Array)->NumBits);
          }
          puVar24 = (ulonglong *)0x0;
LAB_142ef1147:
          if (puVar24 != (ulonglong *)0x0) {
            TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
            ::TIterator::TIterator
                      ((TIterator *)local_a0,
                       (TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                        *)this_00);
            uVar14 = local_a0._0_8_;
            local_120 = 0;
            stack0xfffffffffffffeb8 = local_a0._16_16_;
            auStack_150._0_8_ = local_a0._8_8_;
            local_138 = local_80;
            pTStack_130 = pTStack_78;
            uVar21 = local_a0._24_8_ >> 0x20;
            uVar18 = local_a0._28_4_;
            local_128 = (TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                         *)this_00;
            if ((int)uVar18 < *(int *)(local_a0._16_8_ + 0x18)) {
              do {
                if (*(ulonglong *)(*(longlong *)uVar14 + 0x10 + (longlong)(int)uVar21 * 0x28) ==
                    *puVar24) {
                  TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTStack_130,uVar18);
                  local_120 = CONCAT11(local_120._1_1_,1);
                  goto LAB_142ef120b;
                }
                uStack_140 = uStack_140 & ~auStack_150._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
                uVar21 = (ulonglong)uStack_13c;
                uVar18 = uStack_13c;
              } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
              if ((char)local_120 != '\0') {
LAB_142ef120b:
                if (local_120._1_1_ != '\0') {
                  uVar18 = *(int *)&(local_128->Elements).field_0x8 -
                           *(int *)&(local_128->Elements).field_0x34;
                  if (uVar18 < 4) {
                    iVar16 = 1;
                  }
                  else {
                    uVar21 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
                    lVar20 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                      }
                    }
                    local_res20 = (undefined4)lVar20;
                    iVar16 = 1 << ((byte)lVar20 & 0x1f);
                  }
                  if (((0 < (int)uVar18) && (local_128->HashSize < iVar16)) ||
                     (iVar16 < local_128->HashSize)) {
                    local_128->HashSize = iVar16;
                    TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                    ::Rehash(local_128);
                  }
                }
              }
            }
            local_e8 = (ITableRow *)*puVar24;
            if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
                *(int *)&(this->WidgetMapToItem).field_0x34) {
              uVar18 = ((uint)((ulonglong)local_e8 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)local_e8 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<ITableRow_const_*>
                        ((TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                          *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_e8);
            }
          }
        }
      }
      else {
        lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        if (lVar20 == 0) {
          puVar23 = (undefined8 *)0x0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (puVar23 == (undefined8 *)0x0) goto LAB_142ef1024;
        local_118 = (ITableRow *)*puVar23;
        local_110 = (TReferenceControllerBase<1> *)puVar23[1];
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
          paVar19 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar19 = &pTVar4->SharedReferenceCount;
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
          LOCK();
          *paVar19 = (atomic<int>)((int)*paVar19 + 1);
          UNLOCK();
        }
        if (*(int *)&(this->ItemToWidgetMap).field_0x8 !=
            *(int *)&(this->ItemToWidgetMap).field_0x34) {
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar19 = (atomic<int>)((int)*paVar19 + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar4);
          puVar5 = *(undefined1 **)&(this->ItemToWidgetMap).field_0x40;
          puVar22 = &(this->ItemToWidgetMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar22 = puVar5;
          }
          iVar16 = *(int *)(puVar22 +
                           ((longlong)*(int *)&(this->ItemToWidgetMap).field_0x48 - 1U &
                           (longlong)(int)uVar18) * 4);
          while (iVar16 != -1) {
            puVar24 = (ulonglong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar16 * 0x28);
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar6 = (TReferenceControllerBase<1> *)puVar24[1];
            pFVar7 = (FWidgetReflectorNodeBase *)*puVar24;
            if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar6);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            if (pFVar7 == pFVar3) {
              TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                               *)this_00,iVar16);
              break;
            }
            iVar16 = (int)puVar24[4];
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        local_f0 = local_118;
        if (*(int *)&(this->WidgetMapToItem).field_0x8 !=
            *(int *)&(this->WidgetMapToItem).field_0x34) {
          uVar18 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_118 >> 4)) * -0x7a143595;
          uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
          TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<ITableRow_const_*>
                    ((TSet<TTuple<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>,FDefaultSetAllocator>
                      *)&this->WidgetMapToItem,uVar18 ^ uVar18 >> 0x10,&local_f0);
        }
        if (this->OwnerList == (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
          local_res8[0] = 0;
          bVar15 = `SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::
                   ProcessItemCleanUp'::__l8::<lambda_1>::operator()(local_res8);
          if (bVar15) goto LAB_142ef0fc2;
        }
        else {
LAB_142ef0fc2:
          (**(code **)((longlong)*local_118 + 8))();
          pSVar8 = this->OwnerList;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                     &pSVar8->OnRowReleased,&local_b8);
          if ((*(int *)&(pSVar8->OnRowReleased).field_0x10 != 0) &&
             (plVar9 = *(longlong **)&(pSVar8->OnRowReleased).field_0x8, plVar9 != (longlong *)0x0))
          {
            (**(code **)(*plVar9 + 0x68))(plVar9,&local_118);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_b8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      local_res10 = local_res10 + 1;
      local_108 = local_108 + 0x10;
    } while ((int)local_res10 < (this->ItemsToBeCleanedUp).ArrayNum);
  }
  piVar1 = &(this->ItemsToBeCleanedUp).ArrayMax;
  pTVar11 = (TSharedRef<FWidgetReflectorNodeBase,1> *)
            (this->ItemsToBeCleanedUp).AllocatorInstance.Data;
  iVar16 = (this->ItemsToBeCleanedUp).ArrayNum;
  if ((this->ItemsToBeCleanedUp).ArrayMax < 0) {
    DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar16);
    (this->ItemsToBeCleanedUp).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->ItemsToBeCleanedUp).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<TSharedRef<FWidgetReflectorNodeBase,1>,int>(pTVar11,iVar16);
  (this->ItemsToBeCleanedUp).ArrayNum = 0;
  return;
}

// ValidateWidgetGeneration @ 142f14ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedPtr<int,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedPtr<int,1>_> *pSVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedPtr<int,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
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
  
  iVar16 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar18 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar18 != iVar16) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<int,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<int,1>_> *)0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar16 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<int,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<int,1>_> *)0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar18 != iVar16) || (iVar16 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar15 == (longlong *)0x0 || (cVar10 = (**(code **)(*plVar15 + 0x38))(), cVar10 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar16 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar12 = 1;
      iVar18 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar12 = *puVar17;
        while (uVar12 == 0) {
          lVar14 = (longlong)iVar16;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142f14d21;
          uVar12 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = (int)lVar14 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f14d21:
      TStack_200._padding_ = CONCAT44(uVar12,iVar16);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar18;
      TStack_160.Array = TStack_200.Array;
      if (iVar18 < iVar3) {
        do {
          pTVar9 = local_168;
          plVar15 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar18 * 0x28);
          (**(code **)(*plVar15 + 0x58))(plVar15,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)(*(longlong *)pTVar9 + 8 + (longlong)iVar18 * 0x28);
            uVar5 = *(undefined8 *)(*(longlong *)pTVar9 + (longlong)iVar18 * 0x28);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_140 = uVar5;
            local_138 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar18 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      uVar12 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar14 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f14f71;
          uVar13 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar16 = local_178 + -1 + (int)lVar14;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_142f14f71:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uVar12,iStack_190);
      TStack_200.CurrentBitIndex = iVar16;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar16;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      uStack_18c = uVar12;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar16;
      iStack_174 = iVar16;
      if (iVar16 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)((longlong)iVar16 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)pTVar1);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_130 = uVar5;
            local_128 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar16 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar12 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar14 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar13 = 0;
            if ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar6 + lVar14 + 8);
            uVar5 = *(undefined8 *)(pFVar6 + lVar14);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_120 = uVar5;
            local_118 = lVar7;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar15 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar15 != (longlong *)0x0))
    {
      (**(code **)(*plVar15 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 142f152e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::
ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *pSVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
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
  
  iVar16 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar18 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar18 != iVar16) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) &&
       (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar16 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_> *)0x0) &&
       (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar18 != iVar16) || (iVar16 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar15 == (longlong *)0x0 || (cVar10 = (**(code **)(*plVar15 + 0x38))(), cVar10 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar16 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar12 = 1;
      iVar18 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar12 = *puVar17;
        while (uVar12 == 0) {
          lVar14 = (longlong)iVar16;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142f15541;
          uVar12 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = (int)lVar14 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f15541:
      TStack_200._padding_ = CONCAT44(uVar12,iVar16);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar18;
      TStack_160.Array = TStack_200.Array;
      if (iVar18 < iVar3) {
        do {
          pTVar9 = local_168;
          plVar15 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar18 * 0x28);
          (**(code **)(*plVar15 + 0x58))(plVar15,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)(*(longlong *)pTVar9 + 8 + (longlong)iVar18 * 0x28);
            uVar5 = *(undefined8 *)(*(longlong *)pTVar9 + (longlong)iVar18 * 0x28);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_140 = uVar5;
            local_138 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar18 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      uVar12 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar14 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f15791;
          uVar13 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar16 = local_178 + -1 + (int)lVar14;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_142f15791:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uVar12,iStack_190);
      TStack_200.CurrentBitIndex = iVar16;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar16;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      uStack_18c = uVar12;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar16;
      iStack_174 = iVar16;
      if (iVar16 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)((longlong)iVar16 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)pTVar1);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_130 = uVar5;
            local_128 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar16 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar12 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar14 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar13 = 0;
            if ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar6 + lVar14 + 8);
            uVar5 = *(undefined8 *)(pFVar6 + lVar14);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_120 = uVar5;
            local_118 = lVar7;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar15 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar15 != (longlong *)0x0))
    {
      (**(code **)(*plVar15 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 142f15b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::
ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *pSVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
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
  
  iVar16 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar18 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar18 != iVar16) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
       (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar16 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_> *)0x0) &&
       (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar18 != iVar16) || (iVar16 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar15 == (longlong *)0x0 || (cVar10 = (**(code **)(*plVar15 + 0x38))(), cVar10 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar16 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar12 = 1;
      iVar18 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar12 = *puVar17;
        while (uVar12 == 0) {
          lVar14 = (longlong)iVar16;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142f15d61;
          uVar12 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = (int)lVar14 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f15d61:
      TStack_200._padding_ = CONCAT44(uVar12,iVar16);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar18;
      TStack_160.Array = TStack_200.Array;
      if (iVar18 < iVar3) {
        do {
          pTVar9 = local_168;
          plVar15 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar18 * 0x28);
          (**(code **)(*plVar15 + 0x58))(plVar15,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)(*(longlong *)pTVar9 + 8 + (longlong)iVar18 * 0x28);
            uVar5 = *(undefined8 *)(*(longlong *)pTVar9 + (longlong)iVar18 * 0x28);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_140 = uVar5;
            local_138 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar18 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      uVar12 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar14 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f15fb1;
          uVar13 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar16 = local_178 + -1 + (int)lVar14;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_142f15fb1:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uVar12,iStack_190);
      TStack_200.CurrentBitIndex = iVar16;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar16;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      uStack_18c = uVar12;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar16;
      iStack_174 = iVar16;
      if (iVar16 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)((longlong)iVar16 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)pTVar1);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_130 = uVar5;
            local_128 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar16 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar12 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar14 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar13 = 0;
            if ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar6 + lVar14 + 8);
            uVar5 = *(undefined8 *)(pFVar6 + lVar14);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_120 = uVar5;
            local_118 = lVar7;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar15 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar15 != (longlong *)0x0))
    {
      (**(code **)(*plVar15 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 142f16320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration
          (FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *pSVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  TMap<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
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
  
  iVar16 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar18 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar18 != iVar16) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar16 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar18 != iVar16) || (iVar16 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar15 == (longlong *)0x0 || (cVar10 = (**(code **)(*plVar15 + 0x38))(), cVar10 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar16 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar12 = 1;
      iVar18 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar12 = *puVar17;
        while (uVar12 == 0) {
          lVar14 = (longlong)iVar16;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_142f16581;
          uVar12 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar12 & uVar12;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar18 = (int)lVar14 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f16581:
      TStack_200._padding_ = CONCAT44(uVar12,iVar16);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar18;
      TStack_160.Array = TStack_200.Array;
      if (iVar18 < iVar3) {
        do {
          pTVar9 = local_168;
          plVar15 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar18 * 0x28);
          (**(code **)(*plVar15 + 0x58))(plVar15,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)(*(longlong *)pTVar9 + 8 + (longlong)iVar18 * 0x28);
            uVar5 = *(undefined8 *)(*(longlong *)pTVar9 + (longlong)iVar18 * 0x28);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_140 = uVar5;
            local_138 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar18 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      uVar12 = 1;
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar16 = 0;
      if (iVar3 != 0) {
        puVar17 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar17;
        while (uVar13 == 0) {
          lVar14 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar16 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f167d1;
          uVar13 = puVar17[lVar14 + 1];
        }
        uVar12 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar16 = local_178 + -1 + (int)lVar14;
        if (iVar3 < iVar16) {
          iVar16 = iVar3;
        }
      }
LAB_142f167d1:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uVar12,iStack_190);
      TStack_200.CurrentBitIndex = iVar16;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar16;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      uStack_18c = uVar12;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar16;
      iStack_174 = iVar16;
      if (iVar16 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            lVar14 = *(longlong *)((longlong)iVar16 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar5 = *(undefined8 *)((longlong)iVar16 * 0x20 + 8 + *(longlong *)pTVar1);
            if (lVar14 != 0) {
              LOCK();
              *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_130 = uVar5;
            local_128 = lVar14;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar16 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar12 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar14 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar13 = 0;
            if ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar13 = ~uVar12 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar6 + lVar14 + 8);
            uVar5 = *(undefined8 *)(pFVar6 + lVar14);
            if (lVar7 != 0) {
              LOCK();
              *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar15 = (longlong *)0x0;
            }
            else {
              plVar15 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            local_120 = uVar5;
            local_118 = lVar7;
            (**(code **)(*plVar15 + 0x60))(plVar15,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x10;
        } while ((int)uVar12 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar15 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar15 != (longlong *)0x0))
    {
      (**(code **)(*plVar15 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 142f16b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
ValidateWidgetGeneration(FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  TMap<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  atomic<int> *paVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  undefined8 local_120;
  TReferenceControllerBase<1> *local_118;
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
  
  iVar18 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar20 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar20 != iVar18) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
                  0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
                   0x0) && (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar18 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
                  0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_> *)
                   0x0) && (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar20 != iVar18) || (iVar18 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar16 == (longlong *)0x0 || (cVar11 = (**(code **)(*plVar16 + 0x38))(), cVar11 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar18 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar13 = 1;
      iVar20 = 0;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iVar18;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar18 = iVar18 + 1;
          uVar13 = 1;
          iVar20 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_142f16da0;
          uVar13 = puVar19[lVar15 + 1];
        }
        uVar13 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar20 = (int)lVar15 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar20) {
          iVar20 = iVar3;
        }
      }
LAB_142f16da0:
      TStack_200._padding_ = CONCAT44(uVar13,iVar18);
      TStack_200.CurrentBitIndex = iVar20;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar20;
      TStack_160.Array = TStack_200.Array;
      if (iVar20 < iVar3) {
        do {
          pTVar10 = local_168;
          plVar16 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar20 * 0x28);
          (**(code **)(*plVar16 + 0x58))(plVar16,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      (*(longlong *)pTVar10 + 8 + (longlong)iVar20 * 0x28);
            uVar6 = *(undefined8 *)(*(longlong *)pTVar10 + (longlong)iVar20 * 0x28);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_140 = uVar6;
            local_138 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar20 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar18 = 0;
      uStack_18c = 1;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f17011;
          uVar13 = puVar19[lVar15 + 1];
        }
        uStack_18c = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_18c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar18 = local_178 + -1 + (int)lVar15;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f17011:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uStack_18c,iStack_190);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar18;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar18;
      iStack_174 = iVar18;
      if (iVar18 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      ((longlong)iVar18 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar6 = *(undefined8 *)((longlong)iVar18 * 0x20 + 8 + *(longlong *)pTVar1);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_130 = uVar6;
            local_128 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar18 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar13 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar15 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar14 = 0;
            if ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar15 + 8);
            uVar6 = *(undefined8 *)(pFVar7 + lVar15);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar8 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_120 = uVar6;
            local_118 = pTVar5;
            (**(code **)(lVar8 + 0x60))(plVar16,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar16 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar16 != (longlong *)0x0))
    {
      (**(code **)(*plVar16 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// ValidateWidgetGeneration @ 142f173c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration
          (FWidgetGenerator *this)

{
  TMap<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *pSVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  TMap<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *pTVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  atomic<int> *paVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  void *local_1d8 [2];
  longlong *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  void *local_1b8 [2];
  void *local_1a8 [2];
  TMap<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  TMap<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
  *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 local_140;
  TReferenceControllerBase<1> *local_138;
  undefined8 local_130;
  TReferenceControllerBase<1> *local_128;
  undefined8 local_120;
  TReferenceControllerBase<1> *local_118;
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
  
  iVar18 = *(int *)&(this->WidgetMapToItem).field_0x8 - *(int *)&(this->WidgetMapToItem).field_0x34;
  iVar20 = *(int *)&(this->ItemToWidgetMap).field_0x8 - *(int *)&(this->ItemToWidgetMap).field_0x34;
  iVar3 = (this->ItemsWithGeneratedWidgets).ArrayNum;
  if ((iVar20 != iVar18) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_110);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (local_110[0] != (void *)0x0)) {
      FMemory::Free(local_110[0]);
    }
  }
  if ((iVar18 != iVar3) && (2 < (byte)LogSlate._0_1_)) {
    pSVar4 = this->OwnerList;
    if (pSVar4 != (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) {
      (**(code **)(pSVar4->_padding_ + 0x1e0))(pSVar4,local_100);
    }
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                ::__l26::LOG_Static,(FLogCategoryBase *)&LogSlate);
    if ((pSVar4 != (SListView<TSharedRef<FWidgetReflectorNodeBase,1>_> *)0x0) &&
       (local_100[0] != (void *)0x0)) {
      FMemory::Free(local_100[0]);
    }
  }
  if ((iVar20 != iVar18) || (iVar18 != iVar3)) {
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pSVar4->OnItemToString_Debug,&local_d0);
    if ((*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) ||
       ((plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8,
        plVar16 == (longlong *)0x0 || (cVar11 = (**(code **)(*plVar16 + 0x38))(), cVar11 == '\0'))))
    {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l210::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_d0);
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l49::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_))
      {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l66::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      local_168 = &this->ItemToWidgetMap;
      iVar18 = 0;
      iVar3 = *(int *)&(this->ItemToWidgetMap).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ItemToWidgetMap).field_0x10
      ;
      TStack_200.BaseBitIndex = 0;
      uVar13 = 1;
      iVar20 = 0;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->ItemToWidgetMap).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iVar18;
          TStack_200.BaseBitIndex = TStack_200.BaseBitIndex + 0x20;
          iVar18 = iVar18 + 1;
          uVar13 = 1;
          iVar20 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_142f17620;
          uVar13 = puVar19[lVar15 + 1];
        }
        uVar13 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar20 = (int)lVar15 + -1 + TStack_200.BaseBitIndex;
        if (iVar3 < iVar20) {
          iVar20 = iVar3;
        }
      }
LAB_142f17620:
      TStack_200._padding_ = CONCAT44(uVar13,iVar18);
      TStack_200.CurrentBitIndex = iVar20;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = local_3c;
      TStack_160._padding_ = TStack_200._padding_;
      TStack_160.BaseBitIndex = TStack_200.BaseBitIndex;
      TStack_160._28_4_ = local_3c;
      TStack_160.UnvisitedBitMask = 0xffffffff;
      TStack_160.CurrentBitIndex = iVar20;
      TStack_160.Array = TStack_200.Array;
      if (iVar20 < iVar3) {
        do {
          pTVar10 = local_168;
          plVar16 = *(longlong **)(*(longlong *)local_168 + 0x10 + (longlong)iVar20 * 0x28);
          (**(code **)(*plVar16 + 0x58))(plVar16,&local_1c8);
          if (2 < (byte)LogSlate._0_1_) {
            (**(code **)(*local_1c8 + 0x1e0))(local_1c8,local_f0);
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      (*(longlong *)pTVar10 + 8 + (longlong)iVar20 * 0x28);
            uVar6 = *(undefined8 *)(*(longlong *)pTVar10 + (longlong)iVar20 * 0x28);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_b8);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_140 = uVar6;
            local_138 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1d8,&local_140);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_b8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l85::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1d8[0] != (void *)0x0) {
              FMemory::Free(local_1d8[0]);
            }
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1c0);
          TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          iVar20 = TStack_160.CurrentBitIndex;
        } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l102::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l119::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      pTVar1 = &this->WidgetMapToItem;
      iStack_190 = 0;
      iVar3 = *(int *)&(this->WidgetMapToItem).field_0x28;
      TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->WidgetMapToItem).field_0x10
      ;
      local_178 = 0;
      iVar18 = 0;
      uStack_18c = 1;
      if (iVar3 != 0) {
        puVar19 = *(uint **)&(this->WidgetMapToItem).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)TStack_200.Array;
        }
        uVar13 = *puVar19;
        while (uVar13 == 0) {
          lVar15 = (longlong)iStack_190;
          local_178 = local_178 + 0x20;
          iStack_190 = iStack_190 + 1;
          iVar18 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190)
          goto LAB_142f17891;
          uVar13 = puVar19[lVar15 + 1];
        }
        uStack_18c = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_18c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar18 = local_178 + -1 + (int)lVar15;
        if (iVar3 < iVar18) {
          iVar18 = iVar3;
        }
      }
LAB_142f17891:
      uStack_180 = 0xffffffff;
      TStack_200._padding_ = CONCAT44(uStack_18c,iStack_190);
      TStack_200.CurrentBitIndex = iVar18;
      TStack_200.UnvisitedBitMask = 0xffffffff;
      TStack_200._28_4_ = iVar18;
      TStack_200.BaseBitIndex = local_178;
      local_198 = pTVar1;
      local_188 = (undefined1 *)TStack_200.Array;
      iStack_17c = iVar18;
      iStack_174 = iVar18;
      if (iVar18 < iVar3) {
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            pTVar5 = *(TReferenceControllerBase<1> **)
                      ((longlong)iVar18 * 0x20 + 0x10 + *(longlong *)pTVar1);
            uVar6 = *(undefined8 *)((longlong)iVar18 * 0x20 + 8 + *(longlong *)pTVar1);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_a0);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar15 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_130 = uVar6;
            local_128 = pTVar5;
            (**(code **)(lVar15 + 0x60))(plVar16,local_1b8,&local_130);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_a0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::K::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1b8[0] != (void *)0x0) {
              FMemory::Free(local_1b8[0]);
            }
          }
          TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
          iVar18 = TStack_200.CurrentBitIndex;
        } while (TStack_200.CurrentBitIndex < (TStack_200.Array)->NumBits);
      }
      if ((2 < (byte)LogSlate._0_1_) &&
         (UE::Logging::Private::BasicLog<3>
                    (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                      ::__l155::LOG_Static,(FLogCategoryBase *)&LogSlate), 2 < (byte)LogSlate._0_1_)
         ) {
        UE::Logging::Private::BasicLog<3>
                  (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                    ::__l172::LOG_Static,(FLogCategoryBase *)&LogSlate);
      }
      uVar13 = 0;
      if (0 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
        lVar15 = 0;
        do {
          if (2 < (byte)LogSlate._0_1_) {
            pSVar4 = this->OwnerList;
            uVar14 = 0;
            if ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->ItemsWithGeneratedWidgets).AllocatorInstance.Data;
            pTVar5 = *(TReferenceControllerBase<1> **)(pFVar7 + lVar15 + 8);
            uVar6 = *(undefined8 *)(pFVar7 + lVar15);
            if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
              paVar17 = (atomic<int> *)&DAT_00000008;
            }
            else {
              paVar17 = &pTVar5->SharedReferenceCount;
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                       &pSVar4->OnItemToString_Debug,&local_88);
            if (*(int *)&(pSVar4->OnItemToString_Debug).field_0x10 == 0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)&(pSVar4->OnItemToString_Debug).field_0x8;
            }
            lVar8 = *plVar16;
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              *paVar17 = (atomic<int>)((int)*paVar17 + 1);
              UNLOCK();
            }
            local_120 = uVar6;
            local_118 = pTVar5;
            (**(code **)(lVar8 + 0x60))(plVar16,local_1a8,&local_120);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_88);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar5);
            UE::Logging::Private::BasicLog<3>
                      (&`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ValidateWidgetGeneration(void)___ptr64'
                        ::__l191::LOG_Static,(FLogCategoryBase *)&LogSlate);
            if (local_1a8[0] != (void *)0x0) {
              FMemory::Free(local_1a8[0]);
            }
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar13 < (this->ItemsWithGeneratedWidgets).ArrayNum);
      }
    }
    pSVar4 = this->OwnerList;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pSVar4->OnEnteredBadState,
               local_70);
    if ((*(int *)&(pSVar4->OnEnteredBadState).field_0x10 != 0) &&
       (plVar16 = *(longlong **)&(pSVar4->OnEnteredBadState).field_0x8, plVar16 != (longlong *)0x0))
    {
      (**(code **)(*plVar16 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_70);
    (**(code **)(this->OwnerList->_padding_ + 0x1e0))(this->OwnerList,local_e0);
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\SListView.h"
                        ,0x37b,
                        L"%s detected a critical error. See diagnostic dump above. Provide a custom \'OnItemToString_Debug\' for more detailed diagnostics."
                       );
    if (local_e0[0] != (void *)0x0) {
      FMemory::Free(local_e0[0]);
    }
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// operator() @ 15049ad70

bool __thiscall
`SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ProcessItemCleanUp'::__l8::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedPtr<int,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049adb0

bool __thiscall
`SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ProcessItemCleanUp'::
__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedPtr<FNavigationSimulationWidgetNode,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049adf0

bool __thiscall
`SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::
ProcessItemCleanUp'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049ae30

bool __thiscall
`SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedPtr<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049ae70

bool __thiscall
`SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::
ProcessItemCleanUp'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15049aeb0

bool __thiscall
`SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp'::__l8::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8670646794247470298>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8670646794247470298>,
                       &`public:___cdecl_`public:_void___cdecl_SListView<TSharedRef<FWidgetReflectorNodeBase,1>_>::FWidgetGenerator::ProcessItemCleanUp(void)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

