// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// FJointConstraint @ 143c42fc0

FJointConstraint * __thiscall Chaos::FJointConstraint::FJointConstraint(FJointConstraint *this)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FJointConstraint_Chaos__6B_;
  puVar1 = &local_28;
  *(undefined4 *)&this->_padding_ = 0;
  local_28 = 0;
  uStack_20 = 0;
  do {
    *(undefined8 *)((longlong)this + (0x20 - (longlong)&local_28) + (longlong)puVar1) = *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &local_18);
  puVar1 = &local_18;
  local_18 = 0;
  uStack_10 = 0;
  do {
    *(undefined8 *)((longlong)this + (0x30 - (longlong)&local_18) + (longlong)puVar1) = *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined8 *)&stack0xfffffffffffffff8);
  FPBDJointSettings::FPBDJointSettings(&(this->JointSettings).Property);
  (this->Output).bIsBreaking = false;
  (this->Output).bIsBroken = false;
  (this->Output).bDriveTargetChanged = false;
  (this->Output).Force.field0_0x0._s_0.X = 0.0;
  (this->Output).Force.field0_0x0._s_0.Y = 0.0;
  (this->Output).Force.field0_0x0._s_0.Z = 0.0;
  (this->Output).Torque.field0_0x0._s_0.X = 0.0;
  (this->Output).Torque.field0_0x0._s_0.Y = 0.0;
  (this->Output).Torque.field0_0x0._s_0.Z = 0.0;
  (this->Output).bIsViolating = false;
  (this->Output).LinearViolation = 0.0;
  (this->Output).AngularViolation = 0.0;
  this->KinematicEndPoint = (FSingleParticlePhysicsProxy *)0x0;
  return this;
}

// ~FJointConstraint @ 143c45330

void __thiscall Chaos::FJointConstraint::~FJointConstraint(FJointConstraint *this)

{
  this->_padding_ = (longlong)&___7FConstraintBase_Chaos__6B_;
  return;
}

// GetKinematicEndPoint @ 143c690f0

FSingleParticlePhysicsProxy * __thiscall
Chaos::FJointConstraint::GetKinematicEndPoint(FJointConstraint *this)

{
  return this->KinematicEndPoint;
}

// ReleaseKinematicEndPoint @ 143c6dda0

void __thiscall
Chaos::FJointConstraint::ReleaseKinematicEndPoint(FJointConstraint *this,FPBDRigidsSolver *param_1)

{
  if (this->KinematicEndPoint != (FSingleParticlePhysicsProxy *)0x0) {
    FPBDRigidsSolver::UnregisterObject(param_1,this->KinematicEndPoint);
    this->KinematicEndPoint = (FSingleParticlePhysicsProxy *)0x0;
  }
  return;
}

// SetJointSettings @ 143c73f60

