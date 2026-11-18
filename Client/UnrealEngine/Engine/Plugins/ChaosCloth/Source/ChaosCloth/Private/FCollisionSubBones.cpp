// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 1

// ~FCollisionSubBones @ 14db9fb00

void __thiscall
Chaos::FClothComplexColliders::FCollisionSubBones::~FCollisionSubBones(FCollisionSubBones *this)

{
  void *pvVar1;
  
  *(undefined ***)&this->W = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->W).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->R = &___7__TArrayCollectionArray_V__TRotation_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->R).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->V = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->V).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->X = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->X).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->Transforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->Transforms).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->OldTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->OldTransforms).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BaseTransforms =
       &___7__TArrayCollectionArray_V__TRigidTransform_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->BaseTransforms).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->BoneIndices = &___7__TArrayCollectionArray_H_Chaos__6B_;
  pvVar1 = *(void **)&(this->BoneIndices).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)this);
  return;
}

