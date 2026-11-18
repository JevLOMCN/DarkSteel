// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Release @ 145cbceb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHICommandListExecutor::FTaskPipe::FTask::Release(FTask *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  longlong *plVar3;
  uint uVar4;
  FIndexedLockFreeLink *pFVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  longlong *plVar7;
  
  LOCK();
  paVar1 = &this->RefCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if ((aVar2 == (atomic<unsigned_int>)0x1) && (this != (FTask *)0x0)) {
    FVar6 = (this->Prereqs).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->Prereqs;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar6,(this->Prereqs).ArrayNum);
    FVar6 = (this->Prereqs).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)FVar6);
    }
    if (*(longlong *)&this->Lambda != 0) {
      plVar3 = *(longlong **)&(this->Lambda).field_0x28;
      plVar7 = (longlong *)&(this->Lambda).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar7 = plVar3;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    uVar4 = FLockFreeLinkPolicy::AllocLockFreeLink();
    if (uVar4 == 0) {
      pFVar5 = (FIndexedLockFreeLink *)0x0;
    }
    else {
      pFVar5 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar4 >> 0xe] + (uVar4 & 0x3fff);
    }
    pFVar5->Payload = (atomic<void_*>)this;
    FLockFreePointerListLIFORoot<64,1>::Push
              ((FLockFreePointerListLIFORoot<64,1> *)&MemoryPool,uVar4);
    return;
  }
  return;
}

