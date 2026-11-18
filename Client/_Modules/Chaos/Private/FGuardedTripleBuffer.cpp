// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 71

// FGuardedTripleBuffer<Chaos::FBreakingEventData> @ 143f40b80

FGuardedTripleBuffer<Chaos::FBreakingEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::
FGuardedTripleBuffer<Chaos::FBreakingEventData>
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFBreakingEventData_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// FGuardedTripleBuffer<Chaos::FCollisionEventData> @ 143f40c00

FGuardedTripleBuffer<Chaos::FCollisionEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::
FGuardedTripleBuffer<Chaos::FCollisionEventData>
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFCollisionEventData_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// FGuardedTripleBuffer<Chaos::FCrumblingEventData> @ 143f40c80

FGuardedTripleBuffer<Chaos::FCrumblingEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::
FGuardedTripleBuffer<Chaos::FCrumblingEventData>
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFCrumblingEventData_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// FGuardedTripleBuffer<Chaos::FRemovalEventData> @ 143f40d00

FGuardedTripleBuffer<Chaos::FRemovalEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::
FGuardedTripleBuffer<Chaos::FRemovalEventData>(FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFRemovalEventData_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// FGuardedTripleBuffer<Chaos::FSleepingEventData> @ 143f40d80

FGuardedTripleBuffer<Chaos::FSleepingEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::
FGuardedTripleBuffer<Chaos::FSleepingEventData>
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  FSleepingEventData *pFVar1;
  FSleepingEventData *pFVar2;
  FSleepingEventData *pFVar3;
  
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFSleepingEventData_Chaos___Chaos__6B_;
  pFVar1 = ::operator_new(0x10);
  pFVar3 = (FSleepingEventData *)0x0;
  pFVar2 = pFVar3;
  if (pFVar1 != (FSleepingEventData *)0x0) {
    (pFVar1->SleepingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->SleepingData).ArrayNum = 0;
    (pFVar1->SleepingData).ArrayMax = 0;
    pFVar2 = pFVar1;
  }
  this->Buffers[0].Value.Ptr = pFVar2;
  this->Buffers[0].bValid = false;
  pFVar1 = ::operator_new(0x10);
  pFVar2 = pFVar3;
  if (pFVar1 != (FSleepingEventData *)0x0) {
    (pFVar1->SleepingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->SleepingData).ArrayNum = 0;
    (pFVar1->SleepingData).ArrayMax = 0;
    pFVar2 = pFVar1;
  }
  this->Buffers[1].Value.Ptr = pFVar2;
  this->Buffers[1].bValid = false;
  pFVar2 = ::operator_new(0x10);
  if (pFVar2 != (FSleepingEventData *)0x0) {
    (pFVar2->SleepingData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->SleepingData).ArrayNum = 0;
    (pFVar2->SleepingData).ArrayMax = 0;
    pFVar3 = pFVar2;
  }
  *(FSleepingEventData **)(this->Buffers + 2) = pFVar3;
  this->Buffers[2].bValid = false;
  this->ProducerThreadBuffer = this->Buffers;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  this->ConsumerThreadBuffer = this->Buffers + 1;
  return this;
}

// FGuardedTripleBuffer<Chaos::FTrailingEventData> @ 143f40e60

FGuardedTripleBuffer<Chaos::FTrailingEventData> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::
FGuardedTripleBuffer<Chaos::FTrailingEventData>
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_UFTrailingEventData_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// ResourceTypeWrapper @ 143f480d0

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FBreakingEventData *pFVar1;
  
  pFVar1 = ::operator_new(0x78);
  if (pFVar1 != (FBreakingEventData *)0x0) {
    (pFVar1->BreakingData).AllBreakingsArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar1->BreakingData)._padding_ = -0x10000000000001;
    (pFVar1->PhysicsProxyToBreakingIndices)._padding_ = -0x10000000000001;
    (pFVar1->BreakingData).AllBreakingsArray.ArrayNum = 0;
    (pFVar1->BreakingData).AllBreakingsArray.ArrayMax = 0;
    (pFVar1->BreakingData).bHasGlobalEvent = false;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x2c =
         0x80;
    *(undefined4 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FBreakingEventData *)0x0;
  this->bValid = false;
  return this;
}

