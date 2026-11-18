// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosVDRuntime
// Functions: 10

// StaticStruct @ 1436c9830

UScriptStruct * __cdecl FChaosVDParticleDataWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosVDRuntime();
    Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticleDataWrapper,(UObject *)pUVar1,
                         L"ChaosVDParticleDataWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FChaosVDParticleDataWrapper.OuterSingleton;
}

// HasValidData @ 1436c9bf0

bool __thiscall FChaosVDParticleDataWrapper::HasValidData(FChaosVDParticleDataWrapper *this)

{
  return (bool)(char)this->_padding_;
}

// FChaosVDParticleDataWrapper @ 1436d4d60

/* WARNING: Type propagation algorithm not settling */

FChaosVDParticleDataWrapper * __thiscall
FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper(FChaosVDParticleDataWrapper *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)&this->_padding_ = 0;
  this->DirtyFlagsBits = 0;
  this->ParticleContext = Invalid;
  this->_padding_ = (longlong)&___7FChaosVDParticleDataWrapper__6B_;
  this->GeometryHash = 0;
  (this->ParticlePositionRotation)._padding_ = (longlong)&___7FChaosVDParticlePositionRotation__6B_;
  this->MetadataId = 0;
  this->ParticleIndex = -1;
  this->SolverID = -1;
  this->Type = Unknown;
  *(undefined1 *)&(this->ParticlePositionRotation)._padding_ = 0;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.X = 0.0;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Y = 0.0;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Z = 0.0;
  (this->ParticlePositionRotation).MR.X = 0.0;
  (this->ParticlePositionRotation).MR.Y = 0.0;
  (this->ParticlePositionRotation).MR.Z = 0.0;
  (this->ParticlePositionRotation).MR.W = 1.0;
  (this->ParticleVelocities)._padding_ = (longlong)&___7FChaosVDParticleVelocities__6B_;
  (this->ParticleInflatedBounds)._padding_ = (longlong)&___7FChaosVDParticleBounds__6B_;
  (this->ParticleKinematicTarget)._padding_ = (longlong)&___7FChaosVDKinematicTarget__6B_;
  *(undefined1 *)&(this->ParticleVelocities)._padding_ = 0;
  (this->ParticleVelocities).MV.field0_0x0._s_0.X = 0.0;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Y = 0.0;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Z = 0.0;
  (this->ParticleVelocities).MW.field0_0x0._s_0.X = 0.0;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Y = 0.0;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Z = 0.0;
  *(undefined1 *)&(this->ParticleInflatedBounds)._padding_ = 0;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.X = 0.0;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Y = 0.0;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Z = 0.0;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.X = 0.0;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Y = 0.0;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Z = 0.0;
  *(undefined1 *)&(this->ParticleKinematicTarget)._padding_ = 0;
  (this->ParticleKinematicTarget).Rotation.W = 1.0;
  (this->ParticleKinematicTarget).Rotation.X = 0.0;
  (this->ParticleKinematicTarget).Rotation.Y = 0.0;
  (this->ParticleKinematicTarget).Rotation.Z = 0.0;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.X = 0.0;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Y = 0.0;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Z = 0.0;
  (this->ParticleKinematicTarget).Mode = None;
  (this->ParticleVWSmooth)._padding_ = (longlong)&___7FChaosVDVSmooth__6B_;
  (this->ParticleDynamics)._padding_ = (longlong)&___7FChaosVDParticleDynamics__6B_;
  (this->ParticleDynamicsMisc)._padding_ = (longlong)&___7FChaosVDParticleDynamicMisc__6B_;
  *(undefined1 *)&(this->ParticleVWSmooth)._padding_ = 0;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.X = 0.0;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Y = 0.0;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Z = 0.0;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.X = 0.0;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Y = 0.0;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Z = 0.0;
  *(undefined1 *)&(this->ParticleDynamics)._padding_ = 0;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.X = 0.0;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y = 0.0;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z = 0.0;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X = 0.0;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y = 0.0;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z = 0.0;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X = 0.0;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y = 0.0;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z = 0.0;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X = 0.0;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y = 0.0;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z = 0.0;
  *(undefined1 *)&(this->ParticleDynamicsMisc)._padding_ = 0;
  (this->ParticleDynamicsMisc).MLinearEtherDrag = 0.0;
  (this->ParticleDynamicsMisc).MAngularEtherDrag = 0.0;
  (this->ParticleDynamicsMisc).MMaxLinearSpeedSq = 0.0;
  (this->ParticleDynamicsMisc).MMaxAngularSpeedSq = 0.0;
  (this->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity = 0.0;
  (this->ParticleDynamicsMisc).MSleepThresholdMultiplier = 1.0;
  (this->ParticleDynamicsMisc).MCollisionGroup = 0;
  (this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (longlong)&___7FChaosVDFRigidParticleControlFlags__6B_;
  (this->ParticleMassProps)._padding_ = (longlong)&___7FChaosVDParticleMassProps__6B_;
  (this->ParticleDynamicsMisc).MObjectState = Uninitialized;
  (this->ParticleDynamicsMisc).MSleepType = MaterialSleep;
  (this->ParticleDynamicsMisc).MCollisionConstraintFlag = 0;
  *(undefined1 *)&(this->ParticleDynamicsMisc).MControlFlags._padding_ = 0;
  (this->ParticleDynamicsMisc).MControlFlags.bGravityEnabled = false;
  (this->ParticleDynamicsMisc).MControlFlags.bCCDEnabled = false;
  (this->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled = false;
  (this->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled = false;
  (this->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex = 0;
  (this->ParticleDynamicsMisc).MControlFlags.bMACDEnabled = false;
  (this->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed = true;
  (this->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled = false;
  (this->ParticleDynamicsMisc).bDisabled = false;
  (this->ParticleDynamicsMisc).PositionSolverIterationCount = -1;
  (this->ParticleDynamicsMisc).VelocitySolverIterationCount = -1;
  (this->ParticleDynamicsMisc).ProjectionSolverIterationCount = -1;
  *(undefined1 *)&(this->ParticleMassProps)._padding_ = 0;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X = 0.0;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y = 0.0;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z = 0.0;
  (this->ParticleMassProps).MRotationOfMass.W = 1.0;
  (this->ParticleMassProps).MRotationOfMass.X = 0.0;
  (this->ParticleMassProps).MRotationOfMass.Y = 0.0;
  (this->ParticleMassProps).MRotationOfMass.Z = 0.0;
  (this->ParticleMassProps).MM = 0.0;
  (this->ParticleMassProps).MInvM = 0.0;
  (this->ParticleMassProps).MI.field0_0x0._s_0.X = 0.0;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Y = 0.0;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Z = 0.0;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.X = 0.0;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Y = 0.0;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Z = 0.0;
  (this->ParticleCluster)._padding_ = (longlong)&___7FChaosVDParticleCluster__6B_;
  *(undefined1 *)&(this->ParticleCluster)._padding_ = 0;
  (this->ParticleCluster).ParentParticleID = -1;
  (this->ParticleCluster).NumChildren = -1;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ParticleCluster).ClusterGroupIndex = -1;
  (this->ParticleCluster).bInternalCluster = false;
  (this->ParticleCluster).CollisionImpulse = 0.0;
  (this->ParticleCluster).ExternalStrains = 0.0;
  (this->ParticleCluster).InternalStrains = 0.0;
  (this->ParticleCluster).Strain = 0.0;
  (this->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleCluster).ConnectivityEdges.ArrayNum = 0;
  (this->ParticleCluster).ConnectivityEdges.ArrayMax = 0;
  (this->ParticleCluster).bIsAnchored = false;
  (this->ParticleCluster).bUnbreakable = false;
  (this->ParticleCluster).bIsChildToParentLocked = false;
  (this->CollisionDataPerShape).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionDataPerShape).ArrayNum = 0;
  (this->CollisionDataPerShape).ArrayMax = 0;
  (this->ParticleMetadataInstance).Object = (FChaosVDParticleMetadata *)0x0;
  (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FChaosVDParticleDataWrapper @ 1436d5830

void __thiscall
FChaosVDParticleDataWrapper::~FChaosVDParticleDataWrapper(FChaosVDParticleDataWrapper *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->CollisionDataPerShape).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1436d70e0

FChaosVDParticleDataWrapper * __thiscall
FChaosVDParticleDataWrapper::operator=
          (FChaosVDParticleDataWrapper *this,FChaosVDParticleDataWrapper *param_1)

{
  int *piVar1;
  TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar5;
  FChaosVDParticleMetadata *pFVar6;
  double dVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->DirtyFlagsBits = param_1->DirtyFlagsBits;
  this->ParticleContext = param_1->ParticleContext;
  this->GeometryHash = param_1->GeometryHash;
  this->MetadataId = param_1->MetadataId;
  this->ParticleIndex = param_1->ParticleIndex;
  this->SolverID = param_1->SolverID;
  this->Type = param_1->Type;
  *(char *)&(this->ParticlePositionRotation)._padding_ =
       (char)(param_1->ParticlePositionRotation)._padding_;
  dVar7 = (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.Y;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.X =
       (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.X;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Y = dVar7;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Z =
       (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticlePositionRotation).MR.Y;
  (this->ParticlePositionRotation).MR.X = (param_1->ParticlePositionRotation).MR.X;
  (this->ParticlePositionRotation).MR.Y = dVar7;
  dVar7 = (param_1->ParticlePositionRotation).MR.W;
  (this->ParticlePositionRotation).MR.Z = (param_1->ParticlePositionRotation).MR.Z;
  (this->ParticlePositionRotation).MR.W = dVar7;
  *(char *)&(this->ParticleVelocities)._padding_ = (char)(param_1->ParticleVelocities)._padding_;
  dVar7 = (param_1->ParticleVelocities).MV.field0_0x0._s_0.Y;
  (this->ParticleVelocities).MV.field0_0x0._s_0.X =
       (param_1->ParticleVelocities).MV.field0_0x0._s_0.X;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Z =
       (param_1->ParticleVelocities).MV.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleVelocities).MW.field0_0x0._s_0.Y;
  (this->ParticleVelocities).MW.field0_0x0._s_0.X =
       (param_1->ParticleVelocities).MW.field0_0x0._s_0.X;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Z =
       (param_1->ParticleVelocities).MW.field0_0x0._s_0.Z;
  *(char *)&(this->ParticleInflatedBounds)._padding_ =
       (char)(param_1->ParticleInflatedBounds)._padding_;
  dVar7 = (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.Y;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.X =
       (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.X;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Y = dVar7;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Z =
       (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.Y;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.X =
       (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.X;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Y = dVar7;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Z =
       (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.Z;
  *(char *)&(this->ParticleKinematicTarget)._padding_ =
       (char)(param_1->ParticleKinematicTarget)._padding_;
  dVar7 = (param_1->ParticleKinematicTarget).Rotation.Y;
  (this->ParticleKinematicTarget).Rotation.X = (param_1->ParticleKinematicTarget).Rotation.X;
  (this->ParticleKinematicTarget).Rotation.Y = dVar7;
  dVar7 = (param_1->ParticleKinematicTarget).Rotation.W;
  (this->ParticleKinematicTarget).Rotation.Z = (param_1->ParticleKinematicTarget).Rotation.Z;
  (this->ParticleKinematicTarget).Rotation.W = dVar7;
  dVar7 = (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.Y;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.X =
       (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.X;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Y = dVar7;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Z =
       (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.Z;
  (this->ParticleKinematicTarget).Mode = (param_1->ParticleKinematicTarget).Mode;
  *(char *)&(this->ParticleVWSmooth)._padding_ = (char)(param_1->ParticleVWSmooth)._padding_;
  dVar7 = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Z;
  *(char *)&(this->ParticleDynamics)._padding_ = (char)(param_1->ParticleDynamics)._padding_;
  dVar7 = (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y = dVar7;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y = dVar7;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y = dVar7;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y = dVar7;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z;
  FChaosVDParticleDynamicMisc::operator=(&this->ParticleDynamicsMisc,&param_1->ParticleDynamicsMisc)
  ;
  *(char *)&(this->ParticleMassProps)._padding_ = (char)(param_1->ParticleMassProps)._padding_;
  dVar7 = (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X =
       (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y = dVar7;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z =
       (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleMassProps).MRotationOfMass.Y;
  (this->ParticleMassProps).MRotationOfMass.X = (param_1->ParticleMassProps).MRotationOfMass.X;
  (this->ParticleMassProps).MRotationOfMass.Y = dVar7;
  dVar7 = (param_1->ParticleMassProps).MRotationOfMass.W;
  (this->ParticleMassProps).MRotationOfMass.Z = (param_1->ParticleMassProps).MRotationOfMass.Z;
  (this->ParticleMassProps).MRotationOfMass.W = dVar7;
  dVar7 = (param_1->ParticleMassProps).MI.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MI.field0_0x0._s_0.X = (param_1->ParticleMassProps).MI.field0_0x0._s_0.X
  ;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Y = dVar7;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Z = (param_1->ParticleMassProps).MI.field0_0x0._s_0.Z
  ;
  dVar7 = (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.X =
       (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.X;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Y = dVar7;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Z =
       (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.Z;
  (this->ParticleMassProps).MM = (param_1->ParticleMassProps).MM;
  (this->ParticleMassProps).MInvM = (param_1->ParticleMassProps).MInvM;
  FChaosVDParticleCluster::operator=(&this->ParticleCluster,&param_1->ParticleCluster);
  pTVar2 = &this->CollisionDataPerShape;
  if (pTVar2 != &param_1->CollisionDataPerShape) {
    iVar3 = (this->CollisionDataPerShape).ArrayMax;
    piVar1 = &(this->CollisionDataPerShape).ArrayMax;
    iVar4 = (param_1->CollisionDataPerShape).ArrayNum;
    _Src = (param_1->CollisionDataPerShape).AllocatorInstance.Data;
    (this->CollisionDataPerShape).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x2c,4,iVar4,iVar3,&pTVar2->AllocatorInstance,iVar4,piVar1);
      if (iVar4 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar4 * 0x2c);
      }
    }
  }
  pTVar5 = (param_1->ParticleMetadataInstance).SharedReferenceCount.ReferenceController;
  pFVar6 = (param_1->ParticleMetadataInstance).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar8 = (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController;
  (this->ParticleMetadataInstance).Object = pFVar6;
  (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// GetDebugName @ 1436d94b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FChaosVDParticleDataWrapper::GetDebugName
          (FChaosVDParticleDataWrapper *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  FChaosVDParticleMetadata *this_00;
  ForAnyElementType FVar2;
  int iVar3;
  undefined1 auStackY_8c8 [32];
  FString local_888;
  FString local_878;
  FString local_868;
  FString local_858;
  TStringBuilderBase<wchar_t> local_848;
  wchar_t local_828 [1024];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_8c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(&DefaultDebugName,L"UnnamedParticle");
    atexit(`FChaosVDParticleDataWrapper::GetDebugName'::__l2::
           _dynamic_atexit_destructor_for__DefaultDebugName__);
    _Init_thread_footer(&::_TSS0);
  }
  this_00 = (this->ParticleMetadataInstance).Object;
  if (this_00 == (FChaosVDParticleMetadata *)0x0) {
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar2 = DefaultDebugName.Data.AllocatorInstance;
    iVar3 = DefaultDebugName.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar3;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar3,0,(ForAnyElementType *)__return_storage_ptr__,iVar3,piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar2.Data,(longlong)iVar3 * 2);
    }
  }
  else {
    local_848.Base = local_828;
    local_848.CurPos = local_828;
    local_848.bIsDynamic = false;
    local_848.bIsExternal = false;
    local_848.End = (wchar_t *)local_28;
    ::FName::ToString(&this_00->ComponentName,&local_868);
    ::FName::ToString(&this_00->OwnerName,&local_878);
    TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"%s | %s ");
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    if (this_00->BoneName != (FName)0x0) {
      ::FName::ToString(&this_00->BoneName,&local_858);
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"| Bone Name: %s ");
      if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_858.Data.AllocatorInstance.Data);
      }
    }
    if (this_00->Index != -1) {
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_848,L"| Index: %d ");
    }
    if (local_848.End < local_848.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_848,1);
    }
    *local_848.CurPos = L'\0';
    ::FString::FString(&local_888,local_848.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_848);
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_888.Data.ArrayNum != 0) {
      FVar2.Data = local_888.Data.AllocatorInstance.Data;
    }
    ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
    if (local_888.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_888.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetMetadataInstance @ 1436d9760

TSharedPtr<FChaosVDParticleMetadata,1> * __thiscall
FChaosVDParticleDataWrapper::GetMetadataInstance(FChaosVDParticleDataWrapper *this)

{
  return &this->ParticleMetadataInstance;
}

// HasLegacyDebugName @ 1436d9ca0

bool __thiscall FChaosVDParticleDataWrapper::HasLegacyDebugName(FChaosVDParticleDataWrapper *this)

{
  return false;
}

// Serialize @ 1436df290

bool __thiscall
FChaosVDParticleDataWrapper::Serialize(FChaosVDParticleDataWrapper *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  EChaosVDParticleContext *pEVar3;
  EChaosVDKinematicTargetMode *pEVar4;
  EChaosVDParticleType *pEVar5;
  uint *puVar6;
  int *piVar7;
  EChaosVDParticleContext *pEVar8;
  EChaosVDKinematicTargetMode *pEVar9;
  int iVar10;
  undefined1 *puVar11;
  bool local_res8 [8];
  FString local_18;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  ::operator<<(param_1,(bool *)&this->_padding_);
  if ((char)this->_padding_ != '\0') {
    pEVar5 = (EChaosVDParticleType *)**(undefined8 **)&param_1->field_0x8;
    if ((EChaosVDParticleType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar5 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
    }
    else {
      this->Type = *pEVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    puVar1 = &this->GeometryHash;
    puVar6 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    iVar10 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar10 < 0xdc) {
      ::operator<<(param_1,local_res8);
      if ((local_res8[0] != false) && ((param_1->field_0x28 & 1) != 0)) {
        local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_18.Data.ArrayNum = 0;
        local_18.Data.ArrayMax = 0;
        ::operator<<(param_1,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      ::operator<<(param_1,&this->MetadataId);
    }
    puVar11 = &param_1->field_0x2a;
    piVar2 = &this->ParticleIndex;
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((*puVar11 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    piVar2 = &this->SolverID;
    piVar7 = (int *)**(undefined8 **)&param_1->field_0x8;
    if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar7 + 1) {
      if ((*puVar11 & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
      }
    }
    else {
      *piVar2 = *piVar7;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    ::operator<<(param_1,(bool *)&(this->ParticlePositionRotation)._padding_);
    if ((char)(this->ParticlePositionRotation)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->ParticlePositionRotation).MX);
      UE::Math::operator<<(param_1,&(this->ParticlePositionRotation).MR);
    }
    ::operator<<(param_1,(bool *)&(this->ParticleVelocities)._padding_);
    if ((char)(this->ParticleVelocities)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->ParticleVelocities).MV);
      UE::Math::operator<<(param_1,&(this->ParticleVelocities).MW);
    }
    iVar10 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if ((0xcb < iVar10) &&
       (::operator<<(param_1,(bool *)&(this->ParticleInflatedBounds)._padding_),
       (char)(this->ParticleInflatedBounds)._padding_ != '\0')) {
      UE::Math::operator<<(param_1,&(this->ParticleInflatedBounds).MMin);
      UE::Math::operator<<(param_1,&(this->ParticleInflatedBounds).MMax);
    }
    ::operator<<(param_1,(bool *)&(this->ParticleDynamics)._padding_);
    if ((char)(this->ParticleDynamics)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->ParticleDynamics).MAcceleration);
      UE::Math::operator<<(param_1,&(this->ParticleDynamics).MAngularAcceleration);
      UE::Math::operator<<(param_1,&(this->ParticleDynamics).MAngularImpulseVelocity);
      UE::Math::operator<<(param_1,&(this->ParticleDynamics).MLinearImpulseVelocity);
    }
    FChaosVDParticleDynamicMisc::Serialize(&this->ParticleDynamicsMisc,param_1);
    ::operator<<(param_1,(bool *)&(this->ParticleMassProps)._padding_);
    if ((char)(this->ParticleMassProps)._padding_ != '\0') {
      UE::Math::operator<<(param_1,&(this->ParticleMassProps).MCenterOfMass);
      UE::Math::operator<<(param_1,&(this->ParticleMassProps).MRotationOfMass);
      UE::Math::operator<<(param_1,&(this->ParticleMassProps).MI);
      UE::Math::operator<<(param_1,&(this->ParticleMassProps).MInvI);
      ::operator<<(param_1,&(this->ParticleMassProps).MM);
      ::operator<<(param_1,&(this->ParticleMassProps).MInvM);
    }
    TArrayPrivateFriend::Serialize<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_>
              (param_1,&this->CollisionDataPerShape);
    FChaosVDParticleCluster::Serialize(&this->ParticleCluster,param_1);
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
    iVar10 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (199 < iVar10) {
      pEVar3 = &this->ParticleContext;
      pEVar8 = (EChaosVDParticleContext *)**(undefined8 **)&param_1->field_0x8;
      if ((EChaosVDParticleContext *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar8 + 1) {
        if ((*puVar11 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar3,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,pEVar3);
        }
      }
      else {
        *pEVar3 = *pEVar8;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      ::operator<<(param_1,(bool *)&(this->ParticleKinematicTarget)._padding_);
      if ((char)(this->ParticleKinematicTarget)._padding_ != '\0') {
        UE::Math::operator<<(param_1,&(this->ParticleKinematicTarget).Rotation);
        UE::Math::operator<<(param_1,&(this->ParticleKinematicTarget).Position);
        pEVar4 = &(this->ParticleKinematicTarget).Mode;
        pEVar9 = (EChaosVDKinematicTargetMode *)**(undefined8 **)&param_1->field_0x8;
        if ((EChaosVDKinematicTargetMode *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar9 + 1) {
          if ((*puVar11 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar4,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,pEVar4);
          }
        }
        else {
          *pEVar4 = *pEVar9;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
        }
      }
      ::operator<<(param_1,(bool *)&(this->ParticleVWSmooth)._padding_);
      if ((char)(this->ParticleVWSmooth)._padding_ != '\0') {
        UE::Math::operator<<(param_1,&(this->ParticleVWSmooth).MV);
        UE::Math::operator<<(param_1,&(this->ParticleVWSmooth).MW);
      }
    }
  }
  return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
}

// SetMetadataInstance @ 1436e0a00

void __thiscall
FChaosVDParticleDataWrapper::SetMetadataInstance
          (FChaosVDParticleDataWrapper *this,TSharedPtr<FChaosVDParticleMetadata,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosVDParticleMetadata *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((param_1->Object != (FChaosVDParticleMetadata *)0x0) &&
     (this->MetadataId != param_1->Object->MetadataID)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MetadataId == InMetadata->MetadataID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosVisualDebugger\\Private\\DataWrappers\\ChaosVDParticleDataWrapper.cpp"
                       ,299,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController;
  (this->ParticleMetadataInstance).Object = pFVar2;
  (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

