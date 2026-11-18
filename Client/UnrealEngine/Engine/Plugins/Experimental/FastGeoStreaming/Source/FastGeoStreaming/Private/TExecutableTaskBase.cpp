// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 4

// ExecuteTask @ 14da28bb0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FastGeo::FAsyncTaskWithAssetRefs::Launch<`UFastGeoContainer::PrecachePSOs'::__l8::<lambda_2>_>'::
  __l2::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14da28bf0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FastGeo::FAsyncTaskWithAssetRefs::~FAsyncTaskWithAssetRefs'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FAsyncTaskAssetReferenceManager *pFVar1;
  ulong64 uVar2;
  
  pFVar1 = FastGeo::FAsyncTaskAssetReferenceManager::Get();
  if (*(int *)&(pFVar1->TasksAssets).field_0x8 != *(int *)&(pFVar1->TasksAssets).field_0x34) {
    uVar2 = CityHash64((char *)((longlong)this + 0xd8),0x10);
    TSet<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                         *)&pFVar1->TasksAssets,(uint)uVar2,(FGuid *)((longlong)this + 0xd8));
  }
  return;
}

// ExecuteTask @ 14da28c40

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FFastGeoAsyncRenderStateJobQueue::Launch'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  FFastGeoAsyncRenderStateJobQueue::FJobSet::Execute(*(FJobSet **)((longlong)this + 0xe0));
  return;
}

// ExecuteTask @ 14da28c60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``FFastGeoComponentCluster::UpdateVisibility_Internal'::__l5::<lambda_1>::operator()'::__l8::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  UFastGeoContainer *this_00;
  FFastGeoComponentCluster *this_01;
  
  this_00 = (UFastGeoContainer *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0xd8));
  if (this_00 != (UFastGeoContainer *)0x0) {
    this_01 = UFastGeoContainer::GetComponentCluster
                        (this_00,*(uint *)((longlong)this + 0xe0),*(int *)((longlong)this + 0xe4));
    if (this_01 != (FFastGeoComponentCluster *)0x0) {
      FFastGeoComponentCluster::ForceUpdateVisibility
                (this_01,(TArray<FFastGeoPrimitiveComponent_*,TSizedDefaultAllocator<32>_> *)
                         ((longlong)this + 0xf0),*(int *)((longlong)this + 0xe8));
    }
  }
  if (*(void **)((longlong)this + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xf0));
    return;
  }
  return;
}

