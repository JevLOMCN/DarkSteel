// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// ~TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory> @ 145c47ba0

void __thiscall
TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::
~TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>
          (TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory> *this)

{
  atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> aVar1;
  atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> aVar2;
  atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> aVar3;
  bool bVar4;
  
  aVar1 = this->Tail;
  aVar3 = (atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>)
          this->First;
  do {
    aVar2 = *(atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> *)
             aVar3;
    FMemory::Free((void *)aVar3);
    bVar4 = aVar3 != aVar1;
    aVar3 = aVar2;
  } while (bVar4);
  while (aVar2 != (atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>)
                  0x0) {
    aVar1 = *(atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> *)
             aVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)aVar2 + 0x10));
    FMemory::Free((void *)aVar2);
    aVar2 = aVar1;
  }
  return;
}

