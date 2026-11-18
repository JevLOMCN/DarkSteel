// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FJointConstraintPhysicsProxy @ 1440cbeb0

FJointConstraintPhysicsProxy * __thiscall
Chaos::FJointConstraintPhysicsProxy::FJointConstraintPhysicsProxy
          (FJointConstraintPhysicsProxy *this,FJointConstraint *param_1,
          FPBDJointConstraintHandle *param_2,UObject *param_3)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FJointConstraintPhysicsProxy *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  atomic<int> *paVar7;
  
  pTVar3 = ::operator_new(0x18);
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar7 = (atomic<int> *)&DAT_00000008;
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
        pFVar4 = (FJointConstraintPhysicsProxy *)(*pcVar1)();
        return pFVar4;
      }
    }
    paVar7 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
    pTVar6 = pTVar3;
  }
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7IPhysicsProxyBase__6B_;
  this->_padding_ = (longlong)pTVar5;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 8;
  this->_padding_ = (longlong)pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  this->_padding_ = 0;
  this->_padding_ = -1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  this->Constraint_GT = param_1;
  this->_padding_ = (longlong)&___7FJointConstraintPhysicsProxy_Chaos__6B_;
  this->Constraint_PT = param_2;
  (this->OriginalParticleHandles_PT).V[0] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  (this->OriginalParticleHandles_PT).V[1] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->bInitialized = false;
  if (this->Constraint_GT == (FJointConstraint *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Constraint_GT !=nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\PhysicsProxy\\JointConstraintProxy.cpp"
                       ,0x1c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FJointConstraintPhysicsProxy *)(*pcVar1)();
      return pFVar4;
    }
  }
  FConstraintBase::SetProxy((FConstraintBase *)this->Constraint_GT,(IPhysicsProxyBase *)this);
  return this;
}

// BufferPhysicsResults @ 1440d4280

void __thiscall
Chaos::FJointConstraintPhysicsProxy::BufferPhysicsResults
          (FJointConstraintPhysicsProxy *this,FDirtyJointConstraintData *param_1)

