// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// GetConstrainedParticles @ 143c9e2a0

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FPBDPositionConstraintHandle::GetConstrainedParticles
          (FPBDPositionConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar6;
  undefined8 *puVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar1 = *(uint *)&this->field_0x18;
  lVar2 = *(longlong *)&this->field_0x8;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x38)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)(*pcVar3)();
      return pTVar6;
    }
  }
  puVar7 = &local_18;
  local_18 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + (longlong)(int)uVar1 * 8);
  local_10 = 0;
  do {
    *(undefined8 *)(((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)puVar7) =
         *puVar7;
    puVar7 = puVar7 + 1;
  } while (puVar7 != (undefined8 *)&stack0xfffffffffffffff8);
  return __return_storage_ptr__;
}

