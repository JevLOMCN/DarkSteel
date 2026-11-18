// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 91

// TPBDRigidParticle<double,3> @ 14373bac0

TPBDRigidParticle<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::TPBDRigidParticle<double,3>
          (TPBDRigidParticle<double,3> *this,FPBDRigidParticleParameters *param_1)

{
  IPhysicsProxyBase *pIVar1;
  EObjectStateType EVar2;
  uint uVar3;
  
  TKinematicGeometryParticle<double,3>::TKinematicGeometryParticle<double,3>
            ((TKinematicGeometryParticle<double,3> *)this,
             (FKinematicGeometryParticleParameters *)param_1);
  *(undefined ***)this = &___7__TPBDRigidParticle_N_02_Chaos__6B_;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass = 0;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x8 = 0;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x10 = 0;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x18 = 0;
  (this->MMiscData).Property.MInitialOverlapDepenetrationVelocity = 0.0;
  (this->MMiscData).Property.MSleepThresholdMultiplier = 1.0;
  (this->MMiscData).Property.MCollisionConstraintFlag = 0;
  (this->MMiscData).Property.MControlFlags = (FRigidParticleControlFlags_u_0)0x0;
  (this->MMiscData).Property.MIterationSettings.NumPositionIterations = -1;
  (this->MMiscData).Property.MIterationSettings.NumVelocityIterations = -1;
  (this->MMiscData).Property.MIterationSettings.NumProjectionIterations = -1;
  this->MWakeEvent = None;
  this->field_0x98 = 2;
  this->MIsland = -1;
  PBDRigidParticleDefaultConstruct<double,3,Chaos::TPBDRigidParticle<double,3>_>(this,param_1);
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MDynamics).Property.MAcceleration = 0;
  *(undefined4 *)&(this->MDynamics).Property.MAcceleration.field_0x8 = 0;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MDynamics).Property.MAngularAcceleration = 0;
  *(undefined4 *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 = 0;
  uVar3 = *(uint *)&this->field_0x9c | 4;
  *(uint *)&this->field_0x9c = uVar3;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    uVar3 = *(uint *)&this->field_0x9c;
  }
  EVar2 = Dynamic;
  if (param_1->bStartSleeping != false) {
    pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
    *(undefined8 *)&this->field_0xa0 = 0;
    *(undefined4 *)&this->field_0xa8 = 0;
    *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 2;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
    pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
    *(undefined8 *)&this->field_0xac = 0;
    *(undefined4 *)&this->field_0xb4 = 0;
    *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 2;
    if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
    uVar3 = *(uint *)&this->field_0x9c & 0xfffffffb;
    EVar2 = Sleeping;
  }
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MObjectState = EVar2;
  *(uint *)&this->field_0x9c = uVar3 | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  this->MInitialized = false;
  this->MWakeEvent = None;
  return this;
}