// ResourceTypeWrapper @ 143f48170

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FCollisionEventData *pFVar1;
  
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FCollisionEventData *)0x0) {
    (pFVar1->CollisionData).AllCollisionsArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar1->PhysicsProxyToCollisionIndices)._padding_ = -0x10000000000001;
    (pFVar1->CollisionData).AllCollisionsArray.ArrayNum = 0;
    (pFVar1->CollisionData).AllCollisionsArray.ArrayMax = 0;
    (pFVar1->CollisionData)._padding_ = -0x10000000000001;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x10 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x18 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x48 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x20 = 0
    ;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x28 = 0
    ;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x2c =
         0x80;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40 = 0
    ;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FCollisionEventData *)0x0;
  this->bValid = false;
  return this;
}

// ResourceTypeWrapper @ 143f48200

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FCrumblingEventData *pFVar1;
  
  pFVar1 = ::operator_new(0x78);
  if (pFVar1 != (FCrumblingEventData *)0x0) {
    (pFVar1->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar1->CrumblingData)._padding_ = -0x10000000000001;
    (pFVar1->PhysicsProxyToCrumblingIndices)._padding_ = -0x10000000000001;
    (pFVar1->CrumblingData).AllCrumblingsArray.ArrayNum = 0;
    (pFVar1->CrumblingData).AllCrumblingsArray.ArrayMax = 0;
    (pFVar1->CrumblingData).bHasGlobalEvent = false;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x10 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x18 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x38 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x20 = 0
    ;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x28 = 0
    ;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x2c =
         0x80;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x34 = 0
    ;
    *(undefined8 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x40 = 0
    ;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FCrumblingEventData *)0x0;
  this->bValid = false;
  return this;
}

// ResourceTypeWrapper @ 143f482a0

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FRemovalEventData *pFVar1;
  
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FRemovalEventData *)0x0) {
    (pFVar1->RemovalData).AllRemovalArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->PhysicsProxyToRemovalIndices)._padding_ = -0x10000000000001;
    (pFVar1->RemovalData).AllRemovalArray.ArrayNum = 0;
    (pFVar1->RemovalData).AllRemovalArray.ArrayMax = 0;
    (pFVar1->RemovalData)._padding_ = -0x10000000000001;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x2c =
         0x80;
    *(undefined4 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FRemovalEventData *)0x0;
  this->bValid = false;
  return this;
}

// ResourceTypeWrapper @ 143f48330

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FTrailingEventData *pFVar1;
  
  pFVar1 = ::operator_new(0x70);
  if (pFVar1 != (FTrailingEventData *)0x0) {
    (pFVar1->TrailingData).AllTrailingsArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar1->PhysicsProxyToTrailingIndices)._padding_ = -0x10000000000001;
    (pFVar1->TrailingData).AllTrailingsArray.ArrayNum = 0;
    (pFVar1->TrailingData).AllTrailingsArray.ArrayMax = 0;
    (pFVar1->TrailingData)._padding_ = -0x10000000000001;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x10 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x18 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x38 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x2c =
         0x80;
    *(undefined4 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x30 =
         0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x34 = 0;
    *(undefined8 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x40 = 0;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FTrailingEventData *)0x0;
  this->bValid = false;
  return this;
}

// ~ResourceTypeWrapper @ 143f4b540

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FBreakingEventData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FBreakingEventData *)0x0) {
    *(undefined4 *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap);
    pFVar3 = (pFVar1->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x78);
    return;
  }
  return;
}

// ~ResourceTypeWrapper @ 143f4b5b0

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FCollisionEventData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FCollisionEventData *)0x0) {
    *(undefined4 *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x48 = 0
    ;
    pvVar2 = *(void **)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40
    ;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap);
    pFVar3 = (pFVar1->CollisionData).AllCollisionsArray.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x70);
    return;
  }
  return;
}