void __thiscall
Chaos::FJointConstraint::SetJointSettings(FJointConstraint *this,FPBDJointSettings *param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  TChaosProperty<Chaos::FPBDJointSettings,7> *pTVar3;
  TChaosProperty<Chaos::FPBDJointSettings,7> *pTVar4;
  FPBDJointSettings *pFVar5;
  longlong lVar6;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  lVar6 = 6;
  pTVar3 = &this->JointSettings;
  do {
    pFVar5 = param_1;
    pTVar4 = pTVar3;
    pTVar3 = (TChaosProperty<Chaos::FPBDJointSettings,7> *)
             &(pTVar4->Property).ConnectorTransforms.V[1].field_0x20;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x8;
    param_1 = (FPBDJointSettings *)&(pFVar5->ConnectorTransforms).V[1].field_0x20;
    *(undefined8 *)(pTVar4->Property).ConnectorTransforms.V =
         *(undefined8 *)(pFVar5->ConnectorTransforms).V;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x18;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x10 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x10;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x18 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x28;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x20 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x20;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x28 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x38;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x30 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x30;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x38 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x48;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x40 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x40;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x48 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x58;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x50 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x50;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[0].field_0x58 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x8;
    *(undefined8 *)((pTVar4->Property).ConnectorTransforms.V + 1) =
         *(undefined8 *)((pFVar5->ConnectorTransforms).V + 1);
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x8 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x18;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x10 =
         *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x10;
    *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x18 = uVar2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x28;
  *(undefined8 *)pTVar3 = *(undefined8 *)param_1;
  *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x38;
  *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x30 =
       *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x30;
  *(undefined8 *)&(pTVar4->Property).ConnectorTransforms.V[1].field_0x38 = uVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetKinematicEndPoint @ 143c74100

void __thiscall
Chaos::FJointConstraint::SetKinematicEndPoint
          (FJointConstraint *this,FSingleParticlePhysicsProxy *param_1,FPBDRigidsSolver *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->KinematicEndPoint != (FSingleParticlePhysicsProxy *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_91114192131588070>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraintData.cpp"
                       ,0x1a,"KinematicEndPoint == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->KinematicEndPoint = param_1;
  FPBDRigidsSolver::RegisterObject(param_2,param_1);
  return;
}

// SetLinearPositionDriveEnabled @ 143c74390

void __thiscall
Chaos::FJointConstraint::SetLinearPositionDriveEnabled
          (FJointConstraint *this,TVector<bool,3> param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined5 in_register_00000013;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)CONCAT53(in_register_00000013,param_1.field0_0x0);
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.X = (bool)*puVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Y = (bool)puVar2[1];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearPositionDriveEnabled.field0_0x0._s_0.Z = (bool)puVar2[2];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetLinearVelocityDriveEnabled @ 143c74430

void __thiscall
Chaos::FJointConstraint::SetLinearVelocityDriveEnabled
          (FJointConstraint *this,TVector<bool,3> param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined5 in_register_00000013;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)CONCAT53(in_register_00000013,param_1.field0_0x0);
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.X = (bool)*puVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Y = (bool)puVar2[1];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointSettings).Property.bLinearVelocityDriveEnabled.field0_0x0._s_0.Z = (bool)puVar2[2];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x80;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetParticleProxies @ 143c74b70

void __thiscall
Chaos::FJointConstraint::SetParticleProxies
          (FJointConstraint *this,TVector<IPhysicsProxyBase_*,2> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointProxies).Property.ParticleProxies.V[0] = param_1->V[0];
  (this->JointProxies).Property.ParticleProxies.V[1] = param_1->V[1];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x100;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pUVar2 = (UObject *)0x0;
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  pUVar3 = pUVar2;
  if (param_1->V[0]->Type == SingleParticleProxy) {
    pUVar3 = param_1->V[0][1].Owner;
  }
  (this->JointBodies).Property.PhysicsBodies.V[0] = (FPhysicsObject *)pUVar3;
  if (param_1->V[1]->Type == SingleParticleProxy) {
    pUVar2 = param_1->V[1][1].Owner;
  }
  (this->JointBodies).Property.PhysicsBodies.V[1] = (FPhysicsObject *)pUVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x200;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SetPhysicsBodies @ 143c74c10

void __thiscall
Chaos::FJointConstraint::SetPhysicsBodies
          (FJointConstraint *this,TVector<Chaos::FPhysicsObject_*,2> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsObject *local_res8;
  FPhysicsObject *local_res10;
  TArrayView<Chaos::FPhysicsObject_const_*_const,int> local_18;
  
  local_res8 = param_1->V[0];
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  local_res10 = param_1->V[1];
  local_18.ArrayNum = 1;
  local_18.DataPtr = &local_res8;
  pIVar2 = FPhysicsObjectInterface::GetProxy(&local_18);
  local_18.ArrayNum = 1;
  (this->JointProxies).Property.ParticleProxies.V[0] = pIVar2;
  local_18.DataPtr = &local_res10;
  pIVar2 = FPhysicsObjectInterface::GetProxy(&local_18);
  (this->JointProxies).Property.ParticleProxies.V[1] = pIVar2;
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x100;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = (IPhysicsProxyBase *)this->_padding_;
  (this->JointBodies).Property.PhysicsBodies.V[0] = param_1->V[0];
  (this->JointBodies).Property.PhysicsBodies.V[1] = param_1->V[1];
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 0x200;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  return;
}

// SyncRemoteDataImp @ 143c78ce0

void __thiscall
Chaos::FJointConstraint::SyncRemoteDataImp
          (FJointConstraint *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  IPhysicsProxyBase *pIVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsObject *pFVar3;
  FPhysicsObject *pFVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TChaosProperty<Chaos::FPBDJointSettings,7> *pTVar9;
  undefined8 *puVar10;
  FProxyBasePairProperty *pFVar11;
  FPhysicsObjectPairProperty *pFVar12;
  TChaosProperty<Chaos::FPBDJointSettings,7> *pTVar13;
  FPBDJointSettings *pFVar14;
  FPBDJointSettings *pFVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined8 local_328 [100];
  
  uVar19 = (param_3->Flags).Bits;
  if ((uVar19 >> 8 & 1) != 0) {
    pIVar1 = (this->JointProxies).Property.ParticleProxies.V[0];
    pIVar2 = (this->JointProxies).Property.ParticleProxies.V[1];
    pFVar11 = TDirtyElementPool<Chaos::FProxyBasePairProperty>::GetElement
                        (&param_1->JointParticleProxiesPool,param_2);
    (pFVar11->ParticleProxies).V[0] = pIVar1;
    (pFVar11->ParticleProxies).V[1] = pIVar2;
    uVar19 = (param_3->Flags).Bits;
  }
  if ((uVar19 >> 9 & 1) != 0) {
    pFVar3 = (this->JointBodies).Property.PhysicsBodies.V[0];
    pFVar4 = (this->JointBodies).Property.PhysicsBodies.V[1];
    pFVar12 = TDirtyElementPool<Chaos::FPhysicsObjectPairProperty>::GetElement
                        (&param_1->JointPhysicsObjectsPool,param_2);
    (pFVar12->PhysicsBodies).V[0] = pFVar3;
    (pFVar12->PhysicsBodies).V[1] = pFVar4;
    uVar19 = (param_3->Flags).Bits;
  }
  if ((char)uVar19 < '\0') {
    lVar18 = 6;
    lVar17 = 6;
    pTVar9 = &this->JointSettings;
    puVar10 = local_328;
    do {
      puVar16 = puVar10;
      pTVar13 = pTVar9;
      uVar5 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x8;
      uVar6 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x10;
      uVar7 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x18;
      pTVar9 = (TChaosProperty<Chaos::FPBDJointSettings,7> *)
               &(pTVar13->Property).ConnectorTransforms.V[1].field_0x20;
      *puVar16 = *(undefined8 *)(pTVar13->Property).ConnectorTransforms.V;
      puVar16[1] = uVar5;
      uVar5 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x20;
      uVar8 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x28;
      puVar16[2] = uVar6;
      puVar16[3] = uVar7;
      uVar6 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x30;
      uVar7 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x38;
      puVar16[4] = uVar5;
      puVar16[5] = uVar8;
      uVar5 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x40;
      uVar8 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x48;
      puVar16[6] = uVar6;
      puVar16[7] = uVar7;
      uVar6 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x50;
      uVar7 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[0].field_0x58;
      puVar16[8] = uVar5;
      puVar16[9] = uVar8;
      uVar5 = *(undefined8 *)((pTVar13->Property).ConnectorTransforms.V + 1);
      uVar8 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x8;
      puVar16[10] = uVar6;
      puVar16[0xb] = uVar7;
      uVar6 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x10;
      uVar7 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x18;
      puVar16[0xc] = uVar5;
      puVar16[0xd] = uVar8;
      puVar16[0xe] = uVar6;
      puVar16[0xf] = uVar7;
      lVar17 = lVar17 + -1;
      puVar10 = puVar16 + 0x10;
    } while (lVar17 != 0);
    uVar5 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x28;
    uVar6 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x30;
    uVar7 = *(undefined8 *)&(pTVar13->Property).ConnectorTransforms.V[1].field_0x38;
    puVar16[0x10] = *(undefined8 *)pTVar9;
    puVar16[0x11] = uVar5;
    puVar16[0x12] = uVar6;
    puVar16[0x13] = uVar7;
    pFVar14 = TDirtyElementPool<Chaos::FPBDJointSettings>::GetElement
                        (&param_1->JointSettingsPool,param_2);
    puVar10 = local_328;
    do {
      puVar16 = puVar10;
      pFVar15 = pFVar14;
      pFVar14 = (FPBDJointSettings *)&(pFVar15->ConnectorTransforms).V[1].field_0x20;
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar7 = puVar16[3];
      *(undefined8 *)(pFVar15->ConnectorTransforms).V = *puVar16;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x8 = uVar5;
      uVar5 = puVar16[4];
      uVar8 = puVar16[5];
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x10 = uVar6;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x18 = uVar7;
      uVar6 = puVar16[6];
      uVar7 = puVar16[7];
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x20 = uVar5;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x28 = uVar8;
      uVar5 = puVar16[8];
      uVar8 = puVar16[9];
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x30 = uVar6;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x38 = uVar7;
      uVar6 = puVar16[10];
      uVar7 = puVar16[0xb];
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x40 = uVar5;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x48 = uVar8;
      uVar5 = puVar16[0xc];
      uVar8 = puVar16[0xd];
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x50 = uVar6;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[0].field_0x58 = uVar7;
      uVar6 = puVar16[0xe];
      uVar7 = puVar16[0xf];
      *(undefined8 *)((pFVar15->ConnectorTransforms).V + 1) = uVar5;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x8 = uVar8;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x10 = uVar6;
      *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x18 = uVar7;
      lVar18 = lVar18 + -1;
      puVar10 = puVar16 + 0x10;
    } while (lVar18 != 0);
    uVar5 = puVar16[0x11];
    uVar6 = puVar16[0x12];
    uVar7 = puVar16[0x13];
    *(undefined8 *)pFVar14 = puVar16[0x10];
    *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x28 = uVar5;
    *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x30 = uVar6;
    *(undefined8 *)&(pFVar15->ConnectorTransforms).V[1].field_0x38 = uVar7;
  }
  return;
}

