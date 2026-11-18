// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// FCharacterGroundConstraintProxy @ 1440cab10

FCharacterGroundConstraintProxy * __thiscall
Chaos::FCharacterGroundConstraintProxy::FCharacterGroundConstraintProxy
          (FCharacterGroundConstraintProxy *this,FCharacterGroundConstraint *param_1,
          FCharacterGroundConstraintHandle *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCharacterGroundConstraintProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar6 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5 = pTVar3 + 1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_UFProxyTimestampBase___00_SharedPointerInternals__6B_;
    *(undefined1 *)&pTVar3[1]._padding_ = 0;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCharacterGroundConstraintProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    paVar6 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pTVar5;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 10;
  this->_padding_ = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->Constraint_GT = param_1;
  this->_padding_ = (longlong)&___7FCharacterGroundConstraintProxy_Chaos__6B_;
  this->Constraint_PT = param_2;
  this->bInitialized = false;
  if (param_1 == (FCharacterGroundConstraint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint_GT != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\CharacterGroundConstraintProxy.cpp"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCharacterGroundConstraintProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  FConstraintBase::SetProxy((FConstraintBase *)this->Constraint_GT,(IPhysicsProxyBase *)this);
  return this;
}

// BufferPhysicsResults @ 1440d4030

void __thiscall
Chaos::FCharacterGroundConstraintProxy::BufferPhysicsResults
          (FCharacterGroundConstraintProxy *this,FDirtyCharacterGroundConstraintData *param_1)

{
  byte bVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  bool *pbVar8;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong local_18;
  FSharedReferencer<1> local_10;
  
  if ((param_1->_padding_ != 0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9196663456307085286>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PullPhysicsDataImp.h"
                         ,0x1a,"Timestamp.Get() == nullptr"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_10.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  local_18 = this->_padding_;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&param_1->_padding_ != &local_18) {
    param_1->_padding_ = local_18;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1->_padding_,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  param_1->_padding_ = (longlong)this;
  pFVar2 = this->Constraint_PT;
  if (((pFVar2 != (FCharacterGroundConstraintHandle *)0x0) && (pFVar2->_padding_ != 0)) &&
     (pFVar2->bDisabled == false)) {
    dVar5 = *(double *)&(pFVar2->SolverAppliedForce).field_0x8;
    (param_1->Force).field0_0x0._s_0.X = *(double *)&pFVar2->SolverAppliedForce;
    (param_1->Force).field0_0x0._s_0.Y = dVar5;
    (param_1->Force).field0_0x0._s_0.Z = *(double *)&(pFVar2->SolverAppliedForce).field_0x10;
    pFVar2 = this->Constraint_PT;
    dVar5 = *(double *)&(pFVar2->SolverAppliedTorque).field_0x8;
    (param_1->Torque).field0_0x0._s_0.X = *(double *)&pFVar2->SolverAppliedTorque;
    (param_1->Torque).field0_0x0._s_0.Y = dVar5;
    (param_1->Torque).field0_0x0._s_0.Z = *(double *)&(pFVar2->SolverAppliedTorque).field_0x10;
    bVar1 = this->Constraint_PT->DirtyFlags;
    param_1->bSettingsChanged = (bVar1 >> 1 & 1) != 0;
    if ((bVar1 >> 1 & 1) != 0) {
      pFVar2 = this->Constraint_PT;
      uVar6 = *(undefined8 *)&(pFVar2->Settings).VerticalAxis.field_0x8;
      *(undefined8 *)&(param_1->Settings).VerticalAxis =
           *(undefined8 *)&(pFVar2->Settings).VerticalAxis;
      *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x8 = uVar6;
      dVar5 = (pFVar2->Settings).TargetHeight;
      *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x10 =
           *(undefined8 *)&(pFVar2->Settings).VerticalAxis.field_0x10;
      (param_1->Settings).TargetHeight = dVar5;
      dVar5 = (pFVar2->Settings).FrictionForceLimit;
      (param_1->Settings).RadialForceLimit = (pFVar2->Settings).RadialForceLimit;
      (param_1->Settings).FrictionForceLimit = dVar5;
      dVar5 = (pFVar2->Settings).SwingTorqueLimit;
      (param_1->Settings).TwistTorqueLimit = (pFVar2->Settings).TwistTorqueLimit;
      (param_1->Settings).SwingTorqueLimit = dVar5;
      dVar5 = (pFVar2->Settings).DampingFactor;
      (param_1->Settings).CosMaxWalkableSlopeAngle = (pFVar2->Settings).CosMaxWalkableSlopeAngle;
      (param_1->Settings).DampingFactor = dVar5;
      dVar5 = (pFVar2->Settings).MotionTargetMassBias;
      (param_1->Settings).AssumedOnGroundHeight = (pFVar2->Settings).AssumedOnGroundHeight;
      (param_1->Settings).MotionTargetMassBias = dVar5;
      dVar5 = (pFVar2->Settings).MaxCharacterGroundMassRatio;
      (param_1->Settings).RadialForceMotionTargetScaling =
           (pFVar2->Settings).RadialForceMotionTargetScaling;
      (param_1->Settings).MaxCharacterGroundMassRatio = dVar5;
      (param_1->Settings).UserData = (pFVar2->Settings).UserData;
    }
    bVar1 = this->Constraint_PT->DirtyFlags;
    param_1->bDataChanged = (bVar1 >> 2 & 1) != 0;
    if ((bVar1 >> 2 & 1) != 0) {
      pFVar2 = this->Constraint_PT;
      uVar6 = *(undefined8 *)&(pFVar2->Data).GroundNormal.field_0x8;
      *(undefined8 *)&(param_1->Data).GroundNormal = *(undefined8 *)&(pFVar2->Data).GroundNormal;
      *(undefined8 *)&(param_1->Data).GroundNormal.field_0x8 = uVar6;
      uVar6 = *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition;
      *(undefined8 *)&(param_1->Data).GroundNormal.field_0x10 =
           *(undefined8 *)&(pFVar2->Data).GroundNormal.field_0x10;
      *(undefined8 *)&(param_1->Data).TargetDeltaPosition = uVar6;
      uVar6 = *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition.field_0x10;
      *(undefined8 *)&(param_1->Data).TargetDeltaPosition.field_0x8 =
           *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition.field_0x8;
      *(undefined8 *)&(param_1->Data).TargetDeltaPosition.field_0x10 = uVar6;
      dVar5 = (pFVar2->Data).GroundDistance;
      (param_1->Data).TargetDeltaFacing = (pFVar2->Data).TargetDeltaFacing;
      (param_1->Data).GroundDistance = dVar5;
      (param_1->Data).CosMaxWalkableSlopeAngle = (pFVar2->Data).CosMaxWalkableSlopeAngle;
    }
    param_1->GroundParticle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    bVar7 = (bool)(this->Constraint_PT->DirtyFlags & 1);
    param_1->bGroundParticleChanged = bVar7;
    if ((bVar7 != false) &&
       (pTVar3 = this->Constraint_PT->GroundParticle,
       pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
      this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
        this_00 = pTVar3;
      }
      if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar8 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), *pbVar8 == false))
      {
        param_1->GroundParticle = pTVar3;
      }
    }
    this->Constraint_PT->DirtyFlags = '\0';
  }
  return;
}

// DestroyOnGameThread @ 1440db270

void __thiscall
Chaos::FCharacterGroundConstraintProxy::DestroyOnGameThread(FCharacterGroundConstraintProxy *this)

{
  FCharacterGroundConstraint *pFVar1;
  
  pFVar1 = this->Constraint_GT;
  if (pFVar1 != (FCharacterGroundConstraint *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    this->Constraint_GT = (FCharacterGroundConstraint *)0x0;
  }
  return;
}

// DestroyOnPhysicsThread @ 1440db300

void __thiscall
Chaos::FCharacterGroundConstraintProxy::DestroyOnPhysicsThread
          (FCharacterGroundConstraintProxy *this,FPBDRigidsSolver *param_1)

{
  FCharacterGroundConstraintHandle **ppFVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  
  pFVar2 = this->Constraint_PT;
  ppFVar1 = &this->Constraint_PT;
  if (pFVar2 != (FCharacterGroundConstraintHandle *)0x0) {
    pTVar3 = pFVar2->CharacterParticle;
    if (pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int *)&pTVar3->_padding_,
                 (FConstraintHandle *)pFVar2);
    }
    pTVar3 = (*ppFVar1)->GroundParticle;
    if (pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,(int *)&pTVar3->_padding_,
                 (FConstraintHandle *)*ppFVar1);
    }
    if ((FPBDIslandConstraint *)(*ppFVar1)->_padding_ != (FPBDIslandConstraint *)0x0) {
      Chaos::Private::FPBDIslandManager::RemoveConstraint
                ((FPBDIslandManager *)&((param_1->MEvolution).Ptr)->_padding_,
                 (FConstraintHandle *)*ppFVar1);
    }
    FCharacterGroundConstraintContainer::RemoveConstraint
              (&((param_1->MEvolution).Ptr)->CharacterGroundConstraints,*ppFVar1);
    this->Constraint_PT = (FCharacterGroundConstraintHandle *)0x0;
  }
  return;
}

