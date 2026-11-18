// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 9

// ExecuteTask @ 142af4230

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_1>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4250

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_1>,void,void>::
ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4270

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<``Algo::MergeSort::ParallelMergeSortPointerAndNum<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,int,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_4>_>'::__l2::<lambda_4>::operator()'::__l5::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  ``Algo::MergeSort::
  ParallelMergeSortPointerAndNum<`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::FSortData,int,`FAssetRegistryState::GetMutableAssetsSortedByObjectPath'::__l2::<lambda_4>_>'
  ::__l2::<lambda_4>::operator()'::__l5::<lambda_1>::operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4290

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EOptionalBool": Some values do not have unique names */

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::AssetDataGather::Private::FFileReadScheduler::ScheduleDirectory'::__l15::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  AssetDataGather::Private::FFileReadScheduler::ProcessReadContexts
            (*(FFileReadScheduler **)((longlong)this + 0xd8),
             (TArray<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,TSizedDefaultAllocator<32>_>
              *)((longlong)this + 0xe0),true);
  DestructItems<TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>,int>
            (*(TUniquePtr<UE::AssetDataGather::Private::FReadContext,TDefaultDelete<UE::AssetDataGather::Private::FReadContext>_>
               **)((longlong)this + 0xe0),*(int *)((longlong)this + 0xe8));
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
    return;
  }
  return;
}

// ExecuteTask @ 142af42f0

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_2>,void,void>
::ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_2>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4310

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>,void,void>::
ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveDependsNodes'::__l2::<lambda_2>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4330

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_3>,void,void>
::ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveAssetDatasImpl<FDefaultBitArrayAllocator>'::__l2::<lambda_3>::
  operator()((void *)((longlong)this + 0xd8));
  return;
}

// ExecuteTask @ 142af4350

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`UE::AssetDataGather::Private::LoadCacheFiles'::__l5::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  DestructItems<_UE::AssetDataGather::Private::LoadCacheFiles_::__l5::FSharedFileData,int>
            (*(FSharedFileData **)((longlong)this + 0xd8),*(int *)((longlong)this + 0xe0));
  if (*(void **)((longlong)this + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd8));
    return;
  }
  return;
}

// ExecuteTask @ 142af4390

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAssetRegistryState::RemoveDependsNodes'::__l16::<lambda_3>,void,void>::
ExecuteTask(void *this)

{
  `FAssetRegistryState::RemoveDependsNodes'::__l16::<lambda_3>::operator()
            ((void *)((longlong)this + 0xd8));
  return;
}

