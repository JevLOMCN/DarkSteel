// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 143dc4c30

void __thiscall
FChaosVDParticleMassProps::CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FChaosVDParticleMassProps *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  dVar3 = (this->MCenterOfMass).field0_0x0._s_0.X;
  dVar4 = (this->MCenterOfMass).field0_0x0._s_0.Y;
  dVar2 = (this->MCenterOfMass).field0_0x0._s_0.Z;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x400)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x3f8);
  pdVar1 = (double *)(lVar6 + (longlong)(int)uVar5 * 0x18);
  *pdVar1 = dVar3;
  pdVar1[1] = dVar4;
  *(double *)(lVar6 + 0x10 + (longlong)(int)uVar5 * 0x18) = dVar2;
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar6 = *(longlong *)param_1;
  dVar2 = (this->MRotationOfMass).X;
  dVar3 = (this->MRotationOfMass).Y;
  dVar4 = (this->MRotationOfMass).Z;
  dVar8 = (this->MRotationOfMass).W;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x418)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x410);
  pdVar1 = (double *)((longlong)(int)uVar5 * 0x20 + lVar6);
  *pdVar1 = dVar2;
  pdVar1[1] = dVar3;
  pdVar1 = (double *)((longlong)(int)uVar5 * 0x20 + 0x10 + lVar6);
  *pdVar1 = dVar4;
  pdVar1[1] = dVar8;
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar11 = (longlong)(int)uVar5;
  lVar6 = *(longlong *)param_1;
  dVar2 = (this->MI).field0_0x0._s_0.X;
  dVar3 = (this->MI).field0_0x0._s_0.Y;
  dVar4 = (this->MI).field0_0x0._s_0.Z;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x388)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x380);
  *(float *)(lVar6 + lVar11 * 0xc) = (float)dVar2;
  *(float *)(lVar6 + 4 + lVar11 * 0xc) = (float)dVar3;
  *(float *)(lVar6 + 8 + lVar11 * 0xc) = (float)dVar4;
  uVar5 = *(uint *)&param_1->field_0x8;
  lVar11 = (longlong)(int)uVar5;
  lVar6 = *(longlong *)param_1;
  dVar2 = (this->MInvI).field0_0x0._s_0.X;
  dVar3 = (this->MInvI).field0_0x0._s_0.Y;
  dVar4 = (this->MInvI).field0_0x0._s_0.Z;
  uVar10 = 0;
  if ((int)uVar5 < *(int *)(lVar6 + 0x3a0)) {
    uVar10 = ~uVar5 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x398);
  *(float *)(lVar6 + lVar11 * 0xc) = (float)dVar2;
  *(float *)(lVar6 + 4 + lVar11 * 0xc) = (float)dVar3;
  *(float *)(lVar6 + 8 + lVar11 * 0xc) = (float)dVar4;
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetM(param_1,&this->MM);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInvM(param_1,&this->MInvM);
  return;
}

