// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// ~FModelCacheEntry @ 14ab60380

void __thiscall
UE::Mutable::Private::FWorkingMemoryManager::FModelCacheEntry::~FModelCacheEntry
          (FModelCacheEntry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->PendingOpsPerRom).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->PendingOpsPerRom).AllocatorInstance.AllocSize);
  pvVar3 = (void *)(this->PendingOpsPerRom).AllocatorInstance._padding_;
  (this->PendingOpsPerRom).AllocatorInstance.AllocSize = 0;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  LOCK();
  ::Counter = (atomic<__int64>)
              ((longlong)::Counter - (this->RomWeights).AllocatorInstance.AllocSize);
  UNLOCK();
  FGlobalMemoryCounter::Update(-(this->RomWeights).AllocatorInstance.AllocSize);
  pvVar3 = (void *)(this->RomWeights).AllocatorInstance._padding_;
  (this->RomWeights).AllocatorInstance.AllocSize = 0;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pTVar4 = (this->Model).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ab60410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      return;
    }
  }
  return;
}

