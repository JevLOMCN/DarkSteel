// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~TTupleBaseElement<TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,1,2> @ 14815ffe0

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,1,2>
          (TTupleBaseElement<TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,1,2>
           *this)

{
  FAccumulatedParticlePerfStats *pFVar1;
  ForElementType<unsigned___int64> FVar2;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FAccumulatedParticlePerfStats *)0x0) {
    FVar2 = (pFVar1->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    FVar2 = (pFVar1->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    ::operator_delete(pFVar1,0x2b8);
    return;
  }
  return;
}

// ~TTupleBaseElement<TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>,1,2> @ 148624c30

void __thiscall
UE::Core::Private::Tuple::
TTupleBaseElement<TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>,1,2>
::
~TTupleBaseElement<TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>,1,2>
          (TTupleBaseElement<TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>,1,2>
           *this)

{
  FOpQueue *pFVar1;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar2;
  atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> aVar3;
  
  pFVar1 = (this->Value).Ptr;
  if (pFVar1 != (FOpQueue *)0x0) {
    if ((pFVar1->Queue).Head !=
        (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
      aVar3 = (pFVar1->Queue).Sentinel.Next;
      while (aVar3 != (atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*>)0x0) {
        aVar2 = *(atomic<TClosableMpscQueue<FSkeletalMeshUpdateChannel::FOp>::FNode_*> *)aVar3;
        ::operator_delete((void *)aVar3,0x18);
        aVar3 = aVar2;
      }
    }
    ::operator_delete(pFVar1,0x30);
    return;
  }
  return;
}

