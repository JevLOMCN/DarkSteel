// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FJointHandle @ 14824efa0

FJointHandle * __thiscall
ImmediatePhysics_Chaos::FJointHandle::FJointHandle
          (FJointHandle *this,FPBDJointConstraints *param_1,FJointSetup *param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar1 = &local_18;
  local_18 = 0;
  uStack_10 = 0;
  do {
    *(undefined8 *)(((longlong)this - (longlong)&local_18) + (longlong)puVar1) = *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined8 *)&stack0xfffffffffffffff8);
  this->Constraints = (FPBDJointConstraints *)0x0;
  CreateJoint(this,param_1,&param_2->ConstraintSettings,param_2->Actor1,param_2->Actor2);
  return this;
}

// FJointHandle @ 14824f020

FJointHandle * __thiscall
ImmediatePhysics_Chaos::FJointHandle::FJointHandle
          (FJointHandle *this,FPBDJointConstraints *param_1,FPBDJointSettings *param_2,
          FActorHandle *param_3,FActorHandle *param_4)

{
  undefined8 *puVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar1 = &local_18;
  local_18 = 0;
  uStack_10 = 0;
  do {
    *(undefined8 *)(((longlong)this - (longlong)&local_18) + (longlong)puVar1) = *puVar1;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined8 *)&stack0xfffffffffffffff8);
  this->Constraints = (FPBDJointConstraints *)0x0;
  CreateJoint(this,param_1,param_2,param_3,param_4);
  return this;
}

// FJointHandle @ 14824f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FJointHandle * __thiscall
ImmediatePhysics_Chaos::FJointHandle::FJointHandle
          (FJointHandle *this,FPBDJointConstraints *param_1,FConstraintInstance *param_2,
          FActorHandle *param_3,FActorHandle *param_4)

{
  undefined8 *puVar1;
  undefined1 auStackY_398 [32];
  undefined8 local_368;
  undefined8 uStack_360;
  FJointSetup local_358;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_398;
  puVar1 = &local_368;
  local_368 = 0;
  uStack_360 = 0;
  do {
    *(undefined8 *)((longlong)puVar1 + ((longlong)this - (longlong)&local_368)) = *puVar1;
    puVar1 = puVar1 + 1;
  } while ((FJointSetup *)puVar1 != &local_358);
  this->Constraints = (FPBDJointConstraints *)0x0;
  ImmediatePhysics::MakeJointSetup(&local_358,param_2,param_3,param_4);
  CreateJoint(this,param_1,&local_358.ConstraintSettings,local_358.Actor1,local_358.Actor2);
  return this;
}

// ~FJointHandle @ 148252ac0

void __thiscall ImmediatePhysics_Chaos::FJointHandle::~FJointHandle(FJointHandle *this)

{
  Chaos::FPBDJointConstraintHandle::SetConstraintEnabled(this->ConstraintHandle,false);
  Chaos::FPBDJointConstraints::RemoveConstraint
            ((FPBDJointConstraints *)this->ConstraintHandle->_padding_,
             (int)this->ConstraintHandle->_padding_);
  return;
}

// CreateJoint @ 148275200

/* WARNING: Type propagation algorithm not settling */

void __thiscall
ImmediatePhysics_Chaos::FJointHandle::CreateJoint
          (FJointHandle *this,FPBDJointConstraints *param_1,FPBDJointSettings *param_2,
          FActorHandle *param_3,FActorHandle *param_4)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  FPBDJointConstraintHandle *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TGeometryParticleHandleImp<double,3,1> *local_28;
  TGeometryParticleHandleImp<double,3,1> *local_20;
  undefined8 local_18 [2];
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->Constraints = param_1;
  (this->ActorHandles).V[0] = param_3;
  (this->ActorHandles).V[1] = param_4;
  local_28 = param_3->ParticleHandle;
  local_20 = param_4->ParticleHandle;
  pTVar1 = this_01;
  do {
    *(undefined8 *)(&stack0x00000000 + (longlong)&pTVar1[-1]._padding_) =
         *(undefined8 *)((longlong)&local_28 + (longlong)pTVar1);
    pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar1->_padding_;
  } while ((undefined8 *)((longlong)&local_28 + (longlong)pTVar1) != local_18);
  pFVar2 = Chaos::FPBDJointConstraints::AddConstraint
                     (param_1,(TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_18
                      ,param_2);
  this->ConstraintHandle = pFVar2;
  pTVar1 = (this->ActorHandles).V[0]->ParticleHandle;
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    this_00 = this_01;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      this_00 = pTVar1;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    }
  }
  pTVar1 = (this->ActorHandles).V[1]->ParticleHandle;
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      this_01 = pTVar1;
    }
    if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
    }
  }
  return;
}

