// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// DestroyObject @ 14b2af640

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Metasound::FConcurrentInstanceCounterManager,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FConcurrentInstanceCounterManager,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x78);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,Metasound::FConcurrentInstanceCounterManager::FStats>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14b2af690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FOperatorPool,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FOperatorPool,1> *this)

{
  Metasound::FOperatorPool::~FOperatorPool((FOperatorPool *)&this->ObjectStorage);
  return;
}

