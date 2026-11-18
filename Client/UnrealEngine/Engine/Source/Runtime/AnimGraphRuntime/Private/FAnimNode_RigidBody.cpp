// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 42

// StaticStruct @ 1463ecbd0

UScriptStruct * __cdecl FAnimNode_RigidBody::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar1,
                         L"AnimNode_RigidBody");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton;
}

// FAnimNode_RigidBody @ 146404d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimNode_RigidBody * __thiscall FAnimNode_RigidBody::FAnimNode_RigidBody(FAnimNode_RigidBody *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  void *pvVar36;
  FName *pFVar37;
  ulonglong uVar38;
  FName local_res8;
  TStatId local_res10;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->bDefaultToSkeletalMeshPhysicsAsset = true;
  this->bUseDefaultAsSimulated = false;
  *(undefined ***)this = &___7FAnimNode_RigidBody__6B_;
  (this->OverridePhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 = auVar10;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar4,0);
  auVar12._0_8_ = (double)fVar3;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.ZW.m128d_f64 = auVar12;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar4,0);
  auVar14._0_8_ = (double)fVar3;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.ZW.m128d_f64 = auVar14;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar4,0);
  auVar16._0_8_ = (double)fVar3;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.ZW.m128d_f64 = auVar16;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar4,0);
  auVar18._0_8_ = (double)fVar3;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.ZW.m128d_f64 = auVar18;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar4,0);
  auVar20._0_8_ = (double)fVar3;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.ZW.m128d_f64 = auVar20;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar4,0);
  auVar22._0_8_ = (double)fVar3;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.ZW.m128d_f64 = auVar22;
  this->UsePhysicsAsset = (UPhysicsAsset *)0x0;
  this->bUseLocalLODThresholdOnly = false;
  (this->OverrideWorldGravity).field0_0x0._s_0.X = 0.0;
  (this->OverrideWorldGravity).field0_0x0._s_0.Y = 0.0;
  (this->OverrideWorldGravity).field0_0x0._s_0.Z = 0.0;
  (this->ExternalForce).field0_0x0._s_0.X = 0.0;
  (this->ExternalForce).field0_0x0._s_0.Y = 0.0;
  (this->ExternalForce).field0_0x0._s_0.Z = 0.0;
  (this->ComponentLinearAccScale).field0_0x0._s_0.X = 0.0;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Y = 0.0;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Z = 0.0;
  (this->ComponentLinearVelScale).field0_0x0._s_0.X = 0.0;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Y = 0.0;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Z = 0.0;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X = 10000.0;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y = 10000.0;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z = 10000.0;
  (this->SimSpaceSettings).WorldAlpha = 0.0;
  (this->SimSpaceSettings).VelocityScaleZ = 1.0;
  (this->SimSpaceSettings).DampingAlpha = 1.0;
  (this->SimSpaceSettings).MaxLinearVelocity = 10000.0;
  (this->SimSpaceSettings).MaxAngularVelocity = 10000.0;
  (this->SimSpaceSettings).MaxLinearAcceleration = 10000.0;
  (this->SimSpaceSettings).MaxAngularAcceleration = 10000.0;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y = (double)uVar35;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y = (double)uVar35;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y = (double)uVar35;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CachedBoundsScale = 1.2;
  (this->BaseBoneRef).BoneName.ComparisonIndex = 0;
  (this->BaseBoneRef).BoneName.Number = 0;
  puVar1 = &(this->BaseBoneRef).field_0x8;
  (this->BaseBoneRef).BoneIndex = -1;
  (this->BaseBoneRef).bUseSkeletonIndex = 0;
  (this->BaseBoneRef).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bEnableWorldGeometry = '\0';
  this->bClampLinearTranslationLimitToRefPose = '\0';
  this->bFreezeIncomingPoseOnStart = '\0';
  this->bTransferBoneVelocities = '\0';
  this->bOverrideWorldGravity = '\0';
  this->bEnabled = '\0';
  this->bCheckForBodyTransformInit = '\0';
  this->bSimulationStarted = '\0';
  this->OverlapChannel = '\0';
  this->SimulationSpace = ComponentSpace;
  this->bForceDisableCollisionBetweenConstraintBodies = false;
  this->bUseExternalClothCollision = false;
  this->ResetSimulatedTeleportType = None;
  this->WorldSpaceMinimumScale = 0.01;
  this->EvaluationResetTime = 0.01;
  this->SimulationTiming = Default;
  this->WorldTimeSeconds = 0.0;
  this->LastEvalTimeSeconds = 0.0;
  this->AccumulatedDeltaTime = 0.0;
  this->AnimPhysicsMinDeltaTime = 0.0;
  this->bSimulateAnimPhysicsAfterReset = false;
  (this->SkelMeshCompWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->PhysicsSimulation = (FSimulation *)0x0;
  FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings(&this->SolverSettings);
  FSolverIterations::FSolverIterations(&this->SolverIterations);
  (this->SimulationTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->OutputBoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBoneData).ArrayNum = 0;
  (this->OutputBoneData).ArrayMax = 0;
  (this->Bodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies).ArrayNum = 0;
  (this->Bodies).ArrayMax = 0;
  (this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
  (this->SkeletonBoneIndexToBodyIndex).ArrayMax = 0;
  (this->BodyAnimData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyAnimData).ArrayNum = 0;
  (this->BodyAnimData).ArrayMax = 0;
  (this->Constraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Constraints).ArrayNum = 0;
  (this->Constraints).ArrayMax = 0;
  (this->PendingRadialForces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRadialForces).ArrayNum = 0;
  (this->PendingRadialForces).ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.SamplePositions.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.SampleIndices.ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ParticleHandles[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.VectorResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.ScalarResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IntegerResults[1].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].ArrayNum = 0;
  pvVar36 = ThreadLocalStoragePointer;
  (this->PerSolverField).ExecutionDatas.IndexResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayMax = 0;
  (this->PerSolverField).TransientCommands.ArrayNum = 0;
  (this->PerSolverField).TransientCommands.ArrayMax = 0;
  (this->PerSolverField).PersistentCommands.ArrayNum = 0;
  (this->PerSolverField).PersistentCommands.ArrayMax = 0;
  (this->PerSolverField).TransientCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSolverField).PersistentCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothColliders).ArrayNum = 0;
  (this->ClothColliders).ArrayMax = 0;
  (this->ClothColliders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x10 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x18 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x38 = 0;
  uVar38 = (ulonglong)_tls_index;
  *(undefined8 *)&(this->ComponentsInSim).field_0x48 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x8 = 0;
  *(undefined8 *)&this->ComponentsInSim = 0;
  lVar2 = *(longlong *)((longlong)pvVar36 + uVar38 * 8);
  *(undefined8 *)&(this->ComponentsInSim).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsInSim).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsInSim).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsInSim).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentsInSim).field_0x34 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x40 = 0;
  this->ComponentsInSimTick = 0;
  this->TotalMass = 0.0;
  (this->WorldSpaceGravity).field0_0x0._s_0.X = 0.0;
  (this->WorldSpaceGravity).field0_0x0._s_0.Y = 0.0;
  (this->WorldSpaceGravity).field0_0x0._s_0.Z = 0.0;
  uVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedBounds).Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedBounds).Center.field0_0x0._s_0.Y = (double)uVar35;
  (this->CachedBounds).Center.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CachedBounds).W = 0.0;
  if ((*(int *)(lVar2 + 0x9d4c) <
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
    StatPtr_UnknownSceneQuery =
         (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
          )0x0;
    pFVar37 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar37,L"UnknownSceneQuery",
               "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  local_res10.StatIdPtr =
       (TStatIdData *)
       `public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
       StatPtr_UnknownSceneQuery;
  if (`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'::__l2::
      StatPtr_UnknownSceneQuery ==
      (FThreadSafeStaticStat<_public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)_::_2_::FStat_UnknownSceneQuery>
       )0x0) {
    pFVar37 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    local_res10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar37,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FCollisionQueryParams::FCollisionQueryParams
            (&this->QueryParams,(FName)0x0,&local_res10,false,(AActor *)0x0);
  this->PhysScene = (FPhysScene_Chaos *)0x0;
  this->UnsafeWorld = (UWorld *)0x0;
  this->UnsafeOwner = (AActor *)0x0;
  FBoneContainer::FBoneContainer(&this->CapturedBoneVelocityBoneContainer);
  *(undefined8 *)&(this->CapturedBoneVelocityPose).Pose.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).ComponentSpaceFlags.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).BoneMask.field_0x8 = 0;
  (this->CapturedBoneVelocityPose).BonesToConvert.ArrayNum = 0;
  (this->CapturedBoneVelocityPose).BonesToConvert.ArrayMax = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).Pose = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).Pose.field_0x10 = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).ComponentSpaceFlags = 0;
  *(undefined8 *)&(this->CapturedBoneVelocityPose).BoneMask = 0;
  (this->CapturedBoneVelocityPose).BonesToConvert.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->CapturedFrozenPose).Pose.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).ComponentSpaceFlags.field_0x8 = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).BoneMask.field_0x8 = 0;
  (this->CapturedFrozenPose).BonesToConvert.ArrayNum = 0;
  (this->CapturedFrozenPose).BonesToConvert.ArrayMax = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).Pose = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).Pose.field_0x10 = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).ComponentSpaceFlags = 0;
  *(undefined8 *)&(this->CapturedFrozenPose).BoneMask = 0;
  (this->CapturedFrozenPose).BonesToConvert.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)&(this->CapturedFrozenCurves).field_0x11 = 0;
  *(undefined2 *)&(this->CapturedFrozenCurves).field_0x15 = 0;
  (this->CapturedFrozenCurves).field_0x17 = 0;
  *(undefined8 *)&this->CapturedFrozenCurves = 0;
  *(undefined8 *)&(this->CapturedFrozenCurves).field_0x8 = 0;
  (this->CapturedFrozenCurves).field_0x10 = 0;
  *(undefined8 *)&(this->CapturedFrozenCurves).field_0x18 = 0;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X = 0.0;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = 0.0;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z = 0.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64 = auVar23;
  auVar24._8_4_ = SUB84((double)fVar4,0);
  auVar24._0_8_ = (double)fVar3;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64 = auVar24;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar4,0);
  auVar26._0_8_ = (double)fVar3;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 = auVar26;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar27._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar27._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar27._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64 = auVar27;
  auVar28._8_4_ = SUB84((double)fVar4,0);
  auVar28._0_8_ = (double)fVar3;
  auVar28._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64 = auVar28;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar29._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar29._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar29._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64 =
       auVar29;
  auVar30._8_4_ = SUB84((double)fVar4,0);
  auVar30._0_8_ = (double)fVar3;
  auVar30._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64 =
       auVar30;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar31._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar31._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar31._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64 =
       auVar31;
  auVar32._8_4_ = SUB84((double)fVar4,0);
  auVar32._0_8_ = (double)fVar3;
  auVar32._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 =
       auVar32;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar33._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar33._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar33._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64 =
       auVar33;
  auVar34._8_4_ = SUB84((double)fVar4,0);
  auVar34._0_8_ = (double)fVar3;
  auVar34._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64 =
       auVar34;
  this->PreviousDt = 0.033333335;
  (this->OwningAssetPackageName).ComparisonIndex = 0;
  *(undefined8 *)&(this->OwningAssetPackageName).Number = 0;
  (this->OwningAssetName).Number = 0;
  return this;
}

// ~FAnimNode_RigidBody @ 146408d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::~FAnimNode_RigidBody(FAnimNode_RigidBody *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ForElementType<unsigned_int> FVar5;
  FTaskBase *pFVar6;
  
  *(undefined ***)this = &___7FAnimNode_RigidBody__6B_;
  DestroyPhysicsSimulation(this);
  if (*(void **)&this->CapturedFrozenCurves != (void *)0x0) {
    FMemory::Free(*(void **)&this->CapturedFrozenCurves);
  }
  pFVar3 = (this->CapturedFrozenPose).BonesToConvert.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pvVar4 = *(void **)&(this->CapturedFrozenPose).BoneMask;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)&(this->CapturedFrozenPose).ComponentSpaceFlags;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)&(this->CapturedFrozenPose).Pose;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pFVar3 = (this->CapturedBoneVelocityPose).BonesToConvert.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pvVar4 = *(void **)&(this->CapturedBoneVelocityPose).BoneMask;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)&(this->CapturedBoneVelocityPose).ComponentSpaceFlags;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)&(this->CapturedBoneVelocityPose).Pose;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FBoneContainer::~FBoneContainer(&this->CapturedBoneVelocityBoneContainer);
  FVar5 = (this->QueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  FVar5 = (this->QueryParams).IgnoreComponents.AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  *(undefined4 *)&(this->ComponentsInSim).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ComponentsInSim).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComponentsInSim);
  pFVar3 = (this->ClothColliders).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->PerSolverField).PersistentCommands.AllocatorInstance.Data
             ,(this->PerSolverField).PersistentCommands.ArrayNum);
  pFVar3 = (this->PerSolverField).PersistentCommands.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFieldSystemCommand,int>
            ((FFieldSystemCommand *)(this->PerSolverField).TransientCommands.AllocatorInstance.Data,
             (this->PerSolverField).TransientCommands.ArrayNum);
  pFVar3 = (this->PerSolverField).TransientCommands.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FFieldExecutionDatas::~FFieldExecutionDatas(&(this->PerSolverField).ExecutionDatas);
  pFVar3 = (this->PendingRadialForces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->BodyAnimData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Bodies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FAnimNode_RigidBody::FOutputBoneData,int>
            ((FOutputBoneData *)(this->OutputBoneData).AllocatorInstance.Data,
             (this->OutputBoneData).ArrayNum);
  pFVar3 = (this->OutputBoneData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar6 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar6 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar6->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar6->_padding_)(pFVar6,1);
    }
  }
  *(undefined ***)this = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14640b920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimNode_RigidBody * __thiscall
FAnimNode_RigidBody::operator=(FAnimNode_RigidBody *this,FAnimNode_RigidBody *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *this_00;
  TArray<FAnimNode_RigidBody::FOutputBoneData,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FAnimNode_RigidBody::FBodyAnimData,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FPhysicsConstraintReference_Chaos_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FAnimNode_RigidBody::FClothCollider,TSizedDefaultAllocator<32>_> *pTVar8;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *this_01;
  atomic<unsigned_int> aVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  UPhysicsAsset *pUVar13;
  FTaskBase *pFVar14;
  FTaskBase *pFVar15;
  FOutputBoneData *pFVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  bool bVar24;
  undefined2 uVar25;
  byte bVar26;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (param_1->OverridePhysicsAsset).field0_0x0.DebugPtr, pUVar13 != (UPhysicsAsset *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->OverridePhysicsAsset).field0_0x0 = (param_1->OverridePhysicsAsset).field0_0x0;
  this->bDefaultToSkeletalMeshPhysicsAsset = param_1->bDefaultToSkeletalMeshPhysicsAsset;
  this->bUseDefaultAsSimulated = param_1->bUseDefaultAsSimulated;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Rotation.XY.m128d_f64[1];
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Rotation.XY.m128d_f64[0];
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[1];
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Rotation.ZW.m128d_f64[0];
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Translation.XY.m128d_f64[1];
  (this->CurrentTransform).Translation.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Translation.XY.m128d_f64[0];
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Translation.ZW.m128d_f64[1];
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Translation.ZW.m128d_f64[0];
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Scale3D.XY.m128d_f64[1];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Scale3D.XY.m128d_f64[0];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->CurrentTransform).Scale3D.ZW.m128d_f64[1];
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Scale3D.ZW.m128d_f64[0];
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Translation.XY.m128d_f64[1];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Translation.XY.m128d_f64[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar20;
  this->UsePhysicsAsset = param_1->UsePhysicsAsset;
  this->bUseLocalLODThresholdOnly = param_1->bUseLocalLODThresholdOnly;
  dVar20 = (param_1->OverrideWorldGravity).field0_0x0._s_0.Y;
  (this->OverrideWorldGravity).field0_0x0._s_0.X = (param_1->OverrideWorldGravity).field0_0x0._s_0.X
  ;
  (this->OverrideWorldGravity).field0_0x0._s_0.Y = dVar20;
  (this->OverrideWorldGravity).field0_0x0._s_0.Z = (param_1->OverrideWorldGravity).field0_0x0._s_0.Z
  ;
  dVar20 = (param_1->ExternalForce).field0_0x0._s_0.Y;
  (this->ExternalForce).field0_0x0._s_0.X = (param_1->ExternalForce).field0_0x0._s_0.X;
  (this->ExternalForce).field0_0x0._s_0.Y = dVar20;
  (this->ExternalForce).field0_0x0._s_0.Z = (param_1->ExternalForce).field0_0x0._s_0.Z;
  dVar20 = (param_1->ComponentLinearAccScale).field0_0x0._s_0.Y;
  (this->ComponentLinearAccScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.X;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Y = dVar20;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.Z;
  dVar20 = (param_1->ComponentLinearVelScale).field0_0x0._s_0.Y;
  (this->ComponentLinearVelScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.X;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Y = dVar20;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.Z;
  dVar20 = (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y = dVar20;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
  fVar21 = (param_1->SimSpaceSettings).VelocityScaleZ;
  fVar22 = (param_1->SimSpaceSettings).DampingAlpha;
  fVar23 = (param_1->SimSpaceSettings).MaxLinearVelocity;
  (this->SimSpaceSettings).WorldAlpha = (param_1->SimSpaceSettings).WorldAlpha;
  (this->SimSpaceSettings).VelocityScaleZ = fVar21;
  (this->SimSpaceSettings).DampingAlpha = fVar22;
  (this->SimSpaceSettings).MaxLinearVelocity = fVar23;
  fVar21 = (param_1->SimSpaceSettings).MaxLinearAcceleration;
  fVar22 = (param_1->SimSpaceSettings).MaxAngularAcceleration;
  uVar10 = *(undefined4 *)&(param_1->SimSpaceSettings).field_0x1c;
  (this->SimSpaceSettings).MaxAngularVelocity = (param_1->SimSpaceSettings).MaxAngularVelocity;
  (this->SimSpaceSettings).MaxLinearAcceleration = fVar21;
  (this->SimSpaceSettings).MaxAngularAcceleration = fVar22;
  *(undefined4 *)&(this->SimSpaceSettings).field_0x1c = uVar10;
  dVar20 = (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X =
       (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y = dVar20;
  dVar20 = (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z =
       (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X = dVar20;
  dVar20 = (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y =
       (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z = dVar20;
  dVar20 = (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y = dVar20;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
  this->CachedBoundsScale = param_1->CachedBoundsScale;
  (this->BaseBoneRef).BoneName = (param_1->BaseBoneRef).BoneName;
  uVar10 = *(undefined4 *)&(param_1->BaseBoneRef).field_0x8;
  *(uint *)&(this->BaseBoneRef).field_0x8 =
       (uVar10 ^ *(uint *)&(this->BaseBoneRef).field_0x8) & 0x80000000 ^ uVar10;
  uVar11 = *(undefined4 *)&(param_1->BaseBoneRef).field_0x8;
  *(uint *)&(this->BaseBoneRef).field_0x8 =
       (SPULL(uVar10,0,0x1f) ^ SPULL(uVar11,0,0x1f)) & 0x7fffffffU ^ uVar11;
  (this->BaseBoneRef).CachedCompactPoseIndex = (param_1->BaseBoneRef).CachedCompactPoseIndex;
  (this->OverlapChannel).Value = (param_1->OverlapChannel).Value;
  this->SimulationSpace = param_1->SimulationSpace;
  this->bForceDisableCollisionBetweenConstraintBodies =
       param_1->bForceDisableCollisionBetweenConstraintBodies;
  this->bUseExternalClothCollision = param_1->bUseExternalClothCollision;
  this->ResetSimulatedTeleportType = param_1->ResetSimulatedTeleportType;
  bVar26 = (this->bEnableWorldGeometry ^ param_1->bEnableWorldGeometry) & 1 ^ this->field_0x309;
  this->field_0x309 = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x309) & 2 ^ bVar26;
  this->field_0x309 = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x309) & 4 ^ bVar26;
  this->field_0x309 = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x309) & 8 ^ bVar26;
  this->field_0x309 = bVar26;
  this->field_0x309 = (bVar26 ^ param_1->field_0x309) & 0x10 ^ bVar26;
  this->WorldSpaceMinimumScale = param_1->WorldSpaceMinimumScale;
  this->EvaluationResetTime = param_1->EvaluationResetTime;
  bVar26 = (this->bEnabled ^ param_1->bEnabled) & 1 ^ this->field_0x314;
  this->field_0x314 = bVar26;
  bVar26 = (bVar26 ^ param_1->field_0x314) & 2 ^ bVar26;
  this->field_0x314 = bVar26;
  this->field_0x314 = (bVar26 ^ param_1->field_0x314) & 4 ^ bVar26;
  this->SimulationTiming = param_1->SimulationTiming;
  this->WorldTimeSeconds = param_1->WorldTimeSeconds;
  this->LastEvalTimeSeconds = param_1->LastEvalTimeSeconds;
  this->AccumulatedDeltaTime = param_1->AccumulatedDeltaTime;
  this->AnimPhysicsMinDeltaTime = param_1->AnimPhysicsMinDeltaTime;
  this->bSimulateAnimPhysicsAfterReset = param_1->bSimulateAnimPhysicsAfterReset;
  (this->SkelMeshCompWeakPtr).WeakPtr = (param_1->SkelMeshCompWeakPtr).WeakPtr;
  this->PhysicsSimulation = param_1->PhysicsSimulation;
  iVar12 = (param_1->SolverSettings).VelocityIterations;
  iVar18 = (param_1->SolverSettings).ProjectionIterations;
  fVar21 = (param_1->SolverSettings).CullDistance;
  (this->SolverSettings).PositionIterations = (param_1->SolverSettings).PositionIterations;
  (this->SolverSettings).VelocityIterations = iVar12;
  (this->SolverSettings).ProjectionIterations = iVar18;
  (this->SolverSettings).CullDistance = fVar21;
  fVar21 = (param_1->SolverSettings).FixedTimeStep;
  (this->SolverSettings).MaxDepenetrationVelocity =
       (param_1->SolverSettings).MaxDepenetrationVelocity;
  (this->SolverSettings).FixedTimeStep = fVar21;
  bVar24 = (param_1->SolverSettings).bUseManifolds;
  uVar25 = *(undefined2 *)&(param_1->SolverSettings).field_0x1a;
  (this->SolverSettings).bUseLinearJointSolver = (param_1->SolverSettings).bUseLinearJointSolver;
  (this->SolverSettings).bUseManifolds = bVar24;
  *(undefined2 *)&(this->SolverSettings).field_0x1a = uVar25;
  iVar12 = (param_1->SolverIterations).JointIterations;
  iVar18 = (param_1->SolverIterations).CollisionIterations;
  iVar19 = (param_1->SolverIterations).SolverPushOutIterations;
  (this->SolverIterations).SolverIterations = (param_1->SolverIterations).SolverIterations;
  (this->SolverIterations).JointIterations = iVar12;
  (this->SolverIterations).CollisionIterations = iVar18;
  (this->SolverIterations).SolverPushOutIterations = iVar19;
  iVar12 = (param_1->SolverIterations).CollisionPushOutIterations;
  (this->SolverIterations).JointPushOutIterations =
       (param_1->SolverIterations).JointPushOutIterations;
  (this->SolverIterations).CollisionPushOutIterations = iVar12;
  pFVar14 = (param_1->SimulationTask).Pimpl.Reference;
  pFVar15 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar15 != pFVar14) {
    (this->SimulationTask).Pimpl.Reference = pFVar14;
    if (pFVar14 != (FTaskBase *)0x0) {
      LOCK();
      pFVar14->RefCount = (atomic<unsigned_int>)((int)pFVar14->RefCount + 1);
      UNLOCK();
    }
    if (pFVar15 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar15->RefCount;
      aVar9 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar9 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar15->_padding_)(pFVar15,1);
      }
    }
  }
  pTVar4 = &this->OutputBoneData;
  if (pTVar4 != &param_1->OutputBoneData) {
    DestructItems<FAnimNode_RigidBody::FOutputBoneData,int>
              ((FOutputBoneData *)(pTVar4->AllocatorInstance).Data,(this->OutputBoneData).ArrayNum);
    iVar12 = (param_1->OutputBoneData).ArrayNum;
    piVar2 = &(this->OutputBoneData).ArrayMax;
    pFVar16 = (FOutputBoneData *)(param_1->OutputBoneData).AllocatorInstance.Data;
    (this->OutputBoneData).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar12,*piVar2,&pTVar4->AllocatorInstance,iVar12,piVar2);
      ConstructItems<FAnimNode_RigidBody::FOutputBoneData,FAnimNode_RigidBody::FOutputBoneData,int>
                ((pTVar4->AllocatorInstance).Data,pFVar16,iVar12);
    }
  }
  pTVar5 = &this->Bodies;
  if (pTVar5 != &param_1->Bodies) {
    iVar12 = (param_1->Bodies).ArrayNum;
    piVar2 = &(this->Bodies).ArrayMax;
    pFVar17 = (param_1->Bodies).AllocatorInstance.Data;
    (this->Bodies).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,*piVar2,&pTVar5->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar17,(longlong)iVar12 << 3);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletonBoneIndexToBodyIndex,&param_1->SkeletonBoneIndexToBodyIndex);
  pTVar6 = &this->BodyAnimData;
  if (pTVar6 != &param_1->BodyAnimData) {
    iVar12 = (param_1->BodyAnimData).ArrayNum;
    piVar2 = &(this->BodyAnimData).ArrayMax;
    pFVar17 = (param_1->BodyAnimData).AllocatorInstance.Data;
    (this->BodyAnimData).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,iVar12,*piVar2,&pTVar6->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar17,(longlong)iVar12 * 0x50);
      }
    }
  }
  pTVar7 = &this->Constraints;
  if (pTVar7 != &param_1->Constraints) {
    iVar12 = (param_1->Constraints).ArrayNum;
    piVar2 = &(this->Constraints).ArrayMax;
    pFVar17 = (param_1->Constraints).AllocatorInstance.Data;
    (this->Constraints).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,*piVar2,&pTVar7->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar17,(longlong)iVar12 << 3);
      }
    }
  }
  TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_>::operator=
            (&this->PendingRadialForces,&param_1->PendingRadialForces);
  FFieldExecutionDatas::operator=
            (&(this->PerSolverField).ExecutionDatas,&(param_1->PerSolverField).ExecutionDatas);
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
            (&(this->PerSolverField).TransientCommands,&(param_1->PerSolverField).TransientCommands)
  ;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_>::operator=
            (&(this->PerSolverField).PersistentCommands,
             &(param_1->PerSolverField).PersistentCommands);
  pTVar8 = &this->ClothColliders;
  if (pTVar8 != &param_1->ClothColliders) {
    iVar12 = (param_1->ClothColliders).ArrayNum;
    piVar2 = &(this->ClothColliders).ArrayMax;
    pFVar17 = (param_1->ClothColliders).AllocatorInstance.Data;
    (this->ClothColliders).ArrayNum = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar12,*piVar2,&pTVar8->AllocatorInstance,iVar12,piVar2);
      if (iVar12 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar17,(longlong)iVar12 * 0x18);
      }
    }
  }
  this_01 = &this->ComponentsInSim;
  if (this_01 != &param_1->ComponentsInSim) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ComponentsInSim).field_0x38,
               (int *)&(this->ComponentsInSim).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ComponentsInSim).field_0x38,
               *(int *)&(param_1->ComponentsInSim).field_0x48);
    iVar12 = *(int *)&(param_1->ComponentsInSim).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar12);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar12,(ForAnyElementType *)this_01,(int *)&(this->ComponentsInSim).field_0x8,
               (int *)&(this->ComponentsInSim).field_0xc);
    puVar3 = &(param_1->ComponentsInSim).field_0x10;
    this_00 = &(this->ComponentsInSim).field_0x10;
    *(undefined4 *)&(this->ComponentsInSim).field_0x30 =
         *(undefined4 *)&(param_1->ComponentsInSim).field_0x30;
    *(undefined4 *)&(this->ComponentsInSim).field_0x34 =
         *(undefined4 *)&(param_1->ComponentsInSim).field_0x34;
    if (this_00 != puVar3) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar3);
    }
    if (iVar12 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->ComponentsInSim,(longlong)iVar12 << 5);
    }
  }
  this->ComponentsInSimTick = param_1->ComponentsInSimTick;
  dVar20 = (param_1->WorldSpaceGravity).field0_0x0._s_0.Y;
  (this->WorldSpaceGravity).field0_0x0._s_0.X = (param_1->WorldSpaceGravity).field0_0x0._s_0.X;
  (this->WorldSpaceGravity).field0_0x0._s_0.Y = dVar20;
  (this->WorldSpaceGravity).field0_0x0._s_0.Z = (param_1->WorldSpaceGravity).field0_0x0._s_0.Z;
  this->TotalMass = param_1->TotalMass;
  dVar20 = (param_1->CachedBounds).Center.field0_0x0._s_0.Y;
  (this->CachedBounds).Center.field0_0x0._s_0.X = (param_1->CachedBounds).Center.field0_0x0._s_0.X;
  (this->CachedBounds).Center.field0_0x0._s_0.Y = dVar20;
  dVar20 = (param_1->CachedBounds).W;
  (this->CachedBounds).Center.field0_0x0._s_0.Z = (param_1->CachedBounds).Center.field0_0x0._s_0.Z;
  (this->CachedBounds).W = dVar20;
  FCollisionQueryParams::operator=(&this->QueryParams,&param_1->QueryParams);
  this->PhysScene = param_1->PhysScene;
  this->UnsafeWorld = param_1->UnsafeWorld;
  this->UnsafeOwner = param_1->UnsafeOwner;
  FBoneContainer::operator=
            (&this->CapturedBoneVelocityBoneContainer,&param_1->CapturedBoneVelocityBoneContainer);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             &this->CapturedBoneVelocityPose,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             &param_1->CapturedBoneVelocityPose);
  *(undefined8 *)&(this->CapturedBoneVelocityPose).Pose.field_0x10 =
       *(undefined8 *)&(param_1->CapturedBoneVelocityPose).Pose.field_0x10;
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&(this->CapturedBoneVelocityPose).ComponentSpaceFlags,
            &(param_1->CapturedBoneVelocityPose).ComponentSpaceFlags);
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&(this->CapturedBoneVelocityPose).BoneMask,&(param_1->CapturedBoneVelocityPose).BoneMask
           );
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CapturedBoneVelocityPose).BonesToConvert,
             &(param_1->CapturedBoneVelocityPose).BonesToConvert);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             &this->CapturedFrozenPose,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             &param_1->CapturedFrozenPose);
  *(undefined8 *)&(this->CapturedFrozenPose).Pose.field_0x10 =
       *(undefined8 *)&(param_1->CapturedFrozenPose).Pose.field_0x10;
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&(this->CapturedFrozenPose).ComponentSpaceFlags,
            &(param_1->CapturedFrozenPose).ComponentSpaceFlags);
  UE::Anim::
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::
  operator=(&(this->CapturedFrozenPose).BoneMask,&(param_1->CapturedFrozenPose).BoneMask);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CapturedFrozenPose).BonesToConvert,
             &(param_1->CapturedFrozenPose).BonesToConvert);
  TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)
             &this->CapturedFrozenCurves,
             (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)
             &param_1->CapturedFrozenCurves);
  (this->CapturedFrozenCurves).field_0x10 = (param_1->CapturedFrozenCurves).field_0x10;
  *(undefined8 *)&(this->CapturedFrozenCurves).field_0x18 =
       *(undefined8 *)&(param_1->CapturedFrozenCurves).field_0x18;
  dVar20 = (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Y;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar20;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Z;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar20;
  dVar20 = (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar20;
  this->PreviousDt = param_1->PreviousDt;
  this->OwningAssetPackageName = param_1->OwningAssetPackageName;
  this->OwningAssetName = param_1->OwningAssetName;
  return this;
}

// operator() @ 14640f580

bool __thiscall
`FAnimNode_RigidBody::InitPhysics'::__l19::<lambda_1>::operator()
          (void *this,FConstraintInstance *param_1,FConstraintInstance *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  bVar6 = FConstraintInstance::IsValidConstraintInstance(param_1);
  if (bVar6) {
    bVar6 = FConstraintInstance::IsValidConstraintInstance(param_2);
    if (bVar6) {
      uVar11 = 0xffffffff;
      uVar14 = 0xffffffff;
      if (param_1->ConstraintBone1 != (FName)0x0) {
        puVar8 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)(*(longlong *)((longlong)this + 8) + 0x90),
                                param_1->ConstraintBone1);
        uVar14 = 0xffffffff;
        if (puVar8 != (uint *)0x0) {
          uVar14 = *puVar8;
        }
      }
      uVar13 = 0xffffffff;
      if (param_1->ConstraintBone2 != (FName)0x0) {
        puVar8 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)(*(longlong *)((longlong)this + 8) + 0x90),
                                param_1->ConstraintBone2);
        uVar13 = 0xffffffff;
        if (puVar8 != (uint *)0x0) {
          uVar13 = *puVar8;
        }
      }
      uVar10 = 0xffffffff;
      if (param_2->ConstraintBone1 != (FName)0x0) {
        puVar8 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)(*(longlong *)((longlong)this + 8) + 0x90),
                                param_2->ConstraintBone1);
        uVar10 = 0xffffffff;
        if (puVar8 != (uint *)0x0) {
          uVar10 = *puVar8;
        }
      }
      if (param_2->ConstraintBone2 != (FName)0x0) {
        puVar8 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                         ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                 *)(*(longlong *)((longlong)this + 8) + 0x90),
                                param_2->ConstraintBone2);
        if (puVar8 != (uint *)0x0) {
          uVar11 = *puVar8;
        }
      }
      plVar2 = *(longlong **)this;
      uVar9 = 0;
      if ((int)uVar13 < (int)plVar2[1]) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar3 = *(longlong **)this;
      iVar1 = *(int *)(*plVar2 + (longlong)(int)uVar13 * 4);
      uVar13 = 0;
      if ((int)uVar14 < (int)plVar3[1]) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      lVar4 = *plVar3;
      plVar2 = *(longlong **)this;
      if (iVar1 < *(int *)(lVar4 + (longlong)(int)uVar14 * 4)) {
        iVar1 = *(int *)(lVar4 + (longlong)(int)uVar14 * 4);
      }
      uVar14 = 0;
      if ((int)uVar11 < (int)plVar2[1]) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar3 = *(longlong **)this;
      iVar12 = *(int *)(*plVar2 + (longlong)(int)uVar11 * 4);
      uVar14 = 0;
      if ((int)uVar10 < (int)plVar3[1]) {
        uVar14 = ~uVar10 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      lVar4 = *plVar3;
      if (iVar12 < *(int *)(lVar4 + (longlong)(int)uVar10 * 4)) {
        iVar12 = *(int *)(lVar4 + (longlong)(int)uVar10 * 4);
      }
      return iVar1 < iVar12;
    }
  }
  return false;
}

// AddImpulseAtLocation @ 1464150e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::AddImpulseAtLocation
          (FAnimNode_RigidBody *this,TVector<double> *param_1,TVector<double> *param_2,FName param_3
          )

{
  FActorHandle *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38;
  
  uVar5 = 0;
  if (0 < (this->Bodies).ArrayNum) {
    lVar4 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Bodies).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
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
      this_00 = *(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar4);
      if (this_00->Name == param_3) {
        local_58._s_0.X = (param_2->field0_0x0)._s_0.X;
        local_58._s_0.Y = (param_2->field0_0x0)._s_0.Y;
        local_58._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_38._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        ImmediatePhysics_Chaos::FActorHandle::AddImpulseAtLocation
                  (this_00,(TVector<double> *)&local_38._s_0,(TVector<double> *)&local_58._s_0);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while ((int)uVar5 < (this->Bodies).ArrayNum);
  }
  return;
}

// CalculateSimulationSpaceMotion @ 14641d850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::CalculateSimulationSpaceMotion
          (FAnimNode_RigidBody *this,ESimulationSpace param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4,FSimSpaceSettings *param_5,
          TVector<double> *param_6,TVector<double> *param_7,TVector<double> *param_8,
          TVector<double> *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  TVector<double> *pTVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined4 uVar53;
  undefined1 auVar52 [16];
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double dStack_248;
  double local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  TVector<double> local_110;
  TVector<double> local_f8 [8];
  
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_6->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_6->field0_0x0)._s_0.Y = (double)uVar16;
  (param_6->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_7->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_7->field0_0x0)._s_0.Y = (double)uVar16;
  (param_7->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_8->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_8->field0_0x0)._s_0.Y = (double)uVar16;
  (param_8->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_9->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_9->field0_0x0)._s_0.Y = (double)uVar16;
  (param_9->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_5->WorldAlpha != 0.0) && (__real_322bcc77 <= param_4)) {
    if (param_1 == WorldSpace) {
      dVar38 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Y;
      (param_6->field0_0x0)._s_0.X = (param_5->ExternalLinearVelocity).field0_0x0._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar38;
      (param_6->field0_0x0)._s_0.Z = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Z;
      dVar38 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Y;
      (param_7->field0_0x0)._s_0.X = (param_5->ExternalAngularVelocity).field0_0x0._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar38;
      (param_7->field0_0x0)._s_0.Z = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Z;
    }
    else {
      dVar38 = (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dVar1 = (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      dVar2 = (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar3 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dVar9 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      dVar51 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar36 = __real_3ff0000000000000 / (double)this->PreviousDt;
      dVar64 = __real_3ff0000000000000 / (double)param_4;
      dVar50 = ((param_2->Translation).ZW.m128d_f64[0] -
               (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0]) * dVar64;
      dVar37 = ((param_2->Translation).XY.m128d_f64[0] -
               (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0]) * dVar64;
      dVar45 = ((param_2->Translation).XY.m128d_f64[1] -
               (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1]) * dVar64;
      (param_6->field0_0x0)._s_0.X = dVar37;
      (param_6->field0_0x0)._s_0.Y = dVar45;
      (param_6->field0_0x0)._s_0.Z = dVar50;
      (param_8->field0_0x0)._s_0.X = (dVar37 - (dVar3 - dVar38) * dVar36) * dVar64;
      (param_8->field0_0x0)._s_0.Y = (dVar45 - (dVar9 - dVar1) * dVar36) * dVar64;
      (param_8->field0_0x0)._s_0.Z = (dVar50 - (dVar51 - dVar2) * dVar36) * dVar64;
      local_238 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_230 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_228 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_220 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      local_218 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_210 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_208 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_200 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      Chaos::TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_268,(TRotation<double,3> *)&local_218,
                 (TRotation<double,3> *)&local_238,(double)this->PreviousDt);
      local_1f8 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_1f0 = (param_2->Rotation).XY.m128d_f64[1];
      local_1e8 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_1e0 = (param_2->Rotation).ZW.m128d_f64[1];
      local_1d8 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_1d0 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_1c8 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_1c0 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      Chaos::TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_250,(TRotation<double,3> *)&local_1d8,
                 (TRotation<double,3> *)&local_1f8,(double)param_4);
      (param_7->field0_0x0)._s_0.X = local_250;
      (param_7->field0_0x0)._s_0.Y = dStack_248;
      (param_7->field0_0x0)._s_0.Z = local_240;
      dVar38 = (param_7->field0_0x0)._s_0.Y;
      dVar1 = (param_7->field0_0x0)._s_0.Z;
      (param_9->field0_0x0)._s_0.X = ((param_7->field0_0x0)._s_0.X - local_268) * dVar64;
      (param_9->field0_0x0)._s_0.Y = (dVar38 - local_260) * dVar64;
      (param_9->field0_0x0)._s_0.Z = (dVar1 - local_258) * dVar64;
      (param_6->field0_0x0)._s_0.Z = (double)param_5->VelocityScaleZ * (param_6->field0_0x0)._s_0.Z;
      (param_8->field0_0x0)._s_0.Z = (double)param_5->VelocityScaleZ * (param_8->field0_0x0)._s_0.Z;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_6,&local_158,(double)param_5->MaxLinearVelocity);
      dVar38 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Y;
      dVar1 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.Y;
      dVar3 = (pTVar17->field0_0x0)._s_0.Z;
      (param_6->field0_0x0)._s_0.X =
           (pTVar17->field0_0x0)._s_0.X + (param_5->ExternalLinearVelocity).field0_0x0._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar38 + dVar2;
      (param_6->field0_0x0)._s_0.Z = dVar1 + dVar3;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_7,&local_140,(double)param_5->MaxAngularVelocity);
      dVar38 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Y;
      dVar1 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.Y;
      dVar3 = (pTVar17->field0_0x0)._s_0.Z;
      (param_7->field0_0x0)._s_0.X =
           (pTVar17->field0_0x0)._s_0.X + (param_5->ExternalAngularVelocity).field0_0x0._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar38 + dVar2;
      (param_7->field0_0x0)._s_0.Z = dVar1 + dVar3;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_8,&local_128,(double)param_5->MaxLinearAcceleration);
      dVar38 = (pTVar17->field0_0x0)._s_0.Y;
      (param_8->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_8->field0_0x0)._s_0.Y = dVar38;
      (param_8->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_9,&local_110,(double)param_5->MaxAngularAcceleration);
      dVar38 = (pTVar17->field0_0x0)._s_0.Y;
      (param_9->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_9->field0_0x0)._s_0.Y = dVar38;
      (param_9->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      uVar15 = _UNK_15061cc8c;
      uVar14 = _UNK_15061cc88;
      uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar51 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar1 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar2 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar4 = *(undefined1 (*) [16])&param_6->field0_0x0;
      dVar38 = (param_6->field0_0x0)._s_0.Z;
      auVar39._8_4_ = SUB84(dVar36,0);
      auVar39._0_8_ = dVar51;
      uVar53 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar39._12_4_ = uVar53;
      auVar46._8_4_ = SUB84(dVar36,0);
      auVar46._0_8_ = dVar51;
      auVar46._12_4_ = uVar53;
      dVar37 = auVar4._8_8_;
      auVar30._8_4_ = SUB84(dVar2,0);
      auVar30._0_8_ = dVar1;
      auVar30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar47 = blendpd(auVar46,auVar30,2);
      auVar67._0_8_ = dVar37 * dVar51 - auVar4._0_8_ * auVar39._8_8_;
      auVar67._8_8_ = dVar38 * dVar36 - dVar37 * dVar1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar38;
      auVar30 = blendpd(auVar4,auVar10,2);
      auVar31._0_8_ = auVar30._0_8_ * dVar1 - dVar38 * auVar47._0_8_;
      auVar31._8_8_ = auVar30._8_8_ * dVar2 - auVar47._8_8_ * 0.0;
      auVar30 = blendpd(auVar67,auVar31,2);
      dVar3 = auVar67._8_8_ + auVar67._8_8_;
      dVar9 = auVar31._0_8_ + auVar31._0_8_;
      uVar53 = SUB84(dVar9,0);
      uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar68._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar68._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar59._8_4_ = uVar53;
      auVar59._0_8_ = dVar3;
      auVar59._12_4_ = uVar54;
      auVar21._8_4_ = uVar53;
      auVar21._0_8_ = dVar3;
      auVar21._12_4_ = uVar54;
      auVar55._8_4_ = uVar53;
      auVar55._0_8_ = dVar3;
      auVar55._12_4_ = uVar54;
      auVar30 = blendpd(auVar55,auVar68,2);
      auVar60._0_8_ = auVar59._8_8_ * dVar51 - dVar3 * auVar39._8_8_;
      auVar60._8_8_ = auVar68._0_8_ * dVar36 - auVar21._8_8_ * dVar1;
      auVar22._8_4_ = SUB84(auVar68._8_8_,0);
      auVar22._0_8_ = auVar68._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      auVar56._0_8_ = auVar30._0_8_ * dVar1 - auVar68._0_8_ * auVar47._0_8_;
      auVar56._8_8_ = auVar30._8_8_ * dVar2 - auVar22._8_8_ * auVar47._8_8_;
      auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
      lVar18 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar30._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar30._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
      auVar40._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_2->Scale3D).XY.m128d_f64);
      auVar40._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
      auVar40._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      lVar19 = -(ulonglong)(auVar40._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar40._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar23._8_4_ = SUB84(auVar60._8_8_,0);
      auVar23._0_8_ = auVar60._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar41._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar47._4_4_,
                            ~(uint)lVar19 & auVar47._0_4_);
      auVar41._8_4_ = ~(uint)lVar20 & auVar47._8_4_;
      auVar41._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar47._12_4_;
      auVar47._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar47._0_8_ = auVar30._0_8_;
      auVar47._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
      auVar47 = blendpd(auVar60,auVar56,2);
      (param_6->field0_0x0)._s_0.X = auVar41._0_8_ * (dVar3 * dVar2 + auVar4._0_8_ + auVar23._8_8_);
      (param_6->field0_0x0)._s_0.Y = auVar41._8_8_ * (dVar9 * dVar2 + dVar37 + auVar56._0_8_);
      (param_6->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_) *
           (auVar68._0_8_ * dVar2 + dVar38 + auVar47._0_8_);
      dVar3 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar51 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar4 = *(undefined1 (*) [16])&param_7->field0_0x0;
      dVar38 = (param_7->field0_0x0)._s_0.Z;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = dVar38;
      auVar61._8_4_ = SUB84(dVar9,0);
      auVar61._0_8_ = dVar3;
      auVar61._12_4_ = uVar54;
      auVar48._8_4_ = SUB84(dVar36,0);
      auVar48._0_8_ = dVar51;
      uVar53 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar48._12_4_ = uVar53;
      auVar52._8_4_ = SUB84(dVar36,0);
      auVar52._0_8_ = dVar51;
      auVar52._12_4_ = uVar53;
      dVar37 = auVar4._8_8_;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = dVar3;
      auVar8._12_4_ = uVar54;
      auVar47 = blendpd(auVar52,auVar8,2);
      auVar65._0_8_ = dVar37 * dVar51 - auVar4._0_8_ * auVar48._8_8_;
      auVar65._8_8_ = dVar38 * dVar36 - dVar37 * dVar3;
      auVar30 = blendpd(auVar4,auVar69,2);
      auVar32._0_8_ = auVar30._0_8_ * dVar3 - auVar47._0_8_ * dVar38;
      auVar32._8_8_ = auVar30._8_8_ * dVar9 - auVar47._8_8_ * 0.0;
      auVar30 = blendpd(auVar65,auVar32,2);
      dVar1 = auVar65._8_8_ + auVar65._8_8_;
      dVar2 = auVar32._0_8_ + auVar32._0_8_;
      uVar53 = SUB84(dVar2,0);
      uVar54 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar66._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar66._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar42._8_4_ = uVar53;
      auVar42._0_8_ = dVar1;
      auVar42._12_4_ = uVar54;
      auVar24._8_4_ = uVar53;
      auVar24._0_8_ = dVar1;
      auVar24._12_4_ = uVar54;
      auVar33._8_4_ = uVar53;
      auVar33._0_8_ = dVar1;
      auVar33._12_4_ = uVar54;
      auVar30 = blendpd(auVar33,auVar66,2);
      auVar43._0_8_ = auVar42._8_8_ * dVar51 - dVar1 * auVar48._8_8_;
      auVar43._8_8_ = auVar66._0_8_ * dVar36 - auVar24._8_8_ * dVar3;
      auVar25._8_4_ = SUB84(auVar66._8_8_,0);
      auVar25._0_8_ = auVar66._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
      auVar34._0_8_ = auVar30._0_8_ * dVar3 - auVar66._0_8_ * auVar47._0_8_;
      auVar34._8_8_ = auVar30._8_8_ * dVar9 - auVar25._8_8_ * auVar47._8_8_;
      auVar26._8_4_ = SUB84(auVar43._8_8_,0);
      auVar26._0_8_ = auVar43._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      dVar2 = dVar2 * dVar9 + dVar37 + auVar34._0_8_;
      auVar30 = blendpd(auVar43,auVar34,2);
      auVar5._8_4_ = SUB84(dVar2,0);
      auVar5._0_8_ = dVar1 * auVar61._8_8_ + auVar4._0_8_ + auVar26._8_8_;
      auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&param_7->field0_0x0 = auVar5;
      (param_7->field0_0x0)._s_0.Z = auVar66._0_8_ * auVar61._8_8_ + dVar38 + auVar30._0_8_;
      auVar4 = *(undefined1 (*) [16])&param_8->field0_0x0;
      dVar38 = (param_8->field0_0x0)._s_0.Z;
      dVar51 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar1 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar2 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar37 = auVar4._8_8_;
      auVar44._8_4_ = SUB84(dVar36,0);
      auVar44._0_8_ = dVar51;
      uVar53 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar44._12_4_ = uVar53;
      auVar49._8_4_ = SUB84(dVar36,0);
      auVar49._0_8_ = dVar51;
      auVar49._12_4_ = uVar53;
      auVar70._0_8_ = dVar37 * dVar51 - auVar4._0_8_ * auVar44._8_8_;
      auVar70._8_8_ = dVar38 * dVar36 - dVar37 * dVar1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar38;
      auVar30 = blendpd(auVar4,auVar11,2);
      auVar6._8_4_ = SUB84(dVar2,0);
      auVar6._0_8_ = dVar1;
      auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar47 = blendpd(auVar49,auVar6,2);
      auVar35._0_8_ = auVar30._0_8_ * dVar1 - dVar38 * auVar47._0_8_;
      auVar35._8_8_ = auVar30._8_8_ * dVar2 - auVar47._8_8_ * 0.0;
      dVar3 = auVar70._8_8_ + auVar70._8_8_;
      dVar9 = auVar35._0_8_ + auVar35._0_8_;
      uVar53 = SUB84(dVar9,0);
      uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar30 = blendpd(auVar70,auVar35,2);
      auVar71._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar71._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar62._8_4_ = uVar53;
      auVar62._0_8_ = dVar3;
      auVar62._12_4_ = uVar54;
      auVar27._8_4_ = uVar53;
      auVar27._0_8_ = dVar3;
      auVar27._12_4_ = uVar54;
      auVar57._8_4_ = uVar53;
      auVar57._0_8_ = dVar3;
      auVar57._12_4_ = uVar54;
      auVar30 = blendpd(auVar57,auVar71,2);
      auVar63._0_8_ = auVar62._8_8_ * dVar51 - dVar3 * auVar44._8_8_;
      auVar63._8_8_ = auVar71._0_8_ * dVar36 - auVar27._8_8_ * dVar1;
      auVar28._8_4_ = SUB84(auVar71._8_8_,0);
      auVar28._0_8_ = auVar71._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar58._0_8_ = auVar30._0_8_ * dVar1 - auVar71._0_8_ * auVar47._0_8_;
      auVar58._8_8_ = auVar30._8_8_ * dVar2 - auVar28._8_8_ * auVar47._8_8_;
      auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
      auVar72._0_8_ =
           (double)CONCAT44(uVar13 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                            uVar12 & *(uint *)(param_2->Scale3D).XY.m128d_f64);
      auVar72._8_4_ = uVar14 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
      auVar72._12_4_ = uVar15 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      lVar18 = -(ulonglong)
                ((double)CONCAT44(auVar30._4_4_ & uVar13,auVar30._0_4_ & uVar12) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
      lVar19 = -(ulonglong)(auVar72._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar72._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar29._8_4_ = SUB84(auVar63._8_8_,0);
      auVar29._0_8_ = auVar63._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar73._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar47._4_4_,
                            ~(uint)lVar19 & auVar47._0_4_);
      auVar73._8_4_ = ~(uint)lVar20 & auVar47._8_4_;
      auVar73._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar47._12_4_;
      auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar7._0_8_ = auVar30._0_8_;
      auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
      auVar47 = blendpd(auVar63,auVar58,2);
      (param_8->field0_0x0)._s_0.X = auVar73._0_8_ * (dVar3 * dVar2 + auVar4._0_8_ + auVar29._8_8_);
      (param_8->field0_0x0)._s_0.Y = auVar73._8_8_ * (dVar9 * dVar2 + dVar37 + auVar58._0_8_);
      (param_8->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_) *
           (auVar71._0_8_ * dVar2 + dVar38 + auVar47._0_8_);
      pTVar17 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                          (param_2,local_f8,param_9);
      dVar38 = (pTVar17->field0_0x0)._s_0.Y;
      (param_9->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_9->field0_0x0)._s_0.Y = dVar38;
      (param_9->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      dVar38 = (double)param_5->WorldAlpha;
      (param_6->field0_0x0)._s_0.X = (param_6->field0_0x0)._s_0.X * dVar38;
      (param_6->field0_0x0)._s_0.Y = (param_6->field0_0x0)._s_0.Y * dVar38;
      (param_6->field0_0x0)._s_0.Z = dVar38 * (param_6->field0_0x0)._s_0.Z;
      dVar38 = (double)param_5->WorldAlpha;
      (param_8->field0_0x0)._s_0.X = (param_8->field0_0x0)._s_0.X * dVar38;
      (param_8->field0_0x0)._s_0.Y = (param_8->field0_0x0)._s_0.Y * dVar38;
      (param_8->field0_0x0)._s_0.Z = dVar38 * (param_8->field0_0x0)._s_0.Z;
      dVar38 = (double)param_5->WorldAlpha;
      (param_7->field0_0x0)._s_0.X = (param_7->field0_0x0)._s_0.X * dVar38;
      (param_7->field0_0x0)._s_0.Y = (param_7->field0_0x0)._s_0.Y * dVar38;
      (param_7->field0_0x0)._s_0.Z = dVar38 * (param_7->field0_0x0)._s_0.Z;
      dVar38 = (double)param_5->WorldAlpha;
      (param_9->field0_0x0)._s_0.X = (param_9->field0_0x0)._s_0.X * dVar38;
      (param_9->field0_0x0)._s_0.Y = (param_9->field0_0x0)._s_0.Y * dVar38;
      (param_9->field0_0x0)._s_0.Z = dVar38 * (param_9->field0_0x0)._s_0.Z;
      dVar38 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      dVar1 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar38;
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar38 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      dVar1 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
           (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar38;
      dVar38 = (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
      dVar3 = (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar2;
      dVar1 = (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] = dVar38;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar3;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
      dVar38 = (param_2->Rotation).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           (param_2->Rotation).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar38;
      dVar38 = (param_2->Rotation).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           (param_2->Rotation).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar38;
      dVar38 = (param_2->Translation).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
           (param_2->Translation).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar38;
      dVar38 = (param_2->Translation).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
           (param_2->Translation).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar38;
      dVar38 = (param_2->Scale3D).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           (param_2->Scale3D).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar38;
      dVar38 = (param_2->Scale3D).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           (param_2->Scale3D).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar38;
      this->PreviousDt = param_4;
    }
  }
  return;
}

// CollectClothColliderObjects @ 14641f580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::CollectClothColliderObjects
          (FAnimNode_RigidBody *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  FBodyInstance *this_00;
  FSimulation *this_01;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  FWeakObjectPtr *pFVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  USkeletalMeshComponent *this_02;
  UPhysicsAsset *pUVar11;
  TTransform<double> *pTVar12;
  FActorSetup *pFVar13;
  FActorHandle *pFVar14;
  uint uVar15;
  TArray<FAnimNode_RigidBody::FClothCollider,TSizedDefaultAllocator<32>_> *pTVar16;
  FWeakObjectPtr *this_03;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  FPhysicsAggregateReference_Chaos local_217 [7];
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_210;
  uint local_200;
  FWeakObjectPtr *local_1f8;
  FActorHandle *local_1f0;
  USkeletalMeshComponent *pUStack_1e8;
  int local_1e0;
  undefined4 uStack_1dc;
  USkeletalMeshComponent *local_1d8;
  FAnimNode_RigidBody *local_1d0;
  USkeletalMeshComponent *local_1c8;
  FWeakObjectPtr *local_1c0;
  TTransform<double> local_1b8;
  FActorSetup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((((this->bUseExternalClothCollision != false) && (bRBAN_IncludeClothColliders)) &&
      (param_1 != (USkeletalMeshComponent *)0x0)) && (this->PhysicsSimulation != (FSimulation *)0x0)
     ) {
    local_200 = (param_1->ClothCollisionSources).ArrayNum;
    uVar17 = (ulonglong)(int)local_200;
    this_03 = (FWeakObjectPtr *)(param_1->ClothCollisionSources).AllocatorInstance.Data;
    local_1c0 = this_03 + uVar17 * 9;
    local_1d0 = this;
    local_1c8 = param_1;
    while( true ) {
      pFVar7 = local_1c0;
      uVar15 = 0;
      local_1f8 = this_03;
      if ((local_1c8->ClothCollisionSources).ArrayNum != (int)uVar17) {
        local_218 = 0;
        `TCheckedPointerIterator<FClothCollisionSource_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_218);
      }
      if (this_03 == pFVar7) break;
      this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_03);
      local_1d8 = this_02;
      pUVar11 = (UPhysicsAsset *)FWeakObjectPtr::Get(this_03 + 1);
      if ((this_02 != (USkeletalMeshComponent *)0x0) && (pUVar11 != (UPhysicsAsset *)0x0)) {
        local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.ArrayNum = 0;
        local_210.ArrayMax = 0;
        USkeletalMeshComponent::InstantiatePhysicsAssetBodiesRefPose
                  (this_02,pUVar11,&local_210,(FPhysScene_Chaos *)0x0,(USkeletalMeshComponent *)0x0,
                   -1,local_217);
        iVar5 = local_210.ArrayNum;
        if (local_210.ArrayNum != 0) {
          while( true ) {
            uVar9 = 0;
            if ((int)uVar15 < local_210.ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar18 = (longlong)(int)uVar15;
            this_00 = *(FBodyInstance **)(local_210.AllocatorInstance.Data + lVar18 * 8);
            if (this_00->InstanceBoneIndex != -1) {
              this_01 = this->PhysicsSimulation;
              pTVar12 = FBodyInstance::GetUnrealWorldTransform(this_00,&local_1b8,true,false);
              pFVar13 = ImmediatePhysics::MakeKinematicActorSetup(&local_158,this_00,pTVar12);
              pFVar14 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_01,pFVar13);
              ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_158);
              ImmediatePhysics_Chaos::FSimulation::AddToCollidingPairs
                        (this->PhysicsSimulation,pFVar14);
              pTVar16 = &this->ClothColliders;
              pUStack_1e8 = local_1d8;
              local_1e0 = (int)this_00->InstanceBoneIndex;
              pFVar2 = (pTVar16->AllocatorInstance).Data;
              local_1f0 = pFVar14;
              if (((pFVar2 <= (FScriptContainerElement *)&local_1f0) &&
                  ((FScriptContainerElement *)&local_1f0 <
                   pFVar2 + (longlong)(this->ClothColliders).ArrayMax * 0x18)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar10 = (this->ClothColliders).ArrayNum;
              piVar1 = &(this->ClothColliders).ArrayMax;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&pTVar16->AllocatorInstance,piVar1);
              }
              (this->ClothColliders).ArrayNum = iVar10 + 1;
              pFVar3 = (pTVar16->AllocatorInstance).Data;
              pFVar2 = pFVar3 + (longlong)iVar10 * 0x18;
              *(FActorHandle **)pFVar2 = local_1f0;
              *(USkeletalMeshComponent **)(pFVar2 + 8) = pUStack_1e8;
              *(ulonglong *)(pFVar3 + (longlong)iVar10 * 0x18 + 0x10) =
                   CONCAT44(uStack_1dc,local_1e0);
              this = local_1d0;
            }
            bVar8 = FBodyInstance::IsValidBodyInstance(this_00);
            if (bVar8) {
              FBodyInstance::TermBody(this_00,true);
            }
            FBodyInstance::~FBodyInstance(this_00);
            ::operator_delete(this_00,400);
            uVar9 = 0;
            if ((int)uVar15 < local_210.ArrayNum) {
              uVar9 = ~uVar15 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = uVar15 + 1;
            *(undefined8 *)(local_210.AllocatorInstance.Data + lVar18 * 8) = 0;
            this_03 = local_1f8;
            if ((uint)iVar5 <= uVar15) break;
          }
        }
        uVar6 = local_210._8_8_;
        iVar5 = local_210.ArrayMax;
        local_210._8_8_ = (ulonglong)(uint)local_210.ArrayMax << 0x20;
        if (((longlong)uVar6 < 0) && (iVar5 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_210.AllocatorInstance,0,&local_210.ArrayMax);
        }
        if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.AllocatorInstance.Data);
        }
      }
      this_03 = this_03 + 9;
      uVar17 = (ulonglong)local_200;
    }
  }
  return;
}

// CollectWorldObjects @ 14641f980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::CollectWorldObjects(FAnimNode_RigidBody *this)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  undefined1 *puVar2;
  FSimulation *this_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  FActorSetup *pFVar6;
  FActorHandle *pFVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1b8 [8];
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_1b0;
  undefined1 local_1a0 [16];
  TPairInitializer<UPrimitiveComponent_const_*_const_&,FAnimNode_RigidBody::FWorldObject_&&>
  local_190;
  FCollisionResponseContainer_u_0 local_180;
  FActorSetup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = this->UnsafeWorld;
  if ((this_00 != (UWorld *)0x0) && (this->PhysScene != (FPhysScene_Chaos *)0x0)) {
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    FCollisionResponseContainer::FCollisionResponseContainer
              ((FCollisionResponseContainer *)&local_180._s_0);
    FCollisionResponseContainer::SetAllChannels
              ((FCollisionResponseContainer *)&local_180._s_0,ECR_Overlap);
    local_1a0._4_4_ = (float)(this->CachedBounds).W;
    local_1a0._0_4_ = 2;
    UWorld::OverlapMultiByChannel
              (this_00,&local_1b0,&(this->CachedBounds).Center,&UE::Math::TQuat<double>::Identity,
               (uint)(this->OverlapChannel).Value,(FCollisionShape *)local_1a0,&this->QueryParams,
               (FCollisionResponseParams *)&local_180._s_0);
    iVar3 = local_1b0.ArrayNum;
    uVar9 = (ulonglong)local_1b0.ArrayNum;
    pFVar1 = local_1b0.AllocatorInstance.Data + uVar9 * 0x48;
    FVar12.Data = local_1b0.AllocatorInstance.Data;
LAB_14641fa77:
    if ((int)uVar9 != iVar3) {
      `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1b8);
    }
    if (FVar12.Data != pFVar1) {
      local_190.Value = (FWorldObject *)FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar12.Data + 0x20));
      if ((UObject *)local_190.Value != (UObject *)0x0) {
        uVar4 = ((uint)((ulonglong)local_190.Value >> 0x14) & 0xffff ^
                (uint)((ulonglong)local_190.Value >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        if (*(int *)&(this->ComponentsInSim).field_0x8 !=
            *(int *)&(this->ComponentsInSim).field_0x34) {
          puVar2 = *(undefined1 **)&(this->ComponentsInSim).field_0x40;
          puVar10 = &(this->ComponentsInSim).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar10 = puVar2;
          }
          iVar5 = *(int *)(puVar10 +
                          (ulonglong)
                          (*(int *)&(this->ComponentsInSim).field_0x48 - 1U &
                          (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar5 != -1) {
            do {
              plVar8 = (longlong *)
                       ((longlong)iVar5 * 0x20 + *(longlong *)&(this->ComponentsInSim).field_0x0);
              if ((UObject *)*plVar8 == (UObject *)local_190.Value) {
                plVar11 = plVar8 + 1;
                if (plVar8 == (longlong *)0x0) {
                  plVar11 = (longlong *)0x0;
                }
                if (plVar11 != (longlong *)0x0) {
                  FVar12.Data = FVar12.Data + 0x48;
                  *(int *)(plVar11 + 1) = this->ComponentsInSimTick;
                  uVar9 = local_1b0._8_8_ & 0xffffffff;
                  goto LAB_14641fa77;
                }
                break;
              }
              iVar5 = (int)plVar8[3];
            } while (iVar5 != -1);
          }
        }
        if (this->UnsafeOwner !=
            *(AActor **)&((UObject *)((longlong)local_190.Value + 0xa0))->field_0x8) {
          this_01 = this->PhysicsSimulation;
          pFVar6 = ImmediatePhysics::MakeKinematicActorSetup
                             (&local_158,
                              (FBodyInstance *)
                              &((UObject *)((longlong)local_190.Value + 0x370))->field_0x20,
                              (TTransform<double> *)
                              &((UObject *)((longlong)local_190.Value + 0x1e0))->field_0x10);
          pFVar7 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_01,pFVar6);
          ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_158);
          ImmediatePhysics_Chaos::FSimulation::AddToCollidingPairs(this->PhysicsSimulation,pFVar7);
          local_1a0._8_4_ = this->ComponentsInSimTick;
          local_1a0[0xc] = local_1a0[0xc] & 0xfe | 2;
          local_180._0_8_ = &local_190.Value;
          local_180._8_8_ = local_1a0;
          local_1a0._0_8_ = pFVar7;
          TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UPrimitiveComponent_const_*_const_&,FAnimNode_RigidBody::FWorldObject_&&>_>
                    ((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
                      *)&this->ComponentsInSim,&local_190,(bool *)local_180.EnumArray);
        }
      }
      uVar9 = local_1b0._8_8_ & 0xffffffff;
      FVar12.Data = FVar12.Data + 0x48;
      goto LAB_14641fa77;
    }
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
  }
  return;
}

// DestroyPhysicsSimulation @ 1464230f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::DestroyPhysicsSimulation(FAnimNode_RigidBody *this)

{
  FSimulation *this_00;
  
  (this->ClothColliders).ArrayNum = 0;
  if ((this->ClothColliders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ClothColliders).AllocatorInstance,0,&(this->ClothColliders).ArrayMax
              );
  }
  FlushDeferredSimulationTask(this);
  this_00 = this->PhysicsSimulation;
  if (this_00 != (FSimulation *)0x0) {
    ImmediatePhysics_Chaos::FSimulation::~FSimulation(this_00);
    ::operator_delete(this_00,0x40);
  }
  this->PhysicsSimulation = (FSimulation *)0x0;
  return;
}

// EvaluateComponentPose_AnyThread @ 146426700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::EvaluateComponentPose_AnyThread
          (FAnimNode_RigidBody *this,FComponentSpacePoseContext *param_1)

{
  undefined1 *puVar1;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> *pTVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::EvaluateComponentPose_AnyThread");
  if ((this->bFreezeIncomingPoseOnStart == '\0') || (this->bSimulationStarted == '\0')) {
    FStatsHierarchical::BeginMeasurement
              ("FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread");
    FComponentSpacePoseLink::EvaluateComponentSpace
              ((FComponentSpacePoseLink *)&this->field_0x10,param_1);
    FStatsHierarchical::EndMeasurement();
  }
  else {
    if (this->ResetSimulatedTeleportType == None) {
      iVar3 = *(int *)&(this->CapturedFrozenPose).Pose.field_0x8;
      if (0 < iVar3) {
        pvVar5 = *(void **)&(this->CapturedFrozenPose).Pose;
        puVar1 = &(param_1->Pose).Pose.field_0xc;
        *(int *)&(param_1->Pose).Pose.field_0x8 = iVar3;
        UE::Core::Private::
        ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
                  (0x60,0x10,iVar3,*(int *)puVar1,
                   (ForElementType<UE::Math::TTransform<double>_> *)&param_1->Pose,iVar3,
                   (int *)puVar1);
        memcpy(*(void **)&(param_1->Pose).Pose,pvVar5,(longlong)iVar3 * 0x60);
        pTVar2 = &(param_1->Pose).ComponentSpaceFlags;
        *(undefined8 *)&(param_1->Pose).Pose.field_0x10 =
             *(undefined8 *)&(this->CapturedFrozenPose).Pose.field_0x10;
        puVar1 = &(param_1->Pose).ComponentSpaceFlags.field_0xc;
        iVar3 = *(int *)&(this->CapturedFrozenPose).ComponentSpaceFlags.field_0x8;
        pvVar5 = *(void **)&(this->CapturedFrozenPose).ComponentSpaceFlags;
        iVar4 = *(int *)puVar1;
        *(int *)&(param_1->Pose).ComponentSpaceFlags.field_0x8 = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *(undefined4 *)puVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                    (1,1,iVar3,iVar4,(ForElementType<unsigned_char> *)pTVar2,iVar3,(int *)puVar1);
          if (iVar3 != 0) {
            memcpy(*(void **)pTVar2,pvVar5,(longlong)iVar3);
          }
        }
        TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
        CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
                  ((TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                   &param_1->Curve,
                   (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
                   &this->CapturedFrozenCurves);
        goto LAB_146426892;
      }
    }
    FStatsHierarchical::BeginMeasurement
              ("FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread");
    FComponentSpacePoseLink::EvaluateComponentSpace
              ((FComponentSpacePoseLink *)&this->field_0x10,param_1);
    FStatsHierarchical::EndMeasurement();
    FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>
              (&this->CapturedFrozenPose,&param_1->Pose);
    TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
    CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
              ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
               &this->CapturedFrozenCurves,
               (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)&param_1->Curve);
  }
LAB_146426892:
  if ((this->bTransferBoneVelocities != '\0') && (this->bSimulationStarted == '\0')) {
    FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>
              (&this->CapturedBoneVelocityPose,&param_1->Pose);
    FBoneContainer::operator=
              (&this->CapturedBoneVelocityBoneContainer,
               *(FBoneContainer **)&(this->CapturedBoneVelocityPose).Pose.field_0x10);
    *(FBoneContainer **)&(this->CapturedBoneVelocityPose).Pose.field_0x10 =
         &this->CapturedBoneVelocityBoneContainer;
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// EvaluateSkeletalControl_AnyThread @ 146430630

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread
          (FAnimNode_RigidBody *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  atomic<unsigned_int> *paVar1;
  FTaskHandle *pFVar2;
  atomic<unsigned_int> aVar3;
  ESimulationSpace EVar4;
  int iVar5;
  FCompactPoseBoneIndex FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  double *pdVar22;
  undefined1 auVar23 [16];
  bool bVar24;
  char cVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  TConsoleVariableData<int> *pTVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  FCompactPoseBoneIndex FVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  FName *pFVar41;
  FThreadSafeStaticStat<FStat_STAT_RigidBody_Eval> FVar42;
  FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl> FVar43;
  TEventRef<unsigned_int> TVar44;
  FTaskBase *pFVar45;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait> FVar46;
  undefined4 extraout_var;
  TTransform<double> *pTVar47;
  TVector<double> *pTVar48;
  TTransform<double> *pTVar49;
  FWriteBuffer *pFVar50;
  uint uVar51;
  ulonglong uVar52;
  FActorHandle *pFVar53;
  FScriptContainerElement *pFVar54;
  FTaskBase *pFVar55;
  FTaskHandle FVar56;
  FName FVar57;
  longlong lVar58;
  FComponentSpacePoseContext *pFVar59;
  FCompactPoseBoneIndex *pFVar60;
  FScriptContainerElement *pFVar61;
  FName FVar62;
  FName FVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  longlong lVar67;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar68;
  uint uVar69;
  float fVar70;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar71;
  uint uVar72;
  uint uVar73;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar76;
  undefined4 uVar77;
  double dVar78;
  double dVar79;
  __m128d _Var80;
  undefined8 uVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar90;
  double dVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  __m128d _Var97;
  undefined1 auVar98 [16];
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  double dVar111;
  double dVar112;
  uint uVar114;
  undefined1 auVar113 [16];
  float fVar115;
  double dVar116;
  double dVar117;
  double dVar121;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar122;
  float fVar123;
  float fVar124;
  double dVar125;
  double dVar126;
  uint uVar127;
  uint uVar128;
  undefined1 auStackY_10f8 [32];
  double local_1090;
  undefined1 local_1070;
  undefined1 local_106f;
  undefined1 local_106e;
  undefined1 local_106d;
  undefined1 local_106c;
  undefined1 local_106b;
  undefined1 local_106a;
  undefined1 local_1069;
  undefined1 local_1068;
  undefined1 local_1067;
  undefined1 local_1066;
  undefined1 local_1065;
  float local_1064;
  uint local_1060;
  FName local_1058;
  FComponentSpacePoseContext *local_1050;
  FName local_1048;
  undefined1 local_1040 [16];
  FLLMScope local_1030 [2];
  FTaskHandle local_1028;
  FColor_u_0 local_1020;
  FColor_u_0 local_101c;
  FColor_u_0 local_1018;
  uint local_1014;
  TVector<double>_u_0 local_1010;
  FName local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  FName local_fd8;
  FName local_fd0;
  FName local_fc8;
  FName local_fb8;
  FName local_fa8;
  undefined1 local_f98 [16];
  undefined1 local_f88 [16];
  double local_f78;
  undefined1 local_f68 [16];
  FMemScope local_f58;
  FString local_f50;
  FString local_f40;
  FString local_f30;
  undefined4 local_f18;
  undefined4 uStack_f14;
  int iStack_f10;
  int iStack_f0c;
  ForAnyElementType local_f08;
  double dStack_f00;
  TArray<int,TSizedDefaultAllocator<32>_> local_ef8;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_ee8;
  undefined4 local_ed8;
  undefined4 uStack_ed4;
  int iStack_ed0;
  int iStack_ecc;
  undefined4 local_ec8;
  undefined4 uStack_ec4;
  int iStack_ec0;
  int iStack_ebc;
  FSimSpaceSettings local_eb8;
  TVector<double>_u_0 local_e48;
  TVector<double>_u_0 local_e30;
  TVector<double>_u_0 local_e18;
  TVector<double>_u_0 local_e00;
  FName local_de8;
  FName local_de0;
  FName local_dd8;
  FName local_dd0;
  undefined1 local_dc8 [16];
  double local_db8;
  <lambda_3> local_db0;
  FName local_d88;
  FName local_d80;
  double local_d78;
  double dStack_d70;
  double local_d68;
  undefined1 local_d60 [16];
  double local_d50;
  double local_d48;
  double dStack_d40;
  double local_d38;
  double local_d30;
  double dStack_d28;
  double local_d20;
  double local_d18;
  double dStack_d10;
  double local_d08;
  double local_d00;
  double dStack_cf8;
  double local_cf0;
  double local_ce8 [2];
  double local_cd8;
  double local_cd0 [2];
  double local_cc0;
  double local_cb8 [2];
  double local_ca8;
  double local_ca0;
  double dStack_c98;
  double local_c90;
  double local_c88;
  double dStack_c80;
  double local_c78;
  double local_c70;
  double dStack_c68;
  double local_c60;
  TVector<double> local_c58;
  TVector<double> local_c40;
  TVector<double> local_c28;
  TVector<double> local_c10;
  double local_bf8;
  double dStack_bf0;
  double local_be8;
  undefined1 local_be0 [16];
  double local_bd0;
  double local_bc8 [2];
  double local_bb8;
  double local_bb0 [2];
  double local_ba0;
  double local_b98;
  double dStack_b90;
  double local_b88;
  double dStack_b80;
  TVector<double> local_b78;
  TVector<double> local_b60;
  TVector<double> local_b48;
  TTransform<double> local_b28;
  TTransform<double> local_ac8;
  TTransform<double> local_a68;
  TTransform<double> local_a08;
  TTransform<double> local_9a8;
  TTransform<double> local_948;
  TTransform<double> local_8e8;
  TTransform<double> local_888;
  TTransform<double> local_828;
  undefined4 *local_7c8;
  longlong local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined8 uStack_7b0;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  int iStack_7a0;
  int iStack_79c;
  FScriptContainerElement *local_798;
  double dStack_790;
  TArray<int,TSizedDefaultAllocator<32>_> local_788;
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> local_778;
  undefined4 local_768;
  undefined4 uStack_764;
  int iStack_760;
  int iStack_75c;
  undefined4 local_758;
  undefined4 uStack_754;
  int iStack_750;
  int iStack_74c;
  TTransform<double> local_748;
  TTransform<double> local_6e8;
  TTransform<double> local_688;
  TTransform<double> local_628;
  TTransform<double> local_5c8;
  TTransform<double> local_568;
  TTransform<double> local_508;
  TTransform<double> local_4a8;
  TTransform<double> local_448;
  TTransform<double> local_3e8;
  TTransform<double> local_388;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_10f8;
  local_1050 = param_1;
  local_f68._8_8_ = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name506,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_1030,LLMScope_Name506,false,None,Default,true);
  FMemScope::FMemScope(&local_f58,&LLMScope_Name506,true);
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread");
  pFVar55 = (FTaskBase *)0x0;
  uVar69 = 0;
  FVar42 = StatPtr_STAT_RigidBody_Eval;
  if (StatPtr_STAT_RigidBody_Eval == (FThreadSafeStaticStat<FStat_STAT_RigidBody_Eval>)0x0) {
    pFVar41 = ::FName::FName(&local_dd0,"STAT_RigidBody_Eval");
    FVar42 = (FThreadSafeStaticStat<FStat_STAT_RigidBody_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBody_Eval,*pFVar41,
                        L"RigidBody_Eval","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar62 = *(FName *)FVar42;
  bVar27 = false;
  bVar31 = false;
  local_fb8.ComparisonIndex.Value = 0;
  local_fb8.Number = 0;
  bVar34 = false;
  bVar26 = false;
  if ((FVar62.ComparisonIndex.Value.Value == 0) && (FVar62.Number == 0)) {
LAB_14643083b:
    bVar31 = bVar26;
    bVar27 = bVar34;
    bVar34 = false;
    local_1058 = local_fb8;
    FVar62 = local_fb8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_101c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_101c._s_0,(char *)*(FName *)((longlong)FVar42 + 0x10));
      bVar27 = false;
      bVar31 = true;
      bVar34 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_fd0.ComparisonIndex.Value = FVar62.ComparisonIndex.Value.Value;
        local_fd0.Number = FVar62.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_fd0,(wchar_t *)*(FName *)((longlong)FVar42 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x1fc);
        bVar27 = true;
        bVar31 = true;
        bVar34 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14643083b;
    local_1058 = FVar62;
    FThreadStats::AddMessage(FVar62,CycleScopeStart);
    bVar34 = true;
  }
  if (__CsvProfilerStat509 == false) {
    FCsvProfilerTrace::OutputInlineStat("RigidBodyEval",_GCsvCategory_Animation.Index);
    __CsvProfilerStat509 = true;
  }
  local_1014 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("RigidBodyEval",_GCsvCategory_Animation.Index,"CSV_RigidBodyEval");
  FVar43 = StatPtr_STAT_ImmediateEvaluateSkeletalControl;
  if (StatPtr_STAT_ImmediateEvaluateSkeletalControl ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl>)0x0) {
    pFVar41 = ::FName::FName(&local_d88,"STAT_ImmediateEvaluateSkeletalControl");
    FVar43 = (FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateEvaluateSkeletalControl,
                        *pFVar41,L"FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread",
                        "STATGROUP_ImmediatePhysics","STATCAT_Advanced",L"Immediate Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar63 = *(FName *)FVar43;
  bVar26 = false;
  bVar30 = false;
  local_fc8.ComparisonIndex.Value = 0;
  local_fc8.Number = 0;
  bVar33 = false;
  bVar36 = false;
  if ((FVar63.ComparisonIndex.Value.Value == 0) && (FVar63.Number == 0)) {
LAB_1464309a8:
    bVar30 = bVar36;
    bVar26 = bVar33;
    bVar33 = false;
    local_1048 = local_fc8;
    FVar63 = local_fc8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1020.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1020._s_0,(char *)*(FName *)((longlong)FVar43 + 0x10));
      bVar26 = false;
      bVar30 = true;
      bVar33 = false;
      bVar36 = true;
      if (-1 < CpuChannel->Enabled) {
        local_ff8.ComparisonIndex.Value = FVar63.ComparisonIndex.Value.Value;
        local_ff8.Number = FVar63.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_ff8,(wchar_t *)*(FName *)((longlong)FVar43 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x1fe);
        bVar26 = true;
        bVar30 = true;
        bVar33 = true;
        bVar36 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464309a8;
    local_1048 = FVar63;
    FThreadStats::AddMessage(FVar63,CycleScopeStart);
    bVar33 = true;
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_ff0 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_ff0;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(&local_d80);
  }
  uVar89 = *(undefined8 *)TVar44;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_fe8 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_fe8;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(&local_dd8);
  }
  uVar7 = *(undefined8 *)TVar44;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_fe0 = 0;
    TVar44 = (TEventRef<unsigned_int>)&local_fe0;
  }
  else {
    TVar44 = FStringTrace::GetNameRef(&local_de8);
  }
  uVar8 = *(undefined8 *)TVar44;
  bVar36 = false;
  bVar29 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_7c8);
    bVar36 = true;
    bVar29 = true;
    *local_7c8 = (int)uVar89;
    local_7c8[1] = (int)uVar7;
    local_7c8[2] = (int)uVar8;
    *(undefined8 *)(local_7c0 + 0x28) = *(undefined8 *)(local_7c0 + 0x20);
  }
  pTVar32 = CVarEnableRigidBodyNodeSimulation.Ref;
  bVar35 = IsInParallelGameThread();
  if (bVar35) {
LAB_146430af5:
    pFVar45 = pFVar55;
  }
  else {
    bVar35 = IsInGameThread();
    pFVar45 = (FTaskBase *)&DAT_00000004;
    if (bVar35) goto LAB_146430af5;
  }
  if (*(int *)((longlong)pTVar32[-0xb].ShadowedValue + (longlong)&pFVar45->Prerequisites) == 0)
  goto LAB_146433aaf;
  fVar122 = this->AccumulatedDeltaTime;
  this->AccumulatedDeltaTime = 0.0;
  local_1064 = fVar122;
  if ((this->bEnabled == 0) || (this->PhysicsSimulation == (FSimulation *)0x0)) goto LAB_146433aaf;
  pFVar45 = (this->SimulationTask).Pimpl.Reference;
  if ((pFVar45 != (FTaskBase *)0x0) && ((pFVar45->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    FVar46 = StatPtr_STAT_RigidBodyNode_SimulationWait;
    if (StatPtr_STAT_RigidBodyNode_SimulationWait ==
        (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait>)0x0) {
      pFVar41 = ::FName::FName(&local_de0,"STAT_RigidBodyNode_SimulationWait");
      FVar46 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNode_SimulationWait,
                          *pFVar41,L"RigidBodyNode_SimulationWait","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar57 = *(FName *)FVar46;
    bVar35 = false;
    bVar28 = false;
    local_fa8.ComparisonIndex.Value = 0;
    local_fa8.Number = 0;
    if ((FVar57.ComparisonIndex.Value.Value == 0) && (FVar57.Number == 0)) {
LAB_146430c84:
      bVar24 = false;
      FVar57 = local_fa8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1018.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1018._s_0,(char *)*(FName *)((longlong)FVar46 + 0x10));
        bVar35 = false;
        bVar28 = true;
        if (-1 < CpuChannel->Enabled) {
          local_fd8.ComparisonIndex.Value = FVar57.ComparisonIndex.Value.Value;
          local_fd8.Number = FVar57.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_fd8,(wchar_t *)*(FName *)((longlong)FVar46 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                     ,0x1ea);
          bVar35 = true;
          bVar28 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_146430c84;
      FThreadStats::AddMessage(FVar57,CycleScopeStart);
      bVar24 = true;
    }
    if (__CsvProfilerStat491 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("RigidBodyNodeSimulationWait",_GCsvCategory_Animation.Index);
      __CsvProfilerStat491 = true;
    }
    local_1060 = _GCsvCategory_Animation.Index;
    FCsvProfiler::BeginStat
              ("RigidBodyNodeSimulationWait",_GCsvCategory_Animation.Index,
               "CSV_RigidBodyNodeSimulationWait");
    pFVar45 = (this->SimulationTask).Pimpl.Reference;
    if (pFVar45 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar45);
    }
    FCsvProfiler::EndStat("RigidBodyNodeSimulationWait",local_1060);
    if (bVar28) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar35) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar24) {
      FThreadStats::AddMessage(FVar57,CycleScopeEnd);
    }
  }
  lVar58 = local_1050->_padding_;
  lVar67 = *(longlong *)&(local_1050->Pose).Pose.field_0x10;
  local_b28.Rotation.XY.m128d_f64[0] = *(double *)(lVar58 + 0x20);
  local_b28.Rotation.XY.m128d_f64[1] = *(double *)(lVar58 + 0x28);
  local_b28.Rotation.ZW.m128d_f64[0] = *(double *)(lVar58 + 0x30);
  local_b28.Rotation.ZW.m128d_f64[1] = *(double *)(lVar58 + 0x38);
  local_b28.Translation.XY.m128d_f64[0] = *(double *)(lVar58 + 0x40);
  local_b28.Translation.XY.m128d_f64[1] = *(double *)(lVar58 + 0x48);
  local_b28.Translation.ZW.m128d_f64[0] = *(double *)(lVar58 + 0x50);
  local_b28.Translation.ZW.m128d_f64[1] = *(double *)(lVar58 + 0x58);
  local_b28.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar58 + 0x60);
  local_b28.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar58 + 0x70);
  if ((*(short *)(lVar58 + 0x5c0) == -1) || (*(longlong *)(lVar58 + 0x5b8) == -1)) {
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = local_b28.Rotation.XY.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = local_b28.Rotation.XY.m128d_f64[1];
    bVar35 = true;
    this->ResetSimulatedTeleportType = ResetPhysics;
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = local_b28.Rotation.ZW.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = local_b28.Rotation.ZW.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
         local_b28.Translation.XY.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] =
         local_b28.Translation.XY.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
         local_b28.Translation.ZW.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] =
         local_b28.Translation.ZW.m128d_f64[1];
    *&(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 = local_b28.Scale3D.XY.m128d_f64;
    *&(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 = local_b28.Scale3D.ZW.m128d_f64;
  }
  else {
    bVar35 = false;
  }
  dVar79 = local_b28.Rotation.ZW.m128d_f64[1];
  if (((0.0 < this->EvaluationResetTime) && (!bVar35)) &&
     (dVar79 = 0.0,
     (double)this->EvaluationResetTime <
     this->WorldTimeSeconds - ((double)fVar122 + this->LastEvalTimeSeconds))) {
    if (5 < (byte)LogRBAN._0_1_) {
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)(local_1050->_padding_ + 0x140),&local_f40,(UObject *)0x0,
                 None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRBAN);
      if (local_f40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f40.Data.AllocatorInstance.Data);
      }
    }
    this->ResetSimulatedTeleportType = ResetPhysics;
  }
  this->LastEvalTimeSeconds = this->WorldTimeSeconds;
  _Var97.m128d_f64 = local_b28.Scale3D.ZW.m128d_f64;
  if (this->SimulationSpace == WorldSpace) {
    auVar17._4_8_ = dVar79;
    auVar17._0_4_ = local_b28.Scale3D.XY.m128d_f64[0]._4_4_;
    auVar92._0_8_ = auVar17._0_8_ << 0x20;
    auVar92._8_4_ = local_b28.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar92._12_4_ = local_b28.Scale3D.XY.m128d_f64[1]._4_4_;
    local_bb8 = local_b28.Scale3D.ZW.m128d_f64[0];
    _Var97.m128d_f64[1] = local_b28.Scale3D.ZW.m128d_f64[1];
    _Var97.m128d_f64[0] = local_bb8 * local_bb8;
    local_bc8 = local_b28.Scale3D.XY.m128d_f64;
    if (auVar92._8_8_ * auVar92._8_8_ +
        local_b28.Scale3D.XY.m128d_f64[0] * local_b28.Scale3D.XY.m128d_f64[0] + _Var97.m128d_f64[0]
        < (double)(this->WorldSpaceMinimumScale * this->WorldSpaceMinimumScale)) goto LAB_146433aaf;
  }
  FVar37 = FBoneReference::GetCompactPoseIndex(&this->BaseBoneRef,(FBoneContainer *)local_f68);
  pFVar59 = local_1050;
  pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&local_1050->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar37));
  local_828.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
  local_828.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
  local_828.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
  local_828.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
  local_828.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
  local_828.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
  local_828.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
  local_828.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
  local_828.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
  local_828.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
  _Var80.m128d_f64 = *&(pTVar47->Scale3D).ZW.m128d_f64;
  local_828.Scale3D.ZW.m128d_f64 = _Var80.m128d_f64;
  if ((this->ResetSimulatedTeleportType == None) && (this->bCheckForBodyTransformInit != '\0')) {
    this->field_0x314 = this->field_0x314 & 0xfb;
    InitializeNewBodyTransformsDuringSimulation(this,pFVar59,&local_b28,&local_828);
  }
  dVar91 = __real_bff0000000000000;
  dVar79 = __real_3ff0000000000000;
  uVar40 = 0;
  uVar38 = 0;
  if (this->ResetSimulatedTeleportType != None) {
    if ((this->bTransferBoneVelocities != '\0') &&
       (0 < *(int *)&(this->CapturedBoneVelocityPose).Pose.field_0x8)) {
      iVar5 = (this->OutputBoneData).ArrayNum;
      pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != iVar5) {
          local_1070 = 0;
          `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1070);
        }
        pFVar59 = local_1050;
        if (pFVar54 == pFVar61) break;
        uVar73 = *(uint *)(pFVar54 + 0x14);
        lVar58 = (longlong)(int)uVar73;
        uVar51 = uVar69;
        if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
          uVar51 = ~uVar73 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->BodyAnimData).AllocatorInstance.Data;
        if (((byte)pFVar9[lVar58 * 0x50 + 0x4c] & 1) == 0) {
LAB_14643155b:
          pFVar54 = pFVar54 + 0x20;
        }
        else {
          FVar37 = *(FCompactPoseBoneIndex *)(pFVar54 + 0x10);
          if (((int)FVar37 < 0) || (*(int *)(lVar67 + 0x78) <= (int)FVar37)) {
            bVar36 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8192494858347217501>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                                ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())"
                               );
            if (bVar36) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            goto LAB_14643155b;
          }
          uVar73 = uVar40;
          if ((int)FVar37 < *(int *)(lVar67 + 0x78)) {
            uVar73 = ~(uint)FVar37 >> 0x1f;
          }
          if ((uVar73 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_1060 = *(uint *)(*(longlong *)(lVar67 + 0x70) + (longlong)(int)FVar37 * 4);
          if (((int)local_1060 < 0) ||
             ((this->CapturedBoneVelocityBoneContainer).SkeletonToCompactPose.ArrayNum <=
              (int)local_1060)) goto LAB_14643155b;
          if (((int)local_1060 < 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar6 = *(FCompactPoseBoneIndex *)
                   ((this->CapturedBoneVelocityBoneContainer).SkeletonToCompactPose.
                    AllocatorInstance.Data + (longlong)(int)local_1060 * 4);
          if (FVar6 == (FCompactPoseBoneIndex)0xffffffff) goto LAB_14643155b;
          pTVar47 = FCSPose<FCompactHeapPose>::GetComponentSpaceTransform
                              (&this->CapturedBoneVelocityPose,FVar6);
          local_568.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
          local_568.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
          local_568.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
          local_568.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
          local_568.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
          local_568.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
          local_568.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
          local_568.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
          local_568.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
          local_568.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
          local_568.Scale3D.ZW.m128d_f64[0] = (pTVar47->Scale3D).ZW.m128d_f64[0];
          local_568.Scale3D.ZW.m128d_f64[1] = (pTVar47->Scale3D).ZW.m128d_f64[1];
          pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_1050->Pose,FVar37);
          local_4a8.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
          local_4a8.Rotation.XY.m128d_f64[1] = (pTVar47->Rotation).XY.m128d_f64[1];
          local_4a8.Rotation.ZW.m128d_f64[0] = (pTVar47->Rotation).ZW.m128d_f64[0];
          local_4a8.Rotation.ZW.m128d_f64[1] = (pTVar47->Rotation).ZW.m128d_f64[1];
          local_4a8.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
          local_4a8.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
          local_4a8.Translation.ZW.m128d_f64[0] = (pTVar47->Translation).ZW.m128d_f64[0];
          local_4a8.Translation.ZW.m128d_f64[1] = (pTVar47->Translation).ZW.m128d_f64[1];
          local_4a8.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
          local_4a8.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
          local_4a8.Scale3D.ZW.m128d_f64[0] = (pTVar47->Scale3D).ZW.m128d_f64[0];
          local_4a8.Scale3D.ZW.m128d_f64[1] = (pTVar47->Scale3D).ZW.m128d_f64[1];
          ConvertCSTransformToSimSpace
                    (&local_3e8,this->SimulationSpace,&local_568,&local_b28,&local_828);
          ConvertCSTransformToSimSpace
                    (&local_448,this->SimulationSpace,&local_4a8,&local_b28,&local_828);
          uVar89 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (fVar122 <= 0.0) {
            pFVar54 = pFVar54 + 0x20;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x20) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            *(undefined8 *)(pFVar9 + lVar58 * 0x50 + 0x20 + 8) = uVar89;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x30) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            *(undefined1 (*) [16])(pFVar9 + lVar58 * 0x50) =
                 (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
            dVar111 = UE::Math::TQuat<double>::Identity.W;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x10) = UE::Math::TQuat<double>::Identity.Z;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x10 + 8) = dVar111;
          }
          else {
            auVar18._4_8_ = _Var97.m128d_f64[1];
            auVar18._0_4_ = local_448.Translation.XY.m128d_f64[0]._4_4_;
            auVar94._0_8_ = auVar18._0_8_ << 0x20;
            auVar94._8_4_ = local_448.Translation.XY.m128d_f64[1]._0_4_;
            auVar94._12_4_ = local_448.Translation.XY.m128d_f64[1]._4_4_;
            local_ba0 = local_448.Translation.ZW.m128d_f64[0];
            local_d68 = local_3e8.Translation.ZW.m128d_f64[0];
            local_bb0[0] = local_448.Translation.XY.m128d_f64[0];
            local_bb0[1] = local_448.Translation.XY.m128d_f64[1];
            dVar111 = dVar79 / (double)fVar122;
            local_d78 = local_3e8.Translation.XY.m128d_f64[0];
            dStack_d70 = local_3e8.Translation.XY.m128d_f64[1];
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x20) =
                 (local_448.Translation.XY.m128d_f64[0] - local_3e8.Translation.XY.m128d_f64[0]) *
                 dVar111;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x28) =
                 (auVar94._8_8_ - local_3e8.Translation.XY.m128d_f64[1]) * dVar111;
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x30) =
                 (local_448.Translation.ZW.m128d_f64[0] - local_3e8.Translation.ZW.m128d_f64[0]) *
                 dVar111;
            dVar116 = local_448.Rotation.XY.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar121 = local_448.Rotation.XY.m128d_f64[1] *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar111 = local_448.Rotation.ZW.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar78 = local_448.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar118._8_8_ = local_3e8.Rotation.XY.m128d_f64[0];
            auVar118._0_8_ = local_3e8.Rotation.XY.m128d_f64[1];
            auVar113._8_4_ = SUB84(dVar78,0);
            auVar113._0_8_ = dVar111;
            auVar113._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
            dVar125 = dVar116 * local_3e8.Rotation.XY.m128d_f64[1] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                      local_3e8.Rotation.ZW.m128d_f64[0] * auVar113._8_8_ +
                      local_3e8.Rotation.XY.m128d_f64[0] * dVar121 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                      dVar111 * local_3e8.Rotation.ZW.m128d_f64[1] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar126 = dVar116 * local_3e8.Rotation.XY.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                      local_3e8.Rotation.ZW.m128d_f64[1] * dVar78 +
                      local_3e8.Rotation.XY.m128d_f64[1] * dVar121 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                      dVar111 * local_3e8.Rotation.ZW.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            dVar90 = dVar116 * local_3e8.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     local_3e8.Rotation.XY.m128d_f64[0] * auVar113._8_8_ +
                     local_3e8.Rotation.ZW.m128d_f64[0] * dVar121 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar111 * local_3e8.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar111 = dVar116 * local_3e8.Rotation.ZW.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                      local_3e8.Rotation.XY.m128d_f64[1] * dVar78 +
                      local_3e8.Rotation.ZW.m128d_f64[1] * dVar121 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                      dVar111 * local_3e8.Rotation.XY.m128d_f64[0] *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            dVar78 = dVar91;
            if ((dVar91 <= dVar126) && (dVar78 = dVar126, dVar79 <= dVar126)) {
              dVar78 = dVar79;
            }
            dVar121 = dVar125 * dVar125 + dVar90 * dVar90;
            dVar126 = dVar111 * dVar111 + 0.0;
            dVar116 = dVar126 + dVar121;
            dVar121 = dVar121 + dVar126;
            auVar11._8_4_ = SUB84(dVar121,0);
            auVar11._0_8_ = dVar116;
            auVar11._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
            auVar92 = sqrtpd(auVar118,auVar11);
            uVar64 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar116)
            ;
            uVar66 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar121)
            ;
            auVar118 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar92
                            );
            uVar65 = -(ulonglong)
                      (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar116)
            ;
            auVar119._0_8_ = uVar64 & (ulonglong)(auVar118._0_8_ * dVar90);
            uVar52 = uVar66 & (ulonglong)(auVar118._8_8_ * dVar111);
            auVar119._8_4_ = (undefined4)uVar52;
            auVar119._12_4_ = (undefined4)(uVar52 >> 0x20);
            auVar95._0_4_ =
                 ~(uint)uVar64 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
            auVar95._4_4_ =
                 ~(uint)(uVar64 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
            auVar95._8_4_ =
                 ~(uint)uVar66 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
            auVar95._12_4_ =
                 ~(uint)(uVar66 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
            auVar119 = auVar119 | auVar95;
            auVar92 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar92)
            ;
            dVar111 = (double)(CONCAT44(~(uint)(uVar65 >> 0x20) &
                                        (uint)((ulonglong)
                                               (double)GlobalVectorConstants::Float1000.m128_f32[2]
                                              >> 0x20),
                                        ~(uint)uVar65 &
                                        SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0
                                             )) | uVar65 & (ulonglong)(auVar92._0_8_ * dVar125));
            local_d60 = auVar119;
            acos(dVar78);
            uVar89 = 0;
            __libm_sse2_sincos_();
            auVar19._4_8_ = uVar89;
            auVar19._0_4_ = auVar119._4_4_;
            auVar81._0_8_ = auVar19._0_8_ << 0x20;
            auVar81._8_4_ = auVar119._8_4_;
            auVar81._12_4_ = auVar119._12_4_;
            auVar96._0_8_ = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
            auVar96._8_4_ = extraout_XMM0_Dc;
            auVar96._12_4_ = extraout_XMM0_Dd;
            _Var97.m128d_f64[1] = auVar96._8_8_;
            _Var97.m128d_f64[0] = auVar96._0_8_ * auVar81._8_8_;
            *(double *)(pFVar9 + lVar58 * 0x50) =
                 (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * auVar119._0_8_;
            *(double *)(pFVar9 + lVar58 * 0x50 + 8) = _Var97.m128d_f64[0];
            *(double *)(pFVar9 + lVar58 * 0x50 + 0x10) =
                 (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar111;
            *(ulonglong *)(pFVar9 + lVar58 * 0x50 + 0x18) =
                 CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
            pFVar54 = pFVar54 + 0x20;
            local_d50 = dVar111;
            fVar122 = local_1064;
          }
        }
      }
    }
    _Var80.m128d_f64 = local_b28.Scale3D.XY.m128d_f64;
    dVar111 = local_b28.Scale3D.ZW.m128d_f64[0];
    if (this->ResetSimulatedTeleportType == TeleportPhysics) {
      if (5 < (byte)LogRBAN._0_1_) {
        local_cb8[0] = local_b28.Scale3D.XY.m128d_f64[0];
        local_cb8[1] = local_b28.Scale3D.XY.m128d_f64[1];
        local_ce8[0] = local_b28.Scale3D.XY.m128d_f64[0];
        local_ce8[1] = local_b28.Scale3D.XY.m128d_f64[1];
        local_cd0[0] = local_b28.Scale3D.XY.m128d_f64[0];
        local_cd0[1] = local_b28.Scale3D.XY.m128d_f64[1];
        local_cd8 = dVar111;
        local_cc0 = dVar111;
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(pFVar59->_padding_ + 0x140),&local_f50,(UObject *)0x0,
                   None);
        local_ca8 = dVar111;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRBAN);
        _Var97.m128d_f64 = _Var80.m128d_f64;
        if (local_f50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f50.Data.AllocatorInstance.Data);
          _Var97.m128d_f64 = _Var80.m128d_f64;
        }
      }
      iVar5 = (this->OutputBoneData).ArrayNum;
      pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != iVar5) {
          local_106d = 0;
          `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_106d);
        }
        fVar122 = local_1064;
        if (pFVar54 == pFVar61) break;
        uVar69 = *(uint *)(pFVar54 + 0x14);
        lVar58 = (longlong)(int)uVar69;
        uVar73 = uVar40;
        if ((int)uVar69 < (this->BodyAnimData).ArrayNum) {
          uVar73 = ~uVar69 >> 0x1f;
        }
        if ((uVar73 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x4c;
        *pFVar9 = (FScriptContainerElement)((byte)*pFVar9 | 2);
        uVar73 = uVar38;
        if ((int)uVar69 < (this->Bodies).ArrayNum) {
          uVar73 = ~uVar69 >> 0x1f;
        }
        if ((uVar73 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar58 * 8),&local_948
                  );
        fVar122 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar123 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar115 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar124 = GlobalVectorConstants::Float1110.m128_f32[3];
        EVar4 = this->SimulationSpace;
        local_ac8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_ac8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        uVar101 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        uVar103 = (undefined4)
                  ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_ac8.Translation.ZW.m128d_f64[1]._0_4_ = uVar101;
        local_ac8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_ac8.Translation.ZW.m128d_f64[1]._4_4_ = uVar103;
        uVar74 = SUB84((double)fVar124,0);
        uVar76 = (undefined4)((ulonglong)(double)fVar124 >> 0x20);
        local_ac8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_ac8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_ac8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar74;
        local_ac8.Scale3D.ZW.m128d_f64[0] = (double)fVar115;
        local_ac8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar76;
        uVar107 = SUB84((double)fVar123,0);
        uVar109 = (undefined4)((ulonglong)(double)fVar123 >> 0x20);
        local_ac8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_ac8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_ac8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar107;
        local_ac8.Scale3D.XY.m128d_f64[0] = (double)fVar122;
        local_ac8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar109;
        uVar68 = local_948.Rotation.XY.m128d_f64[0]._0_4_;
        uVar71 = local_948.Rotation.XY.m128d_f64[0]._4_4_;
        uVar75 = local_948.Rotation.XY.m128d_f64[1]._0_4_;
        uVar77 = local_948.Rotation.XY.m128d_f64[1]._4_4_;
        _Var80.m128d_f64 = local_948.Translation.XY.m128d_f64;
        _Var97.m128d_f64 = local_948.Translation.ZW.m128d_f64;
        uVar99 = local_948.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar100 = local_948.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar102 = local_948.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar104 = local_948.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar105 = local_948.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar106 = local_948.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar108 = local_948.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar110 = local_948.Scale3D.ZW.m128d_f64[1]._4_4_;
        dVar111 = local_948.Rotation.ZW.m128d_f64[0];
        dVar78 = local_948.Rotation.ZW.m128d_f64[1];
        if (EVar4 == ComponentSpace) {
LAB_146431cc4:
          local_ac8.Rotation.XY.m128d_f64[0] = (double)CONCAT44(uVar71,uVar68);
          local_ac8.Rotation.XY.m128d_f64[1] = (double)CONCAT44(uVar77,uVar75);
          local_ac8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar100;
          local_ac8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar99;
          local_ac8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar102;
          local_ac8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar104;
        }
        else {
          if (EVar4 != WorldSpace) {
            if (EVar4 == BaseBoneSpace) {
              local_6e8.Translation.ZW.m128d_f64[1]._0_4_ = uVar101;
              local_6e8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_6e8.Translation.ZW.m128d_f64[1]._4_4_ = uVar103;
              local_6e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar107;
              local_6e8.Scale3D.XY.m128d_f64[0] = (double)fVar122;
              local_6e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar109;
              local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar74;
              local_6e8.Scale3D.ZW.m128d_f64[0] = (double)fVar115;
              local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar76;
              local_6e8.Rotation.XY.m128d_f64[0] = local_ac8.Rotation.XY.m128d_f64[0];
              local_6e8.Rotation.XY.m128d_f64[1] = local_ac8.Rotation.XY.m128d_f64[1];
              local_6e8.Rotation.ZW.m128d_f64[0] = local_ac8.Rotation.ZW.m128d_f64[0];
              local_6e8.Rotation.ZW.m128d_f64[1] = local_ac8.Rotation.ZW.m128d_f64[1];
              local_6e8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_6e8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              UE::Math::TTransform<double>::Multiply(&local_6e8,&local_948,&local_828);
              _Var80.m128d_f64[1] = local_6e8.Translation.XY.m128d_f64[1];
              _Var80.m128d_f64[0] = local_6e8.Translation.XY.m128d_f64[0];
              fVar122 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar123 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar115 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar124 = GlobalVectorConstants::Float1110.m128_f32[3];
              uVar68 = local_6e8.Rotation.XY.m128d_f64[0]._0_4_;
              uVar71 = local_6e8.Rotation.XY.m128d_f64[0]._4_4_;
              uVar75 = local_6e8.Rotation.XY.m128d_f64[1]._0_4_;
              uVar77 = local_6e8.Rotation.XY.m128d_f64[1]._4_4_;
              _Var97.m128d_f64 = local_6e8.Translation.ZW.m128d_f64;
              uVar99 = local_6e8.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar100 = local_6e8.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar102 = local_6e8.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar104 = local_6e8.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar105 = local_6e8.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar106 = local_6e8.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar108 = local_6e8.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar110 = local_6e8.Scale3D.ZW.m128d_f64[1]._4_4_;
              dVar111 = local_6e8.Rotation.ZW.m128d_f64[0];
              dVar78 = local_6e8.Rotation.ZW.m128d_f64[1];
            }
            else {
              local_106c = 0;
              `FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread'::__l98::<lambda_1>::
              operator()(&local_106c);
              fVar122 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar123 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar115 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar124 = GlobalVectorConstants::Float1110.m128_f32[3];
              uVar68 = local_948.Rotation.XY.m128d_f64[0]._0_4_;
              uVar71 = local_948.Rotation.XY.m128d_f64[0]._4_4_;
              uVar75 = local_948.Rotation.XY.m128d_f64[1]._0_4_;
              uVar77 = local_948.Rotation.XY.m128d_f64[1]._4_4_;
              _Var80.m128d_f64 = local_948.Translation.XY.m128d_f64;
              _Var97.m128d_f64 = local_948.Translation.ZW.m128d_f64;
              uVar99 = local_948.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar100 = local_948.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar102 = local_948.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar104 = local_948.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar105 = local_948.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar106 = local_948.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar108 = local_948.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar110 = local_948.Scale3D.ZW.m128d_f64[1]._4_4_;
              dVar111 = local_948.Rotation.ZW.m128d_f64[0];
              dVar78 = local_948.Rotation.ZW.m128d_f64[1];
            }
            goto LAB_146431cc4;
          }
          pTVar47 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_948,&local_148,&this->PreviousCompWorldSpaceTM);
          fVar122 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar123 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar115 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar124 = GlobalVectorConstants::Float1110.m128_f32[3];
          uVar68 = *(undefined4 *)(pTVar47->Rotation).XY.m128d_f64;
          uVar71 = *(undefined4 *)((longlong)(pTVar47->Rotation).XY.m128d_f64 + 4);
          local_ac8.Rotation.XY.m128d_f64[0] = (pTVar47->Rotation).XY.m128d_f64[0];
          pdVar22 = (pTVar47->Rotation).XY.m128d_f64 + 1;
          uVar75 = *(undefined4 *)pdVar22;
          uVar77 = *(undefined4 *)((longlong)(pTVar47->Rotation).XY.m128d_f64 + 0xc);
          local_ac8.Rotation.XY.m128d_f64[1] = *pdVar22;
          dVar111 = (pTVar47->Rotation).ZW.m128d_f64[0];
          dVar78 = (pTVar47->Rotation).ZW.m128d_f64[1];
          _Var80.m128d_f64 = *&(pTVar47->Translation).XY.m128d_f64;
          _Var97.m128d_f64 = *&(pTVar47->Translation).ZW.m128d_f64;
          uVar99 = *(undefined4 *)(pTVar47->Scale3D).XY.m128d_f64;
          uVar100 = *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 4);
          uVar102 = *(undefined4 *)((pTVar47->Scale3D).XY.m128d_f64 + 1);
          uVar104 = *(undefined4 *)((longlong)(pTVar47->Scale3D).XY.m128d_f64 + 0xc);
          local_ac8.Scale3D.XY.m128d_f64 = *&(pTVar47->Scale3D).XY.m128d_f64;
          uVar105 = *(undefined4 *)(pTVar47->Scale3D).ZW.m128d_f64;
          uVar106 = *(undefined4 *)((longlong)(pTVar47->Scale3D).ZW.m128d_f64 + 4);
          uVar108 = *(undefined4 *)((pTVar47->Scale3D).ZW.m128d_f64 + 1);
          uVar110 = *(undefined4 *)((longlong)(pTVar47->Scale3D).ZW.m128d_f64 + 0xc);
        }
        EVar4 = this->SimulationSpace;
        local_ac8.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar106;
        local_ac8.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar105;
        local_ac8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar108;
        local_ac8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar110;
        local_ac8.Rotation.ZW.m128d_f64[0] = dVar111;
        local_ac8.Rotation.ZW.m128d_f64[1] = dVar78;
        local_ac8.Translation.XY.m128d_f64 = _Var80.m128d_f64;
        local_ac8.Translation.ZW.m128d_f64 = _Var97.m128d_f64;
        if (EVar4 == ComponentSpace) {
LAB_146431d41:
          local_a68.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar106;
          local_a68.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar105;
          local_a68.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar108;
          local_a68.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar110;
          local_a68.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar100,uVar99);
          local_a68.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar104,uVar102);
          local_a68.Rotation.ZW.m128d_f64[1] = local_ac8.Rotation.ZW.m128d_f64[1];
          local_a68.Rotation.ZW.m128d_f64[0] = local_ac8.Rotation.ZW.m128d_f64[0];
          local_a68.Rotation.XY.m128d_f64[0]._4_4_ = uVar71;
          local_a68.Rotation.XY.m128d_f64[0]._0_4_ = uVar68;
          local_a68.Rotation.XY.m128d_f64[1]._0_4_ = uVar75;
          local_a68.Rotation.XY.m128d_f64[1]._4_4_ = uVar77;
          local_948.Rotation.XY.m128d_f64[0]._0_4_ = uVar68;
          local_948.Rotation.XY.m128d_f64[0]._4_4_ = uVar71;
          local_948.Rotation.XY.m128d_f64[1]._0_4_ = uVar75;
          local_948.Rotation.XY.m128d_f64[1]._4_4_ = uVar77;
          local_948.Scale3D.XY.m128d_f64[0]._0_4_ = uVar99;
          local_948.Scale3D.XY.m128d_f64[0]._4_4_ = uVar100;
          local_948.Scale3D.XY.m128d_f64[1]._0_4_ = uVar102;
          local_948.Scale3D.XY.m128d_f64[1]._4_4_ = uVar104;
          local_948.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar105;
          local_948.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar106;
          local_948.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar108;
          local_948.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar110;
          local_948.Rotation.ZW.m128d_f64[0] = local_ac8.Rotation.ZW.m128d_f64[0];
          local_948.Rotation.ZW.m128d_f64[1] = local_ac8.Rotation.ZW.m128d_f64[1];
          local_a68.Translation.XY.m128d_f64 = local_ac8.Translation.XY.m128d_f64;
          local_a68.Translation.ZW.m128d_f64 = local_ac8.Translation.ZW.m128d_f64;
        }
        else {
          if (EVar4 == WorldSpace) {
            local_a68.Rotation.XY.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_a68.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_a68.Rotation.XY.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_a68.Rotation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_a68.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_a68.Rotation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_a68.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_a68.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_a68.Scale3D.XY.m128d_f64[0] = (double)fVar122;
            local_a68.Scale3D.XY.m128d_f64[1] = (double)fVar123;
            local_a68.Translation.ZW.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_a68.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_a68.Translation.ZW.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_a68.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84((double)fVar124,0);
            local_a68.Scale3D.ZW.m128d_f64[0] = (double)fVar115;
            local_a68.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar124 >> 0x20);
            UE::Math::TTransform<double>::Multiply(&local_a68,&local_ac8,&local_b28);
          }
          else {
            if (EVar4 != BaseBoneSpace) {
              local_106b = 0;
              `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(&local_106b);
              uVar68 = local_ac8.Rotation.XY.m128d_f64[0]._0_4_;
              uVar71 = local_ac8.Rotation.XY.m128d_f64[0]._4_4_;
              uVar75 = local_ac8.Rotation.XY.m128d_f64[1]._0_4_;
              uVar77 = local_ac8.Rotation.XY.m128d_f64[1]._4_4_;
              uVar99 = local_ac8.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar100 = local_ac8.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar102 = local_ac8.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar104 = local_ac8.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar105 = local_ac8.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar106 = local_ac8.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar108 = local_ac8.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar110 = local_ac8.Scale3D.ZW.m128d_f64[1]._4_4_;
              goto LAB_146431d41;
            }
            UE::Math::TTransform<double>::GetRelativeTransform(&local_ac8,&local_a68,&local_828);
          }
          local_948.Rotation.XY.m128d_f64[0]._0_4_ = local_a68.Rotation.XY.m128d_f64[0]._0_4_;
          local_948.Rotation.XY.m128d_f64[0]._4_4_ = local_a68.Rotation.XY.m128d_f64[0]._4_4_;
          local_948.Rotation.XY.m128d_f64[1]._0_4_ = local_a68.Rotation.XY.m128d_f64[1]._0_4_;
          local_948.Rotation.XY.m128d_f64[1]._4_4_ = local_a68.Rotation.XY.m128d_f64[1]._4_4_;
          local_948.Scale3D.XY.m128d_f64[0]._0_4_ = local_a68.Scale3D.XY.m128d_f64[0]._0_4_;
          local_948.Scale3D.XY.m128d_f64[0]._4_4_ = local_a68.Scale3D.XY.m128d_f64[0]._4_4_;
          local_948.Scale3D.XY.m128d_f64[1]._0_4_ = local_a68.Scale3D.XY.m128d_f64[1]._0_4_;
          local_948.Scale3D.XY.m128d_f64[1]._4_4_ = local_a68.Scale3D.XY.m128d_f64[1]._4_4_;
          local_948.Scale3D.ZW.m128d_f64[0]._0_4_ = local_a68.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_948.Scale3D.ZW.m128d_f64[0]._4_4_ = local_a68.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_948.Scale3D.ZW.m128d_f64[1]._0_4_ = local_a68.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_948.Scale3D.ZW.m128d_f64[1]._4_4_ = local_a68.Scale3D.ZW.m128d_f64[1]._4_4_;
          local_948.Rotation.ZW.m128d_f64[0] = local_a68.Rotation.ZW.m128d_f64[0];
          local_948.Rotation.ZW.m128d_f64[1] = local_a68.Rotation.ZW.m128d_f64[1];
        }
        uVar73 = uVar38;
        if ((int)uVar69 < (this->Bodies).ArrayNum) {
          uVar73 = ~uVar69 >> 0x1f;
        }
        _Var97.m128d_f64 = local_a68.Translation.ZW.m128d_f64;
        local_948.Translation.XY.m128d_f64 = local_a68.Translation.XY.m128d_f64;
        local_948.Translation.ZW.m128d_f64 = local_a68.Translation.ZW.m128d_f64;
        if ((uVar73 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::SetWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar58 * 8),&local_948
                  );
        uVar73 = *(uint *)(pFVar54 + 0x18);
        if (uVar73 != 0xffffffff) {
          uVar51 = uVar38;
          if ((int)uVar73 < (this->Bodies).ArrayNum) {
            uVar51 = ~uVar73 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar47 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                              (*(FActorHandle **)
                                ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar73 * 8),
                               &local_2c8);
          pTVar47 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_948,&local_268,pTVar47);
          local_ca0 = (pTVar47->Translation).XY.m128d_f64[0];
          dStack_c98 = (pTVar47->Translation).XY.m128d_f64[1];
          local_c90 = (pTVar47->Translation).ZW.m128d_f64[0];
          dVar111 = local_ca0 * local_ca0;
          uVar73 = uVar38;
          if ((int)uVar69 < (this->BodyAnimData).ArrayNum) {
            uVar73 = ~uVar69 >> 0x1f;
          }
          dVar90 = local_c90 * local_c90;
          dVar78 = dStack_c98 * dStack_c98;
          if ((uVar73 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(float *)((this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x48) =
               (float)SQRT(dVar111 + dVar78 + dVar90);
        }
        pFVar54 = pFVar54 + 0x20;
      }
    }
    else if (this->ResetSimulatedTeleportType == ResetPhysics) {
      if (5 < (byte)LogRBAN._0_1_) {
        local_d18 = local_b28.Scale3D.XY.m128d_f64[0];
        dStack_d10 = local_b28.Scale3D.XY.m128d_f64[1];
        local_d48 = local_b28.Scale3D.XY.m128d_f64[0];
        dStack_d40 = local_b28.Scale3D.XY.m128d_f64[1];
        local_d30 = local_b28.Scale3D.XY.m128d_f64[0];
        dStack_d28 = local_b28.Scale3D.XY.m128d_f64[1];
        local_d38 = dVar111;
        local_d20 = dVar111;
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)(pFVar59->_padding_ + 0x140),&local_f30,(UObject *)0x0,
                   None);
        local_d08 = dVar111;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogRBAN);
        fVar122 = local_1064;
        if ((FWeakObjectPtr)local_f30.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
          FMemory::Free(local_f30.Data.AllocatorInstance.Data);
          fVar122 = local_1064;
        }
      }
      SpaceToWorldTransform(&local_508,this->SimulationSpace,&local_b28,&local_828);
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           local_508.Rotation.XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
           local_508.Rotation.XY.m128d_f64[1];
      this->PreviousDt = 0.033333335;
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           local_508.Rotation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
           local_508.Rotation.XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           local_508.Rotation.ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
           local_508.Rotation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           local_508.Rotation.ZW.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
           local_508.Rotation.ZW.m128d_f64[1];
      *&(this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64 =
           local_508.Translation.XY.m128d_f64;
      *&(this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64 =
           local_508.Translation.XY.m128d_f64;
      *&(this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 =
           local_508.Translation.ZW.m128d_f64;
      *&(this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 =
           local_508.Translation.ZW.m128d_f64;
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           local_508.Scale3D.XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
           local_508.Scale3D.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           local_508.Scale3D.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
           local_508.Scale3D.XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           local_508.Scale3D.ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
           local_508.Scale3D.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           local_508.Scale3D.ZW.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
           local_508.Scale3D.ZW.m128d_f64[1];
      uVar73 = (this->OutputBoneData).ArrayNum;
      uVar52 = (ulonglong)(int)uVar73;
      pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar61 = pFVar54 + uVar52 * 0x20;
      pFVar60 = (FCompactPoseBoneIndex *)(pFVar54 + 0x10);
      _Var97.m128d_f64 = local_508.Translation.XY.m128d_f64;
      while( true ) {
        local_1040._0_8_ = pFVar54;
        if ((this->OutputBoneData).ArrayNum != (int)uVar52) {
          local_106f = 0;
          `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_106f);
        }
        if (pFVar54 == pFVar61) break;
        FVar37 = pFVar60[1];
        lVar58 = (longlong)(int)FVar37;
        local_1060 = ~(uint)FVar37 >> 0x1f;
        uVar51 = uVar40;
        if ((int)FVar37 < (this->BodyAnimData).ArrayNum) {
          uVar51 = local_1060;
        }
        if ((uVar51 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar54 = (this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x4c;
        *pFVar54 = (FScriptContainerElement)((byte)*pFVar54 | 2);
        pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_1050->Pose,*pFVar60);
        EVar4 = this->SimulationSpace;
        if (EVar4 == ComponentSpace) {
LAB_1464317d9:
          local_8e8.Rotation.XY.m128d_f64 = *&(pTVar47->Rotation).XY.m128d_f64;
          local_8e8.Rotation.ZW.m128d_f64 = *&(pTVar47->Rotation).ZW.m128d_f64;
          local_8e8.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
          local_8e8.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
          local_8e8.Translation.ZW.m128d_f64 = *&(pTVar47->Translation).ZW.m128d_f64;
          local_8e8.Scale3D.XY.m128d_f64[0] = (pTVar47->Scale3D).XY.m128d_f64[0];
          local_8e8.Scale3D.XY.m128d_f64[1] = (pTVar47->Scale3D).XY.m128d_f64[1];
          local_8e8.Scale3D.ZW.m128d_f64 = *&(pTVar47->Scale3D).ZW.m128d_f64;
        }
        else if (EVar4 == WorldSpace) {
          local_8e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_8e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_8e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_8e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_8e8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_8e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_8e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_8e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_8e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_8e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          _Var97.m128d_f64[1] = GlobalVectorConstants::Float1110.m128_u64[1];
          _Var97.m128d_f64[0] = _Var97.m128d_f64[1];
          local_8e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_8e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_8e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_8e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_8e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_8e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_8e8,pTVar47,&local_b28);
        }
        else {
          if (EVar4 != BaseBoneSpace) {
            local_106e = 0;
            `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(&local_106e);
            goto LAB_1464317d9;
          }
          UE::Math::TTransform<double>::GetRelativeTransform(pTVar47,&local_8e8,&local_828);
        }
        uVar51 = uVar69;
        if ((int)FVar37 < (this->Bodies).ArrayNum) {
          uVar51 = local_1060;
        }
        if ((uVar51 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar58 * 8),&local_8e8
                  );
        FVar6 = pFVar60[2];
        if (FVar6 != (FCompactPoseBoneIndex)0xffffffff) {
          uVar51 = uVar69;
          if ((int)FVar6 < (this->Bodies).ArrayNum) {
            uVar51 = ~(uint)FVar6 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar47 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                              (*(FActorHandle **)
                                ((this->Bodies).AllocatorInstance.Data + (longlong)(int)FVar6 * 8),
                               &local_388);
          pTVar47 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_8e8,&local_328,pTVar47);
          local_d00 = (pTVar47->Translation).XY.m128d_f64[0];
          dStack_cf8 = (pTVar47->Translation).XY.m128d_f64[1];
          local_cf0 = (pTVar47->Translation).ZW.m128d_f64[0];
          dVar111 = local_d00 * local_d00;
          uVar51 = uVar40;
          if ((int)FVar37 < (this->BodyAnimData).ArrayNum) {
            uVar51 = ~(uint)FVar37 >> 0x1f;
          }
          dVar90 = local_cf0 * local_cf0;
          dVar78 = dStack_cf8 * dStack_cf8;
          if ((uVar51 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          *(float *)((this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x48) =
               (float)SQRT(dVar111 + dVar78 + dVar90);
        }
        pFVar54 = (FScriptContainerElement *)(local_1040._0_8_ + 0x20);
        pFVar60 = pFVar60 + 8;
        uVar52 = (ulonglong)uVar73;
      }
    }
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = local_b28.Rotation.XY.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = local_b28.Rotation.XY.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = local_b28.Rotation.ZW.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = local_b28.Rotation.ZW.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
         local_b28.Translation.XY.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] =
         local_b28.Translation.XY.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
         local_b28.Translation.ZW.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] =
         local_b28.Translation.ZW.m128d_f64[1];
    (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = local_b28.Scale3D.XY.m128d_f64[0];
    (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = local_b28.Scale3D.XY.m128d_f64[1];
    *&(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 = local_b28.Scale3D.ZW.m128d_f64;
    uVar89 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = (double)uVar89;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    _Var80.m128d_f64 = local_b28.Scale3D.ZW.m128d_f64;
  }
  dVar111 = __real_3f1a36e2e0000000;
  uVar73 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar69 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  cVar25 = bRBAN_DeferredSimulationDefault;
  if ((this->SimulationTiming != Default) && (bRBAN_DeferredSimulationForceDefault == false)) {
    cVar25 = this->SimulationTiming == Deferred;
  }
  local_1010._s_0.Z = 0.0;
  local_1010._s_0.X = 0.0;
  local_1010._s_0.Y = 0.0;
  if (((this->bSimulateAnimPhysicsAfterReset == false) &&
      (this->ResetSimulatedTeleportType == ResetPhysics)) ||
     (fVar122 < this->AnimPhysicsMinDeltaTime || fVar122 == this->AnimPhysicsMinDeltaTime)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
    if ((this->bTransferBoneVelocities == '\0') ||
       (*(int *)&(this->CapturedBoneVelocityPose).Pose.field_0x8 < 1)) {
      if ((this->SimulationSpace != WorldSpace) && (bRBAN_EnableComponentAcceleration != false)) {
        if (RBAN_Override_ComponentLinearVelScale < 0.0) {
          dVar79 = *(double *)((longlong)&(this->ComponentLinearVelScale).field0_0x0 + 0x10);
          local_1040 = *(undefined1 (*) [16])&(this->ComponentLinearVelScale).field0_0x0;
          auVar20._4_8_ = _Var97.m128d_f64[1];
          auVar20._0_4_ = local_1040._4_4_;
          auVar98._0_8_ = auVar20._0_8_ << 0x20;
          auVar98._8_4_ = local_1040._8_4_;
          auVar98._12_4_ = local_1040._12_4_;
          local_f98._8_8_ = local_1040._8_8_;
          local_f98._0_8_ = auVar98._8_8_;
          local_f78 = dVar79;
        }
        else {
          local_1040._0_8_ = (undefined8)RBAN_Override_ComponentLinearVelScale;
          local_1040._8_8_ = 0;
          local_f98._8_8_ = 0;
          local_f98._0_8_ = local_1040._0_8_;
          dVar79 = (double)local_1040._0_8_;
        }
        if (RBAN_Override_ComponentLinearAccScale < 0.0) {
          dVar90 = *(double *)&(this->ComponentLinearAccScale).field0_0x0;
          dVar78 = *(double *)((longlong)&(this->ComponentLinearAccScale).field0_0x0 + 8);
          dVar91 = *(double *)((longlong)&(this->ComponentLinearAccScale).field0_0x0 + 0x10);
          local_f78 = dVar91;
        }
        else {
          dVar78 = (double)RBAN_Override_ComponentLinearAccScale;
          dVar91 = dVar78;
          dVar90 = dVar78;
        }
        if (RBAN_Override_ComponentAppliedLinearAccClamp < 0.0) {
          auVar92 = *(undefined1 (*) [16])&(this->ComponentAppliedLinearAccClamp).field0_0x0;
          dVar116 = auVar92._0_8_;
          local_1090 = (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
          auVar21._4_8_ = _Var80.m128d_f64[1];
          auVar21._0_4_ = auVar92._4_4_;
          auVar82._0_8_ = auVar21._0_8_ << 0x20;
          auVar82._8_4_ = auVar92._8_4_;
          auVar82._12_4_ = auVar92._12_4_;
          local_f88._8_8_ = auVar92._8_8_;
          local_f88._0_8_ = auVar82._8_8_;
          local_f78 = local_1090;
        }
        else {
          dVar116 = (double)RBAN_Override_ComponentAppliedLinearAccClamp;
          local_f88._0_8_ = dVar116;
          local_1090 = dVar116;
        }
        uVar128 = (uint)((ulonglong)dVar116 >> 0x20);
        uVar51 = local_1040._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar72 = local_1040._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
              (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000) ||
            (uVar51 = local_f98._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar72 = local_f98._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
            (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000)) ||
           ((uVar51 = SUB84(dVar79,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar72 = (uint)((ulonglong)dVar79 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
            (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000 ||
            (((uVar51 = SUB84(dVar90,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar72 = (uint)((ulonglong)dVar90 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
              (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000 ||
              (uVar51 = SUB84(dVar78,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
              uVar72 = (uint)((ulonglong)dVar78 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
              __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
              (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000)) ||
             (uVar51 = SUB84(dVar91,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar72 = (uint)((ulonglong)dVar91 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar72,uVar51) &&
             (double)CONCAT44(uVar72,uVar51) != __real_3f1a36e2e0000000)))))) {
          local_c70 = (this->PreviousTransform).Translation.XY.m128d_f64[0];
          dStack_c68 = (this->PreviousTransform).Translation.XY.m128d_f64[1];
          local_c60 = (this->PreviousTransform).Translation.ZW.m128d_f64[0];
          local_c88 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
          dStack_c80 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
          local_c78 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
          dVar117 = __real_3ff0000000000000 / (double)fVar122;
          dVar112 = (local_c88 - local_c70) * dVar117;
          dVar16 = (local_c78 - local_c60) * dVar117;
          dVar126 = (dStack_c80 - dStack_c68) * dVar117;
          uVar51 = (uint)__xmm_80000000000000008000000000000000;
          uVar72 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          local_e30._s_0.X =
               (double)CONCAT44((uint)((ulonglong)dVar112 >> 0x20) ^ uVar72,
                                SUB84(dVar112,0) ^ uVar51);
          local_e30._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar72,SUB84(dVar16,0) ^ uVar51)
          ;
          local_e30._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)dVar126 >> 0x20) ^ uVar72,
                                SUB84(dVar126,0) ^ uVar51);
          pTVar48 = WorldVectorToSpaceNoScale
                              (&local_b78,this->SimulationSpace,(TVector<double> *)&local_e30._s_0,
                               &local_b28,&local_828);
          uVar68 = local_1040._12_4_;
          local_1040._8_4_ = local_1040._8_4_;
          local_1040._0_8_ = local_1040._0_8_ * (pTVar48->field0_0x0)._s_0.X;
          local_1040._12_4_ = uVar68;
          uVar68 = local_f98._12_4_;
          local_e48._s_0.Y =
               ((this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y - dVar126) * dVar117;
          local_e48._s_0.Z =
               ((this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z - dVar16) * dVar117;
          local_f98._8_4_ = local_f98._8_4_;
          local_f98._0_8_ = local_f98._0_8_ * (pTVar48->field0_0x0)._s_0.Y;
          local_f98._12_4_ = uVar68;
          dVar121 = (pTVar48->field0_0x0)._s_0.Z;
          dVar125 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
          (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X = dVar112;
          (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar126;
          (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z = dVar16;
          local_e48._s_0.X = (dVar125 - dVar112) * dVar117;
          pTVar48 = WorldVectorToSpaceNoScale
                              (&local_b60,this->SimulationSpace,(TVector<double> *)&local_e48._s_0,
                               &local_b28,&local_828);
          uVar51 = SUB84(dVar116,0) & uVar69;
          uVar72 = uVar128 & uVar73;
          dVar90 = dVar90 * (pTVar48->field0_0x0)._s_0.X + (double)local_1040._0_8_;
          dVar78 = dVar78 * (pTVar48->field0_0x0)._s_0.Y + (double)local_f98._0_8_;
          dVar79 = dVar91 * (pTVar48->field0_0x0)._s_0.Z + dVar79 * dVar121;
          uVar114 = (uint)((ulonglong)local_1090 >> 0x20);
          if (((dVar111 <= (double)CONCAT44(uVar72,uVar51) &&
                (double)CONCAT44(uVar72,uVar51) != dVar111) ||
              (uVar51 = local_f88._0_4_ & uVar69, uVar72 = local_f88._4_4_ & uVar73,
              dVar111 <= (double)CONCAT44(uVar72,uVar51) &&
              (double)CONCAT44(uVar72,uVar51) != dVar111)) ||
             (uVar69 = SUB84(local_1090,0) & uVar69, uVar73 = uVar114 & uVar73,
             dVar111 <= (double)CONCAT44(uVar73,uVar69) &&
             (double)CONCAT44(uVar73,uVar69) != dVar111)) {
            if (dVar116 <= dVar90) {
              dVar90 = dVar116;
            }
            if (local_f88._0_8_ <= dVar78) {
              dVar78 = local_f88._0_8_;
            }
            uVar51 = (uint)__xmm_80000000000000008000000000000000;
            uVar69 = local_f88._0_4_ ^ uVar51;
            uVar72 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            uVar73 = local_f88._4_4_ ^ uVar72;
            uVar127 = SUB84(dVar116,0) ^ uVar51;
            uVar128 = uVar128 ^ uVar72;
            if (dVar90 <= (double)CONCAT44(uVar128,uVar127)) {
              dVar90 = (double)CONCAT44(uVar128,uVar127);
            }
            if (dVar78 <= (double)CONCAT44(uVar73,uVar69)) {
              dVar78 = (double)CONCAT44(uVar73,uVar69);
            }
            if (local_1090 <= dVar79) {
              dVar79 = local_1090;
            }
            dVar91 = (double)CONCAT44(uVar114 ^ uVar72,SUB84(local_1090,0) ^ uVar51);
            if (dVar79 <= dVar91) {
              dVar79 = dVar91;
            }
          }
          iVar5 = (this->OutputBoneData).ArrayNum;
          pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
          pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
          while( true ) {
            if ((this->OutputBoneData).ArrayNum != iVar5) {
              local_1069 = 0;
              `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_1069);
            }
            fVar122 = local_1064;
            if (pFVar54 == pFVar61) break;
            uVar69 = *(uint *)(pFVar54 + 0x14);
            uVar73 = uVar40;
            if ((int)uVar69 < (this->BodyAnimData).ArrayNum) {
              uVar73 = ~uVar69 >> 0x1f;
            }
            if ((uVar73 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (((byte)(this->BodyAnimData).AllocatorInstance.Data
                       [(longlong)(int)uVar69 * 0x50 + 0x4c] & 1) != 0) {
              uVar73 = uVar40;
              if ((int)uVar69 < (this->Bodies).ArrayNum) {
                uVar73 = ~uVar69 >> 0x1f;
              }
              if ((uVar73 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar53 = *(FActorHandle **)
                         ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar69 * 8);
              dVar91 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar53);
              if (0.0 < dVar91) {
                dVar91 = __real_3ff0000000000000 / dVar91;
                local_e00._s_0.X = dVar91 * dVar90;
                local_e00._s_0.Y = dVar91 * dVar78;
                local_e00._s_0.Z = dVar91 * dVar79;
                ImmediatePhysics_Chaos::FActorHandle::AddForce
                          (pFVar53,(TVector<double> *)&local_e00._s_0);
              }
            }
            pFVar54 = pFVar54 + 0x20;
          }
        }
      }
    }
    else {
      iVar5 = (this->OutputBoneData).ArrayNum;
      pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != iVar5) {
          local_106a = 0;
          `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_106a);
        }
        if (pFVar54 == pFVar61) break;
        uVar69 = *(uint *)(pFVar54 + 0x14);
        uVar73 = uVar40;
        if ((int)uVar69 < (this->BodyAnimData).ArrayNum) {
          uVar73 = ~uVar69 >> 0x1f;
        }
        if ((uVar73 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar9 = (this->BodyAnimData).AllocatorInstance.Data;
        lVar58 = (longlong)(int)uVar69 * 0x50;
        local_1040._0_8_ = lVar58;
        if (((byte)pFVar9[lVar58 + 0x4c] & 1) != 0) {
          uVar73 = uVar40;
          if ((int)uVar69 < (this->Bodies).ArrayNum) {
            uVar73 = ~uVar69 >> 0x1f;
          }
          if ((uVar73 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar53 = *(FActorHandle **)
                     ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar69 * 8);
          uVar89 = local_1040._0_8_;
          ImmediatePhysics_Chaos::FActorHandle::SetLinearVelocity
                    (pFVar53,(TVector<double> *)(pFVar9 + local_1040._0_8_ + 0x20));
          local_b98 = *(double *)(pFVar9 + uVar89);
          dStack_b90 = *(double *)(pFVar9 + uVar89 + 8);
          local_b88 = *(double *)(pFVar9 + uVar89 + 0x10);
          dStack_b80 = *(double *)(pFVar9 + uVar89 + 0x10 + 8);
          dVar78 = local_b98 * local_b98 + local_b88 * local_b88;
          dVar90 = dStack_b90 * dStack_b90 + 0.0;
          dVar111 = dVar90 + dVar78;
          dVar78 = dVar78 + dVar90;
          auVar12._8_4_ = SUB84(dVar78,0);
          auVar12._0_8_ = dVar111;
          auVar12._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
          _Var97.m128d_f64 = (double  [2])sqrtpd(_Var97.m128d_f64,auVar12);
          uVar64 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= dVar111);
          uVar66 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= dVar78);
          auVar92 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          (undefined1  [16])_Var97.m128d_f64);
          uVar65 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= dVar111);
          auVar120._0_8_ = uVar64 & (ulonglong)(auVar92._0_8_ * local_b98);
          uVar52 = uVar66 & (ulonglong)(auVar92._8_8_ * dStack_b90);
          auVar120._8_4_ = (undefined4)uVar52;
          auVar120._12_4_ = (undefined4)(uVar52 >> 0x20);
          auVar93._0_4_ =
               ~(uint)uVar64 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
          auVar93._4_4_ =
               ~(uint)(uVar64 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
          auVar93._8_4_ =
               ~(uint)uVar66 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
          auVar93._12_4_ =
               ~(uint)(uVar66 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
          auVar120 = auVar120 | auVar93;
          auVar92 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,
                          (undefined1  [16])_Var97.m128d_f64);
          local_db8 = (double)(CONCAT44(~(uint)(uVar65 >> 0x20) &
                                        (uint)((ulonglong)
                                               (double)GlobalVectorConstants::Float1000.m128_f32[2]
                                              >> 0x20),
                                        ~(uint)uVar65 &
                                        SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0
                                             )) | uVar65 & (ulonglong)(auVar92._0_8_ * local_b88));
          dVar111 = dVar91;
          if ((dVar91 <= dStack_b80) && (dVar111 = dStack_b80, dVar79 <= dStack_b80)) {
            dVar111 = dVar79;
          }
          local_dc8 = auVar120;
          dVar111 = acos(dVar111);
          dVar111 = dVar111 + dVar111;
          local_e18._s_0.X = auVar120._0_8_ * dVar111;
          local_e18._s_0.Y = auVar120._8_8_ * dVar111;
          local_e18._s_0.Z = local_db8 * dVar111;
          ImmediatePhysics_Chaos::FActorHandle::SetAngularVelocity
                    (pFVar53,(TVector<double> *)&local_e18._s_0);
        }
        pFVar54 = pFVar54 + 0x20;
      }
      FCSPose<FCompactHeapPose>::Empty(&this->CapturedBoneVelocityPose);
      fVar122 = local_1064;
    }
    pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
    iVar5 = (this->OutputBoneData).ArrayNum;
    pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
    pFVar60 = (FCompactPoseBoneIndex *)(pFVar54 + 0x10);
    while( true ) {
      local_1040._0_8_ = pFVar54;
      if ((this->OutputBoneData).ArrayNum != iVar5) {
        local_1068 = 0;
        `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_1068);
      }
      if (pFVar54 == pFVar61) break;
      FVar37 = pFVar60[1];
      uVar69 = uVar40;
      if ((int)FVar37 < (this->BodyAnimData).ArrayNum) {
        uVar69 = ~(uint)FVar37 >> 0x1f;
      }
      if ((uVar69 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((byte)(this->BodyAnimData).AllocatorInstance.Data[(longlong)(int)FVar37 * 0x50 + 0x4c] &
          1) == 0) {
        pTVar47 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_1050->Pose,*pFVar60);
        EVar4 = this->SimulationSpace;
        if (EVar4 == ComponentSpace) {
LAB_1464329e7:
          local_888.Rotation.XY.m128d_f64 = *&(pTVar47->Rotation).XY.m128d_f64;
          local_888.Rotation.ZW.m128d_f64 = *&(pTVar47->Rotation).ZW.m128d_f64;
          local_888.Translation.XY.m128d_f64[0] = (pTVar47->Translation).XY.m128d_f64[0];
          local_888.Translation.XY.m128d_f64[1] = (pTVar47->Translation).XY.m128d_f64[1];
          local_888.Translation.ZW.m128d_f64 = *&(pTVar47->Translation).ZW.m128d_f64;
          local_888.Scale3D.XY.m128d_f64 = *&(pTVar47->Scale3D).XY.m128d_f64;
          local_888.Scale3D.ZW.m128d_f64 = *&(pTVar47->Scale3D).ZW.m128d_f64;
        }
        else if (EVar4 == WorldSpace) {
          local_888.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_888.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_888.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_888.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_888.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_888.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_888.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_888.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_888.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_888.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_888.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_888.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_888.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_888.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_888.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_888.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_888,pTVar47,&local_b28);
        }
        else {
          if (EVar4 != BaseBoneSpace) {
            local_1067 = 0;
            `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(&local_1067);
            goto LAB_1464329e7;
          }
          UE::Math::TTransform<double>::GetRelativeTransform(pTVar47,&local_888,&local_828);
        }
        uVar69 = uVar40;
        if ((int)FVar37 < (this->Bodies).ArrayNum) {
          uVar69 = ~(uint)FVar37 >> 0x1f;
        }
        if ((uVar69 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget
                  (*(FActorHandle **)
                    ((this->Bodies).AllocatorInstance.Data + (longlong)(int)FVar37 * 8),&local_888);
      }
      pFVar54 = (FScriptContainerElement *)(local_1040._0_8_ + 0x20);
      pFVar60 = pFVar60 + 8;
    }
    UpdateWorldForces(this,&local_b28,&local_828,fVar122);
    pTVar48 = WorldVectorToSpaceNoScale
                        (&local_b48,this->SimulationSpace,&this->WorldSpaceGravity,&local_b28,
                         &local_828);
    dVar79 = (double)RBAN_GravityScale;
    local_1010._s_0.X = (pTVar48->field0_0x0)._s_0.X * dVar79;
    local_1010._s_0.Z = (pTVar48->field0_0x0)._s_0.Z * dVar79;
    local_1010._s_0.Y = (pTVar48->field0_0x0)._s_0.Y * dVar79;
    local_eb8.MaxAngularVelocity = (this->SimSpaceSettings).MaxAngularVelocity;
    local_eb8.MaxLinearAcceleration = (this->SimSpaceSettings).MaxLinearAcceleration;
    local_eb8.MaxAngularAcceleration = (this->SimSpaceSettings).MaxAngularAcceleration;
    local_eb8._28_4_ = *(undefined4 *)&(this->SimSpaceSettings).field_0x1c;
    local_eb8.WorldAlpha = (this->SimSpaceSettings).WorldAlpha;
    local_eb8.VelocityScaleZ = (this->SimSpaceSettings).VelocityScaleZ;
    local_eb8.DampingAlpha = (this->SimSpaceSettings).DampingAlpha;
    local_eb8.MaxLinearVelocity = (this->SimSpaceSettings).MaxLinearVelocity;
    local_eb8.ExternalLinearDragV.field0_0x0._s_0.Z =
         (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z;
    local_eb8.ExternalLinearVelocity.field0_0x0._s_0.X =
         (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X;
    local_eb8.ExternalLinearDragV.field0_0x0._s_0.X =
         (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X;
    local_eb8.ExternalLinearDragV.field0_0x0._s_0.Y =
         (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y;
    local_eb8.ExternalAngularVelocity.field0_0x0._s_0.X =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
    local_eb8.ExternalAngularVelocity.field0_0x0._s_0.Y =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
    local_eb8.ExternalLinearVelocity.field0_0x0._s_0.Y =
         (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y;
    local_eb8.ExternalLinearVelocity.field0_0x0._s_0.Z =
         (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z;
    local_eb8.ExternalAngularVelocity.field0_0x0._s_0.Z =
         (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
    if (bRBAN_SimSpace_EnableOverride != false) {
      if (0.0 <= RBAN_SimSpaceOverride_WorldAlpha) {
        local_eb8.WorldAlpha = RBAN_SimSpaceOverride_WorldAlpha;
      }
      if (0.0 <= RBAN_SimSpaceOverride_VelocityScaleZ) {
        local_eb8.VelocityScaleZ = RBAN_SimSpaceOverride_VelocityScaleZ;
      }
      if (0.0 <= RBAN_SimSpaceOverride_DampingAlpha) {
        local_eb8.DampingAlpha = RBAN_SimSpaceOverride_DampingAlpha;
      }
      if (0.0 <= RBAN_SimSpaceOverride_MaxLinearVelocity) {
        local_eb8.MaxLinearVelocity = RBAN_SimSpaceOverride_MaxLinearVelocity;
      }
      if (0.0 <= RBAN_SimSpaceOverride_MaxAngularVelocity) {
        local_eb8.MaxAngularVelocity = RBAN_SimSpaceOverride_MaxAngularVelocity;
      }
      if (0.0 <= RBAN_SimSpaceOverride_MaxLinearAcceleration) {
        local_eb8.MaxLinearAcceleration = RBAN_SimSpaceOverride_MaxLinearAcceleration;
      }
      if (0.0 <= RBAN_SimSpaceOverride_MaxAngularAcceleration) {
        local_eb8.MaxAngularAcceleration = RBAN_SimSpaceOverride_MaxAngularAcceleration;
      }
    }
    EVar4 = this->SimulationSpace;
    if (EVar4 == ComponentSpace) {
      local_9a8.Rotation.XY.m128d_f64[1] = local_b28.Rotation.XY.m128d_f64[1];
      local_9a8.Rotation.XY.m128d_f64[0] = local_b28.Rotation.XY.m128d_f64[0];
      local_9a8.Rotation.ZW.m128d_f64[1] = local_b28.Rotation.ZW.m128d_f64[1];
      local_9a8.Rotation.ZW.m128d_f64[0] = local_b28.Rotation.ZW.m128d_f64[0];
      local_9a8.Translation.XY.m128d_f64[1] = local_b28.Translation.XY.m128d_f64[1];
      local_9a8.Translation.XY.m128d_f64[0] = local_b28.Translation.XY.m128d_f64[0];
      local_9a8.Translation.ZW.m128d_f64[1] = local_b28.Translation.ZW.m128d_f64[1];
      local_9a8.Translation.ZW.m128d_f64[0] = local_b28.Translation.ZW.m128d_f64[0];
      uVar68 = local_b28.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar71 = local_b28.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar75 = local_b28.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar77 = local_b28.Scale3D.XY.m128d_f64[1]._4_4_;
      local_9a8.Scale3D.ZW.m128d_f64 = local_b28.Scale3D.ZW.m128d_f64;
LAB_146432dd0:
      local_9a8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar71,uVar68);
      local_9a8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar77,uVar75);
    }
    else {
      if ((EVar4 == WorldSpace) || (EVar4 != BaseBoneSpace)) {
        local_9a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_9a8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_9a8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_9a8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        uVar68 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar71 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar75 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar77 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_9a8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
        goto LAB_146432dd0;
      }
      local_9a8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_9a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_9a8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_9a8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_9a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_9a8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_9a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_9a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_9a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_9a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_9a8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_9a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_9a8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_9a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_9a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_9a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_9a8,&local_828,&local_b28);
    }
    CalculateSimulationSpaceMotion
              (this,this->SimulationSpace,&local_9a8,&local_b28,fVar122,&local_eb8,&local_c10,
               &local_c28,&local_c40,&local_c58);
    UpdateWorldObjects(this,&local_9a8);
    UpdateClothColliderObjects(this,&local_9a8);
    ImmediatePhysics_Chaos::FSimulation::UpdateSimulationSpace
              (this->PhysicsSimulation,&local_9a8,&local_c10,&local_c28,&local_c40,&local_c58);
    ImmediatePhysics_Chaos::FSimulation::SetSimulationSpaceSettings
              (this->PhysicsSimulation,0.0 < local_eb8.WorldAlpha,(double)local_eb8.DampingAlpha,
               &local_eb8.ExternalLinearDragV);
    ImmediatePhysics_Chaos::FSimulation::SetSolverSettings
              (this->PhysicsSimulation,(double)(this->SolverSettings).FixedTimeStep,
               (double)(this->SolverSettings).CullDistance,
               (double)(this->SolverSettings).MaxDepenetrationVelocity,
               (uint)(this->SolverSettings).bUseLinearJointSolver,
               (this->SolverSettings).PositionIterations,(this->SolverSettings).VelocityIterations,
               (this->SolverSettings).ProjectionIterations,
               (uint)(this->SolverSettings).bUseManifolds);
    if (cVar25 == '\0') {
      RunPhysicsSimulation(this,fVar122,(TVector<double> *)&local_1010._s_0);
    }
    if (bRBAN_DebugDraw != false) {
      ImmediatePhysics_Chaos::FSimulation::DebugDraw(this->PhysicsSimulation);
    }
  }
  auVar92 = ___xmm_7ff00000000000007ff0000000000000;
  uVar69 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar123 = __real_3f666666;
  fVar122 = __real_38d1b717;
  pTVar47 = &this->PreviousCompWorldSpaceTM;
  if (cVar25 == '\0') {
    pTVar47 = &local_b28;
  }
  iVar5 = (this->OutputBoneData).ArrayNum;
  pFVar54 = (this->OutputBoneData).AllocatorInstance.Data;
  pFVar61 = pFVar54 + (longlong)iVar5 * 0x20;
  while( true ) {
    if ((this->OutputBoneData).ArrayNum != iVar5) {
      local_1066 = 0;
      `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1066);
    }
    FVar63 = local_1048;
    FVar62 = local_1058;
    if (pFVar54 == pFVar61) break;
    uVar73 = *(uint *)(pFVar54 + 0x14);
    lVar58 = (longlong)(int)uVar73;
    uVar51 = uVar40;
    if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
      uVar51 = ~uVar73 >> 0x1f;
    }
    if ((uVar51 == 0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar35)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (((byte)(this->BodyAnimData).AllocatorInstance.Data[lVar58 * 0x50 + 0x4c] & 1) == 0) {
LAB_1464338da:
      pFVar54 = pFVar54 + 0x20;
    }
    else {
      uVar51 = uVar40;
      if ((int)uVar73 < (this->Bodies).ArrayNum) {
        uVar51 = ~uVar73 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar53 = *(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar58 * 8);
      pTVar49 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform(pFVar53,&local_a08);
      uVar72 = auVar92._0_4_;
      uVar128 = auVar92._4_4_;
      uVar114 = auVar92._8_4_;
      uVar127 = auVar92._12_4_;
      dVar79 = auVar92._0_8_;
      dVar91 = auVar92._8_8_;
      auVar83._0_8_ =
           (double)CONCAT44(uVar128 & local_a08.Rotation.XY.m128d_f64[0]._4_4_,
                            uVar72 & local_a08.Rotation.XY.m128d_f64[0]._0_4_);
      auVar83._8_4_ = uVar114 & local_a08.Rotation.XY.m128d_f64[1]._0_4_;
      auVar83._12_4_ = uVar127 & local_a08.Rotation.XY.m128d_f64[1]._4_4_;
      lVar67 = -(ulonglong)
                ((double)CONCAT44(uVar127 & local_a08.Rotation.ZW.m128d_f64[1]._4_4_,
                                  uVar114 & local_a08.Rotation.ZW.m128d_f64[1]._0_4_) == dVar91);
      auVar13._8_4_ = (int)lVar67;
      auVar13._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(uVar128 & local_a08.Rotation.ZW.m128d_f64[0]._4_4_,
                              uVar72 & local_a08.Rotation.ZW.m128d_f64[0]._0_4_) == dVar79);
      auVar13._12_4_ = (int)((ulonglong)lVar67 >> 0x20);
      uVar51 = movmskpd((int)pFVar53,auVar13);
      auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ == dVar91);
      auVar84._0_8_ = -(ulonglong)(auVar83._0_8_ == dVar79);
      iVar39 = movmskpd((int)pTVar49,auVar84);
      if ((uVar51 & 0x3fffffff) != 0 || iVar39 != 0) {
LAB_1464338ad:
        bVar35 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<8095936378556121949>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                            ,0x35d,"!BodyTM.ContainsNaN()");
        if (bVar35) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        goto LAB_1464338da;
      }
      lVar67 = -(ulonglong)
                ((double)CONCAT44(local_a08.Translation.ZW.m128d_f64[1]._4_4_ & uVar127,
                                  local_a08.Translation.ZW.m128d_f64[1]._0_4_ & uVar114) == dVar91);
      auVar85._0_8_ =
           (double)CONCAT44(local_a08.Translation.XY.m128d_f64[0]._4_4_ & uVar128,
                            local_a08.Translation.XY.m128d_f64[0]._0_4_ & uVar72);
      auVar85._8_4_ = local_a08.Translation.XY.m128d_f64[1]._0_4_ & uVar114;
      auVar85._12_4_ = local_a08.Translation.XY.m128d_f64[1]._4_4_ & uVar127;
      auVar14._8_4_ = (int)lVar67;
      auVar14._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_a08.Translation.ZW.m128d_f64[0]._4_4_ & uVar128,
                              local_a08.Translation.ZW.m128d_f64[0]._0_4_ & uVar72) == dVar79);
      auVar14._12_4_ = (int)((ulonglong)lVar67 >> 0x20);
      uVar51 = movmskpd(0,auVar14);
      auVar86._8_8_ = -(ulonglong)(auVar85._8_8_ == dVar91);
      auVar86._0_8_ = -(ulonglong)(auVar85._0_8_ == dVar79);
      iVar39 = movmskpd(iVar39,auVar86);
      if ((uVar51 & 0x3fffffff) != 0 || iVar39 != 0) goto LAB_1464338ad;
      lVar67 = -(ulonglong)
                ((double)CONCAT44(local_a08.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar127,
                                  local_a08.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar114) == dVar91);
      auVar87._0_8_ =
           (double)CONCAT44(local_a08.Scale3D.XY.m128d_f64[0]._4_4_ & uVar128,
                            local_a08.Scale3D.XY.m128d_f64[0]._0_4_ & uVar72);
      auVar87._8_4_ = local_a08.Scale3D.XY.m128d_f64[1]._0_4_ & uVar114;
      auVar87._12_4_ = local_a08.Scale3D.XY.m128d_f64[1]._4_4_ & uVar127;
      auVar15._8_4_ = (int)lVar67;
      auVar15._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_a08.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar128,
                              local_a08.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar72) == dVar79);
      auVar15._12_4_ = (int)((ulonglong)lVar67 >> 0x20);
      uVar51 = movmskpd(0,auVar15);
      auVar88._8_8_ = -(ulonglong)(auVar87._8_8_ == dVar91);
      auVar88._0_8_ = -(ulonglong)(auVar87._0_8_ == dVar79);
      iVar39 = movmskpd(iVar39,auVar88);
      if ((uVar51 & 0x3fffffff) != 0 || iVar39 != 0) goto LAB_1464338ad;
      if (this->bClampLinearTranslationLimitToRefPose != '\0') {
        uVar51 = uVar38;
        if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
          uVar51 = ~uVar73 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if (*(int *)((this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x38) == 2) {
          uVar51 = uVar38;
          if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
            uVar51 = ~uVar73 >> 0x1f;
          }
          if ((uVar51 == 0) &&
             (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar35)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (*(int *)((this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x3c) == 2) {
            uVar51 = uVar38;
            if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
              uVar51 = ~uVar73 >> 0x1f;
            }
            if ((uVar51 == 0) &&
               (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar35)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(int *)((this->BodyAnimData).AllocatorInstance.Data + lVar58 * 0x50 + 0x40) == 2) {
              uVar51 = *(uint *)(pFVar54 + 0x18);
              local_748.Rotation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
              local_748.Rotation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
              local_748.Translation.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
              local_748.Translation.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
              local_748.Scale3D.XY.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
              local_748.Scale3D.ZW.m128d_f64 =
                   UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              if (uVar51 != 0xffffffff) {
                uVar72 = uVar38;
                if ((int)uVar51 < (this->Bodies).ArrayNum) {
                  uVar72 = ~uVar51 >> 0x1f;
                }
                if ((uVar72 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pTVar49 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                                    (*(FActorHandle **)
                                      ((this->Bodies).AllocatorInstance.Data +
                                      (longlong)(int)uVar51 * 8),&local_208);
                local_748.Rotation.XY.m128d_f64 = *&(pTVar49->Rotation).XY.m128d_f64;
                local_748.Rotation.ZW.m128d_f64 = *&(pTVar49->Rotation).ZW.m128d_f64;
                local_748.Translation.XY.m128d_f64 = *&(pTVar49->Translation).XY.m128d_f64;
                local_748.Translation.ZW.m128d_f64 = *&(pTVar49->Translation).ZW.m128d_f64;
                local_748.Scale3D.XY.m128d_f64 = *&(pTVar49->Scale3D).XY.m128d_f64;
                local_748.Scale3D.ZW.m128d_f64 = *&(pTVar49->Scale3D).ZW.m128d_f64;
              }
              UE::Math::TTransform<double>::GetRelativeTransform(&local_a08,&local_5c8,&local_748);
              local_bf8 = local_5c8.Translation.XY.m128d_f64[0];
              dStack_bf0 = local_5c8.Translation.XY.m128d_f64[1];
              uVar51 = uVar40;
              if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
                uVar51 = ~uVar73 >> 0x1f;
              }
              local_be8 = local_5c8.Translation.ZW.m128d_f64[0];
              fVar115 = (float)SQRT(local_5c8.Translation.XY.m128d_f64[0] *
                                    local_5c8.Translation.XY.m128d_f64[0] +
                                    local_5c8.Translation.XY.m128d_f64[1] *
                                    local_5c8.Translation.XY.m128d_f64[1] +
                                    local_5c8.Translation.ZW.m128d_f64[0] *
                                    local_5c8.Translation.ZW.m128d_f64[0]);
              if ((uVar51 == 0) &&
                 (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar35)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if (fVar122 < (float)((uint)(fVar115 -
                                          *(float *)((this->BodyAnimData).AllocatorInstance.Data +
                                                    lVar58 * 0x50 + 0x48)) & uVar69)) {
                uVar51 = uVar40;
                if ((int)uVar73 < (this->BodyAnimData).ArrayNum) {
                  uVar51 = ~uVar73 >> 0x1f;
                }
                if ((uVar51 == 0) &&
                   (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar35)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                fVar124 = *(float *)((this->BodyAnimData).AllocatorInstance.Data +
                                    lVar58 * 0x50 + 0x48);
                if ((fVar124 < fVar115) &&
                   ((fVar70 = 0.0, fVar115 <= fVar122 ||
                    (fVar70 = fVar124 / fVar115, fVar70 < fVar123)))) {
                  local_bd0 = (double)fVar70;
                  local_5c8.Translation.XY.m128d_f64[0] =
                       local_5c8.Translation.XY.m128d_f64[0] * local_bd0;
                  local_5c8.Translation.XY.m128d_f64[1] =
                       local_5c8.Translation.XY.m128d_f64[1] * local_bd0;
                  local_be0._8_4_ = SUB84(local_bd0,0);
                  local_be0._0_8_ = local_bd0;
                  local_be0._12_4_ = (int)((ulonglong)local_bd0 >> 0x20);
                  dVar79 = local_5c8.Translation.ZW.m128d_f64[1] * 0.0;
                  local_5c8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar79,0);
                  local_5c8.Translation.ZW.m128d_f64[0] =
                       local_5c8.Translation.ZW.m128d_f64[0] * local_bd0;
                  local_5c8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar79 >> 0x20);
                  local_688.Rotation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                  local_688.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_688.Rotation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20
                            );
                  local_688.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_688.Translation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                  local_688.Rotation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                  local_688.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_688.Rotation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20
                            );
                  local_688.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_688.Scale3D.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[1];
                  local_688.Translation.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                  local_688.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_688.Translation.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20
                            );
                  local_688.Scale3D.ZW.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                  local_688.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_688.Scale3D.ZW.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20
                            );
                  UE::Math::TTransform<double>::Multiply(&local_688,&local_5c8,&local_748);
                  local_a08.Rotation.XY.m128d_f64[0] = local_688.Rotation.XY.m128d_f64[0];
                  local_a08.Rotation.XY.m128d_f64[1] = local_688.Rotation.XY.m128d_f64[1];
                  local_a08.Rotation.ZW.m128d_f64[0] = local_688.Rotation.ZW.m128d_f64[0];
                  local_a08.Rotation.ZW.m128d_f64[1] = local_688.Rotation.ZW.m128d_f64[1];
                  uVar51 = uVar40;
                  if ((int)uVar73 < (this->Bodies).ArrayNum) {
                    uVar51 = ~uVar73 >> 0x1f;
                  }
                  local_a08.Translation.XY.m128d_f64[0]._0_4_ =
                       SUB84(local_688.Translation.XY.m128d_f64[0],0);
                  local_a08.Translation.XY.m128d_f64[0]._4_4_ =
                       (uint)((ulonglong)local_688.Translation.XY.m128d_f64[0] >> 0x20);
                  local_a08.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84(local_688.Translation.XY.m128d_f64[1],0);
                  local_a08.Translation.XY.m128d_f64[1]._4_4_ =
                       (uint)((ulonglong)local_688.Translation.XY.m128d_f64[1] >> 0x20);
                  local_a08.Translation.ZW.m128d_f64[0]._0_4_ =
                       local_688.Translation.ZW.m128d_f64[0]._0_4_;
                  local_a08.Translation.ZW.m128d_f64[0]._4_4_ =
                       local_688.Translation.ZW.m128d_f64[0]._4_4_;
                  local_a08.Translation.ZW.m128d_f64[1]._0_4_ =
                       local_688.Translation.ZW.m128d_f64[1]._0_4_;
                  local_a08.Translation.ZW.m128d_f64[1]._4_4_ =
                       local_688.Translation.ZW.m128d_f64[1]._4_4_;
                  local_a08.Scale3D.XY.m128d_f64[0] = local_688.Scale3D.XY.m128d_f64[0];
                  local_a08.Scale3D.XY.m128d_f64[1] = local_688.Scale3D.XY.m128d_f64[1];
                  local_a08.Scale3D.ZW.m128d_f64[0] = local_688.Scale3D.ZW.m128d_f64[0];
                  local_a08.Scale3D.ZW.m128d_f64[1] = local_688.Scale3D.ZW.m128d_f64[1];
                  if ((uVar51 == 0) &&
                     (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar35)) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                  ImmediatePhysics_Chaos::FActorHandle::SetWorldTransform
                            (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar58 * 8),
                             &local_a08);
                }
              }
            }
          }
        }
      }
      EVar4 = this->SimulationSpace;
      if (EVar4 == ComponentSpace) {
LAB_14643367f:
        local_ee8.AllocatorInstance.Data._4_4_ = local_a08.Translation.ZW.m128d_f64[0]._4_4_;
        local_ee8.AllocatorInstance.Data._0_4_ = local_a08.Translation.ZW.m128d_f64[0]._0_4_;
        local_ee8.ArrayNum = local_a08.Translation.ZW.m128d_f64[1]._0_4_;
        local_ee8.ArrayMax = local_a08.Translation.ZW.m128d_f64[1]._4_4_;
        local_ef8.AllocatorInstance.Data._4_4_ = local_a08.Translation.XY.m128d_f64[0]._4_4_;
        local_ef8.AllocatorInstance.Data._0_4_ = local_a08.Translation.XY.m128d_f64[0]._0_4_;
        local_ef8.ArrayNum = local_a08.Translation.XY.m128d_f64[1]._0_4_;
        local_ef8.ArrayMax = local_a08.Translation.XY.m128d_f64[1]._4_4_;
        local_f18 = local_a08.Rotation.XY.m128d_f64[0]._0_4_;
        uStack_f14 = local_a08.Rotation.XY.m128d_f64[0]._4_4_;
        iStack_f10 = local_a08.Rotation.XY.m128d_f64[1]._0_4_;
        iStack_f0c = local_a08.Rotation.XY.m128d_f64[1]._4_4_;
        local_ed8 = local_a08.Scale3D.XY.m128d_f64[0]._0_4_;
        uStack_ed4 = local_a08.Scale3D.XY.m128d_f64[0]._4_4_;
        iStack_ed0 = local_a08.Scale3D.XY.m128d_f64[1]._0_4_;
        iStack_ecc = local_a08.Scale3D.XY.m128d_f64[1]._4_4_;
        local_ec8 = local_a08.Scale3D.ZW.m128d_f64[0]._0_4_;
        uStack_ec4 = local_a08.Scale3D.ZW.m128d_f64[0]._4_4_;
        iStack_ec0 = local_a08.Scale3D.ZW.m128d_f64[1]._0_4_;
        iStack_ebc = local_a08.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_f08.Data = (FScriptContainerElement *)local_a08.Rotation.ZW.m128d_f64[0];
        dStack_f00 = local_a08.Rotation.ZW.m128d_f64[1];
      }
      else if (EVar4 == WorldSpace) {
        pTVar49 = UE::Math::TTransform<double>::GetRelativeTransform(&local_a08,&local_1a8,pTVar47);
        local_f18 = *(undefined4 *)(pTVar49->Rotation).XY.m128d_f64;
        uStack_f14 = *(undefined4 *)((longlong)(pTVar49->Rotation).XY.m128d_f64 + 4);
        iStack_f10 = *(int *)((pTVar49->Rotation).XY.m128d_f64 + 1);
        iStack_f0c = *(int *)((longlong)(pTVar49->Rotation).XY.m128d_f64 + 0xc);
        local_f08.Data = (FScriptContainerElement *)(pTVar49->Rotation).ZW.m128d_f64[0];
        dStack_f00 = (pTVar49->Rotation).ZW.m128d_f64[1];
        local_ef8 = *(TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar49->Translation).XY.m128d_f64;
        local_ee8 = *(TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                     (pTVar49->Translation).ZW.m128d_f64;
        local_ed8 = *(undefined4 *)(pTVar49->Scale3D).XY.m128d_f64;
        uStack_ed4 = *(undefined4 *)((longlong)(pTVar49->Scale3D).XY.m128d_f64 + 4);
        iStack_ed0 = *(int *)((pTVar49->Scale3D).XY.m128d_f64 + 1);
        iStack_ecc = *(int *)((longlong)(pTVar49->Scale3D).XY.m128d_f64 + 0xc);
        local_ec8 = *(undefined4 *)(pTVar49->Scale3D).ZW.m128d_f64;
        uStack_ec4 = *(undefined4 *)((longlong)(pTVar49->Scale3D).ZW.m128d_f64 + 4);
        iStack_ec0 = *(int *)((pTVar49->Scale3D).ZW.m128d_f64 + 1);
        iStack_ebc = *(int *)((longlong)(pTVar49->Scale3D).ZW.m128d_f64 + 0xc);
      }
      else {
        if (EVar4 != BaseBoneSpace) {
          local_1065 = 0;
          `FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread'::__l217::<lambda_2>::operator()
                    (&local_1065);
          goto LAB_14643367f;
        }
        local_628.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_628.Translation.XY.m128d_f64[0] =
             (FScriptContainerElement *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_628.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_628.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_628.Translation.ZW.m128d_f64[0] =
             (FScriptContainerElement *)(double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_628.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_628.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_628.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_628.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_628.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_628.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_628.Rotation.ZW.m128d_f64[0] =
             (double)(double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_628.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_628.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_628.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        UE::Math::TTransform<double>::Multiply(&local_628,&local_a08,&local_828);
        local_f18 = local_628.Rotation.XY.m128d_f64[0]._0_4_;
        uStack_f14 = local_628.Rotation.XY.m128d_f64[0]._4_4_;
        iStack_f10 = local_628.Rotation.XY.m128d_f64[1]._0_4_;
        iStack_f0c = local_628.Rotation.XY.m128d_f64[1]._4_4_;
        local_ef8 = (TArray<int,TSizedDefaultAllocator<32>_>)local_628.Translation.XY;
        local_ee8 = (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>)
                    local_628.Translation.ZW;
        local_ed8 = local_628.Scale3D.XY.m128d_f64[0]._0_4_;
        uStack_ed4 = local_628.Scale3D.XY.m128d_f64[0]._4_4_;
        iStack_ed0 = local_628.Scale3D.XY.m128d_f64[1]._0_4_;
        iStack_ecc = local_628.Scale3D.XY.m128d_f64[1]._4_4_;
        local_ec8 = local_628.Scale3D.ZW.m128d_f64[0]._0_4_;
        uStack_ec4 = local_628.Scale3D.ZW.m128d_f64[0]._4_4_;
        iStack_ec0 = local_628.Scale3D.ZW.m128d_f64[1]._0_4_;
        iStack_ebc = local_628.Scale3D.ZW.m128d_f64[1]._4_4_;
        local_f08.Data = (FScriptContainerElement *)local_628.Rotation.ZW.m128d_f64[0];
        dStack_f00 = local_628.Rotation.ZW.m128d_f64[1];
      }
      uVar89 = local_f68._8_8_;
      local_7b8 = *(undefined4 *)(pFVar54 + 0x10);
      pFVar9 = ((ForAnyElementType *)local_f68._8_8_)->Data;
      local_7a8 = local_f18;
      uStack_7a4 = uStack_f14;
      iStack_7a0 = iStack_f10;
      iStack_79c = iStack_f0c;
      local_798 = local_f08.Data;
      dStack_790 = dStack_f00;
      local_788 = local_ef8;
      local_778 = local_ee8;
      local_768 = local_ed8;
      uStack_764 = uStack_ed4;
      iStack_760 = iStack_ed0;
      iStack_75c = iStack_ecc;
      local_758 = local_ec8;
      uStack_754 = uStack_ec4;
      iStack_750 = iStack_ec0;
      iStack_74c = iStack_ebc;
      if (((pFVar9 <= (FScriptContainerElement *)&local_7b8) &&
          ((FScriptContainerElement *)&local_7b8 <
           pFVar9 + (longlong)*(int *)(local_f68._8_8_ + 0xc) * 0x70)) &&
         (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar35)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar39 = *(int *)(uVar89 + 8);
      if (iVar39 == *(int *)(uVar89 + 0xc)) {
        iVar39 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,(ForAnyElementType *)uVar89,(int *)(uVar89 + 0xc));
      }
      *(int *)(uVar89 + 8) = iVar39 + 1;
      lVar58 = (longlong)iVar39 * 0x70;
      pFVar9 = ((ForAnyElementType *)uVar89)->Data;
      pFVar54 = pFVar54 + 0x20;
      *(ulonglong *)(pFVar9 + lVar58) = CONCAT44(uStack_7b4,local_7b8);
      *(undefined8 *)(pFVar9 + lVar58 + 8) = uStack_7b0;
      *(ulonglong *)(pFVar9 + lVar58 + 0x10) = CONCAT44(uStack_7a4,local_7a8);
      *(ulonglong *)(pFVar9 + lVar58 + 0x10 + 8) = CONCAT44(iStack_79c,iStack_7a0);
      *(FScriptContainerElement **)(pFVar9 + lVar58 + 0x20) = local_798;
      *(double *)(pFVar9 + lVar58 + 0x20 + 8) = dStack_790;
      *(FScriptContainerElement **)(pFVar9 + lVar58 + 0x30) = local_788.AllocatorInstance.Data;
      *(undefined8 *)(pFVar9 + lVar58 + 0x30 + 8) = local_788._8_8_;
      *(FScriptContainerElement **)(pFVar9 + lVar58 + 0x40) = local_778.AllocatorInstance.Data;
      *(undefined8 *)(pFVar9 + lVar58 + 0x40 + 8) = local_778._8_8_;
      auVar23._4_4_ = uStack_764;
      auVar23._0_4_ = local_768;
      auVar23._8_4_ = iStack_760;
      auVar23._12_4_ = iStack_75c;
      *(undefined1 (*) [16])(pFVar9 + lVar58 + 0x50) = auVar23;
      *(ulonglong *)(pFVar9 + lVar58 + 0x60) = CONCAT44(uStack_754,local_758);
      *(ulonglong *)(pFVar9 + lVar58 + 0x60 + 8) = CONCAT44(iStack_74c,iStack_750);
    }
  }
  if ((bVar36) && (cVar25 != '\0')) {
    pFVar45 = (this->SimulationTask).Pimpl.Reference;
    if ((pFVar45 != (FTaskBase *)0x0) &&
       (((pFVar45->Subsequents).bIsClosed == (atomic<bool>)0x0 &&
        (bVar36 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8095936378556122012>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                             ,0x39c,"SimulationTask.IsCompleted()"), bVar36)))) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar69 = 4;
    if (GRigidBodyNodeSimulationTaskPriority < 4) {
      uVar69 = GRigidBodyNodeSimulationTaskPriority;
    }
    local_db0.DeltaSeconds = local_1064;
    if (0 < (int)uVar69) {
      uVar40 = uVar69;
    }
    local_db0.SimSpaceGravity.field0_0x0._s_0.X = local_1010._s_0.X;
    local_db0.SimSpaceGravity.field0_0x0._s_0.Y = local_1010._s_0.Y;
    local_1028.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    local_db0.SimSpaceGravity.field0_0x0._s_0.Z = local_1010._s_0.Z;
    local_db0.__this = this;
    UE::Tasks::Private::FTaskHandle::
    Launch<_FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread_::__l220::<lambda_3>_>
              (&local_1028,L"RigidBodyNodeSimulationTask",&local_db0,
               GRigidBodyNodeTaskPriorities[(int)uVar40],None,None);
    pFVar2 = &this->SimulationTask;
    FVar56.Pimpl.Reference = local_1028.Pimpl.Reference;
    if (pFVar2 != &local_1028) {
      pFVar45 = (pFVar2->Pimpl).Reference;
      (pFVar2->Pimpl).Reference = (FTaskBase *)local_1028.Pimpl.Reference;
      FVar56.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar55;
      if (pFVar45 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar45->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar45->_padding_)(pFVar45,1);
        }
      }
    }
    if (FVar56.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &((FTaskBase *)FVar56.Pimpl.Reference)->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)FVar56.Pimpl.Reference)->_padding_)(FVar56.Pimpl.Reference,1);
      }
    }
  }
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = local_b28.Rotation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = local_b28.Rotation.XY.m128d_f64[1];
  this->ResetSimulatedTeleportType = None;
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = local_b28.Rotation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = local_b28.Rotation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
       local_b28.Translation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] =
       local_b28.Translation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
       local_b28.Translation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] =
       local_b28.Translation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = local_b28.Scale3D.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = local_b28.Scale3D.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] = local_b28.Scale3D.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = local_b28.Scale3D.ZW.m128d_f64[1];
  bVar36 = bVar29;
LAB_146433aaf:
  if (bVar36) {
    lVar58 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar58 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar50 = *(FWriteBuffer **)(lVar58 + 0x20);
    if ((int)pFVar50 - *(int *)&pFVar50->Cursor < 1) {
      pFVar50 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar50->Cursor = '\n';
    pFVar50->Cursor = pFVar50->Cursor + 1;
    pFVar50->Committed = pFVar50->Cursor;
  }
  if (bVar30) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar26) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar33) {
    FThreadStats::AddMessage(FVar63,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("RigidBodyEval",local_1014);
  if (bVar31) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar34) {
    FThreadStats::AddMessage(FVar62,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_f58);
  FLLMScope::~FLLMScope(local_1030);
  return;
}

// ExpireWorldObjects @ 14643eca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::ExpireWorldObjects(FAnimNode_RigidBody *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FBodyInstance *this_00;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->ComponentsInSim).field_0x10;
  iVar13 = 0;
  iVar3 = *(int *)&(this->ComponentsInSim).field_0x28;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ComponentsInSim).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14643ed4d;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = iVar15 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14643ed4d:
  uVar11 = *(uint *)&(this->ComponentsInSim).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar13);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ComponentsInSim).field_0x8 -
                       *(int *)&(this->ComponentsInSim).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ComponentsInSim).field_0x28;
  if (uVar11 != uVar7) {
    puVar14 = *(undefined1 **)&(this->ComponentsInSim).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14643ee50;
      uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14643ee50:
  do {
    if (*(int *)&(this->ComponentsInSim).field_0x8 - *(int *)&(this->ComponentsInSim).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar11) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    plVar12 = (longlong *)
              ((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)&this->ComponentsInSim);
    plVar4 = (longlong *)*plVar12;
    if (((RBAN_WorldObjectExpiry < this->ComponentsInSimTick - (int)plVar12[2]) ||
        (plVar4 == (longlong *)0x0)) || ((*(uint *)(plVar4 + 1) >> 0x1e & 1) != 0)) {
LAB_14643eef6:
      *(byte *)((longlong)plVar12 + 0x14) = *(byte *)((longlong)plVar12 + 0x14) | 1;
    }
    else {
      local_res18 = 0;
      lVar9 = (**(code **)(*plVar4 + 0x818))(plVar4,0,1,0xffffffff);
      if (lVar9 == 0) goto LAB_14643eef6;
      local_res20 = 0;
      this_00 = (FBodyInstance *)(**(code **)(*plVar4 + 0x818))(plVar4,0,1,0xffffffff);
      bVar6 = FBodyInstance::IsValidBodyInstance(this_00);
      if (!bVar6) goto LAB_14643eef6;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// FlushDeferredSimulationTask @ 146441830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::FlushDeferredSimulationTask(FAnimNode_RigidBody *this)

{
  int *piVar1;
  FTaskBase *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  pFVar2 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar2 == (FTaskBase *)0x0) {
    return;
  }
  if ((pFVar2->Subsequents).bIsClosed != (atomic<bool>)0x0) {
    return;
  }
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigidBodyNode_SimulationWait;
  if (StatPtr_STAT_RigidBodyNode_SimulationWait ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigidBodyNode_SimulationWait");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_SimulationWait>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNode_SimulationWait,
                       *pFVar6,L"RigidBodyNode_SimulationWait","STATGROUP_Anim","STATCAT_Advanced",
                       L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x1ea);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_1464419b1;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_1464419b1:
  if (__CsvProfilerStat491 == false) {
    FCsvProfilerTrace::OutputInlineStat("RigidBodyNodeSimulationWait",_GCsvCategory_Animation.Index)
    ;
    __CsvProfilerStat491 = true;
  }
  uVar8 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("RigidBodyNodeSimulationWait",_GCsvCategory_Animation.Index,
             "CSV_RigidBodyNodeSimulationWait");
  pFVar2 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar2 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar2);
  }
  FCsvProfiler::EndStat("RigidBodyNodeSimulationWait",uVar8);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_28.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// GatherDebugData @ 1464458f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::GatherDebugData(FAnimNode_RigidBody *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBody,(UObject *)pUVar1,
                         L"AnimNode_RigidBody");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBody.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(local_38,"(",1);
  ::FString::PrintfImpl(&local_48,L"Alpha: %.1f%%");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(local_38,")",1);
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  if (((this->bFreezeIncomingPoseOnStart == '\0') || (this->bSimulationStarted == '\0')) ||
     (*(int *)&(this->CapturedFrozenPose).Pose.field_0x8 < 1)) {
    FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 14644b470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FAnimNode_RigidBody::GetLODThreshold(FAnimNode_RigidBody *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = CVarRigidBodyLODThreshold.Ref;
  if (this->bUseLocalLODThresholdOnly != false) goto LAB_14644b522;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if (bVar4) {
LAB_14644b4b1:
    lVar5 = 0;
  }
  else {
    bVar4 = IsInGameThread();
    if (bVar4) goto LAB_14644b4b1;
    lVar5 = 4;
  }
  pTVar3 = CVarRigidBodyLODThreshold.Ref;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) == -1) {
LAB_14644b522:
    return *(int *)&this->field_0x20;
  }
  if (*(int *)&this->field_0x20 == -1) {
    bVar4 = IsInParallelGameThread();
    if (!bVar4) {
      bVar4 = IsInGameThread();
      if (!bVar4) goto LAB_14644b50f;
    }
    lVar6 = 0;
LAB_14644b50f:
    return *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
  }
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    if (!bVar4) goto LAB_14644b4da;
  }
  lVar6 = 0;
LAB_14644b4da:
  iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
  if (*(int *)&this->field_0x20 < iVar1) {
    iVar1 = *(int *)&this->field_0x20;
  }
  return iVar1;
}

// GetPhysicsAssetToBeUsed @ 14644c390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPhysicsAsset * __thiscall
FAnimNode_RigidBody::GetPhysicsAssetToBeUsed(FAnimNode_RigidBody *this,UAnimInstance *param_1)

{
  USkeletalMeshComponent *this_00;
  UPhysicsAsset *pUVar1;
  
  pUVar1 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPhysicsAsset *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) == 0)) {
    return (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  }
  if (param_1 != (UAnimInstance *)0x0) {
    this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
    if ((this->bDefaultToSkeletalMeshPhysicsAsset != false) &&
       (this_00 != (USkeletalMeshComponent *)0x0)) {
      pUVar1 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_00);
      return pUVar1;
    }
  }
  return (UPhysicsAsset *)0x0;
}

// GetSimulation @ 14644f390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSimulation * __thiscall FAnimNode_RigidBody::GetSimulation(FAnimNode_RigidBody *this)

{
  return this->PhysicsSimulation;
}

// HasPreUpdate @ 146450c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAnimNode_RigidBody::HasPreUpdate(FAnimNode_RigidBody *this)

{
  return true;
}

// InitPhysics @ 146452d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::InitPhysics(FAnimNode_RigidBody *this,UAnimInstance *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FAnimNode_RigidBody::FBodyAnimData,TSizedDefaultAllocator<32>_> *pTVar4;
  float fVar5;
  uchar uVar6;
  short sVar7;
  ushort uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UPhysicsAsset *pUVar12;
  FScriptContainerElement *pFVar13;
  TAtomic<FMinimalName> TVar14;
  FBodyInstance *pFVar15;
  FConstraintInstance *pFVar16;
  code *pcVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  TObjectPtr<USkeleton>_u_0 *pTVar24;
  UAnimInstance *pUVar25;
  USkeletalMesh *pUVar26;
  USkeleton *this_00;
  bool bVar27;
  bool bVar28;
  byte bVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  FName *pFVar36;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeInitTime> FVar37;
  USkeletalMeshComponent *this_01;
  UPackage *pUVar38;
  TEventRef<unsigned_int> TVar39;
  USkeletalMeshComponent *this_02;
  TObjectPtr<UPhysicsAsset>_u_0 TVar40;
  USkeleton *pUVar41;
  FSkeletonToMeshLinkup *pFVar42;
  UPhysicsSettings *pUVar43;
  TStatId TVar44;
  FSimulation *this_03;
  FSimulation *pFVar45;
  FChaosVDRuntimeModule *this_04;
  UWorld *pUVar46;
  TTransform<double> *pTVar47;
  FActorSetup *pFVar48;
  TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *pTVar49;
  FJointSetup *pFVar50;
  FWriteBuffer *pFVar51;
  bool bVar52;
  FScriptContainerElement *pFVar53;
  FName FVar54;
  ForAnyElementType FVar55;
  ulonglong uVar56;
  FActorHandle *this_05;
  uint uVar57;
  ulonglong uVar58;
  longlong lVar59;
  FActorHandle *this_06;
  TVector<double>_u_0 *pTVar60;
  uint *puVar61;
  uint uVar62;
  FAnimNode_RigidBody *pFVar63;
  FAnimNode_RigidBody *pFVar64;
  TObjectPtr<USkeleton> *pTVar65;
  FName FVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  undefined1 auStackY_a08 [32];
  undefined1 local_9a0;
  undefined1 local_99f;
  undefined1 local_99e;
  undefined1 local_99d;
  undefined1 local_99c;
  FIdentityFunctor local_99b [3];
  TArray<ImmediatePhysics_Chaos::FSimulation::FIgnorePair,TSizedDefaultAllocator<32>_> local_998;
  TObjectPtr<USkeleton>_u_0 *local_988;
  longlong local_980;
  ForAnyElementType local_978;
  int local_970 [2];
  undefined4 local_968 [2];
  FName local_960;
  TArray<FConstraintInstance_*,TSizedDefaultAllocator<32>_> local_958;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> local_948;
  ForAnyElementType local_938;
  undefined8 local_930;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_928;
  FActorHandle *local_918;
  ulonglong local_910;
  FName local_908;
  UAnimInstance *local_900;
  longlong local_8f8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_8f0;
  FLLMScope local_8e0 [2];
  FAnimNode_RigidBody *local_8d8;
  USkeletalMesh *local_8d0;
  USkeleton *local_8c8;
  ForAnyElementType local_8c0;
  int local_8b8 [2];
  FColor_u_0 local_8b0;
  FColor_u_0 local_8ac;
  FScriptContainerElement *local_8a8;
  undefined8 local_8a0;
  FName local_898;
  TArray<int,TSizedDefaultAllocator<32>_> *local_890;
  ulonglong local_888;
  FName local_880;
  undefined8 local_878;
  undefined8 local_870;
  FActorHandle *local_868;
  FActorHandle *pFStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  FName local_848;
  FName local_838;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_828;
  FBodyInstance *local_818;
  FMemScope local_810;
  FName local_808;
  int local_800;
  undefined1 local_7fc [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7f0;
  TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
  *local_7d0;
  int iStack_7c8;
  undefined4 uStack_7c4;
  undefined1 *local_7c0;
  undefined4 uStack_7b8;
  int iStack_7b4;
  int local_7b0;
  undefined4 uStack_7ac;
  initializer_list<FStringFormatArg> local_798;
  FString local_788;
  TObjectPtr<USkeleton>_u_0 *local_778;
  TObjectPtr<USkeleton>_u_0 **local_770;
  ForAnyElementType *local_768;
  longlong local_760;
  FName local_758;
  FName local_750;
  FName local_748;
  FName local_740;
  FString local_738;
  TVector<double>_u_0 local_728;
  TVector<double>_u_0 local_710;
  FStringFormatArg local_6f8;
  undefined1 local_6d8 [60];
  undefined4 local_69c;
  TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
  local_698;
  undefined4 *local_648;
  longlong local_640;
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  FActorSetup local_4b8;
  FJointSetup local_398;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_a08;
  local_900 = param_1;
  local_8d8 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1008,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_8e0,LLMScope_Name1008,false,None,Default,true);
  FMemScope::FMemScope(&local_810,&LLMScope_Name1008,true);
  FVar37 = StatPtr_STAT_RigidBodyNodeInitTime;
  if (StatPtr_STAT_RigidBodyNodeInitTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeInitTime>)0x0) {
    pFVar36 = ::FName::FName(&local_758,"STAT_RigidBodyNodeInitTime");
    FVar37 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeInitTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeInitTime,*pFVar36,
                        L"RigidBodyNodeInitTime","STATGROUP_ImmediatePhysics","STATCAT_Advanced",
                        L"Immediate Physics",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar66 = *(FName *)FVar37;
  bVar18 = false;
  bVar21 = false;
  local_848.ComparisonIndex.Value = 0;
  local_848.Number = 0;
  bVar27 = false;
  bVar30 = false;
  if ((FVar66.ComparisonIndex.Value.Value == 0) && (FVar66.Number == 0)) {
LAB_146452f49:
    bVar21 = bVar30;
    bVar18 = bVar27;
    bVar27 = false;
    local_908 = local_848;
    FVar66 = local_848;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_8b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_8b0._s_0,(char *)*(FName *)((longlong)FVar37 + 0x10));
      bVar18 = false;
      bVar21 = true;
      bVar27 = false;
      bVar30 = true;
      if (-1 < CpuChannel->Enabled) {
        local_880.ComparisonIndex.Value = FVar66.ComparisonIndex.Value.Value;
        local_880.Number = FVar66.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_880,(wchar_t *)*(FName *)((longlong)FVar37 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x3f2);
        bVar18 = true;
        bVar21 = true;
        bVar27 = true;
        bVar30 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_146452f49;
    local_960 = FVar66;
    local_908 = FVar66;
    FThreadStats::AddMessage(FVar66,CycleScopeStart);
    bVar27 = true;
  }
  DestroyPhysicsSimulation(this);
  this_01 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  local_8d0 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_01);
  local_8c8 = (param_1->CurrentSkeleton).field0_0x0.DebugPtr;
  if ((local_8d0 == (USkeletalMesh *)0x0) || (local_8c8 == (USkeleton *)0x0)) goto LAB_146454bd2;
  pUVar38 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)local_8d0);
  uVar22 = *(undefined4 *)((longlong)&pUVar38->_padding_ + 4);
  (this->OwningAssetPackageName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar38->_padding_;
  (this->OwningAssetPackageName).Number = uVar22;
  uVar22 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
  (this->OwningAssetName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_01->_padding_;
  (this->OwningAssetName).Number = uVar22;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    TVar39 = (TEventRef<unsigned_int>)&local_878;
    local_878 = 0;
  }
  else {
    TVar39 = FStringTrace::GetNameRef(&local_750);
  }
  uVar9 = *(undefined8 *)TVar39;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_870 = 0;
    TVar39 = (TEventRef<unsigned_int>)&local_870;
  }
  else {
    TVar39 = FStringTrace::GetNameRef(&local_748);
  }
  uVar10 = *(undefined8 *)TVar39;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_8a0 = 0;
    TVar39 = (TEventRef<unsigned_int>)&local_8a0;
  }
  else {
    TVar39 = FStringTrace::GetNameRef(&local_740);
  }
  uVar11 = *(undefined8 *)TVar39;
  bVar30 = false;
  bVar20 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_648);
    bVar30 = true;
    bVar20 = true;
    *local_648 = (int)uVar9;
    local_648[1] = (int)uVar10;
    local_648[2] = (int)uVar11;
    *(undefined8 *)(local_640 + 0x28) = *(undefined8 *)(local_640 + 0x20);
  }
  pUVar26 = local_8d0;
  local_8f8 = (**(code **)(local_8d0->_padding_ + 0x318))(local_8d0);
  pUVar12 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  if ((pUVar12 == (UPhysicsAsset *)0x0) || (((uint)pUVar12->_padding_ >> 0x1e & 1) != 0)) {
    this_02 = UAnimInstance::GetSkelMeshComponentChecked(local_900);
    if ((this->bDefaultToSkeletalMeshPhysicsAsset == false) ||
       (this_02 == (USkeletalMeshComponent *)0x0)) {
      TVar40.DebugPtr = (UPhysicsAsset *)0x0;
    }
    else {
      TVar40.DebugPtr = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_02);
    }
  }
  else {
    TVar40 = (this->OverridePhysicsAsset).field0_0x0;
  }
  this->UsePhysicsAsset = (UPhysicsAsset *)TVar40;
  pUVar41 = (USkeleton *)(**(code **)(pUVar26->_padding_ + 0x400))(pUVar26);
  this_00 = local_8c8;
  if ((local_8c8 != pUVar41) &&
     (bVar28 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8095936378556122125>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                          ,0x40d,"SkeletonAsset == SkeletalMeshAsset->GetSkeleton()"), bVar28)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  pFVar42 = USkeleton::FindOrAddMeshLinkupData(this_00,(USkinnedAsset *)pUVar26);
  uVar33 = (this_00->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  uVar58 = (ulonglong)uVar33;
  pTVar2 = &this->SkeletonBoneIndexToBodyIndex;
  local_890 = &pFVar42->MeshToSkeletonTable;
  if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar58);
  }
  piVar1 = &(this->SkeletonBoneIndexToBodyIndex).ArrayMax;
  if ((this->SkeletonBoneIndexToBodyIndex).ArrayMax < (int)uVar33) {
    (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar33,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_968[0] = 0xffffffff;
  (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
  if (*piVar1 != uVar33) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar33,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar33) {
    do {
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)local_968) &&
          ((FScriptContainerElement *)local_968 < pFVar13 + (longlong)*piVar1 * 4)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      iVar31 = (this->SkeletonBoneIndexToBodyIndex).ArrayNum;
      if (iVar31 == *piVar1) {
        iVar31 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SkeletonBoneIndexToBodyIndex).ArrayNum = iVar31 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar31 * 4) = local_968[0];
      uVar58 = uVar58 - 1;
    } while (uVar58 != 0);
  }
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar68;
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar68;
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Translation.XY.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar68;
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar68;
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar68;
  dVar68 = (double)this_01->_padding_;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = (double)this_01->_padding_;
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar68;
  iVar31 = (this->ClothColliders).ArrayNum;
  pFVar53 = (this->ClothColliders).AllocatorInstance.Data;
  pFVar13 = pFVar53 + (longlong)iVar31 * 0x18;
  while( true ) {
    if ((this->ClothColliders).ArrayNum != iVar31) {
      local_9a0 = 0;
      `TCheckedPointerIterator<FAnimNode_RigidBody::FClothCollider,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_9a0);
    }
    FVar66 = local_908;
    if (pFVar53 == pFVar13) break;
    ImmediatePhysics_Chaos::FSimulation::DestroyActor
              (this->PhysicsSimulation,*(FActorHandle **)pFVar53);
    pFVar53 = pFVar53 + 0x18;
  }
  bVar28 = false;
  bVar19 = false;
  (this->ClothColliders).ArrayNum = 0;
  if ((this->ClothColliders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ClothColliders).AllocatorInstance,0,&(this->ClothColliders).ArrayMax
              );
  }
  TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
           *)&this->ComponentsInSim);
  this->ComponentsInSimTick = 0;
  pUVar43 = UPhysicsSettings::Get();
  if (pUVar43 == (UPhysicsSettings *)0x0) {
    this->AnimPhysicsMinDeltaTime = 0.0;
    bVar52 = false;
  }
  else {
    this->AnimPhysicsMinDeltaTime = pUVar43->AnimPhysicsMinDeltaTime;
    bVar52 = pUVar43->bSimulateAnimPhysicsAfterReset;
  }
  this->bSimulateAnimPhysicsAfterReset = bVar52;
  if (((this->UsePhysicsAsset == (UPhysicsAsset *)0x0) || (bEnableRigidBodyNode == false)) ||
     (this_01->bDisableRigidBodyAnimNode != 0)) {
    bVar29 = 0;
  }
  else {
    bVar29 = 1;
  }
  this->bEnabled = '\0';
  this->field_0x314 = this->field_0x314 | bVar29;
  if (bVar29 != 0) {
    TVar44 = FThreadSafeStaticStatInner<FStat_STAT_RigidBodyNodeInitTime_SetupSimulation,1>::
             GetStatId((FThreadSafeStaticStatInner<FStat_STAT_RigidBodyNodeInitTime_SetupSimulation,1>
                        *)&StatPtr_STAT_RigidBodyNodeInitTime_SetupSimulation);
    local_838.ComparisonIndex.Value = 0;
    local_838.Number = 0;
    bVar30 = false;
    bVar52 = false;
    TVar14 = (TVar44.StatIdPtr)->Name;
    FVar66 = *(FName *)TVar14;
    if ((FVar66.ComparisonIndex.Value.Value == 0) && (FVar66.Number == 0)) {
LAB_1464534dd:
      bVar19 = bVar52;
      bVar28 = bVar30;
      bVar52 = false;
      local_960 = local_838;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_8ac.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_8ac._s_0,(char *)*(FName *)((longlong)TVar14 + 0x10));
        bVar28 = false;
        bVar19 = true;
        bVar30 = false;
        bVar52 = true;
        if (-1 < CpuChannel->Enabled) {
          local_898.ComparisonIndex.Value = FVar66.ComparisonIndex.Value.Value;
          local_898.Number = FVar66.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_898,(wchar_t *)*(FName *)((longlong)TVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                     ,0x42b);
          bVar28 = true;
          bVar19 = true;
          bVar30 = true;
          bVar52 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_1464534dd;
      local_960 = FVar66;
      FThreadStats::AddMessage(FVar66,CycleScopeStart);
      bVar52 = true;
    }
    this_03 = ::operator_new(0x40);
    pFVar45 = (FSimulation *)0x0;
    if (this_03 != (FSimulation *)0x0) {
      pFVar45 = ImmediatePhysics_Chaos::FSimulation::FSimulation(this_03);
    }
    this->PhysicsSimulation = pFVar45;
    this_04 = FChaosVDRuntimeModule::Get();
    iVar31 = FChaosVDRuntimeModule::GenerateUniqueID(this_04);
    (this->PhysicsSimulation->CVDContextData).Id = iVar31;
    local_8d0 = (USkeletalMesh *)&DAT_00000001;
    (this->PhysicsSimulation->CVDContextData).Type = 1;
    if ((this_01->_padding_ != 0) ||
       (pUVar46 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01),
       pUVar46 != (UWorld *)0x0)) {
      pUVar46 = (UWorld *)this_01->_padding_;
      if (pUVar46 == (UWorld *)0x0) {
        pUVar46 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
      }
      if (pUVar46->PhysicsScene != (FPhysScene_Chaos *)0x0) {
        local_808 = (FName)this_01->_padding_;
        ::FName::ToString(&local_808,&local_738);
        FStringFormatArg::FStringFormatArg(&local_6f8,&local_738);
        local_798._First = &local_6f8;
        local_798._Last = (FStringFormatArg *)local_6d8;
        TArray<FStringFormatArg,TSizedDefaultAllocator<32>_>::
        TArray<FStringFormatArg,TSizedDefaultAllocator<32>_>(&local_828,&local_798);
        ::FString::FormatImpl(&local_788,L"RBAN {0}",&local_828);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_828.AllocatorInstance.Data,local_828.ArrayNum);
        if ((FStringFormatArg *)local_828.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_828.AllocatorInstance.Data);
        }
        if (local_6f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_6f8.StringValue.Data.AllocatorInstance.Data);
        }
        pUVar46 = (UWorld *)this_01->_padding_;
        pFVar45 = this->PhysicsSimulation;
        if (pUVar46 == (UWorld *)0x0) {
          pUVar46 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_01);
        }
        ImmediatePhysics_Chaos::FSimulation::SetDebugDrawScene
                  (pFVar45,&local_788,
                   (TSharedPtr<ChaosDD::Private::FChaosDDScene,1> *)
                   &pUVar46->PhysicsScene->_padding_);
        if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_788.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar33 = (this->UsePhysicsAsset->SkeletalBodySetups).ArrayNum;
    if ((int)uVar33 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar33);
    }
    local_900 = (UAnimInstance *)&(this->Bodies).ArrayMax;
    (this->Bodies).ArrayNum = 0;
    if (*(uint *)local_900 != uVar33) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar33,&(this->Bodies).AllocatorInstance,0,(int *)local_900);
    }
    local_8c8 = (USkeleton *)&(this->BodyAnimData).ArrayNum;
    piVar1 = &(this->BodyAnimData).ArrayMax;
    *(int *)local_8c8 = 0;
    if ((this->BodyAnimData).ArrayMax < (int)uVar33) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,0x10,uVar33,&(this->BodyAnimData).AllocatorInstance,0,piVar1);
    }
    iVar31 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,0x10,uVar33,&(this->BodyAnimData).AllocatorInstance,(int *)local_8c8,
                        piVar1);
    DefaultConstructItems<FAnimNode_RigidBody::FBodyAnimData,int>
              ((this->BodyAnimData).AllocatorInstance.Data + (longlong)iVar31 * 0x50,uVar33);
    dVar68 = __real_3ff0000000000000;
    this->TotalMass = 0.0;
    local_928.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_928.ArrayNum = 0;
    local_928.ArrayMax = 0;
    local_958.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_958.ArrayNum = 0;
    local_958.ArrayMax = 0;
    if (this->SimulationSpace == WorldSpace) {
      local_728._s_0.X = (double)this_01->_padding_;
      local_728._s_0.Y = (double)this_01->_padding_;
      pTVar60 = &local_728;
      local_728._s_0.Z = (double)this_01->_padding_;
    }
    else {
      pTVar60 = &local_710;
      local_710._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_710._s_0.Y = _UNK_150689688;
      local_710._s_0.Z = dVar68;
    }
    USkeletalMeshComponent::InstantiatePhysicsAssetRefPose
              (this_01,this->UsePhysicsAsset,(TVector<double> *)&pTVar60->_s_0,&local_928,&local_958
               ,(FPhysScene_Chaos *)0x0,(USkeletalMeshComponent *)0x0,-1,
               (FPhysicsAggregateReference_Chaos *)local_99b,true);
    local_698.Elements._0_8_ = 0;
    local_698.Elements._8_8_ = 0;
    local_698.Elements._32_8_ = 0;
    local_698.Elements._40_4_ = 0;
    local_698.Elements._44_4_ = 0x80;
    local_698.Elements._48_4_ = 0xffffffff;
    local_698.Elements._52_4_ = 0;
    local_698.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_698.HashSize = 0;
    local_948.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_948.ArrayNum = 0;
    local_948.ArrayMax = 0;
    local_8f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8f0.ArrayNum = 0;
    local_8f0.ArrayMax = 0;
    ComputeBodyInsertionOrder(&local_8f0,this_01);
    iVar35 = local_8f0.ArrayNum;
    lVar59 = (longlong)local_928.ArrayNum;
    local_978.Data = (FScriptContainerElement *)0x0;
    iVar31 = *(int *)(local_8f8 + 0x28);
    local_980 = CONCAT44(local_980._4_4_,iVar31);
    local_970[0] = 0;
    local_970[1] = 0;
    iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,local_928.ArrayNum,&local_978,local_970,local_970 + 1);
    memset(local_978.Data + (longlong)iVar32 * 8,0,lVar59 << 3);
    local_938.Data = (FScriptContainerElement *)0x0;
    local_930 = 0;
    iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar31,&local_938,(int *)&local_930,(int *)((longlong)&local_930 + 4));
    memset(local_938.Data + (longlong)iVar32 * 8,0,(longlong)iVar31 << 3);
    iVar31 = local_928.ArrayNum;
    uVar58 = (ulonglong)local_928.ArrayNum;
    pFVar13 = local_928.AllocatorInstance.Data + uVar58 * 8;
    FVar55.Data = local_928.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar58 != iVar31) {
        local_99f = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_99f);
      }
      pFVar64 = local_8d8;
      pUVar25 = local_900;
      if (FVar55.Data == pFVar13) break;
      pFVar15 = *(FBodyInstance **)FVar55.Data;
      bVar30 = FBodyInstance::IsValidBodyInstance(pFVar15);
      if (bVar30) {
        sVar7 = pFVar15->InstanceBoneIndex;
        uVar33 = 0;
        if (sVar7 < (int)local_930) {
          uVar33 = (uint)~(int)sVar7 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        *(FBodyInstance **)(local_938.Data + (longlong)sVar7 * 8) = pFVar15;
      }
      uVar58 = local_928._8_8_ & 0xffffffff;
      FVar55.Data = FVar55.Data + 8;
    }
    uVar58 = (ulonglong)local_8f0.ArrayNum;
    local_910 = CONCAT44(local_910._4_4_,local_8f0.ArrayNum);
    local_8a8 = local_8f0.AllocatorInstance.Data + uVar58 * 2;
    FVar55.Data = local_8f0.AllocatorInstance.Data;
    while( true ) {
      pFVar13 = local_8a8;
      if (local_8f0.ArrayNum != (int)uVar58) {
        local_99e = 0;
        `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_99e);
      }
      if (FVar55.Data == pFVar13) break;
      uVar8 = *(ushort *)FVar55.Data;
      uVar58 = (ulonglong)uVar8;
      local_918 = (FActorHandle *)CONCAT44(local_918._4_4_,(uint)uVar8);
      if (((int)local_930 <= (int)(uint)uVar8) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar15 = *(FBodyInstance **)(local_938.Data + uVar58 * 8);
      local_888 = uVar58;
      local_818 = pFVar15;
      if (pFVar15 != (FBodyInstance *)0x0) {
        uVar33 = pFVar15->InstanceBodyIndex;
        pUVar12 = pFVar64->UsePhysicsAsset;
        uVar57 = 0;
        if ((int)uVar33 < (pUVar12->SkeletalBodySetups).ArrayNum) {
          uVar57 = ~uVar33 >> 0x1f;
        }
        if ((uVar57 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        local_900 = *(UAnimInstance **)
                     ((pUVar12->SkeletalBodySetups).AllocatorInstance.Data +
                     (longlong)(int)uVar33 * 8);
        uVar6 = (local_900->RootMotionMode).Value;
        if ((uVar6 == '\x02') || ((pFVar64->bUseDefaultAsSimulated != false && (uVar6 == '\0')))) {
          iVar31 = 1;
        }
        else {
          iVar31 = 0;
        }
        pFVar45 = pFVar64->PhysicsSimulation;
        pTVar47 = FBodyInstance::GetUnrealWorldTransform(pFVar15,&local_578,true,false);
        pFVar48 = ImmediatePhysics::MakeActorSetup
                            (&local_4b8,iVar31 + KinematicActor,pFVar15,pTVar47);
        local_988 = (TObjectPtr<USkeleton>_u_0 *)
                    ImmediatePhysics_Chaos::FSimulation::CreateActor(pFVar45,pFVar48);
        ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_4b8);
        if (local_988 != (TObjectPtr<USkeleton>_u_0 *)0x0) {
          if ((byte)iVar31 != 0) {
            dVar67 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass
                               ((FActorHandle *)&local_988->ObjectPtr);
            if (dVar67 <= 0.0) {
              dVar67 = 0.0;
            }
            else {
              dVar67 = dVar68 / dVar67;
            }
            pFVar64->TotalMass = dVar67 + pFVar64->TotalMass;
          }
          pTVar3 = &pFVar64->Bodies;
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_988) &&
              ((FScriptContainerElement *)&local_988 < pFVar13 + (longlong)*(int *)pUVar25 * 8)) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar30)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          uVar33 = (pFVar64->Bodies).ArrayNum;
          if (uVar33 == *(uint *)pUVar25) {
            uVar33 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar3->AllocatorInstance,(int *)pUVar25);
          }
          uVar58 = local_888;
          pFVar13 = (pTVar3->AllocatorInstance).Data;
          (pFVar64->Bodies).ArrayNum = uVar33 + 1;
          *(TObjectPtr<USkeleton>_u_0 **)(pFVar13 + (longlong)(int)uVar33 * 8) = local_988;
          if ((local_890->ArrayNum <= (int)local_918) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          uVar57 = *(uint *)((local_890->AllocatorInstance).Data + uVar58 * 4);
          if ((int)uVar57 < 0) {
            bVar30 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8095936378556122244>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                                ,0x484,"SkeletonBoneIndex >= 0");
            if (bVar30) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
          else {
            uVar34 = 0;
            if ((int)uVar57 < (pFVar64->SkeletonBoneIndexToBodyIndex).ArrayNum) {
              uVar34 = ~uVar57 >> 0x1f;
            }
            if ((uVar34 == 0) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar30)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            *(uint *)((pFVar64->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                     (longlong)(int)uVar57 * 4) = uVar33;
          }
          uVar57 = 0;
          if ((int)uVar33 < (int)local_8c8->_padding_) {
            uVar57 = ~uVar33 >> 0x1f;
          }
          if ((uVar57 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar53 = (pFVar64->BodyAnimData).AllocatorInstance.Data;
          lVar59 = (longlong)(int)uVar33 * 0x50;
          pTVar65 = &local_900->CurrentSkeleton;
          pFVar13 = pFVar53 + lVar59 + 0x4c;
          *pFVar13 = (FScriptContainerElement)((byte)*pFVar13 & 0xfe);
          pFVar53 = pFVar53 + lVar59 + 0x4c;
          *pFVar53 = (FScriptContainerElement)((byte)*pFVar53 | (byte)iVar31);
          local_770 = &local_988;
          local_778 = &pTVar65->field0_0x0;
          TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FActorHandle_*_const_&>_>
                    (&local_698,
                     (TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FActorHandle_*_const_&>
                      *)local_7fc,(bool *)&local_778);
          pTVar24 = local_988;
          uVar33 = local_818->InstanceBodyIndex;
          uVar57 = 0;
          if ((int)uVar33 < local_970[0]) {
            uVar57 = ~uVar33 >> 0x1f;
          }
          if ((uVar57 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          *(TObjectPtr<USkeleton>_u_0 **)(local_978.Data + (longlong)(int)uVar33 * 8) = pTVar24;
          if (local_900->bUpdateAnimationEnabled == '\x01') {
            if (((local_948.AllocatorInstance.Data <= (FScriptContainerElement *)&local_988) &&
                ((FScriptContainerElement *)&local_988 <
                 local_948.AllocatorInstance.Data + (longlong)local_948.ArrayMax * 8)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            iVar31 = local_948.ArrayNum;
            if (local_948.ArrayNum == local_948.ArrayMax) {
              iVar31 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_948.AllocatorInstance,&local_948.ArrayMax);
            }
            local_948.ArrayNum = iVar31 + 1;
            *(TObjectPtr<USkeleton>_u_0 **)(local_948.AllocatorInstance.Data + (longlong)iVar31 * 8)
                 = local_988;
          }
          *local_988 = pTVar65->field0_0x0;
        }
      }
      uVar58 = local_910 & 0xffffffff;
      FVar55.Data = FVar55.Data + 2;
    }
    uVar56 = 0;
    local_8c0.Data = (FScriptContainerElement *)0x0;
    local_8b8[0] = 0;
    local_8b8[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(int)local_980,&local_8c0,local_8b8,local_8b8 + 1);
    FVar54 = local_960;
    uVar58 = uVar56;
    if (0 < (longlong)iVar35) {
      do {
        uVar57 = (uint)uVar58;
        uVar33 = 0;
        if ((int)uVar57 < local_8f0.ArrayNum) {
          uVar33 = ~uVar57 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        uVar8 = *(ushort *)(local_8f0.AllocatorInstance.Data + uVar56 * 2);
        if ((local_8b8[0] <= (int)(uint)uVar8) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        uVar56 = uVar56 + 1;
        *(uint *)(local_8c0.Data + (ulonglong)uVar8 * 4) = uVar57;
        uVar58 = (ulonglong)(uVar57 + 1);
      } while ((longlong)uVar56 < (longlong)iVar35);
    }
    uVar33 = 0;
    local_768 = &local_8c0;
    local_760 = local_8f8;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,_FAnimNode_RigidBody::InitPhysics_::__l19::<lambda_1>_>_>
              ((FConstraintInstance **)local_958.AllocatorInstance.Data,local_958.ArrayNum,
               local_99b[0],(<lambda_1> *)&local_768);
    local_998.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_998.ArrayNum = 0;
    local_998.ArrayMax = 0;
    iVar31 = local_958.ArrayNum;
    if (0 < (int)(local_698.Elements._8_4_ - local_698.Elements._52_4_)) {
      pFVar63 = pFVar64;
      if (0 < local_958.ArrayNum) {
        local_8f8 = 0;
        pTVar4 = &pFVar64->BodyAnimData;
        do {
          lVar59 = local_8f8;
          this_05 = (FActorHandle *)0x0;
          uVar57 = 0;
          if ((int)uVar33 < local_958.ArrayNum) {
            uVar57 = ~uVar33 >> 0x1f;
          }
          if ((uVar57 == 0) &&
             (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar30)) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          pFVar16 = *(FConstraintInstance **)(local_958.AllocatorInstance.Data + lVar59);
          pTVar49 = TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
                    ::Find(&local_698,pFVar16->ConstraintBone1);
          if (pTVar49 != (TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *)0x0) {
            this_05 = *(FActorHandle **)&pTVar49->field_0x8;
          }
          pTVar49 = TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
                    ::Find(&local_698,pFVar16->ConstraintBone2);
          if (pTVar49 == (TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *)0x0) {
            this_06 = (FActorHandle *)0x0;
          }
          else {
            this_06 = *(FActorHandle **)&pTVar49->field_0x8;
          }
          local_918 = this_06;
          if (((this_05 != (FActorHandle *)0x0) && (this_06 != (FActorHandle *)0x0)) &&
             ((bVar30 = ImmediatePhysics_Chaos::FActorHandle::IsSimulated(this_05), bVar30 ||
              (bVar30 = ImmediatePhysics_Chaos::FActorHandle::IsSimulated(this_06), bVar30)))) {
            pFVar45 = pFVar63->PhysicsSimulation;
            pFVar50 = ImmediatePhysics::MakeJointSetup(&local_398,pFVar16,this_05,local_918);
            ImmediatePhysics_Chaos::FSimulation::CreateJoint(pFVar45,pFVar50);
            if (pFVar63->bForceDisableCollisionBetweenConstraintBodies != false) {
              iVar31 = UPhysicsAsset::FindBodyIndex
                                 (pFVar63->UsePhysicsAsset,pFVar16->ConstraintBone1);
              iVar35 = UPhysicsAsset::FindBodyIndex
                                 (pFVar63->UsePhysicsAsset,pFVar16->ConstraintBone2);
              if ((iVar31 != -1) && (iVar35 != -1)) {
                UPhysicsAsset::DisableCollision(pFVar63->UsePhysicsAsset,iVar31,iVar35);
              }
            }
            pFVar13 = (pFVar64->Bodies).AllocatorInstance.Data;
            for (pFVar53 = pFVar13; pFVar53 != pFVar13 + (longlong)(pFVar64->Bodies).ArrayNum * 8;
                pFVar53 = pFVar53 + 8) {
              if (*(FActorHandle **)pFVar53 == this_05) {
                uVar57 = (uint)((longlong)pFVar53 - (longlong)pFVar13 >> 3);
                goto LAB_14645414a;
              }
            }
            uVar57 = 0xffffffff;
LAB_14645414a:
            if (uVar57 != 0xffffffff) {
              bVar29 = (pFVar16->ProfileInstance).LinearLimit.XMotion.Value;
              uVar62 = ~uVar57 >> 0x1f;
              uVar34 = 0;
              if ((int)uVar57 < (pFVar64->BodyAnimData).ArrayNum) {
                uVar34 = uVar62;
              }
              if ((uVar34 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              local_910 = (ulonglong)(int)uVar57;
              local_980 = local_910 * 0x50;
              *(uint *)((pTVar4->AllocatorInstance).Data + local_980 + 0x38) = (uint)bVar29;
              bVar29 = (pFVar16->ProfileInstance).LinearLimit.YMotion.Value;
              uVar34 = 0;
              if ((int)uVar57 < (pFVar64->BodyAnimData).ArrayNum) {
                uVar34 = uVar62;
              }
              if ((uVar34 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              *(uint *)((pTVar4->AllocatorInstance).Data + local_980 + 0x3c) = (uint)bVar29;
              bVar29 = (pFVar16->ProfileInstance).LinearLimit.ZMotion.Value;
              uVar34 = 0;
              if ((int)uVar57 < (pFVar64->BodyAnimData).ArrayNum) {
                uVar34 = uVar62;
              }
              if ((uVar34 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              *(uint *)((pTVar4->AllocatorInstance).Data + local_980 + 0x40) = (uint)bVar29;
              fVar5 = (pFVar16->ProfileInstance).LinearLimit.Limit;
              uVar34 = 0;
              if ((int)uVar57 < (pFVar64->BodyAnimData).ArrayNum) {
                uVar34 = uVar62;
              }
              if ((uVar34 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              *(float *)((pTVar4->AllocatorInstance).Data + local_980 + 0x44) = fVar5;
              ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform(this_05,&local_5d8);
              ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform(local_918,&local_638);
              pTVar47 = UE::Math::TTransform<double>::GetRelativeTransform
                                  (&local_5d8,&local_518,&local_638);
              local_6d8._8_8_ = (pTVar47->Translation).XY.m128d_f64[0];
              local_6d8._16_8_ = (pTVar47->Translation).XY.m128d_f64[1];
              local_6d8._24_8_ = (pTVar47->Translation).ZW.m128d_f64[0];
              dVar68 = (double)local_6d8._8_8_ * (double)local_6d8._8_8_;
              uVar34 = 0;
              if ((int)uVar57 < (pFVar64->BodyAnimData).ArrayNum) {
                uVar34 = uVar62;
              }
              dVar67 = (double)local_6d8._16_8_ * (double)local_6d8._16_8_;
              dVar69 = (double)local_6d8._24_8_ * (double)local_6d8._24_8_;
              if ((uVar34 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              *(float *)((pTVar4->AllocatorInstance).Data + local_980 + 0x48) =
                   (float)SQRT(dVar68 + dVar67 + dVar69);
              pFVar63 = local_8d8;
            }
            if ((pFVar16->ProfileInstance).bDisableCollision != 0) {
              pFStack_860 = local_918;
              local_868 = this_05;
              if (((local_998.AllocatorInstance.Data <= (FScriptContainerElement *)&local_868) &&
                  ((FScriptContainerElement *)&local_868 <
                   local_998.AllocatorInstance.Data + (longlong)local_998.ArrayMax * 0x10)) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              iVar31 = local_998.ArrayNum;
              if (local_998.ArrayNum == local_998.ArrayMax) {
                iVar31 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_998.AllocatorInstance,&local_998.ArrayMax);
              }
              local_998.ArrayNum = iVar31 + 1;
              *(FActorHandle **)(local_998.AllocatorInstance.Data + (longlong)iVar31 * 0x10) =
                   local_868;
              *(FActorHandle **)(local_998.AllocatorInstance.Data + (longlong)iVar31 * 0x10 + 8) =
                   pFStack_860;
            }
          }
          uVar33 = uVar33 + 1;
          local_8f8 = local_8f8 + 8;
          FVar54 = local_960;
          iVar31 = local_958.ArrayNum;
        } while ((int)uVar33 < local_958.ArrayNum);
      }
      pFVar63->ResetSimulatedTeleportType = ResetPhysics;
    }
    pFVar13 = local_958.AllocatorInstance.Data + (longlong)iVar31 * 8;
    FVar55.Data = local_958.AllocatorInstance.Data;
    iVar35 = iVar31;
    while( true ) {
      if (iVar35 != iVar31) {
        local_99d = 0;
        `TCheckedPointerIterator<FConstraintInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_99d);
      }
      FVar66 = local_908;
      if (FVar55.Data == pFVar13) break;
      pFVar16 = *(FConstraintInstance **)FVar55.Data;
      FConstraintInstance::TermConstraint(pFVar16);
      if (pFVar16 != (FConstraintInstance *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar16->_padding_);
        ::operator_delete(pFVar16,0x2a0);
      }
      FVar55.Data = FVar55.Data + 8;
      iVar35 = local_958.ArrayNum;
    }
    iVar31 = local_928.ArrayNum;
    uVar58 = (ulonglong)local_928.ArrayNum;
    pFVar13 = local_928.AllocatorInstance.Data + uVar58 * 8;
    FVar55.Data = local_928.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar58 != iVar31) {
        local_99c = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_99c);
      }
      pFVar64 = local_8d8;
      if (FVar55.Data == pFVar13) break;
      pFVar15 = *(FBodyInstance **)FVar55.Data;
      bVar30 = FBodyInstance::IsValidBodyInstance(pFVar15);
      if (bVar30) {
        FBodyInstance::TermBody(pFVar15,true);
      }
      if (pFVar15 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(pFVar15);
        ::operator_delete(pFVar15,400);
      }
      uVar58 = local_928._8_8_ & 0xffffffff;
      FVar55.Data = FVar55.Data + 8;
    }
    bVar30 = local_958.ArrayMax != 0;
    local_958._8_8_ = (ulonglong)(uint)local_958.ArrayMax << 0x20;
    if (bVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_958.AllocatorInstance,0,&local_958.ArrayMax);
    }
    bVar30 = local_928.ArrayMax != 0;
    local_928._8_8_ = (ulonglong)(uint)local_928.ArrayMax << 0x20;
    if (bVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_928.AllocatorInstance,0,&local_928.ArrayMax);
    }
    bVar30 = local_930._4_4_ != 0;
    local_930 = (ulonglong)local_930._4_4_ << 0x20;
    if (bVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_938,0,(int *)((longlong)&local_930 + 4));
    }
    pUVar12 = pFVar64->UsePhysicsAsset;
    iStack_7c8 = 0;
    local_7fc._4_8_ = &pUVar12->CollisionDisableTable;
    local_7b0 = 0;
    iVar31 = *(int *)&(pUVar12->CollisionDisableTable).field_0x28;
    TStack_7f0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(pUVar12->CollisionDisableTable).field_0x10;
    iVar35 = 0;
    if (iVar31 != 0) {
      puVar61 = *(uint **)&(pUVar12->CollisionDisableTable).field_0x20;
      if (puVar61 == (uint *)0x0) {
        puVar61 = (uint *)TStack_7f0.Array;
      }
      uVar33 = *puVar61;
      while (uVar33 == 0) {
        lVar59 = (longlong)iStack_7c8;
        local_7b0 = local_7b0 + 0x20;
        iStack_7c8 = iStack_7c8 + 1;
        iVar35 = iVar31;
        if ((int)(iVar31 + -1 + (iVar31 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_7c8)
        goto LAB_1464546c3;
        uVar33 = puVar61[lVar59 + 1];
      }
      local_8d0 = (USkeletalMesh *)(ulonglong)(-uVar33 & uVar33);
      uVar58 = (longlong)local_8d0 * 2 + 1;
      lVar59 = 0x3f;
      if (uVar58 != 0) {
        for (; uVar58 >> lVar59 == 0; lVar59 = lVar59 + -1) {
        }
      }
      local_800 = (int)lVar59;
      iVar35 = local_800 + -1 + local_7b0;
      if (iVar31 < iVar35) {
        iVar35 = iVar31;
      }
    }
LAB_1464546c3:
    uStack_7c4 = SUB84(local_8d0,0);
    uStack_7b8 = 0xffffffff;
    uStack_7ac = local_69c;
    TStack_7f0._padding_ = CONCAT44(uStack_7c4,iStack_7c8);
    TStack_7f0.CurrentBitIndex = iVar35;
    TStack_7f0.UnvisitedBitMask = 0xffffffff;
    TStack_7f0._28_4_ = local_69c;
    TStack_7f0.BaseBitIndex = local_7b0;
    local_7d0 = (TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
                 *)local_7fc._4_8_;
    local_7c0 = (undefined1 *)TStack_7f0.Array;
    iStack_7b4 = iVar35;
    if (iVar35 < iVar31) {
      do {
        uVar33 = *(uint *)(*(longlong *)local_7fc._4_8_ + (longlong)iVar35 * 0x14);
        uVar57 = *(uint *)(*(longlong *)local_7fc._4_8_ + 4 + (longlong)iVar35 * 0x14);
        if (((int)uVar33 < local_970[0]) && ((int)uVar57 < local_970[0])) {
          uVar34 = 0;
          if ((int)uVar33 < local_970[0]) {
            uVar34 = ~uVar33 >> 0x1f;
          }
          if (uVar34 == 0) {
            bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar30) {
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
          }
          if (*(longlong *)(local_978.Data + (longlong)(int)uVar33 * 8) != 0) {
            uVar34 = 0;
            if ((int)uVar57 < local_970[0]) {
              uVar34 = ~uVar57 >> 0x1f;
            }
            iVar31 = local_970[0];
            if (uVar34 == 0) {
              bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar30) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              iVar31 = local_970[0];
            }
            if (*(longlong *)(local_978.Data + (longlong)(int)uVar57 * 8) != 0) {
              uVar34 = 0;
              if ((int)uVar33 < iVar31) {
                uVar34 = ~uVar33 >> 0x1f;
              }
              if (uVar34 == 0) {
                bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar30) {
                  pcVar17 = (code *)swi(3);
                  (*pcVar17)();
                  return;
                }
                iVar31 = local_970[0];
              }
              local_858 = *(undefined8 *)(local_978.Data + (longlong)(int)uVar33 * 8);
              uVar33 = 0;
              if ((int)uVar57 < iVar31) {
                uVar33 = ~uVar57 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              uStack_850 = *(undefined8 *)(local_978.Data + (longlong)(int)uVar57 * 8);
              if (((local_998.AllocatorInstance.Data <= (FScriptContainerElement *)&local_858) &&
                  ((FScriptContainerElement *)&local_858 <
                   local_998.AllocatorInstance.Data + (longlong)local_998.ArrayMax * 0x10)) &&
                 (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar30)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              iVar31 = local_998.ArrayNum;
              if (local_998.ArrayNum == local_998.ArrayMax) {
                iVar31 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_998.AllocatorInstance,&local_998.ArrayMax);
              }
              local_998.ArrayNum = iVar31 + 1;
              *(undefined8 *)(local_998.AllocatorInstance.Data + (longlong)iVar31 * 0x10) =
                   local_858;
              *(undefined8 *)(local_998.AllocatorInstance.Data + (longlong)iVar31 * 0x10 + 8) =
                   uStack_850;
            }
          }
        }
        TStack_7f0.UnvisitedBitMask = TStack_7f0.UnvisitedBitMask & ~TStack_7f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7f0);
        pFVar64 = local_8d8;
        iVar35 = TStack_7f0.CurrentBitIndex;
      } while (TStack_7f0.CurrentBitIndex < (TStack_7f0.Array)->NumBits);
    }
    ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionPairTable
              (pFVar64->PhysicsSimulation,&local_998);
    ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionActors
              (pFVar64->PhysicsSimulation,&local_948);
    pUVar12 = pFVar64->UsePhysicsAsset;
    iVar31 = (pUVar12->SolverSettings).VelocityIterations;
    iVar35 = (pUVar12->SolverSettings).ProjectionIterations;
    fVar5 = (pUVar12->SolverSettings).CullDistance;
    (pFVar64->SolverSettings).PositionIterations = (pUVar12->SolverSettings).PositionIterations;
    (pFVar64->SolverSettings).VelocityIterations = iVar31;
    (pFVar64->SolverSettings).ProjectionIterations = iVar35;
    (pFVar64->SolverSettings).CullDistance = fVar5;
    fVar5 = (pUVar12->SolverSettings).FixedTimeStep;
    (pFVar64->SolverSettings).MaxDepenetrationVelocity =
         (pUVar12->SolverSettings).MaxDepenetrationVelocity;
    (pFVar64->SolverSettings).FixedTimeStep = fVar5;
    bVar30 = (pUVar12->SolverSettings).bUseManifolds;
    uVar23 = *(undefined2 *)&(pUVar12->SolverSettings).field_0x1a;
    (pFVar64->SolverSettings).bUseLinearJointSolver =
         (pUVar12->SolverSettings).bUseLinearJointSolver;
    (pFVar64->SolverSettings).bUseManifolds = bVar30;
    *(undefined2 *)&(pFVar64->SolverSettings).field_0x1a = uVar23;
    ImmediatePhysics_Chaos::FSimulation::SetSolverSettings
              (pFVar64->PhysicsSimulation,(double)(pFVar64->SolverSettings).FixedTimeStep,
               (double)(pFVar64->SolverSettings).CullDistance,
               (double)(pFVar64->SolverSettings).MaxDepenetrationVelocity,
               (uint)(pFVar64->SolverSettings).bUseLinearJointSolver,
               (pFVar64->SolverSettings).PositionIterations,
               (pFVar64->SolverSettings).VelocityIterations,
               (pFVar64->SolverSettings).ProjectionIterations,
               (uint)(pFVar64->SolverSettings).bUseManifolds);
    pUVar12 = pFVar64->UsePhysicsAsset;
    iVar31 = (pUVar12->SolverIterations).JointIterations;
    iVar35 = (pUVar12->SolverIterations).CollisionIterations;
    iVar32 = (pUVar12->SolverIterations).SolverPushOutIterations;
    (pFVar64->SolverIterations).SolverIterations = (pUVar12->SolverIterations).SolverIterations;
    (pFVar64->SolverIterations).JointIterations = iVar31;
    (pFVar64->SolverIterations).CollisionIterations = iVar35;
    (pFVar64->SolverIterations).SolverPushOutIterations = iVar32;
    iVar31 = (pUVar12->SolverIterations).CollisionPushOutIterations;
    (pFVar64->SolverIterations).JointPushOutIterations =
         (pUVar12->SolverIterations).JointPushOutIterations;
    (pFVar64->SolverIterations).CollisionPushOutIterations = iVar31;
    if (local_998.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.AllocatorInstance.Data);
    }
    if (local_8c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8c0.Data);
    }
    if (local_938.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_938.Data);
    }
    if (local_978.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_978.Data);
    }
    if (local_8f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8f0.AllocatorInstance.Data);
    }
    if (local_948.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_948.AllocatorInstance.Data);
    }
    local_698.HashSize = 0;
    if (local_698.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_698.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_698.Elements);
    if (local_958.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.AllocatorInstance.Data);
    }
    if (local_928.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.AllocatorInstance.Data);
    }
    if (bVar19) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar30 = bVar20;
    if (bVar52) {
      FThreadStats::AddMessage(FVar54,CycleScopeEnd);
    }
  }
  if (bVar30) {
    lVar59 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar59 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar51 = *(FWriteBuffer **)(lVar59 + 0x20);
    if ((int)pFVar51 - *(int *)&pFVar51->Cursor < 1) {
      pFVar51 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar51->Cursor = '\n';
    pFVar51->Cursor = pFVar51->Cursor + 1;
    pFVar51->Committed = pFVar51->Cursor;
  }
LAB_146454bd2:
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar27) {
    FThreadStats::AddMessage(FVar66,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_810);
  FLLMScope::~FLLMScope(local_8e0);
  return;
}

// InitSimulationSpace @ 146454f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::InitSimulationSpace
          (FAnimNode_RigidBody *this,TTransform<double> *param_1,TTransform<double> *param_2)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  SpaceToWorldTransform(&local_78,this->SimulationSpace,param_1,param_2);
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       local_78.Rotation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
       local_78.Rotation.XY.m128d_f64[1];
  this->PreviousDt = 0.033333335;
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       local_78.Rotation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
       local_78.Rotation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       local_78.Rotation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
       local_78.Rotation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       local_78.Rotation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
       local_78.Rotation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       local_78.Translation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] =
       local_78.Translation.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       local_78.Translation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] =
       local_78.Translation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       local_78.Translation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] =
       local_78.Translation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       local_78.Translation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] =
       local_78.Translation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       local_78.Scale3D.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
       local_78.Scale3D.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       local_78.Scale3D.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
       local_78.Scale3D.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       local_78.Scale3D.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
       local_78.Scale3D.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       local_78.Scale3D.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
       local_78.Scale3D.ZW.m128d_f64[1];
  return;
}

// InitializeBoneReferences @ 146457420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::InitializeBoneReferences(FAnimNode_RigidBody *this,FBoneContainer *param_1)

{
  TArray<FAnimNode_RigidBody::FOutputBoneData,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  FReferenceSkeleton *pFVar5;
  FSimulation *this_00;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FCompactPoseBoneIndex FVar11;
  undefined4 extraout_var;
  UObject *pUVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint local_res8 [2];
  int local_res10;
  FCompactPoseBoneIndex local_res18 [2];
  longlong local_res20;
  FCompactPoseBoneIndex local_a8;
  uint local_a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_90;
  FString local_80;
  FString local_70;
  FName local_58;
  FName local_50 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::InitializeBoneReferences");
  uVar9 = (this->Bodies).ArrayNum;
  pTVar1 = &this->OutputBoneData;
  iVar4 = (param_1->BoneIndicesArray).ArrayNum;
  pFVar5 = param_1->RefSkeleton;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FAnimNode_RigidBody::FOutputBoneData,int>
            ((FOutputBoneData *)(pTVar1->AllocatorInstance).Data,(this->OutputBoneData).ArrayNum);
  uVar15 = 0;
  piVar3 = &(this->OutputBoneData).ArrayMax;
  (this->OutputBoneData).ArrayNum = 0;
  if (*piVar3 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar9,&pTVar1->AllocatorInstance,0,piVar3);
  }
  local_res10 = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((this->BaseBoneRef).BoneName == (FName)0x0) {
    if (((pFVar5->FinalRefBoneInfo).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (this->BaseBoneRef).BoneName = *(FName *)(pFVar5->FinalRefBoneInfo).AllocatorInstance.Data;
  }
  FAnimNode_SkeletalControlBase::InitializeAndValidateBoneRef
            ((FAnimNode_SkeletalControlBase *)this,&this->BaseBoneRef,param_1);
  if (0 < iVar4) {
    local_res20 = 0;
    do {
      lVar14 = local_res20;
      uVar9 = 0;
      if ((int)uVar15 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      local_a4 = uVar15;
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = *(uint *)((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar14 * 4);
      if (((int)uVar9 < 0) || ((this->SkeletonBoneIndexToBodyIndex).ArrayNum <= (int)uVar9)) {
LAB_146457a2a:
        if (2 < (byte)LogRBAN._0_1_) {
          pUVar12 = FWeakObjectPtr::Get(&(param_1->AssetSkeletalMesh).WeakPtr);
          if (pUVar12 == (UObject *)0x0) {
            ::FString::FString(&local_70,L"None");
          }
          else {
            local_58.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
            local_58.Number = *(uint *)&pUVar12->field_0x1c;
            ::FName::ToString(&local_58,&local_70);
          }
          pUVar12 = FWeakObjectPtr::Get(&(param_1->AssetSkeleton).WeakPtr);
          if (pUVar12 == (UObject *)0x0) {
            ::FString::FString(&local_80,L"None");
          }
          else {
            local_50[0].ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
            local_50[0].Number = *(uint *)&pUVar12->field_0x1c;
            ::FName::ToString(local_50,&local_80);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRBAN);
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
        }
LAB_146457af2:
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8095936378556123003>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                           ,0x77b,"false");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        DestructItems<FAnimNode_RigidBody::FOutputBoneData,int>
                  ((FOutputBoneData *)(this->OutputBoneData).AllocatorInstance.Data,
                   (this->OutputBoneData).ArrayNum);
        (this->OutputBoneData).ArrayNum = 0;
        if ((this->OutputBoneData).ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&(this->OutputBoneData).AllocatorInstance,0,
                     &(this->OutputBoneData).ArrayMax);
        }
        goto LAB_146457c02;
      }
      uVar8 = 0;
      if ((int)uVar9 < (this->SkeletonBoneIndexToBodyIndex).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_res8[0] =
           *(uint *)((this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                    (longlong)(int)uVar9 * 4);
      if (local_res8[0] != 0xffffffff) {
        if ((bRBAN_InitializeBoneReferencesRangeCheckEnabled != false) &&
           (((int)local_res8[0] < 0 || ((this->BodyAnimData).ArrayNum <= (int)local_res8[0])))) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8095936378556122944>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                             ,0x740,"BodyAnimData.IsValidIndex(BodyIndex)");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (2 < (byte)LogRBAN._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRBAN);
            goto LAB_146457a2a;
          }
          goto LAB_146457af2;
        }
        uVar9 = (this->OutputBoneData).ArrayNum;
        if (uVar9 == (this->OutputBoneData).ArrayMax) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar1->AllocatorInstance,&(this->OutputBoneData).ArrayMax);
        }
        (this->OutputBoneData).ArrayNum = uVar9 + 1;
        uVar8 = 0;
        if ((int)uVar9 < (int)(uVar9 + 1)) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x20;
        if (pFVar13 == (FScriptContainerElement *)0x0) {
          pFVar13 = (FScriptContainerElement *)0x0;
        }
        else {
          *(undefined8 *)pFVar13 = 0;
          *(undefined8 *)(pFVar13 + 8) = 0;
          *(undefined4 *)(pFVar13 + 0x10) = 0xffffffff;
        }
        *(uint *)(pFVar13 + 0x14) = local_res8[0];
        *(uint *)(pFVar13 + 0x10) = local_a4;
        lVar14 = (longlong)(int)local_res8[0];
        uVar9 = 0;
        if ((int)local_res8[0] < (this->BodyAnimData).ArrayNum) {
          uVar9 = ~local_res8[0] >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((byte)(this->BodyAnimData).AllocatorInstance.Data[lVar14 * 0x50 + 0x4c] & 1) != 0) {
          local_res10 = local_res10 + 1;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&local_90,(int *)local_res8);
        }
        if (((*(uint **)pFVar13 <= &local_a4) &&
            (&local_a4 < *(uint **)pFVar13 + *(int *)(pFVar13 + 0xc))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = *(int *)(pFVar13 + 8);
        if (iVar10 == *(int *)(pFVar13 + 0xc)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
        }
        *(int *)(pFVar13 + 8) = iVar10 + 1;
        *(uint *)(*(longlong *)pFVar13 + (longlong)iVar10 * 4) = local_a4;
        *(undefined4 *)(pFVar13 + 0x18) = 0xffffffff;
        FBoneContainer::GetParentBoneIndex(param_1,&local_a8);
        for (FVar11 = local_a8; local_a8 = FVar11, FVar11 != (FCompactPoseBoneIndex)0xffffffff;
            FVar11 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar11)) {
          uVar9 = 0;
          if ((int)FVar11 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
            uVar9 = ~(uint)FVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = *(uint *)((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                           (longlong)(int)FVar11 * 4);
          if (((int)uVar9 < 0) || ((this->SkeletonBoneIndexToBodyIndex).ArrayNum <= (int)uVar9))
          goto LAB_146457a2a;
          uVar8 = 0;
          if ((int)uVar9 < (this->SkeletonBoneIndexToBodyIndex).ArrayNum) {
            uVar8 = ~uVar9 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)((this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 4);
          *(int *)(pFVar13 + 0x18) = iVar10;
          if (iVar10 != -1) break;
          if (((*(FCompactPoseBoneIndex **)pFVar13 <= &local_a8) &&
              (&local_a8 < *(FCompactPoseBoneIndex **)pFVar13 + *(int *)(pFVar13 + 0xc))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar10 = *(int *)(pFVar13 + 8);
          if (iVar10 == *(int *)(pFVar13 + 0xc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar13,(int *)(pFVar13 + 0xc));
          }
          *(int *)(pFVar13 + 8) = iVar10 + 1;
          *(FCompactPoseBoneIndex *)(*(longlong *)pFVar13 + (longlong)iVar10 * 4) = local_a8;
          FVar11 = FBoneContainer::GetParentBoneIndex(param_1,local_res18);
        }
      }
      uVar15 = uVar15 + 1;
      local_res20 = local_res20 + 1;
    } while (local_res20 < iVar4);
  }
  _Src.Data = local_90.AllocatorInstance.Data;
  this->bCheckForBodyTransformInit = '\x01';
  this_00 = this->PhysicsSimulation;
  if (this_00 != (FSimulation *)0x0) {
    lVar14 = (longlong)local_90.ArrayNum;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = local_90.ArrayNum;
    if (local_90.ArrayNum == 0) {
      local_a0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_90.ArrayNum,0,&local_a0.AllocatorInstance,local_90.ArrayNum,
                 &local_a0.ArrayMax);
      memcpy(local_a0.AllocatorInstance.Data,_Src.Data,lVar14 << 2);
    }
    ImmediatePhysics_Chaos::FSimulation::SetNumActiveBodies(this_00,local_res10,&local_a0);
  }
  FCSPose<FCompactHeapPose>::Empty(&this->CapturedFrozenPose);
  puVar2 = &(this->CapturedFrozenCurves).field_0xc;
  *(undefined4 *)&(this->CapturedFrozenCurves).field_0x8 = 0;
  if (*(int *)puVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->CapturedFrozenCurves,0,(int *)puVar2);
  }
  (this->CapturedFrozenCurves).field_0x10 = 0;
LAB_146457c02:
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeNewBodyTransformsDuringSimulation @ 1464588d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::InitializeNewBodyTransformsDuringSimulation
          (FAnimNode_RigidBody *this,FComponentSpacePoseContext *param_1,TTransform<double> *param_2
          ,TTransform<double> *param_3)

{
  FCompactPoseBoneIndex *pFVar1;
  FScriptContainerElement FVar2;
  ESimulationSpace EVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  FComponentSpacePoseContext *pFVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  TTransform<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  FCompactPoseBoneIndex *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  undefined1 auStackY_338 [32];
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306 [6];
  uint local_300;
  FComponentSpacePoseContext *local_2f8;
  FScriptContainerElement *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  TTransform<double> *local_2d8;
  TTransform<double> *local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_300 = (this->OutputBoneData).ArrayNum;
  uVar12 = (ulonglong)(int)local_300;
  pFVar16 = (this->OutputBoneData).AllocatorInstance.Data;
  local_2f0 = pFVar16 + uVar12 * 0x20;
  pFVar14 = local_2f0;
  local_2f8 = param_1;
  local_2d8 = param_3;
  local_2d0 = param_2;
LAB_146458940:
  do {
    if ((this->OutputBoneData).ArrayNum != (int)uVar12) {
      local_308 = 0;
      `TCheckedPointerIterator<FAnimNode_RigidBody::FOutputBoneData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_308);
    }
    if (pFVar16 == pFVar14) {
      return;
    }
    uVar11 = *(uint *)(pFVar16 + 0x14);
    lVar19 = (longlong)(int)uVar11;
    uVar17 = ~uVar11 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar11 < (this->BodyAnimData).ArrayNum) {
      uVar10 = uVar17;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->BodyAnimData).AllocatorInstance.Data;
    local_2e0 = lVar19 * 0x50;
    FVar2 = pFVar4[local_2e0 + 0x4c];
    local_2e8 = lVar19;
    if (((byte)FVar2 & 2) == 0) {
      pFVar4[local_2e0 + 0x4c] = (FScriptContainerElement)((byte)FVar2 | 2);
      uVar10 = *(uint *)(pFVar16 + 0x18);
      if (uVar10 != 0xffffffff) {
        uVar11 = 0;
        if ((int)uVar10 < (this->BodyAnimData).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (((byte)(this->BodyAnimData).AllocatorInstance.Data[(longlong)(int)uVar10 * 0x50 + 0x4c]
            & 2) == 0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8095936378556121446>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                             ,0x166,
                             "BodyAnimData[OutputData.ParentBodyIndex].bBodyTransformInitialized");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar8 = local_2f8;
        pFVar15 = *(FCompactPoseBoneIndex **)pFVar16;
        iVar18 = *(int *)(pFVar16 + 8);
        local_248.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_248.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        pFVar1 = pFVar15 + iVar18;
        local_248.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_248.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_248.Scale3D.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_248.Scale3D.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_248.Scale3D.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_248.Scale3D.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_248.Scale3D.ZW.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_248.Scale3D.ZW.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_248.Scale3D.ZW.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_248.Scale3D.ZW.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        while( true ) {
          if (*(int *)(pFVar16 + 8) != iVar18) {
            local_307 = 0;
            `TCheckedPointerIterator<FCompactPoseBoneIndex_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_307);
          }
          lVar19 = local_2e8;
          if (pFVar15 == pFVar1) break;
          FCSPose<FCompactPose>::GetLocalSpaceTransform(&pFVar8->Pose,&local_128,*pFVar15);
          local_1e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1e8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1e8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1e8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1e8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_1e8,&local_248,&local_128);
          pFVar15 = pFVar15 + 1;
          local_248.Rotation.XY.m128d_f64[0] = local_1e8.Rotation.XY.m128d_f64[0];
          local_248.Rotation.XY.m128d_f64[1] = local_1e8.Rotation.XY.m128d_f64[1];
          local_248.Rotation.ZW.m128d_f64[0] = local_1e8.Rotation.ZW.m128d_f64[0];
          local_248.Rotation.ZW.m128d_f64[1] = local_1e8.Rotation.ZW.m128d_f64[1];
          local_248.Translation.XY.m128d_f64[0] = local_1e8.Translation.XY.m128d_f64[0];
          local_248.Translation.XY.m128d_f64[1] = local_1e8.Translation.XY.m128d_f64[1];
          local_248.Translation.ZW.m128d_f64[0] = local_1e8.Translation.ZW.m128d_f64[0];
          local_248.Translation.ZW.m128d_f64[1] = local_1e8.Translation.ZW.m128d_f64[1];
          local_248.Scale3D.XY.m128d_f64[0]._0_4_ = local_1e8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_248.Scale3D.XY.m128d_f64[0]._4_4_ = local_1e8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_248.Scale3D.XY.m128d_f64[1]._0_4_ = local_1e8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_248.Scale3D.XY.m128d_f64[1]._4_4_ = local_1e8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_248.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1e8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_248.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1e8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_248.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_248.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        uVar11 = *(uint *)(pFVar16 + 0x18);
        uVar10 = 0;
        if ((int)uVar11 < (this->Bodies).ArrayNum) {
          uVar10 = ~uVar11 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pTVar13 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                            (*(FActorHandle **)
                              ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar11 * 8),
                             &local_c8);
        local_188.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_188.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_188.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_188.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_188.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_188.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_188,&local_248,pTVar13);
        iVar18 = (int)lVar19;
        uVar11 = 0;
        if (iVar18 < (this->Bodies).ArrayNum) {
          uVar11 = uVar17;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar19 * 8),&local_188
                  );
        dVar7 = local_248.Translation.XY.m128d_f64[0] * local_248.Translation.XY.m128d_f64[0];
        local_2c8 = local_248.Translation.XY.m128d_f64[0];
        dStack_2c0 = local_248.Translation.XY.m128d_f64[1];
        uVar11 = 0;
        if (iVar18 < (this->BodyAnimData).ArrayNum) {
          uVar11 = uVar17;
        }
        dVar6 = local_248.Translation.XY.m128d_f64[1] * local_248.Translation.XY.m128d_f64[1];
        local_2b8 = local_248.Translation.ZW.m128d_f64[0];
        dVar20 = local_248.Translation.ZW.m128d_f64[0] * local_248.Translation.ZW.m128d_f64[0];
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar16 = pFVar16 + 0x20;
        *(float *)((this->BodyAnimData).AllocatorInstance.Data + local_2e0 + 0x48) =
             (float)SQRT(dVar7 + dVar6 + dVar20);
        uVar12 = (ulonglong)local_300;
        pFVar14 = local_2f0;
        param_1 = local_2f8;
        goto LAB_146458940;
      }
      pTVar13 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (&param_1->Pose,*(FCompactPoseBoneIndex *)(pFVar16 + 0x10));
      EVar3 = this->SimulationSpace;
      if (EVar3 == ComponentSpace) {
LAB_146458db0:
        local_2a8.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
        local_2a8.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
        local_2a8.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
        local_2a8.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
        local_2a8.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
        local_2a8.Scale3D.ZW.m128d_f64 = *&(pTVar13->Scale3D).ZW.m128d_f64;
      }
      else if (EVar3 == WorldSpace) {
        local_2a8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2a8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_2a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2a8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2a8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2a8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2a8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_2a8,pTVar13,local_2d0);
      }
      else {
        if (EVar3 != BaseBoneSpace) {
          local_306[0] = 0;
          `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(local_306);
          goto LAB_146458db0;
        }
        UE::Math::TTransform<double>::GetRelativeTransform(pTVar13,&local_2a8,local_2d8);
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->Bodies).ArrayNum) {
        uVar10 = uVar17;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar19 * 8),&local_2a8);
      pFVar14 = local_2f0;
    }
    uVar12 = (ulonglong)local_300;
    pFVar16 = pFVar16 + 0x20;
  } while( true );
}

// Initialize_AnyThread @ 14645a470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::Initialize_AnyThread
          (FAnimNode_RigidBody *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->field_0x10,param_1);
  this->field_0x41 = 0;
  this->field_0x8b = 0;
  FStatsHierarchical::EndMeasurement();
  return;
}

// IsValidToEvaluate @ 14645bc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FAnimNode_RigidBody::IsValidToEvaluate
          (FAnimNode_RigidBody *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->BaseBoneRef,param_2);
  return bVar1;
}

// NeedsDynamicReset @ 14645ed10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAnimNode_RigidBody::NeedsDynamicReset(FAnimNode_RigidBody *this)

{
  return true;
}

// NeedsOnInitializeAnimInstance @ 14645ed50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAnimNode_RigidBody::NeedsOnInitializeAnimInstance(FAnimNode_RigidBody *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14645f000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::OnInitializeAnimInstance
          (FAnimNode_RigidBody *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  InitPhysics(this,param_2);
  return;
}

// PreUpdate @ 146461760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::PreUpdate(FAnimNode_RigidBody *this,UAnimInstance *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  UPhysicsAsset *pUVar13;
  FBoneContainer *pFVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_RigidBody_PreUpdate> FVar16;
  USkeletalMeshComponent *pUVar17;
  longlong *plVar18;
  UPhysicsAsset *pUVar19;
  UWorld *this_00;
  double *pdVar20;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar21;
  FNameEntryId FVar22;
  FName FVar23;
  FNameEntryId FVar24;
  float fVar25;
  undefined1 auStackY_168 [32];
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  double local_f0;
  FName local_e8;
  TVector<double>_u_0 local_a0;
  double local_88;
  double local_80;
  double local_78;
  undefined1 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar13 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  pUVar19 = (UPhysicsAsset *)0x0;
  if ((pUVar13 == (UPhysicsAsset *)0x0) || (((uint)pUVar13->_padding_ >> 0x1e & 1) != 0)) {
    pUVar13 = pUVar19;
    if ((param_1 != (UAnimInstance *)0x0) &&
       ((pUVar17 = UAnimInstance::GetSkelMeshComponentChecked(param_1),
        this->bDefaultToSkeletalMeshPhysicsAsset != false &&
        (pUVar17 != (USkeletalMeshComponent *)0x0)))) {
      pUVar13 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar17);
    }
  }
  else {
    pUVar13 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  }
  if (this->UsePhysicsAsset != pUVar13) {
    InitPhysics(this,param_1);
    pcVar2 = *(code **)(*(longlong *)this + 0xd0);
    pFVar14 = UAnimInstance::GetRequiredBones(param_1);
    (*pcVar2)(this,pFVar14);
  }
  if (this->bEnabled == 0) {
    return;
  }
  FVar24.Value = 0;
  FVar16 = StatPtr_STAT_RigidBody_PreUpdate;
  if (StatPtr_STAT_RigidBody_PreUpdate == (FThreadSafeStaticStat<FStat_STAT_RigidBody_PreUpdate>)0x0
     ) {
    pFVar15 = ::FName::FName((FName *)&local_100,"STAT_RigidBody_PreUpdate");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_RigidBody_PreUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBody_PreUpdate,*pFVar15,
                        L"RigidBody_PreUpdate","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar21 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar21 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108.s,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.s.LowPart = FVar22.Value;
        local_108.s.HighPart = uVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_108.s,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x5df);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_108.s.LowPart = FVar22.Value;
      local_108.s.HighPart = uVar21;
      local_e8 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar10 = true;
      FVar24.Value = local_e8.ComparisonIndex.Value;
      goto LAB_146461959;
    }
  }
  bVar10 = false;
  FVar23 = local_e8;
LAB_146461959:
  pUVar17 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  plVar18 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  if (plVar18 != (longlong *)0x0) {
    pUVar19 = (UPhysicsAsset *)(**(code **)(*plVar18 + 0x760))(plVar18);
  }
  this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (this_00 != (UWorld *)0x0) {
    if (this->bOverrideWorldGravity == '\0') {
      local_100.StatData.Pad[0] = '\0';
      local_100.StatData.Pad[1] = '\0';
      local_100.StatData.Pad[2] = '\0';
      local_100.StatData.Pad[3] = '\0';
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.NameAndInfo.Index.Value = 0;
      local_100.NameAndInfo.Number = 0;
      if (pUVar19 == (UPhysicsAsset *)0x0) {
        fVar25 = UWorld::GetGravityZ(this_00);
      }
      else {
        fVar25 = (float)(**(code **)(pUVar19->_padding_ + 0x4f8))(pUVar19);
      }
      local_f0 = (double)fVar25;
    }
    else {
      local_100.StatData.Pad = (uchar  [8])(this->OverrideWorldGravity).field0_0x0._s_0.X;
      local_100.NameAndInfo = (FStatNameAndInfo)(this->OverrideWorldGravity).field0_0x0._s_0.Y;
      local_f0 = (this->OverrideWorldGravity).field0_0x0._s_0.Z;
    }
    (this->WorldSpaceGravity).field0_0x0._s_0.X = (double)local_100.StatData.Pad;
    (this->WorldSpaceGravity).field0_0x0._s_0.Y = (double)local_100.NameAndInfo;
    (this->WorldSpaceGravity).field0_0x0._s_0.Z = local_f0;
    if (pUVar17 != (USkeletalMeshComponent *)0x0) {
      this->WorldTimeSeconds =
           (&this_00->TimeSeconds)[*(byte *)((longlong)&pUVar17->_padding_ + 2) & 1];
      if ((this->PhysicsSimulation != (FSimulation *)0x0) && (this->bEnableWorldGeometry != 0)) {
        UpdateWorldGeometry(this,this_00,pUVar17);
        PurgeExpiredWorldObjects(this);
        CollectWorldObjects(this);
      }
      TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_>::operator=
                (&this->PendingRadialForces,&pUVar17->PendingRadialForces);
      dVar5 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
      dVar6 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
      dVar7 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
      (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
           (this->CurrentTransform).Rotation.XY.m128d_f64[0];
      (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar5;
      dVar5 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
      dVar8 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
      (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = dVar6;
      (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar7;
      dVar6 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
      dVar7 = (this->CurrentTransform).Translation.ZW.m128d_f64[1];
      (this->PreviousTransform).Translation.XY.m128d_f64[0] = dVar5;
      (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar8;
      dVar5 = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
      dVar8 = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
      (this->PreviousTransform).Translation.ZW.m128d_f64[0] = dVar6;
      (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar7;
      dVar6 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0];
      dVar7 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1];
      (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = dVar5;
      (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar8;
      (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = dVar6;
      (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
      dVar5 = (double)pUVar17->_padding_;
      (this->CurrentTransform).Rotation.XY.m128d_f64[0] = (double)pUVar17->_padding_;
      (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dVar5;
      dVar5 = (double)pUVar17->_padding_;
      (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = (double)pUVar17->_padding_;
      (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dVar5;
      dVar5 = (double)pUVar17->_padding_;
      (this->CurrentTransform).Translation.XY.m128d_f64[0] = (double)pUVar17->_padding_;
      (this->CurrentTransform).Translation.XY.m128d_f64[1] = dVar5;
      dVar5 = (double)pUVar17->_padding_;
      (this->CurrentTransform).Translation.ZW.m128d_f64[0] = (double)pUVar17->_padding_;
      (this->CurrentTransform).Translation.ZW.m128d_f64[1] = dVar5;
      uVar3 = *(undefined4 *)((longlong)&pUVar17->_padding_ + 4);
      lVar12 = pUVar17->_padding_;
      uVar4 = *(undefined4 *)((longlong)&pUVar17->_padding_ + 4);
      *(int *)(this->CurrentTransform).Scale3D.XY.m128d_f64 = (int)pUVar17->_padding_;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.XY.m128d_f64 + 4) = uVar3;
      *(int *)((this->CurrentTransform).Scale3D.XY.m128d_f64 + 1) = (int)lVar12;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar4;
      uVar3 = *(undefined4 *)((longlong)&pUVar17->_padding_ + 4);
      lVar12 = pUVar17->_padding_;
      uVar4 = *(undefined4 *)((longlong)&pUVar17->_padding_ + 4);
      *(int *)(this->CurrentTransform).Scale3D.ZW.m128d_f64 = (int)pUVar17->_padding_;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.ZW.m128d_f64 + 4) = uVar3;
      *(int *)((this->CurrentTransform).Scale3D.ZW.m128d_f64 + 1) = (int)lVar12;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar4;
      if ((this_00->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0) {
        pdVar20 = (double *)(**(code **)(pUVar17->_padding_ + 0x598))(pUVar17);
        local_a0._s_0.X = *pdVar20 - pdVar20[3];
        local_a0._s_0.Y = pdVar20[1] - pdVar20[4];
        local_80 = pdVar20[4] + pdVar20[1];
        local_88 = pdVar20[3] + *pdVar20;
        local_70 = 1;
        local_a0._s_0.Z = pdVar20[2] - pdVar20[5];
        local_78 = pdVar20[5] + pdVar20[2];
        UPhysicsFieldComponent::FillTransientCommands
                  ((this_00->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_a0._s_0,
                   (float)this->WorldTimeSeconds,&(this->PerSolverField).TransientCommands);
        UPhysicsFieldComponent::FillPersistentCommands
                  ((this_00->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_a0._s_0,
                   (float)this->WorldTimeSeconds,&(this->PerSolverField).PersistentCommands);
      }
    }
  }
  if ((this->bUseExternalClothCollision != false) && ((this->ClothColliders).ArrayNum == 0)) {
    CollectClothColliderObjects(this,pUVar17);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_100.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar23.Number,FVar24.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_108);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_100);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// PurgeExpiredWorldObjects @ 146461f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::PurgeExpiredWorldObjects(FAnimNode_RigidBody *this)

{
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *this_00;
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  this_00 = &this->ComponentsInSim;
  local_98 = &(this->ComponentsInSim).field_0x10;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iVar7 = *(int *)&(this->ComponentsInSim).field_0x28;
  iStack_a0 = 0;
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar7 != 0) {
    puVar15 = *(uint **)&(this->ComponentsInSim).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_98;
    }
    uVar13 = *puVar15;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14646201e;
      uVar13 = puVar15[lVar8 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar7 < iStack_8c) {
      iStack_8c = iVar7;
    }
  }
LAB_14646201e:
  uVar13 = *(uint *)&(this->ComponentsInSim).field_0x28;
  puVar2 = &(this->ComponentsInSim).field_0x10;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_80 = *(int *)&(this->ComponentsInSim).field_0x8 -
              *(int *)&(this->ComponentsInSim).field_0x34;
  uStack_90 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  iVar9 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this_00;
  iStack_84 = iStack_8c;
  local_78 = this_00;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)uVar13 < 0) || (iVar7 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->ComponentsInSim).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->ComponentsInSim).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar9 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      uVar12 = uVar12 + 0x20;
      iVar9 = iVar9 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_146462130;
      uVar13 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar13 = local_res20 + -1 + uVar12;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_146462130:
  while( true ) {
    pTVar5 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == this_00))
    break;
    pFVar10 = (FScriptContainerElement *)
              (*(longlong *)&pTVar5->field_0x0 + (longlong)TStack_70.CurrentBitIndex * 0x20);
    if (((byte)pFVar10[0x14] & 1) != 0) {
      ImmediatePhysics_Chaos::FSimulation::DestroyActor
                (this->PhysicsSimulation,*(FActorHandle **)(pFVar10 + 8));
      *(undefined8 *)(pFVar10 + 8) = 0;
      if (((local_b8.Data <= pFVar10) && (pFVar10 < local_b8.Data + (longlong)local_b0._4_4_ * 8))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (int)local_b0;
      if ((int)local_b0 == local_b0._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_b8,(int *)((longlong)&local_b0 + 4));
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar7 + 1);
      *(undefined8 *)(local_b8.Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar10;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  iVar7 = (int)local_b0;
  pFVar10 = local_b8.Data + (longlong)(int)local_b0 * 8;
  FVar11.Data = local_b8.Data;
  while( true ) {
    if ((int)local_b0 != iVar7) {
      `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar11.Data == pFVar10) break;
    TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>,FDefaultSetAllocator>
              *)this_00,*(UPrimitiveComponent **)FVar11.Data);
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// RemoveClothColliderObjects @ 1464641e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::RemoveClothColliderObjects(FAnimNode_RigidBody *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ClothColliders).ArrayNum;
  pFVar3 = (this->ClothColliders).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->ClothColliders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimNode_RigidBody::FClothCollider,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ImmediatePhysics_Chaos::FSimulation::DestroyActor
              (this->PhysicsSimulation,*(FActorHandle **)pFVar3);
    pFVar3 = pFVar3 + 0x18;
  }
  (this->ClothColliders).ArrayNum = 0;
  if ((this->ClothColliders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ClothColliders).AllocatorInstance,0,&(this->ClothColliders).ArrayMax
              );
  }
  return;
}

// ResetDynamics @ 146464430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAnimNode_RigidBody::ResetDynamics(FAnimNode_RigidBody *this,ETeleportType param_1)

{
  ETeleportType EVar1;
  
  EVar1 = this->ResetSimulatedTeleportType;
  if (this->ResetSimulatedTeleportType < param_1) {
    EVar1 = param_1;
  }
  this->ResetSimulatedTeleportType = EVar1;
  return;
}

// RunPhysicsSimulation @ 1464668e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::RunPhysicsSimulation
          (FAnimNode_RigidBody *this,float param_1,TVector<double> *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TAlignedBytes<8,8> TVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_Simulation> FVar12;
  TEventRef<unsigned_int> TVar13;
  TStatId TVar14;
  FWriteBuffer *pFVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar16;
  FColor_u_0 FVar17;
  FName FVar18;
  undefined1 auStackY_118 [32];
  FColor_u_0 local_b8;
  uint uStack_b4;
  FLLMScope local_ac;
  LARGE_INTEGER local_a8;
  FName local_a0;
  byte local_98;
  FName local_90;
  FStatMessage local_80;
  FMemScope local_70;
  TLogScope<0> local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_a8 = (LARGE_INTEGER)param_2;
  local_80.StatData.Pad = (uchar  [8])this;
  if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name468,L"Animation/RigidBody");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(&local_ac,LLMScope_Name468,false,None,Default,true);
  FMemScope::FMemScope(&local_70,&LLMScope_Name468,true);
  FVar12 = StatPtr_STAT_RigidBodyNode_Simulation;
  if (StatPtr_STAT_RigidBodyNode_Simulation ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_Simulation>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_68,"STAT_RigidBodyNode_Simulation");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_Simulation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNode_Simulation,*pFVar11
                        ,L"RigidBodyNode_Simulation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar12;
  bVar7 = false;
  bVar9 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Bits != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar17.Bits;
        uStack_b4 = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x1d5);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_b8.Bits = FVar17.Bits;
      uStack_b4 = uVar16;
      local_90 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_146466a9a;
    }
  }
  bVar8 = false;
  FVar18 = local_90;
LAB_146466a9a:
  if (__CsvProfilerStat470 == false) {
    FCsvProfilerTrace::OutputInlineStat("RigidBodyNodeSimulation",_GCsvCategory_Animation.Index);
    __CsvProfilerStat470 = true;
  }
  local_b8.Bits = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("RigidBodyNodeSimulation",_GCsvCategory_Animation.Index,"CSV_RigidBodyNodeSimulation");
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_68._0_8_ = (undefined4 *)0x0;
    TVar13 = (TEventRef<unsigned_int>)&local_68;
  }
  else {
    TVar13 = FStringTrace::GetNameRef((FName *)&local_68);
  }
  uVar3 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_68._0_8_ = (undefined4 *)0x0;
    TVar13 = (TEventRef<unsigned_int>)&local_68;
  }
  else {
    TVar13 = FStringTrace::GetNameRef((FName *)&local_68);
  }
  uVar4 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_68._0_8_ = (undefined4 *)0x0;
    TVar13 = (TEventRef<unsigned_int>)&local_68;
  }
  else {
    TVar13 = FStringTrace::GetNameRef((FName *)&local_68);
  }
  uVar5 = *(undefined8 *)TVar13;
  bVar6 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>(&local_68);
    bVar6 = true;
    *(int *)local_68._0_8_ = (int)uVar3;
    *(int *)(local_68._0_8_ + 4) = (int)uVar4;
    *(int *)(local_68._0_8_ + 8) = (int)uVar5;
    *(undefined8 *)(local_68._8_8_ + 0x28) = *(undefined8 *)(local_68._8_8_ + 0x20);
  }
  TVar14.StatIdPtr = (TStatIdData *)StatPtr_STAT_RigidBodyNode_Simulation;
  if (StatPtr_STAT_RigidBodyNode_Simulation ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNode_Simulation>)0x0) {
    pFVar11 = ::FName::FName((FName *)&local_68,"STAT_RigidBodyNode_Simulation");
    TVar14.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNode_Simulation,*pFVar11,
                    L"RigidBodyNode_Simulation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                    true,ST_int64,true,false,MCR_Invalid);
  }
  TVar10.Pad = local_80.StatData.Pad;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_a0,
             (UObjectBaseUtility *)*(UPhysicsAsset **)((longlong)local_80.StatData.Pad + 0x200),
             TVar14);
  ImmediatePhysics_Chaos::FSimulation::Simulate
            (*(FSimulation **)((longlong)TVar10.Pad + 0x340),(double)param_1,__real_3fa1111111111111
             ,RBAN_MaxSubSteps,(TVector<double> *)local_a8,(FPBDJointSolverSettings *)0x0,
             (FPBDCollisionSolverSettings *)0x0,(FCollisionDetectorSettings *)0x0);
  if ((local_98 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_98 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_98 & 4) != 0) {
    FThreadStats::AddMessage(local_a0,CycleScopeEnd);
  }
  local_98 = 0;
  if (bVar6) {
    if (*(char *)(lVar2 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar15 = *(FWriteBuffer **)(lVar2 + 0x20);
    if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 1) {
      pFVar15 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar15->Cursor = '\n';
    pFVar15->Cursor = pFVar15->Cursor + 1;
    pFVar15->Committed = pFVar15->Cursor;
  }
  FCsvProfiler::EndStat("RigidBodyNodeSimulation",local_b8.Bits);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Index.Value = local_90.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_80.StatData.Pad = (uchar  [8])(local_a8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(&local_ac);
  return;
}

// SetOverridePhysicsAsset @ 14646a170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::SetOverridePhysicsAsset(FAnimNode_RigidBody *this,UPhysicsAsset *param_1)

{
  (this->OverridePhysicsAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// UpdateClothColliderObjects @ 146472c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateClothColliderObjects
          (FAnimNode_RigidBody *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [16];
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  iVar2 = (this->ClothColliders).ArrayNum;
  pFVar9 = (this->ClothColliders).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->ClothColliders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimNode_RigidBody::FClothCollider,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_198);
    }
    if (pFVar9 == pFVar1) break;
    if ((*(longlong *)pFVar9 != 0) &&
       (*(USkinnedMeshComponent **)(pFVar9 + 8) != (USkinnedMeshComponent *)0x0)) {
      USkinnedMeshComponent::GetBoneTransform
                (*(USkinnedMeshComponent **)(pFVar9 + 8),&local_128,*(int *)(pFVar9 + 0x10));
      dVar27 = (param_1->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar28 = (param_1->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar3 = (param_1->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar4 = (param_1->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar7 = local_128.Translation.XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
      dVar8 = local_128.Translation.XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
      uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
      dVar13 = local_128.Translation.ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
      auVar36._8_4_ = SUB84(dVar8,0);
      auVar36._0_8_ = dVar7;
      auVar36._12_4_ = uVar34;
      auVar25._8_4_ = SUB84(dVar28,0);
      auVar25._0_8_ = dVar27;
      auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar21._8_4_ = SUB84(dVar4,0);
      auVar21._0_8_ = dVar3;
      auVar21._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      auVar26 = blendpd(auVar25,auVar21,2);
      auVar14._8_4_ = SUB84(dVar3,0);
      auVar14._0_8_ = dVar28;
      auVar14._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar20._8_4_ = SUB84(dVar8,0);
      auVar20._0_8_ = dVar7;
      auVar20._12_4_ = uVar34;
      auVar37._0_8_ = auVar36._8_8_ * dVar27 - dVar28 * dVar7;
      auVar37._8_8_ = dVar13 * dVar28 - auVar14._8_8_ * dVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar13;
      auVar21 = blendpd(auVar20,auVar23,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar3 - auVar26._0_8_ * dVar13;
      auVar22._8_8_ = auVar21._8_8_ * dVar4 - auVar26._8_8_ * 0.0;
      auVar21 = blendpd(auVar37,auVar22,2);
      dVar5 = auVar37._8_8_ + auVar37._8_8_;
      dVar6 = auVar22._0_8_ + auVar22._0_8_;
      uVar34 = SUB84(dVar6,0);
      uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar38._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar38._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar32._8_4_ = uVar34;
      auVar32._0_8_ = dVar5;
      auVar32._12_4_ = uVar35;
      auVar15._8_4_ = uVar34;
      auVar15._0_8_ = dVar5;
      auVar15._12_4_ = uVar35;
      auVar29._8_4_ = uVar34;
      auVar29._0_8_ = dVar5;
      auVar29._12_4_ = uVar35;
      auVar21 = blendpd(auVar29,auVar38,2);
      auVar33._0_8_ = auVar32._8_8_ * dVar27 - dVar5 * dVar28;
      auVar33._8_8_ = auVar38._0_8_ * dVar28 - auVar15._8_8_ * dVar3;
      auVar16._8_4_ = SUB84(auVar38._8_8_,0);
      auVar16._0_8_ = auVar38._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
      auVar30._0_8_ = auVar21._0_8_ * dVar3 - auVar38._0_8_ * auVar26._0_8_;
      auVar30._8_8_ = auVar21._8_8_ * dVar4 - auVar16._8_8_ * auVar26._8_8_;
      auVar21 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
      lVar10 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar21._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar21._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
      lVar11 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar12 = -(ulonglong)
                ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) &
                                  _UNK_15061cc8c,
                                  *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) & _UNK_15061cc88)
                <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar17._8_4_ = SUB84(auVar33._8_8_,0);
      auVar17._0_8_ = auVar33._0_8_;
      auVar17._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
      auVar26._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar26._0_8_ = auVar21._0_8_;
      auVar26._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
      dVar3 = (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar23._12_4_,
                               ~(uint)lVar12 & auVar23._8_4_) *
              (dVar6 * dVar4 + dVar8 + auVar30._0_8_);
      dVar6 = (param_1->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar8 = (param_1->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar34 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar26 = blendpd(auVar33,auVar30,2);
      auVar31._8_4_ = SUB84(dVar8,0);
      auVar31._0_8_ = dVar6;
      auVar31._12_4_ = uVar34;
      dVar27 = (param_1->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar28 = (param_1->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_188.Translation.ZW.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar21._4_4_,
                            ~(uint)lVar10 & auVar21._0_4_) *
           (auVar38._0_8_ * dVar4 + dVar13 + auVar26._0_8_);
      dVar13 = auVar31._8_8_;
      local_188.Translation.ZW.m128d_f64[1] = 0.0;
      auVar18._8_4_ = SUB84(dVar8,0);
      auVar18._0_8_ = dVar13;
      auVar18._12_4_ = uVar34;
      auVar24._8_4_ = SUB84(dVar28,0);
      auVar24._0_8_ = dVar28;
      auVar24._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      local_188.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_188.Translation.XY.m128d_f64[0] =
           (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar23._4_4_,
                            ~(uint)lVar11 & auVar23._0_4_) * (dVar5 * dVar4 + dVar7 + auVar17._8_8_)
      ;
      local_188.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      auVar19._8_4_ = SUB84(dVar6,0);
      auVar19._0_8_ = dVar6;
      auVar19._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      dVar3 = local_128.Rotation.ZW.m128d_f64[0] * dVar27 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              auVar18._8_8_ * local_128.Rotation.XY.m128d_f64[1] +
              auVar24._8_8_ * local_128.Rotation.ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              auVar19._8_8_ * local_128.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_188.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_188.Rotation.XY.m128d_f64[0] =
           local_128.Rotation.ZW.m128d_f64[1] * dVar27 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar13 * local_128.Rotation.XY.m128d_f64[0] +
           dVar28 * local_128.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar6 * local_128.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_188.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      dVar3 = dVar27 * local_128.Rotation.XY.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar8 * local_128.Rotation.ZW.m128d_f64[1] +
              dVar28 * local_128.Rotation.XY.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar6 * local_128.Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_188.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_188.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
      local_188.Rotation.ZW.m128d_f64[0] =
           dVar27 * local_128.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar13 * local_128.Rotation.ZW.m128d_f64[0] +
           dVar28 * local_128.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar6 * local_128.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_188.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_188.Scale3D.ZW.m128d_f64[1] = 0.0;
      ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget(*(FActorHandle **)pFVar9,&local_188);
    }
    pFVar9 = pFVar9 + 0x18;
  }
  return;
}

// UpdateComponentPose_AnyThread @ 146473010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateComponentPose_AnyThread
          (FAnimNode_RigidBody *this,FAnimationUpdateContext *param_1)

{
  undefined4 uVar1;
  FAnimationUpdateContext local_38;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::UpdateComponentPose_AnyThread");
  if (((this->bFreezeIncomingPoseOnStart == '\0') || (this->bSimulationStarted == '\0')) ||
     (this->ResetSimulatedTeleportType != None)) {
    FStatsHierarchical::BeginMeasurement
              ("FAnimNode_SkeletalControlBase::UpdateComponentPose_AnyThread");
  }
  else {
    if (0 < *(int *)&(this->CapturedFrozenPose).Pose.field_0x8) goto LAB_1464730ad;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    uVar1 = param_1->RootMotionWeightModifier;
    local_38._40_8_ = *(ulonglong *)&param_1->DeltaTime & 0xffffffff00000000;
    local_38.RootMotionWeightModifier = (float)uVar1;
    local_38.CurrentWeight = param_1->CurrentWeight;
    FStatsHierarchical::BeginMeasurement
              ("FAnimNode_SkeletalControlBase::UpdateComponentPose_AnyThread");
    param_1 = &local_38;
  }
  FPoseLinkBase::Update((FPoseLinkBase *)&this->field_0x10,param_1);
  FStatsHierarchical::EndMeasurement();
LAB_1464730ad:
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInternal @ 1464746e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateInternal(FAnimNode_RigidBody *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RigidBody_Update> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FLLMScope local_res8 [5];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FStatMessage local_58;
  FName local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1588,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1588,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name1588,true);
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBody::UpdateInternal");
  if (this->bEnabled == 0) goto LAB_146474a23;
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_RigidBody_Update;
  if (StatPtr_STAT_RigidBody_Update == (FThreadSafeStaticStat<FStat_STAT_RigidBody_Update>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_RigidBody_Update");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RigidBody_Update>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBody_Update,*pFVar5,
                       L"RigidBody_Update","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
LAB_1464748d9:
    bVar3 = false;
    FVar9 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar8.Value;
        local_res18.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x63c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1464748d9;
    local_res18.s.LowPart = FVar8.Value;
    local_res18.s.HighPart = uVar7;
    local_48 = FVar9;
    FThreadStats::AddMessage(FVar9,CycleScopeStart);
    bVar3 = true;
    FVar10.Value = local_48.ComparisonIndex.Value;
  }
  FlushDeferredSimulationTask(this);
  this->AccumulatedDeltaTime = *(float *)(param_1->_padding_ + 0x168) + this->AccumulatedDeltaTime;
  if (this->UnsafeWorld != (UWorld *)0x0) {
    this->bSimulationStarted = '\x01';
  }
  this->UnsafeWorld = (UWorld *)0x0;
  this->UnsafeOwner = (AActor *)0x0;
  this->PhysScene = (FPhysScene_Chaos *)0x0;
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_146474a23:
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UpdateWorldForces @ 146475c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateWorldForces
          (FAnimNode_RigidBody *this,TTransform<double> *param_1,TTransform<double> *param_2,
          float param_3)

{
  FScriptContainerElement FVar1;
  ESimulationSpace EVar2;
  int iVar3;
  FActorHandle *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  TTransform<double> *this_00;
  bool bVar14;
  EForceType EVar15;
  int iVar16;
  uint uVar17;
  TStatId TVar18;
  TVector<double> *pTVar19;
  ulonglong uVar20;
  TTransform<double> *pTVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined1 auVar64 [16];
  undefined8 uVar63;
  double dVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar70 [16];
  double dVar76;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar77;
  double dVar78;
  double dVar85;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar86;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auStackY_408 [32];
  undefined1 local_3c4;
  undefined1 local_3c3;
  undefined1 local_3c2;
  undefined1 local_3c1;
  undefined1 local_3c0;
  undefined1 local_3bf;
  undefined1 local_3be;
  undefined1 local_3bd [5];
  FScriptContainerElement *local_3b8;
  TTransform<double> *local_3b0;
  FCycleCounter local_3a8;
  FLLMScope local_398 [2];
  FScriptContainerElement *local_390;
  TVector<double>_u_0 local_388;
  double local_370;
  double dStack_368;
  undefined8 local_360;
  longlong local_358;
  TVector<double>_u_0 local_350;
  TVector<double>_u_0 local_338;
  TTransform<double> *local_320;
  FMemScope local_318 [2];
  FSourceLocation local_308;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  TVector<double> local_2b0;
  TVector<double> local_298;
  double local_280;
  double dStack_278;
  double local_270;
  undefined1 local_268 [16];
  double local_258;
  TVector<double> local_250;
  TVector<double> local_238;
  TVector<double> local_220;
  TVector<double> local_208;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_408;
  local_3b0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1360,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_398,LLMScope_Name1360,false,None,Default,true);
  FMemScope::FMemScope(local_318,&LLMScope_Name1360,true);
  TVar18 = FThreadSafeStaticStatInner<FStat_STAT_ImmediateUpdateWorldForces,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ImmediateUpdateWorldForces,1> *)
                      &StatPtr_STAT_ImmediateUpdateWorldForces);
  local_308.Impl._Line = 0x551;
  local_308.Impl._Column = 2;
  local_308.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
  ;
  local_308.Impl._Function =
       "void __cdecl FAnimNode_RigidBody::UpdateWorldForces(const struct UE::Math::TTransform<double> &,const struct UE::Math::TTransform<double> &,const float)"
  ;
  local_3a8.StatId.ComparisonIndex.Value = 0;
  local_3a8.StatId.Number = 0;
  local_3a8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_3a8,*(TStatIdData **)&(TVar18.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_308);
  if (0.0 < this->TotalMass) {
    uVar27 = (this->PendingRadialForces).ArrayNum;
    uVar20 = (ulonglong)(int)uVar27;
    pFVar23 = (this->PendingRadialForces).AllocatorInstance.Data;
    local_390 = pFVar23 + uVar20 * 0x30;
    while( true ) {
      pFVar25 = local_390;
      if ((this->PendingRadialForces).ArrayNum != (int)uVar20) {
        local_3c4 = 0;
        `TCheckedPointerIterator<USkeletalMeshComponent::FPendingRadialForces,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_3c4);
      }
      if (pFVar23 == pFVar25) break;
      WorldPositionToSpace
                (&local_2b0,this->SimulationSpace,(TVector<double> *)pFVar23,param_1,param_2);
      pFVar22 = (this->Bodies).AllocatorInstance.Data;
      iVar3 = (this->Bodies).ArrayNum;
      pFVar25 = pFVar22 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Bodies).ArrayNum != iVar3) {
          local_3c3 = 0;
          `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3c3);
        }
        if (pFVar22 == pFVar25) break;
        pFVar4 = *(FActorHandle **)pFVar22;
        dVar78 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar4);
        if (0.0 < dVar78) {
          FVar1 = pFVar23[0x24];
          dVar46 = (double)*(float *)(pFVar23 + 0x1c);
          if (FVar1 == (FScriptContainerElement)0x0) {
            dVar46 = dVar46 / (dVar78 * this->TotalMass);
          }
          if (*(int *)(pFVar23 + 0x28) == 0) {
            EVar15 = (FVar1 != (FScriptContainerElement)0x0) + AddImpulse;
          }
          else {
            EVar15 = (EForceType)(FVar1 != (FScriptContainerElement)0x0);
          }
          ImmediatePhysics_Chaos::FActorHandle::AddRadialForce
                    (pFVar4,&local_2b0,dVar46,(double)*(float *)&pFVar23[0x18].field_0x0,
                     *(ERadialImpulseFalloff *)(pFVar23 + 0x20),EVar15);
        }
        pFVar22 = pFVar22 + 8;
      }
      pFVar23 = pFVar23 + 0x30;
      uVar20 = (ulonglong)uVar27;
      param_2 = local_3b0;
    }
    uVar63 = *(undefined8 *)&(this->ExternalForce).field0_0x0;
    uVar27 = (uint)uVar63 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = (uint)((ulonglong)uVar63 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar27) &&
          (double)CONCAT44(uVar28,uVar27) != __real_3f1a36e2e0000000) ||
        (uVar63 = *(undefined8 *)((longlong)&(this->ExternalForce).field0_0x0 + 8),
        uVar27 = (uint)uVar63 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar28 = (uint)((ulonglong)uVar63 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar27) &&
        (double)CONCAT44(uVar28,uVar27) != __real_3f1a36e2e0000000)) ||
       (uVar63 = *(undefined8 *)((longlong)&(this->ExternalForce).field0_0x0 + 0x10),
       uVar27 = (uint)uVar63 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar28 = (uint)((ulonglong)uVar63 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar28,uVar27) &&
       (double)CONCAT44(uVar28,uVar27) != __real_3f1a36e2e0000000)) {
      WorldVectorToSpaceNoScale
                (&local_298,this->SimulationSpace,&this->ExternalForce,param_1,param_2);
      pFVar25 = (this->Bodies).AllocatorInstance.Data;
      iVar3 = (this->Bodies).ArrayNum;
      pFVar23 = pFVar25 + (longlong)iVar3 * 8;
      while( true ) {
        if ((this->Bodies).ArrayNum != iVar3) {
          local_3c2 = 0;
          `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3c2);
        }
        param_2 = local_3b0;
        if (pFVar25 == pFVar23) break;
        pFVar4 = *(FActorHandle **)pFVar25;
        dVar78 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar4);
        if (0.0 < dVar78) {
          ImmediatePhysics_Chaos::FActorHandle::AddForce(pFVar4,&local_298);
        }
        pFVar25 = pFVar25 + 8;
      }
    }
    if ((param_3 != 0.0) &&
       (((this->PerSolverField).TransientCommands.ArrayNum != 0 ||
        ((this->PerSolverField).PersistentCommands.ArrayNum != 0)))) {
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 &this->PerSolverField,(this->Bodies).ArrayNum,No);
      uVar27 = (this->Bodies).ArrayNum;
      local_3b8 = (FScriptContainerElement *)
                  &(this->PerSolverField).ExecutionDatas.SampleIndices.ArrayNum;
      iVar3 = *(int *)local_3b8;
      if (iVar3 < (int)uVar27) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,uVar27 - iVar3,
                            &(this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance,
                            (int *)local_3b8,
                            &(this->PerSolverField).ExecutionDatas.SampleIndices.ArrayMax);
        DefaultConstructItems<FFieldContextIndex,int>
                  ((this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data +
                   (longlong)iVar16 * 8,uVar27 - iVar3);
      }
      else {
        if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
        }
        if ((int)uVar27 < iVar3) {
          uVar28 = iVar3 - uVar27;
          if (((int)(uVar28 | uVar27) < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (uVar28 != 0) {
            TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&(this->PerSolverField).ExecutionDatas.SampleIndices,uVar27,uVar28);
          }
        }
      }
      uVar27 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar27;
      uVar24 = 0;
      pFVar23 = (this->Bodies).AllocatorInstance.Data;
      lVar26 = 0;
      local_358 = 0;
      local_390 = pFVar23 + uVar20 * 8;
      while( true ) {
        if ((this->Bodies).ArrayNum != (int)uVar20) {
          local_3c1 = 0;
          `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_3c1);
        }
        uVar28 = (uint)uVar24;
        if (pFVar23 == local_390) break;
        local_320 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                              (*(FActorHandle **)&pFVar23->field_0x0,&local_128);
        EVar2 = this->SimulationSpace;
        if (EVar2 == ComponentSpace) {
          local_1e8.Rotation.XY.m128d_f64 = *&(param_1->Rotation).XY.m128d_f64;
          local_1e8.Rotation.ZW.m128d_f64 = *&(param_1->Rotation).ZW.m128d_f64;
          local_1e8.Translation.XY.m128d_f64 = *&(param_1->Translation).XY.m128d_f64;
          local_1e8.Translation.ZW.m128d_f64 = *&(param_1->Translation).ZW.m128d_f64;
          uVar32 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
          uVar29 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
          uVar30 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
          uVar31 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
          local_1e8.Scale3D.ZW.m128d_f64 = *&(param_1->Scale3D).ZW.m128d_f64;
LAB_1464761a9:
          local_1e8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar29,uVar32);
          local_1e8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar31,uVar30);
        }
        else {
          if ((EVar2 == WorldSpace) || (EVar2 != BaseBoneSpace)) {
            local_1e8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1e8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1e8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar29 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            local_1e8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1e8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            goto LAB_1464761a9;
          }
          local_1e8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1e8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1e8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1e8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1e8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_1e8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_1e8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1e8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1e8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_1e8,param_2,param_1);
        }
        local_188.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_188.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_188.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_188.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_188,local_320,&local_1e8);
        dVar46 = local_188.Translation.XY.m128d_f64[1];
        dVar78 = local_188.Translation.XY.m128d_f64[0];
        dVar56 = local_188.Translation.ZW.m128d_f64[0];
        local_270 = local_188.Translation.ZW.m128d_f64[0];
        local_280 = local_188.Translation.XY.m128d_f64[0];
        dStack_278 = local_188.Translation.XY.m128d_f64[1];
        uVar17 = 0;
        if ((int)uVar28 < (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayNum) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar22 = (this->PerSolverField).ExecutionDatas.SamplePositions.AllocatorInstance.Data;
        pFVar25 = pFVar22 + lVar26;
        *(double *)pFVar25 = dVar78;
        *(double *)(pFVar25 + 8) = dVar46;
        *(double *)(pFVar22 + lVar26 + 0x10) = dVar56;
        uVar20 = uVar24 << 0x20 | uVar24;
        uVar17 = 0;
        if ((int)uVar28 < *(int *)local_3b8) {
          uVar17 = ~uVar28 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar24 = (ulonglong)(uVar28 + 1);
        lVar26 = lVar26 + 0x18;
        *(ulonglong *)
         ((this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data + local_358) =
             uVar20;
        local_358 = local_358 + 8;
        pFVar23 = pFVar23 + 8;
        uVar20 = (ulonglong)uVar27;
        param_2 = local_3b0;
      }
      FPerSolverFieldSystem::ComputeFieldRigidImpulse(&this->PerSolverField,this->WorldTimeSeconds);
      this_00 = local_3b0;
      dVar78 = __real_3ff0000000000000;
      uVar27 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar27;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum == uVar27) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar28 = 0;
        lVar26 = 0;
        local_3b8 = pFVar23 + uVar20 * 8;
        while( true ) {
          pFVar25 = local_3b8;
          if ((this->Bodies).ArrayNum != (int)uVar20) {
            local_3c0 = 0;
            `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_3c0);
          }
          if (pFVar23 == pFVar25) break;
          pFVar4 = *(FActorHandle **)pFVar23;
          uVar17 = 0;
          if ((int)uVar28 < (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar28 = uVar28 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[1].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          pTVar21 = param_1;
          if (EVar2 == ComponentSpace) {
LAB_146476460:
            UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (pTVar21,(TVector<double> *)&local_388._s_0,(TVector<double> *)pFVar25);
          }
          else if (EVar2 == WorldSpace) {
            local_388._s_0.X = (double)*(undefined8 *)&pFVar25->field_0x0;
            local_388._s_0.Y = (double)*(undefined8 *)(pFVar25 + 8);
            local_388._s_0.Z = (double)*(undefined8 *)(pFVar25 + 0x10);
          }
          else {
            if (EVar2 == BaseBoneSpace) {
              pFVar25 = (FScriptContainerElement *)
                        UE::Math::TTransform<double>::InverseTransformVectorNoScale
                                  (param_1,&local_250,(TVector<double> *)pFVar25);
              pTVar21 = this_00;
              goto LAB_146476460;
            }
            local_388._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_388._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_388._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          uVar63 = local_388._s_0.X;
          dVar46 = ImmediatePhysics_Chaos::FActorHandle::GetMass(pFVar4);
          dVar56 = dVar78 / (double)param_3;
          local_2e8._8_8_ = local_388._s_0.Y * dVar46 * dVar56;
          local_2e8._16_8_ = local_388._s_0.Z * dVar46 * dVar56;
          local_2e8._s_0.X = dVar46 * (double)uVar63 * dVar56;
          ImmediatePhysics_Chaos::FActorHandle::AddForce(pFVar4,(TVector<double> *)&local_2e8._s_0);
          uVar20 = (ulonglong)uVar27;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar27 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar27;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum == uVar27) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar28 = 0;
        lVar26 = 0;
        local_3b8 = pFVar23 + uVar20 * 8;
        while( true ) {
          pFVar25 = local_3b8;
          if ((this->Bodies).ArrayNum != (int)uVar20) {
            local_3bf = 0;
            `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_3bf);
          }
          if (pFVar23 == pFVar25) break;
          pFVar4 = *(FActorHandle **)pFVar23;
          uVar17 = 0;
          if ((int)uVar28 < (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar28 = uVar28 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[0].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          pTVar21 = param_1;
          if (EVar2 == ComponentSpace) {
LAB_1464765d5:
            UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (pTVar21,(TVector<double> *)&local_338._s_0,(TVector<double> *)pFVar25);
          }
          else if (EVar2 == WorldSpace) {
            local_338._s_0.X = (double)*(undefined8 *)&pFVar25->field_0x0;
            local_338._s_0.Y = (double)*(undefined8 *)(pFVar25 + 8);
            local_338._s_0.Z = (double)*(undefined8 *)(pFVar25 + 0x10);
          }
          else {
            if (EVar2 == BaseBoneSpace) {
              pFVar25 = (FScriptContainerElement *)
                        UE::Math::TTransform<double>::InverseTransformVectorNoScale
                                  (param_1,&local_238,(TVector<double> *)pFVar25);
              pTVar21 = this_00;
              goto LAB_1464765d5;
            }
            local_338._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_338._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_338._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          ImmediatePhysics_Chaos::FActorHandle::AddForce(pFVar4,(TVector<double> *)&local_338._s_0);
          uVar20 = (ulonglong)uVar27;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar27 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar27;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum == uVar27) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar28 = 0;
        lVar26 = 0;
        local_3b8 = pFVar23 + uVar20 * 8;
        while( true ) {
          pFVar25 = local_3b8;
          if ((this->Bodies).ArrayNum != (int)uVar20) {
            local_3be = 0;
            `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_3be);
          }
          if (pFVar23 == pFVar25) break;
          pFVar4 = *(FActorHandle **)pFVar23;
          uVar17 = 0;
          if ((int)uVar28 < (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar28 = uVar28 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[3].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          if (EVar2 == ComponentSpace) {
            auVar83 = *(undefined1 (*) [16])&pFVar25->field_0x0;
            dVar46 = *(double *)(pFVar25 + 0x10);
            dVar56 = (param_1->Rotation).XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar8 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar32 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar9 = (param_1->Rotation).ZW.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar10 = (param_1->Rotation).ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar85 = auVar83._8_8_;
            auVar57._8_4_ = SUB84(dVar8,0);
            auVar57._0_8_ = dVar56;
            auVar57._12_4_ = uVar32;
            auVar70._8_4_ = SUB84(dVar8,0);
            auVar70._0_8_ = dVar56;
            auVar70._12_4_ = uVar32;
            auVar33._8_4_ = SUB84(dVar10,0);
            auVar33._0_8_ = dVar9;
            auVar33._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            auVar70 = blendpd(auVar70,auVar33,2);
            auVar79._0_8_ = dVar85 * dVar56 - auVar83._0_8_ * auVar57._8_8_;
            auVar79._8_8_ = dVar46 * dVar8 - dVar85 * dVar9;
            auVar64._8_4_ = SUB84(auVar79._8_8_,0);
            auVar64._0_8_ = auVar79._0_8_;
            auVar64._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
            auVar66._8_8_ = 0;
            auVar66._0_8_ = dVar46;
            auVar33 = blendpd(auVar83,auVar66,2);
            auVar34._0_8_ = auVar33._0_8_ * dVar9 - dVar46 * auVar70._0_8_;
            auVar34._8_8_ = auVar33._8_8_ * dVar10 - auVar70._8_8_ * 0.0;
            auVar33 = blendpd(auVar79,auVar34,2);
            auVar80._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar80._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            dVar62 = auVar64._8_8_ + auVar64._8_8_;
            dVar69 = auVar34._0_8_ + auVar34._0_8_;
            auVar47._8_4_ = SUB84(dVar69,0);
            auVar47._0_8_ = dVar62;
            uVar32 = (undefined4)((ulonglong)dVar69 >> 0x20);
            auVar47._12_4_ = uVar32;
            auVar35._8_4_ = SUB84(dVar69,0);
            auVar35._0_8_ = dVar62;
            auVar35._12_4_ = uVar32;
            auVar33 = blendpd(auVar35,auVar80,2);
            auVar48._0_8_ = auVar47._8_8_ * dVar56 - dVar62 * auVar57._8_8_;
            auVar48._8_8_ = auVar80._0_8_ * dVar8 - dVar69 * dVar9;
            auVar36._0_8_ = auVar33._0_8_ * dVar9 - auVar80._0_8_ * auVar70._0_8_;
            auVar36._8_8_ = auVar33._8_8_ * dVar10 - auVar80._8_8_ * auVar70._8_8_;
            auVar33 = blendpd(auVar48,auVar36,2);
            local_360 = auVar80._0_8_ * dVar10 + dVar46 + auVar33._0_8_;
            uVar63 = dVar62 * dVar10 + auVar83._0_8_ + auVar48._8_8_;
            dStack_368 = dVar69 * dVar10 + dVar85 + auVar36._0_8_;
            local_370 = (double)uVar63;
          }
          else if (EVar2 == WorldSpace) {
            _local_370 = *(undefined1 (*) [16])&pFVar25->field_0x0;
            uVar63 = local_370;
            local_360 = *(undefined8 *)(pFVar25 + 0x10);
          }
          else if (EVar2 == BaseBoneSpace) {
            pTVar19 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                                (param_1,&local_220,(TVector<double> *)pFVar25);
            UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (this_00,(TVector<double> *)&local_370,pTVar19);
            uVar63 = local_370;
          }
          else {
            dStack_368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_370 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_360 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar63 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          pTVar19 = ImmediatePhysics_Chaos::FActorHandle::GetInertia(pFVar4,&local_208);
          dVar46 = dVar78 / (double)param_3;
          local_2d0._s_0.X = (double)uVar63 * (pTVar19->field0_0x0)._s_0.X * dVar46;
          local_2d0._s_0.Y = dVar46 * dStack_368 * (pTVar19->field0_0x0)._s_0.Y;
          local_2d0._s_0.Z = dVar46 * (double)local_360 * (pTVar19->field0_0x0)._s_0.Z;
          ImmediatePhysics_Chaos::FActorHandle::AddTorque(pFVar4,(TVector<double> *)&local_2d0._s_0)
          ;
          uVar20 = (ulonglong)uVar27;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar27 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar27;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum == uVar27) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar28 = 0;
        lVar26 = 0;
        local_3b8 = pFVar23 + uVar20 * 8;
        while( true ) {
          pFVar25 = local_3b8;
          if ((this->Bodies).ArrayNum != (int)uVar20) {
            local_3bd[0] = 0;
            `TCheckedPointerIterator<ImmediatePhysics_Chaos::FActorHandle_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_3bd);
          }
          if (pFVar23 == pFVar25) break;
          pFVar4 = *(FActorHandle **)pFVar23;
          uVar17 = 0;
          if ((int)uVar28 < (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum) {
            uVar17 = ~uVar28 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar28 = uVar28 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[2].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          dVar78 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar56 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar46 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          if (EVar2 == ComponentSpace) {
            auVar83 = *(undefined1 (*) [16])pFVar25;
            dVar9 = *(double *)&pFVar25[0x10].field_0x0;
            dVar78 = (param_1->Rotation).XY.m128d_f64[0] * dVar78;
            dVar56 = (param_1->Rotation).XY.m128d_f64[1] * dVar56;
            dVar46 = (param_1->Rotation).ZW.m128d_f64[0] * dVar46;
            dVar8 = (param_1->Rotation).ZW.m128d_f64[1] * dVar8;
            uVar29 = (undefined4)((ulonglong)dVar8 >> 0x20);
            auVar13._8_8_ = 0;
            auVar13._0_8_ = dVar9;
            auVar33 = blendpd(auVar83,auVar13,2);
            dVar69 = auVar83._8_8_;
            auVar53._8_4_ = SUB84(dVar56,0);
            auVar53._0_8_ = dVar78;
            uVar32 = (undefined4)((ulonglong)dVar56 >> 0x20);
            auVar53._12_4_ = uVar32;
            auVar68._8_4_ = SUB84(dVar56,0);
            auVar68._0_8_ = dVar78;
            auVar68._12_4_ = uVar32;
            auVar74._0_8_ = dVar69 * dVar78 - auVar53._8_8_ * auVar83._0_8_;
            auVar74._8_8_ = dVar9 * dVar56 - dVar46 * dVar69;
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = dVar46;
            auVar7._12_4_ = uVar29;
            auVar66 = blendpd(auVar68,auVar7,2);
            auVar44._0_8_ = auVar33._0_8_ * dVar46 - auVar66._0_8_ * dVar9;
            auVar44._8_8_ = auVar33._8_8_ * dVar8 - auVar66._8_8_ * 0.0;
            dVar10 = auVar74._8_8_ + auVar74._8_8_;
            dVar62 = auVar44._0_8_ + auVar44._0_8_;
            uVar32 = (undefined4)((ulonglong)dVar62 >> 0x20);
            auVar33 = blendpd(auVar74,auVar44,2);
            auVar75._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar75._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            auVar45._8_4_ = SUB84(dVar8,0);
            auVar45._0_8_ = dVar8;
            auVar45._12_4_ = uVar29;
            auVar60._8_4_ = SUB84(dVar62,0);
            auVar60._0_8_ = dVar10;
            auVar60._12_4_ = uVar32;
            auVar61._0_8_ = auVar60._8_8_ * dVar78 - auVar53._8_8_ * dVar10;
            auVar61._8_8_ = auVar75._0_8_ * dVar56 - dVar46 * dVar62;
            auVar54._8_4_ = SUB84(dVar62,0);
            auVar54._0_8_ = dVar10;
            auVar54._12_4_ = uVar32;
            auVar33 = blendpd(auVar54,auVar75,2);
            auVar55._0_8_ = auVar33._0_8_ * dVar46 - auVar66._0_8_ * auVar75._0_8_;
            auVar55._8_8_ = auVar33._8_8_ * dVar8 - auVar66._8_8_ * auVar75._8_8_;
            auVar33 = blendpd(auVar61,auVar55,2);
            local_350._s_0.X = dVar8 * dVar10 + auVar83._0_8_ + auVar61._8_8_;
            local_350._s_0.Y = auVar45._8_8_ * dVar62 + dVar69 + auVar55._0_8_;
            local_350._s_0.Z = dVar8 * auVar75._0_8_ + dVar9 + auVar33._0_8_;
          }
          else if (EVar2 == WorldSpace) {
            local_350._0_16_ = *(undefined1 (*) [16])pFVar25;
            local_350._s_0.Z = (double)*(undefined8 *)&pFVar25[0x10].field_0x0;
          }
          else if (EVar2 == BaseBoneSpace) {
            auVar83 = *(undefined1 (*) [16])pFVar25;
            dVar9 = *(double *)&pFVar25[0x10].field_0x0;
            dVar77 = (param_1->Rotation).XY.m128d_f64[0] * dVar78;
            dVar86 = (param_1->Rotation).XY.m128d_f64[1] * dVar56;
            dVar10 = (param_1->Rotation).ZW.m128d_f64[0] * dVar46;
            dVar62 = (param_1->Rotation).ZW.m128d_f64[1] * dVar8;
            dVar76 = auVar83._8_8_;
            auVar58._8_4_ = SUB84(dVar86,0);
            auVar58._0_8_ = dVar77;
            uVar32 = (undefined4)((ulonglong)dVar86 >> 0x20);
            auVar58._12_4_ = uVar32;
            auVar65._8_4_ = SUB84(dVar86,0);
            auVar65._0_8_ = dVar77;
            auVar65._12_4_ = uVar32;
            auVar6._8_4_ = SUB84(dVar62,0);
            auVar6._0_8_ = dVar10;
            auVar6._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
            auVar66 = blendpd(auVar65,auVar6,2);
            auVar71._0_8_ = dVar76 * dVar77 - auVar83._0_8_ * auVar58._8_8_;
            auVar71._8_8_ = dVar9 * dVar86 - dVar76 * dVar10;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = dVar9;
            auVar33 = blendpd(auVar83,auVar11,2);
            auVar37._0_8_ = auVar33._0_8_ * dVar10 - dVar9 * auVar66._0_8_;
            auVar37._8_8_ = auVar33._8_8_ * dVar62 - auVar66._8_8_ * 0.0;
            auVar33 = blendpd(auVar71,auVar37,2);
            auVar72._0_8_ = auVar33._0_8_ + auVar33._0_8_;
            auVar72._8_8_ = auVar33._8_8_ + auVar33._8_8_;
            dVar69 = auVar71._8_8_ + auVar71._8_8_;
            dVar85 = auVar37._0_8_ + auVar37._0_8_;
            uVar32 = (undefined4)((ulonglong)dVar85 >> 0x20);
            auVar49._8_4_ = SUB84(dVar85,0);
            auVar49._0_8_ = dVar69;
            auVar49._12_4_ = uVar32;
            auVar38._8_4_ = SUB84(dVar85,0);
            auVar38._0_8_ = dVar69;
            auVar38._12_4_ = uVar32;
            auVar33 = blendpd(auVar38,auVar72,2);
            dVar78 = (this_00->Rotation).XY.m128d_f64[0] * dVar78;
            dVar56 = (this_00->Rotation).XY.m128d_f64[1] * dVar56;
            uVar32 = (undefined4)((ulonglong)dVar56 >> 0x20);
            auVar50._0_8_ = auVar49._8_8_ * dVar77 - dVar69 * auVar58._8_8_;
            auVar50._8_8_ = auVar72._0_8_ * dVar86 - dVar85 * dVar10;
            auVar39._0_8_ = auVar33._0_8_ * dVar10 - auVar72._0_8_ * auVar66._0_8_;
            auVar39._8_8_ = auVar33._8_8_ * dVar62 - auVar72._8_8_ * auVar66._8_8_;
            dVar46 = (this_00->Rotation).ZW.m128d_f64[0] * dVar46;
            dVar8 = (this_00->Rotation).ZW.m128d_f64[1] * dVar8;
            auVar33 = blendpd(auVar50,auVar39,2);
            local_258 = auVar72._0_8_ * dVar62 + dVar9 + auVar33._0_8_;
            dVar9 = dVar69 * dVar62 + auVar83._0_8_ + auVar50._8_8_;
            dVar10 = dVar85 * dVar62 + dVar76 + auVar39._0_8_;
            uVar29 = SUB84(dVar10,0);
            uVar30 = (undefined4)((ulonglong)dVar10 >> 0x20);
            auVar67._8_4_ = SUB84(dVar56,0);
            auVar67._0_8_ = dVar78;
            auVar67._12_4_ = uVar32;
            auVar73._8_4_ = SUB84(dVar56,0);
            auVar73._0_8_ = dVar78;
            auVar73._12_4_ = uVar32;
            auVar81._8_4_ = uVar29;
            auVar81._0_8_ = dVar9;
            auVar81._12_4_ = uVar30;
            auVar40._8_4_ = uVar29;
            auVar40._0_8_ = dVar9;
            auVar40._12_4_ = uVar30;
            auVar82._0_8_ = auVar81._8_8_ * dVar78 - auVar67._8_8_ * dVar9;
            auVar82._8_8_ = local_258 * dVar56 - dVar46 * dVar10;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_258;
            auVar33 = blendpd(auVar40,auVar12,2);
            auVar59._8_4_ = SUB84(auVar82._8_8_,0);
            auVar59._0_8_ = auVar82._0_8_;
            auVar59._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
            auVar83._8_4_ = SUB84(dVar8,0);
            auVar83._0_8_ = dVar46;
            auVar83._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar66 = blendpd(auVar73,auVar83,2);
            local_268._8_4_ = uVar29;
            local_268._0_8_ = dVar9;
            local_268._12_4_ = uVar30;
            auVar41._0_8_ = auVar33._0_8_ * dVar46 - local_258 * auVar66._0_8_;
            auVar41._8_8_ = auVar33._8_8_ * dVar8 - auVar66._8_8_ * 0.0;
            auVar83 = blendpd(auVar82,auVar41,2);
            dVar62 = auVar59._8_8_ + auVar59._8_8_;
            dVar69 = auVar41._0_8_ + auVar41._0_8_;
            auVar84._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar84._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            auVar51._8_4_ = SUB84(dVar69,0);
            auVar51._0_8_ = dVar62;
            uVar32 = (undefined4)((ulonglong)dVar69 >> 0x20);
            auVar51._12_4_ = uVar32;
            auVar42._8_4_ = SUB84(dVar69,0);
            auVar42._0_8_ = dVar62;
            auVar42._12_4_ = uVar32;
            auVar83 = blendpd(auVar42,auVar84,2);
            auVar52._0_8_ = auVar51._8_8_ * dVar78 - dVar62 * auVar67._8_8_;
            auVar52._8_8_ = auVar84._0_8_ * dVar56 - dVar69 * dVar46;
            auVar43._0_8_ = auVar83._0_8_ * dVar46 - auVar84._0_8_ * auVar66._0_8_;
            auVar43._8_8_ = auVar83._8_8_ * dVar8 - auVar84._8_8_ * auVar66._8_8_;
            auVar83 = blendpd(auVar52,auVar43,2);
            local_350._s_0.X = dVar62 * dVar8 + dVar9 + auVar52._8_8_;
            local_350._s_0.Y = dVar69 * dVar8 + dVar10 + auVar43._0_8_;
            local_350._s_0.Z = auVar84._0_8_ * dVar8 + local_258 + auVar83._0_8_;
          }
          else {
            local_350._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_350._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_350._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          ImmediatePhysics_Chaos::FActorHandle::AddTorque(pFVar4,(TVector<double> *)&local_350._s_0)
          ;
          uVar20 = (ulonglong)uVar27;
          pFVar23 = pFVar23 + 8;
        }
      }
    }
  }
  if ((local_3a8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_3a8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_3a8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_3a8.StatId,CycleScopeEnd);
  }
  local_3a8.EmittedEvent = '\0';
  FMemScope::~FMemScope(local_318);
  FLLMScope::~FLLMScope(local_398);
  return;
}

// UpdateWorldGeometry @ 146476db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateWorldGeometry
          (FAnimNode_RigidBody *this,UWorld *param_1,USkeletalMeshComponent *param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst_00;
  double dVar2;
  longlong lVar3;
  ForElementType<unsigned_int> FVar4;
  AActor *pAVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  USkeletalMeshComponent *pUVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry> FVar13;
  FName FVar14;
  FCollisionQueryParams *pFVar15;
  double *pdVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar17;
  FNameEntryId FVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_1d8 [32];
  FName local_178;
  FLLMScope local_170 [2];
  LARGE_INTEGER local_168;
  FName local_160;
  FStatMessage local_150;
  undefined4 local_140;
  undefined4 uStack_13c;
  USkeletalMeshComponent *local_130;
  FMemScope local_128;
  undefined1 local_120 [56];
  FCollisionQueryParams local_e8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_168 = (LARGE_INTEGER)param_1;
  local_130 = param_2;
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1318,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_170,LLMScope_Name1318,false,None,Default,true);
  FMemScope::FMemScope(&local_128,&LLMScope_Name1318,true);
  FVar18.Value = 0;
  FVar13 = StatPtr_STAT_ImmediateUpdateWorldGeometry;
  if (StatPtr_STAT_ImmediateUpdateWorldGeometry ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_150,"STAT_ImmediateUpdateWorldGeometry");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateUpdateWorldGeometry,
                        *pFVar12,L"FAnimNode_RigidBody::UpdateWorldGeometry",
                        "STATGROUP_ImmediatePhysics","STATCAT_Advanced",L"Immediate Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_178 = (FName)((ulonglong)local_178 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_178,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178 = FVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\BoneControllers\\AnimNode_RigidBody.cpp"
                   ,0x528);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_178 = FVar17;
      local_160 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      FVar18.Value = local_160.ComparisonIndex.Value;
      goto LAB_146476f83;
    }
  }
  bVar9 = false;
  FVar17 = local_160;
LAB_146476f83:
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_RagdollNodeFindGeometry =
         (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FAnimNode_RigidBody::UpdateWorldGeometry(UWorld_const_&,USkeletalMeshComponent_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RagdollNodeFindGeometry>
          )0x0;
    pFVar12 = ::FName::FName((FName *)&local_150,"RagdollNodeFindGeometry");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_RagdollNodeFindGeometry,*pFVar12,
               L"RagdollNodeFindGeometry","STATGROUP_CollisionTags","STATCAT_Advanced",
               L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = (FName)StatPtr_RagdollNodeFindGeometry;
  if (StatPtr_RagdollNodeFindGeometry ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FAnimNode_RigidBody::UpdateWorldGeometry(UWorld_const_&,USkeletalMeshComponent_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RagdollNodeFindGeometry>
       )0x0) {
    pFVar12 = ::FName::FName((FName *)&local_150,"RagdollNodeFindGeometry");
    FVar14 = (FName)FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_RagdollNodeFindGeometry,
                               *pFVar12,L"RagdollNodeFindGeometry","STATGROUP_CollisionTags",
                               "STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,true,false,
                               MCR_Invalid);
  }
  local_178 = FVar14;
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"RagdollNodeFindGeometry");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar15 = FCollisionQueryParams::FCollisionQueryParams
                      (&local_e8,::StaticName,(TStatId *)&local_178,false,(AActor *)0x0);
  _Dst = &(this->QueryParams).IgnoreComponents;
  (this->QueryParams).TraceTag = pFVar15->TraceTag;
  (this->QueryParams).OwnerTag = pFVar15->OwnerTag;
  (this->QueryParams).bTraceComplex = pFVar15->bTraceComplex;
  (this->QueryParams).bFindInitialOverlaps = pFVar15->bFindInitialOverlaps;
  (this->QueryParams).bReturnFaceIndex = pFVar15->bReturnFaceIndex;
  (this->QueryParams).bReturnPhysicalMaterial = pFVar15->bReturnPhysicalMaterial;
  (this->QueryParams).bIgnoreBlocks = pFVar15->bIgnoreBlocks;
  (this->QueryParams).bIgnoreTouches = pFVar15->bIgnoreTouches;
  (this->QueryParams).bSkipNarrowPhase = pFVar15->bSkipNarrowPhase;
  (this->QueryParams).bTraceIntoSubComponents = pFVar15->bTraceIntoSubComponents;
  (this->QueryParams).bReplaceHitWithSubComponents = pFVar15->bReplaceHitWithSubComponents;
  (this->QueryParams).MobilityType = pFVar15->MobilityType;
  (this->QueryParams).IgnoreMask = pFVar15->IgnoreMask;
  (this->QueryParams).StatId.StatIdPtr = (pFVar15->StatId).StatIdPtr;
  (this->QueryParams).bDebugQuery = pFVar15->bDebugQuery;
  (this->QueryParams).bComponentListUnique = pFVar15->bComponentListUnique;
  if (_Dst != &pFVar15->IgnoreComponents) {
    if ((pFVar15->IgnoreComponents).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(_Dst,&pFVar15->IgnoreComponents,0x20);
    }
    FVar4 = (this->QueryParams).IgnoreComponents.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->QueryParams).IgnoreComponents.AllocatorInstance.SecondaryData =
         (pFVar15->IgnoreComponents).AllocatorInstance.SecondaryData;
    (pFVar15->IgnoreComponents).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    (this->QueryParams).IgnoreComponents.ArrayNum = (pFVar15->IgnoreComponents).ArrayNum;
    (this->QueryParams).IgnoreComponents.ArrayMax = (pFVar15->IgnoreComponents).ArrayMax;
    (pFVar15->IgnoreComponents).ArrayNum = 0;
    (pFVar15->IgnoreComponents).ArrayMax = 8;
  }
  _Dst_00 = &(this->QueryParams).IgnoreSourceObjects;
  if (_Dst_00 != &pFVar15->IgnoreSourceObjects) {
    if ((pFVar15->IgnoreSourceObjects).AllocatorInstance.SecondaryData ==
        (ForElementType<unsigned_int>)0x0) {
      memmove(_Dst_00,&pFVar15->IgnoreSourceObjects,0x10);
    }
    FVar4 = (this->QueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar4);
    }
    (this->QueryParams).IgnoreSourceObjects.AllocatorInstance.SecondaryData =
         (pFVar15->IgnoreSourceObjects).AllocatorInstance.SecondaryData;
    (pFVar15->IgnoreSourceObjects).AllocatorInstance.SecondaryData =
         (ForElementType<unsigned_int>)0x0;
    (this->QueryParams).IgnoreSourceObjects.ArrayNum = (pFVar15->IgnoreSourceObjects).ArrayNum;
    (this->QueryParams).IgnoreSourceObjects.ArrayMax = (pFVar15->IgnoreSourceObjects).ArrayMax;
    (pFVar15->IgnoreSourceObjects).ArrayNum = 0;
    (pFVar15->IgnoreSourceObjects).ArrayMax = 4;
  }
  if (local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_e8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_e8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  (this->QueryParams).MobilityType = Static;
  ExpireWorldObjects(this);
  pUVar11 = local_130;
  pdVar16 = (double *)(**(code **)(local_130->_padding_ + 0x598))(local_130,local_120);
  dVar21 = (this->CachedBounds).W + __real_3f1a36e2e0000000;
  dVar2 = pdVar16[6];
  local_140 = *(undefined4 *)(pdVar16 + 2);
  uStack_13c = *(undefined4 *)((longlong)pdVar16 + 0x14);
  dVar7 = pdVar16[1];
  if ((dVar21 < dVar2) ||
     (dVar21 = dVar21 - dVar2, dVar6 = pdVar16[2] - (this->CachedBounds).Center.field0_0x0._s_0.Z,
     dVar19 = *pdVar16 - (this->CachedBounds).Center.field0_0x0._s_0.X,
     dVar20 = dVar7 - (this->CachedBounds).Center.field0_0x0._s_0.Y,
     dVar21 * dVar21 < dVar20 * dVar20 + dVar19 * dVar19 + dVar6 * dVar6)) {
    (this->CachedBounds).Center.field0_0x0._s_0.X = *pdVar16;
    (this->CachedBounds).Center.field0_0x0._s_0.Y = dVar7;
    *(undefined4 *)((longlong)&(this->CachedBounds).Center.field0_0x0 + 0x10) = local_140;
    *(undefined4 *)((longlong)&(this->CachedBounds).Center.field0_0x0 + 0x14) = uStack_13c;
    *(int *)&(this->CachedBounds).W = SUB84(dVar2,0);
    *(int *)((longlong)&(this->CachedBounds).W + 4) = (int)((ulonglong)dVar2 >> 0x20);
    (this->CachedBounds).W = (double)this->CachedBoundsScale * (this->CachedBounds).W;
    this->PhysScene = *(FPhysScene_Chaos **)(local_168.QuadPart + 0x2a0);
    this->UnsafeWorld = (UWorld *)local_168;
    pAVar5 = (AActor *)pUVar11->_padding_;
    this->ComponentsInSimTick = this->ComponentsInSimTick + 1;
    this->UnsafeOwner = pAVar5;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_150.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_150.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_168);
      local_150.StatData.Pad = (uchar  [8])(local_168.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_150);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FMemScope::~FMemScope(&local_128);
  FLLMScope::~FLLMScope(local_170);
  return;
}

// UpdateWorldObjects @ 146477500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBody::UpdateWorldObjects(FAnimNode_RigidBody *this,TTransform<double> *param_1)

{
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FActorHandle *this_00;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *pTVar12;
  bool bVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined4 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [4];
  FLLMScope local_1e4;
  int local_1e0;
  FMemScope local_1d8;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject,0>_>
  *local_198;
  int iStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1778,L"Animation/RigidBody");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_1e4,LLMScope_Name1778,false,None,Default,true);
  FMemScope::FMemScope(&local_1d8,&LLMScope_Name1778,true);
  if (this->SimulationSpace != WorldSpace) {
    iStack_190 = 0;
    uStack_18c = 1;
    pTVar1 = &this->ComponentsInSim;
    local_178 = 0;
    puVar2 = &(this->ComponentsInSim).field_0x10;
    iVar4 = *(int *)&(this->ComponentsInSim).field_0x28;
    iStack_17c = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->ComponentsInSim).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar2;
      }
      uVar17 = *puVar19;
      while (uVar17 == 0) {
        lVar14 = (longlong)iStack_190;
        local_178 = local_178 + 0x20;
        iStack_190 = iStack_190 + 1;
        iStack_17c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_190) goto LAB_14647763c;
        uVar17 = puVar19[lVar14 + 1];
      }
      uStack_18c = -uVar17 & uVar17;
      uVar3 = (ulonglong)uStack_18c * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_1e0 = (int)lVar14;
      iStack_17c = local_178 + -1 + local_1e0;
      if (iVar4 < iStack_17c) {
        iStack_17c = iVar4;
      }
    }
LAB_14647763c:
    iStack_170 = *(int *)&(this->ComponentsInSim).field_0x8 -
                 *(int *)&(this->ComponentsInSim).field_0x34;
    uVar17 = *(uint *)&(this->ComponentsInSim).field_0x28;
    uStack_180 = 0xffffffff;
    uVar20 = uVar17 & 0xffffffe0;
    TStack_1c8._padding_ = CONCAT44(uStack_18c,iStack_190);
    TStack_1c8.CurrentBitIndex = iStack_17c;
    TStack_1c8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar17 >> 5;
    TStack_1c8._28_4_ = iStack_17c;
    TStack_1c8.BaseBitIndex = local_178;
    uStack_1a8 = CONCAT44(uStack_16c,iStack_170);
    local_1d0 = pTVar1;
    TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    local_198 = pTVar1;
    local_188 = puVar2;
    iStack_174 = iStack_17c;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar5 = *(uint *)&(this->ComponentsInSim).field_0x28;
    if (uVar17 != uVar5) {
      puVar18 = *(undefined1 **)&(this->ComponentsInSim).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar2;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_1464777a0;
        uVar17 = *(uint *)(puVar18 + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar17 = (uVar20 - 1) + (int)lVar14;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_1464777a0:
    while( true ) {
      pTVar12 = local_1d0;
      if (*(int *)&local_1d0->field_0x8 - *(int *)&local_1d0->field_0x34 != (int)uStack_1a8) {
        `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBody::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      if (((TStack_1c8.CurrentBitIndex == uVar17) &&
          (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pTVar12 == pTVar1)) break;
      plVar16 = (longlong *)(*(longlong *)pTVar12 + (longlong)TStack_1c8.CurrentBitIndex * 0x20);
      lVar14 = *plVar16;
      if (lVar14 != 0) {
        dVar37 = (param_1->Rotation).XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar38 = (param_1->Rotation).XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        this_00 = (FActorHandle *)plVar16[1];
        auVar39._0_8_ =
             (param_1->Rotation).ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        auVar39._8_8_ =
             (param_1->Rotation).ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar9 = *(double *)(lVar14 + 0x210) - (param_1->Translation).XY.m128d_f64[0];
        dVar10 = *(double *)(lVar14 + 0x218) - (param_1->Translation).XY.m128d_f64[1];
        uVar48 = (undefined4)((ulonglong)dVar10 >> 0x20);
        dVar24 = *(double *)(lVar14 + 0x220) - (param_1->Translation).ZW.m128d_f64[0];
        auVar50._8_4_ = SUB84(dVar10,0);
        auVar50._0_8_ = dVar9;
        auVar50._12_4_ = uVar48;
        auVar25._8_4_ = SUB84(auVar39._0_8_,0);
        auVar25._0_8_ = dVar38;
        auVar25._12_4_ = (int)((ulonglong)auVar39._0_8_ >> 0x20);
        auVar35._8_4_ = SUB84(dVar38,0);
        auVar35._0_8_ = dVar37;
        auVar35._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
        auVar51._0_8_ = auVar50._8_8_ * dVar37 - dVar38 * dVar9;
        auVar51._8_8_ = dVar24 * dVar38 - auVar25._8_8_ * dVar10;
        auVar36 = blendpd(auVar35,auVar39,2);
        auVar31._8_4_ = SUB84(dVar10,0);
        auVar31._0_8_ = dVar9;
        auVar31._12_4_ = uVar48;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar24;
        auVar32 = blendpd(auVar31,auVar32,2);
        auVar33._0_8_ = auVar32._0_8_ * auVar39._0_8_ - dVar24 * auVar36._0_8_;
        auVar33._8_8_ = auVar32._8_8_ * auVar39._8_8_ - auVar36._8_8_ * 0.0;
        auVar32 = blendpd(auVar51,auVar33,2);
        dVar7 = auVar51._8_8_ + auVar51._8_8_;
        dVar8 = auVar33._0_8_ + auVar33._0_8_;
        uVar48 = SUB84(dVar8,0);
        uVar49 = (undefined4)((ulonglong)dVar8 >> 0x20);
        auVar52._0_8_ = auVar32._0_8_ + auVar32._0_8_;
        auVar52._8_8_ = auVar32._8_8_ + auVar32._8_8_;
        auVar46._8_4_ = uVar48;
        auVar46._0_8_ = dVar7;
        auVar46._12_4_ = uVar49;
        auVar26._8_4_ = uVar48;
        auVar26._0_8_ = dVar7;
        auVar26._12_4_ = uVar49;
        auVar43._8_4_ = uVar48;
        auVar43._0_8_ = dVar7;
        auVar43._12_4_ = uVar49;
        auVar32 = blendpd(auVar43,auVar52,2);
        auVar40._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(param_1->Scale3D).XY.m128d_f64);
        auVar40._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
        auVar40._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc)
        ;
        auVar47._0_8_ = auVar46._8_8_ * dVar37 - dVar7 * dVar38;
        auVar47._8_8_ = auVar52._0_8_ * dVar38 - auVar26._8_8_ * auVar39._0_8_;
        auVar27._8_4_ = SUB84(auVar52._8_8_,0);
        auVar27._0_8_ = auVar52._0_8_;
        auVar27._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
        auVar44._0_8_ = auVar32._0_8_ * auVar39._0_8_ - auVar52._0_8_ * auVar36._0_8_;
        auVar44._8_8_ = auVar32._8_8_ * auVar39._8_8_ - auVar27._8_8_ * auVar36._8_8_;
        auVar32 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
        lVar21 = -(ulonglong)
                  ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar32._4_4_,
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar32._0_4_) <=
                  (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                        *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
        lVar22 = -(ulonglong)
                  (auVar40._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
        lVar23 = -(ulonglong)
                  (auVar40._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
        auVar28._8_4_ = SUB84(auVar47._8_8_,0);
        auVar28._0_8_ = auVar47._0_8_;
        auVar28._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
        auVar41._0_8_ =
             (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar36._4_4_,
                              ~(uint)lVar22 & auVar36._0_4_);
        auVar41._8_4_ = ~(uint)lVar23 & auVar36._8_4_;
        auVar41._12_4_ = ~(uint)((ulonglong)lVar23 >> 0x20) & auVar36._12_4_;
        auVar36._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
        auVar36._0_8_ = auVar32._0_8_;
        auVar36._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
        auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar36);
        auVar36 = blendpd(auVar47,auVar44,2);
        local_138.Translation.XY.m128d_f64[0] =
             auVar41._0_8_ * (dVar7 * auVar39._8_8_ + dVar9 + auVar28._8_8_);
        local_138.Translation.XY.m128d_f64[1] =
             auVar41._8_8_ * (dVar8 * auVar39._8_8_ + dVar10 + auVar44._0_8_);
        dVar10 = *(double *)(lVar14 + 0x200);
        dVar37 = *(double *)(lVar14 + 0x208);
        dVar38 = *(double *)(lVar14 + 0x1f0);
        dVar11 = *(double *)(lVar14 + 0x1f8);
        dVar8 = (param_1->Rotation).XY.m128d_f64[0] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar9 = (param_1->Rotation).XY.m128d_f64[1] *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar42 = (param_1->Rotation).ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar45 = (param_1->Rotation).ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_138.Translation.ZW.m128d_f64[0] =
             (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar32._4_4_,
                              ~(uint)lVar21 & auVar32._0_4_) *
             (auVar52._0_8_ * auVar39._8_8_ + dVar24 + auVar36._0_8_);
        local_138.Translation.ZW.m128d_f64[1] = 0.0;
        auVar34._8_4_ = SUB84(dVar9,0);
        auVar34._0_8_ = dVar9;
        auVar34._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        auVar29._8_4_ = SUB84(dVar45,0);
        auVar29._0_8_ = dVar45;
        auVar29._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        auVar30._8_4_ = SUB84(dVar42,0);
        auVar30._0_8_ = dVar42;
        auVar30._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        dVar7 = dVar10 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar29._8_8_ * dVar11 +
                auVar34._8_8_ * dVar37 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar30._8_8_ * dVar38 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_138.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar7,0);
        local_138.Rotation.XY.m128d_f64[0] =
             dVar37 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar45 * dVar38 +
             dVar9 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar42 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_138.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_138.Rotation.ZW.m128d_f64[0] =
             dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar45 * dVar10 +
             dVar9 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar42 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_138.Rotation.ZW.m128d_f64[1] =
             dVar8 * dVar38 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar45 * dVar37 +
             dVar9 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar42 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_138.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
        local_138.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
        local_138.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
        ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget(this_00,&local_138);
        if ((*(byte *)((longlong)plVar16 + 0x14) & 2) != 0) {
          *(byte *)((longlong)plVar16 + 0x14) = *(byte *)((longlong)plVar16 + 0x14) & 0xfd;
          ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform(this_00,&local_138);
        }
      }
      TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
    }
  }
  FMemScope::~FMemScope(&local_1d8);
  FLLMScope::~FLLMScope(&local_1e4);
  return;
}

// operator() @ 1504ebf10

bool __thiscall
`FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread'::__l98::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8095936378556121739>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8095936378556121739>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504ec010

bool __thiscall
`FAnimNode_RigidBody::EvaluateSkeletalControl_AnyThread'::__l217::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8095936378556122000>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8095936378556122000>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

