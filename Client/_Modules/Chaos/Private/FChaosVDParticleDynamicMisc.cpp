// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1436f2aa0

void __thiscall
FChaosVDParticleDynamicMisc::CopyFrom<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FChaosVDParticleDynamicMisc *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  float fVar10;
  double dVar11;
  schar sStackX_9;
  
  dVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::LinearEtherDrag(param_1);
  this->MLinearEtherDrag = dVar11;
  dVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::AngularEtherDrag(param_1);
  this->MAngularEtherDrag = dVar11;
  dVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxLinearSpeedSq(param_1);
  this->MMaxLinearSpeedSq = dVar11;
  dVar11 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::MaxAngularSpeedSq(param_1);
  this->MMaxAngularSpeedSq = dVar11;
  fVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::InitialOverlapDepenetrationVelocity
                     (param_1);
  this->MInitialOverlapDepenetrationVelocity = fVar10;
  fVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::SleepThresholdMultiplier(param_1);
  this->MSleepThresholdMultiplier = fVar10;
  EVar5 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  this->MObjectState = EVar5;
  iVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::CollisionGroup(param_1);
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
  this->MSleepType = *(EChaosVDSleepType *)((longlong)(int)uVar2 + *(longlong *)(lVar3 + 0x4d0));
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
  uVar1 = *(ushort *)(*(longlong *)(lVar3 + 0x2d8) + 8 + (longlong)(int)uVar2 * 0x10);
  bVar9 = (byte)uVar1;
  *(undefined1 *)&(this->MControlFlags)._padding_ = 1;
  (this->MControlFlags).bGravityEnabled = (bool)(bVar9 & 1);
  (this->MControlFlags).bCCDEnabled = (bool)(bVar9 >> 1 & 1);
  (this->MControlFlags).bOneWayInteractionEnabled = (bool)(bVar9 >> 2 & 1);
  (this->MControlFlags).bInertiaConditioningEnabled = (bool)(bVar9 >> 4 & 1);
  (this->MControlFlags).GravityGroupIndex = uVar1 >> 5 & 7;
  bVar9 = (byte)(uVar1 >> 8);
  (this->MControlFlags).bMACDEnabled = (bool)(bVar9 >> 1 & 1);
  (this->MControlFlags).bPartialIslandSleepAllowed = (bool)(bVar9 >> 2 & 1);
  (this->MControlFlags).bGyroscopicTorqueEnabled = (bool)(bVar9 >> 3 & 1);
  bVar6 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
  this->bDisabled = bVar6;
  *(undefined1 *)&this->_padding_ = 1;
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
  this->PositionSolverIterationCount =
       (schar)*(undefined2 *)((longlong)(int)uVar2 * 3 + *(longlong *)(lVar3 + 0x518));
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
  sStackX_9 = (schar)((ushort)*(undefined2 *)
                               ((longlong)(int)uVar2 * 3 + *(longlong *)(lVar3 + 0x518)) >> 8);
  this->VelocitySolverIterationCount = sStackX_9;
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
  this->ProjectionSolverIterationCount =
       *(schar *)((longlong)(int)uVar2 * 3 + 2 + *(longlong *)(lVar3 + 0x518));
  return;
}

// CopyWithoutStateTo<Chaos::TPBDRigidParticle<double,3>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType> @ 143dc4fe0

void __thiscall
FChaosVDParticleDynamicMisc::
CopyWithoutStateTo<Chaos::TPBDRigidParticle<double,3>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType>
          (FChaosVDParticleDynamicMisc *this,TPBDRigidParticle<double,3> *param_1)