{
  FPBDJointConstraintHandle *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double,3> *pTVar4;
  float fVar5;
  longlong local_48;
  FSharedReferencer<1> local_40;
  TVector<double,3> local_38;
  TVector<double,3> local_20;
  
  if ((param_1->_padding_ != 0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_9196663456307085286>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PullPhysicsDataImp.h"
                         ,0x1a,"Timestamp.Get() == nullptr"), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_40.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  local_48 = this->_padding_;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&param_1->_padding_ != &local_48) {
    param_1->_padding_ = local_48;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&param_1->_padding_,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  param_1->_padding_ = (longlong)this;
  this_00 = this->Constraint_PT;
  if (this_00 != (FPBDJointConstraintHandle *)0x0) {
    if (((((int)this_00->_padding_ == -1) || (this_00->_padding_ == 0)) &&
        (bVar3 = FPBDJointConstraintHandle::IsConstraintBreaking(this_00), !bVar3)) &&
       (bVar3 = FPBDJointConstraintHandle::IsDriveTargetChanged(this->Constraint_PT), !bVar3)) {
      return;
    }
    bVar3 = FPBDJointConstraintHandle::IsConstraintBreaking(this->Constraint_PT);
    (param_1->OutputData).bIsBreaking = bVar3;
    bVar3 = FPBDJointConstraintHandle::IsConstraintEnabled(this->Constraint_PT);
    (param_1->OutputData).bIsBroken = !bVar3;
    bVar3 = FPBDJointConstraintHandle::IsConstraintViolating(this->Constraint_PT);
    (param_1->OutputData).bIsViolating = bVar3;
    bVar3 = FPBDJointConstraintHandle::IsDriveTargetChanged(this->Constraint_PT);
    (param_1->OutputData).bDriveTargetChanged = bVar3;
    pTVar4 = FPBDJointConstraintHandle::GetLinearImpulse(this->Constraint_PT,&local_38);
    dVar2 = *(double *)&pTVar4->field_0x8;
    (param_1->OutputData).Force.field0_0x0.XYZ[0] = *(double *)pTVar4;
    (param_1->OutputData).Force.field0_0x0._s_0.Y = dVar2;
    (param_1->OutputData).Force.field0_0x0._s_0.Z = *(double *)&pTVar4->field_0x10;
    pTVar4 = FPBDJointConstraintHandle::GetAngularImpulse(this->Constraint_PT,&local_20);
    dVar2 = *(double *)&pTVar4->field_0x8;
    (param_1->OutputData).Torque.field0_0x0.XYZ[0] = *(double *)pTVar4;
    (param_1->OutputData).Torque.field0_0x0._s_0.Y = dVar2;
    (param_1->OutputData).Torque.field0_0x0._s_0.Z = *(double *)&pTVar4->field_0x10;
    fVar5 = FPBDJointConstraintHandle::GetLinearViolation(this->Constraint_PT);
    (param_1->OutputData).LinearViolation = fVar5;
    fVar5 = FPBDJointConstraintHandle::GetAngularViolation(this->Constraint_PT);
    (param_1->OutputData).AngularViolation = fVar5;
    FPBDJointConstraintHandle::ClearConstraintBreaking(this->Constraint_PT);
    FPBDJointConstraintHandle::ClearConstraintViolating(this->Constraint_PT);
    FPBDJointConstraintHandle::ClearDriveTargetChanged(this->Constraint_PT);
  }
  return;
}

// DestroyOnGameThread @ 1440db2a0

void __thiscall
Chaos::FJointConstraintPhysicsProxy::DestroyOnGameThread(FJointConstraintPhysicsProxy *this)

{
  FJointConstraint *pFVar1;
  
  pFVar1 = this->Constraint_GT;
  if (pFVar1 != (FJointConstraint *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->Constraint_GT = (FJointConstraint *)0x0;
  return;
}

// DestroyOnPhysicsThread @ 1440db3c0

void __thiscall
Chaos::FJointConstraintPhysicsProxy::DestroyOnPhysicsThread
          (FJointConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1)

{
  if (this->Constraint_PT != (FPBDJointConstraintHandle *)0x0) {
    FPBDRigidsEvolutionGBF::DestroyJointConstraint((param_1->MEvolution).Ptr,this->Constraint_PT);
    this->Constraint_PT = (FPBDJointConstraintHandle *)0x0;
    (this->OriginalParticleHandles_PT).V[0] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    (this->OriginalParticleHandles_PT).V[1] = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  return;
}

// GetHandleUnsafe @ 1440e4ef0

void * __thiscall
Chaos::FJointConstraintPhysicsProxy::GetHandleUnsafe(FJointConstraintPhysicsProxy *this)

{
  return this->Constraint_PT;
}

// GetParticleHandleFromProxy @ 1440e4fb0

TGeometryParticleHandleImp<double,3,1> * __cdecl
Chaos::FJointConstraintPhysicsProxy::GetParticleHandleFromProxy(IPhysicsProxyBase *param_1)

{
  if ((param_1 != (IPhysicsProxyBase *)0x0) && (param_1->Type == SingleParticleProxy)) {
    return (TGeometryParticleHandleImp<double,3,1> *)param_1[1].Solver;
  }
  return (TGeometryParticleHandleImp<double,3,1> *)0x0;
}

// InitializeOnPhysicsThread @ 1440e6770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FJointConstraintPhysicsProxy::InitializeOnPhysicsThread
          (FJointConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FPBDJointSettings *pFVar7;
  bool bVar8;
  uint uVar9;
  FPBDJointSettings *pFVar10;
  FPBDJointSettings *pFVar11;
  FPBDJointConstraintHandle *pFVar12;
  FPBDJointSettings *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  TGeometryParticleHandleImp<double,3,1> *local_398;
  TGeometryParticleHandleImp<double,3,1> *local_390;
  TGeometryParticleHandleImp<double,3,1> *local_388 [4];
  FPBDJointSettings local_368;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  if (((int)(param_1->Particles).ParticleHandles._padding_ != 0) &&
     (((param_4->Flags).Bits & 0x200U) != 0)) {
    iVar1 = (param_2->JointPhysicsObjectsPool).Elements.ArrayNum;
    uVar9 = 0;
    if (param_3 < iVar1) {
      uVar9 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (local_3a8 = (longlong)param_3, local_3a0 = (longlong)iVar1,
       bVar8 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar15 = (param_2->JointPhysicsObjectsPool).Elements.AllocatorInstance.Data +
              (longlong)param_3 * 0x10;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      local_398 = FPhysicsObject::GetRootParticle<1>(*(FPhysicsObject **)pFVar15);
      local_390 = FPhysicsObject::GetRootParticle<1>(*(FPhysicsObject **)(pFVar15 + 8));
      lVar14 = 0;
      do {
        *(undefined8 *)
         ((longlong)((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_388)->V +
         lVar14) = *(undefined8 *)((longlong)&local_398 + lVar14);
        uVar3 = lVar14 + 8;
        lVar14 = lVar14 + 8;
      } while ((TGeometryParticleHandleImp<double,3,1> **)
               ((longlong)
                ((TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_388)
                [0xffffffffffffffff].V + uVar3) != local_388);
      if (((local_388[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
          (local_388[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
         (pFVar10 = FDirtyChaosProperties::FindJointSettings(param_4,param_2,param_3),
         pFVar10 != (FPBDJointSettings *)0x0)) {
        lVar14 = 6;
        pFVar7 = &local_368;
        do {
          pFVar13 = pFVar7;
          pFVar11 = pFVar10;
          pFVar7 = (FPBDJointSettings *)&(pFVar13->ConnectorTransforms).V[1].field_0x20;
          uVar3 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x8;
          uVar4 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x10;
          uVar5 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x18;
          pFVar10 = (FPBDJointSettings *)&(pFVar11->ConnectorTransforms).V[1].field_0x20;
          *(undefined8 *)(pFVar13->ConnectorTransforms).V =
               *(undefined8 *)(pFVar11->ConnectorTransforms).V;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x8 = uVar3;
          uVar3 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x20;
          uVar6 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x28;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x10 = uVar4;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x18 = uVar5;
          uVar4 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x30;
          uVar5 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x38;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x20 = uVar3;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x28 = uVar6;
          uVar3 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x40;
          uVar6 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x48;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x30 = uVar4;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x38 = uVar5;
          uVar4 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x50;
          uVar5 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x58;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x40 = uVar3;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x48 = uVar6;
          uVar3 = *(undefined8 *)((pFVar11->ConnectorTransforms).V + 1);
          uVar6 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x8;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x50 = uVar4;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[0].field_0x58 = uVar5;
          uVar4 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x10;
          uVar5 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x18;
          *(undefined8 *)((pFVar13->ConnectorTransforms).V + 1) = uVar3;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x8 = uVar6;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x10 = uVar4;
          *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x18 = uVar5;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        uVar3 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x28;
        uVar4 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x30;
        uVar5 = *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x38;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar10;
        *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x28 = uVar3;
        *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x30 = uVar4;
        *(undefined8 *)&(pFVar13->ConnectorTransforms).V[1].field_0x38 = uVar5;
        local_388[2] = FPhysicsObject::GetParticle<1>(*(FPhysicsObject **)pFVar15);
        local_388[3] = FPhysicsObject::GetParticle<1>(*(FPhysicsObject **)(pFVar15 + 8));
        (this->OriginalParticleHandles_PT).V[0] = local_388[2];
        (this->OriginalParticleHandles_PT).V[1] = local_388[3];
        FixConnectorTransformsForRoot<Chaos::TVector<Chaos::TRigidTransform<double,3>,2>_>
                  (&this->OriginalParticleHandles_PT,
                   (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_388,
                   &local_368.ConnectorTransforms);
        pFVar12 = FPBDRigidsEvolutionGBF::CreateJointConstraint
                            ((param_1->MEvolution).Ptr,
                             (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)local_388
                             ,&local_368);
        this->Constraint_PT = pFVar12;
      }
    }
  }
  return;
}

// PullFromPhysicsState @ 1440eaaf0

bool __thiscall
Chaos::FJointConstraintPhysicsProxy::PullFromPhysicsState
          (FJointConstraintPhysicsProxy *this,FDirtyJointConstraintData *param_1,int param_2)

{
  bool *pbVar1;
  double dVar2;
  FJointConstraint *pFVar3;
  double dVar4;
  bool bVar5;
  
  if (this->Constraint_GT != (FJointConstraint *)0x0) {
    bVar5 = FConstraintBase::IsValid((FConstraintBase *)this->Constraint_GT);
    if (bVar5) {
      bVar5 = (param_1->OutputData).bIsBreaking;
      pbVar1 = &(param_1->OutputData).bDriveTargetChanged;
      if ((bVar5 != false) || (*pbVar1 != false)) {
        (this->Constraint_GT->Output).bIsBreaking = bVar5;
        (this->Constraint_GT->Output).bIsBroken = (param_1->OutputData).bIsBroken;
        (this->Constraint_GT->Output).bDriveTargetChanged = *pbVar1;
      }
      pFVar3 = this->Constraint_GT;
      dVar4 = (param_1->OutputData).Force.field0_0x0._s_0.Y;
      dVar2 = (param_1->OutputData).Force.field0_0x0._s_0.Z;
      (pFVar3->Output).Force.field0_0x0._s_0.X = (param_1->OutputData).Force.field0_0x0._s_0.X;
      (pFVar3->Output).Force.field0_0x0._s_0.Y = dVar4;
      (pFVar3->Output).Force.field0_0x0._s_0.Z = dVar2;
      pFVar3 = this->Constraint_GT;
      dVar4 = (param_1->OutputData).Torque.field0_0x0._s_0.Y;
      dVar2 = (param_1->OutputData).Torque.field0_0x0._s_0.Z;
      (pFVar3->Output).Torque.field0_0x0._s_0.X = (param_1->OutputData).Torque.field0_0x0._s_0.X;
      (pFVar3->Output).Torque.field0_0x0._s_0.Y = dVar4;
      (pFVar3->Output).Torque.field0_0x0._s_0.Z = dVar2;
      (this->Constraint_GT->Output).bIsViolating = (param_1->OutputData).bIsViolating;
      (this->Constraint_GT->Output).LinearViolation = (param_1->OutputData).LinearViolation;
      (this->Constraint_GT->Output).AngularViolation = (param_1->OutputData).AngularViolation;
    }
  }
  return true;
}

// PushStateOnGameThread @ 1440ec970

void __thiscall
Chaos::FJointConstraintPhysicsProxy::PushStateOnGameThread
          (FJointConstraintPhysicsProxy *this,FDirtyPropertiesManager *param_1,int param_2,
          FDirtyChaosProperties *param_3)

{
  FJointConstraint *pFVar1;
  bool bVar2;
  
  if (this->Constraint_GT != (FJointConstraint *)0x0) {
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

// PushStateOnPhysicsThread @ 1440ecba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FJointConstraintPhysicsProxy::PushStateOnPhysicsThread
          (FJointConstraintPhysicsProxy *this,FPBDRigidsSolver *param_1,
          FDirtyPropertiesManager *param_2,int param_3,FDirtyChaosProperties *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FPBDJointSettings *pFVar5;
  FPBDJointSettings *pFVar6;
  FPBDJointSettings *pFVar7;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar8;
  FPBDJointConstraintHandle *pFVar9;
  longlong lVar10;
  FPBDJointSettings *pFVar11;
  undefined1 auStack_378 [32];
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_358;
  FPBDJointSettings local_348;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_378;
  pFVar9 = this->Constraint_PT;
  if (((pFVar9 != (FPBDJointConstraintHandle *)0x0) && ((int)pFVar9->_padding_ != -1)) &&
     (pFVar9->_padding_ != 0)) {
    pFVar6 = FDirtyChaosProperties::FindJointSettings(param_4,param_2,param_3);
    if (pFVar6 != (FPBDJointSettings *)0x0) {
      lVar10 = 6;
      pFVar5 = &local_348;
      do {
        pFVar11 = pFVar5;
        pFVar7 = pFVar6;
        pFVar5 = (FPBDJointSettings *)&(pFVar11->ConnectorTransforms).V[1].field_0x20;
        uVar1 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x8;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x10;
        uVar3 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x18;
        pFVar6 = (FPBDJointSettings *)&(pFVar7->ConnectorTransforms).V[1].field_0x20;
        *(undefined8 *)(pFVar11->ConnectorTransforms).V =
             *(undefined8 *)(pFVar7->ConnectorTransforms).V;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x8 = uVar1;
        uVar1 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x20;
        uVar4 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x28;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x10 = uVar2;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x18 = uVar3;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x30;
        uVar3 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x38;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x20 = uVar1;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x28 = uVar4;
        uVar1 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x40;
        uVar4 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x48;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x30 = uVar2;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x38 = uVar3;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x50;
        uVar3 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[0].field_0x58;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x40 = uVar1;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x48 = uVar4;
        uVar1 = *(undefined8 *)((pFVar7->ConnectorTransforms).V + 1);
        uVar4 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x8;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x50 = uVar2;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[0].field_0x58 = uVar3;
        uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x10;
        uVar3 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x18;
        *(undefined8 *)((pFVar11->ConnectorTransforms).V + 1) = uVar1;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x8 = uVar4;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x10 = uVar2;
        *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x18 = uVar3;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar1 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x28;
      pFVar9 = this->Constraint_PT;
      uVar2 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x30;
      uVar3 = *(undefined8 *)&(pFVar7->ConnectorTransforms).V[1].field_0x38;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x28 = uVar1;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x30 = uVar2;
      *(undefined8 *)&(pFVar11->ConnectorTransforms).V[1].field_0x38 = uVar3;
      pTVar8 = FPBDJointConstraintHandle::GetConstrainedParticles(pFVar9,&local_358);
      FixConnectorTransformsForRoot<Chaos::TVector<Chaos::TRigidTransform<double,3>,2>_>
                (&this->OriginalParticleHandles_PT,pTVar8,&local_348.ConnectorTransforms);
      pFVar9 = FPBDRigidsEvolutionGBF::SetJointConstraintSettings
                         ((param_1->MEvolution).Ptr,this->Constraint_PT,&local_348);
      this->Constraint_PT = pFVar9;
    }
  }
  return;
}

