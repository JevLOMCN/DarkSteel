// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FImplementation @ 14824ec30

FImplementation * __thiscall
ImmediatePhysics_Chaos::FSimulation::FImplementation::FImplementation(FImplementation *this)

{
  TArrayCollectionArray<Chaos::TSerializablePtr<Chaos::FChaosPhysicsMaterial>_> *pTVar1;
  TArrayCollectionArray<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>_>
  *pTVar2;
  TArrayCollectionArray<Chaos::TVector<double,3>_> *pTVar3;
  TArrayCollectionArray<Chaos::TRotation<double,3>_> *pTVar4;
  FPBDRigidsSOAs *this_00;
  FPBDMinEvolution *this_01;
  TGeometryParticleHandles<double,3> *this_02;
  float fVar5;
  FPBDCollisionConstraints *this_03;
  
  *(undefined ***)&this->CollidedParticles = &___7__TArrayCollectionArray__N_Chaos__6B_;
  *(undefined8 *)&(this->ParticleMaterials).field_0x8 = 0;
  pTVar1 = &this->ParticleMaterials;
  *(undefined8 *)&(this->CollidedParticles).field_0x8 = 0;
  (this->ActivePotentiallyCollidingPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->PerParticleMaterials;
  (this->ActivePotentiallyCollidingPairs).ArrayNum = 0;
  (this->ActivePotentiallyCollidingPairs).ArrayMax = 0;
  pTVar3 = &this->ParticlePrevXs;
  (this->StaticParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar4 = &this->ParticlePrevRs;
  (this->StaticParticles).ArrayNum = 0;
  (this->StaticParticles).ArrayMax = 0;
  *(undefined8 *)&(this->CollidedParticles).field_0x10 = 0;
  *(undefined ***)pTVar1 =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_VFChaosPhysicsMaterial_Chaos___Chaos___Chaos__6B_
  ;
  this_00 = &this->Particles;
  *(undefined8 *)&(this->ParticleMaterials).field_0x10 = 0;
  *(undefined ***)pTVar2 =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFChaosPhysicsMaterial_Chaos__U__TDefaultDelete_VFChaosPhysicsMaterial_Chaos_______Chaos__6B_
  ;
  *(undefined ***)pTVar3 = &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  *(undefined ***)pTVar4 = &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  *(undefined8 *)&(this->PerParticleMaterials).field_0x8 = 0;
  *(undefined8 *)&(this->PerParticleMaterials).field_0x10 = 0;
  *(undefined8 *)&(this->ParticlePrevXs).field_0x8 = 0;
  *(undefined8 *)&(this->ParticlePrevXs).field_0x10 = 0;
  *(undefined8 *)&(this->ParticlePrevRs).field_0x8 = 0;
  *(undefined8 *)&(this->ParticlePrevRs).field_0x10 = 0;
  (this->UniqueIndices).NextUniqueIndex = 0;
  (this->UniqueIndices).FreeIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueIndices).FreeIndices.ArrayNum = 0;
  (this->UniqueIndices).FreeIndices.ArrayMax = 0;
  (this->UniqueIndices)._padding_ =
       (longlong)&___7FSimpleParticleUniqueIndices_ImmediatePhysics_Chaos__6B_;
  Chaos::FPBDRigidsSOAs::FPBDRigidsSOAs(this_00,(IParticleUniqueIndices *)&this->UniqueIndices);
  Chaos::FPBDJointCombinedConstraints::FPBDJointCombinedConstraints(&this->Joints);
  this_03 = &this->Collisions;
  Chaos::FPBDCollisionConstraints::FPBDCollisionConstraints
            (this_03,this_00,&this->CollidedParticles,pTVar1,pTVar2,
             (THandleArray<Chaos::FChaosPhysicsMaterial,24,8> *)0x0,
             ChaosImmediate_Evolution_NumCollisionsPerBlock,__real_409f400000000000);
  (this->BroadPhase).ParticlesA =
       (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  this_01 = &this->Evolution;
  (this->BroadPhase).ParticlesB =
       (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  (this->BroadPhase).ParticlePairs = &this->ActivePotentiallyCollidingPairs;
  (this->CollisionDetector)._padding_ = (longlong)&___7FBasicCollisionDetector_Chaos__6B_;
  (this->CollisionDetector).BroadPhase = &this->BroadPhase;
  (this->CollisionDetector)._padding_ = (longlong)this_03;
  Chaos::FPBDMinEvolution::FPBDMinEvolution(this_01,this_00,pTVar3,pTVar4,&this->CollisionDetector);
  (this->ActorHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorHandles).ArrayNum = 0;
  (this->ActorHandles).ArrayMax = 0;
  this->NumActiveDynamicActorHandles = 0;
  (this->JointHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointHandles).ArrayNum = 0;
  (this->JointHandles).ArrayMax = 0;
  *(undefined8 *)&this->IgnoreCollisionParticlePairTable = 0;
  *(undefined8 *)&(this->IgnoreCollisionParticlePairTable).field_0x8 = 0;
  this_02 = &(this->Particles).ParticleHandles;
  *(undefined8 *)&(this->IgnoreCollisionParticlePairTable).field_0x20 = 0;
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x28 = 0;
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x34 = 0;
  *(undefined8 *)&(this->IgnoreCollisionParticlePairTable).field_0x40 = 0;
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x48 = 0;
  (this->PotentiallyCollidingPairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PotentiallyCollidingPairs).ArrayNum = 0;
  (this->PotentiallyCollidingPairs).ArrayMax = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearAcceleration.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularAcceleration.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).LinearVelocity.field_0x10 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationSpace).AngularVelocity.field_0x10 = 0;
  *&(this->SimulationSpaceTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->SimulationSpaceTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->SimulationSpaceTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->SimulationSpaceTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->SimulationSpaceTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->SimulationSpaceTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  fVar5 = ChaosImmediate_Evolution_InitialStepTime;
  this->NumRollingAverageStepTimes = 1;
  this->RollingAverageStepTime = (double)fVar5;
  this->MaxNumRollingAverageStepTimes = ChaosImmediate_Evolution_DeltaTimeCount;
  this->bUseMinStepTime = true;
  this->bUseFixedStepTolerance = true;
  this->bActorsDirty = false;
  Chaos::TArrayCollection::AddArray
            ((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)&this->CollidedParticles);
  Chaos::TArrayCollection::AddArray((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)pTVar1)
  ;
  Chaos::TArrayCollection::AddArray((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)pTVar2)
  ;
  Chaos::TArrayCollection::AddArray((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)pTVar3)
  ;
  Chaos::TArrayCollection::AddArray((TArrayCollection *)this_02,(TArrayCollectionArrayBase *)pTVar4)
  ;
  Chaos::FPBDMinEvolution::AddConstraintContainer
            (this_01,(FPBDConstraintContainer *)this_03,ChaosImmediate_Collision_Priority);
  Chaos::FPBDMinEvolution::AddConstraintContainer
            (this_01,(FPBDConstraintContainer *)&this->Joints,0);
  Chaos::FPBDMinEvolution::AddConstraintContainer
            (this_01,(FPBDConstraintContainer *)&(this->Joints).NonLinearConstraints,0);
  return this;
}

// ~FImplementation @ 148252940

void __thiscall
ImmediatePhysics_Chaos::FSimulation::FImplementation::~FImplementation(FImplementation *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->PotentiallyCollidingPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->IgnoreCollisionParticlePairTable).field_0x48 = 0;
  pvVar2 = *(void **)&(this->IgnoreCollisionParticlePairTable).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->IgnoreCollisionParticlePairTable);
  pFVar1 = (this->JointHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorHandles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Chaos::FPBDMinEvolution::~FPBDMinEvolution(&this->Evolution);
  (this->CollisionDetector)._padding_ = (longlong)&___7FCollisionDetector_Chaos__6B_;
  Chaos::FPBDCollisionConstraints::~FPBDCollisionConstraints(&this->Collisions);
  Chaos::FPBDJointConstraints::~FPBDJointConstraints(&(this->Joints).NonLinearConstraints);
  Chaos::FPBDJointConstraints::~FPBDJointConstraints(&(this->Joints).LinearConstraints);
  Chaos::FPBDRigidsSOAs::~FPBDRigidsSOAs(&this->Particles);
  pFVar1 = (this->UniqueIndices).FreeIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->ParticlePrevRs =
       &___7__TArrayCollectionArray_V__TRotation_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->ParticlePrevRs).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->ParticlePrevXs =
       &___7__TArrayCollectionArray_V__TVector_N_02_Chaos___Chaos__6B_;
  pvVar2 = *(void **)&(this->ParticlePrevXs).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->PerParticleMaterials =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_VFChaosPhysicsMaterial_Chaos__U__TDefaultDelete_VFChaosPhysicsMaterial_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>,int>
            (*(TUniquePtr<Chaos::FChaosPhysicsMaterial,TDefaultDelete<Chaos::FChaosPhysicsMaterial>_>
               **)&(this->PerParticleMaterials).field_0x8,
             *(int *)&(this->PerParticleMaterials).field_0x10);
  pvVar2 = *(void **)&(this->PerParticleMaterials).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->ParticleMaterials =
       &
       ___7__TArrayCollectionArray_V__TSerializablePtr_VFChaosPhysicsMaterial_Chaos___Chaos___Chaos__6B_
  ;
  pvVar2 = *(void **)&(this->ParticleMaterials).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)&this->CollidedParticles = &___7__TArrayCollectionArray__N_Chaos__6B_;
  pvVar2 = *(void **)&(this->CollidedParticles).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->StaticParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActivePotentiallyCollidingPairs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