// ~ResourceTypeWrapper @ 143f4b620

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FCrumblingEventData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FCrumblingEventData *)0x0) {
    *(undefined4 *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0
    ;
    pvVar2 = *(void **)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap.field_0x40
    ;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar1->PhysicsProxyToCrumblingIndices).PhysicsProxyToIndicesMap);
    DestructItems<Chaos::FCrumblingData,int>
              ((FCrumblingData *)(pFVar1->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data,
               (pFVar1->CrumblingData).AllCrumblingsArray.ArrayNum);
    pFVar3 = (pFVar1->CrumblingData).AllCrumblingsArray.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x78);
    return;
  }
  return;
}

// ~ResourceTypeWrapper @ 143f4b690

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FRemovalEventData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FRemovalEventData *)0x0) {
    *(undefined4 *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar1->PhysicsProxyToRemovalIndices).PhysicsProxyToIndicesMap);
    pFVar3 = (pFVar1->RemovalData).AllRemovalArray.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x70);
    return;
  }
  return;
}

// ~ResourceTypeWrapper @ 143f4b700

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FSleepingEventData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FSleepingEventData *)0x0) {
    pFVar2 = (pFVar1->SleepingData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// ~ResourceTypeWrapper @ 143f4b740

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FTrailingEventData *pFVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FTrailingEventData *)0x0) {
    *(undefined4 *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(pFVar1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap);
    pFVar3 = (pFVar1->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x70);
    return;
  }
  return;
}

// AccessProducerBuffer @ 143f54ac0

FBreakingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// AccessProducerBuffer @ 143f54ad0

FCollisionEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// AccessProducerBuffer @ 143f54ae0

FCrumblingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// AccessProducerBuffer @ 143f54af0

FRemovalEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// AccessProducerBuffer @ 143f54b00

FSleepingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// AccessProducerBuffer @ 143f54b10

FTrailingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// FlipProducer @ 143f6c390

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// FlipProducer @ 143f6c3b0

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// FlipProducer @ 143f6c3d0

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// FlipProducer @ 143f6c3f0

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// FlipProducer @ 143f6c410

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// FlipProducer @ 143f6c430

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// GetBufferMode @ 143f6c690

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  return Triple;
}

// GetBufferMode @ 143f6c6a0

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  return Triple;
}

// GetBufferMode @ 143f6c6b0

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  return Triple;
}

// GetBufferMode @ 143f6c6c0

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  return Triple;
}

// GetBufferMode @ 143f6c6d0

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  return Triple;
}

// GetBufferMode @ 143f6c6e0

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  return Triple;
}

// GetConsumerBuffer @ 143f6c9c0

FBreakingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FBreakingEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBuffer @ 143f6c9f0

FCollisionEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FCollisionEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBuffer @ 143f6ca20

FCrumblingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FCrumblingEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBuffer @ 143f6ca50

FRemovalEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FRemovalEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBuffer @ 143f6ca80

FSleepingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FSleepingEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBuffer @ 143f6cab0

FTrailingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FTrailingEventData *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBufferMutable @ 143f6cc60

FBreakingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FBreakingEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBreakingEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FBreakingEventData *)0x0;
}

// GetConsumerBufferMutable @ 143f6cca0

FCollisionEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FCollisionEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCollisionEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FCollisionEventData *)0x0;
}

// GetConsumerBufferMutable @ 143f6cce0

FCrumblingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FCrumblingEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCrumblingEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FCrumblingEventData *)0x0;
}

// GetConsumerBufferMutable @ 143f6cd20

FRemovalEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FRemovalEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRemovalEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FRemovalEventData *)0x0;
}

// GetConsumerBufferMutable @ 143f6cd60

FSleepingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FSleepingEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSleepingEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FSleepingEventData *)0x0;
}

// GetConsumerBufferMutable @ 143f6cda0

FTrailingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  code *pcVar1;
  bool bVar2;
  FTrailingEventData *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTrailingEventData *)(*pcVar1)();
    return pFVar3;
  }
  return (FTrailingEventData *)0x0;
}

// GetProducerBuffer @ 143f6d1c0

FBreakingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FBreakingEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FBreakingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// GetProducerBuffer @ 143f6d1d0

FCollisionEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCollisionEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FCollisionEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// GetProducerBuffer @ 143f6d1e0

FCrumblingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FCrumblingEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FCrumblingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// GetProducerBuffer @ 143f6d1f0

FRemovalEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FRemovalEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FRemovalEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// GetProducerBuffer @ 143f6d200

FSleepingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FSleepingEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FSleepingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// GetProducerBuffer @ 143f6d210

FTrailingEventData * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FTrailingEventData>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FTrailingEventData> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> @ 144066c70

FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::
FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  this->_padding_ =
       (longlong)&___7__FGuardedTripleBuffer_UFPBDRigidDirtyParticlesBufferOut_Chaos___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper_*>
        )(this->Buffers + 2);
  return this;
}

// ResourceTypeWrapper @ 144069490

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper::
ResourceTypeWrapper(ResourceTypeWrapper *this)

{
  FPBDRigidDirtyParticlesBufferOut *pFVar1;
  
  pFVar1 = ::operator_new(0x60);
  if (pFVar1 != (FPBDRigidDirtyParticlesBufferOut *)0x0) {
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x10 = 0;
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x18 = 0;
    (pFVar1->PhysicsParticleProxies).Hash.InlineData[0] = '\0';
    (pFVar1->PhysicsParticleProxies).Hash.InlineData[1] = '\0';
    (pFVar1->PhysicsParticleProxies).Hash.InlineData[2] = '\0';
    (pFVar1->PhysicsParticleProxies).Hash.InlineData[3] = '\0';
    (pFVar1->PhysicsParticleProxies).Hash._padding_ = 0;
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).HashSize = 0;
    (pFVar1->DirtyGameThreadParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DirtyGameThreadParticles).ArrayNum = 0;
    (pFVar1->DirtyGameThreadParticles).ArrayMax = 0;
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).Elements = 0;
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->PhysicsParticleProxies).Elements.field_0x34 = 0;
    (pFVar1->PhysicsParticleProxies).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->Value).Ptr = pFVar1;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FPBDRigidDirtyParticlesBufferOut *)0x0;
  this->bValid = false;
  return this;
}

// ~ResourceTypeWrapper @ 14406bf50

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper::
~ResourceTypeWrapper(ResourceTypeWrapper *this)

{
  FPBDRigidDirtyParticlesBufferOut *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FPBDRigidDirtyParticlesBufferOut *)0x0) {
    (pFVar1->PhysicsParticleProxies).HashSize = 0;
    FVar2 = (pFVar1->PhysicsParticleProxies).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<IPhysicsProxyBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar1->PhysicsParticleProxies).Elements);
    pFVar3 = (pFVar1->DirtyGameThreadParticles).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(pFVar1,0x60);
    return;
  }
  return;
}

// AccessProducerBuffer @ 144075570

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::AccessProducerBuffer
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// FlipProducer @ 14408be10

void __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::FlipProducer
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper_*>
  TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper_*>
        )this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// GetBufferMode @ 14408c730

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetBufferMode
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return Triple;
}

// GetConsumerBuffer @ 14408c780

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBuffer
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper_*>
  TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::ResourceTypeWrapper_*>
        )this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FPBDRigidDirtyParticlesBufferOut *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBufferMutable @ 14408c7f0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  code *pcVar1;
  bool bVar2;
  FPBDRigidDirtyParticlesBufferOut *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPBDRigidDirtyParticlesBufferOut *)(*pcVar1)();
    return pFVar3;
  }
  return (FPBDRigidDirtyParticlesBufferOut *)0x0;
}

// GetProducerBuffer @ 14408d2a0

FPBDRigidDirtyParticlesBufferOut * __thiscall
Chaos::FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut>::GetProducerBuffer
          (FGuardedTripleBuffer<Chaos::FPBDRigidDirtyParticlesBufferOut> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// FGuardedTripleBuffer<FGeometryCollectionResults> @ 1440fc5b0

FGuardedTripleBuffer<FGeometryCollectionResults> * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::
FGuardedTripleBuffer<FGeometryCollectionResults>
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  this->_padding_ = (longlong)&___7__FGuardedTripleBuffer_VFGeometryCollectionResults___Chaos__6B_;
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 1);
  ResourceTypeWrapper::ResourceTypeWrapper(this->Buffers + 2);
  this->ProducerThreadBuffer = this->Buffers;
  this->ConsumerThreadBuffer = this->Buffers + 1;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>)
       (this->Buffers + 2);
  return this;
}

