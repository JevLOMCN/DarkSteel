// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicWind
// Functions: 1

// Create @ 14da4ed60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
* __cdecl UE::Tasks::Private::
          TExecutableTask<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::__l2::<lambda_1>_>
          ::Create(wchar_t *param_1,<lambda_1> *param_2,ETaskPriority param_3,
                  EExtendedTaskPriority param_4,ETaskFlags param_5)

{
  int iVar1;
  undefined4 uVar2;
  TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
  *this;
  
  this = FMemory::Malloc(0x180,0x40);
  if (this != (TExecutableTask<_public:_class_UE::Tasks::Private::FTaskHandle___cdecl_FRDGBuilder::AddSetupTask<_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>(_private:_void___cdecl_FDynamicWindTransformProvider::ProvideTransforms(FSkinningTransformProvider::FProviderContext_&)_::_2_::<lambda_1>_&&,UE::Tasks::FPipe_*,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_&&,LowLevelTasks::ETaskPriority,bool,ERDGSetupTaskWaitPoint)_::_2_::<lambda_1>_>
               *)0x0) {
    FTaskBase::FTaskBase((FTaskBase *)this,2,true);
    *(undefined ***)this =
         &TExecutableTaskBase<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    FTaskBase::Init((FTaskBase *)this,param_1,param_3,param_4,param_5);
    *(FDynamicWindBlockHeader **)&this->field_0xd8 = (param_2->TaskLambda).BlockHeaders;
    *(FDynamicWindSkeletonData **)&this->field_0xe0 = (param_2->TaskLambda).SkeletonData;
    TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
    ::
    TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
              ((TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
                *)&this->field_0xe8,
               (TSet<TTuple<FGuid,FDynamicWindTransformProvider::FSkeletonEntry>,TDefaultMapHashableKeyFuncs<FGuid,FDynamicWindTransformProvider::FSkeletonEntry,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
                *)&(param_2->TaskLambda).SkeletonLookup);
    iVar1 = (param_2->TaskLambda).Indirections.ArrayNum;
    uVar2 = *(undefined4 *)&(param_2->TaskLambda).Indirections.field_0xc;
    *(FProviderIndirection **)&this->field_0x148 = (param_2->TaskLambda).Indirections.DataPtr;
    *(int *)&this->field_0x150 = iVar1;
    *(undefined4 *)&this->field_0x154 = uVar2;
    iVar1 = (param_2->TaskLambda).SkeletonBatches.ArrayNum;
    uVar2 = *(undefined4 *)&(param_2->TaskLambda).SkeletonBatches.field_0xc;
    *(FSkeletonBatch **)&this->field_0x158 = (param_2->TaskLambda).SkeletonBatches.DataPtr;
    *(int *)&this->field_0x160 = iVar1;
    *(undefined4 *)&this->field_0x164 = uVar2;
    *(undefined ***)this =
         &TExecutableTask<`FRDGBuilder::AddSetupTask<`FDynamicWindTransformProvider::ProvideTransforms'::`2'::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  return this;
}

