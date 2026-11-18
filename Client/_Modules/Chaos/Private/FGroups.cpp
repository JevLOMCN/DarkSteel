// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// ~FGroups @ 143dfe000

void __thiscall Chaos::Softs::FEvolution::FGroups::~FGroups(FGroups *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->SolverContexts =
       &___7__TArrayCollectionArray_UFEvolutionGroupContext_Softs_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->SolverContexts).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->ActiveCollisionParticleRanges =
       &
       ___7__TArrayCollectionArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
              &(this->ActiveCollisionParticleRanges).field_0x8,
             *(int *)&(this->ActiveCollisionParticleRanges).field_0x10);
  pvVar1 = *(void **)&(this->ActiveCollisionParticleRanges).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->ActiveSoftBodies =
       &
       ___7__TArrayCollectionArray_V__TSet_HU__DefaultKeyFuncs_H_0A___VFDefaultSetAllocator_____Chaos__6B_
  ;
  DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
            (*(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
              &(this->ActiveSoftBodies).field_0x8,*(int *)&(this->ActiveSoftBodies).field_0x10);
  pvVar1 = *(void **)&(this->ActiveSoftBodies).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->SoftBodies =
       &___7__TArrayCollectionArray_V__TArray_HV__TSizedDefaultAllocator__0CA______Chaos__6B_;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<int,TSizedDefaultAllocator<32>_> **)&(this->SoftBodies).field_0x8,
             *(int *)&(this->SoftBodies).field_0x10);
  pvVar1 = *(void **)&(this->SoftBodies).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