// Serialize @ 1437aacd0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::Serialize
          (TPBDRigidParticle<double,3> *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  TChaosProperty<Chaos::FParticleDynamics,2> *pTVar2;
  int *piVar3;
  int *piVar4;
  ulonglong *puVar5;
  int iVar6;
  FArchive *pFVar7;
  uint local_res8 [2];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  TGeometryParticle<double,3>::Serialize((TGeometryParticle<double,3> *)this,param_1);
  puVar1 = &this->field_0xa0;
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (iVar6 < 0xc) {
    local_88 = (double)*(float *)puVar1;
    local_80 = (double)*(float *)&this->field_0xa4;
    local_78 = (double)*(float *)&this->field_0xa8;
    local_70 = (double)*(float *)&this->field_0xac;
    local_68 = (double)*(float *)&this->field_0xb0;
    local_60 = (double)*(float *)&this->field_0xb4;
    pFVar7 = SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_88);
    SerializeReal<double,3>(pFVar7,(TVector<double,3> *)&local_70);
    *(float *)puVar1 = (float)local_88;
    *(float *)&this->field_0xa4 = (float)local_80;
    *(float *)&this->field_0xa8 = (float)local_78;
    *(float *)&this->field_0xac = (float)local_70;
    *(float *)&this->field_0xb0 = (float)local_68;
    *(float *)&this->field_0xb4 = (float)local_60;
  }
  else {
    pFVar7 = operator<<<3>((FArchive *)param_1,(TVector<float,3> *)puVar1);
    operator<<<3>(pFVar7,(TVector<float,3> *)&this->field_0xac);
  }
  pTVar2 = &this->MDynamics;
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar6 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  if (iVar6 < 0xc) {
    local_70 = (double)*(float *)&(pTVar2->Property).MAcceleration;
    local_68 = (double)*(float *)&(this->MDynamics).Property.MAcceleration.field_0x4;
    local_60 = (double)*(float *)&(this->MDynamics).Property.MAcceleration.field_0x8;
    local_88 = (double)*(float *)&(this->MDynamics).Property.MAngularAcceleration;
    local_80 = (double)*(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4;
    local_78 = (double)*(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8;
    local_58 = (double)*(float *)&(this->MDynamics).Property.MLinearImpulseVelocity;
    local_50 = (double)*(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x4;
    local_48 = (double)*(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8;
    local_40 = (double)*(float *)&(this->MDynamics).Property.MAngularImpulseVelocity;
    local_38 = (double)*(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4;
    local_30 = (double)*(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x8;
    SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_70);
    SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_88);
    SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_58);
    SerializeReal<double,3>((FArchive *)param_1,(TVector<double,3> *)&local_40);
    *(float *)&(pTVar2->Property).MAcceleration = (float)local_70;
    *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4 = (float)local_68;
    *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8 = (float)local_60;
    *(float *)&(this->MDynamics).Property.MAngularAcceleration = (float)local_88;
    *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4 = (float)local_80;
    *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 = (float)local_78;
    *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity = (float)local_58;
    *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x4 = (float)local_50;
    *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8 = (float)local_48;
    *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity = (float)local_40;
    *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4 = (float)local_38;
    *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x8 = (float)local_30;
  }
  else {
    operator<<<3>((FArchive *)param_1,(TVector<float,3> *)pTVar2);
    operator<<<3>((FArchive *)param_1,&(this->MDynamics).Property.MAngularAcceleration);
    operator<<<3>((FArchive *)param_1,&(this->MDynamics).Property.MLinearImpulseVelocity);
    operator<<<3>((FArchive *)param_1,&(this->MDynamics).Property.MAngularImpulseVelocity);
  }
  piVar3 = &this->MIsland;
  piVar4 = *(int **)param_1->_padding_;
  if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar4 + 1) {
    if ((param_1->_padding_ & 0x10000) == 0) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,piVar3,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)piVar3);
    }
  }
  else {
    *piVar3 = *piVar4;
    *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
  }
  puVar5 = (ulonglong *)param_1->_padding_;
  if (puVar5[1] < *puVar5 + 4) {
    local_res8[0] = 0;
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
    if (1 < local_res8[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
  }
  else {
    *puVar5 = *puVar5 + 4;
  }
  return;
}

// SyncRemoteDataImp @ 1437b2150

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SyncRemoteDataImp
          (TPBDRigidParticle<double,3> *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  EObjectStateType EVar23;
  EResimType EVar24;
  ESleepType EVar25;
  undefined1 uVar26;
  FRigidParticleControlFlags FVar27;
  schar sVar28;
  schar sVar29;
  uint uVar30;
  FParticlePositionRotation *pFVar31;
  FParticleNonFrequentData *this_00;
  FParticleVelocities *pFVar32;
  FKinematicTarget *pFVar33;
  FParticleMassProps *pFVar34;
  FParticleDynamics *pFVar35;
  FParticleDynamicMisc *pFVar36;
  
  uVar30 = (param_3->Flags).Bits;
  if ((uVar30 & 1) != 0) {
    uVar1 = *(undefined8 *)&this->field_0x20;
    uVar3 = *(undefined8 *)&this->field_0x28;
    uVar4 = *(undefined8 *)&this->field_0x30;
    lVar5 = *(longlong *)&this->field_0x38;
    uVar6 = *(undefined8 *)&this->field_0x40;
    uVar7 = *(undefined8 *)&this->field_0x48;
    pFVar31 = TDirtyElementPool<Chaos::FParticlePositionRotation>::GetElement
                        (&param_1->XRPool,param_2);
    *(undefined8 *)&pFVar31->MX = uVar1;
    *(undefined8 *)&(pFVar31->MX).field_0x8 = uVar3;
    *(undefined8 *)&(pFVar31->MX).field_0x10 = uVar4;
    pFVar31->_padding_ = lVar5;
    *(undefined8 *)&pFVar31->MR = uVar6;
    *(undefined8 *)&(pFVar31->MR).field_0x8 = uVar7;
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 0x10) != 0) {
    this_00 = TDirtyElementPool<Chaos::FParticleNonFrequentData>::GetElement
                        (&param_1->NonFrequentDataPool,param_2);
    FParticleNonFrequentData::operator=(this_00,(FParticleNonFrequentData *)&this->field_0x50);
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 2) != 0) {
    uVar3 = *(undefined8 *)&this->field_0xa0;
    uVar4 = *(undefined8 *)&this->field_0xa8;
    uVar1 = *(undefined8 *)&this->field_0xb0;
    pFVar32 = TDirtyElementPool<Chaos::FParticleVelocities>::GetElement
                        (&param_1->VelocitiesPool,param_2);
    *(undefined8 *)&pFVar32->MV = uVar3;
    *(undefined8 *)&(pFVar32->MV).field_0x8 = uVar4;
    *(undefined8 *)&(pFVar32->MW).field_0x4 = uVar1;
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 0x40) != 0) {
    uVar1 = *(undefined8 *)&this->field_0xc0;
    uVar3 = *(undefined8 *)&this->field_0xc8;
    uVar4 = *(undefined8 *)&this->field_0xd0;
    uVar6 = *(undefined8 *)&this->field_0xd8;
    uVar7 = *(undefined8 *)&this->field_0xe0;
    uVar2 = *(undefined4 *)&this->field_0xe8;
    uVar15 = *(undefined4 *)&this->field_0xec;
    pFVar33 = TDirtyElementPool<Chaos::FKinematicTarget>::GetElement
                        (&param_1->KinematicTargetPool,param_2);
    *(undefined8 *)&pFVar33->Rotation = uVar1;
    *(undefined8 *)&(pFVar33->Rotation).field_0x8 = uVar3;
    *(undefined8 *)&pFVar33->Position = uVar4;
    *(undefined8 *)&(pFVar33->Position).field_0x8 = uVar6;
    *(undefined8 *)&(pFVar33->Position).field_0x10 = uVar7;
    pFVar33->Mode = uVar2;
    *(undefined4 *)&pFVar33->field_0x2c = uVar15;
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 0x20) != 0) {
    uVar1 = *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass;
    uVar3 = *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x8;
    uVar4 = *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x10;
    dVar8 = (this->MMassProps).Property.MM;
    uVar6 = *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass;
    uVar7 = *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x8;
    uVar9 = *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x10;
    uVar10 = *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x18;
    uVar11 = *(undefined8 *)&(this->MMassProps).Property.MI;
    uVar12 = *(undefined8 *)&(this->MMassProps).Property.MI.field_0x8;
    uVar13 = *(undefined8 *)&(this->MMassProps).Property.MInvI.field_0x4;
    dVar14 = (this->MMassProps).Property.MInvM;
    pFVar34 = TDirtyElementPool<Chaos::FParticleMassProps>::GetElement
                        (&param_1->MassPropsPool,param_2);
    *(undefined8 *)&pFVar34->MCenterOfMass = uVar1;
    *(undefined8 *)&(pFVar34->MCenterOfMass).field_0x8 = uVar3;
    *(undefined8 *)&(pFVar34->MCenterOfMass).field_0x10 = uVar4;
    pFVar34->MM = dVar8;
    *(undefined8 *)&pFVar34->MRotationOfMass = uVar6;
    *(undefined8 *)&(pFVar34->MRotationOfMass).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar34->MRotationOfMass).field_0x10 = uVar9;
    *(undefined8 *)&(pFVar34->MRotationOfMass).field_0x18 = uVar10;
    *(undefined8 *)&pFVar34->MI = uVar11;
    *(undefined8 *)&(pFVar34->MI).field_0x8 = uVar12;
    *(undefined8 *)&(pFVar34->MInvI).field_0x4 = uVar13;
    pFVar34->MInvM = dVar14;
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 4) != 0) {
    uVar1 = *(undefined8 *)&(this->MDynamics).Property.MAcceleration;
    uVar3 = *(undefined8 *)&(this->MDynamics).Property.MAcceleration.field_0x8;
    uVar4 = *(undefined8 *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4;
    uVar6 = *(undefined8 *)&(this->MDynamics).Property.MLinearImpulseVelocity;
    uVar7 = *(undefined8 *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8;
    uVar9 = *(undefined8 *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4;
    pFVar35 = TDirtyElementPool<Chaos::FParticleDynamics>::GetElement
                        (&param_1->DynamicsPool,param_2);
    *(undefined8 *)&pFVar35->MAcceleration = uVar1;
    *(undefined8 *)&(pFVar35->MAcceleration).field_0x8 = uVar3;
    *(undefined8 *)&(pFVar35->MAngularAcceleration).field_0x4 = uVar4;
    *(undefined8 *)&pFVar35->MLinearImpulseVelocity = uVar6;
    *(undefined8 *)&(pFVar35->MLinearImpulseVelocity).field_0x8 = uVar7;
    *(undefined8 *)&(pFVar35->MAngularImpulseVelocity).field_0x4 = uVar9;
    uVar30 = (param_3->Flags).Bits;
  }
  if ((uVar30 & 8) != 0) {
    fVar16 = (this->MMiscData).Property.MLinearEtherDrag;
    fVar17 = (this->MMiscData).Property.MAngularEtherDrag;
    fVar18 = (this->MMiscData).Property.MMaxLinearSpeedSq;
    fVar19 = (this->MMiscData).Property.MMaxAngularSpeedSq;
    uVar2 = *(undefined4 *)&(this->MMiscData).Property.MIterationSettings.NumProjectionIterations;
    fVar20 = (this->MMiscData).Property.MInitialOverlapDepenetrationVelocity;
    fVar21 = (this->MMiscData).Property.MSleepThresholdMultiplier;
    iVar22 = (this->MMiscData).Property.MCollisionGroup;
    EVar23 = (this->MMiscData).Property.MObjectState;
    EVar24 = (this->MMiscData).Property.MResimType;
    EVar25 = (this->MMiscData).Property.MSleepType;
    uVar26 = (this->MMiscData).Property.field_0x1f;
    uVar30 = (this->MMiscData).Property.MCollisionConstraintFlag;
    FVar27.field0_0x0 = (this->MMiscData).Property.MControlFlags.field0_0x0;
    sVar28 = (this->MMiscData).Property.MIterationSettings.NumPositionIterations;
    sVar29 = (this->MMiscData).Property.MIterationSettings.NumVelocityIterations;
    pFVar36 = TDirtyElementPool<Chaos::FParticleDynamicMisc>::GetElement
                        (&param_1->DynamicMiscPool,param_2);
    pFVar36->MLinearEtherDrag = fVar16;
    pFVar36->MAngularEtherDrag = fVar17;
    pFVar36->MMaxLinearSpeedSq = fVar18;
    pFVar36->MMaxAngularSpeedSq = fVar19;
    pFVar36->MInitialOverlapDepenetrationVelocity = fVar20;
    pFVar36->MSleepThresholdMultiplier = fVar21;
    pFVar36->MCollisionGroup = iVar22;
    pFVar36->MObjectState = EVar23;
    pFVar36->MResimType = EVar24;
    pFVar36->MSleepType = EVar25;
    pFVar36->field_0x1f = uVar26;
    pFVar36->MCollisionConstraintFlag = uVar30;
    pFVar36->MControlFlags = (FRigidParticleControlFlags)FVar27.field0_0x0;
    (pFVar36->MIterationSettings).NumPositionIterations = sVar28;
    (pFVar36->MIterationSettings).NumVelocityIterations = sVar29;
    *(undefined4 *)&(pFVar36->MIterationSettings).NumProjectionIterations = uVar2;
  }
  return;
}

// ~TPBDRigidParticle<double,3> @ 143be2b40

void __thiscall
Chaos::TPBDRigidParticle<double,3>::~TPBDRigidParticle<double,3>(TPBDRigidParticle<double,3> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *pTVar4;
  
  *(undefined ***)this = &___7__TGeometryParticle_N_02_Chaos__6B_;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  pTVar4 = *(TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> **)
            &this->field_0x88;
  if (*(TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> **)
       &this->field_0x88 ==
      (TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *)0x0) {
    pTVar4 = (TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_> *)
             &this->field_0x80;
  }
  DestructItems<TUniquePtr<Chaos::FShapeInstanceProxy,TDefaultDelete<Chaos::FShapeInstanceProxy>_>,int>
            (pTVar4,*(int *)&this->field_0x90);
  if (*(void **)&this->field_0x88 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x70);
  puVar3 = *(undefined8 **)&this->field_0x50;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// Acceleration @ 143bec100

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::Acceleration
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4;
  *(double *)__return_storage_ptr__ = (double)*(float *)&(this->MDynamics).Property.MAcceleration;
  fVar2 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// AddCollisionConstraintFlag @ 143bec240

void __thiscall
Chaos::TPBDRigidParticle<double,3>::AddCollisionConstraintFlag
          (TPBDRigidParticle<double,3> *this,ECollisionConstraintFlags param_1)

{
  uint *puVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  puVar1 = &(this->MMiscData).Property.MCollisionConstraintFlag;
  *puVar1 = *puVar1 | param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// AddForce @ 143bec620

void __thiscall
Chaos::TPBDRigidParticle<double,3>::AddForce
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  IPhysicsProxyBase *pIVar6;
  
  dVar3 = (this->MMassProps).Property.MInvM;
  fVar1 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4;
  dVar4 = *(double *)&param_1->field_0x8;
  pIVar6 = *(IPhysicsProxyBase **)&this->field_0x10;
  dVar5 = *(double *)&param_1->field_0x10;
  fVar2 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8;
  *(float *)&(this->MDynamics).Property.MAcceleration =
       (float)(dVar3 * *(double *)param_1 +
              (double)*(float *)&(this->MDynamics).Property.MAcceleration);
  *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4 =
       (float)(dVar3 * dVar4 + (double)fVar1);
  *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8 =
       (float)(dVar3 * dVar5 + (double)fVar2);
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar6 != (IPhysicsProxyBase *)0x0)) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
    return;
  }
  return;
}

