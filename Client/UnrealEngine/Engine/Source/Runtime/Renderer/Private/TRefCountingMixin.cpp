// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// StaticDestroyMixin @ 1449336f0

void __cdecl
TRefCountingMixin<TInstanceCullingLoadBalancer<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::FData,1>
::StaticDestroyMixin(TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  if (param_1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(param_1 + 6));
    }
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)(param_1 + 2));
    }
    ::operator_delete(param_1,0x28);
  }
  return;
}

// StaticDestroyMixin @ 144be50a0

void __cdecl
TRefCountingMixin<TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::FData,1>::
StaticDestroyMixin(TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  if (param_1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      FMemory::Free(*(void **)(param_1 + 6));
    }
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(param_1 + 2));
    }
    ::operator_delete(param_1,0x28);
  }
  return;
}

// StaticDestroyMixin @ 145722d30

void __cdecl
TRefCountingMixin<FParticleSystemObjectCascade,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  FTransformObjectListener *pFVar1;
  FTransformObjectListener *pFVar2;
  longlong lVar3;
  FTransformObjectListener *pFVar4;
  
  pFVar4 = (FTransformObjectListener *)(param_1 + -8);
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pFVar4 = (FTransformObjectListener *)0x0;
  }
  if (pFVar4 != (FTransformObjectListener *)0x0) {
    pFVar4->_padding_ =
         (longlong)&FParticleSystemObjectCascade::_vftable__for__FTransformObjectListener__;
    pFVar4[1]._padding_ =
         (longlong)&FParticleSystemObjectCascade::_vftable__for__IParticleEmitterInstanceOwner__;
    pFVar2 = pFVar4[2].Next[0x16].Next;
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2,&pFVar4[4].Next);
    if ((FTransformObject *)pFVar4[1].Next != (FTransformObject *)0x0) {
      FTransformObject::RemoveListener((FTransformObject *)pFVar4[1].Next,pFVar4);
      pFVar2 = pFVar4[1].Next;
      if (pFVar2 != (FTransformObjectListener *)0x0) {
        pFVar4[1].Next = (FTransformObjectListener *)0x0;
        pFVar1 = pFVar2 + 1;
        LOCK();
        lVar3 = pFVar1->_padding_;
        *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
        UNLOCK();
        if (((int)lVar3 == 1) && (pFVar1 != (FTransformObjectListener *)0x0)) {
          (**(code **)(pFVar2->_padding_ + 8))(pFVar2,1);
        }
      }
    }
    if ((void *)pFVar4[0x13]._padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar4[0x13]._padding_);
    }
    if ((void *)pFVar4[2]._padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar4[2]._padding_);
    }
    pFVar2 = pFVar4[1].Next;
    if (pFVar2 != (FTransformObjectListener *)0x0) {
      pFVar1 = pFVar2 + 1;
      LOCK();
      lVar3 = pFVar1->_padding_;
      *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (pFVar1 != (FTransformObjectListener *)0x0)) {
        (**(code **)(pFVar2->_padding_ + 8))(pFVar2,1);
      }
    }
    pFVar4[1]._padding_ = (longlong)&___7IParticleEmitterInstanceOwner__6B_;
    ::operator_delete(pFVar4,0x200);
  }
  return;
}

// StaticDestroyMixin @ 145722e40

void __cdecl
TRefCountingMixin<FSkinnedMeshObject,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -6;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145722e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 8))(pTVar1,1);
    return;
  }
  return;
}

// StaticDestroyMixin @ 145722e70

void __cdecl
TRefCountingMixin<FStaticMeshObject,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -6;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145722e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 8))(pTVar1,1);
    return;
  }
  return;
}

