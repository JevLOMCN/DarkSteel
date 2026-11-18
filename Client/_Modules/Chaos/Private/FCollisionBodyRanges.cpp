// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~FCollisionBodyRanges @ 143dfdf90

void __thiscall
Chaos::Softs::FEvolution::FCollisionBodyRanges::~FCollisionBodyRanges(FCollisionBodyRanges *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->ParticleRanges =
       &___7__TArrayCollectionArray_VFSolverCollisionParticlesRange_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->ParticleRanges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->GroupId = &___7__TArrayCollectionArray_I_Chaos__6B_;
  pvVar1 = *(void **)&(this->GroupId).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Status =
       &
       ___7__TArrayCollectionArray_W4EStatus_FCollisionBodyRanges_FEvolution_Softs_Chaos___Chaos__6B_
  ;
  pvVar1 = *(void **)&(this->Status).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