// AddTorque @ 143bedbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TPBDRigidParticle<double,3>::AddTorque
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  IPhysicsProxyBase *pIVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double local_178 [6];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double local_90;
  double local_88;
  
  dVar8 = *(double *)&(this->MMassProps).Property.MRotationOfMass.field_0x10;
  dVar9 = *(double *)&(this->MMassProps).Property.MRotationOfMass.field_0x18;
  dVar4 = (double)*(float *)&this->field_0x44;
  dVar14 = (double)*(float *)&this->field_0x40;
  dVar10 = *(double *)&(this->MMassProps).Property.MRotationOfMass;
  dVar11 = *(double *)&(this->MMassProps).Property.MRotationOfMass.field_0x8;
  dVar6 = (double)(float)*(undefined8 *)&this->field_0x48;
  dVar7 = (double)(float)((ulonglong)*(undefined8 *)&this->field_0x48 >> 0x20);
  auVar12._8_4_ = SUB84(dVar7,0);
  auVar12._0_8_ = dVar7;
  auVar12._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar13._8_4_ = SUB84(dVar6,0);
  auVar13._0_8_ = dVar6;
  auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar5 = dVar14 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar12._8_8_ * dVar11 +
          dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar13._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_178[0] = (double)*(float *)&(this->MMassProps).Property.MInvI;
  local_178[5] = (double)*(float *)&(this->MMassProps).Property.MInvI.field_0x4;
  local_f8._8_4_ = SUB84(dVar5,0);
  local_f8._0_8_ =
       dVar14 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar7 * dVar10 +
       dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_128 = (double)*(float *)&(this->MMassProps).Property.MInvI.field_0x8;
  dVar5 = dVar14 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar7 * dVar9 +
          dVar4 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_108 = ___xmm_3ff00000000000000000000000000000;
  uStack_100 = _UNK_15061cbc8;
  local_178[4] = 0.0;
  local_138 = 0;
  local_178[1] = 0.0;
  local_130 = 0;
  local_178[2] = 0.0;
  local_148 = 0;
  local_178[3] = 0.0;
  local_140 = 0;
  local_120 = 0;
  local_e8._8_4_ = SUB84(dVar5,0);
  local_e8._0_8_ =
       dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar7 * dVar8 +
       dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_e8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_118 = 0;
  uStack_110 = 0;
  Utilities::ComputeWorldSpaceInertia
            ((PMatrix<double,3,3> *)&local_d8,(TRotation<double,3> *)local_f8,
             (PMatrix<double,3,3> *)local_178);
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x8;
  dVar6 = *(double *)&param_1->field_0x10;
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  fVar1 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4;
  fVar2 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8;
  *(float *)&(this->MDynamics).Property.MAngularAcceleration =
       (float)(local_d0 * dVar5 + local_d8 * dVar4 +
              local_c8 * dVar6 + (double)*(float *)&(this->MDynamics).Property.MAngularAcceleration)
  ;
  *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4 =
       (float)(local_b0 * dVar5 + local_b8 * dVar4 + local_a8 * dVar6 + (double)fVar1);
  *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 =
       (float)(local_90 * dVar5 + local_98 * dVar4 + local_88 * dVar6 + (double)fVar2);
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4;
  if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  return;
}

