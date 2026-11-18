// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c16c0

void __thiscall
Chaos::FParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FParticleDynamics *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x328)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 800);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&this->MAcceleration = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(this->MAcceleration).field_0x4 = (float)dVar1;
  *(float *)&(this->MAcceleration).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x340)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x338);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&this->MAngularAcceleration = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(this->MAngularAcceleration).field_0x4 = (float)dVar1;
  *(float *)&(this->MAngularAcceleration).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x358)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x350);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&this->MLinearImpulseVelocity = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(this->MLinearImpulseVelocity).field_0x4 = (float)dVar1;
  *(float *)&(this->MLinearImpulseVelocity).field_0x8 = (float)dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar8 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x370)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x368);
  dVar1 = *(double *)(lVar4 + 8 + lVar8 * 0x18);
  dVar2 = *(double *)(lVar4 + 0x10 + lVar8 * 0x18);
  *(float *)&this->MAngularImpulseVelocity = (float)*(double *)(lVar4 + lVar8 * 0x18);
  *(float *)&(this->MAngularImpulseVelocity).field_0x4 = (float)dVar1;
  *(float *)&(this->MAngularImpulseVelocity).field_0x8 = (float)dVar2;
  return;
}