// GetHandleUnsafe @ 1440e4ed0

void * __thiscall
Chaos::FCharacterGroundConstraintProxy::GetHandleUnsafe(FCharacterGroundConstraintProxy *this)

{
  return this->Constraint_PT;
}

// InitializeOnPhysicsThread @ 1440e6650

void __thiscall
Chaos::FCharacterGroundConstraintProxy::InitializeOnPhysicsThread
          (FCharacterGroundConstraintProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  FPBDRigidsEvolutionGBF *pFVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  FParticleProxyProperty *pFVar3;
  FCharacterGroundConstraintSettings *pFVar4;
  FCharacterGroundConstraintDynamicData *pFVar5;
  FCharacterGroundConstraintHandle *pFVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  
  if ((int)(param_1->Particles).ParticleHandles._padding_ != 0) {
    pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    pFVar1 = (param_1->MEvolution).Ptr;
    pTVar9 = pTVar7;
    if ((((((param_4->Flags).Bits & 0x10000U) != 0) &&
         (pFVar3 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                             (&param_2->CharacterParticleProxyPool,param_3), pTVar9 = pTVar8,
         pFVar3 != (FParticleProxyProperty *)0x0)) &&
        (pFVar2 = pFVar3->ParticleProxy, pFVar2 != (FSingleParticlePhysicsProxy *)0x0)) &&
       (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0xb)) {
      pTVar9 = pFVar2->Handle;
    }
    if (((((param_4->Flags).Bits & 0x20000U) != 0) &&
        (pFVar3 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                            (&param_2->GroundParticleProxyPool,param_3),
        pFVar3 != (FParticleProxyProperty *)0x0)) &&
       ((pFVar2 = pFVar3->ParticleProxy, pFVar2 != (FSingleParticlePhysicsProxy *)0x0 &&
        (pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0,
        *(int *)((longlong)&pFVar2->_padding_ + 4) == 0xb)))) {
      pTVar7 = pFVar2->Handle;
    }
    if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pFVar4 = FDirtyChaosProperties::FindCharacterGroundConstraintSettings(param_4,param_2,param_3)
      ;
      pFVar5 = FDirtyChaosProperties::FindCharacterGroundConstraintDynamicData
                         (param_4,param_2,param_3);
      if ((pFVar4 != (FCharacterGroundConstraintSettings *)0x0) &&
         (pFVar5 != (FCharacterGroundConstraintDynamicData *)0x0)) {
        pFVar6 = FCharacterGroundConstraintContainer::AddConstraint
                           (&pFVar1->CharacterGroundConstraints,pFVar4,pFVar5,pTVar9,pTVar7);
        this->Constraint_PT = pFVar6;
      }
    }
  }
  return;
}