// AngularAcceleration @ 143beea90

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::AngularAcceleration
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4;
  *(double *)__return_storage_ptr__ =
       (double)*(float *)&(this->MDynamics).Property.MAngularAcceleration;
  fVar2 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// AngularEtherDrag @ 143beebd0

double __thiscall
Chaos::TPBDRigidParticle<double,3>::AngularEtherDrag(TPBDRigidParticle<double,3> *this)

{
  return (double)(this->MMiscData).Property.MAngularEtherDrag;
}

// AngularImpulseVelocity @ 143beebf0

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::AngularImpulseVelocity
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4;
  *(double *)__return_storage_ptr__ =
       (double)*(float *)&(this->MDynamics).Property.MAngularImpulseVelocity;
  fVar2 = *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// ApplyDynamicsWeight @ 143beef80

void __thiscall
Chaos::TPBDRigidParticle<double,3>::ApplyDynamicsWeight
          (TPBDRigidParticle<double,3> *this,double param_1)

{
  float fVar1;
  float fVar2;
  
  if ((this->field_0x9c & 4) != 0) {
    fVar1 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4;
    fVar2 = *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8;
    *(float *)&(this->MDynamics).Property.MAcceleration =
         (float)((double)*(float *)&(this->MDynamics).Property.MAcceleration * param_1);
    *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4 = (float)((double)fVar1 * param_1)
    ;
    *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8 = (float)((double)fVar2 * param_1)
    ;
    fVar1 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4;
    fVar2 = *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8;
    *(float *)&(this->MDynamics).Property.MAngularAcceleration =
         (float)((double)*(float *)&(this->MDynamics).Property.MAngularAcceleration * param_1);
    *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4 =
         (float)((double)fVar1 * param_1);
    *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 =
         (float)((double)fVar2 * param_1);
  }
  return;
}

// CCDEnabled @ 143bf1c50

bool __thiscall Chaos::TPBDRigidParticle<double,3>::CCDEnabled(TPBDRigidParticle<double,3> *this)

{
  return (bool)(*(byte *)&(this->MMiscData).Property.MControlFlags.field0_0x0 >> 1 & 1);
}

// Cast @ 143bf3d90

TPBDRigidParticle<double,3> * __cdecl
Chaos::TPBDRigidParticle<double,3>::Cast(TGeometryParticle<double,3> *param_1)

{
  TPBDRigidParticle<double,3> *pTVar1;
  
  pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  if ((param_1 != (TGeometryParticle<double,3> *)0x0) &&
     (pTVar1 = (TPBDRigidParticle<double,3> *)param_1, param_1->Type < Rigid)) {
    pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  }
  return pTVar1;
}

// Cast @ 143bf3db0

TPBDRigidParticle<double,3> * __cdecl
Chaos::TPBDRigidParticle<double,3>::Cast(TGeometryParticle<double,3> *param_1)

{
  TPBDRigidParticle<double,3> *pTVar1;
  
  pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  if ((param_1 != (TGeometryParticle<double,3> *)0x0) &&
     (pTVar1 = (TPBDRigidParticle<double,3> *)param_1, param_1->Type < Rigid)) {
    pTVar1 = (TPBDRigidParticle<double,3> *)0x0;
  }
  return pTVar1;
}

// CenterOfMass @ 143bf3e30

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::CenterOfMass(TPBDRigidParticle<double,3> *this)

{
  return (TVector<double,3> *)&this->MMassProps;
}

// ClearEvents @ 143bf4850

void __thiscall Chaos::TPBDRigidParticle<double,3>::ClearEvents(TPBDRigidParticle<double,3> *this)

{
  this->MWakeEvent = None;
  return;
}

// ClearForces @ 143bf4860