// GetActorHandles @ 148283c20

TVector<ImmediatePhysics_Chaos::FActorHandle_*,2> * __thiscall
ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(FJointHandle *this)

{
  return &this->ActorHandles;
}

// GetActorHandles @ 148283c30

TVector<ImmediatePhysics_Chaos::FActorHandle_const_*,2> * __thiscall
ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(FJointHandle *this)

{
  return (TVector<ImmediatePhysics_Chaos::FActorHandle_const_*,2> *)this;
}

// GetConstraint @ 1482867a0

FPBDJointConstraintHandle * __thiscall
ImmediatePhysics_Chaos::FJointHandle::GetConstraint(FJointHandle *this)

{
  return this->ConstraintHandle;
}

// GetConstraint @ 1482867b0

FPBDJointConstraintHandle * __thiscall
ImmediatePhysics_Chaos::FJointHandle::GetConstraint(FJointHandle *this)

{
  return this->ConstraintHandle;
}

// SetActorInertiaConditioningDirty @ 1482a93a0

void __thiscall
ImmediatePhysics_Chaos::FJointHandle::SetActorInertiaConditioningDirty(FJointHandle *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pTVar1 = (this->ActorHandles).V[0]->ParticleHandle;
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
    }
  }
  pTVar1 = (this->ActorHandles).V[1]->ParticleHandle;
  if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar1->_padding_ + 4)) {
      pTVar2 = pTVar1;
    }
    if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
    }
  }
  return;
}

// SetSoftLinearSettings @ 1482aea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
ImmediatePhysics_Chaos::FJointHandle::SetSoftLinearSettings
          (FJointHandle *this,bool param_1,double param_2,double param_3)

{
  undefined8 uVar1;
  FPBDJointSettings *pFVar2;
  FPBDJointSettings *pFVar3;
  FPBDJointSettings *pFVar4;
  FPBDJointSettings *pFVar5;
  longlong lVar6;
  undefined1 auStack_388 [32];
  FPBDJointSettings local_368;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  pFVar3 = Chaos::FPBDJointConstraintHandle::GetSettings(this->ConstraintHandle);
  lVar6 = 6;
  pFVar2 = &local_368;
  do {
    pFVar5 = pFVar2;
    pFVar4 = pFVar3;
    pFVar2 = (FPBDJointSettings *)&(pFVar5->ConnectorTransforms).V[1].field_0x20;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x8;
    pFVar3 = (FPBDJointSettings *)&(pFVar4->ConnectorTransforms).V[1].field_0x20;
    *(undefined8 *)(pFVar5->ConnectorTransforms).V = *(undefined8 *)(pFVar4->ConnectorTransforms).V;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x18;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x10 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x10;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x28;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x20 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x20;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x38;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x30 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x30;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x48;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x40 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x40;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x58;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x50 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[0].field_0x50;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[0].field_0x58 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x8;
    *(undefined8 *)((pFVar5->ConnectorTransforms).V + 1) =
         *(undefined8 *)((pFVar4->ConnectorTransforms).V + 1);
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x18;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x10 =
         *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x10;
    *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x18 = uVar1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x28;
  *(undefined8 *)pFVar2 = *(undefined8 *)pFVar3;
  *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x38;
  *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x30 =
       *(undefined8 *)&(pFVar4->ConnectorTransforms).V[1].field_0x30;
  *(undefined8 *)&(pFVar5->ConnectorTransforms).V[1].field_0x38 = uVar1;
  local_368.SoftLinearStiffness = param_2;
  local_368.SoftLinearDamping = param_3;
  if (!param_1) {
    local_368.SoftLinearStiffness = 0.0;
    local_368.SoftLinearDamping = 0.0;
  }
  local_368.bSoftLinearLimitsEnabled = param_1;
  Chaos::FPBDJointConstraintHandle::SetSettings(this->ConstraintHandle,&local_368);
  return;
}

