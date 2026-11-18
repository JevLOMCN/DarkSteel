// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// ExecuteTask @ 14da4fb60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>,void,void>
::ExecuteTask(void *this)

{
  FTaskTagScope local_18;
  
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  `FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  FTaskTagScope::~FTaskTagScope(&local_18);
  *(undefined4 *)((longlong)this + 0x140) = 0;
  if (*(void **)((longlong)this + 0x138) != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free
              (*(void **)((longlong)this + 0x138));
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>_>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
              *)((longlong)this + 0xe8));
  return;
}

