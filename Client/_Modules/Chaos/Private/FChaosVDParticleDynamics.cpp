// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_> @ 1436f2450

void __thiscall
FChaosVDParticleDynamics::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_>
          (FChaosVDParticleDynamics *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x328)) {
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
  lVar3 = *(longlong *)(lVar3 + 800);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  dVar5 = pdVar1[1];
  (this->MAcceleration).field0_0x0._s_0.X = *pdVar1;
  (this->MAcceleration).field0_0x0._s_0.Y = dVar5;
  (this->MAcceleration).field0_0x0._s_0.Z = *(double *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x340)) {
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
  lVar3 = *(longlong *)(lVar3 + 0x338);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  dVar5 = pdVar1[1];
  (this->MAngularAcceleration).field0_0x0._s_0.X = *pdVar1;
  (this->MAngularAcceleration).field0_0x0._s_0.Y = dVar5;
  (this->MAngularAcceleration).field0_0x0._s_0.Z =
       *(double *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x358)) {
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
  lVar3 = *(longlong *)(lVar3 + 0x350);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  dVar5 = pdVar1[1];
  (this->MLinearImpulseVelocity).field0_0x0._s_0.X = *pdVar1;
  (this->MLinearImpulseVelocity).field0_0x0._s_0.Y = dVar5;
  (this->MLinearImpulseVelocity).field0_0x0._s_0.Z =
       *(double *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x370)) {
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
  lVar3 = *(longlong *)(lVar3 + 0x368);
  pdVar1 = (double *)(lVar3 + (longlong)(int)uVar2 * 0x18);
  dVar5 = pdVar1[1];
  (this->MAngularImpulseVelocity).field0_0x0._s_0.X = *pdVar1;
  (this->MAngularImpulseVelocity).field0_0x0._s_0.Y = dVar5;
  (this->MAngularImpulseVelocity).field0_0x0._s_0.Z =
       *(double *)(lVar3 + 0x10 + (longlong)(int)uVar2 * 0x18);
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 143dc49e0

void __thiscall
FChaosVDParticleDynamics::CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FChaosVDParticleDynamics *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  uVar3 = *(uint *)&param_1->field_0x8;
  uVar6 = *(undefined4 *)&(this->MAcceleration).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(this->MAcceleration).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(this->MAcceleration).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(this->MAcceleration).field0_0x0 + 0xc);
  lVar4 = *(longlong *)param_1;
  dVar2 = (this->MAcceleration).field0_0x0._s_0.Z;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x328)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 800);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar4 = *(longlong *)param_1;
  uVar6 = *(undefined4 *)&(this->MAngularAcceleration).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(this->MAngularAcceleration).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(this->MAngularAcceleration).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(this->MAngularAcceleration).field0_0x0 + 0xc);
  dVar2 = (this->MAngularAcceleration).field0_0x0._s_0.Z;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x340)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x338);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar4 = *(longlong *)param_1;
  uVar6 = *(undefined4 *)&(this->MLinearImpulseVelocity).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(this->MLinearImpulseVelocity).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(this->MLinearImpulseVelocity).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(this->MLinearImpulseVelocity).field0_0x0 + 0xc);
  dVar2 = (this->MLinearImpulseVelocity).field0_0x0._s_0.Z;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x358)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x350);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
  uVar3 = *(uint *)&param_1->field_0x8;
  lVar4 = *(longlong *)param_1;
  uVar6 = *(undefined4 *)&(this->MAngularImpulseVelocity).field0_0x0;
  uVar7 = *(undefined4 *)((longlong)&(this->MAngularImpulseVelocity).field0_0x0 + 4);
  uVar8 = *(undefined4 *)((longlong)&(this->MAngularImpulseVelocity).field0_0x0 + 8);
  uVar9 = *(undefined4 *)((longlong)&(this->MAngularImpulseVelocity).field0_0x0 + 0xc);
  dVar2 = (this->MAngularImpulseVelocity).field0_0x0._s_0.Z;
  uVar11 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x370)) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x368);
  puVar1 = (undefined4 *)(lVar4 + (longlong)(int)uVar3 * 0x18);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
  return;
}