// ResourceTypeWrapper @ 1440fd750

ResourceTypeWrapper * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper::ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  undefined1 *puVar1;
  FGeometryCollectionResults *pFVar2;
  
  pFVar2 = ::operator_new(0x70);
  if (pFVar2 != (FGeometryCollectionResults *)0x0) {
    (pFVar2->ModifiedTransformIndices).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    pFVar2->_padding_ = (longlong)&___7FGeometryCollectionResults__6B_;
    *(undefined4 *)&pFVar2->_padding_ = 0;
    (pFVar2->ModifiedTransformIndices).NumBits = 0;
    (pFVar2->ModifiedTransformIndices).MaxBits = 0x80;
    pFVar2->IsObjectDynamic = '\0';
    pFVar2->IsRootBroken = '\0';
    pFVar2->IsObjectLoading = '\0';
    (pFVar2->States).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->States).ArrayNum = 0;
    (pFVar2->States).ArrayMax = 0;
    (pFVar2->Positions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Positions).ArrayNum = 0;
    (pFVar2->Positions).ArrayMax = 0;
    (pFVar2->Velocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar2->Velocities).ArrayNum = 0;
    (pFVar2->Velocities).ArrayMax = 0;
    (this->Value).Ptr = pFVar2;
    this->bValid = false;
    return this;
  }
  (this->Value).Ptr = (FGeometryCollectionResults *)0x0;
  this->bValid = false;
  return this;
}

// ~ResourceTypeWrapper @ 1440fe3b0

void __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper::~ResourceTypeWrapper
          (ResourceTypeWrapper *this)

{
  FGeometryCollectionResults *pFVar1;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FGeometryCollectionResults *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001440fe3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// AccessProducerBuffer @ 1441057e0

FGeometryCollectionResults * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::AccessProducerBuffer
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

// FlipProducer @ 14411a780

void __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::FlipProducer
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*> TVar1;
  
  this->ProducerThreadBuffer->bValid = true;
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>)
       this->ProducerThreadBuffer;
  UNLOCK();
  this->ProducerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return;
}

// GetBufferMode @ 14411ad80

EMultiBufferMode __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::GetBufferMode
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  return Triple;
}

// GetConsumerBuffer @ 14411ad90

FGeometryCollectionResults * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::GetConsumerBuffer
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  TAtomic<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*> TVar1;
  
  LOCK();
  TVar1 = this->Interchange;
  this->Interchange =
       (TAtomic<Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::ResourceTypeWrapper_*>)
       this->ConsumerThreadBuffer;
  UNLOCK();
  this->ConsumerThreadBuffer = (ResourceTypeWrapper *)TVar1;
  if (*(char *)((longlong)TVar1 + 8) == '\0') {
    return (FGeometryCollectionResults *)0x0;
  }
  *(undefined1 *)((longlong)TVar1 + 8) = 0;
  return (this->ConsumerThreadBuffer->Value).Ptr;
}

// GetConsumerBufferMutable @ 14411adc0

FGeometryCollectionResults * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::GetConsumerBufferMutable
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  code *pcVar1;
  bool bVar2;
  FGeometryCollectionResults *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\MultiBufferResource.h"
                     ,0xde,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGeometryCollectionResults *)(*pcVar1)();
    return pFVar3;
  }
  return (FGeometryCollectionResults *)0x0;
}

// GetProducerBuffer @ 14411bef0

FGeometryCollectionResults * __thiscall
Chaos::FGuardedTripleBuffer<FGeometryCollectionResults>::GetProducerBuffer
          (FGuardedTripleBuffer<FGeometryCollectionResults> *this)

{
  return (this->ProducerThreadBuffer->Value).Ptr;
}

