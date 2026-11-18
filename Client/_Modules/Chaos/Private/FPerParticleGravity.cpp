// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~FPerParticleGravity @ 143d03ab0

void __thiscall Chaos::FPerParticleGravity::~FPerParticleGravity(FPerParticleGravity *this)

{
  this->_padding_ = (longlong)&___7FPerParticleGravity_Chaos__6B_;
  return;
}

// Apply @ 143d406a0

void __thiscall
Chaos::FPerParticleGravity::Apply
          (FPerParticleGravity *this,TPBDRigidParticleHandleImp<double,3,0> *param_1,double param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TVector<double,3> *pTVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)&param_1->field_0x8;
  lVar1 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar6 < *(int *)(lVar1 + 0x2e0)) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(byte *)(*(longlong *)(lVar1 + 0x2d8) + 8 + (longlong)(int)uVar6 * 0x10) & 1) != 0) {
    uVar6 = *(uint *)&param_1->field_0x8;
    lVar1 = *(longlong *)param_1;
    uVar5 = 0;
    if ((int)uVar6 < *(int *)(lVar1 + 0x2e0)) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar6 = *(ushort *)(*(longlong *)(lVar1 + 0x2d8) + 8 + (longlong)(int)uVar6 * 0x10) >> 5 & 7;
    pTVar4 = TPBDRigidParticleHandleImp<double,3,0>::Acceleration(param_1);
    *(double *)pTVar4 = *(double *)(this->MAccelerations + uVar6) + *(double *)pTVar4;
    *(double *)&pTVar4->field_0x8 =
         *(double *)&this->MAccelerations[uVar6].field_0x8 + *(double *)&pTVar4->field_0x8;
    *(double *)&pTVar4->field_0x10 =
         *(double *)&this->MAccelerations[uVar6].field_0x10 + *(double *)&pTVar4->field_0x10;
  }
  return;
}