// PullFromPhysicsState @ 1440e9150

bool __thiscall
Chaos::FCharacterGroundConstraintProxy::PullFromPhysicsState
          (FCharacterGroundConstraintProxy *this,FDirtyCharacterGroundConstraintData *param_1,
          int param_2)

{
  FCharacterGroundConstraint *pFVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (this->Constraint_GT != (FCharacterGroundConstraint *)0x0) {
    bVar4 = FConstraintBase::IsValid((FConstraintBase *)this->Constraint_GT);
    if (bVar4) {
      pFVar1 = this->Constraint_GT;
      dVar2 = (param_1->Force).field0_0x0._s_0.Y;
      (pFVar1->SolverAppliedForce).field0_0x0._s_0.X = (param_1->Force).field0_0x0._s_0.X;
      (pFVar1->SolverAppliedForce).field0_0x0._s_0.Y = dVar2;
      (pFVar1->SolverAppliedForce).field0_0x0._s_0.Z = (param_1->Force).field0_0x0._s_0.Z;
      pFVar1 = this->Constraint_GT;
      dVar2 = (param_1->Torque).field0_0x0._s_0.Y;
      (pFVar1->SolverAppliedTorque).field0_0x0._s_0.X = (param_1->Torque).field0_0x0._s_0.X;
      (pFVar1->SolverAppliedTorque).field0_0x0._s_0.Y = dVar2;
      (pFVar1->SolverAppliedTorque).field0_0x0._s_0.Z = (param_1->Torque).field0_0x0._s_0.Z;
      if (param_1->bDataChanged != false) {
        uVar3 = *(undefined8 *)&(param_1->Data).GroundNormal.field_0x8;
        pFVar1 = this->Constraint_GT;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.GroundNormal =
             *(undefined8 *)&(param_1->Data).GroundNormal;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.GroundNormal.field_0x8 = uVar3;
        uVar3 = *(undefined8 *)&(param_1->Data).TargetDeltaPosition;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.GroundNormal.field_0x10 =
             *(undefined8 *)&(param_1->Data).GroundNormal.field_0x10;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.TargetDeltaPosition = uVar3;
        uVar3 = *(undefined8 *)&(param_1->Data).TargetDeltaPosition.field_0x10;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.TargetDeltaPosition.field_0x8 =
             *(undefined8 *)&(param_1->Data).TargetDeltaPosition.field_0x8;
        *(undefined8 *)&(pFVar1->ConstraintData).Property.TargetDeltaPosition.field_0x10 = uVar3;
        dVar2 = (param_1->Data).GroundDistance;
        (pFVar1->ConstraintData).Property.TargetDeltaFacing = (param_1->Data).TargetDeltaFacing;
        (pFVar1->ConstraintData).Property.GroundDistance = dVar2;
        (pFVar1->ConstraintData).Property.CosMaxWalkableSlopeAngle =
             (param_1->Data).CosMaxWalkableSlopeAngle;
      }
      if (param_1->bSettingsChanged != false) {
        uVar3 = *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x8;
        pFVar1 = this->Constraint_GT;
        *(undefined8 *)&(pFVar1->ConstraintSettings).Property.VerticalAxis =
             *(undefined8 *)&(param_1->Settings).VerticalAxis;
        *(undefined8 *)&(pFVar1->ConstraintSettings).Property.VerticalAxis.field_0x8 = uVar3;
        dVar2 = (param_1->Settings).TargetHeight;
        *(undefined8 *)&(pFVar1->ConstraintSettings).Property.VerticalAxis.field_0x10 =
             *(undefined8 *)&(param_1->Settings).VerticalAxis.field_0x10;
        (pFVar1->ConstraintSettings).Property.TargetHeight = dVar2;
        dVar2 = (param_1->Settings).FrictionForceLimit;
        (pFVar1->ConstraintSettings).Property.RadialForceLimit =
             (param_1->Settings).RadialForceLimit;
        (pFVar1->ConstraintSettings).Property.FrictionForceLimit = dVar2;
        dVar2 = (param_1->Settings).SwingTorqueLimit;
        (pFVar1->ConstraintSettings).Property.TwistTorqueLimit =
             (param_1->Settings).TwistTorqueLimit;
        (pFVar1->ConstraintSettings).Property.SwingTorqueLimit = dVar2;
        dVar2 = (param_1->Settings).DampingFactor;
        (pFVar1->ConstraintSettings).Property.CosMaxWalkableSlopeAngle =
             (param_1->Settings).CosMaxWalkableSlopeAngle;
        (pFVar1->ConstraintSettings).Property.DampingFactor = dVar2;
        dVar2 = (param_1->Settings).MotionTargetMassBias;
        (pFVar1->ConstraintSettings).Property.AssumedOnGroundHeight =
             (param_1->Settings).AssumedOnGroundHeight;
        (pFVar1->ConstraintSettings).Property.MotionTargetMassBias = dVar2;
        dVar2 = (param_1->Settings).MaxCharacterGroundMassRatio;
        (pFVar1->ConstraintSettings).Property.RadialForceMotionTargetScaling =
             (param_1->Settings).RadialForceMotionTargetScaling;
        (pFVar1->ConstraintSettings).Property.MaxCharacterGroundMassRatio = dVar2;
        (pFVar1->ConstraintSettings).Property.UserData = (param_1->Settings).UserData;
      }
    }
  }
  return true;
}

