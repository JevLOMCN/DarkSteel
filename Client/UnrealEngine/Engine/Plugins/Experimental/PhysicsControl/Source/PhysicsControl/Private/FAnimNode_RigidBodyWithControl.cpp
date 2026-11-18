// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 72

// StaticStruct @ 14d9b0670

UScriptStruct * __cdecl FAnimNode_RigidBodyWithControl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl,(UObject *)pUVar1,
                         L"AnimNode_RigidBodyWithControl");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton;
}

// FAnimNode_RigidBodyWithControl @ 14d9be2f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimNode_RigidBodyWithControl * __thiscall
FAnimNode_RigidBodyWithControl::FAnimNode_RigidBodyWithControl(FAnimNode_RigidBodyWithControl *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
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
  undefined1 auVar35 [16];
  undefined8 uVar36;
  void *pvVar37;
  FName *pFVar38;
  ulonglong uVar39;
  FName local_res8;
  TStatId local_res10;
  
  fVar4 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 2;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined2 *)&this->_padding_ = 0x100;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  FAlphaBlend::FAlphaBlend((FAlphaBlend *)&this->_padding_,fVar4);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_RigidBodyWithControl__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x41200000;
  this->_padding_ = 0x41200000;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->OverridePhysicsAsset).field0_0x0.DebugPtr = (UPhysicsAsset *)0x0;
  this->bDefaultToSkeletalMeshPhysicsAsset = true;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64 = auVar7;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar5,0);
  auVar9._0_8_ = (double)fVar4;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64 = auVar9;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar5,0);
  auVar11._0_8_ = (double)fVar4;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 = auVar11;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar12._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.XY.m128d_f64 = auVar12;
  auVar13._8_4_ = SUB84((double)fVar5,0);
  auVar13._0_8_ = (double)fVar4;
  auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Rotation.ZW.m128d_f64 = auVar13;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar14._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar14._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar14._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.XY.m128d_f64 = auVar14;
  auVar15._8_4_ = SUB84((double)fVar5,0);
  auVar15._0_8_ = (double)fVar4;
  auVar15._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Translation.ZW.m128d_f64 = auVar15;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar16._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar16._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar16._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.XY.m128d_f64 = auVar16;
  auVar17._8_4_ = SUB84((double)fVar5,0);
  auVar17._0_8_ = (double)fVar4;
  auVar17._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentTransform).Scale3D.ZW.m128d_f64 = auVar17;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar18._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar18._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar18._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.XY.m128d_f64 = auVar18;
  auVar19._8_4_ = SUB84((double)fVar5,0);
  auVar19._0_8_ = (double)fVar4;
  auVar19._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Rotation.ZW.m128d_f64 = auVar19;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar20._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar20._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar20._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.XY.m128d_f64 = auVar20;
  auVar21._8_4_ = SUB84((double)fVar5,0);
  auVar21._0_8_ = (double)fVar4;
  auVar21._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Translation.ZW.m128d_f64 = auVar21;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar22._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar22._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar22._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.XY.m128d_f64 = auVar22;
  auVar23._8_4_ = SUB84((double)fVar5,0);
  auVar23._0_8_ = (double)fVar4;
  auVar23._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.ZW.m128d_f64 = auVar23;
  this->PhysicsAssetToUse = (UPhysicsAsset *)0x0;
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
  FSimSpaceSettings::FSimSpaceSettings(&this->SimSpaceSettings);
  this->CachedBoundsScale = 1.2;
  this->bUpdateCacheEveryFrame = true;
  (this->BaseBoneRef).BoneName.ComparisonIndex = 0;
  (this->BaseBoneRef).BoneName.Number = 0;
  puVar1 = &(this->BaseBoneRef).field_0x8;
  (this->BaseBoneRef).BoneIndex = -1;
  (this->BaseBoneRef).bUseSkeletonIndex = 0;
  (this->BaseBoneRef).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  this->bEnableWorldGeometry = '\0';
  this->bFreezeIncomingPoseOnStart = '\0';
  this->bTransferBoneVelocities = '\0';
  this->bOverrideWorldGravity = '\0';
  this->OverlapChannel = '\0';
  this->SimulationSpace = ComponentSpace;
  puVar2 = &this->field_0x302;
  this->bCalculateVelocitiesForWorldGeometry = '\x01';
  this->bMakeKinematicConstraints = '\x01';
  this->bUseExternalClothCollision = '\0';
  this->bForceDisableCollisionBetweenConstraintBodies = '\0';
  this->ResetSimulatedTeleportType = None;
  this->PhysicsAssetConditioningConstraintPosition = None;
  this->PhysicsAssetConditioningConstraintOrientation = None;
  this->WorldSpaceMinimumScale = 0.01;
  this->EvaluationResetTime = 0.01;
  this->bEnableControls = false;
  (this->PhysicsControlAsset).field0_0x0.DebugPtr = (UPhysicsControlAsset *)0x0;
  *(undefined8 *)&this->BoneToBodyNameMap = 0;
  *(undefined8 *)&(this->BoneToBodyNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->BoneToBodyNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->BoneToBodyNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x48 = 0;
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData(&this->CharacterSetupData);
  this->bEnableCharacterSetupData = true;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Controls = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x48 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x8 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x20 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x28 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x2c = 0x80;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x34 = 0;
  *(undefined8 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x40 = 0;
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x48 = 0;
  (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ControlSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ControlSetUpdates.ArrayMax = 0;
  (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayNum = 0;
  (this->AdditionalSets).ModifierSetUpdates.ArrayMax = 0;
  (this->InitialControlAndBodyModifierUpdates).ControlParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InitialControlAndBodyModifierUpdates).ControlParameters.ArrayNum = 0;
  (this->InitialControlAndBodyModifierUpdates).ControlParameters.ArrayMax = 0;
  (this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters.ArrayNum = 0;
  (this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters.ArrayMax = 0;
  (this->InitialControlAndBodyModifierUpdates).ModifierParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->InitialControlAndBodyModifierUpdates).ModifierParameters.ArrayNum = 0;
  (this->InitialControlAndBodyModifierUpdates).ModifierParameters.ArrayMax = 0;
  (this->ControlAndModifierParameters).ControlParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierParameters).ControlParameters.ArrayNum = 0;
  (this->ControlAndModifierParameters).ControlParameters.ArrayMax = 0;
  (this->ControlAndModifierParameters).ControlMultiplierParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierParameters).ControlMultiplierParameters.ArrayNum = 0;
  (this->ControlAndModifierParameters).ControlMultiplierParameters.ArrayMax = 0;
  (this->ControlAndModifierParameters).ModifierParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierParameters).ModifierParameters.ArrayNum = 0;
  (this->ControlAndModifierParameters).ModifierParameters.ArrayMax = 0;
  (this->ControlAndModifierUpdates).ControlUpdates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierUpdates).ControlUpdates.ArrayNum = 0;
  (this->ControlAndModifierUpdates).ControlUpdates.ArrayMax = 0;
  (this->ControlAndModifierUpdates).ControlMultiplierUpdates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierUpdates).ControlMultiplierUpdates.ArrayNum = 0;
  (this->ControlAndModifierUpdates).ControlMultiplierUpdates.ArrayMax = 0;
  (this->ControlAndModifierUpdates).ModifierUpdates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlAndModifierUpdates).ModifierUpdates.ArrayNum = 0;
  (this->ControlAndModifierUpdates).ModifierUpdates.ArrayMax = 0;
  *(undefined8 *)&(this->ControlTargets).Targets = 0;
  *(undefined8 *)&(this->ControlTargets).Targets.field_0x8 = 0;
  *(undefined8 *)&(this->ControlTargets).Targets.field_0x20 = 0;
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x28 = 0;
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x34 = 0;
  *(undefined8 *)&(this->ControlTargets).Targets.field_0x40 = 0;
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x48 = 0;
  *(undefined8 *)&(this->KinematicTargets).Targets = 0;
  *(undefined8 *)&(this->KinematicTargets).Targets.field_0x8 = 0;
  *(undefined8 *)&(this->KinematicTargets).Targets.field_0x20 = 0;
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x28 = 0;
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x2c = 0x80;
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x34 = 0;
  *(undefined8 *)&(this->KinematicTargets).Targets.field_0x40 = 0;
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x48 = 0;
  this->bEnabled = '\0';
  this->bHaveSetupControls = '\0';
  this->bCheckForBodyTransformInit = '\0';
  this->bSimulationStarted = '\0';
  (this->PhysicsAssetAuthoredSkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  (this->ConstraintProfile).ComparisonIndex = 0;
  (this->ConstraintProfile).Number = 0;
  (this->ControlProfile).ComparisonIndex = 0;
  (this->ControlProfile).Number = 0;
  this->SimulationTiming = Synchronous;
  this->WorldTimeSeconds = 0.0;
  this->LastEvalTimeSeconds = 0.0;
  this->AccumulatedDeltaTime = 0.0;
  this->AnimPhysicsMinDeltaTime = 0.0;
  this->bSimulateAnimPhysicsAfterReset = false;
  (this->SkelMeshCompWeakPtr).WeakPtr = (FWeakObjectPtr)0x0;
  this->Simulation = (FSimulation *)0x0;
  FPhysicsAssetSolverSettings::FPhysicsAssetSolverSettings(&this->SolverSettings);
  FSolverIterations::FSolverIterations(&this->SolverIterations);
  (this->SimulationTask).Pimpl.Reference = (FTaskBase *)0x0;
  *(undefined8 *)&this->BodyNameToIndexMap = 0;
  *(undefined8 *)&(this->BodyNameToIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->BodyNameToIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->BodyNameToIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x48 = 0;
  (this->OutputBoneData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputBoneData).ArrayNum = 0;
  (this->OutputBoneData).ArrayMax = 0;
  (this->Bodies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bodies).ArrayNum = 0;
  (this->Bodies).ArrayMax = 0;
  (this->Joints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Joints).ArrayNum = 0;
  (this->Joints).ArrayMax = 0;
  (this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
  (this->SkeletonBoneIndexToBodyIndex).ArrayMax = 0;
  (this->BodyAnimData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BodyAnimData).ArrayNum = 0;
  (this->BodyAnimData).ArrayMax = 0;
  (this->PoseData).BoneTMs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PoseData).BoneTMs.ArrayNum = 0;
  (this->PoseData).BoneTMs.ArrayMax = 0;
  (this->PoseData).UpdateCounter.LastSyncronizedFrame = 0xffffffffffffffff;
  (this->PoseData).UpdateCounter.Counter = -1;
  (this->PoseData).UpdateCounter.SkipFrames = 0;
  (this->PoseData).ExpectedUpdateCounter.LastSyncronizedFrame = 0xffffffffffffffff;
  (this->PoseData).ExpectedUpdateCounter.Counter = -1;
  (this->PoseData).ExpectedUpdateCounter.SkipFrames = 0;
  *(undefined8 *)&this->ControlRecords = 0;
  *(undefined8 *)&(this->ControlRecords).field_0x8 = 0;
  *(undefined8 *)&(this->ControlRecords).field_0x20 = 0;
  *(undefined4 *)&(this->ControlRecords).field_0x28 = 0;
  *(undefined4 *)&(this->ControlRecords).field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlRecords).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlRecords).field_0x34 = 0;
  *(undefined8 *)&(this->ControlRecords).field_0x40 = 0;
  *(undefined4 *)&(this->ControlRecords).field_0x48 = 0;
  *(undefined8 *)&this->ModifierRecords = 0;
  *(undefined8 *)&(this->ModifierRecords).field_0x8 = 0;
  *(undefined8 *)&(this->ModifierRecords).field_0x20 = 0;
  *(undefined4 *)&(this->ModifierRecords).field_0x28 = 0;
  *(undefined4 *)&(this->ModifierRecords).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModifierRecords).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModifierRecords).field_0x34 = 0;
  *(undefined8 *)&(this->ModifierRecords).field_0x40 = 0;
  *(undefined4 *)&(this->ModifierRecords).field_0x48 = 0;
  *(undefined8 *)&(this->NameRecords).ControlSets = 0;
  *(undefined8 *)&(this->NameRecords).ControlSets.field_0x8 = 0;
  *(undefined8 *)&(this->NameRecords).ControlSets.field_0x20 = 0;
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x28 = 0;
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x34 = 0;
  *(undefined8 *)&(this->NameRecords).ControlSets.field_0x40 = 0;
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x48 = 0;
  *(undefined8 *)&(this->NameRecords).BodyModifierSets = 0;
  *(undefined8 *)&(this->NameRecords).BodyModifierSets.field_0x8 = 0;
  *(undefined8 *)&(this->NameRecords).BodyModifierSets.field_0x20 = 0;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x28 = 0;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x34 = 0;
  *(undefined8 *)&(this->NameRecords).BodyModifierSets.field_0x40 = 0;
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x48 = 0;
  (this->CurrentConstraintProfile).ComparisonIndex = 0;
  (this->CurrentConstraintProfile).Number = 0;
  (this->CurrentControlProfile).ComparisonIndex = 0;
  (this->CurrentControlProfile).Number = 0;
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
  (this->PerSolverField).ExecutionDatas.IndexResults[0].ArrayMax = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayNum = 0;
  (this->PerSolverField).ExecutionDatas.IndexResults[1].ArrayMax = 0;
  (this->PerSolverField).TransientCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSolverField).TransientCommands.ArrayNum = 0;
  (this->PerSolverField).TransientCommands.ArrayMax = 0;
  (this->PerSolverField).PersistentCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerSolverField).PersistentCommands.ArrayNum = 0;
  (this->PerSolverField).PersistentCommands.ArrayMax = 0;
  (this->ClothColliders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClothColliders).ArrayNum = 0;
  (this->ClothColliders).ArrayMax = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x10 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x18 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x38 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x48 = 0;
  *(undefined8 *)&this->ComponentsInSim = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentsInSim).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentsInSim).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentsInSim).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentsInSim).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComponentsInSim).field_0x34 = 0;
  pvVar37 = ThreadLocalStoragePointer;
  uVar39 = (ulonglong)_tls_index;
  *(undefined8 *)&(this->ComponentsInSim).field_0x40 = 0;
  this->ComponentsInSimTick = 0;
  this->TotalMass = 0.0;
  lVar3 = *(longlong *)((longlong)pvVar37 + uVar39 * 8);
  (this->WorldSpaceGravity).field0_0x0._s_0.X = 0.0;
  (this->WorldSpaceGravity).field0_0x0._s_0.Y = 0.0;
  (this->WorldSpaceGravity).field0_0x0._s_0.Z = 0.0;
  uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedBounds).Center.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedBounds).Center.field0_0x0._s_0.Y = (double)uVar36;
  (this->CachedBounds).Center.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CachedBounds).W = 0.0;
  if ((*(int *)(lVar3 + 0x9d4c) <
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
    pFVar38 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                ::__l2::StatPtr_UnknownSceneQuery,*pFVar38,L"UnknownSceneQuery",
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
    pFVar38 = ::FName::FName(&local_res8,"UnknownSceneQuery");
    local_res10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)
                    &`public:_static_struct_TStatId___cdecl_FCollisionQueryParams::GetUnknownStatId(void)'
                     ::__l2::StatPtr_UnknownSceneQuery,*pFVar38,L"UnknownSceneQuery",
                    "STATGROUP_Collision","STATCAT_Advanced",L"Collision",true,true,ST_int64,true,
                    false,MCR_Invalid);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FCollisionQueryParams::FCollisionQueryParams
            (&this->QueryParams,(FName)0x0,&local_res10,false,(AActor *)0x0);
  this->UnsafeWorld = (UWorld *)0x0;
  this->UnsafeOwner = (AActor *)0x0;
  this->SkeletalMeshAtLastPhysicsInit = (USkeletalMesh *)0x0;
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
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar24._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar24._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar24._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64 = auVar24;
  auVar25._8_4_ = SUB84((double)fVar5,0);
  auVar25._0_8_ = (double)fVar4;
  auVar25._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64 = auVar25;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar26._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar26._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar26._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64 = auVar26;
  auVar27._8_4_ = SUB84((double)fVar5,0);
  auVar27._0_8_ = (double)fVar4;
  auVar27._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 = auVar27;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64 = auVar28;
  auVar29._8_4_ = SUB84((double)fVar5,0);
  auVar29._0_8_ = (double)fVar4;
  auVar29._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64 = auVar29;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar30._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar30._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar30._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64 =
       auVar30;
  auVar31._8_4_ = SUB84((double)fVar5,0);
  auVar31._0_8_ = (double)fVar4;
  auVar31._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64 =
       auVar31;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar32._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar32._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar32._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64 =
       auVar32;
  auVar33._8_4_ = SUB84((double)fVar5,0);
  auVar33._0_8_ = (double)fVar4;
  auVar33._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64 =
       auVar33;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar34._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar34._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar34._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64 =
       auVar34;
  auVar35._8_4_ = SUB84((double)fVar5,0);
  auVar35._0_8_ = (double)fVar4;
  auVar35._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])(this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64 =
       auVar35;
  return this;
}

// ~FAnimNode_RigidBodyWithControl @ 14d9c0e70

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
FAnimNode_RigidBodyWithControl::~FAnimNode_RigidBodyWithControl
          (FAnimNode_RigidBodyWithControl *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  ForElementType<unsigned_int> FVar5;
  FTaskBase *pFVar6;
  
  this->_padding_ = (longlong)&___7FAnimNode_RigidBodyWithControl__6B_;
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
  TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  *(undefined4 *)&(this->NameRecords).BodyModifierSets.field_0x48 = 0;
  pvVar4 = *(void **)&(this->NameRecords).BodyModifierSets.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NameRecords).BodyModifierSets);
  *(undefined4 *)&(this->NameRecords).ControlSets.field_0x48 = 0;
  pvVar4 = *(void **)&(this->NameRecords).ControlSets.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameRecords);
  *(undefined4 *)&(this->ModifierRecords).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ModifierRecords).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ModifierRecords);
  *(undefined4 *)&(this->ControlRecords).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ControlRecords).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlRecords);
  pFVar3 = (this->PoseData).BoneTMs.AllocatorInstance.Data;
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
  pFVar3 = (this->Joints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Bodies).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<UE::PhysicsControl::FOutputBoneData,int>
            ((FOutputBoneData *)(this->OutputBoneData).AllocatorInstance.Data,
             (this->OutputBoneData).ArrayNum);
  pFVar3 = (this->OutputBoneData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->BodyNameToIndexMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BodyNameToIndexMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BodyNameToIndexMap);
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
  *(undefined4 *)&(this->KinematicTargets).Targets.field_0x48 = 0;
  pvVar4 = *(void **)&(this->KinematicTargets).Targets.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KinematicTargets);
  *(undefined4 *)&(this->ControlTargets).Targets.field_0x48 = 0;
  pvVar4 = *(void **)&(this->ControlTargets).Targets.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ControlTargets);
  pFVar3 = (this->ControlAndModifierUpdates).ModifierUpdates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ControlAndModifierUpdates).ControlMultiplierUpdates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ControlAndModifierUpdates).ControlUpdates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ControlAndModifierParameters).ModifierParameters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ControlAndModifierParameters).ControlMultiplierParameters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ControlAndModifierParameters).ControlParameters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InitialControlAndBodyModifierUpdates).ModifierParameters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters.
           AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->InitialControlAndBodyModifierUpdates).ControlParameters.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ModifierSetUpdates.ArrayNum);
  pFVar3 = (this->AdditionalSets).ModifierSetUpdates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FPhysicsControlSetUpdate,int>
            ((FPhysicsControlSetUpdate *)
             (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data,
             (this->AdditionalSets).ControlSetUpdates.ArrayNum);
  pFVar3 = (this->AdditionalSets).ControlSetUpdates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x48 = 0;
  pvVar4 = *(void **)&(this->AdditionalControlsAndBodyModifiers).Modifiers.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->AdditionalControlsAndBodyModifiers).Modifiers);
  *(undefined4 *)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x48 = 0;
  pvVar4 = *(void **)&(this->AdditionalControlsAndBodyModifiers).Controls.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AdditionalControlsAndBodyModifiers);
  pFVar3 = (this->CharacterSetupData).LimbSetupData.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->BoneToBodyNameMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BoneToBodyNameMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BoneToBodyNameMap);
  this->_padding_ = (longlong)&___7FAnimNode_SkeletalControlBase__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14d9c2040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAnimNode_RigidBodyWithControl * __thiscall
FAnimNode_RigidBodyWithControl::operator=
          (FAnimNode_RigidBodyWithControl *this,FAnimNode_RigidBodyWithControl *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  atomic<unsigned_int> *paVar4;
  longlong *plVar5;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_00;
  TMap<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_> *this_01;
  TArray<UE::PhysicsControl::FOutputBoneData,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<ImmediatePhysics_Chaos::FJointHandle_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FAnimNode_RigidBodyWithControl::FBodyAnimData,TSizedDefaultAllocator<32>_> *pTVar9;
  FRigidBodyPoseData *pFVar10;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *this_02;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *this_03;
  TArray<FAnimNode_RigidBodyWithControl::FClothCollider,TSizedDefaultAllocator<32>_> *pTVar11;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *this_04;
  FBlendedHeapCurve *pFVar12;
  atomic<unsigned_int> aVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  void *pvVar18;
  UPhysicsAsset *pUVar19;
  UPhysicsControlAsset *pUVar20;
  USkeletalMesh *pUVar21;
  FTaskBase *pFVar22;
  FTaskBase *pFVar23;
  FOutputBoneData *pFVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  longlong lVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  bool bVar32;
  undefined2 uVar33;
  short sVar34;
  short sVar35;
  byte bVar36;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar37;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_05;
  
  this->_padding_ = param_1->_padding_;
  lVar27 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar27;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  plVar5 = &this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  lVar27 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar27;
  lVar27 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar27;
  lVar27 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar27;
  if (plVar5 != &param_1->_padding_) {
    iVar17 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pvVar18 = (void *)param_1->_padding_;
    iVar14 = *piVar1;
    *(int *)&this->_padding_ = iVar17;
    if ((iVar17 == 0) && (iVar14 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,iVar17,iVar14,(ForAnyElementType *)plVar5,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((void *)*plVar5,pvVar18,(longlong)iVar17 * 0x70);
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 = (param_1->OverridePhysicsAsset).field0_0x0.DebugPtr, pUVar19 != (UPhysicsAsset *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->OverridePhysicsAsset).field0_0x0 = (param_1->OverridePhysicsAsset).field0_0x0;
  this->bDefaultToSkeletalMeshPhysicsAsset = param_1->bDefaultToSkeletalMeshPhysicsAsset;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0];
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Rotation.XY.m128d_f64[1];
  (this->CurrentTransform).Rotation.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Rotation.XY.m128d_f64[0];
  (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Rotation.ZW.m128d_f64[1];
  (this->CurrentTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Rotation.ZW.m128d_f64[0];
  (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Translation.XY.m128d_f64[1];
  (this->CurrentTransform).Translation.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Translation.XY.m128d_f64[0];
  (this->CurrentTransform).Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Translation.ZW.m128d_f64[1];
  (this->CurrentTransform).Translation.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Translation.ZW.m128d_f64[0];
  (this->CurrentTransform).Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Scale3D.XY.m128d_f64[1];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->CurrentTransform).Scale3D.XY.m128d_f64[0];
  (this->CurrentTransform).Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->CurrentTransform).Scale3D.ZW.m128d_f64[1];
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->CurrentTransform).Scale3D.ZW.m128d_f64[0];
  (this->CurrentTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Translation.XY.m128d_f64[1];
  (this->PreviousTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Translation.XY.m128d_f64[0];
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
  this->PhysicsAssetToUse = param_1->PhysicsAssetToUse;
  dVar28 = (param_1->OverrideWorldGravity).field0_0x0._s_0.Y;
  (this->OverrideWorldGravity).field0_0x0._s_0.X = (param_1->OverrideWorldGravity).field0_0x0._s_0.X
  ;
  (this->OverrideWorldGravity).field0_0x0._s_0.Y = dVar28;
  (this->OverrideWorldGravity).field0_0x0._s_0.Z = (param_1->OverrideWorldGravity).field0_0x0._s_0.Z
  ;
  dVar28 = (param_1->ExternalForce).field0_0x0._s_0.Y;
  (this->ExternalForce).field0_0x0._s_0.X = (param_1->ExternalForce).field0_0x0._s_0.X;
  (this->ExternalForce).field0_0x0._s_0.Y = dVar28;
  (this->ExternalForce).field0_0x0._s_0.Z = (param_1->ExternalForce).field0_0x0._s_0.Z;
  dVar28 = (param_1->ComponentLinearAccScale).field0_0x0._s_0.Y;
  (this->ComponentLinearAccScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.X;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Y = dVar28;
  (this->ComponentLinearAccScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearAccScale).field0_0x0._s_0.Z;
  dVar28 = (param_1->ComponentLinearVelScale).field0_0x0._s_0.Y;
  (this->ComponentLinearVelScale).field0_0x0._s_0.X =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.X;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Y = dVar28;
  (this->ComponentLinearVelScale).field0_0x0._s_0.Z =
       (param_1->ComponentLinearVelScale).field0_0x0._s_0.Z;
  dVar28 = (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y = dVar28;
  (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z =
       (param_1->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
  fVar29 = (param_1->SimSpaceSettings).VelocityScaleZ;
  fVar30 = (param_1->SimSpaceSettings).DampingAlpha;
  fVar31 = (param_1->SimSpaceSettings).MaxLinearVelocity;
  (this->SimSpaceSettings).WorldAlpha = (param_1->SimSpaceSettings).WorldAlpha;
  (this->SimSpaceSettings).VelocityScaleZ = fVar29;
  (this->SimSpaceSettings).DampingAlpha = fVar30;
  (this->SimSpaceSettings).MaxLinearVelocity = fVar31;
  fVar29 = (param_1->SimSpaceSettings).MaxLinearAcceleration;
  fVar30 = (param_1->SimSpaceSettings).MaxAngularAcceleration;
  uVar15 = *(undefined4 *)&(param_1->SimSpaceSettings).field_0x1c;
  (this->SimSpaceSettings).MaxAngularVelocity = (param_1->SimSpaceSettings).MaxAngularVelocity;
  (this->SimSpaceSettings).MaxLinearAcceleration = fVar29;
  (this->SimSpaceSettings).MaxAngularAcceleration = fVar30;
  *(undefined4 *)&(this->SimSpaceSettings).field_0x1c = uVar15;
  dVar28 = (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X =
       (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Y = dVar28;
  dVar28 = (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z =
       (param_1->SimSpaceSettings).ExternalLinearDragV.field0_0x0._s_0.Z;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.X = dVar28;
  dVar28 = (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y =
       (param_1->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalLinearVelocity.field0_0x0._s_0.Z = dVar28;
  dVar28 = (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.X;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Y = dVar28;
  (this->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z =
       (param_1->SimSpaceSettings).ExternalAngularVelocity.field0_0x0._s_0.Z;
  this->CachedBoundsScale = param_1->CachedBoundsScale;
  this->bUpdateCacheEveryFrame = param_1->bUpdateCacheEveryFrame;
  (this->BaseBoneRef).BoneName = (param_1->BaseBoneRef).BoneName;
  uVar15 = *(undefined4 *)&(param_1->BaseBoneRef).field_0x8;
  *(uint *)&(this->BaseBoneRef).field_0x8 =
       (uVar15 ^ *(uint *)&(this->BaseBoneRef).field_0x8) & 0x80000000 ^ uVar15;
  uVar16 = *(undefined4 *)&(param_1->BaseBoneRef).field_0x8;
  *(uint *)&(this->BaseBoneRef).field_0x8 =
       (SPULL(uVar15,0,0x1f) ^ SPULL(uVar16,0,0x1f)) & 0x7fffffffU ^ uVar16;
  (this->BaseBoneRef).CachedCompactPoseIndex = (param_1->BaseBoneRef).CachedCompactPoseIndex;
  (this->OverlapChannel).Value = (param_1->OverlapChannel).Value;
  this->SimulationSpace = param_1->SimulationSpace;
  bVar36 = (this->bCalculateVelocitiesForWorldGeometry ^
           param_1->bCalculateVelocitiesForWorldGeometry) & 1 ^ this->field_0x302;
  this->field_0x302 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x302) & 2 ^ bVar36;
  this->field_0x302 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x302) & 4 ^ bVar36;
  this->field_0x302 = bVar36;
  this->field_0x302 = (bVar36 ^ param_1->field_0x302) & 8 ^ bVar36;
  this->ResetSimulatedTeleportType = param_1->ResetSimulatedTeleportType;
  bVar36 = (this->bEnableWorldGeometry ^ param_1->bEnableWorldGeometry) & 1 ^ this->field_0x304;
  this->field_0x304 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x304) & 2 ^ bVar36;
  this->field_0x304 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x304) & 4 ^ bVar36;
  this->field_0x304 = bVar36;
  this->field_0x304 = (bVar36 ^ param_1->field_0x304) & 8 ^ bVar36;
  this->PhysicsAssetConditioningConstraintPosition =
       param_1->PhysicsAssetConditioningConstraintPosition;
  this->PhysicsAssetConditioningConstraintOrientation =
       param_1->PhysicsAssetConditioningConstraintOrientation;
  this->WorldSpaceMinimumScale = param_1->WorldSpaceMinimumScale;
  this->EvaluationResetTime = param_1->EvaluationResetTime;
  this->bEnableControls = param_1->bEnableControls;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 = (param_1->PhysicsControlAsset).field0_0x0.DebugPtr,
     pUVar20 != (UPhysicsControlAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  this_00 = &this->BoneToBodyNameMap;
  (this->PhysicsControlAsset).field0_0x0 = (param_1->PhysicsControlAsset).field0_0x0;
  if (this_00 != &param_1->BoneToBodyNameMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BoneToBodyNameMap).field_0x38,
               (int *)&(this->BoneToBodyNameMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->BoneToBodyNameMap).field_0x38,
               *(int *)&(param_1->BoneToBodyNameMap).field_0x48);
    iVar17 = *(int *)&(param_1->BoneToBodyNameMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,iVar17,(ForAnyElementType *)this_00,
               (int *)&(this->BoneToBodyNameMap).field_0x8,
               (int *)&(this->BoneToBodyNameMap).field_0xc);
    puVar2 = &(param_1->BoneToBodyNameMap).field_0x10;
    puVar3 = &(this->BoneToBodyNameMap).field_0x10;
    *(undefined4 *)&(this->BoneToBodyNameMap).field_0x30 =
         *(undefined4 *)&(param_1->BoneToBodyNameMap).field_0x30;
    *(undefined4 *)&(this->BoneToBodyNameMap).field_0x34 =
         *(undefined4 *)&(param_1->BoneToBodyNameMap).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar17 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->BoneToBodyNameMap,(longlong)iVar17 * 0x18);
    }
  }
  FPhysicsControlCharacterSetupData::operator=
            (&this->CharacterSetupData,&param_1->CharacterSetupData);
  this->bEnableCharacterSetupData = param_1->bEnableCharacterSetupData;
  TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
               *)&this->AdditionalControlsAndBodyModifiers,
              (TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
               *)&param_1->AdditionalControlsAndBodyModifiers);
  TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
               *)&(this->AdditionalControlsAndBodyModifiers).Modifiers,
              (TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
               *)&(param_1->AdditionalControlsAndBodyModifiers).Modifiers);
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::operator=
            (&(this->AdditionalSets).ControlSetUpdates,&(param_1->AdditionalSets).ControlSetUpdates)
  ;
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::operator=
            (&(this->AdditionalSets).ModifierSetUpdates,
             &(param_1->AdditionalSets).ModifierSetUpdates);
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->InitialControlAndBodyModifierUpdates).ControlParameters,
             &(param_1->InitialControlAndBodyModifierUpdates).ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters,
             &(param_1->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->InitialControlAndBodyModifierUpdates).ModifierParameters,
             &(param_1->InitialControlAndBodyModifierUpdates).ModifierParameters);
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierParameters).ControlParameters,
             &(param_1->ControlAndModifierParameters).ControlParameters);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierParameters).ControlMultiplierParameters,
             &(param_1->ControlAndModifierParameters).ControlMultiplierParameters);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierParameters).ModifierParameters,
             &(param_1->ControlAndModifierParameters).ModifierParameters);
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierUpdates).ControlUpdates,
             &(param_1->ControlAndModifierUpdates).ControlUpdates);
  TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierUpdates).ControlMultiplierUpdates,
             &(param_1->ControlAndModifierUpdates).ControlMultiplierUpdates);
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>::operator=
            (&(this->ControlAndModifierUpdates).ModifierUpdates,
             &(param_1->ControlAndModifierUpdates).ModifierUpdates);
  FRigidBodyControlTargets::operator=(&this->ControlTargets,&param_1->ControlTargets);
  FRigidBodyKinematicTargets::operator=(&this->KinematicTargets,&param_1->KinematicTargets);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 = (param_1->PhysicsAssetAuthoredSkeletalMesh).field0_0x0.DebugPtr,
     pUVar21 != (USkeletalMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->PhysicsAssetAuthoredSkeletalMesh).field0_0x0 =
       (param_1->PhysicsAssetAuthoredSkeletalMesh).field0_0x0;
  this->ConstraintProfile = param_1->ConstraintProfile;
  this->ControlProfile = param_1->ControlProfile;
  bVar36 = (this->bEnabled ^ param_1->bEnabled) & 1 ^ this->field_0x640;
  this->field_0x640 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x640) & 2 ^ bVar36;
  this->field_0x640 = bVar36;
  bVar36 = (bVar36 ^ param_1->field_0x640) & 4 ^ bVar36;
  this->field_0x640 = bVar36;
  this->field_0x640 = (bVar36 ^ param_1->field_0x640) & 8 ^ bVar36;
  this->SimulationTiming = param_1->SimulationTiming;
  this->WorldTimeSeconds = param_1->WorldTimeSeconds;
  this->LastEvalTimeSeconds = param_1->LastEvalTimeSeconds;
  this->AccumulatedDeltaTime = param_1->AccumulatedDeltaTime;
  this->AnimPhysicsMinDeltaTime = param_1->AnimPhysicsMinDeltaTime;
  this->bSimulateAnimPhysicsAfterReset = param_1->bSimulateAnimPhysicsAfterReset;
  (this->SkelMeshCompWeakPtr).WeakPtr = (param_1->SkelMeshCompWeakPtr).WeakPtr;
  this->Simulation = param_1->Simulation;
  iVar17 = (param_1->SolverSettings).VelocityIterations;
  iVar14 = (param_1->SolverSettings).ProjectionIterations;
  fVar29 = (param_1->SolverSettings).CullDistance;
  (this->SolverSettings).PositionIterations = (param_1->SolverSettings).PositionIterations;
  (this->SolverSettings).VelocityIterations = iVar17;
  (this->SolverSettings).ProjectionIterations = iVar14;
  (this->SolverSettings).CullDistance = fVar29;
  fVar29 = (param_1->SolverSettings).FixedTimeStep;
  (this->SolverSettings).MaxDepenetrationVelocity =
       (param_1->SolverSettings).MaxDepenetrationVelocity;
  (this->SolverSettings).FixedTimeStep = fVar29;
  bVar32 = (param_1->SolverSettings).bUseManifolds;
  uVar33 = *(undefined2 *)&(param_1->SolverSettings).field_0x1a;
  (this->SolverSettings).bUseLinearJointSolver = (param_1->SolverSettings).bUseLinearJointSolver;
  (this->SolverSettings).bUseManifolds = bVar32;
  *(undefined2 *)&(this->SolverSettings).field_0x1a = uVar33;
  iVar17 = (param_1->SolverIterations).JointIterations;
  iVar14 = (param_1->SolverIterations).CollisionIterations;
  iVar26 = (param_1->SolverIterations).SolverPushOutIterations;
  (this->SolverIterations).SolverIterations = (param_1->SolverIterations).SolverIterations;
  (this->SolverIterations).JointIterations = iVar17;
  (this->SolverIterations).CollisionIterations = iVar14;
  (this->SolverIterations).SolverPushOutIterations = iVar26;
  iVar17 = (param_1->SolverIterations).CollisionPushOutIterations;
  (this->SolverIterations).JointPushOutIterations =
       (param_1->SolverIterations).JointPushOutIterations;
  (this->SolverIterations).CollisionPushOutIterations = iVar17;
  pFVar22 = (param_1->SimulationTask).Pimpl.Reference;
  pFVar23 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar23 != pFVar22) {
    (this->SimulationTask).Pimpl.Reference = pFVar22;
    if (pFVar22 != (FTaskBase *)0x0) {
      LOCK();
      pFVar22->RefCount = (atomic<unsigned_int>)((int)pFVar22->RefCount + 1);
      UNLOCK();
    }
    if (pFVar23 != (FTaskBase *)0x0) {
      LOCK();
      paVar4 = &pFVar23->RefCount;
      aVar13 = *paVar4;
      *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar13 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar23->_padding_)(pFVar23,1);
      }
    }
  }
  this_01 = &this->BodyNameToIndexMap;
  if (this_01 != &param_1->BodyNameToIndexMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->BodyNameToIndexMap).field_0x38,
               (int *)&(this->BodyNameToIndexMap).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->BodyNameToIndexMap).field_0x38,
               *(int *)&(param_1->BodyNameToIndexMap).field_0x48);
    iVar17 = *(int *)&(param_1->BodyNameToIndexMap).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,iVar17,(ForAnyElementType *)this_01,
               (int *)&(this->BodyNameToIndexMap).field_0x8,
               (int *)&(this->BodyNameToIndexMap).field_0xc);
    puVar2 = &(param_1->BodyNameToIndexMap).field_0x10;
    puVar3 = &(this->BodyNameToIndexMap).field_0x10;
    *(undefined4 *)&(this->BodyNameToIndexMap).field_0x30 =
         *(undefined4 *)&(param_1->BodyNameToIndexMap).field_0x30;
    *(undefined4 *)&(this->BodyNameToIndexMap).field_0x34 =
         *(undefined4 *)&(param_1->BodyNameToIndexMap).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar17 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->BodyNameToIndexMap,(longlong)iVar17 * 0x14);
    }
  }
  pTVar6 = &this->OutputBoneData;
  this->WorldSpaceControlActorHandle = param_1->WorldSpaceControlActorHandle;
  if (pTVar6 != &param_1->OutputBoneData) {
    DestructItems<UE::PhysicsControl::FOutputBoneData,int>
              ((FOutputBoneData *)(pTVar6->AllocatorInstance).Data,(this->OutputBoneData).ArrayNum);
    iVar17 = (param_1->OutputBoneData).ArrayNum;
    piVar1 = &(this->OutputBoneData).ArrayMax;
    pFVar24 = (FOutputBoneData *)(param_1->OutputBoneData).AllocatorInstance.Data;
    (this->OutputBoneData).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar17,*piVar1,&pTVar6->AllocatorInstance,iVar17,piVar1);
      ConstructItems<UE::PhysicsControl::FOutputBoneData,UE::PhysicsControl::FOutputBoneData,int>
                ((pTVar6->AllocatorInstance).Data,pFVar24,iVar17);
    }
  }
  pTVar7 = &this->Bodies;
  if (pTVar7 != &param_1->Bodies) {
    iVar17 = (param_1->Bodies).ArrayNum;
    piVar1 = &(this->Bodies).ArrayMax;
    pFVar25 = (param_1->Bodies).AllocatorInstance.Data;
    (this->Bodies).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar7->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar7->AllocatorInstance).Data,pFVar25,(longlong)iVar17 << 3);
      }
    }
  }
  pTVar8 = &this->Joints;
  if (pTVar8 != &param_1->Joints) {
    iVar17 = (param_1->Joints).ArrayNum;
    piVar1 = &(this->Joints).ArrayMax;
    pFVar25 = (param_1->Joints).AllocatorInstance.Data;
    (this->Joints).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar17,*piVar1,&pTVar8->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar8->AllocatorInstance).Data,pFVar25,(longlong)iVar17 << 3);
      }
    }
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&this->SkeletonBoneIndexToBodyIndex,&param_1->SkeletonBoneIndexToBodyIndex);
  pTVar9 = &this->BodyAnimData;
  if (pTVar9 != &param_1->BodyAnimData) {
    iVar17 = (param_1->BodyAnimData).ArrayNum;
    piVar1 = &(this->BodyAnimData).ArrayMax;
    pFVar25 = (param_1->BodyAnimData).AllocatorInstance.Data;
    (this->BodyAnimData).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar17,*piVar1,&pTVar9->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar25,(longlong)iVar17 * 0x38);
      }
    }
  }
  pFVar10 = &this->PoseData;
  if (pFVar10 != &param_1->PoseData) {
    iVar17 = (param_1->PoseData).BoneTMs.ArrayNum;
    piVar1 = &(this->PoseData).BoneTMs.ArrayMax;
    pFVar25 = (param_1->PoseData).BoneTMs.AllocatorInstance.Data;
    iVar14 = *piVar1;
    (this->PoseData).BoneTMs.ArrayNum = iVar17;
    if ((iVar17 == 0) && (iVar14 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar17,iVar14,(ForAnyElementType *)pFVar10,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pFVar10->BoneTMs).AllocatorInstance.Data,pFVar25,(longlong)iVar17 << 6);
      }
    }
  }
  sVar34 = (param_1->PoseData).UpdateCounter.Counter;
  sVar35 = (param_1->PoseData).UpdateCounter.SkipFrames;
  uVar15 = *(undefined4 *)&(param_1->PoseData).UpdateCounter.field_0xc;
  (this->PoseData).UpdateCounter.LastSyncronizedFrame =
       (param_1->PoseData).UpdateCounter.LastSyncronizedFrame;
  (this->PoseData).UpdateCounter.Counter = sVar34;
  (this->PoseData).UpdateCounter.SkipFrames = sVar35;
  *(undefined4 *)&(this->PoseData).UpdateCounter.field_0xc = uVar15;
  sVar34 = (param_1->PoseData).ExpectedUpdateCounter.Counter;
  sVar35 = (param_1->PoseData).ExpectedUpdateCounter.SkipFrames;
  uVar15 = *(undefined4 *)&(param_1->PoseData).ExpectedUpdateCounter.field_0xc;
  (this->PoseData).ExpectedUpdateCounter.LastSyncronizedFrame =
       (param_1->PoseData).ExpectedUpdateCounter.LastSyncronizedFrame;
  (this->PoseData).ExpectedUpdateCounter.Counter = sVar34;
  (this->PoseData).ExpectedUpdateCounter.SkipFrames = sVar35;
  *(undefined4 *)&(this->PoseData).ExpectedUpdateCounter.field_0xc = uVar15;
  this_02 = &this->ControlRecords;
  if (this_02 != &param_1->ControlRecords) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ControlRecords).field_0x38,
               (int *)&(this->ControlRecords).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ControlRecords).field_0x38,
               *(int *)&(param_1->ControlRecords).field_0x48);
    iVar17 = *(int *)&(param_1->ControlRecords).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_02,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x240,0x10,iVar17,(ForAnyElementType *)this_02,
               (int *)&(this->ControlRecords).field_0x8,(int *)&(this->ControlRecords).field_0xc);
    puVar2 = &(param_1->ControlRecords).field_0x10;
    puVar3 = &(this->ControlRecords).field_0x10;
    *(undefined4 *)&(this->ControlRecords).field_0x30 =
         *(undefined4 *)&(param_1->ControlRecords).field_0x30;
    *(undefined4 *)&(this->ControlRecords).field_0x34 =
         *(undefined4 *)&(param_1->ControlRecords).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar17 != 0) {
      memcpy(*(void **)this_02,*(void **)&param_1->ControlRecords,(longlong)iVar17 * 0x240);
    }
  }
  this_03 = &this->ModifierRecords;
  if (this_03 != &param_1->ModifierRecords) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ModifierRecords).field_0x38,
               (int *)&(this->ModifierRecords).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ModifierRecords).field_0x38,
               *(int *)&(param_1->ModifierRecords).field_0x48);
    iVar17 = *(int *)&(param_1->ModifierRecords).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_03,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar17,(ForAnyElementType *)this_03,(int *)&(this->ModifierRecords).field_0x8,
               (int *)&(this->ModifierRecords).field_0xc);
    puVar2 = &(param_1->ModifierRecords).field_0x10;
    puVar3 = &(this->ModifierRecords).field_0x10;
    *(undefined4 *)&(this->ModifierRecords).field_0x30 =
         *(undefined4 *)&(param_1->ModifierRecords).field_0x30;
    *(undefined4 *)&(this->ModifierRecords).field_0x34 =
         *(undefined4 *)&(param_1->ModifierRecords).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar17 != 0) {
      memcpy(*(void **)this_03,*(void **)&param_1->ModifierRecords,(longlong)iVar17 << 6);
    }
  }
  if (&this->NameRecords != &param_1->NameRecords) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->NameRecords).ControlSets.field_0x38,
               (int *)&(this->NameRecords).ControlSets.field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->NameRecords).ControlSets.field_0x38,
               *(int *)&(param_1->NameRecords).ControlSets.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->NameRecords,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->NameRecords);
  }
  pTVar37 = &(param_1->NameRecords).BodyModifierSets;
  this_05 = &(this->NameRecords).BodyModifierSets;
  if (this_05 != pTVar37) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->NameRecords).BodyModifierSets.field_0x38,
               (int *)&(this->NameRecords).BodyModifierSets.field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->NameRecords).BodyModifierSets.field_0x38,
               *(int *)&(param_1->NameRecords).BodyModifierSets.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_05,
                (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar37);
  }
  this->CurrentConstraintProfile = param_1->CurrentConstraintProfile;
  this->CurrentControlProfile = param_1->CurrentControlProfile;
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
  pTVar11 = &this->ClothColliders;
  if (pTVar11 != &param_1->ClothColliders) {
    iVar17 = (param_1->ClothColliders).ArrayNum;
    piVar1 = &(this->ClothColliders).ArrayMax;
    pFVar25 = (param_1->ClothColliders).AllocatorInstance.Data;
    (this->ClothColliders).ArrayNum = iVar17;
    if ((iVar17 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar17,*piVar1,&pTVar11->AllocatorInstance,iVar17,piVar1);
      if (iVar17 != 0) {
        memcpy((pTVar11->AllocatorInstance).Data,pFVar25,(longlong)iVar17 * 0x18);
      }
    }
  }
  this_04 = &this->ComponentsInSim;
  if (this_04 != &param_1->ComponentsInSim) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ComponentsInSim).field_0x38,
               (int *)&(this->ComponentsInSim).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ComponentsInSim).field_0x38,
               *(int *)&(param_1->ComponentsInSim).field_0x48);
    iVar17 = *(int *)&(param_1->ComponentsInSim).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_04,iVar17);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar17,(ForAnyElementType *)this_04,(int *)&(this->ComponentsInSim).field_0x8,
               (int *)&(this->ComponentsInSim).field_0xc);
    puVar2 = &(param_1->ComponentsInSim).field_0x10;
    puVar3 = &(this->ComponentsInSim).field_0x10;
    *(undefined4 *)&(this->ComponentsInSim).field_0x30 =
         *(undefined4 *)&(param_1->ComponentsInSim).field_0x30;
    *(undefined4 *)&(this->ComponentsInSim).field_0x34 =
         *(undefined4 *)&(param_1->ComponentsInSim).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar17 != 0) {
      memcpy(*(void **)this_04,*(void **)&param_1->ComponentsInSim,(longlong)iVar17 << 5);
    }
  }
  this->ComponentsInSimTick = param_1->ComponentsInSimTick;
  dVar28 = (param_1->WorldSpaceGravity).field0_0x0._s_0.Y;
  (this->WorldSpaceGravity).field0_0x0._s_0.X = (param_1->WorldSpaceGravity).field0_0x0._s_0.X;
  (this->WorldSpaceGravity).field0_0x0._s_0.Y = dVar28;
  (this->WorldSpaceGravity).field0_0x0._s_0.Z = (param_1->WorldSpaceGravity).field0_0x0._s_0.Z;
  this->TotalMass = param_1->TotalMass;
  dVar28 = (param_1->CachedBounds).Center.field0_0x0._s_0.Y;
  (this->CachedBounds).Center.field0_0x0._s_0.X = (param_1->CachedBounds).Center.field0_0x0._s_0.X;
  (this->CachedBounds).Center.field0_0x0._s_0.Y = dVar28;
  dVar28 = (param_1->CachedBounds).W;
  (this->CachedBounds).Center.field0_0x0._s_0.Z = (param_1->CachedBounds).Center.field0_0x0._s_0.Z;
  (this->CachedBounds).W = dVar28;
  FCollisionQueryParams::operator=(&this->QueryParams,&param_1->QueryParams);
  this->UnsafeWorld = param_1->UnsafeWorld;
  this->UnsafeOwner = param_1->UnsafeOwner;
  this->SkeletalMeshAtLastPhysicsInit = param_1->SkeletalMeshAtLastPhysicsInit;
  FBoneContainer::operator=
            (&this->CapturedBoneVelocityBoneContainer,&param_1->CapturedBoneVelocityBoneContainer);
  FCSPose<FCompactHeapPose>::operator=
            (&this->CapturedBoneVelocityPose,&param_1->CapturedBoneVelocityPose);
  FCSPose<FCompactHeapPose>::operator=(&this->CapturedFrozenPose,&param_1->CapturedFrozenPose);
  pFVar12 = &this->CapturedFrozenCurves;
  if (pFVar12 != &param_1->CapturedFrozenCurves) {
    iVar17 = *(int *)&(param_1->CapturedFrozenCurves).field_0x8;
    puVar2 = &(this->CapturedFrozenCurves).field_0xc;
    pvVar18 = *(void **)&param_1->CapturedFrozenCurves;
    *(int *)&(this->CapturedFrozenCurves).field_0x8 = iVar17;
    if ((iVar17 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar17,*(int *)puVar2,(ForAnyElementType *)pFVar12,iVar17,(int *)puVar2);
      if (iVar17 != 0) {
        memcpy(*(void **)pFVar12,pvVar18,(longlong)iVar17 << 4);
      }
    }
  }
  (this->CapturedFrozenCurves).field_0x10 = (param_1->CapturedFrozenCurves).field_0x10;
  *(undefined8 *)&(this->CapturedFrozenCurves).field_0x18 =
       *(undefined8 *)&(param_1->CapturedFrozenCurves).field_0x18;
  dVar28 = (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Y;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar28;
  (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
       (param_1->PreviousComponentLinearVelocity).field0_0x0._s_0.Z;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
       (param_1->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
  (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar28;
  return this;
}

// operator() @ 14d9c4c10

bool __thiscall
`FAnimNode_RigidBodyWithControl::InitPhysics'::__l13::<lambda_1>::operator()
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

// AddBody @ 14d9c57f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FAnimNode_RigidBodyWithControl::AddBody(FAnimNode_RigidBodyWithControl *this,FActorHandle *param_1)

{
  int *piVar1;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res8 [2];
  FActorHandle *local_res10 [2];
  FActorHandle *local_18;
  int *local_10;
  
  pTVar2 = &this->Bodies;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Bodies).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  local_res8[0] = (this->Bodies).ArrayNum;
  piVar1 = &(this->Bodies).ArrayMax;
  if (local_res8[0] == *piVar1) {
    local_res8[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->Bodies).ArrayNum = local_res8[0] + 1;
  *(FActorHandle **)(pFVar3 + (longlong)local_res8[0] * 8) = local_res10[0];
  if (local_res10[0] != (FActorHandle *)0x0) {
    local_18 = local_res10[0];
    local_10 = local_res8;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,int_const_&>_>
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->BodyNameToIndexMap,
               (TPairInitializer<FName_const_&,int_const_&> *)(local_res10 + 1),(bool *)&local_18);
    return local_res8[0];
  }
  return local_res8[0];
}

// AddImpulseAtLocation @ 14d9c62c0

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
FAnimNode_RigidBodyWithControl::AddImpulseAtLocation
          (FAnimNode_RigidBodyWithControl *this,TVector<double> *param_1,TVector<double> *param_2,
          FName param_3)

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

// ApplyControl @ 14d9c74d0

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
FAnimNode_RigidBodyWithControl::ApplyControl
          (FAnimNode_RigidBodyWithControl *this,FRigidBodyControlRecord *param_1,float param_2)

{
  short *psVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  FJointHandle *this_00;
  FActorHandle *this_01;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  short sVar22;
  bool bVar23;
  FPBDJointConstraintHandle *this_02;
  FPBDJointSettings *pFVar24;
  TVector<ImmediatePhysics_Chaos::FActorHandle_*,2> *pTVar25;
  TQuat<double> *pTVar26;
  FPosQuat *pFVar27;
  TVector<double,3> *pTVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  double local_res10;
  TVector<double>_u_0 local_4c8;
  undefined8 uStack_4b0;
  TQuat<double> local_4a8;
  TVector<double>_u_0 local_488;
  double local_468;
  double dStack_460;
  double local_458;
  undefined8 uStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  TVector<double>_u_0 local_428;
  double local_408;
  double local_400;
  double local_3f8;
  undefined1 local_3e8 [16];
  double local_3d8;
  TVector<double>_u_0 local_3c8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined1 local_388 [32];
  TVector<double>_u_0 local_368;
  undefined1 local_348 [16];
  double local_338;
  TVector<double,3> local_328;
  TVector<double,3> local_308;
  TQuat<double> local_2e8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  TVector<double>_u_0 local_288;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  TVector<double>_u_0 local_248;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  FPosQuat local_208;
  TQuat<double> local_1a8;
  FPosQuat local_188;
  FPosQuat local_148;
  FPosQuat local_108 [3];
  
  this_00 = param_1->JointHandle;
  if (this_00 == (FJointHandle *)0x0) {
    return;
  }
  this_02 = ImmediatePhysics_Chaos::FJointHandle::GetConstraint(this_00);
  if (this_02 == (FPBDJointConstraintHandle *)0x0) {
    return;
  }
  sVar3 = (this->PoseData).UpdateCounter.Counter;
  if (((sVar3 == -1) || ((this->PoseData).UpdateCounter.LastSyncronizedFrame == 0xffffffffffffffff))
     || ((param_1->ExpectedUpdateCounter).Counter != sVar3)) {
    param_2 = 0.0;
  }
  Chaos::FPBDJointConstraintHandle::SetCollisionEnabled
            (this_02,(param_1->Control).ControlData.bDisableCollision == false);
  Chaos::FPBDJointConstraintHandle::SetParentInvMassScale
            (this_02,(double)((param_1->Control).ControlData.bOnlyControlChildObject == false));
  pFVar24 = Chaos::FPBDJointConstraintHandle::GetSettings(this_02);
  bVar23 = UpdateDriveSpringDamperSettings
                     (this_00,pFVar24,&param_1->ControlData,&param_1->ControlMultiplier);
  if (!bVar23) {
    return;
  }
  pTVar25 = ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(this_00);
  this_01 = pTVar25->V[0];
  pTVar25 = ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(this_00);
  if (this_01 == (FActorHandle *)0x0) {
    return;
  }
  if (pTVar25->V[1] == (FActorHandle *)0x0) {
    return;
  }
  if ((param_1->ControlData).bUseCustomControlPoint == false) {
    ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMLocation
              (this_01,(TVector<double> *)&local_488._s_0);
  }
  else {
    local_488._0_4_ = *(undefined4 *)&(param_1->ControlData).CustomControlPoint.field0_0x0;
    local_488._4_4_ =
         *(undefined4 *)((longlong)&(param_1->ControlData).CustomControlPoint.field0_0x0 + 4);
    local_488._8_4_ =
         *(undefined4 *)((longlong)&(param_1->ControlData).CustomControlPoint.field0_0x0 + 8);
    local_488._12_4_ =
         *(undefined4 *)((longlong)&(param_1->ControlData).CustomControlPoint.field0_0x0 + 0xc);
    local_488._s_0.Z = (param_1->ControlData).CustomControlPoint.field0_0x0._s_0.Z;
  }
  local_388._0_4_ = local_488._0_4_;
  local_388._4_4_ = local_488._4_4_;
  local_388._8_4_ = local_488._8_4_;
  local_388._12_4_ = local_488._12_4_;
  local_388._16_8_ = local_488._s_0.Z;
  Chaos::FPBDJointConstraintHandle::SetChildConnectorLocation
            (this_02,(TVector<double,3> *)local_388);
  dVar20 = (param_1->ControlTarget).TargetPosition.field0_0x0._s_0.X;
  dVar7 = *(double *)((longlong)&(param_1->ControlTarget).TargetPosition.field0_0x0 + 8);
  dVar32 = (param_1->ControlTarget).TargetPosition.field0_0x0._s_0.Z;
  local_468 = dVar20;
  dStack_460 = dVar7;
  local_458 = dVar32;
  pTVar26 = UE::Math::TRotator<double>::Quaternion
                      (&(param_1->ControlTarget).TargetOrientation,&local_1a8);
  dVar31 = pTVar26->X;
  dVar33 = pTVar26->Y;
  dVar16 = pTVar26->Z;
  dVar17 = pTVar26->W;
  local_448 = dVar31;
  dStack_440 = dVar33;
  local_438 = dVar16;
  dStack_430 = dVar17;
  if ((param_1->ControlData).bUseSkeletalAnimation == false) {
    uVar40 = (undefined4)uStack_450;
    uVar41 = (undefined4)((ulonglong)uStack_450 >> 0x20);
    dVar8 = local_458;
    goto LAB_14d9c79c4;
  }
  iVar4 = param_1->ChildBodyIndex;
  iVar5 = param_1->ParentBodyIndex;
  if ((iVar4 < 0) || ((this->PoseData).BoneTMs.ArrayNum <= iVar4)) {
    bVar23 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<3348598718642258554>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                        ,0x27a,"PoseData.IsValidIndex(ChildBodyIndex)");
    if (bVar23) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_4c8._s_0.Z = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x30;
    local_4c8._0_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x20;
    local_4c8._4_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x24;
    local_4c8._8_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x28;
    local_4c8._12_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x2c;
    local_4a8.X._0_4_ = *(undefined4 *)(pFVar24->ConnectorTransforms).V;
    local_4a8.X._4_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x4;
    local_4a8.Y._0_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x8;
    local_4a8.Y._4_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0xc;
    local_4a8.Z._0_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x10;
    local_4a8.Z._4_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x14;
    local_4a8.W._0_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x18;
    local_4a8.W._4_4_ = *(undefined4 *)&(pFVar24->ConnectorTransforms).V[0].field_0x1c;
  }
  else {
    pFVar27 = UE::PhysicsControl::FRigidBodyPoseData::GetTM(&this->PoseData,&local_188,iVar4);
    local_288._s_0.X = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x20;
    local_288._s_0.Y = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x28;
    local_288._s_0.Z = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x30;
    local_268 = *(undefined8 *)(pFVar24->ConnectorTransforms).V;
    uStack_260 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x8;
    local_258 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x10;
    uStack_250 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[0].field_0x18;
    UE::PhysicsControl::FPosQuat::operator*
              (pFVar27,(FPosQuat *)&local_3c8._s_0,(FPosQuat *)&local_288._s_0);
    if (-1 < iVar5) {
      if (iVar5 < (this->PoseData).BoneTMs.ArrayNum) {
        pFVar27 = UE::PhysicsControl::FRigidBodyPoseData::GetTM(&this->PoseData,&local_148,iVar5);
        local_248._s_0.X = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x20;
        local_248._s_0.Y = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x28;
        local_248._s_0.Z = (double)*(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x30;
        local_228 = *(undefined8 *)((pFVar24->ConnectorTransforms).V + 1);
        uStack_220 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x8;
        local_218 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x10;
        uStack_210 = *(undefined8 *)&(pFVar24->ConnectorTransforms).V[1].field_0x18;
        UE::PhysicsControl::FPosQuat::operator*(pFVar27,&local_208,(FPosQuat *)&local_248._s_0);
        pFVar27 = UE::PhysicsControl::FPosQuat::Inverse(&local_208,local_108);
        UE::PhysicsControl::FPosQuat::operator*
                  (pFVar27,(FPosQuat *)&local_4c8._s_0,(FPosQuat *)&local_3c8._s_0);
        goto LAB_14d9c78a7;
      }
      bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3348598718642258565>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                          ,0x285,"PoseData.IsValidIndex(ParentBodyIndex)");
      if (bVar23) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_4c8._s_0.Z = local_3c8._s_0.Z;
    uStack_4b0 = uStack_3b0;
    local_4c8._0_4_ = local_3c8._0_4_;
    local_4c8._4_4_ = local_3c8._4_4_;
    local_4c8._8_4_ = local_3c8._8_4_;
    local_4c8._12_4_ = local_3c8._12_4_;
    local_4a8.X._0_4_ = local_3a8;
    local_4a8.X._4_4_ = uStack_3a4;
    local_4a8.Y._0_4_ = uStack_3a0;
    local_4a8.Y._4_4_ = uStack_39c;
    local_4a8.Z._0_4_ = local_398;
    local_4a8.Z._4_4_ = uStack_394;
    local_4a8.W._0_4_ = uStack_390;
    local_4a8.W._4_4_ = uStack_38c;
  }
LAB_14d9c78a7:
  dVar14 = (double)CONCAT44(local_4a8.Y._4_4_,local_4a8.Y._0_4_);
  auVar29._8_4_ = local_4a8.Y._0_4_;
  auVar29._0_8_ = dVar14;
  auVar29._12_4_ = local_4a8.Y._4_4_;
  dVar11 = dVar14 * dVar31;
  dVar12 = (double)CONCAT44(local_4a8.Y._4_4_,local_4a8.Y._0_4_) * dVar33;
  dVar9 = (double)CONCAT44(local_4a8.X._4_4_,local_4a8.X._0_4_) * dVar33;
  dVar10 = (double)CONCAT44(local_4a8.X._4_4_,local_4a8.X._0_4_) * dVar31;
  dVar8 = (double)CONCAT44(local_4a8.Z._4_4_,local_4a8.Z._0_4_) * dVar31;
  dVar13 = (double)CONCAT44(local_4a8.Z._4_4_,local_4a8.Z._0_4_) * dVar16;
  dVar31 = (double)CONCAT44(local_4a8.X._4_4_,local_4a8.X._0_4_) * dVar17 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           (double)CONCAT44(local_4a8.W._4_4_,local_4a8.W._0_4_) * dVar31 +
           dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           (double)CONCAT44(local_4a8.Z._4_4_,local_4a8.Z._0_4_) * dVar33 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar33 = (double)CONCAT44(local_4a8.X._4_4_,local_4a8.X._0_4_) * dVar16 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           (double)CONCAT44(local_4a8.W._4_4_,local_4a8.W._0_4_) * dVar33 +
           auVar29._8_8_ * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar16 = dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           (double)CONCAT44(local_4a8.W._4_4_,local_4a8.W._0_4_) * dVar16 +
           dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           (double)CONCAT44(local_4a8.Z._4_4_,local_4a8.Z._0_4_) * dVar17 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar17 = dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           (double)CONCAT44(local_4a8.W._4_4_,local_4a8.W._0_4_) * dVar17 +
           dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_368._s_0.X = dVar20;
  local_368._s_0.Y = dVar7;
  local_368._s_0.Z = dVar32;
  UE::Math::TQuat<double>::RotateVector
            (&local_4a8,(TVector<double> *)&local_428._s_0,(TVector<double> *)&local_368._s_0);
  dVar32 = local_428._s_0.Z + local_4c8._s_0.Z;
  dVar20 = local_428._s_0.X + (double)CONCAT44(local_4c8._4_4_,local_4c8._0_4_);
  dVar7 = local_428._s_0.Y + (double)CONCAT44(local_4c8._12_4_,local_4c8._8_4_);
  uVar40 = (undefined4)local_208._padding_;
  uVar41 = local_208._padding_._4_4_;
  dVar8 = dVar32;
LAB_14d9c79c4:
  uVar39 = (undefined4)((ulonglong)dVar7 >> 0x20);
  uVar38 = (undefined4)((ulonglong)dVar33 >> 0x20);
  uVar37 = SUB84(dVar33,0);
  uVar36 = (undefined4)((ulonglong)dVar17 >> 0x20);
  local_348._8_4_ = SUB84(dVar7,0);
  local_348._0_8_ = dVar20;
  local_348._12_4_ = uVar39;
  local_338 = dVar32;
  Chaos::FPBDJointConstraintHandle::SetLinearDrivePositionTarget
            (this_02,(TVector<double,3> *)local_348);
  local_2c8._8_4_ = uVar37;
  local_2c8._0_8_ = dVar31;
  local_2c8._12_4_ = uVar38;
  local_2b8._8_4_ = SUB84(dVar17,0);
  local_2b8._0_8_ = dVar16;
  local_2b8._12_4_ = uVar36;
  Chaos::FPBDJointConstraintHandle::SetAngularDrivePositionTarget
            (this_02,(TQuat<double> *)local_2c8);
  fVar2 = (param_1->ControlData).LinearTargetVelocityMultiplier;
  uVar34 = SUB84(__real_3ff0000000000000,0);
  uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (fVar2 * param_2 == 0.0) {
    local_328._16_8_ = 0;
    local_328._0_8_ = 0;
    local_328._8_8_ = 0;
    Chaos::FPBDJointConstraintHandle::SetLinearDriveVelocityTarget(this_02,&local_328);
  }
  else {
    local_3f8 = (double)fVar2;
    dVar32 = __real_3ff0000000000000 / (double)param_2;
    local_408 = (dVar20 - (param_1->PreviousTargetTM).Translation.field0_0x0._s_0.X) * dVar32 *
                local_3f8;
    local_400 = (dVar7 - (param_1->PreviousTargetTM).Translation.field0_0x0._s_0.Y) * dVar32 *
                local_3f8;
    local_3f8 = (dVar8 - (param_1->PreviousTargetTM).Translation.field0_0x0._s_0.Z) * dVar32 *
                local_3f8;
    Chaos::FPBDJointConstraintHandle::SetLinearDriveVelocityTarget
              (this_02,(TVector<double,3> *)&local_408);
  }
  local_res10 = (double)param_2;
  if (param_2 * (param_1->ControlData).AngularTargetVelocityMultiplier == 0.0) {
    local_308._16_8_ = 0;
    local_308._0_8_ = 0;
    local_308._8_8_ = 0;
    pTVar28 = &local_308;
  }
  else {
    dVar32 = (param_1->PreviousTargetTM).Rotation.Z;
    dVar9 = (param_1->PreviousTargetTM).Rotation.W;
    dVar10 = (param_1->PreviousTargetTM).Rotation.X;
    dVar14 = (param_1->PreviousTargetTM).Rotation.Y;
    if (dVar17 * dVar9 + dVar16 * dVar32 + dVar33 * dVar14 + dVar31 * dVar10 < 0.0) {
      uVar34 = (undefined4)__real_bff0000000000000;
      uVar35 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    dVar11 = dVar32 * (double)CONCAT44(uVar35,uVar34) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar9 = dVar9 * (double)CONCAT44(uVar35,uVar34) *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar12 = dVar10 * (double)CONCAT44(uVar35,uVar34) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar14 = dVar14 * (double)CONCAT44(uVar35,uVar34) *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar30._8_4_ = uVar37;
    auVar30._0_8_ = dVar33;
    auVar30._12_4_ = uVar38;
    dVar32 = dVar31 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar17 * dVar14 +
             auVar30._8_8_ * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + dVar16 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar10 = dVar31 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar17 * dVar9 +
             dVar33 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar16 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_2a8._8_4_ = SUB84(dVar32,0);
    local_2a8._0_8_ =
         dVar31 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar17 * dVar12 +
         dVar33 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar16 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_2a8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    local_298._8_4_ = SUB84(dVar10,0);
    local_298._0_8_ =
         dVar31 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar17 * dVar11 +
         dVar33 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar16 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_298._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    UE::Math::TQuat<double>::Log((TQuat<double> *)local_2a8,&local_2e8);
    pTVar28 = (TVector<double,3> *)local_3e8;
    local_res10 = __real_3ff0000000000000 / local_res10;
    dVar33 = (double)(param_1->ControlData).AngularTargetVelocityMultiplier;
    dVar32 = local_2e8.Y * _UNK_150689698 * local_res10 * dVar33;
    local_3d8 = local_2e8.Z * ___xmm_40000000000000004000000000000000 * local_res10 * dVar33;
    local_3e8._8_4_ = SUB84(dVar32,0);
    local_3e8._0_8_ = local_2e8.X * ___xmm_40000000000000004000000000000000 * local_res10 * dVar33;
    local_3e8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  }
  Chaos::FPBDJointConstraintHandle::SetAngularDriveVelocityTarget(this_02,pTVar28);
  auVar19._8_4_ = SUB84(dVar7,0);
  auVar19._0_8_ = dVar20;
  auVar19._12_4_ = uVar39;
  *(undefined1 (*) [16])&(param_1->PreviousTargetTM).Translation.field0_0x0 = auVar19;
  auVar21._8_4_ = uVar40;
  auVar21._0_8_ = dVar8;
  auVar21._12_4_ = uVar41;
  *(undefined1 (*) [16])((longlong)&(param_1->PreviousTargetTM).Translation.field0_0x0 + 0x10) =
       auVar21;
  auVar18._8_4_ = uVar37;
  auVar18._0_8_ = dVar31;
  auVar18._12_4_ = uVar38;
  (param_1->PreviousTargetTM).Rotation.X = dVar31;
  (param_1->PreviousTargetTM).Rotation.Y = (double)auVar18._8_8_;
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ = dVar16;
  auVar15._12_4_ = uVar36;
  (param_1->PreviousTargetTM).Rotation.Z = dVar16;
  (param_1->PreviousTargetTM).Rotation.W = (double)auVar15._8_8_;
  sVar3 = (this->PoseData).UpdateCounter.Counter;
  sVar22 = (this->PoseData).UpdateCounter.SkipFrames;
  uVar40 = *(undefined4 *)&(this->PoseData).UpdateCounter.field_0xc;
  (param_1->ExpectedUpdateCounter).LastSyncronizedFrame =
       (this->PoseData).UpdateCounter.LastSyncronizedFrame;
  (param_1->ExpectedUpdateCounter).Counter = sVar3;
  (param_1->ExpectedUpdateCounter).SkipFrames = sVar22;
  *(undefined4 *)&(param_1->ExpectedUpdateCounter).field_0xc = uVar40;
  psVar1 = &(param_1->ExpectedUpdateCounter).Counter;
  *psVar1 = *psVar1 + 1;
  (param_1->ExpectedUpdateCounter).LastSyncronizedFrame = GFrameCounter;
  if ((param_1->ExpectedUpdateCounter).Counter == -1) {
    (param_1->ExpectedUpdateCounter).Counter = 0;
  }
  return;
}

// ApplyControlAndBodyModifierDatas @ 14d9c80c0

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
FAnimNode_RigidBodyWithControl::ApplyControlAndBodyModifierDatas
          (FAnimNode_RigidBodyWithControl *this,
          TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FPhysicsControlNamedControlMultiplierParameters,TSizedDefaultAllocator<32>_>
          *param_2,TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_>
                   *param_3)

{
  byte bVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas> FVar9;
  FName *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  undefined1 *puVar13;
  undefined1 uVar14;
  int iVar15;
  ulonglong uVar16;
  FName *pFVar17;
  undefined1 *puVar18;
  FName *pFVar19;
  uint *puVar20;
  FName FVar21;
  ForAnyElementType FVar22;
  TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *local_res10;
  FName local_res18;
  TArray<FPhysicsControlNamedModifierParameters,TSizedDefaultAllocator<32>_> *local_res20;
  undefined1 local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  TArray<FName,TSizedDefaultAllocator<32>_> local_90;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  FName local_70;
  FName local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  
  FVar9 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas;
  local_res10 = param_1;
  local_res18 = (FName)param_2;
  local_res20 = param_3;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas>)0x0)
  {
    pFVar8 = ::FName::FName((FName *)&local_90,
                            "STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifierDatas,
                         *pFVar8,L"RigidBodyNodeWithControl_ApplyControlsAndModifierDatas",
                         "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                         MCR_Invalid);
  }
  FVar21 = *(FName *)FVar9;
  bVar3 = false;
  bVar4 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar5 = false;
  bVar6 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0 = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x333);
        bVar3 = true;
        bVar4 = true;
        bVar5 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a0 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar5 = true;
      goto LAB_14d9c8224;
    }
  }
  bVar4 = bVar6;
  bVar3 = bVar5;
  bVar5 = false;
  local_a0 = local_68;
LAB_14d9c8224:
  local_a4 = (FColor_u_0)param_1->ArrayNum;
  uVar16 = (ulonglong)(int)local_a4.Bits;
  FVar21 = (FName)(param_1->AllocatorInstance).Data;
  local_70 = (FName)(uVar16 * 0x50 + (longlong)FVar21);
  do {
    FVar2 = local_70;
    if (param_1->ArrayNum != (int)uVar16) {
      `TCheckedPointerIterator<FPhysicsControlNamedControlParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_a7);
    }
    if (FVar21 == FVar2) {
      local_a4 = (FColor_u_0)((FColor_u_0 *)((longlong)local_res18 + 8))->Bits;
      uVar16 = (ulonglong)(int)local_a4.Bits;
      FVar21 = *(FName *)local_res18;
      local_90.AllocatorInstance.Data =
           (FScriptContainerElement *)(uVar16 * 0x80 + (longlong)FVar21);
      do {
        FVar22.Data = local_90.AllocatorInstance.Data;
        local_98 = FVar21;
        if (*(int *)((longlong)local_res18 + 8) != (int)uVar16) {
          `TCheckedPointerIterator<FPhysicsControlNamedControlMultiplierParameters_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_res10);
        }
        if (FVar21 == (FName)FVar22.Data) {
          uVar16 = (ulonglong)local_res20->ArrayNum;
          FVar21 = (FName)(local_res20->AllocatorInstance).Data;
          local_res10 = (TArray<FPhysicsControlNamedControlParameters,TSizedDefaultAllocator<32>_> *
                        )CONCAT44(local_res10._4_4_,local_res20->ArrayNum);
          local_90.AllocatorInstance.Data =
               (FScriptContainerElement *)((longlong)FVar21 + uVar16 * 0x18);
          pFVar8 = (FName *)((longlong)FVar21 + 8);
          do {
            FVar22.Data = local_90.AllocatorInstance.Data;
            local_98 = FVar21;
            if (local_res20->ArrayNum != (int)uVar16) {
              `TCheckedPointerIterator<FPhysicsControlNamedModifierParameters_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_res18);
            }
            FVar2 = local_a0;
            if (FVar21 == (FName)FVar22.Data) {
              if (bVar4) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if (bVar3) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if (bVar5) {
                FThreadStats::AddMessage(FVar2,CycleScopeEnd);
              }
              return;
            }
            ExpandName(&local_80,*(FName *)FVar21,&(this->NameRecords).BodyModifierSets);
            iVar15 = local_80.ArrayNum;
            pFVar10 = (FName *)(local_80.AllocatorInstance.Data + (longlong)iVar15 * 8);
            FVar22.Data = local_80.AllocatorInstance.Data;
LAB_14d9c8680:
            if (local_80.ArrayNum != iVar15) {
              `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_res18);
            }
            if ((FName *)FVar22.Data != pFVar10) {
              FVar21 = *(FName *)FVar22.Data;
              local_res18 = FVar21;
              uVar7 = ::GetTypeHash(FVar21.ComparisonIndex.Value);
              if (*(int *)&(this->ModifierRecords).field_0x8 !=
                  *(int *)&(this->ModifierRecords).field_0x34) {
                puVar13 = *(undefined1 **)&(this->ModifierRecords).field_0x40;
                puVar18 = &(this->ModifierRecords).field_0x38;
                if (puVar13 != (undefined1 *)0x0) {
                  puVar18 = puVar13;
                }
                uVar7 = *(uint *)(puVar18 +
                                 (ulonglong)
                                 (*(int *)&(this->ModifierRecords).field_0x48 - 1U &
                                 FVar21.Number + uVar7) * 4);
                if (uVar7 != 0xffffffff) {
                  do {
                    pFVar17 = (FName *)((longlong)(int)uVar7 * 0x40 +
                                       *(longlong *)&this->ModifierRecords);
                    if (*pFVar17 == FVar21) {
                      pFVar19 = pFVar17 + 1;
                      if (pFVar17 == (FName *)0x0) {
                        pFVar19 = (FName *)0x0;
                      }
                      if (pFVar19 != (FName *)0x0) {
                        pFVar11 = pFVar19 + 1;
                        pFVar12 = pFVar11;
                        if ((pFVar8[1].Number & 0x200) != 0) {
                          pFVar12 = pFVar8;
                        }
                        *(char *)&(pFVar11->ComparisonIndex).Value =
                             (char)(pFVar12->ComparisonIndex).Value;
                        pFVar12 = pFVar11;
                        if ((pFVar8[1].Number & 0x400) != 0) {
                          pFVar12 = pFVar8;
                        }
                        *(undefined1 *)((longlong)&pFVar19[1].ComparisonIndex.Value + 1) =
                             *(undefined1 *)((longlong)&(pFVar12->ComparisonIndex).Value + 1);
                        pFVar12 = pFVar11;
                        if ((pFVar8[1].Number & 0x800) != 0) {
                          pFVar12 = pFVar8;
                        }
                        pFVar19[1].Number = pFVar12->Number;
                        if ((pFVar8[1].Number & 0x1000) != 0) {
                          pFVar11 = pFVar8;
                        }
                        pFVar19[2].ComparisonIndex.Value = pFVar11[1].ComparisonIndex.Value;
                        if ((pFVar8[1].Number & 0x2000) == 0) {
                          uVar14 = *(undefined1 *)((longlong)&pFVar19[1].ComparisonIndex.Value + 2);
                          puVar13 = (undefined1 *)((longlong)&pFVar19[1].ComparisonIndex.Value + 2);
                        }
                        else {
                          uVar14 = (undefined1)pFVar8[1].Number;
                          puVar13 = (undefined1 *)((longlong)&pFVar17[2].ComparisonIndex.Value + 2);
                          if (pFVar17 == (FName *)0x0) {
                            puVar13 = &DAT_0000000a;
                          }
                        }
                        *puVar13 = uVar14;
                        bVar1 = *(byte *)((longlong)&pFVar8[1].Number + 1);
                        if ((bVar1 & 0x40) == 0) {
                          FVar22.Data = FVar22.Data + 8;
                          *(char *)&pFVar19[2].Number = (char)pFVar19[2].Number;
                        }
                        else {
                          puVar20 = &pFVar17[3].Number;
                          if (pFVar17 == (FName *)0x0) {
                            puVar20 = (uint *)&DAT_00000014;
                          }
                          FVar22.Data = FVar22.Data + 8;
                          *(byte *)puVar20 = bVar1 & 1;
                        }
                        goto LAB_14d9c8680;
                      }
                      break;
                    }
                    uVar7 = pFVar17[7].ComparisonIndex.Value;
                  } while (uVar7 != 0xffffffff);
                }
              }
              if (2 < (byte)LogPhysicsControl._0_1_) {
                ::FName::ToString(&local_res18,&local_48);
                UE::Logging::Private::BasicLog<3>
                          (&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
                if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_48.Data.AllocatorInstance.Data);
                }
              }
              FVar22.Data = FVar22.Data + 8;
              goto LAB_14d9c8680;
            }
            uVar16 = (ulonglong)local_res10 & 0xffffffff;
            if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.AllocatorInstance.Data);
            }
            FVar21 = (FName)((longlong)local_98 + 0x18);
            pFVar8 = pFVar8 + 3;
          } while( true );
        }
        pFVar8 = (FName *)((longlong)FVar21 + 8);
        ExpandName(&local_58,*(FName *)FVar21,&(this->NameRecords).ControlSets);
        iVar15 = local_58.ArrayNum;
        pFVar10 = (FName *)(local_58.AllocatorInstance.Data + (longlong)iVar15 * 8);
        FVar22.Data = local_58.AllocatorInstance.Data;
LAB_14d9c8417:
        if (local_58.ArrayNum != iVar15) {
          `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        FVar2 = local_98;
        if ((FName *)FVar22.Data != pFVar10) {
          FVar2 = *(FName *)FVar22.Data;
          local_70 = FVar2;
          uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (*(int *)&(this->ControlRecords).field_0x8 !=
              *(int *)&(this->ControlRecords).field_0x34) {
            puVar13 = *(undefined1 **)&(this->ControlRecords).field_0x40;
            puVar18 = &(this->ControlRecords).field_0x38;
            if (puVar13 != (undefined1 *)0x0) {
              puVar18 = puVar13;
            }
            uVar7 = *(uint *)(puVar18 +
                             (ulonglong)
                             (*(int *)&(this->ControlRecords).field_0x48 - 1U & FVar2.Number + uVar7
                             ) * 4);
            if (uVar7 != 0xffffffff) {
              do {
                pFVar17 = (FName *)((longlong)(int)uVar7 * 0x240 +
                                   *(longlong *)&this->ControlRecords);
                if (*pFVar17 == FVar2) {
                  pFVar19 = pFVar17 + 2;
                  if (pFVar17 == (FName *)0x0) {
                    pFVar19 = (FName *)0x0;
                  }
                  if (pFVar19 != (FName *)0x0) {
                    pFVar17 = pFVar19 + 0xc;
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 1) != 0) {
                      pFVar11 = pFVar8;
                    }
                    FVar2 = pFVar11[1];
                    *pFVar17 = *pFVar11;
                    pFVar19[0xd] = FVar2;
                    pFVar19[0xe] = pFVar11[2];
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 2) != 0) {
                      pFVar11 = pFVar8;
                    }
                    FVar2 = pFVar11[4];
                    pFVar19[0xf] = pFVar11[3];
                    pFVar19[0x10] = FVar2;
                    pFVar19[0x11] = pFVar11[5];
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 4) != 0) {
                      pFVar11 = pFVar8;
                    }
                    FVar2 = pFVar11[7];
                    pFVar19[0x12] = pFVar11[6];
                    pFVar19[0x13] = FVar2;
                    pFVar19[0x14] = pFVar11[8];
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 8) != 0) {
                      pFVar11 = pFVar8;
                    }
                    FVar2 = pFVar11[10];
                    pFVar19[0x15] = pFVar11[9];
                    pFVar19[0x16] = FVar2;
                    pFVar19[0x17] = pFVar11[0xb];
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 0x10) != 0)
                    {
                      pFVar11 = pFVar8;
                    }
                    pFVar19[0x18].ComparisonIndex.Value = pFVar11[0xc].ComparisonIndex.Value;
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 0x20) != 0)
                    {
                      pFVar11 = pFVar8;
                    }
                    pFVar19[0x18].Number = pFVar11[0xc].Number;
                    pFVar11 = pFVar17;
                    if (((((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value & 0x40) != 0)
                    {
                      pFVar11 = pFVar8;
                    }
                    pFVar19[0x19].ComparisonIndex.Value = pFVar11[0xd].ComparisonIndex.Value;
                    if ((char)(((FName *)((longlong)FVar21 + 0x78))->ComparisonIndex).Value < '\0')
                    {
                      pFVar17 = pFVar8;
                    }
                    FVar22.Data = FVar22.Data + 8;
                    pFVar19[0x19].Number = pFVar17[0xd].Number;
                    goto LAB_14d9c8417;
                  }
                  break;
                }
                uVar7 = pFVar17[0x46].ComparisonIndex.Value;
              } while (uVar7 != 0xffffffff);
            }
          }
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(&local_70,(FString *)&local_80);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.AllocatorInstance.Data);
            }
          }
          FVar22.Data = FVar22.Data + 8;
          goto LAB_14d9c8417;
        }
        if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        FVar21 = (FName)((longlong)FVar2 + 0x80);
        uVar16 = (ulonglong)local_a4.Bits;
      } while( true );
    }
    ExpandName(&local_90,*(FName *)FVar21,&(this->NameRecords).ControlSets);
    iVar15 = local_90.ArrayNum;
    pFVar8 = (FName *)(local_90.AllocatorInstance.Data + (longlong)iVar15 * 8);
    FVar22.Data = local_90.AllocatorInstance.Data;
LAB_14d9c8280:
    if (local_90.ArrayNum != iVar15) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a7);
    }
    if ((FName *)FVar22.Data != pFVar8) {
      FVar2 = *(FName *)FVar22.Data;
      local_98 = FVar2;
      uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if (*(int *)&(this->ControlRecords).field_0x8 != *(int *)&(this->ControlRecords).field_0x34) {
        puVar13 = *(undefined1 **)&(this->ControlRecords).field_0x40;
        puVar18 = &(this->ControlRecords).field_0x38;
        if (puVar13 != (undefined1 *)0x0) {
          puVar18 = puVar13;
        }
        uVar7 = *(uint *)(puVar18 +
                         (ulonglong)
                         (*(int *)&(this->ControlRecords).field_0x48 - 1U & FVar2.Number + uVar7) *
                         4);
        if (uVar7 != 0xffffffff) {
          do {
            pFVar10 = (FName *)((longlong)(int)uVar7 * 0x240 + *(longlong *)&this->ControlRecords);
            if (*pFVar10 == FVar2) {
              pFVar17 = pFVar10 + 2;
              if (pFVar10 == (FName *)0x0) {
                pFVar17 = (FName *)0x0;
              }
              if (pFVar17 != (FName *)0x0) {
                FPhysicsControlData::UpdateFromSparseData
                          ((FPhysicsControlData *)(pFVar17 + 2),
                           (FPhysicsControlSparseData *)((longlong)FVar21 + 8));
                FVar22.Data = FVar22.Data + 8;
                goto LAB_14d9c8280;
              }
              break;
            }
            uVar7 = pFVar10[0x46].ComparisonIndex.Value;
          } while (uVar7 != 0xffffffff);
        }
      }
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(&local_98,(FString *)&local_80);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
      }
      FVar22.Data = FVar22.Data + 8;
      goto LAB_14d9c8280;
    }
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
    FVar21 = (FName)((longlong)FVar21 + 0x50);
    uVar16 = (ulonglong)local_a4.Bits;
    param_1 = local_res10;
  } while( true );
}

// ApplyControlAndModifierUpdatesAndParametersToRecords @ 14d9c8fe0

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
FAnimNode_RigidBodyWithControl::ApplyControlAndModifierUpdatesAndParametersToRecords
          (FAnimNode_RigidBodyWithControl *this,FPhysicsControlControlAndModifierUpdates *param_1,
          FPhysicsControlControlAndModifierParameters *param_2)

{
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar14;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar15;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *pTVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords>
  FVar21;
  longlong *plVar22;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar23;
  FRigidBodyControlRecord *pFVar24;
  ulonglong uVar25;
  FRigidBodyModifierRecord *pFVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  int iVar30;
  FName FVar31;
  FName *pFVar32;
  FName *pFVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  ForElementType<unsigned_int> FVar37;
  uint *puVar39;
  uint uVar40;
  FName FVar41;
  ForElementType<unsigned_int> FVar42;
  uint uVar43;
  FPhysicsControlSparseData *pFVar44;
  FPhysicsControlSparseMultiplier *pFVar45;
  FPhysicsControlModifierSparseData *pFVar46;
  uint uVar47;
  FName *local_res20;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6;
  undefined1 local_1d5;
  undefined1 local_1d4;
  undefined1 local_1d3;
  undefined1 local_1d2 [2];
  ForElementType<unsigned_int> local_1d0;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_1c8;
  FName local_1c0;
  FColor_u_0 local_1b8 [2];
  FName local_1b0;
  FName local_1a8;
  ulonglong local_1a0;
  FName local_198;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  uint local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  FName local_148;
  FName local_140;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *local_138;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  longlong *plVar38;
  
  plVar38 = (longlong *)0x0;
  uVar40 = 0;
  uVar47 = 0;
  FVar21 = 
  StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords>
       )0x0) {
    pFVar20 = ::FName::FName(&local_a8,
                             "STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords"
                            );
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords
                          ,*pFVar20,
                          L"RigidBodyNodeWithControl_ApplyControlAndModifierUpdatesAndParametersToRecords"
                          ,"STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false
                          ,MCR_Invalid);
  }
  FVar41 = *(FName *)FVar21;
  bVar13 = false;
  bVar12 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar41.ComparisonIndex.Value.Value != 0) || (FVar41.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar12 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar41.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar41.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x30a);
        bVar13 = true;
        bVar12 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c0 = FVar41;
      FThreadStats::AddMessage(FVar41,CycleScopeStart);
      bVar17 = true;
      goto LAB_14d9c9158;
    }
  }
  bVar13 = bVar18;
  bVar12 = bVar17;
  bVar17 = false;
  local_1c0 = local_198;
LAB_14d9c9158:
  ApplyControlAndBodyModifierDatas
            (this,&param_1->ControlUpdates,&param_1->ControlMultiplierUpdates,
             &param_1->ModifierUpdates);
  local_1c8 = &this->ControlRecords;
  uVar19 = *(uint *)&(this->ControlRecords).field_0x28;
  local_178 = &(this->ControlRecords).field_0x10;
  uVar36 = 0;
  local_1a0 = 1;
  uStack_17c = 1;
  uStack_16c = uVar36;
  uStack_180 = uVar36;
  local_168 = uVar36;
  if (uVar19 != 0) {
    puVar39 = *(uint **)&(this->ControlRecords).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)local_178;
    }
    uStack_17c = *puVar39;
    plVar28 = plVar38;
    plVar22 = plVar38;
    local_168 = uVar40;
    uStack_180 = uVar40;
    while (uStack_17c == 0) {
      iVar30 = (int)plVar28;
      local_168 = (int)plVar22 + 0x20;
      plVar22 = (longlong *)(ulonglong)local_168;
      uStack_180 = iVar30 + 1;
      plVar28 = (longlong *)(ulonglong)uStack_180;
      uStack_17c = 1;
      uStack_16c = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_180)
      goto LAB_14d9c91fe;
      uStack_17c = puVar39[(longlong)iVar30 + 1];
    }
    uStack_17c = -uStack_17c & uStack_17c;
    uVar25 = (ulonglong)uStack_17c * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_158 = (int)lVar27;
    uStack_16c = local_158 + -1 + local_168;
    if ((int)uVar19 < (int)uStack_16c) {
      uStack_16c = uVar19;
    }
  }
LAB_14d9c91fe:
  uStack_164 = local_54;
  iStack_160 = *(int *)&(this->ControlRecords).field_0x8 -
               *(int *)&(this->ControlRecords).field_0x34;
  local_1d0 = (ForElementType<unsigned_int>)&(this->ControlRecords).field_0x10;
  uVar34 = *(uint *)&(this->ControlRecords).field_0x28;
  TStack_100._padding_ = CONCAT44(uStack_17c,uStack_180);
  uStack_170 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_16c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  uVar43 = uVar34 & 0xffffffe0;
  iVar30 = (int)uVar34 >> 5;
  TStack_100._28_4_ = local_54;
  TStack_100.BaseBitIndex = local_168;
  uStack_e0 = CONCAT44(uStack_15c,iStack_160);
  local_188 = local_1c8;
  local_108 = local_1c8;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  if ((((int)uVar34 < 0) || ((int)uVar19 < (int)uVar34)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar14 = local_1c8;
  FVar42 = local_1d0;
  uVar19 = *(int *)((longlong)local_1d0 + 0x18);
  if (uVar34 != uVar19) {
    FVar37 = *(ForElementType<unsigned_int> *)((longlong)local_1d0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_1d0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar37 = local_1d0;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)((longlong)FVar37 + (longlong)iVar30 * 4);
    while (uVar34 == 0) {
      lVar27 = (longlong)iVar30;
      uVar43 = uVar43 + 0x20;
      iVar30 = iVar30 + 1;
      uVar34 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
      goto LAB_14d9c9330;
      uVar34 = *(uint *)((undefined1 *)((longlong)FVar37 + 4) + lVar27 * 4);
    }
    uVar25 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_154 = (int)lVar27;
    uVar34 = local_154 + -1 + uVar43;
    if ((int)uVar19 < (int)uVar34) {
      uVar34 = uVar19;
    }
  }
LAB_14d9c9330:
  while( true ) {
    pTVar15 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res20 = (FName *)((ulonglong)local_res20 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res20);
    }
    if (((TStack_100.CurrentBitIndex == uVar34) &&
        ((ForElementType<unsigned_int>)TStack_100.Array == FVar42)) && (pTVar15 == pTVar14)) break;
    lVar27 = *(longlong *)pTVar15;
    lVar35 = (longlong)TStack_100.CurrentBitIndex * 0x240;
    lVar5 = *(longlong *)(lVar35 + lVar27);
    uVar19 = ::GetTypeHash((FNameEntryId)(uint)lVar5);
    if (*(int *)&(this->ControlTargets).Targets.field_0x8 !=
        *(int *)&(this->ControlTargets).Targets.field_0x34) {
      puVar6 = *(undefined1 **)&(this->ControlTargets).Targets.field_0x40;
      puVar29 = &(this->ControlTargets).Targets.field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar29 = puVar6;
      }
      iVar30 = *(int *)(puVar29 +
                       (ulonglong)
                       (*(int *)&(this->ControlTargets).Targets.field_0x48 - 1U &
                       (int)((ulonglong)lVar5 >> 0x20) + uVar19) * 4);
      if (iVar30 != -1) {
        do {
          plVar28 = (longlong *)
                    ((longlong)iVar30 * 0x40 + *(longlong *)&(this->ControlTargets).Targets);
          if (*plVar28 == lVar5) {
            plVar22 = plVar28 + 1;
            if (plVar28 == (longlong *)0x0) {
              plVar22 = plVar38;
            }
            if (plVar22 != (longlong *)0x0) {
              lVar5 = plVar22[1];
              plVar28 = (longlong *)(lVar35 + 0xe0 + lVar27);
              *plVar28 = *plVar22;
              plVar28[1] = lVar5;
              lVar5 = plVar22[3];
              plVar28 = (longlong *)(lVar35 + 0xf0 + lVar27);
              *plVar28 = plVar22[2];
              plVar28[1] = lVar5;
              lVar5 = plVar22[5];
              plVar28 = (longlong *)(lVar35 + 0x100 + lVar27);
              *plVar28 = plVar22[4];
              plVar28[1] = lVar5;
              puVar2 = (undefined8 *)(lVar35 + 0x20 + lVar27);
              uVar8 = puVar2[1];
              puVar3 = (undefined8 *)(lVar35 + 0x30 + lVar27);
              uVar9 = *puVar3;
              uVar10 = puVar3[1];
              puVar3 = (undefined8 *)(lVar35 + 0x160 + lVar27);
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              puVar2 = (undefined8 *)(lVar35 + 0x40 + lVar27);
              uVar8 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x170 + lVar27);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              puVar2 = (undefined8 *)(lVar35 + 0x50 + lVar27);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x180 + lVar27);
              *puVar2 = uVar8;
              puVar2[1] = uVar11;
              puVar2 = (undefined8 *)(lVar35 + 0x60 + lVar27);
              uVar8 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 400 + lVar27);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              puVar2 = (undefined8 *)(lVar35 + 0x80 + lVar27);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x1a0 + lVar27);
              *puVar2 = uVar8;
              puVar2[1] = uVar11;
              puVar2 = (undefined8 *)(lVar35 + 0x70 + lVar27);
              uVar8 = puVar2[1];
              puVar3 = (undefined8 *)(lVar35 + 0x1b0 + lVar27);
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              puVar2 = (undefined8 *)(lVar35 + 0x90 + lVar27);
              uVar8 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x1c0 + lVar27);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              puVar2 = (undefined8 *)(lVar35 + 0xa0 + lVar27);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x1d0 + lVar27);
              *puVar2 = uVar8;
              puVar2[1] = uVar11;
              puVar2 = (undefined8 *)(lVar35 + 0xb0 + lVar27);
              uVar8 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x1e0 + lVar27);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              puVar2 = (undefined8 *)(lVar35 + 0xc0 + lVar27);
              uVar9 = *puVar2;
              uVar10 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x1f0 + lVar27);
              *puVar2 = uVar8;
              puVar2[1] = uVar11;
              puVar2 = (undefined8 *)(lVar35 + 0xd0 + lVar27);
              uVar8 = *puVar2;
              uVar11 = puVar2[1];
              puVar2 = (undefined8 *)(lVar35 + 0x200 + lVar27);
              *puVar2 = uVar9;
              puVar2[1] = uVar10;
              puVar2 = (undefined8 *)(lVar35 + 0x210 + lVar27);
              *puVar2 = uVar8;
              puVar2[1] = uVar11;
              goto LAB_14d9c94e4;
            }
            break;
          }
          iVar30 = (int)plVar28[7];
        } while (iVar30 != -1);
      }
    }
    puVar2 = (undefined8 *)(lVar35 + 0x20 + lVar27);
    uVar8 = puVar2[1];
    puVar3 = (undefined8 *)(lVar35 + 0x30 + lVar27);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (undefined8 *)(lVar35 + 0x160 + lVar27);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar2 = (undefined8 *)(lVar35 + 0x40 + lVar27);
    uVar8 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x170 + lVar27);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(lVar35 + 0x50 + lVar27);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x180 + lVar27);
    *puVar2 = uVar8;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar35 + 0x60 + lVar27);
    uVar8 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 400 + lVar27);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(lVar35 + 0x80 + lVar27);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x1a0 + lVar27);
    *puVar2 = uVar8;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar35 + 0x70 + lVar27);
    uVar8 = puVar2[1];
    puVar3 = (undefined8 *)(lVar35 + 0x1b0 + lVar27);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar2 = (undefined8 *)(lVar35 + 0x90 + lVar27);
    uVar8 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x1c0 + lVar27);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(lVar35 + 0xa0 + lVar27);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x1d0 + lVar27);
    *puVar2 = uVar8;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar35 + 0xb0 + lVar27);
    uVar8 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x1e0 + lVar27);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(lVar35 + 0xc0 + lVar27);
    uVar9 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x1f0 + lVar27);
    *puVar2 = uVar8;
    puVar2[1] = uVar11;
    puVar2 = (undefined8 *)(lVar35 + 0xd0 + lVar27);
    uVar8 = *puVar2;
    uVar11 = puVar2[1];
    puVar2 = (undefined8 *)(lVar35 + 0x200 + lVar27);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2 = (undefined8 *)(lVar35 + 0x210 + lVar27);
    *puVar2 = uVar8;
    puVar2[1] = uVar11;
    *(undefined8 *)(lVar35 + 0xe0 + lVar27) = 0;
    *(undefined8 *)(lVar35 + 0xe8 + lVar27) = 0;
    *(undefined8 *)(lVar35 + 0xf0 + lVar27) = 0;
    *(undefined8 *)(lVar35 + 0xf8 + lVar27) = 0;
    *(undefined8 *)(lVar35 + 0x100 + lVar27) = 0;
    *(undefined8 *)(lVar35 + 0x108 + lVar27) = 0;
LAB_14d9c94e4:
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  pTVar1 = &this->ModifierRecords;
  uVar19 = *(uint *)&(this->ModifierRecords).field_0x28;
  local_128 = &(this->ModifierRecords).field_0x10;
  uStack_11c = uVar36;
  if (uVar19 != 0) {
    puVar39 = *(uint **)&(this->ModifierRecords).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)local_128;
    }
    uVar34 = *puVar39;
    plVar28 = plVar38;
    uVar36 = uVar40;
    uVar47 = uVar40;
    while (uVar34 == 0) {
      iVar30 = (int)plVar28;
      uVar36 = (int)plVar38 + 0x20;
      plVar38 = (longlong *)(ulonglong)uVar36;
      uVar47 = iVar30 + 1;
      plVar28 = (longlong *)(ulonglong)uVar47;
      uStack_11c = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar47)
      goto LAB_14d9c968f;
      uVar34 = puVar39[(longlong)iVar30 + 1];
    }
    local_1a0 = (ulonglong)(-uVar34 & uVar34);
    uVar25 = local_1a0 * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    local_150 = (int)lVar27;
    uStack_11c = (uVar36 - 1) + local_150;
    if ((int)uVar19 < (int)uStack_11c) {
      uStack_11c = uVar19;
    }
  }
LAB_14d9c968f:
  uVar40 = *(uint *)&(this->ModifierRecords).field_0x28;
  uStack_12c = (undefined4)local_1a0;
  uStack_114 = uStack_16c;
  iStack_110 = *(int *)&(this->ModifierRecords).field_0x8 -
               *(int *)&(this->ModifierRecords).field_0x34;
  puVar6 = &(this->ModifierRecords).field_0x10;
  uStack_120 = 0xffffffff;
  uVar34 = uVar40 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_12c,uVar47);
  TStack_d0.CurrentBitIndex = uStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar30 = (int)uVar40 >> 5;
  TStack_d0._28_4_ = uStack_16c;
  TStack_d0.BaseBitIndex = uVar36;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  local_1d0 = (ForElementType<unsigned_int>)pTVar1;
  local_138 = pTVar1;
  uStack_130 = uVar47;
  local_118 = uVar36;
  local_d8 = pTVar1;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_128;
  if ((((int)uVar40 < 0) || ((int)uVar19 < (int)uVar40)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar47 = *(uint *)&(this->ModifierRecords).field_0x28;
  if (uVar40 != uVar47) {
    puVar29 = *(undefined1 **)&(this->ModifierRecords).field_0x20;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = puVar6;
    }
    uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar30 * 4);
    while (uVar40 == 0) {
      lVar27 = (longlong)iVar30;
      uVar34 = uVar34 + 0x20;
      iVar30 = iVar30 + 1;
      uVar40 = uVar47;
      if ((int)((uVar47 - 1) + ((int)(uVar47 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
      goto LAB_14d9c97a0;
      uVar40 = *(uint *)(puVar29 + lVar27 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar27 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
      }
    }
    uVar40 = (uVar34 - 1) + (int)lVar27;
    if ((int)uVar47 < (int)uVar40) {
      uVar40 = uVar47;
    }
  }
LAB_14d9c97a0:
  while( true ) {
    pTVar16 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (((TStack_d0.CurrentBitIndex == uVar40) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) && (pTVar16 == pTVar1))
    break;
    lVar27 = *(longlong *)pTVar16;
    puVar2 = (undefined8 *)((longlong)TStack_d0.CurrentBitIndex * 0x40 + 0x10 + lVar27);
    uVar8 = puVar2[1];
    puVar3 = (undefined8 *)((longlong)TStack_d0.CurrentBitIndex * 0x40 + 0x20 + lVar27);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pFVar20 = (FName *)(param_2->ControlParameters).AllocatorInstance.Data;
  iVar30 = (param_2->ControlParameters).ArrayNum;
  pFVar44 = (FPhysicsControlSparseData *)(pFVar20 + 1);
  local_res20 = pFVar20 + (longlong)iVar30 * 10;
  pFVar32 = local_res20;
  while( true ) {
    if ((param_2->ControlParameters).ArrayNum != iVar30) {
      `TCheckedPointerIterator<FPhysicsControlNamedControlParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1d7);
    }
    if (pFVar20 == pFVar32) break;
    pTVar23 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->NameRecords,*pFVar20);
    if (pTVar23 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*pFVar20,pFVar44,local_1c8);
      pFVar20 = pFVar20 + 10;
      pFVar44 = (FPhysicsControlSparseData *)&pFVar44[1].LinearExtraDamping;
    }
    else {
      pFVar33 = (FName *)(pTVar23->AllocatorInstance).Data;
      iVar4 = pTVar23->ArrayNum;
      pFVar32 = pFVar33 + iVar4;
      while( true ) {
        if (pTVar23->ArrayNum != iVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1d6);
        }
        if (pFVar33 == pFVar32) break;
        local_1b0 = *pFVar33;
        pFVar24 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                  ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                          *)local_1c8,local_1b0);
        if (pFVar24 == (FRigidBodyControlRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(&local_1b0,&local_a0);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a0.Data.AllocatorInstance.Data);
            }
          }
          pFVar33 = pFVar33 + 1;
        }
        else {
          FPhysicsControlData::UpdateFromSparseData(&pFVar24->ControlData,pFVar44);
          pFVar33 = pFVar33 + 1;
        }
      }
      pFVar20 = pFVar20 + 10;
      pFVar44 = (FPhysicsControlSparseData *)&pFVar44[1].LinearExtraDamping;
      pFVar32 = local_res20;
    }
  }
  iVar30 = (param_2->ControlMultiplierParameters).ArrayNum;
  uVar25 = (ulonglong)iVar30;
  FVar41 = (FName)(param_2->ControlMultiplierParameters).AllocatorInstance.Data;
  local_1b0 = (FName)(uVar25 * 0x80 + (longlong)FVar41);
  local_res20 = (FName *)CONCAT44(local_res20._4_4_,iVar30);
  pFVar45 = (FPhysicsControlSparseMultiplier *)((longlong)FVar41 + 8);
  FVar31 = local_1b0;
  while( true ) {
    if ((param_2->ControlMultiplierParameters).ArrayNum != (int)uVar25) {
      `TCheckedPointerIterator<FPhysicsControlNamedControlMultiplierParameters_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_1d5);
    }
    if (FVar41 == FVar31) break;
    pTVar23 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                      *)&this->NameRecords,*(FName *)FVar41);
    if (pTVar23 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*(FName *)FVar41,pFVar45,local_1c8);
      uVar25 = (ulonglong)local_res20 & 0xffffffff;
      FVar41 = (FName)((longlong)FVar41 + 0x80);
      pFVar45 = (FPhysicsControlSparseMultiplier *)
                ((longlong)&pFVar45[1].LinearStrengthMultiplier.field0_0x0 + 8);
    }
    else {
      pFVar32 = (FName *)(pTVar23->AllocatorInstance).Data;
      iVar30 = pTVar23->ArrayNum;
      pFVar20 = pFVar32 + iVar30;
      while( true ) {
        if (pTVar23->ArrayNum != iVar30) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1d4);
        }
        if (pFVar32 == pFVar20) break;
        local_148 = *pFVar32;
        pFVar24 = TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                  ::Find((TMapBase<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                          *)local_1c8,local_148);
        if (pFVar24 == (FRigidBodyControlRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(&local_148,&local_90);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.Data.AllocatorInstance.Data);
            }
          }
          pFVar32 = pFVar32 + 1;
        }
        else {
          FPhysicsControlMultiplier::UpdateFromSparseData(&pFVar24->ControlMultiplier,pFVar45);
          pFVar32 = pFVar32 + 1;
        }
      }
      FVar41 = (FName)((longlong)FVar41 + 0x80);
      uVar25 = (ulonglong)local_res20 & 0xffffffff;
      pFVar45 = (FPhysicsControlSparseMultiplier *)
                ((longlong)&pFVar45[1].LinearStrengthMultiplier.field0_0x0 + 8);
      FVar31 = local_1b0;
    }
  }
  pFVar20 = (FName *)(param_2->ModifierParameters).AllocatorInstance.Data;
  iVar30 = (param_2->ModifierParameters).ArrayNum;
  pFVar46 = (FPhysicsControlModifierSparseData *)(pFVar20 + 1);
  local_res20 = pFVar20 + (longlong)iVar30 * 3;
  pFVar32 = local_res20;
  FVar42 = local_1d0;
  while( true ) {
    if ((param_2->ModifierParameters).ArrayNum != iVar30) {
      `TCheckedPointerIterator<FPhysicsControlNamedModifierParameters_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1d3);
    }
    FVar41 = local_1c0;
    if (pFVar20 == pFVar32) break;
    pTVar23 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                      *)&(this->NameRecords).BodyModifierSets,*pFVar20);
    if (pTVar23 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
      SetRecordParameters(*pFVar20,pFVar46,
                          (TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                           *)FVar42);
      pFVar20 = pFVar20 + 3;
      pFVar46 = (FPhysicsControlModifierSparseData *)&pFVar46[1].PhysicsBlendWeight;
    }
    else {
      pFVar33 = (FName *)(pTVar23->AllocatorInstance).Data;
      iVar4 = pTVar23->ArrayNum;
      pFVar32 = pFVar33 + iVar4;
      while( true ) {
        if (pTVar23->ArrayNum != iVar4) {
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1d2);
        }
        if (pFVar33 == pFVar32) break;
        local_140 = *pFVar33;
        pFVar26 = TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                  ::Find((TMapBase<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
                          *)local_1d0,local_140);
        if (pFVar26 == (FRigidBodyModifierRecord *)0x0) {
          if (2 < (byte)LogPhysicsControl._0_1_) {
            ::FName::ToString(&local_140,local_80);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
            if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
            }
          }
          pFVar33 = pFVar33 + 1;
        }
        else {
          FPhysicsControlModifierData::UpdateFromSparseData(&pFVar26->ModifierData,pFVar46);
          pFVar33 = pFVar33 + 1;
        }
      }
      pFVar20 = pFVar20 + 3;
      pFVar46 = (FPhysicsControlModifierSparseData *)&pFVar46[1].PhysicsBlendWeight;
      pFVar32 = local_res20;
      FVar42 = local_1d0;
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar41,CycleScopeEnd);
  }
  return;
}

// ApplyControlsAndModifiers @ 14d9c9f70

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
FAnimNode_RigidBodyWithControl::ApplyControlsAndModifiers
          (FAnimNode_RigidBodyWithControl *this,TVector<double> *param_1,float param_2)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  FActorHandle *this_00;
  FSimulation *this_01;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  FName FVar13;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar14;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *pTVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers> FVar20;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControls> FVar21;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyModifiers> FVar22;
  longlong lVar23;
  FName FVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint *puVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  double dVar36;
  uint local_1f4;
  undefined1 local_1f0;
  undefined1 local_1ef [3];
  FColor_u_0 local_1ec;
  FColor_u_0 local_1e8;
  FColor_u_0 local_1e4;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FName local_1c8;
  ulonglong local_1c0;
  FName local_1b8;
  FName local_1b0;
  FName local_1a0;
  FName local_190;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_180;
  int iStack_178;
  uint uStack_174;
  undefined1 *local_170;
  undefined4 uStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  int local_14c;
  int local_148;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TVector<double>_u_0 local_a8;
  FName local_90;
  FName local_88;
  FName local_80 [4];
  undefined4 local_5c;
  
  iVar26 = 0;
  iVar25 = 0;
  FVar20 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers>)0x0) {
    pFVar19 = ::FName::FName(&local_90,"STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_ApplyControlsAndModifiers,*pFVar19,
                        L"RigidBodyNodeWithControl_ApplyControlsAndModifiers","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar20;
  bVar8 = false;
  bVar11 = false;
  local_1b0.ComparisonIndex.Value = 0;
  local_1b0.Number = 0;
  bVar16 = false;
  bVar9 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14d9ca0e7:
    bVar11 = bVar9;
    bVar8 = bVar16;
    bVar16 = false;
    local_1e0 = local_1b0;
    FVar24 = local_1b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1ec.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ec._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar8 = false;
      bVar11 = true;
      bVar16 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_1d8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x370);
        bVar8 = true;
        bVar11 = true;
        bVar16 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9ca0e7;
    local_1e0 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar16 = true;
  }
  sVar4 = (this->PoseData).UpdateCounter.Counter;
  if (((sVar4 == -1) || ((this->PoseData).UpdateCounter.LastSyncronizedFrame == 0xffffffffffffffff))
     || (sVar4 != (this->PoseData).ExpectedUpdateCounter.Counter)) {
    param_2 = 0.0;
  }
  if ((this->PoseData).BoneTMs.ArrayNum == 0) goto LAB_14d9ca963;
  FVar21 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControls>)0x0) {
    pFVar19 = ::FName::FName(&local_88,"STAT_RigidBodyNodeWithControl_ApplyControls");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyControls>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_ApplyControls,*pFVar19,
                        L"RigidBodyNodeWithControl_ApplyControls","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar21;
  bVar10 = false;
  bVar9 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14d9ca257:
    bVar10 = bVar18;
    bVar9 = bVar17;
    bVar17 = false;
    FVar24 = local_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1d0.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_1d0.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1d0,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x380);
        bVar10 = true;
        bVar9 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9ca257;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar17 = true;
  }
  local_170 = &(this->ControlRecords).field_0x10;
  iVar5 = *(int *)&(this->ControlRecords).field_0x28;
  iVar28 = 0;
  local_1c0 = 1;
  uStack_174 = 1;
  iStack_164 = iVar28;
  local_160 = iVar28;
  iStack_178 = iVar28;
  if (iVar5 != 0) {
    puVar31 = *(uint **)&(this->ControlRecords).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)local_170;
    }
    uStack_174 = *puVar31;
    local_160 = iVar26;
    iStack_178 = iVar26;
    while (uStack_174 == 0) {
      lVar23 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      uStack_174 = 1;
      iStack_164 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_178) goto LAB_14d9ca2f0;
      uStack_174 = puVar31[lVar23 + 1];
    }
    uStack_174 = -uStack_174 & uStack_174;
    uVar1 = (ulonglong)uStack_174 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_150 = (int)lVar23;
    iStack_164 = local_150 + -1 + local_160;
    if (iVar5 < iStack_164) {
      iStack_164 = iVar5;
    }
  }
LAB_14d9ca2f0:
  local_180 = &this->ControlRecords;
  uStack_15c = local_5c;
  iStack_158 = *(int *)&(this->ControlRecords).field_0x8 -
               *(int *)&(this->ControlRecords).field_0x34;
  local_1f4 = *(uint *)&(this->ControlRecords).field_0x28;
  uStack_168 = 0xffffffff;
  TStack_100.CurrentBitIndex = iStack_164;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uStack_174,iStack_178);
  uVar32 = local_1f4 & 0xffffffe0;
  iVar33 = (int)local_1f4 >> 5;
  TStack_100._28_4_ = local_5c;
  TStack_100.BaseBitIndex = local_160;
  uStack_e0 = CONCAT44(uStack_154,iStack_158);
  local_108 = local_180;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_170;
  if ((((int)local_1f4 < 0) || (iVar5 < (int)local_1f4)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar34 = *(uint *)&(this->ControlRecords).field_0x28;
  if (local_1f4 != uVar34) {
    puVar29 = *(undefined1 **)&(this->ControlRecords).field_0x20;
    if (puVar29 == (undefined1 *)0x0) {
      puVar29 = &(this->ControlRecords).field_0x10;
    }
    uVar35 = -1 << ((byte)local_1f4 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar33 * 4);
    while (uVar35 == 0) {
      lVar23 = (longlong)iVar33;
      uVar32 = uVar32 + 0x20;
      iVar33 = iVar33 + 1;
      local_1f4 = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
      goto LAB_14d9ca425;
      uVar35 = *(uint *)(puVar29 + lVar23 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_14c = (int)lVar23;
    local_1f4 = local_14c + -1 + uVar32;
    if ((int)uVar34 < (int)local_1f4) {
      local_1f4 = uVar34;
    }
  }
LAB_14d9ca425:
  while( true ) {
    pTVar14 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_1f0 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f0);
    }
    if (((TStack_100.CurrentBitIndex == local_1f4) &&
        (TStack_100.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->ControlRecords).field_0x10)) &&
       (pTVar14 == &this->ControlRecords)) break;
    lVar23 = *(longlong *)pTVar14 + (longlong)TStack_100.CurrentBitIndex * 0x240;
    if (*(char *)(lVar23 + 0x160) != '\0') {
      ApplyControl(this,(FRigidBodyControlRecord *)(lVar23 + 0x10),param_2);
    }
    SetPhysicsJointEnabled(*(FJointHandle **)(lVar23 + 0x228),*(bool *)(lVar23 + 0x160));
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  FVar22 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyModifiers>)0x0) {
    pFVar19 = ::FName::FName(local_80,"STAT_RigidBodyNodeWithControl_ApplyModifiers");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyModifiers>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_ApplyModifiers,*pFVar19,
                        L"RigidBodyNodeWithControl_ApplyModifiers","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar22;
  bVar10 = false;
  bVar9 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar18 = false;
  bVar17 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_14d9ca634:
    bVar10 = bVar18;
    bVar9 = bVar17;
    bVar17 = false;
    local_1b8 = local_190;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e4._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar10 = false;
      bVar9 = true;
      bVar18 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c8.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_1c8.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x38f);
        bVar10 = true;
        bVar9 = true;
        bVar18 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9ca634;
    local_1b8 = FVar24;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar17 = true;
  }
  puVar29 = &(this->ModifierRecords).field_0x10;
  iVar5 = *(int *)&(this->ModifierRecords).field_0x28;
  local_138 = &this->ModifierRecords;
  iStack_11c = iVar28;
  local_118 = 0;
  if (iVar5 != 0) {
    puVar31 = *(uint **)&(this->ModifierRecords).field_0x20;
    if (puVar31 == (uint *)0x0) {
      puVar31 = (uint *)puVar29;
    }
    uVar32 = *puVar31;
    iVar25 = iVar26;
    while (uVar32 == 0) {
      lVar23 = (longlong)iVar25;
      local_118 = local_118 + 0x20;
      iVar25 = iVar25 + 1;
      iStack_11c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14d9ca6bf;
      uVar32 = puVar31[lVar23 + 1];
    }
    local_1c0 = (ulonglong)(-uVar32 & uVar32);
    uVar1 = local_1c0 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    local_148 = (int)lVar23;
    iStack_11c = local_148 + -1 + local_118;
    if (iVar5 < iStack_11c) {
      iStack_11c = iVar5;
    }
  }
LAB_14d9ca6bf:
  uStack_12c = (undefined4)local_1c0;
  iStack_114 = iStack_164;
  iStack_110 = *(int *)&(this->ModifierRecords).field_0x8 -
               *(int *)&(this->ModifierRecords).field_0x34;
  uVar32 = *(uint *)&(this->ModifierRecords).field_0x28;
  uStack_120 = 0xffffffff;
  uVar34 = uVar32 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uStack_12c,iVar25);
  TStack_d0.CurrentBitIndex = iStack_11c;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar32 >> 5;
  TStack_d0._28_4_ = iStack_164;
  TStack_d0.BaseBitIndex = local_118;
  uStack_b0 = CONCAT44(uStack_10c,iStack_110);
  iStack_130 = iVar25;
  local_128 = puVar29;
  local_d8 = local_138;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar29;
  if ((((int)uVar32 < 0) || (iVar5 < (int)uVar32)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar12 = __real_3f800000;
  uVar35 = *(uint *)&(this->ModifierRecords).field_0x28;
  if (uVar32 != uVar35) {
    puVar30 = *(undefined1 **)&(this->ModifierRecords).field_0x20;
    if (puVar30 == (undefined1 *)0x0) {
      puVar30 = puVar29;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar30 + (longlong)iVar26 * 4);
    while (uVar32 == 0) {
      lVar23 = (longlong)iVar26;
      uVar34 = uVar34 + 0x20;
      iVar26 = iVar26 + 1;
      uVar32 = uVar35;
      if ((int)((uVar35 - 1) + ((int)(uVar35 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
      goto LAB_14d9ca7f1;
      uVar32 = *(uint *)(puVar30 + lVar23 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar23 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar32 = (uVar34 - 1) + (int)lVar23;
    if ((int)uVar35 < (int)uVar32) {
      uVar32 = uVar35;
    }
  }
LAB_14d9ca7f1:
  while( true ) {
    pTVar15 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1ef);
    }
    FVar13 = local_1b8;
    FVar24 = local_1e0;
    if (((TStack_d0.CurrentBitIndex == uVar32) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar29)) &&
       (pTVar15 == &this->ModifierRecords)) break;
    lVar23 = *(longlong *)pTVar15;
    lVar27 = (longlong)TStack_d0.CurrentBitIndex * 0x40;
    this_00 = *(FActorHandle **)(lVar27 + 0x30 + lVar23);
    if ((this_00 != (FActorHandle *)0x0) &&
       (this_01 = this->Simulation, this_01 != (FSimulation *)0x0)) {
      cVar3 = *(char *)(lVar27 + 0x20 + lVar23);
      if (cVar3 != '\x03') {
        ImmediatePhysics_Chaos::FSimulation::SetIsKinematic(this_01,this_00,cVar3 != '\x02');
      }
      fVar2 = *(float *)(lVar27 + 0x24 + lVar23);
      if ((fVar2 != fVar12) &&
         (bVar18 = ImmediatePhysics_Chaos::FActorHandle::IsGravityEnabled(this_00), bVar18)) {
        dVar7 = ImmediatePhysics_Chaos::FActorHandle::GetMass(this_00);
        dVar36 = (double)((float)dVar7 * (fVar2 - fVar12));
        dVar7 = (param_1->field0_0x0)._s_0.Y * dVar36;
        local_a8._s_0.Z = dVar36 * (param_1->field0_0x0)._s_0.Z;
        local_a8._8_4_ = SUB84(dVar7,0);
        local_a8._0_8_ = (param_1->field0_0x0)._s_0.X * dVar36;
        local_a8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        ImmediatePhysics_Chaos::FActorHandle::AddForce(this_00,(TVector<double> *)&local_a8._s_0);
      }
      cVar3 = *(char *)(lVar27 + 0x21 + lVar23);
      if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
        bVar18 = true;
      }
      else {
        bVar18 = false;
      }
      ImmediatePhysics_Chaos::FSimulation::SetHasCollision(this_01,this_00,bVar18);
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
LAB_14d9ca963:
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// ApplyCurrentConstraintProfile @ 14d9ca9e0

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
FAnimNode_RigidBodyWithControl::ApplyCurrentConstraintProfile(FAnimNode_RigidBodyWithControl *this)

{
  int iVar1;
  FActorHandle *pFVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  FPBDJointSettings *pFVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile> FVar16;
  TVector<ImmediatePhysics_Chaos::FActorHandle_*,2> *pTVar17;
  FPBDJointConstraintHandle *this_00;
  FPBDJointSettings *pFVar18;
  FPBDJointSettings *pFVar19;
  longlong lVar20;
  ulonglong uVar21;
  FPBDJointSettings *pFVar22;
  FNameEntryId FVar23;
  FName FVar24;
  FJointHandle *this_01;
  FConstraintProfileProperties *pFVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  FConstraintProfileProperties *pFVar28;
  undefined1 auStackY_428 [32];
  undefined1 local_3c7;
  undefined1 local_3c6 [2];
  uint local_3c4;
  uint local_3c0;
  uint uStack_3bc;
  FName local_3b8;
  FColor_u_0 local_3b0 [2];
  FName local_3a8;
  FName local_3a0;
  longlong local_398;
  FName local_390;
  FName local_388;
  FJointHandle *local_378;
  UPhysicsAsset *local_370;
  FScriptContainerElement *local_368;
  FName local_360;
  FPBDJointSettings local_358;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_428;
  FVar16 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile>)0x0)
  {
    pFVar15 = ::FName::FName(&local_360,
                             "STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigidBodyNodeWithControl_ApplyCurrentConstraintProfile,
                          *pFVar15,L"RigidBodyNodeWithControl_ApplyCurrentConstraintProfile",
                          "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar7 = false;
  bVar9 = false;
  local_388.ComparisonIndex.Value = 0;
  local_388.Number = 0;
  bVar12 = false;
  bVar13 = false;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar27 = FVar24.Number;
  if ((FVar23.Value != 0) || (bVar6 = bVar7, bVar8 = bVar9, uVar27 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3b0[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar7 = false;
      bVar9 = true;
      bVar12 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_3a8.ComparisonIndex.Value = FVar23.Value;
        local_3a8.Number = uVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_3a8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x3cd);
        bVar7 = true;
        bVar9 = true;
        bVar12 = true;
        bVar13 = true;
      }
    }
    bVar6 = bVar7;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_3c0 = FVar23.Value;
      uStack_3bc = uVar27;
      local_390 = FVar24;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar12 = true;
      goto LAB_14d9cab6e;
    }
  }
  bVar9 = bVar13;
  bVar7 = bVar12;
  bVar12 = false;
  local_390 = local_388;
  FVar24 = local_388;
LAB_14d9cab6e:
  local_3c4 = 0;
  if ((this->Joints).ArrayNum != 0) {
    local_398 = 0;
    do {
      lVar20 = local_398;
      uVar27 = local_3c4;
      uVar14 = 0;
      if ((int)local_3c4 < (this->Joints).ArrayNum) {
        uVar14 = ~local_3c4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = *(FJointHandle **)((this->Joints).AllocatorInstance.Data + lVar20);
      local_378 = this_01;
      if (this_01 != (FJointHandle *)0x0) {
        pTVar17 = ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(this_01);
        pFVar2 = pTVar17->V[1];
        pTVar17 = ImmediatePhysics_Chaos::FJointHandle::GetActorHandles(this_01);
        if (pFVar2 == (FActorHandle *)0x0) {
          FVar24.ComparisonIndex.Value = 0;
          FVar24.Number = 0;
        }
        else {
          FVar24 = pFVar2->Name;
        }
        if (pTVar17->V[0] == (FActorHandle *)0x0) {
          local_3b8.ComparisonIndex.Value = 0;
          local_3b8.Number = 0;
        }
        else {
          local_3b8 = pTVar17->V[0]->Name;
        }
        local_370 = this->PhysicsAssetToUse;
        local_3c0 = (local_370->ConstraintSetup).ArrayNum;
        uVar21 = (ulonglong)(int)local_3c0;
        pFVar26 = (local_370->ConstraintSetup).AllocatorInstance.Data;
        local_368 = pFVar26 + uVar21 * 8;
        local_3a0 = FVar24;
        while( true ) {
          pFVar10 = local_368;
          FVar3 = local_3b8;
          if ((local_370->ConstraintSetup).ArrayNum != (int)uVar21) {
            local_3c7 = 0;
            `TCheckedPointerIterator<TObjectPtr<UPhysicsConstraintTemplate>,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_3c7);
          }
          lVar20 = local_398;
          uVar27 = local_3c4;
          if (pFVar26 == pFVar10) break;
          lVar20 = *(longlong *)pFVar26;
          if ((*(FName *)(lVar20 + 0x98) == FVar24) && (*(FName *)(lVar20 + 0x90) == FVar3)) {
            this_00 = ImmediatePhysics_Chaos::FJointHandle::GetConstraint(this_01);
            FVar24 = this->ConstraintProfile;
            if (FVar24 == (FName)0x0) {
LAB_14d9cad1f:
              pFVar25 = (FConstraintProfileProperties *)(lVar20 + 0x2d8);
            }
            else {
              iVar1 = *(int *)(lVar20 + 0x2d0);
              pFVar25 = *(FConstraintProfileProperties **)(lVar20 + 0x2c8);
              pFVar28 = (FConstraintProfileProperties *)
                        ((longlong)iVar1 * 0x168 + (longlong)pFVar25);
              while( true ) {
                if (*(int *)(lVar20 + 0x2d0) != iVar1) {
                  local_3c6[0] = 0;
                  `TCheckedPointerIterator<FPhysicsConstraintProfileHandle_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_3c6);
                }
                if (pFVar25 == pFVar28) goto LAB_14d9cad1f;
                FVar3.ComparisonIndex.Value = (uint)pFVar25[1].ProjectionLinearTolerance;
                FVar3.Number = (uint)pFVar25[1].ProjectionAngularTolerance;
                if (FVar3 == FVar24) break;
                pFVar25 = (FConstraintProfileProperties *)&pFVar25[1].ProjectionLinearAlpha;
              }
            }
            pFVar18 = Chaos::FPBDJointConstraintHandle::GetSettings(this_00);
            lVar20 = 6;
            pFVar11 = &local_358;
            do {
              pFVar22 = pFVar11;
              pFVar19 = pFVar18;
              pFVar11 = (FPBDJointSettings *)&(pFVar22->ConnectorTransforms).V[1].field_0x20;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x8;
              pFVar18 = (FPBDJointSettings *)&(pFVar19->ConnectorTransforms).V[1].field_0x20;
              *(undefined8 *)(pFVar22->ConnectorTransforms).V =
                   *(undefined8 *)(pFVar19->ConnectorTransforms).V;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x8 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x18;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x10 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x10;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x18 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x28;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x20 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x20;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x28 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x38;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x30 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x30;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x38 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x48;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x40 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x40;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x48 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x58;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x50 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[0].field_0x50;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[0].field_0x58 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x8;
              *(undefined8 *)((pFVar22->ConnectorTransforms).V + 1) =
                   *(undefined8 *)((pFVar19->ConnectorTransforms).V + 1);
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x8 = uVar5;
              uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x18;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x10 =
                   *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x10;
              *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x18 = uVar5;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x28;
            *(undefined8 *)pFVar11 = *(undefined8 *)pFVar18;
            *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x28 = uVar5;
            uVar5 = *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x38;
            *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x30 =
                 *(undefined8 *)&(pFVar19->ConnectorTransforms).V[1].field_0x30;
            *(undefined8 *)&(pFVar22->ConnectorTransforms).V[1].field_0x38 = uVar5;
            ImmediatePhysics::UpdateJointSettingsFromConstraintProfile(pFVar25,&local_358);
            Chaos::FPBDJointConstraintHandle::SetSettings(this_00,&local_358);
            this_01 = local_378;
            FVar24 = local_3a0;
          }
          pFVar26 = pFVar26 + 8;
          uVar21 = (ulonglong)local_3c0;
        }
      }
      local_3c4 = uVar27 + 1;
      local_398 = lVar20 + 8;
      FVar24 = local_390;
      bVar6 = bVar7;
      bVar8 = bVar9;
    } while (local_3c4 != (this->Joints).ArrayNum);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar24,CycleScopeEnd);
  }
  return;
}

// ApplyCurrentControlProfile @ 14d9caeb0

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
FAnimNode_RigidBodyWithControl::ApplyCurrentControlProfile(FAnimNode_RigidBodyWithControl *this)

{
  UPhysicsControlAsset *pUVar1;
  FPhysicsControlControlAndModifierUpdates *pFVar2;
  FString local_18;
  
  pUVar1 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPhysicsControlAsset *)0x0) || (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
    if (2 < (byte)LogPhysicsControl._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      return;
    }
  }
  else {
    pFVar2 = TMapBase<FName,FPhysicsControlControlAndModifierUpdates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlControlAndModifierUpdates,0>_>
             ::Find((TMapBase<FName,FPhysicsControlControlAndModifierUpdates,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlControlAndModifierUpdates,0>_>
                     *)&((this->PhysicsControlAsset).field0_0x0.DebugPtr)->Profiles,
                    this->CurrentControlProfile);
    if (pFVar2 == (FPhysicsControlControlAndModifierUpdates *)0x0) {
      if (2 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(&this->CurrentControlProfile,&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      ApplyControlAndBodyModifierDatas
                (this,&pFVar2->ControlUpdates,&pFVar2->ControlMultiplierUpdates,
                 &pFVar2->ModifierUpdates);
    }
  }
  return;
}

// ApplyKinematicTargets @ 14d9cb790

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
FAnimNode_RigidBodyWithControl::ApplyKinematicTargets(FAnimNode_RigidBodyWithControl *this)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  code *pcVar8;
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
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  FRigidBodyKinematicTargets *pFVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  FName *pFVar34;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets> FVar35;
  int *piVar36;
  TQuat<double> *pTVar37;
  FPosQuat *pFVar38;
  longlong lVar39;
  longlong *plVar40;
  undefined1 *puVar41;
  FNameEntryId FVar42;
  FName FVar43;
  int iVar44;
  uint *puVar45;
  uint uVar46;
  longlong lVar47;
  uint uVar48;
  double dVar49;
  double dVar50;
  undefined1 auStackY_348 [32];
  undefined1 local_2e7 [3];
  uint local_2e4;
  FColor_u_0 local_2e0 [2];
  uint local_2d8;
  uint uStack_2d4;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  int local_2b0;
  undefined1 local_2a8 [24];
  undefined8 uStack_290;
  int local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  FRigidBodyKinematicTargets *local_268;
  undefined1 auStack_260 [20];
  uint uStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TVector<double>_u_0 local_1f8;
  FName local_1e0;
  TVector<double>_u_0 local_1d8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined4 local_17c;
  FPosQuat local_178;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  iVar44 = 0;
  FVar35 = StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets;
  if (StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets>)0x0) {
    pFVar34 = ::FName::FName(&local_1e0,"STAT_RigidBodyNodeWithControl_ApplyKinematicTargets");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_ApplyKinematicTargets,*pFVar34,
                        L"RigidBodyNodeWithControl_ApplyKinematicTargets","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar35;
  bVar23 = false;
  bVar24 = false;
  local_2c0.ComparisonIndex.Value = 0;
  local_2c0.Number = 0;
  bVar31 = false;
  bVar32 = false;
  FVar42 = FVar43.ComparisonIndex.Value;
  uVar46 = FVar43.Number;
  if ((FVar42.Value != 0) || (uVar46 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e0[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar23 = false;
      bVar24 = true;
      bVar31 = false;
      bVar32 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2d0.ComparisonIndex.Value = FVar42.Value;
        local_2d0.Number = uVar46;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2d0,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x39c);
        bVar23 = true;
        bVar24 = true;
        bVar31 = true;
        bVar32 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2d8 = FVar42.Value;
      uStack_2d4 = uVar46;
      local_2c8 = FVar43;
      FThreadStats::AddMessage(FVar43,CycleScopeStart);
      bVar31 = true;
      goto LAB_14d9cb906;
    }
  }
  bVar24 = bVar32;
  bVar23 = bVar31;
  bVar31 = false;
  local_2c8 = local_2c0;
  FVar43 = local_2c0;
LAB_14d9cb906:
  if ((this->PoseData).BoneTMs.ArrayNum != 0) {
    puVar7 = &(this->KinematicTargets).Targets.field_0x10;
    iVar4 = *(int *)&(this->KinematicTargets).Targets.field_0x28;
    local_2a8._0_8_ = &this->KinematicTargets;
    local_2a8._12_4_ = 1;
    iVar33 = iVar44;
    local_288 = iVar44;
    if (iVar4 != 0) {
      puVar45 = *(uint **)&(this->KinematicTargets).Targets.field_0x20;
      if (puVar45 == (uint *)0x0) {
        puVar45 = (uint *)puVar7;
      }
      uVar46 = *puVar45;
      local_288 = 0;
      iVar44 = 0;
      while (uVar46 == 0) {
        lVar39 = (longlong)iVar44;
        local_288 = local_288 + 0x20;
        iVar44 = iVar44 + 1;
        iVar33 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar44) goto LAB_14d9cb9ce;
        uVar46 = puVar45[lVar39 + 1];
      }
      local_2a8._12_4_ = -uVar46 & uVar46;
      uVar1 = (ulonglong)(uint)local_2a8._12_4_ * 2 + 1;
      lVar39 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_2b0 = (int)lVar39;
      iVar33 = local_288 + -1 + local_2b0;
      if (iVar4 < iVar33) {
        iVar33 = iVar4;
      }
    }
LAB_14d9cb9ce:
    uVar46 = *(uint *)&(this->KinematicTargets).Targets.field_0x28;
    uStack_284 = local_17c;
    iStack_280 = *(int *)&(this->KinematicTargets).Targets.field_0x8 -
                 *(int *)&(this->KinematicTargets).Targets.field_0x34;
    uVar48 = uVar46 & 0xffffffe0;
    uStack_290._0_4_ = 0xffffffff;
    uStack_290._4_4_ = iVar33;
    auStack_260._0_8_ = CONCAT44(local_2a8._12_4_,iVar44);
    local_2a8._16_8_ = puVar7;
    iVar33 = (int)uVar46 >> 5;
    local_248._4_4_ = local_17c;
    local_248._0_4_ = local_288;
    uStack_240 = CONCAT44(uStack_27c,iStack_280);
    stack0xfffffffffffffdb0 = uStack_290;
    local_2e4 = uVar46;
    local_2a8._8_4_ = iVar44;
    local_268 = (FRigidBodyKinematicTargets *)local_2a8._0_8_;
    auStack_260._8_8_ = puVar7;
    if ((((int)uVar46 < 0) || (iVar4 < (int)uVar46)) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar32)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar29 = _UNK_150689688;
    dVar28 = ___xmm_3ff00000000000003ff0000000000000;
    dVar27 = _UNK_150689518;
    dVar26 = ___xmm_00000000000000003ff0000000000000;
    uVar5 = *(uint *)&(this->KinematicTargets).Targets.field_0x28;
    uVar25 = local_2e4;
    if (uVar46 != uVar5) {
      puVar41 = *(undefined1 **)&(this->KinematicTargets).Targets.field_0x20;
      if (puVar41 == (undefined1 *)0x0) {
        puVar41 = puVar7;
      }
      uVar46 = -1 << ((byte)uVar46 & 0x1f) & *(uint *)(puVar41 + (longlong)iVar33 * 4);
      while (uVar46 == 0) {
        lVar39 = (longlong)iVar33;
        uVar48 = uVar48 + 0x20;
        iVar33 = iVar33 + 1;
        local_2e4 = uVar5;
        uVar25 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
        goto LAB_14d9cbb40;
        uVar46 = *(uint *)(puVar41 + lVar39 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar46 & uVar46) * 2 + 1;
      lVar39 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar39 == 0; lVar39 = lVar39 + -1) {
        }
      }
      local_2d8 = (uint)lVar39;
      local_2e4 = (local_2d8 - 1) + uVar48;
      uVar25 = local_2e4;
      if ((int)uVar5 < (int)local_2e4) {
        local_2e4 = uVar5;
        uVar25 = uVar5;
      }
    }
LAB_14d9cbb40:
    while( true ) {
      pFVar30 = local_268;
      if (*(int *)&(local_268->Targets).field_0x8 - *(int *)&(local_268->Targets).field_0x34 !=
          (int)uStack_240) {
        local_2e7[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyKinematicTarget>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e7);
      }
      if (((uStack_24c == uVar25) &&
          ((undefined1 *)auStack_260._8_8_ == &(this->KinematicTargets).Targets.field_0x10)) &&
         (FVar43 = local_2c8, pFVar30 == &this->KinematicTargets)) break;
      lVar39 = *(longlong *)&pFVar30->Targets;
      lVar47 = (longlong)(int)uStack_24c * 0x40;
      lVar6 = *(longlong *)(lVar47 + lVar39);
      uVar46 = ::GetTypeHash((FNameEntryId)(uint)lVar6);
      if (*(int *)&(this->ModifierRecords).field_0x8 != *(int *)&(this->ModifierRecords).field_0x34)
      {
        puVar7 = *(undefined1 **)&(this->ModifierRecords).field_0x40;
        puVar41 = &(this->ModifierRecords).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar41 = puVar7;
        }
        iVar44 = *(int *)(puVar41 +
                         (ulonglong)
                         (*(int *)&(this->ModifierRecords).field_0x48 - 1U &
                         (int)((ulonglong)lVar6 >> 0x20) + uVar46) * 4);
        if (iVar44 != -1) {
          do {
            plVar40 = (longlong *)((longlong)iVar44 * 0x40 + *(longlong *)&this->ModifierRecords);
            if (*plVar40 == lVar6) {
              pFVar34 = (FName *)(plVar40 + 1);
              if (plVar40 == (longlong *)0x0) {
                pFVar34 = (FName *)0x0;
              }
              if ((pFVar34 != (FName *)0x0) && (FVar43 = pFVar34[5], FVar43 != (FName)0x0)) {
                piVar36 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                  *)&this->BodyNameToIndexMap,*pFVar34);
                if (piVar36 == (int *)0x0) {
                  iVar44 = -1;
                }
                else {
                  iVar44 = *piVar36;
                }
                bVar32 = ImmediatePhysics_Chaos::FActorHandle::GetIsKinematic
                                   ((FActorHandle *)FVar43);
                if ((bVar32) && (iVar44 != -1)) {
                  pauVar2 = (undefined1 (*) [16])(lVar47 + 8 + lVar39);
                  dVar11 = *(double *)*pauVar2;
                  dVar22 = *(double *)(*pauVar2 + 8);
                  local_238 = *pauVar2;
                  dVar3 = *(double *)(lVar47 + 0x18 + lVar39);
                  local_228._0_8_ = dVar3;
                  pTVar37 = UE::Math::TRotator<double>::Quaternion
                                      ((TRotator<double> *)(lVar39 + 0x20 + lVar47),
                                       (TQuat<double> *)local_2a8);
                  dVar10 = pTVar37->X;
                  dVar12 = pTVar37->Y;
                  dVar16 = pTVar37->Z;
                  dVar17 = pTVar37->W;
                  local_218 = dVar10;
                  dStack_210 = dVar12;
                  local_208 = dVar16;
                  dStack_200 = dVar17;
                  if ((iVar44 < 0) || ((this->PoseData).BoneTMs.ArrayNum <= iVar44)) {
                    bVar32 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<3348598718642258862>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                                        ,0x3ae,"PoseData.IsValidIndex(BodyIndex)");
                    if (bVar32) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                  }
                  else if (*(char *)((longlong)&pFVar34[3].ComparisonIndex.Value + 2) == '\x02') {
                    pFVar38 = UE::PhysicsControl::FRigidBodyPoseData::GetTM
                                        (&this->PoseData,&local_178,iVar44);
                    dVar18 = (pFVar38->Rotation).X;
                    dVar19 = (pFVar38->Rotation).Y;
                    dVar20 = (pFVar38->Rotation).Z;
                    dVar21 = (pFVar38->Rotation).W;
                    dVar13 = dVar19 * dVar10;
                    dVar14 = dVar19 * dVar12;
                    dVar49 = dVar18 * dVar12;
                    dVar50 = dVar18 * dVar10;
                    dVar9 = dVar20 * dVar10;
                    dVar15 = dVar20 * dVar16;
                    dVar10 = dVar18 * dVar17 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                             dVar21 * dVar10 +
                             dVar19 * dVar16 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                             dVar20 * dVar12 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                    dVar12 = dVar18 * dVar16 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                             dVar21 * dVar12 +
                             dVar19 * dVar17 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                             dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                    ;
                    dVar16 = dVar49 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64
                                      [0] + dVar21 * dVar16 +
                             dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64
                                      [0] +
                             dVar20 * dVar17 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                    dVar17 = dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64
                                      [1] + dVar21 * dVar17 +
                             dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64
                                      [1] +
                             dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64
                                      [1];
                    local_1b8._8_4_ = SUB84(dVar12,0);
                    local_1b8._0_8_ = dVar10;
                    local_1b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
                    local_1a8._8_4_ = SUB84(dVar17,0);
                    local_1a8._0_8_ = dVar16;
                    local_1a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
                    local_1d8._s_0.X = dVar11;
                    local_1d8._s_0.Y = dVar22;
                    local_1d8._s_0.Z = dVar3;
                    UE::Math::TQuat<double>::RotateVector
                              (&pFVar38->Rotation,(TVector<double> *)&local_1f8._s_0,
                               (TVector<double> *)&local_1d8._s_0);
                    dVar3 = local_1f8._s_0.Y + (pFVar38->Translation).field0_0x0._s_0.Y;
                    dVar11 = local_1f8._s_0.Z + (pFVar38->Translation).field0_0x0._s_0.Z;
                    local_238._8_4_ = SUB84(dVar3,0);
                    local_238._0_8_ = local_1f8._s_0.X + (pFVar38->Translation).field0_0x0._s_0.X;
                    local_238._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                    local_2a8._16_8_ = dVar11;
                    local_228._8_4_ = (undefined4)uStack_290;
                    local_228._0_8_ = dVar11;
                    local_228._12_4_ = uStack_290._4_4_;
                  }
                  else if (2 < (byte)LogPhysicsControl._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
                  }
                  local_138.Translation.XY.m128d_f64[1]._4_4_ = local_238._12_4_;
                  local_138.Translation.ZW.m128d_f64[0] = (double)local_228._0_8_;
                  local_138.Translation.ZW.m128d_f64[1] = 0.0;
                  local_138.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
                  local_138.Rotation.XY.m128d_f64[0] = dVar10;
                  local_138.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
                  local_138.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar17,0);
                  local_138.Rotation.ZW.m128d_f64[0] = dVar16;
                  local_138.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
                  local_138.Translation.XY.m128d_f64[0]._0_4_ = local_238._0_4_;
                  local_138.Translation.XY.m128d_f64[0]._4_4_ = local_238._4_4_;
                  local_138.Translation.XY.m128d_f64[1]._0_4_ = local_238._8_4_;
                  local_138.Scale3D.XY.m128d_f64[0] = dVar28;
                  local_138.Scale3D.XY.m128d_f64[1] = dVar29;
                  local_138.Scale3D.ZW.m128d_f64[0] = dVar26;
                  local_138.Scale3D.ZW.m128d_f64[1] = dVar27;
                  ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget
                            ((FActorHandle *)FVar43,&local_138);
                }
              }
              break;
            }
            iVar44 = (int)plVar40[7];
          } while (iVar44 != -1);
        }
      }
      stack0xfffffffffffffdb0 = (double)CONCAT44(uStack_24c,auStack_260._16_4_ & ~auStack_260._4_4_)
      ;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_260);
    }
  }
  if (bVar24) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar31) {
    FThreadStats::AddMessage(FVar43,CycleScopeEnd);
  }
  return;
}

// ApplyModifier @ 14d9cbfa0

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
FAnimNode_RigidBodyWithControl::ApplyModifier
          (FAnimNode_RigidBodyWithControl *this,FRigidBodyModifierRecord *param_1,
          TVector<double> *param_2)

{
  float fVar1;
  EPhysicsMovementType EVar2;
  uchar uVar3;
  FActorHandle *this_00;
  FSimulation *this_01;
  bool bVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_38 [2];
  
  this_00 = param_1->ActorHandle;
  if ((this_00 != (FActorHandle *)0x0) &&
     (this_01 = this->Simulation, this_01 != (FSimulation *)0x0)) {
    EVar2 = (param_1->ModifierData).MovementType;
    if (EVar2 != Default) {
      ImmediatePhysics_Chaos::FSimulation::SetIsKinematic(this_01,this_00,EVar2 != Simulated);
    }
    fVar1 = (param_1->ModifierData).GravityMultiplier;
    if ((fVar1 != __real_3f800000) &&
       (bVar4 = ImmediatePhysics_Chaos::FActorHandle::IsGravityEnabled(this_00), bVar4)) {
      dVar5 = ImmediatePhysics_Chaos::FActorHandle::GetMass(this_00);
      dVar6 = (double)((float)dVar5 * (fVar1 - __real_3f800000));
      local_38[0]._16_8_ = dVar6 * (param_2->field0_0x0)._s_0.Z;
      dVar5 = dVar6 * (param_2->field0_0x0)._s_0.Y;
      local_38[0]._8_4_ = SUB84(dVar5,0);
      local_38[0]._0_8_ = dVar6 * (param_2->field0_0x0)._s_0.X;
      local_38[0]._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      ImmediatePhysics_Chaos::FActorHandle::AddForce(this_00,(TVector<double> *)&local_38[0]._s_0);
    }
    uVar3 = (param_1->ModifierData).CollisionType.Value;
    if ((uVar3 == '\x02') || (uVar3 == '\x03')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    ImmediatePhysics_Chaos::FSimulation::SetHasCollision(this_01,this_00,bVar4);
  }
  return;
}

// CalculateSimulationSpaceMotion @ 14d9cd400

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
FAnimNode_RigidBodyWithControl::CalculateSimulationSpaceMotion
          (FAnimNode_RigidBodyWithControl *this,ESimulationSpace param_1,TTransform<double> *param_2
          ,TTransform<double> *param_3,float param_4,FSimSpaceSettings *param_5,
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined4 uVar52;
  undefined1 auVar51 [16];
  undefined4 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
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
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
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
  double local_1b8;
  double dStack_1b0;
  TVector<double> local_148;
  TVector<double> local_130;
  TVector<double> local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [7];
  
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
      dVar37 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Y;
      (param_6->field0_0x0)._s_0.X = (param_5->ExternalLinearVelocity).field0_0x0._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar37;
      (param_6->field0_0x0)._s_0.Z = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Z;
      dVar37 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Y;
      (param_7->field0_0x0)._s_0.X = (param_5->ExternalAngularVelocity).field0_0x0._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar37;
      (param_7->field0_0x0)._s_0.Z = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Z;
    }
    else {
      dVar37 = (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dVar1 = (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      dVar2 = (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar3 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dVar9 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      dVar50 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar58 = (double)param_4;
      dVar64 = __real_3ff0000000000000 / dVar58;
      dVar49 = ((param_2->Translation).ZW.m128d_f64[0] -
               (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0]) * dVar64;
      dVar36 = ((param_2->Translation).XY.m128d_f64[0] -
               (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0]) * dVar64;
      dVar44 = ((param_2->Translation).XY.m128d_f64[1] -
               (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1]) * dVar64;
      (param_6->field0_0x0)._s_0.X = dVar36;
      (param_6->field0_0x0)._s_0.Y = dVar44;
      (param_6->field0_0x0)._s_0.Z = dVar49;
      (param_8->field0_0x0)._s_0.X = (dVar36 - (dVar3 - dVar37) * dVar64) * dVar64;
      (param_8->field0_0x0)._s_0.Y = (dVar44 - (dVar9 - dVar1) * dVar64) * dVar64;
      (param_8->field0_0x0)._s_0.Z = (dVar49 - (dVar50 - dVar2) * dVar64) * dVar64;
      local_228 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_220 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_218 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_210 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      local_208 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_200 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_1f8 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_1f0 = (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      Chaos::TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_258,(TRotation<double,3> *)&local_208,
                 (TRotation<double,3> *)&local_228,dVar58);
      local_1e8 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_1e0 = (param_2->Rotation).XY.m128d_f64[1];
      local_1d8 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_1d0 = (param_2->Rotation).ZW.m128d_f64[1];
      local_1c8 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      dStack_1c0 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      local_1b8 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dStack_1b0 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      Chaos::TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_240,(TRotation<double,3> *)&local_1c8,
                 (TRotation<double,3> *)&local_1e8,dVar58);
      (param_7->field0_0x0)._s_0.X = local_240;
      (param_7->field0_0x0)._s_0.Y = dStack_238;
      (param_7->field0_0x0)._s_0.Z = local_230;
      dVar37 = (param_7->field0_0x0)._s_0.Y;
      dVar1 = (param_7->field0_0x0)._s_0.Z;
      (param_9->field0_0x0)._s_0.X = ((param_7->field0_0x0)._s_0.X - local_258) * dVar64;
      (param_9->field0_0x0)._s_0.Y = (dVar37 - local_250) * dVar64;
      (param_9->field0_0x0)._s_0.Z = (dVar1 - local_248) * dVar64;
      (param_6->field0_0x0)._s_0.Z = (double)param_5->VelocityScaleZ * (param_6->field0_0x0)._s_0.Z;
      (param_8->field0_0x0)._s_0.Z = (double)param_5->VelocityScaleZ * (param_8->field0_0x0)._s_0.Z;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_6,&local_148,(double)param_5->MaxLinearVelocity);
      dVar37 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Y;
      dVar1 = (param_5->ExternalLinearVelocity).field0_0x0._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.Y;
      dVar3 = (pTVar17->field0_0x0)._s_0.Z;
      (param_6->field0_0x0)._s_0.X =
           (pTVar17->field0_0x0)._s_0.X + (param_5->ExternalLinearVelocity).field0_0x0._s_0.X;
      (param_6->field0_0x0)._s_0.Y = dVar37 + dVar2;
      (param_6->field0_0x0)._s_0.Z = dVar1 + dVar3;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_7,&local_130,(double)param_5->MaxAngularVelocity);
      dVar37 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Y;
      dVar1 = (param_5->ExternalAngularVelocity).field0_0x0._s_0.Z;
      dVar2 = (pTVar17->field0_0x0)._s_0.Y;
      dVar3 = (pTVar17->field0_0x0)._s_0.Z;
      (param_7->field0_0x0)._s_0.X =
           (param_5->ExternalAngularVelocity).field0_0x0._s_0.X + (pTVar17->field0_0x0)._s_0.X;
      (param_7->field0_0x0)._s_0.Y = dVar37 + dVar2;
      (param_7->field0_0x0)._s_0.Z = dVar1 + dVar3;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_8,&local_118,(double)param_5->MaxLinearAcceleration);
      dVar37 = (pTVar17->field0_0x0)._s_0.Y;
      (param_8->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_8->field0_0x0)._s_0.Y = dVar37;
      (param_8->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      pTVar17 = UE::Math::TVector<double>::GetClampedToMaxSize
                          (param_9,&local_100,(double)param_5->MaxAngularAcceleration);
      dVar37 = (pTVar17->field0_0x0)._s_0.Y;
      (param_9->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_9->field0_0x0)._s_0.Y = dVar37;
      (param_9->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      uVar15 = _UNK_15061cc8c;
      uVar14 = _UNK_15061cc88;
      uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      auVar4 = *(undefined1 (*) [16])&param_6->field0_0x0;
      dVar50 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar1 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar2 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar37 = (param_6->field0_0x0)._s_0.Z;
      auVar38._8_4_ = SUB84(dVar36,0);
      auVar38._0_8_ = dVar50;
      uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar38._12_4_ = uVar52;
      dVar44 = auVar4._8_8_;
      auVar45._8_4_ = SUB84(dVar36,0);
      auVar45._0_8_ = dVar50;
      auVar45._12_4_ = uVar52;
      auVar30._8_4_ = SUB84(dVar2,0);
      auVar30._0_8_ = dVar1;
      auVar30._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar46 = blendpd(auVar45,auVar30,2);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar37;
      auVar30 = blendpd(auVar4,auVar10,2);
      auVar67._0_8_ = dVar44 * dVar50 - auVar4._0_8_ * auVar38._8_8_;
      auVar67._8_8_ = dVar37 * dVar36 - dVar44 * dVar1;
      auVar31._0_8_ = auVar30._0_8_ * dVar1 - dVar37 * auVar46._0_8_;
      auVar31._8_8_ = auVar30._8_8_ * dVar2 - auVar46._8_8_ * 0.0;
      auVar30 = blendpd(auVar67,auVar31,2);
      dVar3 = auVar67._8_8_ + auVar67._8_8_;
      dVar9 = auVar31._0_8_ + auVar31._0_8_;
      uVar52 = SUB84(dVar9,0);
      uVar53 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar68._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar68._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar59._8_4_ = uVar52;
      auVar59._0_8_ = dVar3;
      auVar59._12_4_ = uVar53;
      auVar21._8_4_ = uVar52;
      auVar21._0_8_ = dVar3;
      auVar21._12_4_ = uVar53;
      auVar54._8_4_ = uVar52;
      auVar54._0_8_ = dVar3;
      auVar54._12_4_ = uVar53;
      auVar30 = blendpd(auVar54,auVar68,2);
      auVar60._0_8_ = auVar59._8_8_ * dVar50 - dVar3 * auVar38._8_8_;
      auVar60._8_8_ = auVar68._0_8_ * dVar36 - auVar21._8_8_ * dVar1;
      auVar22._8_4_ = SUB84(auVar68._8_8_,0);
      auVar22._0_8_ = auVar68._0_8_;
      auVar22._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
      auVar55._0_8_ = auVar30._0_8_ * dVar1 - auVar68._0_8_ * auVar46._0_8_;
      auVar55._8_8_ = auVar30._8_8_ * dVar2 - auVar22._8_8_ * auVar46._8_8_;
      auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
      lVar18 = -(ulonglong)
                ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar30._4_4_,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar30._0_4_) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
      auVar39._0_8_ =
           (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                            *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                            *(uint *)(param_2->Scale3D).XY.m128d_f64);
      auVar39._8_4_ = _UNK_15061cc88 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
      auVar39._12_4_ = _UNK_15061cc8c & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      lVar19 = -(ulonglong)(auVar39._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar39._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar23._8_4_ = SUB84(auVar60._8_8_,0);
      auVar23._0_8_ = auVar60._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar40._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar46._4_4_,
                            ~(uint)lVar19 & auVar46._0_4_);
      auVar40._8_4_ = ~(uint)lVar20 & auVar46._8_4_;
      auVar40._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar46._12_4_;
      auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar46._0_8_ = auVar30._0_8_;
      auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar46);
      auVar46 = blendpd(auVar60,auVar55,2);
      (param_6->field0_0x0)._s_0.X = auVar40._0_8_ * (dVar3 * dVar2 + auVar4._0_8_ + auVar23._8_8_);
      (param_6->field0_0x0)._s_0.Y = auVar40._8_8_ * (dVar9 * dVar2 + dVar44 + auVar55._0_8_);
      (param_6->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_) *
           (auVar68._0_8_ * dVar2 + dVar37 + auVar46._0_8_);
      dVar50 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar3 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar53 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar4 = *(undefined1 (*) [16])&param_7->field0_0x0;
      dVar37 = (param_7->field0_0x0)._s_0.Z;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = dVar37;
      auVar61._8_4_ = SUB84(dVar9,0);
      auVar61._0_8_ = dVar3;
      auVar61._12_4_ = uVar53;
      auVar47._8_4_ = SUB84(dVar36,0);
      auVar47._0_8_ = dVar50;
      uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar47._12_4_ = uVar52;
      dVar44 = auVar4._8_8_;
      auVar51._8_4_ = SUB84(dVar36,0);
      auVar51._0_8_ = dVar50;
      auVar51._12_4_ = uVar52;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = dVar3;
      auVar8._12_4_ = uVar53;
      auVar46 = blendpd(auVar51,auVar8,2);
      auVar30 = blendpd(auVar4,auVar69,2);
      auVar65._0_8_ = dVar44 * dVar50 - auVar4._0_8_ * auVar47._8_8_;
      auVar65._8_8_ = dVar37 * dVar36 - dVar44 * dVar3;
      auVar32._0_8_ = auVar30._0_8_ * dVar3 - auVar46._0_8_ * dVar37;
      auVar32._8_8_ = auVar30._8_8_ * dVar9 - auVar46._8_8_ * 0.0;
      auVar30 = blendpd(auVar65,auVar32,2);
      dVar1 = auVar65._8_8_ + auVar65._8_8_;
      dVar2 = auVar32._0_8_ + auVar32._0_8_;
      uVar52 = SUB84(dVar2,0);
      uVar53 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar66._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar66._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar41._8_4_ = uVar52;
      auVar41._0_8_ = dVar1;
      auVar41._12_4_ = uVar53;
      auVar24._8_4_ = uVar52;
      auVar24._0_8_ = dVar1;
      auVar24._12_4_ = uVar53;
      auVar33._8_4_ = uVar52;
      auVar33._0_8_ = dVar1;
      auVar33._12_4_ = uVar53;
      auVar30 = blendpd(auVar33,auVar66,2);
      auVar42._0_8_ = auVar41._8_8_ * dVar50 - dVar1 * auVar47._8_8_;
      auVar42._8_8_ = auVar66._0_8_ * dVar36 - auVar24._8_8_ * dVar3;
      auVar25._8_4_ = SUB84(auVar66._8_8_,0);
      auVar25._0_8_ = auVar66._0_8_;
      auVar25._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
      auVar34._0_8_ = auVar30._0_8_ * dVar3 - auVar66._0_8_ * auVar46._0_8_;
      auVar34._8_8_ = auVar30._8_8_ * dVar9 - auVar25._8_8_ * auVar46._8_8_;
      auVar26._8_4_ = SUB84(auVar42._8_8_,0);
      auVar26._0_8_ = auVar42._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      dVar2 = dVar2 * dVar9 + dVar44 + auVar34._0_8_;
      auVar30 = blendpd(auVar42,auVar34,2);
      auVar5._8_4_ = SUB84(dVar2,0);
      auVar5._0_8_ = dVar1 * auVar61._8_8_ + auVar4._0_8_ + auVar26._8_8_;
      auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])&param_7->field0_0x0 = auVar5;
      (param_7->field0_0x0)._s_0.Z = auVar66._0_8_ * auVar61._8_8_ + dVar37 + auVar30._0_8_;
      auVar4 = *(undefined1 (*) [16])&param_8->field0_0x0;
      dVar37 = (param_8->field0_0x0)._s_0.Z;
      dVar50 = (param_2->Rotation).XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar36 = (param_2->Rotation).XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar1 = (param_2->Rotation).ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar2 = (param_2->Rotation).ZW.m128d_f64[1] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar44 = auVar4._8_8_;
      auVar43._8_4_ = SUB84(dVar36,0);
      auVar43._0_8_ = dVar50;
      uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
      auVar43._12_4_ = uVar52;
      auVar48._8_4_ = SUB84(dVar36,0);
      auVar48._0_8_ = dVar50;
      auVar48._12_4_ = uVar52;
      auVar6._8_4_ = SUB84(dVar2,0);
      auVar6._0_8_ = dVar1;
      auVar6._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      auVar46 = blendpd(auVar48,auVar6,2);
      auVar70._0_8_ = dVar44 * dVar50 - auVar4._0_8_ * auVar43._8_8_;
      auVar70._8_8_ = dVar37 * dVar36 - dVar44 * dVar1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar37;
      auVar30 = blendpd(auVar4,auVar11,2);
      auVar35._0_8_ = auVar30._0_8_ * dVar1 - dVar37 * auVar46._0_8_;
      auVar35._8_8_ = auVar30._8_8_ * dVar2 - auVar46._8_8_ * 0.0;
      dVar3 = auVar70._8_8_ + auVar70._8_8_;
      dVar9 = auVar35._0_8_ + auVar35._0_8_;
      uVar52 = SUB84(dVar9,0);
      uVar53 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar30 = blendpd(auVar70,auVar35,2);
      auVar71._0_8_ = auVar30._0_8_ + auVar30._0_8_;
      auVar71._8_8_ = auVar30._8_8_ + auVar30._8_8_;
      auVar62._8_4_ = uVar52;
      auVar62._0_8_ = dVar3;
      auVar62._12_4_ = uVar53;
      auVar27._8_4_ = uVar52;
      auVar27._0_8_ = dVar3;
      auVar27._12_4_ = uVar53;
      auVar56._8_4_ = uVar52;
      auVar56._0_8_ = dVar3;
      auVar56._12_4_ = uVar53;
      auVar30 = blendpd(auVar56,auVar71,2);
      auVar63._0_8_ = auVar62._8_8_ * dVar50 - dVar3 * auVar43._8_8_;
      auVar63._8_8_ = auVar71._0_8_ * dVar36 - auVar27._8_8_ * dVar1;
      auVar28._8_4_ = SUB84(auVar71._8_8_,0);
      auVar28._0_8_ = auVar71._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
      auVar57._0_8_ = auVar30._0_8_ * dVar1 - auVar71._0_8_ * auVar46._0_8_;
      auVar57._8_8_ = auVar30._8_8_ * dVar2 - auVar28._8_8_ * auVar46._8_8_;
      auVar30 = *(undefined1 (*) [16])(param_2->Scale3D).ZW.m128d_f64;
      auVar72._0_8_ =
           (double)CONCAT44(uVar13 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4),
                            uVar12 & *(uint *)(param_2->Scale3D).XY.m128d_f64);
      auVar72._8_4_ = uVar14 & *(uint *)((param_2->Scale3D).XY.m128d_f64 + 1);
      auVar72._12_4_ = uVar15 & *(uint *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      lVar18 = -(ulonglong)
                ((double)CONCAT44(auVar30._4_4_ & uVar13,auVar30._0_4_ & uVar12) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      auVar46 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                      *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64);
      lVar19 = -(ulonglong)(auVar72._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0])
      ;
      lVar20 = -(ulonglong)(auVar72._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1])
      ;
      auVar29._8_4_ = SUB84(auVar63._8_8_,0);
      auVar29._0_8_ = auVar63._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
      auVar73._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar46._4_4_,
                            ~(uint)lVar19 & auVar46._0_4_);
      auVar73._8_4_ = ~(uint)lVar20 & auVar46._8_4_;
      auVar73._12_4_ = ~(uint)((ulonglong)lVar20 >> 0x20) & auVar46._12_4_;
      auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar7._0_8_ = auVar30._0_8_;
      auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
      auVar46 = blendpd(auVar63,auVar57,2);
      (param_8->field0_0x0)._s_0.X = auVar73._0_8_ * (dVar3 * dVar2 + auVar4._0_8_ + auVar29._8_8_);
      (param_8->field0_0x0)._s_0.Y = auVar73._8_8_ * (dVar9 * dVar2 + dVar44 + auVar57._0_8_);
      (param_8->field0_0x0)._s_0.Z =
           (double)CONCAT44(~(uint)((ulonglong)lVar18 >> 0x20) & auVar30._4_4_,
                            ~(uint)lVar18 & auVar30._0_4_) *
           (auVar71._0_8_ * dVar2 + dVar37 + auVar46._0_8_);
      pTVar17 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                          (param_2,local_e8,param_9);
      dVar37 = (pTVar17->field0_0x0)._s_0.Y;
      (param_9->field0_0x0)._s_0.X = (pTVar17->field0_0x0)._s_0.X;
      (param_9->field0_0x0)._s_0.Y = dVar37;
      (param_9->field0_0x0)._s_0.Z = (pTVar17->field0_0x0)._s_0.Z;
      dVar37 = (double)param_5->WorldAlpha;
      (param_6->field0_0x0)._s_0.X = (param_6->field0_0x0)._s_0.X * dVar37;
      (param_6->field0_0x0)._s_0.Y = (param_6->field0_0x0)._s_0.Y * dVar37;
      (param_6->field0_0x0)._s_0.Z = dVar37 * (param_6->field0_0x0)._s_0.Z;
      dVar37 = (double)param_5->WorldAlpha;
      (param_8->field0_0x0)._s_0.X = (param_8->field0_0x0)._s_0.X * dVar37;
      (param_8->field0_0x0)._s_0.Y = (param_8->field0_0x0)._s_0.Y * dVar37;
      (param_8->field0_0x0)._s_0.Z = dVar37 * (param_8->field0_0x0)._s_0.Z;
      dVar37 = (double)param_5->WorldAlpha;
      (param_7->field0_0x0)._s_0.X = (param_7->field0_0x0)._s_0.X * dVar37;
      (param_7->field0_0x0)._s_0.Y = (param_7->field0_0x0)._s_0.Y * dVar37;
      (param_7->field0_0x0)._s_0.Z = dVar37 * (param_7->field0_0x0)._s_0.Z;
      dVar37 = (double)param_5->WorldAlpha;
      (param_9->field0_0x0)._s_0.X = (param_9->field0_0x0)._s_0.X * dVar37;
      (param_9->field0_0x0)._s_0.Y = (param_9->field0_0x0)._s_0.Y * dVar37;
      (param_9->field0_0x0)._s_0.Z = dVar37 * (param_9->field0_0x0)._s_0.Z;
      dVar37 = (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1];
      dVar1 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar37;
      dVar37 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0];
      dVar3 = (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar1 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] = dVar37;
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar3;
      dVar37 = (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0];
      dVar3 = (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar2;
      dVar1 = (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0];
      dVar2 = (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] = dVar37;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar3;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] = dVar1;
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
      dVar37 = (param_2->Rotation).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           (param_2->Rotation).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] = dVar37;
      dVar37 = (param_2->Rotation).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           (param_2->Rotation).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] = dVar37;
      dVar37 = (param_2->Translation).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
           (param_2->Translation).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] = dVar37;
      dVar37 = (param_2->Translation).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
           (param_2->Translation).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] = dVar37;
      dVar37 = (param_2->Scale3D).XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           (param_2->Scale3D).XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] = dVar37;
      dVar37 = (param_2->Scale3D).ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           (param_2->Scale3D).ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] = dVar37;
    }
  }
  return;
}

// CollectClothColliderObjects @ 14d9cde60

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
FAnimNode_RigidBodyWithControl::CollectClothColliderObjects
          (FAnimNode_RigidBodyWithControl *this,USkeletalMeshComponent *param_1)

{
  TArray<FAnimNode_RigidBodyWithControl::FClothCollider,TSizedDefaultAllocator<32>_> *pTVar1;
  FSimulation *this_00;
  FBodyInstance *this_01;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FAnimNode_RigidBodyWithControl *pFVar6;
  FAnimNode_RigidBodyWithControl *pFVar7;
  FWeakObjectPtr *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  USkeletalMeshComponent *this_02;
  UPhysicsAsset *pUVar12;
  TTransform<double> *pTVar13;
  FActorSetup *pFVar14;
  FActorHandle *pFVar15;
  uint uVar16;
  FWeakObjectPtr *this_03;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStackY_268 [32];
  undefined1 local_218;
  FPhysicsAggregateReference_Chaos local_217 [7];
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_210;
  uint local_200;
  uint local_1fc;
  FAnimNode_RigidBodyWithControl *local_1f8;
  FWeakObjectPtr *local_1f0;
  FActorHandle *local_1e8;
  USkeletalMeshComponent *pUStack_1e0;
  int local_1d8;
  undefined4 uStack_1d4;
  USkeletalMeshComponent *local_1d0;
  USkeletalMeshComponent *local_1c8;
  FWeakObjectPtr *local_1c0;
  TTransform<double> local_1b8;
  FActorSetup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if ((((this->bUseExternalClothCollision != '\0') && (bRBANWithControl_IncludeClothColliders)) &&
      (param_1 != (USkeletalMeshComponent *)0x0)) && (this->Simulation != (FSimulation *)0x0)) {
    local_1fc = (param_1->ClothCollisionSources).ArrayNum;
    uVar17 = (ulonglong)(int)local_1fc;
    this_03 = (FWeakObjectPtr *)(param_1->ClothCollisionSources).AllocatorInstance.Data;
    local_1c0 = this_03 + uVar17 * 9;
    local_1f8 = this;
    local_1c8 = param_1;
    while( true ) {
      pFVar8 = local_1c0;
      uVar16 = 0;
      local_1f0 = this_03;
      if ((local_1c8->ClothCollisionSources).ArrayNum != (int)uVar17) {
        local_218 = 0;
        `TCheckedPointerIterator<FClothCollisionSource_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_218);
      }
      if (this_03 == pFVar8) break;
      this_02 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(this_03);
      local_1d0 = this_02;
      pUVar12 = (UPhysicsAsset *)FWeakObjectPtr::Get(this_03 + 1);
      if ((this_02 != (USkeletalMeshComponent *)0x0) && (pUVar12 != (UPhysicsAsset *)0x0)) {
        local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_210.ArrayNum = 0;
        local_210.ArrayMax = 0;
        USkeletalMeshComponent::InstantiatePhysicsAssetBodies
                  (this_02,pUVar12,&local_210,(FPhysScene_Chaos *)0x0,(USkeletalMeshComponent *)0x0,
                   -1,local_217);
        pFVar6 = local_1f8;
        local_200 = local_210.ArrayNum;
        if (local_210.ArrayNum != 0) {
          pTVar1 = &local_1f8->ClothColliders;
          while( true ) {
            pFVar7 = local_1f8;
            uVar10 = 0;
            if ((int)uVar16 < local_210.ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = pFVar7->Simulation;
            lVar18 = (longlong)(int)uVar16;
            this_01 = *(FBodyInstance **)(local_210.AllocatorInstance.Data + lVar18 * 8);
            pTVar13 = FBodyInstance::GetUnrealWorldTransform(this_01,&local_1b8,true,false);
            pFVar14 = ImmediatePhysics::MakeKinematicActorSetup(&local_158,this_01,pTVar13);
            pFVar15 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_00,pFVar14);
            ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_158);
            ImmediatePhysics_Chaos::FSimulation::AddToCollidingPairs(local_1f8->Simulation,pFVar15);
            pFVar2 = (pTVar1->AllocatorInstance).Data;
            pUStack_1e0 = local_1d0;
            local_1d8 = (int)this_01->InstanceBoneIndex;
            local_1e8 = pFVar15;
            if (((pFVar2 <= (FScriptContainerElement *)&local_1e8) &&
                ((FScriptContainerElement *)&local_1e8 <
                 pFVar2 + (longlong)(pFVar6->ClothColliders).ArrayMax * 0x18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (pFVar6->ClothColliders).ArrayNum;
            if (iVar11 == (pFVar6->ClothColliders).ArrayMax) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&pTVar1->AllocatorInstance,
                                  &(pFVar6->ClothColliders).ArrayMax);
            }
            (pFVar6->ClothColliders).ArrayNum = iVar11 + 1;
            pFVar3 = (pTVar1->AllocatorInstance).Data;
            pFVar2 = pFVar3 + (longlong)iVar11 * 0x18;
            *(FActorHandle **)pFVar2 = local_1e8;
            *(USkeletalMeshComponent **)(pFVar2 + 8) = pUStack_1e0;
            *(ulonglong *)(pFVar3 + (longlong)iVar11 * 0x18 + 0x10) = CONCAT44(uStack_1d4,local_1d8)
            ;
            bVar9 = FBodyInstance::IsValidBodyInstance(this_01);
            if (bVar9) {
              FBodyInstance::TermBody(this_01,true);
            }
            FBodyInstance::~FBodyInstance(this_01);
            ::operator_delete(this_01,400);
            uVar10 = 0;
            if ((int)uVar16 < local_210.ArrayNum) {
              uVar10 = ~uVar16 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar16 = uVar16 + 1;
            *(undefined8 *)(local_210.AllocatorInstance.Data + lVar18 * 8) = 0;
            this_03 = local_1f0;
            if (local_200 <= uVar16) break;
          }
        }
        uVar5 = local_210._8_8_;
        iVar11 = local_210.ArrayMax;
        local_210._8_8_ = (ulonglong)(uint)local_210.ArrayMax << 0x20;
        if (((longlong)uVar5 < 0) && (iVar11 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_210.AllocatorInstance,0,&local_210.ArrayMax);
        }
        if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.AllocatorInstance.Data);
        }
      }
      this_03 = this_03 + 9;
      uVar17 = (ulonglong)local_1fc;
    }
  }
  return;
}

// CollectWorldObjects @ 14d9ce310

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
FAnimNode_RigidBodyWithControl::CollectWorldObjects(FAnimNode_RigidBodyWithControl *this)

{
  FScriptContainerElement *pFVar1;
  UWorld *this_00;
  undefined1 *puVar2;
  FSimulation *this_01;
  int iVar3;
  bool bVar4;
  int iVar5;
  FActorSetup *pFVar6;
  FActorHandle *pFVar7;
  FName *pFVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  ForAnyElementType FVar14;
  undefined1 auStackY_278 [32];
  undefined1 local_238 [8];
  UPrimitiveComponent *local_230;
  TArray<FOverlapResult,TSizedDefaultAllocator<32>_> local_228;
  undefined1 local_218 [16];
  TPairInitializer<UPrimitiveComponent_const_*_const_&,FAnimNode_RigidBodyWithControl::FWorldObject_&&>
  local_208;
  FString local_1f8;
  FCollisionResponseContainer_u_0 local_1e8;
  FName local_1c8 [2];
  TTransform<double> local_1b8;
  FActorSetup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = this->UnsafeWorld;
  if (this_00 != (UWorld *)0x0) {
    local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_228.ArrayNum = 0;
    local_228.ArrayMax = 0;
    FCollisionResponseContainer::FCollisionResponseContainer
              ((FCollisionResponseContainer *)&local_1e8._s_0);
    FCollisionResponseContainer::SetAllChannels
              ((FCollisionResponseContainer *)&local_1e8._s_0,ECR_Overlap);
    local_218._4_4_ = (float)(this->CachedBounds).W;
    local_218._0_4_ = 2;
    UWorld::OverlapMultiByChannel
              (this_00,&local_228,&(this->CachedBounds).Center,&UE::Math::TQuat<double>::Identity,
               (uint)(this->OverlapChannel).Value,(FCollisionShape *)local_218,&this->QueryParams,
               (FCollisionResponseParams *)&local_1e8._s_0);
    iVar3 = local_228.ArrayNum;
    uVar11 = (ulonglong)local_228.ArrayNum;
    pFVar1 = local_228.AllocatorInstance.Data + uVar11 * 0x48;
    FVar14.Data = local_228.AllocatorInstance.Data;
LAB_14d9ce3f6:
    if ((int)uVar11 != iVar3) {
      `TCheckedPointerIterator<FOverlapResult,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_238);
    }
    if (FVar14.Data != pFVar1) {
      local_230 = (UPrimitiveComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)(FVar14.Data + 0x20))
      ;
      if (local_230 != (UPrimitiveComponent *)0x0) {
        uVar9 = ((uint)((ulonglong)local_230 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_230 >> 4))
                * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (*(int *)&(this->ComponentsInSim).field_0x8 !=
            *(int *)&(this->ComponentsInSim).field_0x34) {
          puVar2 = *(undefined1 **)&(this->ComponentsInSim).field_0x40;
          puVar12 = &(this->ComponentsInSim).field_0x38;
          if (puVar2 != (undefined1 *)0x0) {
            puVar12 = puVar2;
          }
          iVar5 = *(int *)(puVar12 +
                          (ulonglong)
                          (*(int *)&(this->ComponentsInSim).field_0x48 - 1U &
                          (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar5 != -1) {
            do {
              plVar10 = (longlong *)
                        ((longlong)iVar5 * 0x20 + *(longlong *)&(this->ComponentsInSim).field_0x0);
              if ((UPrimitiveComponent *)*plVar10 == local_230) {
                plVar13 = plVar10 + 1;
                if (plVar10 == (longlong *)0x0) {
                  plVar13 = (longlong *)0x0;
                }
                if (plVar13 != (longlong *)0x0) {
                  FVar14.Data = FVar14.Data + 0x48;
                  *(int *)(plVar13 + 1) = this->ComponentsInSimTick;
                  uVar11 = local_228._8_8_ & 0xffffffff;
                  goto LAB_14d9ce3f6;
                }
                break;
              }
              iVar5 = (int)plVar10[3];
            } while (iVar5 != -1);
          }
        }
        if (this->UnsafeOwner != *(AActor **)&local_230->field_0xa8) {
          bVar4 = IsComponentDesiredInSim(local_230);
          if (bVar4) {
            this_01 = this->Simulation;
            local_1b8.Rotation.XY.m128d_f64[0] = *(double *)&local_230->field_0x1f0;
            local_1b8.Rotation.XY.m128d_f64[1] = *(double *)&local_230->field_0x1f8;
            local_1b8.Rotation.ZW.m128d_f64[0] = *(double *)&local_230->field_0x200;
            local_1b8.Rotation.ZW.m128d_f64[1] = *(double *)&local_230->field_0x208;
            local_1b8.Translation.XY.m128d_f64[0] = *(double *)&local_230->field_0x210;
            local_1b8.Translation.XY.m128d_f64[1] = *(double *)&local_230->field_0x218;
            local_1b8.Translation.ZW.m128d_f64[0] = *(double *)&local_230->field_0x220;
            local_1b8.Translation.ZW.m128d_f64[1] = *(double *)&local_230->field_0x228;
            local_1b8.Scale3D.XY.m128d_f64[0] = *(double *)&local_230->field_0x230;
            local_1b8.Scale3D.XY.m128d_f64[1] = *(double *)&local_230->field_0x238;
            local_1b8.Scale3D.ZW.m128d_f64[0] = *(double *)&local_230->field_0x240;
            local_1b8.Scale3D.ZW.m128d_f64[1] = *(double *)&local_230->field_0x248;
            pFVar6 = ImmediatePhysics::MakeKinematicActorSetup
                               (&local_158,&local_230->BodyInstance,&local_1b8);
            pFVar7 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_01,pFVar6);
            ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_158);
            local_208._4_8_ = *(undefined8 *)&local_230->field_0x18;
            ::FName::ToString((FName *)((longlong)&local_208.Key + 4),&local_1f8);
            iVar5 = local_1f8.Data.ArrayNum + -1;
            if (local_1f8.Data.ArrayNum == 0) {
              iVar5 = 0;
            }
            pFVar8 = ::FName::FName(local_1c8,iVar5,(wchar_t *)local_1f8.Data.AllocatorInstance.Data
                                    ,FNAME_Add);
            pFVar7->Name = *pFVar8;
            if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
            }
            ImmediatePhysics_Chaos::FSimulation::AddToCollidingPairs(this->Simulation,pFVar7);
            local_218._8_4_ = this->ComponentsInSimTick;
            local_1e8._0_8_ = &local_230;
            local_1e8._8_8_ = local_218;
            local_218[0xc] = 0;
            local_218._0_8_ = pFVar7;
            TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<UPrimitiveComponent_const_*_const_&,FAnimNode_RigidBodyWithControl::FWorldObject_&&>_>
                      ((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
                        *)&this->ComponentsInSim,&local_208,(bool *)local_1e8.EnumArray);
          }
        }
      }
      uVar11 = local_228._8_8_ & 0xffffffff;
      FVar14.Data = FVar14.Data + 0x48;
      goto LAB_14d9ce3f6;
    }
    if (local_228.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.AllocatorInstance.Data);
    }
  }
  return;
}

// CreateBodyModifier @ 14d9cf4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_RigidBodyWithControl::CreateBodyModifier
          (FAnimNode_RigidBodyWithControl *this,FName param_1,FPhysicsControlModifierData *param_2)

{
  int iVar1;
  ForAnyElementType _Src;
  bool bVar2;
  FName *pFVar3;
  FString *pFVar4;
  int iVar5;
  FPhysicsControlModifierData *in_R9;
  FName local_res8;
  FString local_58;
  undefined1 local_48 [16];
  FString local_38;
  
  ::FString::FString(&local_38,L"");
  pFVar3 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneToBodyNameMap,(FName)param_2);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  local_res8 = (FName)param_2;
  if (pFVar3 != (FName *)0x0) {
    local_res8 = *pFVar3;
  }
  local_48._0_8_ = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_48._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)local_48,local_38.Data.ArrayNum,
               (int *)(local_48 + 0xc));
    memcpy((void *)local_48._0_8_,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  if (local_res8 == (FName)0x0) {
    ::FString::operator=((FString *)local_48,L"Body");
  }
  else {
    pFVar4 = ::FName::ToString(&local_res8,&local_58);
    iVar1 = (pFVar4->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars
              ((FString *)local_48,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5);
    if ((FName)local_58.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  UE::PhysicsControl::
  GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>
            (&local_58,
             (TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
              *)local_48,(int)this + 2000);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (((FName)local_58.Data.AllocatorInstance.Data == (FName)0x0) &&
     (2 < (byte)LogPhysicsControl._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  bVar2 = CreateNamedBodyModifier
                    (this,(FName)local_58.Data.AllocatorInstance.Data,(FName)param_2,in_R9);
  if (bVar2) {
    *(FScriptContainerElement **)param_1 = local_58.Data.AllocatorInstance.Data;
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}

// CreateControl @ 14d9d0130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_RigidBodyWithControl::CreateControl
          (FAnimNode_RigidBodyWithControl *this,FName param_1,FName param_2,
          FPhysicsControlData *param_3)

{
  bool bVar1;
  FPhysicsControlData *in_stack_00000028;
  FName local_18;
  
  GetUniqueControlName(this,(FName)&local_18,param_2);
  bVar1 = CreateNamedControl(this,local_18,param_2,(FName)param_3,in_stack_00000028);
  if (bVar1) {
    *(FName *)param_1 = local_18;
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return param_1;
}

// CreateNamedBodyModifier @ 14d9d4220

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
FAnimNode_RigidBodyWithControl::CreateNamedBodyModifier
          (FAnimNode_RigidBodyWithControl *this,FName param_1,FName param_2,
          FPhysicsControlModifierData *param_3)

{
  FName local_res10;
  TPairInitializer<FName_const_&,FRigidBodyModifierRecord_&&> local_58;
  FName *pFStack_48;
  undefined8 uStack_40;
  FName local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  FActorHandle *local_10;
  
  local_res10 = param_1;
  local_10 = FindBodyFromBoneName(this,param_2);
  if (local_10 != (FActorHandle *)0x0) {
    uStack_30._0_1_ = param_3->MovementType;
    uStack_30._1_1_ = param_3->CollisionType;
    uStack_30._2_1_ = param_3->KinematicTargetSpace;
    uStack_30._3_1_ = param_3->field_0x3;
    uStack_30._4_4_ = param_3->GravityMultiplier;
    uStack_40._0_4_ = param_3->PhysicsBlendWeight;
    uStack_40._4_1_ = param_3->bUpdateKinematicFromSimulation;
    uStack_40._5_3_ = *(undefined3 *)&param_3->field_0xd;
    local_58.Value = (FRigidBodyModifierRecord *)&local_res10;
    pFStack_48 = &local_38;
    local_38 = param_2;
    local_28 = uStack_40;
    local_20 = uStack_30;
    uStack_18 = uStack_40;
    TSet<TTuple<FName,FRigidBodyModifierRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRigidBodyModifierRecord_&&>_>
              ((TSet<TTuple<FName,FRigidBodyModifierRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>,FDefaultSetAllocator>
                *)&this->ModifierRecords,&local_58,(bool *)&local_58.Value);
    return true;
  }
  return false;
}

// CreateNamedControl @ 14d9d44a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
FAnimNode_RigidBodyWithControl::CreateNamedControl
          (FAnimNode_RigidBodyWithControl *this,FName param_1,FName param_2,FName param_3,
          FPhysicsControlData *param_4)

{
  FSimulation *this_00;
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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  FJointSetup *pFVar17;
  undefined8 *puVar18;
  FActorHandle *pFVar19;
  FActorHandle *this_01;
  TTransform<double> *pTVar20;
  FJointSetup *pFVar21;
  undefined8 *puVar22;
  longlong lVar23;
  FName local_res10;
  FName local_res20;
  undefined1 auStack_858 [32];
  undefined1 local_838 [16];
  TPairInitializer<FName_const_&,FRigidBodyControlRecord_&&> local_828;
  FName local_818;
  FName FStack_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double dStack_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double dStack_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  double dStack_780;
  double local_778;
  double dStack_770;
  double local_768;
  double dStack_760;
  double local_758;
  double dStack_750;
  undefined1 local_748 [16];
  double local_738;
  double dStack_730;
  double local_728;
  double dStack_720;
  double local_718;
  double dStack_710;
  double local_708;
  double dStack_700;
  double local_6f8;
  double dStack_6f0;
  double local_6e8;
  double dStack_6e0;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  double local_698;
  double dStack_690;
  double local_688;
  double dStack_680;
  double local_678;
  double dStack_670;
  double local_668;
  double dStack_660;
  double local_658;
  undefined8 uStack_650;
  undefined1 local_648 [8];
  undefined8 uStack_640;
  double local_638;
  undefined1 local_630 [8];
  undefined8 local_628;
  TVector<double,3> TStack_620;
  undefined8 local_608;
  EJointForceMode local_600;
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  undefined8 local_538;
  FJointHandle *local_530;
  undefined4 local_4d0;
  undefined2 local_4cc;
  EJointForceMode local_4c8;
  TTransform<double> local_428;
  FJointSetup local_3c8;
  ulonglong local_98;
  
  dVar16 = _UNK_150689688;
  dVar15 = ___xmm_3ff00000000000003ff0000000000000;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_858;
  local_7b8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_7b0 = _UNK_150689688;
  local_7a8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_7a0 = _UNK_150689688;
  local_798 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_790 = _UNK_150689688;
  local_788 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_780 = _UNK_150689688;
  local_778 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_770 = _UNK_150689688;
  local_768 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_760 = _UNK_150689688;
  local_758 = ___xmm_3f8000003f8000003f8000003f800000;
  dStack_750 = _UNK_15076b1f8;
  dVar1 = *(double *)param_4;
  dVar2 = *(double *)&param_4->LinearDampingRatio;
  dVar3 = *(double *)&param_4->MaxForce;
  dVar4 = *(double *)&param_4->AngularDampingRatio;
  dVar5 = *(double *)&param_4->MaxTorque;
  dVar6 = *(double *)&param_4->AngularTargetVelocityMultiplier;
  dVar7 = (param_4->CustomControlPoint).field0_0x0._s_0.X;
  dVar8 = (param_4->CustomControlPoint).field0_0x0._s_0.Y;
  dVar9 = (param_4->CustomControlPoint).field0_0x0._s_0.Z;
  dVar10 = *(double *)&param_4->bUseCustomControlPoint;
  local_res10 = param_1;
  local_res20 = param_3;
  local_818 = param_2;
  FStack_810 = param_3;
  local_808 = dVar1;
  dStack_800 = dVar2;
  local_7f8 = dVar3;
  dStack_7f0 = dVar4;
  local_7e8 = dVar5;
  dStack_7e0 = dVar6;
  local_7d8 = dVar7;
  dStack_7d0 = dVar8;
  local_7c8 = dVar9;
  dStack_7c0 = dVar10;
  if (param_2 == (FName)0x0) {
    pFVar19 = this->WorldSpaceControlActorHandle;
  }
  else {
    pFVar19 = FindBodyFromBoneName(this,param_2);
  }
  this_01 = FindBodyFromBoneName(this,local_res20);
  this_00 = this->Simulation;
  if (((this_00 != (FSimulation *)0x0) && (this_01 != (FActorHandle *)0x0)) &&
     (pFVar19 != (FActorHandle *)0x0)) {
    Chaos::FPBDJointSettings::FPBDJointSettings((FPBDJointSettings *)local_748);
    local_648 = (undefined1  [8])0x0;
    uStack_640 = uStack_640 & 0xffffffff00000000;
    local_630 = (undefined1  [8])0x0;
    local_628 = local_628 & 0xffffffff00000000;
    dStack_560 = (double)((ulonglong)dStack_560 & 0xffffffff00000000);
    local_4cc._0_1_ = false;
    local_4cc._1_1_ = false;
    local_4c8 = Acceleration;
    local_568 = (double)CONCAT26(local_568._6_2_,0x10101010101);
    local_4d0._0_1_ = true;
    local_4d0._1_1_ = true;
    local_4d0._2_1_ = false;
    local_4d0._3_1_ = false;
    uStack_650._3_1_ = false;
    uStack_650._4_1_ = true;
    uStack_650._0_1_ = true;
    pTVar20 = ImmediatePhysics_Chaos::FActorHandle::GetLocalCoMTransform(this_01,&local_428);
    local_728 = (pTVar20->Translation).XY.m128d_f64[0];
    dStack_720 = (pTVar20->Translation).XY.m128d_f64[1];
    local_718 = (pTVar20->Translation).ZW.m128d_f64[0];
    dStack_710 = 0.0;
    Chaos::FPBDJointSettings::Sanitize((FPBDJointSettings *)local_748);
    lVar23 = 6;
    pFVar17 = &local_3c8;
    puVar18 = (undefined8 *)local_748;
    do {
      puVar22 = puVar18;
      pFVar21 = pFVar17;
      pFVar17 = (FJointSetup *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x20;
      uVar11 = puVar22[1];
      uVar12 = puVar22[2];
      uVar13 = puVar22[3];
      *(undefined8 *)(pFVar21->ConstraintSettings).ConnectorTransforms.V = *puVar22;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x8 = uVar11;
      uVar11 = puVar22[4];
      uVar14 = puVar22[5];
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x10 = uVar12;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x18 = uVar13;
      uVar12 = puVar22[6];
      uVar13 = puVar22[7];
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x20 = uVar11;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x28 = uVar14;
      uVar11 = puVar22[8];
      uVar14 = puVar22[9];
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x30 = uVar12;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x38 = uVar13;
      uVar12 = puVar22[10];
      uVar13 = puVar22[0xb];
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x40 = uVar11;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x48 = uVar14;
      uVar11 = puVar22[0xc];
      uVar14 = puVar22[0xd];
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x50 = uVar12;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[0].field_0x58 = uVar13;
      uVar12 = puVar22[0xe];
      uVar13 = puVar22[0xf];
      *(undefined8 *)((pFVar21->ConstraintSettings).ConnectorTransforms.V + 1) = uVar11;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x8 = uVar14;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x10 = uVar12;
      *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x18 = uVar13;
      lVar23 = lVar23 + -1;
      puVar18 = puVar22 + 0x10;
    } while (lVar23 != 0);
    uVar11 = puVar22[0x11];
    uVar12 = puVar22[0x12];
    uVar13 = puVar22[0x13];
    *(undefined8 *)pFVar17 = puVar22[0x10];
    *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x28 = uVar11;
    *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x30 = uVar12;
    *(undefined8 *)&(pFVar21->ConstraintSettings).ConnectorTransforms.V[1].field_0x38 = uVar13;
    local_3c8.Actor1 = this_01;
    local_3c8.Actor2 = pFVar19;
    local_530 = ImmediatePhysics_Chaos::FSimulation::CreateJoint(this_00,&local_3c8);
    if (local_530 != (FJointHandle *)0x0) {
      SetPhysicsJointEnabled(local_530,false);
      local_748._0_4_ = local_818.ComparisonIndex.Value;
      local_748._4_4_ = local_818.Number;
      local_748._8_4_ = FStack_810.ComparisonIndex.Value;
      local_748._12_4_ = FStack_810.Number;
      local_738 = local_808;
      dStack_730 = dStack_800;
      local_728 = local_7f8;
      dStack_720 = dStack_7f0;
      local_718 = local_7e8;
      dStack_710 = dStack_7e0;
      local_708 = local_7d8;
      dStack_700 = dStack_7d0;
      local_6f8 = local_7c8;
      dStack_6f0 = dStack_7c0;
      local_6e8 = local_7b8;
      dStack_6e0 = dStack_7b0;
      local_6d8 = local_7a8;
      dStack_6d0 = dStack_7a0;
      local_6c8 = local_798;
      dStack_6c0 = dStack_790;
      local_6b8 = local_788;
      dStack_6b0 = dStack_780;
      local_6a8 = local_778;
      dStack_6a0 = dStack_770;
      local_698 = local_768;
      dStack_690 = dStack_760;
      local_688 = local_758;
      dStack_680 = dStack_750;
      local_608._0_1_ = true;
      local_608._1_1_ = true;
      local_608._2_1_ = true;
      local_608._3_1_ = 0xff;
      local_608._4_4_ = ~Acceleration;
      local_538 = 0xffffffffffffffff;
      local_638 = 0.0;
      local_838._0_8_ = &local_res10;
      local_678 = 0.0;
      dStack_670 = 0.0;
      local_838._8_8_ = local_748;
      local_668 = 0.0;
      dStack_660 = 0.0;
      local_658 = 0.0;
      uStack_650._0_1_ = false;
      uStack_650._1_1_ = false;
      uStack_650._2_1_ = false;
      uStack_650._3_1_ = false;
      uStack_650._4_1_ = false;
      uStack_650._5_3_ = 0;
      local_648 = (undefined1  [8])0x0;
      uStack_640 = 0;
      local_628 = 0;
      TStack_620._0_8_ = 0;
      TStack_620._8_8_ = ___xmm_3ff00000000000000000000000000000;
      TStack_620._16_8_ = _UNK_15061cbc8;
      local_600 = 0xffff;
      local_5a8 = dVar15;
      dStack_5a0 = dVar16;
      local_598 = dVar15;
      dStack_590 = dVar16;
      local_588 = dVar15;
      dStack_580 = dVar16;
      local_578 = dVar15;
      dStack_570 = dVar16;
      local_568 = dVar15;
      dStack_560 = dVar16;
      local_558 = dVar15;
      dStack_550 = dVar16;
      local_548 = ___xmm_3f8000003f8000003f8000003f800000;
      dStack_540 = _UNK_15076b1f8;
      local_5f8 = dVar1;
      dStack_5f0 = dVar2;
      local_5e8 = dVar3;
      dStack_5e0 = dVar4;
      local_5d8 = dVar5;
      dStack_5d0 = dVar6;
      local_5c8 = dVar7;
      dStack_5c0 = dVar8;
      local_5b8 = dVar9;
      dStack_5b0 = dVar10;
      TSet<TTuple<FName,FRigidBodyControlRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FRigidBodyControlRecord_&&>_>
                ((TSet<TTuple<FName,FRigidBodyControlRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>,FDefaultSetAllocator>
                  *)&this->ControlRecords,&local_828,(bool *)local_838);
      return true;
    }
  }
  if (2 < (byte)LogPhysicsControl._0_1_) {
    ::FName::ToString(&local_res20,(FString *)local_838);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if ((FScriptContainerElement *)local_838._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_838._0_8_);
    }
  }
  return false;
}

// CreateWorldSpaceControlRootBody @ 14d9d5fc0

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
FAnimNode_RigidBodyWithControl::CreateWorldSpaceControlRootBody
          (FAnimNode_RigidBodyWithControl *this,UPhysicsAsset *param_1)

{
  FSimulation *this_00;
  FActorSetup *pFVar1;
  FActorHandle *pFVar2;
  FName *pFVar3;
  undefined1 auStack_1c8 [32];
  FName local_1a8 [2];
  TTransform<double> local_198;
  FActorSetup local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = this->Simulation;
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_198.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  pFVar1 = ImmediatePhysics::MakeStaticActorSetup(&local_138,(FBodyInstance *)0x0,&local_198);
  pFVar2 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_00,pFVar1);
  this->WorldSpaceControlActorHandle = pFVar2;
  ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_138);
  pFVar2 = this->WorldSpaceControlActorHandle;
  if (pFVar2 == (FActorHandle *)0x0) {
    if (1 < (byte)LogPhysicsControl._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    }
  }
  else {
    pFVar3 = ::FName::FName(local_1a8,"WorldSpaceControlHandle");
    pFVar2->Name = *pFVar3;
    ImmediatePhysics_Chaos::FSimulation::SetHasCollision
              (this->Simulation,this->WorldSpaceControlActorHandle,false);
  }
  return;
}

// DestroyControlsAndBodyModifiers @ 14d9d67c0

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
FAnimNode_RigidBodyWithControl::DestroyControlsAndBodyModifiers
          (FAnimNode_RigidBodyWithControl *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FJointHandle *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar11 = 0;
  iVar3 = *(int *)&(this->ControlRecords).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ControlRecords).field_0x10;
  iVar13 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->ControlRecords).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_60.Array;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d9d686f;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d9d686f:
  uVar10 = *(uint *)&(this->ControlRecords).field_0x28;
  puVar1 = &(this->ControlRecords).field_0x10;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ControlRecords).field_0x8 -
                       *(int *)&(this->ControlRecords).field_0x34);
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ControlRecords).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(this->ControlRecords).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d9d6980;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14d9d6980:
  while( true ) {
    if (*(int *)&(this->ControlRecords).field_0x8 - *(int *)&(this->ControlRecords).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar4 = *(FJointHandle **)
              ((longlong)TStack_60.CurrentBitIndex * 0x240 + 0x228 +
              *(longlong *)&(this->ControlRecords).field_0x0);
    if (pFVar4 != (FJointHandle *)0x0) {
      ImmediatePhysics_Chaos::FSimulation::DestroyJoint(this->Simulation,pFVar4);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FName,FRigidBodyControlRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigidBodyControlRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>,FDefaultSetAllocator>
           *)&this->ControlRecords);
  TSet<TTuple<FName,FRigidBodyModifierRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FRigidBodyModifierRecord>,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>,FDefaultSetAllocator>
           *)&this->ModifierRecords);
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->NameRecords);
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&(this->NameRecords).BodyModifierSets);
  this->bHaveSetupControls = '\0';
  (this->CurrentControlProfile).ComparisonIndex = 0;
  (this->CurrentControlProfile).Number = 0;
  return;
}

// DestroyPhysicsSimulation @ 14d9d7210

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
FAnimNode_RigidBodyWithControl::DestroyPhysicsSimulation(FAnimNode_RigidBodyWithControl *this)

{
  FSimulation *this_00;
  
  (this->ClothColliders).ArrayNum = 0;
  if ((this->ClothColliders).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ClothColliders).AllocatorInstance,0,&(this->ClothColliders).ArrayMax
              );
  }
  FlushDeferredSimulationTask(this);
  this_00 = this->Simulation;
  if (this_00 != (FSimulation *)0x0) {
    ImmediatePhysics_Chaos::FSimulation::~FSimulation(this_00);
    ::operator_delete(this_00,0x40);
  }
  this->Simulation = (FSimulation *)0x0;
  (this->CurrentConstraintProfile).ComparisonIndex = 0;
  (this->CurrentConstraintProfile).Number = 0;
  return;
}

// EvaluateComponentPose_AnyThread @ 14d9d8060

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
FAnimNode_RigidBodyWithControl::EvaluateComponentPose_AnyThread
          (FAnimNode_RigidBodyWithControl *this,FComponentSpacePoseContext *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined1 uVar5;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> *pTVar6;
  FBlendedCurve *pFVar7;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RigidBodyWithControl::EvaluateComponentPose_AnyThread");
  if ((this->bFreezeIncomingPoseOnStart == '\0') || (this->bSimulationStarted == '\0')) {
    FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread
              ((FAnimNode_SkeletalControlBase *)this,param_1);
    goto LAB_14d9d827b;
  }
  if (this->ResetSimulatedTeleportType == None) {
    iVar2 = *(int *)&(this->CapturedFrozenPose).Pose.field_0x8;
    if (iVar2 < 1) goto LAB_14d9d81e0;
    pvVar4 = *(void **)&(this->CapturedFrozenPose).Pose;
    puVar1 = &(param_1->Pose).Pose.field_0xc;
    *(int *)&(param_1->Pose).Pose.field_0x8 = iVar2;
    UE::Core::Private::
    ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,iVar2,*(int *)puVar1,
               (ForElementType<UE::Math::TTransform<double>_> *)&param_1->Pose,iVar2,(int *)puVar1);
    memcpy(*(void **)&(param_1->Pose).Pose,pvVar4,(longlong)iVar2 * 0x60);
    *(undefined8 *)&(param_1->Pose).Pose.field_0x10 =
         *(undefined8 *)&(this->CapturedFrozenPose).Pose.field_0x10;
    pTVar6 = &(param_1->Pose).ComponentSpaceFlags;
    iVar2 = *(int *)&(this->CapturedFrozenPose).ComponentSpaceFlags.field_0x8;
    puVar1 = &(param_1->Pose).ComponentSpaceFlags.field_0xc;
    pvVar4 = *(void **)&(this->CapturedFrozenPose).ComponentSpaceFlags;
    iVar3 = *(int *)puVar1;
    *(int *)&(param_1->Pose).ComponentSpaceFlags.field_0x8 = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<unsigned_char>_>
                (1,1,iVar2,iVar3,(ForElementType<unsigned_char> *)pTVar6,iVar2,(int *)puVar1);
      if (iVar2 != 0) {
        memcpy(*(void **)pTVar6,pvVar4,(longlong)iVar2);
      }
    }
    iVar2 = *(int *)&(this->CapturedFrozenCurves).field_0x8;
    pFVar7 = &param_1->Curve;
    pvVar4 = *(void **)&this->CapturedFrozenCurves;
    puVar1 = &(param_1->Curve).field_0xc;
    *(int *)&(param_1->Curve).field_0x8 = iVar2;
    if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
      uVar5 = (this->CapturedFrozenCurves).field_0x10;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar2,*(int *)puVar1,(ForElementType<UE::Anim::FCurveElement> *)pFVar7,iVar2
                 ,(int *)puVar1);
      if (iVar2 != 0) {
        memcpy(*(void **)pFVar7,pvVar4,(longlong)iVar2 << 4);
      }
      uVar5 = (this->CapturedFrozenCurves).field_0x10;
    }
  }
  else {
LAB_14d9d81e0:
    FAnimNode_SkeletalControlBase::EvaluateComponentPose_AnyThread
              ((FAnimNode_SkeletalControlBase *)this,param_1);
    FCSPose<FCompactHeapPose>::CopyPose<FCSPose<FCompactPose>_>
              (&this->CapturedFrozenPose,&param_1->Pose);
    iVar2 = *(int *)&(param_1->Curve).field_0x8;
    pFVar7 = (FBlendedCurve *)&this->CapturedFrozenCurves;
    pvVar4 = *(void **)&param_1->Curve;
    puVar1 = &(this->CapturedFrozenCurves).field_0xc;
    *(int *)&(this->CapturedFrozenCurves).field_0x8 = iVar2;
    if ((iVar2 == 0) && (*(int *)puVar1 == 0)) {
      *(undefined4 *)puVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar2,*(int *)puVar1,(ForAnyElementType *)pFVar7,iVar2,(int *)puVar1);
      if (iVar2 != 0) {
        memcpy(*(void **)pFVar7,pvVar4,(longlong)iVar2 << 4);
      }
    }
    uVar5 = (param_1->Curve).field_0x10;
  }
  ((FBlendedHeapCurve *)pFVar7)->field_0x10 = uVar5;
LAB_14d9d827b:
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

// EvaluateSkeletalControl_AnyThread @ 14d9d82e0

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
FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread
          (FAnimNode_RigidBodyWithControl *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  __m128d *p_Var1;
  int *piVar2;
  atomic<unsigned_int> *paVar3;
  FTaskHandle *pFVar4;
  atomic<unsigned_int> aVar5;
  double dVar6;
  double dVar7;
  ESimulationSpace EVar8;
  FCompactPoseBoneIndex FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  ulonglong uVar40;
  TConsoleVariableData<int> *pTVar41;
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *pTVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  FCompactPoseBoneIndex FVar47;
  int iVar48;
  uint uVar49;
  FName *pFVar50;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Eval> FVar51;
  FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl> FVar52;
  FTaskBase *pFVar53;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait> FVar54;
  undefined4 extraout_var;
  TTransform<double> *pTVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PoseUpdate> FVar58;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TVector<double> *pTVar59;
  FPosQuat *pFVar60;
  uint uVar61;
  FActorHandle *pFVar62;
  FScriptContainerElement *pFVar63;
  FTaskBase *pFVar64;
  FTaskHandle FVar65;
  FScriptContainerElement *pFVar66;
  FName FVar67;
  uint uVar68;
  FName FVar69;
  FCompactPoseBoneIndex *pFVar70;
  FName FVar71;
  FSimSpaceSettings *pFVar72;
  longlong lVar73;
  longlong lVar74;
  int iVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  uint uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined4 uVar86;
  undefined4 uVar87;
  uint uVar88;
  undefined4 uVar89;
  uint uVar90;
  uint uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  uint uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  uint uVar97;
  undefined4 uVar98;
  uint uVar99;
  uint uVar100;
  undefined4 uVar101;
  uint uVar102;
  uint uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  uint uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  uint uVar109;
  undefined4 uVar110;
  uint uVar111;
  undefined4 uVar112;
  uint uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  uint uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  uint uVar119;
  undefined4 uVar120;
  uint uVar121;
  undefined4 uVar122;
  uint uVar123;
  undefined4 uVar124;
  undefined4 uVar125;
  uint uVar126;
  undefined4 uVar127;
  undefined4 uVar128;
  uint uVar129;
  double dVar130;
  double dVar131;
  undefined1 auVar132 [16];
  double dVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  uint uVar137;
  float fVar138;
  uint uVar139;
  float fVar140;
  undefined1 auStackY_d28 [32];
  undefined1 local_cb4;
  undefined1 local_cb3;
  undefined1 local_cb2;
  undefined1 local_cb1;
  undefined1 local_cb0;
  undefined1 local_caf;
  undefined1 local_cae;
  undefined1 local_cad;
  undefined1 local_cac;
  byte local_cab;
  undefined1 local_caa;
  undefined1 local_ca9;
  FName local_ca8;
  FName local_ca0;
  FComponentSpacePoseContext *local_c98;
  float local_c90;
  FCompactPoseBoneIndex *local_c88;
  FScriptContainerElement *local_c80;
  FLLMScope local_c78 [2];
  FTaskHandle local_c70;
  FColor_u_0 local_c68;
  FColor_u_0 local_c64;
  FColor_u_0 local_c60;
  FColor_u_0 local_c5c;
  uint local_c58;
  FScriptContainerElement *local_c50;
  FName local_c48;
  FName local_c40;
  FName local_c38;
  FName local_c30;
  TVector<double>_u_0 local_c28;
  FName local_c10;
  FName local_c00;
  FName local_bf0;
  FName local_be0;
  TQuat<double> local_bc8;
  undefined1 local_ba8 [16];
  TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *local_b98;
  FMemScope local_b90;
  FStatMessage local_b88;
  uint local_b78;
  uint uStack_b74;
  uint uStack_b70;
  uint uStack_b6c;
  uint local_b68;
  uint uStack_b64;
  uint uStack_b60;
  uint uStack_b5c;
  uint local_b58;
  uint uStack_b54;
  uint uStack_b50;
  uint uStack_b4c;
  uint local_b48;
  uint uStack_b44;
  uint uStack_b40;
  uint uStack_b3c;
  uint local_b38;
  uint uStack_b34;
  uint uStack_b30;
  uint uStack_b2c;
  uint local_b28;
  uint uStack_b24;
  uint uStack_b20;
  uint uStack_b1c;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  TVector<double>_u_0 local_ae8;
  TVector<double>_u_0 local_ad0;
  TVector<double>_u_0 local_ab8;
  FName local_aa0;
  FName local_a98;
  TVector<double> local_a90;
  TVector<double> local_a78;
  <lambda_3> local_a60;
  FName local_a38;
  FName local_a30;
  TQuat<double> local_a28;
  undefined4 local_a08;
  undefined4 uStack_a04;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> TStack_a00;
  double local_9f0;
  double dStack_9e8;
  double local_9e0;
  double local_9d8;
  double dStack_9d0;
  double local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  double local_930;
  double dStack_928;
  double local_920;
  double local_918;
  double dStack_910;
  double local_908;
  TVector<double> local_900;
  TVector<double> local_8e8;
  undefined1 local_8c8 [16];
  double local_8b8;
  double dStack_8b0;
  TVector<double> local_8a8;
  TVector<double> local_890;
  TVector<double> local_878;
  FPosQuat local_858;
  undefined1 local_818 [40];
  double dStack_7f0;
  double local_7e8;
  double dStack_7e0;
  undefined4 local_7d8;
  undefined4 uStack_7d4;
  TTypedIndexRange<FCompactPoseBoneIndex,TArray<unsigned_char,TMemStackAllocator<0>_>_> TStack_7d0;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined1 local_7b8 [48];
  __m128d local_788;
  __m128d local_778;
  __m128d local_768;
  undefined1 local_758 [48];
  __m128d local_728;
  __m128d local_718;
  __m128d local_708;
  TTransform<double> local_6f8;
  undefined1 local_698 [96];
  TTransform<double> local_638;
  TTransform<double> local_5d8;
  TTransform<double> local_578;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined8 uStack_510;
  uint local_508;
  uint uStack_504;
  uint uStack_500;
  uint uStack_4fc;
  uint local_4f8;
  uint uStack_4f4;
  uint uStack_4f0;
  uint uStack_4ec;
  uint local_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  uint uStack_4dc;
  uint local_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint local_4c8;
  uint uStack_4c4;
  uint uStack_4c0;
  uint uStack_4bc;
  uint local_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  undefined1 local_4a8 [48];
  __m128d local_478;
  __m128d local_468;
  __m128d local_458;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_d28;
  local_c98 = param_1;
  local_b98 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name476,L"Animation/RigidBodyWithControl");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_c78,LLMScope_Name476,false,None,Default,true);
  FMemScope::FMemScope(&local_b90,&LLMScope_Name476,true);
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread");
  pFVar64 = (FTaskBase *)0x0;
  uVar61 = 0;
  FVar51 = StatPtr_STAT_RigidBodyNodeWithControl_Eval;
  if (StatPtr_STAT_RigidBodyNodeWithControl_Eval ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Eval>)0x0) {
    pFVar50 = ::FName::FName(&local_aa0,"STAT_RigidBodyNodeWithControl_Eval");
    FVar51 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Eval>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Eval,
                        *pFVar50,L"RigidBodyNodeWithControl_Eval","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar71 = *(FName *)FVar51;
  bVar35 = false;
  bVar39 = false;
  local_c10.ComparisonIndex.Value = 0;
  local_c10.Number = 0;
  bVar44 = false;
  bVar34 = false;
  if ((FVar71.ComparisonIndex.Value.Value == 0) && (FVar71.Number == 0)) {
LAB_14d9d84c3:
    bVar39 = bVar34;
    bVar35 = bVar44;
    bVar44 = false;
    local_ca0 = local_c10;
    FVar71 = local_c10;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c64.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c64._s_0,(char *)*(FName *)((longlong)FVar51 + 0x10));
      bVar35 = false;
      bVar39 = true;
      bVar44 = false;
      bVar34 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c30.ComparisonIndex.Value = FVar71.ComparisonIndex.Value.Value;
        local_c30.Number = FVar71.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c30,(wchar_t *)*(FName *)((longlong)FVar51 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x1de);
        bVar35 = true;
        bVar39 = true;
        bVar44 = true;
        bVar34 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9d84c3;
    local_ca0 = FVar71;
    FThreadStats::AddMessage(FVar71,CycleScopeStart);
    bVar44 = true;
  }
  if (__CsvProfilerStat479 == false) {
    FCsvProfilerTrace::OutputInlineStat("RigidBodyEval",_GCsvCategory_Animation.Index);
    __CsvProfilerStat479 = true;
  }
  local_c58 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat("RigidBodyEval",_GCsvCategory_Animation.Index,"CSV_RigidBodyEval");
  FVar52 = StatPtr_STAT_ImmediateEvaluateSkeletalControl;
  if (StatPtr_STAT_ImmediateEvaluateSkeletalControl ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl>)0x0) {
    pFVar50 = ::FName::FName(&local_a98,"STAT_ImmediateEvaluateSkeletalControl");
    FVar52 = (FThreadSafeStaticStat<FStat_STAT_ImmediateEvaluateSkeletalControl>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateEvaluateSkeletalControl,
                        *pFVar50,
                        L"FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread",
                        "STATGROUP_ImmediatePhysics","STATCAT_Advanced",L"Immediate Physics",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar67 = *(FName *)FVar52;
  bVar34 = false;
  bVar38 = false;
  local_c00.ComparisonIndex.Value = 0;
  local_c00.Number = 0;
  bVar43 = false;
  bVar45 = false;
  if ((FVar67.ComparisonIndex.Value.Value == 0) && (FVar67.Number == 0)) {
LAB_14d9d8634:
    bVar38 = bVar45;
    bVar34 = bVar43;
    bVar43 = false;
    local_ca8 = local_c00;
    FVar67 = local_c00;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c60.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c60._s_0,(char *)*(FName *)((longlong)FVar52 + 0x10));
      bVar34 = false;
      bVar38 = true;
      bVar43 = false;
      bVar45 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c48.ComparisonIndex.Value = FVar67.ComparisonIndex.Value.Value;
        local_c48.Number = FVar67.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c48,(wchar_t *)*(FName *)((longlong)FVar52 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x1e0);
        bVar34 = true;
        bVar38 = true;
        bVar43 = true;
        bVar45 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9d8634;
    local_ca8 = FVar67;
    FThreadStats::AddMessage(FVar67,CycleScopeStart);
    bVar43 = true;
  }
  pTVar41 = CVarEnableRigidBodyNodeWithControlSimulation.Ref;
  bVar45 = IsInParallelGameThread();
  if (bVar45) {
LAB_14d9d865a:
    pFVar53 = pFVar64;
  }
  else {
    bVar45 = IsInGameThread();
    pFVar53 = (FTaskBase *)&DAT_00000004;
    if (bVar45) goto LAB_14d9d865a;
  }
  if (*(int *)((pFVar53->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
              (longlong)(pTVar41->ShadowedValue + -0x16)) == 0) goto LAB_14d9daed7;
  fVar140 = this->AccumulatedDeltaTime;
  this->AccumulatedDeltaTime = 0.0;
  local_c90 = fVar140;
  if ((this->bEnabled == 0) || (this->Simulation == (FSimulation *)0x0)) goto LAB_14d9daed7;
  pFVar53 = (this->SimulationTask).Pimpl.Reference;
  if ((pFVar53 != (FTaskBase *)0x0) && ((pFVar53->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    FVar54 = StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait;
    if (StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait ==
        (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait>)0x0) {
      pFVar50 = ::FName::FName(&local_a38,"STAT_RigidBodyNodeWithControl_SimulationWait");
      FVar54 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait,*pFVar50,
                          L"RigidBodyNodeWithControl_SimulationWait","STATGROUP_Anim",
                          "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar69 = *(FName *)FVar54;
    bVar45 = false;
    bVar36 = false;
    local_bf0.ComparisonIndex.Value = 0;
    local_bf0.Number = 0;
    if ((FVar69.ComparisonIndex.Value.Value == 0) && (FVar69.Number == 0)) {
LAB_14d9d87df:
      bVar46 = false;
      FVar69 = local_bf0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_c68.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_c68._s_0,(char *)*(FName *)((longlong)FVar54 + 0x10));
        bVar45 = false;
        bVar36 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c40.ComparisonIndex.Value = FVar69.ComparisonIndex.Value.Value;
          local_c40.Number = FVar69.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c40,(wchar_t *)*(FName *)((longlong)FVar54 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                     ,0x1b1);
          bVar45 = true;
          bVar36 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9d87df;
      FThreadStats::AddMessage(FVar69,CycleScopeStart);
      bVar46 = true;
    }
    if (__CsvProfilerStat434 == false) {
      FCsvProfilerTrace::OutputInlineStat
                ("RigidBodyNodeWithControlSimulationWait",_GCsvCategory_Animation.Index);
      __CsvProfilerStat434 = true;
    }
    uVar49 = _GCsvCategory_Animation.Index;
    FCsvProfiler::BeginStat
              ("RigidBodyNodeWithControlSimulationWait",_GCsvCategory_Animation.Index,
               "CSV_RigidBodyNodeWithControlSimulationWait");
    pFVar53 = (this->SimulationTask).Pimpl.Reference;
    if (pFVar53 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar53);
    }
    FCsvProfiler::EndStat("RigidBodyNodeWithControlSimulationWait",uVar49);
    if (bVar36) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar45) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    param_1 = local_c98;
    if (bVar46) {
      FThreadStats::AddMessage(FVar69,CycleScopeEnd);
      param_1 = local_c98;
    }
  }
  if (this->bHaveSetupControls == '\0') {
    if (this->bEnableControls != false) {
      lVar73 = param_1->_padding_;
      if ((*(longlong *)(lVar73 + 0x158) == 0) &&
         (bVar45 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_2821110184175206020>,true,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                              ,0x17c,"SkeletalMeshComponent"), bVar45)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      SetupControls(this,*(USkeletalMeshComponent **)(lVar73 + 0x158));
    }
  }
  else if (this->bEnableControls == false) {
    DestroyControlsAndBodyModifiers(this);
  }
  lVar73 = param_1->_padding_;
  lVar74 = *(longlong *)&(param_1->Pose).Pose.field_0x10;
  local_818._0_8_ = *(double *)(lVar73 + 0x20);
  local_818._8_8_ = *(double *)(lVar73 + 0x28);
  local_818._16_8_ = *(double *)(lVar73 + 0x30);
  local_818._24_8_ = *(double *)(lVar73 + 0x38);
  local_818._32_8_ = *(double *)(lVar73 + 0x40);
  dStack_7f0 = *(double *)(lVar73 + 0x48);
  local_7e8 = *(double *)(lVar73 + 0x50);
  dStack_7e0 = *(double *)(lVar73 + 0x58);
  local_7d8 = *(undefined4 *)(lVar73 + 0x60);
  uStack_7d4 = *(undefined4 *)(lVar73 + 100);
  TStack_7d0._0_4_ = *(undefined4 *)(lVar73 + 0x68);
  TStack_7d0._4_4_ = *(undefined4 *)(lVar73 + 0x6c);
  TStack_7d0._8_4_ = *(undefined4 *)(lVar73 + 0x70);
  TStack_7d0._12_4_ = *(undefined4 *)(lVar73 + 0x74);
  uStack_7c0 = *(undefined4 *)(lVar73 + 0x78);
  uStack_7bc = *(undefined4 *)(lVar73 + 0x7c);
  if ((*(short *)(lVar73 + 0x5c0) == -1) || (*(longlong *)(lVar73 + 0x5b8) == -1)) {
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = (double)local_818._0_8_;
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = (double)local_818._8_8_;
    bVar45 = true;
    this->ResetSimulatedTeleportType = ResetPhysics;
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = (double)local_818._16_8_;
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = (double)local_818._24_8_;
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = (double)local_818._32_8_;
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dStack_7f0;
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = local_7e8;
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dStack_7e0;
    *(undefined4 *)(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 = local_7d8;
    *(undefined4 *)((longlong)(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 + 4) =
         uStack_7d4;
    *(undefined4 *)((this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 + 1) = TStack_7d0._0_4_;
    *(undefined4 *)((longlong)(this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64 + 0xc) =
         TStack_7d0._4_4_;
    *(undefined4 *)(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 = TStack_7d0._8_4_;
    *(undefined4 *)((longlong)(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 + 4) =
         TStack_7d0._12_4_;
    *(undefined4 *)((this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 + 1) = uStack_7c0;
    *(undefined4 *)((longlong)(this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64 + 0xc) =
         uStack_7bc;
  }
  else {
    bVar45 = false;
  }
  if (((0.0 < this->EvaluationResetTime) && (!bVar45)) &&
     (this->EvaluationResetTime < this->WorldTimeSeconds - (fVar140 + this->LastEvalTimeSeconds))) {
    if (5 < (byte)LogPhysicsControl._0_1_) {
      UObjectBaseUtility::GetFullName
                (*(UObjectBaseUtility **)(param_1->_padding_ + 0x140),&local_b18,(UObject *)0x0,None
                );
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b18.Data.AllocatorInstance.Data);
      }
    }
    this->ResetSimulatedTeleportType = ResetPhysics;
  }
  this->LastEvalTimeSeconds = this->WorldTimeSeconds;
  if ((this->SimulationSpace == WorldSpace) &&
     (TStack_a00._8_8_ = CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_), local_a08 = local_7d8,
     uStack_a04 = uStack_7d4, TStack_a00._0_4_ = TStack_7d0._0_4_,
     TStack_a00._4_4_ = TStack_7d0._4_4_,
     (double)CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_) *
     (double)CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_) +
     (double)CONCAT44(uStack_7d4,local_7d8) * (double)CONCAT44(uStack_7d4,local_7d8) +
     (double)CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_) *
     (double)CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_) <
     (double)(this->WorldSpaceMinimumScale * this->WorldSpaceMinimumScale))) goto LAB_14d9daed7;
  FVar47 = FBoneReference::GetCompactPoseIndex(&this->BaseBoneRef,(FBoneContainer *)local_ba8);
  pTVar55 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->Pose,*(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar47));
  local_5d8.Rotation.XY.m128d_f64[0] = (pTVar55->Rotation).XY.m128d_f64[0];
  local_5d8.Rotation.XY.m128d_f64[1] = (pTVar55->Rotation).XY.m128d_f64[1];
  local_5d8.Rotation.ZW.m128d_f64[0] = (pTVar55->Rotation).ZW.m128d_f64[0];
  local_5d8.Rotation.ZW.m128d_f64[1] = (pTVar55->Rotation).ZW.m128d_f64[1];
  local_5d8.Translation.XY.m128d_f64[0] = (pTVar55->Translation).XY.m128d_f64[0];
  local_5d8.Translation.XY.m128d_f64[1] = (pTVar55->Translation).XY.m128d_f64[1];
  local_5d8.Translation.ZW.m128d_f64[0] = (pTVar55->Translation).ZW.m128d_f64[0];
  local_5d8.Translation.ZW.m128d_f64[1] = (pTVar55->Translation).ZW.m128d_f64[1];
  local_5d8.Scale3D.XY.m128d_f64[0] = (pTVar55->Scale3D).XY.m128d_f64[0];
  local_5d8.Scale3D.XY.m128d_f64[1] = (pTVar55->Scale3D).XY.m128d_f64[1];
  local_5d8.Scale3D.ZW.m128d_f64[0] = (pTVar55->Scale3D).ZW.m128d_f64[0];
  local_5d8.Scale3D.ZW.m128d_f64[1] = (pTVar55->Scale3D).ZW.m128d_f64[1];
  if ((this->ResetSimulatedTeleportType == None) && (this->bCheckForBodyTransformInit != '\0')) {
    this->field_0x640 = this->field_0x640 & 0xfb;
    InitializeNewBodyTransformsDuringSimulation
              (this,param_1,(TTransform<double> *)local_818,&local_5d8);
  }
  dVar130 = _UNK_150689698;
  dVar133 = ___xmm_40000000000000004000000000000000;
  dVar131 = __real_3ff0000000000000;
  uVar77 = SUB84(__real_3ff0000000000000,0);
  uVar57 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  uVar49 = 0;
  if (this->ResetSimulatedTeleportType != None) {
    if ((this->bTransferBoneVelocities != '\0') &&
       (0 < *(int *)&(this->CapturedBoneVelocityPose).Pose.field_0x8)) {
      uVar90 = (this->OutputBoneData).ArrayNum;
      uVar56 = (ulonglong)(int)uVar90;
      pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
      uVar79 = (undefined4)__real_bff0000000000000;
      uVar40 = (ulonglong)__real_bff0000000000000 >> 0x20;
      pFVar66 = pFVar63 + uVar56 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != (int)uVar56) {
          local_cb4 = 0;
          `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_cb4);
        }
        param_1 = local_c98;
        if (pFVar63 == pFVar66) break;
        uVar81 = *(uint *)(pFVar63 + 0x18);
        uVar68 = uVar61;
        if ((int)uVar81 < (this->BodyAnimData).ArrayNum) {
          uVar68 = ~uVar81 >> 0x1f;
        }
        if ((uVar68 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (this->BodyAnimData).AllocatorInstance.Data;
        lVar73 = (longlong)(int)uVar81 * 0x38;
        if (((byte)pFVar10[lVar73 + 0x30] & 1) == 0) {
LAB_14d9d9119:
          uVar56 = (ulonglong)uVar90;
          pFVar63 = pFVar63 + 0x20;
        }
        else {
          FVar47 = *(FCompactPoseBoneIndex *)(pFVar63 + 0x10);
          if (((int)FVar47 < 0) || (*(int *)(lVar74 + 0x78) <= (int)FVar47)) {
            bVar45 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8192494858347217501>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                                ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())"
                               );
            if (bVar45) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            goto LAB_14d9d9119;
          }
          uVar81 = uVar49;
          if ((int)FVar47 < *(int *)(lVar74 + 0x78)) {
            uVar81 = ~(uint)FVar47 >> 0x1f;
          }
          if ((uVar81 == 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar75 = *(int *)(*(longlong *)(lVar74 + 0x70) + (longlong)(int)FVar47 * 4);
          local_c88 = (FCompactPoseBoneIndex *)CONCAT44(local_c88._4_4_,iVar75);
          if ((iVar75 < 0) ||
             ((this->CapturedBoneVelocityBoneContainer).SkeletonToCompactPose.ArrayNum <= iVar75))
          goto LAB_14d9d9119;
          if ((iVar75 < 0) &&
             (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar45)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          FVar9 = *(FCompactPoseBoneIndex *)
                   ((this->CapturedBoneVelocityBoneContainer).SkeletonToCompactPose.
                    AllocatorInstance.Data + (longlong)(int)local_c88 * 4);
          if (FVar9 == (FCompactPoseBoneIndex)0xffffffff) goto LAB_14d9d9119;
          pTVar55 = FCSPose<FCompactHeapPose>::GetComponentSpaceTransform
                              (&this->CapturedBoneVelocityPose,FVar9);
          local_3e8.Rotation.XY.m128d_f64[0] = (pTVar55->Rotation).XY.m128d_f64[0];
          local_3e8.Rotation.XY.m128d_f64[1] = (pTVar55->Rotation).XY.m128d_f64[1];
          local_3e8.Rotation.ZW.m128d_f64[0] = (pTVar55->Rotation).ZW.m128d_f64[0];
          local_3e8.Rotation.ZW.m128d_f64[1] = (pTVar55->Rotation).ZW.m128d_f64[1];
          local_3e8.Translation.XY.m128d_f64[0] = (pTVar55->Translation).XY.m128d_f64[0];
          local_3e8.Translation.XY.m128d_f64[1] = (pTVar55->Translation).XY.m128d_f64[1];
          local_3e8.Translation.ZW.m128d_f64[0] = (pTVar55->Translation).ZW.m128d_f64[0];
          local_3e8.Translation.ZW.m128d_f64[1] = (pTVar55->Translation).ZW.m128d_f64[1];
          local_3e8.Scale3D.XY.m128d_f64[0] = (pTVar55->Scale3D).XY.m128d_f64[0];
          local_3e8.Scale3D.XY.m128d_f64[1] = (pTVar55->Scale3D).XY.m128d_f64[1];
          local_3e8.Scale3D.ZW.m128d_f64[0] = (pTVar55->Scale3D).ZW.m128d_f64[0];
          local_3e8.Scale3D.ZW.m128d_f64[1] = (pTVar55->Scale3D).ZW.m128d_f64[1];
          pTVar55 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_c98->Pose,FVar47);
          local_388.Rotation.XY.m128d_f64[0] = (pTVar55->Rotation).XY.m128d_f64[0];
          local_388.Rotation.XY.m128d_f64[1] = (pTVar55->Rotation).XY.m128d_f64[1];
          local_388.Rotation.ZW.m128d_f64[0] = (pTVar55->Rotation).ZW.m128d_f64[0];
          local_388.Rotation.ZW.m128d_f64[1] = (pTVar55->Rotation).ZW.m128d_f64[1];
          local_388.Translation.XY.m128d_f64[0] = (pTVar55->Translation).XY.m128d_f64[0];
          local_388.Translation.XY.m128d_f64[1] = (pTVar55->Translation).XY.m128d_f64[1];
          local_388.Translation.ZW.m128d_f64[0] = (pTVar55->Translation).ZW.m128d_f64[0];
          local_388.Translation.ZW.m128d_f64[1] = (pTVar55->Translation).ZW.m128d_f64[1];
          local_388.Scale3D.XY.m128d_f64[0] = (pTVar55->Scale3D).XY.m128d_f64[0];
          local_388.Scale3D.XY.m128d_f64[1] = (pTVar55->Scale3D).XY.m128d_f64[1];
          local_388.Scale3D.ZW.m128d_f64[0] = (pTVar55->Scale3D).ZW.m128d_f64[0];
          local_388.Scale3D.ZW.m128d_f64[1] = (pTVar55->Scale3D).ZW.m128d_f64[1];
          ConvertCSTransformToSimSpace
                    (&local_208,this->SimulationSpace,&local_3e8,(TTransform<double> *)local_818,
                     &local_5d8);
          ConvertCSTransformToSimSpace
                    (&local_268,this->SimulationSpace,&local_388,(TTransform<double> *)local_818,
                     &local_5d8);
          uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (fVar140 <= 0.0) {
            uVar56 = (ulonglong)uVar90;
            pFVar63 = pFVar63 + 0x20;
            *(double *)(pFVar10 + lVar73 + 0x18) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            *(undefined8 *)(pFVar10 + lVar73 + 0x18 + 8) = uVar32;
            *(double *)(pFVar10 + lVar73 + 0x28) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            *(double *)(pFVar10 + lVar73) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            *(undefined8 *)(pFVar10 + lVar73 + 8) = uVar32;
            *(double *)(pFVar10 + lVar73 + 0x10) =
                 UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          else {
            local_9c8 = local_208.Translation.ZW.m128d_f64[0];
            local_9e0 = local_268.Translation.ZW.m128d_f64[0];
            local_9f0 = local_268.Translation.XY.m128d_f64[0];
            dStack_9e8 = local_268.Translation.XY.m128d_f64[1];
            dVar26 = dVar131 / (double)fVar140;
            local_9d8 = local_208.Translation.XY.m128d_f64[0];
            dStack_9d0 = local_208.Translation.XY.m128d_f64[1];
            *(double *)(pFVar10 + lVar73 + 0x18) =
                 (local_268.Translation.XY.m128d_f64[0] - local_208.Translation.XY.m128d_f64[0]) *
                 dVar26;
            *(double *)(pFVar10 + lVar73 + 0x20) =
                 dVar26 * (local_268.Translation.XY.m128d_f64[1] -
                          local_208.Translation.XY.m128d_f64[1]);
            *(double *)(pFVar10 + lVar73 + 0x28) =
                 dVar26 * (local_268.Translation.ZW.m128d_f64[0] -
                          local_208.Translation.ZW.m128d_f64[0]);
            dVar21 = local_268.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar22 = local_268.Rotation.XY.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            dVar23 = local_268.Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar25 = local_268.Rotation.ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            auVar132._8_4_ = SUB84(dVar25,0);
            auVar132._0_8_ = dVar23;
            auVar132._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            local_bc8.X = dVar21 * local_208.Rotation.ZW.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                          local_208.Rotation.XY.m128d_f64[0] * auVar132._8_8_ +
                          local_208.Rotation.ZW.m128d_f64[0] * dVar22 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                          dVar23 * local_208.Rotation.XY.m128d_f64[1] *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar30 = dVar21 * local_208.Rotation.ZW.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     local_208.Rotation.XY.m128d_f64[1] * dVar25 +
                     local_208.Rotation.ZW.m128d_f64[1] * dVar22 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     dVar23 * local_208.Rotation.XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar80 = (undefined4)((ulonglong)dVar30 >> 0x20);
            local_8c8._8_4_ = SUB84(dVar30,0);
            local_8c8._0_8_ = local_bc8.X;
            local_8c8._12_4_ = uVar80;
            local_8b8 = dVar21 * local_208.Rotation.XY.m128d_f64[1] *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                        local_208.Rotation.ZW.m128d_f64[0] * auVar132._8_8_ +
                        local_208.Rotation.XY.m128d_f64[0] * dVar22 *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                        dVar23 * local_208.Rotation.ZW.m128d_f64[1] *
                        GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dStack_8b0 = dVar21 * local_208.Rotation.XY.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                         local_208.Rotation.ZW.m128d_f64[1] * dVar25 +
                         local_208.Rotation.XY.m128d_f64[1] * dVar22 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                         dVar23 * local_208.Rotation.ZW.m128d_f64[0] *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            auVar28._8_4_ = SUB84(dVar30,0);
            auVar28._0_8_ = local_bc8.X;
            auVar28._12_4_ = uVar80;
            local_bc8.Y = auVar28._8_8_;
            uVar80 = uVar79;
            uVar82 = (int)uVar40;
            if (0.0 <= local_bc8.X * UE::Math::TQuat<double>::Identity.X +
                       dVar30 * UE::Math::TQuat<double>::Identity.Y +
                       dStack_8b0 * UE::Math::TQuat<double>::Identity.W +
                       local_8b8 * UE::Math::TQuat<double>::Identity.Z) {
              uVar80 = uVar77;
              uVar82 = (int)uVar57;
            }
            local_bc8.Y = local_bc8.Y * (double)CONCAT44(uVar82,uVar80);
            dVar21 = local_8b8 * (double)CONCAT44(uVar82,uVar80);
            auVar20._8_4_ = SUB84(dVar21,0);
            auVar20._0_8_ = local_bc8.Y;
            auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            local_bc8.Z = auVar20._8_8_;
            local_bc8.W = dStack_8b0 * (double)CONCAT44(uVar82,uVar80);
            local_bc8.X = (double)CONCAT44(uVar82,uVar80) * local_bc8.X;
            UE::Math::TQuat<double>::Log(&local_bc8,&local_a28);
            pFVar63 = pFVar63 + 0x20;
            uVar56 = (ulonglong)uVar90;
            dVar21 = local_a28.Y * dVar130 * dVar26;
            auVar13._8_4_ = SUB84(dVar21,0);
            auVar13._0_8_ = local_a28.X * dVar133 * dVar26;
            auVar13._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            *(undefined1 (*) [16])(pFVar10 + lVar73) = auVar13;
            *(double *)(pFVar10 + lVar73 + 0x10) = local_a28.Z * dVar133 * dVar26;
            fVar140 = local_c90;
          }
        }
      }
    }
    if (this->ResetSimulatedTeleportType == TeleportPhysics) {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        local_978 = CONCAT44(uStack_7d4,local_7d8);
        uStack_970 = CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_);
        uVar32 = CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_);
        local_968 = uVar32;
        local_960 = local_978;
        uStack_958 = uStack_970;
        local_950 = uVar32;
        local_948 = local_978;
        uStack_940 = uStack_970;
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)
                    ((longlong)(((VectorRegister4Double *)&param_1->_padding_)->XY).m128d_f64[0] +
                    0x140),&local_af8,(UObject *)0x0,None);
        local_938 = uVar32;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_af8.Data.AllocatorInstance.Data);
        }
      }
      uVar90 = (this->OutputBoneData).ArrayNum;
      uVar57 = (ulonglong)(int)uVar90;
      pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar66 = pFVar63 + uVar57 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != (int)uVar57) {
          local_cb1 = 0;
          `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_cb1);
        }
        if (pFVar63 == pFVar66) break;
        uVar81 = *(uint *)(pFVar63 + 0x18);
        lVar73 = (longlong)(int)uVar81;
        uVar68 = uVar49;
        if ((int)uVar81 < (this->BodyAnimData).ArrayNum) {
          uVar68 = ~uVar81 >> 0x1f;
        }
        if ((uVar68 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (this->BodyAnimData).AllocatorInstance.Data + lVar73 * 0x38 + 0x30;
        *pFVar10 = (FScriptContainerElement)((byte)*pFVar10 | 2);
        uVar68 = uVar61;
        if ((int)uVar81 < (this->Bodies).ArrayNum) {
          uVar68 = ~uVar81 >> 0x1f;
        }
        if ((uVar68 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar73 * 8),
                   (TTransform<double> *)local_698);
        fVar134 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar135 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar136 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar138 = GlobalVectorConstants::Float1110.m128_f32[3];
        EVar8 = this->SimulationSpace;
        uVar92 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        uVar95 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_7b8._24_4_ = uVar92;
        local_7b8._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_7b8._28_4_ = uVar95;
        uVar114 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        uVar117 = (undefined4)
                  ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_788.m128d_f64[1]._0_4_ = uVar114;
        local_788.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_788.m128d_f64[1]._4_4_ = uVar117;
        uVar76 = SUB84((double)fVar138,0);
        uVar78 = (undefined4)((ulonglong)(double)fVar138 >> 0x20);
        uVar83 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        uVar85 = (undefined4)
                 ((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_768.m128d_f64[1]._0_4_ = uVar76;
        local_768.m128d_f64[0] = (double)fVar136;
        local_768.m128d_f64[1]._4_4_ = uVar78;
        local_7b8._8_4_ = uVar83;
        local_7b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_7b8._12_4_ = uVar85;
        uVar104 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        uVar107 = (undefined4)
                  ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        uVar124 = SUB84((double)fVar135,0);
        uVar127 = (undefined4)((ulonglong)(double)fVar135 >> 0x20);
        local_7b8._40_4_ = uVar104;
        local_7b8._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_7b8._44_4_ = uVar107;
        local_778.m128d_f64[1]._0_4_ = uVar124;
        local_778.m128d_f64[0] = (double)fVar134;
        local_778.m128d_f64[1]._4_4_ = uVar127;
        iVar75 = local_698._0_4_;
        iVar48 = local_698._4_4_;
        uVar77 = local_698._8_4_;
        uVar79 = local_698._12_4_;
        uVar80 = local_698._16_4_;
        uVar82 = local_698._20_4_;
        uVar84 = local_698._24_4_;
        uVar86 = local_698._28_4_;
        uVar87 = local_698._32_4_;
        uVar89 = local_698._36_4_;
        uVar93 = local_698._40_4_;
        uVar96 = local_698._44_4_;
        uVar98 = local_698._48_4_;
        uVar101 = local_698._52_4_;
        uVar105 = local_698._56_4_;
        uVar108 = local_698._60_4_;
        uVar110 = local_698._64_4_;
        uVar112 = local_698._68_4_;
        uVar115 = local_698._72_4_;
        uVar118 = local_698._76_4_;
        uVar120 = local_698._80_4_;
        uVar122 = local_698._84_4_;
        uVar125 = local_698._88_4_;
        uVar128 = local_698._92_4_;
        if (EVar8 == ComponentSpace) {
LAB_14d9d9765:
          local_7b8._4_4_ = iVar48;
          local_7b8._0_4_ = iVar75;
          local_7b8._8_4_ = uVar77;
          local_7b8._12_4_ = uVar79;
          local_7b8._20_4_ = uVar82;
          local_7b8._16_4_ = uVar80;
          local_7b8._24_4_ = uVar84;
          local_7b8._28_4_ = uVar86;
          local_7b8._36_4_ = uVar89;
          local_7b8._32_4_ = uVar87;
          local_7b8._40_4_ = uVar93;
          local_7b8._44_4_ = uVar96;
          local_788.m128d_f64[0]._4_4_ = uVar101;
          local_788.m128d_f64[0]._0_4_ = uVar98;
          local_788.m128d_f64[1]._0_4_ = uVar105;
          local_788.m128d_f64[1]._4_4_ = uVar108;
          local_778.m128d_f64[0]._4_4_ = uVar112;
          local_778.m128d_f64[0]._0_4_ = uVar110;
          local_778.m128d_f64[1]._0_4_ = uVar115;
          local_778.m128d_f64[1]._4_4_ = uVar118;
        }
        else {
          if (EVar8 != WorldSpace) {
            if (EVar8 == BaseBoneSpace) {
              local_4a8._8_4_ = uVar83;
              local_4a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_4a8._12_4_ = uVar85;
              local_4a8._24_4_ = uVar92;
              local_4a8._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_4a8._28_4_ = uVar95;
              local_4a8._40_4_ = uVar104;
              local_4a8._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_4a8._44_4_ = uVar107;
              local_478.m128d_f64[1]._0_4_ = uVar114;
              local_478.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_478.m128d_f64[1]._4_4_ = uVar117;
              local_468.m128d_f64[1]._0_4_ = uVar124;
              local_468.m128d_f64[0] = (double)fVar134;
              local_468.m128d_f64[1]._4_4_ = uVar127;
              local_458.m128d_f64[1]._0_4_ = uVar76;
              local_458.m128d_f64[0] = (double)fVar136;
              local_458.m128d_f64[1]._4_4_ = uVar78;
              UE::Math::TTransform<double>::Multiply
                        ((TTransform<double> *)local_4a8,(TTransform<double> *)local_698,&local_5d8)
              ;
              fVar134 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar135 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar136 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar138 = GlobalVectorConstants::Float1110.m128_f32[3];
              iVar75 = local_4a8._0_4_;
              iVar48 = local_4a8._4_4_;
              uVar77 = local_4a8._8_4_;
              uVar79 = local_4a8._12_4_;
              uVar80 = local_4a8._16_4_;
              uVar82 = local_4a8._20_4_;
              uVar84 = local_4a8._24_4_;
              uVar86 = local_4a8._28_4_;
              uVar87 = local_4a8._32_4_;
              uVar89 = local_4a8._36_4_;
              uVar93 = local_4a8._40_4_;
              uVar96 = local_4a8._44_4_;
              uVar98 = local_478.m128d_f64[0]._0_4_;
              uVar101 = local_478.m128d_f64[0]._4_4_;
              uVar105 = local_478.m128d_f64[1]._0_4_;
              uVar108 = local_478.m128d_f64[1]._4_4_;
              uVar110 = local_468.m128d_f64[0]._0_4_;
              uVar112 = local_468.m128d_f64[0]._4_4_;
              uVar115 = local_468.m128d_f64[1]._0_4_;
              uVar118 = local_468.m128d_f64[1]._4_4_;
              uVar120 = local_458.m128d_f64[0]._0_4_;
              uVar122 = local_458.m128d_f64[0]._4_4_;
              uVar125 = local_458.m128d_f64[1]._0_4_;
              uVar128 = local_458.m128d_f64[1]._4_4_;
            }
            else {
              local_cb0 = 0;
              `FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l99::<lambda_1>
              ::operator()(&local_cb0);
              fVar134 = GlobalVectorConstants::Float1110.m128_f32[0];
              fVar135 = GlobalVectorConstants::Float1110.m128_f32[1];
              fVar136 = GlobalVectorConstants::Float1110.m128_f32[2];
              fVar138 = GlobalVectorConstants::Float1110.m128_f32[3];
              iVar75 = local_698._0_4_;
              iVar48 = local_698._4_4_;
              uVar77 = local_698._8_4_;
              uVar79 = local_698._12_4_;
              uVar80 = local_698._16_4_;
              uVar82 = local_698._20_4_;
              uVar84 = local_698._24_4_;
              uVar86 = local_698._28_4_;
              uVar87 = local_698._32_4_;
              uVar89 = local_698._36_4_;
              uVar93 = local_698._40_4_;
              uVar96 = local_698._44_4_;
              uVar98 = local_698._48_4_;
              uVar101 = local_698._52_4_;
              uVar105 = local_698._56_4_;
              uVar108 = local_698._60_4_;
              uVar110 = local_698._64_4_;
              uVar112 = local_698._68_4_;
              uVar115 = local_698._72_4_;
              uVar118 = local_698._76_4_;
              uVar120 = local_698._80_4_;
              uVar122 = local_698._84_4_;
              uVar125 = local_698._88_4_;
              uVar128 = local_698._92_4_;
            }
            goto LAB_14d9d9765;
          }
          pTVar55 = UE::Math::TTransform<double>::GetRelativeTransform
                              ((TTransform<double> *)local_698,&local_1a8,
                               &this->PreviousCompWorldSpaceTM);
          fVar134 = GlobalVectorConstants::Float1110.m128_f32[0];
          fVar135 = GlobalVectorConstants::Float1110.m128_f32[1];
          fVar136 = GlobalVectorConstants::Float1110.m128_f32[2];
          fVar138 = GlobalVectorConstants::Float1110.m128_f32[3];
          iVar75 = *(int *)(pTVar55->Rotation).XY.m128d_f64;
          iVar48 = *(int *)((longlong)(pTVar55->Rotation).XY.m128d_f64 + 4);
          uVar77 = *(undefined4 *)((pTVar55->Rotation).XY.m128d_f64 + 1);
          uVar79 = *(undefined4 *)((longlong)(pTVar55->Rotation).XY.m128d_f64 + 0xc);
          local_7b8._0_16_ = *(undefined1 (*) [16])(pTVar55->Rotation).XY.m128d_f64;
          p_Var1 = &(pTVar55->Rotation).ZW;
          uVar80 = *(undefined4 *)p_Var1->m128d_f64;
          uVar82 = *(undefined4 *)((longlong)(pTVar55->Rotation).ZW.m128d_f64 + 4);
          uVar84 = *(undefined4 *)((pTVar55->Rotation).ZW.m128d_f64 + 1);
          uVar86 = *(undefined4 *)((longlong)(pTVar55->Rotation).ZW.m128d_f64 + 0xc);
          local_7b8._16_16_ = *(undefined1 (*) [16])p_Var1->m128d_f64;
          uVar87 = *(undefined4 *)(pTVar55->Translation).XY.m128d_f64;
          uVar89 = *(undefined4 *)((longlong)(pTVar55->Translation).XY.m128d_f64 + 4);
          uVar93 = *(undefined4 *)((pTVar55->Translation).XY.m128d_f64 + 1);
          uVar96 = *(undefined4 *)((longlong)(pTVar55->Translation).XY.m128d_f64 + 0xc);
          local_7b8._32_16_ = *(undefined1 (*) [16])(pTVar55->Translation).XY.m128d_f64;
          p_Var1 = &(pTVar55->Translation).ZW;
          uVar98 = *(undefined4 *)p_Var1->m128d_f64;
          uVar101 = *(undefined4 *)((longlong)(pTVar55->Translation).ZW.m128d_f64 + 4);
          uVar105 = *(undefined4 *)((pTVar55->Translation).ZW.m128d_f64 + 1);
          uVar108 = *(undefined4 *)((longlong)(pTVar55->Translation).ZW.m128d_f64 + 0xc);
          local_788.m128d_f64 = *&p_Var1->m128d_f64;
          uVar110 = *(undefined4 *)(pTVar55->Scale3D).XY.m128d_f64;
          uVar112 = *(undefined4 *)((longlong)(pTVar55->Scale3D).XY.m128d_f64 + 4);
          uVar115 = *(undefined4 *)((pTVar55->Scale3D).XY.m128d_f64 + 1);
          uVar118 = *(undefined4 *)((longlong)(pTVar55->Scale3D).XY.m128d_f64 + 0xc);
          local_778.m128d_f64 = *&(pTVar55->Scale3D).XY.m128d_f64;
          uVar120 = *(undefined4 *)(pTVar55->Scale3D).ZW.m128d_f64;
          uVar122 = *(undefined4 *)((longlong)(pTVar55->Scale3D).ZW.m128d_f64 + 4);
          uVar125 = *(undefined4 *)((pTVar55->Scale3D).ZW.m128d_f64 + 1);
          uVar128 = *(undefined4 *)((longlong)(pTVar55->Scale3D).ZW.m128d_f64 + 0xc);
        }
        EVar8 = this->SimulationSpace;
        local_768.m128d_f64[0]._4_4_ = uVar122;
        local_768.m128d_f64[0]._0_4_ = uVar120;
        local_768.m128d_f64[1]._0_4_ = uVar125;
        local_768.m128d_f64[1]._4_4_ = uVar128;
        if (EVar8 == ComponentSpace) {
LAB_14d9d97e5:
          local_708.m128d_f64[0]._4_4_ = uVar122;
          local_708.m128d_f64[0]._0_4_ = uVar120;
          local_708.m128d_f64[1]._0_4_ = uVar125;
          local_708.m128d_f64[1]._4_4_ = uVar128;
          local_718.m128d_f64[0]._4_4_ = uVar112;
          local_718.m128d_f64[0]._0_4_ = uVar110;
          local_718.m128d_f64[1]._0_4_ = uVar115;
          local_718.m128d_f64[1]._4_4_ = uVar118;
          local_728.m128d_f64[0]._4_4_ = uVar101;
          local_728.m128d_f64[0]._0_4_ = uVar98;
          local_728.m128d_f64[1]._0_4_ = uVar105;
          local_728.m128d_f64[1]._4_4_ = uVar108;
          local_758._36_4_ = uVar89;
          local_758._32_4_ = uVar87;
          local_758._40_4_ = uVar93;
          local_758._44_4_ = uVar96;
          local_758._20_4_ = uVar82;
          local_758._16_4_ = uVar80;
          local_758._24_4_ = uVar84;
          local_758._28_4_ = uVar86;
          local_758._4_4_ = iVar48;
          local_758._0_4_ = iVar75;
          local_758._8_4_ = uVar77;
          local_758._12_4_ = uVar79;
          local_698._0_4_ = iVar75;
          local_698._4_4_ = iVar48;
          local_698._8_4_ = uVar77;
          local_698._12_4_ = uVar79;
          local_698._16_4_ = uVar80;
          local_698._20_4_ = uVar82;
          local_698._24_4_ = uVar84;
          local_698._28_4_ = uVar86;
          local_698._32_4_ = uVar87;
          local_698._36_4_ = uVar89;
          local_698._40_4_ = uVar93;
          local_698._44_4_ = uVar96;
          local_698._48_4_ = uVar98;
          local_698._52_4_ = uVar101;
          local_698._56_4_ = uVar105;
          local_698._60_4_ = uVar108;
          local_698._64_4_ = uVar110;
          local_698._68_4_ = uVar112;
          local_698._72_4_ = uVar115;
          local_698._76_4_ = uVar118;
          local_698._80_4_ = uVar120;
          local_698._84_4_ = uVar122;
          local_698._88_4_ = uVar125;
          local_698._92_4_ = uVar128;
        }
        else {
          if (EVar8 == WorldSpace) {
            local_758._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            local_758._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_758._12_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
            local_758._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            local_758._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_758._28_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
            local_758._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
            local_758._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_758._44_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
            local_728.m128d_f64[1]._0_4_ =
                 SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
            local_728.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_728.m128d_f64[1]._4_4_ =
                 (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
            local_718.m128d_f64[1]._0_4_ = SUB84((double)fVar135,0);
            local_718.m128d_f64[0] = (double)fVar134;
            local_718.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar135 >> 0x20);
            local_708.m128d_f64[1]._0_4_ = SUB84((double)fVar138,0);
            local_708.m128d_f64[0] = (double)fVar136;
            local_708.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar138 >> 0x20);
            UE::Math::TTransform<double>::Multiply
                      ((TTransform<double> *)local_758,(TTransform<double> *)local_7b8,
                       (TTransform<double> *)local_818);
          }
          else {
            if (EVar8 != BaseBoneSpace) {
              local_caf = 0;
              `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(&local_caf);
              iVar75 = local_7b8._0_4_;
              iVar48 = local_7b8._4_4_;
              uVar77 = local_7b8._8_4_;
              uVar79 = local_7b8._12_4_;
              uVar80 = local_7b8._16_4_;
              uVar82 = local_7b8._20_4_;
              uVar84 = local_7b8._24_4_;
              uVar86 = local_7b8._28_4_;
              uVar87 = local_7b8._32_4_;
              uVar89 = local_7b8._36_4_;
              uVar93 = local_7b8._40_4_;
              uVar96 = local_7b8._44_4_;
              uVar98 = local_788.m128d_f64[0]._0_4_;
              uVar101 = local_788.m128d_f64[0]._4_4_;
              uVar105 = local_788.m128d_f64[1]._0_4_;
              uVar108 = local_788.m128d_f64[1]._4_4_;
              uVar110 = local_778.m128d_f64[0]._0_4_;
              uVar112 = local_778.m128d_f64[0]._4_4_;
              uVar115 = local_778.m128d_f64[1]._0_4_;
              uVar118 = local_778.m128d_f64[1]._4_4_;
              uVar120 = local_768.m128d_f64[0]._0_4_;
              uVar122 = local_768.m128d_f64[0]._4_4_;
              uVar125 = local_768.m128d_f64[1]._0_4_;
              uVar128 = local_768.m128d_f64[1]._4_4_;
              goto LAB_14d9d97e5;
            }
            UE::Math::TTransform<double>::GetRelativeTransform
                      ((TTransform<double> *)local_7b8,(TTransform<double> *)local_758,&local_5d8);
          }
          local_698._0_4_ = local_758._0_4_;
          local_698._4_4_ = local_758._4_4_;
          local_698._8_4_ = local_758._8_4_;
          local_698._12_4_ = local_758._12_4_;
          local_698._16_4_ = local_758._16_4_;
          local_698._20_4_ = local_758._20_4_;
          local_698._24_4_ = local_758._24_4_;
          local_698._28_4_ = local_758._28_4_;
          local_698._32_4_ = local_758._32_4_;
          local_698._36_4_ = local_758._36_4_;
          local_698._40_4_ = local_758._40_4_;
          local_698._44_4_ = local_758._44_4_;
          local_698._48_4_ = local_728.m128d_f64[0]._0_4_;
          local_698._52_4_ = local_728.m128d_f64[0]._4_4_;
          local_698._56_4_ = local_728.m128d_f64[1]._0_4_;
          local_698._60_4_ = local_728.m128d_f64[1]._4_4_;
          local_698._64_4_ = local_718.m128d_f64[0]._0_4_;
          local_698._68_4_ = local_718.m128d_f64[0]._4_4_;
          local_698._72_4_ = local_718.m128d_f64[1]._0_4_;
          local_698._76_4_ = local_718.m128d_f64[1]._4_4_;
          local_698._80_4_ = local_708.m128d_f64[0]._0_4_;
          local_698._84_4_ = local_708.m128d_f64[0]._4_4_;
          local_698._88_4_ = local_708.m128d_f64[1]._0_4_;
          local_698._92_4_ = local_708.m128d_f64[1]._4_4_;
        }
        uVar68 = uVar61;
        if ((int)uVar81 < (this->Bodies).ArrayNum) {
          uVar68 = ~uVar81 >> 0x1f;
        }
        if ((uVar68 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::SetWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar73 * 8),
                   (TTransform<double> *)local_698);
        uVar57 = (ulonglong)uVar90;
        pFVar63 = pFVar63 + 0x20;
      }
    }
    else if (this->ResetSimulatedTeleportType == ResetPhysics) {
      if (5 < (byte)LogPhysicsControl._0_1_) {
        local_9c0 = CONCAT44(uStack_7d4,local_7d8);
        uStack_9b8 = CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_);
        uVar32 = CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_);
        local_9b0 = uVar32;
        local_9a8 = local_9c0;
        uStack_9a0 = uStack_9b8;
        local_998 = uVar32;
        local_990 = local_9c0;
        uStack_988 = uStack_9b8;
        UObjectBaseUtility::GetFullName
                  (*(UObjectBaseUtility **)
                    ((longlong)(((VectorRegister4Double *)&param_1->_padding_)->XY).m128d_f64[0] +
                    0x140),&local_b08,(UObject *)0x0,None);
        local_980 = uVar32;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b08.Data.AllocatorInstance.Data);
        }
      }
      SpaceToWorldTransform
                (&local_2c8,this->SimulationSpace,(TTransform<double> *)local_818,&local_5d8);
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           local_2c8.Rotation.XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
           local_2c8.Rotation.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[0] =
           local_2c8.Rotation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.XY.m128d_f64[1] =
           local_2c8.Rotation.XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           local_2c8.Rotation.ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
           local_2c8.Rotation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[0] =
           local_2c8.Rotation.ZW.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Rotation.ZW.m128d_f64[1] =
           local_2c8.Rotation.ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
           local_2c8.Translation.XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] =
           local_2c8.Translation.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[0] =
           local_2c8.Translation.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.XY.m128d_f64[1] =
           local_2c8.Translation.XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
           local_2c8.Translation.ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] =
           local_2c8.Translation.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[0] =
           local_2c8.Translation.ZW.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Translation.ZW.m128d_f64[1] =
           local_2c8.Translation.ZW.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           local_2c8.Scale3D.XY.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
           local_2c8.Scale3D.XY.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[0] =
           local_2c8.Scale3D.XY.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.XY.m128d_f64[1] =
           local_2c8.Scale3D.XY.m128d_f64[1];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           local_2c8.Scale3D.ZW.m128d_f64[0];
      (this->PreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
           local_2c8.Scale3D.ZW.m128d_f64[1];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[0] =
           local_2c8.Scale3D.ZW.m128d_f64[0];
      (this->PreviousPreviousSimulationSpaceTransform).Scale3D.ZW.m128d_f64[1] =
           local_2c8.Scale3D.ZW.m128d_f64[1];
      uVar61 = (this->OutputBoneData).ArrayNum;
      uVar57 = (ulonglong)(int)uVar61;
      pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
      local_c80 = pFVar63 + uVar57 * 0x20;
      pFVar70 = (FCompactPoseBoneIndex *)(pFVar63 + 0x10);
      while( true ) {
        pFVar66 = local_c80;
        local_c88 = pFVar70;
        if ((this->OutputBoneData).ArrayNum != (int)uVar57) {
          local_cb3 = 0;
          `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_cb3);
        }
        if (pFVar63 == pFVar66) break;
        FVar47 = pFVar70[2];
        uVar90 = uVar49;
        if ((int)FVar47 < (this->BodyAnimData).ArrayNum) {
          uVar90 = ~(uint)FVar47 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar66 = (this->BodyAnimData).AllocatorInstance.Data + (longlong)(int)FVar47 * 0x38 + 0x30;
        *pFVar66 = (FScriptContainerElement)((byte)*pFVar66 | 2);
        pTVar55 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&local_c98->Pose,*pFVar70);
        EVar8 = this->SimulationSpace;
        if (EVar8 == ComponentSpace) {
LAB_14d9d9399:
          local_638.Rotation.XY.m128d_f64 = *&(pTVar55->Rotation).XY.m128d_f64;
          local_638.Rotation.ZW.m128d_f64 = *&(pTVar55->Rotation).ZW.m128d_f64;
          local_638.Translation.XY.m128d_f64 = *&(pTVar55->Translation).XY.m128d_f64;
          local_638.Translation.ZW.m128d_f64 = *&(pTVar55->Translation).ZW.m128d_f64;
          local_638.Scale3D.XY.m128d_f64 = *&(pTVar55->Scale3D).XY.m128d_f64;
          local_638.Scale3D.ZW.m128d_f64 = *&(pTVar55->Scale3D).ZW.m128d_f64;
        }
        else if (EVar8 == WorldSpace) {
          local_638.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_638.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_638.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_638.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_638.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_638.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_638.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_638.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_638.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_638.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_638.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_638.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_638.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_638.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_638.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_638.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_638.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_638.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_638,pTVar55,(TTransform<double> *)local_818)
          ;
        }
        else {
          if (EVar8 != BaseBoneSpace) {
            local_cb2 = 0;
            `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(&local_cb2);
            goto LAB_14d9d9399;
          }
          UE::Math::TTransform<double>::GetRelativeTransform(pTVar55,&local_638,&local_5d8);
        }
        uVar90 = uVar49;
        if ((int)FVar47 < (this->Bodies).ArrayNum) {
          uVar90 = ~(uint)FVar47 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar45 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar45)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                  (*(FActorHandle **)
                    ((this->Bodies).AllocatorInstance.Data + (longlong)(int)FVar47 * 8),&local_638);
        pFVar63 = pFVar63 + 0x20;
        pFVar70 = local_c88 + 8;
        uVar57 = (ulonglong)uVar61;
      }
    }
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = (double)local_818._0_8_;
    (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = (double)local_818._8_8_;
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = (double)local_818._16_8_;
    (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = (double)local_818._24_8_;
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = (double)local_818._32_8_;
    (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dStack_7f0;
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = local_7e8;
    (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dStack_7e0;
    (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] =
         (double)CONCAT44(uStack_7d4,local_7d8);
    (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] =
         (double)CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_);
    (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
         (double)CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_);
    (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] =
         (double)CONCAT44(uStack_7bc,uStack_7c0);
    uVar32 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = (double)uVar32;
    (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  if ((this->SimulationTiming == Deferred) ||
     ((this->SimulationTiming == Default && (bRBANWithControl_DeferredSimulationDefault != false))))
  {
    bVar45 = true;
  }
  else {
    bVar45 = false;
  }
  local_c28._s_0.Z = 0.0;
  local_c28._s_0.X = 0.0;
  local_c28._s_0.Y = 0.0;
  if (((this->bSimulateAnimPhysicsAfterReset == false) &&
      (this->ResetSimulatedTeleportType == ResetPhysics)) ||
     (fVar140 < this->AnimPhysicsMinDeltaTime || fVar140 == this->AnimPhysicsMinDeltaTime)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
    FVar58 = StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate;
    if (StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PoseUpdate>)0x0) {
      pFVar50 = ::FName::FName(&local_a30,"STAT_RigidBodyNodeWithControl_PoseUpdate");
      FVar58 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PoseUpdate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigidBodyNodeWithControl_PoseUpdate,*pFVar50,
                          L"RigidBodyNodeWithControl_PoseUpdate","STATGROUP_Anim","STATCAT_Advanced"
                          ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar71 = *(FName *)FVar58;
    bVar46 = false;
    bVar37 = false;
    local_be0.ComparisonIndex.Value = 0;
    local_be0.Number = 0;
    if ((FVar71.ComparisonIndex.Value.Value == 0) && (FVar71.Number == 0)) {
LAB_14d9d9c3b:
      bVar33 = false;
      FVar71 = local_be0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_c5c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_c5c._s_0,(char *)*(FName *)((longlong)FVar58 + 0x10));
        bVar46 = false;
        bVar37 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c38.ComparisonIndex.Value = FVar71.ComparisonIndex.Value.Value;
          local_c38.Number = FVar71.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_c38,(wchar_t *)*(FName *)((longlong)FVar58 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                     ,0x29f);
          bVar46 = true;
          bVar37 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9d9c3b;
      FThreadStats::AddMessage(FVar71,CycleScopeStart);
      bVar33 = true;
    }
    UE::PhysicsControl::FRigidBodyPoseData::Update
              (&this->PoseData,local_c98,&this->OutputBoneData,this->SimulationSpace,
               &this->BaseBoneRef,(FGraphTraversalCounter *)(local_c98->_padding_ + 0x5a8));
    if (bVar37) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar46) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar33) && (FVar71 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_b88.NameAndInfo.Index = FVar71.ComparisonIndex.Value;
        local_b88.NameAndInfo.Number = FVar71.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter((LARGE_INTEGER *)(local_ba8 + 8));
        local_b88.StatData.Pad._4_4_ = 0;
        local_b88.StatData.Pad._0_4_ = local_ba8._8_4_;
        FThreadStats::AddStatMessage(this_00,&local_b88);
        piVar2 = &this_00->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    dVar133 = __real_3f1a36e2e0000000;
    if ((this->bTransferBoneVelocities == '\0') ||
       (*(int *)&(this->CapturedBoneVelocityPose).Pose.field_0x8 < 1)) {
      EVar8 = this->SimulationSpace;
      if (((EVar8 != WorldSpace) && (bRBANWithControl_EnableComponentAcceleration != false)) &&
         ((bVar46 = UE::Math::TVector<double>::IsNearlyZero
                              (&this->ComponentLinearVelScale,__real_3f1a36e2e0000000), !bVar46 ||
          (bVar46 = UE::Math::TVector<double>::IsNearlyZero(&this->ComponentLinearAccScale,dVar133),
          !bVar46)))) {
        local_918 = (this->PreviousTransform).Translation.XY.m128d_f64[0];
        dStack_910 = (this->PreviousTransform).Translation.XY.m128d_f64[1];
        local_930 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
        dStack_928 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
        local_920 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
        local_908 = (this->PreviousTransform).Translation.ZW.m128d_f64[0];
        uVar61 = (uint)__xmm_80000000000000008000000000000000;
        uVar90 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        dVar27 = dVar131 / (double)fVar140;
        dVar24 = (local_930 - local_918) * dVar27;
        dVar31 = (local_920 - local_908) * dVar27;
        dVar29 = (dStack_928 - dStack_910) * dVar27;
        local_ae8._s_0.X =
             (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^ uVar90,SUB84(dVar24,0) ^ uVar61);
        local_ae8._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) ^ uVar90,SUB84(dVar31,0) ^ uVar61);
        local_ae8._s_0.Y =
             (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) ^ uVar90,SUB84(dVar29,0) ^ uVar61);
        pTVar59 = WorldVectorToSpaceNoScale
                            (&local_8a8,EVar8,(TVector<double> *)&local_ae8._s_0,
                             (TTransform<double> *)local_818,&local_5d8);
        dVar130 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X;
        dVar21 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y;
        dVar22 = (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z;
        dVar23 = (pTVar59->field0_0x0)._s_0.X;
        dVar25 = (this->ComponentLinearVelScale).field0_0x0._s_0.Y;
        dVar26 = (pTVar59->field0_0x0)._s_0.Y;
        dVar30 = (this->ComponentLinearVelScale).field0_0x0._s_0.Z;
        dVar6 = (pTVar59->field0_0x0)._s_0.Z;
        dVar7 = (this->ComponentLinearVelScale).field0_0x0._s_0.X;
        (this->PreviousComponentLinearVelocity).field0_0x0._s_0.X = dVar24;
        (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Y = dVar29;
        (this->PreviousComponentLinearVelocity).field0_0x0._s_0.Z = dVar31;
        local_ad0._s_0.X = (dVar130 - dVar24) * dVar27;
        local_ad0._s_0.Y = (dVar21 - dVar29) * dVar27;
        local_ad0._s_0.Z = (dVar22 - dVar31) * dVar27;
        pTVar59 = WorldVectorToSpaceNoScale
                            (&local_878,EVar8,(TVector<double> *)&local_ad0._s_0,
                             (TTransform<double> *)local_818,&local_5d8);
        dVar21 = (pTVar59->field0_0x0)._s_0.X * (this->ComponentLinearAccScale).field0_0x0._s_0.X +
                 dVar23 * dVar7;
        dVar22 = (this->ComponentLinearAccScale).field0_0x0._s_0.Y * (pTVar59->field0_0x0)._s_0.Y +
                 dVar25 * dVar26;
        dVar130 = (this->ComponentLinearAccScale).field0_0x0._s_0.Z * (pTVar59->field0_0x0)._s_0.Z +
                  dVar30 * dVar6;
        bVar46 = UE::Math::TVector<double>::IsNearlyZero
                           (&this->ComponentAppliedLinearAccClamp,dVar133);
        if (!bVar46) {
          dVar133 = (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.X;
          dVar23 = (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Y;
          dVar25 = (this->ComponentAppliedLinearAccClamp).field0_0x0._s_0.Z;
          dVar26 = dVar133;
          if (dVar21 <= dVar133) {
            dVar26 = dVar21;
          }
          if (dVar25 <= dVar130) {
            dVar130 = dVar25;
          }
          uVar81 = SUB84(dVar133,0) ^ uVar61;
          uVar68 = (uint)((ulonglong)dVar133 >> 0x20) ^ uVar90;
          uVar99 = SUB84(dVar25,0) ^ uVar61;
          uVar102 = (uint)((ulonglong)dVar25 >> 0x20) ^ uVar90;
          dVar133 = dVar23;
          if (dVar22 <= dVar23) {
            dVar133 = dVar22;
          }
          dVar22 = dVar133;
          uVar61 = SUB84(dVar23,0) ^ uVar61;
          uVar90 = (uint)((ulonglong)dVar23 >> 0x20) ^ uVar90;
          dVar21 = dVar26;
          if (dVar26 <= (double)CONCAT44(uVar68,uVar81)) {
            dVar21 = (double)CONCAT44(uVar68,uVar81);
          }
          if (dVar130 <= (double)CONCAT44(uVar102,uVar99)) {
            dVar130 = (double)CONCAT44(uVar102,uVar99);
          }
          if (dVar22 <= (double)CONCAT44(uVar90,uVar61)) {
            dVar22 = (double)CONCAT44(uVar90,uVar61);
          }
        }
        iVar75 = (this->OutputBoneData).ArrayNum;
        pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
        pFVar66 = pFVar63 + (longlong)iVar75 * 0x20;
        while( true ) {
          if ((this->OutputBoneData).ArrayNum != iVar75) {
            local_cad = 0;
            `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_cad);
          }
          fVar140 = local_c90;
          if (pFVar63 == pFVar66) break;
          uVar61 = *(uint *)(pFVar63 + 0x18);
          uVar90 = uVar49;
          if ((int)uVar61 < (this->BodyAnimData).ArrayNum) {
            uVar90 = ~uVar61 >> 0x1f;
          }
          if ((uVar90 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (((byte)(this->BodyAnimData).AllocatorInstance.Data
                     [(longlong)(int)uVar61 * 0x38 + 0x30] & 1) != 0) {
            uVar90 = uVar49;
            if ((int)uVar61 < (this->Bodies).ArrayNum) {
              uVar90 = ~uVar61 >> 0x1f;
            }
            if ((uVar90 == 0) &&
               (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar46)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar62 = *(FActorHandle **)
                       ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar61 * 8);
            dVar133 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar62);
            if (0.0 < (float)dVar133) {
              dVar133 = dVar131 / (double)(float)dVar133;
              local_ab8._s_0.X = dVar133 * dVar21;
              local_ab8._s_0.Y = dVar133 * dVar22;
              local_ab8._s_0.Z = dVar133 * dVar130;
              ImmediatePhysics_Chaos::FActorHandle::AddForce
                        (pFVar62,(TVector<double> *)&local_ab8._s_0);
            }
          }
          pFVar63 = pFVar63 + 0x20;
        }
      }
    }
    else {
      iVar75 = (this->OutputBoneData).ArrayNum;
      pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
      pFVar66 = pFVar63 + (longlong)iVar75 * 0x20;
      while( true ) {
        if ((this->OutputBoneData).ArrayNum != iVar75) {
          local_cae = 0;
          `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_cae);
        }
        if (pFVar63 == pFVar66) break;
        uVar61 = *(uint *)(pFVar63 + 0x18);
        uVar90 = uVar49;
        if ((int)uVar61 < (this->BodyAnimData).ArrayNum) {
          uVar90 = ~uVar61 >> 0x1f;
        }
        if ((uVar90 == 0) &&
           (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar46)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_c50 = (this->BodyAnimData).AllocatorInstance.Data + (longlong)(int)uVar61 * 0x38;
        if ((local_c50[0x30].field_0x0 & 1) != 0) {
          uVar90 = uVar49;
          if ((int)uVar61 < (this->Bodies).ArrayNum) {
            uVar90 = ~uVar61 >> 0x1f;
          }
          if ((uVar90 == 0) &&
             (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar46)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = local_c50;
          pFVar62 = *(FActorHandle **)
                     ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar61 * 8);
          ImmediatePhysics_Chaos::FActorHandle::SetLinearVelocity
                    (pFVar62,(TVector<double> *)(local_c50 + 0x18));
          ImmediatePhysics_Chaos::FActorHandle::SetAngularVelocity
                    (pFVar62,(TVector<double> *)pFVar10);
        }
        pFVar63 = pFVar63 + 0x20;
      }
      FCSPose<FCompactHeapPose>::Empty(&this->CapturedBoneVelocityPose);
    }
    UpdateWorldForces(this,(TTransform<double> *)local_818,&local_5d8,fVar140);
    pTVar59 = WorldVectorToSpaceNoScale
                        (&local_890,this->SimulationSpace,&this->WorldSpaceGravity,
                         (TTransform<double> *)local_818,&local_5d8);
    local_c28._s_0.X = (pTVar59->field0_0x0)._s_0.X;
    local_c28._s_0.Y = (pTVar59->field0_0x0)._s_0.Y;
    local_c28._s_0.Z = (pTVar59->field0_0x0)._s_0.Z;
    if (this->ConstraintProfile != this->CurrentConstraintProfile) {
      this->CurrentConstraintProfile = this->ConstraintProfile;
      ApplyCurrentConstraintProfile(this);
    }
    if (this->bHaveSetupControls != '\0') {
      if (this->ControlProfile != this->CurrentControlProfile) {
        this->CurrentControlProfile = this->ControlProfile;
        ApplyCurrentControlProfile(this);
      }
      ApplyControlAndModifierUpdatesAndParametersToRecords
                (this,&this->ControlAndModifierUpdates,&this->ControlAndModifierParameters);
      ApplyControlsAndModifiers(this,(TVector<double> *)&local_c28._s_0,fVar140);
    }
    dVar21 = _UNK_150689688;
    dVar130 = ___xmm_3ff00000000000003ff0000000000000;
    dVar133 = _UNK_150689518;
    dVar131 = ___xmm_00000000000000003ff0000000000000;
    uVar61 = (this->OutputBoneData).ArrayNum;
    uVar57 = (ulonglong)(int)uVar61;
    pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
    pFVar66 = pFVar63 + uVar57 * 0x20;
    while( true ) {
      if ((this->OutputBoneData).ArrayNum != (int)uVar57) {
        local_cac = 0;
        `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_cac);
      }
      if (pFVar63 == pFVar66) break;
      uVar90 = *(uint *)(pFVar63 + 0x18);
      lVar73 = (longlong)(int)uVar90;
      uVar68 = ~uVar90 >> 0x1f;
      uVar81 = uVar49;
      if ((int)uVar90 < (this->Bodies).ArrayNum) {
        uVar81 = uVar68;
      }
      if ((uVar81 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      local_cab = ImmediatePhysics_Chaos::FActorHandle::GetIsKinematic
                            (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar73 * 8))
      ;
      uVar81 = uVar49;
      if ((int)uVar90 < (this->BodyAnimData).ArrayNum) {
        uVar81 = uVar68;
      }
      if ((uVar81 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar11 = (this->BodyAnimData).AllocatorInstance.Data;
      lVar74 = lVar73 * 0x38;
      pFVar10 = pFVar11 + lVar74 + 0x30;
      *pFVar10 = (FScriptContainerElement)((byte)*pFVar10 & 0xfe);
      pFVar11 = pFVar11 + lVar74 + 0x30;
      *pFVar11 = (FScriptContainerElement)((byte)*pFVar11 | local_cab ^ 1);
      uVar81 = uVar49;
      if ((int)uVar90 < (this->BodyAnimData).ArrayNum) {
        uVar81 = uVar68;
      }
      if ((uVar81 == 0) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar46)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if (((byte)(this->BodyAnimData).AllocatorInstance.Data[lVar74 + 0x30] & 1) == 0) {
        if (((int)uVar90 < 0) || ((this->PoseData).BoneTMs.ArrayNum <= (int)uVar90)) {
          bVar46 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4793787774169776899>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                              ,0x303,"PoseData.IsValidIndex(BodyIndex)");
          if (bVar46) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          goto LAB_14d9da5db;
        }
        uVar81 = uVar49;
        if ((int)uVar90 < (this->Bodies).ArrayNum) {
          uVar81 = ~uVar90 >> 0x1f;
        }
        if ((uVar81 == 0) &&
           (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar46)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar62 = *(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar73 * 8);
        pFVar60 = UE::PhysicsControl::FRigidBodyPoseData::GetTM(&this->PoseData,&local_858,uVar90);
        local_328.Rotation.ZW.m128d_f64[0] = (pFVar60->Rotation).Z;
        local_328.Rotation.ZW.m128d_f64[1] = (pFVar60->Rotation).W;
        local_328.Rotation.XY.m128d_f64[0] = (pFVar60->Rotation).X;
        local_328.Rotation.XY.m128d_f64[1] = (pFVar60->Rotation).Y;
        local_328.Translation.ZW.m128d_f64[0] = (pFVar60->Translation).field0_0x0._s_0.Z;
        local_328.Translation.XY.m128d_f64[0] = (pFVar60->Translation).field0_0x0._s_0.X;
        local_328.Translation.XY.m128d_f64[1] = (pFVar60->Translation).field0_0x0._s_0.Y;
        local_328.Translation.ZW.m128d_f64[1] = 0.0;
        local_328.Scale3D.XY.m128d_f64[0] = dVar130;
        local_328.Scale3D.XY.m128d_f64[1] = dVar21;
        local_328.Scale3D.ZW.m128d_f64[0] = dVar131;
        local_328.Scale3D.ZW.m128d_f64[1] = dVar133;
        ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget(pFVar62,&local_328);
        uVar57 = (ulonglong)uVar61;
        pFVar63 = pFVar63 + 0x20;
      }
      else {
LAB_14d9da5db:
        uVar57 = (ulonglong)uVar61;
        pFVar63 = pFVar63 + 0x20;
      }
    }
    ApplyKinematicTargets(this);
    EVar8 = this->SimulationSpace;
    pFVar72 = &RBANWithControl_SimSpaceOverride;
    if (bRBANWithControl_SimSpace_EnableOverride == false) {
      pFVar72 = &this->SimSpaceSettings;
    }
    if (EVar8 == ComponentSpace) {
      local_6f8.Rotation.XY.m128d_f64[1] = (double)local_818._8_8_;
      local_6f8.Rotation.XY.m128d_f64[0] = (double)local_818._0_8_;
      local_6f8.Rotation.ZW.m128d_f64[1] = (double)local_818._24_8_;
      local_6f8.Rotation.ZW.m128d_f64[0] = (double)local_818._16_8_;
      local_6f8.Translation.XY.m128d_f64[1] = dStack_7f0;
      local_6f8.Translation.XY.m128d_f64[0] = (double)local_818._32_8_;
      local_6f8.Translation.ZW.m128d_f64[1] = dStack_7e0;
      local_6f8.Translation.ZW.m128d_f64[0] = local_7e8;
      local_6f8.Scale3D.XY.m128d_f64[0]._0_4_ = local_7d8;
      local_6f8.Scale3D.XY.m128d_f64[0]._4_4_ = uStack_7d4;
      local_6f8.Scale3D.XY.m128d_f64[1]._0_4_ = TStack_7d0._0_4_;
      local_6f8.Scale3D.XY.m128d_f64[1]._4_4_ = TStack_7d0._4_4_;
      local_6f8.Scale3D.ZW.m128d_f64[0]._0_4_ = TStack_7d0._8_4_;
      local_6f8.Scale3D.ZW.m128d_f64[0]._4_4_ = TStack_7d0._12_4_;
      local_6f8.Scale3D.ZW.m128d_f64[1]._0_4_ = uStack_7c0;
      local_6f8.Scale3D.ZW.m128d_f64[1]._4_4_ = uStack_7bc;
LAB_14d9da729:
    }
    else {
      if ((EVar8 == WorldSpace) || (EVar8 != BaseBoneSpace)) {
        local_6f8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_6f8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_6f8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_6f8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_6f8.Scale3D.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_6f8.Scale3D.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_6f8.Scale3D.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_6f8.Scale3D.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_6f8.Scale3D.ZW.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_6f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_6f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_6f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        goto LAB_14d9da729;
      }
      local_6f8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_6f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_6f8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_6f8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_6f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_6f8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_6f8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_6f8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_6f8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_6f8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_6f8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_6f8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_6f8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_6f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_6f8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_6f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_6f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_6f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_6f8,&local_5d8,(TTransform<double> *)local_818);
    }
    CalculateSimulationSpaceMotion
              (this,this->SimulationSpace,&local_6f8,(TTransform<double> *)local_818,fVar140,pFVar72
               ,&local_a78,&local_a90,&local_900,&local_8e8);
    UpdateWorldObjects(this,&local_6f8,&local_a78,&local_a90,fVar140);
    UpdateClothColliderObjects(this,&local_6f8);
    ImmediatePhysics_Chaos::FSimulation::UpdateSimulationSpace
              (this->Simulation,&local_6f8,&local_a78,&local_a90,&local_900,&local_8e8);
    ImmediatePhysics_Chaos::FSimulation::SetSimulationSpaceSettings
              (this->Simulation,0.0 < pFVar72->WorldAlpha,(double)pFVar72->DampingAlpha,
               &pFVar72->ExternalLinearDragV);
    ImmediatePhysics_Chaos::FSimulation::SetSolverSettings
              (this->Simulation,(double)(this->SolverSettings).FixedTimeStep,
               (double)(this->SolverSettings).CullDistance,
               (double)(this->SolverSettings).MaxDepenetrationVelocity,
               (uint)(this->SolverSettings).bUseLinearJointSolver,
               (this->SolverSettings).PositionIterations,(this->SolverSettings).VelocityIterations,
               (this->SolverSettings).ProjectionIterations,
               (uint)(this->SolverSettings).bUseManifolds);
    if (!bVar45) {
      RunPhysicsSimulation(this,fVar140,(TVector<double> *)&local_c28._s_0);
    }
    if (bRBANWithControl_DebugDraw != false) {
      ImmediatePhysics_Chaos::FSimulation::DebugDraw(this->Simulation);
    }
  }
  pTVar42 = local_b98;
  auVar28 = ___xmm_7ff00000000000007ff0000000000000;
  local_c98 = (FComponentSpacePoseContext *)&this->PreviousCompWorldSpaceTM;
  if (!bVar45) {
    local_c98 = (FComponentSpacePoseContext *)local_818;
  }
  iVar75 = (this->OutputBoneData).ArrayNum;
  pFVar63 = (this->OutputBoneData).AllocatorInstance.Data;
  pFVar66 = pFVar63 + (longlong)iVar75 * 0x20;
  while( true ) {
    if ((this->OutputBoneData).ArrayNum != iVar75) {
      local_caa = 0;
      `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_caa);
    }
    FVar71 = local_ca0;
    FVar67 = local_ca8;
    if (pFVar63 == pFVar66) break;
    uVar61 = *(uint *)(pFVar63 + 0x18);
    uVar90 = uVar49;
    if ((int)uVar61 < (this->Bodies).ArrayNum) {
      uVar90 = ~uVar61 >> 0x1f;
    }
    if ((uVar90 == 0) &&
       (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar46)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar62 = *(FActorHandle **)((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar61 * 8);
    pTVar55 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform(pFVar62,&local_578);
    uVar90 = auVar28._0_4_;
    uVar81 = auVar28._4_4_;
    uVar68 = auVar28._8_4_;
    uVar99 = auVar28._12_4_;
    dVar131 = auVar28._0_8_;
    dVar133 = auVar28._8_8_;
    lVar73 = -(ulonglong)
              ((double)CONCAT44(local_578.Rotation.ZW.m128d_f64[1]._4_4_ & uVar99,
                                local_578.Rotation.ZW.m128d_f64[1]._0_4_ & uVar68) == dVar133);
    auVar14._8_4_ = (int)lVar73;
    auVar14._0_8_ =
         -(ulonglong)
          ((double)CONCAT44(local_578.Rotation.ZW.m128d_f64[0]._4_4_ & uVar81,
                            local_578.Rotation.ZW.m128d_f64[0]._0_4_ & uVar90) == dVar131);
    auVar14._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
    uVar61 = movmskpd((int)pFVar62,auVar14);
    lVar73 = -(ulonglong)
              ((double)CONCAT44(local_578.Rotation.XY.m128d_f64[1]._4_4_ & uVar99,
                                local_578.Rotation.XY.m128d_f64[1]._0_4_ & uVar68) == dVar133);
    auVar15._8_4_ = (int)lVar73;
    auVar15._0_8_ =
         -(ulonglong)
          ((double)CONCAT44(local_578.Rotation.XY.m128d_f64[0]._4_4_ & uVar81,
                            local_578.Rotation.XY.m128d_f64[0]._0_4_ & uVar90) == dVar131);
    auVar15._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
    iVar48 = movmskpd((int)pTVar55,auVar15);
    if ((uVar61 & 0x3fffffff) == 0 && iVar48 == 0) {
      lVar73 = -(ulonglong)
                ((double)CONCAT44(local_578.Translation.ZW.m128d_f64[1]._4_4_ & uVar99,
                                  local_578.Translation.ZW.m128d_f64[1]._0_4_ & uVar68) == dVar133);
      auVar16._8_4_ = (int)lVar73;
      auVar16._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_578.Translation.ZW.m128d_f64[0]._4_4_ & uVar81,
                              local_578.Translation.ZW.m128d_f64[0]._0_4_ & uVar90) == dVar131);
      auVar16._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
      uVar61 = movmskpd(0,auVar16);
      lVar73 = -(ulonglong)
                ((double)CONCAT44(local_578.Translation.XY.m128d_f64[1]._4_4_ & uVar99,
                                  local_578.Translation.XY.m128d_f64[1]._0_4_ & uVar68) == dVar133);
      auVar17._8_4_ = (int)lVar73;
      auVar17._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_578.Translation.XY.m128d_f64[0]._4_4_ & uVar81,
                              local_578.Translation.XY.m128d_f64[0]._0_4_ & uVar90) == dVar131);
      auVar17._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
      iVar48 = movmskpd(iVar48,auVar17);
      if ((uVar61 & 0x3fffffff) != 0 || iVar48 != 0) goto LAB_14d9daccb;
      lVar73 = -(ulonglong)
                ((double)CONCAT44(local_578.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar99,
                                  local_578.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar68) == dVar133);
      auVar18._8_4_ = (int)lVar73;
      auVar18._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_578.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar81,
                              local_578.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar90) == dVar131);
      auVar18._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
      uVar61 = movmskpd(0,auVar18);
      lVar73 = -(ulonglong)
                ((double)CONCAT44(local_578.Scale3D.XY.m128d_f64[1]._4_4_ & uVar99,
                                  local_578.Scale3D.XY.m128d_f64[1]._0_4_ & uVar68) == dVar133);
      auVar19._8_4_ = (int)lVar73;
      auVar19._0_8_ =
           -(ulonglong)
            ((double)CONCAT44(local_578.Scale3D.XY.m128d_f64[0]._4_4_ & uVar81,
                              local_578.Scale3D.XY.m128d_f64[0]._0_4_ & uVar90) == dVar131);
      auVar19._12_4_ = (int)((ulonglong)lVar73 >> 0x20);
      iVar48 = movmskpd(iVar48,auVar19);
      if ((uVar61 & 0x3fffffff) != 0 || iVar48 != 0) goto LAB_14d9daccb;
      EVar8 = this->SimulationSpace;
      uVar88 = local_578.Scale3D.XY.m128d_f64[0]._0_4_;
      uVar91 = local_578.Scale3D.XY.m128d_f64[0]._4_4_;
      uVar94 = local_578.Scale3D.XY.m128d_f64[1]._0_4_;
      uVar97 = local_578.Scale3D.XY.m128d_f64[1]._4_4_;
      uVar100 = local_578.Scale3D.ZW.m128d_f64[0]._0_4_;
      uVar103 = local_578.Scale3D.ZW.m128d_f64[0]._4_4_;
      uVar106 = local_578.Scale3D.ZW.m128d_f64[1]._0_4_;
      uVar109 = local_578.Scale3D.ZW.m128d_f64[1]._4_4_;
      uVar111 = local_578.Translation.XY.m128d_f64[0]._0_4_;
      uVar113 = local_578.Translation.XY.m128d_f64[0]._4_4_;
      uVar116 = local_578.Translation.XY.m128d_f64[1]._0_4_;
      uVar119 = local_578.Translation.XY.m128d_f64[1]._4_4_;
      uVar121 = local_578.Translation.ZW.m128d_f64[0]._0_4_;
      uVar123 = local_578.Translation.ZW.m128d_f64[0]._4_4_;
      uVar126 = local_578.Translation.ZW.m128d_f64[1]._0_4_;
      uVar129 = local_578.Translation.ZW.m128d_f64[1]._4_4_;
      uVar99 = local_578.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar102 = local_578.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar137 = local_578.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar139 = local_578.Rotation.ZW.m128d_f64[1]._4_4_;
      uVar61 = local_578.Rotation.XY.m128d_f64[0]._0_4_;
      uVar90 = local_578.Rotation.XY.m128d_f64[0]._4_4_;
      uVar81 = local_578.Rotation.XY.m128d_f64[1]._0_4_;
      uVar68 = local_578.Rotation.XY.m128d_f64[1]._4_4_;
      if (EVar8 != ComponentSpace) {
        if (EVar8 == WorldSpace) {
          pTVar55 = UE::Math::TTransform<double>::GetRelativeTransform
                              (&local_578,&local_148,(TTransform<double> *)local_c98);
          uVar61 = *(uint *)(pTVar55->Rotation).XY.m128d_f64;
          uVar90 = *(uint *)((longlong)(pTVar55->Rotation).XY.m128d_f64 + 4);
          uVar81 = *(uint *)((pTVar55->Rotation).XY.m128d_f64 + 1);
          uVar68 = *(uint *)((longlong)(pTVar55->Rotation).XY.m128d_f64 + 0xc);
          uVar99 = *(uint *)(pTVar55->Rotation).ZW.m128d_f64;
          uVar102 = *(uint *)((longlong)(pTVar55->Rotation).ZW.m128d_f64 + 4);
          uVar137 = *(uint *)((pTVar55->Rotation).ZW.m128d_f64 + 1);
          uVar139 = *(uint *)((longlong)(pTVar55->Rotation).ZW.m128d_f64 + 0xc);
          uVar111 = *(uint *)(pTVar55->Translation).XY.m128d_f64;
          uVar113 = *(uint *)((longlong)(pTVar55->Translation).XY.m128d_f64 + 4);
          uVar116 = *(uint *)((pTVar55->Translation).XY.m128d_f64 + 1);
          uVar119 = *(uint *)((longlong)(pTVar55->Translation).XY.m128d_f64 + 0xc);
          uVar121 = *(uint *)(pTVar55->Translation).ZW.m128d_f64;
          uVar123 = *(uint *)((longlong)(pTVar55->Translation).ZW.m128d_f64 + 4);
          uVar126 = *(uint *)((pTVar55->Translation).ZW.m128d_f64 + 1);
          uVar129 = *(uint *)((longlong)(pTVar55->Translation).ZW.m128d_f64 + 0xc);
          uVar88 = *(uint *)(pTVar55->Scale3D).XY.m128d_f64;
          uVar91 = *(uint *)((longlong)(pTVar55->Scale3D).XY.m128d_f64 + 4);
          uVar94 = *(uint *)((pTVar55->Scale3D).XY.m128d_f64 + 1);
          uVar97 = *(uint *)((longlong)(pTVar55->Scale3D).XY.m128d_f64 + 0xc);
          uVar100 = *(uint *)(pTVar55->Scale3D).ZW.m128d_f64;
          uVar103 = *(uint *)((longlong)(pTVar55->Scale3D).ZW.m128d_f64 + 4);
          uVar106 = *(uint *)((pTVar55->Scale3D).ZW.m128d_f64 + 1);
          uVar109 = *(uint *)((longlong)(pTVar55->Scale3D).ZW.m128d_f64 + 0xc);
        }
        else if (EVar8 == BaseBoneSpace) {
          local_448.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_448.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_448.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_448.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_448.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_448.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_448.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_448.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_448.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_448.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_448.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_448.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_448.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_448.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_448,&local_578,&local_5d8);
          uVar88 = local_448.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar91 = local_448.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar94 = local_448.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar97 = local_448.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar100 = local_448.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar103 = local_448.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar106 = local_448.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar109 = local_448.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar111 = local_448.Translation.XY.m128d_f64[0]._0_4_;
          uVar113 = local_448.Translation.XY.m128d_f64[0]._4_4_;
          uVar116 = local_448.Translation.XY.m128d_f64[1]._0_4_;
          uVar119 = local_448.Translation.XY.m128d_f64[1]._4_4_;
          uVar121 = local_448.Translation.ZW.m128d_f64[0]._0_4_;
          uVar123 = local_448.Translation.ZW.m128d_f64[0]._4_4_;
          uVar126 = local_448.Translation.ZW.m128d_f64[1]._0_4_;
          uVar129 = local_448.Translation.ZW.m128d_f64[1]._4_4_;
          uVar99 = local_448.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar102 = local_448.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar137 = local_448.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar139 = local_448.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar61 = local_448.Rotation.XY.m128d_f64[0]._0_4_;
          uVar90 = local_448.Rotation.XY.m128d_f64[0]._4_4_;
          uVar81 = local_448.Rotation.XY.m128d_f64[1]._0_4_;
          uVar68 = local_448.Rotation.XY.m128d_f64[1]._4_4_;
        }
        else {
          local_ca9 = 0;
          `FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l193::<lambda_2>::
          operator()(&local_ca9);
          uVar88 = local_578.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar91 = local_578.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar94 = local_578.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar97 = local_578.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar100 = local_578.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar103 = local_578.Scale3D.ZW.m128d_f64[0]._4_4_;
          uVar106 = local_578.Scale3D.ZW.m128d_f64[1]._0_4_;
          uVar109 = local_578.Scale3D.ZW.m128d_f64[1]._4_4_;
          uVar111 = local_578.Translation.XY.m128d_f64[0]._0_4_;
          uVar113 = local_578.Translation.XY.m128d_f64[0]._4_4_;
          uVar116 = local_578.Translation.XY.m128d_f64[1]._0_4_;
          uVar119 = local_578.Translation.XY.m128d_f64[1]._4_4_;
          uVar121 = local_578.Translation.ZW.m128d_f64[0]._0_4_;
          uVar123 = local_578.Translation.ZW.m128d_f64[0]._4_4_;
          uVar126 = local_578.Translation.ZW.m128d_f64[1]._0_4_;
          uVar129 = local_578.Translation.ZW.m128d_f64[1]._4_4_;
          uVar99 = local_578.Rotation.ZW.m128d_f64[0]._0_4_;
          uVar102 = local_578.Rotation.ZW.m128d_f64[0]._4_4_;
          uVar137 = local_578.Rotation.ZW.m128d_f64[1]._0_4_;
          uVar139 = local_578.Rotation.ZW.m128d_f64[1]._4_4_;
          uVar61 = local_578.Rotation.XY.m128d_f64[0]._0_4_;
          uVar90 = local_578.Rotation.XY.m128d_f64[0]._4_4_;
          uVar81 = local_578.Rotation.XY.m128d_f64[1]._0_4_;
          uVar68 = local_578.Rotation.XY.m128d_f64[1]._4_4_;
        }
      }
      local_518 = *(undefined4 *)(pFVar63 + 0x10);
      pFVar10 = (pTVar42->AllocatorInstance).Data;
      local_b78 = uVar61;
      uStack_b74 = uVar90;
      uStack_b70 = uVar81;
      uStack_b6c = uVar68;
      local_b68 = uVar99;
      uStack_b64 = uVar102;
      uStack_b60 = uVar137;
      uStack_b5c = uVar139;
      local_b58 = uVar111;
      uStack_b54 = uVar113;
      uStack_b50 = uVar116;
      uStack_b4c = uVar119;
      local_b48 = uVar121;
      uStack_b44 = uVar123;
      uStack_b40 = uVar126;
      uStack_b3c = uVar129;
      local_b38 = uVar88;
      uStack_b34 = uVar91;
      uStack_b30 = uVar94;
      uStack_b2c = uVar97;
      local_b28 = uVar100;
      uStack_b24 = uVar103;
      uStack_b20 = uVar106;
      uStack_b1c = uVar109;
      local_508 = uVar61;
      uStack_504 = uVar90;
      uStack_500 = uVar81;
      uStack_4fc = uVar68;
      local_4f8 = uVar99;
      uStack_4f4 = uVar102;
      uStack_4f0 = uVar137;
      uStack_4ec = uVar139;
      local_4e8 = uVar111;
      uStack_4e4 = uVar113;
      uStack_4e0 = uVar116;
      uStack_4dc = uVar119;
      local_4d8 = uVar121;
      uStack_4d4 = uVar123;
      uStack_4d0 = uVar126;
      uStack_4cc = uVar129;
      local_4c8 = uVar88;
      uStack_4c4 = uVar91;
      uStack_4c0 = uVar94;
      uStack_4bc = uVar97;
      local_4b8 = uVar100;
      uStack_4b4 = uVar103;
      uStack_4b0 = uVar106;
      uStack_4ac = uVar109;
      if (((pFVar10 <= (FScriptContainerElement *)&local_518) &&
          ((FScriptContainerElement *)&local_518 < pFVar10 + (longlong)pTVar42->ArrayMax * 0x70)) &&
         (bVar46 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar46)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar48 = pTVar42->ArrayNum;
      if (iVar48 == pTVar42->ArrayMax) {
        iVar48 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&pTVar42->AllocatorInstance,&pTVar42->ArrayMax);
      }
      pTVar42->ArrayNum = iVar48 + 1;
      lVar73 = (longlong)iVar48 * 0x70;
      pFVar10 = (pTVar42->AllocatorInstance).Data;
      pFVar63 = pFVar63 + 0x20;
      *(ulonglong *)(pFVar10 + lVar73) = CONCAT44(uStack_514,local_518);
      *(undefined8 *)(pFVar10 + lVar73 + 8) = uStack_510;
      *(ulonglong *)(pFVar10 + lVar73 + 0x10) = CONCAT44(uStack_504,local_508);
      *(ulonglong *)(pFVar10 + lVar73 + 0x10 + 8) = CONCAT44(uStack_4fc,uStack_500);
      *(ulonglong *)(pFVar10 + lVar73 + 0x20) = CONCAT44(uStack_4f4,local_4f8);
      *(ulonglong *)(pFVar10 + lVar73 + 0x20 + 8) = CONCAT44(uStack_4ec,uStack_4f0);
      *(ulonglong *)(pFVar10 + lVar73 + 0x30) = CONCAT44(uStack_4e4,local_4e8);
      *(ulonglong *)(pFVar10 + lVar73 + 0x30 + 8) = CONCAT44(uStack_4dc,uStack_4e0);
      *(ulonglong *)(pFVar10 + lVar73 + 0x40) = CONCAT44(uStack_4d4,local_4d8);
      *(ulonglong *)(pFVar10 + lVar73 + 0x40 + 8) = CONCAT44(uStack_4cc,uStack_4d0);
      *(ulonglong *)(pFVar10 + lVar73 + 0x50) = CONCAT44(uStack_4c4,local_4c8);
      *(ulonglong *)(pFVar10 + lVar73 + 0x50 + 8) = CONCAT44(uStack_4bc,uStack_4c0);
      *(ulonglong *)(pFVar10 + lVar73 + 0x60) = CONCAT44(uStack_4b4,local_4b8);
      *(ulonglong *)(pFVar10 + lVar73 + 0x60 + 8) = CONCAT44(uStack_4ac,uStack_4b0);
    }
    else {
LAB_14d9daccb:
      bVar46 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4793787774169776972>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                          ,0x34c,"!BodyTM.ContainsNaN()");
      if (bVar46) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar63 = pFVar63 + 0x20;
    }
  }
  if ((bVar36) && (bVar45)) {
    pFVar53 = (this->SimulationTask).Pimpl.Reference;
    if ((pFVar53 != (FTaskBase *)0x0) &&
       (((pFVar53->Subsequents).bIsClosed == (atomic<bool>)0x0 &&
        (bVar45 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4793787774169776991>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                             ,0x35f,"SimulationTask.IsCompleted()"), bVar45)))) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar61 = 4;
    if (GRigidBodyNodeWithControlSimulationTaskPriority < 4) {
      uVar61 = GRigidBodyNodeWithControlSimulationTaskPriority;
    }
    local_a60.DeltaSeconds = local_c90;
    if (0 < (int)uVar61) {
      uVar49 = uVar61;
    }
    local_a60.SimSpaceGravity.field0_0x0._s_0.X = local_c28._s_0.X;
    local_a60.SimSpaceGravity.field0_0x0._s_0.Y = local_c28._s_0.Y;
    local_c70.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(FTaskBase *)0x0;
    local_a60.SimSpaceGravity.field0_0x0._s_0.Z = local_c28._s_0.Z;
    local_a60.__this = this;
    UE::Tasks::Private::FTaskHandle::
    Launch<_FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread_::__l196::<lambda_3>_>
              (&local_c70,L"RigidBodyNodeWithControlSimulationTask",&local_a60,
               GRigidBodyNodeWithControlTaskPriorities[(int)uVar49],None,None);
    pFVar4 = &this->SimulationTask;
    FVar65.Pimpl.Reference = local_c70.Pimpl.Reference;
    if (pFVar4 != &local_c70) {
      pFVar53 = (pFVar4->Pimpl).Reference;
      (pFVar4->Pimpl).Reference = (FTaskBase *)local_c70.Pimpl.Reference;
      FVar65.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)pFVar64;
      if (pFVar53 != (FTaskBase *)0x0) {
        LOCK();
        paVar3 = &pFVar53->RefCount;
        aVar5 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar5 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar53->_padding_)(pFVar53,1);
        }
      }
    }
    if (FVar65.Pimpl.Reference != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &((FTaskBase *)FVar65.Pimpl.Reference)->RefCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<unsigned_int>)0x1) {
        (**(code **)((FTaskBase *)FVar65.Pimpl.Reference)->_padding_)(FVar65.Pimpl.Reference,1);
      }
    }
  }
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[0] = (double)local_818._0_8_;
  (this->PreviousCompWorldSpaceTM).Rotation.XY.m128d_f64[1] = (double)local_818._8_8_;
  this->ResetSimulatedTeleportType = None;
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[0] = (double)local_818._16_8_;
  (this->PreviousCompWorldSpaceTM).Rotation.ZW.m128d_f64[1] = (double)local_818._24_8_;
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[0] = (double)local_818._32_8_;
  (this->PreviousCompWorldSpaceTM).Translation.XY.m128d_f64[1] = dStack_7f0;
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[0] = local_7e8;
  (this->PreviousCompWorldSpaceTM).Translation.ZW.m128d_f64[1] = dStack_7e0;
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uStack_7d4,local_7d8);
  (this->PreviousCompWorldSpaceTM).Scale3D.XY.m128d_f64[1] =
       (double)CONCAT44(TStack_7d0._4_4_,TStack_7d0._0_4_);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[0] =
       (double)CONCAT44(TStack_7d0._12_4_,TStack_7d0._8_4_);
  (this->PreviousCompWorldSpaceTM).Scale3D.ZW.m128d_f64[1] = (double)CONCAT44(uStack_7bc,uStack_7c0)
  ;
LAB_14d9daed7:
  if (bVar38) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar43) {
    FThreadStats::AddMessage(FVar67,CycleScopeEnd);
  }
  FCsvProfiler::EndStat("RigidBodyEval",local_c58);
  if (bVar39) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar44) {
    FThreadStats::AddMessage(FVar71,CycleScopeEnd);
  }
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_b90);
  FLLMScope::~FLLMScope(local_c78);
  return;
}

// ExpireWorldObjects @ 14d9db2d0

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
FAnimNode_RigidBodyWithControl::ExpireWorldObjects(FAnimNode_RigidBodyWithControl *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  Type TVar9;
  FBodyInstance *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  puVar1 = &(this->ComponentsInSim).field_0x10;
  iVar15 = 0;
  iVar3 = *(int *)&(this->ComponentsInSim).field_0x28;
  iVar17 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(this->ComponentsInSim).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d9db37d;
      uVar13 = puVar18[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar8 = iVar17 + -1 + local_res10;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d9db37d:
  uVar13 = *(uint *)&(this->ComponentsInSim).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar15);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar17;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(this->ComponentsInSim).field_0x8 -
                       *(int *)&(this->ComponentsInSim).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ComponentsInSim).field_0x28;
  if (uVar13 != uVar7) {
    puVar16 = *(undefined1 **)&(this->ComponentsInSim).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar15;
      uVar12 = uVar12 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14d9db480;
      uVar13 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14d9db480:
  do {
    if (*(int *)&(this->ComponentsInSim).field_0x8 - *(int *)&(this->ComponentsInSim).field_0x34 !=
        (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_78.CurrentBitIndex == uVar13) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    plVar14 = (longlong *)
              ((longlong)TStack_78.CurrentBitIndex * 0x20 + *(longlong *)&this->ComponentsInSim);
    plVar4 = (longlong *)*plVar14;
    if (((RBANWithControl_WorldObjectExpiry < this->ComponentsInSimTick - (int)plVar14[2]) ||
        (plVar4 == (longlong *)0x0)) || ((*(uint *)(plVar4 + 1) >> 0x1e & 1) != 0)) {
LAB_14d9db555:
      *(undefined1 *)((longlong)plVar14 + 0x14) = 1;
    }
    else {
      local_res18 = 0;
      lVar11 = (**(code **)(*plVar4 + 0x818))(plVar4,0,1,0xffffffff);
      if (lVar11 == 0) goto LAB_14d9db555;
      local_res20 = 0;
      pFVar10 = (FBodyInstance *)(**(code **)(*plVar4 + 0x818))(plVar4,0,1,0xffffffff);
      bVar6 = FBodyInstance::IsValidBodyInstance(pFVar10);
      if (!bVar6) goto LAB_14d9db555;
      pFVar10 = (FBodyInstance *)(**(code **)(*plVar4 + 0x818))(plVar4,0,1,0xffffffff,0);
      TVar9 = FBodyInstance::GetCollisionEnabled_CheckOwner(pFVar10);
      if (1 < TVar9 - PhysicsOnly) goto LAB_14d9db555;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// FindBodyFromBoneName @ 14d9db9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FActorHandle * __thiscall
FAnimNode_RigidBodyWithControl::FindBodyFromBoneName
          (FAnimNode_RigidBodyWithControl *this,FName param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FActorHandle *pFVar5;
  uint uVar6;
  
  puVar4 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&this->BodyNameToIndexMap,param_1);
  if (puVar4 == (uint *)0x0) {
    return (FActorHandle *)0x0;
  }
  uVar1 = *puVar4;
  if (uVar1 != 0xffffffff) {
    uVar6 = 0;
    if ((int)uVar1 < (this->Bodies).ArrayNum) {
      uVar6 = ~uVar1 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FActorHandle *)(*pcVar2)();
        return pFVar5;
      }
    }
    return *(FActorHandle **)((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
  }
  return (FActorHandle *)0x0;
}

// FindBodyIndexFromBoneName @ 14d9dbab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FAnimNode_RigidBodyWithControl::FindBodyIndexFromBoneName
          (FAnimNode_RigidBodyWithControl *this,FName param_1)

{
  int *piVar1;
  
  piVar1 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->BodyNameToIndexMap,param_1);
  if (piVar1 != (int *)0x0) {
    return *piVar1;
  }
  return -1;
}

// FlushDeferredSimulationTask @ 14d9dbcf0

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
FAnimNode_RigidBodyWithControl::FlushDeferredSimulationTask(FAnimNode_RigidBodyWithControl *this)

{
  int *piVar1;
  FTaskBase *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait> FVar7;
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
  FVar7 = StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait;
  if (StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigidBodyNodeWithControl_SimulationWait");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_SimulationWait>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_RigidBodyNodeWithControl_SimulationWait,*pFVar6,
                       L"RigidBodyNodeWithControl_SimulationWait","STATGROUP_Anim",
                       "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x1b1);
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
      goto LAB_14d9dbe71;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14d9dbe71:
  if (__CsvProfilerStat434 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RigidBodyNodeWithControlSimulationWait",_GCsvCategory_Animation.Index);
    __CsvProfilerStat434 = true;
  }
  uVar8 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("RigidBodyNodeWithControlSimulationWait",_GCsvCategory_Animation.Index,
             "CSV_RigidBodyNodeWithControlSimulationWait");
  pFVar2 = (this->SimulationTask).Pimpl.Reference;
  if (pFVar2 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar2);
  }
  FCsvProfiler::EndStat("RigidBodyNodeWithControlSimulationWait",uVar8);
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

// GatherDebugData @ 14d9dbfe0

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
FAnimNode_RigidBodyWithControl::GatherDebugData
          (FAnimNode_RigidBodyWithControl *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBodyWithControl::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RigidBodyWithControl,(UObject *)pUVar1,
                         L"AnimNode_RigidBodyWithControl");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RigidBodyWithControl.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::AppendChars(local_38,"(",1);
  FAnimNode_SkeletalControlBase::AddDebugNodeData((FAnimNode_SkeletalControlBase *)this,local_38);
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
    FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->_padding_,param_1);
  }
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetBodyFromBoneName @ 14d9dc290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_RigidBodyWithControl::GetBodyFromBoneName
          (FAnimNode_RigidBodyWithControl *this,FName param_1)

{
  FName *pFVar1;
  FName in_R8;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneToBodyNameMap,in_R8);
  if (pFVar1 != (FName *)0x0) {
    *(FName *)param_1 = *pFVar1;
    return param_1;
  }
  *(FName *)param_1 = in_R8;
  return param_1;
}

// GetBodyTransform @ 14d9dc4b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_RigidBodyWithControl::GetBodyTransform
          (FAnimNode_RigidBodyWithControl *this,TTransform<double> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  
  if ((-1 < param_1) && (param_1 < (this->Bodies).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->Bodies).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TTransform<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
              (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + (longlong)param_1 * 8),
               __return_storage_ptr__);
    return __return_storage_ptr__;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

// GetLODThreshold @ 14d9ddbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FAnimNode_RigidBodyWithControl::GetLODThreshold(FAnimNode_RigidBodyWithControl *this)

{
  int iVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = CVarRigidBodyNodeWithControlLODThreshold.Ref;
  bVar4 = IsInParallelGameThread();
  lVar6 = 4;
  if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4;
  }
  pTVar3 = CVarRigidBodyNodeWithControlLODThreshold.Ref;
  iVar1 = (int)this->_padding_;
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar5) != -1) {
    if (iVar1 == -1) {
      bVar4 = IsInParallelGameThread();
      if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
        lVar6 = 0;
      }
      return *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
    }
    bVar4 = IsInParallelGameThread();
    if ((bVar4) || (bVar4 = IsInGameThread(), bVar4)) {
      lVar6 = 0;
    }
    iVar1 = *(int *)((longlong)pTVar3->ShadowedValue + lVar6);
    if ((int)this->_padding_ < iVar1) {
      iVar1 = (int)this->_padding_;
    }
    return iVar1;
  }
  return iVar1;
}

// GetNumBodies @ 14d9de6e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FAnimNode_RigidBodyWithControl::GetNumBodies(FAnimNode_RigidBodyWithControl *this)

{
  return (this->Bodies).ArrayNum;
}

// GetPhysicsAssetToBeUsed @ 14d9de7d0

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
FAnimNode_RigidBodyWithControl::GetPhysicsAssetToBeUsed
          (FAnimNode_RigidBodyWithControl *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  UPhysicsAsset *pUVar3;
  USkeletalMeshComponent *this_00;
  
  pUVar3 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPhysicsAsset *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
    return (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  }
  if (this->bDefaultToSkeletalMeshPhysicsAsset != false) {
    if (param_1 == (UAnimInstance *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4793787774169777061>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                         ,0x3a5,"InAnimInstance");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPhysicsAsset *)(*pcVar1)();
        return pUVar3;
      }
    }
    else {
      this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
      if (this_00 != (USkeletalMeshComponent *)0x0) {
        pUVar3 = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_00);
        return pUVar3;
      }
    }
  }
  return (UPhysicsAsset *)0x0;
}

// GetSimulation @ 14d9df2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSimulation * __thiscall
FAnimNode_RigidBodyWithControl::GetSimulation(FAnimNode_RigidBodyWithControl *this)

{
  return this->Simulation;
}

// GetUniqueBodyModifierName @ 14d9df570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_RigidBodyWithControl::GetUniqueBodyModifierName
          (FAnimNode_RigidBodyWithControl *this,FName param_1)

{
  int iVar1;
  ForAnyElementType _Src;
  FName *pFVar2;
  FString *pFVar3;
  int iVar4;
  FName in_R8;
  FName local_res8;
  undefined1 local_48 [16];
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_38,L"");
  pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneToBodyNameMap,in_R8);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  if (pFVar2 != (FName *)0x0) {
    in_R8 = *pFVar2;
  }
  local_48._0_8_ = (FScriptContainerElement *)0x0;
  local_res8 = in_R8;
  if (local_38.Data.ArrayNum == 0) {
    local_48._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)local_48,local_38.Data.ArrayNum,
               (int *)(local_48 + 0xc));
    memcpy((void *)local_48._0_8_,_Src.Data,(longlong)local_38.Data.ArrayNum * 2);
  }
  if (local_res8 == (FName)0x0) {
    ::FString::operator=((FString *)local_48,L"Body");
  }
  else {
    pFVar3 = ::FName::ToString(&local_res8,&local_28);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars
              ((FString *)local_48,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  UE::PhysicsControl::
  GetUniqueName<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
              *)local_48,(int)this + 2000);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((*(longlong *)param_1 == 0) && (2 < (byte)LogPhysicsControl._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  return param_1;
}

// GetUniqueControlName @ 14d9df700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FAnimNode_RigidBodyWithControl::GetUniqueControlName
          (FAnimNode_RigidBodyWithControl *this,FName param_1,FName param_2)

{
  int iVar1;
  ForAnyElementType _Src;
  FName *pFVar2;
  FString *pFVar3;
  int iVar4;
  FName in_R9;
  FName local_res8;
  FName local_res10;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_48,L"");
  pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneToBodyNameMap,in_R9);
  if (pFVar2 != (FName *)0x0) {
    in_R9 = *pFVar2;
  }
  pFVar2 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->BoneToBodyNameMap,param_2);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  if (pFVar2 != (FName *)0x0) {
    param_2 = *pFVar2;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = param_2;
  local_res10 = in_R9;
  if (local_48.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_48.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  if (local_res8 != (FName)0x0) {
    pFVar3 = ::FName::ToString(&local_res8,&local_38);
    ::FString::ConcatFC(&local_58,pFVar3,L"_");
    iVar4 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar4);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (local_res10 != (FName)0x0) {
    pFVar3 = ::FName::ToString(&local_res10,&local_38);
    iVar1 = (pFVar3->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  UE::PhysicsControl::
  GetUniqueName<TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
            ((FString *)param_1,
             (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
              *)&local_68,(int)this + 0x780);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((*(longlong *)param_1 == 0) && (2 < (byte)LogPhysicsControl._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  return param_1;
}

// HasPreUpdate @ 14d9df8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FAnimNode_RigidBodyWithControl::HasPreUpdate(FAnimNode_RigidBodyWithControl *this)

{
  return true;
}

// InitControlsAndBodyModifiers @ 14d9dfff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
FAnimNode_RigidBodyWithControl::InitControlsAndBodyModifiers
          (FAnimNode_RigidBodyWithControl *this,FReferenceSkeleton *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  UPhysicsControlAsset *pUVar3;
  UPhysicsAsset *pUVar4;
  undefined1 *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers> FVar14;
  ForAnyElementType _Dst;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  *pTVar15;
  int *piVar16;
  longlong lVar17;
  undefined1 *puVar18;
  FNameEntryId FVar19;
  FName FVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStackY_3c8 [32];
  undefined1 local_367 [3];
  FColor_u_0 local_364;
  uint local_360;
  uint uStack_35c;
  FName local_358;
  FName local_350;
  <lambda_2> local_340;
  <lambda_1> local_338;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_330;
  int iStack_328;
  uint uStack_324;
  undefined1 *local_320;
  undefined4 uStack_318;
  int iStack_314;
  int local_310;
  undefined4 uStack_30c;
  int iStack_308;
  undefined4 uStack_304;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 uStack_2d8;
  undefined1 local_2d0 [64];
  ForAnyElementType local_290;
  uint local_288;
  FPhysicsControlCharacterSetupData local_278;
  FName local_1b8 [4];
  undefined4 local_194;
  TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
  local_190;
  undefined1 local_138 [64];
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
  local_e8;
  undefined1 local_98 [72];
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  iVar22 = 0;
  FVar14 = StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers;
  if (StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers>)0x0)
  {
    pFVar13 = ::FName::FName(local_1b8,"STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers")
    ;
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_RigidBodyNodeWithControl_InitControlsAndBodyModifiers,
                          *pFVar13,L"RigidBodyNodeWithControl_InitControlsAndBodyModifiers",
                          "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                          MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar7 = false;
  bVar8 = false;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar25 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar25 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_364.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_364._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_358.ComparisonIndex.Value = FVar19.Value;
        local_358.Number = uVar25;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_358,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                   ,0x19f);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_360 = FVar19.Value;
      uStack_35c = uVar25;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      goto LAB_14d9e0162;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  FVar20 = local_350;
LAB_14d9e0162:
  if ((*(int *)&(this->ControlRecords).field_0x8 != *(int *)&(this->ControlRecords).field_0x34) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ControlRecords.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
                          ,0x1a1,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FPhysicsControlCharacterSetupData::FPhysicsControlCharacterSetupData(&local_278);
  pUVar3 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPhysicsControlAsset *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
    pUVar3 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
    TArray<FPhysicsControlLimbSetupData,TSizedDefaultAllocator<32>_>::operator=
              (&local_278.LimbSetupData,&(pUVar3->CharacterSetupData).LimbSetupData);
    local_278.DefaultWorldSpaceControlData.bEnabled =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.bEnabled;
    local_278.DefaultWorldSpaceControlData._1_3_ =
         *(undefined3 *)&(pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.field_0x1;
    local_278.DefaultWorldSpaceControlData.LinearStrength =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.LinearStrength;
    local_278.DefaultWorldSpaceControlData.LinearDampingRatio =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.LinearDampingRatio;
    local_278.DefaultWorldSpaceControlData.LinearExtraDamping =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.LinearExtraDamping;
    local_278.DefaultWorldSpaceControlData.MaxForce =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.MaxForce;
    local_278.DefaultWorldSpaceControlData.AngularStrength =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.AngularStrength;
    local_278.DefaultWorldSpaceControlData.AngularDampingRatio =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.AngularDampingRatio;
    local_278.DefaultWorldSpaceControlData.AngularExtraDamping =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.AngularExtraDamping;
    local_278.DefaultWorldSpaceControlData.MaxTorque =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.MaxTorque;
    local_278.DefaultWorldSpaceControlData.LinearTargetVelocityMultiplier =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.LinearTargetVelocityMultiplier;
    local_278.DefaultWorldSpaceControlData.AngularTargetVelocityMultiplier =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.AngularTargetVelocityMultiplier;
    local_278.DefaultWorldSpaceControlData._44_4_ =
         *(undefined4 *)&(pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.field_0x2c;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.X =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.X;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.Y =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.Y;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.Z =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.Z;
    local_278.DefaultWorldSpaceControlData.bUseCustomControlPoint =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.bUseCustomControlPoint;
    local_278.DefaultWorldSpaceControlData.bUseSkeletalAnimation =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.bUseSkeletalAnimation;
    local_278.DefaultWorldSpaceControlData.bDisableCollision =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.bDisableCollision;
    local_278.DefaultWorldSpaceControlData.bOnlyControlChildObject =
         (pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.bOnlyControlChildObject;
    local_278.DefaultWorldSpaceControlData._76_4_ =
         *(undefined4 *)&(pUVar3->CharacterSetupData).DefaultWorldSpaceControlData.field_0x4c;
    local_278.DefaultParentSpaceControlData.bEnabled =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.bEnabled;
    local_278.DefaultParentSpaceControlData._1_3_ =
         *(undefined3 *)&(pUVar3->CharacterSetupData).DefaultParentSpaceControlData.field_0x1;
    local_278.DefaultParentSpaceControlData.LinearStrength =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.LinearStrength;
    local_278.DefaultParentSpaceControlData.LinearDampingRatio =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.LinearDampingRatio;
    local_278.DefaultParentSpaceControlData.LinearExtraDamping =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.LinearExtraDamping;
    local_278.DefaultParentSpaceControlData.MaxForce =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.MaxForce;
    local_278.DefaultParentSpaceControlData.AngularStrength =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.AngularStrength;
    local_278.DefaultParentSpaceControlData.AngularDampingRatio =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.AngularDampingRatio;
    local_278.DefaultParentSpaceControlData.AngularExtraDamping =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.AngularExtraDamping;
    local_278.DefaultParentSpaceControlData.MaxTorque =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.MaxTorque;
    local_278.DefaultParentSpaceControlData.LinearTargetVelocityMultiplier =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.LinearTargetVelocityMultiplier;
    local_278.DefaultParentSpaceControlData.AngularTargetVelocityMultiplier =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.AngularTargetVelocityMultiplier;
    local_278.DefaultParentSpaceControlData._44_4_ =
         *(undefined4 *)&(pUVar3->CharacterSetupData).DefaultParentSpaceControlData.field_0x2c;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.X =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.X;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.Y =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.Y;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.Z =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0.
         _s_0.Z;
    local_278.DefaultParentSpaceControlData.bUseCustomControlPoint =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.bUseCustomControlPoint;
    local_278.DefaultParentSpaceControlData.bUseSkeletalAnimation =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.bUseSkeletalAnimation;
    local_278.DefaultParentSpaceControlData.bDisableCollision =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.bDisableCollision;
    local_278.DefaultParentSpaceControlData.bOnlyControlChildObject =
         (pUVar3->CharacterSetupData).DefaultParentSpaceControlData.bOnlyControlChildObject;
    local_278.DefaultParentSpaceControlData._76_4_ =
         *(undefined4 *)&(pUVar3->CharacterSetupData).DefaultParentSpaceControlData.field_0x4c;
    local_278.DefaultBodyModifierData.MovementType =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.MovementType;
    local_278.DefaultBodyModifierData.CollisionType.Value =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.CollisionType.Value;
    local_278.DefaultBodyModifierData.KinematicTargetSpace =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.KinematicTargetSpace;
    local_278.DefaultBodyModifierData._3_1_ =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.field_0x3;
    local_278.DefaultBodyModifierData.GravityMultiplier =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.GravityMultiplier;
    local_278.DefaultBodyModifierData.PhysicsBlendWeight =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.PhysicsBlendWeight;
    local_278.DefaultBodyModifierData.bUpdateKinematicFromSimulation =
         (pUVar3->CharacterSetupData).DefaultBodyModifierData.bUpdateKinematicFromSimulation;
    local_278.DefaultBodyModifierData._13_3_ =
         *(undefined3 *)&(pUVar3->CharacterSetupData).DefaultBodyModifierData.field_0xd;
  }
  if (this->bEnableCharacterSetupData != false) {
    if ((&local_278 == &this->CharacterSetupData) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar21 = (this->CharacterSetupData).LimbSetupData.ArrayNum;
    if (iVar21 != 0) {
      iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x14,4,iVar21,(ForAnyElementType *)&local_278,
                          &local_278.LimbSetupData.ArrayNum,&local_278.LimbSetupData.ArrayMax);
      memcpy(local_278.LimbSetupData.AllocatorInstance.Data + (longlong)iVar12 * 0x14,
             (this->CharacterSetupData).LimbSetupData.AllocatorInstance.Data,(longlong)iVar21 * 0x14
            );
    }
    local_278.DefaultWorldSpaceControlData.bEnabled =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.bEnabled;
    local_278.DefaultWorldSpaceControlData._1_3_ =
         *(undefined3 *)&(this->CharacterSetupData).DefaultWorldSpaceControlData.field_0x1;
    local_278.DefaultWorldSpaceControlData.LinearStrength =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.LinearStrength;
    local_278.DefaultWorldSpaceControlData.LinearDampingRatio =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.LinearDampingRatio;
    local_278.DefaultWorldSpaceControlData.LinearExtraDamping =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.LinearExtraDamping;
    local_278.DefaultWorldSpaceControlData.MaxForce =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.MaxForce;
    local_278.DefaultWorldSpaceControlData.AngularStrength =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.AngularStrength;
    local_278.DefaultWorldSpaceControlData.AngularDampingRatio =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.AngularDampingRatio;
    local_278.DefaultWorldSpaceControlData.AngularExtraDamping =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.AngularExtraDamping;
    local_278.DefaultWorldSpaceControlData.MaxTorque =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.MaxTorque;
    local_278.DefaultWorldSpaceControlData.LinearTargetVelocityMultiplier =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.LinearTargetVelocityMultiplier;
    local_278.DefaultWorldSpaceControlData.AngularTargetVelocityMultiplier =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.AngularTargetVelocityMultiplier;
    local_278.DefaultWorldSpaceControlData._44_4_ =
         *(undefined4 *)&(this->CharacterSetupData).DefaultWorldSpaceControlData.field_0x2c;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.X =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.
         X;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.Y =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.
         Y;
    local_278.DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.Z =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.CustomControlPoint.field0_0x0._s_0.
         Z;
    local_278.DefaultWorldSpaceControlData.bUseCustomControlPoint =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.bUseCustomControlPoint;
    local_278.DefaultWorldSpaceControlData.bUseSkeletalAnimation =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.bUseSkeletalAnimation;
    local_278.DefaultWorldSpaceControlData.bDisableCollision =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.bDisableCollision;
    local_278.DefaultWorldSpaceControlData.bOnlyControlChildObject =
         (this->CharacterSetupData).DefaultWorldSpaceControlData.bOnlyControlChildObject;
    local_278.DefaultWorldSpaceControlData._76_4_ =
         *(undefined4 *)&(this->CharacterSetupData).DefaultWorldSpaceControlData.field_0x4c;
    local_278.DefaultParentSpaceControlData.bEnabled =
         (this->CharacterSetupData).DefaultParentSpaceControlData.bEnabled;
    local_278.DefaultParentSpaceControlData._1_3_ =
         *(undefined3 *)&(this->CharacterSetupData).DefaultParentSpaceControlData.field_0x1;
    local_278.DefaultParentSpaceControlData.LinearStrength =
         (this->CharacterSetupData).DefaultParentSpaceControlData.LinearStrength;
    local_278.DefaultParentSpaceControlData.LinearDampingRatio =
         (this->CharacterSetupData).DefaultParentSpaceControlData.LinearDampingRatio;
    local_278.DefaultParentSpaceControlData.LinearExtraDamping =
         (this->CharacterSetupData).DefaultParentSpaceControlData.LinearExtraDamping;
    local_278.DefaultParentSpaceControlData.MaxForce =
         (this->CharacterSetupData).DefaultParentSpaceControlData.MaxForce;
    local_278.DefaultParentSpaceControlData.AngularStrength =
         (this->CharacterSetupData).DefaultParentSpaceControlData.AngularStrength;
    local_278.DefaultParentSpaceControlData.AngularDampingRatio =
         (this->CharacterSetupData).DefaultParentSpaceControlData.AngularDampingRatio;
    local_278.DefaultParentSpaceControlData.AngularExtraDamping =
         (this->CharacterSetupData).DefaultParentSpaceControlData.AngularExtraDamping;
    local_278.DefaultParentSpaceControlData.MaxTorque =
         (this->CharacterSetupData).DefaultParentSpaceControlData.MaxTorque;
    local_278.DefaultParentSpaceControlData.LinearTargetVelocityMultiplier =
         (this->CharacterSetupData).DefaultParentSpaceControlData.LinearTargetVelocityMultiplier;
    local_278.DefaultParentSpaceControlData.AngularTargetVelocityMultiplier =
         (this->CharacterSetupData).DefaultParentSpaceControlData.AngularTargetVelocityMultiplier;
    local_278.DefaultParentSpaceControlData._44_4_ =
         *(undefined4 *)&(this->CharacterSetupData).DefaultParentSpaceControlData.field_0x2c;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.X =
         (this->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0
         .X;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.Y =
         (this->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0
         .Y;
    local_278.DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0.Z =
         (this->CharacterSetupData).DefaultParentSpaceControlData.CustomControlPoint.field0_0x0._s_0
         .Z;
    local_278.DefaultParentSpaceControlData.bUseCustomControlPoint =
         (this->CharacterSetupData).DefaultParentSpaceControlData.bUseCustomControlPoint;
    local_278.DefaultParentSpaceControlData.bUseSkeletalAnimation =
         (this->CharacterSetupData).DefaultParentSpaceControlData.bUseSkeletalAnimation;
    local_278.DefaultParentSpaceControlData.bDisableCollision =
         (this->CharacterSetupData).DefaultParentSpaceControlData.bDisableCollision;
    local_278.DefaultParentSpaceControlData.bOnlyControlChildObject =
         (this->CharacterSetupData).DefaultParentSpaceControlData.bOnlyControlChildObject;
    local_278.DefaultParentSpaceControlData._76_4_ =
         *(undefined4 *)&(this->CharacterSetupData).DefaultParentSpaceControlData.field_0x4c;
    local_278.DefaultBodyModifierData.MovementType =
         (this->CharacterSetupData).DefaultBodyModifierData.MovementType;
    local_278.DefaultBodyModifierData.CollisionType.Value =
         (this->CharacterSetupData).DefaultBodyModifierData.CollisionType.Value;
    local_278.DefaultBodyModifierData.KinematicTargetSpace =
         (this->CharacterSetupData).DefaultBodyModifierData.KinematicTargetSpace;
    local_278.DefaultBodyModifierData._3_1_ =
         (this->CharacterSetupData).DefaultBodyModifierData.field_0x3;
    local_278.DefaultBodyModifierData.GravityMultiplier =
         (this->CharacterSetupData).DefaultBodyModifierData.GravityMultiplier;
    local_278.DefaultBodyModifierData.PhysicsBlendWeight =
         (this->CharacterSetupData).DefaultBodyModifierData.PhysicsBlendWeight;
    local_278.DefaultBodyModifierData.bUpdateKinematicFromSimulation =
         (this->CharacterSetupData).DefaultBodyModifierData.bUpdateKinematicFromSimulation;
    local_278.DefaultBodyModifierData._13_3_ =
         *(undefined3 *)&(this->CharacterSetupData).DefaultBodyModifierData.field_0xd;
  }
  UE::PhysicsControl::GetLimbBones
            ((TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
              *)local_98,&local_278.LimbSetupData,param_1,this->PhysicsAssetToUse);
  pUVar3 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_138._32_8_ = 0;
  local_138._40_4_ = 0;
  local_138._44_4_ = 0x80;
  local_138._48_4_ = 0xffffffff;
  local_138._52_4_ = 0;
  local_f8 = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_e8.Elements._0_8_ = 0;
  local_e8.Elements._8_8_ = 0;
  local_e8.Elements._32_8_ = 0;
  local_e8.Elements._40_4_ = 0;
  local_e8.Elements._44_4_ = 0x80;
  local_e8.Elements._48_4_ = 0xffffffff;
  local_e8.Elements._52_4_ = 0;
  local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.HashSize = 0;
  if ((pUVar3 != (UPhysicsControlAsset *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
    pUVar3 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
    TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
                 *)local_138,
                (TSet<TTuple<FName,FPhysicsControlCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>,FDefaultSetAllocator>
                 *)&pUVar3->AdditionalControlsAndModifiers);
    TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
    ::operator=(&local_e8,
                (TSet<TTuple<FName,FPhysicsBodyModifierCreationData>,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>,FDefaultSetAllocator>
                 *)&(pUVar3->AdditionalControlsAndModifiers).Modifiers);
  }
  TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
  ::Append<FDefaultSetAllocator>
            ((TMap<FName,FPhysicsControlCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlCreationData,0>_>
              *)local_138,&(this->AdditionalControlsAndBodyModifiers).Controls);
  TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
  ::Append<FDefaultSetAllocator>
            ((TMap<FName,FPhysicsBodyModifierCreationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsBodyModifierCreationData,0>_>
              *)&local_e8,&(this->AdditionalControlsAndBodyModifiers).Modifiers);
  pUVar4 = this->PhysicsAssetToUse;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_2d0._0_8_ = 0;
  local_2d0._8_8_ = 0;
  local_2d0._32_8_ = 0;
  local_288 = 0;
  local_2d0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2d0._48_8_ = _UNK_150631d98;
  if (1 < local_50) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_290,0,local_50,4);
  }
  puVar18 = local_98 + 0x38;
  if ((undefined1 *)local_98._64_8_ != (undefined1 *)0x0) {
    puVar18 = (undefined1 *)local_98._64_8_;
  }
  _Dst.Data = (FScriptContainerElement *)(local_2d0 + 0x38);
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    _Dst.Data = local_290.Data;
  }
  if (local_50 != 0) {
    memcpy(_Dst.Data,puVar18,(longlong)(int)local_50 << 2);
  }
  local_288 = local_50;
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_2d0,
              (TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
  local_340.Node = this;
  local_338.Node = this;
  pTVar15 = TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
            ::
            TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                      (&local_190,
                       (TMap<FName,FPhysicsControlLimbBones,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPhysicsControlLimbBones,0>_>
                        *)local_2d0);
  UE::PhysicsControl::
  ForEachPotentialOperator<_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_1>,_UE::PhysicsControl::CreateOperatorsForNode_::__l2::<lambda_2>_>
            (&local_278,(FPhysicsControlAndBodyModifierCreationDatas *)local_138,pTVar15,param_1,
             pUVar4,&this->NameRecords,&local_338,&local_340);
  local_288 = 0;
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_2d0);
  local_320 = &(this->ControlRecords).field_0x10;
  iVar21 = *(int *)&(this->ControlRecords).field_0x28;
  local_330 = &this->ControlRecords;
  uStack_324 = 1;
  iStack_314 = iVar22;
  local_310 = iVar22;
  if (iVar21 != 0) {
    puVar24 = *(uint **)&(this->ControlRecords).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)local_320;
    }
    uVar25 = *puVar24;
    iVar22 = 0;
    local_310 = 0;
    while (uVar25 == 0) {
      lVar17 = (longlong)iVar22;
      local_310 = local_310 + 0x20;
      iVar22 = iVar22 + 1;
      iStack_314 = iVar21;
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14d9e0601;
      uVar25 = puVar24[lVar17 + 1];
    }
    uStack_324 = -uVar25 & uVar25;
    uVar1 = (ulonglong)uStack_324 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_360 = (uint)lVar17;
    iStack_314 = local_310 + -1 + local_360;
    if (iVar21 < iStack_314) {
      iStack_314 = iVar21;
    }
  }
LAB_14d9e0601:
  puVar18 = &(this->ControlRecords).field_0x10;
  uStack_30c = local_194;
  iStack_308 = *(int *)&(this->ControlRecords).field_0x8 -
               *(int *)&(this->ControlRecords).field_0x34;
  uVar25 = *(uint *)&(this->ControlRecords).field_0x28;
  uStack_318 = 0xffffffff;
  TStack_2f8.CurrentBitIndex = iStack_314;
  TStack_2f8.UnvisitedBitMask = 0xffffffff;
  TStack_2f8._padding_ = CONCAT44(uStack_324,iVar22);
  uVar26 = uVar25 & 0xffffffe0;
  iVar21 = (int)uVar25 >> 5;
  TStack_2f8._28_4_ = local_194;
  TStack_2f8.BaseBitIndex = local_310;
  uStack_2d8 = CONCAT44(uStack_304,iStack_308);
  iStack_328 = iVar22;
  local_300 = local_330;
  TStack_2f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_320;
  if (((int)uVar25 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&(this->ControlRecords).field_0x28;
  if (uVar25 != uVar2) {
    puVar5 = *(undefined1 **)&(this->ControlRecords).field_0x20;
    puVar23 = puVar18;
    if (puVar5 != (undefined1 *)0x0) {
      puVar23 = puVar5;
    }
    uVar25 = -1 << ((byte)uVar25 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar21 * 4);
    while (uVar25 == 0) {
      lVar17 = (longlong)iVar21;
      uVar26 = uVar26 + 0x20;
      iVar21 = iVar21 + 1;
      uVar25 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14d9e070f;
      uVar25 = *(uint *)(puVar23 + lVar17 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar25 = (uVar26 - 1) + (int)lVar17;
    if ((int)uVar2 < (int)uVar25) {
      uVar25 = uVar2;
    }
  }
LAB_14d9e070f:
  while( true ) {
    pTVar9 = local_300;
    if (*(int *)&local_300->field_0x8 - *(int *)&local_300->field_0x34 != (int)uStack_2d8) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_367);
    }
    if (((TStack_2f8.CurrentBitIndex == uVar25) &&
        (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar18)) &&
       (pTVar9 == &this->ControlRecords)) break;
    lVar17 = *(longlong *)pTVar9 + (longlong)TStack_2f8.CurrentBitIndex * 0x240;
    piVar16 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
              Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                    *)&this->BodyNameToIndexMap,*(FName *)(lVar17 + 0x18));
    if (piVar16 == (int *)0x0) {
      iVar22 = -1;
    }
    else {
      iVar22 = *piVar16;
    }
    *(int *)(lVar17 + 0x220) = iVar22;
    if ((*(FName *)(lVar17 + 0x10) == (FName)0x0) ||
       (piVar16 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                  ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                          *)&this->BodyNameToIndexMap,*(FName *)(lVar17 + 0x10)),
       piVar16 == (int *)0x0)) {
      iVar22 = -1;
    }
    else {
      iVar22 = *piVar16;
    }
    *(int *)(lVar17 + 0x224) = iVar22;
    TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
  }
  pUVar3 = (this->PhysicsControlAsset).field0_0x0.DebugPtr;
  if ((pUVar3 != (UPhysicsControlAsset *)0x0) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
    UE::PhysicsControl::
    CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
              (&((this->PhysicsControlAsset).field0_0x0.DebugPtr)->AdditionalSets,
               &this->ModifierRecords,&this->ControlRecords,&this->NameRecords);
  }
  UE::PhysicsControl::
  CreateAdditionalSets_Implementation<TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>,TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>_>
            (&this->AdditionalSets,&this->ModifierRecords,&this->ControlRecords,&this->NameRecords);
  ApplyControlAndBodyModifierDatas
            (this,&(this->InitialControlAndBodyModifierUpdates).ControlParameters,
             &(this->InitialControlAndBodyModifierUpdates).ControlMultiplierParameters,
             &(this->InitialControlAndBodyModifierUpdates).ModifierParameters);
  LogControlsModifiersAndSets(this);
  local_e8.HashSize = 0;
  if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsBodyModifierCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8.Elements);
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlCreationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  local_50 = 0;
  if ((undefined1 *)local_98._64_8_ != (undefined1 *)0x0) {
    FMemory::Free((void *)local_98._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPhysicsControlLimbBones>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (local_278.LimbSetupData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.LimbSetupData.AllocatorInstance.Data);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// InitPhysics @ 14d9e0920

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
FAnimNode_RigidBodyWithControl::InitPhysics
          (FAnimNode_RigidBodyWithControl *this,UAnimInstance *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<ImmediatePhysics_Chaos::FJointHandle_*,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined8 uVar6;
  char cVar7;
  short sVar8;
  ushort uVar9;
  USkeleton *this_00;
  UPhysicsAsset *pUVar10;
  FScriptContainerElement *pFVar11;
  UObject *pUVar12;
  FBodyInstance *pFVar13;
  FConstraintInstance *pFVar14;
  code *pcVar15;
  float fVar16;
  undefined2 uVar17;
  int iVar18;
  TConsoleVariableData<int> *pTVar19;
  FJointHandle *pFVar20;
  FSkeletonToMeshLinkup *pFVar21;
  bool bVar22;
  byte bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlInitPhysicsTime> FVar30;
  USkeletalMesh *pUVar31;
  TObjectPtr<UPhysicsAsset>_u_0 TVar32;
  USkeleton *pUVar33;
  UClass *pUVar34;
  FSimulation *pFVar35;
  TObjectPtr<UPhysicsAsset>_u_0 TVar36;
  FChaosVDRuntimeModule *this_01;
  TTransform<double> *pTVar37;
  FActorSetup *pFVar38;
  TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *pTVar39;
  FJointSetup *pFVar40;
  USkeletalMeshComponent *pUVar41;
  FString *pFVar42;
  uint uVar43;
  longlong lVar44;
  ForAnyElementType FVar45;
  FName FVar46;
  FScriptContainerElement *pFVar47;
  wchar_t *pwVar48;
  FName FVar49;
  ulonglong uVar50;
  FActorHandle *pFVar51;
  wchar_t *pwVar52;
  TVector<double>_u_0 *pTVar53;
  uint *puVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  FActorHandle *this_02;
  float fVar57;
  double dVar58;
  undefined1 auStackY_8d8 [32];
  undefined1 local_878;
  undefined1 local_877;
  byte local_876;
  undefined1 local_875;
  undefined1 local_874;
  FIdentityFunctor local_873 [3];
  FActorHandle *local_870;
  TArray<ImmediatePhysics_Chaos::FSimulation::FIgnorePair,TSizedDefaultAllocator<32>_> local_868;
  ForAnyElementType local_858;
  int local_850 [2];
  undefined4 local_848 [2];
  TArray<FConstraintInstance_*,TSizedDefaultAllocator<32>_> local_840;
  FName local_830;
  byte local_828;
  TArray<FBodyInstance_*,TSizedDefaultAllocator<32>_> local_820;
  TArray<ImmediatePhysics_Chaos::FActorHandle_*,TSizedDefaultAllocator<32>_> local_810;
  ForAnyElementType local_800;
  undefined8 local_7f8;
  FName local_7f0;
  uint local_7e8 [2];
  FActorHandle *local_7e0;
  longlong local_7d8;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_7d0;
  ForAnyElementType local_7c0;
  int local_7b8 [2];
  FColor_u_0 local_7b0;
  uint local_7ac;
  int local_7a8;
  int local_7a4;
  FActorHandle *local_7a0;
  FActorHandle *pFStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  USkeletalMeshComponent *local_780;
  ulonglong local_778;
  FName local_770;
  FName local_768;
  FJointHandle *local_760;
  TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
  *local_758;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_750;
  undefined1 local_730 [8];
  TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FJointHandle_*_const_&> local_728;
  FSkeletonToMeshLinkup *local_718;
  TMap<FRigidBodyIndexPair,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigidBodyIndexPair,bool,0>_>
  *local_710;
  uint uStack_708;
  undefined4 uStack_704;
  undefined1 *local_700;
  undefined4 uStack_6f8;
  uint uStack_6f4;
  uint local_6f0;
  undefined4 uStack_6ec;
  FActorHandle *local_6e0;
  uint *local_6d8;
  longlong local_6d0;
  FActorHandle **local_6c8;
  ForAnyElementType *local_6c0;
  longlong local_6b8;
  FName *local_6b0;
  FJointHandle **local_6a8;
  FName local_6a0;
  TVector<double>_u_0 local_698;
  TVector<double>_u_0 local_680;
  FString local_668;
  FString local_658;
  FString local_648 [2];
  undefined4 local_61c;
  TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
  local_618;
  TSet<TTuple<FName,ImmediatePhysics_Chaos::FJointHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FJointHandle_*,0>,FDefaultSetAllocator>
  local_5c8;
  TTransform<double> local_578;
  TTransform<double> local_518;
  FActorSetup local_4b8;
  FJointSetup local_398;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_8d8;
  TVar36.DebugPtr = (UPhysicsAsset *)0x0;
  FVar30 = StatPtr_STAT_RigidBodyWithControlInitPhysicsTime;
  local_728.Value = (FJointHandle **)param_1;
  if (StatPtr_STAT_RigidBodyWithControlInitPhysicsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlInitPhysicsTime>)0x0) {
    pFVar29 = ::FName::FName(&local_6a0,"STAT_RigidBodyWithControlInitPhysicsTime");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlInitPhysicsTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyWithControlInitPhysicsTime,*pFVar29,
                        L"RigidBodyNodeWithControl_InitPhysics","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_830.ComparisonIndex.Value = 0;
  local_830.Number = 0;
  local_828 = 0;
  FVar46 = *(FName *)FVar30;
  if ((FVar46.ComparisonIndex.Value.Value != 0) || (FVar46.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_7b0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_7b0._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      local_828 = local_828 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_770.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_770.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_770,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x3b3);
        local_828 = local_828 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_830 = FVar46;
      local_7f0 = FVar46;
      FThreadStats::AddMessage(FVar46,CycleScopeStart);
      local_828 = local_828 | 4;
    }
  }
  DestroyControlsAndBodyModifiers(this);
  DestroyPhysicsSimulation(this);
  local_780 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  pUVar31 = USkeletalMeshComponent::GetSkeletalMeshAsset(local_780);
  this_00 = (param_1->CurrentSkeleton).field0_0x0.DebugPtr;
  TStack_750.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       CONCAT44(TStack_750.Array._4_4_,TStack_750.Array._0_4_);
  if ((pUVar31 == (USkeletalMesh *)0x0) ||
     (TStack_750.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_750.Array._4_4_,TStack_750.Array._0_4_), this_00 == (USkeleton *)0x0))
  goto LAB_14d9e22dc;
  this->SkeletalMeshAtLastPhysicsInit = pUVar31;
  local_7d8 = (**(code **)(pUVar31->_padding_ + 0x318))(pUVar31);
  pUVar10 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  if ((pUVar10 == (UPhysicsAsset *)0x0) || (((uint)pUVar10->_padding_ >> 0x1e & 1) != 0)) {
    TVar32.DebugPtr = TVar36.DebugPtr;
    if ((this->bDefaultToSkeletalMeshPhysicsAsset != false) &&
       (pUVar41 = UAnimInstance::GetSkelMeshComponentChecked(param_1),
       pUVar41 != (USkeletalMeshComponent *)0x0)) {
      TVar32.DebugPtr = USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)pUVar41);
    }
  }
  else {
    TVar32 = (this->OverridePhysicsAsset).field0_0x0;
  }
  this->PhysicsAssetToUse = (UPhysicsAsset *)TVar32;
  pUVar33 = (USkeleton *)(**(code **)(pUVar31->_padding_ + 0x400))(pUVar31);
  if ((this_00 != pUVar33) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<4793787774169777097>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                          ,0x3c9,"SkeletonAsset == SkeletalMeshAsset->GetSkeleton()"), bVar22)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  local_718 = USkeleton::FindOrAddMeshLinkupData(this_00,(USkinnedAsset *)pUVar31);
  uVar26 = (this_00->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  uVar56 = (ulonglong)uVar26;
  pTVar2 = &this->SkeletonBoneIndexToBodyIndex;
  if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar56);
  }
  piVar1 = &(this->SkeletonBoneIndexToBodyIndex).ArrayMax;
  if ((this->SkeletonBoneIndexToBodyIndex).ArrayMax < (int)uVar26) {
    (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar26,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_848[0] = 0xffffffff;
  (this->SkeletonBoneIndexToBodyIndex).ArrayNum = 0;
  if (*piVar1 != uVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar26,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar26) {
    do {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar11 <= (FScriptContainerElement *)local_848) &&
          ((FScriptContainerElement *)local_848 < pFVar11 + (longlong)*piVar1 * 4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      iVar24 = (this->SkeletonBoneIndexToBodyIndex).ArrayNum;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->SkeletonBoneIndexToBodyIndex).ArrayNum = iVar24 + 1;
      *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 4) = local_848[0];
      uVar56 = uVar56 - 1;
    } while (uVar56 != 0);
  }
  pUVar41 = local_780;
  dVar58 = (double)local_780->_padding_;
  (this->PreviousTransform).Rotation.XY.m128d_f64[0] = (double)local_780->_padding_;
  (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar58;
  dVar58 = (double)local_780->_padding_;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = (double)local_780->_padding_;
  (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar58;
  dVar58 = (double)local_780->_padding_;
  (this->PreviousTransform).Translation.XY.m128d_f64[0] = (double)local_780->_padding_;
  (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar58;
  dVar58 = (double)local_780->_padding_;
  (this->PreviousTransform).Translation.ZW.m128d_f64[0] = (double)local_780->_padding_;
  (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar58;
  dVar58 = (double)local_780->_padding_;
  (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = (double)local_780->_padding_;
  (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar58;
  *(undefined1 (*) [16])(this->PreviousTransform).Scale3D.ZW.m128d_f64 =
       *(undefined1 (*) [16])&local_780->_padding_;
  TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
           *)&this->ComponentsInSim);
  this->ComponentsInSimTick = 0;
  pUVar34 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  if ((pUVar34->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar34);
  }
  pUVar12 = (pUVar34->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar12 == (UObject *)0x0) {
    pFVar42 = GetTypeName<UPhysicsSettings>(&local_668);
    if ((pFVar42->Data).ArrayNum == 0) {
      pwVar48 = L"";
    }
    else {
      pwVar48 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar48);
  }
  pUVar34 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
  iVar24 = (int)pUVar34->_padding_;
  if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar24) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar24 * 8) !=
      &pUVar34->_padding_)) {
    pFVar42 = GetTypeName<UPhysicsSettings>(&local_658);
    pwVar48 = L"";
    if ((pFVar42->Data).ArrayNum == 0) {
      pwVar52 = L"";
    }
    else {
      pwVar52 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
    }
    pFVar42 = GetFullNameForCastLogError<UObject>(local_648,pUVar12);
    if ((pFVar42->Data).ArrayNum != 0) {
      pwVar48 = (wchar_t *)(pFVar42->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar48,pwVar52);
  }
  this->AnimPhysicsMinDeltaTime = *(float *)&pUVar12[9].field_0x1c;
  this->bSimulateAnimPhysicsAfterReset = (bool)pUVar12[9].field_0x20;
  pTVar19 = CVarEnableRigidBodyNodeWithControl.Ref;
  if ((this->PhysicsAssetToUse == (UPhysicsAsset *)0x0) || (pUVar41->bDisableRigidBodyAnimNode != 0)
     ) {
LAB_14d9e0d86:
    bVar23 = 0;
  }
  else {
    bVar22 = IsInParallelGameThread();
    if (bVar22) {
LAB_14d9e0d79:
      TVar32.DebugPtr = TVar36.DebugPtr;
    }
    else {
      bVar22 = IsInGameThread();
      TVar32 = (TObjectPtr<UPhysicsAsset>_u_0)0x4;
      if (bVar22) goto LAB_14d9e0d79;
    }
    if (*(int *)((longlong)pTVar19->ShadowedValue + (longlong)&(TVar32.DebugPtr)->_padding_) == 0)
    goto LAB_14d9e0d86;
    bVar23 = 1;
  }
  this->bEnabled = '\0';
  this->field_0x640 = this->field_0x640 | bVar23;
  if (bVar23 != 0) {
    pFVar35 = ::operator_new(0x40);
    if (pFVar35 != (FSimulation *)0x0) {
      TVar36.DebugPtr = (UPhysicsAsset *)ImmediatePhysics_Chaos::FSimulation::FSimulation(pFVar35);
    }
    this->Simulation = (FSimulation *)TVar36;
    this_01 = FChaosVDRuntimeModule::Get();
    iVar24 = FChaosVDRuntimeModule::GenerateUniqueID(this_01);
    (this->Simulation->CVDContextData).Id = iVar24;
    local_778 = 1;
    (this->Simulation->CVDContextData).Type = 1;
    ImmediatePhysics_Chaos::FSimulation::SetRewindVelocities(this->Simulation,true);
    uVar26 = (this->PhysicsAssetToUse->SkeletalBodySetups).ArrayNum;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                *)&this->BodyNameToIndexMap);
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    piVar1 = &(this->Bodies).ArrayMax;
    (this->Bodies).ArrayNum = 0;
    if (*piVar1 != uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar26,&(this->Bodies).AllocatorInstance,0,piVar1);
    }
    piVar1 = &(this->Joints).ArrayMax;
    (this->Joints).ArrayNum = 0;
    if (*piVar1 != uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar26,&(this->Joints).AllocatorInstance,0,piVar1);
    }
    this->WorldSpaceControlActorHandle = (FActorHandle *)0x0;
    piVar1 = &(this->BodyAnimData).ArrayMax;
    piVar3 = &(this->BodyAnimData).ArrayNum;
    *piVar3 = 0;
    if (*piVar1 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar26,&(this->BodyAnimData).AllocatorInstance,0,piVar1);
    }
    iVar24 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x38,8,uVar26,&(this->BodyAnimData).AllocatorInstance,piVar3,piVar1);
    DefaultConstructItems<FAnimNode_RigidBodyWithControl::FBodyAnimData,int>
              ((this->BodyAnimData).AllocatorInstance.Data + (longlong)iVar24 * 0x38,uVar26);
    this->TotalMass = 0.0;
    DestroyControlsAndBodyModifiers(this);
    local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_820.ArrayNum = 0;
    local_820.ArrayMax = 0;
    local_840.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_840.ArrayNum = 0;
    local_840.ArrayMax = 0;
    if (this->SimulationSpace == WorldSpace) {
      local_698._s_0.X = (double)pUVar41->_padding_;
      local_698._s_0.Y = (double)pUVar41->_padding_;
      pTVar53 = &local_698;
      uVar6 = pUVar41->_padding_;
      local_698._s_0.Z = (double)uVar6;
    }
    else {
      pTVar53 = &local_680;
      local_680._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_680._s_0.Y = _UNK_150689688;
      local_680._s_0.Z = __real_3ff0000000000000;
    }
    USkeletalMeshComponent::InstantiatePhysicsAssetRefPose
              (pUVar41,this->PhysicsAssetToUse,(TVector<double> *)&pTVar53->_s_0,&local_820,
               &local_840,(FPhysScene_Chaos *)0x0,(USkeletalMeshComponent *)0x0,-1,
               (FPhysicsAggregateReference_Chaos *)local_873,true);
    bVar22 = ShouldApplyPhysicsAssetConditioning(this);
    if (bVar22) {
      TransformConstraintsToMatchSkeletalMesh
                (this,pUVar31,this->PhysicsAssetConditioningConstraintPosition,
                 this->PhysicsAssetConditioningConstraintOrientation,&local_840);
    }
    local_618.Elements._0_8_ = 0;
    local_618.Elements._8_8_ = 0;
    local_618.Elements._32_8_ = 0;
    local_618.Elements._40_4_ = 0;
    local_618.Elements._44_4_ = 0x80;
    local_618.Elements._48_4_ = 0xffffffff;
    local_618.Elements._52_4_ = 0;
    local_618.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_618.HashSize = 0;
    local_810.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_810.ArrayNum = 0;
    local_810.ArrayMax = 0;
    local_5c8.Elements._0_8_ = 0;
    local_5c8.Elements._8_8_ = 0;
    local_5c8.Elements._32_8_ = 0;
    local_5c8.Elements._40_4_ = 0;
    local_5c8.Elements._44_4_ = 0x80;
    local_5c8.Elements._48_4_ = 0xffffffff;
    local_5c8.Elements._52_4_ = 0;
    local_5c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_5c8.HashSize = 0;
    local_7d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7d0.ArrayNum = 0;
    local_7d0.ArrayMax = 0;
    ComputeBodyInsertionOrderWithControl(&local_7d0,pUVar41);
    lVar44 = (longlong)local_820.ArrayNum;
    local_7a4 = local_7d0.ArrayNum;
    iVar24 = *(int *)(local_7d8 + 0x28);
    local_858.Data = (FScriptContainerElement *)0x0;
    local_850[0] = 0;
    local_850[1] = 0;
    local_7a8 = iVar24;
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,local_820.ArrayNum,&local_858,local_850,local_850 + 1);
    memset(local_858.Data + (longlong)iVar25 * 8,0,lVar44 << 3);
    local_800.Data = (FScriptContainerElement *)0x0;
    local_7f8 = 0;
    iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar24,&local_800,(int *)&local_7f8,(int *)((longlong)&local_7f8 + 4));
    memset(local_800.Data + (longlong)iVar25 * 8,0,(longlong)iVar24 << 3);
    iVar24 = local_820.ArrayNum;
    uVar56 = (ulonglong)local_820.ArrayNum;
    pFVar11 = local_820.AllocatorInstance.Data + uVar56 * 8;
    FVar45.Data = local_820.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar56 != iVar24) {
        local_878 = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_878);
      }
      fVar16 = __real_3f800000;
      if (FVar45.Data == pFVar11) break;
      pFVar13 = *(FBodyInstance **)FVar45.Data;
      bVar22 = FBodyInstance::IsValidBodyInstance(pFVar13);
      if (bVar22) {
        sVar8 = pFVar13->InstanceBoneIndex;
        uVar26 = 0;
        if (sVar8 < (int)local_7f8) {
          uVar26 = (uint)~(int)sVar8 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        *(FBodyInstance **)(local_800.Data + (longlong)sVar8 * 8) = pFVar13;
      }
      uVar56 = local_820._8_8_ & 0xffffffff;
      FVar45.Data = FVar45.Data + 8;
    }
    uVar56 = (ulonglong)local_7d0.ArrayNum;
    pTVar4 = &this->Bodies;
    local_7ac = local_7d0.ArrayNum;
    local_7f0 = (FName)((longlong)local_7d0.AllocatorInstance.Data + uVar56 * 2);
    FVar46 = local_7f0;
    FVar49 = (FName)local_7d0.AllocatorInstance;
LAB_14d9e11e4:
    uVar55 = 0;
    local_768 = FVar49;
    if (local_7d0.ArrayNum != (int)uVar56) {
      local_877 = 0;
      `TCheckedPointerIterator<unsigned_short,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_877);
    }
    if (FVar49 != FVar46) {
      uVar9 = *(ushort *)FVar49;
      if (((int)local_7f8 <= (int)(uint)uVar9) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pFVar13 = *(FBodyInstance **)(local_800.Data + (ulonglong)uVar9 * 8);
      if (pFVar13 != (FBodyInstance *)0x0) {
        uVar26 = pFVar13->InstanceBodyIndex;
        pUVar10 = this->PhysicsAssetToUse;
        uVar43 = 0;
        if ((int)uVar26 < (pUVar10->SkeletalBodySetups).ArrayNum) {
          uVar43 = ~uVar26 >> 0x1f;
        }
        if ((uVar43 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        lVar44 = *(longlong *)
                  ((pUVar10->SkeletalBodySetups).AllocatorInstance.Data + (longlong)(int)uVar26 * 8)
        ;
        pFVar35 = this->Simulation;
        cVar7 = *(char *)(lVar44 + 0x30);
        local_876 = cVar7 == '\x02';
        pTVar37 = FBodyInstance::GetUnrealWorldTransform(pFVar13,&local_578,true,false);
        pFVar38 = ImmediatePhysics::MakeActorSetup(&local_4b8,DynamicActor,pFVar13,pTVar37);
        local_870 = ImmediatePhysics_Chaos::FSimulation::CreateActor(pFVar35,pFVar38);
        ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_4b8);
        FVar46 = local_7f0;
        if (local_870 != (FActorHandle *)0x0) {
          pTVar37 = FBodyInstance::GetUnrealWorldTransform(pFVar13,&local_518,true,false);
          ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform(local_870,pTVar37);
          dVar58 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(local_870);
          if ((float)dVar58 <= 0.0) {
            fVar57 = 0.0;
          }
          else {
            fVar57 = fVar16 / (float)dVar58;
          }
          this->TotalMass = fVar57 + this->TotalMass;
          if (cVar7 != '\x02') {
            ImmediatePhysics_Chaos::FActorHandle::SetEnabled(local_870,true);
            ImmediatePhysics_Chaos::FSimulation::SetIsKinematic(this->Simulation,local_870,true);
          }
          local_870->Name = *(FName *)(lVar44 + 0x28);
          pFVar11 = (pTVar4->AllocatorInstance).Data;
          local_7e0 = local_870;
          if (((pFVar11 <= (FScriptContainerElement *)&local_7e0) &&
              ((FScriptContainerElement *)&local_7e0 <
               pFVar11 + (longlong)(this->Bodies).ArrayMax * 8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar26 = (this->Bodies).ArrayNum;
          if (uVar26 == (this->Bodies).ArrayMax) {
            uVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,&(this->Bodies).ArrayMax);
          }
          pFVar11 = (pTVar4->AllocatorInstance).Data;
          (this->Bodies).ArrayNum = uVar26 + 1;
          *(FActorHandle **)(pFVar11 + (longlong)(int)uVar26 * 8) = local_7e0;
          local_7e8[0] = uVar26;
          if (local_7e0 != (FActorHandle *)0x0) {
            local_6e0 = local_7e0;
            local_6d8 = local_7e8;
            TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                      ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&this->BodyNameToIndexMap,
                       (TPairInitializer<FName_const_&,int_const_&> *)local_730,(bool *)&local_6e0);
          }
          pFVar21 = local_718;
          uVar26 = local_7e8[0];
          if (((local_718->MeshToSkeletonTable).ArrayNum <= (int)(uint)uVar9) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar24 = *(int *)((pFVar21->MeshToSkeletonTable).AllocatorInstance.Data +
                           (ulonglong)uVar9 * 4);
          if (iVar24 < 0) {
            bVar22 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4793787774169777233>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                                ,0x451,"SkeletonBoneIndex >= 0");
            if (bVar22) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          else {
            if (((this->SkeletonBoneIndexToBodyIndex).ArrayNum <= iVar24) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            *(uint *)((this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                     (longlong)iVar24 * 4) = uVar26;
          }
          uVar43 = 0;
          if ((int)uVar26 < (this->BodyAnimData).ArrayNum) {
            uVar43 = ~uVar26 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar47 = (this->BodyAnimData).AllocatorInstance.Data;
          pFVar11 = pFVar47 + (longlong)(int)uVar26 * 0x38 + 0x30;
          *pFVar11 = (FScriptContainerElement)((byte)*pFVar11 & 0xfe);
          pFVar47 = pFVar47 + (longlong)(int)uVar26 * 0x38 + 0x30;
          *pFVar47 = (FScriptContainerElement)((byte)*pFVar47 | local_876);
          local_6d0 = lVar44 + 0x28;
          local_6c8 = &local_870;
          TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FActorHandle_*_const_&>_>
                    (&local_618,
                     (TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FActorHandle_*_const_&>
                      *)(local_730 + 4),(bool *)&local_6d0);
          pFVar51 = local_870;
          uVar26 = pFVar13->InstanceBodyIndex;
          uVar43 = 0;
          if ((int)uVar26 < local_850[0]) {
            uVar43 = ~uVar26 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          *(FActorHandle **)(local_858.Data + (longlong)(int)uVar26 * 8) = pFVar51;
          if (*(char *)(lVar44 + 0x32) == '\x01') {
            if (((local_810.AllocatorInstance.Data <= (FScriptContainerElement *)&local_870) &&
                ((FScriptContainerElement *)&local_870 <
                 local_810.AllocatorInstance.Data + (longlong)local_810.ArrayMax * 8)) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            iVar24 = local_810.ArrayNum;
            if (local_810.ArrayNum == local_810.ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_810.AllocatorInstance,&local_810.ArrayMax);
            }
            local_810.ArrayNum = iVar24 + 1;
            *(FActorHandle **)(local_810.AllocatorInstance.Data + (longlong)iVar24 * 8) = local_870;
          }
          FVar49 = (FName)((longlong)local_768 + 2);
          uVar56 = (ulonglong)local_7ac;
          FVar46 = local_7f0;
          goto LAB_14d9e11e4;
        }
      }
      uVar56 = (ulonglong)local_7ac;
      FVar49 = (FName)((longlong)local_768 + 2);
      goto LAB_14d9e11e4;
    }
    local_7c0.Data = (FScriptContainerElement *)0x0;
    local_7b8[0] = 0;
    local_7b8[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_7a8,&local_7c0,local_7b8,local_7b8 + 1);
    lVar44 = (longlong)local_7a4;
    uVar56 = uVar55;
    uVar50 = uVar55;
    if (0 < lVar44) {
      do {
        uVar43 = (uint)uVar56;
        uVar26 = 0;
        if ((int)uVar43 < local_7d0.ArrayNum) {
          uVar26 = ~uVar43 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        uVar9 = *(ushort *)((longlong)local_7d0.AllocatorInstance.Data + uVar50 * 2);
        if ((local_7b8[0] <= (int)(uint)uVar9) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        uVar50 = uVar50 + 1;
        *(uint *)(local_7c0.Data + (ulonglong)uVar9 * 4) = uVar43;
        uVar56 = (ulonglong)(uVar43 + 1);
      } while ((longlong)uVar50 < lVar44);
    }
    local_6c0 = &local_7c0;
    local_6b8 = local_7d8;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,int,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,_FAnimNode_RigidBodyWithControl::InitPhysics_::__l13::<lambda_1>_>_>
              ((FConstraintInstance **)local_840.AllocatorInstance.Data,local_840.ArrayNum,
               local_873[0],(<lambda_1> *)&local_6c0);
    uVar26 = (this->Bodies).ArrayNum;
    pTVar5 = &this->Joints;
    iVar24 = (this->Joints).ArrayNum;
    if (iVar24 < (int)uVar26) {
      iVar25 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar26 - iVar24,&pTVar5->AllocatorInstance,&(this->Joints).ArrayNum,
                          &(this->Joints).ArrayMax);
      memset((pTVar5->AllocatorInstance).Data + (longlong)iVar25 * 8,0,
             (longlong)(int)(uVar26 - iVar24) << 3);
    }
    else {
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      if ((int)uVar26 < iVar24) {
        iVar24 = iVar24 - uVar26;
        if (iVar24 < 0) {
          bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar22) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
        }
        else if (iVar24 == 0) goto LAB_14d9e1928;
        pFVar11 = (pTVar5->AllocatorInstance).Data + (longlong)(int)uVar26 * 8;
        iVar25 = ((this->Joints).ArrayNum - iVar24) - uVar26;
        if (iVar25 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)iVar24 * 8,(longlong)iVar25 << 3);
        }
        iVar24 = (this->Joints).ArrayNum - iVar24;
        (this->Joints).ArrayNum = iVar24;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar5->AllocatorInstance,iVar24,&(this->Joints).ArrayMax);
      }
    }
LAB_14d9e1928:
    local_868.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.ArrayNum = 0;
    local_868.ArrayMax = 0;
    iVar24 = local_840.ArrayNum;
    if (0 < (int)(local_618.Elements._8_4_ - local_618.Elements._52_4_)) {
      if (0 < local_840.ArrayNum) {
        local_7d8 = 0;
        do {
          lVar44 = local_7d8;
          uVar43 = (uint)uVar55;
          uVar26 = 0;
          if ((int)uVar43 < local_840.ArrayNum) {
            uVar26 = ~uVar43 >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar14 = *(FConstraintInstance **)(local_840.AllocatorInstance.Data + lVar44);
          pTVar39 = TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
                    ::Find(&local_618,pFVar14->ConstraintBone1);
          if (pTVar39 == (TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *)0x0) {
            pFVar51 = (FActorHandle *)0x0;
          }
          else {
            pFVar51 = *(FActorHandle **)&pTVar39->field_0x8;
          }
          pTVar39 = TSet<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FActorHandle_*,0>,FDefaultSetAllocator>
                    ::Find(&local_618,pFVar14->ConstraintBone2);
          if (pTVar39 == (TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*> *)0x0) {
            this_02 = (FActorHandle *)0x0;
          }
          else {
            this_02 = *(FActorHandle **)&pTVar39->field_0x8;
          }
          if (((pFVar51 != (FActorHandle *)0x0) && (this_02 != (FActorHandle *)0x0)) &&
             ((this->bMakeKinematicConstraints != '\0' ||
              ((bVar22 = ImmediatePhysics_Chaos::FActorHandle::IsSimulated(pFVar51), bVar22 ||
               (bVar22 = ImmediatePhysics_Chaos::FActorHandle::IsSimulated(this_02), bVar22)))))) {
            pFVar35 = this->Simulation;
            pFVar40 = ImmediatePhysics::MakeJointSetup(&local_398,pFVar14,pFVar51,this_02);
            local_760 = ImmediatePhysics_Chaos::FSimulation::CreateJoint(pFVar35,pFVar40);
            local_6b0 = &pFVar14->ConstraintBone1;
            local_6a8 = &local_760;
            TSet<TTuple<FName,ImmediatePhysics_Chaos::FJointHandle_*>,TDefaultMapHashableKeyFuncs<FName,ImmediatePhysics_Chaos::FJointHandle_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FName_const_&,ImmediatePhysics_Chaos::FJointHandle_*_const_&>_>
                      (&local_5c8,&local_728,(bool *)&local_6b0);
            if (this->bForceDisableCollisionBetweenConstraintBodies != '\0') {
              iVar24 = UPhysicsAsset::FindBodyIndex
                                 (this->PhysicsAssetToUse,pFVar14->ConstraintBone1);
              iVar25 = UPhysicsAsset::FindBodyIndex
                                 (this->PhysicsAssetToUse,pFVar14->ConstraintBone2);
              if ((iVar24 != -1) && (iVar25 != -1)) {
                UPhysicsAsset::DisableCollision(this->PhysicsAssetToUse,iVar24,iVar25);
              }
            }
            pFVar20 = local_760;
            pFVar11 = (this->Bodies).AllocatorInstance.Data;
            for (pFVar47 = pFVar11; pFVar47 != pFVar11 + (longlong)(this->Bodies).ArrayNum * 8;
                pFVar47 = pFVar47 + 8) {
              if (*(FActorHandle **)pFVar47 == pFVar51) {
                uVar26 = (uint)((longlong)pFVar47 - (longlong)pFVar11 >> 3);
                if (uVar26 != 0xffffffff) {
                  uVar27 = 0;
                  if ((int)uVar26 < (this->Joints).ArrayNum) {
                    uVar27 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  *(FJointHandle **)
                   ((this->Joints).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) = pFVar20;
                  lVar44 = local_7d8;
                }
                break;
              }
            }
            if ((pFVar14->ProfileInstance).bDisableCollision != 0) {
              local_7a0 = pFVar51;
              pFStack_798 = this_02;
              if (((local_868.AllocatorInstance.Data <= (FScriptContainerElement *)&local_7a0) &&
                  ((FScriptContainerElement *)&local_7a0 <
                   local_868.AllocatorInstance.Data + (longlong)local_868.ArrayMax * 0x10)) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar22)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar24 = local_868.ArrayNum;
              if (local_868.ArrayNum == local_868.ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_868.AllocatorInstance,&local_868.ArrayMax);
              }
              local_868.ArrayNum = iVar24 + 1;
              *(FActorHandle **)(local_868.AllocatorInstance.Data + (longlong)iVar24 * 0x10) =
                   local_7a0;
              *(FActorHandle **)(local_868.AllocatorInstance.Data + (longlong)iVar24 * 0x10 + 8) =
                   pFStack_798;
            }
          }
          local_7d8 = lVar44 + 8;
          uVar55 = (ulonglong)(uVar43 + 1);
          iVar24 = local_840.ArrayNum;
        } while ((int)(uVar43 + 1) < local_840.ArrayNum);
      }
      this->ResetSimulatedTeleportType = ResetPhysics;
    }
    if ((this->bHaveSetupControls == '\0') && (this->bEnableControls != false)) {
      pUVar41 = UAnimInstance::GetSkelMeshComponentChecked((UAnimInstance *)local_728.Value);
      SetupControls(this,pUVar41);
      iVar24 = local_840.ArrayNum;
    }
    pFVar11 = local_840.AllocatorInstance.Data + (longlong)iVar24 * 8;
    FVar45.Data = local_840.AllocatorInstance.Data;
    iVar25 = iVar24;
    while( true ) {
      if (iVar25 != iVar24) {
        local_875 = 0;
        `TCheckedPointerIterator<FConstraintInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_875);
      }
      if (FVar45.Data == pFVar11) break;
      pFVar14 = *(FConstraintInstance **)FVar45.Data;
      FConstraintInstance::TermConstraint(pFVar14);
      if (pFVar14 != (FConstraintInstance *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_);
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar14->_padding_);
        ::operator_delete(pFVar14,0x2a0);
      }
      FVar45.Data = FVar45.Data + 8;
      iVar25 = local_840.ArrayNum;
    }
    iVar24 = local_820.ArrayNum;
    uVar56 = (ulonglong)local_820.ArrayNum;
    pFVar11 = local_820.AllocatorInstance.Data + uVar56 * 8;
    FVar45.Data = local_820.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar56 != iVar24) {
        local_874 = 0;
        `TCheckedPointerIterator<FBodyInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_874);
      }
      if (FVar45.Data == pFVar11) break;
      pFVar13 = *(FBodyInstance **)FVar45.Data;
      bVar22 = FBodyInstance::IsValidBodyInstance(pFVar13);
      if (bVar22) {
        FBodyInstance::TermBody(pFVar13,true);
      }
      if (pFVar13 != (FBodyInstance *)0x0) {
        FBodyInstance::~FBodyInstance(pFVar13);
        ::operator_delete(pFVar13,400);
      }
      uVar56 = local_820._8_8_ & 0xffffffff;
      FVar45.Data = FVar45.Data + 8;
    }
    bVar22 = local_840.ArrayMax != 0;
    uVar26 = 0;
    local_840._8_8_ = (ulonglong)(uint)local_840.ArrayMax << 0x20;
    if (bVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_840.AllocatorInstance,0,&local_840.ArrayMax);
    }
    bVar22 = local_820.ArrayMax != 0;
    local_820._8_8_ = (ulonglong)(uint)local_820.ArrayMax << 0x20;
    if (bVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_820.AllocatorInstance,0,&local_820.ArrayMax);
    }
    bVar22 = local_7f8._4_4_ != 0;
    local_7f8 = (ulonglong)local_7f8._4_4_ << 0x20;
    if (bVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_800,0,(int *)((longlong)&local_7f8 + 4));
    }
    pUVar10 = this->PhysicsAssetToUse;
    local_758 = &pUVar10->CollisionDisableTable;
    uVar27 = 0;
    uVar43 = *(uint *)&(pUVar10->CollisionDisableTable).field_0x28;
    local_700 = &(pUVar10->CollisionDisableTable).field_0x10;
    TStack_750.CurrentBitIndex = uVar27;
    local_6f0 = uVar27;
    if (uVar43 != 0) {
      puVar54 = *(uint **)&(pUVar10->CollisionDisableTable).field_0x20;
      if (puVar54 == (uint *)0x0) {
        puVar54 = (uint *)local_700;
      }
      uVar28 = *puVar54;
      uVar26 = 0;
      local_6f0 = 0;
      while (uVar28 == 0) {
        uVar26 = uVar26 + 1;
        local_6f0 = local_6f0 + 0x20;
        TStack_750.CurrentBitIndex = uVar43;
        if ((int)((uVar43 - 1) + ((int)(uVar43 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
        goto LAB_14d9e1e50;
        uVar28 = puVar54[(int)uVar26];
      }
      local_778 = (ulonglong)(-uVar28 & uVar28);
      uVar56 = local_778 * 2 + 1;
      lVar44 = 0x3f;
      if (uVar56 != 0) {
        for (; uVar56 >> lVar44 == 0; lVar44 = lVar44 + -1) {
        }
      }
      local_728.Key._4_4_ = (int)lVar44;
      TStack_750.CurrentBitIndex = (local_6f0 - 1) + local_728.Key._4_4_;
      if ((int)uVar43 < TStack_750.CurrentBitIndex) {
        TStack_750.CurrentBitIndex = uVar43;
      }
    }
LAB_14d9e1e50:
    uStack_704 = (undefined4)local_778;
    uStack_6ec = local_61c;
    uStack_6f8 = 0xffffffff;
    TStack_750._padding_ = CONCAT44(uStack_704,uVar26);
    TStack_750.UnvisitedBitMask = 0xffffffff;
    TStack_750._28_4_ = local_61c;
    TStack_750.BaseBitIndex = local_6f0;
    local_710 = local_758;
    uStack_708 = uVar26;
    uStack_6f4 = TStack_750.CurrentBitIndex;
    TStack_750.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_700;
    if (TStack_750.CurrentBitIndex < *(int *)&(pUVar10->CollisionDisableTable).field_0x28) {
      do {
        uVar26 = *(uint *)(*(longlong *)local_758 + (longlong)TStack_750.CurrentBitIndex * 0x14);
        uVar43 = *(uint *)(*(longlong *)local_758 + 4 + (longlong)TStack_750.CurrentBitIndex * 0x14)
        ;
        if (((int)uVar26 < local_850[0]) && ((int)uVar43 < local_850[0])) {
          uVar28 = uVar27;
          if ((int)uVar26 < local_850[0]) {
            uVar28 = ~uVar26 >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          if (*(longlong *)(local_858.Data + (longlong)(int)uVar26 * 8) != 0) {
            uVar28 = uVar27;
            if ((int)uVar43 < local_850[0]) {
              uVar28 = ~uVar43 >> 0x1f;
            }
            iVar24 = local_850[0];
            if (uVar28 == 0) {
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar22) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              iVar24 = local_850[0];
            }
            if (*(longlong *)(local_858.Data + (longlong)(int)uVar43 * 8) != 0) {
              uVar28 = 0;
              if ((int)uVar26 < iVar24) {
                uVar28 = ~uVar26 >> 0x1f;
              }
              if (uVar28 == 0) {
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar22) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar24 = local_850[0];
              }
              local_790 = *(undefined8 *)(local_858.Data + (longlong)(int)uVar26 * 8);
              uVar26 = 0;
              if ((int)uVar43 < iVar24) {
                uVar26 = ~uVar43 >> 0x1f;
              }
              if (uVar26 == 0) {
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar22) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
              }
              uStack_788 = *(undefined8 *)(local_858.Data + (longlong)(int)uVar43 * 8);
              if ((local_868.AllocatorInstance.Data <= (FScriptContainerElement *)&local_790) &&
                 ((FScriptContainerElement *)&local_790 <
                  local_868.AllocatorInstance.Data + (longlong)local_868.ArrayMax * 0x10)) {
                bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar22) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
              }
              iVar24 = local_868.ArrayNum;
              if (local_868.ArrayNum == local_868.ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&local_868.AllocatorInstance,&local_868.ArrayMax);
              }
              local_868.ArrayNum = iVar24 + 1;
              *(undefined8 *)(local_868.AllocatorInstance.Data + (longlong)iVar24 * 0x10) =
                   local_790;
              *(undefined8 *)(local_868.AllocatorInstance.Data + (longlong)iVar24 * 0x10 + 8) =
                   uStack_788;
            }
          }
        }
        TStack_750.UnvisitedBitMask = TStack_750.UnvisitedBitMask & ~TStack_750._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_750);
      } while (TStack_750.CurrentBitIndex < (TStack_750.Array)->NumBits);
    }
    ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionPairTable(this->Simulation,&local_868);
    ImmediatePhysics_Chaos::FSimulation::SetIgnoreCollisionActors(this->Simulation,&local_810);
    CollectClothColliderObjects(this,local_780);
    pUVar10 = this->PhysicsAssetToUse;
    pFVar35 = this->Simulation;
    iVar24 = (pUVar10->SolverSettings).VelocityIterations;
    iVar25 = (pUVar10->SolverSettings).ProjectionIterations;
    fVar16 = (pUVar10->SolverSettings).CullDistance;
    (this->SolverSettings).PositionIterations = (pUVar10->SolverSettings).PositionIterations;
    (this->SolverSettings).VelocityIterations = iVar24;
    (this->SolverSettings).ProjectionIterations = iVar25;
    (this->SolverSettings).CullDistance = fVar16;
    fVar16 = (pUVar10->SolverSettings).FixedTimeStep;
    (this->SolverSettings).MaxDepenetrationVelocity =
         (pUVar10->SolverSettings).MaxDepenetrationVelocity;
    (this->SolverSettings).FixedTimeStep = fVar16;
    bVar22 = (pUVar10->SolverSettings).bUseManifolds;
    uVar17 = *(undefined2 *)&(pUVar10->SolverSettings).field_0x1a;
    (this->SolverSettings).bUseLinearJointSolver = (pUVar10->SolverSettings).bUseLinearJointSolver;
    (this->SolverSettings).bUseManifolds = bVar22;
    *(undefined2 *)&(this->SolverSettings).field_0x1a = uVar17;
    ImmediatePhysics_Chaos::FSimulation::SetSolverSettings
              (pFVar35,(double)(this->SolverSettings).FixedTimeStep,
               (double)(this->SolverSettings).CullDistance,
               (double)(this->SolverSettings).MaxDepenetrationVelocity,
               (uint)(this->SolverSettings).bUseLinearJointSolver,
               (this->SolverSettings).PositionIterations,(this->SolverSettings).VelocityIterations,
               (this->SolverSettings).ProjectionIterations,
               (uint)(this->SolverSettings).bUseManifolds);
    pUVar10 = this->PhysicsAssetToUse;
    iVar24 = (pUVar10->SolverIterations).JointIterations;
    iVar25 = (pUVar10->SolverIterations).CollisionIterations;
    iVar18 = (pUVar10->SolverIterations).SolverPushOutIterations;
    (this->SolverIterations).SolverIterations = (pUVar10->SolverIterations).SolverIterations;
    (this->SolverIterations).JointIterations = iVar24;
    (this->SolverIterations).CollisionIterations = iVar25;
    (this->SolverIterations).SolverPushOutIterations = iVar18;
    iVar24 = (pUVar10->SolverIterations).CollisionPushOutIterations;
    (this->SolverIterations).JointPushOutIterations =
         (pUVar10->SolverIterations).JointPushOutIterations;
    (this->SolverIterations).CollisionPushOutIterations = iVar24;
    ApplyCurrentConstraintProfile(this);
    if (local_868.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.AllocatorInstance.Data);
    }
    if (local_7c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c0.Data);
    }
    if (local_800.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_800.Data);
    }
    if (local_858.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data);
    }
    if ((FName)local_7d0.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_7d0.AllocatorInstance.Data);
    }
    local_5c8.HashSize = 0;
    if (local_5c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_5c8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FJointHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FJointHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_5c8.Elements);
    if (local_810.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_810.AllocatorInstance.Data);
    }
    local_618.HashSize = 0;
    if (local_618.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_618.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,ImmediatePhysics_Chaos::FActorHandle_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_618.Elements);
    if (local_840.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.AllocatorInstance.Data);
    }
    if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_820.AllocatorInstance.Data);
    }
  }
LAB_14d9e22dc:
  if ((local_828 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_828 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_828 & 4) != 0) {
    FThreadStats::AddMessage(local_830,CycleScopeEnd);
  }
  return;
}

// InitSimulationSpace @ 14d9e23d0

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
FAnimNode_RigidBodyWithControl::InitSimulationSpace
          (FAnimNode_RigidBodyWithControl *this,TTransform<double> *param_1,
          TTransform<double> *param_2)

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

// InitializeBoneReferences @ 14d9e24a0

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
FAnimNode_RigidBodyWithControl::InitializeBoneReferences
          (FAnimNode_RigidBodyWithControl *this,FBoneContainer *param_1)

{
  int *piVar1;
  FRigidBodyPoseData *pFVar2;
  undefined1 *puVar3;
  ushort uVar4;
  ushort uVar5;
  FReferenceSkeleton *pFVar6;
  FName FVar7;
  FSimulation *this_00;
  code *pcVar8;
  ForAnyElementType _Src;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FCompactPoseBoneIndex FVar12;
  int iVar13;
  UObject *pUVar14;
  undefined4 extraout_var;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  uint local_res8 [2];
  uint local_res10;
  int local_res18;
  FCompactPoseBoneIndex local_res20 [2];
  FCompactPoseBoneIndex local_b8;
  uint local_b4;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  longlong local_90;
  FString local_88;
  FName local_78;
  longlong local_70;
  FBoneContainer *local_68;
  FString local_60 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBodyWithControl::InitializeBoneReferences");
  uVar15 = (this->Bodies).ArrayNum;
  iVar10 = (param_1->BoneIndicesArray).ArrayNum;
  pFVar6 = param_1->RefSkeleton;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  DestructItems<UE::PhysicsControl::FOutputBoneData,int>
            ((FOutputBoneData *)(this->OutputBoneData).AllocatorInstance.Data,
             (this->OutputBoneData).ArrayNum);
  uVar18 = 0;
  piVar1 = &(this->OutputBoneData).ArrayMax;
  (this->OutputBoneData).ArrayNum = 0;
  if (*piVar1 != uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar15,&(this->OutputBoneData).AllocatorInstance,0,piVar1);
  }
  local_res10 = 0xffffffff;
  local_res18 = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  if ((this->BaseBoneRef).BoneName == (FName)0x0) {
    if (((pFVar6->FinalRefBoneInfo).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar7 = *(FName *)(pFVar6->FinalRefBoneInfo).AllocatorInstance.Data;
    (this->BaseBoneRef).BoneName = FVar7;
    if (FVar7 == (FName)0x0) goto LAB_14d9e25a1;
  }
  FBoneReference::Initialize(&this->BaseBoneRef,param_1);
LAB_14d9e25a1:
  if (((this->BaseBoneRef).BoneIndex == -1) && (4 < (byte)LogPhysicsControl._0_1_)) {
    pUVar14 = FWeakObjectPtr::Get(&(param_1->AssetSkeletalMesh).WeakPtr);
    if (pUVar14 == (UObject *)0x0) {
      ::FString::FString(&local_88,L"None");
    }
    else {
      local_78.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x18;
      local_78.Number = *(uint *)&pUVar14->field_0x1c;
      ::FName::ToString(&local_78,&local_88);
    }
    ::FName::ToString(&(this->BaseBoneRef).BoneName,local_60);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  local_70 = (longlong)iVar10;
  if (0 < iVar10) {
    local_90 = 0;
    do {
      lVar17 = local_90;
      uVar15 = 0;
      if ((int)uVar18 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      local_b4 = uVar18;
      if ((uVar15 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar4 = (ushort)(this->SkeletonBoneIndexToBodyIndex).ArrayNum;
      uVar5 = *(ushort *)((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data + lVar17 * 4)
      ;
      if (uVar4 <= uVar5) {
LAB_14d9e2a9c:
        local_68 = param_1;
        `FAnimNode_RigidBodyWithControl::InitializeBoneReferences'::__l54::<lambda_1>::operator()
                  (&local_68);
        DestructItems<UE::PhysicsControl::FOutputBoneData,int>
                  ((FOutputBoneData *)(this->OutputBoneData).AllocatorInstance.Data,
                   (this->OutputBoneData).ArrayNum);
        (this->OutputBoneData).ArrayNum = 0;
        if ((this->OutputBoneData).ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&(this->OutputBoneData).AllocatorInstance,0,
                     &(this->OutputBoneData).ArrayMax);
        }
        goto LAB_14d9e2c73;
      }
      if (((this->SkeletonBoneIndexToBodyIndex).ArrayNum <= (int)(uint)uVar5) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_res8[0] =
           *(uint *)((this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                    (ulonglong)uVar5 * 4);
      if (local_res8[0] != 0xffffffff) {
        iVar10 = (this->OutputBoneData).ArrayNum;
        if (iVar10 == (this->OutputBoneData).ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&(this->OutputBoneData).AllocatorInstance,
                              &(this->OutputBoneData).ArrayMax);
        }
        (this->OutputBoneData).ArrayNum = iVar10 + 1;
        pFVar16 = (this->OutputBoneData).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
        DefaultConstructItems<UE::PhysicsControl::FOutputBoneData,int>(pFVar16,1);
        *(uint *)&pFVar16[0x18].field_0x0 = local_res8[0];
        uVar15 = local_res8[0];
        if ((int)local_res8[0] < (int)local_res10) {
          uVar15 = local_res10;
        }
        *(uint *)&pFVar16[0x10].field_0x0 = local_b4;
        lVar17 = (longlong)(int)local_res8[0];
        uVar11 = 0;
        if ((int)local_res8[0] < (this->BodyAnimData).ArrayNum) {
          uVar11 = ~local_res8[0] >> 0x1f;
        }
        local_res10 = uVar15;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((byte)(this->BodyAnimData).AllocatorInstance.Data[lVar17 * 0x38 + 0x30] & 1) != 0) {
          local_res18 = local_res18 + 1;
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                    (&local_b0,(int *)local_res8);
        }
        if (((*(uint **)&pFVar16->field_0x0 <= &local_b4) &&
            (&local_b4 < *(uint **)&pFVar16->field_0x0 + *(int *)(pFVar16 + 0xc))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = *(int *)&pFVar16[8].field_0x0;
        if (iVar10 == *(int *)(pFVar16 + 0xc)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
        }
        *(int *)&pFVar16[8].field_0x0 = iVar10 + 1;
        *(uint *)(*(longlong *)&pFVar16->field_0x0 + (longlong)iVar10 * 4) = local_b4;
        *(undefined4 *)(pFVar16 + 0x1c) = 0xffffffff;
        FBoneContainer::GetParentBoneIndex(param_1,&local_b8);
        *(FCompactPoseBoneIndex *)(pFVar16 + 0x14) = local_b8;
        for (FVar12 = local_b8; local_b8 = FVar12, FVar12 != (FCompactPoseBoneIndex)0xffffffff;
            FVar12 = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var,FVar12)) {
          uVar15 = 0;
          if ((int)FVar12 < (param_1->CompactPoseToSkeletonIndex).ArrayNum) {
            uVar15 = ~(uint)FVar12 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar5 = *(ushort *)
                   ((param_1->CompactPoseToSkeletonIndex).AllocatorInstance.Data +
                   (longlong)(int)FVar12 * 4);
          if (uVar4 <= uVar5) goto LAB_14d9e2a9c;
          if (((this->SkeletonBoneIndexToBodyIndex).ArrayNum <= (int)(uint)uVar5) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = *(int *)((this->SkeletonBoneIndexToBodyIndex).AllocatorInstance.Data +
                           (ulonglong)uVar5 * 4);
          *(int *)(pFVar16 + 0x1c) = iVar10;
          *(FCompactPoseBoneIndex *)(pFVar16 + 0x14) = local_b8;
          if (iVar10 != -1) break;
          if (((*(FCompactPoseBoneIndex **)&pFVar16->field_0x0 <= &local_b8) &&
              (&local_b8 < *(FCompactPoseBoneIndex **)&pFVar16->field_0x0 + *(int *)(pFVar16 + 0xc))
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = *(int *)&pFVar16[8].field_0x0;
          if (iVar10 == *(int *)(pFVar16 + 0xc)) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)pFVar16,(int *)(pFVar16 + 0xc));
          }
          *(int *)&pFVar16[8].field_0x0 = iVar10 + 1;
          *(FCompactPoseBoneIndex *)(*(longlong *)&pFVar16->field_0x0 + (longlong)iVar10 * 4) =
               local_b8;
          FVar12 = FBoneContainer::GetParentBoneIndex(param_1,local_res20);
        }
      }
      local_90 = local_90 + 1;
      uVar18 = uVar18 + 1;
    } while (local_90 < local_70);
  }
  pFVar2 = &this->PoseData;
  iVar10 = (this->PoseData).BoneTMs.ArrayNum;
  uVar15 = local_res10 + 1;
  if (iVar10 < (int)uVar15) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x40,0x10,uVar15 - iVar10,(ForAnyElementType *)pFVar2,
                        &(this->PoseData).BoneTMs.ArrayNum,&(this->PoseData).BoneTMs.ArrayMax);
    DefaultConstructItems<UE::PhysicsControl::FPosQuat,int>
              ((pFVar2->BoneTMs).AllocatorInstance.Data + (longlong)iVar13 * 0x40,uVar15 - iVar10);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar10) {
      uVar18 = iVar10 - uVar15;
      if (((int)(uVar18 | uVar15) < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar18 != 0) {
        pFVar16 = (pFVar2->BoneTMs).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x40;
        iVar10 = ((this->PoseData).BoneTMs.ArrayNum - uVar18) - uVar15;
        if (iVar10 != 0) {
          memmove(pFVar16,pFVar16 + (longlong)(int)uVar18 * 0x40,(longlong)iVar10 << 6);
        }
        iVar10 = (this->PoseData).BoneTMs.ArrayNum - uVar18;
        (this->PoseData).BoneTMs.ArrayNum = iVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,0x10,(ForAnyElementType *)pFVar2,iVar10,&(this->PoseData).BoneTMs.ArrayMax);
      }
    }
  }
  _Src.Data = local_b0.AllocatorInstance.Data;
  this->bCheckForBodyTransformInit = '\x01';
  this_00 = this->Simulation;
  if (this_00 != (FSimulation *)0x0) {
    lVar17 = (longlong)local_b0.ArrayNum;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = local_b0.ArrayNum;
    if (local_b0.ArrayNum == 0) {
      local_a0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_b0.ArrayNum,0,&local_a0.AllocatorInstance,local_b0.ArrayNum,
                 &local_a0.ArrayMax);
      memcpy(local_a0.AllocatorInstance.Data,_Src.Data,lVar17 << 2);
    }
    ImmediatePhysics_Chaos::FSimulation::SetNumActiveBodies(this_00,local_res18,&local_a0);
  }
  FCSPose<FCompactHeapPose>::Empty(&this->CapturedFrozenPose);
  puVar3 = &(this->CapturedFrozenCurves).field_0xc;
  *(undefined4 *)&(this->CapturedFrozenCurves).field_0x8 = 0;
  if (*(int *)puVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&this->CapturedFrozenCurves,0,(int *)puVar3);
  }
  (this->CapturedFrozenCurves).field_0x10 = 0;
LAB_14d9e2c73:
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// InitializeNewBodyTransformsDuringSimulation @ 14d9e2d20

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
FAnimNode_RigidBodyWithControl::InitializeNewBodyTransformsDuringSimulation
          (FAnimNode_RigidBodyWithControl *this,FComponentSpacePoseContext *param_1,
          TTransform<double> *param_2,TTransform<double> *param_3)

{
  FCompactPoseBoneIndex *pFVar1;
  FScriptContainerElement FVar2;
  ESimulationSpace EVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
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
  longlong lVar18;
  undefined1 auStackY_308 [32];
  undefined1 local_2d8;
  undefined1 local_2d7;
  undefined1 local_2d6 [6];
  uint local_2d0;
  FComponentSpacePoseContext *local_2c8;
  FScriptContainerElement *local_2c0;
  FAnimNode_RigidBodyWithControl *local_2b8;
  TTransform<double> *local_2b0;
  TTransform<double> *local_2a8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_2d0 = (this->OutputBoneData).ArrayNum;
  uVar12 = (ulonglong)(int)local_2d0;
  pFVar16 = (this->OutputBoneData).AllocatorInstance.Data;
  local_2c0 = pFVar16 + uVar12 * 0x20;
  pFVar14 = local_2c0;
  local_2c8 = param_1;
  local_2b8 = this;
  local_2b0 = param_3;
  local_2a8 = param_2;
LAB_14d9e2d90:
  do {
    if ((this->OutputBoneData).ArrayNum != (int)uVar12) {
      local_2d8 = 0;
      `TCheckedPointerIterator<UE::PhysicsControl::FOutputBoneData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_2d8);
    }
    if (pFVar16 == pFVar14) {
      return;
    }
    uVar4 = *(uint *)(pFVar16 + 0x18);
    lVar18 = (longlong)(int)uVar4;
    uVar17 = ~uVar4 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar4 < (this->BodyAnimData).ArrayNum) {
      uVar10 = uVar17;
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
    pFVar6 = (this->BodyAnimData).AllocatorInstance.Data;
    FVar2 = pFVar6[lVar18 * 0x38 + 0x30];
    if (((byte)FVar2 & 2) == 0) {
      pFVar6[lVar18 * 0x38 + 0x30] = (FScriptContainerElement)((byte)FVar2 | 2);
      uVar10 = *(uint *)(pFVar16 + 0x1c);
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
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (((byte)(this->BodyAnimData).AllocatorInstance.Data[(longlong)(int)uVar10 * 0x38 + 0x30]
            & 2) == 0) {
          bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4793787774169776436>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                             ,0x134,
                             "BodyAnimData[OutputData.ParentBodyIndex].bBodyTransformInitialized");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        pFVar8 = local_2c8;
        pFVar15 = *(FCompactPoseBoneIndex **)pFVar16;
        iVar5 = *(int *)(pFVar16 + 8);
        local_238.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_238.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        pFVar1 = pFVar15 + iVar5;
        local_238.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_238.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_238.Scale3D.XY.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
        local_238.Scale3D.XY.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
        local_238.Scale3D.XY.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
        local_238.Scale3D.XY.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
        local_238.Scale3D.ZW.m128d_f64[0]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_238.Scale3D.ZW.m128d_f64[0]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_238.Scale3D.ZW.m128d_f64[1]._0_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_238.Scale3D.ZW.m128d_f64[1]._4_4_ =
             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
        while( true ) {
          if (*(int *)(pFVar16 + 8) != iVar5) {
            local_2d7 = 0;
            `TCheckedPointerIterator<FCompactPoseBoneIndex_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_2d7);
          }
          this = local_2b8;
          if (pFVar15 == pFVar1) break;
          FCSPose<FCompactPose>::GetLocalSpaceTransform(&pFVar8->Pose,&local_118,*pFVar15);
          local_1d8.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1d8.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_1d8.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1d8.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_1d8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1d8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1d8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1d8.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_1d8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1d8.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_1d8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1d8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_1d8,&local_238,&local_118);
          pFVar15 = pFVar15 + 1;
          local_238.Rotation.XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
          local_238.Rotation.XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
          local_238.Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
          local_238.Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
          local_238.Translation.XY.m128d_f64[0] = local_1d8.Translation.XY.m128d_f64[0];
          local_238.Translation.XY.m128d_f64[1] = local_1d8.Translation.XY.m128d_f64[1];
          local_238.Translation.ZW.m128d_f64[0] = local_1d8.Translation.ZW.m128d_f64[0];
          local_238.Translation.ZW.m128d_f64[1] = local_1d8.Translation.ZW.m128d_f64[1];
          local_238.Scale3D.XY.m128d_f64[0]._0_4_ = local_1d8.Scale3D.XY.m128d_f64[0]._0_4_;
          local_238.Scale3D.XY.m128d_f64[0]._4_4_ = local_1d8.Scale3D.XY.m128d_f64[0]._4_4_;
          local_238.Scale3D.XY.m128d_f64[1]._0_4_ = local_1d8.Scale3D.XY.m128d_f64[1]._0_4_;
          local_238.Scale3D.XY.m128d_f64[1]._4_4_ = local_1d8.Scale3D.XY.m128d_f64[1]._4_4_;
          local_238.Scale3D.ZW.m128d_f64[0]._0_4_ = local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_;
          local_238.Scale3D.ZW.m128d_f64[0]._4_4_ = local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_;
          local_238.Scale3D.ZW.m128d_f64[1]._0_4_ = local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_;
          local_238.Scale3D.ZW.m128d_f64[1]._4_4_ = local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_;
        }
        uVar10 = *(uint *)(pFVar16 + 0x1c);
        uVar11 = 0;
        if ((int)uVar10 < (local_2b8->Bodies).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if (uVar11 == 0) {
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
        pTVar13 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                            (*(FActorHandle **)
                              ((this->Bodies).AllocatorInstance.Data + (longlong)(int)uVar10 * 8),
                             &local_b8);
        local_178.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_178.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_178.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_178.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_178.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_178.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_178.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_178.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_178.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_178.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_178.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_178.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_178,&local_238,pTVar13);
        uVar10 = 0;
        if ((int)uVar4 < (this->Bodies).ArrayNum) {
          uVar10 = uVar17;
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
        ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                  (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar18 * 8),&local_178
                  );
        uVar12 = (ulonglong)local_2d0;
        pFVar16 = pFVar16 + 0x20;
        pFVar14 = local_2c0;
        param_1 = local_2c8;
        goto LAB_14d9e2d90;
      }
      pTVar13 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                          (&param_1->Pose,*(FCompactPoseBoneIndex *)(pFVar16 + 0x10));
      EVar3 = this->SimulationSpace;
      if (EVar3 == ComponentSpace) {
        local_298.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
        local_298.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
        local_298.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
        local_298.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
        local_298.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
        local_298.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
        local_298.Scale3D.ZW.m128d_f64[0]._4_4_ =
             *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
        local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
             *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
        local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
             *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
LAB_14d9e321c:
      }
      else if (EVar3 == WorldSpace) {
        local_298.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_298.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_298.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_298.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_298.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_298.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_298.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_298.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_298.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_298.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_298.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_298.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_298.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_298.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_298.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_298.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply(&local_298,pTVar13,local_2a8);
      }
      else {
        if (EVar3 != BaseBoneSpace) {
          local_2d6[0] = 0;
          `ConvertCSTransformToSimSpace'::__l4::<lambda_1>::operator()(local_2d6);
          local_298.Rotation.XY.m128d_f64 = *&(pTVar13->Rotation).XY.m128d_f64;
          local_298.Rotation.ZW.m128d_f64 = *&(pTVar13->Rotation).ZW.m128d_f64;
          local_298.Translation.XY.m128d_f64 = *&(pTVar13->Translation).XY.m128d_f64;
          local_298.Translation.ZW.m128d_f64 = *&(pTVar13->Translation).ZW.m128d_f64;
          local_298.Scale3D.XY.m128d_f64 = *&(pTVar13->Scale3D).XY.m128d_f64;
          local_298.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar13->Scale3D).ZW.m128d_f64;
          local_298.Scale3D.ZW.m128d_f64[0]._4_4_ =
               *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 4);
          local_298.Scale3D.ZW.m128d_f64[1]._0_4_ =
               *(undefined4 *)((pTVar13->Scale3D).ZW.m128d_f64 + 1);
          local_298.Scale3D.ZW.m128d_f64[1]._4_4_ =
               *(undefined4 *)((longlong)(pTVar13->Scale3D).ZW.m128d_f64 + 0xc);
          goto LAB_14d9e321c;
        }
        UE::Math::TTransform<double>::GetRelativeTransform(pTVar13,&local_298,local_2b0);
      }
      uVar10 = 0;
      if ((int)uVar4 < (this->Bodies).ArrayNum) {
        uVar10 = uVar17;
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
      ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform
                (*(FActorHandle **)((this->Bodies).AllocatorInstance.Data + lVar18 * 8),&local_298);
      pFVar14 = local_2c0;
    }
    uVar12 = (ulonglong)local_2d0;
    pFVar16 = pFVar16 + 0x20;
  } while( true );
}

// Initialize_AnyThread @ 14d9e32c0

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
FAnimNode_RigidBodyWithControl::Initialize_AnyThread
          (FAnimNode_RigidBodyWithControl *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_SkeletalControlBase::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->_padding_,param_1);
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 3) = 0;
  FStatsHierarchical::EndMeasurement();
  return;
}

// InvokeControlProfile @ 14d9e3b30

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
FAnimNode_RigidBodyWithControl::InvokeControlProfile
          (FAnimNode_RigidBodyWithControl *this,FName param_1)

{
  this->CurrentControlProfile = param_1;
  ApplyCurrentControlProfile(this);
  return;
}

// IsValidToEvaluate @ 14d9e3d80

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
FAnimNode_RigidBodyWithControl::IsValidToEvaluate
          (FAnimNode_RigidBodyWithControl *this,USkeleton *param_1,FBoneContainer *param_2)

{
  bool bVar1;
  
  bVar1 = FBoneReference::IsValidToEvaluate(&this->BaseBoneRef,param_2);
  return bVar1;
}

// LogControlsModifiersAndSets @ 14d9e3da0

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
FAnimNode_RigidBodyWithControl::LogControlsModifiersAndSets(FAnimNode_RigidBodyWithControl *this)

{
  undefined1 *puVar1;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar2;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *pTVar3;
  FPhysicsControlNameRecords *pFVar4;
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  code *pcVar9;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *pTVar10;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *pTVar11;
  FPhysicsControlNameRecords *pFVar12;
  bool bVar13;
  TStatId TVar14;
  FName *pFVar15;
  longlong lVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FName FVar21;
  uint uVar22;
  uint uVar23;
  FName FVar24;
  int iVar25;
  undefined1 *puVar26;
  uint *puVar27;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_308;
  undefined1 local_307;
  undefined1 local_306 [6];
  FPhysicsControlNameRecords *local_300;
  int iStack_2f8;
  uint uStack_2f4;
  undefined1 *local_2f0;
  undefined4 uStack_2e8;
  int iStack_2e4;
  int local_2e0;
  undefined4 uStack_2dc;
  int iStack_2d8;
  undefined4 uStack_2d4;
  FCycleCounter local_2d0;
  ulonglong local_2c0;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_2b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2b0;
  undefined8 local_290;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  FName local_250;
  FName local_248;
  FName local_240;
  FName local_238;
  TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  TMap<FName,FRigidBodyModifierRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyModifierRecord,0>_>
  *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  FPhysicsControlNameRecords *local_1d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c8;
  undefined8 uStack_1a8;
  FSourceLocation local_198;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0 [2];
  undefined4 local_a4;
  undefined4 local_84;
  undefined4 local_64;
  
  TVar14 = FThreadSafeStaticStatInner<FStat_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets,1>
           ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets,1>
                        *)&StatPtr_STAT_RigidBodyNodeWithControl_LogControlsModifiersAndSets);
  local_198.Impl._Line = 0x1ef;
  local_198.Impl._Column = 2;
  local_198.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\RigidBodyWithControl.cpp"
  ;
  local_198.Impl._Function =
       "void __cdecl FAnimNode_RigidBodyWithControl::LogControlsModifiersAndSets(void)";
  local_2d0.StatId.ComparisonIndex.Value = 0;
  local_2d0.StatId.Number = 0;
  local_2d0.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_2d0,*(TStatIdData **)&(TVar14.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_198);
  if (5 < (byte)LogPhysicsControl._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  puVar1 = &(this->ControlRecords).field_0x10;
  pTVar2 = &this->ControlRecords;
  local_2c0 = 1;
  local_288._padding_._4_4_ = 1;
  local_288.UnvisitedBitMask = 0xffffffff;
  iVar25 = 0;
  local_288._padding_._0_4_ = 0;
  local_288.CurrentBitIndex = 0;
  local_288.BaseBitIndex = 0;
  local_288.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(this->ControlRecords).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_288);
  }
  uVar23 = *(uint *)&(this->ControlRecords).field_0x28;
  uVar22 = uVar23 & 0xffffffe0;
  TStack_2b0._padding_ = CONCAT44(local_288._padding_._4_4_,(undefined4)local_288._padding_);
  TStack_2b0.CurrentBitIndex = local_288.CurrentBitIndex;
  TStack_2b0.UnvisitedBitMask = local_288.UnvisitedBitMask;
  TStack_2b0._28_4_ = local_288._28_4_;
  TStack_2b0.BaseBitIndex = local_288.BaseBitIndex;
  local_290 = CONCAT44(local_290._4_4_,
                       *(int *)&(this->ControlRecords).field_0x8 -
                       *(int *)&(this->ControlRecords).field_0x34);
  TStack_2b0.Array = local_288.Array;
  iVar18 = (int)uVar23 >> 5;
  TStack_228.Array = local_288.Array;
  uStack_208 = local_290;
  local_2b8 = pTVar2;
  local_230 = pTVar2;
  TStack_228._padding_ = TStack_2b0._padding_;
  TStack_228._16_8_ = TStack_2b0._16_8_;
  TStack_228._24_8_ = TStack_2b0._24_8_;
  if (((int)uVar23 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = *(uint *)&(this->ControlRecords).field_0x28;
  if (uVar23 != uVar8) {
    puVar26 = *(undefined1 **)&(this->ControlRecords).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d9e3f90;
      uVar23 = *(uint *)(puVar26 + lVar16 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_268 = (int)lVar16;
    uVar23 = local_268 + -1 + uVar22;
    if ((int)uVar8 < (int)uVar23) {
      uVar23 = uVar8;
    }
  }
LAB_14d9e3f90:
  while( true ) {
    pTVar10 = local_230;
    if (*(int *)&local_230->field_0x8 - *(int *)&local_230->field_0x34 != (int)uStack_208) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyControlRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_228.CurrentBitIndex == uVar23) &&
        (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2)
       ) break;
    pFVar20 = (FName *)((longlong)TStack_228.CurrentBitIndex * 0x240 + *(longlong *)pTVar10);
    if (5 < (byte)LogPhysicsControl._0_1_) {
      ::FName::ToString(pFVar20,&local_170);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(pFVar20 + 3,local_d0);
        ::FName::ToString(pFVar20 + 2,&local_e0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (local_d0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0[0].Data.AllocatorInstance.Data);
        }
        if (((5 < (byte)LogPhysicsControl._0_1_) &&
            (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl)
            , 5 < (byte)LogPhysicsControl._0_1_)) &&
           (UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl),
           5 < (byte)LogPhysicsControl._0_1_)) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        }
      }
    }
    TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
  }
  if (5 < (byte)LogPhysicsControl._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  puVar1 = &(this->ModifierRecords).field_0x10;
  iVar18 = *(int *)&(this->ModifierRecords).field_0x28;
  pTVar3 = &this->ModifierRecords;
  uStack_2f4 = (uint)local_2c0;
  iStack_2e4 = iVar25;
  local_2e0 = iVar25;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(this->ModifierRecords).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar23 = *puVar27;
    local_2e0 = 0;
    iVar25 = 0;
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar25;
      local_2e0 = local_2e0 + 0x20;
      iVar25 = iVar25 + 1;
      iStack_2e4 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14d9e421d;
      uVar23 = puVar27[lVar16 + 1];
    }
    uStack_2f4 = -uVar23 & uVar23;
    uVar6 = (ulonglong)uStack_2f4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_264 = (int)lVar16;
    iStack_2e4 = local_264 + -1 + local_2e0;
    if (iVar18 < iStack_2e4) {
      iStack_2e4 = iVar18;
    }
  }
LAB_14d9e421d:
  uVar23 = *(uint *)&(this->ModifierRecords).field_0x28;
  uStack_2dc = local_a4;
  iStack_2d8 = *(int *)&(this->ModifierRecords).field_0x8 -
               *(int *)&(this->ModifierRecords).field_0x34;
  uVar22 = uVar23 & 0xffffffe0;
  uStack_2e8 = 0xffffffff;
  TStack_1f8._padding_ = CONCAT44(uStack_2f4,iVar25);
  TStack_1f8.CurrentBitIndex = iStack_2e4;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar23 >> 5;
  TStack_1f8._28_4_ = local_a4;
  TStack_1f8.BaseBitIndex = local_2e0;
  uStack_1d8 = CONCAT44(uStack_2d4,iStack_2d8);
  local_300 = (FPhysicsControlNameRecords *)pTVar3;
  iStack_2f8 = iVar25;
  local_2f0 = puVar1;
  local_200 = pTVar3;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = *(uint *)&(this->ModifierRecords).field_0x28;
  if (uVar23 != uVar8) {
    puVar26 = *(undefined1 **)&(this->ModifierRecords).field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar19 * 4);
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar23 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14d9e4340;
      uVar23 = *(uint *)(puVar26 + lVar16 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_260 = (int)lVar16;
    uVar23 = local_260 + -1 + uVar22;
    if ((int)uVar8 < (int)uVar23) {
      uVar23 = uVar8;
    }
  }
LAB_14d9e4340:
  while( true ) {
    pTVar11 = local_200;
    if (*(int *)&local_200->field_0x8 - *(int *)&local_200->field_0x34 != (int)uStack_1d8) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FRigidBodyModifierRecord>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar23) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar3)
       ) break;
    pFVar20 = (FName *)((longlong)TStack_1f8.CurrentBitIndex * 0x40 + *(longlong *)pTVar11);
    if (5 < (byte)LogPhysicsControl._0_1_) {
      ::FName::ToString(pFVar20,&local_160);
      UE::Logging::Private::BasicLog<6>
                ((FStaticBasicLogRecord *)&PTR_u____s__152c51518,
                 (FLogCategoryBase *)&LogPhysicsControl);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      if (5 < (byte)LogPhysicsControl._0_1_) {
        FVar24 = pFVar20[1];
        pFVar15 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                  ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                          *)&this->BoneToBodyNameMap,FVar24);
        if (pFVar15 != (FName *)0x0) {
          FVar24 = *pFVar15;
        }
        local_250 = FVar24;
        ::FName::ToString(&local_250,&local_140);
        ::FName::ToString(pFVar20 + 1,&local_150);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data.AllocatorInstance.Data);
        }
        if (5 < (byte)LogPhysicsControl._0_1_) {
          cVar7 = (char)pFVar20[2].ComparisonIndex.Value;
          if (cVar7 == '\0') {
            pcVar17 = "Static";
          }
          else if (cVar7 == '\x01') {
            pcVar17 = "Kinematic";
          }
          else if (cVar7 == '\x02') {
            pcVar17 = "Simulated";
          }
          else if (cVar7 == '\x03') {
            pcVar17 = "Default";
          }
          else {
            pcVar17 = "None";
          }
          ::FName::FName(&local_248,pcVar17);
          ::FName::ToString(&local_248,&local_130);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  }
  if (5 < (byte)LogPhysicsControl._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  local_2e0 = 0;
  iStack_2f8 = 0;
  puVar1 = &(this->NameRecords).ControlSets.field_0x10;
  iVar25 = *(int *)&(this->NameRecords).ControlSets.field_0x28;
  pFVar4 = &this->NameRecords;
  uStack_2f4 = (uint)local_2c0;
  iStack_2e4 = 0;
  if (iVar25 != 0) {
    puVar27 = *(uint **)&(this->NameRecords).ControlSets.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar23 = *puVar27;
    while (uVar23 == 0) {
      lVar16 = (longlong)iStack_2f8;
      local_2e0 = local_2e0 + 0x20;
      iStack_2f8 = iStack_2f8 + 1;
      iStack_2e4 = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2f8) goto LAB_14d9e45fd;
      uVar23 = puVar27[lVar16 + 1];
    }
    uStack_2f4 = -uVar23 & uVar23;
    uVar6 = (ulonglong)uStack_2f4 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_25c = (int)lVar16;
    iStack_2e4 = local_2e0 + -1 + local_25c;
    if (iVar25 < iStack_2e4) {
      iStack_2e4 = iVar25;
    }
  }
LAB_14d9e45fd:
  uVar23 = *(uint *)&(this->NameRecords).ControlSets.field_0x28;
  uStack_2dc = local_84;
  uVar22 = uVar23 & 0xffffffe0;
  iStack_2d8 = *(int *)&(this->NameRecords).ControlSets.field_0x8 -
               *(int *)&(this->NameRecords).ControlSets.field_0x34;
  TStack_1c8._padding_ = CONCAT44(uStack_2f4,iStack_2f8);
  uStack_2e8 = 0xffffffff;
  TStack_1c8.CurrentBitIndex = iStack_2e4;
  TStack_1c8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar23 >> 5;
  TStack_1c8._28_4_ = local_84;
  TStack_1c8.BaseBitIndex = local_2e0;
  uStack_1a8 = CONCAT44(uStack_2d4,iStack_2d8);
  local_300 = pFVar4;
  local_2f0 = puVar1;
  local_1d0 = pFVar4;
  TStack_1c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar25 < (int)uVar23)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = *(uint *)&(this->NameRecords).ControlSets.field_0x28;
  if (uVar23 != uVar8) {
    puVar26 = *(undefined1 **)&(this->NameRecords).ControlSets.field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d9e4710;
      uVar23 = *(uint *)(puVar26 + lVar16 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_258 = (int)lVar16;
    uVar23 = (uVar22 - 1) + local_258;
    if ((int)uVar8 < (int)uVar23) {
      uVar23 = uVar8;
    }
  }
LAB_14d9e4710:
  while( true ) {
    pFVar12 = local_1d0;
    if (*(int *)&(local_1d0->ControlSets).field_0x8 - *(int *)&(local_1d0->ControlSets).field_0x34
        != (int)uStack_1a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_1c8.CurrentBitIndex == uVar23) &&
        (TStack_1c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar12 == pFVar4)
       ) break;
    pFVar20 = (FName *)((longlong)TStack_1c8.CurrentBitIndex * 0x20 +
                       *(longlong *)&pFVar12->ControlSets);
    if (5 < (byte)LogPhysicsControl._0_1_) {
      ::FName::ToString(pFVar20,&local_120);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
    }
    FVar21 = pFVar20[1];
    uVar22 = pFVar20[2].ComparisonIndex.Value;
    FVar24 = (FName)((longlong)FVar21 + (longlong)(int)uVar22 * 8);
    while( true ) {
      if (pFVar20[2].ComparisonIndex.Value != uVar22) {
        local_308 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_308);
      }
      if (FVar21 == FVar24) break;
      local_240 = *(FName *)FVar21;
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(&local_240,&local_110);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data.AllocatorInstance.Data);
        }
      }
      FVar21 = (FName)((longlong)FVar21 + 8);
    }
    TStack_1c8.UnvisitedBitMask = TStack_1c8.UnvisitedBitMask & ~TStack_1c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c8);
  }
  if (5 < (byte)LogPhysicsControl._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
  }
  iStack_2f8 = 0;
  local_2e0 = 0;
  puVar1 = &(this->NameRecords).BodyModifierSets.field_0x10;
  iVar25 = *(int *)&(this->NameRecords).BodyModifierSets.field_0x28;
  pTVar5 = &(this->NameRecords).BodyModifierSets;
  iStack_2e4 = 0;
  if (iVar25 != 0) {
    puVar27 = *(uint **)&(this->NameRecords).BodyModifierSets.field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar1;
    }
    uVar23 = *puVar27;
    while (uVar23 == 0) {
      lVar16 = (longlong)iStack_2f8;
      local_2e0 = local_2e0 + 0x20;
      iStack_2f8 = iStack_2f8 + 1;
      iStack_2e4 = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2f8) goto LAB_14d9e48f2;
      uVar23 = puVar27[lVar16 + 1];
    }
    local_2c0 = (ulonglong)(-uVar23 & uVar23);
    uVar6 = local_2c0 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_254 = (int)lVar16;
    iStack_2e4 = local_2e0 + -1 + local_254;
    if (iVar25 < iStack_2e4) {
      iStack_2e4 = iVar25;
    }
  }
LAB_14d9e48f2:
  uVar23 = *(uint *)&(this->NameRecords).BodyModifierSets.field_0x28;
  uStack_2f4 = (uint)local_2c0;
  uVar22 = uVar23 & 0xffffffe0;
  uStack_2dc = local_64;
  iStack_2d8 = *(int *)&(this->NameRecords).BodyModifierSets.field_0x8 -
               *(int *)&(this->NameRecords).BodyModifierSets.field_0x34;
  uStack_2e8 = 0xffffffff;
  TStack_2b0._padding_ = CONCAT44(uStack_2f4,iStack_2f8);
  TStack_2b0.CurrentBitIndex = iStack_2e4;
  TStack_2b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar23 >> 5;
  TStack_2b0._28_4_ = local_64;
  TStack_2b0.BaseBitIndex = local_2e0;
  local_290 = CONCAT44(uStack_2d4,iStack_2d8);
  local_300 = (FPhysicsControlNameRecords *)pTVar5;
  local_2f0 = puVar1;
  local_2b8 = (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
               *)pTVar5;
  TStack_2b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar25 < (int)uVar23)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = *(uint *)&(this->NameRecords).BodyModifierSets.field_0x28;
  if (uVar23 != uVar8) {
    puVar26 = *(undefined1 **)&(this->NameRecords).BodyModifierSets.field_0x20;
    if (puVar26 == (undefined1 *)0x0) {
      puVar26 = puVar1;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      lVar16 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar23 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14d9e4a10;
      uVar23 = *(uint *)(puVar26 + lVar16 * 4 + 4);
    }
    uVar6 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar23 = (uVar22 - 1) + (int)lVar16;
    if ((int)uVar8 < (int)uVar23) {
      uVar23 = uVar8;
    }
  }
LAB_14d9e4a10:
  while( true ) {
    pTVar2 = local_2b8;
    if (*(int *)&local_2b8->field_0x8 - *(int *)&local_2b8->field_0x34 != (int)local_290) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_307);
    }
    if (((TStack_2b0.CurrentBitIndex == uVar23) &&
        (TStack_2b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar2 == (TMap<FName,FRigidBodyControlRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRigidBodyControlRecord,0>_>
                   *)pTVar5)) break;
    pFVar20 = (FName *)((longlong)TStack_2b0.CurrentBitIndex * 0x20 + *(longlong *)pTVar2);
    if (5 < (byte)LogPhysicsControl._0_1_) {
      ::FName::ToString(pFVar20,&local_100);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    FVar21 = pFVar20[1];
    uVar22 = pFVar20[2].ComparisonIndex.Value;
    FVar24 = (FName)((longlong)FVar21 + (longlong)(int)uVar22 * 8);
    while( true ) {
      if (pFVar20[2].ComparisonIndex.Value != uVar22) {
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_306);
      }
      if (FVar21 == FVar24) break;
      local_238 = *(FName *)FVar21;
      if (5 < (byte)LogPhysicsControl._0_1_) {
        ::FName::ToString(&local_238,&local_f0);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
      }
      FVar21 = (FName)((longlong)FVar21 + 8);
    }
    TStack_2b0.UnvisitedBitMask = TStack_2b0.UnvisitedBitMask & ~TStack_2b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2b0);
  }
  if ((local_2d0.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2d0.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2d0.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_2d0.StatId,CycleScopeEnd);
  }
  return;
}

// NeedsDynamicReset @ 14d9e4c00

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
FAnimNode_RigidBodyWithControl::NeedsDynamicReset(FAnimNode_RigidBodyWithControl *this)

{
  return true;
}

// NeedsOnInitializeAnimInstance @ 14d9e4c10

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
FAnimNode_RigidBodyWithControl::NeedsOnInitializeAnimInstance(FAnimNode_RigidBodyWithControl *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14d9e4c60

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
FAnimNode_RigidBodyWithControl::OnInitializeAnimInstance
          (FAnimNode_RigidBodyWithControl *this,FAnimInstanceProxy *param_1,UAnimInstance *param_2)

{
  InitPhysics(this,param_2);
  return;
}

// PreUpdate @ 14d9e4eb0

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
FAnimNode_RigidBodyWithControl::PreUpdate
          (FAnimNode_RigidBodyWithControl *this,UAnimInstance *param_1)

{
  int *piVar1;
  double dVar2;
  UPhysicsAsset *pUVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  bool bVar13;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar14;
  USkeletalMeshComponent *this_01;
  USkeletalMesh *pUVar15;
  FBoneContainer *pFVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PreUpdate> FVar18;
  longlong *plVar19;
  USkeletalMesh *pUVar20;
  UWorld *this_02;
  double *pdVar21;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar22;
  FNameEntryId FVar23;
  FName FVar24;
  float fVar25;
  undefined1 auStackY_1a8 [32];
  FColor_u_0 local_148 [2];
  FName local_140;
  FName local_130;
  uint local_128;
  uint uStack_124;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  double local_108 [3];
  FName local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_98;
  double local_80;
  double local_78;
  double local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
  pUVar3 = (this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  pUVar20 = (USkeletalMesh *)0x0;
  if ((pUVar3 == (UPhysicsAsset *)0x0) || (((uint)pUVar3->_padding_ >> 0x1e & 1) != 0)) {
    pUVar15 = pUVar20;
    if (this->bDefaultToSkeletalMeshPhysicsAsset != false) {
      if (param_1 == (UAnimInstance *)0x0) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<4793787774169777061>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                            ,0x3a5,"InAnimInstance");
        if (bVar13) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        this_01 = UAnimInstance::GetSkelMeshComponentChecked(param_1);
        if (this_01 != (USkeletalMeshComponent *)0x0) {
          pUVar15 = (USkeletalMesh *)
                    USkinnedMeshComponent::GetPhysicsAsset((USkinnedMeshComponent *)this_01);
        }
      }
    }
  }
  else {
    pUVar15 = (USkeletalMesh *)(this->OverridePhysicsAsset).field0_0x0.DebugPtr;
  }
  pUVar14 = pUVar20;
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  }
  if (((USkeletalMesh *)this->PhysicsAssetToUse != pUVar15) ||
     ((pUVar14 != this->SkeletalMeshAtLastPhysicsInit &&
      (bVar13 = ShouldApplyPhysicsAssetConditioning(this), bVar13)))) {
    InitPhysics(this,param_1);
    pcVar4 = *(code **)(this->_padding_ + 0xd0);
    pFVar16 = UAnimInstance::GetRequiredBones(param_1);
    (*pcVar4)(this,pFVar16);
  }
  if (this->bEnabled == 0) {
    return;
  }
  FVar18 = StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate;
  if (StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PreUpdate>)0x0) {
    pFVar17 = ::FName::FName(&local_f0,"STAT_RigidBodyNodeWithControl_PreUpdate");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_PreUpdate>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_PreUpdate,*pFVar17,
                        L"RigidBodyNodeWithControl_PreUpdate","STATGROUP_Anim","STATCAT_Advanced",
                        L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar18;
  bVar13 = false;
  bVar11 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  FVar23 = FVar24.ComparisonIndex.Value;
  uVar22 = FVar24.Number;
  if ((FVar23.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar13 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar23.Value;
        local_130.Number = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x5b0);
        bVar13 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar24;
      local_128 = FVar23.Value;
      uStack_124 = uVar22;
      FThreadStats::AddMessage(FVar24,CycleScopeStart);
      bVar10 = true;
      goto LAB_14d9e50f2;
    }
  }
  bVar10 = false;
  FVar24 = local_140;
LAB_14d9e50f2:
  plVar19 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1);
  if (plVar19 != (longlong *)0x0) {
    pUVar20 = (USkeletalMesh *)(**(code **)(*plVar19 + 0x760))(plVar19);
  }
  this_02 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if (this_02 != (UWorld *)0x0) {
    if (this->bOverrideWorldGravity == '\0') {
      local_108[0] = 0.0;
      local_108[1] = 0.0;
      if (pUVar20 == (USkeletalMesh *)0x0) {
        fVar25 = UWorld::GetGravityZ(this_02);
      }
      else {
        fVar25 = (float)(**(code **)(pUVar20->_padding_ + 0x4f8))(pUVar20);
      }
      pdVar21 = local_108;
      local_108[2] = (double)fVar25;
    }
    else {
      pdVar21 = &local_e8;
      local_e8 = (this->OverrideWorldGravity).field0_0x0._s_0.X;
      dStack_e0 = (this->OverrideWorldGravity).field0_0x0._s_0.Y;
      local_d8 = (this->OverrideWorldGravity).field0_0x0._s_0.Z;
    }
    dVar2 = pdVar21[2];
    dVar7 = pdVar21[1];
    (this->WorldSpaceGravity).field0_0x0._s_0.X = *pdVar21;
    (this->WorldSpaceGravity).field0_0x0._s_0.Y = dVar7;
    (this->WorldSpaceGravity).field0_0x0._s_0.Z = dVar2;
    if (this_00 != (USkeletalMeshComponent *)0x0) {
      this->WorldTimeSeconds =
           (float)(&this_02->TimeSeconds)[*(byte *)((longlong)&this_00->_padding_ + 2) & 1];
      if ((this->Simulation != (FSimulation *)0x0) && (this->bEnableWorldGeometry != 0)) {
        UpdateWorldGeometry(this,this_02,this_00);
        PurgeExpiredWorldObjects(this);
        CollectWorldObjects(this);
      }
      TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_>::operator=
                (&this->PendingRadialForces,&this_00->PendingRadialForces);
      dVar2 = (this->CurrentTransform).Rotation.XY.m128d_f64[1];
      dVar7 = (this->CurrentTransform).Rotation.ZW.m128d_f64[0];
      dVar8 = (this->CurrentTransform).Rotation.ZW.m128d_f64[1];
      (this->PreviousTransform).Rotation.XY.m128d_f64[0] =
           (this->CurrentTransform).Rotation.XY.m128d_f64[0];
      (this->PreviousTransform).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (this->CurrentTransform).Translation.XY.m128d_f64[0];
      dVar9 = (this->CurrentTransform).Translation.XY.m128d_f64[1];
      (this->PreviousTransform).Rotation.ZW.m128d_f64[0] = dVar7;
      (this->PreviousTransform).Rotation.ZW.m128d_f64[1] = dVar8;
      dVar7 = (this->CurrentTransform).Translation.ZW.m128d_f64[0];
      dVar8 = (this->CurrentTransform).Translation.ZW.m128d_f64[1];
      (this->PreviousTransform).Translation.XY.m128d_f64[0] = dVar2;
      (this->PreviousTransform).Translation.XY.m128d_f64[1] = dVar9;
      dVar2 = (this->CurrentTransform).Scale3D.XY.m128d_f64[0];
      dVar9 = (this->CurrentTransform).Scale3D.XY.m128d_f64[1];
      (this->PreviousTransform).Translation.ZW.m128d_f64[0] = dVar7;
      (this->PreviousTransform).Translation.ZW.m128d_f64[1] = dVar8;
      dVar7 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[0];
      dVar8 = (this->CurrentTransform).Scale3D.ZW.m128d_f64[1];
      (this->PreviousTransform).Scale3D.XY.m128d_f64[0] = dVar2;
      (this->PreviousTransform).Scale3D.XY.m128d_f64[1] = dVar9;
      (this->PreviousTransform).Scale3D.ZW.m128d_f64[0] = dVar7;
      (this->PreviousTransform).Scale3D.ZW.m128d_f64[1] = dVar8;
      dVar2 = (double)this_00->_padding_;
      (this->CurrentTransform).Rotation.XY.m128d_f64[0] = (double)this_00->_padding_;
      (this->CurrentTransform).Rotation.XY.m128d_f64[1] = dVar2;
      dVar2 = (double)this_00->_padding_;
      (this->CurrentTransform).Rotation.ZW.m128d_f64[0] = (double)this_00->_padding_;
      (this->CurrentTransform).Rotation.ZW.m128d_f64[1] = dVar2;
      dVar2 = (double)this_00->_padding_;
      (this->CurrentTransform).Translation.XY.m128d_f64[0] = (double)this_00->_padding_;
      (this->CurrentTransform).Translation.XY.m128d_f64[1] = dVar2;
      dVar2 = (double)this_00->_padding_;
      (this->CurrentTransform).Translation.ZW.m128d_f64[0] = (double)this_00->_padding_;
      (this->CurrentTransform).Translation.ZW.m128d_f64[1] = dVar2;
      uVar5 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      lVar12 = this_00->_padding_;
      uVar6 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      *(int *)(this->CurrentTransform).Scale3D.XY.m128d_f64 = (int)this_00->_padding_;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.XY.m128d_f64 + 4) = uVar5;
      *(int *)((this->CurrentTransform).Scale3D.XY.m128d_f64 + 1) = (int)lVar12;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar6;
      uVar5 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      lVar12 = this_00->_padding_;
      uVar6 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
      *(int *)(this->CurrentTransform).Scale3D.ZW.m128d_f64 = (int)this_00->_padding_;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.ZW.m128d_f64 + 4) = uVar5;
      *(int *)((this->CurrentTransform).Scale3D.ZW.m128d_f64 + 1) = (int)lVar12;
      *(undefined4 *)((longlong)(this->CurrentTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar6;
      if ((this_02->PhysicsField).field0_0x0.DebugPtr != (UPhysicsFieldComponent *)0x0) {
        pdVar21 = (double *)(**(code **)(this_00->_padding_ + 0x598))(this_00);
        local_98._s_0.X = *pdVar21 - pdVar21[3];
        local_98._s_0.Y = pdVar21[1] - pdVar21[4];
        local_78 = pdVar21[4] + pdVar21[1];
        local_80 = pdVar21[3] + *pdVar21;
        local_68 = 1;
        local_98._s_0.Z = pdVar21[2] - pdVar21[5];
        local_70 = pdVar21[5] + pdVar21[2];
        UPhysicsFieldComponent::FillTransientCommands
                  ((this_02->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_98._s_0,
                   this->WorldTimeSeconds,&(this->PerSolverField).TransientCommands);
        UPhysicsFieldComponent::FillPersistentCommands
                  ((this_02->PhysicsField).field0_0x0.DebugPtr,false,(TBox<double> *)&local_98._s_0,
                   this->WorldTimeSeconds,&(this->PerSolverField).PersistentCommands);
      }
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar24 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_118.NameAndInfo.Index.Value = local_140.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_118);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  return;
}

// PurgeExpiredWorldObjects @ 14d9e54a0

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
FAnimNode_RigidBodyWithControl::PurgeExpiredWorldObjects(FAnimNode_RigidBodyWithControl *this)

{
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *this_00;
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  code *pcVar4;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
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
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
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
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
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
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14d9e554e;
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
LAB_14d9e554e:
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
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14d9e5660;
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
LAB_14d9e5660:
  while( true ) {
    pTVar5 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar5 == this_00))
    break;
    pFVar10 = (FScriptContainerElement *)
              (*(longlong *)&pTVar5->field_0x0 + (longlong)TStack_70.CurrentBitIndex * 0x20);
    if (pFVar10[0x14] != (FScriptContainerElement)0x0) {
      ImmediatePhysics_Chaos::FSimulation::DestroyActor
                (this->Simulation,*(FActorHandle **)(pFVar10 + 8));
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
    TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
    ::Remove((TSet<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>,FDefaultSetAllocator>
              *)this_00,*(UPrimitiveComponent **)FVar11.Data);
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  return;
}

// RemoveClothColliderObjects @ 14d9e7520

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
FAnimNode_RigidBodyWithControl::RemoveClothColliderObjects(FAnimNode_RigidBodyWithControl *this)

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
      `TCheckedPointerIterator<FAnimNode_RigidBodyWithControl::FClothCollider,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    ImmediatePhysics_Chaos::FSimulation::DestroyActor(this->Simulation,*(FActorHandle **)pFVar3);
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

// ResetDynamics @ 14d9e8770

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
FAnimNode_RigidBodyWithControl::ResetDynamics
          (FAnimNode_RigidBodyWithControl *this,ETeleportType param_1)

{
  ETeleportType EVar1;
  
  EVar1 = this->ResetSimulatedTeleportType;
  if (this->ResetSimulatedTeleportType < param_1) {
    EVar1 = param_1;
  }
  this->ResetSimulatedTeleportType = EVar1;
  return;
}

// RunPhysicsSimulation @ 14d9e8a10

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
FAnimNode_RigidBodyWithControl::RunPhysicsSimulation
          (FAnimNode_RigidBodyWithControl *this,float param_1,TVector<double> *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Simulation> FVar6;
  TStatId TVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res20;
  FStatMessage local_78;
  FName local_68;
  byte local_60;
  FName local_58;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name417,L"Animation/RigidBodyWithControl");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res10,LLMScope_Name417,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name417,true);
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_RigidBodyNodeWithControl_Simulation;
  if (StatPtr_STAT_RigidBodyNodeWithControl_Simulation ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Simulation>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_78,"STAT_RigidBodyNodeWithControl_Simulation");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Simulation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_RigidBodyNodeWithControl_Simulation,*pFVar5,
                       L"RigidBodyNodeWithControl_Simulation","STATGROUP_Anim","STATCAT_Advanced",
                       L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x1a2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      local_58 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_58.ComparisonIndex.Value;
      goto LAB_14d9e8bbd;
    }
  }
  bVar3 = false;
  FVar10 = local_58;
LAB_14d9e8bbd:
  if (__CsvProfilerStat419 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RigidBodyNodeWithControlSimulation",_GCsvCategory_Animation.Index);
    __CsvProfilerStat419 = true;
  }
  uVar8 = _GCsvCategory_Animation.Index;
  FCsvProfiler::BeginStat
            ("RigidBodyNodeWithControlSimulation",_GCsvCategory_Animation.Index,
             "CSV_RigidBodyNodeWithControlSimulation");
  TVar7.StatIdPtr = (TStatIdData *)StatPtr_STAT_RigidBodyNodeWithControl_Simulation;
  if (StatPtr_STAT_RigidBodyNodeWithControl_Simulation ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Simulation>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_res8.s,"STAT_RigidBodyNodeWithControl_Simulation");
    TVar7.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Simulation,
                    *pFVar5,L"RigidBodyNodeWithControl_Simulation","STATGROUP_Anim",
                    "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_68,(UObjectBaseUtility *)this->PhysicsAssetToUse,
             TVar7);
  ImmediatePhysics_Chaos::FSimulation::Simulate
            (this->Simulation,(double)param_1,__real_3fa1111111111111,RBANWithControl_MaxSubSteps,
             param_2,(FPBDJointSolverSettings *)0x0,(FPBDCollisionSolverSettings *)0x0,
             (FCollisionDetectorSettings *)0x0);
  this->bSimulationStarted = '\x01';
  if ((local_60 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_60 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_60 & 4) != 0) {
    FThreadStats::AddMessage(local_68,CycleScopeEnd);
  }
  local_60 = 0;
  FCsvProfiler::EndStat("RigidBodyNodeWithControlSimulation",uVar8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_78.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
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
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// SetOverridePhysicsAsset @ 14d9ed230

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
FAnimNode_RigidBodyWithControl::SetOverridePhysicsAsset
          (FAnimNode_RigidBodyWithControl *this,UPhysicsAsset *param_1)

{
  (this->OverridePhysicsAsset).field0_0x0.DebugPtr = param_1;
  return;
}

// SetupControls @ 14d9ed740

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
FAnimNode_RigidBodyWithControl::SetupControls
          (FAnimNode_RigidBodyWithControl *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  FSimulation *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlSetupControlsTime> FVar6;
  USkeletalMesh *pUVar7;
  FActorSetup *pFVar8;
  FActorHandle *pFVar9;
  FReferenceSkeleton *pFVar10;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar11;
  FStaticBasicLogRecord *pFVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  undefined1 auStackY_248 [32];
  LARGE_INTEGER local_1e8;
  FName local_1e0;
  FStatMessage local_1d0;
  TTransform<double> local_1b8;
  FActorSetup local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  FVar15.Value = 0;
  FVar6 = StatPtr_STAT_RigidBodyWithControlSetupControlsTime;
  if (StatPtr_STAT_RigidBodyWithControlSetupControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlSetupControlsTime>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_1d0,"STAT_RigidBodyWithControlSetupControlsTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyWithControlSetupControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &StatPtr_STAT_RigidBodyWithControlSetupControlsTime,*pFVar5,
                       L"RigidBodyNodeWithControl_SetupControls","STATGROUP_Anim","STATCAT_Advanced"
                       ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_1e0.ComparisonIndex.Value = 0;
  local_1e0.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar11 == 0)) {
LAB_14d9ed891:
    bVar3 = false;
    FVar14 = local_1e0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1e8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1e8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e8.s.LowPart = FVar13.Value;
        local_1e8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_1e8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x1c2);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9ed891;
    local_1e8.s.LowPart = FVar13.Value;
    local_1e8.s.HighPart = uVar11;
    local_1e0 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar3 = true;
    FVar15.Value = local_1e0.ComparisonIndex.Value;
  }
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    if ((byte)LogPhysicsControl._0_1_ < 3) goto LAB_14d9ed9f6;
    pFVar12 = &::LOG_Static;
  }
  else {
    pUVar7 = USkeletalMeshComponent::GetSkeletalMeshAsset(param_1);
    if (pUVar7 != (USkeletalMesh *)0x0) {
      this_00 = this->Simulation;
      local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1b8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1b8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_1b8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1b8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      pFVar8 = ImmediatePhysics::MakeStaticActorSetup(&local_158,(FBodyInstance *)0x0,&local_1b8);
      pFVar9 = ImmediatePhysics_Chaos::FSimulation::CreateActor(this_00,pFVar8);
      this->WorldSpaceControlActorHandle = pFVar9;
      ImmediatePhysics_Chaos::FActorSetup::~FActorSetup(&local_158);
      pFVar9 = this->WorldSpaceControlActorHandle;
      if (pFVar9 == (FActorHandle *)0x0) {
        if (1 < (byte)LogPhysicsControl._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPhysicsControl);
        }
      }
      else {
        pFVar5 = ::FName::FName((FName *)&local_1d0,"WorldSpaceControlHandle");
        pFVar9->Name = *pFVar5;
        ImmediatePhysics_Chaos::FSimulation::SetHasCollision
                  (this->Simulation,this->WorldSpaceControlActorHandle,false);
      }
      pFVar10 = (FReferenceSkeleton *)(**(code **)(pUVar7->_padding_ + 800))(pUVar7);
      InitControlsAndBodyModifiers(this,pFVar10);
      this->bHaveSetupControls = '\x01';
      goto LAB_14d9ed9f6;
    }
    if ((byte)LogPhysicsControl._0_1_ < 3) goto LAB_14d9ed9f6;
    pFVar12 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar12,(FLogCategoryBase *)&LogPhysicsControl);
LAB_14d9ed9f6:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_1d0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_1d0.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_1e8);
      local_1d0.StatData.Pad[4] = '\0';
      local_1d0.StatData.Pad[5] = '\0';
      local_1d0.StatData.Pad[6] = '\0';
      local_1d0.StatData.Pad[7] = '\0';
      local_1d0.StatData.Pad[0] = local_1e8.s.LowPart._0_1_;
      local_1d0.StatData.Pad[1] = local_1e8.s.LowPart._1_1_;
      local_1d0.StatData.Pad[2] = local_1e8.s.LowPart._2_1_;
      local_1d0.StatData.Pad[3] = local_1e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_1d0);
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

// ShouldApplyPhysicsAssetConditioning @ 14d9edb00

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
FAnimNode_RigidBodyWithControl::ShouldApplyPhysicsAssetConditioning
          (FAnimNode_RigidBodyWithControl *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarEnableRigidBodyNodeWithControlMatchingConstraintsToSkeleton.Ref;
  if (this->PhysicsAssetConditioningConstraintPosition == None) {
    return false;
  }
  if (this->PhysicsAssetConditioningConstraintOrientation != None) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = 4;
    }
    if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) < 1) {
      return false;
    }
    return true;
  }
  return false;
}

// TransformConstraintsToMatchSkeletalMesh @ 14d9edcd0

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
FAnimNode_RigidBodyWithControl::TransformConstraintsToMatchSkeletalMesh
          (FAnimNode_RigidBodyWithControl *this,USkeletalMesh *param_1,
          MapConstraintsBehaviorType param_2,MapConstraintsBehaviorType param_3,
          TArray<FConstraintInstance_*,TSizedDefaultAllocator<32>_> *param_4)

{
  USkeletalMesh *pUVar1;
  FConstraintInstance *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ForAnyElementType FVar11;
  FReferenceSkeleton *pFVar12;
  TTransform<double> *this_01;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FString *pFVar16;
  char *pcVar17;
  ulonglong uVar18;
  char *pcVar19;
  TVector<double>_u_0 *pTVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
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
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar44;
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  double dVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar53;
  double dVar54;
  double dVar55;
  undefined1 auStackY_418 [32];
  undefined1 local_3e7 [7];
  FName local_3e0;
  FName local_3d8;
  FString local_3d0;
  double local_3c0;
  double dStack_3b8;
  undefined8 local_3b0;
  FString local_3a8;
  FAnimNode_RigidBodyWithControl *local_398;
  FString local_390;
  TVector<double>_u_0 local_380;
  TVector<double>_u_0 local_368;
  FString local_350;
  FString local_340;
  FString local_330;
  FString local_320;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  if (param_1 != (USkeletalMesh *)0x0) {
    local_c8 = __security_cookie.value ^ (ulonglong)auStackY_418;
    local_3d8.ComparisonIndex.Value = 0;
    if ((((param_2 == AuthoredSkeleton) || (param_3 == AuthoredSkeleton)) &&
        (pUVar1 = (this->PhysicsAssetAuthoredSkeletalMesh).field0_0x0.DebugPtr,
        pUVar1 != (USkeletalMesh *)0x0)) && (pUVar1 != param_1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((param_2 == DefaultTransform) || (param_3 == DefaultTransform)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if ((bVar8) || (bVar22)) {
      pUVar1 = (this->PhysicsAssetAuthoredSkeletalMesh).field0_0x0.DebugPtr;
      bVar22 = pUVar1 == (USkeletalMesh *)0x0;
      local_398 = this;
      if (bVar22) {
        pFVar13 = ::FString::FString(&local_3a8,"UNDEFINED");
      }
      else {
        local_3e0 = (FName)pUVar1->_padding_;
        ::FName::ToString(&local_3e0,&local_3d0);
        pFVar13 = &local_3d0;
      }
      local_390.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
      (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_390.Data.ArrayNum = (pFVar13->Data).ArrayNum;
      local_390.Data.ArrayMax = (pFVar13->Data).ArrayMax;
      (pFVar13->Data).ArrayNum = 0;
      (pFVar13->Data).ArrayMax = 0;
      if ((bVar22) && ((FName)local_3a8.Data.AllocatorInstance.Data != (FName)0x0)) {
        FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
      }
      if ((!bVar22) && (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogPhysicsControl._0_1_) {
        pcVar19 = "AuthoredSkeleton";
        if (param_3 == AuthoredSkeleton) {
          pcVar17 = "AuthoredSkeleton";
        }
        else {
          pcVar17 = "DefaultTransform";
          if (param_3 != DefaultTransform) {
            pcVar17 = "None";
          }
        }
        ::FName::FName((FName *)&local_3a8,pcVar17);
        if ((param_2 != AuthoredSkeleton) &&
           (pcVar19 = "DefaultTransform", param_2 != DefaultTransform)) {
          pcVar19 = "None";
        }
        ::FName::FName(&local_3d8,pcVar19);
        local_3e0 = (FName)param_1->_padding_;
        ::FName::ToString(&local_3e0,&local_3d0);
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString_const_&,FName,FName>
                  ((FLogCategoryBase *)&LogPhysicsControl,&::LOG_Static,&local_3d0,&local_390,
                   &local_3d8,(FName *)&local_3a8);
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
      }
      auVar10 = ___xmm_00000000000000003ff0000000000000;
      auVar9 = ___xmm_3ff00000000000000000000000000000;
      local_3d8.ComparisonIndex.Value = param_4->ArrayNum;
      uVar18 = (ulonglong)(int)local_3d8.ComparisonIndex.Value;
      pFVar21 = (param_4->AllocatorInstance).Data;
      local_3d0.Data.AllocatorInstance.Data = pFVar21 + uVar18 * 8;
      while( true ) {
        FVar11.Data = local_3d0.Data.AllocatorInstance.Data;
        if (param_4->ArrayNum != (int)uVar18) {
          `TCheckedPointerIterator<FConstraintInstance_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_3e7);
        }
        if (pFVar21 == FVar11.Data) break;
        this_00 = *(FConstraintInstance **)pFVar21;
        pFVar12 = (FReferenceSkeleton *)(**(code **)(param_1->_padding_ + 0x318))(param_1);
        local_3e0 = this_00->ConstraintBone1;
        local_3a8.Data.AllocatorInstance.Data =
             *(FScriptContainerElement **)&this_00->ConstraintBone2;
        CalculateRelativeBoneTransform
                  (&local_2a8,local_3e0,(FName)local_3a8.Data.AllocatorInstance.Data,pFVar12);
        dVar5 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        dVar6 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        dVar7 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        dVar45 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        dVar54 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dVar55 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        dVar48 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
        if (bVar8) {
          pFVar12 = (FReferenceSkeleton *)
                    (**(code **)(((this->PhysicsAssetAuthoredSkeletalMesh).field0_0x0.DebugPtr)->
                                 _padding_ + 800))();
          CalculateRelativeBoneTransform
                    (&local_1e8,local_3e0,(FName)local_3a8.Data.AllocatorInstance.Data,pFVar12);
          UE::Math::TTransform<double>::GetRelativeTransform(&local_2a8,&local_248,&local_1e8);
          FConstraintInstance::GetRefFrame(this_00,&local_188,Frame2);
          local_308.Rotation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          local_308.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_308.Rotation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
          local_308.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_308.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_308.Rotation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_308.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_308.Rotation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
          local_308.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_308.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_308.Translation.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
          local_308.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_308.Translation.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
          local_308.Scale3D.ZW.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
          local_308.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_308.Scale3D.ZW.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_308,&local_248,&local_188);
          local_248.Scale3D.XY.m128d_f64[0] = local_308.Scale3D.XY.m128d_f64[0];
          local_248.Scale3D.XY.m128d_f64[1] = local_308.Scale3D.XY.m128d_f64[1];
          local_248.Scale3D.ZW.m128d_f64[0] = local_308.Scale3D.ZW.m128d_f64[0];
          local_248.Scale3D.ZW.m128d_f64[1] = local_308.Scale3D.ZW.m128d_f64[1];
          dVar5 = local_308.Rotation.XY.m128d_f64[0];
          dVar6 = local_308.Rotation.XY.m128d_f64[1];
          dVar7 = local_308.Rotation.ZW.m128d_f64[0];
          dVar45 = local_308.Rotation.ZW.m128d_f64[1];
          dVar54 = local_308.Translation.ZW.m128d_f64[0];
          dVar55 = local_308.Translation.XY.m128d_f64[0];
          dVar48 = local_308.Translation.XY.m128d_f64[1];
        }
        uVar37 = (undefined4)((ulonglong)dVar45 >> 0x20);
        uVar53 = (undefined4)((ulonglong)dVar6 >> 0x20);
        FConstraintInstance::GetRefFrame(this_00,&local_128,Frame2);
        if (param_2 == AuthoredSkeleton) {
          dStack_3b8 = dVar48;
          local_3c0 = dVar55;
          local_3b0 = dVar54;
LAB_14d9ee0c3:
          FConstraintInstance::SetRefPosition(this_00,Frame2,(TVector<double> *)&local_3c0);
        }
        else if (param_2 == DefaultTransform) {
          dStack_3b8 = local_2a8.Translation.XY.m128d_f64[1];
          local_3c0 = local_2a8.Translation.XY.m128d_f64[0];
          local_3b0 = local_2a8.Translation.ZW.m128d_f64[0];
          goto LAB_14d9ee0c3;
        }
        dVar54 = auVar9._0_8_;
        dVar55 = auVar9._8_8_;
        if (param_3 == AuthoredSkeleton) {
          local_368._s_0.Z = 0.0;
          auVar42._8_4_ = SUB84(dVar6,0);
          auVar42._0_8_ = dVar5;
          auVar42._12_4_ = uVar53;
          dVar44 = auVar42._8_8_;
          auVar46._8_4_ = SUB84(dVar6,0);
          auVar46._0_8_ = dVar5;
          auVar46._12_4_ = uVar53;
          auVar43._8_4_ = SUB84(dVar45,0);
          auVar43._0_8_ = dVar7;
          auVar43._12_4_ = uVar37;
          auVar47 = blendpd(auVar46,auVar43,2);
          auVar38._0_8_ = dVar55 * dVar5 - dVar54 * dVar44;
          auVar38._8_8_ = dVar6 * 0.0 - dVar55 * dVar7;
          dVar48 = auVar47._0_8_;
          dVar2 = auVar47._8_8_;
          auVar47 = blendpd(auVar9,ZEXT816(0),2);
          auVar49._8_4_ = SUB84(dVar45,0);
          auVar49._0_8_ = dVar7;
          auVar49._12_4_ = uVar37;
          auVar23._0_8_ = auVar47._0_8_ * dVar7 - dVar48 * 0.0;
          auVar23._8_8_ = auVar47._8_8_ * dVar45 - dVar2 * 0.0;
          dVar52 = auVar49._8_8_;
          auVar47 = blendpd(auVar38,auVar23,2);
          auVar39._0_8_ = auVar47._0_8_ + auVar47._0_8_;
          auVar39._8_8_ = auVar47._8_8_ + auVar47._8_8_;
          dVar3 = auVar38._8_8_ + auVar38._8_8_;
          dVar4 = auVar23._0_8_ + auVar23._0_8_;
          uVar37 = (undefined4)((ulonglong)dVar4 >> 0x20);
          auVar31._8_4_ = SUB84(dVar4,0);
          auVar31._0_8_ = dVar3;
          auVar31._12_4_ = uVar37;
          auVar24._8_4_ = SUB84(dVar4,0);
          auVar24._0_8_ = dVar3;
          auVar24._12_4_ = uVar37;
          auVar47 = blendpd(auVar24,auVar39,2);
          auVar32._0_8_ = auVar31._8_8_ * dVar5 - dVar3 * dVar44;
          auVar32._8_8_ = auVar39._0_8_ * dVar6 - dVar4 * dVar7;
          auVar25._0_8_ = auVar47._0_8_ * dVar7 - auVar39._0_8_ * dVar48;
          auVar25._8_8_ = auVar47._8_8_ * dVar45 - auVar39._8_8_ * dVar2;
          auVar47 = blendpd(auVar32,auVar25,2);
          local_3b0 = auVar39._0_8_ * dVar52 + 0.0 + auVar47._0_8_;
          dVar55 = dVar4 * dVar45 + dVar55 + auVar25._0_8_;
          auVar47 = blendpd(auVar10,ZEXT816(0),2);
          unique0x100005fe = SUB84(dVar55,0);
          local_3c0 = dVar3 * dVar52 + dVar54 + auVar32._8_8_;
          unique0x10000602 = (int)((ulonglong)dVar55 >> 0x20);
          dVar54 = auVar10._8_8_;
          auVar40._0_8_ = dVar54 * dVar5 - auVar10._0_8_ * dVar44;
          auVar40._8_8_ = dVar6 * 0.0 - dVar54 * dVar7;
          auVar26._0_8_ = auVar47._0_8_ * dVar7 - dVar48 * 0.0;
          auVar26._8_8_ = auVar47._8_8_ * dVar45 - dVar2 * 0.0;
          auVar47 = blendpd(auVar40,auVar26,2);
          dVar55 = auVar40._8_8_ + auVar40._8_8_;
          dVar3 = auVar26._0_8_ + auVar26._0_8_;
          uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
          auVar41._0_8_ = auVar47._0_8_ + auVar47._0_8_;
          auVar41._8_8_ = auVar47._8_8_ + auVar47._8_8_;
          auVar33._8_4_ = SUB84(dVar3,0);
          auVar33._0_8_ = dVar55;
          auVar33._12_4_ = uVar37;
          auVar27._8_4_ = SUB84(dVar3,0);
          auVar27._0_8_ = dVar55;
          auVar27._12_4_ = uVar37;
          auVar47 = blendpd(auVar27,auVar41,2);
          auVar34._0_8_ = auVar33._8_8_ * dVar5 - dVar55 * dVar44;
          auVar34._8_8_ = auVar41._0_8_ * dVar6 - dVar3 * dVar7;
          auVar28._0_8_ = auVar47._0_8_ * dVar7 - auVar41._0_8_ * dVar48;
          auVar28._8_8_ = auVar47._8_8_ * dVar45 - auVar41._8_8_ * dVar2;
          pTVar20 = &local_380;
          auVar47 = blendpd(auVar34,auVar28,2);
          dVar5 = dVar3 * dVar45 + dVar54 + auVar28._0_8_;
          local_380._s_0.Z = auVar41._0_8_ * dVar52 + 0.0 + auVar47._0_8_;
          local_380._8_4_ = SUB84(dVar5,0);
          local_380._0_8_ = dVar55 * dVar52 + auVar10._0_8_ + auVar34._8_8_;
          local_380._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
LAB_14d9ee396:
          FConstraintInstance::SetRefOrientation
                    (this_00,Frame2,(TVector<double> *)&pTVar20->_s_0,(TVector<double> *)&local_3c0)
          ;
        }
        else if (param_3 == DefaultTransform) {
          local_380._s_0.Z = 0.0;
          dVar45 = local_2a8.Rotation.ZW.m128d_f64[0];
          dVar48 = local_2a8.Rotation.ZW.m128d_f64[1];
          dVar7 = local_2a8.Rotation.XY.m128d_f64[1];
          auVar50._0_8_ = dVar55 * local_2a8.Rotation.XY.m128d_f64[0] - dVar54 * dVar7;
          auVar50._8_8_ = dVar7 * 0.0 - dVar55 * dVar45;
          auVar47 = blendpd(auVar9,ZEXT816(0),2);
          auVar43 = blendpd((undefined1  [16])local_2a8.Rotation.XY.m128d_f64,
                            (undefined1  [16])local_2a8.Rotation.ZW.m128d_f64,2);
          local_380._0_16_ = auVar10;
          auVar29._0_8_ = auVar47._0_8_ * dVar45 - auVar43._0_8_ * 0.0;
          auVar29._8_8_ = auVar47._8_8_ * dVar48 - auVar43._8_8_ * 0.0;
          auVar47 = blendpd(auVar50,auVar29,2);
          dVar5 = auVar50._8_8_ + auVar50._8_8_;
          dVar6 = auVar29._0_8_ + auVar29._0_8_;
          uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
          auVar51._0_8_ = auVar47._0_8_ + auVar47._0_8_;
          auVar51._8_8_ = auVar47._8_8_ + auVar47._8_8_;
          auVar35._8_4_ = SUB84(dVar6,0);
          auVar35._0_8_ = dVar5;
          auVar35._12_4_ = uVar37;
          auVar47._8_4_ = SUB84(dVar6,0);
          auVar47._0_8_ = dVar5;
          auVar47._12_4_ = uVar37;
          auVar47 = blendpd(auVar47,auVar51,2);
          auVar36._0_8_ = auVar35._8_8_ * local_2a8.Rotation.XY.m128d_f64[0] - dVar5 * dVar7;
          auVar36._8_8_ = auVar51._0_8_ * dVar7 - dVar6 * dVar45;
          auVar30._0_8_ = auVar47._0_8_ * dVar45 - auVar51._0_8_ * auVar43._0_8_;
          auVar30._8_8_ = auVar47._8_8_ * dVar48 - auVar51._8_8_ * auVar43._8_8_;
          auVar47 = blendpd(auVar36,auVar30,2);
          dVar6 = dVar6 * dVar48 + dVar55 + auVar30._0_8_;
          local_3b0 = auVar51._0_8_ * dVar48 + 0.0 + auVar47._0_8_;
          unique0x10000646 = SUB84(dVar6,0);
          local_3c0 = dVar5 * dVar48 + dVar54 + auVar36._8_8_;
          unique0x1000064a = (int)((ulonglong)dVar6 >> 0x20);
          UE::Math::TTransform<double>::TransformVectorNoScale
                    (&local_2a8,(TVector<double> *)&local_368._s_0,
                     (TVector<double> *)&local_380._s_0);
          pTVar20 = &local_368;
          goto LAB_14d9ee396;
        }
        if (4 < (byte)LogPhysicsControl._0_1_) {
          this_01 = FConstraintInstance::GetRefFrame(this_00,&local_248,Frame2);
          pFVar13 = UE::Math::TTransform<double>::ToString(this_01,&local_320);
          pFVar14 = UE::Math::TTransform<double>::ToString(&local_128,&local_330);
          pFVar15 = ::FName::ToString((FName *)&local_3a8,&local_340);
          pFVar16 = ::FName::ToString(&local_3e0,&local_350);
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,FString,FString,FString,FString>
                    ((FLogCategoryBase *)&LogPhysicsControl,&::LOG_Static,pFVar16,pFVar15,pFVar14,
                     pFVar13);
          if (local_350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Data.AllocatorInstance.Data);
          }
          if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_340.Data.AllocatorInstance.Data);
          }
          if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.Data.AllocatorInstance.Data);
          }
          this = local_398;
          if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Data.AllocatorInstance.Data);
            this = local_398;
          }
        }
        pFVar21 = pFVar21 + 8;
        uVar18 = (ulonglong)local_3d8.ComparisonIndex.Value;
      }
      if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_390.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// UpdateBodyIndicesInControlRecord @ 14d9f0550

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
FAnimNode_RigidBodyWithControl::UpdateBodyIndicesInControlRecord
          (FAnimNode_RigidBodyWithControl *this,FRigidBodyControlRecord *param_1)

{
  FName FVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&this->BodyNameToIndexMap,(param_1->Control).ChildBoneName);
  iVar4 = -1;
  if (piVar3 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *piVar3;
  }
  FVar1 = (param_1->Control).ParentBoneName;
  param_1->ChildBodyIndex = iVar2;
  if (FVar1 != (FName)0x0) {
    piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::
             Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   *)&this->BodyNameToIndexMap,FVar1);
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
    }
  }
  param_1->ParentBodyIndex = iVar4;
  return;
}

// UpdateClothColliderObjects @ 14d9f08a0

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
FAnimNode_RigidBodyWithControl::UpdateClothColliderObjects
          (FAnimNode_RigidBodyWithControl *this,TTransform<double> *param_1)

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
      `TCheckedPointerIterator<FAnimNode_RigidBodyWithControl::FClothCollider,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_198);
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
      ImmediatePhysics_Chaos::FActorHandle::SetWorldTransform(*(FActorHandle **)pFVar9,&local_188);
    }
    pFVar9 = pFVar9 + 0x18;
  }
  return;
}

// UpdateComponentPose_AnyThread @ 14d9f0cb0

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
FAnimNode_RigidBodyWithControl::UpdateComponentPose_AnyThread
          (FAnimNode_RigidBodyWithControl *this,FAnimationUpdateContext *param_1)

{
  undefined4 uVar1;
  FAnimationUpdateContext local_38;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RigidBodyWithControl::UpdateComponentPose_AnyThread");
  if (((this->bFreezeIncomingPoseOnStart != '\0') && (this->bSimulationStarted != '\0')) &&
     (this->ResetSimulatedTeleportType == None)) {
    if (0 < *(int *)&(this->CapturedFrozenPose).Pose.field_0x8) goto LAB_14d9f0d2f;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    local_38._padding_ = param_1->_padding_;
    uVar1 = param_1->RootMotionWeightModifier;
    local_38._40_8_ = *(ulonglong *)&param_1->DeltaTime & 0xffffffff00000000;
    local_38.RootMotionWeightModifier = (float)uVar1;
    local_38.CurrentWeight = param_1->CurrentWeight;
    param_1 = &local_38;
  }
  FAnimNode_SkeletalControlBase::UpdateComponentPose_AnyThread
            ((FAnimNode_SkeletalControlBase *)this,param_1);
LAB_14d9f0d2f:
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateInternal @ 14d9f1ab0

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
FAnimNode_RigidBodyWithControl::UpdateInternal
          (FAnimNode_RigidBodyWithControl *this,FAnimationUpdateContext *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Update> FVar6;
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
    ::FName::FName(&LLMScope_Name1529,L"Animation/RigidBodyWithControl");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name1529,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,&LLMScope_Name1529,true);
  FStatsHierarchical::BeginMeasurement("FAnimNode_RigidBodyWithControl::UpdateInternal");
  if (this->bEnabled == 0) goto LAB_14d9f1dec;
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_RigidBodyNodeWithControl_Update;
  if (StatPtr_STAT_RigidBodyNodeWithControl_Update ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Update>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_RigidBodyNodeWithControl_Update");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_Update>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigidBodyNodeWithControl_Update,
                       *pFVar5,L"RigidBodyNodeWithControl_Update","STATGROUP_Anim",
                       "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value == 0) && (uVar7 == 0)) {
LAB_14d9f1ca9:
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x601);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d9f1ca9;
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
LAB_14d9f1dec:
  FStatsHierarchical::EndMeasurement();
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// UpdateWorldForces @ 14d9f2120

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAnimNode_RigidBodyWithControl::UpdateWorldForces
          (FAnimNode_RigidBodyWithControl *this,TTransform<double> *param_1,
          TTransform<double> *param_2,float param_3)

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
  float fVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
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
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar65 [16];
  undefined8 uVar64;
  double dVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  double dVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  double dVar79;
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar87;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
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
    ::FName::FName(&LLMScope_Name1308,L"Animation/RigidBodyWithControl");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_398,LLMScope_Name1308,false,None,Default,true);
  FMemScope::FMemScope(local_318,&LLMScope_Name1308,true);
  TVar18 = FThreadSafeStaticStatInner<FStat_STAT_ImmediateUpdateWorldForces,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_ImmediateUpdateWorldForces,1> *)
                      &StatPtr_STAT_ImmediateUpdateWorldForces);
  local_308.Impl._Line = 0x51d;
  local_308.Impl._Column = 2;
  local_308.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
  ;
  local_308.Impl._Function =
       "void __cdecl FAnimNode_RigidBodyWithControl::UpdateWorldForces(const struct UE::Math::TTransform<double> &,const struct UE::Math::TTransform<double> &,const float)"
  ;
  local_3a8.StatId.ComparisonIndex.Value = 0;
  local_3a8.StatId.Number = 0;
  local_3a8.EmittedEvent = 0;
  FCycleCounter::Start
            (&local_3a8,*(TStatIdData **)&(TVar18.StatIdPtr)->Name,CycleStat|ClearEveryFrame,false,
             &local_308);
  if (0.0 < this->TotalMass) {
    uVar28 = (this->PendingRadialForces).ArrayNum;
    uVar20 = (ulonglong)(int)uVar28;
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
        dVar79 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar4);
        if (0.0 < (float)dVar79) {
          FVar1 = pFVar23[0x24];
          fVar27 = *(float *)(pFVar23 + 0x1c);
          if (FVar1 == (FScriptContainerElement)0x0) {
            fVar27 = fVar27 / ((float)dVar79 * this->TotalMass);
          }
          if (*(int *)(pFVar23 + 0x28) == 0) {
            EVar15 = (FVar1 != (FScriptContainerElement)0x0) + AddImpulse;
          }
          else {
            EVar15 = (EForceType)(FVar1 != (FScriptContainerElement)0x0);
          }
          ImmediatePhysics_Chaos::FActorHandle::AddRadialForce
                    (pFVar4,&local_2b0,(double)fVar27,(double)*(float *)&pFVar23[0x18].field_0x0,
                     *(ERadialImpulseFalloff *)(pFVar23 + 0x20),EVar15);
        }
        pFVar22 = pFVar22 + 8;
      }
      pFVar23 = pFVar23 + 0x30;
      uVar20 = (ulonglong)uVar28;
      param_2 = local_3b0;
    }
    uVar64 = *(undefined8 *)&(this->ExternalForce).field0_0x0;
    uVar28 = (uint)uVar64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar29 = (uint)((ulonglong)uVar64 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar29,uVar28) &&
          (double)CONCAT44(uVar29,uVar28) != __real_3f1a36e2e0000000) ||
        (uVar64 = *(undefined8 *)((longlong)&(this->ExternalForce).field0_0x0 + 8),
        uVar28 = (uint)uVar64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar29 = (uint)((ulonglong)uVar64 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar29,uVar28) &&
        (double)CONCAT44(uVar29,uVar28) != __real_3f1a36e2e0000000)) ||
       (uVar64 = *(undefined8 *)((longlong)&(this->ExternalForce).field0_0x0 + 0x10),
       uVar28 = (uint)uVar64 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar29 = (uint)((ulonglong)uVar64 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar29,uVar28) &&
       (double)CONCAT44(uVar29,uVar28) != __real_3f1a36e2e0000000)) {
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
        dVar79 = ImmediatePhysics_Chaos::FActorHandle::GetInverseMass(pFVar4);
        if (0.0 < (float)dVar79) {
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
      uVar28 = (this->Bodies).ArrayNum;
      local_3b8 = (FScriptContainerElement *)
                  &(this->PerSolverField).ExecutionDatas.SampleIndices.ArrayNum;
      iVar3 = *(int *)local_3b8;
      if (iVar3 < (int)uVar28) {
        iVar16 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,4,uVar28 - iVar3,
                            &(this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance,
                            (int *)local_3b8,
                            &(this->PerSolverField).ExecutionDatas.SampleIndices.ArrayMax);
        DefaultConstructItems<FFieldContextIndex,int>
                  ((this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data +
                   (longlong)iVar16 * 8,uVar28 - iVar3);
      }
      else {
        if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
        }
        if ((int)uVar28 < iVar3) {
          uVar29 = iVar3 - uVar28;
          if (((int)(uVar29 | uVar28) < 0) &&
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
          if (uVar29 != 0) {
            TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (&(this->PerSolverField).ExecutionDatas.SampleIndices,uVar28,uVar29);
          }
        }
      }
      uVar28 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar28;
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
        uVar29 = (uint)uVar24;
        if (pFVar23 == local_390) break;
        local_320 = ImmediatePhysics_Chaos::FActorHandle::GetWorldTransform
                              (*(FActorHandle **)&pFVar23->field_0x0,&local_128);
        EVar2 = this->SimulationSpace;
        if (EVar2 == ComponentSpace) {
          local_1e8.Rotation.XY.m128d_f64 = *&(param_1->Rotation).XY.m128d_f64;
          local_1e8.Rotation.ZW.m128d_f64 = *&(param_1->Rotation).ZW.m128d_f64;
          local_1e8.Translation.XY.m128d_f64 = *&(param_1->Translation).XY.m128d_f64;
          local_1e8.Translation.ZW.m128d_f64 = *&(param_1->Translation).ZW.m128d_f64;
          uVar33 = *(undefined4 *)(param_1->Scale3D).XY.m128d_f64;
          uVar30 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4);
          uVar31 = *(undefined4 *)((param_1->Scale3D).XY.m128d_f64 + 1);
          uVar32 = *(undefined4 *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
          local_1e8.Scale3D.ZW.m128d_f64 = *&(param_1->Scale3D).ZW.m128d_f64;
LAB_14d9f26a8:
          local_1e8.Scale3D.XY.m128d_f64[0] = (double)CONCAT44(uVar30,uVar33);
          local_1e8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar32,uVar31);
        }
        else {
          if ((EVar2 == WorldSpace) || (EVar2 != BaseBoneSpace)) {
            local_1e8.Rotation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
            local_1e8.Rotation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
            local_1e8.Translation.XY.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
            uVar33 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar30 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar31 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar32 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
            local_1e8.Translation.ZW.m128d_f64 =
                 UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
            local_1e8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
            goto LAB_14d9f26a8;
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
        dVar34 = local_188.Translation.XY.m128d_f64[1];
        dVar79 = local_188.Translation.XY.m128d_f64[0];
        dVar57 = local_188.Translation.ZW.m128d_f64[0];
        local_270 = local_188.Translation.ZW.m128d_f64[0];
        local_280 = local_188.Translation.XY.m128d_f64[0];
        dStack_278 = local_188.Translation.XY.m128d_f64[1];
        uVar17 = 0;
        if ((int)uVar29 < (this->PerSolverField).ExecutionDatas.SamplePositions.ArrayNum) {
          uVar17 = ~uVar29 >> 0x1f;
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
        *(double *)pFVar25 = dVar79;
        *(double *)(pFVar25 + 8) = dVar34;
        *(double *)(pFVar22 + lVar26 + 0x10) = dVar57;
        uVar20 = uVar24 << 0x20 | uVar24;
        uVar17 = 0;
        if ((int)uVar29 < *(int *)local_3b8) {
          uVar17 = ~uVar29 >> 0x1f;
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
        uVar24 = (ulonglong)(uVar29 + 1);
        lVar26 = lVar26 + 0x18;
        *(ulonglong *)
         ((this->PerSolverField).ExecutionDatas.SampleIndices.AllocatorInstance.Data + local_358) =
             uVar20;
        local_358 = local_358 + 8;
        pFVar23 = pFVar23 + 8;
        uVar20 = (ulonglong)uVar28;
        param_2 = local_3b0;
      }
      FPerSolverFieldSystem::ComputeFieldRigidImpulse
                (&this->PerSolverField,(double)this->WorldTimeSeconds);
      this_00 = local_3b0;
      dVar79 = __real_3ff0000000000000;
      uVar28 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar28;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum == uVar28) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar29 = 0;
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
          if ((int)uVar29 < (this->PerSolverField).ExecutionDatas.FieldOutputs[1].ArrayNum) {
            uVar17 = ~uVar29 >> 0x1f;
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
          uVar29 = uVar29 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[1].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          pTVar21 = param_1;
          if (EVar2 == ComponentSpace) {
LAB_14d9f2960:
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
              goto LAB_14d9f2960;
            }
            local_388._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_388._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_388._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          uVar64 = local_388._s_0.X;
          dVar34 = ImmediatePhysics_Chaos::FActorHandle::GetMass(pFVar4);
          dVar57 = dVar79 / (double)param_3;
          local_2e8._8_8_ = local_388._s_0.Y * dVar34 * dVar57;
          local_2e8._16_8_ = local_388._s_0.Z * dVar34 * dVar57;
          local_2e8._s_0.X = dVar34 * (double)uVar64 * dVar57;
          ImmediatePhysics_Chaos::FActorHandle::AddForce(pFVar4,(TVector<double> *)&local_2e8._s_0);
          uVar20 = (ulonglong)uVar28;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar28 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar28;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum == uVar28) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar29 = 0;
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
          if ((int)uVar29 < (this->PerSolverField).ExecutionDatas.FieldOutputs[0].ArrayNum) {
            uVar17 = ~uVar29 >> 0x1f;
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
          uVar29 = uVar29 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[0].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          pTVar21 = param_1;
          if (EVar2 == ComponentSpace) {
LAB_14d9f2ad5:
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
              goto LAB_14d9f2ad5;
            }
            local_338._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_338._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_338._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          ImmediatePhysics_Chaos::FActorHandle::AddForce(pFVar4,(TVector<double> *)&local_338._s_0);
          uVar20 = (ulonglong)uVar28;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar28 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar28;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum == uVar28) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar29 = 0;
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
          if ((int)uVar29 < (this->PerSolverField).ExecutionDatas.FieldOutputs[3].ArrayNum) {
            uVar17 = ~uVar29 >> 0x1f;
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
          uVar29 = uVar29 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[3].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          if (EVar2 == ComponentSpace) {
            auVar84 = *(undefined1 (*) [16])&pFVar25->field_0x0;
            dVar34 = *(double *)(pFVar25 + 0x10);
            dVar57 = (param_1->Rotation).XY.m128d_f64[0] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
            dVar8 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
            uVar33 = (undefined4)((ulonglong)dVar8 >> 0x20);
            dVar9 = (param_1->Rotation).ZW.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
            dVar10 = (param_1->Rotation).ZW.m128d_f64[1] *
                     GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
            dVar86 = auVar84._8_8_;
            auVar58._8_4_ = SUB84(dVar8,0);
            auVar58._0_8_ = dVar57;
            auVar58._12_4_ = uVar33;
            auVar71._8_4_ = SUB84(dVar8,0);
            auVar71._0_8_ = dVar57;
            auVar71._12_4_ = uVar33;
            auVar35._8_4_ = SUB84(dVar10,0);
            auVar35._0_8_ = dVar9;
            auVar35._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            auVar71 = blendpd(auVar71,auVar35,2);
            auVar80._0_8_ = dVar86 * dVar57 - auVar84._0_8_ * auVar58._8_8_;
            auVar80._8_8_ = dVar34 * dVar8 - dVar86 * dVar9;
            auVar65._8_4_ = SUB84(auVar80._8_8_,0);
            auVar65._0_8_ = auVar80._0_8_;
            auVar65._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
            auVar67._8_8_ = 0;
            auVar67._0_8_ = dVar34;
            auVar35 = blendpd(auVar84,auVar67,2);
            auVar36._0_8_ = auVar35._0_8_ * dVar9 - dVar34 * auVar71._0_8_;
            auVar36._8_8_ = auVar35._8_8_ * dVar10 - auVar71._8_8_ * 0.0;
            auVar35 = blendpd(auVar80,auVar36,2);
            auVar81._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar81._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            dVar63 = auVar65._8_8_ + auVar65._8_8_;
            dVar70 = auVar36._0_8_ + auVar36._0_8_;
            auVar48._8_4_ = SUB84(dVar70,0);
            auVar48._0_8_ = dVar63;
            uVar33 = (undefined4)((ulonglong)dVar70 >> 0x20);
            auVar48._12_4_ = uVar33;
            auVar37._8_4_ = SUB84(dVar70,0);
            auVar37._0_8_ = dVar63;
            auVar37._12_4_ = uVar33;
            auVar35 = blendpd(auVar37,auVar81,2);
            auVar49._0_8_ = auVar48._8_8_ * dVar57 - dVar63 * auVar58._8_8_;
            auVar49._8_8_ = auVar81._0_8_ * dVar8 - dVar70 * dVar9;
            auVar38._0_8_ = auVar35._0_8_ * dVar9 - auVar81._0_8_ * auVar71._0_8_;
            auVar38._8_8_ = auVar35._8_8_ * dVar10 - auVar81._8_8_ * auVar71._8_8_;
            auVar35 = blendpd(auVar49,auVar38,2);
            local_360 = auVar81._0_8_ * dVar10 + dVar34 + auVar35._0_8_;
            uVar64 = dVar63 * dVar10 + auVar84._0_8_ + auVar49._8_8_;
            dStack_368 = dVar70 * dVar10 + dVar86 + auVar38._0_8_;
            local_370 = (double)uVar64;
          }
          else if (EVar2 == WorldSpace) {
            _local_370 = *(undefined1 (*) [16])&pFVar25->field_0x0;
            uVar64 = local_370;
            local_360 = *(undefined8 *)(pFVar25 + 0x10);
          }
          else if (EVar2 == BaseBoneSpace) {
            pTVar19 = UE::Math::TTransform<double>::InverseTransformVectorNoScale
                                (param_1,&local_220,(TVector<double> *)pFVar25);
            UE::Math::TTransform<double>::InverseTransformVectorNoScale
                      (this_00,(TVector<double> *)&local_370,pTVar19);
            uVar64 = local_370;
          }
          else {
            dStack_368 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_370 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_360 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          }
          pTVar19 = ImmediatePhysics_Chaos::FActorHandle::GetInertia(pFVar4,&local_208);
          dVar34 = dVar79 / (double)param_3;
          local_2d0._s_0.X = (double)uVar64 * (pTVar19->field0_0x0)._s_0.X * dVar34;
          local_2d0._s_0.Y = dVar34 * dStack_368 * (pTVar19->field0_0x0)._s_0.Y;
          local_2d0._s_0.Z = dVar34 * (double)local_360 * (pTVar19->field0_0x0)._s_0.Z;
          ImmediatePhysics_Chaos::FActorHandle::AddTorque(pFVar4,(TVector<double> *)&local_2d0._s_0)
          ;
          uVar20 = (ulonglong)uVar28;
          pFVar23 = pFVar23 + 8;
        }
      }
      uVar28 = (this->Bodies).ArrayNum;
      uVar20 = (ulonglong)(int)uVar28;
      if ((this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum == uVar28) {
        pFVar23 = (this->Bodies).AllocatorInstance.Data;
        uVar29 = 0;
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
          if ((int)uVar29 < (this->PerSolverField).ExecutionDatas.FieldOutputs[2].ArrayNum) {
            uVar17 = ~uVar29 >> 0x1f;
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
          uVar29 = uVar29 + 1;
          EVar2 = this->SimulationSpace;
          pFVar25 = (this->PerSolverField).ExecutionDatas.FieldOutputs[2].AllocatorInstance.Data +
                    lVar26;
          lVar26 = lVar26 + 0x18;
          dVar79 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar57 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar34 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          if (EVar2 == ComponentSpace) {
            auVar84 = *(undefined1 (*) [16])pFVar25;
            dVar9 = *(double *)&pFVar25[0x10].field_0x0;
            dVar79 = (param_1->Rotation).XY.m128d_f64[0] * dVar79;
            dVar57 = (param_1->Rotation).XY.m128d_f64[1] * dVar57;
            dVar34 = (param_1->Rotation).ZW.m128d_f64[0] * dVar34;
            dVar8 = (param_1->Rotation).ZW.m128d_f64[1] * dVar8;
            uVar30 = (undefined4)((ulonglong)dVar8 >> 0x20);
            auVar13._8_8_ = 0;
            auVar13._0_8_ = dVar9;
            auVar35 = blendpd(auVar84,auVar13,2);
            dVar70 = auVar84._8_8_;
            auVar54._8_4_ = SUB84(dVar57,0);
            auVar54._0_8_ = dVar79;
            uVar33 = (undefined4)((ulonglong)dVar57 >> 0x20);
            auVar54._12_4_ = uVar33;
            auVar69._8_4_ = SUB84(dVar57,0);
            auVar69._0_8_ = dVar79;
            auVar69._12_4_ = uVar33;
            auVar75._0_8_ = dVar70 * dVar79 - auVar54._8_8_ * auVar84._0_8_;
            auVar75._8_8_ = dVar9 * dVar57 - dVar34 * dVar70;
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = dVar34;
            auVar7._12_4_ = uVar30;
            auVar67 = blendpd(auVar69,auVar7,2);
            auVar46._0_8_ = auVar35._0_8_ * dVar34 - auVar67._0_8_ * dVar9;
            auVar46._8_8_ = auVar35._8_8_ * dVar8 - auVar67._8_8_ * 0.0;
            dVar10 = auVar75._8_8_ + auVar75._8_8_;
            dVar63 = auVar46._0_8_ + auVar46._0_8_;
            uVar33 = (undefined4)((ulonglong)dVar63 >> 0x20);
            auVar35 = blendpd(auVar75,auVar46,2);
            auVar76._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar76._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            auVar47._8_4_ = SUB84(dVar8,0);
            auVar47._0_8_ = dVar8;
            auVar47._12_4_ = uVar30;
            auVar61._8_4_ = SUB84(dVar63,0);
            auVar61._0_8_ = dVar10;
            auVar61._12_4_ = uVar33;
            auVar62._0_8_ = auVar61._8_8_ * dVar79 - auVar54._8_8_ * dVar10;
            auVar62._8_8_ = auVar76._0_8_ * dVar57 - dVar34 * dVar63;
            auVar55._8_4_ = SUB84(dVar63,0);
            auVar55._0_8_ = dVar10;
            auVar55._12_4_ = uVar33;
            auVar35 = blendpd(auVar55,auVar76,2);
            auVar56._0_8_ = auVar35._0_8_ * dVar34 - auVar67._0_8_ * auVar76._0_8_;
            auVar56._8_8_ = auVar35._8_8_ * dVar8 - auVar67._8_8_ * auVar76._8_8_;
            auVar35 = blendpd(auVar62,auVar56,2);
            local_350._s_0.X = dVar8 * dVar10 + auVar84._0_8_ + auVar62._8_8_;
            local_350._s_0.Y = auVar47._8_8_ * dVar63 + dVar70 + auVar56._0_8_;
            local_350._s_0.Z = dVar8 * auVar76._0_8_ + dVar9 + auVar35._0_8_;
          }
          else if (EVar2 == WorldSpace) {
            local_350._0_16_ = *(undefined1 (*) [16])pFVar25;
            local_350._s_0.Z = (double)*(undefined8 *)&pFVar25[0x10].field_0x0;
          }
          else if (EVar2 == BaseBoneSpace) {
            auVar84 = *(undefined1 (*) [16])pFVar25;
            dVar9 = *(double *)&pFVar25[0x10].field_0x0;
            dVar78 = (param_1->Rotation).XY.m128d_f64[0] * dVar79;
            dVar87 = (param_1->Rotation).XY.m128d_f64[1] * dVar57;
            dVar10 = (param_1->Rotation).ZW.m128d_f64[0] * dVar34;
            dVar63 = (param_1->Rotation).ZW.m128d_f64[1] * dVar8;
            dVar77 = auVar84._8_8_;
            auVar59._8_4_ = SUB84(dVar87,0);
            auVar59._0_8_ = dVar78;
            uVar33 = (undefined4)((ulonglong)dVar87 >> 0x20);
            auVar59._12_4_ = uVar33;
            auVar66._8_4_ = SUB84(dVar87,0);
            auVar66._0_8_ = dVar78;
            auVar66._12_4_ = uVar33;
            auVar6._8_4_ = SUB84(dVar63,0);
            auVar6._0_8_ = dVar10;
            auVar6._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            auVar67 = blendpd(auVar66,auVar6,2);
            auVar72._0_8_ = dVar77 * dVar78 - auVar84._0_8_ * auVar59._8_8_;
            auVar72._8_8_ = dVar9 * dVar87 - dVar77 * dVar10;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = dVar9;
            auVar35 = blendpd(auVar84,auVar11,2);
            auVar39._0_8_ = auVar35._0_8_ * dVar10 - dVar9 * auVar67._0_8_;
            auVar39._8_8_ = auVar35._8_8_ * dVar63 - auVar67._8_8_ * 0.0;
            auVar35 = blendpd(auVar72,auVar39,2);
            auVar73._0_8_ = auVar35._0_8_ + auVar35._0_8_;
            auVar73._8_8_ = auVar35._8_8_ + auVar35._8_8_;
            dVar70 = auVar72._8_8_ + auVar72._8_8_;
            dVar86 = auVar39._0_8_ + auVar39._0_8_;
            uVar33 = (undefined4)((ulonglong)dVar86 >> 0x20);
            auVar50._8_4_ = SUB84(dVar86,0);
            auVar50._0_8_ = dVar70;
            auVar50._12_4_ = uVar33;
            auVar40._8_4_ = SUB84(dVar86,0);
            auVar40._0_8_ = dVar70;
            auVar40._12_4_ = uVar33;
            auVar35 = blendpd(auVar40,auVar73,2);
            dVar79 = (this_00->Rotation).XY.m128d_f64[0] * dVar79;
            dVar57 = (this_00->Rotation).XY.m128d_f64[1] * dVar57;
            uVar33 = (undefined4)((ulonglong)dVar57 >> 0x20);
            auVar51._0_8_ = auVar50._8_8_ * dVar78 - dVar70 * auVar59._8_8_;
            auVar51._8_8_ = auVar73._0_8_ * dVar87 - dVar86 * dVar10;
            auVar41._0_8_ = auVar35._0_8_ * dVar10 - auVar73._0_8_ * auVar67._0_8_;
            auVar41._8_8_ = auVar35._8_8_ * dVar63 - auVar73._8_8_ * auVar67._8_8_;
            dVar34 = (this_00->Rotation).ZW.m128d_f64[0] * dVar34;
            dVar8 = (this_00->Rotation).ZW.m128d_f64[1] * dVar8;
            auVar35 = blendpd(auVar51,auVar41,2);
            local_258 = auVar73._0_8_ * dVar63 + dVar9 + auVar35._0_8_;
            dVar9 = dVar70 * dVar63 + auVar84._0_8_ + auVar51._8_8_;
            dVar10 = dVar86 * dVar63 + dVar77 + auVar41._0_8_;
            uVar30 = SUB84(dVar10,0);
            uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
            auVar68._8_4_ = SUB84(dVar57,0);
            auVar68._0_8_ = dVar79;
            auVar68._12_4_ = uVar33;
            auVar74._8_4_ = SUB84(dVar57,0);
            auVar74._0_8_ = dVar79;
            auVar74._12_4_ = uVar33;
            auVar82._8_4_ = uVar30;
            auVar82._0_8_ = dVar9;
            auVar82._12_4_ = uVar31;
            auVar42._8_4_ = uVar30;
            auVar42._0_8_ = dVar9;
            auVar42._12_4_ = uVar31;
            auVar83._0_8_ = auVar82._8_8_ * dVar79 - auVar68._8_8_ * dVar9;
            auVar83._8_8_ = local_258 * dVar57 - dVar34 * dVar10;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_258;
            auVar35 = blendpd(auVar42,auVar12,2);
            auVar60._8_4_ = SUB84(auVar83._8_8_,0);
            auVar60._0_8_ = auVar83._0_8_;
            auVar60._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
            auVar84._8_4_ = SUB84(dVar8,0);
            auVar84._0_8_ = dVar34;
            auVar84._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            auVar67 = blendpd(auVar74,auVar84,2);
            local_268._8_4_ = uVar30;
            local_268._0_8_ = dVar9;
            local_268._12_4_ = uVar31;
            auVar43._0_8_ = auVar35._0_8_ * dVar34 - local_258 * auVar67._0_8_;
            auVar43._8_8_ = auVar35._8_8_ * dVar8 - auVar67._8_8_ * 0.0;
            auVar84 = blendpd(auVar83,auVar43,2);
            dVar63 = auVar60._8_8_ + auVar60._8_8_;
            dVar70 = auVar43._0_8_ + auVar43._0_8_;
            auVar85._0_8_ = auVar84._0_8_ + auVar84._0_8_;
            auVar85._8_8_ = auVar84._8_8_ + auVar84._8_8_;
            auVar52._8_4_ = SUB84(dVar70,0);
            auVar52._0_8_ = dVar63;
            uVar33 = (undefined4)((ulonglong)dVar70 >> 0x20);
            auVar52._12_4_ = uVar33;
            auVar44._8_4_ = SUB84(dVar70,0);
            auVar44._0_8_ = dVar63;
            auVar44._12_4_ = uVar33;
            auVar84 = blendpd(auVar44,auVar85,2);
            auVar53._0_8_ = auVar52._8_8_ * dVar79 - dVar63 * auVar68._8_8_;
            auVar53._8_8_ = auVar85._0_8_ * dVar57 - dVar70 * dVar34;
            auVar45._0_8_ = auVar84._0_8_ * dVar34 - auVar85._0_8_ * auVar67._0_8_;
            auVar45._8_8_ = auVar84._8_8_ * dVar8 - auVar85._8_8_ * auVar67._8_8_;
            auVar84 = blendpd(auVar53,auVar45,2);
            local_350._s_0.X = dVar63 * dVar8 + dVar9 + auVar53._8_8_;
            local_350._s_0.Y = dVar70 * dVar8 + dVar10 + auVar45._0_8_;
            local_350._s_0.Z = auVar85._0_8_ * dVar8 + local_258 + auVar84._0_8_;
          }
          else {
            local_350._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            local_350._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            local_350._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          }
          ImmediatePhysics_Chaos::FActorHandle::AddTorque(pFVar4,(TVector<double> *)&local_350._s_0)
          ;
          uVar20 = (ulonglong)uVar28;
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

// UpdateWorldGeometry @ 14d9f32b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014d9f39d0) */
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
FAnimNode_RigidBodyWithControl::UpdateWorldGeometry
          (FAnimNode_RigidBodyWithControl *this,UWorld *param_1,USkeletalMeshComponent *param_2)

{
  TArray<unsigned_int,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *_Dst;
  TArray<unsigned_int,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *_Dst_00;
  int *piVar1;
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
  double dVar18;
  double dVar19;
  double dVar20;
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
    ::FName::FName(&LLMScope_Name1273,L"Animation/RigidBodyWithControl");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_170,LLMScope_Name1273,false,None,Default,true);
  FMemScope::FMemScope(&local_128,&LLMScope_Name1273,true);
  FVar13 = StatPtr_STAT_ImmediateUpdateWorldGeometry;
  if (StatPtr_STAT_ImmediateUpdateWorldGeometry ==
      (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry>)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_150,"STAT_ImmediateUpdateWorldGeometry");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ImmediateUpdateWorldGeometry>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmediateUpdateWorldGeometry,
                        *pFVar12,L"FAnimNode_RigidBodyWithControl::UpdateWorldGeometry",
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x4fb);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_178 = FVar17;
      local_160 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar9 = true;
      goto LAB_14d9f347c;
    }
  }
  bVar9 = false;
  FVar17 = local_160;
LAB_14d9f347c:
  if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_RagdollNodeFindGeometry =
         (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FAnimNode_RigidBodyWithControl::UpdateWorldGeometry(UWorld_const_&,USkeletalMeshComponent_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RagdollNodeFindGeometry>
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
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FAnimNode_RigidBodyWithControl::UpdateWorldGeometry(UWorld_const_&,USkeletalMeshComponent_const_&)_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RagdollNodeFindGeometry>
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
  pUVar11 = local_130;
  (this->QueryParams).MobilityType = Any;
  FCollisionQueryParams::AddIgnoredComponent(&this->QueryParams,(UPrimitiveComponent *)local_130);
  ExpireWorldObjects(this);
  pdVar16 = (double *)(**(code **)(pUVar11->_padding_ + 0x598))(pUVar11,local_120);
  dVar20 = (this->CachedBounds).W + __real_3f1a36e2e0000000;
  dVar2 = pdVar16[6];
  local_140 = *(undefined4 *)(pdVar16 + 2);
  uStack_13c = *(undefined4 *)((longlong)pdVar16 + 0x14);
  dVar7 = pdVar16[1];
  if (((dVar20 < dVar2) ||
      (dVar20 = dVar20 - dVar2, dVar6 = pdVar16[2] - (this->CachedBounds).Center.field0_0x0._s_0.Z,
      dVar18 = *pdVar16 - (this->CachedBounds).Center.field0_0x0._s_0.X,
      dVar19 = dVar7 - (this->CachedBounds).Center.field0_0x0._s_0.Y,
      dVar20 * dVar20 < dVar19 * dVar19 + dVar18 * dVar18 + dVar6 * dVar6)) ||
     (this->bUpdateCacheEveryFrame != false)) {
    (this->CachedBounds).Center.field0_0x0._s_0.X = *pdVar16;
    (this->CachedBounds).Center.field0_0x0._s_0.Y = dVar7;
    this->UnsafeWorld = (UWorld *)local_168;
    *(undefined4 *)((longlong)&(this->CachedBounds).Center.field0_0x0 + 0x10) = local_140;
    *(undefined4 *)((longlong)&(this->CachedBounds).Center.field0_0x0 + 0x14) = uStack_13c;
    *(int *)&(this->CachedBounds).W = SUB84(dVar2,0);
    *(int *)((longlong)&(this->CachedBounds).W + 4) = (int)((ulonglong)dVar2 >> 0x20);
    (this->CachedBounds).W = (double)this->CachedBoundsScale * (this->CachedBounds).W;
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
  if (((bVar9) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_150.NameAndInfo.Index.Value = local_160.ComparisonIndex.Value;
      local_150.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
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

// UpdateWorldObjects @ 14d9f39f0

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
FAnimNode_RigidBodyWithControl::UpdateWorldObjects
          (FAnimNode_RigidBodyWithControl *this,TTransform<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,float param_4)

{
  undefined1 *puVar1;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *pTVar2;
  FActorHandle *pFVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  bool bVar16;
  bool bVar17;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *pTVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_UpdateWorldObjects> FVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  FName FVar22;
  FBodyInstance *this_00;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined4 uVar52;
  uint uVar53;
  uint uVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  double unaff_XMM6 [2];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  __m128d _Var75;
  double dVar76;
  undefined4 uVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined4 uVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  double dVar93;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  double dVar101;
  double dVar102;
  double dVar106;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar107;
  double dVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar111;
  undefined4 uVar113;
  double dVar112;
  undefined1 auStackY_6c8 [32];
  undefined1 local_668;
  undefined1 local_667 [3];
  FLLMScope local_664;
  FName local_660;
  FColor_u_0 local_658 [2];
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *local_650;
  longlong lStack_648;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  int local_628;
  undefined4 uStack_624;
  FName local_620;
  FName local_618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e8;
  FMemScope local_5c8;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *local_5c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5b8;
  undefined8 uStack_598;
  TMap<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject,0>_>
  *local_590;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_588;
  undefined8 uStack_568;
  undefined8 local_558;
  undefined8 uStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  TVector<double>_u_0 local_528;
  double local_510;
  double dStack_508;
  double local_500;
  TQuat<double> local_4f8;
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  undefined8 uStack_4c0;
  uint local_4b8;
  uint uStack_4b4;
  uint uStack_4b0;
  uint uStack_4ac;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  undefined1 local_488 [16];
  FName local_478 [2];
  TQuat<double> local_468;
  double local_448;
  double dStack_440;
  double local_438;
  undefined8 uStack_430;
  double local_428;
  double dStack_420;
  TQuat<double> local_418;
  TQuat<double> local_3f8;
  TQuat<double> local_3d8;
  TQuat<double> local_3b8;
  double local_398;
  double dStack_390;
  double local_388;
  undefined1 local_380 [16];
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  TVector<double> local_338;
  TQuat<double> local_318;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2d8;
  TTransform<double> local_2b8;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  FVar20 = StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects;
  if (StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects ==
      (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_UpdateWorldObjects>)0x0) {
    pFVar19 = ::FName::FName(local_478,"STAT_RigidBodyNodeWithControl_UpdateWorldObjects");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_RigidBodyNodeWithControl_UpdateWorldObjects>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RigidBodyNodeWithControl_UpdateWorldObjects,*pFVar19,
                        L"RigidBodyNodeWithControl_UpdateWorldObjects","STATGROUP_Anim",
                        "STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_618.ComparisonIndex.Value = 0;
  local_618.Number = 0;
  bVar15 = false;
  bVar17 = false;
  FVar22 = *(FName *)FVar20;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_658[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_658[0]._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_620.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_620.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_620,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PhysicsControl\\Source\\PhysicsControl\\Private\\AnimNode_RigidBodyWithControl.cpp"
                   ,0x6d4);
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_660 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar16 = true;
      goto LAB_14d9f3b5b;
    }
  }
  bVar16 = false;
  FVar22 = local_618;
LAB_14d9f3b5b:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name1749,L"Animation/RigidBodyWithControl");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_664,LLMScope_Name1749,false,None,Default,true);
  FMemScope::FMemScope(&local_5c8,&LLMScope_Name1749,true);
  if (*(int *)&(this->ComponentsInSim).field_0x8 != *(int *)&(this->ComponentsInSim).field_0x34) {
    if (this->bCalculateVelocitiesForWorldGeometry == 0) {
      local_5e8._padding_._4_4_ = 1;
      puVar1 = &(this->ComponentsInSim).field_0x10;
      local_5e8._padding_._0_4_ = 0;
      pTVar2 = &this->ComponentsInSim;
      local_5e8.UnvisitedBitMask = 0xffffffff;
      local_5e8.CurrentBitIndex = 0;
      local_5e8.BaseBitIndex = 0;
      local_5e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if (*(int *)&(this->ComponentsInSim).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e8);
      }
      lStack_648 = CONCAT44(local_5e8._padding_._4_4_,(undefined4)local_5e8._padding_);
      uStack_638._4_4_ = local_5e8.CurrentBitIndex;
      uStack_638._0_4_ = local_5e8.UnvisitedBitMask;
      uStack_630._4_4_ = local_5e8._28_4_;
      uStack_630._0_4_ = local_5e8.BaseBitIndex;
      pTStack_640 = local_5e8.Array;
      local_628 = *(int *)&(this->ComponentsInSim).field_0x8 -
                  *(int *)&(this->ComponentsInSim).field_0x34;
      uStack_568 = CONCAT44(uStack_624,local_628);
      TStack_588.Array = local_5e8.Array;
      local_650 = pTVar2;
      local_590 = pTVar2;
      TStack_588._padding_ = lStack_648;
      TStack_588._16_8_ = uStack_638;
      TStack_588._24_8_ = uStack_630;
      pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_2f8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(this->ComponentsInSim).field_0x28);
      lStack_648 = pTVar21->_padding_;
      pTVar12 = pTVar21->Array;
      uVar13._0_4_ = pTVar21->UnvisitedBitMask;
      uVar13._4_4_ = pTVar21->CurrentBitIndex;
      uStack_630 = *(undefined8 *)&pTVar21->BaseBitIndex;
      pTStack_640 = pTVar12;
      uStack_638 = uVar13;
      while( true ) {
        pTVar18 = local_590;
        if (*(int *)&local_590->field_0x8 - *(int *)&local_590->field_0x34 != (int)uStack_568) {
          local_667[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_667);
        }
        if (((TStack_588.CurrentBitIndex == uVar13._4_4_) && (TStack_588.Array == pTVar12)) &&
           (pTVar18 == pTVar2)) break;
        lVar23 = *(longlong *)pTVar18;
        lVar24 = *(longlong *)((longlong)TStack_588.CurrentBitIndex * 0x20 + lVar23);
        _Var75.m128d_f64 = unaff_XMM6;
        if (lVar24 != 0) {
          pFVar3 = *(FActorHandle **)((longlong)TStack_588.CurrentBitIndex * 0x20 + 8 + lVar23);
          FBodyInstance::GetUnrealWorldTransform
                    ((FBodyInstance *)(lVar24 + 0x390),&local_138,true,false);
          _Var75.m128d_f64 = local_138.Rotation.XY.m128d_f64;
          dVar76 = local_138.Translation.ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
          dVar67 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar84 = (param_1->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar66._0_8_ =
               (param_1->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar66._8_8_ =
               (param_1->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar9._4_8_ = unaff_XMM6[1];
          auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar73._0_8_ = auVar9._0_8_ << 0x20;
          auVar73._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar73._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar57._8_4_ = SUB84(dVar84,0);
          auVar57._0_8_ = dVar67;
          auVar57._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
          local_388 = local_138.Translation.ZW.m128d_f64[0];
          auVar58 = blendpd(auVar57,auVar66,2);
          auVar55._8_4_ = SUB84(auVar66._0_8_,0);
          auVar55._0_8_ = dVar84;
          auVar55._12_4_ = (int)((ulonglong)auVar66._0_8_ >> 0x20);
          local_398 = local_138.Translation.XY.m128d_f64[0];
          dStack_390 = local_138.Translation.XY.m128d_f64[1];
          dVar108 = local_138.Translation.XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
          dVar112 = local_138.Translation.XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
          auVar103._8_4_ = SUB84(dVar112,0);
          auVar103._0_8_ = dVar108;
          uVar52 = (undefined4)((ulonglong)dVar112 >> 0x20);
          auVar103._12_4_ = uVar52;
          auVar49._8_4_ = SUB84(dVar112,0);
          auVar49._0_8_ = dVar108;
          auVar49._12_4_ = uVar52;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = dVar76;
          auVar44 = blendpd(auVar49,auVar44,2);
          auVar104._0_8_ = auVar103._8_8_ * dVar67 - dVar84 * dVar108;
          auVar104._8_8_ = dVar76 * dVar84 - auVar55._8_8_ * dVar112;
          auVar100._8_4_ = SUB84(auVar104._8_8_,0);
          auVar100._0_8_ = auVar104._0_8_;
          auVar100._12_4_ = (int)((ulonglong)auVar104._8_8_ >> 0x20);
          auVar50._0_8_ = auVar44._0_8_ * auVar66._0_8_ - auVar58._0_8_ * dVar76;
          auVar50._8_8_ = auVar44._8_8_ * auVar66._8_8_ - auVar58._8_8_ * 0.0;
          dVar94 = auVar100._8_8_ + auVar100._8_8_;
          dVar101 = auVar50._0_8_ + auVar50._0_8_;
          auVar44 = blendpd(auVar104,auVar50,2);
          uVar52 = SUB84(dVar101,0);
          auVar90._8_4_ = uVar52;
          auVar90._0_8_ = dVar94;
          uVar82 = (undefined4)((ulonglong)dVar101 >> 0x20);
          auVar90._12_4_ = uVar82;
          auVar38._8_4_ = uVar52;
          auVar38._0_8_ = dVar94;
          auVar38._12_4_ = uVar82;
          auVar80._8_4_ = uVar52;
          auVar80._0_8_ = dVar94;
          auVar80._12_4_ = uVar82;
          auVar105._0_8_ = auVar44._0_8_ + auVar44._0_8_;
          auVar105._8_8_ = auVar44._8_8_ + auVar44._8_8_;
          auVar44 = blendpd(auVar80,auVar105,2);
          auVar91._0_8_ = auVar90._8_8_ * dVar67 - dVar94 * dVar84;
          auVar91._8_8_ = auVar105._0_8_ * dVar84 - auVar38._8_8_ * auVar66._0_8_;
          auVar39._8_4_ = SUB84(auVar105._8_8_,0);
          auVar39._0_8_ = auVar105._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
          auVar81._0_8_ = auVar44._0_8_ * auVar66._0_8_ - auVar105._0_8_ * auVar58._0_8_;
          auVar81._8_8_ = auVar44._8_8_ * auVar66._8_8_ - auVar39._8_8_ * auVar58._8_8_;
          auVar44 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
          auVar74._8_8_ = auVar73._8_8_;
          auVar74._0_8_ = auVar44._0_8_;
          lVar23 = -(ulonglong)
                    ((double)CONCAT44(auVar44._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      auVar44._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
          lVar24 = -(ulonglong)
                    ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      *(uint *)(param_1->Scale3D).XY.m128d_f64 &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar25 = -(ulonglong)
                    ((double)CONCAT44(*(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc) &
                                      _UNK_15061cc8c,
                                      *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1) &
                                      _UNK_15061cc88) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar58._8_4_ = SUB84(auVar91._8_8_,0);
          auVar58._0_8_ = auVar91._0_8_;
          auVar58._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
          local_1f8.Translation.XY.m128d_f64[0] =
               (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                                ~(uint)lVar24 & auVar44._0_4_) *
               (dVar94 * auVar66._8_8_ + dVar108 + auVar58._8_8_);
          dVar67 = (double)CONCAT44(~(uint)((ulonglong)lVar25 >> 0x20) & auVar44._12_4_,
                                    ~(uint)lVar25 & auVar44._8_4_) *
                   (dVar101 * auVar66._8_8_ + dVar112 + auVar81._0_8_);
          uVar82 = SUB84(dVar67,0);
          uVar83 = (undefined4)((ulonglong)dVar67 >> 0x20);
          local_380._8_4_ = uVar82;
          local_380._0_8_ = local_1f8.Translation.XY.m128d_f64[0];
          local_380._12_4_ = uVar83;
          dVar108 = (param_1->Rotation).XY.m128d_f64[0] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar112 = (param_1->Rotation).XY.m128d_f64[1] *
                    GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar74);
          dVar84 = local_138.Rotation.XY.m128d_f64[0];
          auVar55 = blendpd(auVar91,auVar81,2);
          local_370 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar44._4_4_,
                                       ~(uint)lVar23 & auVar44._0_4_) *
                      (auVar105._0_8_ * auVar66._8_8_ + dVar76 + auVar55._0_8_);
          auVar51._8_4_ = SUB84(dVar112,0);
          auVar51._0_8_ = dVar112;
          auVar51._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
          dVar85 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar93 = (param_1->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar92._8_4_ = SUB84(dVar93,0);
          auVar92._0_8_ = dVar85;
          uVar52 = (undefined4)((ulonglong)dVar93 >> 0x20);
          auVar92._12_4_ = uVar52;
          dVar94 = local_138.Rotation.XY.m128d_f64[1];
          dVar101 = auVar92._8_8_;
          auVar40._8_4_ = SUB84(dVar93,0);
          auVar40._0_8_ = dVar101;
          auVar40._12_4_ = uVar52;
          auVar41._8_4_ = local_138.Rotation.XY.m128d_f64[0]._0_4_;
          auVar41._0_8_ = dVar94;
          auVar41._12_4_ = local_138.Rotation.XY.m128d_f64[0]._4_4_;
          dVar76 = auVar41._8_8_ * dVar85 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar67 = dVar108 * local_138.Rotation.ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   auVar40._8_8_ * dVar94 +
                   auVar51._8_8_ * local_138.Rotation.ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar76;
          local_1f8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar67,0);
          local_1f8.Rotation.XY.m128d_f64[0] =
               dVar108 * local_138.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar101 * dVar84 +
               dVar112 * local_138.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar94 * dVar85 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_1f8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar67 >> 0x20);
          auVar10._4_8_ = dVar76;
          auVar10._0_4_ = (int)((ulonglong)local_1f8.Translation.XY.m128d_f64[0] >> 0x20);
          auVar42._0_8_ = auVar10._0_8_ << 0x20;
          auVar42._8_4_ = uVar82;
          auVar42._12_4_ = uVar83;
          local_1f8.Translation.XY.m128d_f64[1] = auVar42._8_8_;
          local_1f8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
          ;
          local_1f8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y
          ;
          local_1f8.Rotation.ZW.m128d_f64[0] =
               dVar108 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar101 * local_138.Rotation.ZW.m128d_f64[0] +
               dVar112 * dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar85 * local_138.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_1f8.Rotation.ZW.m128d_f64[1] =
               dVar108 * dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dVar93 * local_138.Rotation.ZW.m128d_f64[1] +
               dVar112 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar85 * local_138.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_1f8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
          ;
          local_1f8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_1f8.Translation.ZW.m128d_f64[1] = 0.0;
          local_1f8.Translation.ZW.m128d_f64[0] = local_370;
          ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform(pFVar3,&local_1f8);
        }
        TStack_588.UnvisitedBitMask = TStack_588.UnvisitedBitMask & ~TStack_588._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_588);
        unaff_XMM6 = _Var75.m128d_f64;
      }
    }
    else {
      local_4a8 = (param_1->Translation).XY.m128d_f64[0];
      dStack_4a0 = (param_1->Translation).XY.m128d_f64[1];
      local_498 = (param_1->Translation).ZW.m128d_f64[0];
      local_660 = (FName)(double)param_4;
      dVar76 = local_4a8 - (double)local_660 * (param_2->field0_0x0)._s_0.X;
      dVar84 = dStack_4a0 - (double)local_660 * (param_2->field0_0x0)._s_0.Y;
      local_468.Z = (double)local_660 * (param_3->field0_0x0)._s_0.Z * __real_3fe0000000000000;
      local_468.X = (double)local_660 * __real_3fe0000000000000 * (param_3->field0_0x0)._s_0.X;
      local_468.Y = (double)local_660 * __real_3fe0000000000000 * (param_3->field0_0x0)._s_0.Y;
      dVar67 = local_498 - (double)local_660 * (param_2->field0_0x0)._s_0.Z;
      local_468.W = 0.0;
      UE::Math::TQuat<double>::Exp(&local_468,&local_418);
      local_3d8.X = local_418.X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      local_3d8.Y = local_418.Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      local_3d8.Z = local_418.Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_3d8.W = local_418.W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      local_3f8.X = (param_1->Rotation).XY.m128d_f64[0];
      local_3f8.Y = (param_1->Rotation).XY.m128d_f64[1];
      local_3f8.Z = (param_1->Rotation).ZW.m128d_f64[0];
      local_3f8.W = (param_1->Rotation).ZW.m128d_f64[1];
      UE::Math::TQuat<double>::operator*(&local_3d8,&local_3b8,&local_3f8);
      puVar1 = &(this->ComponentsInSim).field_0x10;
      local_428 = local_3b8.X;
      dStack_420 = local_3b8.Y;
      pTVar2 = &this->ComponentsInSim;
      local_4d8 = local_3b8.Z;
      dStack_4d0 = local_3b8.W;
      local_608._padding_._0_4_ = 0;
      uStack_430 = 0;
      local_608._padding_._4_4_ = 1;
      local_4b8 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
      uStack_4b4 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
      uStack_4b0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y,0);
      uStack_4ac = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._8_8_ >> 0x20);
      local_4c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uStack_4c0 = 0;
      local_608.UnvisitedBitMask = 0xffffffff;
      local_608.CurrentBitIndex = 0;
      local_608.BaseBitIndex = 0;
      local_608.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_448 = dVar76;
      dStack_440 = dVar84;
      local_438 = dVar67;
      if (*(int *)&(this->ComponentsInSim).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
      }
      lStack_648 = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_);
      uStack_638._4_4_ = local_608.CurrentBitIndex;
      uStack_638._0_4_ = local_608.UnvisitedBitMask;
      uStack_630._4_4_ = local_608._28_4_;
      uStack_630._0_4_ = local_608.BaseBitIndex;
      pTStack_640 = local_608.Array;
      local_628 = *(int *)&(this->ComponentsInSim).field_0x8 -
                  *(int *)&(this->ComponentsInSim).field_0x34;
      uStack_598 = CONCAT44(uStack_624,local_628);
      TStack_5b8.Array = local_608.Array;
      local_650 = pTVar2;
      local_5c0 = pTVar2;
      TStack_5b8._padding_ = lStack_648;
      TStack_5b8._16_8_ = uStack_638;
      TStack_5b8._24_8_ = uStack_630;
      pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_2d8,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                           *(int *)&(this->ComponentsInSim).field_0x28);
      lStack_648 = pTVar21->_padding_;
      pTStack_640 = pTVar21->Array;
      uVar11._0_4_ = pTVar21->UnvisitedBitMask;
      uVar11._4_4_ = pTVar21->CurrentBitIndex;
      uStack_630 = *(undefined8 *)&pTVar21->BaseBitIndex;
      uStack_638 = uVar11;
      while( true ) {
        pTVar18 = local_5c0;
        if (*(int *)&local_5c0->field_0x8 - *(int *)&local_5c0->field_0x34 != (int)uStack_598) {
          local_668 = 0;
          `TSparseArray<TSparseSetElement<TTuple<UPrimitiveComponent_const_*,FAnimNode_RigidBodyWithControl::FWorldObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_668);
        }
        if (((TStack_5b8.CurrentBitIndex == uVar11._4_4_) && (TStack_5b8.Array == pTStack_640)) &&
           (pTVar18 == pTVar2)) break;
        lVar23 = *(longlong *)pTVar18;
        lVar24 = *(longlong *)((longlong)TStack_5b8.CurrentBitIndex * 0x20 + lVar23);
        if (lVar24 != 0) {
          pFVar3 = *(FActorHandle **)((longlong)TStack_5b8.CurrentBitIndex * 0x20 + 8 + lVar23);
          this_00 = (FBodyInstance *)(lVar24 + 0x390);
          FBodyInstance::GetUnrealWorldTransform(this_00,&local_198,true,false);
          dVar112 = local_198.Rotation.ZW.m128d_f64[1];
          dVar108 = local_198.Rotation.ZW.m128d_f64[0];
          dVar101 = local_198.Rotation.XY.m128d_f64[1];
          dVar94 = local_198.Rotation.XY.m128d_f64[0];
          dVar67 = local_198.Translation.ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
          dVar76 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar84 = (param_1->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          local_500 = local_198.Translation.ZW.m128d_f64[0];
          auVar54._8_4_ = SUB84(dVar84,0);
          auVar54._0_8_ = dVar76;
          auVar54._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
          local_538 = local_198.Rotation.ZW.m128d_f64[0];
          dStack_530 = local_198.Rotation.ZW.m128d_f64[1];
          auVar61._0_8_ =
               (param_1->Rotation).ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          auVar61._8_8_ =
               (param_1->Rotation).ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          local_548 = local_198.Rotation.XY.m128d_f64[0];
          dStack_540 = local_198.Rotation.XY.m128d_f64[1];
          auVar55 = blendpd(auVar54,auVar61,2);
          auVar26._8_4_ = SUB84(auVar61._0_8_,0);
          auVar26._0_8_ = dVar84;
          auVar26._12_4_ = (int)((ulonglong)auVar61._0_8_ >> 0x20);
          local_510 = local_198.Translation.XY.m128d_f64[0];
          dStack_508 = local_198.Translation.XY.m128d_f64[1];
          dVar102 = local_198.Translation.XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
          dVar106 = local_198.Translation.XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
          auVar95._8_4_ = SUB84(dVar106,0);
          auVar95._0_8_ = dVar102;
          uVar52 = (undefined4)((ulonglong)dVar106 >> 0x20);
          auVar95._12_4_ = uVar52;
          auVar43._8_4_ = SUB84(dVar106,0);
          auVar43._0_8_ = dVar102;
          auVar43._12_4_ = uVar52;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = dVar67;
          auVar44 = blendpd(auVar43,auVar4,2);
          auVar96._0_8_ = auVar95._8_8_ * dVar76 - dVar84 * dVar102;
          auVar96._8_8_ = dVar67 * dVar84 - auVar26._8_8_ * dVar106;
          auVar86._8_4_ = SUB84(auVar96._8_8_,0);
          auVar86._0_8_ = auVar96._0_8_;
          auVar86._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
          auVar45._0_8_ = auVar44._0_8_ * auVar61._0_8_ - auVar55._0_8_ * dVar67;
          auVar45._8_8_ = auVar44._8_8_ * auVar61._8_8_ - auVar55._8_8_ * 0.0;
          dVar85 = auVar86._8_8_ + auVar86._8_8_;
          dVar93 = auVar45._0_8_ + auVar45._0_8_;
          auVar44 = blendpd(auVar96,auVar45,2);
          auVar97._0_8_ = auVar44._0_8_ + auVar44._0_8_;
          auVar97._8_8_ = auVar44._8_8_ + auVar44._8_8_;
          uVar52 = SUB84(dVar93,0);
          auVar77._8_4_ = uVar52;
          auVar77._0_8_ = dVar85;
          uVar82 = (undefined4)((ulonglong)dVar93 >> 0x20);
          auVar77._12_4_ = uVar82;
          auVar27._8_4_ = uVar52;
          auVar27._0_8_ = dVar85;
          auVar27._12_4_ = uVar82;
          auVar68._8_4_ = uVar52;
          auVar68._0_8_ = dVar85;
          auVar68._12_4_ = uVar82;
          auVar109._0_8_ =
               (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 4),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                *(uint *)(param_1->Scale3D).XY.m128d_f64);
          auVar109._8_4_ = _UNK_15061cc88 & *(uint *)((param_1->Scale3D).XY.m128d_f64 + 1);
          auVar109._12_4_ =
               _UNK_15061cc8c & *(uint *)((longlong)(param_1->Scale3D).XY.m128d_f64 + 0xc);
          auVar78._0_8_ = auVar77._8_8_ * dVar76 - dVar85 * dVar84;
          auVar78._8_8_ = auVar97._0_8_ * dVar84 - auVar27._8_8_ * auVar61._0_8_;
          auVar44 = blendpd(auVar68,auVar97,2);
          auVar6._4_8_ = auVar61._8_8_;
          auVar6._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
          auVar62._0_8_ = auVar6._0_8_ << 0x20;
          auVar62._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
          auVar62._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
          auVar28._8_4_ = SUB84(auVar97._8_8_,0);
          auVar28._0_8_ = auVar97._0_8_;
          auVar28._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
          auVar69._0_8_ = auVar44._0_8_ * auVar61._0_8_ - auVar97._0_8_ * auVar55._0_8_;
          auVar69._8_8_ = auVar44._8_8_ * auVar61._8_8_ - auVar28._8_8_ * auVar55._8_8_;
          auVar44 = *(undefined1 (*) [16])(param_1->Scale3D).ZW.m128d_f64;
          auVar63._8_8_ = auVar62._8_8_;
          auVar63._0_8_ = auVar44._0_8_;
          lVar23 = -(ulonglong)
                    ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar44._4_4_,
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar44._0_4_)
                    <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                          *(undefined1 (*) [16])(param_1->Scale3D).XY.m128d_f64);
          local_558 = 0;
          uStack_550 = 0;
          lVar24 = -(ulonglong)
                    (auVar109._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar25 = -(ulonglong)
                    (auVar109._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar110._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                                ~(uint)lVar24 & auVar44._0_4_);
          auVar110._8_4_ = ~(uint)lVar25 & auVar44._8_4_;
          auVar110._12_4_ = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar44._12_4_;
          auVar29._8_4_ = SUB84(auVar78._8_8_,0);
          auVar29._0_8_ = auVar78._0_8_;
          auVar29._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar63);
          local_368 = auVar110._0_8_ * (dVar85 * auVar61._8_8_ + dVar102 + auVar29._8_8_);
          dStack_360 = auVar110._8_8_ * (dVar93 * auVar61._8_8_ + dVar106 + auVar69._0_8_);
          dVar85 = (param_1->Rotation).ZW.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar93 = (param_1->Rotation).ZW.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          auVar55 = blendpd(auVar78,auVar69,2);
          auVar70._8_4_ = SUB84(dVar93,0);
          auVar70._0_8_ = dVar85;
          auVar70._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
          dVar76 = (param_1->Rotation).XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar84 = (param_1->Rotation).XY.m128d_f64[1] *
                   GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          local_358 = (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar44._4_4_,
                                       ~(uint)lVar23 & auVar44._0_4_) *
                      (auVar97._0_8_ * auVar61._8_8_ + dVar67 + auVar55._0_8_);
          auVar30._8_4_ = SUB84(dVar85,0);
          auVar30._0_8_ = dVar85;
          auVar30._12_4_ = (int)((ulonglong)dVar85 >> 0x20);
          dVar67 = local_198.Rotation.ZW.m128d_f64[0] * dVar76 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   local_198.Rotation.XY.m128d_f64[1] * dVar93 +
                   local_198.Rotation.ZW.m128d_f64[1] * dVar84 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                   auVar30._8_8_ * local_198.Rotation.XY.m128d_f64[0] *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          local_258.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar67,0);
          local_258.Rotation.XY.m128d_f64[0] =
               local_198.Rotation.ZW.m128d_f64[1] * dVar76 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_198.Rotation.XY.m128d_f64[0] * auVar70._8_8_ +
               local_198.Rotation.ZW.m128d_f64[0] * dVar84 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar85 * local_198.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_258.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar67 >> 0x20);
          auVar7._4_8_ = local_198.Rotation.ZW.m128d_f64[1] * dVar93;
          auVar7._0_4_ = (int)((ulonglong)local_368 >> 0x20);
          auVar31._0_8_ = auVar7._0_8_ << 0x20;
          auVar31._8_4_ = SUB84(dStack_360,0);
          auVar31._12_4_ = (int)((ulonglong)dStack_360 >> 0x20);
          local_258.Translation.XY.m128d_f64[1] = auVar31._8_8_;
          local_258.Rotation.ZW.m128d_f64[0] =
               dVar76 * local_198.Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_198.Rotation.ZW.m128d_f64[0] * auVar70._8_8_ +
               local_198.Rotation.XY.m128d_f64[0] * dVar84 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar85 * local_198.Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_258.Rotation.ZW.m128d_f64[1] =
               dVar76 * local_198.Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               local_198.Rotation.ZW.m128d_f64[1] * dVar93 +
               local_198.Rotation.XY.m128d_f64[1] * dVar84 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar85 * local_198.Rotation.ZW.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_258.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
          ;
          local_258.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y
          ;
          local_258.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
          ;
          local_258.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_258.Translation.ZW.m128d_f64[1] = 0.0;
          local_258.Translation.XY.m128d_f64[0] = local_368;
          local_258.Translation.ZW.m128d_f64[0] = local_358;
          FBodyInstance::GetUnrealWorldVelocity(this_00,&local_338);
          FBodyInstance::GetUnrealWorldAngularVelocityInRadians
                    (this_00,(TVector<double> *)&local_528._s_0);
          local_4f8.W = 0.0;
          local_4f8.X = local_528._s_0.X * (double)local_660 *
                        ___xmm_3fe00000000000003fe0000000000000;
          local_4f8.Y = local_528._s_0.Y * (double)local_660 * _UNK_150689678;
          local_4f8.Z = local_528._s_0.Z * (double)local_660 *
                        ___xmm_3fe00000000000003fe0000000000000;
          UE::Math::TQuat<double>::Exp(&local_4f8,&local_318);
          dVar107 = local_428 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar111 = dStack_420 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar76 = local_4d8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar84 = dStack_4d0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          uVar113 = (undefined4)((ulonglong)dVar111 >> 0x20);
          dVar85 = local_500 - local_438;
          dVar102 = local_510 - local_448;
          dVar106 = dStack_508 - dStack_440;
          local_488._8_8_ = 0;
          local_488._0_8_ = dVar85;
          uVar52 = (undefined4)((ulonglong)dVar76 >> 0x20);
          auVar32._8_4_ = SUB84(dVar76,0);
          auVar32._0_8_ = dVar111;
          auVar32._12_4_ = uVar52;
          auVar87._8_4_ = SUB84(dVar106,0);
          auVar87._0_8_ = dVar102;
          uVar82 = (undefined4)((ulonglong)dVar106 >> 0x20);
          auVar87._12_4_ = uVar82;
          auVar56._8_4_ = SUB84(dVar111,0);
          auVar56._0_8_ = dVar107;
          auVar56._12_4_ = uVar113;
          auVar98._0_8_ =
               (double)CONCAT44(uStack_4b4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_4b8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          auVar98._8_4_ = uStack_4b0 & _UNK_15061cc88;
          auVar98._12_4_ = uStack_4ac & _UNK_15061cc8c;
          auVar46._8_4_ = SUB84(dVar106,0);
          auVar46._0_8_ = dVar102;
          auVar46._12_4_ = uVar82;
          auVar5._8_4_ = SUB84(dVar84,0);
          auVar5._0_8_ = dVar76;
          auVar5._12_4_ = (int)((ulonglong)dVar84 >> 0x20);
          auVar55 = blendpd(auVar56,auVar5,2);
          auVar44 = blendpd(auVar46,local_488,2);
          auVar88._0_8_ = auVar87._8_8_ * dVar107 - dVar111 * dVar102;
          auVar88._8_8_ = dVar85 * dVar111 - auVar32._8_8_ * dVar106;
          auVar79._8_4_ = SUB84(auVar88._8_8_,0);
          auVar79._0_8_ = auVar88._0_8_;
          auVar79._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
          auVar47._0_8_ = auVar44._0_8_ * dVar76 - auVar55._0_8_ * dVar85;
          auVar47._8_8_ = auVar44._8_8_ * dVar84 - auVar55._8_8_ * 0.0;
          dVar67 = auVar79._8_8_ + auVar79._8_8_;
          dVar93 = auVar47._0_8_ + auVar47._0_8_;
          auVar44 = blendpd(auVar88,auVar47,2);
          auVar89._0_8_ = auVar44._0_8_ + auVar44._0_8_;
          auVar89._8_8_ = auVar44._8_8_ + auVar44._8_8_;
          uVar82 = SUB84(dVar93,0);
          auVar71._8_4_ = uVar82;
          auVar71._0_8_ = dVar67;
          uVar83 = (undefined4)((ulonglong)dVar93 >> 0x20);
          auVar71._12_4_ = uVar83;
          auVar33._8_4_ = uVar82;
          auVar33._0_8_ = dVar67;
          auVar33._12_4_ = uVar83;
          auVar64._8_4_ = uVar82;
          auVar64._0_8_ = dVar67;
          auVar64._12_4_ = uVar83;
          auVar44 = blendpd(auVar64,auVar89,2);
          auVar72._0_8_ = auVar71._8_8_ * dVar107 - dVar67 * dVar111;
          auVar72._8_8_ = auVar89._0_8_ * dVar111 - auVar33._8_8_ * dVar76;
          auVar34._8_4_ = SUB84(auVar89._8_8_,0);
          auVar34._0_8_ = auVar89._0_8_;
          auVar34._12_4_ = (int)((ulonglong)auVar89._8_8_ >> 0x20);
          auVar65._0_8_ = auVar44._0_8_ * dVar76 - auVar89._0_8_ * auVar55._0_8_;
          auVar65._8_8_ = auVar44._8_8_ * dVar84 - auVar34._8_8_ * auVar55._8_8_;
          auVar60._8_8_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
          auVar60._0_8_ = local_4c8;
          lVar23 = -(ulonglong)
                    ((double)CONCAT44((uint)((ulonglong)local_4c8 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(local_4c8,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
                    (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
          auVar14._4_4_ = uStack_4b4;
          auVar14._0_4_ = local_4b8;
          auVar14._8_4_ = uStack_4b0;
          auVar14._12_4_ = uStack_4ac;
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
          lVar24 = -(ulonglong)
                    (auVar98._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
          lVar25 = -(ulonglong)
                    (auVar98._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
          auVar99._0_8_ =
               (double)CONCAT44(~(uint)((ulonglong)lVar24 >> 0x20) & auVar44._4_4_,
                                ~(uint)lVar24 & auVar44._0_4_);
          auVar99._8_4_ = ~(uint)lVar25 & auVar44._8_4_;
          auVar99._12_4_ = ~(uint)((ulonglong)lVar25 >> 0x20) & auVar44._12_4_;
          auVar35._8_4_ = SUB84(auVar72._8_8_,0);
          auVar35._0_8_ = auVar72._0_8_;
          auVar35._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
          auVar55 = blendpd(auVar72,auVar65,2);
          auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar60);
          uVar53 = (uint)lVar23;
          uVar59 = (uint)((ulonglong)lVar23 >> 0x20);
          local_350 = auVar99._0_8_ * (dVar67 * dVar84 + dVar102 + auVar35._8_8_);
          dStack_348 = auVar99._8_8_ * (dVar93 * dVar84 + dVar106 + auVar65._0_8_);
          auVar48._8_4_ = SUB84(dVar111,0);
          auVar48._0_8_ = dVar111;
          auVar48._12_4_ = uVar113;
          auVar36._8_4_ = SUB84(dVar76,0);
          auVar36._0_8_ = dVar76;
          auVar36._12_4_ = uVar52;
          dVar93 = auVar36._8_8_ * dVar94 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar67 = dVar107 * dVar108 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                   dStack_540 * dVar84 +
                   auVar48._8_8_ * dStack_530 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar93;
          local_2b8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar67,0);
          local_2b8.Rotation.XY.m128d_f64[0] =
               dVar107 * dVar112 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               local_548 * dVar84 +
               dVar111 * local_538 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
               + dVar76 * dVar101 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          local_2b8.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar67 >> 0x20);
          auVar8._4_8_ = dVar93;
          auVar8._0_4_ = (int)((ulonglong)local_350 >> 0x20);
          auVar37._0_8_ = auVar8._0_8_ << 0x20;
          auVar37._8_4_ = SUB84(dStack_348,0);
          auVar37._12_4_ = (int)((ulonglong)dStack_348 >> 0x20);
          local_2b8.Translation.XY.m128d_f64[1] = auVar37._8_8_;
          local_340 = (double)(CONCAT44(~uVar59 & auVar44._4_4_,~uVar53 & auVar44._0_4_) |
                              CONCAT44(uVar59 & local_558._4_4_,uVar53 & (uint)local_558)) *
                      (auVar89._0_8_ * dVar84 + dVar85 + auVar55._0_8_);
          local_2b8.Rotation.ZW.m128d_f64[0] =
               dVar107 * dVar101 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               local_538 * dVar84 +
               dVar111 * local_548 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
               + dVar76 * dVar112 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          local_2b8.Rotation.ZW.m128d_f64[1] =
               dVar107 * dVar94 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               dStack_530 * dVar84 +
               dVar111 * dStack_540 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar76 * dVar108 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          local_2b8.Scale3D.XY.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
          ;
          local_2b8.Scale3D.XY.m128d_f64[1] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y
          ;
          local_2b8.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
          ;
          local_2b8.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_2b8.Translation.ZW.m128d_f64[1] = 0.0;
          local_2b8.Translation.XY.m128d_f64[0] = local_350;
          local_2b8.Translation.ZW.m128d_f64[0] = local_340;
          ImmediatePhysics_Chaos::FActorHandle::InitWorldTransform(pFVar3,&local_2b8);
          ImmediatePhysics_Chaos::FActorHandle::SetKinematicTarget(pFVar3,&local_258);
        }
        TStack_5b8.UnvisitedBitMask = TStack_5b8.UnvisitedBitMask & ~TStack_5b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5b8);
      }
    }
  }
  FMemScope::~FMemScope(&local_5c8);
  FLLMScope::~FLLMScope(&local_664);
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// operator() @ 150588870

bool __thiscall
`FAnimNode_RigidBodyWithControl::InitializeBoneReferences'::__l54::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  UObject *pUVar6;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4793787774169778067>);
  if (bVar4) {
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x38));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10.ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res10.Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(&local_res10,&local_28);
    }
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x40));
    if (pUVar6 == (UObject *)0x0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar6->field_0x18;
      local_res18[0].Number = *(uint *)&pUVar6->field_0x1c;
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4793787774169778067>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150588971;
    }
  }
  bVar4 = false;
LAB_150588971:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505889c0

bool __thiscall
`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l99::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4793787774169776751>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4793787774169776751>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150588a00

bool __thiscall
`FAnimNode_RigidBodyWithControl::EvaluateSkeletalControl_AnyThread'::__l193::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4793787774169776980>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4793787774169776980>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