void __thiscall
Chaos::TPBDRigidParticle<double,3>::ClearForces(TPBDRigidParticle<double,3> *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MDynamics).Property.MAcceleration = 0;
  *(undefined4 *)&(this->MDynamics).Property.MAcceleration.field_0x8 = 0;
  if (((param_1) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// ClearTorques @ 143bf4ac0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::ClearTorques(TPBDRigidParticle<double,3> *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MDynamics).Property.MAngularAcceleration = 0;
  *(undefined4 *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 = 0;
  if (((param_1) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// CollisionConstraintFlags @ 143bf4c40

uint __thiscall
Chaos::TPBDRigidParticle<double,3>::CollisionConstraintFlags(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MCollisionConstraintFlag;
}

// CollisionGroup @ 143bf4cd0

int __thiscall Chaos::TPBDRigidParticle<double,3>::CollisionGroup(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MCollisionGroup;
}

// ControlFlags @ 143bfe600

FRigidParticleControlFlags __thiscall
Chaos::TPBDRigidParticle<double,3>::ControlFlags(TPBDRigidParticle<double,3> *this)

{
  FRigidParticleControlFlags_u_0 *in_RDX;
  
  *in_RDX = (this->MMiscData).Property.MControlFlags.field0_0x0;
  return (FRigidParticleControlFlags)SUB82(in_RDX,0);
}

// CreateParticle @ 143c00960

TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
__cdecl Chaos::TPBDRigidParticle<double,3>::CreateParticle(FPBDRigidParticleParameters *param_1)

{
  TPBDRigidParticle<double,3> *pTVar1;
  FPBDRigidParticleParameters *in_RDX;
  
  pTVar1 = ::operator_new(0x1c0);
  if (pTVar1 != (TPBDRigidParticle<double,3> *)0x0) {
    pTVar1 = TPBDRigidParticle<double,3>(pTVar1,in_RDX);
    *(TPBDRigidParticle<double,3> **)param_1 = pTVar1;
    return (TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
            )(TPBDRigidParticle<double,3> *)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TUniquePtr<Chaos::TPBDRigidParticle<double,3>,TDefaultDelete<Chaos::TPBDRigidParticle<double,3>_>_>
          )(TPBDRigidParticle<double,3> *)param_1;
}

// Disabled @ 143c017e0

bool __thiscall Chaos::TPBDRigidParticle<double,3>::Disabled(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.bDisabled;
}

// GetWakeEvent @ 143c08140

EWakeEventEntry __thiscall
Chaos::TPBDRigidParticle<double,3>::GetWakeEvent(TPBDRigidParticle<double,3> *this)

{
  return this->MWakeEvent;
}

// GravityEnabled @ 143c0a210

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::GravityEnabled(TPBDRigidParticle<double,3> *this)

{
  return (bool)(*(byte *)&(this->MMiscData).Property.MControlFlags.field0_0x0 & 1);
}

// GravityGroupIndex @ 143c0a220

int __thiscall
Chaos::TPBDRigidParticle<double,3>::GravityGroupIndex(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MControlFlags.field0_0x0.Bits >> 5 & 7;
}

// GyroscopicTorqueEnabled @ 143c0a2d0

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::GyroscopicTorqueEnabled(TPBDRigidParticle<double,3> *this)

{
  return (bool)((byte)((this->MMiscData).Property.MControlFlags.field0_0x0.Bits >> 0xb) & 1);
}

// I @ 143c0a730

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::I(TPBDRigidParticle<double,3> *this)

{
  return &(this->MMassProps).Property.MI;
}

// InertiaConditioningEnabled @ 143c0a840

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::InertiaConditioningEnabled(TPBDRigidParticle<double,3> *this)

{
  return (bool)(*(byte *)&(this->MMiscData).Property.MControlFlags.field0_0x0 >> 4 & 1);
}

// InitialOverlapDepenetrationVelocity @ 143c0aba0

float __thiscall
Chaos::TPBDRigidParticle<double,3>::InitialOverlapDepenetrationVelocity
          (TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MInitialOverlapDepenetrationVelocity;
}

// InvI @ 143c0ad10

TVector<float,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::InvI(TPBDRigidParticle<double,3> *this)

{
  return &(this->MMassProps).Property.MInvI;
}

// InvM @ 143c0ada0

double __thiscall Chaos::TPBDRigidParticle<double,3>::InvM(TPBDRigidParticle<double,3> *this)

{
  return (this->MMassProps).Property.MInvM;
}

// IsInitialized @ 143c0b340

bool __thiscall Chaos::TPBDRigidParticle<double,3>::IsInitialized(TPBDRigidParticle<double,3> *this)

{
  return this->MInitialized;
}

// Island @ 143c0b580

int __thiscall Chaos::TPBDRigidParticle<double,3>::Island(TPBDRigidParticle<double,3> *this)

{
  return this->MIsland;
}

// IterationSettings @ 143c0b5b0

TIterationSettings<signed_char> __thiscall
Chaos::TPBDRigidParticle<double,3>::IterationSettings(TPBDRigidParticle<double,3> *this)

{
  undefined2 *in_RDX;
  
  *in_RDX = *(undefined2 *)&(this->MMiscData).Property.MIterationSettings;
  *(schar *)(in_RDX + 1) = (this->MMiscData).Property.MIterationSettings.NumProjectionIterations;
  return SUB83(in_RDX,0);
}

// LinearEtherDrag @ 143c0b8e0

double __thiscall
Chaos::TPBDRigidParticle<double,3>::LinearEtherDrag(TPBDRigidParticle<double,3> *this)

{
  return (double)(this->MMiscData).Property.MLinearEtherDrag;
}

// LinearImpulseVelocity @ 143c0b900

TVector<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::LinearImpulseVelocity
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x4;
  *(double *)__return_storage_ptr__ =
       (double)*(float *)&(this->MDynamics).Property.MLinearImpulseVelocity;
  fVar2 = *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8;
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// M @ 143c0c060

double __thiscall Chaos::TPBDRigidParticle<double,3>::M(TPBDRigidParticle<double,3> *this)

{
  return (this->MMassProps).Property.MM;
}

// MACDEnabled @ 143c0c070

bool __thiscall Chaos::TPBDRigidParticle<double,3>::MACDEnabled(TPBDRigidParticle<double,3> *this)

{
  return (bool)((byte)((this->MMiscData).Property.MControlFlags.field0_0x0.Bits >> 9) & 1);
}

// MaxAngularSpeedSq @ 143c0c0c0

double __thiscall
Chaos::TPBDRigidParticle<double,3>::MaxAngularSpeedSq(TPBDRigidParticle<double,3> *this)

{
  return (double)(this->MMiscData).Property.MMaxAngularSpeedSq;
}

// MaxLinearSpeedSq @ 143c0c160

double __thiscall
Chaos::TPBDRigidParticle<double,3>::MaxLinearSpeedSq(TPBDRigidParticle<double,3> *this)

{
  return (double)(this->MMiscData).Property.MMaxLinearSpeedSq;
}

// ObjectState @ 143c0cca0

EObjectStateType __thiscall
Chaos::TPBDRigidParticle<double,3>::ObjectState(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MObjectState;
}

// OneWayInteraction @ 143c0ccc0

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::OneWayInteraction(TPBDRigidParticle<double,3> *this)

{
  return (bool)(*(byte *)&(this->MMiscData).Property.MControlFlags.field0_0x0 >> 2 & 1);
}

// PartialIslandSleepAllowed @ 143c0ee70

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::PartialIslandSleepAllowed(TPBDRigidParticle<double,3> *this)

{
  return (bool)((byte)((this->MMiscData).Property.MControlFlags.field0_0x0.Bits >> 10) & 1);
}

// RemoveCollisionConstraintFlag @ 143c11a00

void __thiscall
Chaos::TPBDRigidParticle<double,3>::RemoveCollisionConstraintFlag
          (TPBDRigidParticle<double,3> *this,ECollisionConstraintFlags param_1)

{
  uint *puVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  puVar1 = &(this->MMiscData).Property.MCollisionConstraintFlag;
  *puVar1 = *puVar1 & ~param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// ResetSmoothedVelocities @ 143c127d0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::ResetSmoothedVelocities(TPBDRigidParticle<double,3> *this)

{
  return;
}

// RotationOfMass @ 143c12d10

TRotation<double,3> * __thiscall
Chaos::TPBDRigidParticle<double,3>::RotationOfMass(TPBDRigidParticle<double,3> *this)

{
  return &(this->MMassProps).Property.MRotationOfMass;
}

// SetAcceleration @ 143c14eb0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetAcceleration
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(float *)&(this->MDynamics).Property.MAcceleration = (float)*(double *)param_1;
  *(float *)&(this->MDynamics).Property.MAcceleration.field_0x4 = (float)dVar1;
  *(float *)&(this->MDynamics).Property.MAcceleration.field_0x8 = (float)dVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    return;
  }
  return;
}

// SetAngularAcceleration @ 143c14fb0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetAngularAcceleration
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(float *)&(this->MDynamics).Property.MAngularAcceleration = (float)*(double *)param_1;
  *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4 = (float)dVar1;
  *(float *)&(this->MDynamics).Property.MAngularAcceleration.field_0x8 = (float)dVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    return;
  }
  return;
}

// SetAngularEtherDrag @ 143c150b0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetAngularEtherDrag
          (TPBDRigidParticle<double,3> *this,double *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MAngularEtherDrag = (float)*param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetAngularImpulseVelocity @ 143c15180

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetAngularImpulseVelocity
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity = (float)*(double *)param_1;
  *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4 = (float)dVar1;
  *(float *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x8 = (float)dVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    return;
  }
  return;
}

// SetCCDEnabled @ 143c15280

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetCCDEnabled(TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfffd;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 * 2;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetCenterOfMass @ 143c15370

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetCenterOfMass
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x8 = uVar2;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x10 =
       *(undefined8 *)&param_1->field_0x10;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetCollisionConstraintFlags @ 143c15460

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetCollisionConstraintFlags
          (TPBDRigidParticle<double,3> *this,uint param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MCollisionConstraintFlag = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetCollisionGroup @ 143c15520

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetCollisionGroup(TPBDRigidParticle<double,3> *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MCollisionGroup = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetControlFlags @ 143c15630

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetControlFlags
          (TPBDRigidParticle<double,3> *this,FRigidParticleControlFlags *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MControlFlags.field0_0x0 = param_1->field0_0x0;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetDisabled @ 143c15850

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetDisabled(TPBDRigidParticle<double,3> *this,bool param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.bDisabled = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetDynamicMisc @ 143c15950

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetDynamicMisc
          (TPBDRigidParticle<double,3> *this,FParticleDynamicMisc *param_1)

{
  IPhysicsProxyBase *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  EObjectStateType EVar6;
  EResimType EVar7;
  ESleepType EVar8;
  undefined1 uVar9;
  FRigidParticleControlFlags FVar10;
  schar sVar11;
  schar sVar12;
  
  fVar2 = param_1->MAngularEtherDrag;
  fVar3 = param_1->MMaxLinearSpeedSq;
  fVar4 = param_1->MMaxAngularSpeedSq;
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MLinearEtherDrag = param_1->MLinearEtherDrag;
  (this->MMiscData).Property.MAngularEtherDrag = fVar2;
  (this->MMiscData).Property.MMaxLinearSpeedSq = fVar3;
  (this->MMiscData).Property.MMaxAngularSpeedSq = fVar4;
  fVar2 = param_1->MSleepThresholdMultiplier;
  iVar5 = param_1->MCollisionGroup;
  EVar6 = param_1->MObjectState;
  EVar7 = param_1->MResimType;
  EVar8 = param_1->MSleepType;
  uVar9 = param_1->field_0x1f;
  (this->MMiscData).Property.MInitialOverlapDepenetrationVelocity =
       param_1->MInitialOverlapDepenetrationVelocity;
  (this->MMiscData).Property.MSleepThresholdMultiplier = fVar2;
  (this->MMiscData).Property.MCollisionGroup = iVar5;
  (this->MMiscData).Property.MObjectState = EVar6;
  (this->MMiscData).Property.MResimType = EVar7;
  (this->MMiscData).Property.MSleepType = EVar8;
  (this->MMiscData).Property.field_0x1f = uVar9;
  FVar10.field0_0x0 = (param_1->MControlFlags).field0_0x0;
  sVar11 = (param_1->MIterationSettings).NumPositionIterations;
  sVar12 = (param_1->MIterationSettings).NumVelocityIterations;
  (this->MMiscData).Property.MCollisionConstraintFlag = param_1->MCollisionConstraintFlag;
  (this->MMiscData).Property.MControlFlags = (FRigidParticleControlFlags)FVar10.field0_0x0;
  (this->MMiscData).Property.MIterationSettings.NumPositionIterations = sVar11;
  (this->MMiscData).Property.MIterationSettings.NumVelocityIterations = sVar12;
  *(undefined4 *)&(this->MMiscData).Property.MIterationSettings.NumProjectionIterations =
       *(undefined4 *)&(param_1->MIterationSettings).NumProjectionIterations;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetDynamics @ 143c159c0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetDynamics
          (TPBDRigidParticle<double,3> *this,FParticleDynamics *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  uVar2 = *(undefined8 *)&(param_1->MAcceleration).field_0x8;
  *(undefined8 *)&(this->MDynamics).Property.MAcceleration = *(undefined8 *)&param_1->MAcceleration;
  *(undefined8 *)&(this->MDynamics).Property.MAcceleration.field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->MLinearImpulseVelocity;
  *(undefined8 *)&(this->MDynamics).Property.MAngularAcceleration.field_0x4 =
       *(undefined8 *)&(param_1->MAngularAcceleration).field_0x4;
  *(undefined8 *)&(this->MDynamics).Property.MLinearImpulseVelocity = uVar2;
  uVar2 = *(undefined8 *)&(param_1->MAngularImpulseVelocity).field_0x4;
  *(undefined8 *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8 =
       *(undefined8 *)&(param_1->MLinearImpulseVelocity).field_0x8;
  *(undefined8 *)&(this->MDynamics).Property.MAngularImpulseVelocity.field_0x4 = uVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetGravityEnabled @ 143c15f80

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetGravityEnabled
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfffe;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetGravityGroupIndex @ 143c15fc0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetGravityGroupIndex
          (TPBDRigidParticle<double,3> *this,int param_1)

{
  ushort uVar1;
  IPhysicsProxyBase *pIVar2;
  code *pcVar3;
  bool bVar4;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  if (7 < param_1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1166656608155992106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\RigidParticleControlFlags.h"
                       ,0x2a,"GravityGroupIndex < 8");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = (this->MMiscData).Property.MControlFlags.field0_0x0.Bits;
  (this->MMiscData).Property.MControlFlags.field0_0x0.Bits =
       ((short)param_1 << 5 ^ uVar1) & 0xe0 ^ uVar1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
  }
  return;
}

// SetGyroscopicTorqueEnabled @ 143c16060

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetGyroscopicTorqueEnabled
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xf7ff;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 0xb;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetI @ 143c161b0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetI
          (TPBDRigidParticle<double,3> *this,TVector<float,3> *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MI = *(undefined8 *)param_1;
  *(undefined4 *)&(this->MMassProps).Property.MI.field_0x8 = *(undefined4 *)&param_1->field_0x8;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetInertiaConditioningEnabled @ 143c165f0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetInertiaConditioningEnabled
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xffef;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 4;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetInitialOverlapDepenetrationVelocity @ 143c16770

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetInitialOverlapDepenetrationVelocity
          (TPBDRigidParticle<double,3> *this,float param_1)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MInitialOverlapDepenetrationVelocity = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 == (IPhysicsProxyBase *)0x0) ||
     (pFVar2 = pIVar1->Solver, pFVar2 == (FPhysicsSolverBase *)0x0)) {
    return;
  }
  if ((pIVar1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((pIVar1->SyncTimestamp).Object)->bDeleted != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyBaseIn->GetMarkedDeleted() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x14b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(pFVar2->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
  return;
}

// SetInitialized @ 143c167a0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetInitialized(TPBDRigidParticle<double,3> *this,bool param_1)

{
  this->MInitialized = param_1;
  return;
}

// SetInvI @ 143c167b0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetInvI
          (TPBDRigidParticle<double,3> *this,TVector<float,3> *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MInvI = *(undefined8 *)param_1;
  *(undefined4 *)&(this->MMassProps).Property.MInvI.field_0x8 = *(undefined4 *)&param_1->field_0x8;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetInvM @ 143c16940

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetInvM
          (TPBDRigidParticle<double,3> *this,double *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMassProps).Property.MInvM = *param_1;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetIsland @ 143c16a90

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetIsland(TPBDRigidParticle<double,3> *this,int param_1)

{
  this->MIsland = param_1;
  return;
}

// SetIterationSettings @ 143c16ab0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetIterationSettings
          (TPBDRigidParticle<double,3> *this,TIterationSettings<signed_char> *param_1)

{
  schar sVar1;
  IPhysicsProxyBase *pIVar2;
  FPhysicsSolverBase *pFVar3;
  code *pcVar4;
  schar sVar5;
  bool bVar6;
  FPlatformRWLock *SRWLock;
  
  sVar5 = param_1->NumVelocityIterations;
  sVar1 = param_1->NumProjectionIterations;
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MIterationSettings.NumPositionIterations =
       param_1->NumPositionIterations;
  (this->MMiscData).Property.MIterationSettings.NumVelocityIterations = sVar5;
  (this->MMiscData).Property.MIterationSettings.NumProjectionIterations = sVar1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 == (IPhysicsProxyBase *)0x0) ||
     (pFVar3 = pIVar2->Solver, pFVar3 == (FPhysicsSolverBase *)0x0)) {
    return;
  }
  if ((pIVar2->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((pIVar2->SyncTimestamp).Object)->bDeleted != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyBaseIn->GetMarkedDeleted() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x14b,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(pFVar3->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Add(&((pFVar3->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar2);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Add(&((pFVar3->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar2);
  return;
}

// SetLinearEtherDrag @ 143c16cc0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetLinearEtherDrag
          (TPBDRigidParticle<double,3> *this,double *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MLinearEtherDrag = (float)*param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetLinearImpulseVelocity @ 143c16d90

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetLinearImpulseVelocity
          (TPBDRigidParticle<double,3> *this,TVector<double,3> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  IPhysicsProxyBase *pIVar3;
  
  dVar1 = *(double *)&param_1->field_0x8;
  dVar2 = *(double *)&param_1->field_0x10;
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity = (float)*(double *)param_1;
  *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x4 = (float)dVar1;
  *(float *)&(this->MDynamics).Property.MLinearImpulseVelocity.field_0x8 = (float)dVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 4,
      pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    return;
  }
  return;
}

// SetM @ 143c16f70

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetM
          (TPBDRigidParticle<double,3> *this,double *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMassProps).Property.MM = *param_1;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetMACDEnabled @ 143c17040

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetMACDEnabled(TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfdff;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 9;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetMassProps @ 143c17090

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetMassProps
          (TPBDRigidParticle<double,3> *this,FParticleMassProps *param_1)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = *(undefined8 *)&(param_1->MCenterOfMass).field_0x8;
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass = *(undefined8 *)&param_1->MCenterOfMass
  ;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x8 = uVar2;
  dVar3 = param_1->MM;
  *(undefined8 *)&(this->MMassProps).Property.MCenterOfMass.field_0x10 =
       *(undefined8 *)&(param_1->MCenterOfMass).field_0x10;
  (this->MMassProps).Property.MM = dVar3;
  uVar2 = *(undefined8 *)&(param_1->MRotationOfMass).field_0x8;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass =
       *(undefined8 *)&param_1->MRotationOfMass;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->MRotationOfMass).field_0x18;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x10 =
       *(undefined8 *)&(param_1->MRotationOfMass).field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->MI).field_0x8;
  *(undefined8 *)&(this->MMassProps).Property.MI = *(undefined8 *)&param_1->MI;
  *(undefined8 *)&(this->MMassProps).Property.MI.field_0x8 = uVar2;
  dVar3 = param_1->MInvM;
  *(undefined8 *)&(this->MMassProps).Property.MInvI.field_0x4 =
       *(undefined8 *)&(param_1->MInvI).field_0x4;
  (this->MMassProps).Property.MInvM = dVar3;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetMaxAngularSpeedSq @ 143c17250

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetMaxAngularSpeedSq
          (TPBDRigidParticle<double,3> *this,double *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MMaxAngularSpeedSq = (float)*param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetMaxLinearSpeedSq @ 143c17320

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetMaxLinearSpeedSq
          (TPBDRigidParticle<double,3> *this,double *param_1)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MMaxLinearSpeedSq = (float)*param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetObjectState @ 143c17e00

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetObjectState
          (TPBDRigidParticle<double,3> *this,EObjectStateType param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  EObjectStateType EVar2;
  IPhysicsProxyBase *pIVar3;
  
  if (param_2) {
    EVar2 = (this->MMiscData).Property.MObjectState;
    if (EVar2 != Dynamic) {
      if ((EVar2 == Sleeping) && (param_1 == Dynamic)) {
        this->MWakeEvent = Awake;
        goto LAB_143c17ef0;
      }
      goto LAB_143c17e51;
    }
    if (param_1 != Sleeping) goto LAB_143c17ef0;
    this->MWakeEvent = Sleep;
  }
  else {
LAB_143c17e51:
    if (param_1 != Sleeping) goto LAB_143c17ef0;
  }
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  puVar1 = &this->field_0x9c;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  if (((param_3) && (*(uint *)puVar1 = *(uint *)puVar1 | 2, pIVar3 != (IPhysicsProxyBase *)0x0)) &&
     (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
    *(undefined8 *)&this->field_0xac = 0;
    *(undefined4 *)&this->field_0xb4 = 0;
LAB_143c17ecd:
    *(uint *)puVar1 = *(uint *)puVar1 | 2;
    if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
    }
  }
  else {
    pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
    *(undefined8 *)&this->field_0xac = 0;
    *(undefined4 *)&this->field_0xb4 = 0;
    if (param_3) goto LAB_143c17ecd;
  }
  *(uint *)puVar1 = *(uint *)puVar1 & 0xfffffffb;
LAB_143c17ef0:
  pIVar3 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MObjectState = param_1;
  if (((param_3) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8,
      pIVar3 != (IPhysicsProxyBase *)0x0)) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
  }
  return;
}

// SetOneWayInteraction @ 143c17f80

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetOneWayInteraction
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfffb;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 2;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetPartialIslandSleepAllowed @ 143c18120

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetPartialIslandSleepAllowed
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfbff;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 10;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetPositionSolverIterations @ 143c182a0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetPositionSolverIterations
          (TPBDRigidParticle<double,3> *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  schar sVar2;
  int iVar3;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  iVar3 = 0x7f;
  if (param_1 < 0x7f) {
    iVar3 = param_1;
  }
  sVar2 = -1;
  if (-1 < iVar3) {
    sVar2 = (schar)iVar3;
  }
  (this->MMiscData).Property.MIterationSettings.NumPositionIterations = sVar2;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetProjectionSolverIterations @ 143c18670

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetProjectionSolverIterations
          (TPBDRigidParticle<double,3> *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  schar sVar2;
  int iVar3;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  iVar3 = 0x7f;
  if (param_1 < 0x7f) {
    iVar3 = param_1;
  }
  sVar2 = -1;
  if (-1 < iVar3) {
    sVar2 = (schar)iVar3;
  }
  (this->MMiscData).Property.MIterationSettings.NumProjectionIterations = sVar2;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetRotationOfMass @ 143c18980

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetRotationOfMass
          (TPBDRigidParticle<double,3> *this,TRotation<double,3> *param_1,bool param_2)

{
  IPhysicsProxyBase *pIVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass = *(undefined8 *)param_1;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x10 =
       *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->MMassProps).Property.MRotationOfMass.field_0x18 = uVar2;
  if (((param_2) &&
      (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 0x20,
      pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SetSleepThresholdMultiplier @ 143c19570

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetSleepThresholdMultiplier
          (TPBDRigidParticle<double,3> *this,float param_1)

{
  IPhysicsProxyBase *pIVar1;
  FPhysicsSolverBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPlatformRWLock *SRWLock;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MSleepThresholdMultiplier = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 == (IPhysicsProxyBase *)0x0) ||
     (pFVar2 = pIVar1->Solver, pFVar2 == (FPhysicsSolverBase *)0x0)) {
    return;
  }
  if ((pIVar1->SyncTimestamp).Object == (FProxyTimestampBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((pIVar1->SyncTimestamp).Object)->bDeleted != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProxyBaseIn->GetMarkedDeleted() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                       ,0x14b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SRWLock = (FPlatformRWLock *)0x0;
  if (CVars::bEnableAsyncInitBody != false) {
    SRWLock = &(pFVar2->MarshallingManager).MarshallingManagerLock;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
                    /* WARNING: Could not recover jumptable at 0x00014375094a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    return;
  }
  FDirtySet::Add(&((pFVar2->MarshallingManager).ProducerData)->DirtyProxiesDataBuffer,pIVar1);
  return;
}

// SetSleepType @ 143c195a0

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetSleepType
          (TPBDRigidParticle<double,3> *this,ESleepType param_1,bool param_2,bool param_3)

{
  IPhysicsProxyBase *pIVar1;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  (this->MMiscData).Property.MSleepType = param_1;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
  }
  if ((param_1 == NeverSleep) && ((this->MMiscData).Property.MObjectState == Sleeping)) {
    if (param_2) {
      this->MWakeEvent = Awake;
    }
    pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
    (this->MMiscData).Property.MObjectState = Dynamic;
    if (((param_3) &&
        (*(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8,
        pIVar1 != (IPhysicsProxyBase *)0x0)) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    }
  }
  return;
}

// SetUpdateKinematicFromSimulation @ 143c19a50

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetUpdateKinematicFromSimulation
          (TPBDRigidParticle<double,3> *this,bool param_1)

{
  FRigidParticleControlFlags *pFVar1;
  IPhysicsProxyBase *pIVar2;
  
  pIVar2 = *(IPhysicsProxyBase **)&this->field_0x10;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits & 0xfeff;
  pFVar1 = &(this->MMiscData).Property.MControlFlags;
  (pFVar1->field0_0x0).Bits = (pFVar1->field0_0x0).Bits | (ushort)param_1 << 8;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar2 != (IPhysicsProxyBase *)0x0) && (pIVar2->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar2->Solver,pIVar2);
    return;
  }
  return;
}

// SetVelocitySolverIterations @ 143c19d80

void __thiscall
Chaos::TPBDRigidParticle<double,3>::SetVelocitySolverIterations
          (TPBDRigidParticle<double,3> *this,int param_1)

{
  IPhysicsProxyBase *pIVar1;
  schar sVar2;
  int iVar3;
  
  pIVar1 = *(IPhysicsProxyBase **)&this->field_0x10;
  iVar3 = 0x7f;
  if (param_1 < 0x7f) {
    iVar3 = param_1;
  }
  sVar2 = -1;
  if (-1 < iVar3) {
    sVar2 = (schar)iVar3;
  }
  (this->MMiscData).Property.MIterationSettings.NumVelocityIterations = sVar2;
  *(uint *)&this->field_0x9c = *(uint *)&this->field_0x9c | 8;
  if ((pIVar1 != (IPhysicsProxyBase *)0x0) && (pIVar1->Solver != (FPhysicsSolverBase *)0x0)) {
    FPhysicsSolverBase::AddDirtyProxy(pIVar1->Solver,pIVar1);
    return;
  }
  return;
}

// SleepThresholdMultiplier @ 143c1a720

float __thiscall
Chaos::TPBDRigidParticle<double,3>::SleepThresholdMultiplier(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MSleepThresholdMultiplier;
}

// SleepType @ 143c1a730

ESleepType __thiscall
Chaos::TPBDRigidParticle<double,3>::SleepType(TPBDRigidParticle<double,3> *this)

{
  return (this->MMiscData).Property.MSleepType;
}

// UpdateKinematicFromSimulation @ 143c1cac0

bool __thiscall
Chaos::TPBDRigidParticle<double,3>::UpdateKinematicFromSimulation(TPBDRigidParticle<double,3> *this)

{
  return (bool)(*(byte *)((longlong)&(this->MMiscData).Property.MControlFlags.field0_0x0 + 1) & 1);
}

