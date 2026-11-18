// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FChaosVDParticleDataWrapper @ 1436f6650

/* WARNING: Type propagation algorithm not settling */

FChaosVDParticleDataWrapper * __thiscall
FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper
          (FChaosVDParticleDataWrapper *this,FChaosVDParticleDataWrapper *param_1)

{
  float fVar1;
  double dVar2;
  
  this->_padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FChaosVDParticleDataWrapper__6B_;
  this->DirtyFlagsBits = param_1->DirtyFlagsBits;
  this->ParticleContext = param_1->ParticleContext;
  this->GeometryHash = param_1->GeometryHash;
  this->MetadataId = param_1->MetadataId;
  this->ParticleIndex = param_1->ParticleIndex;
  this->SolverID = param_1->SolverID;
  this->Type = param_1->Type;
  (this->ParticlePositionRotation)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticlePositionRotation)._padding_ =
       (char)(param_1->ParticlePositionRotation)._padding_;
  (this->ParticlePositionRotation)._padding_ = (longlong)&___7FChaosVDParticlePositionRotation__6B_;
  dVar2 = (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.Y;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.X =
       (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.X;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Y = dVar2;
  (this->ParticlePositionRotation).MX.field0_0x0._s_0.Z =
       (param_1->ParticlePositionRotation).MX.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticlePositionRotation).MR.Y;
  (this->ParticlePositionRotation).MR.X = (param_1->ParticlePositionRotation).MR.X;
  (this->ParticlePositionRotation).MR.Y = dVar2;
  dVar2 = (param_1->ParticlePositionRotation).MR.W;
  (this->ParticlePositionRotation).MR.Z = (param_1->ParticlePositionRotation).MR.Z;
  (this->ParticlePositionRotation).MR.W = dVar2;
  (this->ParticleVelocities)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleVelocities)._padding_ = (char)(param_1->ParticleVelocities)._padding_;
  (this->ParticleVelocities)._padding_ = (longlong)&___7FChaosVDParticleVelocities__6B_;
  dVar2 = (param_1->ParticleVelocities).MV.field0_0x0._s_0.Y;
  (this->ParticleVelocities).MV.field0_0x0._s_0.X =
       (param_1->ParticleVelocities).MV.field0_0x0._s_0.X;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Y = dVar2;
  (this->ParticleVelocities).MV.field0_0x0._s_0.Z =
       (param_1->ParticleVelocities).MV.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleVelocities).MW.field0_0x0._s_0.Y;
  (this->ParticleVelocities).MW.field0_0x0._s_0.X =
       (param_1->ParticleVelocities).MW.field0_0x0._s_0.X;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Y = dVar2;
  (this->ParticleVelocities).MW.field0_0x0._s_0.Z =
       (param_1->ParticleVelocities).MW.field0_0x0._s_0.Z;
  (this->ParticleInflatedBounds)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleInflatedBounds)._padding_ =
       (char)(param_1->ParticleInflatedBounds)._padding_;
  (this->ParticleInflatedBounds)._padding_ = (longlong)&___7FChaosVDParticleBounds__6B_;
  dVar2 = (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.Y;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.X =
       (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.X;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Y = dVar2;
  (this->ParticleInflatedBounds).MMin.field0_0x0._s_0.Z =
       (param_1->ParticleInflatedBounds).MMin.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.Y;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.X =
       (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.X;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Y = dVar2;
  (this->ParticleInflatedBounds).MMax.field0_0x0._s_0.Z =
       (param_1->ParticleInflatedBounds).MMax.field0_0x0._s_0.Z;
  (this->ParticleKinematicTarget)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleKinematicTarget)._padding_ =
       (char)(param_1->ParticleKinematicTarget)._padding_;
  (this->ParticleKinematicTarget)._padding_ = (longlong)&___7FChaosVDKinematicTarget__6B_;
  dVar2 = (param_1->ParticleKinematicTarget).Rotation.Y;
  (this->ParticleKinematicTarget).Rotation.X = (param_1->ParticleKinematicTarget).Rotation.X;
  (this->ParticleKinematicTarget).Rotation.Y = dVar2;
  dVar2 = (param_1->ParticleKinematicTarget).Rotation.W;
  (this->ParticleKinematicTarget).Rotation.Z = (param_1->ParticleKinematicTarget).Rotation.Z;
  (this->ParticleKinematicTarget).Rotation.W = dVar2;
  dVar2 = (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.Y;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.X =
       (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.X;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Y = dVar2;
  (this->ParticleKinematicTarget).Position.field0_0x0._s_0.Z =
       (param_1->ParticleKinematicTarget).Position.field0_0x0._s_0.Z;
  (this->ParticleKinematicTarget).Mode = (param_1->ParticleKinematicTarget).Mode;
  (this->ParticleVWSmooth)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleVWSmooth)._padding_ = (char)(param_1->ParticleVWSmooth)._padding_;
  (this->ParticleVWSmooth)._padding_ = (longlong)&___7FChaosVDVSmooth__6B_;
  dVar2 = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Y = dVar2;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Y = dVar2;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Z;
  (this->ParticleDynamics)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleDynamics)._padding_ = (char)(param_1->ParticleDynamics)._padding_;
  (this->ParticleDynamics)._padding_ = (longlong)&___7FChaosVDParticleDynamics__6B_;
  dVar2 = (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Y = dVar2;
  (this->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAcceleration.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Y = dVar2;
  (this->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAngularAcceleration.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.X;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Y = dVar2;
  (this->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MLinearImpulseVelocity.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X =
       (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.X;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Y = dVar2;
  (this->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z =
       (param_1->ParticleDynamics).MAngularImpulseVelocity.field0_0x0._s_0.Z;
  (this->ParticleDynamicsMisc)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleDynamicsMisc)._padding_ = (char)(param_1->ParticleDynamicsMisc)._padding_
  ;
  (this->ParticleDynamicsMisc)._padding_ = (longlong)&___7FChaosVDParticleDynamicMisc__6B_;
  (this->ParticleDynamicsMisc).MLinearEtherDrag = (param_1->ParticleDynamicsMisc).MLinearEtherDrag;
  (this->ParticleDynamicsMisc).MAngularEtherDrag = (param_1->ParticleDynamicsMisc).MAngularEtherDrag
  ;
  (this->ParticleDynamicsMisc).MMaxLinearSpeedSq = (param_1->ParticleDynamicsMisc).MMaxLinearSpeedSq
  ;
  (this->ParticleDynamicsMisc).MMaxAngularSpeedSq =
       (param_1->ParticleDynamicsMisc).MMaxAngularSpeedSq;
  (this->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity =
       (param_1->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity;
  (this->ParticleDynamicsMisc).MSleepThresholdMultiplier =
       (param_1->ParticleDynamicsMisc).MSleepThresholdMultiplier;
  (this->ParticleDynamicsMisc).MCollisionGroup = (param_1->ParticleDynamicsMisc).MCollisionGroup;
  (this->ParticleDynamicsMisc).MObjectState = (param_1->ParticleDynamicsMisc).MObjectState;
  (this->ParticleDynamicsMisc).MSleepType = (param_1->ParticleDynamicsMisc).MSleepType;
  (this->ParticleDynamicsMisc).MCollisionConstraintFlag =
       (param_1->ParticleDynamicsMisc).MCollisionConstraintFlag;
  (this->ParticleDynamicsMisc).MControlFlags._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_
  ;
  *(char *)&(this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (char)(param_1->ParticleDynamicsMisc).MControlFlags._padding_;
  (this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (longlong)&___7FChaosVDFRigidParticleControlFlags__6B_;
  (this->ParticleDynamicsMisc).MControlFlags.bGravityEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGravityEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bCCDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bCCDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex =
       (param_1->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex;
  (this->ParticleDynamicsMisc).MControlFlags.bMACDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bMACDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed =
       (param_1->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed;
  (this->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled;
  (this->ParticleDynamicsMisc).bDisabled = (param_1->ParticleDynamicsMisc).bDisabled;
  (this->ParticleDynamicsMisc).PositionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).PositionSolverIterationCount;
  (this->ParticleDynamicsMisc).VelocitySolverIterationCount =
       (param_1->ParticleDynamicsMisc).VelocitySolverIterationCount;
  (this->ParticleDynamicsMisc).ProjectionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).ProjectionSolverIterationCount;
  (this->ParticleMassProps)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleMassProps)._padding_ = (char)(param_1->ParticleMassProps)._padding_;
  (this->ParticleMassProps)._padding_ = (longlong)&___7FChaosVDParticleMassProps__6B_;
  dVar2 = (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X =
       (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.X;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Y = dVar2;
  (this->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z =
       (param_1->ParticleMassProps).MCenterOfMass.field0_0x0._s_0.Z;
  dVar2 = (param_1->ParticleMassProps).MRotationOfMass.Y;
  (this->ParticleMassProps).MRotationOfMass.X = (param_1->ParticleMassProps).MRotationOfMass.X;
  (this->ParticleMassProps).MRotationOfMass.Y = dVar2;
  dVar2 = (param_1->ParticleMassProps).MRotationOfMass.W;
  (this->ParticleMassProps).MRotationOfMass.Z = (param_1->ParticleMassProps).MRotationOfMass.Z;
  (this->ParticleMassProps).MRotationOfMass.W = dVar2;
  dVar2 = (param_1->ParticleMassProps).MI.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MI.field0_0x0._s_0.X = (param_1->ParticleMassProps).MI.field0_0x0._s_0.X
  ;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Y = dVar2;
  (this->ParticleMassProps).MI.field0_0x0._s_0.Z = (param_1->ParticleMassProps).MI.field0_0x0._s_0.Z
  ;
  dVar2 = (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.Y;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.X =
       (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.X;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Y = dVar2;
  (this->ParticleMassProps).MInvI.field0_0x0._s_0.Z =
       (param_1->ParticleMassProps).MInvI.field0_0x0._s_0.Z;
  (this->ParticleMassProps).MM = (param_1->ParticleMassProps).MM;
  (this->ParticleMassProps).MInvM = (param_1->ParticleMassProps).MInvM;
  (this->ParticleCluster)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleCluster)._padding_ = (char)(param_1->ParticleCluster)._padding_;
  (this->ParticleCluster)._padding_ = (longlong)&___7FChaosVDParticleCluster__6B_;
  (this->ParticleCluster).ParentParticleID = (param_1->ParticleCluster).ParentParticleID;
  (this->ParticleCluster).NumChildren = (param_1->ParticleCluster).NumChildren;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1] = dVar2;
  (this->ParticleCluster).ClusterGroupIndex = (param_1->ParticleCluster).ClusterGroupIndex;
  (this->ParticleCluster).bInternalCluster = (param_1->ParticleCluster).bInternalCluster;
  (this->ParticleCluster).CollisionImpulse = (param_1->ParticleCluster).CollisionImpulse;
  (this->ParticleCluster).ExternalStrains = (param_1->ParticleCluster).ExternalStrains;
  (this->ParticleCluster).InternalStrains = (param_1->ParticleCluster).InternalStrains;
  fVar1 = (param_1->ParticleCluster).Strain;
  (this->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticleCluster).Strain = fVar1;
  (this->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data =
       (param_1->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data;
  (param_1->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ParticleCluster).ConnectivityEdges.ArrayNum =
       (param_1->ParticleCluster).ConnectivityEdges.ArrayNum;
  (this->ParticleCluster).ConnectivityEdges.ArrayMax =
       (param_1->ParticleCluster).ConnectivityEdges.ArrayMax;
  (param_1->ParticleCluster).ConnectivityEdges.ArrayNum = 0;
  (param_1->ParticleCluster).ConnectivityEdges.ArrayMax = 0;
  (this->ParticleCluster).bIsAnchored = (param_1->ParticleCluster).bIsAnchored;
  (this->ParticleCluster).bUnbreakable = (param_1->ParticleCluster).bUnbreakable;
  (this->ParticleCluster).bIsChildToParentLocked = (param_1->ParticleCluster).bIsChildToParentLocked
  ;
  (this->CollisionDataPerShape).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionDataPerShape).AllocatorInstance.Data =
       (param_1->CollisionDataPerShape).AllocatorInstance.Data;
  (param_1->CollisionDataPerShape).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionDataPerShape).ArrayNum = (param_1->CollisionDataPerShape).ArrayNum;
  (this->CollisionDataPerShape).ArrayMax = (param_1->CollisionDataPerShape).ArrayMax;
  (param_1->CollisionDataPerShape).ArrayNum = 0;
  (param_1->CollisionDataPerShape).ArrayMax = 0;
  (this->ParticleMetadataInstance).Object = (param_1->ParticleMetadataInstance).Object;
  (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController =
       (param_1->ParticleMetadataInstance).SharedReferenceCount.ReferenceController;
  (param_1->ParticleMetadataInstance).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ParticleMetadataInstance).Object = (FChaosVDParticleMetadata *)0x0;
  return this;
}

// FChaosVDParticleDataWrapper @ 143dfadc0

/* WARNING: Type propagation algorithm not settling */

FChaosVDParticleDataWrapper * __thiscall
FChaosVDParticleDataWrapper::FChaosVDParticleDataWrapper
          (FChaosVDParticleDataWrapper *this,FChaosVDParticleDataWrapper *param_1)

{
  int *piVar1;
  TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  
  this->_padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->_padding_ = (longlong)&___7FChaosVDParticleDataWrapper__6B_;
  this->DirtyFlagsBits = param_1->DirtyFlagsBits;
  this->ParticleContext = param_1->ParticleContext;
  this->GeometryHash = param_1->GeometryHash;
  this->MetadataId = param_1->MetadataId;
  this->ParticleIndex = param_1->ParticleIndex;
  this->SolverID = param_1->SolverID;
  this->Type = param_1->Type;
  (this->ParticlePositionRotation)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticlePositionRotation)._padding_ =
       (char)(param_1->ParticlePositionRotation)._padding_;
  (this->ParticlePositionRotation)._padding_ = (longlong)&___7FChaosVDParticlePositionRotation__6B_;
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
  (this->ParticleVelocities)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleVelocities)._padding_ = (char)(param_1->ParticleVelocities)._padding_;
  (this->ParticleVelocities)._padding_ = (longlong)&___7FChaosVDParticleVelocities__6B_;
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
  (this->ParticleInflatedBounds)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleInflatedBounds)._padding_ =
       (char)(param_1->ParticleInflatedBounds)._padding_;
  (this->ParticleInflatedBounds)._padding_ = (longlong)&___7FChaosVDParticleBounds__6B_;
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
  (this->ParticleKinematicTarget)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleKinematicTarget)._padding_ =
       (char)(param_1->ParticleKinematicTarget)._padding_;
  (this->ParticleKinematicTarget)._padding_ = (longlong)&___7FChaosVDKinematicTarget__6B_;
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
  (this->ParticleVWSmooth)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleVWSmooth)._padding_ = (char)(param_1->ParticleVWSmooth)._padding_;
  (this->ParticleVWSmooth)._padding_ = (longlong)&___7FChaosVDVSmooth__6B_;
  dVar7 = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVWSmooth).MV.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MV.field0_0x0._s_0.Z;
  dVar7 = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Y;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.X = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.X;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Y = dVar7;
  (this->ParticleVWSmooth).MW.field0_0x0._s_0.Z = (param_1->ParticleVWSmooth).MW.field0_0x0._s_0.Z;
  (this->ParticleDynamics)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleDynamics)._padding_ = (char)(param_1->ParticleDynamics)._padding_;
  (this->ParticleDynamics)._padding_ = (longlong)&___7FChaosVDParticleDynamics__6B_;
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
  (this->ParticleDynamicsMisc)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleDynamicsMisc)._padding_ = (char)(param_1->ParticleDynamicsMisc)._padding_
  ;
  (this->ParticleDynamicsMisc)._padding_ = (longlong)&___7FChaosVDParticleDynamicMisc__6B_;
  (this->ParticleDynamicsMisc).MLinearEtherDrag = (param_1->ParticleDynamicsMisc).MLinearEtherDrag;
  (this->ParticleDynamicsMisc).MAngularEtherDrag = (param_1->ParticleDynamicsMisc).MAngularEtherDrag
  ;
  (this->ParticleDynamicsMisc).MMaxLinearSpeedSq = (param_1->ParticleDynamicsMisc).MMaxLinearSpeedSq
  ;
  (this->ParticleDynamicsMisc).MMaxAngularSpeedSq =
       (param_1->ParticleDynamicsMisc).MMaxAngularSpeedSq;
  (this->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity =
       (param_1->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity;
  (this->ParticleDynamicsMisc).MSleepThresholdMultiplier =
       (param_1->ParticleDynamicsMisc).MSleepThresholdMultiplier;
  (this->ParticleDynamicsMisc).MCollisionGroup = (param_1->ParticleDynamicsMisc).MCollisionGroup;
  (this->ParticleDynamicsMisc).MObjectState = (param_1->ParticleDynamicsMisc).MObjectState;
  (this->ParticleDynamicsMisc).MSleepType = (param_1->ParticleDynamicsMisc).MSleepType;
  (this->ParticleDynamicsMisc).MCollisionConstraintFlag =
       (param_1->ParticleDynamicsMisc).MCollisionConstraintFlag;
  (this->ParticleDynamicsMisc).MControlFlags._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_
  ;
  *(char *)&(this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (char)(param_1->ParticleDynamicsMisc).MControlFlags._padding_;
  (this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (longlong)&___7FChaosVDFRigidParticleControlFlags__6B_;
  (this->ParticleDynamicsMisc).MControlFlags.bGravityEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGravityEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bCCDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bCCDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex =
       (param_1->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex;
  (this->ParticleDynamicsMisc).MControlFlags.bMACDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bMACDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed =
       (param_1->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed;
  (this->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled;
  (this->ParticleDynamicsMisc).bDisabled = (param_1->ParticleDynamicsMisc).bDisabled;
  (this->ParticleDynamicsMisc).PositionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).PositionSolverIterationCount;
  (this->ParticleDynamicsMisc).VelocitySolverIterationCount =
       (param_1->ParticleDynamicsMisc).VelocitySolverIterationCount;
  pTVar2 = &(this->ParticleCluster).ConnectivityEdges;
  (this->ParticleDynamicsMisc).ProjectionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).ProjectionSolverIterationCount;
  (this->ParticleMassProps)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleMassProps)._padding_ = (char)(param_1->ParticleMassProps)._padding_;
  (this->ParticleMassProps)._padding_ = (longlong)&___7FChaosVDParticleMassProps__6B_;
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
  (this->ParticleCluster)._padding_ = (longlong)&___7FChaosVDWrapperDataBase__6B_;
  *(char *)&(this->ParticleCluster)._padding_ = (char)(param_1->ParticleCluster)._padding_;
  (this->ParticleCluster)._padding_ = (longlong)&___7FChaosVDParticleCluster__6B_;
  (this->ParticleCluster).ParentParticleID = (param_1->ParticleCluster).ParentParticleID;
  (this->ParticleCluster).NumChildren = (param_1->ParticleCluster).NumChildren;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1] = dVar7;
  (this->ParticleCluster).ClusterGroupIndex = (param_1->ParticleCluster).ClusterGroupIndex;
  (this->ParticleCluster).bInternalCluster = (param_1->ParticleCluster).bInternalCluster;
  (this->ParticleCluster).CollisionImpulse = (param_1->ParticleCluster).CollisionImpulse;
  (this->ParticleCluster).ExternalStrains = (param_1->ParticleCluster).ExternalStrains;
  (this->ParticleCluster).InternalStrains = (param_1->ParticleCluster).InternalStrains;
  (this->ParticleCluster).Strain = (param_1->ParticleCluster).Strain;
  piVar1 = &(this->ParticleCluster).ConnectivityEdges.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->ParticleCluster).ConnectivityEdges.ArrayNum;
  pFVar5 = (param_1->ParticleCluster).ConnectivityEdges.AllocatorInstance.Data;
  (this->ParticleCluster).ConnectivityEdges.ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&pTVar2->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 3);
  }
  pTVar3 = &this->CollisionDataPerShape;
  (this->ParticleCluster).bIsAnchored = (param_1->ParticleCluster).bIsAnchored;
  (this->ParticleCluster).bUnbreakable = (param_1->ParticleCluster).bUnbreakable;
  (this->ParticleCluster).bIsChildToParentLocked = (param_1->ParticleCluster).bIsChildToParentLocked
  ;
  piVar1 = &(this->CollisionDataPerShape).ArrayMax;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar4 = (param_1->CollisionDataPerShape).ArrayNum;
  pFVar5 = (param_1->CollisionDataPerShape).AllocatorInstance.Data;
  (this->CollisionDataPerShape).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x2c,4,iVar4,0,&pTVar3->AllocatorInstance,iVar4,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0x2c);
  }
  (this->ParticleMetadataInstance).Object = (param_1->ParticleMetadataInstance).Object;
  pTVar6 = (param_1->ParticleMetadataInstance).SharedReferenceCount.ReferenceController;
  (this->ParticleMetadataInstance).SharedReferenceCount.ReferenceController = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator= @ 143dff4d0

/* WARNING: Type propagation algorithm not settling */

FChaosVDParticleDataWrapper * __thiscall
FChaosVDParticleDataWrapper::operator=
          (FChaosVDParticleDataWrapper *this,FChaosVDParticleDataWrapper *param_1)

{
  TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FChaosVDConnectivityEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FChaosVDShapeCollisionData,TSizedDefaultAllocator<32>_> *pTVar4;
  TSharedPtr<FChaosVDParticleMetadata,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
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
  *(char *)&(this->ParticleDynamicsMisc)._padding_ = (char)(param_1->ParticleDynamicsMisc)._padding_
  ;
  (this->ParticleDynamicsMisc).MLinearEtherDrag = (param_1->ParticleDynamicsMisc).MLinearEtherDrag;
  (this->ParticleDynamicsMisc).MAngularEtherDrag = (param_1->ParticleDynamicsMisc).MAngularEtherDrag
  ;
  (this->ParticleDynamicsMisc).MMaxLinearSpeedSq = (param_1->ParticleDynamicsMisc).MMaxLinearSpeedSq
  ;
  (this->ParticleDynamicsMisc).MMaxAngularSpeedSq =
       (param_1->ParticleDynamicsMisc).MMaxAngularSpeedSq;
  (this->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity =
       (param_1->ParticleDynamicsMisc).MInitialOverlapDepenetrationVelocity;
  (this->ParticleDynamicsMisc).MSleepThresholdMultiplier =
       (param_1->ParticleDynamicsMisc).MSleepThresholdMultiplier;
  (this->ParticleDynamicsMisc).MCollisionGroup = (param_1->ParticleDynamicsMisc).MCollisionGroup;
  (this->ParticleDynamicsMisc).MObjectState = (param_1->ParticleDynamicsMisc).MObjectState;
  (this->ParticleDynamicsMisc).MSleepType = (param_1->ParticleDynamicsMisc).MSleepType;
  (this->ParticleDynamicsMisc).MCollisionConstraintFlag =
       (param_1->ParticleDynamicsMisc).MCollisionConstraintFlag;
  *(char *)&(this->ParticleDynamicsMisc).MControlFlags._padding_ =
       (char)(param_1->ParticleDynamicsMisc).MControlFlags._padding_;
  (this->ParticleDynamicsMisc).MControlFlags.bGravityEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGravityEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bCCDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bCCDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bOneWayInteractionEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bInertiaConditioningEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex =
       (param_1->ParticleDynamicsMisc).MControlFlags.GravityGroupIndex;
  (this->ParticleDynamicsMisc).MControlFlags.bMACDEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bMACDEnabled;
  (this->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed =
       (param_1->ParticleDynamicsMisc).MControlFlags.bPartialIslandSleepAllowed;
  (this->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled =
       (param_1->ParticleDynamicsMisc).MControlFlags.bGyroscopicTorqueEnabled;
  (this->ParticleDynamicsMisc).bDisabled = (param_1->ParticleDynamicsMisc).bDisabled;
  (this->ParticleDynamicsMisc).PositionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).PositionSolverIterationCount;
  (this->ParticleDynamicsMisc).VelocitySolverIterationCount =
       (param_1->ParticleDynamicsMisc).VelocitySolverIterationCount;
  (this->ParticleDynamicsMisc).ProjectionSolverIterationCount =
       (param_1->ParticleDynamicsMisc).ProjectionSolverIterationCount;
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
  *(char *)&(this->ParticleCluster)._padding_ = (char)(param_1->ParticleCluster)._padding_;
  (this->ParticleCluster).ParentParticleID = (param_1->ParticleCluster).ParentParticleID;
  pTVar1 = &(param_1->ParticleCluster).ConnectivityEdges;
  (this->ParticleCluster).NumChildren = (param_1->ParticleCluster).NumChildren;
  pTVar2 = &(this->ParticleCluster).ConnectivityEdges;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0] =
       (param_1->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[0];
  (this->ParticleCluster).ChildToParent.Scale3D.ZW.m128d_f64[1] = dVar7;
  (this->ParticleCluster).ClusterGroupIndex = (param_1->ParticleCluster).ClusterGroupIndex;
  (this->ParticleCluster).bInternalCluster = (param_1->ParticleCluster).bInternalCluster;
  (this->ParticleCluster).CollisionImpulse = (param_1->ParticleCluster).CollisionImpulse;
  (this->ParticleCluster).ExternalStrains = (param_1->ParticleCluster).ExternalStrains;
  (this->ParticleCluster).InternalStrains = (param_1->ParticleCluster).InternalStrains;
  (this->ParticleCluster).Strain = (param_1->ParticleCluster).Strain;
  if (pTVar2 != pTVar1) {
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ParticleCluster).ConnectivityEdges.ArrayNum =
         (param_1->ParticleCluster).ConnectivityEdges.ArrayNum;
    (this->ParticleCluster).ConnectivityEdges.ArrayMax =
         (param_1->ParticleCluster).ConnectivityEdges.ArrayMax;
    (param_1->ParticleCluster).ConnectivityEdges.ArrayNum = 0;
    (param_1->ParticleCluster).ConnectivityEdges.ArrayMax = 0;
  }
  pTVar3 = &param_1->CollisionDataPerShape;
  (this->ParticleCluster).bIsAnchored = (param_1->ParticleCluster).bIsAnchored;
  pTVar4 = &this->CollisionDataPerShape;
  (this->ParticleCluster).bUnbreakable = (param_1->ParticleCluster).bUnbreakable;
  (this->ParticleCluster).bIsChildToParentLocked = (param_1->ParticleCluster).bIsChildToParentLocked
  ;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->CollisionDataPerShape).ArrayNum = (param_1->CollisionDataPerShape).ArrayNum;
    (this->CollisionDataPerShape).ArrayMax = (param_1->CollisionDataPerShape).ArrayMax;
    (param_1->CollisionDataPerShape).ArrayNum = 0;
    (param_1->CollisionDataPerShape).ArrayMax = 0;
  }
  pTVar5 = &param_1->ParticleMetadataInstance;
  if (&this->ParticleMetadataInstance != pTVar5) {
    (this->ParticleMetadataInstance).Object = pTVar5->Object;
    pTVar5->Object = (FChaosVDParticleMetadata *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ParticleMetadataInstance).SharedReferenceCount,
               &(param_1->ParticleMetadataInstance).SharedReferenceCount);
  }
  return this;
}

