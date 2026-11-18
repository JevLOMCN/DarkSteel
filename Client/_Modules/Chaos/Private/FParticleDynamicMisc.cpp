// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1440c1460

void __thiscall
Chaos::FParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FParticleDynamicMisc *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag(param_1);
  this->MLinearEtherDrag = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag(param_1);
  this->MAngularEtherDrag = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq(param_1);
  this->MMaxLinearSpeedSq = (float)dVar10;
  dVar10 = TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq(param_1);
  this->MMaxAngularSpeedSq = (float)dVar10;
  fVar9 = TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity(param_1);
  this->MInitialOverlapDepenetrationVelocity = fVar9;
  fVar9 = TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier(param_1);
  this->MSleepThresholdMultiplier = fVar9;
  EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  this->MObjectState = EVar5;
  iVar7 = TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup(param_1);
  this->MCollisionGroup = iVar7;
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x4d8)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  this->MSleepType = *(ESleepType *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x4d0));
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  this->MCollisionConstraintFlag =
       *(uint *)(*(longlong *)(lVar3 + 0x2d8) + 4 + (longlong)(int)uVar2 * 0x10);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x2e0)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  (this->MControlFlags).field0_0x0 =
       *(FRigidParticleControlFlags_u_0 *)
        (*(longlong *)(lVar3 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  uVar8 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x520)) {
    uVar8 = ~uVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  lVar3 = *(longlong *)(lVar3 + 0x518);
  uVar1 = *(undefined2 *)((longlong)(int)uVar2 * 3 + lVar3);
  (this->MIterationSettings).NumPositionIterations = (char)uVar1;
  (this->MIterationSettings).NumVelocityIterations = (char)((ushort)uVar1 >> 8);
  (this->MIterationSettings).NumProjectionIterations =
       *(schar *)((longlong)(int)uVar2 * 3 + 2 + lVar3);
  bVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
  this->bDisabled = bVar6;
  return;
}

