// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 20

// FSolverSerializer @ 143dfc7d0

FSolverSerializer * __thiscall
Chaos::FSolverSerializer::FSolverSerializer(FSolverSerializer *this,FPBDRigidsSolver *param_1)

{
  TStripedMap<32,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
  *pTVar1;
  longlong lVar2;
  
  this->SolverInstance = param_1;
  pTVar1 = &this->PendingMigratedPhysicsStateByProxy;
  lVar2 = 0x20;
  do {
    *(undefined8 *)pTVar1 = 0;
    *(undefined8 *)&pTVar1->field_0x8 = 0;
    *(undefined8 *)&pTVar1->field_0x10 = 0;
    *(undefined8 *)&pTVar1->field_0x28 = 0;
    *(undefined4 *)&pTVar1->field_0x30 = 0;
    *(undefined4 *)&pTVar1->field_0x34 = 0x80;
    *(undefined4 *)&pTVar1->field_0x38 = 0xffffffff;
    *(undefined4 *)&pTVar1->field_0x3c = 0;
    *(undefined8 *)&pTVar1->field_0x48 = 0;
    *(undefined4 *)&pTVar1->field_0x50 = 0;
    pTVar1 = (TStripedMap<32,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)&pTVar1->field_0x58;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return this;
}

// ApplySerializedStateToConstraint @ 143e12870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToConstraint
          (FSolverSerializer *this,FConstraintBase *param_1,FSerializedDataBuffer *param_2)

{
  FChaosVDJointConstraint *pFVar1;
  undefined1 auStack_408 [32];
  EConstraintType local_3e8 [2];
  EConstraintType *local_3e0;
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  if (param_1 != (FConstraintBase *)0x0) {
    local_18 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_3e8[0] = param_1->Type;
    if ((local_3e8[0] == NoneType) || (local_3e8[0] != JointConstraintType)) {
      local_3e0 = local_3e8;
      `Chaos::FSolverSerializer::ApplySerializedStateToConstraint'::__l9::<lambda_1>::operator()
                (&local_3e0);
    }
    else {
      pFVar1 = Chaos::Private::ExtractJointConstraintDataFromBuffer(&local_3d8,param_2);
      FChaosVDDataWrapperUtils::ApplyJointDataWrapperGTConstraint
                ((FJointConstraint *)param_1,pFVar1);
    }
  }
  return;
}

// ApplySerializedStateToConstraint @ 143e12900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToConstraint
          (FSolverSerializer *this,FConstraintHandle *param_1,FSerializedDataBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  FConstraintHandleTypeID *pFVar4;
  FChaosVDJointConstraint *pFVar5;
  undefined1 auStackY_418 [32];
  FString local_3e8;
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if (param_1 == (FConstraintHandle *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8876622860144083256>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                       ,0x138,"ConstraintHandlePtr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar3 = FConstraintHandle::GetType(param_1);
    pFVar4 = FPBDJointConstraintHandle::StaticType();
    if ((pFVar4->TypeName == pFVar3->TypeName) ||
       ((pFVar3->BaseType != (FConstraintHandleTypeID *)0x0 &&
        (bVar2 = FConstraintHandleTypeID::IsA(pFVar3->BaseType,pFVar4), bVar2)))) {
      pFVar5 = Chaos::Private::ExtractJointConstraintDataFromBuffer(&local_3d8,param_2);
      FChaosVDDataWrapperUtils::ApplyJointDataWrapperToHandle
                ((FPBDJointConstraintHandle *)param_1,pFVar5);
    }
    else if (2 < (byte)LogChaos._0_1_) {
      pFVar3 = FConstraintHandle::GetType(param_1);
      ::FName::ToString(&pFVar3->TypeName,&local_3e8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ApplySerializedStateToJointConstraint @ 143e12a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToJointConstraint
          (FSolverSerializer *this,FJointConstraint *param_1,FSerializedDataBuffer *param_2)

{
  FChaosVDJointConstraint *pFVar1;
  undefined1 auStack_3f8 [32];
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pFVar1 = Chaos::Private::ExtractJointConstraintDataFromBuffer(&local_3d8,param_2);
  FChaosVDDataWrapperUtils::ApplyJointDataWrapperGTConstraint(param_1,pFVar1);
  return;
}

// ApplySerializedStateToJointConstraint @ 143e12a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToJointConstraint
          (FSolverSerializer *this,FPBDJointConstraintHandle *param_1,FSerializedDataBuffer *param_2
          )

{
  FChaosVDJointConstraint *pFVar1;
  undefined1 auStack_3f8 [32];
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  pFVar1 = Chaos::Private::ExtractJointConstraintDataFromBuffer(&local_3d8,param_2);
  FChaosVDDataWrapperUtils::ApplyJointDataWrapperToHandle(param_1,pFVar1);
  return;
}

// ApplySerializedStateToParticle @ 143e12af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToParticle
          (FSolverSerializer *this,TGeometryParticle<double,3> *param_1,
          FSerializedDataBuffer *param_2)

{
  undefined1 auStack_418 [32];
  FChaosVDParticleDataWrapper local_3f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_418;
  Chaos::Private::ExtractParticleDataFromBuffer(&local_3f8,param_2);
  ApplySerializedStateToParticle(this,param_1,&local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
  if (local_3f8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.CollisionDataPerShape.AllocatorInstance.Data);
  }
  if (local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
  }
  return;
}

// ApplySerializedStateToParticle @ 143e12b90

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToParticle
          (FSolverSerializer *this,TGeometryParticle<double,3> *param_1,
          FChaosVDParticleDataWrapper *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EObjectStateType EVar4;
  EChaosVDKinematicTargetMode EVar5;
  IPhysicsProxyBase *pIVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  bool bVar13;
  TPBDRigidParticle<double,3> *pTVar14;
  undefined4 uStack_2c;
  
  cVar12 = (**(code **)(param_2->_padding_ + 8))(param_2);
  if (((cVar12 == '\0') || (param_1 == (TGeometryParticle<double,3> *)0x0)) ||
     (param_1->Type != param_2->Type)) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8876622860144083165>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                        ,0xdd,
                        "InParticleState.HasValidData() && GTParticle && GTParticle->ObjectType() == static_cast<EParticleType>(InParticleState.Type)"
                       );
    if (bVar13) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else {
    pIVar6 = param_1->Proxy;
    dVar1 = (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.Y;
    *(double *)&(param_1->MXR).Property.MX =
         (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.X;
    *(double *)&(param_1->MXR).Property.MX.field_0x8 = dVar1;
    *(double *)&(param_1->MXR).Property.MX.field_0x10 =
         (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.Z;
    (param_1->MDirtyFlags).Bits = (param_1->MDirtyFlags).Bits | 1;
    if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
    }
    dVar1 = (param_2->ParticlePositionRotation).MR.Y;
    dVar2 = (param_2->ParticlePositionRotation).MR.Z;
    dVar3 = (param_2->ParticlePositionRotation).MR.W;
    pIVar6 = param_1->Proxy;
    *(float *)&(param_1->MXR).Property.MR = (float)(param_2->ParticlePositionRotation).MR.X;
    *(float *)&(param_1->MXR).Property.MR.field_0x4 = (float)dVar1;
    *(float *)&(param_1->MXR).Property.MR.field_0x8 = (float)dVar2;
    *(float *)&(param_1->MXR).Property.MR.field_0xc = (float)dVar3;
    (param_1->MDirtyFlags).Bits = (param_1->MDirtyFlags).Bits | 1;
    if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
      FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
    }
    pTVar14 = (TPBDRigidParticle<double,3> *)param_1;
    if (param_1->Type == Static) {
      pTVar14 = (TPBDRigidParticle<double,3> *)0x0;
    }
    if (pTVar14 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar1 = (param_2->ParticleKinematicTarget).Rotation.Y;
      dVar2 = (param_2->ParticleKinematicTarget).Rotation.Z;
      dVar3 = (param_2->ParticleKinematicTarget).Rotation.W;
      EVar5 = (param_2->ParticleKinematicTarget).Mode;
      uVar8 = *(undefined4 *)
               ((longlong)&(param_2->ParticleKinematicTarget).Position.field0_0x0 + 0x10);
      uVar9 = *(undefined4 *)
               ((longlong)&(param_2->ParticleKinematicTarget).Position.field0_0x0 + 0x14);
      pIVar6 = *(IPhysicsProxyBase **)&pTVar14->field_0x10;
      dVar10 = (param_2->ParticleKinematicTarget).Position.field0_0x0._s_0.X;
      dVar11 = (param_2->ParticleKinematicTarget).Position.field0_0x0._s_0.Y;
      *(float *)&pTVar14->field_0xc0 = (float)(param_2->ParticleKinematicTarget).Rotation.X;
      *(float *)&pTVar14->field_0xc4 = (float)dVar1;
      *(float *)&pTVar14->field_0xc8 = (float)dVar2;
      *(float *)&pTVar14->field_0xcc = (float)dVar3;
      *(double *)&pTVar14->field_0xd0 = dVar10;
      *(double *)&pTVar14->field_0xd8 = dVar11;
      *(undefined4 *)&pTVar14->field_0xe0 = uVar8;
      *(undefined4 *)&pTVar14->field_0xe4 = uVar9;
      *(EChaosVDKinematicTargetMode *)&pTVar14->field_0xe8 = EVar5;
      *(undefined4 *)&pTVar14->field_0xec = uStack_2c;
      ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits =
           ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits | 0x40;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar2 = (param_2->ParticleVelocities).MV.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&pTVar14->field_0x10;
      dVar1 = (param_2->ParticleVelocities).MV.field0_0x0._s_0.Z;
      *(float *)&pTVar14->field_0xa0 = (float)(param_2->ParticleVelocities).MV.field0_0x0._s_0.X;
      *(float *)&pTVar14->field_0xa4 = (float)dVar2;
      *(float *)&pTVar14->field_0xa8 = (float)dVar1;
      ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits =
           ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits | 2;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar2 = (param_2->ParticleVelocities).MW.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&pTVar14->field_0x10;
      dVar1 = (param_2->ParticleVelocities).MW.field0_0x0._s_0.Z;
      *(float *)&pTVar14->field_0xac = (float)(param_2->ParticleVelocities).MW.field0_0x0._s_0.X;
      *(float *)&pTVar14->field_0xb0 = (float)dVar2;
      *(float *)&pTVar14->field_0xb4 = (float)dVar1;
      ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits =
           ((TDirtyFlags<Chaos::EChaosPropertyFlags> *)&pTVar14->field_0x9c)->Bits | 2;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
    }
    if (param_1->Type < Rigid) {
      param_1 = (TGeometryParticle<double,3> *)(TPBDRigidParticle<double,3> *)0x0;
    }
    if ((TPBDRigidParticle<double,3> *)param_1 != (TPBDRigidParticle<double,3> *)0x0) {
      dVar2 = (param_2->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAcceleration =
           (float)(param_2->ParticleDynamics).MAcceleration.field0_0x0._s_0.X;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAcceleration.
                 field_0x4 = (float)dVar2;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAcceleration.
                 field_0x8 = (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 4;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar2 = (param_2->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAngularAcceleration
           = (float)(param_2->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAngularAcceleration
                 .field_0x4 = (float)dVar2;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.MAngularAcceleration
                 .field_0x8 = (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 4;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar2 = (param_2->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MLinearImpulseVelocity =
           (float)(param_2->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MLinearImpulseVelocity.field_0x4 = (float)dVar2;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MLinearImpulseVelocity.field_0x8 = (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 4;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar2 = (param_2->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MAngularImpulseVelocity =
           (float)(param_2->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MAngularImpulseVelocity.field_0x4 = (float)dVar2;
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MDynamics).Property.
                 MAngularImpulseVelocity.field_0x8 = (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 4;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y;
      *(double *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MCenterOfMass =
           (param_2->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X;
      *(double *)
       &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MCenterOfMass.field_0x8 =
           dVar1;
      *(double *)
       &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MCenterOfMass.field_0x10 =
           (param_2->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      dVar1 = (param_2->ParticleMassProps).MRotationOfMass.Y;
      *(double *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass =
           (param_2->ParticleMassProps).MRotationOfMass.X;
      *(double *)
       &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.field_0x8 =
           dVar1;
      dVar1 = (param_2->ParticleMassProps).MRotationOfMass.W;
      *(double *)
       &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.field_0x10 =
           (param_2->ParticleMassProps).MRotationOfMass.Z;
      *(double *)
       &(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MRotationOfMass.field_0x18 =
           dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar1 = (param_2->ParticleMassProps).MI.field0_0x0._s_0.Z;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      *(ulonglong *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MI =
           CONCAT44((float)(param_2->ParticleMassProps).MI.field0_0x0._s_0.Y,
                    (float)(param_2->ParticleMassProps).MI.field0_0x0._s_0.X);
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MI.field_0x8 =
           (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      dVar1 = (param_2->ParticleMassProps).MInvI.field0_0x0._s_0.Z;
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      *(ulonglong *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MInvI =
           CONCAT44((float)(param_2->ParticleMassProps).MInvI.field0_0x0._s_0.Y,
                    (float)(param_2->ParticleMassProps).MInvI.field0_0x0._s_0.X);
      *(float *)&(((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MInvI.field_0x8 =
           (float)dVar1;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      (((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MM =
           (param_2->ParticleMassProps).MM;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      (((TPBDRigidParticle<double,3> *)param_1)->MMassProps).Property.MInvM =
           (param_2->ParticleMassProps).MInvM;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 0x20;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
      FChaosVDParticleDynamicMisc::
      CopyWithoutStateTo<Chaos::TPBDRigidParticle<double,3>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType>
                (&param_2->ParticleDynamicsMisc,(TPBDRigidParticle<double,3> *)param_1);
      EVar4 = (param_2->ParticleDynamicsMisc).MObjectState;
      if (EVar4 == Sleeping) {
        pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
        *(undefined8 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0xa0 = 0;
        *(undefined4 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0xa8 = 0;
        *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
             *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 2;
        if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
        }
        pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
        *(undefined8 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0xac = 0;
        *(undefined4 *)&((TPBDRigidParticle<double,3> *)param_1)->field_0xb4 = 0;
        *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
             *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 2;
        if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
          FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
        }
        *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
             *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c & 0xfffffffb;
      }
      pIVar6 = *(IPhysicsProxyBase **)&((TPBDRigidParticle<double,3> *)param_1)->field_0x10;
      (((TPBDRigidParticle<double,3> *)param_1)->MMiscData).Property.MObjectState = EVar4;
      *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c =
           *(uint *)&((TPBDRigidParticle<double,3> *)param_1)->field_0x9c | 8;
      if ((pIVar6 != (IPhysicsProxyBase *)0x0) && (pIVar6->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar6->Solver,pIVar6);
      }
    }
  }
  return;
}

// ApplySerializedStateToParticle @ 143e13230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToParticle
          (FSolverSerializer *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FSerializedDataBuffer *param_2)

{
  undefined1 auStack_418 [32];
  FChaosVDParticleDataWrapper local_3f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_418;
  Chaos::Private::ExtractParticleDataFromBuffer(&local_3f8,param_2);
  ApplySerializedStateToParticle(this,param_1,&local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
  if (local_3f8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.CollisionDataPerShape.AllocatorInstance.Data);
  }
  if (local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
  }
  return;
}

// ApplySerializedStateToParticle @ 143e132d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FSolverSerializer::ApplySerializedStateToParticle
          (FSolverSerializer *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FChaosVDParticleDataWrapper *param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  FPBDRigidsEvolutionGBF *this_00;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  TRigidTransform<double,3> *pTVar12;
  FKinematicTarget *pFVar13;
  uint uVar14;
  TGeometryParticleHandleImp<double,3,1> *pTVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStackY_1e8 [32];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  EKinematicTargetMode EStack_180;
  undefined4 uStack_17c;
  double local_178;
  double dStack_170;
  double local_168;
  TVector<double,3> local_160;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  TRigidTransform<double,3> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  cVar10 = (**(code **)(param_2->_padding_ + 8))(param_2);
  if (((cVar10 == '\0') || (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0)) ||
     (*(EChaosVDParticleType *)((longlong)&param_1->_padding_ + 4) != param_2->Type)) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<8876622860144083194>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                        ,0xfa,
                        "InParticleState.HasValidData() && InParticleHandle && InParticleHandle->Type == static_cast<EParticleType>(InParticleState.Type)"
                       );
    if (bVar11) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_128 = (param_2->ParticlePositionRotation).MR.X;
    dStack_120 = (param_2->ParticlePositionRotation).MR.Y;
    local_118 = (param_2->ParticlePositionRotation).MR.Z;
    dStack_110 = (param_2->ParticlePositionRotation).MR.W;
    local_178 = (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.X;
    dStack_170 = (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.Y;
    this_00 = (this->SolverInstance->MEvolution).Ptr;
    local_168 = (param_2->ParticlePositionRotation).MX.field0_0x0._s_0.Z;
    FPBDRigidsEvolutionGBF::SetParticleTransform
              (this_00,param_1,(TVector<double,3> *)&local_178,(TRotation<double,3> *)&local_128,
               true,false);
    local_160._16_8_ = 0;
    local_160._0_8_ = 0;
    local_160._8_8_ = 0;
    pTVar12 = TGeometryParticleHandleImp<double,3,1>::GetTransformXR(param_1,&local_108);
    TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
              ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int)param_1->_padding_,
               pTVar12,&local_160);
    local_1b8 = (float)(param_2->ParticleVelocities).MW.field0_0x0._s_0.X;
    local_1b4 = (float)(param_2->ParticleVelocities).MW.field0_0x0._s_0.Y;
    local_1b0 = (float)(param_2->ParticleVelocities).MW.field0_0x0._s_0.Z;
    local_148 = (param_2->ParticleVelocities).MV.field0_0x0._s_0.X;
    dStack_140 = (param_2->ParticleVelocities).MV.field0_0x0._s_0.Y;
    local_138 = (param_2->ParticleVelocities).MV.field0_0x0._s_0.Z;
    FPBDRigidsEvolutionGBF::SetParticleVelocities
              (this_00,param_1,(TVector<double,3> *)&local_148,(TVector<float,3> *)&local_1b8);
    pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar15 = param_1;
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EStack_180 = (param_2->ParticleKinematicTarget).Mode;
      uVar6 = *(undefined4 *)
               ((longlong)&(param_2->ParticleKinematicTarget).Position.field0_0x0 + 0x10);
      uVar7 = *(undefined4 *)
               ((longlong)&(param_2->ParticleKinematicTarget).Position.field0_0x0 + 0x14);
      dVar2 = (param_2->ParticleKinematicTarget).Position.field0_0x0._s_0.X;
      dVar8 = (param_2->ParticleKinematicTarget).Position.field0_0x0._s_0.Y;
      fVar19 = (float)(param_2->ParticleKinematicTarget).Rotation.X;
      fVar16 = (float)(param_2->ParticleKinematicTarget).Rotation.Y;
      fVar17 = (float)(param_2->ParticleKinematicTarget).Rotation.Z;
      fVar18 = (float)(param_2->ParticleKinematicTarget).Rotation.W;
      local_198 = dVar2;
      dStack_190 = dVar8;
      pFVar13 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar15->_padding_,
                           (int)pTVar15->_padding_);
      *(float *)&pFVar13->Rotation = fVar19;
      *(float *)&(pFVar13->Rotation).field_0x4 = fVar16;
      *(float *)&(pFVar13->Rotation).field_0x8 = fVar17;
      *(float *)&(pFVar13->Rotation).field_0xc = fVar18;
      *(double *)&pFVar13->Position = dVar2;
      *(double *)&(pFVar13->Position).field_0x8 = dVar8;
      *(undefined4 *)&(pFVar13->Position).field_0x10 = uVar6;
      *(undefined4 *)&(pFVar13->Position).field_0x14 = uVar7;
      pFVar13->Mode = EStack_180;
      *(undefined4 *)&pFVar13->field_0x2c = uStack_17c;
      local_1a8 = fVar19;
      fStack_1a4 = fVar16;
      fStack_1a0 = fVar17;
      fStack_19c = fVar18;
      local_188 = uVar6;
      uStack_184 = uVar7;
    }
    pTVar15 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar15 = param_1;
    }
    if (pTVar15 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      FChaosVDParticleDynamics::CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (&param_2->ParticleDynamics,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
      FChaosVDParticleMassProps::CopyTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (&param_2->ParticleMassProps,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
      FChaosVDParticleDynamicMisc::
      CopyWithoutStateTo<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::FRigidParticleControlFlags,enum_Chaos::ESleepType>
                (&param_2->ParticleDynamicsMisc,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar15);
      uVar3 = (uint)pTVar15->_padding_;
      lVar4 = pTVar15->_padding_;
      dVar8 = (param_2->ParticleVWSmooth).MV.field0_0x0._s_0.X;
      dVar9 = (param_2->ParticleVWSmooth).MV.field0_0x0._s_0.Y;
      dVar2 = (param_2->ParticleVWSmooth).MV.field0_0x0._s_0.Z;
      uVar14 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x2f8)) {
        uVar14 = ~uVar3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x2f0);
      pdVar1 = (double *)(lVar4 + (longlong)(int)uVar3 * 0x18);
      *pdVar1 = dVar8;
      pdVar1[1] = dVar9;
      *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
      uVar3 = (uint)pTVar15->_padding_;
      lVar4 = pTVar15->_padding_;
      dVar8 = (param_2->ParticleVWSmooth).MW.field0_0x0._s_0.X;
      dVar9 = (param_2->ParticleVWSmooth).MW.field0_0x0._s_0.Y;
      dVar2 = (param_2->ParticleVWSmooth).MW.field0_0x0._s_0.Z;
      uVar14 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x310)) {
        uVar14 = ~uVar3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x308);
      pdVar1 = (double *)(lVar4 + (longlong)(int)uVar3 * 0x18);
      *pdVar1 = dVar8;
      pdVar1[1] = dVar9;
      *(double *)(lVar4 + 0x10 + (longlong)(int)uVar3 * 0x18) = dVar2;
      FPBDRigidsEvolutionBase::SetParticleObjectState
                ((FPBDRigidsEvolutionBase *)this_00,
                 (TPBDRigidParticleHandleImp<double,3,1> *)pTVar15,
                 (param_2->ParticleDynamicsMisc).MObjectState);
      uVar3 = (uint)pTVar15->_padding_;
      lVar4 = pTVar15->_padding_;
      uVar14 = 0;
      if ((int)uVar3 < *(int *)(lVar4 + 0x4d8)) {
        uVar14 = ~uVar3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FPBDRigidsEvolutionBase::SetParticleSleepType
                ((FPBDRigidsEvolutionBase *)this_00,
                 (TPBDRigidParticleHandleImp<double,3,1> *)pTVar15,
                 *(ESleepType *)((longlong)(int)uVar3 + *(longlong *)(lVar4 + 0x4d0)));
    }
    if ((param_2->ParticleDynamicsMisc).bDisabled == false) {
      FPBDRigidsEvolutionBase::EnableParticle((FPBDRigidsEvolutionBase *)this_00,param_1);
    }
    else {
      FPBDRigidsEvolutionBase::DisableParticle((FPBDRigidsEvolutionBase *)this_00,param_1);
    }
  }
  return;
}

// PopPendingInternalSerializedStateForProxy @ 143e383a0

TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> __thiscall
Chaos::FSolverSerializer::PopPendingInternalSerializedStateForProxy
          (FSolverSerializer *this,IPhysicsProxyBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> TVar3;
  uint uVar4;
  TStripedMap<32,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
  *SRWLock;
  PSRWLOCK SRWLock_00;
  int iVar5;
  ulonglong in_R8;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> local_res20
  ;
  IPhysicsProxyBase *local_38 [2];
  
  SRWLock = &this->PendingMigratedPhysicsStateByProxy;
  iVar5 = 0;
  if ((FSolverSerializer *)SRWLock != this + 1) {
    do {
      if ((SRWLock ==
           (TStripedMap<32,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x1c,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar3.Ptr = (FSerializedDataBuffer *)(*pcVar1)();
        return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
                )TVar3.Ptr;
      }
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      iVar5 = iVar5 + (*(int *)(&SRWLock->field_0x8 + 8) - *(int *)(&SRWLock->field_0x8 + 0x34));
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      SRWLock = (TStripedMap<32,IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FTransactionallySafeStripedMapLockingPolicy>
                 *)(&SRWLock->field_0x8 + 0x50);
    } while ((FSolverSerializer *)SRWLock != this + 1);
    if (iVar5 != 0) {
      local_res20.Ptr = (FSerializedDataBuffer *)0x0;
      uVar4 = ((uint)(in_R8 >> 0x14) & 0xffff ^ (uint)(in_R8 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      SRWLock_00 = (PSRWLOCK)
                   (&(this->PendingMigratedPhysicsStateByProxy).field_0x0 +
                   (ulonglong)(uVar4 & 0x1f) * 0x58);
      if ((SRWLock_00 == (PSRWLOCK)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                             ,0x43,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar3.Ptr = (FSerializedDataBuffer *)(*pcVar1)();
        return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
                )TVar3.Ptr;
      }
      AcquireSRWLockExclusive(SRWLock_00);
      TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>
      ::RemoveAndCopyValueByHash<IPhysicsProxyBase_const_*>
                ((TMap<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>_>
                  *)(SRWLock_00 + 1),uVar4,local_38,&local_res20);
      if (SRWLock_00 != (PSRWLOCK)0x0) {
        ReleaseSRWLockExclusive(SRWLock_00);
      }
      param_1->_padding_ = (longlong)local_res20.Ptr;
      return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
             )(FSerializedDataBuffer *)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>)
         (FSerializedDataBuffer *)param_1;
}

// PopulateFromSerializedBuffer @ 143e38520

void __thiscall
Chaos::FSolverSerializer::PopulateFromSerializedBuffer
          (FSolverSerializer *this,FSerializedDataBuffer *param_1)

{
  return;
}

// PushPendingInternalSerializedStateForProxy @ 143e3b4e0

void __thiscall
Chaos::FSolverSerializer::PushPendingInternalSerializedStateForProxy
          (FSolverSerializer *this,IPhysicsProxyBase *param_1,
          TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  undefined1 local_res8 [8];
  IPhysicsProxyBase *local_res10;
  IPhysicsProxyBase **local_18;
  TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_> *local_10;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  SRWLock = (PSRWLOCK)
            (&(this->PendingMigratedPhysicsStateByProxy).field_0x0 +
            (ulonglong)(uVar3 & 0x1f) * 0x58);
  local_res10 = param_1;
  if (SRWLock == (PSRWLOCK)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  local_18 = &local_res10;
  local_10 = param_2;
  TSet<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<IPhysicsProxyBase_*_&,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_&&>_>
            ((TSet<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>,0>,FDefaultSetAllocator>
              *)(SRWLock + 1),(uint)local_res8,
             (TPairInitializer<IPhysicsProxyBase_*_&,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_&&>
              *)(ulonglong)uVar3,(bool *)&local_18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return;
}

// SerializeConstraintStateToBuffer @ 143e4ba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSolverSerializer::SerializeConstraintStateToBuffer
          (FSolverSerializer *this,FConstraintBase *param_1,FSerializedDataBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  undefined1 auStackY_898 [32];
  EConstraintType local_868 [2];
  undefined8 local_860;
  EConstraintType *local_858 [2];
  FArchiveState local_848;
  longlong local_7b8;
  FSerializedDataBuffer *local_7b0;
  undefined8 local_7a8;
  FChaosVDJointConstraint local_798;
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_898;
  if (param_1 == (FConstraintBase *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8876622860144083114>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                       ,0xaa,"GTConstraintPtr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    local_860 = 0;
    local_848._padding_ = 0;
    local_848.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_848.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_848.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_848.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_848._40_8_ = 0;
    local_848.ArSerializingDefaults = 0;
    local_848.ArPortFlags = 0;
    local_848.ArMaxSerializeSize = 0;
    local_848.ArUEVer.FileVersionUE4 = 0;
    local_848.ArUEVer.FileVersionUE5 = 0;
    local_848.ArLicenseeUEVer = 0;
    local_848.ArEngineVer.Major = 0;
    local_848.ArEngineVer.Minor = 0;
    local_848.ArEngineVer.Patch = 0;
    local_848.ArEngineVer._6_2_ = 0;
    local_848.ArEngineVer.Changelist = 0;
    local_848.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_848.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_848.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_848.SerializedProperty = (FProperty *)0x0;
    local_848.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_848.bCustomVersionsAreReset = false;
    local_848._129_7_ = 0;
    local_848.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_848);
    local_7b8 = 0;
    local_848._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_7a8 = local_860;
    local_7b0 = param_2;
    FArchiveState::SetIsSaving(&local_848,true);
    (**(code **)(local_848._padding_ + 0x108))(&local_848,0);
    local_7b8 = (longlong)(param_2->DataBuffer).ArrayNum;
    local_848._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveState::SetShouldSkipUpdateCustomVersion(&local_848,true);
    local_868[0] = param_1->Type;
    if ((local_868[0] == NoneType) || (local_868[0] != JointConstraintType)) {
      local_858[0] = local_868;
      `Chaos::FSolverSerializer::SerializeConstraintStateToBuffer'::__l27::<lambda_1>::operator()
                (local_858);
    }
    else {
      FChaosVDDataWrapperUtils::BuildGTJointDataWrapper(&local_3d8,(FJointConstraint *)param_1);
      memset(&local_798,0,0x3c0);
      FChaosVDJointConstraint::FChaosVDJointConstraint(&local_798);
      pUVar3 = FChaosVDJointConstraint::StaticStruct();
      Serialization::Private::FastStructSerialize
                (pUVar3,&local_3d8,(FArchive *)&local_848,&local_798);
    }
    FArchive::~FArchive((FArchive *)&local_848);
  }
  return;
}

// SerializeConstraintStateToBuffer @ 143e4bbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSolverSerializer::SerializeConstraintStateToBuffer
          (FSolverSerializer *this,FConstraintHandle *param_1,FSerializedDataBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FConstraintHandleTypeID *pFVar3;
  FConstraintHandleTypeID *pFVar4;
  UScriptStruct *pUVar5;
  FChaosVDJointConstraint *pFVar6;
  undefined ***pppuVar7;
  undefined1 auStackY_b08 [32];
  FName local_ad0;
  FArchiveState local_ac8;
  longlong local_a38;
  FSerializedDataBuffer *local_a30;
  undefined8 local_a28;
  undefined **local_a18;
  undefined1 local_a10;
  undefined4 local_a0f;
  undefined2 local_a0b;
  undefined1 local_a09;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined **local_9f8;
  undefined1 local_9f0;
  undefined4 local_9ef;
  undefined2 local_9eb;
  undefined1 local_9e9;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined1 local_9d8;
  undefined4 local_9d7;
  undefined2 local_9d3;
  undefined1 local_9d1;
  double local_9d0;
  double dStack_9c8;
  double local_9c0;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  undefined **local_9a0;
  undefined1 local_998;
  undefined4 local_997;
  undefined2 local_993;
  undefined1 local_991;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined **local_938;
  undefined1 local_930;
  undefined4 local_92f;
  undefined2 local_92b;
  undefined1 local_929;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined1 local_8d8 [1280];
  FChaosVDJointConstraint local_3d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  if (param_1 == (FConstraintHandle *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8876622860144083080>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                       ,0x88,"ConstraintHandlePtr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((byte)LogChaos._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  local_ac8._padding_ = 0;
  local_ac8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_ac8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_ac8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_ac8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_ac8._40_8_ = 0;
  local_ac8.ArSerializingDefaults = 0;
  local_ac8.ArPortFlags = 0;
  local_ac8.ArMaxSerializeSize = 0;
  local_ac8.ArUEVer.FileVersionUE4 = 0;
  local_ac8.ArUEVer.FileVersionUE5 = 0;
  local_ac8.ArLicenseeUEVer = 0;
  local_ac8.ArEngineVer.Major = 0;
  local_ac8.ArEngineVer.Minor = 0;
  local_ac8.ArEngineVer.Patch = 0;
  local_ac8.ArEngineVer._6_2_ = 0;
  local_ac8.ArEngineVer.Changelist = 0;
  local_ac8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_ac8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_ac8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_ac8.SerializedProperty = (FProperty *)0x0;
  local_ac8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_ac8.bCustomVersionsAreReset = false;
  local_ac8._129_7_ = 0;
  local_ac8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_ac8);
  local_a38 = 0;
  local_ac8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_a28 = 0;
  local_a30 = param_2;
  FArchiveState::SetIsSaving(&local_ac8,true);
  (**(code **)(local_ac8._padding_ + 0x108))(&local_ac8,0);
  local_a38 = (longlong)(param_2->DataBuffer).ArrayNum;
  local_ac8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FArchiveState::SetShouldSkipUpdateCustomVersion(&local_ac8,true);
  pFVar3 = FConstraintHandle::GetType(param_1);
  pFVar4 = FPBDJointConstraintHandle::StaticType();
  if ((pFVar4->TypeName == pFVar3->TypeName) ||
     ((pFVar3->BaseType != (FConstraintHandleTypeID *)0x0 &&
      (bVar2 = FConstraintHandleTypeID::IsA(pFVar3->BaseType,pFVar4), bVar2)))) {
    FChaosVDDataWrapperUtils::BuildJointDataWrapper(&local_3d8,(FPBDJointConstraintHandle *)param_1)
    ;
    memset(local_8d8 + 0x140,0,0x3c0);
    FChaosVDJointConstraint::FChaosVDJointConstraint((FChaosVDJointConstraint *)(local_8d8 + 0x140))
    ;
    pUVar5 = FChaosVDJointConstraint::StaticStruct();
    pppuVar7 = (undefined ***)(local_8d8 + 0x140);
    pFVar6 = &local_3d8;
  }
  else {
    pFVar3 = FConstraintHandle::GetType(param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      pFVar4 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(&local_ad0,L"FCharacterGroundConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_ad0;
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar4;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
         ::__l2::STypeID.TypeName != pFVar3->TypeName) &&
       ((pFVar3->BaseType == (FConstraintHandleTypeID *)0x0 ||
        (bVar2 = FConstraintHandleTypeID::IsA
                           (pFVar3->BaseType,
                            &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                             ::__l2::STypeID), !bVar2)))) goto LAB_143e4bf17;
    FChaosVDDataWrapperUtils::BuildCharacterGroundConstraintDataWrapper
              ((FChaosVDCharacterGroundConstraint *)local_8d8,
               (FCharacterGroundConstraintHandle *)param_1);
    local_a0f = 0;
    local_a0b = 0;
    local_a09 = 0;
    local_9ef = 0;
    local_9eb = 0;
    local_9e9 = 0;
    local_9d7 = 0;
    local_9d3 = 0;
    local_9d1 = 0;
    local_997 = 0;
    local_993 = 0;
    local_991 = 0;
    local_92f = 0;
    local_92b = 0;
    local_929 = 0;
    local_a10 = 0;
    local_a18 = &___7FChaosVDCharacterGroundConstraint__6B_;
    local_9f8 = &___7FChaosVDCharacterGroundConstraintStateDataWrapper__6B_;
    local_a08 = ___xmm_ffffffffffffffffffffffffffffffff;
    uStack_a00 = _UNK_15060db28;
    local_9e8 = ___xmm_ffffffffffffffffffffffffffffffff;
    uStack_9e0 = _UNK_15060db28;
    local_9a0 = &___7FChaosVDCharacterGroundConstraintSettingsDataWrapper__6B_;
    local_9d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_9c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_938 = &___7FChaosVDCharacterGroundConstraintDataDataWrapper__6B_;
    local_9c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_9b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_9b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_9a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_990 = 0;
    local_8e8 = 0;
    local_9f0 = 0;
    local_9d8 = 0;
    local_998 = 0;
    local_988 = 0;
    uStack_980 = 0;
    local_978 = 0;
    uStack_970 = 0;
    local_968 = 0;
    uStack_960 = 0;
    local_958 = 0;
    uStack_950 = 0;
    local_948 = 0;
    uStack_940 = 0;
    local_930 = 0;
    local_928 = 0;
    uStack_920 = 0;
    local_918 = 0;
    uStack_910 = 0;
    local_908 = 0;
    uStack_900 = 0;
    local_8f8 = 0;
    uStack_8f0 = 0;
    pUVar5 = FChaosVDCharacterGroundConstraint::StaticStruct();
    pppuVar7 = &local_a18;
    pFVar6 = (FChaosVDJointConstraint *)local_8d8;
  }
  Serialization::Private::FastStructSerialize(pUVar5,pFVar6,(FArchive *)&local_ac8,pppuVar7);
LAB_143e4bf17:
  FArchive::~FArchive((FArchive *)&local_ac8);
  return;
}

// SerializeParticleStateToBuffer @ 143e4c460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSolverSerializer::SerializeParticleStateToBuffer
          (FSolverSerializer *this,TGeometryParticle<double,3> *param_1,
          FSerializedDataBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FChaosVDParticleDataWrapper *pFVar3;
  UScriptStruct *pUVar4;
  undefined1 auStackY_ca8 [32];
  FArchiveState local_c68;
  longlong local_bd8;
  FSerializedDataBuffer *local_bd0;
  undefined8 local_bc8;
  FChaosVDParticleDataWrapper local_bb8;
  FChaosVDParticleDataWrapper local_7d8;
  FChaosVDParticleDataWrapper local_3f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_ca8;
  if (param_1 == (TGeometryParticle<double,3> *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8876622860144082989>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                       ,0x2d,"InParticle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Chaos::Private::WriteParticleDataToBuffer<Chaos::TGeometryParticle<double,3>_>(Chaos::TGeometryParticle<double,3>*___ptr64,Chaos::FSerializedDataBuffer&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    local_c68._padding_ = 0;
    local_c68.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_c68.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c68.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_c68.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c68._40_8_ = 0;
    local_c68.ArSerializingDefaults = 0;
    local_c68.ArPortFlags = 0;
    local_c68.ArMaxSerializeSize = 0;
    local_c68.ArUEVer.FileVersionUE4 = 0;
    local_c68.ArUEVer.FileVersionUE5 = 0;
    local_c68.ArLicenseeUEVer = 0;
    local_c68.ArEngineVer.Major = 0;
    local_c68.ArEngineVer.Minor = 0;
    local_c68.ArEngineVer.Patch = 0;
    local_c68.ArEngineVer._6_2_ = 0;
    local_c68.ArEngineVer.Changelist = 0;
    local_c68.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c68.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c68.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c68.SerializedProperty = (FProperty *)0x0;
    local_c68.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c68.bCustomVersionsAreReset = false;
    local_c68._129_7_ = 0;
    local_c68.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c68);
    local_bd8 = 0;
    local_c68._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_bc8 = 0;
    local_bd0 = param_2;
    FArchiveState::SetIsSaving(&local_c68,true);
    (**(code **)(local_c68._padding_ + 0x108))(&local_c68,0);
    local_bd8 = (longlong)(param_2->DataBuffer).ArrayNum;
    local_c68._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveState::SetShouldSkipUpdateCustomVersion(&local_c68,true);
    FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper(&local_bb8);
    pFVar3 = FChaosVDDataWrapperUtils::BuildParticleDataWrapperFromGTParticle(&local_3f8,param_1);
    FChaosVDParticleDataWrapper::operator=(&local_bb8,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_3f8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper(&local_7d8);
    pUVar4 = FChaosVDParticleDataWrapper::StaticStruct();
    Serialization::Private::FastStructSerialize(pUVar4,&local_bb8,(FArchive *)&local_c68,&local_7d8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_7d8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_7d8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bb8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_bb8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_bb8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_c68);
  }
  return;
}

// SerializeParticleStateToBuffer @ 143e4c6a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FSolverSerializer::SerializeParticleStateToBuffer
          (FSolverSerializer *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FSerializedDataBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  FChaosVDParticleDataWrapper *pFVar3;
  UScriptStruct *pUVar4;
  undefined1 auStackY_ca8 [32];
  FArchiveState local_c68;
  longlong local_bd8;
  FSerializedDataBuffer *local_bd0;
  undefined8 local_bc8;
  FChaosVDParticleDataWrapper local_bb8;
  FChaosVDParticleDataWrapper local_7d8;
  FChaosVDParticleDataWrapper local_3f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_ca8;
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8876622860144082989>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Serialization\\SolverSerializer.cpp"
                       ,0x2d,"InParticle");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (2 < (byte)LogChaos._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`void___cdecl_Chaos::Private::WriteParticleDataToBuffer<Chaos::TGeometryParticleHandleImp<double,3,1>_>(Chaos::TGeometryParticleHandleImp<double,3,1>*___ptr64,Chaos::FSerializedDataBuffer&___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaos);
    }
  }
  else {
    local_c68._padding_ = 0;
    local_c68.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_c68.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c68.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_c68.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c68._40_8_ = 0;
    local_c68.ArSerializingDefaults = 0;
    local_c68.ArPortFlags = 0;
    local_c68.ArMaxSerializeSize = 0;
    local_c68.ArUEVer.FileVersionUE4 = 0;
    local_c68.ArUEVer.FileVersionUE5 = 0;
    local_c68.ArLicenseeUEVer = 0;
    local_c68.ArEngineVer.Major = 0;
    local_c68.ArEngineVer.Minor = 0;
    local_c68.ArEngineVer.Patch = 0;
    local_c68.ArEngineVer._6_2_ = 0;
    local_c68.ArEngineVer.Changelist = 0;
    local_c68.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c68.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c68.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c68.SerializedProperty = (FProperty *)0x0;
    local_c68.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c68.bCustomVersionsAreReset = false;
    local_c68._129_7_ = 0;
    local_c68.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c68);
    local_bd8 = 0;
    local_c68._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_bc8 = 0;
    local_bd0 = param_2;
    FArchiveState::SetIsSaving(&local_c68,true);
    (**(code **)(local_c68._padding_ + 0x108))(&local_c68,0);
    local_bd8 = (longlong)(param_2->DataBuffer).ArrayNum;
    local_c68._padding_ = (longlong)&___7FMemoryWriter__6B_;
    FArchiveState::SetShouldSkipUpdateCustomVersion(&local_c68,true);
    FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper(&local_bb8);
    pFVar3 = FChaosVDDataWrapperUtils::BuildParticleDataWrapperFromParticle(&local_3f8,param_1);
    FChaosVDParticleDataWrapper::operator=(&local_bb8,pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3f8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_3f8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper(&local_7d8);
    pUVar4 = FChaosVDParticleDataWrapper::StaticStruct();
    Serialization::Private::FastStructSerialize(pUVar4,&local_bb8,(FArchive *)&local_c68,&local_7d8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7d8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_7d8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_7d8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7d8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_bb8.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
    if (local_bb8.CollisionDataPerShape.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.CollisionDataPerShape.AllocatorInstance.Data);
    }
    if (local_bb8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_bb8.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_c68);
  }
  return;
}

// SerializeToBuffer @ 143e4ccf0

void __thiscall
Chaos::FSolverSerializer::SerializeToBuffer(FSolverSerializer *this,FSerializedDataBuffer *param_1)

{
  return;
}

// ~FSolverSerializer @ 14406bbc0

void __thiscall Chaos::FSolverSerializer::~FSolverSerializer(FSolverSerializer *this)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FSolverSerializer *SRWLock;
  
  SRWLock = this + 1;
  lVar6 = 0x20;
  puVar5 = (undefined8 *)&this[1].PendingMigratedPhysicsStateByProxy.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    SRWLock = (FSolverSerializer *)&SRWLock[-1].PendingMigratedPhysicsStateByProxy.field_0xaa8;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,TUniquePtr<Chaos::FSerializedDataBuffer,TDefaultDelete<Chaos::FSerializedDataBuffer>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)SRWLock);
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// operator() @ 1504a8e90

bool __thiscall
`Chaos::FSolverSerializer::ApplySerializedStateToConstraint'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8876622860144083292>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8876622860144083292>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504a9530

bool __thiscall
`Chaos::FSolverSerializer::SerializeConstraintStateToBuffer'::__l27::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8876622860144083142>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8876622860144083142>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

