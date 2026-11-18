// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ~FSolverCollisionParticles @ 143a3ad60

void __thiscall
Chaos::Softs::FSolverCollisionParticles::~FSolverCollisionParticles(FSolverCollisionParticles *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSolverCollisionParticles_Softs_Chaos__6B_;
  *(undefined ***)&this->MW = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MW).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->MV = &___7__TArrayCollectionArray_V__TVector_M_02_Chaos___Chaos__6B_;
  pvVar1 = *(void **)&(this->MV).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSimpleGeometryParticles<float,3>::~TSimpleGeometryParticles<float,3>
            ((TSimpleGeometryParticles<float,3> *)this);
  return;
}

// Serialize @ 143a91a40

void __thiscall
Chaos::Softs::FSolverCollisionParticles::Serialize
          (FSolverCollisionParticles *this,FChaosArchive *param_1)

{
  FChaosArchive *pFVar1;
  
  TSimpleGeometryParticles<float,3>::Serialize((TSimpleGeometryParticles<float,3> *)this,param_1);
  pFVar1 = operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
                     (param_1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                              &(this->MV).field_0x8);
  operator<<<Chaos::TVector<float,3>_TSizedDefaultAllocator<32>_>
            (pFVar1,(TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *)
                    &(this->MW).field_0x8);
  return;
}

// V @ 143c7e550

TVector<float,3> * __thiscall
Chaos::Softs::FSolverCollisionParticles::V(FSolverCollisionParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MV).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MV).field_0x8 + (longlong)param_1 * 0xc);
}

// W @ 143c7e680

TVector<float,3> * __thiscall
Chaos::Softs::FSolverCollisionParticles::W(FSolverCollisionParticles *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<float,3> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < *(int *)&(this->MW).field_0x10) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TVector<float,3> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TVector<float,3> *)(*(longlong *)&(this->MW).field_0x8 + (longlong)param_1 * 0xc);
}

