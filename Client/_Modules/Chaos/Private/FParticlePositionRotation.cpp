// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_> @ 1440c1310

void __thiscall
Chaos::FParticlePositionRotation::CopyFrom<Chaos::TGeometryParticleHandleImp<double,3,1>_>
          (FParticlePositionRotation *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  
  pTVar8 = TParticles<double,3>::GetX
                     ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  uVar5 = *(undefined8 *)&pTVar8->field_0x8;
  *(undefined8 *)&this->MX = *(undefined8 *)pTVar8;
  *(undefined8 *)&(this->MX).field_0x8 = uVar5;
  *(undefined8 *)&(this->MX).field_0x10 = *(undefined8 *)&pTVar8->field_0x10;
  uVar2 = (uint)param_1->_padding_;
  lVar3 = param_1->_padding_;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 0x10);
  uVar5 = puVar1[1];
  *(undefined8 *)&this->MR = *puVar1;
  *(undefined8 *)&(this->MR).field_0x8 = uVar5;
  return;
}

