// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsSolver
// Functions: 1

// DestroyObject @ 14e2533c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FStrandsPositionOutput,1>::DestroyObject
          (TIntrusiveReferenceController<FStrandsPositionOutput,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               **)(this->ObjectStorage).Pad,*(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

