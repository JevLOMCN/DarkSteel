// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>_> @ 148235360

TRotation<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::
AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TRotation<double,3>_>_>
          (TGeometryParticleHandleImp<double,3,1> *this,
          TArrayCollectionArray<Chaos::TRotation<double,3>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TRotation<double,3> *pTVar5;
  
  uVar1 = this->HandleIdx;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)&param_1->field_0x10) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TRotation<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TRotation<double,3> *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&param_1->field_0x8);
}

// AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_> @ 1482353e0

TVector<double,3> * __thiscall
Chaos::TGeometryParticleHandleImp<double,3,1>::
AuxilaryValue<Chaos::TArrayCollectionArray<Chaos::TVector<double,3>_>_>
          (TGeometryParticleHandleImp<double,3,1> *this,
          TArrayCollectionArray<Chaos::TVector<double,3>_> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<double,3> *pTVar5;
  
  uVar1 = this->HandleIdx;
  uVar4 = 0;
  if ((int)uVar1 < *(int *)&param_1->field_0x10) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<double,3> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return (TVector<double,3> *)(*(longlong *)&param_1->field_0x8 + (longlong)(int)uVar1 * 0x18);
}

