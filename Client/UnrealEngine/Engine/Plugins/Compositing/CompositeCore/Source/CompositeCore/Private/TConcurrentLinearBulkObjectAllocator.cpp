// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 1

// Create<UE::CompositeCore::FMergePassProxy,TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>_const_&> @ 14ea735f0

FMergePassProxy * __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
Create<UE::CompositeCore::FMergePassProxy,TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>_const_&>
          (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *this,
          TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
  *pTVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar5;
  bool bVar6;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  aVar3 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x48,8);
  *(undefined8 *)((longlong)aVar3 + 8) = 0;
  *(undefined ***)aVar3 =
       &
       ___7__TObject_VFMergePassProxy_CompositeCore_UE_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar4 = this->Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar3 + 8) = aVar4;
    LOCK();
    aVar5 = this->Next;
    bVar6 = aVar4 == aVar5;
    if (bVar6) {
      this->Next = aVar3;
      aVar5 = aVar4;
    }
    UNLOCK();
    aVar4 = aVar5;
  } while (!bVar6);
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
            *)(param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
    local_18.Data = (FScriptContainerElement *)0x0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int>
              (local_18.Data,pTVar2,iVar1);
  }
  *(FScriptContainerElement **)((longlong)aVar3 + 0x18) = local_18.Data;
  *(int *)((longlong)aVar3 + 0x24) = local_c;
  *(int *)((longlong)aVar3 + 0x20) = local_10;
  *(undefined1 *)((longlong)aVar3 + 0x2c) = 0;
  ((FMergePassProxy *)((longlong)aVar3 + 0x10))->_padding_ =
       (longlong)&___7FMergePassProxy_CompositeCore_UE__6B_;
  *(undefined **)((longlong)aVar3 + 0x38) = &u_None;
  *(undefined1 *)((longlong)aVar3 + 0x30) = 1;
  *(undefined1 *)((longlong)aVar3 + 0x40) = 1;
  return (FMergePassProxy *)((longlong)aVar3 + 0x10);
}