{
  EChaosVDSleepType EVar1;
  IPhysicsProxyBase *pIVar2;
  char cVar3;
  schar sVar4;
  char cVar5;
  FRigidParticleControlFlags_u_0 local_res8 [4];
  
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MLinearEtherDrag = (float)this->MLinearEtherDrag;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MAngularEtherDrag = (float)this->MAngularEtherDrag;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MMaxLinearSpeedSq = (float)this->MMaxLinearSpeedSq;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MMaxAngularSpeedSq = (float)this->MMaxAngularSpeedSq;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MInitialOverlapDepenetrationVelocity =
       this->MInitialOverlapDepenetrationVelocity;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MSleepThresholdMultiplier = this->MSleepThresholdMultiplier;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MCollisionGroup = this->MCollisionGroup;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  EVar1 = this->MSleepType;
  (param_1->MMiscData).Property.MSleepType = EVar1;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  if ((EVar1 == NeverSleep) && ((param_1->MMiscData).Property.MObjectState == Sleeping)) {
    pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
    (param_1->MMiscData).Property.MObjectState = Dynamic;
    *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
    if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    }
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MCollisionConstraintFlag = this->MCollisionConstraintFlag;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  local_res8[0].Bits = 0;
  FChaosVDFRigidParticleControlFlags::CopyTo<Chaos::FRigidParticleControlFlags>
            (&this->MControlFlags,(FRigidParticleControlFlags *)&local_res8[0].Flags);
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.MControlFlags.field0_0x0.Bits = (ushort)local_res8[0];
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  (param_1->MMiscData).Property.bDisabled = this->bDisabled;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  cVar5 = '\x7f';
  if (this->PositionSolverIterationCount < '\x7f') {
    cVar5 = this->PositionSolverIterationCount;
  }
  cVar3 = -1;
  if (-1 < cVar5) {
    cVar3 = cVar5;
  }
  (param_1->MMiscData).Property.MIterationSettings.NumPositionIterations = cVar3;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  cVar5 = '\x7f';
  if (this->VelocitySolverIterationCount < '\x7f') {
    cVar5 = this->VelocitySolverIterationCount;
  }
  sVar4 = -1;
  if (-1 < cVar5) {
    sVar4 = cVar5;
  }
  (param_1->MMiscData).Property.MIterationSettings.NumVelocityIterations = sVar4;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  pIVar2 = *(IPhysicsProxyBase **)&param_1->field_0x10;
  cVar5 = '\x7f';
  if (this->ProjectionSolverIterationCount < '\x7f') {
    cVar5 = this->ProjectionSolverIterationCount;
  }
  sVar4 = -1;
  if (-1 < cVar5) {
    sVar4 = cVar5;
  }
  (param_1->MMiscData).Property.MIterationSettings.NumProjectionIterations = sVar4;
  *(uint *)&param_1->field_0x9c = *(uint *)&param_1->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  return;
}

// CopyWithoutStateTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType> @ 143dc52f0

void __thiscall
FChaosVDParticleDynamicMisc::
CopyWithoutStateTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType>
          (FChaosVDParticleDynamicMisc *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  FRigidParticleControlFlags_u_0 FVar4;
  bool bVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  FRigidParticleControlFlags_u_0 local_res8 [4];
  
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetLinearEtherDrag(param_1,&this->MLinearEtherDrag)
  ;
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetAngularEtherDrag
            (param_1,&this->MAngularEtherDrag);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMaxLinearSpeedSq
            (param_1,&this->MMaxLinearSpeedSq);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetMaxAngularSpeedSq
            (param_1,&this->MMaxAngularSpeedSq);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInitialOverlapDepenetrationVelocity
            (param_1,this->MInitialOverlapDepenetrationVelocity);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepThresholdMultiplier
            (param_1,this->MSleepThresholdMultiplier);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionGroup(param_1,this->MCollisionGroup);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetSleepType(param_1,this->MSleepType);
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetCollisionConstraintFlags
            (param_1,this->MCollisionConstraintFlag);
  local_res8[0].Bits = 0;
  FChaosVDFRigidParticleControlFlags::CopyTo<Chaos::FRigidParticleControlFlags>
            (&this->MControlFlags,(FRigidParticleControlFlags *)&local_res8[0].Flags);
  FVar4 = local_res8[0];
  uVar1 = *(uint *)&param_1->field_0x8;
  lVar2 = *(longlong *)param_1;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x2e0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  ((FRigidParticleControlFlags_u_0 *)
  (*(longlong *)(lVar2 + 0x2d8) + 8 + (longlong)(int)uVar1 * 0x10))->Bits = (ushort)FVar4;
  Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetDisabled(param_1,this->bDisabled);
  uVar1 = *(uint *)&param_1->field_0x8;
  lVar2 = *(longlong *)param_1;
  cVar7 = this->PositionSolverIterationCount;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar8 = '\x7f';
  if (cVar7 < '\x7f') {
    cVar8 = cVar7;
  }
  cVar7 = -1;
  if (-1 < cVar8) {
    cVar7 = cVar8;
  }
  *(char *)((longlong)(int)uVar1 * 3 + *(longlong *)(lVar2 + 0x518)) = cVar7;
  uVar1 = *(uint *)&param_1->field_0x8;
  lVar2 = *(longlong *)param_1;
  cVar7 = this->VelocitySolverIterationCount;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar8 = '\x7f';
  if (cVar7 < '\x7f') {
    cVar8 = cVar7;
  }
  cVar7 = -1;
  if (-1 < cVar8) {
    cVar7 = cVar8;
  }
  *(char *)((longlong)(int)uVar1 * 3 + 1 + *(longlong *)(lVar2 + 0x518)) = cVar7;
  uVar1 = *(uint *)&param_1->field_0x8;
  lVar2 = *(longlong *)param_1;
  cVar7 = this->ProjectionSolverIterationCount;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  cVar8 = '\x7f';
  if (cVar7 < '\x7f') {
    cVar8 = cVar7;
  }
  cVar7 = -1;
  if (-1 < cVar8) {
    cVar7 = cVar8;
  }
  *(char *)((longlong)(int)uVar1 * 3 + 2 + *(longlong *)(lVar2 + 0x518)) = cVar7;
  return;
}