// PushStateOnGameThread @ 1440ec900

void __thiscall
Chaos::FCharacterGroundConstraintProxy::PushStateOnGameThread
          (FCharacterGroundConstraintProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  FCharacterGroundConstraint *pFVar1;
  bool bVar2;
  
  if (this->Constraint_GT != (FCharacterGroundConstraint *)0x0) {
    bVar2 = FConstraintBase::IsValid((FConstraintBase *)this->Constraint_GT);
    if (bVar2) {
      pFVar1 = this->Constraint_GT;
      (param_3->Flags).Bits = (int)pFVar1->_padding_;
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1,param_1,param_2,param_3);
      *(undefined4 *)&pFVar1->_padding_ = 0;
    }
  }
  return;
}

// PushStateOnPhysicsThread @ 1440eca50

void __thiscall
Chaos::FCharacterGroundConstraintProxy::PushStateOnPhysicsThread
          (FCharacterGroundConstraintProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  uchar *puVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  FSingleParticlePhysicsProxy *pFVar3;
  undefined8 uVar4;
  double dVar5;
  FCharacterGroundConstraintSettings *pFVar6;
  FCharacterGroundConstraintDynamicData *pFVar7;
  FParticleProxyProperty *pFVar8;
  
  pFVar2 = this->Constraint_PT;
  if ((pFVar2 != (FCharacterGroundConstraintHandle *)0x0) && (pFVar2->_padding_ != 0)) {
    pFVar2->DirtyFlags = '\0';
    pFVar6 = FDirtyChaosProperties::FindCharacterGroundConstraintSettings(param_4,param_2,param_3);
    if (pFVar6 != (FCharacterGroundConstraintSettings *)0x0) {
      uVar4 = *(undefined8 *)&(pFVar6->VerticalAxis).field_0x8;
      pFVar2 = this->Constraint_PT;
      *(undefined8 *)&(pFVar2->Settings).VerticalAxis = *(undefined8 *)&pFVar6->VerticalAxis;
      *(undefined8 *)&(pFVar2->Settings).VerticalAxis.field_0x8 = uVar4;
      dVar5 = pFVar6->TargetHeight;
      *(undefined8 *)&(pFVar2->Settings).VerticalAxis.field_0x10 =
           *(undefined8 *)&(pFVar6->VerticalAxis).field_0x10;
      (pFVar2->Settings).TargetHeight = dVar5;
      dVar5 = pFVar6->FrictionForceLimit;
      (pFVar2->Settings).RadialForceLimit = pFVar6->RadialForceLimit;
      (pFVar2->Settings).FrictionForceLimit = dVar5;
      dVar5 = pFVar6->SwingTorqueLimit;
      (pFVar2->Settings).TwistTorqueLimit = pFVar6->TwistTorqueLimit;
      (pFVar2->Settings).SwingTorqueLimit = dVar5;
      dVar5 = pFVar6->DampingFactor;
      (pFVar2->Settings).CosMaxWalkableSlopeAngle = pFVar6->CosMaxWalkableSlopeAngle;
      (pFVar2->Settings).DampingFactor = dVar5;
      dVar5 = pFVar6->MotionTargetMassBias;
      (pFVar2->Settings).AssumedOnGroundHeight = pFVar6->AssumedOnGroundHeight;
      (pFVar2->Settings).MotionTargetMassBias = dVar5;
      dVar5 = pFVar6->MaxCharacterGroundMassRatio;
      (pFVar2->Settings).RadialForceMotionTargetScaling = pFVar6->RadialForceMotionTargetScaling;
      (pFVar2->Settings).MaxCharacterGroundMassRatio = dVar5;
      (pFVar2->Settings).UserData = pFVar6->UserData;
    }
    pFVar7 = FDirtyChaosProperties::FindCharacterGroundConstraintDynamicData
                       (param_4,param_2,param_3);
    if (pFVar7 != (FCharacterGroundConstraintDynamicData *)0x0) {
      uVar4 = *(undefined8 *)&(pFVar7->GroundNormal).field_0x8;
      pFVar2 = this->Constraint_PT;
      *(undefined8 *)&(pFVar2->Data).GroundNormal = *(undefined8 *)&pFVar7->GroundNormal;
      *(undefined8 *)&(pFVar2->Data).GroundNormal.field_0x8 = uVar4;
      uVar4 = *(undefined8 *)&pFVar7->TargetDeltaPosition;
      *(undefined8 *)&(pFVar2->Data).GroundNormal.field_0x10 =
           *(undefined8 *)&(pFVar7->GroundNormal).field_0x10;
      *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition = uVar4;
      uVar4 = *(undefined8 *)&(pFVar7->TargetDeltaPosition).field_0x10;
      *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition.field_0x8 =
           *(undefined8 *)&(pFVar7->TargetDeltaPosition).field_0x8;
      *(undefined8 *)&(pFVar2->Data).TargetDeltaPosition.field_0x10 = uVar4;
      dVar5 = pFVar7->GroundDistance;
      (pFVar2->Data).TargetDeltaFacing = pFVar7->TargetDeltaFacing;
      (pFVar2->Data).GroundDistance = dVar5;
      (pFVar2->Data).CosMaxWalkableSlopeAngle = pFVar7->CosMaxWalkableSlopeAngle;
    }
    if (((param_4->Flags).Bits & 0x20000U) != 0) {
      pFVar8 = TDirtyElementPool<Chaos::FParticleProxyProperty>::GetElement
                         (&param_2->GroundParticleProxyPool,param_3);
      if ((((pFVar8 != (FParticleProxyProperty *)0x0) &&
           (pFVar3 = pFVar8->ParticleProxy, pFVar3 != (FSingleParticlePhysicsProxy *)0x0)) &&
          (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0xb)) &&
         (pFVar3->Handle != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
        this->Constraint_PT->GroundParticle = pFVar3->Handle;
        puVar1 = &this->Constraint_PT->DirtyFlags;
        *puVar1 = *puVar1 | 1;
      }
    }
  }
  return;
}

