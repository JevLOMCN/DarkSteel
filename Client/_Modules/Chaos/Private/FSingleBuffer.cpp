// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 49

// ~FSingleBuffer<Chaos::FBreakingEventData> @ 143f489c0

void __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::~FSingleBuffer<Chaos::FBreakingEventData>
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFBreakingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->Data).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap.field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).PhysicsProxyToBreakingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data).BreakingData.AllBreakingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFBreakingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FSingleBuffer<Chaos::FCollisionEventData> @ 143f48a20

void __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::~FSingleBuffer<Chaos::FCollisionEventData>
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFCollisionEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).PhysicsProxyToCollisionIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data).CollisionData.AllCollisionsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFCollisionEventData_Chaos___Chaos__6B_;
  return;
}

// ~FSingleBuffer<Chaos::FCrumblingEventData> @ 143f48a80

void __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::~FSingleBuffer<Chaos::FCrumblingEventData>
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFCrumblingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.field_0x48 =
       0;
  pvVar1 = *(void **)&(this->Data).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap.
                      field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).PhysicsProxyToCrumblingIndices.PhysicsProxyToIndicesMap);
  DestructItems<Chaos::FCrumblingData,int>
            ((FCrumblingData *)(this->Data).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data,
             (this->Data).CrumblingData.AllCrumblingsArray.ArrayNum);
  pFVar2 = (this->Data).CrumblingData.AllCrumblingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFCrumblingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FSingleBuffer<Chaos::FRemovalEventData> @ 143f48af0

void __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::~FSingleBuffer<Chaos::FRemovalEventData>
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFRemovalEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Data).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).PhysicsProxyToRemovalIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data).RemovalData.AllRemovalArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFRemovalEventData_Chaos___Chaos__6B_;
  return;
}

// ~FSingleBuffer<Chaos::FSleepingEventData> @ 143f48b50

void __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::~FSingleBuffer<Chaos::FSleepingEventData>
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
  pFVar1 = (this->Data).SleepingData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFSleepingEventData_Chaos___Chaos__6B_;
  return;
}

// ~FSingleBuffer<Chaos::FTrailingEventData> @ 143f48b90

void __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::~FSingleBuffer<Chaos::FTrailingEventData>
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7__FSingleBuffer_UFTrailingEventData_Chaos___Chaos__6B_;
  *(undefined4 *)&(this->Data).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x48 = 0
  ;
  pvVar1 = *(void **)&(this->Data).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap.field_0x40
  ;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Data).PhysicsProxyToTrailingIndices.PhysicsProxyToIndicesMap);
  pFVar2 = (this->Data).TrailingData.AllTrailingsArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7__IBufferResource_UFTrailingEventData_Chaos___Chaos__6B_;
  return;
}

// AccessProducerBuffer @ 143f54b20

FBreakingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return &this->Data;
}

// AccessProducerBuffer @ 143f54b30

FCollisionEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return &this->Data;
}

// AccessProducerBuffer @ 143f54b40

FCrumblingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return &this->Data;
}

// AccessProducerBuffer @ 143f54b50

FRemovalEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return &this->Data;
}

// AccessProducerBuffer @ 143f54b60

FSleepingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return &this->Data;
}

// AccessProducerBuffer @ 143f54b70

FTrailingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return &this->Data;
}

// FlipProducer @ 143f6c450

void __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::FlipProducer
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return;
}

// FlipProducer @ 143f6c460

void __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::FlipProducer
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return;
}

// FlipProducer @ 143f6c470

void __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::FlipProducer
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return;
}

// FlipProducer @ 143f6c480

void __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::FlipProducer
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return;
}

// FlipProducer @ 143f6c490

void __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::FlipProducer
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return;
}

// FlipProducer @ 143f6c4a0

void __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::FlipProducer
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return;
}

// GetBufferMode @ 143f6c6f0

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return Single;
}

// GetBufferMode @ 143f6c700

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return Single;
}

// GetBufferMode @ 143f6c710

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return Single;
}

// GetBufferMode @ 143f6c720

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return Single;
}

// GetBufferMode @ 143f6c730

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return Single;
}

// GetBufferMode @ 143f6c740

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::GetBufferMode
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return Single;
}

// GetConsumerBuffer @ 143f6cae0

FBreakingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBuffer @ 143f6caf0

FCollisionEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return &this->Data;
}

// GetConsumerBuffer @ 143f6cb00

FCrumblingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBuffer @ 143f6cb10

FRemovalEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return &this->Data;
}

// GetConsumerBuffer @ 143f6cb20

FSleepingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBuffer @ 143f6cb30

FTrailingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6cde0

FBreakingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6cdf0

FCollisionEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6ce00

FCrumblingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6ce10

FRemovalEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6ce20

FSleepingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 143f6ce30

FTrailingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d220

FBreakingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FBreakingEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FBreakingEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d230

FCollisionEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCollisionEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FCollisionEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d240

FCrumblingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FCrumblingEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FCrumblingEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d250

FRemovalEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FRemovalEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FRemovalEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d260

FSleepingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FSleepingEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FSleepingEventData> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 143f6d270

FTrailingEventData * __thiscall
Chaos::FSingleBuffer<Chaos::FTrailingEventData>::GetProducerBuffer
          (FSingleBuffer<Chaos::FTrailingEventData> *this)

{
  return &this->Data;
}

// ~FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> @ 144069820

void __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::
~FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ =
       (longlong)&___7__FSingleBuffer_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
  (this->Data).PhysicsParticleProxies.HashSize = 0;
  FVar1 = (this->Data).PhysicsParticleProxies.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Data).PhysicsParticleProxies.Elements);
  pFVar2 = (this->Data).DirtyGameThreadParticles.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ =
       (longlong)&___7__IBufferResource_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
  return;
}

// AccessProducerBuffer @ 144075580

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::AccessProducerBuffer
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return &this->Data;
}

// FlipProducer @ 14408be30

void __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::FlipProducer
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return;
}

// GetBufferMode @ 14408c740

EMultiBufferMode __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetBufferMode
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return Single;
}

// GetConsumerBuffer @ 14408c7b0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBuffer
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return &this->Data;
}

// GetConsumerBufferMutable @ 14408c830

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBufferMutable
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return &this->Data;
}

// GetProducerBuffer @ 14408d2b0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetProducerBuffer
          (FSingleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return &this->Data;
}

