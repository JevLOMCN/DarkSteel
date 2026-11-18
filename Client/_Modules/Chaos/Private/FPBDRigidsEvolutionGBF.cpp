// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 51

// <lambda_invoker_cdecl> @ 143cb1e90

void __cdecl
`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (TGeometryParticleHandleImp<double,3,1> *param_1,
          TGeometryParticleHandleImp<double,3,1> *param_2)

{
  return;
}

// ResetVSmoothFromForces<1> @ 143cfb5c0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ResetVSmoothFromForces<1>
          (FPBDRigidsEvolutionGBF *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  TVector<double,3> *pTVar15;
  float fVar16;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  
  fVar16 = CVars::SmoothedPositionLerpRate;
  if (__real_3f800000 <= CVars::SmoothedPositionLerpRate) {
    fVar16 = __real_3f800000;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  dVar11 = (double)fVar16;
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(param_1);
  dVar14 = __real_3fa1111111111111;
  dVar10 = __real_3f1a36e2e0000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)pTVar15 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x8 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&pTVar15->field_0x8 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x10 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)*(undefined8 *)&pTVar15->field_0x10 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (((pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::Acceleration(param_1),
       dVar10 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) & uVar13,
                                 (uint)*(undefined8 *)pTVar15 & uVar12) ||
       (dVar10 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x8 >> 0x20) &
                                  uVar13,(uint)*(undefined8 *)&pTVar15->field_0x8 & uVar12))) ||
      (dVar10 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x10 >> 0x20) &
                                 uVar13,(uint)*(undefined8 *)&pTVar15->field_0x10 & uVar12))))) {
    TKinematicGeometryParticlesImp<double,3,0>::GetV
              (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,
               (TVector<double,3> *)&local_d8,*(int *)&param_1->field_0x8);
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::Acceleration(param_1);
    dVar1 = *(double *)pTVar15;
    dVar2 = *(double *)&pTVar15->field_0x8;
    dVar3 = *(double *)&pTVar15->field_0x10;
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::LinearImpulseVelocity(param_1);
    dVar4 = *(double *)&pTVar15->field_0x10;
    dVar5 = *(double *)&pTVar15->field_0x8;
    dVar6 = *(double *)pTVar15;
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth(param_1);
    dVar7 = *(double *)&pTVar15->field_0x10;
    dVar8 = *(double *)&pTVar15->field_0x8;
    dVar9 = *(double *)pTVar15;
    pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth(param_1);
    *(double *)pTVar15 = ((dVar1 * dVar14 + local_d8 + dVar6) - dVar9) * dVar11 + dVar9;
    *(double *)&pTVar15->field_0x8 = ((dVar2 * dVar14 + local_d0 + dVar5) - dVar8) * dVar11 + dVar8;
    *(double *)&pTVar15->field_0x10 = ((dVar3 * dVar14 + local_c8 + dVar4) - dVar7) * dVar11 + dVar7
    ;
  }
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::AngularImpulseVelocity(param_1);
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) & uVar13,
                         (uint)*(undefined8 *)pTVar15 & uVar12) <= dVar10) &&
      ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x8 >> 0x20) & uVar13,
                        (uint)*(undefined8 *)&pTVar15->field_0x8 & uVar12) <= dVar10)) &&
     (((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x10 >> 0x20) & uVar13,
                        (uint)*(undefined8 *)&pTVar15->field_0x10 & uVar12) <= dVar10 &&
      (((pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::AngularAcceleration(param_1),
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)pTVar15 >> 0x20) & uVar13,
                         (uint)*(undefined8 *)pTVar15 & uVar12) <= dVar10 &&
        ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x8 >> 0x20) & uVar13,
                          (uint)*(undefined8 *)&pTVar15->field_0x8 & uVar12) <= dVar10)) &&
       ((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar15->field_0x10 >> 0x20) & uVar13,
                         (uint)*(undefined8 *)&pTVar15->field_0x10 & uVar12) <= dVar10)))))) {
    return;
  }
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)param_1,(TVector<double,3> *)&local_c0,
             *(int *)&param_1->field_0x8);
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::AngularAcceleration(param_1);
  dVar10 = *(double *)pTVar15;
  dVar1 = *(double *)&pTVar15->field_0x8;
  dVar2 = *(double *)&pTVar15->field_0x10;
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::AngularImpulseVelocity(param_1);
  dVar3 = *(double *)&pTVar15->field_0x10;
  dVar4 = *(double *)&pTVar15->field_0x8;
  dVar5 = *(double *)pTVar15;
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth(param_1);
  dVar6 = *(double *)&pTVar15->field_0x10;
  dVar7 = *(double *)&pTVar15->field_0x8;
  dVar8 = *(double *)pTVar15;
  pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::WSmooth(param_1);
  *(double *)pTVar15 = ((dVar10 * dVar14 + local_c0 + dVar5) - dVar8) * dVar11 + dVar8;
  *(double *)&pTVar15->field_0x8 = ((dVar1 * dVar14 + local_b8 + dVar4) - dVar7) * dVar11 + dVar7;
  *(double *)&pTVar15->field_0x10 = ((dVar2 * dVar14 + local_b0 + dVar3) - dVar6) * dVar11 + dVar6;
  return;
}

// FPBDRigidsEvolutionGBF @ 143d01bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPBDRigidsEvolutionGBF * __thiscall
Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF
          (FPBDRigidsEvolutionGBF *this,FPBDRigidsSOAs *param_1,
          THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *param_2,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_4,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_5,
          TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *param_6,bool param_7)

{
  int *piVar1;
  FPBDSuspensionConstraints *this_00;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  FFunctionStorage *pFVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FConstraintHandleTypeID *pFVar14;
  FTaskGraphInterface *pFVar15;
  FPBDRigidsEvolutionGBF *pFVar16;
  undefined ***pppuVar17;
  FFunctionStorage *pFVar18;
  TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
  *pTVar19;
  longlong lVar20;
  undefined1 auStackY_1b8 [32];
  code *local_158 [2];
  undefined **local_148;
  FPBDRigidsEvolutionGBF *local_140;
  undefined ***local_130;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *local_128;
  code *local_118;
  undefined **local_108;
  FPBDRigidsEvolutionGBF *local_100;
  undefined ***local_f0;
  FConstraintHandleTypeID local_e8;
  code *local_d8;
  longlong lStack_d0;
  FFunctionStorage local_c8;
  code *local_a8;
  undefined8 uStack_a0;
  FFunctionStorage local_98;
  code *local_78;
  TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
  local_68;
  TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
  *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_128 = param_3;
  FPBDRigidsEvolutionBase::FPBDRigidsEvolutionBase
            ((FPBDRigidsEvolutionBase *)this,param_1,param_2,param_7);
  this->_padding_ = (longlong)&___7FPBDRigidsEvolutionGBF_Chaos__6B_;
  FRigidClustering::FRigidClustering
            (&this->Clustering,this,
             *(TPBDRigidClusteredParticles<double,3> **)(this->_padding_ + 0x38),param_5);
  FPBDJointCombinedConstraints::FPBDJointCombinedConstraints(&this->JointConstraints);
  this_00 = &this->SuspensionConstraints;
  pFVar14 = FPBDSuspensionConstraintHandle::StaticType();
  local_e8.TypeName = pFVar14->TypeName;
  local_e8.BaseType = pFVar14->BaseType;
  FPBDConstraintContainer::FPBDConstraintContainer((FPBDConstraintContainer *)this_00,&local_e8);
  this_00->_padding_ = (longlong)&___7FPBDSuspensionConstraints_Chaos__6B_;
  (this->SuspensionConstraints).ConstrainedParticles.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).ConstrainedParticles.ArrayNum = 0;
  (this->SuspensionConstraints).ConstrainedParticles.ArrayMax = 0;
  (this->SuspensionConstraints).SuspensionLocalOffset.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).SuspensionLocalOffset.ArrayNum = 0;
  (this->SuspensionConstraints).SuspensionLocalOffset.ArrayMax = 0;
  (this->SuspensionConstraints).ConstraintSettings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).ConstraintSettings.ArrayNum = 0;
  (this->SuspensionConstraints).ConstraintSettings.ArrayMax = 0;
  (this->SuspensionConstraints).ConstraintResults.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).ConstraintResults.ArrayNum = 0;
  (this->SuspensionConstraints).ConstraintResults.ArrayMax = 0;
  (this->SuspensionConstraints).ConstraintEnabledStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).ConstraintEnabledStates.ArrayNum = 0;
  (this->SuspensionConstraints).ConstraintEnabledStates.ArrayMax = 0;
  (this->SuspensionConstraints).ConstraintSolverBodies.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).ConstraintSolverBodies.ArrayNum = 0;
  (this->SuspensionConstraints).ConstraintSolverBodies.ArrayMax = 0;
  (this->SuspensionConstraints).Handles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).Handles.ArrayNum = 0;
  (this->SuspensionConstraints).Handles.ArrayMax = 0;
  (this->SuspensionConstraints).CollisionSolvers.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).CollisionSolvers.ArrayNum = 0;
  (this->SuspensionConstraints).CollisionSolvers.ArrayMax = 0;
  (this->SuspensionConstraints).CollisionSolverManifoldPoints.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).CollisionSolverManifoldPoints.ArrayNum = 0;
  (this->SuspensionConstraints).CollisionSolverManifoldPoints.ArrayMax = 0;
  (this->SuspensionConstraints).StaticCollisionBodies.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionConstraints).StaticCollisionBodies.ArrayNum = 0;
  (this->SuspensionConstraints).StaticCollisionBodies.ArrayMax = 0;
  FCharacterGroundConstraintContainer::FCharacterGroundConstraintContainer
            (&this->CharacterGroundConstraints);
  (this->GravityForces)._padding_ = (longlong)&___7FPerParticleGravity_Chaos__6B_;
  *(undefined8 *)(this->GravityForces).MAccelerations = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[0].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[0].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 1) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[1].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[1].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 2) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[2].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[2].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 3) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[3].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[3].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 4) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[4].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[4].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 5) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[5].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[5].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 6) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[6].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[6].field_0x10 = 0xc08ea551eb851eb8;
  *(undefined8 *)((this->GravityForces).MAccelerations + 7) = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[7].field_0x8 = 0;
  *(undefined8 *)&(this->GravityForces).MAccelerations[7].field_0x10 = 0xc08ea551eb851eb8;
  bVar11 = FApp::ShouldUseThreadingForPerformance();
  iVar13 = MaxNumWorkers;
  if ((bVar11) && (GSingleThreadedPhysics == 0)) {
    pFVar15 = FTaskGraphInterface::Get();
    iVar12 = (**(code **)((longlong)*pFVar15 + 0x20))(pFVar15);
    if (iVar12 < iVar13) {
      iVar13 = iVar12;
    }
    iVar12 = 1;
    if (1 < iVar13) {
      iVar12 = iVar13;
    }
    iVar12 = (int)(2000 / (longlong)iVar12);
    iVar13 = 100;
    if (100 < iVar12) {
      iVar13 = iVar12;
    }
  }
  else {
    iVar13 = 2000;
  }
  FPBDCollisionConstraints::FPBDCollisionConstraints
            (&this->CollisionConstraints,param_1,(TArrayCollectionArray<bool> *)&this->_padding_,
             (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *)
             &this->_padding_,
             (TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
              *)&this->_padding_,param_2,iVar13,__real_408f400000000000);
  FSpatialAccelerationBroadPhase::FSpatialAccelerationBroadPhase(&this->BroadPhase,param_1);
  (this->CollisionDetector).BroadPhase = &this->BroadPhase;
  *(undefined8 *)&this->PreIntegrateCallback = 0;
  (this->CollisionDetector)._padding_ = (longlong)&this->CollisionConstraints;
  (this->CollisionDetector)._padding_ =
       (longlong)&___7FSpatialAccelerationCollisionDetector_Chaos__6B_;
  this->MidPhaseModifiers = local_128;
  this->CCDModifiers = param_4;
  *(undefined8 *)&(this->PreIntegrateCallback).field_0x28 = 0;
  *(undefined8 *)&this->PostIntegrateCallback = 0;
  *(undefined8 *)&(this->PostIntegrateCallback).field_0x28 = 0;
  *(undefined8 *)&this->PostDetectCollisionsCallback = 0;
  *(undefined8 *)&(this->PostDetectCollisionsCallback).field_0x28 = 0;
  *(undefined8 *)&this->PreSolveCallback = 0;
  *(undefined8 *)&(this->PreSolveCallback).field_0x28 = 0;
  *(undefined8 *)&this->PostSolveCallback = 0;
  *(undefined8 *)&(this->PostSolveCallback).field_0x28 = 0;
  *(undefined8 *)&this->InternalParticleInitilization = 0;
  *(undefined8 *)&(this->InternalParticleInitilization).field_0x28 = 0;
  (this->CCDManager).CCDParticles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).CCDParticles.ArrayNum = 0;
  (this->CCDManager).CCDParticles.ArrayMax = 0;
  (this->CCDManager).GroupedCCDParticles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).GroupedCCDParticles.ArrayNum = 0;
  (this->CCDManager).GroupedCCDParticles.ArrayMax = 0;
  *(undefined8 *)&(this->CCDManager).ParticleToCCDParticle = 0;
  *(undefined8 *)&(this->CCDManager).ParticleToCCDParticle.field_0x8 = 0;
  *(undefined8 *)&(this->CCDManager).ParticleToCCDParticle.field_0x20 = 0;
  this->CollisionModifiers = param_6;
  this->CurrentStepResimCacheImp = (FEvolutionResimCache *)0x0;
  *(undefined4 *)&(this->CCDManager).ParticleToCCDParticle.field_0x28 = 0;
  *(undefined4 *)&(this->CCDManager).ParticleToCCDParticle.field_0x2c = 0x80;
  *(undefined4 *)&(this->CCDManager).ParticleToCCDParticle.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CCDManager).ParticleToCCDParticle.field_0x34 = 0;
  *(undefined8 *)&(this->CCDManager).ParticleToCCDParticle.field_0x40 = 0;
  *(undefined4 *)&(this->CCDManager).ParticleToCCDParticle.field_0x48 = 0;
  (this->CCDManager).CCDConstraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).CCDConstraints.ArrayNum = 0;
  (this->CCDManager).CCDConstraints.ArrayMax = 0;
  (this->CCDManager).SortedCCDConstraints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).SortedCCDConstraints.ArrayNum = 0;
  (this->CCDManager).SortedCCDConstraints.ArrayMax = 0;
  (this->CCDManager).IslandStack.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandStack.ArrayNum = 0;
  (this->CCDManager).IslandStack.ArrayMax = 0;
  (this->CCDManager).IslandParticleStart.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandParticleStart.ArrayNum = 0;
  (this->CCDManager).IslandParticleStart.ArrayMax = 0;
  (this->CCDManager).IslandParticleNum.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandParticleNum.ArrayNum = 0;
  (this->CCDManager).IslandParticleNum.ArrayMax = 0;
  (this->CCDManager).IslandConstraintStart.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandConstraintStart.ArrayNum = 0;
  (this->CCDManager).IslandConstraintStart.ArrayMax = 0;
  (this->CCDManager).IslandConstraintNum.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandConstraintNum.ArrayNum = 0;
  (this->CCDManager).IslandConstraintNum.ArrayMax = 0;
  (this->CCDManager).IslandConstraintEnd.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CCDManager).IslandConstraintEnd.ArrayNum = 0;
  (this->CCDManager).IslandConstraintEnd.ArrayMax = 0;
  this->bIsDeterministic = false;
  this->InertiaConditioningEpoch = -1;
  (this->CDDScene).Object = (FChaosDDScene *)0x0;
  (this->CDDScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->CDDTickTimeline).Object = (FChaosDDTimeline *)0x0;
  (this->CDDTickTimeline).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined2 *)&this->_padding_ = 0x208;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  (this->CollisionConstraints).bCanDisableContacts = CVars::CollisionDisableCulledContacts != 0;
  (this->CollisionConstraints).DetectorSettings.BoundsExpansion = 3.0;
  (this->JointConstraints).LinearConstraints.Settings.bUseSimd =
       CVars::bChaosRigids_UseSimdForJointsSolver;
  Chaos::Private::FPBDIslandManager::SetMaterialContainers
            ((FPBDIslandManager *)&this->_padding_,
             (TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *)
             &this->_padding_,
             (TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
              *)&this->_padding_,param_2);
  Chaos::Private::FPBDIslandManager::SetGravityForces
            ((FPBDIslandManager *)&this->_padding_,&this->GravityForces);
  Chaos::Private::FPBDIslandManager::SetDisableCounterThreshold
            ((FPBDIslandManager *)&this->_padding_,CVars::DisableThreshold);
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_&,double>
              ::Call;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>,void,Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_const_&,double>
             ::Call;
  local_f0 = (undefined ***)0x0;
  local_c8.HeapAllocation = (void *)0x0;
  local_100 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_1>,0,0>
  ::CloneToEmptyStorage(&local_108,&local_c8);
  lVar20 = this->_padding_;
  lVar9 = this->_padding_;
  uVar4 = *(undefined4 *)&this->_padding_;
  uVar5 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  uVar6 = *(undefined4 *)&this->_padding_;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar2 = this->_padding_;
  pFVar8 = (FFunctionStorage *)this->_padding_;
  this->_padding_ = (longlong)local_d8;
  this->_padding_ = lStack_d0;
  *(undefined4 *)&this->_padding_ = local_c8.InlineAllocation._0_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8.InlineAllocation._4_4_;
  *(undefined4 *)&this->_padding_ = local_c8.InlineAllocation._8_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8.InlineAllocation._12_4_;
  *(undefined4 *)&this->_padding_ = local_c8.InlineAllocation._16_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8.InlineAllocation._20_4_;
  *(undefined4 *)&this->_padding_ = local_c8.HeapAllocation._0_4_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_c8.HeapAllocation._4_4_;
  local_d8 = (code *)lVar20;
  lStack_d0 = lVar9;
  local_c8.InlineAllocation._0_4_ = uVar4;
  local_c8.InlineAllocation._4_4_ = uVar5;
  local_c8.InlineAllocation._8_4_ = uVar6;
  local_c8.InlineAllocation._12_4_ = uVar7;
  local_c8.InlineAllocation._16_8_ = lVar2;
  local_c8.HeapAllocation = pFVar8;
  if (lVar20 != 0) {
    pFVar18 = &local_c8;
    if (pFVar8 != (FFunctionStorage *)0x0) {
      pFVar18 = pFVar8;
    }
    (**(code **)(*(longlong *)pFVar18->InlineAllocation + 0x10))();
  }
  if (local_118 != (code *)0x0) {
    pppuVar17 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar17 = local_f0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  local_148 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::`2'::<lambda_2>,0,0>
               ::_vftable_;
  local_158[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_2>,void,Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double>
                 ::Call;
  local_130 = (undefined ***)0x0;
  local_140 = this;
  if ((((code **)this->_padding_ <= local_158) &&
      (local_158 < (code **)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 6
      )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FPBDRigidsEvolutionGBF *)(*pcVar3)();
    return pFVar16;
  }
  iVar13 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1030,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar13 + 1;
  lVar2 = this->_padding_;
  lVar20 = (longlong)iVar13 * 0x30;
  *(code **)(lVar20 + lVar2) = local_158[0];
  *(undefined8 *)(lVar2 + lVar20 + 0x28) = 0;
  if (*(longlong *)(lVar20 + lVar2) != 0) {
    pppuVar17 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar17 = local_130;
    }
    (*(code *)**pppuVar17)();
  }
  if (local_158[0] != (code *)0x0) {
    pppuVar17 = &local_148;
    if (local_130 != (undefined ***)0x0) {
      pppuVar17 = local_130;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  FPBDRigidsEvolutionBase::AddConstraintContainer
            ((FPBDRigidsEvolutionBase *)this,(FPBDConstraintContainer *)this_00,
             CVars::ChaosSolverSuspensionPriority);
  FPBDRigidsEvolutionBase::AddConstraintContainer
            ((FPBDRigidsEvolutionBase *)this,(FPBDConstraintContainer *)&this->CollisionConstraints,
             CVars::ChaosSolverCollisionPriority);
  FPBDRigidsEvolutionBase::AddConstraintContainer
            ((FPBDRigidsEvolutionBase *)this,(FPBDConstraintContainer *)&this->JointConstraints,
             CVars::ChaosSolverJointPriority);
  FPBDRigidsEvolutionBase::AddConstraintContainer
            ((FPBDRigidsEvolutionBase *)this,
             (FPBDConstraintContainer *)&(this->JointConstraints).NonLinearConstraints,
             CVars::ChaosSolverJointPriority);
  FPBDRigidsEvolutionBase::AddConstraintContainer
            ((FPBDRigidsEvolutionBase *)this,
             (FPBDConstraintContainer *)&this->CharacterGroundConstraints,
             CVars::ChaosSolverCharacterGroundConstraintPriority);
  local_50 = (TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
              *)0x0;
  local_68._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXPEBV__TGeometryParticleHandleImp_N_02_00_Chaos__0_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_98.HeapAllocation = (void *)0x0;
  local_68.Obj = `Chaos::FPBDRigidsEvolutionGBF::FPBDRigidsEvolutionGBF'::__l2::<lambda_3>::
                 <lambda_invoker_cdecl>;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
             ::Call;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),void,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_*>
             ::Call;
  UE::Core::Private::Function::
  TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
  ::CloneToEmptyStorage(&local_68,&local_98);
  lVar2 = *(longlong *)&this->InternalParticleInitilization;
  uVar10 = *(undefined8 *)&(this->InternalParticleInitilization).field_0x8;
  pFVar8 = *(FFunctionStorage **)&(this->InternalParticleInitilization).field_0x28;
  *(code **)&this->InternalParticleInitilization = local_a8;
  *(undefined8 *)&(this->InternalParticleInitilization).field_0x8 = uStack_a0;
  (this->InternalParticleInitilization).field_0x10 = local_98.InlineAllocation[0];
  (this->InternalParticleInitilization).field_0x11 = local_98.InlineAllocation[1];
  (this->InternalParticleInitilization).field_0x12 = local_98.InlineAllocation[2];
  (this->InternalParticleInitilization).field_0x13 = local_98.InlineAllocation[3];
  (this->InternalParticleInitilization).field_0x14 = local_98.InlineAllocation[4];
  (this->InternalParticleInitilization).field_0x15 = local_98.InlineAllocation[5];
  (this->InternalParticleInitilization).field_0x16 = local_98.InlineAllocation[6];
  (this->InternalParticleInitilization).field_0x17 = local_98.InlineAllocation[7];
  (this->InternalParticleInitilization).field_0x18 = local_98.InlineAllocation[8];
  (this->InternalParticleInitilization).field_0x19 = local_98.InlineAllocation[9];
  (this->InternalParticleInitilization).field_0x1a = local_98.InlineAllocation[10];
  (this->InternalParticleInitilization).field_0x1b = local_98.InlineAllocation[0xb];
  (this->InternalParticleInitilization).field_0x1c = local_98.InlineAllocation[0xc];
  (this->InternalParticleInitilization).field_0x1d = local_98.InlineAllocation[0xd];
  (this->InternalParticleInitilization).field_0x1e = local_98.InlineAllocation[0xe];
  (this->InternalParticleInitilization).field_0x1f = local_98.InlineAllocation[0xf];
  (this->InternalParticleInitilization).field_0x20 = local_98.InlineAllocation[0x10];
  (this->InternalParticleInitilization).field_0x21 = local_98.InlineAllocation[0x11];
  (this->InternalParticleInitilization).field_0x22 = local_98.InlineAllocation[0x12];
  (this->InternalParticleInitilization).field_0x23 = local_98.InlineAllocation[0x13];
  (this->InternalParticleInitilization).field_0x24 = local_98.InlineAllocation[0x14];
  (this->InternalParticleInitilization).field_0x25 = local_98.InlineAllocation[0x15];
  (this->InternalParticleInitilization).field_0x26 = local_98.InlineAllocation[0x16];
  (this->InternalParticleInitilization).field_0x27 = local_98.InlineAllocation[0x17];
  *(undefined4 *)&(this->InternalParticleInitilization).field_0x28 = local_98.HeapAllocation._0_4_;
  *(undefined4 *)&(this->InternalParticleInitilization).field_0x2c = local_98.HeapAllocation._4_4_;
  local_a8 = (code *)lVar2;
  uStack_a0 = uVar10;
  local_98.InlineAllocation[0] = (this->InternalParticleInitilization).field_0x10;
  local_98.InlineAllocation[1] = (this->InternalParticleInitilization).field_0x11;
  local_98.InlineAllocation[2] = (this->InternalParticleInitilization).field_0x12;
  local_98.InlineAllocation[3] = (this->InternalParticleInitilization).field_0x13;
  local_98.InlineAllocation[4] = (this->InternalParticleInitilization).field_0x14;
  local_98.InlineAllocation[5] = (this->InternalParticleInitilization).field_0x15;
  local_98.InlineAllocation[6] = (this->InternalParticleInitilization).field_0x16;
  local_98.InlineAllocation[7] = (this->InternalParticleInitilization).field_0x17;
  local_98.InlineAllocation[8] = (this->InternalParticleInitilization).field_0x18;
  local_98.InlineAllocation[9] = (this->InternalParticleInitilization).field_0x19;
  local_98.InlineAllocation[10] = (this->InternalParticleInitilization).field_0x1a;
  local_98.InlineAllocation[0xb] = (this->InternalParticleInitilization).field_0x1b;
  local_98.InlineAllocation[0xc] = (this->InternalParticleInitilization).field_0x1c;
  local_98.InlineAllocation[0xd] = (this->InternalParticleInitilization).field_0x1d;
  local_98.InlineAllocation[0xe] = (this->InternalParticleInitilization).field_0x1e;
  local_98.InlineAllocation[0xf] = (this->InternalParticleInitilization).field_0x1f;
  local_98.InlineAllocation[0x10] = (this->InternalParticleInitilization).field_0x20;
  local_98.InlineAllocation[0x11] = (this->InternalParticleInitilization).field_0x21;
  local_98.InlineAllocation[0x12] = (this->InternalParticleInitilization).field_0x22;
  local_98.InlineAllocation[0x13] = (this->InternalParticleInitilization).field_0x23;
  local_98.InlineAllocation[0x14] = (this->InternalParticleInitilization).field_0x24;
  local_98.InlineAllocation[0x15] = (this->InternalParticleInitilization).field_0x25;
  local_98.InlineAllocation[0x16] = (this->InternalParticleInitilization).field_0x26;
  local_98.InlineAllocation[0x17] = (this->InternalParticleInitilization).field_0x27;
  local_98.HeapAllocation = pFVar8;
  if (lVar2 != 0) {
    pFVar18 = &local_98;
    if (pFVar8 != (FFunctionStorage *)0x0) {
      pFVar18 = pFVar8;
    }
    (**(code **)(*(longlong *)pFVar18->InlineAllocation + 0x10))();
  }
  if (local_78 != (code *)0x0) {
    pTVar19 = &local_68;
    if (local_50 !=
        (TFunction_OwnedObject<void_(__cdecl*)(Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),0,0>
         *)0x0) {
      pTVar19 = local_50;
    }
    (**(code **)(pTVar19->_padding_ + 0x10))();
  }
  return this;
}

// ~FPBDRigidsEvolutionGBF @ 143d03830

void __thiscall Chaos::FPBDRigidsEvolutionGBF::~FPBDRigidsEvolutionGBF(FPBDRigidsEvolutionGBF *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FPBDRigidsEvolutionGBF_Chaos__6B_;
  Chaos::Private::FPBDIslandManager::Reset((FPBDIslandManager *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDTickTimeline).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CDDScene).SharedReferenceCount.ReferenceController);
  FCCDManager::~FCCDManager(&this->CCDManager);
  if (*(longlong *)&this->InternalParticleInitilization != 0) {
    plVar1 = *(longlong **)&(this->InternalParticleInitilization).field_0x28;
    plVar2 = (longlong *)&(this->InternalParticleInitilization).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PostSolveCallback != 0) {
    plVar1 = *(longlong **)&(this->PostSolveCallback).field_0x28;
    plVar2 = (longlong *)&(this->PostSolveCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PreSolveCallback != 0) {
    plVar1 = *(longlong **)&(this->PreSolveCallback).field_0x28;
    plVar2 = (longlong *)&(this->PreSolveCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PostDetectCollisionsCallback != 0) {
    plVar1 = *(longlong **)&(this->PostDetectCollisionsCallback).field_0x28;
    plVar2 = (longlong *)&(this->PostDetectCollisionsCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PostIntegrateCallback != 0) {
    plVar1 = *(longlong **)&(this->PostIntegrateCallback).field_0x28;
    plVar2 = (longlong *)&(this->PostIntegrateCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->PreIntegrateCallback != 0) {
    plVar1 = *(longlong **)&(this->PreIntegrateCallback).field_0x28;
    plVar2 = (longlong *)&(this->PreIntegrateCallback).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  (this->CollisionDetector)._padding_ = (longlong)&___7FCollisionDetector_Chaos__6B_;
  FSpatialAccelerationBroadPhase::~FSpatialAccelerationBroadPhase(&this->BroadPhase);
  FPBDCollisionConstraints::~FPBDCollisionConstraints(&this->CollisionConstraints);
  (this->GravityForces)._padding_ = (longlong)&___7FPerParticleGravity_Chaos__6B_;
  FCharacterGroundConstraintContainer::~FCharacterGroundConstraintContainer
            (&this->CharacterGroundConstraints);
  FPBDSuspensionConstraints::~FPBDSuspensionConstraints(&this->SuspensionConstraints);
  FPBDJointConstraints::~FPBDJointConstraints(&(this->JointConstraints).NonLinearConstraints);
  FPBDJointConstraints::~FPBDJointConstraints(&(this->JointConstraints).LinearConstraints);
  FRigidClustering::~FRigidClustering(&this->Clustering);
  FPBDRigidsEvolutionBase::~FPBDRigidsEvolutionBase((FPBDRigidsEvolutionBase *)this);
  return;
}

// operator() @ 143d0d1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FPBDRigidsEvolutionGBF::
DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l24::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  EKinematicTargetMode EVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 *puVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  byte bVar21;
  bool bVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  FKinematicTarget *pFVar26;
  TVector<double,3> *pTVar27;
  TRotation<float,3> *pTVar28;
  TQuat<float> *pTVar29;
  ClusterId *pCVar30;
  IPhysicsProxyBase *pIVar31;
  IPhysicsProxyBase *pIVar32;
  bool *pbVar33;
  FUniqueIdx *pFVar34;
  FPendingSpatialData *pFVar35;
  TGeometryParticle<double,3> **ppTVar36;
  FSpatialAccelerationIdx *pFVar37;
  TGeometryParticleHandleImp<double,3,0> *pTVar38;
  uint uVar39;
  longlong lVar40;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticles<double,3> *this_01;
  longlong lVar41;
  uint uVar42;
  ForAnyElementType *pFVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  uint uVar53;
  float fVar54;
  uint uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  float fVar69;
  undefined1 auStackY_3c8 [32];
  TGeometryParticleHandleImp<double,3,0> local_398;
  undefined1 local_378 [8];
  undefined8 uStack_370;
  ulonglong local_368;
  undefined1 local_360 [16];
  double local_350;
  int local_348;
  TVector<float,3> local_340;
  double local_330;
  double dStack_328;
  double local_320;
  TQuat<float> local_318;
  TGeometryParticle<double,3> *local_308;
  TGeometryParticleHandleImp<double,3,1> *pTStack_300;
  int local_2f8;
  FCollisionFilterData FStack_2f4;
  FCollisionFilterData FStack_2e4;
  uint local_2d4;
  TVector<float,3> local_2d0;
  TVector<float,3> local_2c4;
  TRotation<float,3> local_2b8;
  longlong local_2a8;
  TVector<float,3> local_2a0;
  TVector<float,3> local_294;
  TVector<float,3> local_288;
  double local_278;
  double dStack_270;
  double local_268;
  TVector<double,3> local_260;
  TRotation<float,3> local_248;
  TQuat<float> local_238;
  TVector<double,3> local_228;
  TVector<double,3> local_210;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TRotation<float,3> local_1d8;
  TQuat<float> local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  lVar41 = *(longlong *)this;
  uVar45 = (ulonglong)param_1;
  uVar39 = *(int *)(lVar41 + 0x3c8) + param_3;
  uVar42 = 0;
  if ((int)uVar39 < *(int *)(lVar41 + 0x3a0)) {
    uVar42 = ~uVar39 >> 0x1f;
  }
  local_398._16_4_ = param_1;
  local_348 = param_3;
  if ((uVar42 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar43 = (ForAnyElementType *)((longlong)(int)uVar39 * 0x10 + *(longlong *)(lVar41 + 0x398));
  uVar42 = param_2 - param_1;
  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
  }
  piVar1 = (int *)((longlong)&pFVar43[1].Data + 4);
  if (*piVar1 < (int)uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar42,pFVar43,*(int *)&pFVar43[1].Data,piVar1);
  }
  uVar39 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar42 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((longlong)uVar45 < (longlong)param_2) {
    uVar53 = (uint)__xmm_80000000000000008000000000000000;
    uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar68 = (undefined4)__real_3e45798ee0000000;
    uVar61 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    uVar46 = uVar45;
    fVar58 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
    fVar59 = _UNK_1506895d4;
    fVar60 = _UNK_1506895d8;
    fVar69 = _UNK_1506895dc;
    uVar63 = ___xmm_00000000000000003ff0000000000000;
    uVar64 = _UNK_150689518;
    uVar65 = ___xmm_3ff00000000000003ff0000000000000;
    uVar66 = _UNK_150689688;
    local_2a8 = (longlong)param_2;
    do {
      plVar7 = *(longlong **)((longlong)this + 8);
      uVar44 = (uint)uVar46;
      uVar24 = 0;
      if ((int)uVar44 < (int)plVar7[1]) {
        uVar24 = ~uVar44 >> 0x1f;
      }
      local_368 = uVar45;
      if ((uVar24 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar8 = *(undefined8 **)(*plVar7 + uVar45 * 8);
      this_01 = (TPBDRigidParticles<double,3> *)*puVar8;
      uVar24 = *(uint *)(puVar8 + 1);
      if (this_01 == (TPBDRigidParticles<double,3> *)0x0) {
        local_398._padding_._4_1_ = 0;
      }
      else {
        local_398._padding_._4_1_ = (byte)this_01->_padding_;
      }
      uVar25 = 0;
      if ((int)uVar24 < (int)this_01->_padding_) {
        uVar25 = ~uVar24 >> 0x1f;
      }
      local_398._padding_ = (longlong)this_01;
      local_398._padding_._0_4_ = uVar24;
      if ((uVar25 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (*(char *)((longlong)(int)uVar24 + this_01->_padding_) == '\0') {
        pFVar26 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,uVar24);
        pTVar27 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,uVar24);
        local_330 = *(double *)pTVar27;
        dStack_328 = *(double *)&pTVar27->field_0x8;
        local_320 = *(double *)&pTVar27->field_0x10;
        uVar44 = 0;
        if ((int)uVar24 < (int)this_01->_padding_) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        dVar49 = local_320;
        dVar5 = dStack_328;
        bVar22 = false;
        puVar8 = (undefined8 *)(this_01->_padding_ + (longlong)(int)uVar24 * 0x10);
        local_318._0_8_ = *puVar8;
        local_318._8_8_ = puVar8[1];
        EVar6 = pFVar26->Mode;
        if (EVar6 == Reset) {
          local_2d0._0_8_ = 0;
          local_2d0._8_4_ = 0;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetVf
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,uVar24,&local_2d0);
          local_2c4._0_8_ = 0;
          local_2c4._8_4_ = 0;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetWf
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,uVar24,&local_2c4);
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::ClearIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_398);
          pFVar26->Mode = None;
        }
        else if (EVar6 == Position) {
          local_378 = (undefined1  [8])0x0;
          uStack_370 = 0;
          if (*(char *)((longlong)this + 0x20) == '\0') {
            dVar48 = *(double *)((longlong)this + 0x18);
            local_1f8 = *(double *)&pFVar26->Position;
            dStack_1f0 = *(double *)&(pFVar26->Position).field_0x8;
            local_1e8 = *(double *)&(pFVar26->Position).field_0x10;
            uVar62 = SUB84(local_330,0);
            uVar67 = (undefined4)((ulonglong)local_330 >> 0x20);
            dVar14 = (local_1f8 - local_330) * dVar48 + local_330;
            dVar47 = (dStack_1f0 - dStack_328) * dVar48 + dStack_328;
            dVar13 = (local_1e8 - local_320) * dVar48 + local_320;
            local_360._8_8_ = dVar47;
            local_360._0_8_ = dVar14;
            local_350 = dVar13;
            if ((pFVar26->Mode != Position) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mode == EKinematicTargetMode::Position",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                    ,0x4f,L""), bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            local_238.X = *(float *)&(pFVar26->Rotation).field_0x0;
            local_238.Y = *(float *)&(pFVar26->Rotation).field_0x4;
            local_238.Z = *(float *)&(pFVar26->Rotation).field_0x8;
            local_238.W = *(float *)&(pFVar26->Rotation).field_0xc;
            pTVar29 = UE::Math::TQuat<float>::Slerp_NotNormalized
                                (&local_1c8,&local_318,&local_238,(float)dVar48);
            local_360._8_4_ = SUB84(dVar47,0);
            local_360._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
            fVar2 = pTVar29->X;
            fVar3 = pTVar29->Y;
            fVar16 = pTVar29->Z;
            fVar17 = pTVar29->W;
            fVar52 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar54 = fVar2 * fVar2 + fVar3 * fVar3;
            fVar56 = fVar17 * fVar17 + fVar16 * fVar16;
            fVar57 = fVar16 * fVar16 + fVar17 * fVar17;
            auVar50._0_4_ = fVar56 + fVar52;
            auVar50._4_4_ = fVar57 + fVar54;
            auVar50._8_4_ = fVar52 + fVar56;
            auVar50._12_4_ = fVar54 + fVar57;
            auVar51 = sqrtps(auVar50,auVar50);
            auVar51 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar51);
            fVar58 = (float)((uint)(auVar51._0_4_ * fVar2) & -(uint)(fVar58 <= auVar50._0_4_) |
                            ~-(uint)(fVar58 <= auVar50._0_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[0]);
            fVar59 = (float)((uint)(auVar51._4_4_ * fVar3) & -(uint)(fVar59 <= auVar50._4_4_) |
                            ~-(uint)(fVar59 <= auVar50._4_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[1]);
            fVar60 = (float)((uint)(auVar51._8_4_ * fVar16) & -(uint)(fVar60 <= auVar50._8_4_) |
                            ~-(uint)(fVar60 <= auVar50._8_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[2]);
            local_378._4_4_ = fVar59;
            local_378._0_4_ = fVar58;
            uStack_370._4_4_ =
                 (uint)(auVar51._12_4_ * fVar17) & -(uint)(fVar69 <= auVar50._12_4_) |
                 ~-(uint)(fVar69 <= auVar50._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
            uStack_370._0_4_ = fVar60;
          }
          else {
            dVar14 = *(double *)&pFVar26->Position;
            dVar47 = *(double *)&(pFVar26->Position).field_0x8;
            local_360 = *(undefined1 (*) [16])&pFVar26->Position;
            local_350 = *(double *)&(pFVar26->Position).field_0x10;
            if ((pFVar26->Mode != Position) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mode == EKinematicTargetMode::Position",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                    ,0x4f,L""), bVar23)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            fVar58 = *(float *)&pFVar26->Rotation;
            fVar59 = *(float *)&(pFVar26->Rotation).field_0x4;
            local_378 = *(undefined1 (*) [8])&pFVar26->Rotation;
            puVar15 = &(pFVar26->Rotation).field_0x8;
            fVar60 = *(float *)puVar15;
            uStack_370 = *(undefined8 *)puVar15;
            pFVar26->Mode = Reset;
            uVar62 = SUB84(local_330,0);
            uVar67 = (undefined4)((ulonglong)local_330 >> 0x20);
            dVar49 = local_320;
            dVar5 = dStack_328;
            dVar13 = local_350;
          }
          dVar48 = (double)CONCAT44(uVar67,uVar62) - dVar14;
          dVar48 = (double)CONCAT44((uint)((ulonglong)dVar48 >> 0x20) & uVar39,
                                    SUB84(dVar48,0) & uVar42);
          if ((((double)CONCAT44(uVar61,uVar68) <= dVar48 &&
                dVar48 != (double)CONCAT44(uVar61,uVar68)) ||
              (uVar53 = SUB84(dVar5 - dVar47,0) & uVar42,
              uVar55 = (uint)((ulonglong)(dVar5 - dVar47) >> 0x20) & uVar39,
              (double)CONCAT44(uVar61,uVar68) <= (double)CONCAT44(uVar55,uVar53) &&
              (double)CONCAT44(uVar55,uVar53) != (double)CONCAT44(uVar61,uVar68))) ||
             (dVar48 = (double)CONCAT44((uint)((ulonglong)(dVar49 - dVar13) >> 0x20) & uVar39,
                                        SUB84(dVar49 - dVar13,0) & uVar42),
             (double)CONCAT44(uVar61,uVar68) <= dVar48 && dVar48 != (double)CONCAT44(uVar61,uVar68))
             ) {
            bVar23 = true;
          }
          else {
            bVar23 = false;
          }
          uVar53 = SUB84((double)fVar58 - (double)local_318.X,0) & uVar42;
          uVar55 = (uint)((ulonglong)((double)fVar58 - (double)local_318.X) >> 0x20) & uVar39;
          if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar55,uVar53) &&
                (double)CONCAT44(uVar55,uVar53) != __real_3f1a36e2e0000000) ||
              (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)((double)fVar59 - (double)local_318.Y) >> 0x20) &
                                uVar39,SUB84((double)fVar59 - (double)local_318.Y,0) & uVar42))) ||
             (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)((double)fVar60 - (double)local_318.Z) >> 0x20) &
                               uVar39,SUB84((double)fVar60 - (double)local_318.Z,0) & uVar42))) {
            bVar20 = true;
          }
          else {
            bVar20 = false;
          }
          if ((bVar23) || (bVar20)) {
            bVar22 = true;
          }
          dVar48 = *(double *)((longlong)this + 0x10);
          local_340._0_8_ = 0;
          local_340._8_4_ = 0;
          local_268 = 0.0;
          local_278 = 0.0;
          dStack_270 = 0.0;
          if (dVar48 <= __real_3eb0c6f7a0000000) {
LAB_143d0daaa:
            uVar68 = 0;
            uVar61 = 0;
            uVar62 = 0;
          }
          else {
            if (bVar23) {
              dStack_270 = __real_3ff0000000000000 / dVar48;
              local_278 = (dVar14 - (double)CONCAT44(uVar67,uVar62)) * dStack_270;
              local_268 = dStack_270 * (dVar13 - dVar49);
              dStack_270 = dStack_270 * (dVar47 - dVar5);
            }
            if (!bVar20) goto LAB_143d0daaa;
            Chaos::TRotation<float,3>::CalculateAngularVelocity1
                      (&local_294,(TRotation<float,3> *)&local_318,(TRotation<float,3> *)local_378,
                       (float)dVar48);
            uVar61 = local_294._0_4_;
            uVar62 = local_294._4_4_;
            local_340._0_8_ = local_294._0_8_;
            uVar68 = local_294._8_4_;
          }
          uVar53 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar53 = ~uVar24 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar41 = this_01->_padding_;
          auVar51._8_4_ = SUB84(dVar47,0);
          auVar51._0_8_ = dVar14;
          auVar51._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          *(undefined1 (*) [16])(lVar41 + (longlong)(int)uVar24 * 0x18) = auVar51;
          *(double *)(lVar41 + 0x10 + (longlong)(int)uVar24 * 0x18) = local_350;
          local_2b8._0_8_ = local_378;
          local_2b8._8_8_ = uStack_370;
          uVar53 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar53 = ~uVar24 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar8 = (undefined8 *)(this_01->_padding_ + (longlong)(int)uVar24 * 0x10);
          *puVar8 = local_2b8._0_8_;
          puVar8[1] = local_2b8._8_8_;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,uVar24,
                     (TVector<double,3> *)&local_278);
          uVar53 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar53 = ~uVar24 >> 0x1f;
          }
          if ((uVar53 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar41 = this_01->_padding_;
          *(ulonglong *)(lVar41 + (longlong)(int)uVar24 * 0xc) = CONCAT44(uVar62,uVar61);
          *(undefined4 *)(lVar41 + 8 + (longlong)(int)uVar24 * 0xc) = uVar68;
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::SetIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_398);
          uVar68 = (undefined4)__real_3e45798ee0000000;
          uVar61 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar53 = (uint)__xmm_80000000000000008000000000000000;
          uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          fVar58 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          fVar59 = _UNK_1506895d4;
          fVar60 = _UNK_1506895d8;
          fVar69 = _UNK_1506895dc;
          uVar63 = ___xmm_00000000000000003ff0000000000000;
          uVar64 = _UNK_150689518;
          uVar65 = ___xmm_3ff00000000000003ff0000000000000;
          uVar66 = _UNK_150689688;
        }
        else if (EVar6 == Velocity) {
          bVar22 = true;
          pTVar27 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,uVar24);
          uVar44 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar44 = ~uVar24 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar49 = *(double *)((longlong)this + 0x10);
          uVar4 = *(undefined8 *)(this_01->_padding_ + 4 + (longlong)(int)uVar24 * 0xc);
          fVar2 = *(float *)(this_01->_padding_ + (longlong)(int)uVar24 * 0xc);
          uVar44 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar44 = ~uVar24 >> 0x1f;
          }
          dVar5 = *(double *)((longlong)this + 0x10);
          dVar13 = *(double *)&pTVar27->field_0x8;
          dVar48 = *(double *)pTVar27;
          dVar14 = (double)(float)((ulonglong)uVar4 >> 0x20) * dVar49 +
                   *(double *)&pTVar27->field_0x10;
          if ((uVar44 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          uVar44 = (uint)local_398._padding_;
          lVar9 = local_398._padding_;
          lVar41 = this_01->_padding_;
          *(double *)(lVar41 + (longlong)(int)uVar24 * 0x18) = (double)fVar2 * dVar5 + dVar48;
          auVar12._8_4_ = SUB84(dVar14,0);
          auVar12._0_8_ = (double)(float)uVar4 * dVar49 + dVar13;
          auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          *(undefined1 (*) [16])(lVar41 + 8 + (longlong)(int)uVar24 * 0x18) = auVar12;
          lVar41 = (longlong)(int)(uint)local_398._padding_;
          dVar49 = *(double *)((longlong)this + 0x10);
          uVar24 = 0;
          if ((int)(uint)local_398._padding_ < (int)*(longlong *)(local_398._padding_ + 0x2b0)) {
            uVar24 = ~(uint)local_398._padding_ >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_2a0._0_8_ = *(undefined8 *)(*(longlong *)(lVar9 + 0x2a8) + lVar41 * 0xc);
          local_2a0._8_4_ = *(undefined4 *)(*(longlong *)(lVar9 + 0x2a8) + 8 + lVar41 * 0xc);
          uVar24 = 0;
          if ((int)uVar44 < (int)*(longlong *)(lVar9 + 0x50)) {
            uVar24 = ~uVar44 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar23)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          puVar8 = (undefined8 *)(*(longlong *)(lVar9 + 0x48) + (longlong)(int)uVar44 * 0x10);
          local_248._0_8_ = *puVar8;
          local_248._8_8_ = puVar8[1];
          pTVar28 = Chaos::TRotation<float,3>::IntegrateRotationWithAngularVelocity
                              (&local_1d8,&local_248,&local_2a0,(float)dVar49);
          Chaos::TGeometryParticleHandleImp<double,3,0>::SetRf(&local_398,pTVar28,false);
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::SetIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_398);
          this_01 = (TPBDRigidParticles<double,3> *)lVar9;
          uVar24 = uVar44;
        }
        pTVar27 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,uVar24);
        uVar18 = *(undefined8 *)pTVar27;
        uVar19 = *(undefined8 *)&pTVar27->field_0x8;
        uVar4 = *(undefined8 *)&pTVar27->field_0x10;
        uVar44 = 0;
        if ((int)uVar24 < *(int *)&(this_01->MP).field_0x10) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar41 = *(longlong *)&(this_01->MP).field_0x8;
        puVar8 = (undefined8 *)(lVar41 + (longlong)(int)uVar24 * 0x18);
        *puVar8 = uVar18;
        puVar8[1] = uVar19;
        *(undefined8 *)(lVar41 + 0x10 + (longlong)(int)uVar24 * 0x18) = uVar4;
        uVar44 = 0;
        if ((int)uVar24 < (int)this_01->_padding_) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar8 = (undefined8 *)(this_01->_padding_ + (longlong)(int)uVar24 * 0x10);
        uVar4 = *puVar8;
        uVar18 = puVar8[1];
        uVar44 = 0;
        if ((int)uVar24 < *(int *)&(this_01->MQ).field_0x10) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        puVar8 = (undefined8 *)
                 (*(longlong *)&(this_01->MQ).field_0x8 + (longlong)(int)uVar24 * 0x10);
        *puVar8 = uVar4;
        puVar8[1] = uVar18;
        uVar44 = 0;
        if ((int)uVar24 < (int)this_01->_padding_) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_288._0_8_ = *(undefined8 *)(this_01->_padding_ + (longlong)(int)uVar24 * 0xc);
        local_288._8_4_ = *(undefined4 *)(this_01->_padding_ + 8 + (longlong)(int)uVar24 * 0xc);
        Chaos::TPBDRigidParticles<double,3>::SetPreVf(this_01,uVar24,&local_288);
        uVar44 = 0;
        if ((int)uVar24 < (int)this_01->_padding_) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar4 = *(undefined8 *)(this_01->_padding_ + (longlong)(int)uVar24 * 0xc);
        uVar62 = *(undefined4 *)(this_01->_padding_ + 8 + (longlong)(int)uVar24 * 0xc);
        uVar44 = 0;
        if ((int)uVar24 < *(int *)&(this_01->MPreW).field_0x10) {
          uVar44 = ~uVar24 >> 0x1f;
        }
        if ((uVar44 == 0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar23)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar41 = *(longlong *)&(this_01->MPreW).field_0x8;
        *(undefined8 *)(lVar41 + (longlong)(int)uVar24 * 0xc) = uVar4;
        *(undefined4 *)(lVar41 + 8 + (longlong)(int)uVar24 * 0xc) = uVar62;
        uVar45 = local_368;
        uVar44 = local_398._16_4_;
        if (bVar22) {
          uVar44 = 0;
          if ((int)uVar24 < (int)this_01->_padding_) {
            uVar44 = ~uVar24 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar41 = (longlong)(int)uVar24;
          if ((*(byte *)(this_01->_padding_ + 8 + (longlong)(int)uVar24 * 0x10) >> 1 & 1) == 0) {
            local_228._16_8_ = 0;
            local_228._0_8_ = 0;
            local_228._8_8_ = 0;
            uVar53 = 0;
            if ((int)uVar24 < *(int *)&(this_01->MQ).field_0x10) {
              uVar53 = ~uVar24 >> 0x1f;
            }
            if ((uVar53 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = *(longlong *)&(this_01->MQ).field_0x8;
            fVar2 = *(float *)(lVar9 + lVar41 * 0x10);
            fVar3 = *(float *)(lVar9 + 4 + lVar41 * 0x10);
            uVar4 = *(undefined8 *)(lVar9 + 8 + lVar41 * 0x10);
            dVar49 = (double)(float)((ulonglong)uVar4 >> 0x20);
            pTVar27 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,0> *)&local_398);
            local_1a8._8_4_ = SUB84(dVar49,0);
            local_1a8._0_8_ = (double)(float)uVar4;
            local_1a8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
            local_188 = *(undefined8 *)&pTVar27->field_0x10;
            local_198 = *(undefined8 *)pTVar27;
            uStack_190 = *(undefined8 *)&pTVar27->field_0x8;
            uStack_180 = 0;
            local_1b8 = (double)fVar2;
            dStack_1b0 = (double)fVar3;
            local_178 = uVar65;
            uStack_170 = uVar66;
            local_168 = uVar63;
            uStack_160 = uVar64;
            Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                      ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24,
                       (TRigidTransform<double,3> *)&local_1b8,&local_228);
            uVar45 = local_368;
            uVar44 = local_398._16_4_;
          }
          else {
            uVar44 = 0;
            if ((int)uVar24 < (int)this_01->_padding_) {
              uVar44 = ~uVar24 >> 0x1f;
            }
            if ((uVar44 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar9 = this_01->_padding_;
            dVar49 = *(double *)((longlong)this + 0x10);
            lVar40 = (longlong)(int)uVar24;
            dVar48 = (double)*(float *)(lVar9 + lVar41 * 0xc) * dVar49;
            dVar5 = (double)*(float *)(lVar9 + 4 + lVar41 * 0xc) * dVar49;
            local_210._16_8_ = 0;
            local_260._0_4_ = SUB84(dVar48,0) ^ uVar53;
            local_260._4_4_ = (uint)((ulonglong)dVar48 >> 0x20) ^ uVar55;
            uVar44 = 0;
            if ((int)uVar24 < *(int *)&(this_01->MQ).field_0x10) {
              uVar44 = ~uVar24 >> 0x1f;
            }
            local_260._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar55;
            local_260._8_4_ = SUB84(dVar5,0) ^ uVar53;
            dVar49 = (double)*(float *)(lVar9 + 8 + lVar41 * 0xc) * dVar49;
            local_260._16_4_ = SUB84(dVar49,0) ^ uVar53;
            local_260._20_4_ = (uint)((ulonglong)dVar49 >> 0x20) ^ uVar55;
            local_210._0_8_ = 0;
            local_210._8_8_ = 0;
            if ((uVar44 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            lVar41 = *(longlong *)&(this_01->MQ).field_0x8;
            fVar2 = *(float *)(lVar41 + lVar40 * 0x10);
            fVar3 = *(float *)(lVar41 + 4 + lVar40 * 0x10);
            uVar4 = *(undefined8 *)(lVar41 + 8 + lVar40 * 0x10);
            dVar49 = (double)(float)((ulonglong)uVar4 >> 0x20);
            pTVar27 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,0> *)&local_398);
            local_148._8_4_ = SUB84(dVar49,0);
            local_148._0_8_ = (double)(float)uVar4;
            local_148._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
            local_128 = *(undefined8 *)&pTVar27->field_0x10;
            local_138 = *(undefined8 *)pTVar27;
            uStack_130 = *(undefined8 *)&pTVar27->field_0x8;
            uStack_120 = 0;
            local_158 = (double)fVar2;
            dStack_150 = (double)fVar3;
            local_118 = uVar65;
            uStack_110 = uVar66;
            local_108 = uVar63;
            uStack_100 = uVar64;
            Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceStateSwept
                      ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24,
                       (TRigidTransform<double,3> *)&local_158,&local_210,&local_260);
            uVar45 = local_368;
            uVar44 = local_398._16_4_;
          }
        }
      }
      bVar21 = local_398._padding_._4_1_;
      pTVar38 = &local_398;
      if (local_398._padding_._4_1_ < 2) {
        pTVar38 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
      }
      if ((pTVar38 == (TGeometryParticleHandleImp<double,3,0> *)0x0) ||
         (bVar22 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,0> *)pTVar38), !bVar22)) {
LAB_143d0e2fa:
        pbVar33 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                            ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
        if ((*pbVar33 != false) || (Chaos::ForceNoCollisionIntoSQ != 0)) {
          pFVar34 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
          pFVar35 = Chaos::FPendingSpatialInternalDataQueue::Add
                              ((FPendingSpatialInternalDataQueue *)(*(longlong *)this + 0x398),
                               local_348 + *(int *)(*(longlong *)this + 0x3c8),
                               (FUniqueIdx)pFVar34->Idx,Add);
          pFVar35->Operation = Update;
          ppTVar36 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
          local_308 = *ppTVar36;
          pTStack_300 = Chaos::TGeometryParticleHandleImp<double,3,0>::Handle(&local_398);
          pFVar34 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
          FStack_2f4.Word2 = 0;
          FStack_2f4.Word3 = 0;
          FStack_2f4.Word0 = 0;
          FStack_2f4.Word1 = 0;
          FStack_2e4.Word2 = 0;
          FStack_2e4.Word3 = 0;
          local_2f8 = pFVar34->Idx;
          FStack_2e4.Word0 = 0;
          FStack_2e4.Word1 = 0;
          local_2d4 = local_2d4 & 0xffffff00;
          if ((local_2f8 == -1) &&
             (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar22)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          Chaos::FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    (&local_398,&FStack_2f4);
          Chaos::FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    (&local_398,&FStack_2e4);
          local_2d4 = CONCAT31(local_2d4._1_3_,1);
          (pFVar35->AccelerationHandle).ExternalGeometryParticle = local_308;
          (pFVar35->AccelerationHandle).GeometryParticleHandle = pTStack_300;
          (pFVar35->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_2f8;
          (pFVar35->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_2f4.Word0;
          (pFVar35->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_2f4.Word1;
          (pFVar35->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_2f4.Word2;
          *(ulonglong *)&(pFVar35->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_2e4.Word0,FStack_2f4.Word3);
          (pFVar35->AccelerationHandle).UnionSimFilterData.Word1 = FStack_2e4.Word1;
          (pFVar35->AccelerationHandle).UnionSimFilterData.Word2 = FStack_2e4.Word2;
          *(ulonglong *)&(pFVar35->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_2d4,FStack_2e4.Word3);
          pFVar37 = Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
          pFVar35->SpatialIdx = *pFVar37;
        }
      }
      else {
        pTVar38 = &local_398;
        if (bVar21 < 3) {
          pTVar38 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
        }
        if (pTVar38 != (TGeometryParticleHandleImp<double,3,0> *)0x0) {
          pCVar30 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar38->_padding_,
                               (int)pTVar38->_padding_);
          pTVar10 = pCVar30->Id;
          if (pTVar10 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar10->field_0xc) {
              this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar10;
            }
            if (this_00 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              bVar22 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar22) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else {
              bVar22 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                 (this_00);
              if (bVar22) {
                pIVar31 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (*(TGeometryParticlesImp<double,3,0> **)this_00,
                                     *(int *)&this_00->field_0x8);
                pIVar32 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    ((TGeometryParticlesImp<double,3,0> *)this_01,uVar24);
                if (pIVar31 == pIVar32) goto LAB_143d0e2fa;
              }
            }
          }
        }
      }
      uVar53 = (uint)__xmm_80000000000000008000000000000000;
      uVar55 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_398._16_4_ = uVar44 + 1;
      uVar46 = (ulonglong)(uint)local_398._16_4_;
      uVar45 = uVar45 + 1;
    } while ((longlong)uVar45 < local_2a8);
  }
  return;
}

// operator() @ 143d0e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FPBDRigidsEvolutionGBF::
DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l28::<lambda_2>_>'
::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  EKinematicTargetMode EVar6;
  longlong lVar7;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 *puVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  byte bVar19;
  longlong *plVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  FKinematicTarget *pFVar25;
  TVector<double,3> *pTVar26;
  TRotation<float,3> *pTVar27;
  TQuat<float> *pTVar28;
  ClusterId *pCVar29;
  IPhysicsProxyBase *pIVar30;
  IPhysicsProxyBase *pIVar31;
  bool *pbVar32;
  FUniqueIdx *pFVar33;
  FPendingSpatialData *pFVar34;
  TGeometryParticle<double,3> **ppTVar35;
  FSpatialAccelerationIdx *pFVar36;
  TGeometryParticleHandleImp<double,3,0> *pTVar37;
  uint uVar38;
  longlong lVar39;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  TPBDRigidParticles<double,3> *this_01;
  longlong lVar40;
  uint uVar41;
  ForAnyElementType *pFVar42;
  uint uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  uint uVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  float fVar66;
  undefined1 auStackY_3b8 [32];
  TGeometryParticleHandleImp<double,3,0> local_388;
  longlong *local_370;
  undefined1 local_368 [8];
  undefined8 uStack_360;
  undefined1 local_358 [16];
  double local_348;
  TVector<float,3> local_340;
  double local_330;
  double dStack_328;
  double local_320;
  TQuat<float> local_318;
  TGeometryParticle<double,3> *local_308;
  TGeometryParticleHandleImp<double,3,1> *pTStack_300;
  int local_2f8;
  FCollisionFilterData FStack_2f4;
  FCollisionFilterData FStack_2e4;
  uint local_2d4;
  TVector<float,3> local_2d0;
  TVector<float,3> local_2c4;
  TRotation<float,3> local_2b8;
  TVector<float,3> local_2a8;
  TVector<float,3> local_29c;
  TVector<float,3> local_290;
  double local_280;
  double dStack_278;
  double local_270;
  TVector<double,3> local_268;
  TRotation<float,3> local_248;
  TQuat<float> local_238;
  TVector<double,3> local_228;
  TVector<double,3> local_210;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  TRotation<float,3> local_1d8;
  TQuat<float> local_1c8;
  double local_1b8;
  double dStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  lVar40 = *(longlong *)this;
  uVar38 = *(int *)(lVar40 + 0x3c8) + param_3;
  uVar41 = 0;
  if ((int)uVar38 < *(int *)(lVar40 + 0x3a0)) {
    uVar41 = ~uVar38 >> 0x1f;
  }
  local_388._16_4_ = param_2;
  local_388._20_4_ = param_3;
  local_370 = this;
  if ((uVar41 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar42 = (ForAnyElementType *)((longlong)(int)uVar38 * 0x10 + *(longlong *)(lVar40 + 0x398));
  uVar41 = param_2 - param_1;
  if ((int)uVar41 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar41);
  }
  if (*(int *)((longlong)&pFVar42[1].Data + 4) < (int)uVar41) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,uVar41,pFVar42,*(int *)&pFVar42[1].Data,
               (int *)((longlong)&pFVar42[1].Data + 4));
  }
  uVar38 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar41 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (param_1 < param_2) {
    uVar50 = (uint)__xmm_80000000000000008000000000000000;
    uVar52 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar65 = (undefined4)__real_3e45798ee0000000;
    uVar58 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    fVar55 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
    fVar56 = _UNK_1506895d4;
    fVar57 = _UNK_1506895d8;
    fVar66 = _UNK_1506895dc;
    uVar60 = ___xmm_00000000000000003ff0000000000000;
    uVar61 = _UNK_150689518;
    uVar62 = ___xmm_3ff00000000000003ff0000000000000;
    uVar63 = _UNK_150689688;
    do {
      this_01 = *(TPBDRigidParticles<double,3> **)((longlong)this + 8);
      if (this_01 == (TPBDRigidParticles<double,3> *)0x0) {
        local_388._padding_._4_1_ = 0;
      }
      else {
        local_388._padding_._4_1_ = (byte)this_01->_padding_;
      }
      uVar23 = 0;
      if (param_1 < (int)this_01->_padding_) {
        uVar23 = (uint)~param_1 >> 0x1f;
      }
      local_388._padding_ = (longlong)this_01;
      local_388._padding_._0_4_ = param_1;
      if ((uVar23 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar23 = param_1;
      if (*(char *)((longlong)param_1 + this_01->_padding_) == '\0') {
        pFVar25 = Chaos::TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                            ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,param_1);
        pTVar26 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,param_1);
        local_330 = *(double *)pTVar26;
        dStack_328 = *(double *)&pTVar26->field_0x8;
        local_320 = *(double *)&pTVar26->field_0x10;
        uVar43 = 0;
        if (param_1 < (int)this_01->_padding_) {
          uVar43 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        dVar46 = local_320;
        dVar5 = dStack_328;
        plVar20 = local_370;
        bVar21 = false;
        puVar1 = (undefined8 *)(this_01->_padding_ + (longlong)param_1 * 0x10);
        local_318._0_8_ = *puVar1;
        local_318._8_8_ = puVar1[1];
        EVar6 = pFVar25->Mode;
        if (EVar6 == Reset) {
          local_2d0._0_8_ = 0;
          local_2d0._8_4_ = 0;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetVf
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,param_1,&local_2d0);
          local_2c4._0_8_ = 0;
          local_2c4._8_4_ = 0;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetWf
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,param_1,&local_2c4);
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::ClearIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_388);
          pFVar25->Mode = None;
        }
        else if (EVar6 == Position) {
          local_368 = (undefined1  [8])0x0;
          uStack_360 = 0;
          if ((char)local_370[4] == '\0') {
            dVar45 = (double)local_370[3];
            local_1f8 = *(double *)&pFVar25->Position;
            dStack_1f0 = *(double *)&(pFVar25->Position).field_0x8;
            local_1e8 = *(double *)&(pFVar25->Position).field_0x10;
            uVar59 = SUB84(local_330,0);
            uVar64 = (undefined4)((ulonglong)local_330 >> 0x20);
            dVar12 = (local_1f8 - local_330) * dVar45 + local_330;
            dVar44 = (dStack_1f0 - dStack_328) * dVar45 + dStack_328;
            dVar11 = (local_1e8 - local_320) * dVar45 + local_320;
            local_358._8_8_ = dVar44;
            local_358._0_8_ = dVar12;
            local_348 = dVar11;
            if ((pFVar25->Mode != Position) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mode == EKinematicTargetMode::Position",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                    ,0x4f,L""), bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_238.X = *(float *)&(pFVar25->Rotation).field_0x0;
            local_238.Y = *(float *)&(pFVar25->Rotation).field_0x4;
            local_238.Z = *(float *)&(pFVar25->Rotation).field_0x8;
            local_238.W = *(float *)&(pFVar25->Rotation).field_0xc;
            pTVar28 = UE::Math::TQuat<float>::Slerp_NotNormalized
                                (&local_1c8,&local_318,&local_238,(float)dVar45);
            local_358._8_4_ = SUB84(dVar44,0);
            local_358._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            fVar2 = pTVar28->X;
            fVar3 = pTVar28->Y;
            fVar14 = pTVar28->Z;
            fVar15 = pTVar28->W;
            fVar49 = fVar3 * fVar3 + fVar2 * fVar2;
            fVar51 = fVar2 * fVar2 + fVar3 * fVar3;
            fVar53 = fVar15 * fVar15 + fVar14 * fVar14;
            fVar54 = fVar14 * fVar14 + fVar15 * fVar15;
            auVar47._0_4_ = fVar53 + fVar49;
            auVar47._4_4_ = fVar54 + fVar51;
            auVar47._8_4_ = fVar49 + fVar53;
            auVar47._12_4_ = fVar51 + fVar54;
            auVar48 = sqrtps(auVar47,auVar47);
            auVar48 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar48);
            fVar55 = (float)((uint)(auVar48._0_4_ * fVar2) & -(uint)(fVar55 <= auVar47._0_4_) |
                            ~-(uint)(fVar55 <= auVar47._0_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[0]);
            fVar56 = (float)((uint)(auVar48._4_4_ * fVar3) & -(uint)(fVar56 <= auVar47._4_4_) |
                            ~-(uint)(fVar56 <= auVar47._4_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[1]);
            fVar57 = (float)((uint)(auVar48._8_4_ * fVar14) & -(uint)(fVar57 <= auVar47._8_4_) |
                            ~-(uint)(fVar57 <= auVar47._8_4_) &
                            GlobalVectorConstants::Float0001.m128_u32[2]);
            local_368._4_4_ = fVar56;
            local_368._0_4_ = fVar55;
            uStack_360._4_4_ =
                 (uint)(auVar48._12_4_ * fVar15) & -(uint)(fVar66 <= auVar47._12_4_) |
                 ~-(uint)(fVar66 <= auVar47._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
            uStack_360._0_4_ = fVar57;
          }
          else {
            dVar12 = *(double *)&pFVar25->Position;
            dVar44 = *(double *)&(pFVar25->Position).field_0x8;
            local_358 = *(undefined1 (*) [16])&pFVar25->Position;
            local_348 = *(double *)&(pFVar25->Position).field_0x10;
            if ((pFVar25->Mode != Position) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mode == EKinematicTargetMode::Position",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\KinematicTargets.h"
                                    ,0x4f,L""), bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar55 = *(float *)&pFVar25->Rotation;
            fVar56 = *(float *)&(pFVar25->Rotation).field_0x4;
            local_368 = *(undefined1 (*) [8])&pFVar25->Rotation;
            puVar13 = &(pFVar25->Rotation).field_0x8;
            fVar57 = *(float *)puVar13;
            uStack_360 = *(undefined8 *)puVar13;
            pFVar25->Mode = Reset;
            uVar59 = SUB84(local_330,0);
            uVar64 = (undefined4)((ulonglong)local_330 >> 0x20);
            dVar46 = local_320;
            dVar5 = dStack_328;
            dVar11 = local_348;
          }
          dVar45 = (double)CONCAT44(uVar64,uVar59) - dVar12;
          dVar45 = (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar38,
                                    SUB84(dVar45,0) & uVar41);
          if ((((double)CONCAT44(uVar58,uVar65) <= dVar45 &&
                dVar45 != (double)CONCAT44(uVar58,uVar65)) ||
              (uVar50 = SUB84(dVar5 - dVar44,0) & uVar41,
              uVar52 = (uint)((ulonglong)(dVar5 - dVar44) >> 0x20) & uVar38,
              (double)CONCAT44(uVar58,uVar65) <= (double)CONCAT44(uVar52,uVar50) &&
              (double)CONCAT44(uVar52,uVar50) != (double)CONCAT44(uVar58,uVar65))) ||
             (dVar45 = (double)CONCAT44((uint)((ulonglong)(dVar46 - dVar11) >> 0x20) & uVar38,
                                        SUB84(dVar46 - dVar11,0) & uVar41),
             (double)CONCAT44(uVar58,uVar65) <= dVar45 && dVar45 != (double)CONCAT44(uVar58,uVar65))
             ) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          uVar50 = SUB84((double)fVar55 - (double)local_318.X,0) & uVar41;
          uVar52 = (uint)((ulonglong)((double)fVar55 - (double)local_318.X) >> 0x20) & uVar38;
          if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar52,uVar50) &&
                (double)CONCAT44(uVar52,uVar50) != __real_3f1a36e2e0000000) ||
              (__real_3f1a36e2e0000000 <
               (double)CONCAT44((uint)((ulonglong)((double)fVar56 - (double)local_318.Y) >> 0x20) &
                                uVar38,SUB84((double)fVar56 - (double)local_318.Y,0) & uVar41))) ||
             (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)((double)fVar57 - (double)local_318.Z) >> 0x20) &
                               uVar38,SUB84((double)fVar57 - (double)local_318.Z,0) & uVar41))) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          if ((bVar22) || (bVar18)) {
            bVar21 = true;
          }
          dVar45 = (double)plVar20[2];
          local_340._0_8_ = 0;
          local_340._8_4_ = 0;
          local_270 = 0.0;
          local_280 = 0.0;
          dStack_278 = 0.0;
          if (dVar45 <= __real_3eb0c6f7a0000000) {
LAB_143d0ed7b:
            uVar65 = 0;
            uVar58 = 0;
            uVar59 = 0;
          }
          else {
            if (bVar22) {
              dStack_278 = __real_3ff0000000000000 / dVar45;
              local_280 = (dVar12 - (double)CONCAT44(uVar64,uVar59)) * dStack_278;
              local_270 = dStack_278 * (dVar11 - dVar46);
              dStack_278 = dStack_278 * (dVar44 - dVar5);
            }
            if (!bVar18) goto LAB_143d0ed7b;
            Chaos::TRotation<float,3>::CalculateAngularVelocity1
                      (&local_29c,(TRotation<float,3> *)&local_318,(TRotation<float,3> *)local_368,
                       (float)dVar45);
            uVar58 = local_29c._0_4_;
            uVar59 = local_29c._4_4_;
            local_340._0_8_ = local_29c._0_8_;
            uVar65 = local_29c._8_4_;
          }
          uVar50 = 0;
          if (param_1 < (int)this_01->_padding_) {
            uVar50 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar40 = this_01->_padding_;
          auVar48._8_4_ = SUB84(dVar44,0);
          auVar48._0_8_ = dVar12;
          auVar48._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + (longlong)param_1 * 0x18) = auVar48;
          *(double *)(lVar40 + 0x10 + (longlong)param_1 * 0x18) = local_348;
          local_2b8._0_8_ = local_368;
          local_2b8._8_8_ = uStack_360;
          uVar50 = 0;
          if (param_1 < (int)this_01->_padding_) {
            uVar50 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar1 = (undefined8 *)(this_01->_padding_ + (longlong)param_1 * 0x10);
          *puVar1 = local_2b8._0_8_;
          puVar1[1] = local_2b8._8_8_;
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)this_01,param_1,
                     (TVector<double,3> *)&local_280);
          uVar50 = 0;
          if (param_1 < (int)this_01->_padding_) {
            uVar50 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar50 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar40 = this_01->_padding_;
          *(ulonglong *)(lVar40 + (longlong)param_1 * 0xc) = CONCAT44(uVar59,uVar58);
          *(undefined4 *)(lVar40 + 8 + (longlong)param_1 * 0xc) = uVar65;
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::SetIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_388);
          uVar65 = (undefined4)__real_3e45798ee0000000;
          uVar58 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          uVar50 = (uint)__xmm_80000000000000008000000000000000;
          uVar52 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          fVar55 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
          fVar56 = _UNK_1506895d4;
          fVar57 = _UNK_1506895d8;
          fVar66 = _UNK_1506895dc;
          uVar60 = ___xmm_00000000000000003ff0000000000000;
          uVar61 = _UNK_150689518;
          uVar62 = ___xmm_3ff00000000000003ff0000000000000;
          uVar63 = _UNK_150689688;
        }
        else if (EVar6 == Velocity) {
          bVar21 = true;
          pTVar26 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,param_1);
          uVar23 = 0;
          if (param_1 < (int)this_01->_padding_) {
            uVar23 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          plVar20 = local_370;
          uVar4 = *(undefined8 *)(this_01->_padding_ + 4 + (longlong)param_1 * 0xc);
          fVar2 = *(float *)(this_01->_padding_ + (longlong)param_1 * 0xc);
          dVar46 = (double)local_370[2];
          uVar23 = 0;
          if (param_1 < (int)this_01->_padding_) {
            uVar23 = (uint)~param_1 >> 0x1f;
          }
          dVar5 = (double)local_370[2];
          dVar11 = *(double *)&pTVar26->field_0x8;
          dVar45 = *(double *)pTVar26;
          dVar12 = (double)(float)((ulonglong)uVar4 >> 0x20) * dVar46 +
                   *(double *)&pTVar26->field_0x10;
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar23 = (uint)local_388._padding_;
          lVar7 = local_388._padding_;
          lVar40 = this_01->_padding_;
          *(double *)(lVar40 + (longlong)param_1 * 0x18) = (double)fVar2 * dVar5 + dVar45;
          auVar10._8_4_ = SUB84(dVar12,0);
          auVar10._0_8_ = (double)(float)uVar4 * dVar46 + dVar11;
          auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          *(undefined1 (*) [16])(lVar40 + 8 + (longlong)param_1 * 0x18) = auVar10;
          lVar40 = (longlong)(int)(uint)local_388._padding_;
          dVar46 = (double)plVar20[2];
          uVar43 = 0;
          if ((int)(uint)local_388._padding_ < (int)*(longlong *)(local_388._padding_ + 0x2b0)) {
            uVar43 = ~(uint)local_388._padding_ >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_2a8._0_8_ = *(undefined8 *)(*(longlong *)(lVar7 + 0x2a8) + lVar40 * 0xc);
          local_2a8._8_4_ = *(undefined4 *)(*(longlong *)(lVar7 + 0x2a8) + 8 + lVar40 * 0xc);
          uVar43 = 0;
          if ((int)uVar23 < (int)*(longlong *)(lVar7 + 0x50)) {
            uVar43 = ~uVar23 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar1 = (undefined8 *)(*(longlong *)(lVar7 + 0x48) + (longlong)(int)uVar23 * 0x10);
          local_248._0_8_ = *puVar1;
          local_248._8_8_ = puVar1[1];
          pTVar27 = Chaos::TRotation<float,3>::IntegrateRotationWithAngularVelocity
                              (&local_1d8,&local_248,&local_2a8,(float)dVar46);
          Chaos::TGeometryParticleHandleImp<double,3,0>::SetRf(&local_388,pTVar27,false);
          Chaos::TPBDRigidParticleHandleImp<double,3,0>::SetIsMovingKinematic
                    ((TPBDRigidParticleHandleImp<double,3,0> *)&local_388);
          this_01 = (TPBDRigidParticles<double,3> *)lVar7;
        }
        pTVar26 = Chaos::TParticles<double,3>::GetX((TParticles<double,3> *)this_01,uVar23);
        uVar16 = *(undefined8 *)pTVar26;
        uVar17 = *(undefined8 *)&pTVar26->field_0x8;
        uVar4 = *(undefined8 *)&pTVar26->field_0x10;
        uVar43 = 0;
        if ((int)uVar23 < *(int *)&(this_01->MP).field_0x10) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar40 = *(longlong *)&(this_01->MP).field_0x8;
        puVar1 = (undefined8 *)(lVar40 + (longlong)(int)uVar23 * 0x18);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        *(undefined8 *)(lVar40 + 0x10 + (longlong)(int)uVar23 * 0x18) = uVar4;
        uVar43 = 0;
        if ((int)uVar23 < (int)this_01->_padding_) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar1 = (undefined8 *)(this_01->_padding_ + (longlong)(int)uVar23 * 0x10);
        uVar4 = *puVar1;
        uVar16 = puVar1[1];
        uVar43 = 0;
        if ((int)uVar23 < *(int *)&(this_01->MQ).field_0x10) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)&(this_01->MQ).field_0x8 + (longlong)(int)uVar23 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar16;
        uVar43 = 0;
        if ((int)uVar23 < (int)this_01->_padding_) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_290._0_8_ = *(undefined8 *)(this_01->_padding_ + (longlong)(int)uVar23 * 0xc);
        local_290._8_4_ = *(undefined4 *)(this_01->_padding_ + 8 + (longlong)(int)uVar23 * 0xc);
        Chaos::TPBDRigidParticles<double,3>::SetPreVf(this_01,uVar23,&local_290);
        uVar43 = 0;
        if ((int)uVar23 < (int)this_01->_padding_) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar4 = *(undefined8 *)(this_01->_padding_ + (longlong)(int)uVar23 * 0xc);
        uVar59 = *(undefined4 *)(this_01->_padding_ + 8 + (longlong)(int)uVar23 * 0xc);
        uVar43 = 0;
        if ((int)uVar23 < *(int *)&(this_01->MPreW).field_0x10) {
          uVar43 = ~uVar23 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar40 = *(longlong *)&(this_01->MPreW).field_0x8;
        *(undefined8 *)(lVar40 + (longlong)(int)uVar23 * 0xc) = uVar4;
        *(undefined4 *)(lVar40 + 8 + (longlong)(int)uVar23 * 0xc) = uVar59;
        this = local_370;
        param_3 = local_388._20_4_;
        param_2 = local_388._16_4_;
        if (bVar21) {
          uVar43 = 0;
          uVar24 = uVar43;
          if ((int)uVar23 < (int)this_01->_padding_) {
            uVar24 = ~uVar23 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar40 = (longlong)(int)uVar23;
          if ((*(byte *)(this_01->_padding_ + 8 + (longlong)(int)uVar23 * 0x10) >> 1 & 1) == 0) {
            local_228._16_8_ = 0;
            local_228._0_8_ = 0;
            local_228._8_8_ = 0;
            if ((int)uVar23 < *(int *)&(this_01->MQ).field_0x10) {
              uVar43 = ~uVar23 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = *(longlong *)&(this_01->MQ).field_0x8;
            fVar2 = *(float *)(lVar7 + lVar40 * 0x10);
            fVar3 = *(float *)(lVar7 + 4 + lVar40 * 0x10);
            uVar4 = *(undefined8 *)(lVar7 + 8 + lVar40 * 0x10);
            dVar46 = (double)(float)((ulonglong)uVar4 >> 0x20);
            pTVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,0> *)&local_388);
            local_1a8._8_4_ = SUB84(dVar46,0);
            local_1a8._0_8_ = (double)(float)uVar4;
            local_1a8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            local_188 = *(undefined8 *)&pTVar26->field_0x10;
            local_198 = *(undefined8 *)pTVar26;
            uStack_190 = *(undefined8 *)&pTVar26->field_0x8;
            uStack_180 = 0;
            local_1b8 = (double)fVar2;
            dStack_1b0 = (double)fVar3;
            local_178 = uVar62;
            uStack_170 = uVar63;
            local_168 = uVar60;
            uStack_160 = uVar61;
            Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                      ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23,
                       (TRigidTransform<double,3> *)&local_1b8,&local_228);
            this = local_370;
            param_3 = local_388._20_4_;
            param_2 = local_388._16_4_;
          }
          else {
            uVar24 = uVar43;
            if ((int)uVar23 < (int)this_01->_padding_) {
              uVar24 = ~uVar23 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar7 = this_01->_padding_;
            lVar39 = (longlong)(int)uVar23;
            local_210._16_8_ = 0;
            dVar46 = (double)local_370[2];
            dVar45 = (double)*(float *)(lVar7 + lVar40 * 0xc) * dVar46;
            dVar5 = (double)*(float *)(lVar7 + 4 + lVar40 * 0xc) * dVar46;
            local_268._0_4_ = SUB84(dVar45,0) ^ uVar50;
            local_268._4_4_ = (uint)((ulonglong)dVar45 >> 0x20) ^ uVar52;
            if ((int)uVar23 < *(int *)&(this_01->MQ).field_0x10) {
              uVar43 = ~uVar23 >> 0x1f;
            }
            local_268._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar52;
            local_268._8_4_ = SUB84(dVar5,0) ^ uVar50;
            dVar46 = (double)*(float *)(lVar7 + 8 + lVar40 * 0xc) * dVar46;
            local_268._16_4_ = SUB84(dVar46,0) ^ uVar50;
            local_268._20_4_ = (uint)((ulonglong)dVar46 >> 0x20) ^ uVar52;
            local_210._0_8_ = 0;
            local_210._8_8_ = 0;
            if ((uVar43 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar40 = *(longlong *)&(this_01->MQ).field_0x8;
            fVar2 = *(float *)(lVar40 + lVar39 * 0x10);
            fVar3 = *(float *)(lVar40 + 4 + lVar39 * 0x10);
            uVar4 = *(undefined8 *)(lVar40 + 8 + lVar39 * 0x10);
            dVar46 = (double)(float)((ulonglong)uVar4 >> 0x20);
            pTVar26 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::GetP
                                ((TPBDRigidParticleHandleImp<double,3,0> *)&local_388);
            local_148._8_4_ = SUB84(dVar46,0);
            local_148._0_8_ = (double)(float)uVar4;
            local_148._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            local_128 = *(undefined8 *)&pTVar26->field_0x10;
            local_138 = *(undefined8 *)pTVar26;
            uStack_130 = *(undefined8 *)&pTVar26->field_0x8;
            uStack_120 = 0;
            local_158 = (double)fVar2;
            dStack_150 = (double)fVar3;
            local_118 = uVar62;
            uStack_110 = uVar63;
            local_108 = uVar60;
            uStack_100 = uVar61;
            Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceStateSwept
                      ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23,
                       (TRigidTransform<double,3> *)&local_158,&local_210,&local_268);
            this = local_370;
            param_3 = local_388._20_4_;
            param_2 = local_388._16_4_;
          }
        }
      }
      bVar19 = local_388._padding_._4_1_;
      pTVar37 = &local_388;
      if (local_388._padding_._4_1_ < 2) {
        pTVar37 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
      }
      if ((pTVar37 == (TGeometryParticleHandleImp<double,3,0> *)0x0) ||
         (bVar21 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,0> *)pTVar37), !bVar21)) {
LAB_143d0f5e1:
        pbVar32 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                            ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
        if ((*pbVar32 != false) || (Chaos::ForceNoCollisionIntoSQ != 0)) {
          pFVar33 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
          pFVar34 = Chaos::FPendingSpatialInternalDataQueue::Add
                              ((FPendingSpatialInternalDataQueue *)(*(longlong *)this + 0x398),
                               *(int *)(*(longlong *)this + 0x3c8) + param_3,
                               (FUniqueIdx)pFVar33->Idx,Add);
          pFVar34->Operation = Update;
          ppTVar35 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
          local_308 = *ppTVar35;
          pTStack_300 = Chaos::TGeometryParticleHandleImp<double,3,0>::Handle(&local_388);
          pFVar33 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
          local_2f8 = pFVar33->Idx;
          FStack_2f4.Word2 = 0;
          FStack_2f4.Word3 = 0;
          FStack_2f4.Word0 = 0;
          FStack_2f4.Word1 = 0;
          FStack_2e4.Word2 = 0;
          FStack_2e4.Word3 = 0;
          FStack_2e4.Word0 = 0;
          FStack_2e4.Word1 = 0;
          local_2d4 = local_2d4 & 0xffffff00;
          if ((local_2f8 == -1) &&
             (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar21)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          Chaos::FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    (&local_388,&FStack_2f4);
          Chaos::FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    (&local_388,&FStack_2e4);
          local_2d4 = CONCAT31(local_2d4._1_3_,1);
          (pFVar34->AccelerationHandle).ExternalGeometryParticle = local_308;
          (pFVar34->AccelerationHandle).GeometryParticleHandle = pTStack_300;
          (pFVar34->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_2f8;
          (pFVar34->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_2f4.Word0;
          (pFVar34->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_2f4.Word1;
          (pFVar34->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_2f4.Word2;
          *(ulonglong *)&(pFVar34->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_2e4.Word0,FStack_2f4.Word3);
          (pFVar34->AccelerationHandle).UnionSimFilterData.Word1 = FStack_2e4.Word1;
          (pFVar34->AccelerationHandle).UnionSimFilterData.Word2 = FStack_2e4.Word2;
          *(ulonglong *)&(pFVar34->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_2d4,FStack_2e4.Word3);
          pFVar36 = Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
                              ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
          pFVar34->SpatialIdx = *pFVar36;
        }
      }
      else {
        pTVar37 = &local_388;
        if (bVar19 < 3) {
          pTVar37 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
        }
        if (pTVar37 != (TGeometryParticleHandleImp<double,3,0> *)0x0) {
          pCVar29 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar37->_padding_,
                               (int)pTVar37->_padding_);
          pTVar8 = pCVar29->Id;
          if (pTVar8 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar8->field_0xc) {
              this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar8;
            }
            if (this_00 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar21) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            else {
              bVar21 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                 (this_00);
              if (bVar21) {
                pIVar30 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (*(TGeometryParticlesImp<double,3,0> **)this_00,
                                     *(int *)&this_00->field_0x8);
                pIVar31 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    ((TGeometryParticlesImp<double,3,0> *)this_01,uVar23);
                if (pIVar30 == pIVar31) goto LAB_143d0f5e1;
              }
            }
          }
        }
      }
      uVar50 = (uint)__xmm_80000000000000008000000000000000;
      uVar52 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}

// operator() @ 143d11db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,int param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  undefined8 uVar19;
  TVector<double,3> *pTVar20;
  TRotation<double,3> *pTVar21;
  longlong lVar22;
  TVector<double,3> *pTVar23;
  ClusterId *pCVar24;
  IPhysicsProxyBase *pIVar25;
  IPhysicsProxyBase *pIVar26;
  bool *pbVar27;
  FUniqueIdx *pFVar28;
  FPendingSpatialData *pFVar29;
  TGeometryParticle<double,3> **ppTVar30;
  FSpatialAccelerationIdx *pFVar31;
  longlong *plVar32;
  TGeometryParticleHandleImp<double,3,1> *pTVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar37;
  longlong *plVar38;
  TRigidTransform<double,3> *pTVar39;
  uint uVar40;
  ulonglong uVar41;
  longlong *plVar42;
  uint uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar50;
  uint uVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auStackY_498 [32];
  undefined1 local_468 [8];
  undefined1 local_460 [16];
  double local_450;
  undefined1 local_448 [16];
  double local_438;
  uint local_430;
  int local_42c;
  longlong local_428;
  int local_420;
  TGeometryParticle<double,3> *local_418;
  TGeometryParticleHandleImp<double,3,1> *pTStack_410;
  int local_408;
  FCollisionFilterData FStack_404;
  FCollisionFilterData FStack_3f4;
  uint local_3e4;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  undefined8 local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  undefined1 local_390 [16];
  undefined1 local_380 [8];
  undefined1 local_378 [16];
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  TVector<double,3> local_348;
  undefined1 local_330 [16];
  double local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [24];
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [32];
  TRotation<double,3> local_298;
  TVector<double,3> local_278;
  TRotation<double,3> local_258;
  code *local_238;
  longlong local_228 [3];
  longlong *local_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  uVar16 = _UNK_150689688;
  uVar15 = ___xmm_3ff00000000000003ff0000000000000;
  uVar14 = _UNK_150689518;
  uVar13 = ___xmm_00000000000000003ff0000000000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar10 = __real_3ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_498;
  uVar41 = (ulonglong)param_2;
  if (param_2 < param_3) {
    lVar22 = uVar41 * 8;
    uVar59 = (uint)__xmm_80000000000000008000000000000000;
    uVar60 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_430 = param_2;
    local_42c = param_3;
    local_420 = param_1;
    do {
      plVar38 = *(longlong **)((longlong)this + 8);
      uVar40 = (uint)uVar41;
      uVar18 = 0;
      if ((int)uVar40 < (int)plVar38[1]) {
        uVar18 = ~uVar40 >> 0x1f;
      }
      local_428 = lVar22;
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar33 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar22 + *plVar38);
      pTVar37 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar33->_padding_ + 4)) {
        pTVar37 = pTVar33;
      }
      if (pTVar37 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        uVar18 = (uint)pTVar37->_padding_;
        lVar34 = pTVar37->_padding_;
        uVar43 = 0;
        if ((int)uVar18 < *(int *)(lVar34 + 0x2e0)) {
          uVar43 = ~uVar18 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar34 + 0x2d8) + 0xb + (longlong)(int)uVar18 * 0x10) == '\x04')
        {
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                     (TVector<double,3> *)local_460,(int)pTVar37->_padding_);
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::GetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                     (TVector<double,3> *)local_448,(int)pTVar37->_padding_);
          Chaos::TPBDRigidParticles<double,3>::SetPreV
                    ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,(int)pTVar37->_padding_,
                     (TVector<double,3> *)local_460);
          Chaos::TPBDRigidParticles<double,3>::SetPreW
                    ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,(int)pTVar37->_padding_,
                     (TVector<double,3> *)local_448);
          lVar22 = *(longlong *)this;
          iVar5 = *(int *)(lVar22 + 0x18);
          plVar38 = *(longlong **)(lVar22 + 0x10);
          plVar42 = plVar38 + (longlong)iVar5 * 6;
          while( true ) {
            if (*(int *)(lVar22 + 0x18) != iVar5) {
              local_468[0] = 0;
              `TCheckedPointerIterator<TFunction<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,0>_&,double)>,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_468);
            }
            if (plVar38 == plVar42) break;
            local_238 = (code *)*plVar38;
            local_210 = (longlong *)0x0;
            if (local_238 != (code *)0x0) {
              plVar32 = plVar38 + 2;
              if ((longlong *)plVar38[5] != (longlong *)0x0) {
                plVar32 = (longlong *)plVar38[5];
              }
              (**(code **)*plVar32)(plVar32,local_228);
            }
            local_3b0 = *(undefined8 *)((longlong)this + 0x10);
            UE::Core::Private::Function::CheckCallable(local_238);
            pcVar6 = local_238;
            plVar32 = local_228;
            if (local_210 != (longlong *)0x0) {
              plVar32 = local_210;
            }
            uVar19 = (**(code **)(*plVar32 + 8))();
            (*pcVar6)(uVar19,pTVar37,&local_3b0);
            if (local_238 != (code *)0x0) {
              plVar32 = local_228;
              if (local_210 != (longlong *)0x0) {
                plVar32 = local_210;
              }
              (**(code **)(*plVar32 + 0x10))();
            }
            plVar38 = plVar38 + 6;
          }
          uVar18 = (uint)pTVar37->_padding_;
          lVar34 = (longlong)(int)uVar18;
          lVar22 = pTVar37->_padding_;
          uVar43 = 0;
          uVar40 = uVar43;
          if ((int)uVar18 < *(int *)(lVar22 + 0x328)) {
            uVar40 = ~uVar18 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar22 + 800);
          dVar44 = *(double *)((longlong)this + 0x10);
          uVar18 = (uint)pTVar37->_padding_;
          lVar35 = (longlong)(int)uVar18;
          lVar36 = pTVar37->_padding_;
          uVar40 = uVar43;
          if ((int)uVar18 < *(int *)(lVar36 + 0x340)) {
            uVar40 = ~uVar18 >> 0x1f;
          }
          local_450 = local_450 + dVar44 * *(double *)(lVar22 + 0x10 + lVar34 * 0x18);
          local_460._8_8_ =
               (double)local_460._8_8_ + dVar44 * *(double *)(lVar22 + 8 + lVar34 * 0x18);
          local_460._0_8_ = (double)local_460._0_8_ + dVar44 * *(double *)(lVar22 + lVar34 * 0x18);
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar36 + 0x338);
          dVar44 = *(double *)((longlong)this + 0x10);
          uVar18 = (uint)pTVar37->_padding_;
          lVar36 = (longlong)(int)uVar18;
          lVar34 = pTVar37->_padding_;
          local_438 = local_438 + dVar44 * *(double *)(lVar22 + 0x10 + lVar35 * 0x18);
          local_448._8_8_ =
               (double)local_448._8_8_ + dVar44 * *(double *)(lVar22 + 8 + lVar35 * 0x18);
          local_448._0_8_ = (double)local_448._0_8_ + dVar44 * *(double *)(lVar22 + lVar35 * 0x18);
          uVar40 = uVar43;
          if ((int)uVar18 < *(int *)(lVar34 + 0x358)) {
            uVar40 = ~uVar18 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar34 + 0x350);
          uVar18 = (uint)pTVar37->_padding_;
          lVar35 = (longlong)(int)uVar18;
          lVar34 = pTVar37->_padding_;
          local_450 = local_450 + *(double *)(lVar22 + 0x10 + lVar36 * 0x18);
          local_460._8_8_ = (double)local_460._8_8_ + *(double *)(lVar22 + 8 + lVar36 * 0x18);
          local_460._0_8_ = (double)local_460._0_8_ + *(double *)(lVar22 + lVar36 * 0x18);
          uVar40 = uVar43;
          if ((int)uVar18 < *(int *)(lVar34 + 0x370)) {
            uVar40 = ~uVar18 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar34 + 0x368);
          uVar18 = (uint)pTVar37->_padding_;
          lVar36 = (longlong)(int)uVar18;
          lVar34 = pTVar37->_padding_;
          local_448._8_8_ = (double)local_448._8_8_ + *(double *)(lVar22 + 8 + lVar35 * 0x18);
          local_448._0_8_ = (double)local_448._0_8_ + *(double *)(lVar22 + lVar35 * 0x18);
          local_438 = local_438 + *(double *)(lVar22 + 0x10 + lVar35 * 0x18);
          uVar40 = uVar43;
          if ((int)uVar18 < *(int *)(lVar34 + 0x358)) {
            uVar40 = ~uVar18 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar34 + 0x350);
          *(undefined8 *)(lVar22 + lVar36 * 0x18) = 0;
          *(undefined8 *)(lVar22 + 8 + lVar36 * 0x18) = 0;
          *(undefined8 *)(lVar22 + 0x10 + lVar36 * 0x18) = 0;
          uVar18 = (uint)pTVar37->_padding_;
          lVar34 = (longlong)(int)uVar18;
          lVar22 = pTVar37->_padding_;
          if ((int)uVar18 < *(int *)(lVar22 + 0x370)) {
            uVar43 = ~uVar18 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar22 = *(longlong *)(lVar22 + 0x368);
          *(undefined8 *)(lVar22 + lVar34 * 0x18) = 0;
          *(undefined8 *)(lVar22 + 8 + lVar34 * 0x18) = 0;
          *(undefined8 *)(lVar22 + 0x10 + lVar34 * 0x18) = 0;
          uVar18 = 0;
          if (Chaos::LinearEtherDragOverride < 0.0) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar22 = pTVar37->_padding_;
            uVar43 = uVar18;
            if ((int)uVar40 < *(int *)(lVar22 + 0x430)) {
              uVar43 = ~uVar40 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            dVar44 = *(double *)(*(longlong *)(lVar22 + 0x428) + (longlong)(int)uVar40 * 8) *
                     *(double *)((longlong)this + 0x10);
          }
          else {
            dVar44 = (double)Chaos::LinearEtherDragOverride;
          }
          dVar44 = dVar10 - dVar44;
          if (dVar44 <= 0.0) {
            dVar44 = 0.0;
          }
          local_460._8_8_ = (double)local_460._8_8_ * dVar44;
          local_460._0_8_ = (double)local_460._0_8_ * dVar44;
          local_450 = local_450 * dVar44;
          if (Chaos::AngularEtherDragOverride < 0.0) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar22 = pTVar37->_padding_;
            uVar43 = uVar18;
            if ((int)uVar40 < *(int *)(lVar22 + 0x448)) {
              uVar43 = ~uVar40 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            dVar44 = *(double *)(*(longlong *)(lVar22 + 0x440) + (longlong)(int)uVar40 * 8) *
                     *(double *)((longlong)this + 0x10);
          }
          else {
            dVar44 = (double)Chaos::AngularEtherDragOverride;
          }
          uVar40 = (uint)pTVar37->_padding_;
          lVar22 = pTVar37->_padding_;
          dVar44 = dVar10 - dVar44;
          if (dVar44 <= 0.0) {
            dVar44 = 0.0;
          }
          auVar53._8_8_ = dVar44;
          auVar53._0_8_ = dVar44;
          local_448._8_8_ = (double)local_448._8_8_ * dVar44;
          local_448._0_8_ = (double)local_448._0_8_ * dVar44;
          local_438 = local_438 * dVar44;
          uVar43 = uVar18;
          if ((int)uVar40 < *(int *)(lVar22 + 0x2e0)) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((*(ushort *)(*(longlong *)(lVar22 + 0x2d8) + 8 + (longlong)(int)uVar40 * 0x10) >> 0xb
              & 1) != 0) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar34 = (longlong)(int)uVar40;
            lVar22 = pTVar37->_padding_;
            dVar44 = *(double *)((longlong)this + 0x10);
            uVar43 = uVar18;
            if ((int)uVar40 < *(int *)(lVar22 + 0x388)) {
              uVar43 = ~uVar40 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar22 + 0x380);
            local_398 = (double)*(float *)(lVar22 + 8 + lVar34 * 0xc);
            local_3a0 = (double)*(float *)(lVar22 + 4 + lVar34 * 0xc);
            local_3a8 = (double)*(float *)(lVar22 + lVar34 * 0xc);
            Chaos::TPBDRigidParticles<double,3>::RCom
                      ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,&local_298,
                       (int)pTVar37->_padding_);
            pTVar20 = Chaos::Utilities::GetAngularVelocityAdjustedForGyroscopicTorques
                                (&local_278,&local_298,(TVector<double,3> *)&local_3a8,
                                 (TVector<double,3> *)local_448,dVar44);
            auVar53 = *(undefined1 (*) [16])pTVar20;
            local_438 = *(double *)&pTVar20->field_0x10;
            local_448 = auVar53;
          }
          uVar40 = (uint)pTVar37->_padding_;
          lVar22 = pTVar37->_padding_;
          uVar43 = uVar18;
          if ((int)uVar40 < *(int *)(lVar22 + 0x460)) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          dVar44 = (double)local_460._0_8_ * (double)local_460._0_8_ +
                   (double)local_460._8_8_ * (double)local_460._8_8_ + local_450 * local_450;
          if ((uVar43 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pdVar1 = (double *)(*(longlong *)(lVar22 + 0x458) + (longlong)(int)uVar40 * 8);
          if (*pdVar1 <= dVar44 && dVar44 != *pdVar1) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar22 = pTVar37->_padding_;
            uVar43 = uVar18;
            if ((int)uVar40 < *(int *)(lVar22 + 0x460)) {
              uVar43 = ~uVar40 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            auVar45._0_8_ =
                 *(double *)(*(longlong *)(lVar22 + 0x458) + (longlong)(int)uVar40 * 8) / dVar44;
            auVar45._8_8_ = 0;
            auVar53 = sqrtpd(auVar53,auVar45);
            auVar53._8_8_ = auVar53._0_8_;
            dVar44 = (double)local_460._8_8_ * auVar53._0_8_;
            local_460._8_4_ = SUB84(dVar44,0);
            local_460._0_8_ = (double)local_460._0_8_ * auVar53._0_8_;
            local_460._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            local_450 = local_450 * auVar53._0_8_;
          }
          uVar40 = (uint)pTVar37->_padding_;
          lVar22 = pTVar37->_padding_;
          uVar43 = uVar18;
          if ((int)uVar40 < *(int *)(lVar22 + 0x478)) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          dVar44 = (double)local_448._0_8_ * (double)local_448._0_8_ +
                   (double)local_448._8_8_ * (double)local_448._8_8_ + local_438 * local_438;
          if ((uVar43 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pdVar1 = (double *)(*(longlong *)(lVar22 + 0x470) + (longlong)(int)uVar40 * 8);
          if (*pdVar1 <= dVar44 && dVar44 != *pdVar1) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar22 = pTVar37->_padding_;
            uVar43 = uVar18;
            if ((int)uVar40 < *(int *)(lVar22 + 0x478)) {
              uVar43 = ~uVar40 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            auVar46._0_8_ =
                 *(double *)(*(longlong *)(lVar22 + 0x470) + (longlong)(int)uVar40 * 8) / dVar44;
            auVar46._8_8_ = 0;
            auVar53 = sqrtpd(auVar53,auVar46);
            dVar52 = auVar53._0_8_;
            dVar44 = (double)local_448._8_8_ * dVar52;
            local_448._8_4_ = SUB84(dVar44,0);
            local_448._0_8_ = (double)local_448._0_8_ * dVar52;
            local_448._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            local_438 = local_438 * dVar52;
          }
          if (0.0 <= Chaos::CVars::HackMaxAngularVelocity) {
            auVar47._0_8_ = (double)local_448._8_8_ * (double)local_448._8_8_;
            auVar47._8_8_ = 0;
            dVar44 = (double)local_448._0_8_ * (double)local_448._0_8_ + auVar47._0_8_ +
                     local_438 * local_438;
            if (*(double *)((longlong)this + 0x18) <= dVar44 &&
                dVar44 != *(double *)((longlong)this + 0x18)) {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = dVar44;
              auVar53 = sqrtpd(auVar47,auVar8);
              dVar52 = (double)Chaos::CVars::HackMaxAngularVelocity / auVar53._0_8_;
              dVar44 = (double)local_448._8_8_ * dVar52;
              local_448._8_4_ = SUB84(dVar44,0);
              local_448._0_8_ = (double)local_448._0_8_ * dVar52;
              local_448._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              local_438 = local_438 * dVar52;
            }
          }
          if (0.0 <= Chaos::CVars::HackMaxVelocity) {
            auVar48._0_8_ = (double)local_460._8_8_ * (double)local_460._8_8_;
            auVar48._8_8_ = 0;
            dVar44 = (double)local_460._0_8_ * (double)local_460._0_8_ + auVar48._0_8_ +
                     local_450 * local_450;
            if (*(double *)((longlong)this + 0x20) <= dVar44 &&
                dVar44 != *(double *)((longlong)this + 0x20)) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = dVar44;
              auVar53 = sqrtpd(auVar48,auVar9);
              dVar52 = (double)Chaos::CVars::HackMaxVelocity / auVar53._0_8_;
              dVar44 = (double)local_460._8_8_ * dVar52;
              local_460._8_4_ = SUB84(dVar44,0);
              local_460._0_8_ = (double)local_460._0_8_ * dVar52;
              local_460._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              local_450 = local_450 * dVar52;
            }
          }
          Chaos::TPBDRigidParticles<double,3>::XCom
                    ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,
                     (TVector<double,3> *)&local_3e0,(int)pTVar37->_padding_);
          Chaos::TPBDRigidParticles<double,3>::RCom
                    ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,
                     (TRotation<double,3> *)(local_308 + 0x10),(int)pTVar37->_padding_);
          dVar44 = *(double *)((longlong)this + 0x10);
          local_3e0 = local_3e0 + dVar44 * (double)local_460._0_8_;
          local_3d8 = local_3d8 + dVar44 * (double)local_460._8_8_;
          local_3d0 = local_3d0 + dVar44 * local_450;
          pTVar21 = Chaos::TRotation<double,3>::IntegrateRotationWithAngularVelocity
                              (&local_258,(TRotation<double,3> *)(local_308 + 0x10),
                               (TVector<double,3> *)local_448,dVar44);
          local_308._16_8_ = *(undefined8 *)pTVar21;
          uStack_2f0 = *(undefined8 *)&pTVar21->field_0x8;
          local_2e8 = *(undefined8 *)&pTVar21->field_0x10;
          uStack_2e0 = *(undefined8 *)&pTVar21->field_0x18;
          Chaos::TPBDRigidParticles<double,3>::SetTransformPQCom
                    ((TPBDRigidParticles<double,3> *)pTVar37->_padding_,(int)pTVar37->_padding_,
                     (TVector<double,3> *)&local_3e0,(TRotation<double,3> *)(local_308 + 0x10));
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetV
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                     (int)pTVar37->_padding_,(TVector<double,3> *)local_460);
          Chaos::TKinematicGeometryParticlesImp<double,3,0>::SetW
                    ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                     (int)pTVar37->_padding_,(TVector<double,3> *)local_448);
          local_3b8 = 0.0;
          local_3c8 = ZEXT816(0);
          if (*(char *)((longlong)this + 0x29) == '\0') {
            if (*(char *)((longlong)this + 0x28) != '\0') {
              uVar40 = (uint)pTVar37->_padding_;
              lVar22 = pTVar37->_padding_;
              uVar43 = uVar18;
              if ((int)uVar40 < *(int *)(lVar22 + 0x2e0)) {
                uVar43 = ~uVar40 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((*(ushort *)(*(longlong *)(lVar22 + 0x2d8) + 8 + (longlong)(int)uVar40 * 0x10) >>
                   9 & 1) != 0) goto LAB_143d12ac5;
            }
            lVar22 = 0x40;
            lVar34 = 0x48;
          }
          else {
LAB_143d12ac5:
            lVar22 = 0x30;
            lVar34 = 0x38;
          }
          dVar44 = *(double *)(lVar34 + (longlong)this);
          uVar40 = (uint)((ulonglong)dVar44 >> 0x20);
          if ((0.0 < *(double *)(lVar22 + (longlong)this)) && (0.0 < dVar44)) {
            dVar52 = *(double *)(lVar22 + (longlong)this) * *(double *)((longlong)this + 0x10);
            auVar54._0_8_ = (double)CONCAT44(uVar40 ^ uVar60,SUB84(dVar44,0) ^ uVar59);
            auVar54._8_8_ = auVar54._0_8_;
            dVar52 = (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) ^ uVar60,
                                      SUB84(dVar52,0) ^ uVar59);
            auVar49._0_8_ = (double)local_460._0_8_ * dVar52;
            auVar49._8_8_ = (double)local_460._8_8_ * dVar52;
            auVar7._8_4_ = SUB84(dVar44,0);
            auVar7._0_8_ = dVar44;
            auVar7._12_4_ = uVar40;
            auVar53 = minpd(auVar49,auVar7);
            local_3c8 = maxpd(auVar53,auVar54);
            local_3b8 = local_450 * dVar52;
            if (dVar44 <= local_450 * dVar52) {
              local_3b8 = dVar44;
            }
            if (local_3b8 <= auVar54._0_8_) {
              local_3b8 = auVar54._0_8_;
            }
          }
          uVar40 = (uint)pTVar37->_padding_;
          lVar22 = pTVar37->_padding_;
          uVar43 = uVar18;
          if ((int)uVar40 < *(int *)(lVar22 + 0x2e0)) {
            uVar43 = ~uVar40 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar43 = 0;
          if ((*(byte *)(*(longlong *)(lVar22 + 0x2d8) + 8 + (longlong)(int)uVar40 * 0x10) >> 1 & 1)
              == 0) {
            uVar40 = (uint)pTVar37->_padding_;
            lVar34 = (longlong)(int)uVar40;
            lVar22 = pTVar37->_padding_;
            local_390._0_8_ = *(undefined8 *)((longlong)this + 0x50);
            if ((int)uVar40 < *(int *)(lVar22 + 0x568)) {
              uVar18 = ~uVar40 >> 0x1f;
            }
            local_390._8_8_ = local_390._0_8_;
            local_380 = (undefined1  [8])local_390._0_8_;
            if ((uVar18 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar22 + 0x560);
            uVar18 = (uint)pTVar37->_padding_;
            lVar36 = pTVar37->_padding_;
            fVar3 = *(float *)(lVar22 + lVar34 * 0x10);
            fVar4 = *(float *)(lVar22 + 4 + lVar34 * 0x10);
            uVar19 = *(undefined8 *)(lVar22 + 8 + lVar34 * 0x10);
            dVar44 = (double)(float)((ulonglong)uVar19 >> 0x20);
            if ((int)uVar18 < *(int *)(lVar36 + 0x550)) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar36 + 0x548);
            local_1f8._8_4_ = SUB84(dVar44,0);
            local_1f8._0_8_ = (double)(float)uVar19;
            local_1f8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            pTVar20 = (TVector<double,3> *)local_390;
            pTVar39 = (TRigidTransform<double,3> *)&local_208;
            local_1d8 = *(undefined8 *)(lVar22 + 0x10 + (longlong)(int)uVar18 * 0x18);
            puVar2 = (undefined8 *)(lVar22 + (longlong)(int)uVar18 * 0x18);
            local_1e8 = *puVar2;
            uStack_1e0 = puVar2[1];
            uStack_1d0 = 0;
            local_1c8 = uVar15;
            uStack_1c0 = uVar16;
            local_1b8 = uVar13;
            uStack_1b0 = uVar14;
            local_208 = (double)fVar3;
            dStack_200 = (double)fVar4;
LAB_143d13313:
            pTVar23 = (TVector<double,3> *)local_3c8;
          }
          else {
            if (Chaos::CVars::ChaosSolverDrawCCDThresholds != 0) {
              uVar18 = (uint)pTVar37->_padding_;
              lVar34 = (longlong)(int)uVar18;
              lVar22 = pTVar37->_padding_;
              uVar40 = uVar43;
              if ((int)uVar18 < *(int *)(lVar22 + 0x568)) {
                uVar40 = ~uVar18 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x560);
              uVar18 = (uint)pTVar37->_padding_;
              lVar35 = (longlong)(int)uVar18;
              lVar36 = pTVar37->_padding_;
              uVar19 = *(undefined8 *)(lVar22 + 8 + lVar34 * 0x10);
              local_2d8._8_8_ = (undefined8)*(float *)(lVar22 + 4 + lVar34 * 0x10);
              local_2d8._0_8_ = (undefined8)*(float *)(lVar22 + lVar34 * 0x10);
              dVar44 = (double)(float)((ulonglong)uVar19 >> 0x20);
              local_2d8._24_4_ = SUB84(dVar44,0);
              local_2d8._16_8_ = (double)(float)uVar19;
              local_2d8._28_4_ = (int)((ulonglong)dVar44 >> 0x20);
              uVar40 = uVar43;
              if ((int)uVar18 < *(int *)(lVar36 + 0x550)) {
                uVar40 = ~uVar18 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar36 + 0x548);
              pTVar20 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pTVar37->_padding_,
                                   (int)pTVar37->_padding_);
              local_368 = *(double *)(lVar22 + 0x10 + lVar35 * 0x18) -
                          *(double *)&pTVar20->field_0x10;
              local_378._8_8_ =
                   *(double *)(lVar22 + 8 + lVar35 * 0x18) - *(double *)&pTVar20->field_0x8;
              local_378._0_8_ = *(double *)(lVar22 + lVar35 * 0x18) - *(double *)pTVar20;
              uVar18 = (uint)pTVar37->_padding_;
              lVar22 = pTVar37->_padding_;
              uVar40 = uVar43;
              if ((int)uVar18 < *(int *)(lVar22 + 0x130)) {
                uVar40 = ~uVar18 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x128);
              pTVar20 = Chaos::TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pTVar37->_padding_,
                                   (int)pTVar37->_padding_);
              Chaos::DebugDraw::DrawCCDAxisThreshold
                        (pTVar20,(TVector<double,3> *)(lVar22 + (longlong)(int)uVar18 * 0x18),
                         (TVector<double,3> *)local_378,(TQuat<double> *)local_2d8);
            }
            uVar18 = (uint)pTVar37->_padding_;
            lVar34 = (longlong)(int)uVar18;
            lVar22 = pTVar37->_padding_;
            uVar40 = uVar43;
            if ((int)uVar18 < *(int *)(lVar22 + 0x568)) {
              uVar40 = ~uVar18 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar22 + 0x560);
            uVar18 = (uint)pTVar37->_padding_;
            lVar35 = (longlong)(int)uVar18;
            lVar36 = pTVar37->_padding_;
            uVar19 = *(undefined8 *)(lVar22 + 8 + lVar34 * 0x10);
            local_2b8._8_8_ = (undefined8)*(float *)(lVar22 + 4 + lVar34 * 0x10);
            local_2b8._0_8_ = (undefined8)*(float *)(lVar22 + lVar34 * 0x10);
            dVar44 = (double)(float)((ulonglong)uVar19 >> 0x20);
            local_2b8._24_4_ = SUB84(dVar44,0);
            local_2b8._16_8_ = (double)(float)uVar19;
            local_2b8._28_4_ = (int)((ulonglong)dVar44 >> 0x20);
            uVar40 = uVar43;
            if ((int)uVar18 < *(int *)(lVar36 + 0x550)) {
              uVar40 = ~uVar18 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar36 + 0x548);
            pTVar20 = Chaos::TParticles<double,3>::GetX
                                ((TParticles<double,3> *)pTVar37->_padding_,(int)pTVar37->_padding_)
            ;
            local_350 = *(double *)(lVar22 + 0x10 + lVar35 * 0x18) - *(double *)&pTVar20->field_0x10
            ;
            local_358 = *(double *)(lVar22 + 8 + lVar35 * 0x18) - *(double *)&pTVar20->field_0x8;
            local_360 = *(double *)(lVar22 + lVar35 * 0x18) - *(double *)pTVar20;
            uVar18 = (uint)pTVar37->_padding_;
            lVar22 = pTVar37->_padding_;
            uVar40 = uVar43;
            if ((int)uVar18 < *(int *)(lVar22 + 0x130)) {
              uVar40 = ~uVar18 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            bVar17 = Chaos::FCCDHelpers::DeltaExceedsThreshold
                               ((TVector<double,3> *)
                                (*(longlong *)(lVar22 + 0x128) + (longlong)(int)uVar18 * 0x18),
                                (TVector<double,3> *)&local_360,(TQuat<double> *)local_2b8);
            if (!bVar17) {
              uVar18 = (uint)pTVar37->_padding_;
              lVar34 = (longlong)(int)uVar18;
              lVar22 = pTVar37->_padding_;
              local_318._0_8_ = *(undefined8 *)((longlong)this + 0x50);
              uVar40 = uVar43;
              if ((int)uVar18 < *(int *)(lVar22 + 0x568)) {
                uVar40 = ~uVar18 >> 0x1f;
              }
              local_318._8_8_ = local_318._0_8_;
              local_308._0_8_ = local_318._0_8_;
              if ((uVar40 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar22 + 0x560);
              uVar18 = (uint)pTVar37->_padding_;
              lVar36 = pTVar37->_padding_;
              fVar3 = *(float *)(lVar22 + lVar34 * 0x10);
              fVar4 = *(float *)(lVar22 + 4 + lVar34 * 0x10);
              uVar19 = *(undefined8 *)(lVar22 + 8 + lVar34 * 0x10);
              dVar44 = (double)(float)((ulonglong)uVar19 >> 0x20);
              if ((int)uVar18 < *(int *)(lVar36 + 0x550)) {
                uVar43 = ~uVar18 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar22 = *(longlong *)(lVar36 + 0x548);
              local_138._8_4_ = SUB84(dVar44,0);
              local_138._0_8_ = (double)(float)uVar19;
              local_138._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              pTVar20 = (TVector<double,3> *)local_318;
              pTVar39 = (TRigidTransform<double,3> *)&local_148;
              local_118 = *(undefined8 *)(lVar22 + 0x10 + (longlong)(int)uVar18 * 0x18);
              puVar2 = (undefined8 *)(lVar22 + (longlong)(int)uVar18 * 0x18);
              local_128 = *puVar2;
              uStack_120 = puVar2[1];
              uStack_110 = 0;
              local_108 = uVar15;
              uStack_100 = uVar16;
              local_f8 = uVar13;
              uStack_f0 = uVar14;
              local_148 = (double)fVar3;
              dStack_140 = (double)fVar4;
              goto LAB_143d13313;
            }
            dVar44 = *(double *)((longlong)this + 0x10);
            local_320 = *(double *)((longlong)this + 0x50);
            uVar55 = SUB84(dVar44 * (double)local_460._0_8_,0);
            uVar56 = (uint)((ulonglong)(dVar44 * (double)local_460._0_8_) >> 0x20);
            uVar57 = SUB84(dVar44 * (double)local_460._8_8_,0);
            uVar58 = (uint)((ulonglong)(dVar44 * (double)local_460._8_8_) >> 0x20);
            uVar18 = SUB84(dVar44 * local_450,0);
            uVar40 = (uint)((ulonglong)(dVar44 * local_450) >> 0x20);
            if ((Chaos::CVars::bChaosCollisionCCDUseTightBoundingBox == false) &&
               (1 < Chaos::CVars::ChaosCollisionCCDConstraintMaxProcessCount)) {
              dVar44 = (double)CONCAT44(uVar56 & uVar12,uVar55 & uVar11);
              dVar52 = (double)CONCAT44(uVar58 & uVar12,uVar57 & uVar11);
              if (dVar44 <= dVar52) {
                dVar44 = dVar52;
              }
              uVar50 = uVar18 & uVar11;
              uVar51 = uVar40 & uVar12;
              if (dVar44 <= (double)CONCAT44(uVar51,uVar50)) {
                dVar44 = (double)CONCAT44(uVar51,uVar50);
              }
              local_320 = local_320 + dVar44;
            }
            uVar50 = (uint)pTVar37->_padding_;
            lVar34 = (longlong)(int)uVar50;
            lVar22 = pTVar37->_padding_;
            local_348._8_4_ = uVar57 ^ uVar59;
            local_348._12_4_ = uVar58 ^ uVar60;
            local_348._4_4_ = uVar56 ^ uVar60;
            local_348._0_4_ = uVar55 ^ uVar59;
            local_348._16_4_ = uVar18 ^ uVar59;
            local_348._20_4_ = uVar40 ^ uVar60;
            uVar18 = uVar43;
            if ((int)uVar50 < *(int *)(lVar22 + 0x568)) {
              uVar18 = ~uVar50 >> 0x1f;
            }
            local_330._8_4_ = SUB84(local_320,0);
            local_330._0_8_ = local_320;
            local_330._12_4_ = (int)((ulonglong)local_320 >> 0x20);
            if ((uVar18 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar22 + 0x560);
            uVar18 = (uint)pTVar37->_padding_;
            lVar36 = pTVar37->_padding_;
            fVar3 = *(float *)(lVar22 + lVar34 * 0x10);
            fVar4 = *(float *)(lVar22 + 4 + lVar34 * 0x10);
            uVar19 = *(undefined8 *)(lVar22 + 8 + lVar34 * 0x10);
            dVar44 = (double)(float)((ulonglong)uVar19 >> 0x20);
            if ((int)uVar18 < *(int *)(lVar36 + 0x550)) {
              uVar43 = ~uVar18 >> 0x1f;
            }
            if ((uVar43 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar36 + 0x548);
            local_198._8_4_ = SUB84(dVar44,0);
            local_198._0_8_ = (double)(float)uVar19;
            local_198._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
            pTVar20 = (TVector<double,3> *)local_330;
            pTVar39 = (TRigidTransform<double,3> *)&local_1a8;
            local_178 = *(undefined8 *)(lVar22 + 0x10 + (longlong)(int)uVar18 * 0x18);
            puVar2 = (undefined8 *)(lVar22 + (longlong)(int)uVar18 * 0x18);
            local_188 = *puVar2;
            uStack_180 = puVar2[1];
            pTVar23 = &local_348;
            uStack_170 = 0;
            local_168 = uVar15;
            uStack_160 = uVar16;
            local_158 = uVar13;
            uStack_150 = uVar14;
            local_1a8 = (double)fVar3;
            dStack_1a0 = (double)fVar4;
          }
          Chaos::TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceStateSwept
                    ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,(int)pTVar37->_padding_
                     ,pTVar39,pTVar20,pTVar23);
          lVar22 = local_428;
          param_3 = local_42c;
          uVar40 = local_430;
        }
        this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        pTVar33 = this_00;
        if (1 < *(byte *)((longlong)&pTVar37->_padding_ + 4)) {
          pTVar33 = pTVar37;
        }
        if ((pTVar33 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
           (bVar17 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar33), !bVar17)) {
LAB_143d133bf:
          pbVar27 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                              ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                               (int)pTVar37->_padding_);
          if ((*pbVar27 != false) || (Chaos::ForceNoCollisionIntoSQ != 0)) {
            pFVar28 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                                ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                                 (int)pTVar37->_padding_);
            pFVar29 = Chaos::FPendingSpatialInternalDataQueue::Add
                                ((FPendingSpatialInternalDataQueue *)(*(longlong *)this + 0x398),
                                 local_420 + 1,(FUniqueIdx)pFVar28->Idx,Add);
            pFVar29->Operation = Update;
            ppTVar30 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                 ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                                  (int)pTVar37->_padding_);
            local_418 = *ppTVar30;
            pTStack_410 = pTVar37;
            pFVar28 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                                ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                                 (int)pTVar37->_padding_);
            FStack_404.Word2 = 0;
            FStack_404.Word3 = 0;
            FStack_404.Word0 = 0;
            FStack_404.Word1 = 0;
            FStack_3f4.Word2 = 0;
            FStack_3f4.Word3 = 0;
            local_408 = pFVar28->Idx;
            FStack_3f4.Word0 = 0;
            FStack_3f4.Word1 = 0;
            local_3e4 = local_3e4 & 0xffffff00;
            if ((local_408 == -1) &&
               (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                    ,0xf76,"CachedUniqueIdx.IsValid()"), bVar17)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            Chaos::FAccelerationStructureHandle::
            ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      (pTVar37,&FStack_404);
            Chaos::FAccelerationStructureHandle::
            ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                      (pTVar37,&FStack_3f4);
            local_3e4 = CONCAT31(local_3e4._1_3_,1);
            (pFVar29->AccelerationHandle).ExternalGeometryParticle = local_418;
            (pFVar29->AccelerationHandle).GeometryParticleHandle = pTStack_410;
            (pFVar29->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_408;
            (pFVar29->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_404.Word0;
            (pFVar29->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_404.Word1;
            (pFVar29->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_404.Word2;
            *(ulonglong *)&(pFVar29->AccelerationHandle).UnionQueryFilterData.Word3 =
                 CONCAT44(FStack_3f4.Word0,FStack_404.Word3);
            (pFVar29->AccelerationHandle).UnionSimFilterData.Word1 = FStack_3f4.Word1;
            (pFVar29->AccelerationHandle).UnionSimFilterData.Word2 = FStack_3f4.Word2;
            *(ulonglong *)&(pFVar29->AccelerationHandle).UnionSimFilterData.Word3 =
                 CONCAT44(local_3e4,FStack_3f4.Word3);
            pFVar31 = Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
                                ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                                 (int)pTVar37->_padding_);
            pFVar29->SpatialIdx = *pFVar31;
          }
        }
        else {
          pTVar33 = this_00;
          if (2 < *(byte *)((longlong)&pTVar37->_padding_ + 4)) {
            pTVar33 = pTVar37;
          }
          if (pTVar33 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pCVar24 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                                ((TPBDRigidClusteredParticles<double,3> *)pTVar33->_padding_,
                                 (int)pTVar33->_padding_);
            pTVar33 = (TGeometryParticleHandleImp<double,3,1> *)pCVar24->Id;
            if (pTVar33 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              if (2 < *(byte *)((longlong)&pTVar33->_padding_ + 4)) {
                this_00 = pTVar33;
              }
              if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                    ,0x215,"false");
                if (bVar17) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                bVar17 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                   ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00);
                if (bVar17) {
                  pIVar25 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                      ((TGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                                       (int)this_00->_padding_);
                  pIVar26 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                      ((TGeometryParticlesImp<double,3,0> *)pTVar37->_padding_,
                                       (int)pTVar37->_padding_);
                  if (pIVar25 == pIVar26) goto LAB_143d133bf;
                }
              }
            }
          }
        }
      }
      local_430 = uVar40 + 1;
      uVar41 = (ulonglong)local_430;
      lVar22 = lVar22 + 8;
    } while ((int)local_430 < param_3);
  }
  return;
}

// operator() @ 143d23650

void __thiscall `Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_2>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  longlong lVar5;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar6;
  TGeometryParticle<double,3> *pTVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  ClusterId *pCVar11;
  IPhysicsProxyBase *pIVar12;
  IPhysicsProxyBase *pIVar13;
  bool *pbVar14;
  FUniqueIdx *pFVar15;
  FPendingSpatialData *pFVar16;
  TGeometryParticle<double,3> **ppTVar17;
  FSpatialAccelerationIdx *pFVar18;
  TGeometryParticleHandleImp<double,3,1> *pTVar19;
  undefined8 *puVar20;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_00;
  undefined1 local_res10 [8];
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  if ((Chaos::AccelerationStructureSplitStaticAndDynamic != 1) ||
     (Chaos::AccelerationStructureUseDynamicTree == 0)) {
    plVar3 = *(longlong **)((longlong)this + 8);
    puVar20 = (undefined8 *)*plVar3;
    lVar9 = plVar3[1];
    puVar1 = puVar20 + (int)lVar9;
    while( true ) {
      if ((int)plVar3[1] != (int)lVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (puVar20 == puVar1) break;
      pTVar4 = (TGeometryParticleHandleImp<double,3,1> *)*puVar20;
      lVar5 = *(longlong *)this;
      pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
        pTVar19 = pTVar4;
      }
      if ((pTVar19 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
         (bVar10 = Chaos::TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar19), !bVar10)) {
LAB_143d23765:
        pbVar14 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                            ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                             (int)pTVar4->_padding_);
        if ((*pbVar14 != false) || (Chaos::ForceNoCollisionIntoSQ != 0)) {
          pFVar15 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                               (int)pTVar4->_padding_);
          pFVar16 = Chaos::FPendingSpatialDataQueue::FindOrAdd
                              ((FPendingSpatialDataQueue *)(lVar5 + 0x3d0),(FUniqueIdx)pFVar15->Idx,
                               Add);
          pFVar16->Operation = Update;
          ppTVar17 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                                (int)pTVar4->_padding_);
          pTVar7 = *ppTVar17;
          pFVar15 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                               (int)pTVar4->_padding_);
          FStack_54.Word2 = 0;
          FStack_54.Word3 = 0;
          FStack_54.Word0 = 0;
          FStack_54.Word1 = 0;
          iVar2 = pFVar15->Idx;
          FStack_44.Word2 = 0;
          FStack_44.Word3 = 0;
          FStack_44.Word0 = 0;
          FStack_44.Word1 = 0;
          local_34 = local_34 & 0xffffff00;
          if ((iVar2 == -1) &&
             (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                  ,0xf76,"CachedUniqueIdx.IsValid()"), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          Chaos::FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (pTVar4,&FStack_54);
          Chaos::FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (pTVar4,&FStack_44);
          local_34 = CONCAT31(local_34._1_3_,1);
          (pFVar16->AccelerationHandle).ExternalGeometryParticle = pTVar7;
          (pFVar16->AccelerationHandle).GeometryParticleHandle = pTVar4;
          (pFVar16->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iVar2;
          (pFVar16->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
          (pFVar16->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
          (pFVar16->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
          *(ulonglong *)&(pFVar16->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_44.Word0,FStack_54.Word3);
          (pFVar16->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
          (pFVar16->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
          *(ulonglong *)&(pFVar16->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_34,FStack_44.Word3);
          pFVar18 = Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
                              ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                               (int)pTVar4->_padding_);
          pFVar16->SpatialIdx = *pFVar18;
        }
      }
      else {
        pTVar19 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (2 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
          pTVar19 = pTVar4;
        }
        if (pTVar19 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pCVar11 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                              ((TPBDRigidClusteredParticles<double,3> *)pTVar19->_padding_,
                               (int)pTVar19->_padding_);
          pTVar6 = pCVar11->Id;
          if (pTVar6 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)pTVar6->field_0xc) {
              this_00 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar6;
            }
            if (this_00 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                  ,0x215,"false");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            else {
              bVar10 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                 (this_00);
              if (bVar10) {
                pIVar12 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (*(TGeometryParticlesImp<double,3,0> **)this_00,
                                     *(int *)&this_00->field_0x8);
                pIVar13 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    ((TGeometryParticlesImp<double,3,0> *)pTVar4->_padding_,
                                     (int)pTVar4->_padding_);
                if (pIVar12 == pIVar13) goto LAB_143d23765;
              }
            }
          }
        }
      }
      puVar20 = puVar20 + 1;
    }
  }
  return;
}

// operator() @ 143d23c30

void __thiscall
`Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache'::__l5::<lambda_2>::operator()
          (void *this,TGeometryParticleHandleImp<double,3,0> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  FEvolutionResimCache *pFVar5;
  FPBDRigidsSOAs *pFVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar11;
  TGeometryParticleHandleImp<double,3,1> *pTVar12;
  FPBDIsland *pFVar13;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar14;
  ForAnyElementType FVar15;
  TGeometryParticleHandleImp<double,3,0> *pTVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<Chaos::Private::FPBDIsland_const_*,TSizedDefaultAllocator<32>_> local_28;
  
  uVar3 = (uint)param_1->_padding_;
  lVar4 = param_1->_padding_;
  uVar10 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x208)) {
    uVar10 = ~uVar3 >> 0x1f;
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
  if (*(char *)((longlong)(int)uVar3 + *(longlong *)(lVar4 + 0x200)) != '\0') {
    bVar2 = *(byte *)((longlong)&param_1->_padding_ + 4);
    pTVar16 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
    if (1 < bVar2) {
      pTVar16 = param_1;
    }
    if (pTVar16 == (TGeometryParticleHandleImp<double,3,0> *)0x0) {
      pTVar16 = (TGeometryParticleHandleImp<double,3,0> *)0x0;
      if (2 < bVar2) {
        pTVar16 = param_1;
      }
      if (pTVar16 != (TGeometryParticleHandleImp<double,3,0> *)0x0) {
        pFVar5 = *(FEvolutionResimCache **)((longlong)this + 0x10);
        pTVar14 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,0>::Handle
                            ((TPBDRigidClusteredParticleHandleImp<double,3,0> *)pTVar16);
        bVar9 = Chaos::FEvolutionResimCache::ReloadParticlePostSolve
                          (pFVar5,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
        if (bVar9) {
          lVar4 = *(longlong *)((longlong)this + 8);
          pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)
                    Chaos::TPBDRigidClusteredParticleHandleImp<double,3,0>::Handle
                              ((TPBDRigidClusteredParticleHandleImp<double,3,0> *)pTVar16);
          Chaos::Private::FPBDIslandManager::FindParticleIslands
                    ((FPBDIslandManager *)(lVar4 + 0x100),&local_28,pTVar12);
          iVar8 = local_28.ArrayNum;
          pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
          FVar15.Data = local_28.AllocatorInstance.Data;
          while( true ) {
            if (local_28.ArrayNum != iVar8) {
              `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*,int,0>::operator!='::__l2
              ::<lambda_1>::operator()(local_res18);
            }
            if (FVar15.Data == pFVar1) break;
            lVar4 = *(longlong *)FVar15.Data;
            if (((lVar4 != 0) && ((*(uint *)(lVar4 + 0x94) >> 10 & 1) == 0)) &&
               ((*(uint *)(lVar4 + 0x94) >> 9 & 1) == 0)) {
              pFVar13 = Chaos::Private::FPBDIslandManager::GetIsland
                                  ((FPBDIslandManager *)(*(longlong *)((longlong)this + 8) + 0x100),
                                   *(int *)(lVar4 + 0x7c));
              (pFVar13->Flags).Bits = (pFVar13->Flags).Bits | 0x400;
            }
            FVar15.Data = FVar15.Data + 8;
          }
          if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.AllocatorInstance.Data);
          }
          pFVar6 = *(FPBDRigidsSOAs **)(*(longlong *)this + 0x2d8);
          pTVar14 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,0>::Handle
                              ((TPBDRigidClusteredParticleHandleImp<double,3,0> *)pTVar16);
          Chaos::FPBDRigidsSOAs::SetClusteredParticleSOA(pFVar6,pTVar14);
        }
      }
    }
    else {
      pFVar5 = *(FEvolutionResimCache **)((longlong)this + 0x10);
      pTVar11 = Chaos::TPBDRigidParticles<double,3>::Handle
                          ((TPBDRigidParticles<double,3> *)pTVar16->_padding_,
                           (int)pTVar16->_padding_);
      bVar9 = Chaos::FEvolutionResimCache::ReloadParticlePostSolve(pFVar5,pTVar11);
      if (bVar9) {
        lVar4 = *(longlong *)((longlong)this + 8);
        pTVar12 = (TGeometryParticleHandleImp<double,3,1> *)
                  Chaos::TPBDRigidParticles<double,3>::Handle
                            ((TPBDRigidParticles<double,3> *)pTVar16->_padding_,
                             (int)pTVar16->_padding_);
        Chaos::Private::FPBDIslandManager::FindParticleIslands
                  ((FPBDIslandManager *)(lVar4 + 0x100),&local_38,pTVar12);
        iVar8 = local_38.ArrayNum;
        pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
        FVar15.Data = local_38.AllocatorInstance.Data;
        while( true ) {
          if (local_38.ArrayNum != iVar8) {
            `TCheckedPointerIterator<Chaos::Private::FPBDIsland_const_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res10);
          }
          if (FVar15.Data == pFVar1) break;
          lVar4 = *(longlong *)FVar15.Data;
          if (((lVar4 != 0) && ((*(uint *)(lVar4 + 0x94) >> 10 & 1) == 0)) &&
             ((*(uint *)(lVar4 + 0x94) >> 9 & 1) == 0)) {
            pFVar13 = Chaos::Private::FPBDIslandManager::GetIsland
                                ((FPBDIslandManager *)(*(longlong *)((longlong)this + 8) + 0x100),
                                 *(int *)(lVar4 + 0x7c));
            (pFVar13->Flags).Bits = (pFVar13->Flags).Bits | 0x400;
          }
          FVar15.Data = FVar15.Data + 8;
        }
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        pFVar6 = *(FPBDRigidsSOAs **)(*(longlong *)this + 0x2d8);
        pTVar11 = Chaos::TPBDRigidParticles<double,3>::Handle
                            ((TPBDRigidParticles<double,3> *)pTVar16->_padding_,
                             (int)pTVar16->_padding_);
        Chaos::FPBDRigidsSOAs::SetDynamicParticleSOA(pFVar6,pTVar11);
      }
    }
  }
  return;
}

// operator() @ 143d31f40

void __thiscall
`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>::operator()(void *this)

{
  longlong lVar1;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  TParticleHandleBase<double,3>_u_0 *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  EParticleType EVar6;
  bool bVar7;
  ClusterId *pCVar8;
  IPhysicsProxyBase *pIVar9;
  IPhysicsProxyBase *pIVar10;
  bool *pbVar11;
  FUniqueIdx *pFVar12;
  FPendingSpatialData *pFVar13;
  TGeometryParticle<double,3> **ppTVar14;
  FSpatialAccelerationIdx *pFVar15;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar16;
  TParticleHandleBase<double,3>_u_0 this_00;
  int iVar17;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar18;
  int iStack_9c;
  undefined1 local_98 [24];
  int iStack_80;
  EParticleType EStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TGeometryParticle<double,3> *local_68;
  TGeometryParticleHandleImp<double,3,1> *pTStack_60;
  int local_58;
  FCollisionFilterData FStack_54;
  FCollisionFilterData FStack_44;
  uint local_34;
  
  if (((Chaos::AccelerationStructureSplitStaticAndDynamic != 1) ||
      (Chaos::AccelerationStructureUseDynamicTree == 0)) &&
     (Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98,
                 (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                  *)(*(longlong *)(*(longlong *)this + 0x2d8) + 0x670)),
     (TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
     (TGeometryParticlesImp<double,3,0> *)0x0)) {
    pTVar18 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
    this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    iVar17 = iStack_80;
    do {
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      EVar6 = EStack_7c;
      lVar1 = *(longlong *)this;
      pTVar16 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
      if (EStack_7c < Rigid) {
        pTVar16 = pTVar18;
      }
      if ((pTVar16 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) ||
         (bVar7 = Chaos::TPBDRigidParticleHandleImp<double,3,0>::Disabled(pTVar16), !bVar7)) {
LAB_143d32069:
        pbVar11 = Chaos::TGeometryParticlesImp<double,3,0>::HasCollision
                            (this_00.GeometryParticles,iVar17);
        if ((*pbVar11 != false) || (Chaos::ForceNoCollisionIntoSQ != 0)) {
          pFVar12 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              (this_00.GeometryParticles,iVar17);
          pFVar13 = Chaos::FPendingSpatialDataQueue::FindOrAdd
                              ((FPendingSpatialDataQueue *)(lVar1 + 0x3d0),(FUniqueIdx)pFVar12->Idx,
                               Add);
          pFVar13->Operation = Update;
          ppTVar14 = Chaos::TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                               (this_00.GeometryParticles,iVar17);
          local_68 = *ppTVar14;
          pTStack_60 = Chaos::TGeometryParticleHandleImp<double,3,0>::Handle
                                 ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
          pFVar12 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                              (this_00.GeometryParticles,iVar17);
          FStack_54.Word2 = 0;
          FStack_54.Word3 = 0;
          FStack_54.Word0 = 0;
          FStack_54.Word1 = 0;
          FStack_44.Word2 = 0;
          FStack_44.Word3 = 0;
          local_58 = pFVar12->Idx;
          FStack_44.Word0 = 0;
          FStack_44.Word1 = 0;
          local_34 = local_34 & 0xffffff00;
          if ((local_58 == -1) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                 ,0xf76,"CachedUniqueIdx.IsValid()"), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          Chaos::FAccelerationStructureHandle::
          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_54);
          Chaos::FAccelerationStructureHandle::
          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                    ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10),&FStack_44);
          local_34 = CONCAT31(local_34._1_3_,1);
          (pFVar13->AccelerationHandle).ExternalGeometryParticle = local_68;
          (pFVar13->AccelerationHandle).GeometryParticleHandle = pTStack_60;
          (pFVar13->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_58;
          (pFVar13->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_54.Word0;
          (pFVar13->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_54.Word1;
          (pFVar13->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_54.Word2;
          *(ulonglong *)&(pFVar13->AccelerationHandle).UnionQueryFilterData.Word3 =
               CONCAT44(FStack_44.Word0,FStack_54.Word3);
          (pFVar13->AccelerationHandle).UnionSimFilterData.Word1 = FStack_44.Word1;
          (pFVar13->AccelerationHandle).UnionSimFilterData.Word2 = FStack_44.Word2;
          *(ulonglong *)&(pFVar13->AccelerationHandle).UnionSimFilterData.Word3 =
               CONCAT44(local_34,FStack_44.Word3);
          pFVar15 = Chaos::TGeometryParticlesImp<double,3,0>::SpatialIdx
                              (this_00.GeometryParticles,iVar17);
          pFVar13->SpatialIdx = *pFVar15;
        }
      }
      else {
        pTVar16 = (TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10);
        if (EVar6 < Clustered) {
          pTVar16 = pTVar18;
        }
        if (pTVar16 != (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
          pCVar8 = Chaos::TPBDRigidClusteredParticles<double,3>::ClusterIds
                             (*(TPBDRigidClusteredParticles<double,3> **)pTVar16,
                              *(int *)&pTVar16->field_0x8);
          pTVar2 = pCVar8->Id;
          if (pTVar2 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            pTVar16 = pTVar18;
            if (2 < (byte)pTVar2->field_0xc) {
              pTVar16 = (TPBDRigidParticleHandleImp<double,3,0> *)pTVar2;
            }
            if (pTVar16 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                 ,0x215,"false");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              bVar7 = Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar16);
              if (bVar7) {
                pIVar9 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                   (*(TGeometryParticlesImp<double,3,0> **)pTVar16,
                                    *(int *)&((TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                             pTVar16)->field_0x8);
                pIVar10 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                    (this_00.GeometryParticles,iVar17);
                if (pIVar9 == pIVar10) goto LAB_143d32069;
              }
            }
          }
        }
      }
      Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      do {
        uVar5 = local_98._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar17 = iVar17 + 1;
          iStack_80 = iVar17;
          if (local_74 <= iVar17) {
LAB_143d32194:
            local_78 = local_78 + 1;
            Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
            iVar17 = iStack_80;
          }
        }
        else {
          iVar17 = local_70 + 1;
          local_70 = iVar17;
          if (*(int *)(local_98._8_8_ + 8) <= iVar17) goto LAB_143d32194;
          if ((iVar17 < 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar5)->Data + (longlong)iVar17 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar3->GeometryParticles;
          iVar17 = *(int *)(pTVar3 + 1);
          if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          else {
            iStack_9c = CONCAT31(iStack_9c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          _EStack_7c = iStack_9c;
          iStack_80 = iVar17;
          local_98._16_8_ = this_00;
        }
        if (this_00.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
          return;
        }
        Chaos::TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
        bVar7 = Chaos::TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar7);
    } while (this_00.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
  return;
}

// Advance @ 143d3c170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::Advance
          (FPBDRigidsEvolutionGBF *this,double param_1,double param_2,int param_3)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FSubStepInfo local_58 [3];
  
  iVar3 = -((int)ROUND(__real_bfe0000000000000 - (__real_4000000000000000 / param_2) * param_1) >> 1
           );
  if (0 < iVar3) {
    FPBDRigidsEvolutionBase::PrepareTick((FPBDRigidsEvolutionBase *)this);
    iVar2 = param_3;
    if (iVar3 < param_3) {
      iVar2 = iVar3;
    }
    iVar5 = 1;
    if (1 < iVar2) {
      iVar5 = iVar2;
    }
    if (0 < iVar5) {
      dVar1 = __real_3ff0000000000000 / (double)iVar5;
      iVar2 = 0;
      do {
        iVar4 = iVar2 + 1;
        if (5 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        local_58[0].bSolverSubstepped = false;
        local_58[0].PseudoFraction = (double)iVar4 * dVar1;
        local_58[0].Step = iVar2;
        local_58[0].NumSteps = param_3;
        AdvanceOneTimeStepImpl(this,param_1 / (double)iVar3,local_58);
        iVar2 = iVar4;
      } while (iVar4 < iVar5);
    }
    FPBDRigidsEvolutionBase::UnprepareTick((FPBDRigidsEvolutionBase *)this);
  }
  return;
}

// AdvanceOneTimeStep @ 143d3c2d0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStep
          (FPBDRigidsEvolutionGBF *this,double param_1,FSubStepInfo *param_2)

{
  FChaosDDScopeTimelineContext local_48;
  
  ChaosDD::Private::FChaosDDScopeTimelineContext::FChaosDDScopeTimelineContext
            (&local_48,&this->CDDTickTimeline,0.0,param_1);
  FPBDRigidsEvolutionBase::PrepareTick((FPBDRigidsEvolutionBase *)this);
  AdvanceOneTimeStepImpl(this,param_1,param_2);
  FPBDRigidsEvolutionBase::UnprepareTick((FPBDRigidsEvolutionBase *)this);
  ChaosDD::Private::FChaosDDScopeTimelineContext::~FChaosDDScopeTimelineContext(&local_48);
  return;
}

// AdvanceOneTimeStepImpl @ 143d3c340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl
          (FPBDRigidsEvolutionGBF *this,double param_1,FSubStepInfo *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  FPBDCollisionConstraint *this_00;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FEvolutionResimCache *pFVar8;
  longlong lVar9;
  TParticleHandleBase<double,3>_u_0 *pTVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  TStatId TVar20;
  uint *puVar21;
  FChaosVDThreadContext *pFVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_Integrate> FVar24;
  FThreadStats *pFVar25;
  FThreadStatsPool *pFVar26;
  FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_KinematicTargets> FVar27;
  FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_UpdateConstraintPositionBasedState>
  FVar28;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *pTVar29;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar30;
  FUniqueIdx *pFVar31;
  FPBDSolveCache *pFVar32;
  TVector<double,3> *pTVar33;
  FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_DeactivateSleep> FVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  longlong *plVar37;
  undefined4 *puVar38;
  FScriptContainerElement *pFVar39;
  undefined8 *puVar40;
  FName FVar41;
  FPBDCollisionConstraint **ppFVar42;
  TParticleHandleBase<double,3>_u_0 TVar43;
  ECollisionSolverType EVar44;
  longlong lVar45;
  double dVar46;
  undefined1 local_res20 [8];
  undefined1 local_968;
  undefined1 local_967;
  undefined1 local_966;
  FChaosCVDScopedDataChannelOverride local_965;
  undefined1 local_964;
  FChaosCVDScopedDataChannelOverride local_963;
  undefined1 local_962;
  FChaosCVDScopedDataChannelOverride local_961;
  undefined1 local_960;
  FChaosCVDScopedDataChannelOverride local_95f;
  undefined1 local_95e;
  FChaosCVDScopedDataChannelOverride local_95d;
  undefined1 local_95c;
  FChaosCVDScopedDataChannelOverride local_95b;
  undefined1 local_95a;
  FChaosCVDScopedDataChannelOverride local_959;
  FChaosCVDScopedDataChannelOverride local_958;
  undefined1 local_957;
  FChaosCVDScopedDataChannelOverride local_956;
  undefined1 local_955;
  FChaosCVDScopedDataChannelOverride local_954;
  undefined1 local_953;
  FChaosCVDScopedDataChannelOverride local_952;
  undefined1 local_951;
  undefined1 local_950 [8];
  FCycleCounter local_948;
  FCycleCounter local_938;
  FCycleCounter local_928;
  FCycleCounter local_918;
  FCycleCounter local_908;
  FCycleCounter local_8f8;
  FCycleCounter local_8e8;
  FCycleCounter local_8d8;
  FCycleCounter local_8c8;
  FCycleCounter local_8b8;
  FCycleCounter local_8a8;
  FCycleCounter local_898;
  FCycleCounter local_888;
  FCycleCounter local_878;
  FCycleCounter local_868;
  FCycleCounter local_858;
  FCycleCounter local_848;
  FCycleCounter local_838;
  FCycleCounter local_828;
  FCycleCounter local_818;
  FCycleCounter local_808;
  FCycleCounter local_7f8;
  FCycleCounter local_7e8;
  ForAnyElementType local_7d8;
  int local_7d0 [2];
  undefined1 local_7c8 [24];
  int iStack_7b0;
  EParticleType EStack_7ac;
  int local_7a8;
  int local_7a4;
  int local_7a0;
  undefined1 local_798 [24];
  int iStack_780;
  undefined4 uStack_77c;
  int local_778;
  int local_774;
  int local_770;
  FColor_u_0 local_768;
  FColor_u_0 local_764;
  FUniqueIdx local_760;
  FUniqueIdx local_75c;
  FColor_u_0 local_758;
  uint local_754;
  FColor_u_0 local_750 [2];
  FName local_748;
  FName local_740;
  FName local_738;
  FName local_730;
  FName local_728;
  FName local_718;
  FName local_708;
  FName local_6f8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_6e8;
  TParticleHandleBase<double,3>_u_0 local_6d8;
  int iStack_6d0;
  int iStack_6cc;
  TParticleHandleBase<double,3>_u_0 local_6c8;
  int iStack_6c0;
  int iStack_6bc;
  LARGE_INTEGER local_6b8;
  LARGE_INTEGER local_6b0;
  FPBDRigidsEvolutionGBF *local_6a8;
  FPBDRigidsEvolutionGBF *local_6a0;
  double local_698;
  FStatMessage local_690;
  FStatMessage local_680;
  FSourceLocation local_668;
  FSourceLocation local_648;
  FSourceLocation local_628;
  FSourceLocation local_608;
  FSourceLocation local_5e8;
  FSourceLocation local_5c8;
  FSourceLocation local_5a8;
  FSourceLocation local_588;
  FSourceLocation local_568;
  FSourceLocation local_548;
  FSourceLocation local_528;
  FSourceLocation local_508;
  FSourceLocation local_4e8;
  FSourceLocation local_4c8;
  FSourceLocation local_4a8;
  FSourceLocation local_488;
  FSourceLocation local_468;
  FSourceLocation local_448;
  FSourceLocation local_428;
  FSourceLocation local_408;
  FSourceLocation local_3e8;
  FSourceLocation local_3c8;
  FSourceLocation local_3a8;
  code *local_388;
  undefined1 *local_380;
  code *local_378;
  undefined1 *local_370;
  code *local_368;
  undefined1 *local_360;
  wchar_t *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  code *local_348;
  undefined1 *local_340;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_338;
  wchar_t *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  code *local_318;
  undefined1 *local_310;
  wchar_t *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  code *local_2f8;
  undefined1 *local_2f0;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  code *local_2d8;
  undefined1 *local_2d0;
  FScriptContainerElement *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  code *local_2a8;
  undefined1 *local_2a0;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  code *local_288;
  undefined1 *local_280;
  code *local_278;
  FPBDRigidsEvolutionGBF **local_270;
  wchar_t *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  code *local_258;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  TStringView<wchar_t> local_218;
  TStringView<wchar_t> local_208;
  TStringView<wchar_t> local_1f8;
  TStringView<wchar_t> local_1e8;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_1d8;
  TStringView<wchar_t> local_1c8;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_1b8;
  TStringView<wchar_t> local_1a8;
  TStringView<wchar_t> local_198 [2];
  FName local_178 [19];
  FName local_e0;
  FName local_d8 [2];
  TVector<double,3> local_c8;
  TVector<double,3> local_b0;
  TVector<double,3> local_98;
  TVector<double,3> local_80;
  FName local_68;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_60 [2];
  
  if (!__CsvProfilerStat530) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_AdvanceOneTimeStepImpl",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat530 = true;
  }
  local_754 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_AdvanceOneTimeStepImpl",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_AdvanceOneTimeStepImpl");
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_AdvanceOneTimeStep,1>::
           GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_AdvanceOneTimeStep,1>
                      *)&CVars::StatPtr_STAT_Evolution_AdvanceOneTimeStep);
  local_628.Impl._Line = 0x213;
  local_628.Impl._Column = 2;
  local_948.StatId.ComparisonIndex.Value = 0;
  local_948.StatId.Number = 0;
  local_628.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_628.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  local_948.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_948,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_628);
  EVar44 = GaussSeidel;
  if (param_2->Step == 0) {
    puVar38 = (undefined4 *)this->_padding_;
    iVar18 = (int)this->_padding_;
    puVar2 = puVar38 + iVar18;
    while( true ) {
      if ((int)this->_padding_ != iVar18) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FUniqueIdx,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (puVar38 == puVar2) break;
      plVar37 = *(longlong **)(this->_padding_ + 0x708);
      (**(code **)(*plVar37 + 0x10))(plVar37,*puVar38);
      puVar38 = puVar38 + 1;
    }
    iVar18 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar18 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)&this->_padding_,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
  }
  if (CVars::SerializeEvolution != 0) {
    SerializeToDisk<Chaos::FPBDRigidsEvolutionGBF>(this);
  }
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_965,&CVDDC_EvolutionStart);
  uStack_350 = 0xf;
  local_358 = L"Evolution Start";
  local_218._12_4_ = uStack_34c;
  local_218.Size = 0xf;
  local_218.DataPtr = L"Evolution Start";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_218);
  FChaosVisualDebuggerTrace::TraceParticlesSoA((FPBDRigidsSOAs *)this->_padding_,&this->Clustering);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_340 = &local_964;
  local_348 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_348,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  if (-1 < CVars::ChaosSolverCollisionSolverType) {
    if (CVars::ChaosSolverCollisionSolverType == 1) {
      EVar44 = GaussSeidelSimd;
    }
    else if (CVars::ChaosSolverCollisionSolverType == 2) {
      EVar44 = PartialJacobi;
    }
    if (EVar44 != (this->CollisionConstraints).CollisionSolverType) {
      Chaos::Private::FPBDIslandGroupManager::RemoveConstraintContainer
                ((FPBDIslandGroupManager *)&this->_padding_,
                 (FPBDConstraintContainer *)&this->CollisionConstraints);
      (this->CollisionConstraints).CollisionSolverType = EVar44;
      Chaos::Private::FPBDIslandGroupManager::AddConstraintContainer
                ((FPBDIslandGroupManager *)&this->_padding_,
                 (FPBDConstraintContainer *)&this->CollisionConstraints,
                 CVars::ChaosSolverCollisionPriority);
    }
  }
  if (0 < CVars::Chaos_Solver_TestMode_Step) {
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,Chaos::FPBDRigidsEvolutionBase::FTestModeParticleData,0>,FDefaultSetAllocator>
             *)&this->_padding_);
    CVars::Chaos_Solver_TestMode_Step = CVars::Chaos_Solver_TestMode_Step + -1;
  }
  FPBDRigidsEvolutionBase::TestModeSaveParticles((FPBDRigidsEvolutionBase *)this);
  FPBDRigidsEvolutionBase::TestModeRestoreParticles((FPBDRigidsEvolutionBase *)this);
  if (CVars::bChaos_Solver_TestMode_Enabled != false) {
    FPBDCollisionConstraints::GetConstraintHandles(&this->CollisionConstraints,&local_338);
    for (ppFVar42 = local_338.DataPtr; ppFVar42 != local_338.DataPtr + local_338.ArrayNum;
        ppFVar42 = ppFVar42 + 1) {
      this_00 = *ppFVar42;
      if (this_00 != (FPBDCollisionConstraint *)0x0) {
        FPBDCollisionConstraint::ResetManifold(this_00);
        if (((this_00->Flags).Bits >> 0xb & 1) != 0) {
          (this_00->Flags).Bits = (this_00->Flags).Bits & 0xefff;
          FPBDCollisionConstraint::UpdateMaterialPropertiesImpl(this_00);
          (this_00->Flags).Bits =
               (ushort)((this_00->BoundsTestFlags).Bits >> 5 & 1) << 8 |
               (this_00->Flags).Bits & 0xf6ff | 0x1000;
        }
        (this_00->GJKWarmStartData).NumVerts = 0;
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FThreadSafeStaticStatInner<`Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl'::__l14::FStat_STAT_Evolution_StepSolver_IntegrateKinematicSpatial,1>
    ::GetStatId(&StatPtr_STAT_Evolution_StepSolver_IntegrateKinematicSpatial);
    _Init_thread_footer(&::_TSS0);
  }
  TVar20 = FThreadSafeStaticStatInner<`Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl'::__l14::FStat_STAT_Evolution_StepSolver_IntegrateKinematicSpatial,1>
           ::GetStatId(&StatPtr_STAT_Evolution_StepSolver_IntegrateKinematicSpatial);
  local_648.Impl._Line = 0x239;
  local_648.Impl._Column = 3;
  local_648.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_878.StatId.ComparisonIndex.Value = 0;
  local_878.StatId.Number = 0;
  local_878.EmittedEvent = 0;
  local_648.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_878,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_648);
  if (__CsvProfilerStat570 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_IntegrateKinematicSpatial",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat570 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_IntegrateKinematicSpatial",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_IntegrateKinematicSpatial");
  if (*(longlong *)&this->PreIntegrateCallback != 0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreIntegrateCallback,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreIntegrateCallback,1>
                        *)&CVars::StatPtr_STAT_Evolution_PreIntegrateCallback);
    local_668.Impl._Line = 0x23d;
    local_668.Impl._Column = 4;
    local_668.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_8a8.StatId.ComparisonIndex.Value = 0;
    local_8a8.StatId.Number = 0;
    local_8a8.EmittedEvent = 0;
    local_668.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_8a8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_668);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
                *)&this->PreIntegrateCallback,param_1);
    if ((local_8a8.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_8a8.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_8a8.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_8a8.StatId,CycleScopeEnd);
    }
    local_8a8.EmittedEvent = '\0';
  }
  FVar24 = CVars::StatPtr_STAT_Evolution_Integrate;
  if (CVars::StatPtr_STAT_Evolution_Integrate ==
      (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_Integrate>)0x0) {
    pFVar23 = ::FName::FName(local_d8,"STAT_Evolution_Integrate");
    FVar24 = (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_Integrate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&CVars::StatPtr_STAT_Evolution_Integrate,
                        *pFVar23,L"FPBDRigidsEvolutionGBF::Integrate","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar24;
  bVar17 = false;
  bVar16 = false;
  local_708.ComparisonIndex.Value = 0;
  local_708.Number = 0;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_143d3c948:
    bVar15 = false;
    FVar41 = local_708;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_768.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_768._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_748.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_748.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_748,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                   ,0x242);
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143d3c948;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar15 = true;
  }
  if (__CsvProfilerStat579 == false) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_Integrate",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat579 = true;
  }
  uVar6 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_Integrate",_GCsvCategory_PhysicsVerbose.Index,"CSV_StepSolver_Integrate");
  Integrate(this,param_1);
  FCsvProfiler::EndStat("StepSolver_Integrate",uVar6);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar15) && (FVar41 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      local_690.NameAndInfo.Index = FVar41.ComparisonIndex.Value;
      local_690.NameAndInfo.Number = FVar41.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_6b8);
      local_690.StatData.Pad[4] = '\0';
      local_690.StatData.Pad[5] = '\0';
      local_690.StatData.Pad[6] = '\0';
      local_690.StatData.Pad[7] = '\0';
      local_690.StatData.Pad[0] = local_6b8.s.LowPart._0_1_;
      local_690.StatData.Pad[1] = local_6b8.s.LowPart._1_1_;
      local_690.StatData.Pad[2] = local_6b8.s.LowPart._2_1_;
      local_690.StatData.Pad[3] = local_6b8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&local_690);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if (this->_padding_ != 0) {
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>_&)>
                  *)&this->_padding_,
                 (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)(this->_padding_ + 0x670));
  }
  FVar27 = CVars::StatPtr_STAT_Evolution_KinematicTargets;
  if (CVars::StatPtr_STAT_Evolution_KinematicTargets ==
      (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_KinematicTargets>)0x0) {
    pFVar23 = ::FName::FName(&local_e0,"STAT_Evolution_KinematicTargets");
    FVar27 = (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_KinematicTargets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&CVars::StatPtr_STAT_Evolution_KinematicTargets
                        ,*pFVar23,L"FPBDRigidsEvolutionGBF::KinematicTargets","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar27;
  bVar17 = false;
  bVar16 = false;
  local_718.ComparisonIndex.Value = 0;
  local_718.Number = 0;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_143d3cbd1:
    bVar15 = false;
    FVar41 = local_718;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_750[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_750[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_740.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_740.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_740,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                   ,0x24d);
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143d3cbd1;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar15 = true;
  }
  if (__CsvProfilerStat590 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_KinematicTargets",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat590 = true;
  }
  uVar6 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_KinematicTargets",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_KinematicTargets");
  ApplyKinematicTargets(this,param_1,param_2->PseudoFraction);
  FCsvProfiler::EndStat("StepSolver_KinematicTargets",uVar6);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar41 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar25 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar25 == (FThreadStats *)0x0) {
      pFVar26 = FThreadStatsPool::Get();
      pFVar25 = FThreadStatsPool::GetFromPool(pFVar26);
    }
    if (pFVar25->bWaitForExplicitFlush < pFVar25->ScopeCount) {
      local_680.NameAndInfo.Index = FVar41.ComparisonIndex.Value;
      local_680.NameAndInfo.Number = FVar41.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_6b0);
      local_680.StatData.Pad[4] = '\0';
      local_680.StatData.Pad[5] = '\0';
      local_680.StatData.Pad[6] = '\0';
      local_680.StatData.Pad[7] = '\0';
      local_680.StatData.Pad[0] = local_6b0.s.LowPart._0_1_;
      local_680.StatData.Pad[1] = local_6b0.s.LowPart._1_1_;
      local_680.StatData.Pad[2] = local_6b0.s.LowPart._2_1_;
      local_680.StatData.Pad[3] = local_6b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar25,&local_680);
      piVar1 = &pFVar25->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar25,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar25,false,false);
      }
    }
  }
  if (*(longlong *)&this->PostIntegrateCallback != 0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostIntegrateCallback,1>
             ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostIntegrateCallback,1>
                          *)&CVars::StatPtr_STAT_Evolution_PostIntegrateCallback);
    local_3a8.Impl._Line = 0x254;
    local_3a8.Impl._Column = 4;
    local_3a8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_898.StatId.ComparisonIndex.Value = 0;
    local_898.StatId.Number = 0;
    local_898.EmittedEvent = 0;
    local_3a8.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_898,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_3a8);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
                *)&this->PostIntegrateCallback,param_1);
    if ((local_898.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_898.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_898.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_898.StatId,CycleScopeEnd);
    }
    local_898.EmittedEvent = '\0';
  }
  FVar28 = CVars::StatPtr_STAT_Evolution_UpdateConstraintPositionBasedState;
  if (CVars::StatPtr_STAT_Evolution_UpdateConstraintPositionBasedState ==
      (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_UpdateConstraintPositionBasedState>)
      0x0) {
    pFVar23 = ::FName::FName(&local_68,"STAT_Evolution_UpdateConstraintPositionBasedState");
    FVar28 = (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_UpdateConstraintPositionBasedState>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &CVars::StatPtr_STAT_Evolution_UpdateConstraintPositionBasedState,*pFVar23
                          ,L"FPBDRigidsEvolutionGBF::UpdateConstraintPositionBasedState",
                          "STATGROUP_Chaos","STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar28;
  bVar17 = false;
  bVar16 = false;
  local_728.ComparisonIndex.Value = 0;
  local_728.Number = 0;
  if ((FVar41.ComparisonIndex.Value.Value == 0) && (FVar41.Number == 0)) {
LAB_143d3cef8:
    bVar15 = false;
    FVar41 = local_728;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_764.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_764._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_730.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_730.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_730,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                   ,0x259);
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143d3cef8;
    FThreadStats::AddMessage(FVar41,CycleScopeStart);
    bVar15 = true;
  }
  if (__CsvProfilerStat602 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_UpdateConstraintPositionBasedState",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat602 = true;
  }
  uVar6 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_UpdateConstraintPositionBasedState",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_UpdateConstraintPositionBasedState");
  puVar40 = (undefined8 *)this->_padding_;
  iVar18 = (int)this->_padding_;
  puVar36 = puVar40 + iVar18;
  while( true ) {
    if ((int)this->_padding_ != iVar18) {
      local_968 = 0;
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_968);
    }
    if (puVar40 == puVar36) break;
    (**(code **)(*(longlong *)*puVar40 + 0x18))((longlong *)*puVar40,SUB84(param_1,0));
    puVar40 = puVar40 + 1;
  }
  FCsvProfiler::EndStat("StepSolver_UpdateConstraintPositionBasedState",uVar6);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ComputeIntermediateSpatialAcceleration,1>
           ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ComputeIntermediateSpatialAcceleration,1>
                        *)&CVars::StatPtr_STAT_Evolution_ComputeIntermediateSpatialAcceleration);
  local_3c8.Impl._Line = 0x25e;
  local_3c8.Impl._Column = 4;
  local_3c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_888.StatId.ComparisonIndex.Value = 0;
  local_888.StatId.Number = 0;
  local_888.EmittedEvent = 0;
  local_3c8.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_888,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3c8);
  if (__CsvProfilerStat607 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_ComputeIntermediateSpatialAcceleration",
               _GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat607 = true;
  }
  uVar6 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_ComputeIntermediateSpatialAcceleration",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_ComputeIntermediateSpatialAcceleration");
  FPBDRigidsEvolutionBase::ComputeIntermediateSpatialAcceleration
            ((FPBDRigidsEvolutionBase *)this,false);
  FCsvProfiler::EndStat("StepSolver_ComputeIntermediateSpatialAcceleration",uVar6);
  if ((local_888.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_888.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_888.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_888.StatId,CycleScopeEnd);
  }
  local_888.EmittedEvent = '\0';
  if ((FTaskBase *)this->_padding_ != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)this->_padding_);
  }
  FCsvProfiler::EndStat("StepSolver_IntegrateKinematicSpatial",uVar5);
  if ((local_878.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_878.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_878.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_878.StatId,CycleScopeEnd);
  }
  local_878.EmittedEvent = '\0';
  bVar17 = FChaosVisualDebuggerTrace::IsTracing();
  if (bVar17) {
    (**(code **)(this->_padding_ + 0x30))(this);
    FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
              (&local_963,&CVDDC_PostIntegrate);
    uStack_320 = 0xe;
    local_328 = L"Post Integrate";
    local_208._12_4_ = uStack_31c;
    local_208.Size = 0xe;
    local_208.DataPtr = L"Post Integrate";
    FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_208);
    FChaosVisualDebuggerTrace::TraceParticlesSoA
              ((FPBDRigidsSOAs *)this->_padding_,&this->Clustering);
    FChaosVisualDebuggerTrace::TraceSolverStepEnd();
    puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_310 = &local_962;
    local_318 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar22 = (FChaosVDThreadContext *)
              FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_318,puVar21);
    FChaosVDThreadContext::PopContext(pFVar22);
  }
  CheckParticleViewsForErrors((FPBDRigidsSOAs *)this->_padding_);
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_DetectCollisions,1>::
           GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_DetectCollisions,1>
                      *)&CVars::StatPtr_STAT_Evolution_DetectCollisions);
  local_3e8.Impl._Line = 0x273;
  local_3e8.Impl._Column = 3;
  local_3e8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_858.StatId.ComparisonIndex.Value = 0;
  local_858.StatId.Number = 0;
  local_858.EmittedEvent = 0;
  local_3e8.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_858,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_3e8);
  if (__CsvProfilerStat628 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_DetectCollisions",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat628 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_DetectCollisions",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_DetectCollisions");
  ((this->CollisionDetector).BroadPhase)->SpatialAcceleration =
       (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)this->_padding_;
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_961,&CVDDC_CollisionDetectionBroadPhase);
  uStack_300 = 0x1f;
  local_308 = L"Collision Detection Broad Phase";
  local_1f8._12_4_ = uStack_2fc;
  local_1f8.Size = 0x1f;
  local_1f8.DataPtr = L"Collision Detection Broad Phase";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_1f8);
  FSpatialAccelerationCollisionDetector::RunBroadPhase
            (&this->CollisionDetector,param_1,this->CurrentStepResimCacheImp);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_2f0 = &local_960;
  local_2f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2f8,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  if (this->MidPhaseModifiers !=
      (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_MidPhaseModifierCallback,1>
             ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_MidPhaseModifierCallback,1>
                          *)&CVars::StatPtr_STAT_Evolution_MidPhaseModifierCallback);
    local_408.Impl._Line = 0x27e;
    local_408.Impl._Column = 4;
    local_408.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_868.StatId.ComparisonIndex.Value = 0;
    local_868.StatId.Number = 0;
    local_868.EmittedEvent = 0;
    local_408.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_868,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_408);
    pTVar7 = this->MidPhaseModifiers;
    if (pTVar7 != (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar39 = (pTVar7->AllocatorInstance).Data;
      iVar18 = pTVar7->ArrayNum;
      pFVar3 = pFVar39 + (longlong)iVar18 * 8;
      local_6a8 = this;
      while( true ) {
        if (pTVar7->ArrayNum != iVar18) {
          local_967 = 0;
          `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_967);
        }
        if (pFVar39 == pFVar3) break;
        (**(code **)(**(longlong **)pFVar39 + 0x80))(*(longlong **)pFVar39,&local_6a8);
        pFVar39 = pFVar39 + 8;
      }
    }
    if ((local_868.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_868.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_868.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_868.StatId,CycleScopeEnd);
    }
    local_868.EmittedEvent = '\0';
  }
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_95f,&CVDDC_CollisionDetectionNarrowPhase);
  uStack_2e0 = 0x20;
  local_2e8 = L"Collision Detection Narrow Phase";
  local_1e8._12_4_ = uStack_2dc;
  local_1e8.Size = 0x20;
  local_1e8.DataPtr = L"Collision Detection Narrow Phase";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_1e8);
  FSpatialAccelerationCollisionDetector::RunNarrowPhase
            (&this->CollisionDetector,param_1,this->CurrentStepResimCacheImp);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_2d0 = &local_95e;
  local_2d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d8,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  FCsvProfiler::EndStat("StepSolver_DetectCollisions",uVar5);
  if ((local_858.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_858.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_858.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_858.StatId,CycleScopeEnd);
  }
  local_858.EmittedEvent = '\0';
  if (*(longlong *)&this->PostDetectCollisionsCallback != 0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostDetectCollisionsCallback,1>
             ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostDetectCollisionsCallback,1>
                          *)&CVars::StatPtr_STAT_Evolution_PostDetectCollisionsCallback);
    local_428.Impl._Line = 0x28a;
    local_428.Impl._Column = 3;
    local_428.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_938.StatId.ComparisonIndex.Value = 0;
    local_938.StatId.Number = 0;
    local_938.EmittedEvent = 0;
    local_428.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_938,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_428);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
                *)&this->PostDetectCollisionsCallback,param_1);
    if ((local_938.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_938.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_938.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_938.StatId,CycleScopeEnd);
    }
    local_938.EmittedEvent = '\0';
  }
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_TransferJointCollisions,1>
           ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_TransferJointCollisions,1>
                        *)&CVars::StatPtr_STAT_Evolution_TransferJointCollisions);
  local_448.Impl._Line = 0x28f;
  local_448.Impl._Column = 3;
  local_448.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_848.StatId.ComparisonIndex.Value = 0;
  local_848.StatId.Number = 0;
  local_848.EmittedEvent = 0;
  local_448.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_848,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_448);
  if ((local_848.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_848.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_848.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_848.StatId,CycleScopeEnd);
  }
  local_848.EmittedEvent = '\0';
  if (this->CCDModifiers != (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0)
  {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDModifierCallback,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDModifierCallback,1>
                        *)&CVars::StatPtr_STAT_Evolution_CCDModifierCallback);
    local_468.Impl._Line = 0x295;
    local_468.Impl._Column = 3;
    local_468.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_838.StatId.ComparisonIndex.Value = 0;
    local_838.StatId.Number = 0;
    local_838.EmittedEvent = 0;
    local_468.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_838,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_468);
    FPBDCollisionConstraints::ApplyCCDModifier
              (&this->CollisionConstraints,this->CCDModifiers,param_1);
    if ((local_838.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_838.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_838.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_838.StatId,CycleScopeEnd);
    }
    local_838.EmittedEvent = '\0';
  }
  if ((this->CollisionModifiers !=
       (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (CVars::bChaosCollisionModiferBeforeCCD != false)) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>
             ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>
                          *)&CVars::StatPtr_STAT_Evolution_CollisionModifierCallback);
    local_488.Impl._Line = 0x29b;
    local_488.Impl._Column = 3;
    local_488.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_828.StatId.ComparisonIndex.Value = 0;
    local_828.StatId.Number = 0;
    local_828.EmittedEvent = 0;
    local_488.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_828,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_488);
    FPBDCollisionConstraints::ApplyCollisionModifier
              (&this->CollisionConstraints,this->CollisionModifiers,param_1);
    if ((local_828.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_828.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_828.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_828.StatId,CycleScopeEnd);
    }
    local_828.EmittedEvent = '\0';
  }
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_InertiaConditioning,1>::
           GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_InertiaConditioning,1>
                      *)&CVars::StatPtr_STAT_Evolution_InertiaConditioning);
  local_4a8.Impl._Line = 0x2a0;
  local_4a8.Impl._Column = 3;
  local_4a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_818.StatId.ComparisonIndex.Value = 0;
  local_818.StatId.Number = 0;
  local_818.EmittedEvent = 0;
  local_4a8.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_818,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_4a8);
  UpdateInertiaConditioning(this);
  if ((local_818.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_818.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_818.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_818.StatId,CycleScopeEnd);
  }
  local_818.EmittedEvent = '\0';
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCD,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCD,1> *)
                      &CVars::StatPtr_STAT_Evolution_CCD);
  local_4c8.Impl._Line = 0x2a5;
  local_4c8.Impl._Column = 3;
  local_4c8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_808.StatId.ComparisonIndex.Value = 0;
  local_808.StatId.Number = 0;
  local_808.EmittedEvent = 0;
  local_4c8.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_808,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_4c8);
  if (__CsvProfilerStat678 == false) {
    FCsvProfilerTrace::OutputInlineStat("CCD",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat678 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat("CCD",_GCsvCategory_PhysicsVerbose.Index,"CSV_CCD");
  iStack_2c0 = (this->CollisionConstraints).ConstraintAllocator.ActiveCCDConstraints.ArrayNum;
  iVar18 = *(int *)(this->_padding_ + 0x620);
  local_2c8 = (this->CollisionConstraints).ConstraintAllocator.ActiveCCDConstraints.
              AllocatorInstance.Data;
  if ((iStack_2c0 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_1d8._12_4_ = uStack_2bc;
  local_1d8.ArrayNum = iStack_2c0;
  local_1d8.DataPtr = (FPBDCollisionConstraint **)local_2c8;
  FCCDManager::ApplyCCD(&this->CCDManager,param_1,&local_1d8,iVar18);
  FCsvProfiler::EndStat("CCD",uVar5);
  if ((local_808.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_808.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_808.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_808.StatId,CycleScopeEnd);
  }
  local_808.EmittedEvent = '\0';
  if ((this->CollisionModifiers !=
       (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) &&
     (CVars::bChaosCollisionModiferBeforeCCD == false)) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>
             ::GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CollisionModifierCallback,1>
                          *)&CVars::StatPtr_STAT_Evolution_CollisionModifierCallback);
    local_4e8.Impl._Line = 0x2ac;
    local_4e8.Impl._Column = 3;
    local_4e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_4e8.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    local_928.StatId.ComparisonIndex.Value = 0;
    local_928.StatId.Number = 0;
    local_928.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_928,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_4e8);
    FPBDCollisionConstraints::ApplyCollisionModifier
              (&this->CollisionConstraints,this->CollisionModifiers,param_1);
    if ((local_928.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_928.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_928.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_928.StatId,CycleScopeEnd);
    }
    local_928.EmittedEvent = '\0';
  }
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateConstraintGraph,1>::
           GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateConstraintGraph,1>
                      *)&CVars::StatPtr_STAT_Evolution_CreateConstraintGraph);
  local_508.Impl._Line = 0x2b1;
  local_508.Impl._Column = 3;
  local_508.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_8b8.StatId.ComparisonIndex.Value = 0;
  local_8b8.StatId.Number = 0;
  local_8b8.EmittedEvent = 0;
  local_508.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_8b8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_508);
  if (__CsvProfilerStat690 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_CreateConstraintGraph",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat690 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_CreateConstraintGraph",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_CreateConstraintGraph");
  Chaos::Private::FPBDIslandManager::UpdateParticles((FPBDIslandManager *)&this->_padding_);
  puVar40 = (undefined8 *)this->_padding_;
  iVar18 = (int)this->_padding_;
  puVar36 = puVar40 + iVar18;
  while( true ) {
    if ((int)this->_padding_ != iVar18) {
      local_966 = 0;
      `TCheckedPointerIterator<Chaos::FPBDConstraintContainer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_966);
    }
    if (puVar40 == puVar36) break;
    (**(code **)(*(longlong *)*puVar40 + 0x58))((longlong *)*puVar40,&this->_padding_);
    puVar40 = puVar40 + 1;
  }
  FCsvProfiler::EndStat("StepSolver_CreateConstraintGraph",uVar5);
  if ((local_8b8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8b8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8b8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8b8.StatId,CycleScopeEnd);
  }
  local_8b8.EmittedEvent = '\0';
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateIslands,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CreateIslands,1>
                       *)&CVars::StatPtr_STAT_Evolution_CreateIslands);
  local_548.Impl._Line = 0x2b6;
  local_548.Impl._Column = 3;
  local_548.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_548.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  local_8c8.StatId.ComparisonIndex.Value = 0;
  local_8c8.StatId.Number = 0;
  local_8c8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_8c8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_548);
  if (__CsvProfilerStat695 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_CreateIslands",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat695 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_CreateIslands",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_CreateIslands");
  Chaos::Private::FPBDIslandManager::UpdateIslands((FPBDIslandManager *)&this->_padding_);
  FCsvProfiler::EndStat("StepSolver_CreateIslands",uVar5);
  if ((local_8c8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8c8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8c8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8c8.StatId,CycleScopeEnd);
  }
  local_8c8.EmittedEvent = '\0';
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PruneCollisions,1>::
           GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PruneCollisions,1>
                      *)&CVars::StatPtr_STAT_Evolution_PruneCollisions);
  local_568.Impl._Line = 700;
  local_568.Impl._Column = 3;
  local_568.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_8d8.StatId.ComparisonIndex.Value = 0;
  local_8d8.StatId.Number = 0;
  local_8d8.EmittedEvent = 0;
  local_568.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  FCycleCounter::Start
            (&local_8d8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_568);
  if (__CsvProfilerStat701 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_PruneCollisions",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat701 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_PruneCollisions",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_PruneCollisions");
  Chaos::Private::FCollisionConstraintAllocator::PruneExpiredMidPhases
            (&(this->CollisionConstraints).ConstraintAllocator);
  FCsvProfiler::EndStat("StepSolver_PruneCollisions",uVar5);
  if ((local_8d8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8d8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8d8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8d8.StatId,CycleScopeEnd);
  }
  local_8d8.EmittedEvent = '\0';
  if (*(longlong *)&this->PreSolveCallback != 0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreSolveCallback,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PreSolveCallback,1>
                        *)&CVars::StatPtr_STAT_Evolution_PreSolveCallback);
    local_588.Impl._Line = 0x2c3;
    local_588.Impl._Column = 3;
    local_588.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_8e8.StatId.ComparisonIndex.Value = 0;
    local_8e8.StatId.Number = 0;
    local_8e8.EmittedEvent = 0;
    local_588.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    FCycleCounter::Start
              (&local_8e8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_588);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
                *)&this->PreSolveCallback,param_1);
    if ((local_8e8.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_8e8.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_8e8.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_8e8.StatId,CycleScopeEnd);
    }
    local_8e8.EmittedEvent = '\0';
  }
  uVar35 = *(undefined8 *)&(this->GravityForces).MAccelerations[0].field_0x8;
  pTVar33 = &(this->CollisionConstraints).GravityDirection;
  *(undefined8 *)pTVar33 = *(undefined8 *)(this->GravityForces).MAccelerations;
  *(undefined8 *)&(this->CollisionConstraints).GravityDirection.field_0x8 = uVar35;
  *(undefined8 *)&(this->CollisionConstraints).GravityDirection.field_0x10 =
       *(undefined8 *)&(this->GravityForces).MAccelerations[0].field_0x10;
  dVar46 = TVector<double,3>::SafeNormalize(pTVar33,__real_3f1a36e2e0000000);
  bVar17 = __CsvProfilerStat716 == false;
  (this->CollisionConstraints).GravitySize = dVar46;
  if (bVar17) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_ReloadCacheTotalSerialized",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat716 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_ReloadCacheTotalSerialized",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_ReloadCacheTotalSerialized");
  ReloadParticlesCache(this);
  FCsvProfiler::EndStat("StepSolver_ReloadCacheTotalSerialized",uVar5);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_95d,&CVDDC_PreConstraintSolve);
  uStack_2b0 = 9;
  local_2b8 = L"Pre Solve";
  local_1c8._12_4_ = uStack_2ac;
  local_1c8.Size = 9;
  local_1c8.DataPtr = L"Pre Solve";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_1c8);
  FChaosVisualDebuggerTrace::TraceParticlesSoA((FPBDRigidsSOAs *)this->_padding_,&this->Clustering);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_2a0 = &local_95c;
  local_2a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2a8,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_BuildGroups,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_BuildGroups,1>
                       *)&CVars::StatPtr_STAT_Evolution_BuildGroups);
  local_528.Impl._Line = 0x2d7;
  local_528.Impl._Column = 3;
  local_528.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  local_528.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_8f8.StatId.ComparisonIndex.Value = 0;
  local_8f8.StatId.Number = 0;
  local_8f8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_8f8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_528);
  if (__CsvProfilerStat728 == false) {
    FCsvProfilerTrace::OutputInlineStat("StepSolver_BuildGroups",_GCsvCategory_PhysicsVerbose.Index)
    ;
    __CsvProfilerStat728 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_BuildGroups",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_BuildGroups");
  Chaos::Private::FPBDIslandGroupManager::BuildGroups
            ((FPBDIslandGroupManager *)&this->_padding_,SUB81(this->_padding_,0));
  FCsvProfiler::EndStat("StepSolver_BuildGroups",uVar5);
  if ((local_8f8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8f8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8f8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_8f8.StatId,CycleScopeEnd);
  }
  local_8f8.EmittedEvent = '\0';
  local_6e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6e8.ArrayNum = 0;
  local_6e8.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&local_6e8,(int)this->_padding_,Default);
  uVar5 = (uint)this->_padding_;
  local_7d8.Data = (FScriptContainerElement *)0x0;
  local_7d0[0] = 0;
  local_7d0[1] = 0;
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
  }
  else {
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar5,&local_7d8,local_7d0,local_7d0 + 1);
    memset(local_7d8.Data + (longlong)iVar18 * 0x10,0,(longlong)(int)uVar5 << 4);
  }
  if (0.0 < param_1) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ParallelSolve,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_ParallelSolve,1>
                        *)&CVars::StatPtr_STAT_Evolution_ParallelSolve);
    local_5a8.Impl._Line = 0x2e7;
    local_5a8.Impl._Column = 4;
    local_5a8.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    local_908.StatId.ComparisonIndex.Value = 0;
    local_908.StatId.Number = 0;
    local_5a8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_908.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_908,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_5a8);
    if (__CsvProfilerStat744 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("StepSolver_PerIslandSolve",_GCsvCategory_PhysicsVerbose.Index);
      __CsvProfilerStat744 = true;
    }
    uVar5 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("StepSolver_PerIslandSolve",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_StepSolver_PerIslandSolve");
    Chaos::Private::FPBDIslandGroupManager::Solve
              ((FPBDIslandGroupManager *)&this->_padding_,param_1);
    FCsvProfiler::EndStat("StepSolver_PerIslandSolve",uVar5);
    if ((local_908.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_908.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_908.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_908.StatId,CycleScopeEnd);
    }
    local_908.EmittedEvent = '\0';
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDCorrection,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_CCDCorrection,1>
                        *)&CVars::StatPtr_STAT_Evolution_CCDCorrection);
    local_5c8.Impl._Line = 0x2ef;
    local_5c8.Impl._Column = 4;
    local_5c8.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    local_918.StatId.ComparisonIndex.Value = 0;
    local_918.StatId.Number = 0;
    local_5c8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_918.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_918,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_5c8);
    if (__CsvProfilerStat752 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("StepSolver_CCDCorrection",_GCsvCategory_PhysicsVerbose.Index);
      __CsvProfilerStat752 = true;
    }
    uVar5 = _GCsvCategory_PhysicsVerbose.Index;
    FCsvProfiler::BeginStat
              ("StepSolver_CCDCorrection",_GCsvCategory_PhysicsVerbose.Index,
               "CSV_StepSolver_CCDCorrection");
    pTVar29 = Chaos::Private::FCollisionConstraintAllocator::GetCCDConstraints
                        (&(this->CollisionConstraints).ConstraintAllocator,local_60);
    local_1b8.DataPtr = pTVar29->DataPtr;
    local_1b8.ArrayNum = pTVar29->ArrayNum;
    local_1b8._12_4_ = *(undefined4 *)&pTVar29->field_0xc;
    FCCDManager::ProjectCCD(&this->CCDManager,param_1,&local_1b8);
    FCsvProfiler::EndStat("StepSolver_CCDCorrection",uVar5);
    if ((local_918.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_918.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_918.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_918.StatId,CycleScopeEnd);
    }
    local_918.EmittedEvent = '\0';
  }
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_95b,&CVDDC_PostConstraintSolve);
  uStack_290 = 10;
  local_298 = L"Post Solve";
  local_1a8._12_4_ = uStack_28c;
  local_1a8.Size = 10;
  local_1a8.DataPtr = L"Post Solve";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(&local_1a8);
  FChaosVisualDebuggerTrace::TraceParticlesSoA((FPBDRigidsSOAs *)this->_padding_,&this->Clustering);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_280 = &local_95a;
  local_288 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  if (*(longlong *)&this->PostSolveCallback != 0) {
    TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostSolveCallback,1>::
             GetStatId((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_PostSolveCallback,1>
                        *)&CVars::StatPtr_STAT_Evolution_PostSolveCallback);
    local_5e8.Impl._Line = 0x2fc;
    local_5e8.Impl._Column = 3;
    local_5e8.Impl._Function =
         "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
    ;
    local_5e8.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
    ;
    local_7f8.StatId.ComparisonIndex.Value = 0;
    local_7f8.StatId.Number = 0;
    local_7f8.EmittedEvent = 0;
    FCycleCounter::Start
              (&local_7f8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false
               ,&local_5e8);
    UE::Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>::
    operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(double)>
                *)&this->PostSolveCallback,param_1);
    if ((local_7f8.EmittedEvent & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_7f8.EmittedEvent & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_7f8.EmittedEvent & 4) != 0) {
      FThreadStats::AddMessage(local_7f8.StatId,CycleScopeEnd);
    }
    local_7f8.EmittedEvent = '\0';
  }
  TVar20 = FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_SavePostSolve,1>::GetStatId
                     ((FThreadSafeStaticStatInner<Chaos::CVars::FStat_STAT_Evolution_SavePostSolve,1>
                       *)&CVars::StatPtr_STAT_Evolution_SavePostSolve);
  local_608.Impl._Line = 0x301;
  local_608.Impl._Column = 3;
  local_608.Impl._Function =
       "void __cdecl Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl(const double,const struct Chaos::FSubStepInfo &)"
  ;
  local_608.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
  ;
  local_7e8.StatId.ComparisonIndex.Value = 0;
  local_7e8.StatId.Number = 0;
  local_7e8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_7e8,*(TStatIdData **)&(TVar20.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_608);
  if (__CsvProfilerStat770 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_SavePostSolve",_GCsvCategory_PhysicsVerbose.Index);
    __CsvProfilerStat770 = true;
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_SavePostSolve",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_SavePostSolve");
  pFVar8 = this->CurrentStepResimCacheImp;
  if (pFVar8 != (FEvolutionResimCache *)0x0) {
    TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
               local_7c8,
               (TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                *)(this->_padding_ + 0x658));
    if ((TGeometryParticlesImp<double,3,0> *)local_7c8._16_8_ !=
        (TGeometryParticlesImp<double,3,0> *)0x0) {
      TVar43 = (TParticleHandleBase<double,3>_u_0)local_7c8._16_8_;
      iVar18 = iStack_7b0;
      do {
        TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_7c8);
        puVar36 = (undefined8 *)(local_7c8 + 0x10);
        if (EStack_7ac < Rigid) {
          puVar36 = (undefined8 *)0x0;
        }
        if (puVar36 != (undefined8 *)0x0) {
          pTVar30 = TPBDRigidParticles<double,3>::Handle
                              ((TPBDRigidParticles<double,3> *)*puVar36,*(int *)(puVar36 + 1));
          pFVar31 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                              (*(TGeometryParticlesImp<double,3,0> **)pTVar30,
                               *(int *)&pTVar30->field_0x8);
          local_760.Idx = pFVar31->Idx;
          pFVar32 = TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
                    ::FindOrAddImpl<Chaos::FUniqueIdx>
                              ((TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
                                *)&pFVar8->ParticleToCachedSolve,local_760.Idx,&local_760);
          pTVar33 = TPBDRigidParticleHandleImp<double,3,1>::GetP(pTVar30);
          uVar35 = *(undefined8 *)&pTVar33->field_0x8;
          *(undefined8 *)&pFVar32->P = *(undefined8 *)pTVar33;
          *(undefined8 *)&(pFVar32->P).field_0x8 = uVar35;
          *(undefined8 *)&(pFVar32->P).field_0x10 = *(undefined8 *)&pTVar33->field_0x10;
          uVar6 = *(uint *)&pTVar30->field_0x8;
          lVar45 = (longlong)(int)uVar6;
          lVar9 = *(longlong *)pTVar30;
          uVar19 = 0;
          if ((int)uVar6 < *(int *)(lVar9 + 0x568)) {
            uVar19 = ~uVar6 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar9 = *(longlong *)(lVar9 + 0x560);
          fVar4 = *(float *)(lVar9 + 4 + lVar45 * 0x10);
          uVar35 = *(undefined8 *)(lVar9 + 8 + lVar45 * 0x10);
          (pFVar32->Q).X = (double)*(float *)(lVar9 + lVar45 * 0x10);
          (pFVar32->Q).Y = (double)fVar4;
          dVar46 = (double)(float)uVar35;
          dVar14 = (double)(float)((ulonglong)uVar35 >> 0x20);
          auVar12._8_4_ = SUB84(dVar14,0);
          auVar12._0_8_ = dVar46;
          auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          (pFVar32->Q).Z = dVar46;
          (pFVar32->Q).W = (double)auVar12._8_8_;
          TKinematicGeometryParticlesImp<double,3,0>::GetV
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar30,&local_c8,
                     *(int *)&pTVar30->field_0x8);
          *(undefined8 *)&pFVar32->V = local_c8._0_8_;
          *(undefined8 *)&(pFVar32->V).field_0x8 = local_c8._8_8_;
          *(undefined8 *)&(pFVar32->V).field_0x10 = local_c8._16_8_;
          TKinematicGeometryParticlesImp<double,3,0>::GetW
                    (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar30,&local_b0,
                     *(int *)&pTVar30->field_0x8);
          *(undefined8 *)&pFVar32->W = local_b0._0_8_;
          *(undefined8 *)&(pFVar32->W).field_0x8 = local_b0._8_8_;
          *(undefined8 *)&(pFVar32->W).field_0x10 = local_b0._16_8_;
          TVar43 = (TParticleHandleBase<double,3>_u_0)local_7c8._16_8_;
          iVar18 = iStack_7b0;
        }
        TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_7c8);
        do {
          uVar35 = local_7c8._8_8_;
          if ((TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               *)local_7c8._8_8_ ==
              (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
               *)0x0) {
            iVar18 = iVar18 + 1;
            iStack_7b0 = iVar18;
            if (local_7a4 <= iVar18) {
LAB_143d3e73d:
              local_7a8 = local_7a8 + 1;
              TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
              SeekNonEmptySOA((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_7c8);
              TVar43 = (TParticleHandleBase<double,3>_u_0)local_7c8._16_8_;
              iVar18 = iStack_7b0;
            }
          }
          else {
            iVar18 = local_7a0 + 1;
            local_7a0 = iVar18;
            if (*(int *)(local_7c8._8_8_ + 8) <= iVar18) goto LAB_143d3e73d;
            if ((iVar18 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar10 = *(TParticleHandleBase<double,3>_u_0 **)
                       (((ForAnyElementType *)uVar35)->Data + (longlong)iVar18 * 8);
            TVar43 = (TParticleHandleBase<double,3>_u_0)pTVar10->GeometryParticles;
            iVar18 = *(int *)(pTVar10 + 1);
            if (TVar43.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
              iStack_6bc = (uint)iStack_6bc._1_3_ << 8;
            }
            else {
              iStack_6bc = CONCAT31(iStack_6bc._1_3_,(TVar43.GeometryParticles)->MParticleType);
            }
            _EStack_7ac = iStack_6bc;
            iStack_7b0 = iVar18;
            local_7c8._16_8_ = TVar43;
            local_6c8 = TVar43;
            iStack_6c0 = iVar18;
          }
          if (TVar43.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
          goto LAB_143d3e78d;
          TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
          RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                               *)local_7c8);
          bVar17 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                             ((TGeometryParticleHandleImp<double,3,0> *)(local_7c8 + 0x10));
        } while (bVar17);
      } while (TVar43.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
    }
LAB_143d3e78d:
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_798,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)(this->_padding_ + 0x5e0));
    if ((TPBDRigidParticles<double,3> *)local_798._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
      TVar43 = (TParticleHandleBase<double,3>_u_0)local_798._16_8_;
      iVar18 = iStack_780;
      do {
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_798);
        pTVar30 = TPBDRigidParticles<double,3>::Handle(TVar43.PBDRigidParticles,iVar18);
        pFVar31 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            (*(TGeometryParticlesImp<double,3,0> **)pTVar30,
                             *(int *)&pTVar30->field_0x8);
        local_75c.Idx = pFVar31->Idx;
        pFVar32 = TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
                  ::FindOrAddImpl<Chaos::FUniqueIdx>
                            ((TMapBase<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::FUniqueIdx,Chaos::FEvolutionResimCache::FPBDSolveCache,0>_>
                              *)&pFVar8->ParticleToCachedSolve,local_75c.Idx,&local_75c);
        pTVar33 = TPBDRigidParticleHandleImp<double,3,1>::GetP(pTVar30);
        uVar35 = *(undefined8 *)&pTVar33->field_0x8;
        *(undefined8 *)&pFVar32->P = *(undefined8 *)pTVar33;
        *(undefined8 *)&(pFVar32->P).field_0x8 = uVar35;
        *(undefined8 *)&(pFVar32->P).field_0x10 = *(undefined8 *)&pTVar33->field_0x10;
        uVar6 = *(uint *)&pTVar30->field_0x8;
        lVar45 = (longlong)(int)uVar6;
        lVar9 = *(longlong *)pTVar30;
        uVar19 = 0;
        if ((int)uVar6 < *(int *)(lVar9 + 0x568)) {
          uVar19 = ~uVar6 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        lVar9 = *(longlong *)(lVar9 + 0x560);
        fVar4 = *(float *)(lVar9 + 4 + lVar45 * 0x10);
        uVar35 = *(undefined8 *)(lVar9 + 8 + lVar45 * 0x10);
        (pFVar32->Q).X = (double)*(float *)(lVar9 + lVar45 * 0x10);
        (pFVar32->Q).Y = (double)fVar4;
        dVar46 = (double)(float)uVar35;
        dVar14 = (double)(float)((ulonglong)uVar35 >> 0x20);
        auVar13._8_4_ = SUB84(dVar14,0);
        auVar13._0_8_ = dVar46;
        auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        (pFVar32->Q).Z = dVar46;
        (pFVar32->Q).W = (double)auVar13._8_8_;
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar30,&local_98,
                   *(int *)&pTVar30->field_0x8);
        *(undefined8 *)&pFVar32->V = local_98._0_8_;
        *(undefined8 *)&(pFVar32->V).field_0x8 = local_98._8_8_;
        *(undefined8 *)&(pFVar32->V).field_0x10 = local_98._16_8_;
        TKinematicGeometryParticlesImp<double,3,0>::GetW
                  (*(TKinematicGeometryParticlesImp<double,3,0> **)pTVar30,&local_80,
                   *(int *)&pTVar30->field_0x8);
        *(undefined8 *)&pFVar32->W = local_80._0_8_;
        *(undefined8 *)&(pFVar32->W).field_0x8 = local_80._8_8_;
        *(undefined8 *)&(pFVar32->W).field_0x10 = local_80._16_8_;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_798);
        TVar43 = (TParticleHandleBase<double,3>_u_0)local_798._16_8_;
        iVar18 = iStack_780;
        do {
          uVar35 = local_798._8_8_;
          if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )local_798._8_8_ ==
              (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
              )0x0) {
            iVar18 = iVar18 + 1;
            iStack_780 = iVar18;
            if (local_774 <= iVar18) {
LAB_143d3e92d:
              local_778 = local_778 + 1;
              TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                        ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_798);
              TVar43 = (TParticleHandleBase<double,3>_u_0)local_798._16_8_;
              iVar18 = iStack_780;
            }
          }
          else {
            iVar18 = local_770 + 1;
            local_770 = iVar18;
            if (*(int *)(local_798._8_8_ + 8) <= iVar18) goto LAB_143d3e92d;
            if ((iVar18 < 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar10 = *(TParticleHandleBase<double,3>_u_0 **)
                       (((ForAnyElementType *)uVar35)->Data + (longlong)iVar18 * 8);
            TVar43 = (TParticleHandleBase<double,3>_u_0)pTVar10->GeometryParticles;
            iVar18 = *(int *)(pTVar10 + 1);
            if ((TPBDRigidParticles<double,3> *)TVar43.GeometryParticles ==
                (TPBDRigidParticles<double,3> *)0x0) {
              iStack_6cc = (uint)iStack_6cc._1_3_ << 8;
            }
            else {
              iStack_6cc = CONCAT31(iStack_6cc._1_3_,(TVar43.GeometryParticles)->MParticleType);
            }
            uStack_77c = iStack_6cc;
            iStack_780 = iVar18;
            local_798._16_8_ = TVar43;
            local_6d8 = TVar43;
            iStack_6d0 = iVar18;
          }
          if ((TPBDRigidParticles<double,3> *)TVar43.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) goto LAB_143d3e97d;
          TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_798);
          bVar17 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                             ((TGeometryParticleHandleImp<double,3,0> *)(local_798 + 0x10));
        } while (bVar17);
      } while ((TPBDRigidParticles<double,3> *)TVar43.GeometryParticles !=
               (TPBDRigidParticles<double,3> *)0x0);
    }
  }
LAB_143d3e97d:
  FCsvProfiler::EndStat("StepSolver_SavePostSolve",uVar5);
  if ((local_7e8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_7e8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_7e8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_7e8.StatId,CycleScopeEnd);
  }
  FVar34 = CVars::StatPtr_STAT_Evolution_DeactivateSleep;
  if (CVars::StatPtr_STAT_Evolution_DeactivateSleep ==
      (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_DeactivateSleep>)0x0) {
    pFVar23 = ::FName::FName(local_178,"STAT_Evolution_DeactivateSleep");
    FVar34 = (FThreadSafeStaticStat<Chaos::CVars::FStat_STAT_Evolution_DeactivateSleep>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&CVars::StatPtr_STAT_Evolution_DeactivateSleep,
                        *pFVar23,L"FPBDRigidsEvolutionGBF::DeactivateSleep","STATGROUP_Chaos",
                        "STATCAT_Advanced",L"Chaos",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar34;
  bVar17 = false;
  bVar16 = false;
  local_6f8.ComparisonIndex.Value = 0;
  local_6f8.Number = 0;
  if ((FVar41.ComparisonIndex.Value.Value != 0) || (FVar41.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_758.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_758._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar17 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_738.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_738.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_738,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                   ,0x317);
        bVar17 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar15 = true;
      goto LAB_143d3ec79;
    }
  }
  bVar15 = false;
  FVar41 = local_6f8;
LAB_143d3ec79:
  if (DAT_15507248b == '\0') {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_DeactivateSleep",_GCsvCategory_PhysicsVerbose.Index);
    DAT_15507248b = '\x01';
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_DeactivateSleep",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_DeactivateSleep");
  Chaos::Private::FPBDIslandManager::UpdateSleep((FPBDIslandManager *)&this->_padding_,param_1);
  local_270 = &local_6a0;
  local_278 = UE::Core::Private::Function::
              TFunctionRefCaller<`Chaos::FPBDRigidsEvolutionGBF::AdvanceOneTimeStepImpl'[::C]::<lambda_1>,void,FPBDRigidsEvolutionGBF::TPBDRigidParticleHandleImp<double,3,1>_*>
              ::Call;
  local_6a0 = this;
  Chaos::Private::FPBDIslandManager::UpdateDisable
            ((FPBDIslandManager *)&this->_padding_,
             (TFunctionRef<void___cdecl(Chaos::TPBDRigidParticleHandleImp<double,3,1>_*)> *)
             &local_278);
  FCsvProfiler::EndStat("StepSolver_DeactivateSleep",uVar5);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  FRigidClustering::AdvanceClustering(&this->Clustering,param_1,&this->CollisionConstraints);
  if ((void *)this->_padding_ != (void *)0x0) {
    lVar9 = this->_padding_;
    UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
    pcVar11 = (code *)this->_padding_;
    plVar37 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar37 = (longlong *)this->_padding_;
    }
    uVar35 = (**(code **)(*plVar37 + 8))();
    (*pcVar11)(uVar35,lVar9 + 0x628);
  }
  lVar9 = this->_padding_;
  local_698 = param_1;
  UE::Core::Private::Function::CheckCallable((void *)this->_padding_);
  pcVar11 = (code *)this->_padding_;
  plVar37 = &this->_padding_;
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    plVar37 = (longlong *)this->_padding_;
  }
  uVar35 = (**(code **)(*plVar37 + 8))();
  (*pcVar11)(uVar35,lVar9 + 0x628,&local_698);
  if (DAT_15507248c == '\0') {
    FCsvProfilerTrace::OutputInlineStat
              ("StepSolver_IslandEndTick",_GCsvCategory_PhysicsVerbose.Index);
    DAT_15507248c = '\x01';
  }
  uVar5 = _GCsvCategory_PhysicsVerbose.Index;
  FCsvProfiler::BeginStat
            ("StepSolver_IslandEndTick",_GCsvCategory_PhysicsVerbose.Index,
             "CSV_StepSolver_IslandEndTick");
  Chaos::Private::FPBDIslandManager::EndTick((FPBDIslandManager *)&this->_padding_);
  FCsvProfiler::EndStat("StepSolver_IslandEndTick",uVar5);
  if ((CVars::bChaos_Solver_TestMode_Enabled != false) &&
     (CVars::bChaos_Solver_TestMode_ShowInitialTransforms != false)) {
    FPBDRigidsEvolutionBase::TestModeRestoreParticles((FPBDRigidsEvolutionBase *)this);
  }
  if (CVars::DoFinalProbeNarrowPhase != false) {
    FPBDCollisionConstraints::DetectProbeCollisions(&this->CollisionConstraints,param_1);
  }
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_959,&CVDDC_EvolutionEnd);
  uStack_260 = 0xd;
  local_268 = L"Evolution End";
  local_198[0]._12_4_ = uStack_25c;
  local_198[0].Size = 0xd;
  local_198[0].DataPtr = L"Evolution End";
  FChaosVisualDebuggerTrace::TraceSolverStepStart(local_198);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_958,&CVDDC_EndOfEvolutionCollisionConstraints);
  FChaosVisualDebuggerTrace::TraceMidPhasesFromCollisionConstraints(&this->CollisionConstraints);
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_250 = &local_957;
  local_258 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_258,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_956,&CVDDC_JointLinearConstraints);
  FChaosVisualDebuggerTrace::TraceJointsConstraints(&(this->JointConstraints).LinearConstraints);
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_240 = &local_955;
  local_248 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_954,&CVDDC_JointNonLinearConstraints);
  FChaosVisualDebuggerTrace::TraceJointsConstraints(&(this->JointConstraints).NonLinearConstraints);
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_380 = &local_953;
  local_388 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_388,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
            (&local_952,&CVDDC_CharacterGroundConstraints);
  FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints(&this->CharacterGroundConstraints);
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_360 = &local_951;
  local_368 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_368,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  FChaosVisualDebuggerTrace::TraceParticlesSoA((FPBDRigidsSOAs *)this->_padding_,&this->Clustering);
  FChaosVisualDebuggerTrace::TraceSolverStepEnd();
  puVar21 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_370 = local_950;
  local_378 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar22 = (FChaosVDThreadContext *)
            FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_378,puVar21);
  FChaosVDThreadContext::PopContext(pFVar22);
  if (CVars::SerializeEvolution != 0) {
    SerializeToDisk<Chaos::FPBDRigidsEvolutionGBF>(this);
  }
  DestructItems<TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
             local_7d8.Data,local_7d0[0]);
  if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
      local_7d8.Data !=
      (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_7d8.Data);
  }
  if (local_6e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e8.AllocatorInstance.Data);
  }
  if ((local_948.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_948.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_948.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_948.StatId,CycleScopeEnd);
  }
  local_948.EmittedEvent = '\0';
  FCsvProfiler::EndStat("StepSolver_AdvanceOneTimeStepImpl",local_754);
  return;
}

// ApplyKinematicTargets @ 143d420d0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets
          (FPBDRigidsEvolutionGBF *this,double param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TPBDRigidParticles<double,3> *pTVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  FPBDRigidsEvolutionGBF *local_res8;
  FPBDRigidsEvolutionGBF *local_108;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined7 uStack_e7;
  FPBDRigidsEvolutionGBF *local_e0;
  TPBDRigidParticles<double,3> *pTStack_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 local_b8 [48];
  undefined1 local_88 [96];
  
  dVar8 = __real_3ff0000000000000;
  uVar16 = SUB84(param_2,0);
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  if (0.0 < param_2) {
    if ((__real_3ff0000000000000 < param_2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StepFraction <= (FReal)1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                           ,0x428,L""), bVar9)) goto code_r0x000143d42167;
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("StepFraction > (FReal)0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                       ,0x427,L"");
    if (bVar9) {
code_r0x000143d42167:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar1 = this->_padding_;
  iVar12 = *(int *)(lVar1 + 0x678);
  uVar14 = SUB84(param_2 - dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar15 = (uint)((ulonglong)(param_2 - dVar8) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar9 = (double)CONCAT44(uVar15,uVar14) == __real_3f1a36e2e0000000;
  bVar5 = (double)CONCAT44(uVar15,uVar14) < __real_3f1a36e2e0000000;
  bVar7 = bVar5 || bVar9;
  iVar13 = 0;
  uVar14 = 0;
  if (0 < iVar12) {
    lVar11 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar14 < iVar12) {
        uVar15 = ~uVar14 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar2 = *(longlong *)(lVar1 + 0x670);
      pTVar3 = *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 **)(lVar2 + 8 + lVar11);
      if (pTVar3 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)0x0) {
        iVar12 = *(int *)(*(longlong *)(lVar2 + lVar11) + 0x18);
      }
      else {
        iVar12 = pTVar3->ArrayNum;
      }
      if (iVar12 != 0) {
        if (pTVar3 == (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                       *)0x0) {
          pTVar4 = *(TPBDRigidParticles<double,3> **)(lVar2 + lVar11);
          if (pTVar4 != (TPBDRigidParticles<double,3> *)0x0) {
            local_d0._8_8_ = param_2;
            local_d0._0_8_ = param_1;
            local_e0 = this;
            pTStack_d8 = pTVar4;
            local_c0 = bVar7;
            if (GSingleThreadedPhysics == 0) {
              local_88._33_7_ = uStack_bf;
              local_88[0x20] = bVar7;
              local_d0._8_4_ = uVar16;
              local_d0._12_4_ = uVar17;
              local_88._24_4_ = uVar16;
              local_88._16_8_ = param_1;
              local_88._28_4_ = uVar17;
              local_88._0_8_ = this;
              local_88._8_8_ = pTVar4;
              Chaos::Private::FTaskDispatcherEvolution::
              DispatchKinematicsTarget<_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets_::__l28::<lambda_2>_>_::__l2::<lambda_1>_>
                        ((FTaskDispatcherEvolution *)&this->_padding_,(<lambda_1> *)local_88,iVar12,
                         iVar13);
              iVar13 = iVar13 + 1;
            }
            else {
              `Chaos::FPBDRigidsEvolutionGBF::
              DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l28::<lambda_2>_>'
              ::__l2::<lambda_1>::operator()(&local_e0,0,iVar12,0);
              iVar13 = iVar13 + 1;
            }
          }
        }
        else {
          local_f8._8_8_ = param_2;
          local_f8._0_8_ = param_1;
          local_108 = this;
          pTStack_100 = pTVar3;
          local_e8 = bVar7;
          if (GSingleThreadedPhysics == 0) {
            local_b8._33_7_ = uStack_e7;
            local_b8[0x20] = bVar7;
            local_f8._8_4_ = uVar16;
            local_f8._12_4_ = uVar17;
            local_b8._24_4_ = uVar16;
            local_b8._16_8_ = param_1;
            local_b8._28_4_ = uVar17;
            local_b8._0_8_ = this;
            local_b8._8_8_ = pTVar3;
            Chaos::Private::FTaskDispatcherEvolution::
            DispatchKinematicsTarget<_Chaos::FPBDRigidsEvolutionGBF::DispatchKinematicTargetsTasks<_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets_::__l24::<lambda_1>_>_::__l2::<lambda_1>_>
                      ((FTaskDispatcherEvolution *)&this->_padding_,(<lambda_1> *)local_b8,
                       pTVar3->ArrayNum,iVar13);
            iVar13 = iVar13 + 1;
          }
          else {
            `Chaos::FPBDRigidsEvolutionGBF::
            DispatchKinematicTargetsTasks<`Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l24::<lambda_1>_>'
            ::__l2::<lambda_1>::operator()(&local_108,0,pTVar3->ArrayNum,0);
            iVar13 = iVar13 + 1;
          }
        }
      }
      iVar12 = *(int *)(lVar1 + 0x678);
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x10;
    } while ((int)uVar14 < iVar12);
  }
  local_res8 = this;
  if (GSingleThreadedPhysics == 0) {
    Chaos::Private::FTaskDispatcherEvolution::
    DispatchKinAsyncDirtyAndUpdateKinematic<_Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets_::__l2::<lambda_3>_>
              ((FTaskDispatcherEvolution *)&this->_padding_,(<lambda_3>)this,bVar7);
    return;
  }
  `Chaos::FPBDRigidsEvolutionGBF::ApplyKinematicTargets'::__l2::<lambda_3>::operator()(&local_res8);
  if (bVar5 || bVar9) {
    FPBDRigidsSOAs::UpdateAllMovingKinematic((FPBDRigidsSOAs *)this->_padding_,false);
  }
  FPBDRigidsSOAs::UpdateViews((FPBDRigidsSOAs *)this->_padding_);
  return;
}

// ApplyMidPhaseModifier @ 143d423d0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplyMidPhaseModifier(FPBDRigidsEvolutionGBF *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FPBDRigidsEvolutionGBF *local_res18 [2];
  
  pTVar3 = this->MidPhaseModifiers;
  if (pTVar3 != (TArray<Chaos::ISimCallbackObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    local_res18[0] = this;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::ISimCallbackObject_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      (**(code **)(**(longlong **)pFVar4 + 0x80))(*(longlong **)pFVar4,local_res18);
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// ApplyParticleTransformCorrection @ 143d42450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000143d4259d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrection
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TRotation<double,3> *param_3,bool param_4,bool param_5,
          TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> *param_6)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  EObjectStateType EVar20;
  bool bVar21;
  uint uVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  TVector<double,3> *pTVar24;
  TGeometryParticleHandleImp<double,3,1> *pTVar25;
  longlong lVar26;
  ForAnyElementType FVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  undefined1 auStack_348 [32];
  longlong local_328;
  longlong local_320;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_310;
  FPBDRigidsEvolutionGBF *local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_300 = this;
  TGeometryParticleHandleImp<double,3,1>::GetTransformXR
            (param_1,(TRigidTransform<double,3> *)&local_268);
  local_1a8.Rotation.ZW.m128d_f64[0] = *(double *)&param_3->field_0x10;
  local_1a8.Rotation.ZW.m128d_f64[1] = *(double *)&param_3->field_0x18;
  local_1a8.Rotation.XY.m128d_f64[0] = *(double *)param_3;
  local_1a8.Rotation.XY.m128d_f64[1] = *(double *)&param_3->field_0x8;
  local_1a8.Translation.XY.m128d_f64[0] = *(double *)param_2;
  local_1a8.Translation.XY.m128d_f64[1] = *(double *)&param_2->field_0x8;
  local_1a8.Translation.ZW.m128d_f64[0] = *(double *)&param_2->field_0x10;
  local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_1a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_1a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_1a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  ApplyParticleTransformCorrectionImpl(this,param_1,(TRigidTransform<double,3> *)&local_1a8,true);
  if (param_4) {
    GetConnectedParticles(this,&local_310,param_1,param_6);
    pFVar1 = local_310.AllocatorInstance.Data + (longlong)local_310.ArrayNum * 8;
    for (FVar27.Data = local_310.AllocatorInstance.Data; FVar27.Data != pFVar1;
        FVar27.Data = FVar27.Data + 8) {
      pTVar5 = *(TGeometryParticleHandleImp<double,3,1> **)FVar27.Data;
      pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (*(char *)((longlong)&pTVar5->_padding_ + 4) != '\0') {
        pTVar23 = pTVar5;
      }
      if (pTVar23 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
LAB_143d425e3:
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (*(char *)((longlong)&pTVar5->_padding_ + 4) != '\0') {
          pTVar23 = pTVar5;
        }
        if (pTVar23 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
          if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
            pTVar25 = pTVar23;
          }
          if (pTVar25 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            EVar20 = Kinematic;
          }
          else {
            EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar25);
          }
          if (EVar20 == Sleeping) goto LAB_143d42616;
        }
      }
      else {
        pTVar25 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&pTVar23->_padding_ + 4)) {
          pTVar25 = pTVar23;
        }
        if (pTVar25 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar20 = Kinematic;
        }
        else {
          EVar20 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar25);
        }
        if (EVar20 != Dynamic) goto LAB_143d425e3;
LAB_143d42616:
        uVar3 = (uint)pTVar5->_padding_;
        lVar26 = (longlong)(int)uVar3;
        lVar6 = pTVar5->_padding_;
        iVar4 = *(int *)(lVar6 + 0x50);
        uVar22 = 0;
        if ((int)uVar3 < iVar4) {
          uVar22 = ~uVar3 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (local_328 = lVar26, local_320 = (longlong)iVar4,
           bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar21)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x48);
        uVar2 = *(undefined8 *)(lVar6 + 8 + lVar26 * 0x10);
        dVar10 = (double)(float)uVar2;
        dVar11 = (double)(float)((ulonglong)uVar2 >> 0x20);
        local_2f8._8_4_ = SUB84(dVar11,0);
        local_2f8._0_8_ = dVar10;
        local_2f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar12 = (double)*(float *)(lVar6 + lVar26 * 0x10);
        dVar13 = (double)*(float *)(lVar6 + 4 + lVar26 * 0x10);
        pTVar24 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)pTVar5->_padding_,(int)pTVar5->_padding_);
        dVar16 = local_268 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar17 = dStack_260 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        uVar49 = (undefined4)((ulonglong)dVar17 >> 0x20);
        auVar38._8_4_ = SUB84(dVar17,0);
        auVar38._0_8_ = dVar16;
        auVar38._12_4_ = uVar49;
        dVar18 = local_258 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar19 = dStack_250 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar8 = *(double *)pTVar24 - local_248;
        dVar9 = *(double *)&pTVar24->field_0x8 - dStack_240;
        uVar40 = SUB84(dVar9,0);
        uVar41 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar46._8_4_ = uVar40;
        auVar46._0_8_ = dVar8;
        auVar46._12_4_ = uVar41;
        local_2d8 = *(double *)&pTVar24->field_0x10 - local_238;
        auVar28._8_4_ = SUB84(dVar18,0);
        auVar28._0_8_ = dVar17;
        auVar28._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_2e8._8_4_ = uVar40;
        local_2e8._0_8_ = dVar8;
        local_2e8._12_4_ = uVar41;
        auVar34._8_4_ = uVar40;
        auVar34._0_8_ = dVar8;
        auVar34._12_4_ = uVar41;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = local_2d8;
        auVar35 = blendpd(auVar34,auVar35,2);
        auVar39._8_4_ = SUB84(dVar19,0);
        auVar39._0_8_ = dVar18;
        auVar39._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
        auVar39 = blendpd(auVar38,auVar39,2);
        auVar47._0_8_ = auVar46._8_8_ * dVar16 - dVar17 * dVar8;
        auVar47._8_8_ = local_2d8 * dVar17 - auVar28._8_8_ * dVar9;
        uStack_2d0 = 0;
        auVar36._0_8_ = auVar35._0_8_ * dVar18 - auVar39._0_8_ * local_2d8;
        auVar36._8_8_ = auVar35._8_8_ * dVar19 - auVar39._8_8_ * 0.0;
        dVar14 = auVar47._8_8_ + auVar47._8_8_;
        dVar15 = auVar36._0_8_ + auVar36._0_8_;
        uVar40 = SUB84(dVar15,0);
        uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
        auVar35 = blendpd(auVar47,auVar36,2);
        auVar48._0_8_ = auVar35._0_8_ + auVar35._0_8_;
        auVar48._8_8_ = auVar35._8_8_ + auVar35._8_8_;
        auVar44._8_4_ = uVar40;
        auVar44._0_8_ = dVar14;
        auVar44._12_4_ = uVar41;
        auVar29._8_4_ = uVar40;
        auVar29._0_8_ = dVar14;
        auVar29._12_4_ = uVar41;
        auVar42._8_4_ = uVar40;
        auVar42._0_8_ = dVar14;
        auVar42._12_4_ = uVar41;
        auVar45._0_8_ = auVar44._8_8_ * dVar16 - dVar14 * dVar17;
        auVar45._8_8_ = auVar48._0_8_ * dVar17 - auVar29._8_8_ * dVar18;
        auVar35 = blendpd(auVar42,auVar48,2);
        auVar30._8_4_ = SUB84(auVar48._8_8_,0);
        auVar30._0_8_ = auVar48._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
        auVar43._0_8_ = auVar35._0_8_ * dVar18 - auVar48._0_8_ * auVar39._0_8_;
        auVar43._8_8_ = auVar35._8_8_ * dVar19 - auVar30._8_8_ * auVar39._8_8_;
        auVar31._8_4_ = SUB84(dVar13,0);
        auVar31._0_8_ = dVar12;
        auVar31._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        auVar37._8_4_ = SUB84(dVar17,0);
        auVar37._0_8_ = dVar17;
        auVar37._12_4_ = uVar49;
        auVar32._8_4_ = SUB84(dVar12,0);
        auVar32._0_8_ = dVar13;
        auVar32._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        dVar9 = dVar10 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar31._8_8_ * dVar19 +
                auVar37._8_8_ * (double)local_2f8._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar32._8_8_ * dVar18 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar33._8_4_ = SUB84(auVar45._8_8_,0);
        auVar33._0_8_ = auVar45._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
        local_148.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
        local_148.Rotation.XY.m128d_f64[0] =
             dVar11 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar12 * dVar19 +
             dVar17 * (double)local_2f8._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_148.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar15 = dVar15 * dVar19 + (double)local_2e8._8_8_ + auVar43._0_8_;
        local_148.Scale3D.XY.m128d_f64 = GlobalVectorConstants::Double1110.XY.m128d_f64;
        local_208.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_208.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_208.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_208.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_148.Scale3D.ZW.m128d_f64 = GlobalVectorConstants::Double1110.ZW.m128d_f64;
        local_208.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_208.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_208.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_208.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_208.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_208.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        auVar35 = blendpd(auVar45,auVar43,2);
        local_208.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_208.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        dVar9 = dVar12 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                (double)local_2f8._8_8_ * dVar19 +
                dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar10 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_148.Translation.ZW.m128d_f64[0] = auVar48._0_8_ * dVar19 + local_2d8 + auVar35._0_8_;
        local_148.Translation.ZW.m128d_f64[1] = auVar48._8_8_ * dVar19 + 0.0 + auVar35._8_8_;
        local_148.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
        local_148.Rotation.ZW.m128d_f64[0] =
             dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             (double)local_2f8._0_8_ * dVar19 +
             dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_148.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_148.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar15,0);
        local_148.Translation.XY.m128d_f64[0] = dVar14 * dVar19 + dVar8 + auVar33._8_8_;
        local_148.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_208,&local_148,&local_1a8);
        local_2c8 = local_208.Rotation.XY.m128d_f64[0];
        dStack_2c0 = local_208.Rotation.XY.m128d_f64[1];
        local_2b8 = local_208.Rotation.ZW.m128d_f64[0];
        dStack_2b0 = local_208.Rotation.ZW.m128d_f64[1];
        local_2a8 = local_208.Translation.XY.m128d_f64[0];
        dStack_2a0 = local_208.Translation.XY.m128d_f64[1];
        local_298 = local_208.Translation.ZW.m128d_f64[0];
        dStack_290 = local_208.Translation.ZW.m128d_f64[1];
        local_288 = local_208.Scale3D.XY.m128d_f64[0];
        dStack_280 = local_208.Scale3D.XY.m128d_f64[1];
        local_278 = local_208.Scale3D.ZW.m128d_f64[0];
        dStack_270 = local_208.Scale3D.ZW.m128d_f64[1];
        ApplyParticleTransformCorrectionImpl
                  (local_300,pTVar5,(TRigidTransform<double,3> *)&local_2c8,param_5);
      }
    }
    if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyParticleTransformCorrectionDelta @ 143d42a10

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrectionDelta
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TVector<double,3> *param_3,bool param_4,bool param_5,
          TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TRotation<double,3> *pTVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  double local_78;
  double local_70;
  double local_68;
  double local_58;
  double local_50;
  undefined1 local_48 [16];
  TRotation<double,3> local_38;
  
  uVar2 = (uint)param_1->_padding_;
  lVar10 = (longlong)(int)uVar2;
  lVar3 = param_1->_padding_;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
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
  lVar3 = *(longlong *)(lVar3 + 0x48);
  uVar1 = *(undefined8 *)(lVar3 + 8 + lVar10 * 0x10);
  local_50 = (double)*(float *)(lVar3 + 4 + lVar10 * 0x10);
  local_58 = (double)*(float *)(lVar3 + lVar10 * 0x10);
  dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_48._8_4_ = SUB84(dVar5,0);
  local_48._0_8_ = (double)(float)uVar1;
  local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  pTVar8 = TRotation<double,3>::IntegrateRotationWithAngularVelocity
                     (&local_38,(TRotation<double,3> *)&local_58,param_3,__real_3ff0000000000000);
  pTVar9 = TParticles<double,3>::GetX
                     ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  local_78 = *(double *)param_2 + *(double *)pTVar9;
  local_70 = *(double *)&pTVar9->field_0x8 + *(double *)&param_2->field_0x8;
  local_68 = *(double *)&pTVar9->field_0x10 + *(double *)&param_2->field_0x10;
  ApplyParticleTransformCorrection
            (this,param_1,(TVector<double,3> *)&local_78,pTVar8,param_4,param_5,param_6);
  return;
}

// ApplyParticleTransformCorrectionImpl @ 143d42b80

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrectionImpl
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TRigidTransform<double,3> *param_2,bool param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  ECollisionVisitorResult EVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  FParticleCollisions *pFVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  FGenericParticleHandleImp local_res10;
  <lambda_1> local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  TRotation<double,3> local_78;
  TRotation<double,3> local_58;
  
  uVar12 = (uint)param_1->_padding_;
  uVar3 = *(undefined8 *)&param_2->field_0x30;
  lVar13 = param_1->_padding_;
  uVar4 = *(undefined8 *)&param_2->field_0x20;
  uVar5 = *(undefined8 *)&param_2->field_0x28;
  uVar10 = 0;
  if ((int)uVar12 < *(int *)(lVar13 + 0x30)) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  local_res10.MHandle = param_1;
  local_b0 = uVar4;
  uStack_a8 = uVar5;
  local_a0 = uVar3;
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar13 = *(longlong *)(lVar13 + 0x28);
  puVar1 = (undefined8 *)(lVar13 + (longlong)(int)uVar12 * 0x18);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar13 + 0x10 + (longlong)(int)uVar12 * 0x18) = uVar3;
  uVar3 = *(undefined8 *)&param_2->field_0x30;
  uVar4 = *(undefined8 *)&param_2->field_0x20;
  uVar5 = *(undefined8 *)&param_2->field_0x28;
  local_98 = uVar4;
  uStack_90 = uVar5;
  local_88 = uVar3;
  bVar6 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar6) {
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar8 = param_1;
    }
    uVar12 = (uint)pTVar8->_padding_;
    lVar13 = pTVar8->_padding_;
    uVar10 = 0;
    if ((int)uVar12 < *(int *)(lVar13 + 0x550)) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = *(longlong *)(lVar13 + 0x548);
  }
  else {
    uVar12 = (uint)param_1->_padding_;
    lVar13 = param_1->_padding_;
    uVar10 = 0;
    if ((int)uVar12 < *(int *)(lVar13 + 0x30)) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar13 = *(longlong *)(lVar13 + 0x28);
  }
  puVar1 = (undefined8 *)(lVar13 + (longlong)(int)uVar12 * 0x18);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  *(undefined8 *)(lVar13 + 0x10 + (longlong)(int)uVar12 * 0x18) = uVar3;
  local_58._0_8_ = *(undefined8 *)param_2;
  local_58._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_58._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_2->field_0x18;
  TGeometryParticleHandleImp<double,3,1>::SetR(param_1,&local_58,false);
  local_78._0_8_ = *(undefined8 *)param_2;
  local_78._8_8_ = *(undefined8 *)&param_2->field_0x8;
  local_78._16_8_ = *(undefined8 *)&param_2->field_0x10;
  local_78._24_8_ = *(undefined8 *)&param_2->field_0x18;
  bVar6 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar6) {
    pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar8 = param_1;
    }
    TPBDRigidParticleHandleImp<double,3,1>::SetQ
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar8,&local_78);
  }
  else {
    TGeometryParticleHandleImp<double,3,1>::SetR(param_1,&local_78,false);
  }
  if (param_3) {
    pFVar9 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    uVar12 = 0;
    iVar11 = (pFVar9->MidPhases).ArrayNum;
    if (0 < iVar11) {
      lVar13 = 0;
      local_c0.__this = this;
      local_c0.InParticle = param_1;
      do {
        uVar10 = 0;
        if ((int)uVar12 < iVar11) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        EVar7 = FParticlePairMidPhase::
                VisitCollisions<_Chaos::FPBDRigidsEvolutionGBF::ApplyParticleTransformCorrectionImpl_::__l5::<lambda_1>_>
                          (*(FParticlePairMidPhase **)
                            ((pFVar9->MidPhases).AllocatorInstance.Data + lVar13 + 8),&local_c0,
                           VisitDefault);
        if (EVar7 == Stop) {
          return;
        }
        iVar11 = (pFVar9->MidPhases).ArrayNum;
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
      } while ((int)uVar12 < iVar11);
    }
  }
  return;
}

// ApplySleepOnConnectedParticles @ 143d44960

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ApplySleepOnConnectedParticles
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar2;
  EObjectStateType EVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  ForAnyElementType FVar5;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_28;
  TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetConnectedParticles(this,&local_28,param_1,&local_18);
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  for (FVar5.Data = local_28.AllocatorInstance.Data; FVar5.Data != pFVar1;
      FVar5.Data = FVar5.Data + 8) {
    pTVar2 = *(TPBDRigidParticleHandleImp<double,3,1> **)FVar5.Data;
    pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (pTVar2->field_0xc != '\0') {
      pTVar4 = pTVar2;
    }
    if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar4->field_0xc) {
        this_00 = pTVar4;
      }
      if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        EVar3 = Kinematic;
      }
      else {
        EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
      }
      if (EVar3 == Dynamic) {
        pTVar4 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
        if (1 < (byte)pTVar2->field_0xc) {
          pTVar4 = pTVar2;
        }
        if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
          FPBDRigidsEvolutionBase::SetParticleObjectState
                    ((FPBDRigidsEvolutionBase *)this,pTVar4,Sleeping);
        }
      }
    }
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
    return;
  }
  return;
}

// CreateExternalResimCache @ 143d4a290

TUniquePtr<Chaos::IResimCacheBase,TDefaultDelete<Chaos::IResimCacheBase>_> __thiscall
Chaos::FPBDRigidsEvolutionGBF::CreateExternalResimCache(FPBDRigidsEvolutionGBF *this)

{
  undefined8 *puVar1;
  IResimCacheBase *in_RDX;
  
  puVar1 = ::operator_new(0xb0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    *puVar1 = &___7FEvolutionResimCache_Chaos__6B_;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x80;
    *(undefined4 *)(puVar1 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x8c) = 0;
    puVar1[0x13] = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0;
    in_RDX->_padding_ = (longlong)puVar1;
    return (TUniquePtr<Chaos::IResimCacheBase,TDefaultDelete<Chaos::IResimCacheBase>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TUniquePtr<Chaos::IResimCacheBase,TDefaultDelete<Chaos::IResimCacheBase>_>)in_RDX;
}

// CreateJointConstraint @ 143d4a440

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDRigidsEvolutionGBF::CreateJointConstraint
          (FPBDRigidsEvolutionGBF *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *param_1,
          FPBDJointSettings *param_2)

{
  TGeometryParticleHandleImp<double,3,1> **ppTVar1;
  FPBDJointConstraintHandle *this_00;
  FPBDJointConstraints *this_01;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  this_01 = &(this->JointConstraints).LinearConstraints;
  if (param_2->bUseLinearSolver == false) {
    this_01 = &(this->JointConstraints).NonLinearConstraints;
  }
  this_00 = FPBDJointConstraints::AddConstraint(this_01,param_1,&param_2->ConnectorTransforms);
  ppTVar1 = param_1->V + 1;
  if (param_2->bCollisionEnabled == false) {
    FIgnoreCollisionManager::AddIgnoreCollisions
              (&(this->BroadPhase).IgnoreCollisionManager,param_1->V[0],*ppTVar1);
  }
  FPBDJointConstraintHandle::SetSettings(this_00,param_2);
  TGeometryParticlesImp<double,3,0>::AddConstraintHandle
            ((TGeometryParticlesImp<double,3,0> *)param_1->V[0]->_padding_,
             (int *)&param_1->V[0]->_padding_,(FConstraintHandle *)this_00);
  TGeometryParticlesImp<double,3,0>::AddConstraintHandle
            ((TGeometryParticlesImp<double,3,0> *)(*ppTVar1)->_padding_,
             (int *)&(*ppTVar1)->_padding_,(FConstraintHandle *)this_00);
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->V[0]->_padding_ + 4)) {
    pTVar2 = param_1->V[0];
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
  }
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&(*ppTVar1)->_padding_ + 4)) {
    pTVar2 = *ppTVar1;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
  }
  return this_00;
}

// DestroyJointConstraint @ 143d4c030

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::DestroyJointConstraint
          (FPBDRigidsEvolutionGBF *this,FPBDJointConstraintHandle *param_1)

{
  FPBDJointSettings *pFVar1;
  FPBDJointConstraints *this_00;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_18;
  
  FPBDJointConstraintHandle::GetConstrainedParticles(param_1,&local_18);
  pFVar1 = FPBDJointConstraintHandle::GetSettings(param_1);
  if (local_18.V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if ((local_18.V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (pFVar1->bCollisionEnabled == false)) {
      FIgnoreCollisionManager::RemoveIgnoreCollisions
                (&(this->BroadPhase).IgnoreCollisionManager,local_18.V[0],local_18.V[1]);
    }
    if (local_18.V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)local_18.V[0]->_padding_,
                 (int *)&local_18.V[0]->_padding_,(FConstraintHandle *)param_1);
    }
  }
  if (local_18.V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)local_18.V[1]->_padding_,
               (int *)&local_18.V[1]->_padding_,(FConstraintHandle *)param_1);
  }
  if (param_1->_padding_ != 0) {
    Chaos::Private::FPBDIslandManager::RemoveConstraint
              ((FPBDIslandManager *)&this->_padding_,(FConstraintHandle *)param_1);
  }
  this_00 = &(this->JointConstraints).LinearConstraints;
  if (pFVar1->bUseLinearSolver == false) {
    this_00 = &(this->JointConstraints).NonLinearConstraints;
  }
  FPBDJointConstraints::RemoveConstraint(this_00,(int)param_1->_padding_);
  return;
}

// DestroyParticleCollisionsInAllocator @ 143d4c110

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::DestroyParticleCollisionsInAllocator
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FParticleCollisions *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
              (&(this->CollisionConstraints).ConstraintAllocator,param_1);
    pFVar1 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    (pFVar1->MidPhases).ArrayNum = 0;
    if ((pFVar1->MidPhases).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pFVar1,0,&(pFVar1->MidPhases).ArrayMax);
    }
  }
  return;
}

// DestroyTransientConstraints @ 143d4c190

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::DestroyTransientConstraints
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FParticleCollisions *pFVar1;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    Chaos::Private::FPBDIslandManager::RemoveParticleContainerConstraints
              ((FPBDIslandManager *)&this->_padding_,param_1,
               (int)(this->CollisionConstraints)._padding_);
    Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
              (&(this->CollisionConstraints).ConstraintAllocator,param_1);
    pFVar1 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    (pFVar1->MidPhases).ArrayNum = 0;
    if ((pFVar1->MidPhases).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pFVar1,0,&(pFVar1->MidPhases).ArrayMax);
    }
  }
  return;
}

// DestroyTransientConstraints @ 143d4c220

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::DestroyTransientConstraints(FPBDRigidsEvolutionGBF *this)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  FParticleCollisions *pFVar8;
  int iVar9;
  longlong lVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_3c;
  undefined1 local_38 [24];
  uint uStack_20;
  int iStack_1c;
  int local_18;
  int local_14;
  int local_10;
  
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_38,
             (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
              *)(this->_padding_ + 0x640));
  lVar3 = CONCAT44(local_38._20_4_,local_38._16_4_);
  do {
    if (lVar3 == 0) {
      return;
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_38);
    lVar10 = (longlong)(int)uStack_20;
    lVar3 = CONCAT44(local_38._20_4_,local_38._16_4_);
    uVar7 = 0;
    if ((int)uStack_20 < *(int *)(lVar3 + 0xa0)) {
      uVar7 = ~uStack_20 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = *(TGeometryParticleHandleImp<double,3,1> **)(*(longlong *)(lVar3 + 0x98) + lVar10 * 8);
    if (pTVar1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      Chaos::Private::FPBDIslandManager::RemoveParticleContainerConstraints
                ((FPBDIslandManager *)&this->_padding_,pTVar1,
                 (int)(this->CollisionConstraints)._padding_);
      Chaos::Private::FCollisionConstraintAllocator::RemoveParticle
                (&(this->CollisionConstraints).ConstraintAllocator,pTVar1);
      pFVar8 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                         ((TGeometryParticlesImp<double,3,0> *)pTVar1->_padding_,
                          (int)pTVar1->_padding_);
      (pFVar8->MidPhases).ArrayNum = 0;
      if ((pFVar8->MidPhases).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)pFVar8,0,&(pFVar8->MidPhases).ArrayMax);
      }
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_38);
    do {
      uVar5 = local_38._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_38._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        uStack_20 = uStack_20 + 1;
        if (local_14 <= (int)uStack_20) {
LAB_143d4c355:
          local_18 = local_18 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_38);
        }
      }
      else {
        iVar9 = local_10 + 1;
        local_10 = iVar9;
        if (*(int *)(local_38._8_8_ + 8) <= iVar9) goto LAB_143d4c355;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar2 = *(longlong **)(((ForAnyElementType *)uVar5)->Data + (longlong)iVar9 * 8);
        lVar3 = *plVar2;
        uStack_20 = *(uint *)(plVar2 + 1);
        if (lVar3 == 0) {
          iStack_3c = (uint)iStack_3c._1_3_ << 8;
        }
        else {
          iStack_3c = CONCAT31(iStack_3c._1_3_,*(undefined1 *)(lVar3 + 0x70));
        }
        local_48 = (undefined4)lVar3;
        local_38._16_4_ = local_48;
        uStack_44 = (undefined4)((ulonglong)lVar3 >> 0x20);
        local_38._20_4_ = uStack_44;
        iStack_1c = iStack_3c;
      }
      if (CONCAT44(local_38._20_4_,local_38._16_4_) == 0) {
        return;
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_38);
      bVar6 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_38 + 0x10));
    } while (bVar6);
    lVar3 = CONCAT44(local_38._20_4_,local_38._16_4_);
  } while( true );
}

// GetConnectedParticles @ 143d549d0

TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FPBDRigidsEvolutionGBF::GetConnectedParticles
          (FPBDRigidsEvolutionGBF *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,TGeometryParticleHandleImp<double,3,1> *param_1,
          TArray<Chaos::FParticleID,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FPBDJointConstraintHandle *this_00;
  longlong lVar3;
  code *pcVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  ForAnyElementType FVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FPBDJointSettings *pFVar12;
  FUniqueIdx *pFVar13;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FParticleID *pFVar15;
  FConstraintHandleTypeID *pFVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_d8 [8];
  TGeometryParticleHandleImp<double,3,1> *local_d0;
  FHashTable local_c8;
  ForAnyElementType FStack_a8;
  undefined8 local_a0;
  uint local_98;
  TGeometryParticleHandleImp<double,3,1> *local_90;
  longlong local_88;
  undefined4 local_80;
  FName local_7c;
  FGenericParticleHandleImp local_70;
  FParticleID local_68;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *local_60;
  FScriptContainerElement *local_58;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_50;
  
  pTVar11 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  if (pTVar11->ArrayNum == 0) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_c8.Hash = FHashTable::EmptyHash;
  local_c8.HashSize = 0x100;
  local_c8.HashMask = 0;
  local_c8.IndexSize = 0;
  local_c8.NextIndex = (uint *)0x0;
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_90 = param_1;
  do {
    pTVar7 = local_90;
    local_60 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                         ((TGeometryParticlesImp<double,3,0> *)local_90->_padding_,
                          (int)local_90->_padding_);
    uVar19 = (ulonglong)local_60->ArrayNum;
    pFVar21 = (local_60->AllocatorInstance).Data;
    local_90 = (TGeometryParticleHandleImp<double,3,1> *)CONCAT44(local_90._4_4_,local_60->ArrayNum)
    ;
    local_58 = pFVar21 + uVar19 * 8;
    while( true ) {
      pFVar2 = local_58;
      if (local_60->ArrayNum != (int)uVar19) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_d8);
      }
      uVar17 = local_98;
      if (pFVar21 == pFVar2) break;
      this_00 = *(FPBDJointConstraintHandle **)pFVar21;
      lVar3 = this_00->_padding_;
      if (lVar3 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          pFVar16 = FIndexedConstraintHandle::StaticType();
          ::FName::FName(&local_7c,L"FJointConstraintHandle");
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.TypeName = local_7c;
          `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
          ::__l2::STypeID.BaseType = pFVar16;
          _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        if (((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
              ::__l2::STypeID.TypeName == *(FName *)(lVar3 + 8)) ||
            ((*(FConstraintHandleTypeID **)(lVar3 + 0x10) != (FConstraintHandleTypeID *)0x0 &&
             (bVar8 = FConstraintHandleTypeID::IsA
                                (*(FConstraintHandleTypeID **)(lVar3 + 0x10),
                                 &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                  ::__l2::STypeID), bVar8)))) &&
           ((bVar8 = FPBDJointConstraintHandle::IsConstraintEnabled(this_00), bVar8 &&
            ((((bVar8 = FPBDJointConstraintHandle::IsConstraintBroken(this_00), !bVar8 &&
               (pFVar12 = FPBDJointConstraintHandle::GetSettings(this_00),
               (pFVar12->LinearMotionTypes).field0_0x0._s_0.X == Locked)) &&
              ((pFVar12->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
             ((pFVar12->LinearMotionTypes).field0_0x0._s_0.Z == Locked)))))) {
          FPBDJointConstraintHandle::GetConstrainedParticles(this_00,&local_50);
          local_d0 = local_50.V[0];
          if (local_50.V[0] == pTVar7) {
            local_d0 = local_50.V[1];
          }
          if (((local_d0 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (local_d0 != param_1))
             && (bVar8 = FGenericParticleHandleImp::IsDynamic(&local_70), pTVar5 = local_d0, bVar8))
          {
            pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                ((TGeometryParticlesImp<double,3,0> *)local_d0->_padding_,
                                 (int)local_d0->_padding_);
            uVar17 = ((uint)pFVar13->Idx >> 0x10 ^ pFVar13->Idx) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            for (uVar17 = local_c8.Hash[(uVar17 >> 0x10 ^ uVar17) & local_c8.HashMask];
                uVar17 != 0xffffffff; uVar17 = local_c8.NextIndex[uVar17]) {
              uVar9 = 0;
              if ((int)uVar17 < (int)(uint)local_a0) {
                uVar9 = ~uVar17 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                           *)(*pcVar4)();
                return pTVar14;
              }
              if (*(TGeometryParticleHandleImp<double,3,1> **)
                   (FStack_a8.Data + (longlong)(int)uVar17 * 8) == pTVar5) {
                uVar9 = 0;
                if ((int)uVar17 < (int)(uint)local_a0) {
                  uVar9 = ~uVar17 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                             *)(*pcVar4)();
                  return pTVar14;
                }
                if (FStack_a8.Data + (longlong)(int)uVar17 * 8 != (FScriptContainerElement *)0x0)
                goto LAB_143d54e52;
                break;
              }
            }
            pFVar15 = TGeometryParticlesImp<double,3,0>::ParticleID
                                ((TGeometryParticlesImp<double,3,0> *)local_d0->_padding_,
                                 (int)local_d0->_padding_);
            pTVar5 = local_d0;
            local_68 = *pFVar15;
            pFVar20 = (param_2->AllocatorInstance).Data;
            pFVar2 = pFVar20 + (longlong)param_2->ArrayNum * 8;
            if (pFVar20 != pFVar2) {
              do {
                if ((*(int *)pFVar20 == local_68.GlobalID) &&
                   (*(int *)(pFVar20 + 4) == local_68.LocalID)) goto LAB_143d54e52;
                pFVar20 = pFVar20 + 8;
              } while (pFVar20 != pFVar2);
            }
            if (((FStack_a8.Data <= (FScriptContainerElement *)&local_d0) &&
                ((FScriptContainerElement *)&local_d0 <
                 FStack_a8.Data + (longlong)(int)local_a0._4_4_ * 8)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar4 = (code *)swi(3);
              pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                         *)(*pcVar4)();
              return pTVar14;
            }
            uVar17 = (uint)local_a0;
            if ((uint)local_a0 == local_a0._4_4_) {
              uVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&FStack_a8,(int *)((longlong)&local_a0 + 4));
            }
            iVar1 = uVar17 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar1);
            *(TGeometryParticleHandleImp<double,3,1> **)(FStack_a8.Data + (longlong)(int)uVar17 * 8)
                 = local_d0;
            pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                ((TGeometryParticlesImp<double,3,0> *)pTVar5->_padding_,
                                 (int)pTVar5->_padding_);
            uVar9 = ((uint)pFVar13->Idx >> 0x10 ^ pFVar13->Idx) * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            if (local_c8.IndexSize <= uVar17) {
              iVar10 = 1;
              if (iVar1 != 0) {
                iVar10 = iVar1;
              }
              uVar19 = (ulonglong)(iVar10 - 1) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              uVar18 = 1 << ((byte)lVar3 & 0x1f);
              local_80 = (undefined4)lVar3;
              if (uVar18 < 0x20) {
                uVar18 = 0x20;
              }
              FHashTable::Resize(&local_c8,uVar18);
            }
            uVar9 = local_c8.HashMask & (uVar9 >> 0x10 ^ uVar9);
            local_c8.NextIndex[uVar17] = local_c8.Hash[uVar9];
            local_c8.Hash[uVar9] = uVar17;
          }
        }
      }
LAB_143d54e52:
      pFVar21 = pFVar21 + 8;
      uVar19 = (ulonglong)local_90 & 0xffffffff;
    }
    if (((int)(uint)local_a0 < (int)local_98) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextParticleIndex <= ConnectedParticles.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                           ,0x7c1,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar4)();
      return pTVar14;
    }
    if ((int)(uint)local_a0 <= (int)uVar17) {
      if ((uVar17 != (uint)local_a0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NextParticleIndex == ConnectedParticles.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolutionGBF.cpp"
                             ,0x7cb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar4)();
        return pTVar14;
      }
      if (local_c8.IndexSize != 0) {
        memset(local_c8.Hash,0xff,(ulonglong)(local_c8.HashSize * 4));
      }
      FVar6.Data = FStack_a8.Data;
      FStack_a8.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->AllocatorInstance).Data = FVar6.Data;
      __return_storage_ptr__->ArrayNum = (uint)local_a0;
      __return_storage_ptr__->ArrayMax = local_a0._4_4_;
      local_a0 = 0;
      if (local_c8.IndexSize != 0) {
        local_c8.HashMask = 0;
        local_c8.IndexSize = 0;
        operator_delete__(local_c8.Hash);
        local_c8.Hash = FHashTable::EmptyHash;
        operator_delete__(local_c8.NextIndex);
      }
      return __return_storage_ptr__;
    }
    uVar9 = 0;
    if ((int)uVar17 < (int)(uint)local_a0) {
      uVar9 = ~uVar17 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar14 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)(*pcVar4)();
      return pTVar14;
    }
    local_98 = uVar17 + 1;
    local_90 = *(TGeometryParticleHandleImp<double,3,1> **)(FStack_a8.Data + local_88);
    local_88 = local_88 + 8;
  } while( true );
}

// GetFirstClusteredPhysicsMaterial @ 143d55890

FChaosPhysicsMaterial * __thiscall
Chaos::FPBDRigidsEvolutionGBF::GetFirstClusteredPhysicsMaterial
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FChaosPhysicsMaterial *pFVar4;
  FClusterUnion *pFVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar4 = Chaos::Private::GetFirstPhysicsMaterial
                     (param_1,(TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_>
                               *)&this->_padding_,
                      (TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
                       *)&this->_padding_,
                      (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *)this->_padding_);
  if (pFVar4 == (FChaosPhysicsMaterial *)0x0) {
    pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (2 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      pTVar6 = param_1;
    }
    if (((pTVar6 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
        (pFVar5 = FClusterUnionManager::FindClusterUnionFromParticle
                            (&(this->Clustering).ClusterUnionManager,
                             (TPBDRigidParticleHandleImp<double,3,1> *)pTVar6),
        pFVar5 == (FClusterUnion *)0x0)) ||
       ((TGeometryParticleHandleImp<double,3,1> *)pFVar5->InternalCluster != pTVar6)) {
LAB_143d5595a:
      pFVar4 = (FChaosPhysicsMaterial *)0x0;
    }
    else {
      pFVar7 = (pFVar5->ChildParticles).AllocatorInstance.Data;
      iVar2 = (pFVar5->ChildParticles).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pFVar5->ChildParticles).ArrayNum != iVar2) {
          `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar7 == pFVar1) goto LAB_143d5595a;
        pTVar6 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar7;
        if (((pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
            ((pTVar6 != param_1 ||
             (bVar3 = `Chaos::FPBDRigidsEvolutionGBF::GetFirstClusteredPhysicsMaterial'::__l20::
                      <lambda_1>::operator()(local_res8), bVar3)))) &&
           (pFVar4 = GetFirstClusteredPhysicsMaterial(this,pTVar6),
           pFVar4 != (FChaosPhysicsMaterial *)0x0)) break;
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return pFVar4;
}

// Integrate @ 143d59660

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::Integrate(FPBDRigidsEvolutionGBF *this,double param_1)

{
  atomic<unsigned_int> *paVar1;
  double *pdVar2;
  double *pdVar3;
  longlong *this_00;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  FTaskBase *pFVar6;
  double dVar7;
  FOutputDeviceRedirector *this_01;
  FTaskBase *this_02;
  undefined8 *puVar8;
  longlong lVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  double local_158;
  double local_150;
  double *local_148;
  FPBDRigidsEvolutionGBF *local_140;
  longlong local_138;
  FPBDRigidsEvolutionGBF *local_128;
  longlong lStack_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined6 uStack_fe;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  double local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  
  this_01 = GetGlobalLogSingleton();
  local_158 = 0.0;
  QueryPerformanceCounter(&local_res8);
  dVar7 = __real_4170000000000000;
  local_148 = &local_158;
  local_150 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
              __real_4170000000000000;
  QueryPerformanceCounter(&local_res10);
  uStack_100 = CVars::bChaosUseMACD;
  lVar5 = this->_padding_;
  lVar9 = lVar5 + 0x238;
  pdVar2 = &(this->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD;
  local_f8 = *pdVar2;
  uStack_ff = CVars::bChaosForceMACD;
  local_f0 = (this->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD;
  pdVar3 = &(this->CollisionConstraints).DetectorSettings.BoundsVelocityInflation;
  local_e8 = *pdVar3;
  local_e0 = (this->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion;
  local_150 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  local_110 = (double)(CVars::HackMaxAngularVelocity * CVars::HackMaxAngularVelocity);
  local_108 = (double)(CVars::HackMaxVelocity * CVars::HackMaxVelocity);
  local_d8 = (this->CollisionConstraints).DetectorSettings.BoundsExpansion;
  local_140 = this;
  local_138 = lVar9;
  local_128 = this;
  lStack_120 = lVar9;
  local_118 = param_1;
  if (GSingleThreadedPhysics != 0) {
    TArray<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
    ::SetNum((TArray<TArray<Chaos::FPendingSpatialData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)&this->_padding_,3,Default);
    *(undefined4 *)&this->_padding_ = 2;
    `Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_1>::operator()
              (&local_128,0,0,*(int *)(lVar5 + 0x240));
    `Chaos::FPBDRigidsEvolutionGBF::Integrate'::__l2::<lambda_2>::operator()(&local_140);
    goto LAB_143d59930;
  }
  uStack_90 = CONCAT62(uStack_fe,CONCAT11(CVars::bChaosForceMACD,CVars::bChaosUseMACD));
  local_b8._24_4_ = SUB84(local_110,0);
  local_b8._16_8_ = param_1;
  local_b8._28_4_ = (int)((ulonglong)local_110 >> 0x20);
  uStack_7c = (undefined4)((ulonglong)local_f0 >> 0x20);
  this_00 = &this->_padding_;
  local_b8._0_8_ = this;
  local_b8._8_8_ = lVar9;
  local_98 = local_108;
  local_88 = *(undefined4 *)pdVar2;
  uStack_84 = *(undefined4 *)
               ((longlong)&(this->CollisionConstraints).DetectorSettings.BoundsVelocityInflationMACD
               + 4);
  uStack_80 = *(undefined4 *)
               &(this->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansionMACD;
  local_78 = *(undefined4 *)pdVar3;
  uStack_74 = *(undefined4 *)
               ((longlong)&(this->CollisionConstraints).DetectorSettings.BoundsVelocityInflation + 4
               );
  uStack_70 = *(undefined4 *)
               &(this->CollisionConstraints).DetectorSettings.MaxVelocityBoundsExpansion;
  uStack_6c = (int)((ulonglong)local_e0 >> 0x20);
  local_68 = local_d8;
  Chaos::Private::FTaskDispatcherEvolution::
  DispatchIntegrate<_Chaos::FPBDRigidsEvolutionGBF::Integrate_::__l2::<lambda_1>_>
            ((FTaskDispatcherEvolution *)this_00,(<lambda_1> *)(local_c8 + 0x10));
  this_02 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_02 == (FTaskBase *)0x0) {
    this_02 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_02,2,true);
    this_02->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<`Chaos::FPBDRigidsEvolutionGBF::Integrate'::`2'::<lambda_2>_>'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_02,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\TaskDispatcherEvolution.h(91)"
               ,High,None,None);
    this_02[1]._padding_ = (longlong)this;
    this_02[1]._padding_ = lVar9;
    this_02->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`Chaos::Private::FTaskDispatcherEvolution::DispatchDynAsyncDirty<`Chaos::FPBDRigidsEvolutionGBF::Integrate'::`2'::<lambda_2>_>'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x100);
  if (this_00 == (longlong *)local_c8) {
    if (this_02 == (FTaskBase *)0x0) goto LAB_143d59930;
    LOCK();
    paVar1 = &this_02->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_143d59930;
    puVar8 = (undefined8 *)this_02->_padding_;
  }
  else {
    pFVar6 = (FTaskBase *)*this_00;
    *this_00 = (longlong)this_02;
    if (pFVar6 == (FTaskBase *)0x0) goto LAB_143d59930;
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar4 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_143d59930;
    puVar8 = (undefined8 *)pFVar6->_padding_;
    this_02 = pFVar6;
  }
  (*(code *)*puVar8)(this_02,1);
LAB_143d59930:
  QueryPerformanceCounter(local_res18);
  dVar7 = (double)local_res18[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
  *local_148 = (dVar7 - local_150) + *local_148;
  if (FChaosScopedDurationTimeLogger::GlobalLabel != (wchar_t *)0x0) {
    local_150 = dVar7;
    FOutputDevice::LogfImpl((FOutputDevice *)this_01,L"%s - %s: %f%s");
  }
  return;
}

// OnParticleMoved @ 143d5a770

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::OnParticleMoved
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TRotation<double,3> *param_3,bool param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  EObjectStateType EVar11;
  uint uVar12;
  uint uVar13;
  ECollisionVisitorResult EVar14;
  TVector<double,3> *pTVar15;
  FParticleCollisions *pFVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  TGeometryParticleHandleImp<double,3,1> *pTVar21;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  <lambda_1> local_a8;
  double local_98;
  double local_90;
  double local_88;
  TGeometryParticleHandleImp<double,3,1> *pTVar20;
  
  pTVar15 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  dVar23 = *(double *)&pTVar15->field_0x10 - *(double *)&param_2->field_0x10;
  dVar24 = *(double *)&pTVar15->field_0x8 - *(double *)&param_2->field_0x8;
  if ((((double)CONCAT44((uint)((ulonglong)(*(double *)pTVar15 - *(double *)param_2) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(*(double *)pTVar15 - *(double *)param_2,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2eb1c432d)
      && ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2eb1c432d)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2eb1c432d)) {
    uVar6 = (uint)param_1->_padding_;
    lVar19 = (longlong)(int)uVar6;
    lVar7 = param_1->_padding_;
    uVar12 = 0;
    if ((int)uVar6 < *(int *)(lVar7 + 0x50)) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    dVar23 = *(double *)param_3 - (double)*(float *)(lVar7 + lVar19 * 0x10);
    if ((((double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar18,SUB84(dVar23,0) & uVar13) <=
          __real_3eb0c6f7a0b5ed8d) &&
        (dVar23 = *(double *)&param_3->field_0x8 - (double)*(float *)(lVar7 + 4 + lVar19 * 0x10),
        (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar18,SUB84(dVar23,0) & uVar13) <=
        __real_3eb0c6f7a0b5ed8d)) &&
       (dVar23 = *(double *)&param_3->field_0x10 - (double)*(float *)(lVar7 + 8 + lVar19 * 0x10),
       (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) & uVar18,SUB84(dVar23,0) & uVar13) <=
       __real_3eb0c6f7a0b5ed8d)) goto LAB_143d5a964;
  }
  if (param_5) {
    Chaos::Private::FPBDIslandManager::WakeParticleIslands
              ((FPBDIslandManager *)&this->_padding_,param_1);
  }
  pFVar16 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                      ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                       (int)param_1->_padding_);
  iVar17 = (pFVar16->MidPhases).ArrayNum;
  pTVar20 = this_00;
  pTVar21 = this_00;
  local_a8.__this = this;
  local_a8.InParticle = param_1;
  if (0 < iVar17) {
    do {
      uVar18 = (uint)pTVar20;
      uVar13 = 0;
      if ((int)uVar18 < iVar17) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      EVar14 = FParticlePairMidPhase::
               VisitCollisions<_Chaos::FPBDRigidsEvolutionGBF::OnParticleMoved_::__l5::<lambda_1>_>
                         (*(FParticlePairMidPhase **)
                           ((longlong)&pTVar21->_padding_ +
                           (longlong)(pFVar16->MidPhases).AllocatorInstance.Data),&local_a8,
                          VisitDefault);
      if (EVar14 == Stop) break;
      iVar17 = (pFVar16->MidPhases).ArrayNum;
      pTVar20 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)(uVar18 + 1);
      pTVar21 = (TGeometryParticleHandleImp<double,3,1> *)&pTVar21->HandleIdx;
    } while ((int)(uVar18 + 1) < iVar17);
  }
LAB_143d5a964:
  if ((!param_4) ||
     (bVar10 = Chaos::Private::FPBDIslandManager::WasParticleTransformSetExplicitly
                         ((FPBDIslandManager *)&this->_padding_,param_1), bVar10)) {
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      this_00 = param_1;
    }
    if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if ((EVar11 == Dynamic) ||
         (EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                             ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar11 == Sleeping
         )) {
        pTVar15 = TParticles<double,3>::GetX
                            ((TParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_);
        fVar22 = CVars::SmoothedPositionLerpRate;
        if (__real_3f800000 <= CVars::SmoothedPositionLerpRate) {
          fVar22 = __real_3f800000;
        }
        dVar24 = (*(double *)param_2 - *(double *)pTVar15) * __real_403e000000000000;
        dVar23 = (*(double *)&param_2->field_0x8 - *(double *)&pTVar15->field_0x8) *
                 __real_403e000000000000;
        dVar25 = (*(double *)&param_2->field_0x10 - *(double *)&pTVar15->field_0x10) *
                 __real_403e000000000000;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        dVar9 = (double)fVar22;
        TKinematicGeometryParticlesImp<double,3,0>::GetV
                  ((TKinematicGeometryParticlesImp<double,3,0> *)this_00->_padding_,
                   (TVector<double,3> *)&local_98,(int)this_00->_padding_);
        pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        dVar1 = *(double *)pTVar15;
        dVar2 = *(double *)&pTVar15->field_0x10;
        dVar3 = *(double *)&pTVar15->field_0x8;
        dVar4 = *(double *)&pTVar15->field_0x10;
        dVar5 = *(double *)&pTVar15->field_0x8;
        pTVar15 = TPBDRigidParticleHandleImp<double,3,1>::VSmooth
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        *(double *)pTVar15 = ((local_98 + dVar24) - dVar1) * dVar9 + dVar1;
        *(double *)&pTVar15->field_0x8 = ((local_90 + dVar23) - dVar3) * dVar9 + dVar5;
        *(double *)&pTVar15->field_0x10 = ((local_88 + dVar25) - dVar2) * dVar9 + dVar4;
      }
      EVar11 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if (EVar11 == Sleeping) {
        FPBDRigidsEvolutionBase::SetParticleObjectState
                  ((FPBDRigidsEvolutionBase *)this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00
                   ,Dynamic);
      }
    }
  }
  return;
}

// ParticleMaterialChanged @ 143d5b170

/* WARNING: Enum "ECollisionVisitorFlags": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::ParticleMaterialChanged
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ECollisionVisitorResult EVar4;
  FParticleCollisions *pFVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  <lambda_1> local_res8;
  
  pFVar5 = TGeometryParticlesImp<double,3,0>::ParticleCollisions
                     ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                      (int)param_1->_padding_);
  uVar6 = 0;
  iVar8 = (pFVar5->MidPhases).ArrayNum;
  local_res8.__this = this;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar8) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      EVar4 = FParticlePairMidPhase::
              VisitCollisions<_Chaos::FPBDRigidsEvolutionGBF::ParticleMaterialChanged_::__l2::<lambda_1>_>
                        (*(FParticlePairMidPhase **)
                          ((pFVar5->MidPhases).AllocatorInstance.Data + lVar7 + 8),&local_res8,
                         VisitAllCurrentAndExpired);
      if (EVar4 == Stop) break;
      iVar8 = (pFVar5->MidPhases).ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < iVar8);
  }
  Chaos::Private::FPBDIslandManager::UpdateParticleMaterial
            ((FPBDIslandManager *)&this->_padding_,param_1);
  return;
}

// ReloadParticlesCache @ 143d61490

void __thiscall Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache(FPBDRigidsEvolutionGBF *this)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  TParticleHandleBase<double,3>_u_0 TVar6;
  undefined1 local_128 [24];
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_f8 [24];
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_c8 [24];
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_98 [24];
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TParticleHandleBase<double,3>_u_0 local_68;
  int iStack_60;
  int iStack_5c;
  TParticleHandleBase<double,3>_u_0 local_58;
  int iStack_50;
  int iStack_4c;
  TParticleHandleBase<double,3>_u_0 local_48;
  int iStack_40;
  int iStack_3c;
  TParticleHandleBase<double,3>_u_0 local_38;
  int iStack_30;
  int iStack_2c;
  FPBDRigidsEvolutionGBF *local_28;
  FPBDRigidsEvolutionGBF *local_20;
  FEvolutionResimCache *local_18;
  
  local_18 = this->CurrentStepResimCacheImp;
  if ((local_18 != (FEvolutionResimCache *)0x0) && ((char)local_18->_padding_ != '\0')) {
    local_28 = this;
    local_20 = this;
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_128,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)(this->_padding_ + 0x688));
    TVar6 = (TParticleHandleBase<double,3>_u_0)local_128._16_8_;
    while (TVar6.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0) {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_128);
      `Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache'::__l5::<lambda_2>::operator()
                (&local_28,(TGeometryParticleHandleImp<double,3,0> *)(local_128 + 0x10));
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_128);
      TVar6 = (TParticleHandleBase<double,3>_u_0)local_128._16_8_;
      iVar5 = iStack_110;
      do {
        uVar3 = local_128._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_128._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar5 = iVar5 + 1;
          iStack_110 = iVar5;
          if (local_104 <= iVar5) {
LAB_143d61548:
            local_108 = local_108 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_128);
            TVar6 = (TParticleHandleBase<double,3>_u_0)local_128._16_8_;
            iVar5 = iStack_110;
          }
        }
        else {
          iVar5 = local_100 + 1;
          local_100 = iVar5;
          if (*(int *)(local_128._8_8_ + 8) <= iVar5) goto LAB_143d61548;
          if ((iVar5 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar5 * 8);
          TVar6 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar5 = *(int *)(pTVar1 + 1);
          if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_5c = (uint)iStack_5c._1_3_ << 8;
          }
          else {
            iStack_5c = CONCAT31(iStack_5c._1_3_,(TVar6.GeometryParticles)->MParticleType);
          }
          uStack_10c = iStack_5c;
          iStack_110 = iVar5;
          local_128._16_8_ = TVar6;
          local_68 = TVar6;
          iStack_60 = iVar5;
        }
        if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143d61585;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_128);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_128 + 0x10));
      } while (bVar4);
    }
LAB_143d61585:
    TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
    TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
              ((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)
               local_f8,(TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)(this->_padding_ + 0x658));
    TVar6 = (TParticleHandleBase<double,3>_u_0)local_f8._16_8_;
    while (TVar6.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0) {
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                           *)local_f8);
      `Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache'::__l5::<lambda_2>::operator()
                (&local_28,(TGeometryParticleHandleImp<double,3,0> *)(local_f8 + 0x10));
      TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
      RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                           *)local_f8);
      TVar6 = (TParticleHandleBase<double,3>_u_0)local_f8._16_8_;
      iVar5 = iStack_e0;
      do {
        uVar3 = local_f8._8_8_;
        if ((TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)local_f8._8_8_ ==
            (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
             *)0x0) {
          iVar5 = iVar5 + 1;
          iStack_e0 = iVar5;
          if (local_d4 <= iVar5) {
LAB_143d615e7:
            local_d8 = local_d8 + 1;
            TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
            SeekNonEmptySOA((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_f8);
            TVar6 = (TParticleHandleBase<double,3>_u_0)local_f8._16_8_;
            iVar5 = iStack_e0;
          }
        }
        else {
          iVar5 = local_d0 + 1;
          local_d0 = iVar5;
          if (*(int *)(local_f8._8_8_ + 8) <= iVar5) goto LAB_143d615e7;
          if ((iVar5 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar5 * 8);
          TVar6 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar5 = *(int *)(pTVar1 + 1);
          if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(TVar6.GeometryParticles)->MParticleType);
          }
          uStack_dc = iStack_4c;
          iStack_e0 = iVar5;
          local_f8._16_8_ = TVar6;
          local_58 = TVar6;
          iStack_50 = iVar5;
        }
        if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143d6161f;
        TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>::
        RangedForValidation((TConstParticleIterator<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
                             *)local_f8);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_f8 + 0x10));
      } while (bVar4);
    }
LAB_143d6161f:
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c8,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)(this->_padding_ + 0x670));
    TVar6 = (TParticleHandleBase<double,3>_u_0)local_c8._16_8_;
    while (TVar6.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0) {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c8);
      `Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache'::__l5::<lambda_2>::operator()
                (&local_28,(TGeometryParticleHandleImp<double,3,0> *)(local_c8 + 0x10));
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c8);
      TVar6 = (TParticleHandleBase<double,3>_u_0)local_c8._16_8_;
      iVar5 = iStack_b0;
      do {
        uVar3 = local_c8._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_c8._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar5 = iVar5 + 1;
          iStack_b0 = iVar5;
          if (local_a4 <= iVar5) {
LAB_143d61685:
            local_a8 = local_a8 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c8);
            TVar6 = (TParticleHandleBase<double,3>_u_0)local_c8._16_8_;
            iVar5 = iStack_b0;
          }
        }
        else {
          iVar5 = local_a0 + 1;
          local_a0 = iVar5;
          if (*(int *)(local_c8._8_8_ + 8) <= iVar5) goto LAB_143d61685;
          if ((iVar5 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar5 * 8);
          TVar6 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar5 = *(int *)(pTVar1 + 1);
          if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_3c = (uint)iStack_3c._1_3_ << 8;
          }
          else {
            iStack_3c = CONCAT31(iStack_3c._1_3_,(TVar6.GeometryParticles)->MParticleType);
          }
          uStack_ac = iStack_3c;
          iStack_b0 = iVar5;
          local_c8._16_8_ = TVar6;
          local_48 = TVar6;
          iStack_40 = iVar5;
        }
        if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143d616b8;
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_c8);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_c8 + 0x10));
      } while (bVar4);
    }
LAB_143d616b8:
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
    TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
              ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98,
               (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                *)(this->_padding_ + 0x610));
    TVar6 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    while (TVar6.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0) {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      `Chaos::FPBDRigidsEvolutionGBF::ReloadParticlesCache'::__l5::<lambda_2>::operator()
                (&local_28,(TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      TVar6 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
      iVar5 = iStack_80;
      do {
        uVar3 = local_98._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          iVar5 = iVar5 + 1;
          iStack_80 = iVar5;
          if (local_74 <= iVar5) {
LAB_143d61715:
            local_78 = local_78 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
            TVar6 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
            iVar5 = iStack_80;
          }
        }
        else {
          iVar5 = local_70 + 1;
          local_70 = iVar5;
          if (*(int *)(local_98._8_8_ + 8) <= iVar5) goto LAB_143d61715;
          if ((iVar5 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar5 * 8);
          TVar6 = (TParticleHandleBase<double,3>_u_0)pTVar1->GeometryParticles;
          iVar5 = *(int *)(pTVar1 + 1);
          if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_2c = (uint)iStack_2c._1_3_ << 8;
          }
          else {
            iStack_2c = CONCAT31(iStack_2c._1_3_,(TVar6.GeometryParticles)->MParticleType);
          }
          uStack_7c = iStack_2c;
          iStack_80 = iVar5;
          local_98._16_8_ = TVar6;
          local_38 = TVar6;
          iStack_30 = iVar5;
        }
        if (TVar6.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar4);
    }
  }
  return;
}

// ResetCollisions @ 143d69080

void __thiscall Chaos::FPBDRigidsEvolutionGBF::ResetCollisions(FPBDRigidsEvolutionGBF *this)

{
  FPBDCollisionConstraint *pFVar1;
  FPBDCollisionConstraint **ppFVar2;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  FPBDCollisionConstraints::GetConstraintHandles(&this->CollisionConstraints,&local_18);
  for (ppFVar2 = local_18.DataPtr; ppFVar2 != local_18.DataPtr + local_18.ArrayNum;
      ppFVar2 = ppFVar2 + 1) {
    pFVar1 = *ppFVar2;
    if (pFVar1 != (FPBDCollisionConstraint *)0x0) {
      (pFVar1->SavedManifoldPoints).ArrayNum = 0;
      if ((pFVar1->SavedManifoldPoints).ArrayMax < 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                  (0x1c,4,0,&(pFVar1->SavedManifoldPoints).AllocatorInstance,0,
                   &(pFVar1->SavedManifoldPoints).ArrayMax);
      }
      (pFVar1->GJKWarmStartData).NumVerts = 0;
    }
  }
  return;
}

// Serialize @ 143d6dd80

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::Serialize(FPBDRigidsEvolutionGBF *this,FChaosArchive *param_1)

{
  FUniqueIdx FVar1;
  int *piVar2;
  undefined8 *puVar3;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar4;
  TParticleHandleBase<double,3>_u_0 *pTVar5;
  code *pcVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  longlong *plVar8;
  uint uVar9;
  FSpatialAccelerationIdx FVar10;
  undefined2 uVar11;
  undefined7 uVar12;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar13;
  undefined8 uVar14;
  EParticleType EVar15;
  bool bVar16;
  int iVar17;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  *pTVar18;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *this_00;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTVar19;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_01;
  TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
  *this_02;
  FSpatialAccelerationIdx *pFVar20;
  ClusterId *pCVar21;
  IPhysicsProxyBase *pIVar22;
  IPhysicsProxyBase *pIVar23;
  bool *pbVar24;
  FUniqueIdx *pFVar25;
  FPendingSpatialData *pFVar26;
  TGeometryParticle<double,3> **ppTVar27;
  FPendingSpatialData *pFVar28;
  uint uVar29;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TVar30;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar31;
  undefined1 *puVar32;
  int iVar33;
  TParticleHandleBase<double,3>_u_0 this_03;
  uint uVar34;
  TPBDRigidParticleHandleImp<double,3,0> *pTVar35;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  char *pcVar36;
  TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
  TStack_e8;
  longlong lStack_e0;
  TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
  *pTStack_d8;
  undefined1 auStack_d0 [24];
  int iStack_b8;
  EParticleType EStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a0;
  TGeometryParticle<double,3> *pTStack_98;
  TGeometryParticleHandleImp<double,3,1> *pTStack_90;
  int iStack_88;
  FCollisionFilterData FStack_84;
  FCollisionFilterData FStack_74;
  uint uStack_64;
  TParticleHandleBase<double,3>_u_0 TStack_60;
  int iStack_58;
  int iStack_54;
  undefined8 *apuStack_50 [2];
  
  pcVar36 = "false";
  bVar16 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<7803858562110718991>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDRigidsEvolution.cpp"
                      ,0x40f,"false");
  iVar33 = BroadPhaseConfig.BroadphaseType;
  if (bVar16) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_a0 = BroadPhaseConfig.BroadphaseType;
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar17 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar17 < 0xb) {
    BroadPhaseConfig.BroadphaseType = 3;
  }
  else {
    piVar2 = *(int **)param_1->_padding_;
    if ((int *)((undefined8 *)param_1->_padding_)[1] < piVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,&BroadPhaseConfig,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,(uint *)&BroadPhaseConfig);
      }
    }
    else {
      BroadPhaseConfig.BroadphaseType = *piVar2;
      *(longlong *)param_1->_padding_ = *(longlong *)param_1->_padding_ + 4;
    }
  }
  FPBDRigidsSOAs::Serialize((FPBDRigidsSOAs *)this->_padding_,param_1);
  iVar17 = FArchiveState::CustomVer
                     ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar17 < 3) {
    if ((param_1->_padding_ & 1) != 0) {
      puVar3 = (undefined8 *)this->_padding_;
      pTVar35 = (TPBDRigidParticleHandleImp<double,3,0> *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        this->_padding_ = 0;
        LOCK();
        piVar2 = (int *)(puVar3 + 6);
        iVar17 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar17 == 1) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)auStack_d0,
                 (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                  *)(this->_padding_ + 0x5c8));
      if ((TGeometryParticlesImp<double,3,0> *)auStack_d0._16_8_ !=
          (TGeometryParticlesImp<double,3,0> *)0x0) {
        this_03 = (TParticleHandleBase<double,3>_u_0)auStack_d0._16_8_;
        iVar17 = iStack_b8;
        do {
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)auStack_d0
                    );
          pFVar20 = TGeometryParticlesImp<double,3,0>::SpatialIdx(this_03.GeometryParticles,iVar17);
          EVar15 = EStack_b4;
          pTVar31 = (TPBDRigidParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10);
          if (EStack_b4 < Rigid) {
            pTVar31 = pTVar35;
          }
          pFVar20->Bucket = 0;
          pFVar20->InnerIdx = 0;
          if ((pTVar31 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) ||
             (bVar16 = TPBDRigidParticleHandleImp<double,3,0>::Disabled(pTVar31), !bVar16)) {
LAB_143d6da9c:
            pbVar24 = TGeometryParticlesImp<double,3,0>::HasCollision
                                (this_03.GeometryParticles,iVar17);
            if ((*pbVar24 != false) || (ForceNoCollisionIntoSQ != 0)) {
              pFVar25 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  (this_03.GeometryParticles,iVar17);
              FVar1.Idx = pFVar25->Idx;
              pFVar26 = FPendingSpatialInternalDataQueue::Add
                                  ((FPendingSpatialInternalDataQueue *)&this->_padding_,0,FVar1,Add)
              ;
              pFVar26->Operation = Update;
              ppTVar27 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                   (this_03.GeometryParticles,iVar17);
              pTStack_98 = *ppTVar27;
              pTStack_90 = TGeometryParticleHandleImp<double,3,0>::Handle
                                     ((TGeometryParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10))
              ;
              pFVar25 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                  (this_03.GeometryParticles,iVar17);
              FStack_84.Word2 = 0;
              FStack_84.Word3 = 0;
              FStack_84.Word0 = 0;
              FStack_84.Word1 = 0;
              FStack_74.Word2 = 0;
              FStack_74.Word3 = 0;
              iStack_88 = pFVar25->Idx;
              FStack_74.Word0 = 0;
              FStack_74.Word1 = 0;
              uStack_64 = uStack_64 & 0xffffff00;
              if ((iStack_88 == -1) &&
                 (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                      ,0xf76,"CachedUniqueIdx.IsValid()"), bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FAccelerationStructureHandle::
              ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                        ((TGeometryParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10),&FStack_84);
              FAccelerationStructureHandle::
              ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,0>_>
                        ((TGeometryParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10),&FStack_74);
              uStack_64 = CONCAT31(uStack_64._1_3_,1);
              (pFVar26->AccelerationHandle).ExternalGeometryParticle = pTStack_98;
              (pFVar26->AccelerationHandle).GeometryParticleHandle = pTStack_90;
              (pFVar26->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)iStack_88;
              (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_84.Word0;
              (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_84.Word1;
              (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_84.Word2;
              *(ulonglong *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3 =
                   CONCAT44(FStack_74.Word0,FStack_84.Word3);
              (pFVar26->AccelerationHandle).UnionSimFilterData.Word1 = FStack_74.Word1;
              (pFVar26->AccelerationHandle).UnionSimFilterData.Word2 = FStack_74.Word2;
              *(ulonglong *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3 =
                   CONCAT44(uStack_64,FStack_74.Word3);
              pFVar20 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                                  (this_03.GeometryParticles,iVar17);
              pFVar26->SpatialIdx = *pFVar20;
              pFVar28 = FPendingSpatialDataQueue::FindOrAdd
                                  ((FPendingSpatialDataQueue *)&this->_padding_,FVar1,Add);
              pTVar7 = (pFVar26->AccelerationHandle).GeometryParticleHandle;
              (pFVar28->AccelerationHandle).ExternalGeometryParticle =
                   (pFVar26->AccelerationHandle).ExternalGeometryParticle;
              (pFVar28->AccelerationHandle).GeometryParticleHandle = pTVar7;
              uVar34 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word0;
              uVar29 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word1;
              uVar9 = (pFVar26->AccelerationHandle).UnionQueryFilterData.Word2;
              (pFVar28->AccelerationHandle).CachedUniqueIdx =
                   (FUniqueIdx)(pFVar26->AccelerationHandle).CachedUniqueIdx.Idx;
              (pFVar28->AccelerationHandle).UnionQueryFilterData.Word0 = uVar34;
              (pFVar28->AccelerationHandle).UnionQueryFilterData.Word1 = uVar29;
              (pFVar28->AccelerationHandle).UnionQueryFilterData.Word2 = uVar9;
              uVar34 = (pFVar26->AccelerationHandle).UnionSimFilterData.Word1;
              uVar29 = (pFVar26->AccelerationHandle).UnionSimFilterData.Word2;
              *(undefined8 *)&(pFVar28->AccelerationHandle).UnionQueryFilterData.Word3 =
                   *(undefined8 *)&(pFVar26->AccelerationHandle).UnionQueryFilterData.Word3;
              (pFVar28->AccelerationHandle).UnionSimFilterData.Word1 = uVar34;
              (pFVar28->AccelerationHandle).UnionSimFilterData.Word2 = uVar29;
              FVar10 = pFVar26->SpatialIdx;
              uVar11 = *(undefined2 *)&pFVar26->field_0x3a;
              iVar33 = pFVar26->SyncTimestamp;
              *(undefined8 *)&(pFVar28->AccelerationHandle).UnionSimFilterData.Word3 =
                   *(undefined8 *)&(pFVar26->AccelerationHandle).UnionSimFilterData.Word3;
              pFVar28->SpatialIdx = FVar10;
              *(undefined2 *)&pFVar28->field_0x3a = uVar11;
              pFVar28->SyncTimestamp = iVar33;
              uVar12 = *(undefined7 *)&pFVar26->field_0x41;
              pFVar28->Operation = pFVar26->Operation;
              *(undefined7 *)&pFVar28->field_0x41 = uVar12;
            }
          }
          else {
            pTVar31 = (TPBDRigidParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10);
            if (EVar15 < Clustered) {
              pTVar31 = pTVar35;
            }
            if (pTVar31 != (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
              pCVar21 = TPBDRigidClusteredParticles<double,3>::ClusterIds
                                  (*(TPBDRigidClusteredParticles<double,3> **)pTVar31,
                                   *(int *)&pTVar31->field_0x8);
              pTVar4 = pCVar21->Id;
              if (pTVar4 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
                pTVar31 = pTVar35;
                if (2 < (byte)pTVar4->field_0xc) {
                  pTVar31 = (TPBDRigidParticleHandleImp<double,3,0> *)pTVar4;
                }
                if (pTVar31 == (TPBDRigidParticleHandleImp<double,3,0> *)0x0) {
                  bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                      ,0x215,"false");
                  if (bVar16) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                }
                else {
                  bVar16 = TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                     ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar31);
                  if (bVar16) {
                    pIVar22 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                        (*(TGeometryParticlesImp<double,3,0> **)pTVar31,
                                         *(int *)&((TPBDRigidClusteredParticleHandleImp<double,3,1>
                                                    *)pTVar31)->field_0x8);
                    pIVar23 = TGeometryParticlesImp<double,3,0>::PhysicsProxy
                                        (this_03.GeometryParticles,iVar17);
                    if (pIVar22 == pIVar23) goto LAB_143d6da9c;
                  }
                }
              }
            }
          }
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)auStack_d0
                    );
          do {
            uVar14 = auStack_d0._8_8_;
            if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)auStack_d0._8_8_ ==
                (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                 *)0x0) {
              iVar17 = iVar17 + 1;
              iStack_b8 = iVar17;
              if (iStack_ac <= iVar17) {
LAB_143d6dc15:
                iStack_b0 = iStack_b0 + 1;
                TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                          ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                           auStack_d0);
                this_03 = (TParticleHandleBase<double,3>_u_0)auStack_d0._16_8_;
                iVar17 = iStack_b8;
              }
            }
            else {
              iVar33 = iStack_a8 + 1;
              iStack_a8 = iVar33;
              if (*(int *)(auStack_d0._8_8_ + 8) <= iVar33) goto LAB_143d6dc15;
              if ((iVar33 < 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pTVar5 = *(TParticleHandleBase<double,3>_u_0 **)
                        (((ForAnyElementType *)uVar14)->Data + (longlong)iVar33 * 8);
              this_03 = (TParticleHandleBase<double,3>_u_0)pTVar5->GeometryParticles;
              iVar17 = *(int *)(pTVar5 + 1);
              if (this_03.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
                iStack_54 = (uint)iStack_54._1_3_ << 8;
              }
              else {
                iStack_54 = CONCAT31(iStack_54._1_3_,(this_03.GeometryParticles)->MParticleType);
              }
              _EStack_b4 = iStack_54;
              iStack_b8 = iVar17;
              auStack_d0._16_8_ = this_03;
              TStack_60 = this_03;
              iStack_58 = iVar17;
            }
            iVar33 = iStack_a0;
            if (this_03.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0)
            goto LAB_143d6dc54;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)
                       auStack_d0);
            bVar16 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                               ((TGeometryParticleHandleImp<double,3,0> *)(auStack_d0 + 0x10));
          } while (bVar16);
          iVar33 = iStack_a0;
        } while (this_03.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
      }
LAB_143d6dc54:
      FPBDRigidsEvolutionBase::ComputeIntermediateSpatialAcceleration
                ((FPBDRigidsEvolutionBase *)this,true);
      FPBDRigidsEvolutionBase::ComputeIntermediateSpatialAcceleration
                ((FPBDRigidsEvolutionBase *)this,true);
      FPBDRigidsEvolutionBase::ComputeIntermediateSpatialAcceleration
                ((FPBDRigidsEvolutionBase *)this,true);
    }
  }
  else {
    iVar17 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (0xe < iVar17) {
      FPBDRigidsEvolutionBase::FlushInternalAccelerationQueue((FPBDRigidsEvolutionBase *)this);
    }
    iVar17 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    pTVar19 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0;
    if (iVar17 < 8) {
      TStack_e8.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
      if ((param_1->_padding_ & 1) == 0) {
        pTVar18 = (TUniquePtr<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>,TDefaultDelete<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3>_>_>
                   *)(**(code **)(*(longlong *)this->_padding_ + 0xe8))
                               ((longlong *)this->_padding_,apuStack_50,0);
        TVar13.Ptr = TStack_e8.Ptr;
        TVar30.Ptr = TStack_e8.Ptr;
        if (&TStack_e8 != pTVar18) {
          TVar30.Ptr = pTVar18->Ptr;
          pTVar18->Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)0x0;
          if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)TStack_e8.Ptr !=
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            plVar8 = &(TStack_e8.Ptr)->_padding_;
            TStack_e8.Ptr = TVar30.Ptr;
            (**(code **)*plVar8)(TVar13.Ptr,1);
            TVar30.Ptr = TStack_e8.Ptr;
          }
        }
        TStack_e8.Ptr = TVar30.Ptr;
        if (apuStack_50[0] != (undefined8 *)0x0) {
          (**(code **)*apuStack_50[0])(apuStack_50[0],1);
        }
        operator<<<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle_double_3>_>
                  (param_1,&TStack_e8);
        (**(code **)(*(longlong *)this->_padding_ + 0xe0))
                  ((longlong *)this->_padding_,auStackX_8,&TStack_e8,0,
                   (ulonglong)pcVar36 & 0xffffffffffff0000);
      }
      else {
        operator<<<Chaos::ISpatialAcceleration<Chaos::FAccelerationStructureHandle_double_3>_>
                  (param_1,&TStack_e8);
        plVar8 = &this->_padding_;
        TVar30.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar19;
        if ((TStack_e8.Ptr)->Type == '\0') {
          TVar30.Ptr = TStack_e8.Ptr;
        }
        if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
             *)TVar30.Ptr ==
            (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
             *)0x0) {
          TVar30.Ptr = (ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)pTVar19
          ;
          if ((TStack_e8.Ptr)->Type == '\x01') {
            TVar30.Ptr = TStack_e8.Ptr;
          }
          if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)TVar30.Ptr ==
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            this_02 = ::operator_new(0x140);
            if (this_02 !=
                (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
              pTVar19 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                           ::
                           TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                                     (this_02);
            }
            puVar32 = auStackX_20;
          }
          else {
            this_01 = ::operator_new(0x140);
            if (this_01 ==
                (TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                 *)0x0) {
              pTVar19 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)0x0;
              puVar32 = auStackX_18;
            }
            else {
              pTVar19 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                         *)TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                           ::
                           TSpatialAccelerationCollection<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                                     (this_01);
              puVar32 = auStackX_18;
            }
          }
        }
        else {
          this_00 = ::operator_new(0x140);
          if (this_00 ==
              (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               *)0x0) {
            puVar32 = auStackX_10;
          }
          else {
            pTVar19 = TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                      ::
                      TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                                (this_00);
            puVar32 = auStackX_10;
          }
        }
        (**(code **)(pTVar19->_padding_ + 0xe0))
                  (pTVar19,puVar32,&TStack_e8,0,(ulonglong)pcVar36 & 0xffffffffffff0000);
        pTStack_d8 = pTVar19;
        if ((((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
               **)*plVar8 <= &pTStack_d8) &&
            (&pTStack_d8 <
             (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
              **)*plVar8 + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar17 = (int)this->_padding_;
        piVar2 = (int *)((longlong)&this->_padding_ + 4);
        if (iVar17 == *piVar2) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)plVar8,piVar2);
        }
        *(int *)&this->_padding_ = iVar17 + 1;
        *(TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
          **)(*plVar8 + (longlong)iVar17 * 8) = pTStack_d8;
        iVar17 = (int)this->_padding_;
        pTStack_d8 = (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                      *)0x0;
        uVar29 = iVar17 - 1;
        uVar34 = 0;
        if ((int)uVar29 < iVar17) {
          uVar34 = ~uVar29 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this->_padding_ = *(longlong *)(*plVar8 + (longlong)(int)this->_padding_ * 8 + -8);
      }
      if ((TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *)TStack_e8.Ptr !=
          (TSpatialAccelerationCollection<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
           *)0x0) {
        (**(code **)(TStack_e8.Ptr)->_padding_)(TStack_e8.Ptr,1);
      }
    }
    else {
      lStack_e0 = 0;
      (**(code **)(*(longlong *)this->_padding_ + 0x20))
                ((longlong *)this->_padding_,&lStack_e0,param_1);
      plVar8 = &this->_padding_;
      this->_padding_ = lStack_e0;
      if ((((longlong *)*plVar8 <= &lStack_e0) &&
          (&lStack_e0 < (longlong *)*plVar8 + *(int *)((longlong)&this->_padding_ + 4))) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar17 = (int)this->_padding_;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar17 == *piVar2) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)plVar8,piVar2);
      }
      *(int *)&this->_padding_ = iVar17 + 1;
      *(longlong *)(*plVar8 + (longlong)iVar17 * 8) = lStack_e0;
    }
  }
  BroadPhaseConfig.BroadphaseType = iVar33;
  return;
}

// SetCurrentStepResimCache @ 143d6e720

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetCurrentStepResimCache
          (FPBDRigidsEvolutionGBF *this,IResimCacheBase *param_1)

{
  this->CurrentStepResimCacheImp = (FEvolutionResimCache *)param_1;
  return;
}

// SetDebugDrawScene @ 143d6e730

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetDebugDrawScene
          (FPBDRigidsEvolutionGBF *this,TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *param_1)

{
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FChaosDDScene *pFVar3;
  FString *pFVar4;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> *pTVar5;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_98;
  FString local_88;
  FChaosDDScene *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<ChaosDD::Private::FChaosDDTimeline,1> local_68;
  FStringFormatArg local_58;
  FStringFormatArg local_38;
  FString local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (this->CDDScene).Object;
  pTStack_70 = (this->CDDScene).SharedReferenceCount.ReferenceController;
  (this->CDDScene).Object = pFVar3;
  (this->CDDScene).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  pTVar1 = &this->CDDTickTimeline;
  local_98.Object = (FChaosDDTimeline *)0x0;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_98) {
    pTVar1->Object = (FChaosDDTimeline *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CDDTickTimeline).SharedReferenceCount,&local_98.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  pFVar3 = (this->CDDScene).Object;
  if (pFVar3 != (FChaosDDScene *)0x0) {
    pFVar4 = ::FString::FString(&local_18,&pFVar3->Name);
    FStringFormatArg::FStringFormatArg(&local_58,pFVar4);
    FStringFormatArg::FStringFormatArg(&local_38,"Physics Tick");
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_58,2);
    ::FString::FormatImpl(&local_88,L"{0} {1}",&local_a8);
    pTVar5 = ChaosDD::Private::FChaosDDScene::CreateTimeline(pFVar3,&local_68,&local_88);
    if (pTVar1 != pTVar5) {
      pTVar1->Object = pTVar5->Object;
      pTVar5->Object = (FChaosDDTimeline *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CDDTickTimeline).SharedReferenceCount,&pTVar5->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    if (local_38.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.StringValue.Data.AllocatorInstance.Data);
    }
    if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetIsDeterministic @ 143d6e960

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetIsDeterministic(FPBDRigidsEvolutionGBF *this,bool param_1)

{
  FPBDCollisionConstraints::SetIsDeterministic(&this->CollisionConstraints,param_1);
  Chaos::Private::FPBDIslandManager::SetIsDeterministic
            ((FPBDIslandManager *)&this->_padding_,param_1);
  return;
}

// SetJointConstraintSettings @ 143d6ea20

FPBDJointConstraintHandle * __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetJointConstraintSettings
          (FPBDRigidsEvolutionGBF *this,FPBDJointConstraintHandle *param_1,
          FPBDJointSettings *param_2)

{
  FIgnoreCollisionManager *this_00;
  FPBDJointConstraints *pFVar1;
  bool bVar2;
  FPBDJointSettings *pFVar3;
  FPBDJointConstraintHandle *this_01;
  FPBDJointConstraints *pFVar4;
  TGeometryParticleHandleImp<double,3,1> *pTVar5;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_38;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_28;
  
  pFVar3 = FPBDJointConstraintHandle::GetSettings(param_1);
  FPBDJointConstraintHandle::GetConstrainedParticles(param_1,&local_38);
  if (pFVar3->bCollisionEnabled != param_2->bCollisionEnabled) {
    this_00 = &(this->BroadPhase).IgnoreCollisionManager;
    if (param_2->bCollisionEnabled == false) {
      FIgnoreCollisionManager::AddIgnoreCollisions(this_00,local_38.V[0],local_38.V[1]);
    }
    else {
      FIgnoreCollisionManager::RemoveIgnoreCollisions(this_00,local_38.V[0],local_38.V[1]);
    }
  }
  if (pFVar3->bUseLinearSolver != param_2->bUseLinearSolver) {
    FPBDJointConstraintHandle::GetConstrainedParticles(param_1,&local_28);
    pFVar3 = FPBDJointConstraintHandle::GetSettings(param_1);
    if (local_28.V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if ((local_28.V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pFVar3->bCollisionEnabled == false)) {
        FIgnoreCollisionManager::RemoveIgnoreCollisions
                  (&(this->BroadPhase).IgnoreCollisionManager,local_28.V[0],local_28.V[1]);
      }
      if (local_28.V[0] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                  ((TGeometryParticlesImp<double,3,0> *)local_28.V[0]->_padding_,
                   (int *)&local_28.V[0]->_padding_,(FConstraintHandle *)param_1);
      }
    }
    if (local_28.V[1] != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)local_28.V[1]->_padding_,
                 (int *)&local_28.V[1]->_padding_,(FConstraintHandle *)param_1);
    }
    if (param_1->_padding_ != 0) {
      Chaos::Private::FPBDIslandManager::RemoveConstraint
                ((FPBDIslandManager *)&this->_padding_,(FConstraintHandle *)param_1);
    }
    bVar2 = pFVar3->bUseLinearSolver;
    pFVar1 = &(this->JointConstraints).NonLinearConstraints;
    pFVar4 = &(this->JointConstraints).LinearConstraints;
    if (bVar2 == false) {
      pFVar4 = pFVar1;
    }
    FPBDJointConstraints::RemoveConstraint(pFVar4,(int)param_1->_padding_);
    pFVar4 = &(this->JointConstraints).LinearConstraints;
    if ((param_2->bUseLinearSolver == false) &&
       (pFVar4 = &(this->JointConstraints).NonLinearConstraints, bVar2 == false)) {
      pFVar4 = pFVar1;
    }
    this_01 = FPBDJointConstraints::AddConstraint(pFVar4,&local_38,&param_2->ConnectorTransforms);
    if (param_2->bCollisionEnabled == false) {
      FIgnoreCollisionManager::AddIgnoreCollisions
                (&(this->BroadPhase).IgnoreCollisionManager,local_38.V[0],local_38.V[1]);
    }
    FPBDJointConstraintHandle::SetSettings(this_01,param_2);
    TGeometryParticlesImp<double,3,0>::AddConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)local_38.V[0]->_padding_,
               (int *)&local_38.V[0]->_padding_,(FConstraintHandle *)this_01);
    TGeometryParticlesImp<double,3,0>::AddConstraintHandle
              ((TGeometryParticlesImp<double,3,0> *)local_38.V[1]->_padding_,
               (int *)&local_38.V[1]->_padding_,(FConstraintHandle *)this_01);
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&local_38.V[0]->_padding_ + 4)) {
      pTVar5 = local_38.V[0];
    }
    if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    }
    pTVar5 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&local_38.V[1]->_padding_ + 4)) {
      pTVar5 = local_38.V[1];
    }
    if (pTVar5 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty
                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar5);
    }
    return this_01;
  }
  FPBDJointConstraintHandle::SetSettings(param_1,param_2);
  return param_1;
}

// SetName @ 143d6ed90

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetName(FPBDRigidsEvolutionGBF *this,FString *param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  FString *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedDebugName *pFVar5;
  FSharedDebugName local_18;
  
  pFVar5 = FSharedDebugName::FSharedDebugName(&local_18,param_1);
  plVar1 = &this->_padding_;
  if ((FSharedDebugName *)plVar1 != pFVar5) {
    *plVar1 = (longlong)(pFVar5->Name).Object;
    (pFVar5->Name).Object = (FString *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&(pFVar5->Name).SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.Name.SharedReferenceCount.ReferenceController);
  pTVar2 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar3 = (FString *)*plVar1;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->CollisionConstraints).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
           ReferenceController;
  (this->CollisionConstraints).DetectorSettings.EvolutionName.Name.Object = pFVar3;
  (this->CollisionConstraints).DetectorSettings.EvolutionName.Name.SharedReferenceCount.
  ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// SetParticleDynamics @ 143d6f8a0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleDynamics
          (FPBDRigidsEvolutionGBF *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FParticleDynamics *param_2)

{
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  TPBDRigidParticleHandleImp<double,3,1>::SetDynamics(param_1,param_2);
  ResetVSmoothFromForces<1>(this,param_1);
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)
           TPBDRigidParticles<double,3>::Handle
                     (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  Chaos::Private::FPBDIslandManager::FlagParticleUpdated
            ((FPBDIslandManager *)&this->_padding_,pTVar1);
  return;
}

// SetParticleKinematicTarget @ 143d6f8f0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleKinematicTarget
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FKinematicTarget *param_2)

{
  FPBDRigidsSOAs *this_00;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EKinematicTargetMode EVar7;
  undefined4 uVar8;
  EObjectStateType EVar9;
  bool bVar10;
  char cVar11;
  FKinematicTarget *pFVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  TGeometryParticleHandleImp<double,3,1> *pTVar14;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TVector<double,3> local_78;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  
  cVar11 = *(char *)((longlong)&param_1->_padding_ + 4);
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  pTVar13 = this_01;
  if (cVar11 != '\0') {
    pTVar13 = param_1;
  }
  if (pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar14 = this_01;
    if (1 < *(byte *)((longlong)&pTVar13->_padding_ + 4)) {
      pTVar14 = pTVar13;
    }
    if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar9 = Kinematic;
    }
    else {
      EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
      cVar11 = *(char *)((longlong)&param_1->_padding_ + 4);
    }
    if (EVar9 == Kinematic) {
      pTVar13 = this_01;
      if (cVar11 != '\0') {
        pTVar13 = param_1;
      }
      if (param_2->Mode != None) {
        if (1 < *(byte *)((longlong)&pTVar13->_padding_ + 4)) {
          this_01 = pTVar13;
        }
        if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          this_00 = (FPBDRigidsSOAs *)this->_padding_;
          FPBDRigidsSOAs::
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (this_00,(TPBDRigidParticleHandleImp<double,3,1> *)this_01,
                     &this_00->MovingKinematicsMapArray);
          if (((this_00->TransientDirtyMapArray).ContainerListMask == None) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                                  ,0x425,L""), bVar10)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
                    (this_01,(this_00->TransientDirtyMapArray).ContainerListMask);
          TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
                    (&this_00->TransientDirtyMapArray,
                     (TPBDRigidParticleHandleImp<double,3,1> *)this_01);
          if (CVars::bChaosSolverCheckParticleViews != false) {
            FPBDRigidsSOAs::CheckParticleViewMaskImpl(this_00,pTVar13);
          }
        }
      }
      uVar2 = *(undefined8 *)&param_2->Rotation;
      uVar3 = *(undefined8 *)&(param_2->Rotation).field_0x8;
      uVar4 = *(undefined8 *)&param_2->Position;
      uVar5 = *(undefined8 *)&(param_2->Position).field_0x8;
      uVar6 = *(undefined8 *)&(param_2->Position).field_0x10;
      EVar7 = param_2->Mode;
      uVar8 = *(undefined4 *)&param_2->field_0x2c;
      pFVar12 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                          ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar13->_padding_,
                           (int)pTVar13->_padding_);
      *(undefined8 *)&pFVar12->Rotation = uVar2;
      *(undefined8 *)&(pFVar12->Rotation).field_0x8 = uVar3;
      *(undefined8 *)&pFVar12->Position = uVar4;
      *(undefined8 *)&(pFVar12->Position).field_0x8 = uVar5;
      *(undefined8 *)&(pFVar12->Position).field_0x10 = uVar6;
      pFVar12->Mode = EVar7;
      *(undefined4 *)&pFVar12->field_0x2c = uVar8;
      return;
    }
  }
  pTVar13 = this_01;
  if (cVar11 != '\0') {
    pTVar13 = param_1;
  }
  if (pTVar13 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar14 = this_01;
    if (1 < *(byte *)((longlong)&pTVar13->_padding_ + 4)) {
      pTVar14 = pTVar13;
    }
    if (pTVar14 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      EVar9 = Kinematic;
    }
    else {
      EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar14);
    }
    if (EVar9 == Dynamic) goto LAB_143d6faac;
  }
  pTVar13 = this_01;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar13 = param_1;
  }
  if (pTVar13 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    return;
  }
  if (1 < *(byte *)((longlong)&pTVar13->_padding_ + 4)) {
    this_01 = pTVar13;
  }
  if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    EVar9 = Kinematic;
  }
  else {
    EVar9 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
  }
  if (EVar9 != Sleeping) {
    return;
  }
LAB_143d6faac:
  if (param_2->Mode == Position) {
    local_58 = (double)*(float *)&param_2->Rotation;
    local_50 = (double)*(float *)&(param_2->Rotation).field_0x4;
    local_78._0_8_ = *(undefined8 *)&param_2->Position;
    local_78._8_8_ = *(undefined8 *)&(param_2->Position).field_0x8;
    local_48 = (double)*(float *)&(param_2->Rotation).field_0x8;
    local_40 = (double)*(float *)&(param_2->Rotation).field_0xc;
    local_78._16_8_ = *(undefined8 *)&(param_2->Position).field_0x10;
    SetParticleTransform(this,param_1,&local_78,(TRotation<double,3> *)&local_58,false,true);
  }
  return;
}

// SetParticleMassProps @ 143d6fb50

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleMassProps
          (FPBDRigidsEvolutionGBF *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          FParticleMassProps *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  uint uVar7;
  
  TPBDRigidParticleHandleImp<double,3,1>::SetCenterOfMass(param_1,&param_2->MCenterOfMass,false);
  TPBDRigidParticleHandleImp<double,3,1>::SetRotationOfMass(param_1,&param_2->MRotationOfMass,false)
  ;
  TPBDRigidParticleHandleImp<double,3,1>::SetI(param_1,&param_2->MI);
  TPBDRigidParticleHandleImp<double,3,1>::SetInvI(param_1,&param_2->MInvI);
  uVar2 = *(uint *)&param_1->field_0x8;
  lVar3 = *(longlong *)param_1;
  dVar1 = param_2->MM;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x3d0)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3c8) + (longlong)(int)uVar2 * 8) = dVar1;
  uVar2 = *(uint *)&param_1->field_0x8;
  dVar1 = param_2->MInvM;
  lVar3 = *(longlong *)param_1;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 1000)) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(double *)(*(longlong *)(lVar3 + 0x3e0) + (longlong)(int)uVar2 * 8) = dVar1;
  TPBDRigidParticleHandleImp<double,3,1>::SetInertiaConditioningDirty(param_1);
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)
           TPBDRigidParticles<double,3>::Handle
                     (*(TPBDRigidParticles<double,3> **)param_1,*(int *)&param_1->field_0x8);
  Chaos::Private::FPBDIslandManager::FlagParticleUpdated
            ((FPBDIslandManager *)&this->_padding_,pTVar6);
  return;
}

// SetParticleTransform @ 143d6ff10

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleTransform
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TRotation<double,3> *param_3,bool param_4,bool param_5)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  longlong lVar9;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TVector<double,3> local_58;
  double local_38;
  double local_30;
  undefined1 local_28 [16];
  
  pTVar8 = TParticles<double,3>::GetX
                     ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  uVar2 = (uint)param_1->_padding_;
  lVar9 = (longlong)(int)uVar2;
  lVar3 = param_1->_padding_;
  local_58._0_8_ = *(undefined8 *)pTVar8;
  local_58._8_8_ = *(undefined8 *)&pTVar8->field_0x8;
  local_58._16_8_ = *(undefined8 *)&pTVar8->field_0x10;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x50)) {
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
  lVar3 = *(longlong *)(lVar3 + 0x48);
  local_38 = (double)*(float *)(lVar3 + lVar9 * 0x10);
  local_30 = (double)*(float *)(lVar3 + 4 + lVar9 * 0x10);
  uVar1 = *(undefined8 *)(lVar3 + 8 + lVar9 * 0x10);
  dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
  local_28._8_4_ = SUB84(dVar5,0);
  local_28._0_8_ = (double)(float)uVar1;
  local_28._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  TParticles<double,3>::SetX
            ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_,param_2);
  TGeometryParticleHandleImp<double,3,1>::SetR(param_1,param_3,false);
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    this_00 = param_1;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TPBDRigidParticleHandleImp<double,3,1>::SetP
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,param_2);
    TPBDRigidParticleHandleImp<double,3,1>::SetQ
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,param_3);
  }
  if ((param_5) && (param_4)) {
    Chaos::Private::FPBDIslandManager::FlagParticleTransformSetExplicitly
              ((FPBDIslandManager *)&this->_padding_,param_1);
  }
  Chaos::Private::FPBDIslandManager::FlagParticleUpdated
            ((FPBDIslandManager *)&this->_padding_,param_1);
  OnParticleMoved(this,param_1,&local_58,(TRotation<double,3> *)&local_38,param_4,param_5);
  FChaosVisualDebuggerTrace::TraceParticle(param_1);
  FPBDRigidsEvolutionBase::TestModeUpdateSavedParticle((FPBDRigidsEvolutionBase *)this,param_1);
  return;
}

// SetParticleTransformSwept @ 143d700b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleTransformSwept
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TRotation<double,3> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  bool bVar10;
  TVector<double,3> *pTVar11;
  uint uVar12;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  FGenericParticleHandleImp local_res10;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TQuat<double> local_128;
  FSimSweepParticleHit local_108;
  
  local_res10.MHandle = param_1;
  bVar10 = FGenericParticleHandleImp::IsDynamic(&local_res10);
  if (bVar10) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
      this_00 = param_1;
    }
    pTVar11 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                        ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    uVar16 = *(undefined4 *)pTVar11;
    uVar17 = *(undefined4 *)&pTVar11->field_0x4;
    uVar18 = *(undefined4 *)&pTVar11->field_0x8;
    uVar19 = *(undefined4 *)&pTVar11->field_0xc;
    uVar20 = (undefined4)*(undefined8 *)&pTVar11->field_0x10;
    uVar21 = (undefined4)((ulonglong)*(undefined8 *)&pTVar11->field_0x10 >> 0x20);
  }
  else {
    local_168._s_0.Z = 0.0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar21 = 0;
  }
  local_148._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  local_148._0_4_ = uVar16;
  local_148._4_4_ = uVar17;
  local_148._8_4_ = uVar18;
  local_148._12_4_ = uVar19;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_3,(TVector<double> *)&local_1b8._s_0,
             (TVector<double> *)&local_148._s_0);
  dVar14 = *(double *)&param_2->field_0x10;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)param_2;
  pTVar11 = TParticles<double,3>::GetX
                      ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
  uVar4 = (uint)param_1->_padding_;
  lVar13 = (longlong)(int)uVar4;
  lVar5 = param_1->_padding_;
  uVar12 = 0;
  if ((int)uVar4 < *(int *)(lVar5 + 0x50)) {
    uVar12 = ~uVar4 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x48);
  local_168._s_0.Z = (double)CONCAT44(uVar21,uVar20);
  local_128.X = (double)*(float *)(lVar5 + lVar13 * 0x10);
  local_128.Y = (double)*(float *)(lVar5 + 4 + lVar13 * 0x10);
  uVar3 = *(undefined8 *)(lVar5 + 8 + lVar13 * 0x10);
  local_128.Z = (double)(float)uVar3;
  local_128.W = (double)(float)((ulonglong)uVar3 >> 0x20);
  local_168._0_4_ = uVar16;
  local_168._4_4_ = uVar17;
  local_168._8_4_ = uVar18;
  local_168._12_4_ = uVar19;
  UE::Math::TQuat<double>::RotateVector
            (&local_128,(TVector<double> *)&local_1a0._s_0,(TVector<double> *)&local_168._s_0);
  dVar9 = __real_3ff0000000000000;
  dVar8 = (local_1b8._s_0.Z + dVar14) - (local_1a0._s_0.Z + *(double *)&pTVar11->field_0x10);
  dVar1 = (local_1b8._s_0.Y + dVar1) - (local_1a0._s_0.Y + *(double *)&pTVar11->field_0x8);
  auVar15._0_8_ = dVar8 * dVar8;
  auVar15._8_8_ = 0;
  dVar2 = (local_1b8._s_0.X + dVar2) - (local_1a0._s_0.X + *(double *)pTVar11);
  dVar14 = dVar1 * dVar1 + dVar2 * dVar2 + auVar15._0_8_;
  if (__real_3f1a36e2e0000000 <= dVar14) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar14;
    auVar15 = sqrtpd(auVar15,auVar7);
    dVar14 = auVar15._0_8_;
    local_1c0 = __real_3ff0000000000000 / dVar14;
    dVar2 = dVar2 * local_1c0;
    dVar1 = local_1c0 * dVar1;
    local_1c0 = local_1c0 * dVar8;
    local_1d0 = dVar2;
    dStack_1c8 = dVar1;
  }
  else {
    dVar14 = 0.0;
    local_1d0 = ___xmm_00000000000000003ff0000000000000;
    dStack_1c8 = _UNK_150689518;
    local_1c0 = 0.0;
    dVar1 = 0.0;
    dVar2 = __real_3ff0000000000000;
  }
  local_1e0 = *(double *)&param_2->field_0x8 - dVar1 * dVar14;
  local_1e8 = *(double *)param_2 - dVar2 * dVar14;
  local_1d8 = *(double *)&param_2->field_0x10 - local_1c0 * dVar14;
  if (__real_3e45798ee0000000 < dVar14) {
    local_108.HitParticle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    bVar10 = Chaos::Private::SimSweepParticleFirstHit
                       ((ISpatialAcceleration<Chaos::FAccelerationStructureHandle,double,3> *)
                        this->_padding_,&(this->BroadPhase).IgnoreCollisionManager,param_1,
                        (TVector<double,3> *)&local_1e8,param_3,(TVector<double,3> *)&local_1d0,
                        dVar14,&local_108,__real_3f1a36e2e0000000);
    if ((bVar10) && (dVar9 = local_108.HitTOI, local_108.HitTOI <= 0.0)) {
      return;
    }
  }
  local_188 = (*(double *)param_2 - local_1e8) * dVar9 + local_1e8;
  local_180 = (*(double *)&param_2->field_0x8 - local_1e0) * dVar9 + local_1e0;
  local_178 = (*(double *)&param_2->field_0x10 - local_1d8) * dVar9 + local_1d8;
  SetParticleTransform(this,param_1,(TVector<double,3> *)&local_188,param_3,param_4,true);
  return;
}

// SetParticleVelocities @ 143d70440

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetParticleVelocities
          (FPBDRigidsEvolutionGBF *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,TVector<float,3> *param_3)

{
  double dVar1;
  EObjectStateType EVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_38 [16];
  double local_28;
  
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    pTVar3 = param_1;
  }
  if (pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TKinematicGeometryParticlesImp<double,3,0>::SetV
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
               (int)pTVar3->_padding_,param_2);
    dVar1 = (double)(float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_38._8_4_ = SUB84(dVar1,0);
    local_38._0_8_ = (double)(float)*(undefined8 *)param_3;
    local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_28 = (double)*(float *)&param_3->field_0x8;
    TKinematicGeometryParticlesImp<double,3,0>::SetW
              ((TKinematicGeometryParticlesImp<double,3,0> *)pTVar3->_padding_,
               (int)pTVar3->_padding_,(TVector<double,3> *)local_38);
  }
  pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar3 = param_1;
  }
  if ((pTVar3 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
     ((EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3), EVar2 == Dynamic ||
      (EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                         ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3), EVar2 == Sleeping)))) {
    TPBDRigidParticleHandleImp<double,3,1>::SetVSmooth
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3,param_2);
    dVar1 = (double)(float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_38._8_4_ = SUB84(dVar1,0);
    local_38._0_8_ = (double)(float)*(undefined8 *)param_3;
    local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    local_28 = (double)*(float *)&param_3->field_0x8;
    TPBDRigidParticleHandleImp<double,3,1>::SetWSmooth
              ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3,(TVector<double,3> *)local_38);
    uVar4 = (uint)*(undefined8 *)param_2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar5 = (uint)((ulonglong)*(undefined8 *)param_2 >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if ((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
         (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000) ||
       ((((uVar4 = (uint)*(undefined8 *)&param_2->field_0x8 &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x8 >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000 ||
          (uVar4 = (uint)*(undefined8 *)&param_2->field_0x10 &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar5 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar5,uVar4) &&
          (double)CONCAT44(uVar5,uVar4) != __real_3f1a36e2e0000000)) ||
         (__real_38d1b717 < (float)(*(uint *)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
        ((__real_38d1b717 <
          (float)(*(uint *)&param_3->field_0x4 & __xmm_7fffffff7fffffff7fffffff7fffffff) ||
         (__real_38d1b717 <
          (float)(*(uint *)&param_3->field_0x8 & __xmm_7fffffff7fffffff7fffffff7fffffff))))))) {
      EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar3);
      if (EVar2 == Sleeping) {
        FPBDRigidsEvolutionBase::SetParticleObjectState
                  ((FPBDRigidsEvolutionBase *)this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar3,
                   Dynamic);
      }
      Chaos::Private::FPBDIslandManager::WakeParticleIslands
                ((FPBDIslandManager *)&this->_padding_,pTVar3);
      Chaos::Private::FPBDIslandManager::FlagParticleUpdated
                ((FPBDIslandManager *)&this->_padding_,pTVar3);
    }
    pTVar3 = (TGeometryParticleHandleImp<double,3,1> *)
             TPBDRigidParticles<double,3>::Handle
                       ((TPBDRigidParticles<double,3> *)pTVar3->_padding_,(int)pTVar3->_padding_);
    Chaos::Private::FPBDIslandManager::FlagParticleUpdated
              ((FPBDIslandManager *)&this->_padding_,pTVar3);
  }
  return;
}

// SetShockPropagationIterations @ 143d70d40

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::SetShockPropagationIterations
          (FPBDRigidsEvolutionGBF *this,int param_1,int param_2)

{
  int *piVar1;
  
  if (-1 < param_1) {
    (this->CollisionConstraints).SolverSettings.NumPositionShockPropagationIterations = param_1;
  }
  piVar1 = &(this->CollisionConstraints).SolverSettings.NumVelocityShockPropagationIterations;
  if (-1 < param_2) {
    *piVar1 = param_2;
  }
  if (((this->CollisionConstraints).SolverSettings.NumPositionShockPropagationIterations < 1) &&
     (*piVar1 < 1)) {
    Chaos::Private::FPBDIslandManager::SetAssignLevels((FPBDIslandManager *)&this->_padding_,false);
    return;
  }
  Chaos::Private::FPBDIslandManager::SetAssignLevels((FPBDIslandManager *)&this->_padding_,true);
  return;
}

// TestModeResetCollisions @ 143d753c0

void __thiscall Chaos::FPBDRigidsEvolutionGBF::TestModeResetCollisions(FPBDRigidsEvolutionGBF *this)

{
  FPBDCollisionConstraint *this_00;
  FPBDCollisionConstraint **ppFVar1;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_38;
  
  if (CVars::bChaos_Solver_TestMode_Enabled) {
    FPBDCollisionConstraints::GetConstraintHandles(&this->CollisionConstraints,&local_38);
    for (ppFVar1 = local_38.DataPtr; ppFVar1 != local_38.DataPtr + local_38.ArrayNum;
        ppFVar1 = ppFVar1 + 1) {
      this_00 = *ppFVar1;
      if (this_00 != (FPBDCollisionConstraint *)0x0) {
        FPBDCollisionConstraint::ResetManifold(this_00);
        if (((this_00->Flags).Bits >> 0xb & 1) != 0) {
          (this_00->Flags).Bits = (this_00->Flags).Bits & 0xefff;
          FPBDCollisionConstraint::UpdateMaterialPropertiesImpl(this_00);
          (this_00->Flags).Bits =
               (ushort)((this_00->BoundsTestFlags).Bits >> 5 & 1) << 8 |
               (this_00->Flags).Bits & 0xf6ff | 0x1000;
        }
        (this_00->GJKWarmStartData).NumVerts = 0;
      }
    }
  }
  return;
}

// TransferJointConstraintCollisions @ 143d76740

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::TransferJointConstraintCollisions(FPBDRigidsEvolutionGBF *this)

{
  return;
}

// UpdateCollisionSolverType @ 143d77ad0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::UpdateCollisionSolverType(FPBDRigidsEvolutionGBF *this)

{
  ECollisionSolverType EVar1;
  
  if (-1 < CVars::ChaosSolverCollisionSolverType) {
    if (CVars::ChaosSolverCollisionSolverType == 1) {
      EVar1 = GaussSeidelSimd;
    }
    else {
      EVar1 = GaussSeidel;
      if (CVars::ChaosSolverCollisionSolverType == 2) {
        EVar1 = PartialJacobi;
      }
    }
    if (EVar1 != (this->CollisionConstraints).CollisionSolverType) {
      Chaos::Private::FPBDIslandGroupManager::RemoveConstraintContainer
                ((FPBDIslandGroupManager *)&this->_padding_,
                 (FPBDConstraintContainer *)&this->CollisionConstraints);
      (this->CollisionConstraints).CollisionSolverType = EVar1;
      Chaos::Private::FPBDIslandGroupManager::AddConstraintContainer
                ((FPBDIslandGroupManager *)&this->_padding_,
                 (FPBDConstraintContainer *)&this->CollisionConstraints,
                 CVars::ChaosSolverCollisionPriority);
    }
  }
  return;
}

// UpdateInertiaConditioning @ 143d7d9d0

void __thiscall
Chaos::FPBDRigidsEvolutionGBF::UpdateInertiaConditioning(FPBDRigidsEvolutionGBF *this)

{
  byte *pbVar1;
  longlong lVar2;
  TParticleHandleBase<double,3>_u_0 *pTVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  bool bVar10;
  EObjectStateType EVar11;
  uint uVar12;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  TParticleHandleBase<double,3>_u_0 this_00;
  bool bVar17;
  TVector<float,3> local_b8;
  TParticleHandleBase<double,3>_u_0 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  
  fVar7 = CVars::ChaosSolverMaxInvInertiaComponentRatio;
  fVar6 = CVars::ChaosSolverInertiaConditioningRotationRatio;
  fVar5 = CVars::ChaosSolverInertiaConditioningDistance;
  bVar17 = this->InertiaConditioningEpoch != CVars::ChaosSolverInertiaConditioningEpoch;
  this->InertiaConditioningEpoch = CVars::ChaosSolverInertiaConditioningEpoch;
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::
  TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>
            ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98,
             (TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
              *)(this->_padding_ + 0x5e0));
  if ((TPBDRigidParticles<double,3> *)local_98._16_8_ != (TPBDRigidParticles<double,3> *)0x0) {
    this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
    uVar15 = uStack_80;
    do {
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      uVar12 = 0;
      if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(byte *)((this_00.PBDRigidParticles)->_padding_ + 10 + (longlong)(int)uVar15 * 0x10) & 1
          ) == 0) {
        if (bVar17) {
          uVar12 = 0;
          if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((*(byte *)((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar15 * 0x10)
               >> 4 & 1) != 0) goto LAB_143d7db70;
        }
      }
      else {
LAB_143d7db70:
        EVar11 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10));
        if ((EVar11 == Dynamic) ||
           (EVar11 = TPBDRigidParticleHandleImp<double,3,0>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,0> *)(local_98 + 0x10)),
           EVar11 == Sleeping)) {
          uVar12 = 0;
          if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((*(byte *)((this_00.PBDRigidParticles)->_padding_ + 8 + (longlong)(int)uVar15 * 0x10)
                >> 4 & 1) == 0) || (CVars::bChaosSolverInertiaConditioningEnabled == false))
          goto LAB_143d7dcae;
          pTVar13 = TPBDRigidParticles<double,3>::Handle(this_00.PBDRigidParticles,uVar15);
          CalculateParticleInertiaConditioning
                    (&local_b8,pTVar13,fVar5,fVar6,fVar7,&CVars::ChaosInertiaConditioningTolerances)
          ;
          uVar9 = local_b8._8_4_;
          uVar8 = local_b8._0_8_;
          uVar12 = 0;
          if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = (this_00.PBDRigidParticles)->_padding_;
          *(undefined8 *)(lVar2 + (longlong)(int)uVar15 * 0xc) = uVar8;
          *(undefined4 *)(lVar2 + 8 + (longlong)(int)uVar15 * 0xc) = uVar9;
        }
        else {
LAB_143d7dcae:
          uVar12 = 0;
          if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar14 = (longlong)(int)uVar15;
          lVar2 = (this_00.PBDRigidParticles)->_padding_;
          *(undefined4 *)(lVar2 + lVar14 * 0xc) = 0x3f800000;
          *(undefined4 *)(lVar2 + 4 + lVar14 * 0xc) = 0x3f800000;
          *(undefined4 *)(lVar2 + 8 + lVar14 * 0xc) = 0x3f800000;
          this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
          uVar15 = uStack_80;
        }
        uVar12 = 0;
        if ((int)uVar15 < (int)(this_00.PBDRigidParticles)->_padding_) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pbVar1 = (byte *)((longlong)(int)uVar15 * 0x10 + 10 + (this_00.PBDRigidParticles)->_padding_
                         );
        *pbVar1 = *pbVar1 & 0xfe;
      }
      TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
      do {
        uVar8 = local_98._8_8_;
        if ((TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_98._8_8_ ==
            (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar15 = uVar15 + 1;
          uStack_80 = uVar15;
          if (local_74 <= (int)uVar15) {
LAB_143d7ddb5:
            local_78 = local_78 + 1;
            TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
            this_00 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
            uVar15 = uStack_80;
          }
        }
        else {
          iVar16 = local_70 + 1;
          local_70 = iVar16;
          if (*(int *)(local_98._8_8_ + 8) <= iVar16) goto LAB_143d7ddb5;
          if ((iVar16 < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pTVar3 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar8)->Data + (longlong)iVar16 * 8);
          this_00 = (TParticleHandleBase<double,3>_u_0)pTVar3->PBDRigidParticles;
          uVar15 = *(uint *)(pTVar3 + 1);
          if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
              (TPBDRigidParticles<double,3> *)0x0) {
            iStack_9c = (uint)iStack_9c._1_3_ << 8;
          }
          else {
            iStack_9c = CONCAT31(iStack_9c._1_3_,(this_00.GeometryParticles)->MParticleType);
          }
          uStack_7c = iStack_9c;
          uStack_80 = uVar15;
          local_a8 = this_00;
          uStack_a0 = uVar15;
          local_98._16_8_ = this_00;
        }
        if ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles ==
            (TPBDRigidParticles<double,3> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TPBDRigidParticles<double,3>_> *)local_98);
        bVar10 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                           ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
      } while (bVar10);
    } while ((TPBDRigidParticles<double,3> *)this_00.GeometryParticles !=
             (TPBDRigidParticles<double,3> *)0x0);
  }
  return;
}

// WaitIntegrationComplete @ 143d828b0

void __thiscall Chaos::FPBDRigidsEvolutionGBF::WaitIntegrationComplete(FPBDRigidsEvolutionGBF *this)

{
  Chaos::Private::FTaskDispatcherEvolution::WaitIntegrationComplete
            ((FTaskDispatcherEvolution *)&this->_padding_);
  return;
}

// operator() @ 1504a7c10

bool __thiscall
`Chaos::FPBDRigidsEvolutionGBF::GetFirstClusteredPhysicsMaterial'::__l20::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5187655782954436623>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5187655782954436623>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

