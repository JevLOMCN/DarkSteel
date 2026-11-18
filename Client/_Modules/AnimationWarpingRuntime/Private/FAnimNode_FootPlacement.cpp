// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationWarpingRuntime
// Functions: 35

// StaticStruct @ 14a713f30

UScriptStruct * __cdecl FAnimNode_FootPlacement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationWarpingRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootPlacement,(UObject *)pUVar1,
                         L"AnimNode_FootPlacement");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_FootPlacement.OuterSingleton;
}

// FAnimNode_FootPlacement @ 14a71ac60

/* WARNING: Type propagation algorithm not settling */

FAnimNode_FootPlacement * __thiscall
FAnimNode_FootPlacement::FAnimNode_FootPlacement(FAnimNode_FootPlacement *this)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  
  FAnimNode_SkeletalControlBase::FAnimNode_SkeletalControlBase
            ((FAnimNode_SkeletalControlBase *)this);
  this->PlantSpeedMode = Manual;
  *(undefined ***)this = &___7FAnimNode_FootPlacement__6B_;
  (this->IKFootRootBone).BoneName.ComparisonIndex = 0;
  (this->IKFootRootBone).BoneName.Number = 0;
  (this->IKFootRootBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  puVar1 = &(this->IKFootRootBone).field_0x8;
  (this->IKFootRootBone).BoneIndex = -1;
  (this->IKFootRootBone).bUseSkeletonIndex = 0;
  (this->PelvisBone).BoneName.ComparisonIndex = 0;
  (this->PelvisBone).BoneName.Number = 0;
  puVar1 = &(this->PelvisBone).field_0x8;
  (this->PelvisBone).BoneIndex = -1;
  (this->PelvisBone).bUseSkeletonIndex = 0;
  (this->PelvisBone).CachedCompactPoseIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PelvisSettings).MaxOffset = 50.0;
  (this->PelvisSettings).LinearStiffness = 350.0;
  (this->PelvisSettings).LinearDamping = 1.0;
  (this->PelvisSettings).HorizontalRebalancingWeight = 0.3;
  (this->PelvisSettings).MaxOffsetHorizontal = 10.0;
  (this->PelvisSettings).HeelLiftRatio = 0.5;
  (this->PelvisSettings).PelvisHeightMode = AllLegs;
  (this->PelvisSettings).ActorMovementCompensationMode = SuddenMotionOnly;
  (this->PelvisSettings).bEnableInterpolation = true;
  (this->PelvisSettings).bDisablePelvisOffsetInAir = true;
  (this->PelvisSettings).DisablePelvisCurveName.ComparisonIndex = 0;
  (this->PelvisSettings).DisablePelvisCurveName.Number = 0;
  (this->LegDefinitions).ArrayNum = 0;
  (this->LegDefinitions).ArrayMax = 0;
  (this->PlantSettings).SpeedThreshold = 60.0;
  (this->PlantSettings).DistanceToGround = 10.0;
  (this->PlantSettings).LockType = PivotAroundBall;
  (this->PlantSettings).UnplantRadius = 35.0;
  (this->PlantSettings).ReplantRadiusRatio = 0.35;
  (this->PlantSettings).UnplantAngle = 45.0;
  (this->PlantSettings).ReplantAngleRatio = 0.5;
  (this->PlantSettings).MaxExtensionRatio = 0.5;
  (this->PlantSettings).MinExtensionRatio = 0.2;
  (this->PlantSettings).SeparatingDistance = 0.0;
  (this->PlantSettings).UnalignmentSpeedThreshold = 200.0;
  (this->PlantSettings).AnkleTwistReduction = 0.75;
  (this->PlantSettings).bReconstructWorldPlantFromVelocity = false;
  (this->PlantSettings).bAdjustHeelBeforePlanting = false;
  (this->InterpolationSettings).UnplantLinearStiffness = 250.0;
  (this->InterpolationSettings).UnplantLinearDamping = 1.0;
  (this->InterpolationSettings).UnplantAngularStiffness = 450.0;
  (this->InterpolationSettings).UnplantAngularDamping = 1.0;
  (this->InterpolationSettings).SeparationStiffness = 1000.0;
  (this->InterpolationSettings).SeparationDamping = 1.0;
  (this->InterpolationSettings).FloorLinearStiffness = 1000.0;
  (this->InterpolationSettings).FloorLinearDamping = 1.0;
  (this->InterpolationSettings).FloorAngularStiffness = 450.0;
  (this->InterpolationSettings).FloorAngularDamping = 1.0;
  (this->InterpolationSettings).bEnableFloorInterpolation = true;
  (this->InterpolationSettings).bSmoothRootBone = false;
  (this->InterpolationSettings).bEnableSeparationInterpolation = true;
  (this->TraceSettings).StartOffset = -75.0;
  (this->TraceSettings).EndOffset = 100.0;
  (this->TraceSettings).SweepRadius = 5.0;
  (this->TraceSettings).bDisableComplexTrace = false;
  (this->TraceSettings).ComplexTraceChannel = '\0';
  (this->TraceSettings).MaxGroundPenetration = 10.0;
  (this->TraceSettings).SimpleTraceChannel = '\0';
  (this->TraceSettings).bEnabled = true;
  (this->LegDefinitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BaseTranslationDelta).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BaseTranslationDelta).field0_0x0._s_0.Y = (double)uVar2;
  (this->BaseTranslationDelta).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CachedDeltaTime = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastComponentLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastComponentLocation).field0_0x0._s_0.Y = (double)uVar2;
  (this->LastComponentLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LegsData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LegsData).ArrayNum = 0;
  (this->LegsData).ArrayMax = 0;
  (this->PlantRuntimeSettings).UnplantRadiusSqrd = 0.0;
  (this->PlantRuntimeSettings).ReplantRadiusSqrd = 0.0;
  (this->PlantRuntimeSettings).CosHalfUnplantAngle = 0.0;
  (this->PlantRuntimeSettings).CosHalfReplantAngle = 0.0;
  (this->PelvisData).Bones.FkBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PelvisData).Bones.IkBoneIndex = (FCompactPoseBoneIndex)0xffffffff;
  (this->PelvisData).MaxOffsetSqrd = 0.0;
  *&(this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PelvisData).InputPose.IKRootTransformCS.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y = (double)uVar2;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y = (double)uVar2;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Y =
       (double)uVar2;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Y =
       (double)uVar2;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.bPrevTargetValid = false;
  (this->PelvisData).DisablePelvis = 0.0;
  *&(this->CharacterData).ComponentTransformWS.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->CharacterData).ComponentTransformWS.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->CharacterData).ComponentTransformWS.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->CharacterData).ComponentTransformWS.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->CharacterData).ComponentTransformWS.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = UE::Math::TQuat<double>::Identity.Y;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.X =
       UE::Math::TQuat<double>::Identity.X;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.Y = dVar3;
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.Z =
       UE::Math::TQuat<double>::Identity.Z;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.W = dVar3;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.Y =
       (double)uVar2;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CharacterData).SmoothCapsuleGroundNormalSpringState.bPrevTargetValid = false;
  (this->CharacterData).bIsOnGround = false;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DebugData).OutputFootLocationsWS.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).OutputFootLocationsWS.ArrayNum = 0;
  (this->DebugData).OutputFootLocationsWS.ArrayMax = 0;
  (this->DebugData).InputFootLocationsWS.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).InputFootLocationsWS.ArrayNum = 0;
  (this->DebugData).InputFootLocationsWS.ArrayMax = 0;
  (this->DebugData).LegsInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).LegsInfo.ArrayNum = 0;
  (this->DebugData).LegsInfo.ArrayMax = 0;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  this->bIsFirstUpdate = false;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  return this;
}

// ~FAnimNode_FootPlacement @ 14a71c0f0

void __thiscall FAnimNode_FootPlacement::~FAnimNode_FootPlacement(FAnimNode_FootPlacement *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DebugData).LegsInfo.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugData).InputFootLocationsWS.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugData).OutputFootLocationsWS.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LegsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LegDefinitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7FAnimNode_SkeletalControlBase__6B_;
  if (*(void **)&this->field_0xb8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xb8);
  }
  *(undefined ***)this = &___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14a71c240

/* WARNING: Type propagation algorithm not settling */

FAnimNode_FootPlacement * __thiscall
FAnimNode_FootPlacement::operator=(FAnimNode_FootPlacement *this,FAnimNode_FootPlacement *param_1)

{
  int *piVar1;
  TArray<FFootPlacemenLegDefinition,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Anim::FootPlacement::FLegRuntimeData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Anim::FootPlacement::FDebugData::FLegInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Anim::FootPlacement::FDebugData::FLegInfo,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  EPelvisHeightMode EVar15;
  EActorMovementCompensationMode EVar16;
  bool bVar17;
  bool bVar18;
  FNameEntryId FVar19;
  EFootPlacementLockType EVar20;
  undefined3 uVar21;
  undefined2 uVar22;
  undefined1 uVar23;
  TEnumAsByte<ETraceTypeQuery> TVar24;
  undefined7 uVar25;
  short sVar26;
  short sVar27;
  FInputPoseData *pFVar28;
  FInputPoseData *pFVar29;
  FInputPoseData *pFVar30;
  FCharacterData *pFVar31;
  FInputPoseData *pFVar32;
  FCharacterData *pFVar33;
  longlong lVar34;
  longlong lVar35;
  
  FAnimNode_SkeletalControlBase::operator=
            ((FAnimNode_SkeletalControlBase *)this,(FAnimNode_SkeletalControlBase *)param_1);
  pTVar2 = &this->LegDefinitions;
  this->PlantSpeedMode = param_1->PlantSpeedMode;
  (this->IKFootRootBone).BoneName = (param_1->IKFootRootBone).BoneName;
  uVar6 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (uVar6 ^ *(uint *)&(this->IKFootRootBone).field_0x8) & 0x80000000 ^ uVar6;
  uVar7 = *(undefined4 *)&(param_1->IKFootRootBone).field_0x8;
  *(uint *)&(this->IKFootRootBone).field_0x8 =
       (SPULL(uVar7,0,0x1f) ^ SPULL(uVar6,0,0x1f)) & 0x7fffffffU ^ uVar7;
  (this->IKFootRootBone).CachedCompactPoseIndex = (param_1->IKFootRootBone).CachedCompactPoseIndex;
  (this->PelvisBone).BoneName = (param_1->PelvisBone).BoneName;
  uVar6 = *(undefined4 *)&(param_1->PelvisBone).field_0x8;
  *(uint *)&(this->PelvisBone).field_0x8 =
       (uVar6 ^ *(uint *)&(this->PelvisBone).field_0x8) & 0x80000000 ^ uVar6;
  uVar7 = *(undefined4 *)&(param_1->PelvisBone).field_0x8;
  *(uint *)&(this->PelvisBone).field_0x8 =
       (SPULL(uVar7,0,0x1f) ^ SPULL(uVar6,0,0x1f)) & 0x7fffffffU ^ uVar7;
  (this->PelvisBone).CachedCompactPoseIndex = (param_1->PelvisBone).CachedCompactPoseIndex;
  fVar12 = (param_1->PelvisSettings).LinearStiffness;
  fVar13 = (param_1->PelvisSettings).LinearDamping;
  fVar14 = (param_1->PelvisSettings).HorizontalRebalancingWeight;
  (this->PelvisSettings).MaxOffset = (param_1->PelvisSettings).MaxOffset;
  (this->PelvisSettings).LinearStiffness = fVar12;
  (this->PelvisSettings).LinearDamping = fVar13;
  (this->PelvisSettings).HorizontalRebalancingWeight = fVar14;
  fVar12 = (param_1->PelvisSettings).HeelLiftRatio;
  EVar15 = (param_1->PelvisSettings).PelvisHeightMode;
  EVar16 = (param_1->PelvisSettings).ActorMovementCompensationMode;
  bVar17 = (param_1->PelvisSettings).bEnableInterpolation;
  bVar18 = (param_1->PelvisSettings).bDisablePelvisOffsetInAir;
  FVar19.Value = (param_1->PelvisSettings).DisablePelvisCurveName.ComparisonIndex.Value;
  (this->PelvisSettings).MaxOffsetHorizontal = (param_1->PelvisSettings).MaxOffsetHorizontal;
  (this->PelvisSettings).HeelLiftRatio = fVar12;
  (this->PelvisSettings).PelvisHeightMode = EVar15;
  (this->PelvisSettings).ActorMovementCompensationMode = EVar16;
  (this->PelvisSettings).bEnableInterpolation = bVar17;
  (this->PelvisSettings).bDisablePelvisOffsetInAir = bVar18;
  (this->PelvisSettings).DisablePelvisCurveName.ComparisonIndex = (FNameEntryId)FVar19.Value;
  (this->PelvisSettings).DisablePelvisCurveName.Number =
       (param_1->PelvisSettings).DisablePelvisCurveName.Number;
  if (pTVar2 != &param_1->LegDefinitions) {
    iVar8 = (param_1->LegDefinitions).ArrayNum;
    piVar1 = &(this->LegDefinitions).ArrayMax;
    pFVar10 = (param_1->LegDefinitions).AllocatorInstance.Data;
    (this->LegDefinitions).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x4c,4,iVar8,*piVar1,&pTVar2->AllocatorInstance,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar8 * 0x4c);
      }
    }
  }
  fVar12 = (param_1->PlantSettings).DistanceToGround;
  EVar20 = (param_1->PlantSettings).LockType;
  uVar21 = *(undefined3 *)&(param_1->PlantSettings).field_0x9;
  fVar13 = (param_1->PlantSettings).UnplantRadius;
  pTVar3 = &this->LegsData;
  (this->PlantSettings).SpeedThreshold = (param_1->PlantSettings).SpeedThreshold;
  (this->PlantSettings).DistanceToGround = fVar12;
  (this->PlantSettings).LockType = EVar20;
  *(undefined3 *)&(this->PlantSettings).field_0x9 = uVar21;
  (this->PlantSettings).UnplantRadius = fVar13;
  fVar12 = (param_1->PlantSettings).UnplantAngle;
  fVar13 = (param_1->PlantSettings).ReplantAngleRatio;
  fVar14 = (param_1->PlantSettings).MaxExtensionRatio;
  (this->PlantSettings).ReplantRadiusRatio = (param_1->PlantSettings).ReplantRadiusRatio;
  (this->PlantSettings).UnplantAngle = fVar12;
  (this->PlantSettings).ReplantAngleRatio = fVar13;
  (this->PlantSettings).MaxExtensionRatio = fVar14;
  fVar12 = (param_1->PlantSettings).SeparatingDistance;
  fVar13 = (param_1->PlantSettings).UnalignmentSpeedThreshold;
  fVar14 = (param_1->PlantSettings).AnkleTwistReduction;
  (this->PlantSettings).MinExtensionRatio = (param_1->PlantSettings).MinExtensionRatio;
  (this->PlantSettings).SeparatingDistance = fVar12;
  (this->PlantSettings).UnalignmentSpeedThreshold = fVar13;
  (this->PlantSettings).AnkleTwistReduction = fVar14;
  bVar17 = (param_1->PlantSettings).bAdjustHeelBeforePlanting;
  uVar22 = *(undefined2 *)&(param_1->PlantSettings).field_0x32;
  (this->PlantSettings).bReconstructWorldPlantFromVelocity =
       (param_1->PlantSettings).bReconstructWorldPlantFromVelocity;
  (this->PlantSettings).bAdjustHeelBeforePlanting = bVar17;
  *(undefined2 *)&(this->PlantSettings).field_0x32 = uVar22;
  fVar12 = (param_1->InterpolationSettings).UnplantLinearDamping;
  fVar13 = (param_1->InterpolationSettings).UnplantAngularStiffness;
  fVar14 = (param_1->InterpolationSettings).UnplantAngularDamping;
  (this->InterpolationSettings).UnplantLinearStiffness =
       (param_1->InterpolationSettings).UnplantLinearStiffness;
  (this->InterpolationSettings).UnplantLinearDamping = fVar12;
  (this->InterpolationSettings).UnplantAngularStiffness = fVar13;
  (this->InterpolationSettings).UnplantAngularDamping = fVar14;
  fVar12 = (param_1->InterpolationSettings).SeparationDamping;
  fVar13 = (param_1->InterpolationSettings).FloorLinearStiffness;
  fVar14 = (param_1->InterpolationSettings).FloorLinearDamping;
  (this->InterpolationSettings).SeparationStiffness =
       (param_1->InterpolationSettings).SeparationStiffness;
  (this->InterpolationSettings).SeparationDamping = fVar12;
  (this->InterpolationSettings).FloorLinearStiffness = fVar13;
  (this->InterpolationSettings).FloorLinearDamping = fVar14;
  fVar12 = (param_1->InterpolationSettings).FloorAngularDamping;
  (this->InterpolationSettings).FloorAngularStiffness =
       (param_1->InterpolationSettings).FloorAngularStiffness;
  (this->InterpolationSettings).FloorAngularDamping = fVar12;
  bVar17 = (param_1->InterpolationSettings).bSmoothRootBone;
  bVar18 = (param_1->InterpolationSettings).bEnableSeparationInterpolation;
  uVar23 = (param_1->InterpolationSettings).field_0x2b;
  (this->InterpolationSettings).bEnableFloorInterpolation =
       (param_1->InterpolationSettings).bEnableFloorInterpolation;
  (this->InterpolationSettings).bSmoothRootBone = bVar17;
  (this->InterpolationSettings).bEnableSeparationInterpolation = bVar18;
  (this->InterpolationSettings).field_0x2b = uVar23;
  fVar12 = (param_1->TraceSettings).EndOffset;
  fVar13 = (param_1->TraceSettings).SweepRadius;
  bVar17 = (param_1->TraceSettings).bDisableComplexTrace;
  TVar24.Value = (param_1->TraceSettings).ComplexTraceChannel.Value;
  uVar22 = *(undefined2 *)&(param_1->TraceSettings).field_0xe;
  (this->TraceSettings).StartOffset = (param_1->TraceSettings).StartOffset;
  (this->TraceSettings).EndOffset = fVar12;
  (this->TraceSettings).SweepRadius = fVar13;
  (this->TraceSettings).bDisableComplexTrace = bVar17;
  (this->TraceSettings).ComplexTraceChannel = (TEnumAsByte<ETraceTypeQuery>)TVar24.Value;
  *(undefined2 *)&(this->TraceSettings).field_0xe = uVar22;
  TVar24.Value = (param_1->TraceSettings).SimpleTraceChannel.Value;
  bVar17 = (param_1->TraceSettings).bEnabled;
  uVar22 = *(undefined2 *)&(param_1->TraceSettings).field_0x16;
  (this->TraceSettings).MaxGroundPenetration = (param_1->TraceSettings).MaxGroundPenetration;
  (this->TraceSettings).SimpleTraceChannel = (TEnumAsByte<ETraceTypeQuery>)TVar24.Value;
  (this->TraceSettings).bEnabled = bVar17;
  *(undefined2 *)&(this->TraceSettings).field_0x16 = uVar22;
  dVar11 = (param_1->BaseTranslationDelta).field0_0x0._s_0.Y;
  (this->BaseTranslationDelta).field0_0x0._s_0.X = (param_1->BaseTranslationDelta).field0_0x0._s_0.X
  ;
  (this->BaseTranslationDelta).field0_0x0._s_0.Y = dVar11;
  (this->BaseTranslationDelta).field0_0x0._s_0.Z = (param_1->BaseTranslationDelta).field0_0x0._s_0.Z
  ;
  this->CachedDeltaTime = param_1->CachedDeltaTime;
  dVar11 = (param_1->LastComponentLocation).field0_0x0._s_0.Y;
  (this->LastComponentLocation).field0_0x0._s_0.X =
       (param_1->LastComponentLocation).field0_0x0._s_0.X;
  (this->LastComponentLocation).field0_0x0._s_0.Y = dVar11;
  (this->LastComponentLocation).field0_0x0._s_0.Z =
       (param_1->LastComponentLocation).field0_0x0._s_0.Z;
  if (pTVar3 != &param_1->LegsData) {
    iVar8 = (param_1->LegsData).ArrayNum;
    piVar1 = &(this->LegsData).ArrayMax;
    pFVar10 = (param_1->LegsData).AllocatorInstance.Data;
    (this->LegsData).ArrayNum = iVar8;
    if ((iVar8 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x6c0,0x10,iVar8,*piVar1,&pTVar3->AllocatorInstance,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar10,(longlong)iVar8 * 0x6c0);
      }
    }
  }
  fVar12 = (param_1->PlantRuntimeSettings).ReplantRadiusSqrd;
  fVar13 = (param_1->PlantRuntimeSettings).CosHalfUnplantAngle;
  fVar14 = (param_1->PlantRuntimeSettings).CosHalfReplantAngle;
  lVar34 = 2;
  lVar35 = 2;
  (this->PlantRuntimeSettings).UnplantRadiusSqrd = (param_1->PlantRuntimeSettings).UnplantRadiusSqrd
  ;
  (this->PlantRuntimeSettings).ReplantRadiusSqrd = fVar12;
  (this->PlantRuntimeSettings).CosHalfUnplantAngle = fVar13;
  (this->PlantRuntimeSettings).CosHalfReplantAngle = fVar14;
  (this->PelvisData).Bones.FkBoneIndex = (param_1->PelvisData).Bones.FkBoneIndex;
  (this->PelvisData).Bones.IkBoneIndex = (param_1->PelvisData).Bones.IkBoneIndex;
  (this->PelvisData).MaxOffsetSqrd = (param_1->PelvisData).MaxOffsetSqrd;
  pFVar28 = &(this->PelvisData).InputPose;
  pFVar29 = &(param_1->PelvisData).InputPose;
  do {
    pFVar32 = pFVar29;
    pFVar30 = pFVar28;
    pFVar28 = (FInputPoseData *)&(pFVar30->IKRootTransformCS).Translation;
    dVar11 = (pFVar32->FKTransformCS).Rotation.XY.m128d_f64[1];
    pFVar29 = (FInputPoseData *)&(pFVar32->IKRootTransformCS).Translation;
    (pFVar30->FKTransformCS).Rotation.XY.m128d_f64[0] =
         (pFVar32->FKTransformCS).Rotation.XY.m128d_f64[0];
    (pFVar30->FKTransformCS).Rotation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->FKTransformCS).Rotation.ZW.m128d_f64[1];
    (pFVar30->FKTransformCS).Rotation.ZW.m128d_f64[0] =
         (pFVar32->FKTransformCS).Rotation.ZW.m128d_f64[0];
    (pFVar30->FKTransformCS).Rotation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->FKTransformCS).Translation.XY.m128d_f64[1];
    (pFVar30->FKTransformCS).Translation.XY.m128d_f64[0] =
         (pFVar32->FKTransformCS).Translation.XY.m128d_f64[0];
    (pFVar30->FKTransformCS).Translation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->FKTransformCS).Translation.ZW.m128d_f64[1];
    (pFVar30->FKTransformCS).Translation.ZW.m128d_f64[0] =
         (pFVar32->FKTransformCS).Translation.ZW.m128d_f64[0];
    (pFVar30->FKTransformCS).Translation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->FKTransformCS).Scale3D.XY.m128d_f64[1];
    (pFVar30->FKTransformCS).Scale3D.XY.m128d_f64[0] =
         (pFVar32->FKTransformCS).Scale3D.XY.m128d_f64[0];
    (pFVar30->FKTransformCS).Scale3D.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->FKTransformCS).Scale3D.ZW.m128d_f64[1];
    (pFVar30->FKTransformCS).Scale3D.ZW.m128d_f64[0] =
         (pFVar32->FKTransformCS).Scale3D.ZW.m128d_f64[0];
    (pFVar30->FKTransformCS).Scale3D.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->IKRootTransformCS).Rotation.XY.m128d_f64[1];
    (pFVar30->IKRootTransformCS).Rotation.XY.m128d_f64[0] =
         (pFVar32->IKRootTransformCS).Rotation.XY.m128d_f64[0];
    (pFVar30->IKRootTransformCS).Rotation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar32->IKRootTransformCS).Rotation.ZW.m128d_f64[1];
    (pFVar30->IKRootTransformCS).Rotation.ZW.m128d_f64[0] =
         (pFVar32->IKRootTransformCS).Rotation.ZW.m128d_f64[0];
    (pFVar30->IKRootTransformCS).Rotation.ZW.m128d_f64[1] = dVar11;
    lVar35 = lVar35 + -1;
  } while (lVar35 != 0);
  dVar11 = (pFVar32->IKRootTransformCS).Translation.XY.m128d_f64[1];
  (((VectorRegister4Double *)pFVar28)->XY).m128d_f64[0] =
       (((VectorRegister4Double *)pFVar29)->XY).m128d_f64[0];
  (pFVar30->IKRootTransformCS).Translation.XY.m128d_f64[1] = dVar11;
  dVar11 = (pFVar32->IKRootTransformCS).Translation.ZW.m128d_f64[1];
  (pFVar30->IKRootTransformCS).Translation.ZW.m128d_f64[0] =
       (pFVar32->IKRootTransformCS).Translation.ZW.m128d_f64[0];
  (pFVar30->IKRootTransformCS).Translation.ZW.m128d_f64[1] = dVar11;
  dVar11 = (pFVar32->IKRootTransformCS).Scale3D.XY.m128d_f64[1];
  (pFVar30->IKRootTransformCS).Scale3D.XY.m128d_f64[0] =
       (pFVar32->IKRootTransformCS).Scale3D.XY.m128d_f64[0];
  (pFVar30->IKRootTransformCS).Scale3D.XY.m128d_f64[1] = dVar11;
  dVar11 = (pFVar32->IKRootTransformCS).Scale3D.ZW.m128d_f64[1];
  (pFVar30->IKRootTransformCS).Scale3D.ZW.m128d_f64[0] =
       (pFVar32->IKRootTransformCS).Scale3D.ZW.m128d_f64[0];
  (pFVar30->IKRootTransformCS).Scale3D.ZW.m128d_f64[1] = dVar11;
  dVar11 = (param_1->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X =
       (param_1->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y = dVar11;
  dVar11 = (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0.
           _s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z =
       (param_1->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.X =
       dVar11;
  dVar11 = (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0.
           _s_0.Z;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Y =
       (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Y
  ;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Z =
       dVar11;
  dVar11 = (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0
           .Y;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.X =
       (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Y = dVar11;
  bVar17 = (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.bPrevTargetValid;
  uVar25 = *(undefined7 *)
            &(param_1->PelvisData).Interpolation.PelvisTranslationSpringState.field_0x31;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Z =
       (param_1->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Z;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.bPrevTargetValid = bVar17;
  *(undefined7 *)&(this->PelvisData).Interpolation.PelvisTranslationSpringState.field_0x31 = uVar25;
  (this->PelvisData).DisablePelvis = (param_1->PelvisData).DisablePelvis;
  pFVar31 = &this->CharacterData;
  pFVar33 = &param_1->CharacterData;
  do {
    dVar11 = (pFVar33->ComponentTransformWS).Rotation.XY.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Rotation.XY.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Rotation.XY.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Rotation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentTransformWS).Rotation.ZW.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Rotation.ZW.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Rotation.ZW.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Rotation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentTransformWS).Translation.XY.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Translation.XY.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Translation.XY.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Translation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentTransformWS).Translation.ZW.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Translation.ZW.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Translation.ZW.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Translation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentTransformWS).Scale3D.XY.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Scale3D.XY.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Scale3D.XY.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Scale3D.XY.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentTransformWS).Scale3D.ZW.m128d_f64[1];
    (pFVar31->ComponentTransformWS).Scale3D.ZW.m128d_f64[0] =
         (pFVar33->ComponentTransformWS).Scale3D.ZW.m128d_f64[0];
    (pFVar31->ComponentTransformWS).Scale3D.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pFVar33->ComponentMoveDeltaWS).field0_0x0._s_0.Y;
    (pFVar31->ComponentMoveDeltaWS).field0_0x0._s_0.X =
         (pFVar33->ComponentMoveDeltaWS).field0_0x0._s_0.X;
    (pFVar31->ComponentMoveDeltaWS).field0_0x0._s_0.Y = dVar11;
    dVar11 = (pFVar33->CharacterVelocityWS).field0_0x0._s_0.X;
    (pFVar31->ComponentMoveDeltaWS).field0_0x0._s_0.Z =
         (pFVar33->ComponentMoveDeltaWS).field0_0x0._s_0.Z;
    (pFVar31->CharacterVelocityWS).field0_0x0._s_0.X = dVar11;
    lVar34 = lVar34 + -1;
    pFVar31 = (FCharacterData *)((pFVar31->CharacterVelocityWS).field0_0x0.XYZ + 1);
    pFVar33 = (FCharacterData *)((pFVar33->CharacterVelocityWS).field0_0x0.XYZ + 1);
  } while (lVar34 != 0);
  dVar11 = (param_1->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Y;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.X =
       (param_1->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.X;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Y = dVar11;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Z =
       (param_1->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Z;
  dVar11 = (param_1->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Y;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.X =
       (param_1->DebugData).InputPelvisLocationWS.field0_0x0._s_0.X;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Y = dVar11;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Z =
       (param_1->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugData).OutputFootLocationsWS,&(param_1->DebugData).OutputFootLocationsWS);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugData).InputFootLocationsWS,&(param_1->DebugData).InputFootLocationsWS);
  pTVar4 = &(param_1->DebugData).LegsInfo;
  pTVar5 = &(this->DebugData).LegsInfo;
  if (pTVar5 != pTVar4) {
    iVar8 = (param_1->DebugData).LegsInfo.ArrayNum;
    piVar1 = &(this->DebugData).LegsInfo.ArrayMax;
    pFVar10 = (pTVar4->AllocatorInstance).Data;
    iVar9 = *piVar1;
    (this->DebugData).LegsInfo.ArrayNum = iVar8;
    if ((iVar8 == 0) && (iVar9 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar8,iVar9,&pTVar5->AllocatorInstance,iVar8,piVar1);
      if (iVar8 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar10,(longlong)iVar8 << 4);
      }
    }
  }
  this->bIsFirstUpdate = param_1->bIsFirstUpdate;
  sVar26 = (param_1->UpdateCounter).Counter;
  sVar27 = (param_1->UpdateCounter).SkipFrames;
  uVar6 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar26;
  (this->UpdateCounter).SkipFrames = sVar27;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar6;
  return this;
}

// operator() @ 14a71cf40

TVector<double> * __thiscall
`FAnimNode_FootPlacement::FindPelvisOffsetRangeForLimb'::__l5::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,float param_1,float param_2,
          TVector<double> *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  fVar1 = *(float *)this;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  fVar4 = *(float *)((longlong)this + 0x20) - param_2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6;
  fVar4 = param_1 * param_1 - fVar4 * fVar4;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar10 = SQRT(fVar4);
  if (SQRT(fVar4) <= *(float *)((longlong)this + 0x24)) {
    fVar10 = *(float *)((longlong)this + 0x24);
  }
  if (fVar10 < fVar1) {
    dVar6 = *(double *)((longlong)this + 0x10);
    dVar2 = *(double *)((longlong)this + 0x18);
    dVar3 = *(double *)((longlong)this + 8);
    dVar5 = dVar6 * dVar6 + dVar3 * dVar3 + dVar2 * dVar2;
    if (dVar5 == __real_3ff0000000000000) {
      uVar7 = *(double *)((longlong)this + 8);
      uVar8 = *(double *)((longlong)this + 0x18);
      uVar9 = *(double *)((longlong)this + 0x10);
    }
    else {
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (__real_3e45798ee0000000 <= dVar5) {
        dVar5 = __real_3ff0000000000000 / SQRT(dVar5);
        uVar7 = dVar5 * dVar3;
        uVar8 = dVar2 * dVar5;
        uVar9 = dVar6 * dVar5;
      }
    }
    dVar6 = (double)(fVar1 - fVar10);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar6 * (double)uVar7 + (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar6 * (double)uVar9 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar6 * (double)uVar8 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  return __return_storage_ptr__;
}

// AlignPlantToGround @ 14a71d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::AlignPlantToGround
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,TPlane<double> *param_2,
          FInputPoseData *param_3,TTransform<double> *param_4,TQuat<double> *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  TQuat<double> *pTVar17;
  TVector<double> *pTVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  uint uVar22;
  uint uVar39;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar67;
  undefined1 auVar66 [16];
  uint uVar68;
  double dVar69;
  double dVar70;
  undefined4 uVar74;
  undefined1 auVar71 [16];
  double dVar75;
  undefined4 uVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar76;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar82;
  undefined1 auVar80 [16];
  double dVar83;
  double dVar84;
  undefined1 auVar81 [16];
  uint uVar85;
  uint uVar86;
  undefined4 uVar87;
  uint uVar88;
  uint uVar89;
  undefined1 auStack_338 [32];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined8 local_2f8;
  double local_2e8;
  double local_2e0;
  TVector<double>_u_0 local_2d8;
  double local_2b8;
  double dStack_2b0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  double local_260;
  TQuat<double> local_258;
  TQuat<double> local_238;
  TQuat<double> local_218;
  TVector<double> local_1f8;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_138,&param_3->FootTransformCS,&param_1->OwningComponentToWorld);
  local_198.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_198.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_198.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_198.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_198.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_198.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_198.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_198.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_198.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_198.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_198.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_198.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_198,&(this->PelvisData).InputPose.IKRootTransformCS,
             &param_1->OwningComponentToWorld);
  auVar16._8_8_ = local_198.Rotation.ZW.m128d_f64[1];
  auVar16._0_8_ = local_198.Rotation.ZW.m128d_f64[0];
  auVar15._8_8_ = local_198.Rotation.XY.m128d_f64[1];
  auVar15._0_8_ = local_198.Rotation.XY.m128d_f64[0];
  dVar59 = UE::Math::TVector<double>::UpVector.field0_0x0._8_8_;
  auVar78._0_8_ =
       dVar59 * local_198.Rotation.XY.m128d_f64[0] -
       UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ * local_198.Rotation.XY.m128d_f64[1];
  auVar78._8_8_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_198.Rotation.XY.m128d_f64[1] -
       dVar59 * local_198.Rotation.ZW.m128d_f64[0];
  auVar71._8_4_ = SUB84(auVar78._8_8_,0);
  auVar71._0_8_ = auVar78._0_8_;
  auVar71._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  auVar40 = blendpd(UE::Math::TVector<double>::UpVector.field0_0x0._0_16_,auVar8,2);
  auVar64 = blendpd(auVar15,auVar16,2);
  auVar41._0_8_ =
       auVar40._0_8_ * local_198.Rotation.ZW.m128d_f64[0] -
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * auVar64._0_8_;
  auVar41._8_8_ = auVar40._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - auVar64._8_8_ * 0.0;
  dVar69 = auVar71._8_8_ + auVar71._8_8_;
  dVar75 = auVar41._0_8_ + auVar41._0_8_;
  auVar40 = blendpd(auVar78,auVar41,2);
  auVar79._0_8_ = auVar40._0_8_ + auVar40._0_8_;
  auVar79._8_8_ = auVar40._8_8_ + auVar40._8_8_;
  uVar74 = SUB84(dVar75,0);
  auVar50._8_4_ = uVar74;
  auVar50._0_8_ = dVar69;
  uVar77 = (undefined4)((ulonglong)dVar75 >> 0x20);
  auVar50._12_4_ = uVar77;
  auVar23._8_4_ = uVar74;
  auVar23._0_8_ = dVar69;
  auVar23._12_4_ = uVar77;
  pTVar18 = &param_1->ApproachDirWS;
  uVar1 = param_2->_padding_;
  uVar3 = param_2->W;
  auVar42._8_4_ = uVar74;
  auVar42._0_8_ = dVar69;
  auVar42._12_4_ = uVar77;
  auVar51._0_8_ =
       auVar50._8_8_ * local_198.Rotation.XY.m128d_f64[0] -
       dVar69 * local_198.Rotation.XY.m128d_f64[1];
  auVar51._8_8_ =
       auVar79._0_8_ * local_198.Rotation.XY.m128d_f64[1] -
       auVar23._8_8_ * local_198.Rotation.ZW.m128d_f64[0];
  auVar40 = blendpd(auVar42,auVar79,2);
  auVar24._8_4_ = SUB84(auVar79._8_8_,0);
  auVar24._0_8_ = auVar79._0_8_;
  auVar24._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
  auVar43._0_8_ = auVar40._0_8_ * local_198.Rotation.ZW.m128d_f64[0] - auVar79._0_8_ * auVar64._0_8_
  ;
  auVar43._8_8_ = auVar40._8_8_ * local_198.Rotation.ZW.m128d_f64[1] - auVar24._8_8_ * auVar64._8_8_
  ;
  auVar25._8_4_ = SUB84(auVar51._8_8_,0);
  auVar25._0_8_ = auVar51._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
  auVar40 = blendpd(auVar51,auVar43,2);
  dVar5 = (param_4->Translation).ZW.m128d_f64[0];
  local_278._s_0.Z =
       auVar79._0_8_ * local_198.Rotation.ZW.m128d_f64[1] +
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z + auVar40._0_8_;
  dVar82 = auVar79._8_8_ * local_198.Rotation.ZW.m128d_f64[1] + 0.0 + auVar40._8_8_;
  auVar9._4_8_ = auVar40._8_8_;
  auVar9._0_4_ = (int)((ulonglong)local_198.Translation.XY.m128d_f64[0] >> 0x20);
  auVar52._0_8_ = auVar9._0_8_ << 0x20;
  auVar52._8_4_ = SUB84(local_198.Translation.XY.m128d_f64[1],0);
  auVar52._12_4_ = (int)((ulonglong)local_198.Translation.XY.m128d_f64[1] >> 0x20);
  auVar40 = *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64;
  local_278._s_0.X =
       dVar69 * local_198.Rotation.ZW.m128d_f64[1] +
       UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ + auVar25._8_8_;
  local_278._s_0.Y = dVar75 * local_198.Rotation.ZW.m128d_f64[1] + dVar59 + auVar43._0_8_;
  auVar26._8_4_ = SUB84(dVar82,0);
  auVar26._0_8_ = local_278._s_0.Z;
  auVar26._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
  auVar10._4_8_ = dVar82;
  auVar10._0_4_ = auVar40._4_4_;
  auVar80._0_8_ = auVar10._0_8_ << 0x20;
  auVar80._8_4_ = auVar40._8_4_;
  auVar80._12_4_ = auVar40._12_4_;
  auVar11._4_8_ = auVar26._8_8_;
  auVar11._0_4_ = (int)((ulonglong)local_278._s_0.X >> 0x20);
  auVar27._0_8_ = auVar11._0_8_ << 0x20;
  auVar27._8_4_ = SUB84(local_278._s_0.Y,0);
  auVar27._12_4_ = (int)((ulonglong)local_278._s_0.Y >> 0x20);
  dStack_300 = local_138.Translation.XY.m128d_f64[1];
  local_308 = local_138.Translation.XY.m128d_f64[0];
  dVar75 = (pTVar18->field0_0x0)._s_0.X;
  dVar59 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_2f8 = local_138.Translation.ZW.m128d_f64[0];
  local_260 = auVar52._8_8_ * auVar27._8_8_ +
              local_198.Translation.XY.m128d_f64[0] * local_278._s_0.X +
              local_198.Translation.ZW.m128d_f64[0] * local_278._s_0.Z;
  uVar2 = param_2->_padding_;
  uVar4 = param_2->_padding_;
  auVar12._4_8_ = local_198.Translation.XY.m128d_f64[1];
  auVar12._0_4_ = (int)((ulonglong)uVar2 >> 0x20);
  auVar53._0_8_ = auVar12._0_8_ << 0x20;
  auVar53._8_4_ = (int)uVar4;
  auVar53._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  dVar69 = ((double)uVar3 -
           (auVar80._8_8_ * auVar53._8_8_ + auVar40._0_8_ * (double)uVar2 + dVar5 * (double)uVar1))
           / (dVar59 * auVar53._8_8_ + dVar75 * (double)uVar2 +
             (param_1->ApproachDirWS).field0_0x0._s_0.Z * (double)uVar1);
  fVar21 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                     ((TVector<double> *)&local_308,(TPlane<double> *)&local_278._s_0,pTVar18);
  dVar82 = (double)fVar21;
  local_2e0 = (dVar69 * dVar75 + auVar40._0_8_) - dVar82 * (pTVar18->field0_0x0)._s_0.X;
  local_2e8 = (dVar69 * dVar59 + auVar80._8_8_) - dVar82 * (pTVar18->field0_0x0)._s_0.Y;
  unique0x10000c7c = (int)uVar3;
  local_308 = (dVar69 * (pTVar18->field0_0x0)._s_0.Z + dVar5) -
              dVar82 * (pTVar18->field0_0x0)._s_0.Z;
  unique0x10000c80 = (int)((ulonglong)uVar3 >> 0x20);
  UE::Math::TQuat<double>::FindBetweenNormals
            (&local_258,(TVector<double> *)&local_278._s_0,(TVector<double> *)param_2);
  dVar62 = local_258.Z;
  dVar83 = local_258.W;
  auVar28._8_4_ = local_258.Z._0_4_;
  auVar28._0_8_ = dVar62;
  auVar28._12_4_ = local_258.Z._4_4_;
  dVar69 = local_138.Rotation.ZW.m128d_f64[1] * local_258.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           local_138.Rotation.XY.m128d_f64[0] * dVar83 +
           local_138.Rotation.ZW.m128d_f64[0] * local_258.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar62 * local_138.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar75 = local_138.Rotation.ZW.m128d_f64[0] * local_258.X *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           local_138.Rotation.XY.m128d_f64[1] * dVar83 +
           local_138.Rotation.ZW.m128d_f64[1] * local_258.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar28._8_8_ * local_138.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar86 = (uint)((ulonglong)dVar75 >> 0x20);
  dVar6 = (param_4->Rotation).ZW.m128d_f64[0];
  dVar61 = (param_4->Rotation).ZW.m128d_f64[1];
  dVar63 = (param_4->Rotation).XY.m128d_f64[0];
  dVar70 = (param_4->Rotation).XY.m128d_f64[1];
  auVar64._8_4_ = SUB84(dVar75,0);
  auVar64._0_8_ = dVar69;
  auVar64._12_4_ = uVar86;
  dVar5 = dVar69 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar59 = dVar75 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar82 = local_258.X * local_138.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_138.Rotation.ZW.m128d_f64[0] * dVar83 +
           local_138.Rotation.XY.m128d_f64[0] * local_258.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar62 * local_138.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar83 = local_258.X * local_138.Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           local_138.Rotation.ZW.m128d_f64[1] * dVar83 +
           local_138.Rotation.XY.m128d_f64[1] * local_258.Y *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar62 * local_138.Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar74 = SUB84(dVar83,0);
  uVar77 = (undefined4)((ulonglong)dVar83 >> 0x20);
  auVar7._8_4_ = uVar74;
  auVar7._0_8_ = dVar82;
  auVar7._12_4_ = uVar77;
  dVar62 = dVar82 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar83 = dVar83 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar87 = (undefined4)((ulonglong)dVar83 >> 0x20);
  auVar65._8_4_ = SUB84(dVar83,0);
  auVar65._0_8_ = dVar62;
  auVar65._12_4_ = uVar87;
  dVar67 = auVar65._8_8_;
  auVar54._8_4_ = SUB84(dVar5,0);
  auVar54._0_8_ = dVar5;
  auVar54._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar44._8_4_ = SUB84(dVar59,0);
  auVar44._0_8_ = dVar59;
  auVar44._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
  auVar29._8_4_ = SUB84(dVar83,0);
  auVar29._0_8_ = dVar67;
  auVar29._12_4_ = uVar87;
  auVar30._8_4_ = SUB84(dVar62,0);
  auVar30._0_8_ = dVar62;
  auVar30._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  local_318._0_4_ = SUB84(dVar69,0);
  local_318._4_4_ = (undefined4)((ulonglong)dVar69 >> 0x20);
  dVar69 = (double)param_2->_padding_;
  uVar68 = (uint)((ulonglong)dVar82 >> 0x20);
  local_238.X = dVar5 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar67 * dVar63 +
                dVar59 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar62 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_238.Y = auVar54._8_8_ * dVar6 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar29._8_8_ * dVar70 +
                auVar44._8_8_ * dVar61 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar30._8_8_ * dVar63 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar88 = local_318._0_4_ ^ uVar22;
  uVar39 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar89 = local_318._4_4_ ^ uVar39;
  dVar76 = (double)param_2->_padding_;
  dVar60 = (double)param_2->_padding_;
  local_238.Z = dVar5 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar67 * dVar6 +
                dVar59 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar62 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_238.W = dVar5 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar83 * dVar61 +
                dVar59 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar62 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar13._4_8_ = local_238.Y;
  auVar13._0_4_ = uVar68;
  auVar55._0_8_ = auVar13._0_8_ << 0x20;
  auVar55._8_4_ = uVar74;
  auVar55._12_4_ = uVar77;
  uVar85 = SUB84(dVar75,0) ^ uVar22;
  uVar86 = uVar86 ^ uVar39;
  dVar83 = (double)CONCAT44(uVar68 ^ uVar39,SUB84(dVar82,0) ^ uVar22);
  dVar75 = auVar55._8_8_;
  dVar5 = (double)CONCAT44(uVar86,uVar85) * dVar69 - dVar83 * dVar60;
  dVar5 = dVar5 + dVar5;
  dVar59 = dVar83 * dVar76 - (double)CONCAT44(uVar89,uVar88) * dVar69;
  dVar59 = dVar59 + dVar59;
  dVar62 = (double)CONCAT44(uVar89,uVar88) * dVar60 - (double)CONCAT44(uVar86,uVar85) * dVar76;
  dVar62 = dVar62 + dVar62;
  local_298._s_0.X =
       ((double)CONCAT44(uVar86,uVar85) * dVar62 - dVar83 * dVar59) + dVar5 * dVar75 + dVar76;
  local_298._s_0.Z =
       ((double)CONCAT44(uVar89,uVar88) * dVar59 - (double)CONCAT44(uVar86,uVar85) * dVar5) +
       dVar62 * dVar75 + dVar69;
  local_298._s_0.Y =
       (dVar83 * dVar5 - (double)CONCAT44(uVar89,uVar88) * dVar62) + dVar59 * dVar75 + dVar60;
  local_318 = auVar64;
  local_2d8._0_16_ = auVar7;
  UE::Math::TQuat<double>::ToSwingTwist
            (&local_238,(TVector<double> *)&local_298._s_0,&local_1d8,param_5);
  dVar76 = __real_3e45798ee0000000;
  dVar69 = param_5->X;
  dVar5 = param_5->Y;
  dVar62 = param_5->Z;
  dVar83 = param_5->W;
  dVar67 = local_318._0_8_;
  dVar84 = local_318._8_8_;
  dVar60 = auVar7._8_8_;
  auVar72._8_4_ = local_318._0_4_;
  auVar72._0_8_ = dVar67;
  auVar72._12_4_ = local_318._4_4_;
  auVar45._8_4_ = local_318._8_4_;
  auVar45._0_8_ = dVar84;
  auVar45._12_4_ = local_318._12_4_;
  auVar31._8_4_ = uVar74;
  auVar31._0_8_ = dVar60;
  auVar31._12_4_ = uVar77;
  auVar32._8_4_ = SUB84(dVar82,0);
  auVar32._0_8_ = dVar82;
  auVar32._12_4_ = uVar68;
  dVar6 = (param_4->Rotation).XY.m128d_f64[0];
  dVar61 = (param_4->Rotation).XY.m128d_f64[1];
  dVar63 = (param_4->Rotation).ZW.m128d_f64[0];
  dVar70 = (param_4->Rotation).ZW.m128d_f64[1];
  dVar75 = dVar67 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar60 * dVar62 +
           dVar84 * dVar69 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar82 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar59 = dVar67 * dVar69 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar60 * dVar83 +
           dVar84 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar82 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_2b8 = dVar67 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar60 * dVar69 +
              dVar84 * dVar62 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar82 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dStack_2b0 = auVar72._8_8_ * dVar62 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar31._8_8_ * dVar5 +
               auVar45._8_8_ * dVar83 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               auVar32._8_8_ * dVar69 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_318._8_4_ = SUB84(dVar59,0);
  local_318._0_8_ = dVar75;
  local_318._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
  dVar75 = dVar75 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar59 = dVar59 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar74 = (undefined4)((ulonglong)dVar59 >> 0x20);
  dVar69 = local_2b8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar5 = dStack_2b0 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar66._8_4_ = SUB84(dVar59,0);
  auVar66._0_8_ = dVar75;
  auVar66._12_4_ = uVar74;
  dVar82 = auVar66._8_8_;
  auVar33._8_4_ = SUB84(dVar59,0);
  auVar33._0_8_ = dVar82;
  auVar33._12_4_ = uVar74;
  auVar56._8_4_ = SUB84(dVar69,0);
  auVar56._0_8_ = dVar69;
  auVar56._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
  auVar46._8_4_ = SUB84(dVar5,0);
  auVar46._0_8_ = dVar5;
  auVar46._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar34._8_4_ = SUB84(dVar75,0);
  auVar34._0_8_ = dVar75;
  auVar34._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
  local_218.X = dVar69 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar82 * dVar6 +
                dVar5 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar75 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_218.Y = auVar56._8_8_ * dVar63 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar33._8_8_ * dVar61 +
                auVar46._8_8_ * dVar70 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar34._8_8_ * dVar6 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_2d8._0_16_ = *(undefined1 (*) [16])(param_3->FootToBall).Translation.XY.m128d_f64;
  local_218.Z = dVar69 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar82 * dVar63 +
                dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar75 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_218.W = dVar69 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar59 * dVar70 +
                dVar5 * dVar61 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar75 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_2d8._s_0.Z = (param_3->FootToBall).Translation.ZW.m128d_f64[0];
  UE::Math::TVector<double>::GetSafeNormal
            ((TVector<double> *)&local_2d8._s_0,&local_1f8,__real_3e45798ee0000000,
             &UE::Math::TVector<double>::ZeroVector);
  UE::Math::TQuat<double>::ToSwingTwist(&local_218,&local_1f8,&local_1d8,&local_1b8);
  auVar57._0_8_ = (double)(this->PlantSettings).AnkleTwistReduction;
  auVar57._8_8_ = 0;
  pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      ((TQuat<double> *)&local_2d8._s_0,&UE::Math::TQuat<double>::Identity,
                       &local_1b8,auVar57._0_8_);
  dVar69 = pTVar17->X;
  dVar5 = pTVar17->Y;
  dVar75 = pTVar17->Z;
  dVar59 = pTVar17->W;
  dVar82 = dVar75 * dVar75 + dVar69 * dVar69;
  dVar62 = dVar59 * dVar59 + dVar5 * dVar5;
  auVar35._8_4_ = SUB84(dVar62,0);
  auVar35._0_8_ = dVar82;
  auVar35._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
  auVar36._0_8_ = auVar35._8_8_ + dVar82;
  auVar36._8_8_ = dVar82 + dVar62;
  auVar40 = sqrtpd(auVar57,auVar36);
  uVar19 = -(ulonglong)(dVar76 <= auVar36._0_8_);
  uVar20 = -(ulonglong)(dVar76 <= auVar36._8_8_);
  uVar68 = (uint)(uVar19 >> 0x20);
  uVar22 = (uint)(uVar20 >> 0x20);
  auVar64 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
  auVar81._0_8_ = uVar19 & (ulonglong)(auVar64._0_8_ * dVar69);
  uVar14 = uVar20 & (ulonglong)(auVar64._8_8_ * dVar5);
  auVar81._8_4_ = (undefined4)uVar14;
  auVar81._12_4_ = (undefined4)(uVar14 >> 0x20);
  auVar47._0_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar47._4_4_ =
       ~uVar68 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar47._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar47._12_4_ =
       ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
  auVar73._0_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar73._4_4_ =
       ~uVar68 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar73._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar73._12_4_ =
       ~uVar22 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  dVar61 = local_318._8_8_;
  auVar48._0_8_ = (ulonglong)(auVar40._0_8_ * dVar75) & uVar19;
  uVar20 = (ulonglong)(auVar40._8_8_ * dVar59) & uVar20;
  auVar48._8_4_ = (undefined4)uVar20;
  auVar48._12_4_ = (undefined4)(uVar20 >> 0x20);
  dVar6 = local_318._0_8_;
  auVar37._8_4_ = local_318._8_4_;
  auVar37._0_8_ = dVar61;
  auVar37._12_4_ = local_318._12_4_;
  dVar63 = SUB168(auVar81 | auVar47,0);
  auVar58._8_4_ = SUB84(local_2b8,0);
  auVar58._0_8_ = local_2b8;
  auVar58._12_4_ = (int)((ulonglong)local_2b8 >> 0x20);
  dVar60 = SUB168(auVar81 | auVar47,8);
  dVar70 = SUB168(auVar73 | auVar48,0);
  dVar76 = SUB168(auVar73 | auVar48,8);
  dVar69 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  auVar49._8_4_ = SUB84(dStack_2b0,0);
  auVar49._0_8_ = dStack_2b0;
  auVar49._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar82 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar38._8_4_ = local_318._0_4_;
  auVar38._0_8_ = dVar6;
  auVar38._12_4_ = local_318._4_4_;
  dVar75 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar62 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar83 = local_2b8 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar61 * dVar60 +
           dStack_2b0 * dVar76 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar6 * dVar63 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar83,0);
  auVar40._0_8_ =
       local_2b8 * dVar76 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar61 * dVar63 +
       dStack_2b0 * dVar70 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar6 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar40._12_4_ = (int)((ulonglong)dVar83 >> 0x20);
  *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64 = auVar40;
  (param_4->Rotation).ZW.m128d_f64[0] =
       local_2b8 * dVar60 * dVar69 + dVar61 * dVar70 + dStack_2b0 * dVar63 * dVar5 +
       dVar6 * dVar76 * dVar75;
  (param_4->Rotation).ZW.m128d_f64[1] =
       auVar58._8_8_ * dVar63 * dVar59 + auVar37._8_8_ * dVar76 + auVar49._8_8_ * dVar60 * dVar82 +
       auVar38._8_8_ * dVar70 * dVar62;
  (param_4->Translation).XY.m128d_f64[0] = local_2e0;
  (param_4->Translation).XY.m128d_f64[1] = local_2e8;
  (param_4->Translation).ZW.m128d_f64[0] = local_308;
  (param_4->Translation).ZW.m128d_f64[1] = 0.0;
  dVar69 = _UNK_150689688;
  (param_4->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (param_4->Scale3D).XY.m128d_f64[1] = dVar69;
  dVar69 = _UNK_150689518;
  (param_4->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (param_4->Scale3D).ZW.m128d_f64[1] = dVar69;
  return;
}

// CalcTargetPlantPlaneDistance @ 14a71dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FAnimNode_FootPlacement::CalcTargetPlantPlaneDistance
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FInputPoseData *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [12];
  double dVar5;
  TVector<double> *pTVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_148 [32];
  TVector<double>_u_0 local_128;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  TVector<double>_u_0 local_e8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_c8,&param_2->FootToBall,&param_2->FootTransformCS);
  auVar10 = *(undefined1 (*) [16])
             (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64;
  auVar9 = *(undefined1 (*) [16])
            (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64;
  dVar5 = (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64[1];
  dVar21 = UE::Math::TVector<double>::UpVector.field0_0x0._8_8_;
  dVar2 = auVar10._0_8_;
  auVar11 = blendpd(auVar9,auVar10,2);
  auVar19._0_8_ =
       dVar21 * auVar9._0_8_ - auVar9._8_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._0_8_;
  auVar19._8_8_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * auVar9._8_8_ - dVar2 * dVar21;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  auVar9 = blendpd(UE::Math::TVector<double>::UpVector.field0_0x0._0_16_,auVar9,2);
  auVar12._0_8_ =
       auVar9._0_8_ * dVar2 - auVar11._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  auVar12._8_8_ = auVar9._8_8_ * auVar10._8_8_ - auVar11._8_8_ * 0.0;
  auVar9 = *(undefined1 (*) [16])
            (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64;
  auVar11 = blendpd(auVar19,auVar12,2);
  dVar1 = auVar19._8_8_ + auVar19._8_8_;
  dVar3 = auVar12._0_8_ + auVar12._0_8_;
  uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar20._0_8_ = auVar11._0_8_ + auVar11._0_8_;
  auVar20._8_8_ = auVar11._8_8_ + auVar11._8_8_;
  auVar15._8_4_ = SUB84(dVar3,0);
  auVar15._0_8_ = dVar1;
  auVar15._12_4_ = uVar17;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar1;
  auVar13._12_4_ = uVar17;
  auVar11 = blendpd(auVar13,auVar20,2);
  auVar12 = blendpd(auVar9,auVar10,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar1;
  auVar16._8_8_ = auVar20._0_8_ * auVar9._8_8_ - dVar2 * dVar3;
  auVar14._0_8_ = auVar11._0_8_ * dVar2 - auVar12._0_8_ * auVar20._0_8_;
  auVar14._8_8_ = auVar11._8_8_ * auVar10._8_8_ - auVar12._8_8_ * auVar20._8_8_;
  auVar10._8_4_ = SUB84(auVar16._8_8_,0);
  auVar10._0_8_ = auVar16._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar9 = blendpd(auVar16,auVar14,2);
  dVar2 = dVar1 * dVar5 + UE::Math::TVector<double>::UpVector.field0_0x0._0_8_ + auVar10._8_8_;
  dVar1 = dVar3 * dVar5 + dVar21 + auVar14._0_8_;
  uVar17 = SUB84(dVar1,0);
  uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_f8 = auVar20._0_8_ * dVar5 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z +
             auVar9._0_8_;
  local_108._8_4_ = uVar17;
  local_108._0_8_ = dVar2;
  local_108._12_4_ = uVar18;
  auVar4._4_8_ = auVar14._0_8_;
  auVar4._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar11._0_8_ = auVar4._0_8_ << 0x20;
  auVar11._8_4_ = uVar17;
  auVar11._12_4_ = uVar18;
  pTVar6 = &param_1->ApproachDirCS;
  local_128._s_0.X = (param_2->FootTransformCS).Translation.XY.m128d_f64[0];
  local_128._s_0.Y = (param_2->FootTransformCS).Translation.XY.m128d_f64[1];
  local_e8._s_0.X = local_c8.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_c8.Translation.XY.m128d_f64[1];
  local_f0 = (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1] *
             auVar11._8_8_ +
             (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0] * dVar2 +
             (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] * local_f8;
  local_128._s_0.Z = (param_2->FootTransformCS).Translation.ZW.m128d_f64[0];
  local_e8._s_0.Z = local_c8.Translation.ZW.m128d_f64[0];
  fVar7 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                    ((TVector<double> *)&local_e8._s_0,(TPlane<double> *)local_108,pTVar6);
  fVar8 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                    ((TVector<double> *)&local_128._s_0,(TPlane<double> *)local_108,pTVar6);
  if (fVar8 <= fVar7) {
    fVar7 = fVar8;
  }
  return fVar7;
}

// CalculateFootMidpoint @ 14a71df90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::CalculateFootMidpoint
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,
          TArrayView<UE::Anim::FootPlacement::FLegRuntimeData_const_,int> *param_2,
          TVector<double> *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  __m128d *p_Var4;
  __m128d *p_Var5;
  undefined8 uVar6;
  VectorRegister4Double *pVVar7;
  FLegRuntimeData *pFVar8;
  FLegRuntimeData *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar1 = (this->LegsData).ArrayNum;
  pFVar8 = param_2->DataPtr;
  iVar2 = param_2->ArrayNum;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar6;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar9 = pFVar8 + iVar2;
  if (pFVar8 != pFVar9) {
    pVVar7 = &(pFVar8->InputPose).FootTransformCS.Translation;
    dVar12 = (param_3->field0_0x0)._s_0.Y;
    dVar13 = (param_3->field0_0x0)._s_0.Z;
    dVar10 = (param_3->field0_0x0)._s_0.X;
    dVar11 = __real_3ff0000000000000 / (double)iVar1;
    do {
      p_Var4 = &pVVar7->XY;
      p_Var5 = &pVVar7->XY;
      pFVar8 = pFVar8 + 1;
      dVar3 = (pVVar7->ZW).m128d_f64[0];
      pVVar7 = pVVar7 + 0x36;
      dVar10 = p_Var4->m128d_f64[0] * dVar11 + dVar10;
      dVar12 = dVar12 + p_Var5->m128d_f64[1] * dVar11;
      (param_3->field0_0x0)._s_0.X = dVar10;
      dVar13 = dVar13 + dVar3 * dVar11;
      (param_3->field0_0x0)._s_0.Y = dVar12;
      (param_3->field0_0x0)._s_0.Z = dVar13;
    } while (pFVar8 != pFVar9);
  }
  return;
}

// DeterminePlantType @ 14a71e140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::DeterminePlantType
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,FPlantData *param_4,FInputPoseData *param_5)

{
  float *pfVar1;
  bool bVar2;
  EPlantType EVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  
  pTVar4 = CVarAnimNodeFootPlacementEnableLock.Ref;
  EVar3 = param_4->PlantType;
  bVar2 = param_4->bWantsToPlant;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      lVar6 = 1;
      goto LAB_14a71e198;
    }
  }
  lVar6 = 0;
LAB_14a71e198:
  if (((pTVar4->ShadowedValue[lVar6] == false) || ((this->PlantSettings).LockType == Unlocked)) ||
     ((float)((uint)param_5->LockAlpha & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
     ) {
    param_4->PlantType = Unplanted;
    param_4->bWantsToPlant = false;
  }
  else {
    fVar7 = (this->PlantSettings).DistanceToGround;
    if ((fVar7 < param_5->DistanceToPlant || fVar7 == param_5->DistanceToPlant) ||
       (fVar7 = (this->PlantSettings).SpeedThreshold,
       fVar7 < param_5->Speed || fVar7 == param_5->Speed)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    param_4->bWantsToPlant = bVar5;
    param_4->PlantType = Unplanted;
    if (bVar5 != false) {
      if (EVar3 == Unplanted) {
        if (bVar2 == false) {
          param_4->PlantType = Planted;
        }
        else {
          dVar8 = (param_3->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
          dVar9 = (param_3->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
          fVar7 = (float)(dVar9 * dVar9 + dVar8 * dVar8);
          pfVar1 = &(this->PlantRuntimeSettings).ReplantRadiusSqrd;
          if ((fVar7 < *pfVar1 || fVar7 == *pfVar1) &&
             (dVar8 = (param_4->TwistCorrection).W,
             (double)(this->PlantRuntimeSettings).CosHalfReplantAngle <=
             (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
            param_4->PlantType = Replanted;
          }
        }
      }
      else {
        dVar8 = (param_3->Translation).XY.m128d_f64[0] - (param_2->Translation).XY.m128d_f64[0];
        pfVar1 = &(this->PlantSettings).ReplantRadiusRatio;
        dVar9 = (param_3->Translation).XY.m128d_f64[1] - (param_2->Translation).XY.m128d_f64[1];
        if ((__real_3f800000 < *pfVar1 || __real_3f800000 == *pfVar1) ||
           (dVar8 * dVar8 + dVar9 * dVar9 <= (double)(this->PlantRuntimeSettings).UnplantRadiusSqrd)
           ) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        pfVar1 = &(this->PlantSettings).ReplantAngleRatio;
        if ((__real_3f800000 < *pfVar1 || __real_3f800000 == *pfVar1) ||
           (dVar8 = (param_4->TwistCorrection).W,
           (double)(this->PlantRuntimeSettings).CosHalfUnplantAngle <=
           (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar2) && (!bVar5)) {
          param_4->PlantType = param_4->LastPlantType;
        }
      }
    }
  }
  return;
}

// DrawDebug @ 14a71e350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::DrawDebug
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FLegRuntimeData *param_2,
          FPlantResult *param_3)

{
  float fVar1;
  EPlantType EVar2;
  FAnimInstanceProxy *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  TMatrix<double> *pTVar12;
  uint uVar13;
  FColor *pFVar14;
  FColor *pFVar15;
  double dVar16;
  undefined1 auStackY_4d8 [32];
  FColor_u_0 local_488;
  FColor_u_0 local_484;
  FColor_u_0 local_480;
  FColor_u_0 local_47c;
  TVector<double>_u_0 local_478;
  double local_460;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  FString local_410;
  FString local_400;
  FString local_3f0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  FString local_3b8;
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_360;
  double local_348;
  double dStack_340;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  TPlane<double> local_318;
  double local_2e8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  EVar2 = (param_2->Plant).PlantType;
  local_484 = FColor::Blue.field0_0x0;
  local_480 = FColor::Red.field0_0x0;
  local_47c = FColor::Orange.field0_0x0;
  if (EVar2 == Unplanted) {
    local_488 = FColor::Green.field0_0x0;
  }
  else if (EVar2 == Planted) {
    local_488 = FColor::Red.field0_0x0;
  }
  else if (EVar2 == Replanted) {
    local_488 = FColor::Orange.field0_0x0;
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                        ,0x40e,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_218.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_218.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_218.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_218.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_218.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_218.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_218,&(param_2->InputPose).FootToGround,&(param_2->InputPose).FootTransformCS);
  local_278.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_278.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_278.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_278.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_278.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_278.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_278.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_278.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_278.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_278.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_278.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_278.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_278.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_278.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_278,&local_218,&param_1->OwningComponentToWorld);
  local_2d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_2d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_2d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_2d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_2d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_2d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_2d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_2d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_2d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_2d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_2d8,&(param_2->InputPose).FootToGround,&param_2->AlignedFootTransformWS);
  pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(this->PelvisData).InputPose.RootTransformCS,&local_1b8);
  UE::Math::TPlane<double>::TransformBy(&(param_2->Plant).PlantPlaneRS,&local_318,pTVar12);
  pTVar12 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&param_1->OwningComponentToWorld,&local_138);
  UE::Math::TPlane<double>::TransformBy(&local_318,(TPlane<double> *)&local_478._s_0,pTVar12);
  fVar9 = __real_bf800000;
  fVar1 = __real_41200000;
  dVar5 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_3c8 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  local_338 = local_278.Translation.ZW.m128d_f64[0];
  local_348 = local_278.Translation.XY.m128d_f64[0];
  dStack_340 = local_278.Translation.XY.m128d_f64[1];
  dVar16 = (local_460 -
           (local_278.Translation.XY.m128d_f64[0] * local_478._s_0.X +
            local_278.Translation.XY.m128d_f64[1] * local_478._s_0.Y +
           local_278.Translation.ZW.m128d_f64[0] * local_478._s_0.Z)) /
           (local_478._s_0.Y * dVar6 + local_478._s_0.X * dVar5 + local_478._s_0.Z * local_3c8);
  local_458._s_0.X = dVar5 * dVar16 + local_278.Translation.XY.m128d_f64[0];
  local_458._s_0.Y = dVar6 * dVar16 + local_278.Translation.XY.m128d_f64[1];
  local_458._s_0.Z = local_3c8 * dVar16 + local_278.Translation.ZW.m128d_f64[0];
  local_3a8._s_0.X = local_278.Translation.XY.m128d_f64[0];
  local_3a8._s_0.Y = local_278.Translation.XY.m128d_f64[1];
  local_3a8._s_0.Z = local_278.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_3a8._s_0
             ,__real_41200000,(FColor *)&local_484._s_0,false,__real_bf800000,SDPG_Foreground);
  FAnimInstanceProxy::AnimDrawDebugPoint
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_458._s_0
             ,__real_41700000,(FColor *)&local_484._s_0,false,fVar9,SDPG_Foreground);
  fVar7 = __real_3f800000;
  local_390._s_0.X = local_278.Translation.XY.m128d_f64[0];
  local_390._s_0.Y = local_278.Translation.XY.m128d_f64[1];
  local_390._s_0.Z = local_278.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugLine
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_390._s_0
             ,(TVector<double> *)&local_458._s_0,(FColor *)&local_484._s_0,false,fVar9,
             __real_3f800000,SDPG_Foreground);
  local_378._s_0.X = local_2d8.Translation.XY.m128d_f64[0];
  local_378._s_0.Y = local_2d8.Translation.XY.m128d_f64[1];
  local_378._s_0.Z = local_2d8.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_378._s_0
             ,fVar1,(FColor *)&local_488._s_0,false,fVar9,SDPG_Foreground);
  dVar5 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_3c8 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  local_330 = local_2d8.Translation.XY.m128d_f64[0];
  dStack_328 = local_2d8.Translation.XY.m128d_f64[1];
  local_320 = local_2d8.Translation.ZW.m128d_f64[0];
  dVar16 = (local_460 -
           (local_2d8.Translation.XY.m128d_f64[0] * local_478._s_0.X +
            local_2d8.Translation.XY.m128d_f64[1] * local_478._s_0.Y +
           local_2d8.Translation.ZW.m128d_f64[0] * local_478._s_0.Z)) /
           (local_478._s_0.Y * dVar6 + local_478._s_0.X * dVar5 + local_478._s_0.Z * local_3c8);
  local_440._s_0.X = dVar5 * dVar16 + local_2d8.Translation.XY.m128d_f64[0];
  local_440._s_0.Y = dVar6 * dVar16 + local_2d8.Translation.XY.m128d_f64[1];
  local_440._s_0.Z = local_3c8 * dVar16 + local_2d8.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_440._s_0
             ,__real_41700000,(FColor *)&local_488._s_0,false,fVar9,SDPG_Foreground);
  local_360._s_0.X = local_2d8.Translation.XY.m128d_f64[0];
  local_360._s_0.Y = local_2d8.Translation.XY.m128d_f64[1];
  local_360._s_0.Z = local_2d8.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugLine
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_360._s_0
             ,(TVector<double> *)&local_440._s_0,(FColor *)&local_488._s_0,false,fVar9,fVar7,
             SDPG_Foreground);
  fVar8 = __real_3f000000;
  dVar5 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_2e8 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  local_3d8 = local_2d8.Translation.XY.m128d_f64[0];
  dStack_3d0 = local_2d8.Translation.XY.m128d_f64[1];
  local_3c8 = local_2d8.Translation.ZW.m128d_f64[0];
  dVar16 = (local_460 -
           (local_2d8.Translation.XY.m128d_f64[0] * local_478._s_0.X +
            local_2d8.Translation.XY.m128d_f64[1] * local_478._s_0.Y +
           local_2d8.Translation.ZW.m128d_f64[0] * local_478._s_0.Z)) /
           (local_478._s_0.Y * dVar6 + local_478._s_0.X * dVar5 + local_478._s_0.Z * local_2e8);
  local_428._s_0.Y = dVar6 * dVar16 + local_2d8.Translation.XY.m128d_f64[1];
  local_428._s_0.X = dVar5 * dVar16 + local_2d8.Translation.XY.m128d_f64[0];
  local_428._s_0.Z = local_2e8 * dVar16 + local_2d8.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugCircle
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,(TVector<double> *)&local_428._s_0
             ,(this->PlantSettings).UnplantRadius,0x18,(FColor *)&local_480._s_0,
             (TVector<double> *)&local_478._s_0,false,fVar9,SDPG_Foreground,__real_3f000000);
  fVar1 = (this->PlantSettings).ReplantRadiusRatio;
  if (fVar1 < fVar7) {
    FAnimInstanceProxy::AnimDrawDebugCircle
              ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,
               (TVector<double> *)&local_428._s_0,fVar1 * (this->PlantSettings).UnplantRadius,0x18,
               (FColor *)&local_47c._s_0,(TVector<double> *)&local_478._s_0,false,fVar9,
               SDPG_Foreground,fVar8);
  }
  uVar11 = param_2->Idx;
  uVar13 = 0;
  if ((int)uVar11 < (this->LegDefinitions).ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FName::ToString((FName *)((this->LegDefinitions).AllocatorInstance.Data +
                             (longlong)(int)uVar11 * 0x4c),&local_3b8);
  ::FString::PrintfImpl
            (&local_3f0,
             L"%s\n\t - InputPose [ AlignmentAlpha = %.2f, Speed = %.2f, DistanceToPlant = %.2f]");
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
            ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,&local_3f0,&FColor::White,
             &UE::Math::TVector2<double>::UnitVector,SDPG_World);
  uVar11 = 0;
  if (param_2->Idx < (this->DebugData).LegsInfo.ArrayNum) {
    uVar11 = (uint)~param_2->Idx >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = 0;
  if (param_2->Idx < (this->DebugData).LegsInfo.ArrayNum) {
    uVar11 = (uint)~param_2->Idx >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = 0;
  if (param_2->Idx < (this->DebugData).LegsInfo.ArrayNum) {
    uVar11 = (uint)~param_2->Idx >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ::FString::PrintfImpl(&local_400,L"\t - HyperExtension[ Amount = %.2f, Roll = %.2f, Pull %.2f]");
  uVar11 = param_2->Idx;
  pFVar3 = (FAnimInstanceProxy *)param_1->CSPContext->_padding_;
  uVar13 = 0;
  if ((int)uVar11 < (this->DebugData).LegsInfo.ArrayNum) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar14 = &FColor::Green;
  pFVar15 = &FColor::Red;
  if (*(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10)
      <= 0.0) {
    pFVar15 = &FColor::Green;
  }
  FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
            (pFVar3,&local_400,pFVar15,&UE::Math::TVector2<double>::UnitVector,SDPG_World);
  if (0.0 < (this->PlantSettings).SeparatingDistance) {
    uVar11 = 0;
    if (param_2->Idx < (this->DebugData).LegsInfo.ArrayNum) {
      uVar11 = (uint)~param_2->Idx >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ::FString::PrintfImpl(&local_410,L"\t - Distance To Separating Plane = %.2f");
    uVar11 = param_2->Idx;
    pFVar3 = (FAnimInstanceProxy *)param_1->CSPContext->_padding_;
    uVar13 = 0;
    if ((int)uVar11 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x10 + 0xc) < 0.0) {
      pFVar14 = &FColor::Red;
    }
    FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
              (pFVar3,&local_410,pFVar14,&UE::Math::TVector2<double>::UnitVector,SDPG_World);
    if (local_410.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_410.Data.AllocatorInstance.Data);
    }
  }
  if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_400.Data.AllocatorInstance.Data);
  }
  if (local_3f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3f0.Data.AllocatorInstance.Data);
  }
  return;
}

// DrawVLog @ 14a71eeb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::DrawVLog
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FLegRuntimeData *param_2,
          FPlantResult *param_3)

{
  float fVar1;
  EPlantType EVar2;
  UObject *pUVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  uint uVar9;
  TMatrix<double> *pTVar10;
  TStringBuilderBase<wchar_t> *pTVar11;
  void *pvVar12;
  ulong64 uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_13f8 [32];
  FColor_u_0 local_13a8 [2];
  FName local_13a0;
  FColor_u_0 local_1398 [4];
  TVector<double>_u_0 local_1388;
  double local_1370;
  FColor_u_0 local_1368;
  FColor_u_0 local_1364;
  FString local_1360;
  FString local_1350;
  FString local_1340;
  FString local_1330;
  FString local_1320;
  FString local_1310;
  FString local_1300;
  TVector<double>_u_0 local_12f0;
  TVector<double>_u_0 local_12d8;
  TVector<double>_u_0 local_12c0;
  double local_12a8;
  double dStack_12a0;
  double local_1298;
  TVector<double>_u_0 local_1288;
  TVector<double>_u_0 local_1270;
  TVector<double>_u_0 local_1258;
  double local_1240;
  double dStack_1238;
  double local_1230;
  double local_1228;
  double dStack_1220;
  double local_1218;
  TPlane<double> local_1208;
  double local_11d8;
  TTransform<double> local_11c8;
  TTransform<double> local_1168;
  TTransform<double> local_1108;
  TStringBuilderBase<wchar_t> local_10a8;
  wchar_t local_1088 [256];
  TStringBuilderBase<wchar_t> local_e88;
  wchar_t local_e68 [256];
  TStringBuilderBase<wchar_t> local_c68;
  wchar_t local_c48 [256];
  TStringBuilderBase<wchar_t> local_a48;
  wchar_t local_a28 [256];
  TStringBuilderBase<wchar_t> local_828;
  wchar_t local_808 [256];
  TStringBuilderBase<wchar_t> local_608;
  wchar_t local_5e8 [256];
  TStringBuilderBase<wchar_t> local_3e8;
  wchar_t local_3c8 [256];
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_13f8;
  EVar2 = (param_2->Plant).PlantType;
  local_1398[0] = FColor::Blue.field0_0x0;
  local_1368 = FColor::Red.field0_0x0;
  local_1364 = FColor::Orange.field0_0x0;
  if (EVar2 == Unplanted) {
    local_13a8[0] = FColor::Green.field0_0x0;
  }
  else if (EVar2 == Planted) {
    local_13a8[0] = FColor::Red.field0_0x0;
  }
  else if (EVar2 == Replanted) {
    local_13a8[0] = FColor::Orange.field0_0x0;
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                       ,0x39e,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_1108.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1108.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1108.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1108.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_1108,&(param_2->InputPose).FootToGround,&(param_2->InputPose).FootTransformCS);
  local_1168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1168,&local_1108,&param_1->OwningComponentToWorld);
  local_11c8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_11c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_11c8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_11c8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_11c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_11c8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_11c8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_11c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_11c8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_11c8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_11c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_11c8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_11c8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_11c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_11c8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_11c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_11c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_11c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_11c8,&(param_2->InputPose).FootToGround,&param_2->AlignedFootTransformWS);
  pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(this->PelvisData).InputPose.RootTransformCS,&local_1c8);
  UE::Math::TPlane<double>::TransformBy(&(param_2->Plant).PlantPlaneRS,&local_1208,pTVar10);
  pTVar10 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&param_1->OwningComponentToWorld,&local_148);
  UE::Math::TPlane<double>::TransformBy(&local_1208,(TPlane<double> *)&local_1388._s_0,pTVar10);
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar16 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_1298 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  local_1230 = local_1168.Translation.ZW.m128d_f64[0];
  local_1240 = local_1168.Translation.XY.m128d_f64[0];
  dStack_1238 = local_1168.Translation.XY.m128d_f64[1];
  dVar5 = (local_1370 -
          (local_1168.Translation.XY.m128d_f64[0] * local_1388._s_0.X +
           local_1168.Translation.XY.m128d_f64[1] * local_1388._s_0.Y +
          local_1168.Translation.ZW.m128d_f64[0] * local_1388._s_0.Z)) /
          (local_1388._s_0.Y * dVar16 + local_1388._s_0.X * dVar6 + local_1388._s_0.Z * local_1298);
  local_12c0._s_0.X = dVar5 * dVar6 + local_1168.Translation.XY.m128d_f64[0];
  local_12c0._s_0.Y = dVar5 * dVar16 + local_1168.Translation.XY.m128d_f64[1];
  local_12c0._s_0.Z = dVar5 * local_1298 + local_1168.Translation.ZW.m128d_f64[0];
  pUVar3 = *(UObject **)(param_1->CSPContext->_padding_ + 0x140);
  ::FName::FName(&local_13a0,"FootPlacement");
  if (FVisualLogger::bIsRecording != 0) {
    local_1288._s_0.X = local_1168.Translation.XY.m128d_f64[0];
    local_1288._s_0.Y = local_1168.Translation.XY.m128d_f64[1];
    local_1288._s_0.Z = local_1168.Translation.ZW.m128d_f64[0];
    FVisualLogger::SphereLogfImpl
              (pUVar3,&local_13a0,Display,(TVector<double> *)&local_1288._s_0,0.0,
               (FColor *)&local_1398[0]._s_0,false,L"");
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::SphereLogfImpl
                (pUVar3,&local_13a0,Display,(TVector<double> *)&local_12c0._s_0,0.0,
                 (FColor *)&local_1398[0]._s_0,false,L"");
      if (FVisualLogger::bIsRecording != 0) {
        local_1270._s_0.X = local_11c8.Translation.XY.m128d_f64[0];
        local_1270._s_0.Y = local_11c8.Translation.XY.m128d_f64[1];
        local_1270._s_0.Z = local_11c8.Translation.ZW.m128d_f64[0];
        FVisualLogger::SphereLogfImpl
                  (pUVar3,&local_13a0,Display,(TVector<double> *)&local_1270._s_0,0.0,
                   (FColor *)&local_13a8[0]._s_0,false,L"");
      }
    }
  }
  local_1298 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  uVar19 = SUB84(local_1388._s_0.X,0);
  uVar20 = (undefined4)((ulonglong)local_1388._0_8_ >> 0x20);
  uVar17 = SUB84(local_1388._s_0.Y,0);
  uVar18 = (undefined4)((ulonglong)local_1388._8_8_ >> 0x20);
  uVar21 = SUB84(local_1388._s_0.Z,0);
  uVar22 = (undefined4)((ulonglong)local_1388._16_8_ >> 0x20);
  local_1218 = local_11c8.Translation.ZW.m128d_f64[0];
  dVar5 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_1228 = local_11c8.Translation.XY.m128d_f64[0];
  dStack_1220 = local_11c8.Translation.XY.m128d_f64[1];
  dVar16 = (local_1370 -
           (local_11c8.Translation.XY.m128d_f64[0] * local_1388._s_0.X +
            local_11c8.Translation.XY.m128d_f64[1] * local_1388._s_0.Y +
           local_11c8.Translation.ZW.m128d_f64[0] * local_1388._s_0.Z)) /
           (local_1388._s_0.Y * dVar6 + local_1388._s_0.X * dVar5 + local_1388._s_0.Z * local_1298);
  local_12f0._s_0.X = dVar16 * dVar5 + local_11c8.Translation.XY.m128d_f64[0];
  local_12f0._s_0.Y = dVar16 * dVar6 + local_11c8.Translation.XY.m128d_f64[1];
  local_12f0._s_0.Z = dVar16 * local_1298 + local_11c8.Translation.ZW.m128d_f64[0];
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::SphereLogfImpl
              (pUVar3,&local_13a0,Display,(TVector<double> *)&local_12f0._s_0,0.0,
               (FColor *)&local_13a8[0]._s_0,false,L"");
    if (FVisualLogger::bIsRecording != 0) {
      local_1258._s_0.Z = local_11c8.Translation.ZW.m128d_f64[0];
      local_1258._s_0.X = local_11c8.Translation.XY.m128d_f64[0];
      local_1258._s_0.Y = local_11c8.Translation.XY.m128d_f64[1];
      FVisualLogger::SegmentLogfImpl
                (pUVar3,&local_13a0,Display,(TVector<double> *)&local_1258._s_0,
                 (TVector<double> *)&local_12f0._s_0,(FColor *)&local_13a8[0]._s_0,2,L"");
    }
    uVar19 = SUB84(local_1388._s_0.X,0);
    uVar20 = (undefined4)((ulonglong)local_1388._0_8_ >> 0x20);
    uVar17 = SUB84(local_1388._s_0.Y,0);
    uVar18 = (undefined4)((ulonglong)local_1388._8_8_ >> 0x20);
    uVar21 = SUB84(local_1388._s_0.Z,0);
    uVar22 = (undefined4)((ulonglong)local_1388._16_8_ >> 0x20);
  }
  local_11d8 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  local_1298 = local_11c8.Translation.ZW.m128d_f64[0];
  dVar5 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar6 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_12a8 = local_11c8.Translation.XY.m128d_f64[0];
  dStack_12a0 = local_11c8.Translation.XY.m128d_f64[1];
  dVar16 = (local_1370 -
           (local_11c8.Translation.XY.m128d_f64[0] * (double)CONCAT44(uVar20,uVar19) +
            local_11c8.Translation.XY.m128d_f64[1] * (double)CONCAT44(uVar18,uVar17) +
           local_11c8.Translation.ZW.m128d_f64[0] * (double)CONCAT44(uVar22,uVar21))) /
           ((double)CONCAT44(uVar18,uVar17) * dVar6 + (double)CONCAT44(uVar20,uVar19) * dVar5 +
           (double)CONCAT44(uVar22,uVar21) * local_11d8);
  local_12d8._s_0.X = dVar16 * dVar5 + local_11c8.Translation.XY.m128d_f64[0];
  local_12d8._s_0.Y = dVar16 * dVar6 + local_11c8.Translation.XY.m128d_f64[1];
  local_12d8._s_0.Z = dVar16 * local_11d8 + local_11c8.Translation.ZW.m128d_f64[0];
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::DiscLogfImpl
              (pUVar3,&local_13a0,Display,(TVector<double> *)&local_12d8._s_0,
               (TVector<double> *)&local_1388._s_0,(this->PlantSettings).UnplantRadius,
               (FColor *)&local_1368._s_0,0,false,L"");
  }
  fVar1 = (this->PlantSettings).ReplantRadiusRatio;
  if ((fVar1 < __real_3f800000) && (FVisualLogger::bIsRecording != 0)) {
    FVisualLogger::DiscLogfImpl
              (pUVar3,&local_13a0,Display,(TVector<double> *)&local_12d8._s_0,
               (TVector<double> *)&local_1388._s_0,fVar1 * (this->PlantSettings).UnplantRadius,
               (FColor *)&local_1364._s_0,0,false,L"");
  }
  uVar15 = 0;
  if (0.0 < (this->PlantSettings).SeparatingDistance) {
    uVar14 = param_2->Idx;
    uVar9 = uVar15;
    if ((int)uVar14 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FAnimTrace::OutputAnimNodeValue
              ((FAnimationBaseContext *)param_1->CSPContext,
               *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),L"DistanceToSeparatingPlane",
               *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
                         (longlong)(int)uVar14 * 0x10 + 0xc));
  }
  uVar14 = param_2->Idx;
  uVar9 = uVar15;
  if ((int)uVar14 < (this->DebugData).LegsInfo.ArrayNum) {
    uVar9 = ~uVar14 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x10);
  local_c68.Base = local_c48;
  local_c68.CurPos = local_c48;
  local_c68.bIsDynamic = false;
  local_c68.bIsExternal = false;
  local_c68.End = (wchar_t *)&local_a48;
  local_c68.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_c48,0x11,"HyperExtension - ",0x11);
  local_1340.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1340.Data.ArrayNum = 0;
  local_1340.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1340,param_2->Idx);
  pTVar11 = TStringBuilderBase<wchar_t>::Append<FString>(&local_c68,&local_1340);
  if (pTVar11->End < pTVar11->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
  }
  *pTVar11->CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),pTVar11->Base,fVar1);
  if (local_1340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1340.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_c68);
  uVar14 = param_2->Idx;
  uVar9 = uVar15;
  if ((int)uVar14 < (this->DebugData).LegsInfo.ArrayNum) {
    uVar9 = ~uVar14 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x10 + 4);
  local_a48.Base = local_a28;
  local_a48.CurPos = local_a28;
  local_a48.bIsDynamic = false;
  local_a48.bIsExternal = false;
  local_a48.End = (wchar_t *)&local_828;
  local_a48.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_a28,7,"Roll - ",7);
  local_1330.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1330.Data.ArrayNum = 0;
  local_1330.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1330,param_2->Idx);
  pTVar11 = TStringBuilderBase<wchar_t>::Append<FString>(&local_a48,&local_1330);
  if (pTVar11->End < pTVar11->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
  }
  *pTVar11->CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),pTVar11->Base,fVar1);
  if (local_1330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1330.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a48);
  uVar14 = param_2->Idx;
  uVar9 = uVar15;
  if ((int)uVar14 < (this->DebugData).LegsInfo.ArrayNum) {
    uVar9 = ~uVar14 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar1 = *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x10 + 8);
  local_828.Base = local_808;
  local_828.CurPos = local_808;
  local_828.bIsDynamic = false;
  local_828.bIsExternal = false;
  local_828.End = (wchar_t *)&local_608;
  local_828.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_808,7,"Pull - ",7);
  local_1320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1320.Data.ArrayNum = 0;
  local_1320.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1320,param_2->Idx);
  pTVar11 = TStringBuilderBase<wchar_t>::Append<FString>(&local_828,&local_1320);
  if (pTVar11->End < pTVar11->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
  }
  *pTVar11->CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),pTVar11->Base,fVar1);
  if (local_1320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1320.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_828);
  fVar1 = (param_2->InputPose).AlignmentAlpha;
  local_608.Base = local_5e8;
  local_608.CurPos = local_5e8;
  local_608.bIsDynamic = false;
  local_608.bIsExternal = false;
  local_608.End = (wchar_t *)&local_3e8;
  local_608.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_5e8,0x11,"AlignmentAlpha - ",0x11);
  local_1310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1310.Data.ArrayNum = 0;
  local_1310.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1310,param_2->Idx);
  pTVar11 = TStringBuilderBase<wchar_t>::Append<FString>(&local_608,&local_1310);
  if (pTVar11->End < pTVar11->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
  }
  *pTVar11->CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),pTVar11->Base,fVar1);
  if (local_1310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1310.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_608);
  fVar1 = (param_2->InputPose).Speed;
  local_3e8.Base = local_3c8;
  local_3e8.CurPos = local_3c8;
  local_3e8.bIsDynamic = false;
  local_3e8.bIsExternal = false;
  local_3e8.End = (wchar_t *)&local_1c8;
  local_3e8.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_3c8,0xc,"FootSpeed - ",0xc)
  ;
  local_1300.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1300.Data.ArrayNum = 0;
  local_1300.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1300,param_2->Idx);
  pTVar11 = TStringBuilderBase<wchar_t>::Append<FString>(&local_3e8,&local_1300);
  if (pTVar11->End < pTVar11->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar11,1);
  }
  *pTVar11->CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),pTVar11->Base,fVar1);
  if (local_1300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1300.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3e8);
  fVar1 = (param_2->InputPose).DistanceToPlant;
  local_10a8.Base = local_1088;
  local_10a8.CurPos = local_1088;
  local_10a8.bIsDynamic = false;
  local_10a8.bIsExternal = false;
  local_10a8.End = (wchar_t *)&local_e88;
  local_10a8.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_1088,0x12,"DistanceToPlant - ",0x12);
  local_1360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1360.Data.ArrayNum = 0;
  local_1360.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1360,param_2->Idx);
  FVar7.Data = local_1360.Data.AllocatorInstance.Data;
  uVar14 = local_1360.Data.ArrayNum - 1;
  if (local_1360.Data.ArrayNum == 0) {
    uVar14 = uVar15;
  }
  uVar13 = (ulong64)(int)uVar14;
  if (local_10a8.End < (TStringBuilderBase<wchar_t> *)(local_10a8.CurPos + uVar13)) {
    TStringBuilderBase<wchar_t>::Extend(&local_10a8,uVar13);
  }
  if (uVar14 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_10a8.CurPos,FVar7.Data,uVar13 * 2);
    local_10a8.CurPos = (wchar_t *)(uVar13 * 2 + (longlong)pvVar12);
  }
  if (local_10a8.End < (TStringBuilderBase<wchar_t> *)(local_10a8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_10a8,1);
  }
  *local_10a8.CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),local_10a8.Base,fVar1);
  if (local_1360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1360.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_10a8);
  fVar1 = (param_2->InputPose).DisableLeg;
  local_e88.Base = local_e68;
  local_e88.CurPos = local_e68;
  local_e88.bIsDynamic = false;
  local_e88.bIsExternal = false;
  local_e88.End = (wchar_t *)&local_c68;
  local_e88.CurPos =
       FGenericPlatformString::Convert<char,wchar_t>(local_e68,0xd,"DisableLeg - ",0xd);
  local_1350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1350.Data.ArrayNum = 0;
  local_1350.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_1350,param_2->Idx);
  FVar7.Data = local_1350.Data.AllocatorInstance.Data;
  uVar14 = local_1350.Data.ArrayNum - 1;
  if (local_1350.Data.ArrayNum == 0) {
    uVar14 = uVar15;
  }
  uVar13 = (ulong64)(int)uVar14;
  if (local_e88.End < (TStringBuilderBase<wchar_t> *)(local_e88.CurPos + uVar13)) {
    TStringBuilderBase<wchar_t>::Extend(&local_e88,uVar13);
  }
  if (uVar14 != 0) {
    pvVar12 = FGenericPlatformString::Memcpy(local_e88.CurPos,FVar7.Data,uVar13 * 2);
    local_e88.CurPos = (wchar_t *)(uVar13 * 2 + (longlong)pvVar12);
  }
  if (local_e88.End < (TStringBuilderBase<wchar_t> *)(local_e88.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_e88,1);
  }
  *local_e88.CurPos = L'\0';
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1->CSPContext,
             *(int *)((longlong)&param_1->CSPContext->_padding_ + 4),local_e88.Base,fVar1);
  if (local_1350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1350.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e88);
  return;
}

// EvaluateSkeletalControl_AnyThread @ 14a71ff20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::EvaluateSkeletalControl_AnyThread
          (FAnimNode_FootPlacement *this,FComponentSpacePoseContext *param_1,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FCompactPoseBoneIndex FVar3;
  int iVar4;
  FCompactPoseBoneIndex *pFVar5;
  FBoneTransform *pFVar6;
  FAnimInstanceProxy *this_00;
  UObject *pUVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  TConsoleVariableData<bool> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  bool bVar17;
  undefined4 extraout_EAX;
  int iVar18;
  TStatId TVar19;
  USkeletalMeshComponent *pUVar20;
  TTransform<double> *pTVar21;
  TTransform<double> *pTVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  FCurveElement *pFVar25;
  FScriptContainerElement *pFVar26;
  FCSPose<FCompactPose> *this_01;
  longlong lVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FLegRuntimeData *pFVar30;
  uint uVar31;
  FLegRuntimeData *pFVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
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
  double dVar71;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined4 uVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  double dVar121;
  undefined1 auVar122 [16];
  undefined4 uVar127;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  double dVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  double dVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  uint uVar139;
  uint uVar140;
  uint uVar141;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  uint uVar154;
  uint uVar155;
  double dVar156;
  undefined4 uVar159;
  double dVar160;
  undefined4 uVar161;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auStackY_bd8 [32];
  undefined1 local_b88;
  FIdentityFunctor local_b87 [7];
  longlong local_b80;
  FName local_b78;
  byte local_b70;
  longlong local_b68;
  FComponentSpacePoseContext *local_b60;
  TConsoleVariableData<bool> *local_b58;
  double dStack_b50;
  FName local_b48;
  FName local_b40;
  FName local_b38;
  FName local_b30;
  FSourceLocation local_b28;
  FString local_b08;
  TVector<double>_u_0 local_af8;
  TVector<double>_u_0 local_ae0;
  TVector<double>_u_0 local_ac8;
  TVector<double>_u_0 local_aa8;
  TVector<double>_u_0 local_a90;
  TVector<double>_u_0 local_a78;
  TVector<double>_u_0 local_a60;
  TVector<double>_u_0 local_a48;
  TVector<double>_u_0 local_a30;
  TVector<double>_u_0 local_a18;
  TVector<double>_u_0 local_a00;
  TVector<double>_u_0 local_9e8;
  TVector<double>_u_0 local_9d0;
  undefined1 local_9b8 [48];
  ForAnyElementType local_988;
  int local_980;
  ForAnyElementType local_978;
  int local_970;
  ForAnyElementType local_968;
  double local_958;
  double dStack_950;
  double local_948;
  double local_940;
  double dStack_938;
  double local_930;
  double local_928;
  double dStack_920;
  double local_918;
  double local_910;
  double dStack_908;
  double local_900;
  undefined1 local_8f8 [16];
  double local_8e8;
  double local_8e0;
  double dStack_8d8;
  double local_8d0;
  undefined1 local_8c8 [16];
  double local_8b8;
  double local_8b0;
  double dStack_8a8;
  double local_8a0;
  undefined1 local_898 [16];
  double local_888;
  double local_880;
  double dStack_878;
  double local_870;
  double local_868;
  double dStack_860;
  double local_858;
  double local_850;
  double dStack_848;
  double local_840;
  TTransform<double> local_838;
  FEvaluationContext local_7d8;
  TTransform<double> local_6b8;
  TTransform<double> local_658;
  FCompactPoseBoneIndex local_5f8;
  undefined4 uStack_5f4;
  undefined8 uStack_5f0;
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
  undefined4 local_588;
  undefined4 uStack_584;
  undefined8 uStack_580;
  uint local_578;
  uint uStack_574;
  uint uStack_570;
  uint uStack_56c;
  uint local_568;
  uint uStack_564;
  uint uStack_560;
  uint uStack_55c;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  uint local_528;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  TTransform<double> local_518;
  FBoneTransform local_4b8;
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
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_bd8;
  local_b60 = param_1;
  TVar19 = FThreadSafeStaticStatInner<FStat_STAT_FootPlacement_Eval,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_FootPlacement_Eval,1> *)
                      &StatPtr_STAT_FootPlacement_Eval);
  local_b28.Impl._Line = 0x488;
  local_b28.Impl._Function =
       "void __cdecl FAnimNode_FootPlacement::EvaluateSkeletalControl_AnyThread(struct FComponentSpacePoseContext &,class TArray<struct FBoneTransform,class TSizedDefaultAllocator<32> > &)"
  ;
  local_b28.Impl._Column = 2;
  local_b28.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_b78,*(TStatIdData **)&(TVar19.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_b28);
  if ((param_2->ArrayNum != 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutBoneTransforms.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                          ,0x48a,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar20 = FAnimInstanceProxy::GetSkelMeshComponent((FAnimInstanceProxy *)param_1->_padding_);
  fVar33 = USkeletalMeshComponent::GetTeleportDistanceThreshold(pUVar20);
  if ((this->bIsFirstUpdate == false) && (0.0 < fVar33)) {
    lVar24 = param_1->_padding_;
    local_838.Rotation.XY.m128d_f64[0] = *(double *)(lVar24 + 0x20);
    local_838.Rotation.XY.m128d_f64[1] = *(double *)(lVar24 + 0x28);
    local_838.Rotation.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x30);
    local_838.Rotation.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x38);
    local_838.Translation.XY.m128d_f64[0] = *(double *)(lVar24 + 0x40);
    local_838.Translation.XY.m128d_f64[1] = *(double *)(lVar24 + 0x48);
    local_838.Translation.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x50);
    local_838.Translation.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x58);
    local_838.Scale3D.XY.m128d_f64[0] = *(double *)(lVar24 + 0x60);
    local_838.Scale3D.XY.m128d_f64[1] = *(double *)(lVar24 + 0x68);
    local_838.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar24 + 0x70);
    local_838.Scale3D.ZW.m128d_f64[1] = *(double *)(lVar24 + 0x78);
    pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                        (&param_1->Pose,(FCompactPoseBoneIndex)0x0);
    local_aa8._s_0.X = (pTVar21->Translation).XY.m128d_f64[0];
    local_aa8._s_0.Y = (pTVar21->Translation).XY.m128d_f64[1];
    local_aa8._s_0.Z = (pTVar21->Translation).ZW.m128d_f64[0];
    UE::Math::TTransform<double>::TransformPosition
              (&local_838,(TVector<double> *)&local_ae0._s_0,(TVector<double> *)&local_aa8._s_0);
    local_a90._s_0.X = (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0];
    local_a90._s_0.Y = (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1];
    local_a90._s_0.Z = (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0];
    UE::Math::TTransform<double>::TransformPosition
              (&(this->CharacterData).ComponentTransformWS,(TVector<double> *)&local_af8._s_0,
               (TVector<double> *)&local_a90._s_0);
    if ((double)(fVar33 * fVar33) <
        (local_af8._s_0.Y - local_ae0._s_0.Y) * (local_af8._s_0.Y - local_ae0._s_0.Y) +
        (local_af8._s_0.X - local_ae0._s_0.X) * (local_af8._s_0.X - local_ae0._s_0.X) +
        (local_af8._s_0.Z - local_ae0._s_0.Z) * (local_af8._s_0.Z - local_ae0._s_0.Z)) {
      ResetRuntimeData(this);
    }
  }
  UE::Anim::FootPlacement::FDebugData::FDebugData((FDebugData *)local_9b8,&this->DebugData);
  local_ac8._0_4_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ ^
       (uint)__xmm_80000000000000008000000000000000;
  local_ac8._4_4_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ ^
       __xmm_80000000000000008000000000000000._4_4_;
  local_ac8._8_4_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ ^
       __xmm_80000000000000008000000000000000._8_4_;
  local_ac8._12_4_ =
       UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ ^
       __xmm_80000000000000008000000000000000._12_4_;
  local_ac8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                              0x20) ^ __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0) ^
                        (uint)__xmm_80000000000000008000000000000000);
  UE::Anim::FootPlacement::FEvaluationContext::FEvaluationContext
            (&local_7d8,param_1,(TVector<double> *)&local_ac8._s_0,this->CachedDeltaTime);
  pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&(local_7d8.CSPContext)->Pose,(this->PelvisData).Bones.FkBoneIndex);
  FVar3 = (this->PelvisData).Bones.IkBoneIndex;
  dVar128 = (pTVar21->Rotation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar21->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar21->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar21->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar21->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar21->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Scale3D).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[0] =
       (pTVar21->Scale3D).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[1] = dVar128;
  pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&(local_7d8.CSPContext)->Pose,FVar3);
  dVar128 = (pTVar21->Rotation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar21->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar21->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar21->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar21->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar21->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar21->Scale3D).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.ZW.m128d_f64[0] =
       (pTVar21->Scale3D).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.ZW.m128d_f64[1] = dVar128;
  pTVar22 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&(local_7d8.CSPContext)->Pose,(FCompactPoseBoneIndex)0x0);
  pTVar21 = &(this->PelvisData).InputPose.RootTransformCS;
  uVar28 = 0;
  dVar128 = (pTVar22->Rotation).XY.m128d_f64[1];
  (pTVar21->Rotation).XY.m128d_f64[0] = (pTVar22->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar22->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar22->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar22->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar22->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1] = dVar128;
  dVar128 = (pTVar22->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar22->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[1] = dVar128;
  dVar128 = (pTVar22->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar22->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[1] = dVar128;
  fVar33 = (this->PelvisSettings).MaxOffset;
  *(undefined1 (*) [16])(this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64 =
       *(undefined1 (*) [16])(pTVar22->Scale3D).ZW.m128d_f64;
  (this->PelvisData).MaxOffsetSqrd = fVar33 * fVar33;
  fVar33 = __real_3c0efa35;
  if (0 < (this->LegsData).ArrayNum) {
    do {
      uVar139 = 0;
      if ((int)uVar28 < (this->LegsData).ArrayNum) {
        uVar139 = ~uVar28 >> 0x1f;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar29 = (this->LegsData).AllocatorInstance.Data;
      uVar139 = 0;
      if ((int)uVar28 < (this->LegDefinitions).ArrayNum) {
        uVar139 = ~uVar28 >> 0x1f;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      GatherLegDataFromInputs
                (this,&local_7d8,(FLegRuntimeData *)(pFVar29 + (longlong)(int)uVar28 * 0x6c0),
                 (FFootPlacemenLegDefinition *)
                 ((this->LegDefinitions).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x4c));
      fVar34 = (this->PlantSettings).ReplantRadiusRatio;
      fVar108 = (this->PlantSettings).UnplantRadius;
      fVar2 = (this->PlantSettings).UnplantAngle;
      fVar108 = fVar108 * fVar108;
      (this->PlantRuntimeSettings).UnplantRadiusSqrd = fVar108;
      (this->PlantRuntimeSettings).ReplantRadiusSqrd = fVar34 * fVar108 * fVar34;
      fVar108 = cosf(fVar2 * fVar33);
      fVar34 = (this->PlantSettings).ReplantAngleRatio;
      (this->PlantRuntimeSettings).CosHalfUnplantAngle = fVar108;
      fVar34 = cosf(fVar2 * fVar34 * fVar33);
      uVar28 = uVar28 + 1;
      (this->PlantRuntimeSettings).CosHalfReplantAngle = fVar34;
      param_1 = local_b60;
    } while ((int)uVar28 < (this->LegsData).ArrayNum);
  }
  ProcessCharacterState(this,&local_7d8);
  iVar18 = (this->LegsData).ArrayNum;
  pFVar29 = (this->LegsData).AllocatorInstance.Data;
  if ((iVar18 < 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar4 = (this->LegsData).ArrayNum;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y = (double)uVar14;
  (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar26 = pFVar29 + (longlong)iVar18 * 0x6c0;
  if (pFVar29 != pFVar26) {
    pFVar23 = pFVar29 + 0xc0;
    dVar128 = (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y;
    dVar133 = (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z;
    dVar35 = (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.X;
    dVar121 = __real_3ff0000000000000 / (double)iVar4;
    do {
      local_850 = *(double *)pFVar23;
      dStack_848 = *(double *)(pFVar23 + 8);
      pFVar1 = pFVar23 + 0x10;
      pFVar29 = pFVar29 + 0x6c0;
      pFVar23 = pFVar23 + 0x6c0;
      local_840 = SUB168(*(undefined1 (*) [16])pFVar1,0);
      dVar35 = dVar121 * local_850 + dVar35;
      (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.X = dVar35;
      dVar128 = dVar128 + dVar121 * dStack_848;
      (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y = dVar128;
      dVar133 = dVar133 + dVar121 * local_840;
      (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z = dVar133;
    } while (pFVar29 != pFVar26);
  }
  iVar18 = (this->LegsData).ArrayNum;
  pFVar30 = (FLegRuntimeData *)(this->LegsData).AllocatorInstance.Data;
  pFVar32 = pFVar30 + iVar18;
  while( true ) {
    if ((this->LegsData).ArrayNum != iVar18) {
      local_b88 = 0;
      `TCheckedPointerIterator<UE::Anim::FootPlacement::FLegRuntimeData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b88);
    }
    if (pFVar30 == pFVar32) break;
    ProcessFootAlignment(this,&local_7d8,pFVar30);
    pFVar30 = pFVar30 + 1;
  }
  SolvePelvis(this,&local_6b8,&local_7d8);
  pTVar15 = CVarAnimNodeFootPlacementDebug.Ref;
  local_208.Rotation.XY.m128d_f64[0] = local_6b8.Rotation.XY.m128d_f64[0];
  local_208.Rotation.XY.m128d_f64[1] = local_6b8.Rotation.XY.m128d_f64[1];
  local_208.Rotation.ZW.m128d_f64[0] = local_6b8.Rotation.ZW.m128d_f64[0];
  local_208.Rotation.ZW.m128d_f64[1] = local_6b8.Rotation.ZW.m128d_f64[1];
  local_208.Translation.XY.m128d_f64[0] = local_6b8.Translation.XY.m128d_f64[0];
  local_208.Translation.XY.m128d_f64[1] = local_6b8.Translation.XY.m128d_f64[1];
  local_208.Translation.ZW.m128d_f64[0] = local_6b8.Translation.ZW.m128d_f64[0];
  local_208.Translation.ZW.m128d_f64[1] = local_6b8.Translation.ZW.m128d_f64[1];
  local_208.Scale3D.XY.m128d_f64[0] = local_6b8.Scale3D.XY.m128d_f64[0];
  local_208.Scale3D.XY.m128d_f64[1] = local_6b8.Scale3D.XY.m128d_f64[1];
  local_208.Scale3D.ZW.m128d_f64[0] = local_6b8.Scale3D.ZW.m128d_f64[0];
  local_208.Scale3D.ZW.m128d_f64[1] = local_6b8.Scale3D.ZW.m128d_f64[1];
  bVar17 = IsInParallelGameThread();
  if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
    lVar24 = 0;
  }
  else {
    lVar24 = 1;
  }
  if (pTVar15->ShadowedValue[lVar24] != false) {
    ::FString::PrintfImpl(&local_b08,L"FOOT PLACEMENT DEBUG");
    FAnimInstanceProxy::AnimDrawDebugOnScreenMessage
              ((FAnimInstanceProxy *)(local_7d8.CSPContext)->_padding_,&local_b08,&FColor::Cyan,
               &UE::Math::TVector2<double>::UnitVector,SDPG_World);
    if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b08.Data.AllocatorInstance.Data);
    }
  }
  if ((this->PelvisSettings).bEnableInterpolation != false) {
    UE::Math::TTransform<double>::GetRelativeTransform(&local_6b8,&local_1a8,pTVar21);
    UpdatePelvisInterpolationRootSpace(this,&local_148,&local_7d8,&local_1a8);
    local_518.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_518.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_518.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_518.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_518.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_518.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_518.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_518.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_518.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_518.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_518.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_518.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_518,&local_148,pTVar21);
    local_6b8.Rotation.XY.m128d_f64[0] = local_518.Rotation.XY.m128d_f64[0];
    local_6b8.Rotation.XY.m128d_f64[1] = local_518.Rotation.XY.m128d_f64[1];
    local_6b8.Rotation.ZW.m128d_f64[0] = local_518.Rotation.ZW.m128d_f64[0];
    local_6b8.Rotation.ZW.m128d_f64[1] = local_518.Rotation.ZW.m128d_f64[1];
    local_6b8.Translation.XY.m128d_f64[0] = local_518.Translation.XY.m128d_f64[0];
    local_6b8.Translation.XY.m128d_f64[1] = local_518.Translation.XY.m128d_f64[1];
    local_6b8.Translation.ZW.m128d_f64[0] = local_518.Translation.ZW.m128d_f64[0];
    local_6b8.Translation.ZW.m128d_f64[1] = local_518.Translation.ZW.m128d_f64[1];
    local_6b8.Scale3D.XY.m128d_f64[0] = local_518.Scale3D.XY.m128d_f64[0];
    local_6b8.Scale3D.XY.m128d_f64[1] = local_518.Scale3D.XY.m128d_f64[1];
    local_6b8.Scale3D.ZW.m128d_f64[0] = local_518.Scale3D.ZW.m128d_f64[0];
    local_6b8.Scale3D.ZW.m128d_f64[1] = local_518.Scale3D.ZW.m128d_f64[1];
  }
  pFVar25 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                       &param_1->Curve,(this->PelvisSettings).DisablePelvisCurveName);
  if (pFVar25 == (FCurveElement *)0x0) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = pFVar25->Value;
  }
  (this->PelvisData).DisablePelvis = fVar33;
  pTVar21 = &local_6b8;
  UE::Math::TTransform<double>::BlendWith
            (pTVar21,&(this->PelvisData).InputPose.FKTransformCS,fVar33);
  uVar139 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar31 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  auVar86._0_8_ =
       (double)CONCAT44(local_6b8.Rotation.ZW.m128d_f64[0]._4_4_ & uVar31,
                        local_6b8.Rotation.ZW.m128d_f64[0]._0_4_ & uVar139);
  uVar140 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  auVar86._8_4_ = local_6b8.Rotation.ZW.m128d_f64[1]._0_4_ & uVar140;
  uVar141 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  auVar86._12_4_ = local_6b8.Rotation.ZW.m128d_f64[1]._4_4_ & uVar141;
  dVar128 = (double)__xmm_7ff00000000000007ff0000000000000;
  dVar133 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  auVar134._8_8_ = -(ulonglong)(auVar86._8_8_ == dVar133);
  auVar134._0_8_ = -(ulonglong)(auVar86._0_8_ == dVar128);
  auVar73._0_8_ =
       (double)CONCAT44(local_6b8.Rotation.XY.m128d_f64[0]._4_4_ & uVar31,
                        local_6b8.Rotation.XY.m128d_f64[0]._0_4_ & uVar139);
  auVar73._8_4_ = local_6b8.Rotation.XY.m128d_f64[1]._0_4_ & uVar140;
  auVar73._12_4_ = local_6b8.Rotation.XY.m128d_f64[1]._4_4_ & uVar141;
  uVar28 = movmskpd((int)pTVar21,auVar134);
  auVar74._8_8_ = -(ulonglong)(auVar73._8_8_ == dVar133);
  auVar74._0_8_ = -(ulonglong)(auVar73._0_8_ == dVar128);
  iVar18 = movmskpd(extraout_EAX,auVar74);
  if ((uVar28 & 0x3fffffff) == 0 && iVar18 == 0) {
    auVar37._0_8_ =
         (double)CONCAT44(local_6b8.Translation.ZW.m128d_f64[0]._4_4_ & uVar31,
                          local_6b8.Translation.ZW.m128d_f64[0]._0_4_ & uVar139);
    auVar37._8_4_ = local_6b8.Translation.ZW.m128d_f64[1]._0_4_ & uVar140;
    auVar37._12_4_ = local_6b8.Translation.ZW.m128d_f64[1]._4_4_ & uVar141;
    auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ == dVar133);
    auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ == dVar128);
    auVar75._0_8_ =
         (double)CONCAT44(local_6b8.Translation.XY.m128d_f64[0]._4_4_ & uVar31,
                          local_6b8.Translation.XY.m128d_f64[0]._0_4_ & uVar139);
    auVar75._8_4_ = local_6b8.Translation.XY.m128d_f64[1]._0_4_ & uVar140;
    auVar75._12_4_ = local_6b8.Translation.XY.m128d_f64[1]._4_4_ & uVar141;
    uVar28 = movmskpd(0,auVar38);
    auVar76._8_8_ = -(ulonglong)(auVar75._8_8_ == dVar133);
    auVar76._0_8_ = -(ulonglong)(auVar75._0_8_ == dVar128);
    iVar18 = movmskpd(iVar18,auVar76);
    if ((uVar28 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a7207f2;
    auVar39._0_8_ =
         (double)CONCAT44(local_6b8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar31,
                          local_6b8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar139);
    auVar39._8_4_ = local_6b8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar140;
    auVar39._12_4_ = local_6b8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar141;
    auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ == dVar133);
    auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ == dVar128);
    auVar77._0_8_ =
         (double)CONCAT44(local_6b8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar31,
                          local_6b8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar139);
    auVar77._8_4_ = local_6b8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar140;
    auVar77._12_4_ = local_6b8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar141;
    uVar28 = movmskpd(0,auVar40);
    auVar78._8_8_ = -(ulonglong)(auVar77._8_8_ == dVar133);
    auVar78._0_8_ = -(ulonglong)(auVar77._0_8_ == dVar128);
    iVar18 = movmskpd(iVar18,auVar78);
    if ((uVar28 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a7207f2;
  }
  else {
LAB_14a7207f2:
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!PelvisTransformCS.ContainsNaN()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                        ,0x4e1,L"");
    if (bVar17) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_5f8 = (this->PelvisData).Bones.FkBoneIndex;
  pFVar5 = (FCompactPoseBoneIndex *)(param_2->AllocatorInstance).Data;
  local_5e8 = local_6b8.Rotation.XY.m128d_f64[0];
  dStack_5e0 = local_6b8.Rotation.XY.m128d_f64[1];
  local_5d8 = local_6b8.Rotation.ZW.m128d_f64[0];
  dStack_5d0 = local_6b8.Rotation.ZW.m128d_f64[1];
  local_5c8 = local_6b8.Translation.XY.m128d_f64[0];
  dStack_5c0 = local_6b8.Translation.XY.m128d_f64[1];
  local_5b8 = local_6b8.Translation.ZW.m128d_f64[0];
  dStack_5b0 = local_6b8.Translation.ZW.m128d_f64[1];
  local_5a8 = local_6b8.Scale3D.XY.m128d_f64[0];
  dStack_5a0 = local_6b8.Scale3D.XY.m128d_f64[1];
  local_598 = local_6b8.Scale3D.ZW.m128d_f64[0];
  dStack_590 = local_6b8.Scale3D.ZW.m128d_f64[1];
  if (((pFVar5 <= &local_5f8) && (&local_5f8 < pFVar5 + (longlong)param_2->ArrayMax * 0x1c)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar18 = param_2->ArrayNum;
  if (iVar18 == param_2->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar18 + 1;
  lVar24 = (longlong)iVar18 * 0x70;
  pFVar29 = (param_2->AllocatorInstance).Data;
  *(ulonglong *)(pFVar29 + lVar24) = CONCAT44(uStack_5f4,local_5f8);
  *(undefined8 *)(pFVar29 + lVar24 + 8) = uStack_5f0;
  *(double *)(pFVar29 + lVar24 + 0x10) = local_5e8;
  *(double *)(pFVar29 + lVar24 + 0x10 + 8) = dStack_5e0;
  *(double *)(pFVar29 + lVar24 + 0x20) = local_5d8;
  *(double *)(pFVar29 + lVar24 + 0x20 + 8) = dStack_5d0;
  *(double *)(pFVar29 + lVar24 + 0x30) = local_5c8;
  *(double *)(pFVar29 + lVar24 + 0x30 + 8) = dStack_5c0;
  *(double *)(pFVar29 + lVar24 + 0x40) = local_5b8;
  *(double *)(pFVar29 + lVar24 + 0x40 + 8) = dStack_5b0;
  *(double *)(pFVar29 + lVar24 + 0x50) = local_5a8;
  *(double *)(pFVar29 + lVar24 + 0x50 + 8) = dStack_5a0;
  *(double *)(pFVar29 + lVar24 + 0x60) = local_598;
  *(double *)(pFVar29 + lVar24 + 0x60 + 8) = dStack_590;
  if ((this->InterpolationSettings).bSmoothRootBone != false) {
    this_01 = &param_1->Pose;
    pTVar21 = FCSPose<FCompactPose>::GetComponentSpaceTransform(this_01,(FCompactPoseBoneIndex)0x0);
    local_940 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0];
    dStack_938 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1];
    local_928 = local_6b8.Translation.XY.m128d_f64[0] - local_940;
    local_568 = *(uint *)(pTVar21->Rotation).ZW.m128d_f64;
    uStack_564 = *(uint *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 4);
    uStack_560 = *(uint *)((pTVar21->Rotation).ZW.m128d_f64 + 1);
    uStack_55c = *(uint *)((longlong)(pTVar21->Rotation).ZW.m128d_f64 + 0xc);
    local_578 = *(uint *)(pTVar21->Rotation).XY.m128d_f64;
    uStack_574 = *(uint *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 4);
    uStack_570 = *(uint *)((pTVar21->Rotation).XY.m128d_f64 + 1);
    uStack_56c = *(uint *)((longlong)(pTVar21->Rotation).XY.m128d_f64 + 0xc);
    local_538 = *(undefined1 (*) [16])(pTVar21->Scale3D).XY.m128d_f64;
    local_528 = *(uint *)(pTVar21->Scale3D).ZW.m128d_f64;
    uStack_524 = *(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 4);
    uStack_520 = *(uint *)((pTVar21->Scale3D).ZW.m128d_f64 + 1);
    uStack_51c = *(uint *)((longlong)(pTVar21->Scale3D).ZW.m128d_f64 + 0xc);
    local_958 = local_6b8.Translation.XY.m128d_f64[0];
    dStack_950 = local_6b8.Translation.XY.m128d_f64[1];
    dStack_920 = local_6b8.Translation.XY.m128d_f64[1] - dStack_938;
    local_948 = local_6b8.Translation.ZW.m128d_f64[0];
    local_930 = SUB168(*(undefined1 (*) [16])
                        (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64,0);
    local_918 = local_6b8.Translation.ZW.m128d_f64[0] - local_930;
    auVar79._0_8_ = (double)CONCAT44(uStack_574 & uVar31,local_578 & uVar139);
    auVar79._8_4_ = uStack_570 & uVar140;
    auVar79._12_4_ = uStack_56c & uVar141;
    auVar80._8_8_ = -(ulonglong)(auVar79._8_8_ == dVar133);
    auVar80._0_8_ = -(ulonglong)(auVar79._0_8_ == dVar128);
    dVar35 = (pTVar21->Translation).XY.m128d_f64[0] + local_928;
    dVar121 = (pTVar21->Translation).XY.m128d_f64[1] + dStack_920;
    uVar154 = SUB84(dVar121,0);
    uVar155 = (uint)((ulonglong)dVar121 >> 0x20);
    auVar41._0_8_ = (double)CONCAT44(uStack_564 & uVar31,local_568 & uVar139);
    auVar41._8_4_ = uStack_560 & uVar140;
    auVar41._12_4_ = uStack_55c & uVar141;
    local_548._0_8_ = local_918 + (pTVar21->Translation).ZW.m128d_f64[0];
    local_548._8_8_ = (pTVar21->Translation).ZW.m128d_f64[1] + 0.0;
    auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ == dVar133);
    auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ == dVar128);
    uVar28 = movmskpd((int)this_01,auVar42);
    iVar18 = movmskpd((int)pTVar21,auVar80);
    if ((uVar28 & 0x3fffffff) == 0 && iVar18 == 0) {
      auVar43._0_8_ =
           (double)CONCAT44((uint)((ulonglong)local_548._0_8_ >> 0x20) & uVar31,
                            (uint)local_548._0_8_ & uVar139);
      auVar43._8_4_ = (uint)local_548._8_8_ & uVar140;
      auVar43._12_4_ = (uint)((ulonglong)local_548._8_8_ >> 0x20) & uVar141;
      auVar81._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar31,SUB84(dVar35,0) & uVar139);
      auVar81._8_4_ = uVar154 & uVar140;
      auVar81._12_4_ = uVar155 & uVar141;
      auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ == dVar133);
      auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ == dVar128);
      uVar28 = movmskpd(0,auVar44);
      auVar82._8_8_ = -(ulonglong)(auVar81._8_8_ == dVar133);
      auVar82._0_8_ = -(ulonglong)(auVar81._0_8_ == dVar128);
      iVar18 = movmskpd(iVar18,auVar82);
      if ((uVar28 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a720a81;
      auVar45._0_8_ = (double)CONCAT44(uStack_524 & uVar31,local_528 & uVar139);
      auVar45._8_4_ = uStack_520 & uVar140;
      auVar45._12_4_ = uStack_51c & uVar141;
      auVar83._0_8_ = (double)CONCAT44(local_538._4_4_ & uVar31,local_538._0_4_ & uVar139);
      auVar83._8_4_ = local_538._8_4_ & uVar140;
      auVar83._12_4_ = local_538._12_4_ & uVar141;
      auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ == dVar133);
      auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ == dVar128);
      uVar28 = movmskpd(0,auVar46);
      auVar84._8_8_ = -(ulonglong)(auVar83._8_8_ == dVar133);
      auVar84._0_8_ = -(ulonglong)(auVar83._0_8_ == dVar128);
      iVar18 = movmskpd(iVar18,auVar84);
      if ((uVar28 & 0x3fffffff) != 0 || iVar18 != 0) goto LAB_14a720a81;
    }
    else {
LAB_14a720a81:
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("!RootBoneTransform.ContainsNaN()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                          ,0x4eb,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar29 = (param_2->AllocatorInstance).Data;
    local_588 = 0;
    local_558._8_4_ = uVar154;
    local_558._0_8_ = dVar35;
    local_558._12_4_ = uVar155;
    if (((pFVar29 <= (FScriptContainerElement *)&local_588) &&
        ((FScriptContainerElement *)&local_588 < pFVar29 + (longlong)param_2->ArrayMax * 0x70)) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar17)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar18 = param_2->ArrayNum;
    if (iVar18 == param_2->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar18 + 1;
    lVar24 = (longlong)iVar18 * 0x70;
    pFVar29 = (param_2->AllocatorInstance).Data;
    *(ulonglong *)(pFVar29 + lVar24) = CONCAT44(uStack_584,local_588);
    *(undefined8 *)(pFVar29 + lVar24 + 8) = uStack_580;
    *(ulonglong *)(pFVar29 + lVar24 + 0x10) = CONCAT44(uStack_574,local_578);
    *(ulonglong *)(pFVar29 + lVar24 + 0x10 + 8) = CONCAT44(uStack_56c,uStack_570);
    *(ulonglong *)(pFVar29 + lVar24 + 0x20) = CONCAT44(uStack_564,local_568);
    *(ulonglong *)(pFVar29 + lVar24 + 0x20 + 8) = CONCAT44(uStack_55c,uStack_560);
    *(undefined8 *)(pFVar29 + lVar24 + 0x30) = local_558._0_8_;
    *(undefined8 *)(pFVar29 + lVar24 + 0x30 + 8) = local_558._8_8_;
    *(undefined8 *)(pFVar29 + lVar24 + 0x40) = local_548._0_8_;
    *(undefined8 *)(pFVar29 + lVar24 + 0x40 + 8) = local_548._8_8_;
    *(undefined8 *)(pFVar29 + lVar24 + 0x50) = local_538._0_8_;
    *(undefined8 *)(pFVar29 + lVar24 + 0x50 + 8) = local_538._8_8_;
    *(ulonglong *)(pFVar29 + lVar24 + 0x60) = CONCAT44(uStack_524,local_528);
    *(ulonglong *)(pFVar29 + lVar24 + 0x60 + 8) = CONCAT44(uStack_51c,uStack_520);
  }
  uVar28 = 0;
  if (0 < (this->LegsData).ArrayNum) {
    local_b80 = 0;
    lVar24 = 0;
    local_b68 = 0;
    do {
      lVar27 = local_b68;
      uVar31 = ~uVar28 >> 0x1f;
      uVar139 = 0;
      if ((int)uVar28 < (this->LegsData).ArrayNum) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar30 = (FLegRuntimeData *)((this->LegsData).AllocatorInstance.Data + lVar27);
      uVar139 = 0;
      if ((int)uVar28 < (this->LegDefinitions).ArrayNum) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FinalizeFootAlignment
                (this,(FPlantResult *)&local_4b8,&local_7d8,pFVar30,
                 (FFootPlacemenLegDefinition *)
                 ((this->LegDefinitions).AllocatorInstance.Data + local_b80),&local_6b8);
      pFVar6 = (FBoneTransform *)(param_2->AllocatorInstance).Data;
      if (((pFVar6 <= &local_4b8) && (&local_4b8 < pFVar6 + param_2->ArrayMax)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar18 = param_2->ArrayNum;
      if (iVar18 == param_2->ArrayMax) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1070,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar18 + 1;
      lVar27 = (longlong)iVar18 * 0x70;
      pFVar29 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar29 + lVar27) = local_4b8._0_8_;
      *(longlong *)(pFVar29 + lVar27 + 8) = local_4b8._padding_;
      *(double *)(pFVar29 + lVar27 + 0x10) = local_4b8.Transform.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x10 + 8) = local_4b8.Transform.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar29 + lVar27 + 0x20) = local_4b8.Transform.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x20 + 8) = local_4b8.Transform.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar29 + lVar27 + 0x30) = local_4b8.Transform.Translation.XY.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x30 + 8) = local_4b8.Transform.Translation.XY.m128d_f64[1];
      *(double *)(pFVar29 + lVar27 + 0x40) = local_4b8.Transform.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x40 + 8) = local_4b8.Transform.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar29 + lVar27 + 0x50) = local_4b8.Transform.Scale3D.XY.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x50 + 8) = local_4b8.Transform.Scale3D.XY.m128d_f64[1];
      *(double *)(pFVar29 + lVar27 + 0x60) = local_4b8.Transform.Scale3D.ZW.m128d_f64[0];
      *(double *)(pFVar29 + lVar27 + 0x60 + 8) = local_4b8.Transform.Scale3D.ZW.m128d_f64[1];
      if (FVisualLogger::bIsRecording != 0) {
        DrawVLog(this,&local_7d8,pFVar30,(FPlantResult *)&local_4b8);
      }
      local_b58 = CVarAnimNodeFootPlacementDebug.Ref;
      bVar17 = IsInParallelGameThread();
      if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
        lVar27 = 0;
      }
      else {
        lVar27 = 1;
      }
      if (local_b58->ShadowedValue[lVar27] != false) {
        DrawDebug(this,&local_7d8,pFVar30,(FPlantResult *)&local_4b8);
        dVar128 = local_7d8.OwningComponentToWorld.Scale3D.XY.m128d_f64[0] *
                  local_4b8.Transform.Translation.XY.m128d_f64[0];
        dVar133 = local_7d8.OwningComponentToWorld.Scale3D.XY.m128d_f64[1] *
                  local_4b8.Transform.Translation.XY.m128d_f64[1];
        uVar139 = 0;
        if ((int)uVar28 < (this->DebugData).OutputFootLocationsWS.ArrayNum) {
          uVar139 = uVar31;
        }
        local_900 = local_4b8.Transform.Translation.ZW.m128d_f64[0];
        dVar156 = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[0];
        dVar160 = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[1];
        dVar71 = local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[1];
        auVar142._8_4_ = SUB84(dVar133,0);
        auVar142._0_8_ = dVar128;
        uVar72 = (undefined4)((ulonglong)dVar133 >> 0x20);
        auVar142._12_4_ = uVar72;
        local_910 = local_4b8.Transform.Translation.XY.m128d_f64[0];
        dStack_908 = local_4b8.Transform.Translation.XY.m128d_f64[1];
        auVar85._8_4_ = SUB84(dVar133,0);
        auVar85._0_8_ = dVar128;
        auVar85._12_4_ = uVar72;
        auVar47._8_4_ = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar47._0_8_ = dVar71;
        auVar47._12_4_ = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[0]._4_4_;
        dVar35 = local_4b8.Transform.Translation.ZW.m128d_f64[0] *
                 local_7d8.OwningComponentToWorld.Scale3D.ZW.m128d_f64[0];
        dVar121 = local_7d8.OwningComponentToWorld.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar9._8_4_ = SUB84(dVar121,0);
        auVar9._0_8_ = dVar35;
        auVar9._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
        auVar86 = blendpd(auVar85,auVar9,2);
        auVar143._0_8_ =
             auVar142._8_8_ * local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[0] -
             dVar71 * dVar128;
        auVar143._8_8_ = dVar35 * dVar71 - auVar47._8_8_ * dVar133;
        auVar134 = blendpd((undefined1  [16])local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64,
                           2);
        auVar87._0_8_ = auVar86._0_8_ * dVar156 - auVar134._0_8_ * dVar35;
        auVar87._8_8_ = auVar86._8_8_ * dVar160 - auVar134._8_8_ * dVar121;
        auVar86 = blendpd(auVar143,auVar87,2);
        dVar121 = auVar143._8_8_ + auVar143._8_8_;
        dVar36 = auVar87._0_8_ + auVar87._0_8_;
        uVar72 = SUB84(dVar36,0);
        uVar127 = (undefined4)((ulonglong)dVar36 >> 0x20);
        auVar144._0_8_ = auVar86._0_8_ + auVar86._0_8_;
        auVar144._8_8_ = auVar86._8_8_ + auVar86._8_8_;
        auVar109._8_4_ = uVar72;
        auVar109._0_8_ = dVar121;
        auVar109._12_4_ = uVar127;
        auVar48._8_4_ = uVar72;
        auVar48._0_8_ = dVar121;
        auVar48._12_4_ = uVar127;
        auVar88._8_4_ = uVar72;
        auVar88._0_8_ = dVar121;
        auVar88._12_4_ = uVar127;
        auVar86 = blendpd(auVar88,auVar144,2);
        auVar110._0_8_ =
             auVar109._8_8_ * local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[0] -
             dVar121 * dVar71;
        auVar110._8_8_ = auVar144._0_8_ * dVar71 - auVar48._8_8_ * dVar156;
        auVar49._8_4_ = SUB84(auVar144._8_8_,0);
        auVar49._0_8_ = auVar144._0_8_;
        auVar49._12_4_ = (int)((ulonglong)auVar144._8_8_ >> 0x20);
        auVar89._0_8_ = auVar86._0_8_ * dVar156 - auVar144._0_8_ * auVar134._0_8_;
        auVar89._8_8_ = auVar86._8_8_ * dVar160 - auVar49._8_8_ * auVar134._8_8_;
        auVar50._8_4_ = SUB84(auVar110._8_8_,0);
        auVar50._0_8_ = auVar110._0_8_;
        auVar50._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
        auVar86 = blendpd(auVar110,auVar89,2);
        dVar128 = dVar121 * dVar160 + dVar128 + auVar50._8_8_ +
                  local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[0];
        dVar133 = dVar36 * dVar160 + dVar133 + auVar89._0_8_ +
                  local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[1];
        uVar72 = SUB84(dVar133,0);
        uVar127 = (undefined4)((ulonglong)dVar133 >> 0x20);
        dVar133 = auVar144._0_8_ * dVar160 + dVar35 + auVar86._0_8_ +
                  local_7d8.OwningComponentToWorld.Translation.ZW.m128d_f64[0];
        local_8f8._8_4_ = uVar72;
        local_8f8._0_8_ = dVar128;
        local_8f8._12_4_ = uVar127;
        local_8e8 = dVar133;
        if ((uVar139 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar29 = (this->DebugData).OutputFootLocationsWS.AllocatorInstance.Data;
        auVar12._8_4_ = uVar72;
        auVar12._0_8_ = dVar128;
        auVar12._12_4_ = uVar127;
        *(undefined1 (*) [16])(pFVar29 + lVar24) = auVar12;
        *(double *)(pFVar29 + lVar24 + 0x10) = dVar133;
        local_8d0 = (pFVar30->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0];
        local_8e0 = (pFVar30->InputPose).FootTransformCS.Translation.XY.m128d_f64[0];
        dStack_8d8 = (pFVar30->InputPose).FootTransformCS.Translation.XY.m128d_f64[1];
        dVar128 = local_8d0 * local_7d8.OwningComponentToWorld.Scale3D.ZW.m128d_f64[0];
        uVar72 = SUB84(local_7d8.OwningComponentToWorld.Scale3D.ZW.m128d_f64[1] * 0.0,0);
        uVar127 = (undefined4)
                  ((ulonglong)(local_7d8.OwningComponentToWorld.Scale3D.ZW.m128d_f64[1] * 0.0) >>
                  0x20);
        uVar139 = 0;
        if ((int)uVar28 < (this->DebugData).InputFootLocationsWS.ArrayNum) {
          uVar139 = uVar31;
        }
        dVar36 = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[0];
        dVar71 = local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64[1];
        dVar121 = local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[1];
        dVar156 = local_7d8.OwningComponentToWorld.Scale3D.XY.m128d_f64[0] * local_8e0;
        dVar160 = local_7d8.OwningComponentToWorld.Scale3D.XY.m128d_f64[1] * dStack_8d8;
        uVar159 = SUB84(dVar160,0);
        auVar145._8_4_ = uVar159;
        auVar145._0_8_ = dVar156;
        uVar161 = (undefined4)((ulonglong)dVar160 >> 0x20);
        auVar145._12_4_ = uVar161;
        auVar51._8_4_ = uVar159;
        auVar51._0_8_ = dVar156;
        auVar51._12_4_ = uVar161;
        auVar90._8_4_ = uVar159;
        auVar90._0_8_ = dVar156;
        auVar90._12_4_ = uVar161;
        auVar10._8_4_ = uVar72;
        auVar10._0_8_ = dVar128;
        auVar10._12_4_ = uVar127;
        auVar86 = blendpd(auVar90,auVar10,2);
        auVar146._0_8_ =
             auVar145._8_8_ * local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[0] -
             dVar156 * dVar121;
        auVar146._8_8_ = dVar128 * dVar121 - auVar51._8_8_ * dVar36;
        auVar52._8_4_ = uVar72;
        auVar52._0_8_ = dVar128;
        auVar52._12_4_ = uVar127;
        auVar134 = blendpd((undefined1  [16])local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64,
                           (undefined1  [16])local_7d8.OwningComponentToWorld.Rotation.ZW.m128d_f64,
                           2);
        auVar91._0_8_ = auVar86._0_8_ * dVar36 - dVar128 * auVar134._0_8_;
        auVar91._8_8_ = auVar86._8_8_ * dVar71 - auVar52._8_8_ * auVar134._8_8_;
        auVar86 = blendpd(auVar146,auVar91,2);
        dVar133 = auVar146._8_8_ + auVar146._8_8_;
        dVar35 = auVar91._0_8_ + auVar91._0_8_;
        uVar72 = SUB84(dVar35,0);
        uVar127 = (undefined4)((ulonglong)dVar35 >> 0x20);
        auVar147._0_8_ = auVar86._0_8_ + auVar86._0_8_;
        auVar147._8_8_ = auVar86._8_8_ + auVar86._8_8_;
        auVar111._8_4_ = uVar72;
        auVar111._0_8_ = dVar133;
        auVar111._12_4_ = uVar127;
        auVar53._8_4_ = uVar72;
        auVar53._0_8_ = dVar133;
        auVar53._12_4_ = uVar127;
        auVar92._8_4_ = uVar72;
        auVar92._0_8_ = dVar133;
        auVar92._12_4_ = uVar127;
        auVar86 = blendpd(auVar92,auVar147,2);
        auVar112._0_8_ =
             auVar111._8_8_ * local_7d8.OwningComponentToWorld.Rotation.XY.m128d_f64[0] -
             dVar133 * dVar121;
        auVar112._8_8_ = auVar147._0_8_ * dVar121 - auVar53._8_8_ * dVar36;
        auVar54._8_4_ = SUB84(auVar147._8_8_,0);
        auVar54._0_8_ = auVar147._0_8_;
        auVar54._12_4_ = (int)((ulonglong)auVar147._8_8_ >> 0x20);
        auVar93._0_8_ = auVar86._0_8_ * dVar36 - auVar147._0_8_ * auVar134._0_8_;
        auVar93._8_8_ = auVar86._8_8_ * dVar71 - auVar54._8_8_ * auVar134._8_8_;
        auVar55._8_4_ = SUB84(auVar112._8_8_,0);
        auVar55._0_8_ = auVar112._0_8_;
        auVar55._12_4_ = (int)((ulonglong)auVar112._8_8_ >> 0x20);
        auVar86 = blendpd(auVar112,auVar93,2);
        dVar133 = dVar133 * dVar71 + dVar156 + auVar55._8_8_ +
                  local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[0];
        dVar35 = dVar35 * dVar71 + dVar160 + auVar93._0_8_ +
                 local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[1];
        uVar72 = SUB84(dVar35,0);
        uVar127 = (undefined4)((ulonglong)dVar35 >> 0x20);
        dVar128 = auVar147._0_8_ * dVar71 + dVar128 + auVar86._0_8_ +
                  local_7d8.OwningComponentToWorld.Translation.ZW.m128d_f64[0];
        local_8c8._8_4_ = uVar72;
        local_8c8._0_8_ = dVar133;
        local_8c8._12_4_ = uVar127;
        local_8b8 = dVar128;
        if ((uVar139 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar29 = (this->DebugData).InputFootLocationsWS.AllocatorInstance.Data;
        auVar13._8_4_ = uVar72;
        auVar13._0_8_ = dVar133;
        auVar13._12_4_ = uVar127;
        *(undefined1 (*) [16])(pFVar29 + lVar24) = auVar13;
        *(double *)(pFVar29 + lVar24 + 0x10) = dVar128;
      }
      uVar28 = uVar28 + 1;
      local_b80 = local_b80 + 0x4c;
      local_b68 = local_b68 + 0x6c0;
      lVar24 = lVar24 + 0x18;
      param_1 = local_b60;
    } while ((int)uVar28 < (this->LegsData).ArrayNum);
  }
  AlgoImpl::
  IntroSortInternal<FBoneTransform,int,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
            ((FBoneTransform *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_b87[0],
             (FCompareBoneTransformIndex *)local_b87);
  lVar24 = 0;
  this->CachedDeltaTime = 0.0;
  this_00 = (FAnimInstanceProxy *)param_1->_padding_;
  if ((this_00->SkeletalMeshComponent == (USkeletalMeshComponent *)0x0) &&
     (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2821110184175206020>,true,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                          ,0x17c,"SkeletalMeshComponent"), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar20 = this_00->SkeletalMeshComponent;
  local_8b0 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0];
  dStack_8a8 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1];
  local_8a0 = (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0];
  local_658.Rotation.XY.m128d_f64[0] = (double)pUVar20->_padding_;
  local_658.Rotation.XY.m128d_f64[1] = (double)pUVar20->_padding_;
  local_658.Rotation.ZW.m128d_f64[0] = (double)pUVar20->_padding_;
  local_658.Rotation.ZW.m128d_f64[1] = (double)pUVar20->_padding_;
  local_658.Translation.XY.m128d_f64[0] = (double)pUVar20->_padding_;
  local_658.Translation.XY.m128d_f64[1] = (double)pUVar20->_padding_;
  local_b58 = (TConsoleVariableData<bool> *)pUVar20->_padding_;
  dStack_b50 = (double)pUVar20->_padding_;
  local_658.Scale3D.XY.m128d_f64[0] = (double)pUVar20->_padding_;
  local_658.Scale3D.XY.m128d_f64[1] = (double)pUVar20->_padding_;
  local_658.Scale3D.ZW.m128d_f64[0] = (double)pUVar20->_padding_;
  local_658.Scale3D.ZW.m128d_f64[1] = (double)pUVar20->_padding_;
  dVar156 = local_658.Scale3D.XY.m128d_f64[0] * local_8b0;
  dVar160 = local_658.Scale3D.XY.m128d_f64[1] * dStack_8a8;
  auVar135._0_8_ = local_8a0 * local_658.Scale3D.ZW.m128d_f64[0];
  auVar135._8_8_ = local_658.Scale3D.ZW.m128d_f64[1] * 0.0;
  auVar129._8_4_ = SUB84(dVar160,0);
  auVar129._0_8_ = dVar156;
  uVar72 = (undefined4)((ulonglong)dVar160 >> 0x20);
  auVar129._12_4_ = uVar72;
  auVar56._8_4_ = SUB84(local_658.Rotation.ZW.m128d_f64[0],0);
  auVar56._0_8_ = local_658.Rotation.XY.m128d_f64[1];
  auVar56._12_4_ = (int)((ulonglong)local_658.Rotation.ZW.m128d_f64[0] >> 0x20);
  auVar134 = blendpd((undefined1  [16])local_658.Rotation.XY.m128d_f64,
                     (undefined1  [16])local_658.Rotation.ZW.m128d_f64,2);
  auVar130._0_8_ =
       auVar129._8_8_ * local_658.Rotation.XY.m128d_f64[0] -
       local_658.Rotation.XY.m128d_f64[1] * dVar156;
  auVar130._8_8_ = auVar135._0_8_ * local_658.Rotation.XY.m128d_f64[1] - auVar56._8_8_ * dVar160;
  auVar94._8_4_ = SUB84(dVar160,0);
  auVar94._0_8_ = dVar156;
  auVar94._12_4_ = uVar72;
  auVar86 = blendpd(auVar94,auVar135,2);
  dVar36 = auVar134._0_8_;
  dVar71 = auVar134._8_8_;
  auVar95._0_8_ = auVar86._0_8_ * local_658.Rotation.ZW.m128d_f64[0] - dVar36 * auVar135._0_8_;
  auVar95._8_8_ = auVar86._8_8_ * local_658.Rotation.ZW.m128d_f64[1] - dVar71 * auVar135._8_8_;
  auVar86 = blendpd(auVar130,auVar95,2);
  auVar131._0_8_ = auVar86._0_8_ + auVar86._0_8_;
  auVar131._8_8_ = auVar86._8_8_ + auVar86._8_8_;
  dVar128 = auVar130._8_8_ + auVar130._8_8_;
  dVar133 = auVar95._0_8_ + auVar95._0_8_;
  uVar72 = SUB84(dVar133,0);
  uVar127 = (undefined4)((ulonglong)dVar133 >> 0x20);
  auVar113._8_4_ = uVar72;
  auVar113._0_8_ = dVar128;
  auVar113._12_4_ = uVar127;
  auVar57._8_4_ = uVar72;
  auVar57._0_8_ = dVar128;
  auVar57._12_4_ = uVar127;
  auVar96._8_4_ = uVar72;
  auVar96._0_8_ = dVar128;
  auVar96._12_4_ = uVar127;
  auVar86 = blendpd(auVar96,auVar131,2);
  auVar114._0_8_ =
       auVar113._8_8_ * local_658.Rotation.XY.m128d_f64[0] -
       dVar128 * local_658.Rotation.XY.m128d_f64[1];
  auVar114._8_8_ =
       auVar131._0_8_ * local_658.Rotation.XY.m128d_f64[1] -
       auVar57._8_8_ * local_658.Rotation.ZW.m128d_f64[0];
  auVar58._8_4_ = SUB84(auVar131._8_8_,0);
  auVar58._0_8_ = auVar131._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar131._8_8_ >> 0x20);
  auVar97._0_8_ = auVar86._0_8_ * local_658.Rotation.ZW.m128d_f64[0] - auVar131._0_8_ * dVar36;
  auVar97._8_8_ = auVar86._8_8_ * local_658.Rotation.ZW.m128d_f64[1] - auVar58._8_8_ * dVar71;
  auVar59._8_4_ = SUB84(auVar114._8_8_,0);
  auVar59._0_8_ = auVar114._0_8_;
  auVar59._12_4_ = (int)((ulonglong)auVar114._8_8_ >> 0x20);
  auVar86 = blendpd(auVar114,auVar97,2);
  dVar35 = local_658.Scale3D.XY.m128d_f64[0] * local_6b8.Translation.XY.m128d_f64[0];
  dVar121 = local_658.Scale3D.XY.m128d_f64[1] * local_6b8.Translation.XY.m128d_f64[1];
  uVar159 = SUB84(dVar121,0);
  uVar161 = (undefined4)((ulonglong)dVar121 >> 0x20);
  local_888 = (double)local_b58 +
              auVar131._0_8_ * local_658.Rotation.ZW.m128d_f64[1] + auVar135._0_8_ + auVar86._0_8_;
  local_880 = local_6b8.Translation.XY.m128d_f64[0];
  dStack_878 = local_6b8.Translation.XY.m128d_f64[1];
  local_870 = local_6b8.Translation.ZW.m128d_f64[0];
  auVar132._0_8_ = local_6b8.Translation.ZW.m128d_f64[0] * local_658.Scale3D.ZW.m128d_f64[0];
  auVar132._8_8_ = local_658.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar128 = dVar128 * local_658.Rotation.ZW.m128d_f64[1] + dVar156 + auVar59._8_8_ +
            local_658.Translation.XY.m128d_f64[0];
  dVar133 = dVar133 * local_658.Rotation.ZW.m128d_f64[1] + dVar160 + auVar97._0_8_ +
            local_658.Translation.XY.m128d_f64[1];
  uVar72 = SUB84(dVar133,0);
  uVar127 = (undefined4)((ulonglong)dVar133 >> 0x20);
  auVar136._8_4_ = uVar159;
  auVar136._0_8_ = dVar35;
  auVar136._12_4_ = uVar161;
  local_898._8_4_ = uVar72;
  local_898._0_8_ = dVar128;
  local_898._12_4_ = uVar127;
  auVar60._8_4_ = uVar159;
  auVar60._0_8_ = dVar35;
  auVar60._12_4_ = uVar161;
  auVar98._8_4_ = uVar159;
  auVar98._0_8_ = dVar35;
  auVar98._12_4_ = uVar161;
  auVar86 = blendpd(auVar98,auVar132,2);
  auVar137._0_8_ =
       auVar136._8_8_ * local_658.Rotation.XY.m128d_f64[0] -
       dVar35 * local_658.Rotation.XY.m128d_f64[1];
  auVar137._8_8_ =
       auVar132._0_8_ * local_658.Rotation.XY.m128d_f64[1] -
       auVar60._8_8_ * local_658.Rotation.ZW.m128d_f64[0];
  auVar122._8_4_ = SUB84(auVar137._8_8_,0);
  auVar122._0_8_ = auVar137._0_8_;
  auVar122._12_4_ = (int)((ulonglong)auVar137._8_8_ >> 0x20);
  auVar61._8_4_ = SUB84(auVar132._8_8_,0);
  auVar61._0_8_ = auVar132._0_8_;
  auVar61._12_4_ = (int)((ulonglong)auVar132._8_8_ >> 0x20);
  auVar11._8_4_ = uVar72;
  auVar11._0_8_ = dVar128;
  auVar11._12_4_ = uVar127;
  *(undefined1 (*) [16])&(this->DebugData).InputPelvisLocationWS.field0_0x0 = auVar11;
  auVar99._0_8_ = auVar86._0_8_ * local_658.Rotation.ZW.m128d_f64[0] - auVar132._0_8_ * dVar36;
  auVar99._8_8_ = auVar86._8_8_ * local_658.Rotation.ZW.m128d_f64[1] - auVar61._8_8_ * dVar71;
  (this->DebugData).InputPelvisLocationWS.field0_0x0._s_0.Z = local_888;
  auVar86 = blendpd(auVar137,auVar99,2);
  dVar128 = auVar122._8_8_ + auVar122._8_8_;
  dVar133 = auVar99._0_8_ + auVar99._0_8_;
  auVar138._0_8_ = auVar86._0_8_ + auVar86._0_8_;
  auVar138._8_8_ = auVar86._8_8_ + auVar86._8_8_;
  uVar72 = SUB84(dVar133,0);
  auVar115._8_4_ = uVar72;
  auVar115._0_8_ = dVar128;
  uVar127 = (undefined4)((ulonglong)dVar133 >> 0x20);
  auVar115._12_4_ = uVar127;
  auVar62._8_4_ = uVar72;
  auVar62._0_8_ = dVar128;
  auVar62._12_4_ = uVar127;
  auVar100._8_4_ = uVar72;
  auVar100._0_8_ = dVar128;
  auVar100._12_4_ = uVar127;
  auVar86 = blendpd(auVar100,auVar138,2);
  auVar116._0_8_ =
       auVar115._8_8_ * local_658.Rotation.XY.m128d_f64[0] -
       dVar128 * local_658.Rotation.XY.m128d_f64[1];
  auVar116._8_8_ =
       auVar138._0_8_ * local_658.Rotation.XY.m128d_f64[1] -
       auVar62._8_8_ * local_658.Rotation.ZW.m128d_f64[0];
  auVar63._8_4_ = SUB84(auVar138._8_8_,0);
  auVar63._0_8_ = auVar138._0_8_;
  auVar63._12_4_ = (int)((ulonglong)auVar138._8_8_ >> 0x20);
  auVar101._0_8_ = auVar86._0_8_ * local_658.Rotation.ZW.m128d_f64[0] - auVar138._0_8_ * dVar36;
  auVar101._8_8_ = auVar86._8_8_ * local_658.Rotation.ZW.m128d_f64[1] - auVar63._8_8_ * dVar71;
  auVar64._8_4_ = SUB84(auVar116._8_8_,0);
  auVar64._0_8_ = auVar116._0_8_;
  auVar64._12_4_ = (int)((ulonglong)auVar116._8_8_ >> 0x20);
  auVar86 = blendpd(auVar116,auVar101,2);
  local_868 = dVar128 * local_658.Rotation.ZW.m128d_f64[1] + dVar35 + auVar64._8_8_ +
              local_658.Translation.XY.m128d_f64[0];
  dStack_860 = dVar133 * local_658.Rotation.ZW.m128d_f64[1] + dVar121 + auVar101._0_8_ +
               local_658.Translation.XY.m128d_f64[1];
  local_858 = auVar138._0_8_ * local_658.Rotation.ZW.m128d_f64[1] + auVar132._0_8_ + auVar86._0_8_ +
              (double)local_b58;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.X = local_868;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Y = dStack_860;
  (this->DebugData).OutputPelvisLocationWS.field0_0x0._s_0.Z = local_858;
  pTVar15 = CVarAnimNodeFootPlacementDebug.Ref;
  local_658.Translation.ZW.m128d_f64[0] = (double)local_b58;
  local_658.Translation.ZW.m128d_f64[1] = dStack_b50;
  bVar17 = IsInParallelGameThread();
  lVar27 = lVar24;
  if ((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) {
    lVar27 = 1;
  }
  pTVar16 = CVarAnimNodeFootPlacementDebugDrawHistory.Ref;
  if (pTVar15->ShadowedValue[lVar27] == false) goto LAB_14a721a88;
  bVar17 = IsInParallelGameThread();
  if (bVar17) {
LAB_14a72149d:
    lVar27 = lVar24;
  }
  else {
    bVar17 = IsInGameThread();
    lVar27 = 4;
    if (bVar17) goto LAB_14a72149d;
  }
  fVar34 = __real_bf800000;
  fVar33 = __real_3f000000;
  iVar18 = *(int *)((longlong)pTVar16->ShadowedValue + lVar27);
  if ((iVar18 != 0) && (this->bIsFirstUpdate == false)) {
    if (iVar18 == -1) {
      FAnimInstanceProxy::AnimDrawDebugLine
                (this_00,(TVector<double> *)local_9b8,&(this->DebugData).OutputPelvisLocationWS,
                 &FColor::Magenta,true,__real_bf800000,__real_3f000000,SDPG_World);
      pFVar29 = (FScriptContainerElement *)&(this->DebugData).InputPelvisLocationWS;
      pFVar26 = (FScriptContainerElement *)(local_9b8 + 0x18);
    }
    else {
      if (((iVar18 < 1) || (uVar28 = iVar18 - 1, (int)uVar28 < 0)) ||
         ((this->DebugData).OutputFootLocationsWS.ArrayNum <= (int)uVar28)) goto LAB_14a7216e0;
      uVar31 = ~uVar28 >> 0x1f;
      uVar139 = 0;
      if ((int)uVar28 < local_980) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar24 = (longlong)(int)uVar28;
      pFVar29 = local_988.Data + lVar24 * 0x18;
      uVar139 = 0;
      if ((int)uVar28 < (this->DebugData).OutputFootLocationsWS.ArrayNum) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FAnimInstanceProxy::AnimDrawDebugLine
                (this_00,(TVector<double> *)
                         ((this->DebugData).OutputFootLocationsWS.AllocatorInstance.Data +
                         lVar24 * 0x18),(TVector<double> *)pFVar29,&FColor::Magenta,true,fVar34,
                 fVar33,SDPG_World);
      uVar139 = 0;
      if ((int)uVar28 < local_970) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar29 = local_978.Data + lVar24 * 0x18;
      uVar139 = 0;
      if ((int)uVar28 < (this->DebugData).InputFootLocationsWS.ArrayNum) {
        uVar139 = uVar31;
      }
      if ((uVar139 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar26 = (this->DebugData).InputFootLocationsWS.AllocatorInstance.Data + lVar24 * 0x18;
    }
    FAnimInstanceProxy::AnimDrawDebugLine
              (this_00,(TVector<double> *)pFVar26,(TVector<double> *)pFVar29,&FColor::Blue,true,
               fVar34,fVar33,SDPG_World);
  }
LAB_14a7216e0:
  local_448.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_448.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_448.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_448.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_448.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_448.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_448.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_448.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_448.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_448.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_448.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_448.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_448,&local_6b8,&local_658);
  local_3e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_3e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_3e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_3e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_3e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_3e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_3e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_3e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_3e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_3e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_3e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_3e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_3e8,&(this->PelvisData).InputPose.FKTransformCS,&local_658);
  local_388.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_388.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_388.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_388.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_388.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_388.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_388.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_388.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_388.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_388.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_388.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_388.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_388,&local_208,&local_658);
  fVar108 = __real_41a00000;
  local_a78._s_0.X = local_448.Translation.XY.m128d_f64[0];
  local_a78._s_0.Y = local_448.Translation.XY.m128d_f64[1];
  local_a78._s_0.Z = local_448.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            (this_00,(TVector<double> *)&local_a78._s_0,__real_41a00000,&FColor::Green,false,fVar34,
             SDPG_Foreground);
  local_a60._s_0.X = local_3e8.Translation.XY.m128d_f64[0];
  local_a60._s_0.Y = local_3e8.Translation.XY.m128d_f64[1];
  local_a60._s_0.Z = local_3e8.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            (this_00,(TVector<double> *)&local_a60._s_0,fVar108,&FColor::Blue,false,fVar34,
             SDPG_Foreground);
  local_a48._s_0.X = local_388.Translation.XY.m128d_f64[0];
  local_a48._s_0.Y = local_388.Translation.XY.m128d_f64[1];
  local_a48._s_0.Z = local_388.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugPoint
            (this_00,(TVector<double> *)&local_a48._s_0,__real_41200000,&FColor::Purple,false,fVar34
             ,SDPG_Foreground);
  dVar128 = local_658.Scale3D.XY.m128d_f64[0] *
            (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0];
  dVar133 = local_658.Scale3D.XY.m128d_f64[1] *
            (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1];
  uVar72 = (undefined4)((ulonglong)dVar133 >> 0x20);
  auVar157._0_8_ =
       (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] *
       local_658.Scale3D.ZW.m128d_f64[0];
  auVar157._8_8_ = local_658.Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar71 = local_658.Rotation.ZW.m128d_f64[0];
  dVar156 = local_658.Rotation.ZW.m128d_f64[1];
  auVar148._8_4_ = SUB84(dVar133,0);
  auVar148._0_8_ = dVar128;
  auVar148._12_4_ = uVar72;
  auVar102._8_4_ = SUB84(dVar133,0);
  auVar102._0_8_ = dVar128;
  auVar102._12_4_ = uVar72;
  dVar36 = local_658.Rotation.XY.m128d_f64[1];
  auVar86 = blendpd(auVar102,auVar157,2);
  auVar65._8_4_ = local_658.Rotation.ZW.m128d_f64[0]._0_4_;
  auVar65._0_8_ = dVar36;
  auVar65._12_4_ = local_658.Rotation.ZW.m128d_f64[0]._4_4_;
  auVar134 = blendpd((undefined1  [16])local_658.Rotation.XY.m128d_f64,
                     (undefined1  [16])local_658.Rotation.ZW.m128d_f64,2);
  auVar149._0_8_ = auVar148._8_8_ * local_658.Rotation.XY.m128d_f64[0] - dVar36 * dVar128;
  auVar149._8_8_ = auVar157._0_8_ * dVar36 - auVar65._8_8_ * dVar133;
  auVar103._0_8_ = auVar86._0_8_ * dVar71 - auVar134._0_8_ * auVar157._0_8_;
  auVar103._8_8_ = auVar86._8_8_ * dVar156 - auVar134._8_8_ * auVar157._8_8_;
  auVar66._8_4_ = SUB84(auVar149._8_8_,0);
  auVar66._0_8_ = auVar149._0_8_;
  auVar66._12_4_ = (int)((ulonglong)auVar149._8_8_ >> 0x20);
  dVar35 = auVar66._8_8_ + auVar66._8_8_;
  dVar121 = auVar103._0_8_ + auVar103._0_8_;
  auVar86 = blendpd(auVar149,auVar103,2);
  auVar104._8_4_ = local_658.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar104._0_8_ = dVar156;
  auVar104._12_4_ = local_658.Rotation.ZW.m128d_f64[1]._4_4_;
  auVar123._8_4_ = SUB84(dVar121,0);
  auVar123._0_8_ = dVar35;
  uVar72 = (undefined4)((ulonglong)dVar121 >> 0x20);
  auVar123._12_4_ = uVar72;
  auVar150._0_8_ = auVar86._0_8_ + auVar86._0_8_;
  auVar150._8_8_ = auVar86._8_8_ + auVar86._8_8_;
  auVar117._8_4_ = SUB84(dVar121,0);
  auVar117._0_8_ = dVar35;
  auVar117._12_4_ = uVar72;
  auVar86 = blendpd(auVar117,auVar150,2);
  auVar124._0_8_ = auVar123._8_8_ * local_658.Rotation.XY.m128d_f64[0] - dVar36 * dVar35;
  auVar124._8_8_ = auVar150._0_8_ * dVar36 - dVar71 * dVar121;
  auVar67._8_4_ = SUB84(auVar124._8_8_,0);
  auVar67._0_8_ = auVar124._0_8_;
  auVar67._12_4_ = (int)((ulonglong)auVar124._8_8_ >> 0x20);
  auVar118._0_8_ = auVar86._0_8_ * dVar71 - auVar134._0_8_ * auVar150._0_8_;
  auVar118._8_8_ = auVar86._8_8_ * dVar156 - auVar134._8_8_ * auVar150._8_8_;
  auVar86 = blendpd(auVar124,auVar118,2);
  local_a30._s_0.X =
       dVar156 * dVar35 + dVar128 + auVar67._8_8_ + local_658.Translation.XY.m128d_f64[0];
  local_a30._s_0.Y =
       auVar104._8_8_ * dVar121 + dVar133 + auVar118._0_8_ + local_658.Translation.XY.m128d_f64[1];
  local_a30._s_0.Z =
       dVar156 * auVar150._0_8_ + auVar157._0_8_ + auVar86._0_8_ +
       local_658.Translation.ZW.m128d_f64[0];
  FAnimInstanceProxy::AnimDrawDebugCircle
            (this_00,(TVector<double> *)&local_a30._s_0,__real_42c80000,0x18,&FColor::Cyan,
             &(this->CharacterData).SmoothCapsuleGroundNormalWS,false,fVar34,SDPG_Foreground,fVar33)
  ;
LAB_14a721a88:
  if (FVisualLogger::bIsRecording != 0) {
    local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_328.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_328.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_328,&local_6b8,&local_658);
    local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_2c8,&(this->PelvisData).InputPose.FKTransformCS,&local_658);
    local_268.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_268.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_268.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_268.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_268.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_268.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_268.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_268.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_268.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_268.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_268.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_268.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_268,&local_208,&local_658);
    pUVar7 = this_00->AnimInstanceObject;
    if (FVisualLogger::bIsRecording != 0) {
      local_a18._s_0.X = local_328.Translation.XY.m128d_f64[0];
      local_a18._s_0.Y = local_328.Translation.XY.m128d_f64[1];
      local_a18._s_0.Z = local_328.Translation.ZW.m128d_f64[0];
      ::FName::FName(&local_b48,"FootPlacement");
      FVisualLogger::SphereLogfImpl
                (pUVar7,&local_b48,Display,(TVector<double> *)&local_a18._s_0,0.0,&FColor::Green,
                 false,L"");
      if (FVisualLogger::bIsRecording != 0) {
        local_a00._s_0.X = local_2c8.Translation.XY.m128d_f64[0];
        local_a00._s_0.Y = local_2c8.Translation.XY.m128d_f64[1];
        local_a00._s_0.Z = local_2c8.Translation.ZW.m128d_f64[0];
        ::FName::FName(&local_b40,"FootPlacement");
        FVisualLogger::SphereLogfImpl
                  (pUVar7,&local_b40,Display,(TVector<double> *)&local_a00._s_0,0.0,&FColor::Blue,
                   false,L"");
        if (FVisualLogger::bIsRecording != 0) {
          local_9e8._s_0.X = local_268.Translation.XY.m128d_f64[0];
          local_9e8._s_0.Y = local_268.Translation.XY.m128d_f64[1];
          local_9e8._s_0.Z = local_268.Translation.ZW.m128d_f64[0];
          ::FName::FName(&local_b38,"FootPlacement");
          FVisualLogger::SphereLogfImpl
                    (pUVar7,&local_b38,Display,(TVector<double> *)&local_9e8._s_0,0.0,
                     &FColor::Purple,false,L"");
        }
      }
    }
    dVar71 = local_658.Rotation.ZW.m128d_f64[0];
    dVar156 = local_658.Rotation.ZW.m128d_f64[1];
    dVar36 = local_658.Rotation.XY.m128d_f64[1];
    auVar68._8_4_ = local_658.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar68._0_8_ = dVar36;
    auVar68._12_4_ = local_658.Rotation.ZW.m128d_f64[0]._4_4_;
    dVar128 = local_658.Scale3D.XY.m128d_f64[0] *
              (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0];
    dVar133 = local_658.Scale3D.XY.m128d_f64[1] *
              (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1];
    uVar72 = (undefined4)((ulonglong)dVar133 >> 0x20);
    auVar158._0_8_ =
         (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] *
         local_658.Scale3D.ZW.m128d_f64[0];
    auVar158._8_8_ = local_658.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar151._8_4_ = SUB84(dVar133,0);
    auVar151._0_8_ = dVar128;
    auVar151._12_4_ = uVar72;
    auVar105._8_4_ = SUB84(dVar133,0);
    auVar105._0_8_ = dVar128;
    auVar105._12_4_ = uVar72;
    auVar86 = blendpd(auVar105,auVar158,2);
    auVar152._0_8_ = auVar151._8_8_ * local_658.Rotation.XY.m128d_f64[0] - dVar36 * dVar128;
    auVar152._8_8_ = auVar158._0_8_ * dVar36 - auVar68._8_8_ * dVar133;
    auVar134 = blendpd((undefined1  [16])local_658.Rotation.XY.m128d_f64,
                       (undefined1  [16])local_658.Rotation.ZW.m128d_f64,2);
    auVar106._0_8_ = auVar86._0_8_ * dVar71 - auVar134._0_8_ * auVar158._0_8_;
    auVar106._8_8_ = auVar86._8_8_ * dVar156 - auVar134._8_8_ * auVar158._8_8_;
    auVar69._8_4_ = SUB84(auVar152._8_8_,0);
    auVar69._0_8_ = auVar152._0_8_;
    auVar69._12_4_ = (int)((ulonglong)auVar152._8_8_ >> 0x20);
    dVar35 = auVar69._8_8_ + auVar69._8_8_;
    dVar121 = auVar106._0_8_ + auVar106._0_8_;
    auVar86 = blendpd(auVar152,auVar106,2);
    auVar107._8_4_ = local_658.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar107._0_8_ = dVar156;
    auVar107._12_4_ = local_658.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar125._8_4_ = SUB84(dVar121,0);
    auVar125._0_8_ = dVar35;
    uVar72 = (undefined4)((ulonglong)dVar121 >> 0x20);
    auVar125._12_4_ = uVar72;
    auVar153._0_8_ = auVar86._0_8_ + auVar86._0_8_;
    auVar153._8_8_ = auVar86._8_8_ + auVar86._8_8_;
    auVar119._8_4_ = SUB84(dVar121,0);
    auVar119._0_8_ = dVar35;
    auVar119._12_4_ = uVar72;
    auVar86 = blendpd(auVar119,auVar153,2);
    auVar126._0_8_ = auVar125._8_8_ * local_658.Rotation.XY.m128d_f64[0] - dVar36 * dVar35;
    auVar126._8_8_ = auVar153._0_8_ * dVar36 - dVar71 * dVar121;
    auVar70._8_4_ = SUB84(auVar126._8_8_,0);
    auVar70._0_8_ = auVar126._0_8_;
    auVar70._12_4_ = (int)((ulonglong)auVar126._8_8_ >> 0x20);
    auVar120._0_8_ = auVar86._0_8_ * dVar71 - auVar134._0_8_ * auVar153._0_8_;
    auVar120._8_8_ = auVar86._8_8_ * dVar156 - auVar134._8_8_ * auVar153._8_8_;
    auVar86 = blendpd(auVar126,auVar120,2);
    local_9d0._s_0.X =
         dVar156 * dVar35 + dVar128 + auVar70._8_8_ + local_658.Translation.XY.m128d_f64[0];
    local_9d0._s_0.Y =
         auVar107._8_8_ * dVar121 + dVar133 + auVar120._0_8_ + local_658.Translation.XY.m128d_f64[1]
    ;
    local_9d0._s_0.Z =
         dVar156 * auVar153._0_8_ + auVar158._0_8_ + auVar86._0_8_ +
         local_658.Translation.ZW.m128d_f64[0];
    if (FVisualLogger::bIsRecording != 0) {
      ::FName::FName(&local_b30,"FootPlacement");
      FVisualLogger::DiscLogfImpl
                (pUVar7,&local_b30,Display,(TVector<double> *)&local_9d0._s_0,
                 &(this->CharacterData).SmoothCapsuleGroundNormalWS,__real_42480000,&FColor::Cyan,1,
                 false,L"");
    }
  }
  this->bIsFirstUpdate = false;
  (this->LastComponentLocation).field0_0x0._s_0.X =
       local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[0];
  (this->LastComponentLocation).field0_0x0._s_0.Y =
       local_7d8.OwningComponentToWorld.Translation.XY.m128d_f64[1];
  (this->LastComponentLocation).field0_0x0._s_0.Z =
       local_7d8.OwningComponentToWorld.Translation.ZW.m128d_f64[0];
  if (local_968.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data);
  }
  if (local_978.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.Data);
  }
  if (local_988.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_988.Data);
  }
  if ((local_b70 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_b70 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_b70 & 4) != 0) {
    FThreadStats::AddMessage(local_b78,CycleScopeEnd);
  }
  return;
}

// FinalizeFootAlignment @ 14a725880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPlantResult * __thiscall
FAnimNode_FootPlacement::FinalizeFootAlignment
          (FAnimNode_FootPlacement *this,FPlantResult *__return_storage_ptr__,
          FEvaluationContext *param_1,FLegRuntimeData *param_2,FFootPlacemenLegDefinition *param_3,
          TTransform<double> *param_4)

{
  FCompactPoseBoneIndex FVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined8 uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar16;
  FPlantResult *pFVar17;
  TMatrix<double> *pTVar18;
  uint uVar19;
  TVector<double>_u_0 *pTVar20;
  TTransform<double> *this_00;
  TVector<double> *pTVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined8 uVar44;
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
  float fVar46;
  undefined1 auVar47 [16];
  double dVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar56;
  double dVar57;
  uint uVar64;
  undefined1 auVar59 [16];
  undefined8 uVar65;
  undefined1 auVar60 [16];
  double dVar58;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  float fVar69;
  double dVar70;
  double dVar71;
  float fVar72;
  undefined1 auStackY_6c8 [32];
  double local_680;
  TVector<double>_u_0 local_678;
  double local_658;
  undefined1 local_650 [16];
  double local_640;
  TVector<double>_u_0 local_638;
  TVector<double>_u_0 local_620;
  double local_608;
  double dStack_600;
  TVector<double>_u_0 local_5f8;
  TVector<double>_u_0 local_5e0;
  double local_5c8;
  double local_5c0;
  undefined8 local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  double local_5a8;
  TVector<double>_u_0 local_598;
  TVector<double>_u_0 local_578;
  TVector<double>_u_0 local_558;
  double local_538;
  double dStack_530;
  double local_528;
  TQuat<double> local_518;
  undefined1 local_4f8 [16];
  double local_4e8;
  TPlane<double> local_4d8;
  undefined1 local_4b8 [16];
  double local_4a8;
  double local_4a0 [2];
  double local_490;
  double local_488 [2];
  double local_478;
  double local_470 [2];
  double local_460;
  undefined1 local_458 [16];
  double local_448;
  double local_440;
  double dStack_438;
  double local_430;
  undefined1 local_428 [16];
  double local_418;
  undefined1 local_410 [16];
  double local_400;
  undefined1 local_3f8 [16];
  double local_3e8;
  undefined1 local_3e0 [16];
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3b0;
  double dStack_3a8;
  double local_3a0;
  double local_398 [2];
  double local_388;
  undefined1 local_380 [16];
  double local_370;
  TTransform<double> local_368;
  TRotator<double> local_308;
  undefined1 local_2e8 [40];
  double dStack_2c0;
  __m128d local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  uint uVar43;
  double dVar45;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  UE::Math::TTransform<double>::GetRelativeTransform
            (&(param_2->InputPose).HipTransformCS,&local_1c8,
             &(this->PelvisData).InputPose.FKTransformCS);
  local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_288.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_288.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_288.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_288.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_288.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_288.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_288,&local_1c8,param_4);
  local_2e8._8_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_2e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2e8._24_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_2e8._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_2c0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2e8._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2a8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  uStack_2a0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_2b8.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_2b8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_298 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  uStack_290 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            ((TTransform<double> *)local_2e8,&param_2->AlignedFootTransformRS,
             &(this->PelvisData).InputPose.RootTransformCS);
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_228,&(param_2->InputPose).FootToBall,(TTransform<double> *)local_2e8);
  uVar43 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar28 = __real_3ff0000000000000;
  local_3e8 = (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0];
  dStack_600 = (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[1];
  local_3f8 = *(undefined1 (*) [16])(param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64;
  local_3a0 = (param_2->InputPose).HipTransformCS.Translation.ZW.m128d_f64[0];
  local_5e0._s_0.X = local_228.Translation.XY.m128d_f64[0];
  local_5e0._s_0.Y = local_228.Translation.XY.m128d_f64[1];
  local_5e0._s_0.Z = local_228.Translation.ZW.m128d_f64[0];
  local_3b0 = (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[0];
  dStack_3a8 = (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[1];
  local_658 = local_3f8._0_8_ - local_3b0;
  dVar55 = local_3f8._8_8_ - dStack_3a8;
  local_608 = local_3e8 - local_3a0;
  auVar33._8_4_ = local_3f8._8_4_;
  auVar33._0_8_ = local_658;
  auVar33._12_4_ = local_3f8._12_4_;
  uVar44 = auVar33._8_8_;
  local_650._8_4_ = local_3f8._8_4_;
  local_650._0_8_ = dVar55;
  local_650._12_4_ = local_3f8._12_4_;
  dVar58 = dVar55 * dVar55 + local_658 * local_658 + local_608 * local_608;
  if ((dVar58 != __real_3ff0000000000000) && (__real_3e45798ee0000000 <= dVar58)) {
    local_5c8 = __real_3ff0000000000000 / SQRT(dVar58);
    uVar44 = 0;
  }
  dVar70 = local_2e8._32_8_;
  dVar71 = local_2e8._40_8_;
  local_380._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
  local_380._0_8_ = local_288.Translation.XY.m128d_f64[0];
  local_380._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
  dVar27 = dVar70 - local_288.Translation.XY.m128d_f64[0];
  dVar45 = local_2b8.m128d_f64[0] - local_288.Translation.ZW.m128d_f64[0];
  local_678._s_0.X = local_2b8.m128d_f64[0];
  local_678._s_0.Y = local_2b8.m128d_f64[1];
  local_388 = local_2b8.m128d_f64[0];
  auVar9._4_8_ = uVar44;
  auVar9._0_4_ = local_288.Translation.XY.m128d_f64[0]._4_4_;
  auVar63._0_8_ = auVar9._0_8_ << 0x20;
  auVar63._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
  auVar63._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
  dVar8 = dVar71 - auVar63._8_8_;
  auVar59._8_4_ = local_2e8._40_4_;
  auVar59._0_8_ = dVar8;
  auVar59._12_4_ = local_2e8._44_4_;
  local_370 = local_288.Translation.ZW.m128d_f64[0];
  uVar65 = auVar59._8_8_;
  local_398[0] = (double)local_2e8._32_8_;
  local_398[1] = dStack_2c0;
  dVar57 = dVar8 * dVar8 + dVar27 * dVar27 + dVar45 * dVar45;
  uVar44 = dVar27;
  uVar13 = dVar8;
  local_680 = dVar45;
  if ((dVar57 != __real_3ff0000000000000) &&
     (uVar44 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     local_680 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar57)) {
    uVar65 = 0;
    local_5c0 = __real_3ff0000000000000 / SQRT(dVar57);
    local_680 = local_5c0 * dVar45;
    uVar44 = dVar27 * local_5c0;
    uVar13 = dVar8 * local_5c0;
  }
  uVar56 = (uint)((ulonglong)uVar13 >> 0x20);
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)local_658 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(local_658,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar55,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_608 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_608,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar44 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar44 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44(uVar56 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar13 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_680 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_680,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))) {
    fVar26 = (param_2->Bones).LimbLength;
    fVar69 = (float)SQRT(dVar58);
    if (fVar69 <= fVar26) {
      fVar69 = (fVar26 - fVar69) * (this->PlantSettings).MaxExtensionRatio + fVar69;
    }
    local_490 = local_2b8.m128d_f64[0];
    local_4a8 = local_288.Translation.ZW.m128d_f64[0];
    auVar10._4_8_ = uVar65;
    auVar10._0_4_ = local_288.Translation.XY.m128d_f64[0]._4_4_;
    auVar60._0_8_ = auVar10._0_8_ << 0x20;
    auVar60._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
    auVar60._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
    dVar58 = auVar60._8_8_ - dVar71;
    local_4a0[0] = (double)local_2e8._32_8_;
    local_4a0[1] = dStack_2c0;
    fVar46 = (float)SQRT(dVar58 * dVar58 +
                         (local_288.Translation.XY.m128d_f64[0] - dVar70) *
                         (local_288.Translation.XY.m128d_f64[0] - dVar70) +
                         (local_288.Translation.ZW.m128d_f64[0] - local_2b8.m128d_f64[0]) *
                         (local_288.Translation.ZW.m128d_f64[0] - local_2b8.m128d_f64[0]));
    fVar72 = fVar46 - fVar69;
    fVar26 = fVar72;
    local_4b8 = local_380;
    dVar58 = local_288.Translation.XY.m128d_f64[1];
    if (fVar46 <= fVar69) {
      (param_2->Plant).bCanReachTarget = true;
    }
    else {
      if ((param_2->Plant).PlantType == Unplanted) {
        (param_2->Plant).bCanReachTarget = false;
        if ((param_2->Plant).TimeSinceFullyUnaligned == 0.0) goto LAB_14a725db8;
LAB_14a725dab:
        dVar27 = local_2b8.m128d_f64[0];
        if ((this->PlantSettings).bAdjustHeelBeforePlanting != false) goto LAB_14a725db8;
      }
      else {
        if ((param_2->Plant).bCanReachTarget == false) goto LAB_14a725dab;
LAB_14a725db8:
        fVar26 = (param_2->Bones).FootLength;
        if (fVar72 <= fVar26) {
          fVar26 = fVar72;
        }
        local_478 = local_2b8.m128d_f64[0];
        local_460 = local_2b8.m128d_f64[0];
        local_488[0] = (double)local_2e8._32_8_;
        local_488[1] = dStack_2c0;
        fVar26 = fVar26 * (param_2->InputPose).AlignmentAlpha;
        local_470[0] = (double)local_2e8._32_8_;
        local_470[1] = dStack_2c0;
        dVar58 = (double)fVar26;
        auVar11._4_8_ = local_380._8_8_;
        auVar11._0_4_ = (int)((ulonglong)local_228.Translation.XY.m128d_f64[0] >> 0x20);
        auVar61._0_8_ = auVar11._0_8_ << 0x20;
        auVar61._8_4_ = SUB84(local_228.Translation.XY.m128d_f64[1],0);
        auVar61._12_4_ = (int)((ulonglong)local_228.Translation.XY.m128d_f64[1] >> 0x20);
        dVar7 = dVar70 - (double)uVar44 * dVar58;
        dVar57 = dVar71 - (double)uVar13 * dVar58;
        uVar67 = (undefined4)((ulonglong)dVar57 >> 0x20);
        dVar27 = local_2b8.m128d_f64[0] - local_680 * dVar58;
        local_5f8._s_0.X = local_228.Translation.XY.m128d_f64[0] - dVar70;
        local_678._s_0.X = local_228.Translation.XY.m128d_f64[0] - dVar7;
        local_5f8._s_0.Y = auVar61._8_8_ - dVar71;
        local_678._s_0.Y = auVar61._8_8_ - dVar57;
        local_5f8._s_0.Z = local_228.Translation.ZW.m128d_f64[0] - local_2b8.m128d_f64[0];
        local_678._s_0.Z = local_228.Translation.ZW.m128d_f64[0] - dVar27;
        UE::Math::TQuat<double>::FindBetweenVectors
                  (&local_518,(TVector<double> *)&local_5f8._s_0,(TVector<double> *)&local_678._s_0)
        ;
        UE::Math::TQuat<double>::Rotator(&local_518,&local_308);
        dVar55 = local_518.W;
        dVar58 = local_518.Z;
        auVar29._8_4_ = local_518.Z._0_4_;
        auVar29._0_8_ = dVar58;
        auVar29._12_4_ = local_518.Z._4_4_;
        dVar45 = (double)local_2e8._24_8_ * local_518.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 (double)local_2e8._0_8_ * dVar55 +
                 (double)local_2e8._16_8_ * local_518.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar58 * (double)local_2e8._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar8 = (double)local_2e8._16_8_ * local_518.X *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                (double)local_2e8._8_8_ * dVar55 +
                (double)local_2e8._24_8_ * local_518.Y *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar29._8_8_ * (double)local_2e8._0_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar30._8_4_ = SUB84(dVar8,0);
        auVar30._0_8_ = dVar45;
        auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar62._0_8_ = (double)local_2e8._16_8_ * dVar55;
        auVar62._8_8_ = (double)local_2e8._24_8_ * dVar55;
        dVar70 = local_518.X * (double)local_2e8._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + auVar62._0_8_ +
                 (double)local_2e8._0_8_ * local_518.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar58 * (double)local_2e8._24_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar71 = local_518.X * (double)local_2e8._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + auVar62._8_8_ +
                 (double)local_2e8._8_8_ * local_518.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar58 * (double)local_2e8._16_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar47._8_4_ = SUB84(dVar71,0);
        auVar47._0_8_ = dVar70;
        auVar47._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
        dVar58 = dVar70 * dVar70 + dVar45 * dVar45;
        dVar55 = auVar47._8_8_ * dVar71 + auVar30._8_8_ * dVar8;
        local_458._8_4_ = SUB84(dVar57,0);
        local_458._0_8_ = dVar7;
        local_458._12_4_ = uVar67;
        auVar31._8_4_ = SUB84(dVar55,0);
        auVar31._0_8_ = dVar58;
        auVar31._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        unique0x100005fb = SUB84(dVar57,0);
        local_2e8._32_8_ = dVar7;
        unique0x100005ff = uVar67;
        auVar32._0_8_ = auVar31._8_8_ + dVar58;
        auVar32._8_8_ = dVar58 + dVar55;
        auVar63 = sqrtpd(auVar62,auVar32);
        uVar22 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar32._0_8_);
        uVar24 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar32._8_8_);
        uVar23 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar32._0_8_);
        uVar25 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar32._8_8_);
        auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar63);
        auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar63);
        auVar34._0_8_ = uVar23 & (ulonglong)(auVar33._0_8_ * dVar70);
        uVar14 = uVar25 & (ulonglong)(auVar33._8_8_ * dVar71);
        auVar34._8_4_ = (undefined4)uVar14;
        auVar34._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar4._4_4_ = ~(uint)(uVar23 >> 0x20) &
                       GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar4._0_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar4._8_4_ = ~(uint)uVar25 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar4._12_4_ =
             ~(uint)(uVar25 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        local_2e8._16_16_ = auVar34 | auVar4;
        auVar48._0_8_ = uVar22 & (ulonglong)(auVar63._0_8_ * dVar45);
        uVar14 = uVar24 & (ulonglong)(auVar63._8_8_ * dVar8);
        auVar48._8_4_ = (undefined4)uVar14;
        auVar48._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar3._4_4_ = ~(uint)(uVar22 >> 0x20) &
                       GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar3._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar3._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar3._12_4_ =
             ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        local_2e8._0_16_ = auVar48 | auVar3;
        local_2b8.m128d_f64[1] = 0.0;
        local_2b8.m128d_f64[0] = dVar27;
        fVar26 = fVar72 - fVar26;
        dVar70 = dVar7;
        dVar71 = dVar57;
        dVar55 = (double)local_650._0_8_;
        uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar43 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        local_448 = dVar27;
        dVar58 = local_288.Translation.XY.m128d_f64[1];
      }
      local_288.Translation.XY.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)dVar58 >> 0x20);
      uVar67 = (undefined4)((ulonglong)dVar71 >> 0x20);
      if (0.0 < fVar26) {
        local_5a8 = local_288.Translation.ZW.m128d_f64[0];
        local_638._s_0.Z = local_288.Translation.ZW.m128d_f64[0];
        local_558._s_0.Z = local_288.Translation.ZW.m128d_f64[0];
        local_528 = local_680;
        local_650._8_4_ = SUB84(dVar71,0);
        local_650._0_8_ = dVar70;
        local_650._12_4_ = uVar67;
        uStack_5ac = local_288.Translation.XY.m128d_f64[1]._4_4_;
        local_598._8_4_ = (uint)uVar13;
        local_598._0_8_ = uVar44;
        local_598._12_4_ = uVar56;
        local_598._s_0.Z = local_680;
        local_578._8_4_ = SUB84(dVar71,0);
        local_578._0_8_ = dVar70;
        local_578._12_4_ = uVar67;
        local_558._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
        local_640 = dVar27;
        local_620._s_0.Z = dVar27;
        uStack_5b0 = local_288.Translation.XY.m128d_f64[1]._0_4_;
        local_578._s_0.Z = dVar27;
        local_558._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
        local_288.Translation.XY.m128d_f64[1] = dVar58;
        local_5b8 = local_288.Translation.XY.m128d_f64[0];
        local_558._0_8_ = local_288.Translation.XY.m128d_f64[0];
        FMath::SphereDistToLine
                  ((TVector<double> *)&local_558._s_0,fVar69,(TVector<double> *)&local_578._s_0,
                   (TVector<double> *)&local_598._s_0,(TVector<double> *)&local_638._s_0);
        dStack_2c0 = local_638._s_0.Y;
        local_2e8._32_8_ = local_638._s_0.X;
        local_2b8.m128d_f64[1] = 0.0;
        local_2b8.m128d_f64[0] = local_638._s_0.Z;
        dVar58 = local_288.Translation.XY.m128d_f64[1];
      }
    }
    uVar56 = param_2->Idx;
    uVar64 = 0;
    if ((int)uVar56 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar64 = ~uVar56 >> 0x1f;
    }
    local_288.Translation.XY.m128d_f64[1] = dVar58;
    if (uVar64 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FPlantResult *)(*pcVar2)();
        return pFVar17;
      }
    }
    *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data + (longlong)(int)uVar56 * 0x10) =
         fVar72;
    uVar56 = param_2->Idx;
    uVar64 = 0;
    if ((int)uVar56 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar64 = ~uVar56 >> 0x1f;
    }
    if (uVar64 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FPlantResult *)(*pcVar2)();
        return pFVar17;
      }
    }
    fVar72 = fVar72 - fVar26;
    if (fVar26 <= 0.0) {
      fVar26 = 0.0;
    }
    *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data + (longlong)(int)uVar56 * 0x10 + 4)
         = fVar72;
    uVar56 = param_2->Idx;
    uVar64 = 0;
    if ((int)uVar56 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar64 = ~uVar56 >> 0x1f;
    }
    if (uVar64 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar2 = (code *)swi(3);
        pFVar17 = (FPlantResult *)(*pcVar2)();
        return pFVar17;
      }
    }
    *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data + (longlong)(int)uVar56 * 0x10 + 8)
         = fVar26;
  }
  pTVar18 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(this->PelvisData).InputPose.RootTransformCS,&local_168);
  UE::Math::TPlane<double>::TransformBy(&(param_2->Plant).PlantPlaneRS,&local_4d8,pTVar18);
  dVar58 = (double)local_2e8._32_8_;
  dVar27 = dStack_2c0;
  pTVar21 = &param_1->ApproachDirCS;
  dVar45 = local_2b8.m128d_f64[0];
  dVar8 = local_2b8.m128d_f64[1];
  local_620._s_0.Z = local_2b8.m128d_f64[0];
  local_620._s_0.X = (double)local_2e8._32_8_;
  local_620._8_8_ = dStack_2c0;
  fVar69 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                     ((TVector<double> *)&local_620._s_0,&local_4d8,pTVar21);
  pTVar20 = &local_5e0;
  fVar46 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                     ((TVector<double> *)&pTVar20->_s_0,&local_4d8,pTVar21);
  uVar67 = SUB84(pTVar20,0);
  fVar26 = (param_2->InputPose).DistanceToPlant;
  if (fVar46 <= fVar69) {
    fVar69 = fVar46;
  }
  if (0.0 <= fVar26) {
    fVar26 = 0.0;
  }
  if (fVar69 - fVar26 < 0.0) {
    dStack_438 = (double)(fVar69 - fVar26);
    local_430 = dStack_438 * (pTVar21->field0_0x0)._s_0.Z;
    local_440 = dStack_438 * (pTVar21->field0_0x0)._s_0.X;
    dStack_438 = dStack_438 * (pTVar21->field0_0x0)._s_0.Y;
    dVar45 = dVar45 + local_430;
    dVar8 = dVar8 + 0.0;
    dVar58 = dVar58 + local_440;
    dVar27 = dVar27 + dStack_438;
    unique0x100007e7 = SUB84(dVar27,0);
    local_2e8._32_8_ = dVar58;
    unique0x100007eb = (int)((ulonglong)dVar27 >> 0x20);
    local_2b8.m128d_f64[1]._0_4_ = SUB84(dVar8,0);
    local_2b8.m128d_f64[0] = dVar45;
    local_2b8.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar8 >> 0x20);
  }
  uVar68 = (undefined4)((ulonglong)dVar27 >> 0x20);
  dVar70 = (pTVar21->field0_0x0)._s_0.X;
  dVar71 = (pTVar21->field0_0x0)._s_0.Y;
  dVar57 = (pTVar21->field0_0x0)._s_0.Z;
  local_410._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
  local_410._0_8_ = local_288.Translation.XY.m128d_f64[0];
  local_410._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
  local_400 = local_288.Translation.ZW.m128d_f64[0];
  local_428._8_4_ = SUB84(dVar27,0);
  local_428._0_8_ = dVar58;
  local_428._12_4_ = uVar68;
  dVar55 = dVar55 * dVar71 + local_658 * dVar70 + local_608 * dVar57;
  fVar69 = (this->PlantSettings).MinExtensionRatio * (param_2->Bones).LimbLength;
  fVar26 = (float)(double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & uVar43,
                                   SUB84(dVar55,0) & uVar19);
  if (fVar69 <= fVar26) {
    fVar26 = fVar69;
  }
  dVar55 = (double)fVar26;
  local_4e8 = (pTVar21->field0_0x0)._s_0.Z;
  auVar35._8_4_ = SUB84(dVar8,0);
  auVar35._0_8_ = dVar45;
  auVar35._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar12._4_8_ = auVar35._8_8_;
  auVar12._0_4_ = local_288.Translation.XY.m128d_f64[0]._4_4_;
  auVar36._0_8_ = auVar12._0_8_ << 0x20;
  auVar36._8_4_ = local_288.Translation.XY.m128d_f64[1]._0_4_;
  auVar36._12_4_ = local_288.Translation.XY.m128d_f64[1]._4_4_;
  fVar26 = (float)(((pTVar21->field0_0x0)._s_0.X * dVar58 + dVar27 * (pTVar21->field0_0x0)._s_0.Y +
                   dVar45 * local_4e8) -
                  ((dVar55 * dVar71 + auVar36._8_8_) * dVar71 +
                   (dVar55 * dVar70 + local_288.Translation.XY.m128d_f64[0]) * dVar70 +
                  (dVar55 * dVar57 + local_288.Translation.ZW.m128d_f64[0]) * dVar57));
  dVar55 = dVar45;
  if (fVar26 < 0.0) {
    dVar55 = (double)fVar26;
    local_4f8._8_4_ = SUB84(dVar27,0);
    local_4f8._0_8_ = dVar58;
    local_4f8._12_4_ = uVar68;
    dVar58 = dVar58 - dVar55 * dVar70;
    dVar27 = dVar27 - dVar55 * dVar71;
    uVar68 = (undefined4)((ulonglong)dVar27 >> 0x20);
    dVar55 = dVar45 - dVar55 * dVar57;
    dVar8 = 0.0;
    unique0x10000853 = SUB84(dVar27,0);
    local_2e8._32_8_ = dVar58;
    unique0x10000857 = uVar68;
    local_2b8.m128d_f64[1] = 0.0;
    local_2b8.m128d_f64[0] = dVar55;
    local_3e0._8_4_ = SUB84(dVar27,0);
    local_3e0._0_8_ = dVar58;
    local_3e0._12_4_ = uVar68;
    local_4e8 = dVar45;
    local_3d0 = dVar55;
  }
  fVar26 = (param_2->InputPose).DisableLeg;
  uVar68 = extraout_EAX;
  local_418 = dVar45;
  if (0.0 < fVar26) {
    local_3c8 = (param_2->InputPose).FootFKTransformCS.Translation.XY.m128d_f64[0];
    dStack_3c0 = (param_2->InputPose).FootFKTransformCS.Translation.XY.m128d_f64[1];
    local_368.Rotation.XY.m128d_f64[0] =
         (param_2->InputPose).FootFKTransformCS.Rotation.XY.m128d_f64[0];
    local_368.Rotation.XY.m128d_f64[1] =
         (param_2->InputPose).FootFKTransformCS.Rotation.XY.m128d_f64[1];
    this_00 = (TTransform<double> *)local_2e8;
    local_368.Rotation.ZW.m128d_f64[0] =
         (param_2->InputPose).FootFKTransformCS.Rotation.ZW.m128d_f64[0];
    local_368.Rotation.ZW.m128d_f64[1] =
         (param_2->InputPose).FootFKTransformCS.Rotation.ZW.m128d_f64[1];
    local_3b8 = (param_2->InputPose).FootFKTransformCS.Translation.ZW.m128d_f64[0];
    local_368.Scale3D.XY.m128d_f64[0] =
         (param_2->InputPose).FootFKTransformCS.Scale3D.XY.m128d_f64[0];
    local_368.Scale3D.XY.m128d_f64[1] =
         (param_2->InputPose).FootFKTransformCS.Scale3D.XY.m128d_f64[1];
    local_368.Scale3D.ZW.m128d_f64[0] =
         (param_2->InputPose).FootFKTransformCS.Scale3D.ZW.m128d_f64[0];
    local_368.Scale3D.ZW.m128d_f64[1] =
         (param_2->InputPose).FootFKTransformCS.Scale3D.ZW.m128d_f64[1];
    dVar28 = dVar28 - (double)(this->PelvisData).DisablePelvis;
    local_538 = dVar28 * (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X
                + local_3c8;
    local_528 = dVar28 * (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z
                + local_3b8;
    dStack_530 = dVar28 * (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y
                 + dStack_3c0;
    local_368.Translation.ZW.m128d_f64[1] = 0.0;
    local_368.Translation.XY.m128d_f64[0] = local_538;
    local_368.Translation.XY.m128d_f64[1] = dStack_530;
    local_368.Translation.ZW.m128d_f64[0] = local_528;
    UE::Math::TTransform<double>::BlendWith(this_00,&local_368,fVar26);
    uVar67 = SUB84(this_00,0);
    uVar68 = extraout_EAX_00;
    dVar58 = (double)local_2e8._32_8_;
    dVar27 = dStack_2c0;
    dVar55 = local_2b8.m128d_f64[0];
    dVar8 = local_2b8.m128d_f64[1];
  }
  uVar56 = (uint)__xmm_7ff00000000000007ff0000000000000;
  uVar64 = __xmm_7ff00000000000007ff0000000000000._4_4_;
  dVar28 = (double)__xmm_7ff00000000000007ff0000000000000;
  uVar66 = __xmm_7ff00000000000007ff0000000000000._12_4_;
  dVar45 = __xmm_7ff00000000000007ff0000000000000._8_8_;
  auVar37._0_8_ = (double)CONCAT44(uVar64 & local_2e8._20_4_,uVar56 & local_2e8._16_4_);
  uVar43 = __xmm_7ff00000000000007ff0000000000000._8_4_;
  auVar37._8_4_ = uVar43 & local_2e8._24_4_;
  auVar37._12_4_ = uVar66 & local_2e8._28_4_;
  auVar49._0_8_ = (double)CONCAT44(uVar64 & local_2e8._4_4_,uVar56 & local_2e8._0_4_);
  auVar49._8_4_ = uVar43 & local_2e8._8_4_;
  auVar49._12_4_ = uVar66 & local_2e8._12_4_;
  auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ == dVar45);
  auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ == dVar28);
  uVar19 = movmskpd(uVar67,auVar38);
  auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ == dVar45);
  auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ == dVar28);
  iVar16 = movmskpd(uVar68,auVar50);
  if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
    auVar39._0_8_ =
         (double)CONCAT44(uVar64 & (uint)((ulonglong)dVar55 >> 0x20),uVar56 & SUB84(dVar55,0));
    auVar39._8_4_ = uVar43 & SUB84(dVar8,0);
    auVar39._12_4_ = uVar66 & (uint)((ulonglong)dVar8 >> 0x20);
    auVar51._0_8_ =
         (double)CONCAT44(uVar64 & (uint)((ulonglong)dVar58 >> 0x20),uVar56 & SUB84(dVar58,0));
    auVar51._8_4_ = uVar43 & SUB84(dVar27,0);
    auVar51._12_4_ = uVar66 & (uint)((ulonglong)dVar27 >> 0x20);
    auVar40._8_8_ = -(ulonglong)(auVar39._8_8_ == dVar45);
    auVar40._0_8_ = -(ulonglong)(auVar39._0_8_ == dVar28);
    uVar19 = movmskpd(0,auVar40);
    auVar52._8_8_ = -(ulonglong)(auVar51._8_8_ == dVar45);
    auVar52._0_8_ = -(ulonglong)(auVar51._0_8_ == dVar28);
    iVar16 = movmskpd(iVar16,auVar52);
    if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
      auVar41._0_8_ = (double)CONCAT44(uVar64 & local_298._4_4_,uVar56 & (uint)local_298);
      auVar41._8_4_ = uVar43 & (uint)uStack_290;
      auVar41._12_4_ = uVar66 & uStack_290._4_4_;
      auVar53._0_8_ = (double)CONCAT44(uVar64 & local_2a8._4_4_,uVar56 & (uint)local_2a8);
      auVar53._8_4_ = uVar43 & (uint)uStack_2a0;
      auVar53._12_4_ = uVar66 & uStack_2a0._4_4_;
      auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ == dVar45);
      auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ == dVar28);
      uVar19 = movmskpd(0,auVar42);
      auVar54._8_8_ = -(ulonglong)(auVar53._8_8_ == dVar45);
      auVar54._0_8_ = -(ulonglong)(auVar53._0_8_ == dVar28);
      iVar16 = movmskpd(iVar16,auVar54);
      if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) goto LAB_14a7266a5;
    }
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("!CorrectedFootTransformCS.ContainsNaN()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                      ,0x37e,L"");
  if (bVar15) {
    pcVar2 = (code *)swi(3);
    pFVar17 = (FPlantResult *)(*pcVar2)();
    return pFVar17;
  }
  dVar58 = (double)local_2e8._32_8_;
  dVar27 = dStack_2c0;
  dVar55 = local_2b8.m128d_f64[0];
  dVar8 = local_2b8.m128d_f64[1];
LAB_14a7266a5:
  FVar1 = (param_2->Bones).IKIndex;
  (__return_storage_ptr__->FootTranformCS).Transform.Rotation.XY.m128d_f64[0] =
       (double)local_2e8._0_8_;
  (__return_storage_ptr__->FootTranformCS).Transform.Rotation.XY.m128d_f64[1] =
       (double)local_2e8._8_8_;
  (__return_storage_ptr__->FootTranformCS).BoneIndex = FVar1;
  (__return_storage_ptr__->FootTranformCS).Transform.Rotation.ZW.m128d_f64[0] =
       (double)local_2e8._16_8_;
  (__return_storage_ptr__->FootTranformCS).Transform.Rotation.ZW.m128d_f64[1] =
       (double)local_2e8._24_8_;
  auVar5._8_4_ = SUB84(dVar27,0);
  auVar5._0_8_ = dVar58;
  auVar5._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->FootTranformCS).Transform.Translation.XY.m128d_f64
       = auVar5;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = dVar55;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->FootTranformCS).Transform.Translation.ZW.m128d_f64
       = auVar6;
  (__return_storage_ptr__->FootTranformCS).Transform.Scale3D.XY.m128d_f64[0] = local_2a8;
  (__return_storage_ptr__->FootTranformCS).Transform.Scale3D.XY.m128d_f64[1] = uStack_2a0;
  (__return_storage_ptr__->FootTranformCS).Transform.Scale3D.ZW.m128d_f64[0] = local_298;
  (__return_storage_ptr__->FootTranformCS).Transform.Scale3D.ZW.m128d_f64[1] = uStack_290;
  return __return_storage_ptr__;
}

// FindPelvisOffsetRangeForLimb @ 14a726e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::FindPelvisOffsetRangeForLimb
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FLegRuntimeData *param_2,
          TVector<double> *param_3,TTransform<double> *param_4,FPelvisOffsetRangeForLimb *param_5)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  TVector<double> *pTVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStackY_308 [32];
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  float local_2a8;
  float local_2a4;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_258;
  double local_238;
  double local_220;
  float local_218 [2];
  double local_210;
  double local_208;
  double local_200;
  float local_1f8;
  float local_1f4;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  TVector<double> local_1c0;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_308;
  fVar1 = (param_2->Bones).LimbLength;
  local_2d8 = (param_3->field0_0x0)._s_0.Z;
  auVar4 = *(undefined1 (*) [16])&param_3->field0_0x0;
  uVar30 = auVar4._0_4_;
  uVar31 = auVar4._4_4_;
  uVar32 = auVar4._8_4_;
  uVar33 = auVar4._12_4_;
  _local_2c8 = auVar4;
  local_2b8 = local_2d8;
  local_2a4 = fVar1;
  UE::Math::TTransform<double>::GetRelativeTransform
            (&(param_2->InputPose).HipTransformCS,&local_148,
             &(this->PelvisData).InputPose.FKTransformCS);
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_148,param_4);
  local_298._s_0.Z = local_1a8.Translation.ZW.m128d_f64[0];
  dVar14 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[0] -
           (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[0];
  dVar15 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[1] -
           (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[1];
  dVar17 = (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0] -
           (param_2->InputPose).HipTransformCS.Translation.ZW.m128d_f64[0];
  local_258._s_0.X = local_1a8.Translation.XY.m128d_f64[0];
  local_258._s_0.Y = local_1a8.Translation.XY.m128d_f64[1];
  fVar23 = SQRT((float)(dVar15 * dVar15 + dVar14 * dVar14 + dVar17 * dVar17));
  fVar22 = fVar23;
  if (fVar23 <= fVar1) {
    fVar22 = (fVar1 - fVar23) * (this->PlantSettings).MaxExtensionRatio + fVar23;
  }
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar2 = *(undefined8 *)&(param_1->ApproachDirCS).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 8);
  uVar24 = (uint)uVar2 ^ uVar18;
  uVar25 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar19;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 0x10);
  uVar26 = (uint)uVar3 ^ uVar18;
  uVar27 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar19;
  local_2c8 = auVar4._0_8_;
  uVar28 = (uint)uVar2 ^ uVar18;
  uVar29 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar19;
  dStack_2c0 = auVar4._8_8_;
  dVar14 = local_1a8.Translation.XY.m128d_f64[1];
  dVar15 = dStack_2c0 * (double)CONCAT44(uVar27,uVar26) +
           local_2c8 * (double)CONCAT44(uVar25,uVar24) +
           (double)local_2b8 * (double)CONCAT44(uVar29,uVar28);
  dVar17 = (dVar14 * (double)CONCAT44(uVar27,uVar26) +
            local_1a8.Translation.XY.m128d_f64[0] * (double)CONCAT44(uVar25,uVar24) +
           local_1a8.Translation.ZW.m128d_f64[0] * (double)CONCAT44(uVar29,uVar28)) - dVar15;
  local_2a8 = (float)dVar17;
  local_298._0_4_ = uVar30;
  local_298._4_4_ = uVar31;
  local_278._8_4_ = uVar32;
  local_278._12_4_ = uVar33;
  uVar20 = local_1a8.Translation.XY.m128d_f64[0]._0_4_;
  uVar21 = local_1a8.Translation.XY.m128d_f64[0]._4_4_;
  local_220 = local_2d8;
  if (0.0 < local_2a8) {
    dVar5 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[0];
    dVar16 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[1];
    local_278._s_0.Z = (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0];
    dVar15 = (dVar16 * (double)CONCAT44(uVar27,uVar26) + dVar5 * (double)CONCAT44(uVar25,uVar24) +
             local_278._s_0.Z * (double)CONCAT44(uVar29,uVar28)) - dVar15;
    dVar5 = dVar5 - (double)CONCAT44(uVar25,uVar24) * dVar15;
    dVar16 = dVar16 - (double)CONCAT44(uVar27,uVar26) * dVar15;
    dVar6 = dVar5 - local_2c8;
    dVar15 = local_278._s_0.Z - (double)CONCAT44(uVar29,uVar28) * dVar15;
    dVar7 = dVar16 - dStack_2c0;
    local_238 = local_1a8.Translation.XY.m128d_f64[0] - (double)CONCAT44(uVar25,uVar24) * dVar17;
    dVar8 = dVar14 - (double)CONCAT44(uVar27,uVar26) * dVar17;
    dVar9 = local_1a8.Translation.ZW.m128d_f64[0] - (double)CONCAT44(uVar29,uVar28) * dVar17;
    dVar5 = dVar5 - local_238;
    dVar16 = dVar16 - dVar8;
    dVar17 = dVar15 - (double)local_2b8;
    dVar15 = dVar15 - dVar9;
    local_1f4 = (float)SQRT(dVar16 * dVar16 + dVar5 * dVar5 + dVar15 * dVar15);
    dVar15 = dVar7 * dVar7 + dVar6 * dVar6 + dVar17 * dVar17;
    uVar2 = dVar6;
    uVar3 = dVar7;
    uVar10 = dVar17;
    if ((dVar15 != __real_3ff0000000000000) &&
       (uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar15)) {
      local_278._s_0.X = __real_3ff0000000000000 / SQRT(dVar15);
      uVar2 = dVar6 * local_278._s_0.X;
      uVar3 = dVar7 * local_278._s_0.X;
      uVar10 = dVar17 * local_278._s_0.X;
    }
    fVar1 = (param_2->Bones).FootLength;
    fVar13 = (float)SQRT(dVar15);
    if (fVar1 <= (float)SQRT(dVar15)) {
      fVar13 = fVar1;
    }
    dVar15 = (double)(this->PelvisSettings).HeelLiftRatio;
    dVar17 = (double)fVar13;
    local_2b8 = (double)uVar10 * dVar17 * dVar15 + (double)local_2b8;
    local_2c8 = (double)uVar2 * dVar17 * dVar15 + local_2c8;
    dStack_2c0 = (double)uVar3 * dVar17 * dVar15 + dStack_2c0;
    local_200 = dVar9 - (double)local_2b8;
    fVar1 = (this->PelvisSettings).MaxOffsetHorizontal;
    local_210 = local_238 - local_2c8;
    local_208 = dVar8 - dStack_2c0;
    local_218[0] = (float)SQRT((dStack_2c0 - dVar8) * (dStack_2c0 - dVar8) +
                               (local_2c8 - local_238) * (local_2c8 - local_238) +
                               ((double)local_2b8 - dVar9) * ((double)local_2b8 - dVar9));
    local_1f8 = local_2a8;
    pTVar12 = `FAnimNode_FootPlacement::FindPelvisOffsetRangeForLimb'::__l5::<lambda_1>::operator()
                        (local_218,&local_1c0,fVar22,fVar1,(TVector<double> *)&local_2c8);
    local_278._s_0.X = (double)*(undefined8 *)&pTVar12->field0_0x0;
    local_278._s_0.Y = *(double *)((longlong)&pTVar12->field0_0x0 + 8);
    local_2d8 = (pTVar12->field0_0x0)._s_0.Z;
    pTVar12 = `FAnimNode_FootPlacement::FindPelvisOffsetRangeForLimb'::__l5::<lambda_1>::operator()
                        (local_218,&local_1c0,fVar23,fVar1,(TVector<double> *)&local_2c8);
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_220 = (pTVar12->field0_0x0)._s_0.Z;
    uVar30 = *(undefined4 *)&pTVar12->field0_0x0;
    uVar31 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 4);
    uVar32 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 8);
    uVar33 = *(undefined4 *)((longlong)&pTVar12->field0_0x0 + 0xc);
    local_298._0_4_ = local_278._0_4_;
    local_298._4_4_ = local_278._4_4_;
    uVar20 = local_258._0_4_;
    uVar21 = local_258._4_4_;
  }
  uVar10 = local_298._s_0.Z;
  local_278._s_0.Z = (param_1->ApproachDirCS).field0_0x0._s_0.Z;
  local_278._s_0.X = (param_1->ApproachDirCS).field0_0x0._s_0.X;
  dVar15 = (double)(this->TraceSettings).EndOffset;
  local_298._12_4_ = local_278._12_4_;
  local_298._8_4_ = local_278._8_4_;
  dStack_2c0 = dVar14 - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.Y;
  local_2c8 = (double)CONCAT44(uVar21,uVar20) - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.X;
  local_2b8 = local_298._s_0.Z - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.Z;
  local_298._s_0.Z = local_2d8;
  local_278._s_0.Y = (param_1->ApproachDirCS).field0_0x0._s_0.Y;
  FMath::SphereDistToLine
            ((TVector<double> *)&local_298._s_0,fVar22,(TVector<double> *)&local_2c8,
             (TVector<double> *)&local_278._s_0,(TVector<double> *)&local_1f0._s_0);
  _local_2c8 = *(undefined1 (*) [16])&(param_1->ApproachDirCS).field0_0x0;
  uVar11 = local_258._s_0.X;
  local_2b8 = (param_1->ApproachDirCS).field0_0x0._s_0.Z;
  dVar15 = (double)(this->TraceSettings).EndOffset;
  local_258._4_4_ = uVar31;
  local_258._0_4_ = uVar30;
  local_258._8_4_ = uVar32;
  local_258._12_4_ = uVar33;
  local_298._s_0.X = (double)uVar11 - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.X;
  local_298._s_0.Y = dVar14 - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.Y;
  local_298._s_0.Z = (double)uVar10 - dVar15 * (param_1->ApproachDirCS).field0_0x0._s_0.Z;
  local_258._s_0.Z = local_220;
  FMath::SphereDistToLine
            ((TVector<double> *)&local_258._s_0,fVar23,(TVector<double> *)&local_298._s_0,
             (TVector<double> *)&local_2c8,(TVector<double> *)&local_1d8._s_0);
  uVar2 = *(undefined8 *)&(param_1->ApproachDirCS).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 8);
  uVar24 = (uint)uVar2 ^ uVar18;
  uVar26 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar19;
  uVar18 = (uint)uVar3 ^ uVar18;
  uVar19 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar19;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 0x10);
  uVar25 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar28 = (uint)uVar2 ^ uVar25;
  uVar29 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar27;
  param_5->MaxExtension =
       (float)((local_1f0._s_0.Y - dVar14) * (double)CONCAT44(uVar19,uVar18) +
               (local_1f0._s_0.X - (double)uVar11) * (double)CONCAT44(uVar26,uVar24) +
              (local_1f0._s_0.Z - (double)uVar10) * (double)CONCAT44(uVar29,uVar28));
  param_5->DesiredExtension =
       (float)((local_1d8._s_0.Y - dVar14) * (double)CONCAT44(uVar19,uVar18) +
               (local_1d8._s_0.X - (double)uVar11) * (double)CONCAT44(uVar26,uVar24) +
              (local_1d8._s_0.Z - (double)uVar10) * (double)CONCAT44(uVar29,uVar28));
  local_2a4 = local_2a4 * (this->PlantSettings).MinExtensionRatio;
  uVar2 = *(undefined8 *)&(param_1->ApproachDirCS).field0_0x0;
  uVar3 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 8);
  uVar18 = (uint)uVar2 ^ uVar25;
  uVar19 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar27;
  uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 0x10);
  if (fVar23 <= local_2a4) {
    local_2a4 = fVar23;
  }
  dVar15 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar27,(uint)uVar3 ^ uVar25);
  uVar25 = (uint)uVar2 ^ uVar25;
  uVar27 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar27;
  dVar17 = (double)local_2a4;
  param_5->MinExtension =
       (float)(((dVar17 * (double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar31,uVar30)) -
               (double)uVar11) * (double)CONCAT44(uVar19,uVar18) +
               ((dVar17 * dVar15 + (double)CONCAT44(uVar33,uVar32)) - dVar14) * dVar15 +
              ((dVar17 * (double)CONCAT44(uVar27,uVar25) + local_220) - (double)uVar10) *
              (double)CONCAT44(uVar27,uVar25)) - (param_2->InputPose).DistanceToPlant;
  return;
}

// GatherDebugData @ 14a727c40

void __thiscall
FAnimNode_FootPlacement::GatherDebugData(FAnimNode_FootPlacement *this,FNodeDebugData *param_1)

{
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->field_0x10,param_1);
  return;
}

// GatherLegDataFromInputs @ 14a727dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::GatherLegDataFromInputs
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FLegRuntimeData *param_2,
          FFootPlacemenLegDefinition *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FCompactPoseBoneIndex FVar4;
  FName FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TTransform<double> *pTVar9;
  TTransform<double> *pTVar10;
  TTransform<double> *pTVar11;
  FCurveElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  double dVar18;
  uint uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar41;
  undefined1 auVar40 [16];
  double dVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined1 auStack_1f8 [48];
  double local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_1c8 = (param_2->InputPose).BallTransformCS.Translation.ZW.m128d_f64[0];
  uVar41 = *(undefined4 *)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64;
  uVar43 = *(undefined4 *)
            ((longlong)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 4);
  uVar54 = *(undefined4 *)((param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 1);
  uVar55 = *(undefined4 *)
            ((longlong)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 0xc);
  pTVar9 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                     (&param_1->CSPContext->Pose,(param_2->Bones).FKIndex);
  FVar4 = (param_2->Bones).BallIndex;
  dVar28 = (pTVar9->Rotation).XY.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar9->Rotation).XY.m128d_f64[0];
  (param_2->InputPose).FootFKTransformCS.Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar9->Rotation).ZW.m128d_f64[0];
  (param_2->InputPose).FootFKTransformCS.Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar9->Translation).XY.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar9->Translation).XY.m128d_f64[0];
  (param_2->InputPose).FootFKTransformCS.Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar9->Translation).ZW.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar9->Translation).ZW.m128d_f64[0];
  (param_2->InputPose).FootFKTransformCS.Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar9->Scale3D).XY.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0]
  ;
  (param_2->InputPose).FootFKTransformCS.Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar9->Scale3D).ZW.m128d_f64[1];
  (param_2->InputPose).FootFKTransformCS.Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0]
  ;
  (param_2->InputPose).FootFKTransformCS.Scale3D.ZW.m128d_f64[1] = dVar28;
  pTVar9 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->CSPContext->Pose,FVar4);
  local_148.Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] = (pTVar9->Rotation).XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] = (pTVar9->Rotation).ZW.m128d_f64[1];
  local_148.Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] = (pTVar9->Translation).XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] = (pTVar9->Translation).ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] = (pTVar9->Scale3D).XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] = (pTVar9->Scale3D).ZW.m128d_f64[1];
  pTVar10 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                      (&param_1->CSPContext->Pose,(param_2->Bones).IKIndex);
  FVar4 = (param_2->Bones).HipIndex;
  pTVar9 = &(param_2->InputPose).FootTransformCS;
  dVar28 = (pTVar10->Rotation).XY.m128d_f64[1];
  (pTVar9->Rotation).XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Rotation).ZW.m128d_f64[1];
  (param_2->InputPose).FootTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar10->Rotation).ZW.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).XY.m128d_f64[1];
  (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar10->Translation).XY.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).ZW.m128d_f64[1];
  (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar10->Translation).ZW.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).XY.m128d_f64[1];
  (param_2->InputPose).FootTransformCS.Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).ZW.m128d_f64[1];
  (param_2->InputPose).FootTransformCS.Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
  (param_2->InputPose).FootTransformCS.Scale3D.ZW.m128d_f64[1] = dVar28;
  pTVar10 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->CSPContext->Pose,FVar4);
  dVar28 = (pTVar10->Rotation).XY.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0]
  ;
  (param_2->InputPose).HipTransformCS.Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Rotation).ZW.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0]
  ;
  (param_2->InputPose).HipTransformCS.Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).XY.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar10->Translation).XY.m128d_f64[0];
  (param_2->InputPose).HipTransformCS.Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).ZW.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar10->Translation).ZW.m128d_f64[0];
  (param_2->InputPose).HipTransformCS.Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).XY.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
  (param_2->InputPose).HipTransformCS.Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).ZW.m128d_f64[1];
  (param_2->InputPose).HipTransformCS.Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
  (param_2->InputPose).HipTransformCS.Scale3D.ZW.m128d_f64[1] = dVar28;
  pTVar10 = UE::Math::TTransform<double>::GetRelativeTransform
                      (&(param_2->InputPose).FootFKTransformCS,&local_1a8,&local_148);
  dVar28 = (pTVar10->Rotation).XY.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Rotation).ZW.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).XY.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Translation.XY.m128d_f64[0] =
       (pTVar10->Translation).XY.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Translation).ZW.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Translation.ZW.m128d_f64[0] =
       (pTVar10->Translation).ZW.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).XY.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar10->Scale3D).ZW.m128d_f64[1];
  (param_2->InputPose).BallToFoot.Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
  (param_2->InputPose).BallToFoot.Scale3D.ZW.m128d_f64[1] = dVar28;
  pTVar11 = UE::Math::TTransform<double>::GetRelativeTransform
                      (&local_148,&local_1a8,&(param_2->InputPose).FootFKTransformCS);
  pTVar10 = &(param_2->InputPose).FootToBall;
  dVar28 = (pTVar11->Rotation).XY.m128d_f64[1];
  (pTVar10->Rotation).XY.m128d_f64[0] = (pTVar11->Rotation).XY.m128d_f64[0];
  (param_2->InputPose).FootToBall.Rotation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar11->Rotation).ZW.m128d_f64[1];
  (param_2->InputPose).FootToBall.Rotation.ZW.m128d_f64[0] = (pTVar11->Rotation).ZW.m128d_f64[0];
  (param_2->InputPose).FootToBall.Rotation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar11->Translation).XY.m128d_f64[1];
  (param_2->InputPose).FootToBall.Translation.XY.m128d_f64[0] =
       (pTVar11->Translation).XY.m128d_f64[0];
  (param_2->InputPose).FootToBall.Translation.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar11->Translation).ZW.m128d_f64[1];
  (param_2->InputPose).FootToBall.Translation.ZW.m128d_f64[0] =
       (pTVar11->Translation).ZW.m128d_f64[0];
  (param_2->InputPose).FootToBall.Translation.ZW.m128d_f64[1] = dVar28;
  dVar28 = (pTVar11->Scale3D).XY.m128d_f64[1];
  (param_2->InputPose).FootToBall.Scale3D.XY.m128d_f64[0] = (pTVar11->Scale3D).XY.m128d_f64[0];
  (param_2->InputPose).FootToBall.Scale3D.XY.m128d_f64[1] = dVar28;
  dVar28 = (pTVar11->Scale3D).ZW.m128d_f64[1];
  (param_2->InputPose).FootToBall.Scale3D.ZW.m128d_f64[0] = (pTVar11->Scale3D).ZW.m128d_f64[0];
  (param_2->InputPose).FootToBall.Scale3D.ZW.m128d_f64[1] = dVar28;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_1a8,pTVar10,pTVar9);
  (param_2->InputPose).BallTransformCS.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0]
  ;
  (param_2->InputPose).BallTransformCS.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1]
  ;
  (param_2->InputPose).BallTransformCS.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0]
  ;
  (param_2->InputPose).BallTransformCS.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1]
  ;
  (param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64[0] =
       local_1a8.Translation.XY.m128d_f64[0];
  (param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64[1] =
       local_1a8.Translation.XY.m128d_f64[1];
  (param_2->InputPose).BallTransformCS.Translation.ZW.m128d_f64[0] =
       local_1a8.Translation.ZW.m128d_f64[0];
  (param_2->InputPose).BallTransformCS.Translation.ZW.m128d_f64[1] =
       local_1a8.Translation.ZW.m128d_f64[1];
  (param_2->InputPose).BallTransformCS.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
  (param_2->InputPose).BallTransformCS.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
  (param_2->InputPose).BallTransformCS.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
  (param_2->InputPose).BallTransformCS.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
  if (this->bIsFirstUpdate != false) {
    pTVar10 = UE::Math::TTransform<double>::GetRelativeTransform
                        (pTVar9,&local_1a8,&(this->PelvisData).InputPose.RootTransformCS);
    dVar28 = (pTVar10->Rotation).XY.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[0] = (pTVar10->Rotation).XY.m128d_f64[0]
    ;
    (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pTVar10->Rotation).ZW.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[0] = (pTVar10->Rotation).ZW.m128d_f64[0]
    ;
    (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pTVar10->Translation).XY.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[0] =
         (pTVar10->Translation).XY.m128d_f64[0];
    (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[1] = dVar28;
    dVar28 = (pTVar10->Translation).ZW.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[0] =
         (pTVar10->Translation).ZW.m128d_f64[0];
    (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[1] = dVar28;
    dVar28 = (pTVar10->Scale3D).XY.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[0] = (pTVar10->Scale3D).XY.m128d_f64[0];
    (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[1] = dVar28;
    dVar28 = (pTVar10->Scale3D).ZW.m128d_f64[1];
    (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[0] = (pTVar10->Scale3D).ZW.m128d_f64[0];
    (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[1] = dVar28;
    local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_1a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_1a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_1a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_1a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_1a8,pTVar9,&param_1->OwningComponentToWorld);
    dVar28 = (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[1];
    dVar45 = (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[0];
    dVar29 = (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Rotation.XY.m128d_f64[0] =
         (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformRS).Rotation.XY.m128d_f64[1] = dVar28;
    dVar28 = (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[0];
    dVar23 = (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Rotation.ZW.m128d_f64[0] = dVar45;
    (param_2->UnalignedFootTransformRS).Rotation.ZW.m128d_f64[1] = dVar29;
    dVar45 = (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[0];
    dVar29 = (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[0] =
         local_1a8.Rotation.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[1] =
         local_1a8.Rotation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Translation.XY.m128d_f64[0] = dVar28;
    (param_2->UnalignedFootTransformRS).Translation.XY.m128d_f64[1] = dVar23;
    dVar28 = (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[0];
    dVar23 = (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[0] =
         local_1a8.Rotation.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[1] =
         local_1a8.Rotation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Translation.ZW.m128d_f64[0] = dVar45;
    (param_2->UnalignedFootTransformRS).Translation.ZW.m128d_f64[1] = dVar29;
    dVar45 = (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[0];
    dVar29 = (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] =
         local_1a8.Translation.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] =
         local_1a8.Translation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0] =
         local_1a8.Translation.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1] =
         local_1a8.Translation.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] =
         local_1a8.Translation.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] =
         local_1a8.Translation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0] =
         local_1a8.Translation.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1] =
         local_1a8.Translation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Scale3D.XY.m128d_f64[0] = dVar28;
    (param_2->UnalignedFootTransformRS).Scale3D.XY.m128d_f64[1] = dVar23;
    (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformRS).Scale3D.ZW.m128d_f64[0] = dVar45;
    (param_2->UnalignedFootTransformRS).Scale3D.ZW.m128d_f64[1] = dVar29;
    dVar29 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar23 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar28 = (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar45 = (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar18 = (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] -
             (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0];
    dVar38 = (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0] -
             (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0];
    dVar6 = (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1] -
            (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1];
    uVar41 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar30._8_4_ = SUB84(dVar45,0);
    auVar30._0_8_ = dVar28;
    auVar30._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    auVar51._8_4_ = SUB84(dVar6,0);
    auVar51._0_8_ = dVar38;
    auVar51._12_4_ = uVar41;
    auVar25._8_4_ = SUB84(dVar23,0);
    auVar25._0_8_ = dVar29;
    auVar25._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar31 = blendpd(auVar30,auVar25,2);
    auVar24._8_4_ = SUB84(dVar6,0);
    auVar24._0_8_ = dVar38;
    auVar24._12_4_ = uVar41;
    auVar27._8_4_ = SUB84(dVar29,0);
    auVar27._0_8_ = dVar45;
    auVar27._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = dVar18;
    auVar25 = blendpd(auVar24,auVar47,2);
    auVar52._0_8_ = auVar51._8_8_ * dVar28 - dVar45 * dVar38;
    auVar52._8_8_ = dVar18 * dVar45 - auVar27._8_8_ * dVar6;
    auVar40._8_4_ = SUB84(auVar52._8_8_,0);
    auVar40._0_8_ = auVar52._0_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
    auVar26._0_8_ = auVar25._0_8_ * dVar29 - auVar31._0_8_ * dVar18;
    auVar26._8_8_ = auVar25._8_8_ * dVar23 - auVar31._8_8_ * 0.0;
    dVar39 = auVar40._8_8_ + auVar40._8_8_;
    dVar42 = auVar26._0_8_ + auVar26._0_8_;
    auVar25 = blendpd(auVar52,auVar26,2);
    uVar41 = SUB84(dVar42,0);
    auVar49._8_4_ = uVar41;
    auVar49._0_8_ = dVar39;
    uVar43 = (undefined4)((ulonglong)dVar42 >> 0x20);
    auVar49._12_4_ = uVar43;
    auVar19._8_4_ = uVar41;
    auVar19._0_8_ = dVar39;
    auVar19._12_4_ = uVar43;
    auVar46._8_4_ = uVar41;
    auVar46._0_8_ = dVar39;
    auVar46._12_4_ = uVar43;
    auVar53._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar53._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar25 = *(undefined1 (*) [16])
               (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64;
    auVar50._0_8_ = auVar49._8_8_ * dVar28 - dVar39 * dVar45;
    auVar50._8_8_ = auVar53._0_8_ * dVar45 - auVar19._8_8_ * dVar29;
    auVar47 = blendpd(auVar46,auVar53,2);
    auVar20._8_4_ = SUB84(auVar53._8_8_,0);
    auVar20._0_8_ = auVar53._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
    auVar48._0_8_ = auVar47._0_8_ * dVar29 - auVar53._0_8_ * auVar31._0_8_;
    auVar48._8_8_ = auVar47._8_8_ * dVar23 - auVar20._8_8_ * auVar31._8_8_;
    auVar47 = *(undefined1 (*) [16])
               (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64;
    uVar1 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 0x10);
    lVar13 = -(ulonglong)
              ((double)CONCAT44(auVar25._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar25._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar15 = -(ulonglong)
              ((double)CONCAT44(auVar25._12_4_ & _UNK_15061cc8c,auVar25._8_4_ & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    lVar14 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar47._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar47._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar21._8_4_ = SUB84(auVar50._8_8_,0);
    auVar21._0_8_ = auVar50._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar25);
    uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirCS).field0_0x0 + 8);
    auVar31._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar31._0_8_ = auVar47._0_8_;
    auVar31._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
    uVar3 = *(undefined8 *)&(param_1->ApproachDirCS).field0_0x0;
    uVar16 = (uint)__xmm_80000000000000008000000000000000;
    uVar34 = (uint)uVar3 ^ uVar16;
    uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar35 = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar22;
    uVar32 = (uint)uVar2 ^ uVar16;
    uVar33 = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar22;
    dVar28 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar22,(uint)uVar1 ^ uVar16);
    auVar47 = blendpd(auVar50,auVar48,2);
    (param_2->Plant).PlantPlaneRS._padding_ = CONCAT44(uVar35,uVar34);
    (param_2->Plant).PlantPlaneRS._padding_ = CONCAT44(uVar33,uVar32);
    (param_2->Plant).PlantPlaneRS._padding_ = (longlong)dVar28;
    (param_2->Plant).PlantPlaneRS.W =
         (double)CONCAT44(uVar33,uVar32) *
         (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar27._12_4_,
                          ~(uint)lVar15 & auVar27._8_4_) * (dVar42 * dVar23 + dVar6 + auVar48._0_8_)
         + (double)CONCAT44(uVar35,uVar34) *
           (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar27._4_4_,
                            ~(uint)lVar13 & auVar27._0_4_) *
           (dVar39 * dVar23 + dVar38 + auVar21._8_8_) +
         dVar28 * (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar25._4_4_,
                                   ~(uint)lVar14 & auVar25._0_4_) *
                  (auVar53._0_8_ * dVar23 + dVar18 + auVar47._0_8_);
    (param_2->Plant).PlantType = Unplanted;
    (param_2->Plant).LastPlantType = Unplanted;
    local_1c8 = (param_2->InputPose).BallTransformCS.Translation.ZW.m128d_f64[0];
    uVar41 = *(undefined4 *)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64;
    uVar43 = *(undefined4 *)
              ((longlong)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 4);
    uVar54 = *(undefined4 *)((param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 1);
    uVar55 = *(undefined4 *)
              ((longlong)(param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64 + 0xc);
  }
  if (this->PlantSpeedMode == Graph) {
    dVar28 = (param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64[0];
    dVar29 = (param_2->InputPose).BallTransformCS.Translation.XY.m128d_f64[1];
    dVar23 = (param_2->InputPose).BallTransformCS.Translation.ZW.m128d_f64[0];
    pTVar9 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                       (&param_1->CSPContext->Pose,(FCompactPoseBoneIndex)0x0);
    dVar38 = (param_1->RootMotionTransformDelta).Translation.XY.m128d_f64[0];
    dVar6 = (param_1->RootMotionTransformDelta).Translation.XY.m128d_f64[1];
    dVar18 = (param_1->RootMotionTransformDelta).Translation.ZW.m128d_f64[0];
    dVar39 = (pTVar9->Rotation).XY.m128d_f64[0];
    dVar42 = (pTVar9->Rotation).XY.m128d_f64[1];
    dVar7 = (pTVar9->Rotation).ZW.m128d_f64[0];
    dVar8 = (pTVar9->Rotation).ZW.m128d_f64[1];
    dVar45 = dVar18 * dVar42 - dVar6 * dVar7;
    dVar45 = dVar45 + dVar45;
    dVar44 = dVar38 * dVar7 - dVar18 * dVar39;
    dVar44 = dVar44 + dVar44;
    dVar37 = dVar6 * dVar39 - dVar38 * dVar42;
    dVar37 = dVar37 + dVar37;
    dVar28 = (dVar37 * dVar42 - dVar44 * dVar7) + dVar45 * dVar8 + dVar38 +
             (dVar28 - (double)CONCAT44(uVar43,uVar41));
    dVar29 = (dVar45 * dVar7 - dVar37 * dVar39) + dVar44 * dVar8 + dVar6 +
             (dVar29 - (double)CONCAT44(uVar55,uVar54));
    dVar45 = (dVar44 * dVar39 - dVar45 * dVar42) + dVar37 * dVar8 + dVar18 + (dVar23 - local_1c8);
    fVar36 = (float)SQRT(dVar29 * dVar29 + dVar28 * dVar28 + dVar45 * dVar45) /
             param_1->UpdateDeltaTime;
  }
  else {
    fVar36 = (this->PlantSettings).SpeedThreshold;
    pFVar12 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                        ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                         &param_1->CSPContext->Curve,param_2->SpeedCurveName);
    if (pFVar12 != (FCurveElement *)0x0) {
      fVar36 = pFVar12->Value;
    }
  }
  (param_2->InputPose).Speed = fVar36;
  pFVar12 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                       &param_1->CSPContext->Curve,param_2->DisableLegCurveName);
  fVar36 = 0.0;
  if (pFVar12 == (FCurveElement *)0x0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = pFVar12->Value;
  }
  FVar5 = param_2->DisableLockCurveName;
  (param_2->InputPose).DisableLeg = fVar17;
  pFVar12 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Find
                      ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)
                       &param_1->CSPContext->Curve,FVar5);
  if (pFVar12 != (FCurveElement *)0x0) {
    fVar36 = pFVar12->Value;
  }
  (param_2->InputPose).LockAlpha = __real_3f800000 - fVar36;
  fVar36 = CalcTargetPlantPlaneDistance(this,param_1,&param_2->InputPose);
  dVar29 = __real_3ff0000000000000;
  (param_2->InputPose).DistanceToPlant = fVar36;
  dVar45 = (double)(this->PlantSettings).SpeedThreshold;
  dVar38 = (double)(this->PlantSettings).UnalignmentSpeedThreshold;
  dVar28 = dVar45 - dVar38;
  dVar23 = (double)(param_2->InputPose).Speed;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar28 = (dVar23 - dVar38) / dVar28;
  }
  else {
    dVar28 = dVar29;
    if (dVar23 < dVar45) {
      dVar28 = 0.0;
    }
  }
  if (dVar29 <= dVar28) {
    dVar28 = dVar29;
  }
  if (dVar28 <= 0.0) {
    dVar28 = 0.0;
  }
  (param_2->InputPose).AlignmentAlpha = (float)dVar28;
  return;
}

// GatherPelvisDataFromInputs @ 14a728790

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::GatherPelvisDataFromInputs
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1)

{
  float fVar1;
  FCompactPoseBoneIndex FVar2;
  double dVar3;
  TTransform<double> *pTVar4;
  
  pTVar4 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                     (&param_1->CSPContext->Pose,(this->PelvisData).Bones.FkBoneIndex);
  FVar2 = (this->PelvisData).Bones.IkBoneIndex;
  dVar3 = (pTVar4->Rotation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar4->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar4->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar4->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar4->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar4->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[0] =
       (pTVar4->Scale3D).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[1] = dVar3;
  pTVar4 = FCSPose<FCompactPose>::GetComponentSpaceTransform(&param_1->CSPContext->Pose,FVar2);
  dVar3 = (pTVar4->Rotation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar4->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar4->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar4->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar4->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar4->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.ZW.m128d_f64[0] =
       (pTVar4->Scale3D).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.IKRootTransformCS.Scale3D.ZW.m128d_f64[1] = dVar3;
  pTVar4 = FCSPose<FCompactPose>::GetComponentSpaceTransform
                     (&param_1->CSPContext->Pose,(FCompactPoseBoneIndex)0x0);
  dVar3 = (pTVar4->Rotation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[0] =
       (pTVar4->Rotation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Rotation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[0] =
       (pTVar4->Rotation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).XY.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0] =
       (pTVar4->Translation).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Translation).ZW.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0] =
       (pTVar4->Translation).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).XY.m128d_f64[1];
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[0] =
       (pTVar4->Scale3D).XY.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar4->Scale3D).ZW.m128d_f64[1];
  fVar1 = (this->PelvisSettings).MaxOffset;
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[0] =
       (pTVar4->Scale3D).ZW.m128d_f64[0];
  (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[1] = dVar3;
  (this->PelvisData).MaxOffsetSqrd = fVar1 * fVar1;
  return;
}

// GetAlignmentAlpha @ 14a7288c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FAnimNode_FootPlacement::GetAlignmentAlpha
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FInputPoseData *param_2)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)(this->PlantSettings).SpeedThreshold;
  dVar3 = (double)(this->PlantSettings).UnalignmentSpeedThreshold;
  dVar4 = dVar5 - dVar3;
  uVar1 = SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)dVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_3e45798ee2308c3a) {
    dVar3 = ((double)param_2->Speed - dVar3) / dVar4;
  }
  else {
    dVar3 = __real_3ff0000000000000;
    if ((double)param_2->Speed < dVar5) {
      dVar3 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar3) {
    dVar3 = __real_3ff0000000000000;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return (float)dVar3;
}

// GetApproachDirWS @ 14a728ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
FAnimNode_FootPlacement::GetApproachDirWS
          (FAnimNode_FootPlacement *this,TVector<double> *__return_storage_ptr__,
          FAnimationBaseContext *param_1)

{
  FAnimInstanceProxy *pFVar1;
  USkeletalMeshComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TQuat<double> local_28;
  
  pFVar1 = param_1->AnimInstanceProxy;
  if (pFVar1->SkeletalMeshComponent == (USkeletalMeshComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2821110184175206020>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                       ,0x17c,"SkeletalMeshComponent");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pUVar2 = pFVar1->SkeletalMeshComponent;
  local_28.X = (double)pUVar2->_padding_;
  local_28.Y = (double)pUVar2->_padding_;
  local_28.Z = (double)pUVar2->_padding_;
  local_28.W = (double)pUVar2->_padding_;
  local_48._s_0.Z = __real_3ff0000000000000;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&local_28,(TVector<double> *)&local_68._s_0,(TVector<double> *)&local_48._s_0);
  uVar6 = local_68._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar7 = local_68._8_4_ ^ _UNK_15066df78;
  uVar8 = local_68._12_4_ ^ _UNK_15066df7c;
  uVar9 = SUB84(local_68._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)local_68._16_8_ >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_
  ;
  *(uint *)&__return_storage_ptr__->field0_0x0 =
       local_68._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar6;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar7;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar10,uVar9);
  return __return_storage_ptr__;
}

// GetFootPivotAroundBallWS @ 14a729930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_FootPlacement::GetFootPivotAroundBallWS
          (FAnimNode_FootPlacement *this,TTransform<double> *__return_storage_ptr__,
          FEvaluationContext *param_1,FInputPoseData *param_2,TTransform<double> *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_1a8 [64];
  TTransform<double> local_168;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_168.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_168.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_168.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_168.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_168,&param_2->BallTransformCS,&param_1->OwningComponentToWorld);
  dVar9 = local_168.Scale3D.XY.m128d_f64[0];
  dVar10 = local_168.Scale3D.XY.m128d_f64[1];
  dVar11 = local_168.Scale3D.ZW.m128d_f64[0];
  local_108.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_108,&param_2->FootToBall,param_3);
  local_a8.Rotation.XY.m128d_f64[0] = local_168.Rotation.XY.m128d_f64[0];
  local_a8.Rotation.XY.m128d_f64[1] = local_168.Rotation.XY.m128d_f64[1];
  local_a8.Rotation.ZW.m128d_f64[0] = local_168.Rotation.ZW.m128d_f64[0];
  local_a8.Rotation.ZW.m128d_f64[1] = local_168.Rotation.ZW.m128d_f64[1];
  local_a8.Translation.XY.m128d_f64[0] = local_108.Translation.XY.m128d_f64[0];
  local_a8.Translation.XY.m128d_f64[1] = local_108.Translation.XY.m128d_f64[1];
  local_a8.Translation.ZW.m128d_f64[0] = local_108.Translation.ZW.m128d_f64[0];
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  local_a8.Scale3D.XY.m128d_f64[0] = dVar9;
  local_a8.Scale3D.XY.m128d_f64[1] = dVar10;
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  local_a8.Scale3D.ZW.m128d_f64[0] = dVar11;
  local_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&param_2->BallToFoot,&local_a8);
  return __return_storage_ptr__;
}

// GetMaxLimbExtension @ 14a729c70

float __thiscall
FAnimNode_FootPlacement::GetMaxLimbExtension
          (FAnimNode_FootPlacement *this,float param_1,float param_2)

{
  if (param_2 < param_1) {
    return param_1;
  }
  return (param_2 - param_1) * (this->PlantSettings).MaxExtensionRatio + param_1;
}

// GetMinLimbExtension @ 14a729f60

float __thiscall
FAnimNode_FootPlacement::GetMinLimbExtension
          (FAnimNode_FootPlacement *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = param_2 * (this->PlantSettings).MinExtensionRatio;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  return fVar1;
}

// GetRootToComponent @ 14a72a550

TTransform<double> * __thiscall
FAnimNode_FootPlacement::GetRootToComponent(FAnimNode_FootPlacement *this)

{
  return &(this->PelvisData).InputPose.RootTransformCS;
}

// InitializeBoneReferences @ 14a72be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAnimNode_FootPlacement::InitializeBoneReferences
          (FAnimNode_FootPlacement *this,FBoneContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  longlong lVar25;
  bool bVar26;
  FCompactPoseBoneIndex FVar27;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  TTransform<double> *pTVar28;
  TVector<double> *pTVar29;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  uint uVar30;
  FBoneReference *this_00;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auStackY_338 [32];
  uint local_300 [2];
  longlong local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  FWeakObjectPtr local_2b8;
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr local_2a0;
  ForAnyElementType local_298;
  TQuat<double> local_288;
  TQuat<double> local_268;
  ForAnyElementType local_248;
  ForAnyElementType FStack_240;
  ForAnyElementType local_238;
  double local_230;
  double dStack_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  TVector<double> local_200;
  TVector<double> local_1e8 [5];
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_338;
  uVar30 = 0;
  if (0 < (this->LegsData).ArrayNum) {
    uVar33 = (uint)__xmm_80000000000000008000000000000000;
    uVar34 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_2f0 = 0;
    local_2f8 = 0;
    do {
      lVar25 = local_2f8;
      uVar31 = 0;
      if ((int)uVar30 < (this->LegDefinitions).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FBoneReference *)((this->LegDefinitions).AllocatorInstance.Data + lVar25);
      uVar31 = 0;
      if ((int)uVar30 < (this->LegsData).ArrayNum) {
        uVar31 = ~uVar30 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->LegsData).AllocatorInstance.Data;
      FBoneReference::Initialize(this_00 + 1,param_1);
      FBoneReference::Initialize(this_00,param_1);
      FBoneReference::Initialize(this_00 + 2,param_1);
      FVar27 = FBoneReference::GetCompactPoseIndex(this_00 + 1,(FBoneContainer *)local_2e8);
      lVar25 = local_2f0;
      *(undefined4 *)(pFVar4 + local_2f0 + 0xc) = *(undefined4 *)CONCAT44(extraout_var,FVar27);
      FVar27 = FBoneReference::GetCompactPoseIndex(this_00,(FBoneContainer *)(local_2e8 + 4));
      *(undefined4 *)(pFVar4 + lVar25 + 4) = *(undefined4 *)CONCAT44(extraout_var_00,FVar27);
      FVar27 = FBoneReference::GetCompactPoseIndex(this_00 + 2,(FBoneContainer *)local_2e0);
      iVar3 = *(int *)CONCAT44(extraout_var_01,FVar27);
      *(int *)(pFVar4 + lVar25 + 8) = iVar3;
      if (((*(int *)(pFVar4 + lVar25 + 0xc) == -1) || (*(int *)(pFVar4 + lVar25 + 4) == -1)) ||
         (iVar3 == -1)) break;
      local_300[0] = 1;
      if (1 < (int)this_00[3].BoneName.ComparisonIndex.Value) {
        local_300[0] = this_00[3].BoneName.ComparisonIndex.Value;
      }
      UE::Anim::FootPlacement::FindChainLengthRootBoneIndex
                ((FCompactPoseBoneIndex *)(pFVar4 + lVar25 + 4),(int *)local_300,param_1,
                 (FCompactPoseBoneIndex *)(pFVar4 + lVar25 + 0x10),(float *)(pFVar4 + lVar25 + 0x14)
                );
      pTVar28 = FBoneContainer::GetRefPoseTransform
                          (param_1,(FCompactPoseBoneIndex *)(pFVar4 + lVar25 + 8));
      local_248.Data = (FScriptContainerElement *)(pTVar28->Translation).XY.m128d_f64[0];
      FStack_240.Data = (FScriptContainerElement *)(pTVar28->Translation).XY.m128d_f64[1];
      local_238.Data = (FScriptContainerElement *)(pTVar28->Translation).ZW.m128d_f64[0];
      *(float *)(pFVar4 + lVar25 + 0x18) =
           (float)SQRT((double)local_248.Data * (double)local_248.Data +
                       (double)FStack_240.Data * (double)FStack_240.Data +
                       (double)local_238.Data * (double)local_238.Data);
      uVar24 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      uVar23 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
      uVar22 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
      FAnimationRuntime::GetComponentSpaceRefPose
                (&local_168,(FCompactPoseBoneIndex *)(pFVar4 + lVar25 + 8),param_1);
      local_220 = local_168.Translation.ZW.m128d_f64[0];
      local_230 = local_168.Translation.XY.m128d_f64[0];
      dStack_228 = local_168.Translation.XY.m128d_f64[1];
      local_288.Z = local_168.Rotation.ZW.m128d_f64[0];
      local_288.W = local_168.Rotation.ZW.m128d_f64[1];
      dVar18 = (double)uVar23 * local_168.Translation.XY.m128d_f64[1] +
               (double)uVar22 * local_168.Translation.XY.m128d_f64[0] +
               (double)uVar24 * local_168.Translation.ZW.m128d_f64[0];
      local_288.X = local_168.Rotation.XY.m128d_f64[0];
      local_288.Y = local_168.Rotation.XY.m128d_f64[1];
      uVar31 = SUB84(dVar18,0) ^ uVar33;
      uVar32 = (uint)((ulonglong)dVar18 >> 0x20) ^ uVar34;
      local_2c8._0_8_ = (double)uVar22 * (double)CONCAT44(uVar32,uVar31);
      local_2c8._8_8_ = (double)uVar23 * (double)CONCAT44(uVar32,uVar31);
      local_2b8 = (FWeakObjectPtr)((double)uVar24 * (double)CONCAT44(uVar32,uVar31));
      pTVar29 = UE::Math::TQuat<double>::UnrotateVector
                          (&local_288,&local_200,(TVector<double> *)(local_2d8 + 0x10));
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
      dVar18 = (pTVar29->field0_0x0)._s_0.Z;
      uVar2 = *(undefined8 *)((longlong)&pTVar29->field0_0x0 + 8);
      uVar19 = *(undefined4 *)&pTVar29->field0_0x0;
      uVar20 = *(undefined4 *)((longlong)&pTVar29->field0_0x0 + 4);
      uVar21 = *(undefined4 *)((longlong)&pTVar29->field0_0x0 + 8);
      fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar12._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar12._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar12._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 0x2e0) = auVar12;
      *(double *)(pFVar4 + lVar25 + 0x2f0) = (double)fVar8;
      *(double *)(pFVar4 + lVar25 + 0x2f0 + 8) = (double)fVar10;
      pFVar1 = pFVar4 + lVar25 + 0x300;
      *(undefined4 *)pFVar1 = uVar19;
      *(undefined4 *)(pFVar1 + 4) = uVar20;
      *(undefined4 *)(pFVar1 + 8) = uVar21;
      *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
      *(double *)(pFVar4 + lVar25 + 0x310) = dVar18;
      *(double *)(pFVar4 + lVar25 + 0x310 + 8) = 0.0;
      auVar16._8_4_ = SUB84((double)fVar7,0);
      auVar16._0_8_ = (double)fVar6;
      auVar16._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 800) = auVar16;
      auVar14._8_4_ = SUB84((double)fVar11,0);
      auVar14._0_8_ = (double)fVar9;
      auVar14._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 0x330) = auVar14;
      FAnimationRuntime::GetComponentSpaceRefPose
                (&local_108,(FCompactPoseBoneIndex *)(pFVar4 + lVar25 + 4),param_1);
      local_208 = local_108.Translation.ZW.m128d_f64[0];
      local_218 = local_108.Translation.XY.m128d_f64[0];
      dStack_210 = local_108.Translation.XY.m128d_f64[1];
      local_268.Z = local_108.Rotation.ZW.m128d_f64[0];
      local_268.W = local_108.Rotation.ZW.m128d_f64[1];
      dVar18 = (double)uVar23 * local_108.Translation.XY.m128d_f64[1] +
               (double)uVar22 * local_108.Translation.XY.m128d_f64[0] +
               (double)uVar24 * local_108.Translation.ZW.m128d_f64[0];
      local_268.X = local_108.Rotation.XY.m128d_f64[0];
      local_268.Y = local_108.Rotation.XY.m128d_f64[1];
      uVar31 = SUB84(dVar18,0) ^ uVar33;
      uVar32 = (uint)((ulonglong)dVar18 >> 0x20) ^ uVar34;
      local_2a8 = (FWeakObjectPtr)((double)uVar22 * (double)CONCAT44(uVar32,uVar31));
      local_2a0 = (FWeakObjectPtr)((double)uVar23 * (double)CONCAT44(uVar32,uVar31));
      local_298.Data = (FScriptContainerElement *)((double)uVar24 * (double)CONCAT44(uVar32,uVar31))
      ;
      pTVar29 = UE::Math::TQuat<double>::UnrotateVector
                          (&local_268,local_1e8,(TVector<double> *)(local_2d8 + 0x30));
      fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
      uVar30 = uVar30 + 1;
      uVar19 = *(undefined4 *)&pTVar29->field0_0x0;
      uVar20 = *(undefined4 *)((longlong)&pTVar29->field0_0x0 + 4);
      local_2f8 = local_2f8 + 0x4c;
      dVar18 = (pTVar29->field0_0x0)._s_0.Z;
      uVar2 = *(undefined8 *)((longlong)&pTVar29->field0_0x0 + 8);
      fVar6 = GlobalVectorConstants::Float1110.m128_f32[0];
      fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
      fVar9 = GlobalVectorConstants::Float1110.m128_f32[2];
      fVar11 = GlobalVectorConstants::Float1110.m128_f32[3];
      auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar13._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      auVar13._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 0x280) = auVar13;
      *(double *)(pFVar4 + lVar25 + 0x290) = (double)fVar8;
      *(double *)(pFVar4 + lVar25 + 0x290 + 8) = (double)fVar10;
      pFVar1 = pFVar4 + lVar25 + 0x2a0;
      *(undefined4 *)pFVar1 = uVar19;
      *(undefined4 *)(pFVar1 + 4) = uVar20;
      *(int *)(pFVar1 + 8) = (int)uVar2;
      *(int *)(pFVar1 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
      *(double *)(pFVar4 + lVar25 + 0x2b0) = dVar18;
      *(double *)(pFVar4 + lVar25 + 0x2b0 + 8) = 0.0;
      auVar17._8_4_ = SUB84((double)fVar7,0);
      auVar17._0_8_ = (double)fVar6;
      auVar17._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 0x2c0) = auVar17;
      auVar15._8_4_ = SUB84((double)fVar11,0);
      auVar15._0_8_ = (double)fVar9;
      auVar15._12_4_ = (int)((ulonglong)(double)fVar11 >> 0x20);
      *(undefined1 (*) [16])(pFVar4 + lVar25 + 0x2d0) = auVar15;
      *(undefined8 *)(pFVar4 + lVar25 + 0x1c) = *(undefined8 *)&this_00[3].BoneName.Number;
      *(undefined8 *)(pFVar4 + lVar25 + 0x24) = *(undefined8 *)&this_00[3].CachedCompactPoseIndex;
      *(undefined8 *)(pFVar4 + lVar25 + 0x2c) = *(undefined8 *)&this_00[4].BoneName.Number;
      local_2f0 = lVar25 + 0x6c0;
    } while ((int)uVar30 < (this->LegsData).ArrayNum);
  }
  FBoneReference::Initialize(&this->PelvisBone,param_1);
  FBoneReference::Initialize(&this->IKFootRootBone,param_1);
  FVar27 = FBoneReference::GetCompactPoseIndex(&this->PelvisBone,(FBoneContainer *)(local_2e0 + 4));
  (this->PelvisData).Bones.FkBoneIndex = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_02,FVar27);
  FVar27 = FBoneReference::GetCompactPoseIndex(&this->IKFootRootBone,(FBoneContainer *)local_2d8);
  (this->PelvisData).Bones.IkBoneIndex = *(FCompactPoseBoneIndex *)CONCAT44(extraout_var_03,FVar27);
  return;
}

// Initialize_AnyThread @ 14a72c7e0

void __thiscall
FAnimNode_FootPlacement::Initialize_AnyThread
          (FAnimNode_FootPlacement *this,FAnimationInitializeContext *param_1)

{
  FAnimNode_SkeletalControlBase::Initialize_AnyThread((FAnimNode_SkeletalControlBase *)this,param_1)
  ;
  ResetRuntimeData(this);
  return;
}

// IsValidToEvaluate @ 14a72c8f0

bool __thiscall
FAnimNode_FootPlacement::IsValidToEvaluate
          (FAnimNode_FootPlacement *this,USkeleton *param_1,FBoneContainer *param_2)

{
  int iVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res20 [8];
  
  pTVar2 = CVarAnimNodeFootPlacementEnable.Ref;
  bVar3 = IsInParallelGameThread();
  if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
  }
  if (pTVar2->ShadowedValue[lVar4] != false) {
    iVar1 = (this->LegsData).ArrayNum;
    pFVar5 = (this->LegsData).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x6c0;
    while( true ) {
      if ((this->LegsData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Anim::FootPlacement::FLegRuntimeData,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res20);
      }
      if (pFVar5 == pFVar6) break;
      if (*(int *)(pFVar5 + 0x10) == -1) {
        return false;
      }
      if (*(int *)(pFVar5 + 4) == -1) {
        return false;
      }
      if (*(int *)(pFVar5 + 0xc) == -1) {
        return false;
      }
      if (*(int *)(pFVar5 + 8) == -1) {
        return false;
      }
      pFVar5 = pFVar5 + 0x6c0;
    }
    if ((this->PelvisData).Bones.IkBoneIndex != (FCompactPoseBoneIndex)0xffffffff) {
      return (this->PelvisData).Bones.FkBoneIndex != (FCompactPoseBoneIndex)0xffffffff;
    }
  }
  return false;
}

// ProcessCharacterState @ 14a72cb90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::ProcessCharacterState
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uchar uVar11;
  bool bVar12;
  EActorMovementCompensationMode EVar13;
  int iVar14;
  UCharacterMovementComponent *pUVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  uint uVar24;
  uint uVar25;
  TQuat<double> *pTVar26;
  TVector<double> *pTVar27;
  bool bVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  double dVar32;
  uint uVar38;
  uint uVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  uint uVar52;
  double dVar53;
  double dVar54;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar55 [16];
  uint uVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  double local_res8;
  double local_res10;
  TVector<double>_u_0 local_178;
  double dStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  TQuat<double> local_108;
  TQuat<double> local_e8 [6];
  
  uVar59 = _UNK_15066df7c;
  uVar52 = _UNK_15066df78;
  uVar25 = __xmm_80000000000000008000000000000000._4_4_;
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  if (this->bIsFirstUpdate == false) {
    local_res10 = (this->CharacterData).ComponentTransformWS.Translation.ZW.m128d_f64[0];
    uVar60 = *(undefined4 *)(this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64;
    uVar61 = *(undefined4 *)
              ((longlong)(this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64 + 4);
    uStack_150 = *(undefined4 *)
                  ((this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64 + 1);
    uStack_14c = *(undefined4 *)
                  ((longlong)(this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64 +
                  0xc);
  }
  else {
    local_res10 = (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar60 = *(undefined4 *)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64;
    uVar61 = *(undefined4 *)
              ((longlong)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 4);
    uStack_150 = *(undefined4 *)((param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 1);
    uStack_14c = *(undefined4 *)
                  ((longlong)(param_1->OwningComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    auVar46._0_4_ = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 8);
    auVar46._4_4_ = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0xc);
    uVar38 = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0x10);
    uVar39 = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0x14);
    uVar47 = *(undefined8 *)&(param_1->ApproachDirWS).field0_0x0;
    (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.X =
         (double)CONCAT44((uint)((ulonglong)uVar47 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)uVar47 ^ (uint)__xmm_80000000000000008000000000000000);
    auVar46._4_4_ = auVar46._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar38 = uVar38 ^ _UNK_15066df78;
    uVar39 = uVar39 ^ _UNK_15066df7c;
    *(uint *)((longlong)&(this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0 + 8) =
         auVar46._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&(this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0 + 0xc) =
         auVar46._4_4_;
    *(uint *)((longlong)&(this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0 + 0x10) =
         uVar38;
    *(uint *)((longlong)&(this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0 + 0x14) =
         uVar39;
    dVar1 = UE::Math::TQuat<double>::Identity.Y;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.X =
         UE::Math::TQuat<double>::Identity.X;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.Y = dVar1;
    dVar1 = UE::Math::TQuat<double>::Identity.W;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.Z =
         UE::Math::TQuat<double>::Identity.Z;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.PrevTarget.W = dVar1;
    uVar47 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.Y =
         (double)uVar47;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.AngularVelocity.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (this->CharacterData).SmoothCapsuleGroundNormalSpringState.bPrevTargetValid = false;
  }
  uVar47 = 0;
  dVar1 = (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[1];
  (this->CharacterData).ComponentTransformWS.Rotation.XY.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
  (this->CharacterData).ComponentTransformWS.Rotation.ZW.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[1];
  (this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[1];
  (this->CharacterData).ComponentTransformWS.Translation.ZW.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1];
  (this->CharacterData).ComponentTransformWS.Scale3D.XY.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1];
  bVar10 = (this->CharacterData).bIsOnGround;
  (this->CharacterData).ComponentTransformWS.Scale3D.ZW.m128d_f64[0] =
       (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
  (this->CharacterData).ComponentTransformWS.Scale3D.ZW.m128d_f64[1] = dVar1;
  pUVar15 = param_1->MovementComponent;
  dVar1 = (this->CharacterData).ComponentTransformWS.Translation.ZW.m128d_f64[0];
  auVar34 = *(undefined1 (*) [16])
             (this->CharacterData).ComponentTransformWS.Translation.XY.m128d_f64;
  if (pUVar15 == (UCharacterMovementComponent *)0x0) {
    bVar28 = true;
  }
  else {
    uVar11 = (pUVar15->MovementMode).Value;
    if (((uVar11 == '\x01') || (uVar11 == '\x02')) && ((pUVar15->CurrentFloor).bBlockingHit != 0)) {
      bVar28 = true;
    }
    else {
      bVar28 = false;
    }
  }
  bVar12 = (this->PelvisSettings).bDisablePelvisOffsetInAir;
  (this->CharacterData).bIsOnGround = bVar28;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y = (double)uVar2;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar16 = auVar34._0_8_;
  dVar17 = auVar34._8_8_;
  local_res8 = dVar1;
  local_178._s_0.Z = local_res10;
  local_158 = uVar60;
  uStack_154 = uVar61;
  local_148 = uStack_150;
  uStack_144 = uStack_14c;
  uStack_140 = uStack_150;
  uStack_13c = uStack_14c;
  local_138 = dVar1;
  if (((bVar12 == false) || ((bVar28 != false && (bVar10 != false)))) &&
     (EVar13 = (this->PelvisSettings).ActorMovementCompensationMode, EVar13 != ComponentSpace)) {
    if (EVar13 == SuddenMotionOnly) {
      pUVar15 = param_1->MovementComponent;
      if (pUVar15 == (UCharacterMovementComponent *)0x0) {
        local_178._4_4_ = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 4) ^ uVar25;
        local_178._0_4_ = *(uint *)&(param_1->ApproachDirWS).field0_0x0 ^ uVar24;
        local_178._12_4_ = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0xc) ^ uVar59;
        local_178._8_4_ = *(uint *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 8) ^ uVar52;
        uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0x10);
        local_178._s_0.Z =
             (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar25,(uint)uVar2 ^ uVar24);
      }
      else {
        if ((pUVar15->CurrentFloor).bBlockingHit == 0) {
          uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0x10);
          uVar3 = *(undefined8 *)&(param_1->ApproachDirWS).field0_0x0;
          uVar4 = *(undefined8 *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 8);
          auVar46._0_4_ = (uint)uVar3 ^ uVar24;
          auVar46._4_4_ = (uint)((ulonglong)uVar3 >> 0x20) ^ uVar25;
          auVar46._8_4_ = uVar52;
          auVar46._12_4_ = uVar59;
          local_178._8_4_ = (uint)uVar4 ^ uVar24;
          local_178._12_4_ = (uint)((ulonglong)uVar4 >> 0x20) ^ uVar25;
          local_178._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar25,(uint)uVar2 ^ uVar24);
          in_XMM2 = auVar46;
        }
        else {
          auVar46._0_4_ = *(uint *)&(pUVar15->CurrentFloor).HitResult.ImpactNormal;
          auVar46._4_4_ = *(uint *)&(pUVar15->CurrentFloor).HitResult.ImpactNormal.field_0x4;
          local_178._8_4_ = *(undefined4 *)&(pUVar15->CurrentFloor).HitResult.ImpactNormal.field_0x8
          ;
          local_178._12_4_ =
               *(undefined4 *)&(pUVar15->CurrentFloor).HitResult.ImpactNormal.field_0xc;
          local_178._s_0.Z =
               (double)*(undefined8 *)&(pUVar15->CurrentFloor).HitResult.ImpactNormal.field_0x10;
        }
        local_178._4_4_ = auVar46._4_4_;
        local_178._0_4_ = auVar46._0_4_;
      }
      UE::Math::TQuat<double>::FindBetweenNormals
                ((TQuat<double> *)local_128,&(this->CharacterData).SmoothCapsuleGroundNormalWS,
                 (TVector<double> *)&local_178._s_0);
      local_178._s_0.X = (double)local_128._0_8_;
      local_178._s_0.Y = (double)local_128._8_8_;
      local_108.X = UE::Math::TQuat<double>::Identity.X;
      local_108.Y = UE::Math::TQuat<double>::Identity.Y;
      local_178._s_0.Z = local_118;
      dStack_160 = dStack_110;
      local_108.Z = UE::Math::TQuat<double>::Identity.Z;
      local_108.W = UE::Math::TQuat<double>::Identity.W;
      pTVar26 = UKismetMathLibrary::QuaternionSpringInterp
                          (local_e8,&local_108,(TQuat<double> *)&local_178._s_0,
                           &(this->CharacterData).SmoothCapsuleGroundNormalSpringState,
                           (this->InterpolationSettings).FloorAngularStiffness,__real_3f800000,
                           param_1->UpdateDeltaTime,__real_3f800000,0.0,false);
      auVar46 = *(undefined1 (*) [16])&(this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0;
      dVar49 = auVar46._0_8_;
      dVar5 = (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Z;
      local_128._0_8_ = pTVar26->X;
      local_128._8_8_ = pTVar26->Y;
      auVar20._4_8_ = uVar47;
      auVar20._0_4_ = auVar46._4_4_;
      auVar44._0_8_ = auVar20._0_8_ << 0x20;
      auVar44._8_4_ = auVar46._8_4_;
      auVar44._12_4_ = auVar46._12_4_;
      uVar8 = pTVar26->Z;
      uVar9 = pTVar26->W;
      auVar21._4_8_ = unaff_XMM10_Qb;
      auVar21._0_4_ = (int)((ulonglong)local_128._0_8_ >> 0x20);
      auVar55._0_8_ = auVar21._0_8_ << 0x20;
      auVar55._8_4_ = (int)local_128._8_8_;
      auVar55._12_4_ = (int)((ulonglong)local_128._8_8_ >> 0x20);
      dVar50 = auVar55._8_8_;
      dVar53 = auVar44._8_8_;
      auVar22._4_8_ = in_XMM2._8_8_;
      auVar22._0_4_ = (int)((ulonglong)uVar8 >> 0x20);
      auVar40._0_8_ = auVar22._0_8_ << 0x20;
      auVar40._8_4_ = (int)uVar9;
      auVar40._12_4_ = (int)((ulonglong)uVar9 >> 0x20);
      dVar32 = auVar40._8_8_;
      dVar19 = dVar50 * dVar5 - (double)uVar8 * dVar53;
      dVar19 = dVar19 + dVar19;
      dVar54 = (double)uVar8 * dVar49 - (double)local_128._0_8_ * dVar5;
      dVar54 = dVar54 + dVar54;
      dVar48 = (double)local_128._0_8_ * dVar53 - dVar50 * dVar49;
      dVar48 = dVar48 + dVar48;
      (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.X =
           (dVar50 * dVar48 - (double)uVar8 * dVar54) + dVar19 * dVar32 + dVar49;
      (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Y =
           ((double)uVar8 * dVar19 - (double)local_128._0_8_ * dVar48) + dVar54 * dVar32 + dVar53;
      (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Z =
           ((double)local_128._0_8_ * dVar54 - dVar50 * dVar19) + dVar48 * dVar32 + dVar5;
      dVar54 = (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.X;
      dVar19 = (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Y;
      dVar5 = (this->CharacterData).SmoothCapsuleGroundNormalWS.field0_0x0._s_0.Z;
      dVar32 = dVar19 * (param_1->ApproachDirWS).field0_0x0._s_0.Y +
               dVar54 * (param_1->ApproachDirWS).field0_0x0._s_0.X +
               dVar5 * (param_1->ApproachDirWS).field0_0x0._s_0.Z;
      if ((double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar32,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3ee4f8b580000000) {
        local_178._s_0.Z = local_res8;
      }
      else {
        auVar46 = *(undefined1 (*) [16])&(param_1->ApproachDirWS).field0_0x0;
        dVar32 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
        auVar23._4_8_ = dVar19;
        auVar23._0_4_ = auVar46._4_4_;
        auVar41._0_8_ = auVar23._0_8_ << 0x20;
        auVar41._8_4_ = auVar46._8_4_;
        auVar41._12_4_ = auVar46._12_4_;
        dVar5 = (((double)CONCAT44(uStack_144,local_148) * dVar19 +
                  (double)CONCAT44(uStack_154,local_158) * dVar54 + local_res10 * dVar5) -
                (dVar54 * dVar16 + dVar19 * dVar17 + dVar5 * dVar1)) /
                (dVar19 * auVar41._8_8_ + dVar54 * auVar46._0_8_ + dVar5 * dVar32);
        local_178._s_0.Z = dVar5 * dVar32 + dVar1;
        auVar34._8_8_ = dVar5 * auVar41._8_8_ + dVar17;
        auVar34._0_8_ = dVar5 * auVar46._0_8_ + dVar16;
      }
    }
    else {
      auVar34._4_4_ = uVar61;
      auVar34._0_4_ = uVar60;
      auVar34._8_4_ = uStack_150;
      auVar34._12_4_ = uStack_14c;
    }
    uVar61 = uStack_154;
    uVar60 = local_158;
    dVar32 = __real_3f1a36e2e0000000;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar24 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pTVar27 = &(this->CharacterData).ComponentMoveDeltaWS;
    dVar5 = (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y;
    dVar19 = ((this->BaseTranslationDelta).field0_0x0._s_0.X - (dVar16 - auVar34._0_8_)) *
             (param_1->ApproachDirWS).field0_0x0._s_0.X;
    dVar53 = ((this->BaseTranslationDelta).field0_0x0._s_0.Y - (dVar17 - auVar34._8_8_)) *
             (param_1->ApproachDirWS).field0_0x0._s_0.Y;
    local_178._s_0.Z =
         ((this->BaseTranslationDelta).field0_0x0._s_0.Z - (dVar1 - local_178._s_0.Z)) *
         (param_1->ApproachDirWS).field0_0x0._s_0.Z;
    (pTVar27->field0_0x0)._s_0.X = (pTVar27->field0_0x0)._s_0.X - dVar19;
    dVar54 = (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z;
    (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y = dVar5 - dVar53;
    (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z = dVar54 - local_178._s_0.Z;
    uVar52 = SUB84(dVar53,0);
    uVar59 = (uint)((ulonglong)dVar53 >> 0x20);
    if (((dVar32 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar25,
                                    SUB84(dVar19,0) & uVar24)) ||
        (dVar32 <= (double)CONCAT44(uVar59 & uVar25,uVar52 & uVar24) &&
         (double)CONCAT44(uVar59 & uVar25,uVar52 & uVar24) != dVar32)) ||
       (dVar32 < (double)CONCAT44((uint)((ulonglong)local_178._s_0.Z >> 0x20) & uVar25,
                                  SUB84(local_178._s_0.Z,0) & uVar24))) {
      auVar51._8_8_ = 0;
      auVar51._0_8_ = local_178._s_0.Z;
      dVar49 = (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[0] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar50 = (param_1->OwningComponentToWorld).Rotation.XY.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar5 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[0] *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar54 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1] *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar56._8_4_ = uVar52;
      auVar56._0_8_ = dVar19;
      auVar56._12_4_ = uVar59;
      auVar45._8_4_ = SUB84(dVar50,0);
      auVar45._0_8_ = dVar49;
      auVar45._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
      auVar33._8_4_ = uVar52;
      auVar33._0_8_ = dVar19;
      auVar33._12_4_ = uVar59;
      auVar57._0_8_ = auVar56._8_8_ * dVar49 - dVar19 * dVar50;
      auVar57._8_8_ = local_178._s_0.Z * dVar50 - dVar53 * dVar5;
      auVar34 = blendpd(auVar33,auVar51,2);
      auVar18._8_4_ = SUB84(dVar54,0);
      auVar18._0_8_ = dVar5;
      auVar18._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      auVar46 = blendpd(auVar45,auVar18,2);
      auVar35._0_8_ = auVar34._0_8_ * dVar5 - auVar46._0_8_ * local_178._s_0.Z;
      auVar35._8_8_ = auVar34._8_8_ * dVar54 - auVar46._8_8_ * 0.0;
      auVar34 = blendpd(auVar57,auVar35,2);
      dVar32 = auVar57._8_8_ + auVar57._8_8_;
      dVar48 = auVar35._0_8_ + auVar35._0_8_;
      uVar62 = (undefined4)((ulonglong)dVar48 >> 0x20);
      auVar58._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar58._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar42._8_4_ = SUB84(dVar48,0);
      auVar42._0_8_ = dVar32;
      auVar42._12_4_ = uVar62;
      auVar36._8_4_ = SUB84(dVar48,0);
      auVar36._0_8_ = dVar32;
      auVar36._12_4_ = uVar62;
      auVar34 = blendpd(auVar36,auVar58,2);
      auVar43._0_8_ = auVar42._8_8_ * dVar49 - dVar32 * dVar50;
      auVar43._8_8_ = auVar58._0_8_ * dVar50 - dVar48 * dVar5;
      auVar37._0_8_ = auVar34._0_8_ * dVar5 - auVar58._0_8_ * auVar46._0_8_;
      auVar37._8_8_ = auVar34._8_8_ * dVar54 - auVar58._8_8_ * auVar46._8_8_;
      auVar34 = blendpd(auVar43,auVar37,2);
      dVar5 = (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y;
      dVar19 = dVar32 * dVar54 + dVar19 + auVar43._8_8_;
      dVar32 = dVar48 * dVar54 + dVar53 + auVar37._0_8_;
      dVar54 = auVar58._0_8_ * dVar54 + local_178._s_0.Z + auVar34._0_8_;
      (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X =
           (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X - dVar19;
      (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z =
           (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z - dVar54;
      (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y = dVar5 - dVar32;
      pFVar30 = (this->LegsData).AllocatorInstance.Data;
      iVar14 = (this->LegsData).ArrayNum;
      pFVar29 = pFVar30 + 0x370;
      pFVar31 = pFVar30 + (longlong)iVar14 * 0x6c0;
      local_178._s_0.Z = dVar54;
      while( true ) {
        if ((this->LegsData).ArrayNum != iVar14) {
          `TCheckedPointerIterator<UE::Anim::FootPlacement::FLegRuntimeData,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res8);
        }
        if (pFVar30 == pFVar31) break;
        dVar5 = *(double *)(pFVar29 + 0x18);
        pFVar30 = pFVar30 + 0x6c0;
        dVar53 = *(double *)(pFVar29 + 0x10);
        dVar48 = *(double *)pFVar29;
        dVar49 = *(double *)(pFVar29 + 8);
        dVar50 = *(double *)pFVar29;
        dVar6 = *(double *)(pFVar29 + 8);
        dVar7 = *(double *)(pFVar29 + 0x10);
        *(double *)pFVar29 = *(double *)pFVar29;
        *(double *)(pFVar29 + 8) = *(double *)(pFVar29 + 8);
        *(double *)(pFVar29 + 0x10) = *(double *)(pFVar29 + 0x10);
        *(double *)(pFVar29 + 0x18) =
             (dVar5 * dVar48 - dVar19) * dVar50 + (dVar5 * dVar49 - dVar32) * dVar6 +
             (dVar53 * dVar5 - dVar54) * dVar7;
        pFVar29 = pFVar29 + 0x6c0;
      }
    }
  }
  (**(code **)(param_1->OwningActor->_padding_ + 0x360))(param_1->OwningActor,&local_178);
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.X = local_178._s_0.X;
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Y = local_178._s_0.Y;
  (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Z = local_178._s_0.Z;
  dVar5 = (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y;
  dVar54 = (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.X =
       (dVar16 - (double)CONCAT44(uVar61,uVar60)) +
       (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.X;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Y =
       (dVar17 - (double)CONCAT44(uStack_144,local_148)) + dVar5;
  (this->CharacterData).ComponentMoveDeltaWS.field0_0x0._s_0.Z = (dVar1 - local_res10) + dVar54;
  return;
}

// ProcessFootAlignment @ 14a72d510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::ProcessFootAlignment
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FLegRuntimeData *param_2)

{
  FInputPoseData *pFVar1;
  FInterpolationData *pFVar2;
  float *pfVar3;
  float fVar4;
  EFootPlacementLockType EVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  undefined1 auVar15 [16];
  TConsoleVariableData<bool> *pTVar16;
  bool bVar17;
  undefined4 extraout_EAX;
  int iVar18;
  undefined4 extraout_EAX_00;
  undefined7 extraout_var;
  TTransform<double> *pTVar19;
  TTransform<double> *pTVar20;
  TVector<double> *pTVar21;
  longlong lVar22;
  TMatrix<double> *pTVar23;
  TPlane<double> *pTVar24;
  TPlane<double> *pTVar25;
  TTransform<double> *pTVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  FAnimNode_FootPlacement *pFVar30;
  VectorRegister4Double *pVVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double extraout_XMM0_Qa;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 extraout_XMM0_Qb;
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
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  undefined8 uVar60;
  double dVar66;
  undefined1 auVar61 [16];
  double dVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 uVar68;
  __m128 _Var69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  double dVar88;
  uint uVar97;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined4 uVar98;
  ulong64 uVar102;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined8 uVar117;
  double dVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  double dVar124;
  undefined1 auVar123 [16];
  float fVar125;
  undefined8 uVar126;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  uint uVar130;
  undefined4 uVar131;
  undefined1 auStackY_1118 [32];
  FName local_1050;
  double local_1048;
  double dStack_1040;
  double local_1038;
  undefined1 local_1028 [16];
  undefined1 local_1018 [16];
  TVector<double>_u_0 local_1008;
  undefined1 local_fe8 [16];
  double local_fd8;
  double local_fc8;
  double dStack_fc0;
  double local_fb8;
  TVector<double>_u_0 local_fa8;
  TVector<double>_u_0 local_f88;
  TVector<double>_u_0 local_f68;
  TVector<double>_u_0 local_f48;
  TVector<double>_u_0 local_f28;
  TVector<double>_u_0 local_f10;
  undefined1 local_ef8 [16];
  double local_ee8;
  TVector<double>_u_0 local_ed8;
  TVector<double>_u_0 local_eb8;
  TVector<double>_u_0 local_e98;
  TVector<double>_u_0 local_e78;
  TVector<double>_u_0 local_e58;
  TVector<double>_u_0 local_e40;
  TVector<double>_u_0 local_e28;
  TVector<double>_u_0 local_e10;
  double local_df8;
  double local_df0;
  TPlane<double> local_de8;
  undefined1 local_dc8 [2] [16];
  TQuat<double> local_da8;
  double local_d88;
  double dStack_d80;
  double local_d78;
  TQuat<double> local_d68;
  undefined1 local_d48 [32];
  double local_d28;
  double dStack_d20;
  double local_d18;
  double local_d00;
  double local_cf8 [2];
  double local_ce8;
  double local_ce0;
  double dStack_cd8;
  double local_cd0;
  double local_cc8;
  double dStack_cc0;
  double local_cb8;
  double local_cb0;
  double dStack_ca8;
  double local_ca0;
  double local_c98;
  double dStack_c90;
  double local_c88;
  double local_c80;
  double dStack_c78;
  double local_c70;
  TTransform<double> local_c68;
  TTransform<double> local_c08;
  undefined1 local_ba8 [16];
  undefined1 local_b98 [16];
  TPlane<double> local_b88;
  TVector<double> local_b68;
  TPlane<double> local_b48;
  TTransform<double> local_b28;
  TTransform<double> local_ac8;
  TTransform<double> local_a68;
  TTransform<double> local_a08;
  TTransform<double> local_9a8;
  TTransform<double> local_948;
  TTransform<double> local_8e8;
  TTransform<double> local_888;
  TTransform<double> local_828;
  TTransform<double> local_7c8;
  TTransform<double> local_768;
  TTransform<double> local_708;
  TTransform<double> local_6a8;
  TTransform<double> local_648;
  TTransform<double> local_5e8;
  TTransform<double> local_588;
  TTransform<double> local_528;
  TTransform<double> local_4c8;
  TTransform<double> local_468;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1118;
  pFVar1 = &param_2->InputPose;
  pFVar2 = &param_2->Interpolation;
  if ((this->PlantSettings).bReconstructWorldPlantFromVelocity == false) {
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar130 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar117 = *(undefined8 *)&(this->BaseTranslationDelta).field0_0x0;
    uVar103 = *(undefined8 *)((longlong)&(this->BaseTranslationDelta).field0_0x0 + 0x10);
    uVar126 = *(undefined8 *)((longlong)&(this->BaseTranslationDelta).field0_0x0 + 8);
    local_ca0 = (double)CONCAT44((uint)((ulonglong)uVar103 >> 0x20) ^ uVar130,(uint)uVar103 ^ uVar29
                                );
    dVar66 = (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1];
    dVar36 = (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0];
    dVar37 = (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1];
    dStack_ca8 = (double)CONCAT44((uint)((ulonglong)uVar126 >> 0x20) ^ uVar130,
                                  (uint)uVar126 ^ uVar29);
    local_cb0 = (double)CONCAT44((uint)((ulonglong)uVar117 >> 0x20) ^ uVar130,(uint)uVar117 ^ uVar29
                                );
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] =
         (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] + local_cb0;
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] = dVar66 + dStack_ca8;
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] = local_ca0 + dVar36;
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] = dVar37 + 0.0;
    uVar117 = *(undefined8 *)((longlong)&(this->BaseTranslationDelta).field0_0x0 + 0x10);
    uVar103 = *(undefined8 *)&(this->BaseTranslationDelta).field0_0x0;
    local_c70 = (double)CONCAT44((uint)((ulonglong)uVar117 >> 0x20) ^ uVar130,(uint)uVar117 ^ uVar29
                                );
    uVar117 = *(undefined8 *)((longlong)&(this->BaseTranslationDelta).field0_0x0 + 8);
    dVar37 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0];
    dVar66 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1];
    dVar35 = (double)CONCAT44((uint)((ulonglong)uVar103 >> 0x20) ^ uVar130,(uint)uVar103 ^ uVar29);
    dVar76 = local_c70 + (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0];
    dVar36 = (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1];
    dVar87 = (double)CONCAT44((uint)((ulonglong)uVar117 >> 0x20) ^ uVar130,(uint)uVar117 ^ uVar29);
    local_c80 = dVar35;
    dStack_c78 = dVar87;
  }
  else {
    local_708.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_708.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_708.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_708.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_708.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_708.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_708.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_708.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_708.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_708.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_708.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_708.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_708,&param_2->AlignedFootTransformRS,
               &(this->PelvisData).InputPose.RootTransformCS);
    local_9a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_9a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_9a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_9a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_9a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_9a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_9a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_9a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_9a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_9a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_9a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_9a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_9a8,&local_708,&param_1->OwningComponentToWorld);
    uVar29 = (uint)__xmm_80000000000000008000000000000000;
    uVar130 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[0] = local_9a8.Rotation.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[1] = local_9a8.Rotation.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[0] = local_9a8.Rotation.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[1] = local_9a8.Rotation.ZW.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] =
         local_9a8.Translation.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] =
         local_9a8.Translation.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] =
         local_9a8.Translation.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] =
         local_9a8.Translation.ZW.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_9a8.Scale3D.XY.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_9a8.Scale3D.XY.m128d_f64[1];
    (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_9a8.Scale3D.ZW.m128d_f64[0];
    (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_9a8.Scale3D.ZW.m128d_f64[1];
    dVar66 = (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1];
    dVar35 = (double)param_1->UpdateDeltaTime;
    dVar36 = dVar35 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Z;
    dVar87 = dVar35 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.X;
    dVar35 = dVar35 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Y;
    local_cd0 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar130,
                                 SUB84(dVar36,0) ^ uVar29);
    dVar36 = (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0];
    dVar37 = (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1];
    local_ce0 = (double)CONCAT44((uint)((ulonglong)dVar87 >> 0x20) ^ uVar130,
                                 SUB84(dVar87,0) ^ uVar29);
    dStack_cd8 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar130,
                                  SUB84(dVar35,0) ^ uVar29);
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] =
         (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] + local_ce0;
    (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] = dVar66 + dStack_cd8;
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] = local_cd0 + dVar36;
    (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] = dVar37 + 0.0;
    local_6a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_6a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_6a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_6a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_6a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_6a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_6a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_6a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_6a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_6a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_6a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_6a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply
              (&local_6a8,&param_2->UnalignedFootTransformRS,
               &(this->PelvisData).InputPose.RootTransformCS);
    local_948.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_948.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_948.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_948.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_948.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_948.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_948.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_948.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_948.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_948.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_948.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_948.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_948,&local_6a8,&param_1->OwningComponentToWorld);
    (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[0] =
         local_948.Rotation.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[1] =
         local_948.Rotation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[0] =
         local_948.Rotation.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[1] =
         local_948.Rotation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0] =
         local_948.Translation.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1] =
         local_948.Translation.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0] =
         local_948.Translation.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1] =
         local_948.Translation.ZW.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_948.Scale3D.XY.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_948.Scale3D.XY.m128d_f64[1];
    (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_948.Scale3D.ZW.m128d_f64[0];
    (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_948.Scale3D.ZW.m128d_f64[1];
    dVar37 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0];
    dVar66 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1];
    dVar87 = (double)param_1->UpdateDeltaTime;
    dVar36 = dVar87 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Z;
    dVar35 = dVar87 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.X;
    dVar87 = dVar87 * (this->CharacterData).CharacterVelocityWS.field0_0x0._s_0.Y;
    local_cb8 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar130,
                                 SUB84(dVar36,0) ^ uVar29);
    dVar76 = local_cb8 + (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0];
    dVar36 = (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1];
    dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) ^ uVar130,SUB84(dVar35,0) ^ uVar29);
    dVar87 = (double)CONCAT44((uint)((ulonglong)dVar87 >> 0x20) ^ uVar130,SUB84(dVar87,0) ^ uVar29);
    local_cc8 = dVar35;
    dStack_cc0 = dVar87;
  }
  pTVar26 = &param_2->AlignedFootTransformWS;
  (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0] = dVar37 + dVar35;
  (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1] = dVar66 + dVar87;
  (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0] = dVar76;
  (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1] = dVar36 + 0.0;
  local_a68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_a68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_a68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a68.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_a68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_a68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply
            (&local_a68,&(param_2->InputPose).FootTransformCS,&param_1->OwningComponentToWorld);
  local_c68.Rotation.XY.m128d_f64[0] = (pTVar26->Rotation).XY.m128d_f64[0];
  local_c68.Rotation.XY.m128d_f64[1] = (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[1];
  local_c68.Rotation.ZW.m128d_f64[0] = (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[0];
  local_c68.Rotation.ZW.m128d_f64[1] = (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[1];
  local_c68.Translation.XY.m128d_f64[0] =
       (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0];
  local_c68.Translation.XY.m128d_f64[1] =
       (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1];
  local_c68.Translation.ZW.m128d_f64[0] =
       (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0];
  local_c68.Translation.ZW.m128d_f64[1] =
       (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1];
  local_c68.Scale3D.XY.m128d_f64[0] = (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[0];
  local_c68.Scale3D.XY.m128d_f64[1] = (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[1];
  local_c68.Scale3D.ZW.m128d_f64[0] = (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[0];
  local_c68.Scale3D.ZW.m128d_f64[1] = (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[1];
  local_ac8.Rotation.XY.m128d_f64[0] = (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[0];
  local_ac8.Rotation.XY.m128d_f64[1] = (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[1];
  local_ac8.Rotation.ZW.m128d_f64[0] = (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[0];
  local_ac8.Rotation.ZW.m128d_f64[1] = (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[1];
  local_ac8.Translation.XY.m128d_f64[0] =
       (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0];
  local_ac8.Translation.XY.m128d_f64[1] =
       (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1];
  local_ac8.Translation.ZW.m128d_f64[0] =
       (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0];
  local_ac8.Translation.ZW.m128d_f64[1] =
       (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1];
  local_ac8.Scale3D.XY.m128d_f64[0] = (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[0];
  local_ac8.Scale3D.XY.m128d_f64[1] = (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[1];
  local_ac8.Scale3D.ZW.m128d_f64[0] = (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[0];
  local_ac8.Scale3D.ZW.m128d_f64[1] = (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[1];
  UE::Math::TTransform<double>::GetRelativeTransform
            (&(param_2->InputPose).FootTransformCS,&local_4c8,
             &(this->PelvisData).InputPose.RootTransformCS);
  (param_2->Plant).LastPlantType = (param_2->Plant).PlantType;
  DeterminePlantType(this,param_1,&local_a68,&local_c68,&param_2->Plant,pFVar1);
  dVar37 = __real_bff0000000000000;
  fVar125 = __real_3f800000;
  dVar36 = __real_3ff0000000000000;
  if ((param_2->Plant).PlantType == Unplanted) {
    local_fd8 = (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[0];
    pVVar31 = &(param_2->Interpolation).UnalignedFootOffset.Translation;
    local_fc8 = (pVVar31->XY).m128d_f64[0];
    dStack_fc0 = (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[1];
    local_fa8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_fa8._s_0.Y = _UNK_150689688;
    local_f68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_f68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_f68._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_f88._s_0.X = ___xmm_bff0000000000000bff0000000000000;
    local_f88._s_0.Y = _UNK_15076c718;
    local_fa8._s_0.Z = __real_3ff0000000000000;
    local_f88._s_0.Z = __real_bff0000000000000;
    local_fb8 = local_fd8;
    local_f48._s_0.X = local_fc8;
    local_f48._s_0.Y = dStack_fc0;
    local_f48._s_0.Z = local_fd8;
    UKismetMathLibrary::VectorSpringInterp
              ((TVector<double> *)&local_1008._s_0,(TVector<double> *)&local_f48._s_0,
               (TVector<double> *)&local_f68._s_0,
               &(param_2->Interpolation).PlantOffsetTranslationSpringState,
               (this->InterpolationSettings).UnplantLinearStiffness,
               (this->InterpolationSettings).UnplantLinearDamping,param_1->UpdateDeltaTime,
               __real_3f800000,0.0,false,(TVector<double> *)&local_f88._s_0,
               (TVector<double> *)&local_fa8._s_0,false);
    local_da8.X = (pFVar2->UnalignedFootOffset).Rotation.XY.m128d_f64[0];
    local_da8.Y = (param_2->Interpolation).UnalignedFootOffset.Rotation.XY.m128d_f64[1];
    local_da8.Z = (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[0];
    local_da8.W = (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[1];
    local_d68.X = UE::Math::TQuat<double>::Identity.X;
    local_d68.Y = UE::Math::TQuat<double>::Identity.Y;
    local_d68.Z = UE::Math::TQuat<double>::Identity.Z;
    local_d68.W = UE::Math::TQuat<double>::Identity.W;
    UKismetMathLibrary::QuaternionSpringInterp
              ((TQuat<double> *)local_d48,&local_da8,&local_d68,
               &(param_2->Interpolation).PlantOffsetRotationSpringState,
               (this->InterpolationSettings).UnplantAngularStiffness,
               (this->InterpolationSettings).UnplantAngularDamping,param_1->UpdateDeltaTime,fVar125,
               0.0,false);
    (pFVar2->UnalignedFootOffset).Rotation.XY.m128d_f64[0] = (double)local_d48._0_8_;
    (param_2->Interpolation).UnalignedFootOffset.Rotation.XY.m128d_f64[1] = (double)local_d48._8_8_;
    *(undefined1 (*) [16])(param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64 =
         local_d48._16_16_;
    (pVVar31->XY).m128d_f64[0] = local_1008._s_0.X;
    (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[1] = local_1008._s_0.Y;
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[0] = local_1008._s_0.Z;
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[1] = 0.0;
    dVar66 = _UNK_150689688;
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.XY.m128d_f64[0] =
         ___xmm_3ff00000000000003ff0000000000000;
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.XY.m128d_f64[1] = dVar66;
    dVar66 = _UNK_150689518;
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.ZW.m128d_f64[0] =
         ___xmm_00000000000000003ff0000000000000;
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.ZW.m128d_f64[1] = dVar66;
    fVar4 = (param_2->Plant).TimeSinceFullyUnaligned;
    if ((0.0 < fVar4) ||
       ((float)((uint)(param_2->InputPose).AlignmentAlpha & __xmm_7fffffff7fffffff7fffffff7fffffff)
        <= __real_322bcc77)) {
      (param_2->Plant).TimeSinceFullyUnaligned = fVar4 + param_1->UpdateDeltaTime;
    }
  }
  else {
    EVar5 = (this->PlantSettings).LockType;
    uVar27 = (uint)EVar5;
    local_b28.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_b28.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_b28.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_b28.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_b28.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_b28.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_b28.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_b28.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_b28.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_b28.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_b28.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_b28.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    uVar98 = extraout_EAX;
    if (EVar5 != Unlocked) {
      if (EVar5 == 1) {
        pFVar30 = this;
        pTVar19 = GetFootPivotAroundBallWS(this,&local_468,param_1,pFVar1,&local_ac8);
        uVar27 = (uint)pFVar30;
        local_b28.Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
        local_b28.Rotation.XY.m128d_f64[1] = (pTVar19->Rotation).XY.m128d_f64[1];
        local_b28.Rotation.ZW.m128d_f64[0] = (pTVar19->Rotation).ZW.m128d_f64[0];
        local_b28.Rotation.ZW.m128d_f64[1] = (pTVar19->Rotation).ZW.m128d_f64[1];
        local_b28.Translation.XY.m128d_f64[0] = (pTVar19->Translation).XY.m128d_f64[0];
        local_b28.Translation.XY.m128d_f64[1] = (pTVar19->Translation).XY.m128d_f64[1];
        local_b28.Translation.ZW.m128d_f64[0] = (pTVar19->Translation).ZW.m128d_f64[0];
        local_b28.Translation.ZW.m128d_f64[1] = (pTVar19->Translation).ZW.m128d_f64[1];
        local_b28.Scale3D.XY.m128d_f64[0] = (pTVar19->Scale3D).XY.m128d_f64[0];
        local_b28.Scale3D.XY.m128d_f64[1] = (pTVar19->Scale3D).XY.m128d_f64[1];
        local_b28.Scale3D.ZW.m128d_f64[0] = (pTVar19->Scale3D).ZW.m128d_f64[0];
        local_b28.Scale3D.ZW.m128d_f64[1] = (pTVar19->Scale3D).ZW.m128d_f64[1];
LAB_14a72dd4d:
        uVar98 = SUB84(pTVar19,0);
      }
      else {
        uVar27 = EVar5 - 2;
        if (uVar27 == 0) {
          local_b28.Rotation.XY.m128d_f64[0] = local_a68.Rotation.XY.m128d_f64[0];
          local_b28.Rotation.XY.m128d_f64[1] = local_a68.Rotation.XY.m128d_f64[1];
          local_b28.Rotation.ZW.m128d_f64[0] = local_a68.Rotation.ZW.m128d_f64[0];
          local_b28.Rotation.ZW.m128d_f64[1] = local_a68.Rotation.ZW.m128d_f64[1];
          local_b28.Scale3D.XY.m128d_f64[0] = local_a68.Scale3D.XY.m128d_f64[0];
          local_b28.Scale3D.XY.m128d_f64[1] = local_a68.Scale3D.XY.m128d_f64[1];
          local_b28.Scale3D.ZW.m128d_f64[0] = local_a68.Scale3D.ZW.m128d_f64[0];
          local_b28.Scale3D.ZW.m128d_f64[1] = local_a68.Scale3D.ZW.m128d_f64[1];
          local_b28.Translation.ZW.m128d_f64[0] = local_ac8.Translation.ZW.m128d_f64[0];
          local_b28.Translation.ZW.m128d_f64[1] = 0.0;
          local_d28 = local_ac8.Translation.XY.m128d_f64[0];
          dStack_d20 = local_ac8.Translation.XY.m128d_f64[1];
          local_d18 = local_ac8.Translation.ZW.m128d_f64[0];
          local_b28.Translation.XY.m128d_f64[0] = local_ac8.Translation.XY.m128d_f64[0];
          local_b28.Translation.XY.m128d_f64[1] = local_ac8.Translation.XY.m128d_f64[1];
        }
        else {
          if (uVar27 != 1) {
            uVar27 = 0x50611ad4;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\AnimationWarping\\Source\\Runtime\\Private\\BoneControllers\\AnimNode_FootPlacement.cpp"
                                ,0x6bf,L"");
            pTVar19 = (TTransform<double> *)CONCAT71(extraout_var,bVar17);
            if (bVar17) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_14a72dd4d;
          }
          local_b28.Rotation.XY.m128d_f64[0] = local_ac8.Rotation.XY.m128d_f64[0];
          local_b28.Rotation.XY.m128d_f64[1] = local_ac8.Rotation.XY.m128d_f64[1];
          local_b28.Rotation.ZW.m128d_f64[0] = local_ac8.Rotation.ZW.m128d_f64[0];
          local_b28.Rotation.ZW.m128d_f64[1] = local_ac8.Rotation.ZW.m128d_f64[1];
          local_b28.Translation.XY.m128d_f64[0] = local_ac8.Translation.XY.m128d_f64[0];
          local_b28.Translation.XY.m128d_f64[1] = local_ac8.Translation.XY.m128d_f64[1];
          local_b28.Translation.ZW.m128d_f64[0] = local_ac8.Translation.ZW.m128d_f64[0];
          local_b28.Translation.ZW.m128d_f64[1] = local_ac8.Translation.ZW.m128d_f64[1];
          local_b28.Scale3D.XY.m128d_f64[0] = local_ac8.Scale3D.XY.m128d_f64[0];
          local_b28.Scale3D.XY.m128d_f64[1] = local_ac8.Scale3D.XY.m128d_f64[1];
          local_b28.Scale3D.ZW.m128d_f64[0] = local_ac8.Scale3D.ZW.m128d_f64[0];
          local_b28.Scale3D.ZW.m128d_f64[1] = local_ac8.Scale3D.ZW.m128d_f64[1];
        }
      }
    }
    auVar72._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64
                                   + 4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar72._8_4_ =
         *(uint *)((param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 + 1) & _UNK_15061cc88;
    auVar72._12_4_ =
         *(uint *)((longlong)(param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 + 0xc) &
         _UNK_15061cc8c;
    auVar78._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar72._8_8_);
    auVar78._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar72._0_8_);
    uVar27 = movmskpd(uVar27,auVar78);
    auVar119._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(*(uint *)((longlong)
                                     (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 + 0xc) &
                           _UNK_15061cc8c,
                           *(uint *)((param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 + 1) &
                           _UNK_15061cc88));
    auVar119._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(*(uint *)((longlong)
                                     (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 + 4) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar18 = movmskpd(uVar98,auVar119);
    _Var69 = GlobalVectorConstants::SmallNumber;
    if ((uVar27 & 0x3fffffff) == 0 && iVar18 == 0) {
      local_648.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_648.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_648.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_648.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_648.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_648.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(&param_1->OwningComponentToWorld,&local_648);
    }
    local_5e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_5e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_5e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_5e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    uVar102 = GlobalVectorConstants::Float0001.m128_u64[1];
    local_5e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_5e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_5e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_5e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_5e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    dVar66 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_5e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_5e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_5e8.Scale3D.XY.m128d_f64[1] = dVar66;
    UE::Math::TTransform<double>::Multiply(&local_5e8,&local_b28,&local_648);
    UE::Math::TTransform<double>::GetRelativeTransform
              (&local_5e8,&local_528,&(this->PelvisData).InputPose.RootTransformCS);
    auVar119 = *(undefined1 (*) [16])&(param_1->ApproachDirWS).field0_0x0;
    local_d78 = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
    auVar8._4_8_ = uVar102;
    auVar8._0_4_ = (int)((ulonglong)local_528.Translation.XY.m128d_f64[0] >> 0x20);
    auVar99._0_8_ = auVar8._0_8_ << 0x20;
    auVar99._8_4_ = SUB84(local_528.Translation.XY.m128d_f64[1],0);
    auVar99._12_4_ = (int)((ulonglong)local_528.Translation.XY.m128d_f64[1] >> 0x20);
    auVar9._4_8_ = dVar66;
    auVar9._0_4_ = local_4c8.Translation.XY.m128d_f64[0]._4_4_;
    auVar61._0_8_ = auVar9._0_8_ << 0x20;
    auVar61._8_4_ = local_4c8.Translation.XY.m128d_f64[1]._0_4_;
    auVar61._12_4_ = local_4c8.Translation.XY.m128d_f64[1]._4_4_;
    auVar10._4_8_ = _Var69.m128_u64[1];
    auVar10._0_4_ = auVar119._4_4_;
    auVar70._0_8_ = auVar10._0_8_ << 0x20;
    auVar70._8_4_ = auVar119._8_4_;
    auVar70._12_4_ = auVar119._12_4_;
    auVar77._8_8_ = local_4c8.Translation.XY.m128d_f64[1];
    local_cf8[0] = local_4c8.Translation.XY.m128d_f64[0];
    local_cf8[1] = local_4c8.Translation.XY.m128d_f64[1];
    auVar77._0_8_ =
         local_4c8.Translation.XY.m128d_f64[0] * (param_1->ApproachDirWS).field0_0x0._s_0.X;
    local_ce8 = local_4c8.Translation.ZW.m128d_f64[0];
    local_d00 = local_528.Translation.ZW.m128d_f64[0];
    dVar66 = (auVar119._0_8_ * local_528.Translation.XY.m128d_f64[0] + auVar99._8_8_ * auVar70._8_8_
             + local_528.Translation.ZW.m128d_f64[0] * local_d78) -
             (auVar61._8_8_ * (param_1->ApproachDirWS).field0_0x0._s_0.Y + auVar77._0_8_ +
             local_4c8.Translation.ZW.m128d_f64[0] * (param_1->ApproachDirWS).field0_0x0._s_0.Z);
    local_c98 = local_528.Translation.XY.m128d_f64[0] - dVar66 * auVar119._0_8_;
    dStack_c90 = auVar99._8_8_ - dVar66 * auVar70._8_8_;
    local_c88 = local_528.Translation.ZW.m128d_f64[0] - dVar66 * local_d78;
    local_528.Translation.ZW.m128d_f64[1] = 0.0;
    local_528.Translation.XY.m128d_f64[0] = local_c98;
    local_528.Translation.XY.m128d_f64[1] = dStack_c90;
    local_528.Translation.ZW.m128d_f64[0] = local_c88;
    pTVar19 = UE::Math::TTransform<double>::GetRelativeTransformReverse
                        (&local_4c8,&local_408,&local_528);
    dVar66 = (pTVar19->Rotation).XY.m128d_f64[1];
    (pFVar2->UnalignedFootOffset).Rotation.XY.m128d_f64[0] = (pTVar19->Rotation).XY.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Rotation.XY.m128d_f64[1] = dVar66;
    dVar66 = (pTVar19->Rotation).ZW.m128d_f64[1];
    (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[0] =
         (pTVar19->Rotation).ZW.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[1] = dVar66;
    dVar66 = (pTVar19->Translation).XY.m128d_f64[1];
    (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[0] =
         (pTVar19->Translation).XY.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[1] = dVar66;
    dVar66 = (pTVar19->Translation).ZW.m128d_f64[1];
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[0] =
         (pTVar19->Translation).ZW.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[1] = dVar66;
    dVar66 = (pTVar19->Scale3D).XY.m128d_f64[1];
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.XY.m128d_f64[0] =
         (pTVar19->Scale3D).XY.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.XY.m128d_f64[1] = dVar66;
    dVar66 = (pTVar19->Scale3D).ZW.m128d_f64[1];
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.ZW.m128d_f64[0] =
         (pTVar19->Scale3D).ZW.m128d_f64[0];
    (param_2->Interpolation).UnalignedFootOffset.Scale3D.ZW.m128d_f64[1] = dVar66;
    uVar117 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.Y =
         (double)uVar117;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar35 = (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.X;
    dVar87 = (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.Y;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.bPrevTargetValid = false;
    dVar66 = (param_2->Interpolation).PlantOffsetTranslationSpringState.Velocity.field0_0x0._s_0.Z;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.PrevTarget.field0_0x0._s_0.X = dVar35
    ;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.PrevTarget.field0_0x0._s_0.Y = dVar87
    ;
    (param_2->Interpolation).PlantOffsetTranslationSpringState.PrevTarget.field0_0x0._s_0.Z = dVar66
    ;
    dVar66 = UE::Math::TQuat<double>::Identity.Y;
    (param_2->Interpolation).PlantOffsetRotationSpringState.PrevTarget.X =
         UE::Math::TQuat<double>::Identity.X;
    (param_2->Interpolation).PlantOffsetRotationSpringState.PrevTarget.Y = dVar66;
    dVar66 = UE::Math::TQuat<double>::Identity.W;
    (param_2->Interpolation).PlantOffsetRotationSpringState.PrevTarget.Z =
         UE::Math::TQuat<double>::Identity.Z;
    (param_2->Interpolation).PlantOffsetRotationSpringState.PrevTarget.W = dVar66;
    uVar117 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_2->Interpolation).PlantOffsetRotationSpringState.AngularVelocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_2->Interpolation).PlantOffsetRotationSpringState.AngularVelocity.field0_0x0._s_0.Y =
         (double)uVar117;
    (param_2->Interpolation).PlantOffsetRotationSpringState.AngularVelocity.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (param_2->Interpolation).PlantOffsetRotationSpringState.bPrevTargetValid = false;
    (param_2->Plant).TimeSinceFullyUnaligned = 0.0;
    local_d48._16_16_ = auVar77;
  }
  pVVar31 = &(param_2->Interpolation).UnalignedFootOffset.Translation;
  pfVar3 = &(this->PlantSettings).ReplantRadiusRatio;
  if (fVar125 < *pfVar3 || fVar125 == *pfVar3) {
    local_f28._s_0.X = (pVVar31->XY).m128d_f64[0];
    local_f28._s_0.Y = (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[1];
    local_f28._s_0.Z = (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[0];
    UE::Math::TVector<double>::GetClampedToMaxSize
              ((TVector<double> *)&local_f28._s_0,(TVector<double> *)&local_f10._s_0,
               (double)(this->PlantSettings).UnplantRadius);
    (pVVar31->XY).m128d_f64[0] = local_f10._s_0.X;
    (param_2->Interpolation).UnalignedFootOffset.Translation.XY.m128d_f64[1] = local_f10._s_0.Y;
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[0] = local_f10._s_0.Z;
    (param_2->Interpolation).UnalignedFootOffset.Translation.ZW.m128d_f64[1] = 0.0;
  }
  pfVar3 = &(this->PlantSettings).ReplantAngleRatio;
  if (fVar125 < *pfVar3 || fVar125 == *pfVar3) {
    dVar66 = (pFVar2->UnalignedFootOffset).Rotation.XY.m128d_f64[0];
    dVar35 = (param_2->Interpolation).UnalignedFootOffset.Rotation.XY.m128d_f64[1];
    dVar87 = (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[0];
    dVar76 = (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[1];
    local_df8 = __real_3e45798ee0000000;
    dVar59 = dVar87 * dVar87 + dVar66 * dVar66;
    dVar67 = dVar76 * dVar76 + dVar35 * dVar35;
    auVar39._8_4_ = SUB84(dVar67,0);
    auVar39._0_8_ = dVar59;
    auVar39._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
    auVar40._0_8_ = auVar39._8_8_ + dVar59;
    auVar40._8_8_ = dVar59 + dVar67;
    auVar78 = sqrtpd(local_d48._16_16_,auVar40);
    uVar32 = -(ulonglong)(__real_3e45798ee0000000 <= auVar40._0_8_);
    uVar33 = -(ulonglong)(__real_3e45798ee0000000 <= auVar40._8_8_);
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar78);
    uVar27 = (uint)(uVar32 >> 0x20);
    uVar97 = (uint)(uVar33 >> 0x20);
    auVar120._0_8_ = uVar32 & (ulonglong)(auVar119._0_8_ * dVar66);
    uVar14 = uVar33 & (ulonglong)(auVar119._8_8_ * dVar35);
    auVar120._8_4_ = (undefined4)uVar14;
    auVar120._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar62._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar62._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar62._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar62._12_4_ =
         ~uVar97 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar121 = auVar120 | auVar62;
    auVar63._0_4_ = ~(uint)uVar32 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar63._4_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar63._8_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar63._12_4_ =
         ~uVar97 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar78);
    auVar41._0_8_ = (ulonglong)(auVar119._0_8_ * dVar87) & uVar32;
    uVar33 = (ulonglong)(auVar119._8_8_ * dVar76) & uVar33;
    auVar41._8_4_ = (undefined4)uVar33;
    auVar41._12_4_ = (undefined4)(uVar33 >> 0x20);
    local_1018 = auVar63 | auVar41;
    auVar11._4_8_ = auVar41._8_8_;
    auVar11._0_4_ = local_1018._4_4_;
    auVar42._0_8_ = auVar11._0_8_ << 0x20;
    auVar42._8_4_ = local_1018._8_4_;
    auVar42._12_4_ = local_1018._12_4_;
    dVar66 = local_1018._8_8_;
    dVar35 = auVar121._8_8_;
    if (auVar42._8_8_ < 0.0) {
      auVar121._0_8_ = 0.0 - auVar121._0_8_;
      auVar121._8_8_ = 0.0 - dVar35;
      local_1018._0_8_ = 0.0 - local_1018._0_8_;
      local_1018._8_8_ = 0.0 - dVar66;
      local_ba8 = auVar121;
      local_b98 = local_1018;
    }
    auVar12._4_8_ = dVar35;
    auVar12._0_4_ = local_1018._4_4_;
    auVar122._0_8_ = auVar12._0_8_ << 0x20;
    auVar122._8_4_ = local_1018._8_4_;
    auVar122._12_4_ = local_1018._12_4_;
    dVar66 = auVar122._8_8_;
    if ((dVar37 <= dVar66) && (dVar37 = dVar66, dVar36 <= dVar66)) {
      dVar37 = dVar36;
    }
    dVar66 = local_1018._0_8_;
    dVar35 = auVar121._0_8_;
    dVar87 = auVar121._8_8_;
    dVar76 = dVar66 * dVar66 + dVar35 * dVar35;
    dVar59 = dVar87 * dVar87 + 0.0;
    auVar43._8_4_ = SUB84(dVar59,0);
    auVar43._0_8_ = dVar76;
    auVar43._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
    auVar44._0_8_ = auVar43._8_8_ + dVar76;
    auVar44._8_8_ = dVar76 + dVar59;
    auVar119 = sqrtpd(auVar78,auVar44);
    uVar33 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar44._0_8_);
    uVar34 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar44._8_8_);
    auVar78 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar119);
    auVar119 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar119);
    uVar32 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar44._0_8_);
    auVar100._0_8_ = uVar33 & (ulonglong)(auVar119._0_8_ * dVar35);
    uVar14 = uVar34 & (ulonglong)(auVar119._8_8_ * dVar87);
    auVar100._8_4_ = (undefined4)uVar14;
    auVar100._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar71._0_4_ = ~(uint)uVar33 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
    auVar71._4_4_ =
         ~(uint)(uVar33 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
    auVar71._8_4_ = ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
    auVar71._12_4_ =
         ~(uint)(uVar34 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
    auVar100 = auVar100 | auVar71;
    local_ee8 = (double)(CONCAT44(~(uint)(uVar32 >> 0x20) &
                                  (uint)((ulonglong)
                                         (double)GlobalVectorConstants::Float1000.m128_f32[2] >>
                                        0x20),
                                  ~(uint)uVar32 &
                                  SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0)) |
                        uVar32 & (ulonglong)(auVar78._0_8_ * dVar66));
    fVar125 = (this->PlantSettings).UnplantAngle * __real_3c8efa35;
    local_1028 = auVar121;
    local_ef8 = auVar100;
    dVar37 = acos(dVar37);
    if (fVar125 < (float)((uint)(float)(dVar37 + dVar37) & __xmm_7fffffff7fffffff7fffffff7fffffff))
    {
      __libm_sse2_sincos_();
      auVar121._0_8_ = auVar100._0_8_ * extraout_XMM0_Qa;
      local_1018._8_8_ = extraout_XMM0_Qb;
      local_1018._0_8_ = local_ee8 * extraout_XMM0_Qa;
      auVar121._8_8_ = auVar100._8_8_ * extraout_XMM0_Qa;
      local_1028 = auVar121;
    }
    *(undefined1 (*) [16])(pFVar2->UnalignedFootOffset).Rotation.XY.m128d_f64 = auVar121;
    (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[0] = (double)local_1018._0_8_
    ;
    (param_2->Interpolation).UnalignedFootOffset.Rotation.ZW.m128d_f64[1] = (double)local_1018._8_8_
    ;
  }
  dVar37 = __real_3e45798ee0000000;
  pTVar19 = &(this->PelvisData).InputPose.RootTransformCS;
  pTVar20 = UE::Math::TTransform<double>::GetRelativeTransform
                      (&(param_2->InputPose).FootTransformCS,&local_3a8,pTVar19);
  local_828.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_828.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_828.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_828.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_828.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_828.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_828.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_828.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_828.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_828.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_828.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_828.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_828,pTVar20,&pFVar2->UnalignedFootOffset);
  dVar87 = local_828.Translation.ZW.m128d_f64[0];
  dVar35 = local_828.Translation.XY.m128d_f64[1];
  dVar66 = local_828.Translation.XY.m128d_f64[0];
  fVar125 = (this->PlantSettings).SeparatingDistance;
  if (fVar125 <= 0.0) goto LAB_14a72ef63;
  local_d88 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[0];
  dStack_d80 = (param_2->InputPose).FootTransformCS.Translation.XY.m128d_f64[1];
  local_d78 = (param_2->InputPose).FootTransformCS.Translation.ZW.m128d_f64[0];
  dVar76 = (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.X;
  uVar117 = local_d88 - dVar76;
  auVar15._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar15._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar103 = dStack_d80 - (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y;
  local_1038 = local_828.Translation.ZW.m128d_f64[0];
  uVar126 = local_d78 - (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z;
  local_1048 = local_828.Translation.XY.m128d_f64[0];
  dStack_1040 = local_828.Translation.XY.m128d_f64[1];
  dVar59 = (double)uVar103 * (double)uVar103 + (double)uVar117 * (double)uVar117;
  if (dVar59 == dVar36) {
    dVar36 = (double)uVar103;
    if ((double)uVar126 != 0.0) {
LAB_14a72e67e:
      uVar126 = 0.0;
      dVar36 = (double)uVar103;
    }
  }
  else {
    if (dVar37 <= dVar59) {
      local_df0 = dVar36 / SQRT(dVar59);
      uVar117 = (double)uVar117 * local_df0;
      uVar103 = (double)uVar103 * local_df0;
      goto LAB_14a72e67e;
    }
    auVar13._4_8_ = dStack_d80;
    auVar13._0_4_ = (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20)
    ;
    auVar104._0_8_ = auVar13._0_8_ << 0x20;
    auVar104._8_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,0);
    auVar104._12_4_ =
         (int)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_ >> 0x20);
    uVar103 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar117 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar126 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar36 = auVar104._8_8_;
  }
  dVar59 = (double)fVar125;
  dVar118 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar130,SUB84(dVar36,0) ^ uVar29);
  dVar124 = (double)CONCAT44((uint)((ulonglong)uVar126 >> 0x20) ^ uVar130,(uint)uVar126 ^ uVar29);
  dVar37 = dVar36 * dVar59 + (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Y;
  dVar67 = (double)CONCAT44((uint)((ulonglong)uVar117 >> 0x20) ^ uVar130,(uint)uVar117 ^ uVar29);
  dVar76 = (double)uVar117 * dVar59 + dVar76;
  dVar59 = (double)uVar126 * dVar59 + (this->PelvisData).InputPose.FootMidpointCS.field0_0x0._s_0.Z;
  dVar88 = ((dVar36 * dVar37 + (double)uVar117 * dVar76 + (double)uVar126 * dVar59) -
           (local_828.Translation.XY.m128d_f64[1] * dVar36 +
            local_828.Translation.XY.m128d_f64[0] * (double)uVar117 +
           local_828.Translation.ZW.m128d_f64[0] * (double)uVar126)) /
           (dVar36 * dVar36 + (double)uVar117 * (double)uVar117 + (double)uVar126 * (double)uVar126)
  ;
  dVar36 = (local_828.Translation.XY.m128d_f64[1] -
           (dVar36 * dVar88 + local_828.Translation.XY.m128d_f64[1])) * dVar118 +
           (local_828.Translation.XY.m128d_f64[0] -
           ((double)uVar117 * dVar88 + local_828.Translation.XY.m128d_f64[0])) * dVar67 +
           (local_828.Translation.ZW.m128d_f64[0] -
           ((double)uVar126 * dVar88 + local_828.Translation.ZW.m128d_f64[0])) * dVar124;
  fVar125 = (float)(double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar130,
                                    SUB84(dVar36,0) ^ uVar29);
  if ((param_2->Plant).PlantType == Unplanted) {
    uVar68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (fVar125 < 0.0) {
      dVar36 = (double)fVar125;
      uVar68 = dVar67 * dVar36;
      uVar60 = dVar36 * dVar124;
      uVar38 = dVar36 * dVar118;
      local_fd8 = (double)uVar60;
    }
    uVar98 = (undefined4)((ulonglong)uVar38 >> 0x20);
    if ((this->InterpolationSettings).bEnableSeparationInterpolation == false) {
      auVar7._8_4_ = (int)uVar38;
      auVar7._0_8_ = uVar68;
      auVar7._12_4_ = uVar98;
      *(undefined1 (*) [16])&(param_2->Interpolation).SeparatingPlaneOffset.field0_0x0 = auVar7;
      (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Z = (double)uVar60;
    }
    else {
      local_ed8._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_ed8._s_0.Y = _UNK_150689688;
      local_eb8._s_0.Z = __real_bff0000000000000;
      local_e78._s_0.X = (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.X;
      local_e78._s_0.Y = (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Y;
      local_ed8._s_0.Z = __real_3ff0000000000000;
      local_eb8._s_0.X = ___xmm_bff0000000000000bff0000000000000;
      local_eb8._s_0.Y = _UNK_15076c718;
      local_e78._s_0.Z = (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Z;
      local_e98._8_4_ = (int)uVar38;
      local_e98._0_8_ = uVar68;
      local_e98._12_4_ = uVar98;
      local_e98._s_0.Z = (double)uVar60;
      pTVar21 = UKismetMathLibrary::VectorSpringInterp
                          (&local_b68,(TVector<double> *)&local_e78._s_0,
                           (TVector<double> *)&local_e98._s_0,
                           &(param_2->Interpolation).SeparatingPlaneOffsetSpringState,
                           (this->InterpolationSettings).FloorLinearStiffness,
                           (this->InterpolationSettings).FloorLinearDamping,param_1->UpdateDeltaTime
                           ,__real_3f800000,0.0,false,(TVector<double> *)&local_eb8._s_0,
                           (TVector<double> *)&local_ed8._s_0,false);
      dVar36 = (pTVar21->field0_0x0)._s_0.Y;
      (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.X =
           (pTVar21->field0_0x0)._s_0.X;
      (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Y = dVar36;
      (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Z =
           (pTVar21->field0_0x0)._s_0.Z;
    }
    local_828.Translation.ZW.m128d_f64[0] =
         dVar87 + (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Z;
    local_828.Translation.XY.m128d_f64[0] =
         dVar66 + (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.X;
    local_828.Translation.XY.m128d_f64[1] =
         dVar35 + (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Y;
    local_828.Translation.ZW.m128d_f64[1] = 0.0;
  }
  else {
    *(undefined1 (*) [16])&(param_2->Interpolation).SeparatingPlaneOffset.field0_0x0 = auVar15;
    (param_2->Interpolation).SeparatingPlaneOffset.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.Y =
         (double)uVar68;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar66 = (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.X;
    dVar35 = (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.Y;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.bPrevTargetValid = false;
    dVar36 = (param_2->Interpolation).SeparatingPlaneOffsetSpringState.Velocity.field0_0x0._s_0.Z;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.PrevTarget.field0_0x0._s_0.X = dVar66;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.PrevTarget.field0_0x0._s_0.Y = dVar35;
    (param_2->Interpolation).SeparatingPlaneOffsetSpringState.PrevTarget.field0_0x0._s_0.Z = dVar36;
  }
  pTVar16 = CVarAnimNodeFootPlacementDebug.Ref;
  local_1048 = local_828.Translation.XY.m128d_f64[0];
  dStack_1040 = local_828.Translation.XY.m128d_f64[1];
  local_1038 = local_828.Translation.ZW.m128d_f64[0];
  bVar17 = IsInParallelGameThread();
  if ((bVar17) || (bVar17 = IsInGameThread(), bVar17)) {
    lVar22 = 0;
  }
  else {
    lVar22 = 1;
  }
  fVar4 = __real_41c80000;
  if (pTVar16->ShadowedValue[lVar22] != false) {
    auVar119 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64;
    dVar87 = auVar119._0_8_;
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar127._0_8_ = (double)uVar126 * (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
    auVar127._8_8_ = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar35 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
    auVar72 = blendpd(auVar78,auVar119,2);
    dVar118 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0] * (double)uVar117;
    dVar124 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1] * (double)uVar103;
    auVar105._8_4_ = SUB84(dVar124,0);
    auVar105._0_8_ = dVar118;
    uVar98 = (undefined4)((ulonglong)dVar124 >> 0x20);
    auVar105._12_4_ = uVar98;
    dVar67 = auVar119._8_8_;
    auVar106._0_8_ = auVar105._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar118;
    auVar106._8_8_ = auVar127._0_8_ * auVar78._8_8_ - dVar87 * dVar124;
    auVar45._8_4_ = SUB84(dVar124,0);
    auVar45._0_8_ = dVar118;
    auVar45._12_4_ = uVar98;
    auVar78 = blendpd(auVar45,auVar127,2);
    auVar46._0_8_ = auVar78._0_8_ * dVar87 - auVar72._0_8_ * auVar127._0_8_;
    auVar46._8_8_ = auVar78._8_8_ * dVar67 - auVar72._8_8_ * auVar127._8_8_;
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar72 = blendpd(auVar106,auVar46,2);
    auVar107._0_8_ = auVar72._0_8_ + auVar72._0_8_;
    auVar107._8_8_ = auVar72._8_8_ + auVar72._8_8_;
    dVar36 = auVar106._8_8_ + auVar106._8_8_;
    dVar66 = auVar46._0_8_ + auVar46._0_8_;
    uVar98 = (undefined4)((ulonglong)dVar66 >> 0x20);
    auVar89._8_4_ = SUB84(dVar66,0);
    auVar89._0_8_ = dVar36;
    auVar89._12_4_ = uVar98;
    auVar79._8_4_ = SUB84(dVar66,0);
    auVar79._0_8_ = dVar36;
    auVar79._12_4_ = uVar98;
    auVar72 = blendpd(auVar79,auVar107,2);
    auVar90._0_8_ = auVar89._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar36;
    auVar90._8_8_ = auVar107._0_8_ * auVar78._8_8_ - dVar87 * dVar66;
    auVar47._8_4_ = SUB84(auVar90._8_8_,0);
    auVar47._0_8_ = auVar90._0_8_;
    auVar47._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
    auVar78 = blendpd(auVar78,auVar119,2);
    auVar128._0_8_ = dVar59 * (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
    auVar128._8_8_ = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar80._0_8_ = auVar72._0_8_ * dVar87 - auVar78._0_8_ * auVar107._0_8_;
    auVar80._8_8_ = auVar72._8_8_ * dVar67 - auVar78._8_8_ * auVar107._8_8_;
    dVar66 = dVar66 * dVar35 + dVar124 + auVar80._0_8_;
    local_fe8 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    dVar124 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0] * dVar76;
    dVar88 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1] * dVar37;
    local_e58._8_4_ = SUB84(dVar66,0);
    local_e58._0_8_ = dVar36 * dVar35 + dVar118 + auVar47._8_8_;
    local_e58._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    auVar78 = blendpd(auVar90,auVar80,2);
    local_e58._s_0.Z = auVar107._0_8_ * dVar35 + auVar127._0_8_ + auVar78._0_8_;
    auVar72 = blendpd(local_fe8,auVar119,2);
    auVar108._8_4_ = SUB84(dVar88,0);
    auVar108._0_8_ = dVar124;
    uVar98 = (undefined4)((ulonglong)dVar88 >> 0x20);
    auVar108._12_4_ = uVar98;
    auVar109._0_8_ = auVar108._8_8_ * local_fe8._0_8_ - local_fe8._8_8_ * dVar124;
    auVar109._8_8_ = auVar128._0_8_ * local_fe8._8_8_ - dVar87 * dVar88;
    auVar48._8_4_ = SUB84(dVar88,0);
    auVar48._0_8_ = dVar124;
    auVar48._12_4_ = uVar98;
    auVar78 = blendpd(auVar48,auVar128,2);
    auVar49._0_8_ = auVar78._0_8_ * dVar87 - auVar72._0_8_ * auVar128._0_8_;
    auVar49._8_8_ = auVar78._8_8_ * dVar67 - auVar72._8_8_ * auVar128._8_8_;
    dVar36 = auVar109._8_8_ + auVar109._8_8_;
    dVar66 = auVar49._0_8_ + auVar49._0_8_;
    uVar98 = (undefined4)((ulonglong)dVar66 >> 0x20);
    auVar72 = blendpd(auVar109,auVar49,2);
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar91._8_4_ = SUB84(dVar66,0);
    auVar91._0_8_ = dVar36;
    auVar91._12_4_ = uVar98;
    auVar110._0_8_ = auVar72._0_8_ + auVar72._0_8_;
    auVar110._8_8_ = auVar72._8_8_ + auVar72._8_8_;
    auVar81._8_4_ = SUB84(dVar66,0);
    auVar81._0_8_ = dVar36;
    auVar81._12_4_ = uVar98;
    auVar72 = blendpd(auVar81,auVar110,2);
    auVar92._0_8_ = auVar91._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar36;
    auVar92._8_8_ = auVar110._0_8_ * auVar78._8_8_ - dVar87 * dVar66;
    auVar119 = blendpd(auVar78,auVar119,2);
    auVar50._8_4_ = SUB84(auVar92._8_8_,0);
    auVar50._0_8_ = auVar92._0_8_;
    auVar50._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
    auVar82._0_8_ = auVar72._0_8_ * dVar87 - auVar119._0_8_ * auVar110._0_8_;
    auVar82._8_8_ = auVar72._8_8_ * dVar67 - auVar119._8_8_ * auVar110._8_8_;
    dVar66 = dVar66 * dVar67 + dVar88 + auVar82._0_8_ +
             (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[1];
    auVar119 = blendpd(auVar92,auVar82,2);
    local_e40._8_4_ = SUB84(dVar66,0);
    local_e40._0_8_ =
         dVar36 * dVar67 + dVar124 + auVar50._8_8_ +
         (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[0];
    local_e40._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    local_e40._s_0.Z =
         auVar110._0_8_ * dVar67 + auVar128._0_8_ + auVar119._0_8_ +
         (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
    FAnimInstanceProxy::AnimDrawDebugCircle
              ((FAnimInstanceProxy *)param_1->CSPContext->_padding_,
               (TVector<double> *)&local_e40._s_0,__real_41c80000,0x18,&FColor::Red,
               (TVector<double> *)&local_e58._s_0,false,__real_bf800000,SDPG_Foreground,
               __real_3f000000);
    uVar29 = param_2->Idx;
    uVar130 = 0;
    if ((int)uVar29 < (this->DebugData).LegsInfo.ArrayNum) {
      uVar130 = ~uVar29 >> 0x1f;
    }
    if ((uVar130 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(float *)((this->DebugData).LegsInfo.AllocatorInstance.Data +
              (longlong)(int)uVar29 * 0x10 + 0xc) = fVar125;
  }
  if (FVisualLogger::bIsRecording != 0) {
    auVar119 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64;
    dVar87 = auVar119._0_8_;
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar129._0_8_ = (double)uVar126 * (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
    auVar129._8_8_ = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar76 = dVar76 * (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0];
    dVar37 = dVar37 * (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1];
    uVar131 = (undefined4)((ulonglong)dVar37 >> 0x20);
    dVar35 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
    auVar72 = blendpd(auVar78,auVar119,2);
    dVar118 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0] * (double)uVar117;
    dVar124 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1] * (double)uVar103;
    auVar111._8_4_ = SUB84(dVar124,0);
    auVar111._0_8_ = dVar118;
    uVar98 = (undefined4)((ulonglong)dVar124 >> 0x20);
    auVar111._12_4_ = uVar98;
    dVar67 = auVar119._8_8_;
    auVar112._0_8_ = auVar111._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar118;
    auVar112._8_8_ = auVar129._0_8_ * auVar78._8_8_ - dVar87 * dVar124;
    auVar51._8_4_ = SUB84(dVar124,0);
    auVar51._0_8_ = dVar118;
    auVar51._12_4_ = uVar98;
    auVar78 = blendpd(auVar51,auVar129,2);
    auVar52._0_8_ = auVar78._0_8_ * dVar87 - auVar72._0_8_ * auVar129._0_8_;
    auVar52._8_8_ = auVar78._8_8_ * dVar67 - auVar72._8_8_ * auVar129._8_8_;
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar72 = blendpd(auVar112,auVar52,2);
    auVar113._0_8_ = auVar72._0_8_ + auVar72._0_8_;
    auVar113._8_8_ = auVar72._8_8_ + auVar72._8_8_;
    dVar36 = auVar112._8_8_ + auVar112._8_8_;
    dVar66 = auVar52._0_8_ + auVar52._0_8_;
    uVar98 = (undefined4)((ulonglong)dVar66 >> 0x20);
    auVar93._8_4_ = SUB84(dVar66,0);
    auVar93._0_8_ = dVar36;
    auVar93._12_4_ = uVar98;
    auVar83._8_4_ = SUB84(dVar66,0);
    auVar83._0_8_ = dVar36;
    auVar83._12_4_ = uVar98;
    auVar72 = blendpd(auVar83,auVar113,2);
    auVar94._0_8_ = auVar93._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar36;
    auVar94._8_8_ = auVar113._0_8_ * auVar78._8_8_ - dVar87 * dVar66;
    auVar78 = blendpd(auVar78,auVar119,2);
    auVar53._8_4_ = SUB84(auVar94._8_8_,0);
    auVar53._0_8_ = auVar94._0_8_;
    auVar53._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
    auVar123._0_8_ = dVar59 * (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
    auVar123._8_8_ = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar84._0_8_ = auVar72._0_8_ * dVar87 - auVar78._0_8_ * auVar113._0_8_;
    auVar84._8_8_ = auVar72._8_8_ * dVar67 - auVar78._8_8_ * auVar113._8_8_;
    dVar66 = dVar66 * dVar35 + dVar124 + auVar84._0_8_;
    local_dc8[0] = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar78 = blendpd(auVar94,auVar84,2);
    local_e28._s_0.Z = auVar113._0_8_ * dVar35 + auVar129._0_8_ + auVar78._0_8_;
    local_e28._8_4_ = SUB84(dVar66,0);
    local_e28._0_8_ = dVar36 * dVar35 + dVar118 + auVar53._8_8_;
    local_e28._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
    auVar114._8_4_ = SUB84(dVar37,0);
    auVar114._0_8_ = dVar76;
    auVar114._12_4_ = uVar131;
    auVar72 = blendpd(local_dc8[0],auVar119,2);
    auVar115._0_8_ = auVar114._8_8_ * local_dc8[0]._0_8_ - local_dc8[0]._8_8_ * dVar76;
    auVar115._8_8_ = auVar123._0_8_ * local_dc8[0]._8_8_ - dVar87 * dVar37;
    auVar54._8_4_ = SUB84(dVar37,0);
    auVar54._0_8_ = dVar76;
    auVar54._12_4_ = uVar131;
    auVar78 = blendpd(auVar54,auVar123,2);
    auVar55._0_8_ = auVar78._0_8_ * dVar87 - auVar72._0_8_ * auVar123._0_8_;
    auVar55._8_8_ = auVar78._8_8_ * dVar67 - auVar72._8_8_ * auVar123._8_8_;
    auVar78 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    dVar36 = auVar115._8_8_ + auVar115._8_8_;
    dVar66 = auVar55._0_8_ + auVar55._0_8_;
    uVar98 = (undefined4)((ulonglong)dVar66 >> 0x20);
    auVar72 = blendpd(auVar115,auVar55,2);
    auVar116._0_8_ = auVar72._0_8_ + auVar72._0_8_;
    auVar116._8_8_ = auVar72._8_8_ + auVar72._8_8_;
    auVar95._8_4_ = SUB84(dVar66,0);
    auVar95._0_8_ = dVar36;
    auVar95._12_4_ = uVar98;
    auVar85._8_4_ = SUB84(dVar66,0);
    auVar85._0_8_ = dVar36;
    auVar85._12_4_ = uVar98;
    auVar72 = blendpd(auVar85,auVar116,2);
    auVar96._0_8_ = auVar95._8_8_ * auVar78._0_8_ - auVar78._8_8_ * dVar36;
    auVar96._8_8_ = auVar116._0_8_ * auVar78._8_8_ - dVar87 * dVar66;
    auVar56._8_4_ = SUB84(auVar96._8_8_,0);
    auVar56._0_8_ = auVar96._0_8_;
    auVar56._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
    auVar119 = blendpd(auVar78,auVar119,2);
    auVar86._0_8_ = auVar72._0_8_ * dVar87 - auVar119._0_8_ * auVar116._0_8_;
    auVar86._8_8_ = auVar72._8_8_ * dVar67 - auVar119._8_8_ * auVar116._8_8_;
    auVar119 = blendpd(auVar96,auVar86,2);
    dVar37 = dVar66 * dVar67 + dVar37 + auVar86._0_8_ +
             (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[1];
    local_e10._s_0.Z =
         auVar116._0_8_ * dVar67 + auVar123._0_8_ + auVar119._0_8_ +
         (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
    local_e10._8_4_ = SUB84(dVar37,0);
    local_e10._0_8_ =
         dVar36 * dVar67 + dVar76 + auVar56._8_8_ +
         (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[0];
    local_e10._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    if (FVisualLogger::bIsRecording != 0) {
      ::FName::FName(&local_1050,"FootPlacement");
      FVisualLogger::DiscLogfImpl
                (*(UObject **)(param_1->CSPContext->_padding_ + 0x140),&local_1050,Display,
                 (TVector<double> *)&local_e10._s_0,(TVector<double> *)&local_e28._s_0,fVar4,
                 &FColor::Red,1,false,L"");
    }
  }
LAB_14a72ef63:
  local_a08.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a08.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a08.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a08.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_a08.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a08.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_a08.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a08.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_a08.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a08.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_a08.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a08.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Blend
            (&local_a08,&local_4c8,&local_828,(param_2->InputPose).LockAlpha);
  (param_2->UnalignedFootTransformRS).Rotation.XY.m128d_f64[0] = local_a08.Rotation.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Rotation.XY.m128d_f64[1] = local_a08.Rotation.XY.m128d_f64[1];
  (param_2->UnalignedFootTransformRS).Rotation.ZW.m128d_f64[0] = local_a08.Rotation.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Rotation.ZW.m128d_f64[1] = local_a08.Rotation.ZW.m128d_f64[1];
  (param_2->UnalignedFootTransformRS).Translation.XY.m128d_f64[0] =
       local_a08.Translation.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Translation.XY.m128d_f64[1] =
       local_a08.Translation.XY.m128d_f64[1];
  (param_2->UnalignedFootTransformRS).Translation.ZW.m128d_f64[0] =
       local_a08.Translation.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Translation.ZW.m128d_f64[1] =
       local_a08.Translation.ZW.m128d_f64[1];
  (param_2->UnalignedFootTransformRS).Scale3D.XY.m128d_f64[0] = local_a08.Scale3D.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Scale3D.XY.m128d_f64[1] = local_a08.Scale3D.XY.m128d_f64[1];
  (param_2->UnalignedFootTransformRS).Scale3D.ZW.m128d_f64[0] = local_a08.Scale3D.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformRS).Scale3D.ZW.m128d_f64[1] = local_a08.Scale3D.ZW.m128d_f64[1];
  local_588.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_588.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_588.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_588.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_588.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_588.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_588.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_588.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_588.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_588.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_588.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_588.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_588,&local_a08,pTVar19);
  pTVar20 = &local_8e8;
  local_8e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_8e8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_8e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_8e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_8e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_8e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_8e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_8e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_8e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_8e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_8e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_8e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(pTVar20,&local_588,&param_1->OwningComponentToWorld);
  (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[0] = local_8e8.Rotation.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[1] = local_8e8.Rotation.XY.m128d_f64[1];
  uVar97 = _UNK_15061cc8c;
  uVar27 = _UNK_15061cc88;
  uVar130 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[0] = local_8e8.Rotation.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[1] = local_8e8.Rotation.ZW.m128d_f64[1];
  (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0] =
       local_8e8.Translation.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1] =
       local_8e8.Translation.XY.m128d_f64[1];
  (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0] =
       local_8e8.Translation.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1] =
       local_8e8.Translation.ZW.m128d_f64[1];
  (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_8e8.Scale3D.XY.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_8e8.Scale3D.XY.m128d_f64[1];
  (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_8e8.Scale3D.ZW.m128d_f64[0];
  (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_8e8.Scale3D.ZW.m128d_f64[1];
  auVar73._0_8_ =
       (double)CONCAT44(uVar130 & *(uint *)((longlong)
                                            (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 +
                                           4),
                        uVar29 & *(uint *)(param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64);
  auVar73._8_4_ = uVar27 & *(uint *)((param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 + 1);
  auVar73._12_4_ =
       uVar97 & *(uint *)((longlong)(param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64 + 0xc);
  auVar64._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar73._8_8_);
  auVar64._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar73._0_8_);
  uVar28 = movmskpd((int)pTVar20,auVar64);
  auVar74._0_8_ =
       (double)CONCAT44(uVar130 & *(uint *)((longlong)
                                            (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 +
                                           4),
                        uVar29 & *(uint *)(param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64);
  auVar74._8_4_ = uVar27 & *(uint *)((param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 + 1);
  auVar74._12_4_ =
       uVar97 & *(uint *)((longlong)(param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64 + 0xc);
  auVar57._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar74._8_8_);
  auVar57._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar74._0_8_);
  iVar18 = movmskpd(extraout_EAX_00,auVar57);
  if ((uVar28 & 0x3fffffff) == 0 && iVar18 == 0) {
    local_7c8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_7c8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_7c8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_7c8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_7c8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_7c8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(&param_1->OwningComponentToWorld,&local_7c8);
  }
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar19,&local_2e8);
  UE::Math::TPlane<double>::TransformBy
            (&(param_2->Plant).PlantPlaneRS,(TPlane<double> *)local_dc8,pTVar23);
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&param_1->OwningComponentToWorld,&local_268);
  UE::Math::TPlane<double>::TransformBy((TPlane<double> *)local_dc8,&local_de8,pTVar23);
  UpdatePlantingPlaneInterpolation
            (this,param_1,&param_2->UnalignedFootTransformWS,&local_c68,
             (param_2->InputPose).AlignmentAlpha,&local_de8,pFVar1,pFVar2);
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_7c8,&local_1e8);
  pTVar25 = &local_de8;
  pTVar24 = UE::Math::TPlane<double>::TransformBy(pTVar25,&local_b88,pTVar23);
  auVar101._0_8_ =
       (double)CONCAT44(uVar130 & *(uint *)((longlong)
                                            (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.
                                            m128d_f64 + 4),
                        uVar29 & *(uint *)(this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.
                                          m128d_f64);
  auVar101._8_4_ =
       uVar27 & *(uint *)((this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64 + 1);
  auVar101._12_4_ =
       uVar97 & *(uint *)((longlong)
                          (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64 + 0xc);
  auVar75._0_8_ =
       (double)CONCAT44(uVar130 & *(uint *)((longlong)
                                            (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.
                                            m128d_f64 + 4),
                        uVar29 & *(uint *)(this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.
                                          m128d_f64);
  auVar75._8_4_ =
       uVar27 & *(uint *)((this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64 + 1);
  auVar75._12_4_ =
       uVar97 & *(uint *)((longlong)
                          (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64 + 0xc);
  auVar65._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar75._8_8_);
  auVar65._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar75._0_8_);
  auVar58._8_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar101._8_8_);
  auVar58._0_8_ =
       -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar101._0_8_);
  uVar29 = movmskpd((int)pTVar25,auVar65);
  iVar18 = movmskpd((int)pTVar24,auVar58);
  if ((uVar29 & 0x3fffffff) == 0 && iVar18 == 0) {
    local_c08.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_c08.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_c08.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_c08.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_c08.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_c08.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast(pTVar19,&local_c08);
  }
  pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_c08,&local_168);
  pTVar25 = UE::Math::TPlane<double>::TransformBy(&local_b88,&local_b48,pTVar23);
  lVar22 = pTVar25->_padding_;
  (param_2->Plant).PlantPlaneRS._padding_ = pTVar25->_padding_;
  (param_2->Plant).PlantPlaneRS._padding_ = lVar22;
  dVar36 = pTVar25->W;
  (param_2->Plant).PlantPlaneRS._padding_ = pTVar25->_padding_;
  (param_2->Plant).PlantPlaneRS.W = dVar36;
  dVar36 = (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[1];
  dVar37 = (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[0];
  dVar66 = (param_2->UnalignedFootTransformWS).Rotation.ZW.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[0] =
       (param_2->UnalignedFootTransformWS).Rotation.XY.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[1] = dVar36;
  dVar36 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[0];
  dVar35 = (param_2->UnalignedFootTransformWS).Translation.XY.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[0] = dVar37;
  (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[1] = dVar66;
  dVar37 = (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[0];
  dVar66 = (param_2->UnalignedFootTransformWS).Translation.ZW.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] = dVar36;
  (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] = dVar35;
  dVar36 = (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[0];
  dVar35 = (param_2->UnalignedFootTransformWS).Scale3D.XY.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] = dVar37;
  (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] = dVar66;
  dVar37 = (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[0];
  dVar66 = (param_2->UnalignedFootTransformWS).Scale3D.ZW.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[0] = dVar36;
  (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[1] = dVar35;
  (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = dVar37;
  (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = dVar66;
  AlignPlantToGround(this,param_1,&local_de8,pFVar1,pTVar26,&(param_2->Plant).TwistCorrection);
  local_768.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_768.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_768.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_768.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_768.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_768.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_768.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_768.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_768.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_768.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_768.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_768.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_768,pTVar26,&local_7c8);
  pTVar26 = UE::Math::TTransform<double>::GetRelativeTransform(&local_768,&local_348,pTVar19);
  dVar36 = (pTVar26->Rotation).XY.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[0] = (pTVar26->Rotation).XY.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Rotation.XY.m128d_f64[1] = dVar36;
  dVar36 = (pTVar26->Rotation).ZW.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[0] = (pTVar26->Rotation).ZW.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Rotation.ZW.m128d_f64[1] = dVar36;
  dVar36 = (pTVar26->Translation).XY.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[0] =
       (pTVar26->Translation).XY.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Translation.XY.m128d_f64[1] = dVar36;
  dVar36 = (pTVar26->Translation).ZW.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[0] =
       (pTVar26->Translation).ZW.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Translation.ZW.m128d_f64[1] = dVar36;
  dVar36 = (pTVar26->Scale3D).XY.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[0] = (pTVar26->Scale3D).XY.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Scale3D.XY.m128d_f64[1] = dVar36;
  dVar36 = (pTVar26->Scale3D).ZW.m128d_f64[1];
  (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[0] = (pTVar26->Scale3D).ZW.m128d_f64[0];
  (param_2->AlignedFootTransformRS).Scale3D.ZW.m128d_f64[1] = dVar36;
  local_888.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_888.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_888.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_888.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_888.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_888.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_888.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_888.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_888.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_888.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_888.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_888.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  UE::Math::TTransform<double>::Multiply(&local_888,&local_768,&param_1->OwningComponentToWorld);
  (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[0] = local_888.Rotation.XY.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Rotation.XY.m128d_f64[1] = local_888.Rotation.XY.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[0] = local_888.Rotation.ZW.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Rotation.ZW.m128d_f64[1] = local_888.Rotation.ZW.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[0] =
       local_888.Translation.XY.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Translation.XY.m128d_f64[1] =
       local_888.Translation.XY.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[0] =
       local_888.Translation.ZW.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Translation.ZW.m128d_f64[1] =
       local_888.Translation.ZW.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[0] = local_888.Scale3D.XY.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Scale3D.XY.m128d_f64[1] = local_888.Scale3D.XY.m128d_f64[1];
  (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[0] = local_888.Scale3D.ZW.m128d_f64[0];
  (param_2->AlignedFootTransformWS).Scale3D.ZW.m128d_f64[1] = local_888.Scale3D.ZW.m128d_f64[1];
  return;
}

// ResetRuntimeData @ 14a72f700

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FAnimNode_FootPlacement::ResetRuntimeData(FAnimNode_FootPlacement *this)

{
  TArray<UE::Anim::FootPlacement::FLegRuntimeData,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Anim::FootPlacement::FDebugData::FLegInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  double *pdVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  double local_178 [2];
  double local_168 [2];
  double local_158 [2];
  double local_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118;
  undefined4 local_117;
  undefined2 local_113;
  undefined1 local_111;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8;
  undefined8 local_c7;
  undefined4 local_bf;
  undefined2 local_bb;
  undefined1 local_b9;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double dStack_88;
  undefined1 local_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_69;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double local_48;
  double local_40;
  double dStack_38;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  undefined1 local_29;
  
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pTVar1 = &this->LegsData;
  uVar19 = 0;
  piVar3 = &(this->LegsData).ArrayMax;
  piVar4 = &(this->LegsData).ArrayNum;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y = (double)uVar11;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z = (double)uVar12;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.X =
       (double)uVar10;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Y =
       (double)uVar11;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.PrevTarget.field0_0x0._s_0.Z =
       (double)uVar12;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.X =
       (double)uVar10;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Y =
       (double)uVar11;
  (this->PelvisData).Interpolation.PelvisTranslationSpringState.Velocity.field0_0x0._s_0.Z =
       (double)uVar12;
  *(undefined8 *)&(this->PelvisData).Interpolation.PelvisTranslationSpringState.bPrevTargetValid = 0
  ;
  *piVar4 = 0;
  if (*piVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x6c0,0x10,0,&pTVar1->AllocatorInstance,0,piVar3);
  }
  uVar14 = (this->LegDefinitions).ArrayNum;
  iVar15 = *piVar4;
  if (iVar15 < (int)uVar14) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x6c0,0x10,uVar14 - iVar15,&pTVar1->AllocatorInstance,piVar4,piVar3);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar15) {
      uVar20 = iVar15 - uVar14;
      if (((int)(uVar20 | uVar14) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar20 != 0) {
        pFVar17 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x6c0;
        iVar15 = (*piVar4 - uVar14) - uVar20;
        if (iVar15 != 0) {
          memmove(pFVar17,pFVar17 + (longlong)(int)uVar20 * 0x6c0,(longlong)iVar15 * 0x6c0);
        }
        *piVar4 = *piVar4 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x6c0,0x10,&pTVar1->AllocatorInstance,*piVar4,piVar3);
      }
    }
  }
  uVar21 = uVar19;
  if (0 < (this->LegsData).ArrayNum) {
    do {
      uVar20 = (uint)uVar19;
      uVar14 = 0;
      if ((int)uVar20 < *piVar4) {
        uVar14 = ~uVar20 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      local_117 = 0;
      local_113 = 0;
      local_111 = 0;
      *(uint *)(pFVar17 + uVar21) = uVar20;
      local_c7 = 0;
      local_198[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_198[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_1a8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
      local_1a8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
      local_bf = 0;
      local_bb = 0;
      local_b9 = 0;
      local_7f = 0;
      local_7b = 0;
      local_79 = 0;
      local_6f = 0;
      local_6b = 0;
      local_69 = 0;
      local_2f = 0;
      local_2b = 0;
      local_29 = 0;
      local_118 = 0;
      local_c8 = 0;
      local_178[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
      local_178[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
      local_188[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
      local_188[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
      local_b8 = UE::Math::TQuat<double>::Identity.X;
      local_68 = UE::Math::TQuat<double>::Identity.X;
      local_158[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
      local_158[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      lVar18 = 3;
      local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_168[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
      local_168[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
      dStack_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_b0 = UE::Math::TQuat<double>::Identity.Y;
      dStack_a8 = UE::Math::TQuat<double>::Identity.Z;
      local_80 = 0;
      local_60 = UE::Math::TQuat<double>::Identity.Y;
      dStack_58 = UE::Math::TQuat<double>::Identity.Z;
      local_78 = 0;
      dStack_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_70 = 0;
      local_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_30 = 0;
      local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_a0 = UE::Math::TQuat<double>::Identity.W;
      local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_50 = UE::Math::TQuat<double>::Identity.W;
      local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dStack_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pFVar17 = pFVar17 + uVar21 + 0x540;
      pdVar16 = local_1a8;
      do {
        dVar6 = pdVar16[1];
        dVar7 = pdVar16[2];
        dVar8 = pdVar16[3];
        *(double *)pFVar17 = *pdVar16;
        *(double *)(pFVar17 + 8) = dVar6;
        dVar6 = pdVar16[4];
        dVar9 = pdVar16[5];
        *(double *)(pFVar17 + 0x10) = dVar7;
        *(double *)(pFVar17 + 0x18) = dVar8;
        dVar7 = pdVar16[6];
        dVar8 = pdVar16[7];
        *(double *)(pFVar17 + 0x20) = dVar6;
        *(double *)(pFVar17 + 0x28) = dVar9;
        dVar6 = pdVar16[8];
        dVar9 = pdVar16[9];
        *(double *)(pFVar17 + 0x30) = dVar7;
        *(double *)(pFVar17 + 0x38) = dVar8;
        dVar7 = pdVar16[10];
        dVar8 = pdVar16[0xb];
        *(double *)(pFVar17 + 0x40) = dVar6;
        *(double *)(pFVar17 + 0x48) = dVar9;
        dVar6 = pdVar16[0xc];
        dVar9 = pdVar16[0xd];
        *(double *)(pFVar17 + 0x50) = dVar7;
        *(double *)(pFVar17 + 0x58) = dVar8;
        dVar7 = pdVar16[0xe];
        dVar8 = pdVar16[0xf];
        *(double *)(pFVar17 + 0x60) = dVar6;
        *(double *)(pFVar17 + 0x68) = dVar9;
        *(double *)(pFVar17 + 0x70) = dVar7;
        *(double *)(pFVar17 + 0x78) = dVar8;
        lVar18 = lVar18 + -1;
        pFVar17 = pFVar17 + 0x80;
        pdVar16 = pdVar16 + 0x10;
      } while (lVar18 != 0);
      uVar19 = (ulonglong)(uVar20 + 1);
      uVar21 = uVar21 + 0x6c0;
    } while ((int)(uVar20 + 1) < (this->LegsData).ArrayNum);
  }
  uVar14 = (this->LegDefinitions).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->DebugData).OutputFootLocationsWS,uVar14,Default);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->DebugData).InputFootLocationsWS,uVar14,Default);
  pTVar2 = &(this->DebugData).LegsInfo;
  iVar15 = (this->DebugData).LegsInfo.ArrayNum;
  piVar3 = &(this->DebugData).LegsInfo.ArrayNum;
  if (iVar15 < (int)uVar14) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar14 - iVar15,&pTVar2->AllocatorInstance,piVar3,
               &(this->DebugData).LegsInfo.ArrayMax);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar15) {
      uVar20 = iVar15 - uVar14;
      if (((int)(uVar20 | uVar14) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar20 != 0) {
        pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x10;
        iVar15 = (*piVar3 - uVar20) - uVar14;
        if (iVar15 != 0) {
          memmove(pFVar17,pFVar17 + (longlong)(int)uVar20 * 0x10,(longlong)iVar15 << 4);
        }
        *piVar3 = *piVar3 - uVar20;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,&pTVar2->AllocatorInstance,*piVar3,&(this->DebugData).LegsInfo.ArrayMax);
      }
    }
  }
  this->bIsFirstUpdate = true;
  return;
}

// SolvePelvis @ 14a7308f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_FootPlacement::SolvePelvis
          (FAnimNode_FootPlacement *this,TTransform<double> *__return_storage_ptr__,
          FEvaluationContext *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  float fVar14;
  FScriptContainerElement *pFVar15;
  FLegRuntimeData *pFVar16;
  VectorRegister4Double *pVVar17;
  FScriptContainerElement *pFVar18;
  FLegRuntimeData *pFVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FScriptContainerElement *local_1b0;
  FPelvisOffsetRangeForLimb local_1a8;
  undefined4 uStack_19c;
  double local_198;
  TVector<double>_u_0 local_188 [2];
  TTransform<double> local_148;
  ulonglong local_e8;
  
  dVar32 = __real_3ff0000000000000;
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_148.Rotation.XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[0];
  local_148.Rotation.XY.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[1];
  local_148.Rotation.ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[0];
  local_148.Rotation.ZW.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[1];
  fVar49 = 0.0;
  local_148.Translation.XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0];
  local_148.Translation.XY.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1];
  local_148.Translation.ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0];
  local_148.Translation.ZW.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[1];
  local_148.Scale3D.XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[0];
  local_148.Scale3D.XY.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[1];
  local_148.Scale3D.ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[0];
  local_148.Scale3D.ZW.m128d_f64[1] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[1];
  if ((this->PelvisSettings).HorizontalRebalancingWeight == 0.0) {
    dVar3 = (double)CONCAT44(uStack_19c,local_1a8.DesiredExtension);
    dVar8 = (double)CONCAT44(local_1a8.MinExtension,local_1a8.MaxExtension);
    dVar32 = local_198;
  }
  else {
    pFVar15 = (this->LegsData).AllocatorInstance.Data;
    iVar2 = (this->LegsData).ArrayNum;
    local_1b0 = pFVar15 + 0xc0;
    pFVar18 = pFVar15 + (longlong)iVar2 * 0x6c0;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    while( true ) {
      if ((this->LegsData).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Anim::FootPlacement::FLegRuntimeData,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_1b8);
      }
      if (pFVar15 == pFVar18) break;
      auVar36 = *(undefined1 (*) [16])
                 (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64;
      dVar25 = auVar36._0_8_;
      pFVar15 = pFVar15 + 0x6c0;
      local_188[0]._0_16_ =
           *(undefined1 (*) [16])(this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64;
      dVar7 = *(double *)(local_1b0 + 0x390) *
              (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[0];
      dVar8 = (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar33 = *(undefined1 (*) [16])
                 (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64;
      dVar4 = (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[0] *
              *(double *)(local_1b0 + 0x380);
      dVar5 = (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[1] *
              *(double *)(local_1b0 + 0x388);
      uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar9 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1];
      auVar43._8_4_ = SUB84(dVar5,0);
      auVar43._0_8_ = dVar4;
      auVar43._12_4_ = uVar39;
      auVar27 = blendpd(local_188[0]._0_16_,auVar36,2);
      auVar44._0_8_ = auVar43._8_8_ * local_188[0]._0_8_ - local_188[0]._8_8_ * dVar4;
      auVar44._8_8_ = dVar7 * local_188[0]._8_8_ - dVar25 * dVar5;
      auVar20._8_4_ = SUB84(dVar5,0);
      auVar20._0_8_ = dVar4;
      auVar20._12_4_ = uVar39;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar21 = blendpd(auVar20,auVar6,2);
      auVar22._0_8_ = auVar21._0_8_ * dVar25 - auVar27._0_8_ * dVar7;
      auVar22._8_8_ = auVar21._8_8_ * auVar36._8_8_ - auVar27._8_8_ * dVar8;
      auVar21 = blendpd(auVar44,auVar22,2);
      dVar8 = auVar44._8_8_ + auVar44._8_8_;
      dVar3 = auVar22._0_8_ + auVar22._0_8_;
      uVar39 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar45._0_8_ = auVar21._0_8_ + auVar21._0_8_;
      auVar45._8_8_ = auVar21._8_8_ + auVar21._8_8_;
      auVar34._8_4_ = SUB84(dVar3,0);
      auVar34._0_8_ = dVar8;
      auVar34._12_4_ = uVar39;
      auVar28._8_4_ = SUB84(dVar3,0);
      auVar28._0_8_ = dVar8;
      auVar28._12_4_ = uVar39;
      auVar21 = blendpd(auVar28,auVar45,2);
      auVar35._0_8_ = auVar34._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar8;
      auVar35._8_8_ = auVar45._0_8_ * auVar33._8_8_ - dVar25 * dVar3;
      auVar33 = blendpd(auVar33,auVar36,2);
      dVar1 = *(double *)local_1b0;
      pFVar13 = local_1b0 + 8;
      auVar23._8_4_ = SUB84(auVar35._8_8_,0);
      auVar23._0_8_ = auVar35._0_8_;
      auVar23._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
      auVar29._0_8_ = auVar21._0_8_ * dVar25 - auVar33._0_8_ * auVar45._0_8_;
      auVar29._8_8_ = auVar21._8_8_ * auVar36._8_8_ - auVar33._8_8_ * auVar45._8_8_;
      local_188[0]._16_8_ = *(undefined8 *)(local_1b0 + 0x10);
      local_1b0 = local_1b0 + 0x6c0;
      auVar36 = blendpd(auVar35,auVar29,2);
      dVar25 = dVar32 / (double)iVar2;
      uVar11 = (double)uVar11 +
               ((dVar8 * dVar9 + dVar4 + auVar23._8_8_ +
                (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0]) - dVar1) *
               dVar25;
      uVar12 = (double)uVar12 +
               ((dVar3 * dVar9 + dVar5 + auVar29._0_8_ +
                (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1]) -
               *(double *)pFVar13) * dVar25;
      uVar10 = (double)uVar10 +
               ((auVar45._0_8_ * dVar9 + dVar7 + auVar36._0_8_ +
                (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0]) -
               (double)local_188[0]._16_8_) * dVar25;
    }
    dVar8 = (param_1->ApproachDirCS).field0_0x0._s_0.X;
    dVar3 = (param_1->ApproachDirCS).field0_0x0._s_0.Y;
    dVar4 = (param_1->ApproachDirCS).field0_0x0._s_0.Z;
    dVar32 = (double)(this->PelvisSettings).HorizontalRebalancingWeight;
    dVar5 = dVar3 * (double)uVar12 + dVar8 * (double)uVar11 + dVar4 * (double)uVar10;
    dVar8 = ((double)uVar11 - dVar5 * dVar8) * dVar32;
    local_148.Translation.XY.m128d_f64[0] = dVar8 + local_148.Translation.XY.m128d_f64[0];
    dVar3 = ((double)uVar12 - dVar5 * dVar3) * dVar32;
    dVar32 = ((double)uVar10 - dVar5 * dVar4) * dVar32;
    local_148.Translation.XY.m128d_f64[1] = dVar3 + local_148.Translation.XY.m128d_f64[1];
    local_188[0]._16_8_ = dVar32 + local_148.Translation.ZW.m128d_f64[0];
    local_148.Translation.ZW.m128d_f64[1] = 0.0;
    local_148.Translation.ZW.m128d_f64[0] = (double)local_188[0]._16_8_;
  }
  pFVar16 = (FLegRuntimeData *)(this->LegsData).AllocatorInstance.Data;
  iVar2 = (this->LegsData).ArrayNum;
  local_1b0 = (FScriptContainerElement *)CONCAT44(local_1b0._4_4_,__real_ff7fc99e);
  pVVar17 = &(pFVar16->AlignedFootTransformRS).Translation;
  pFVar19 = pFVar16 + iVar2;
  fVar47 = __real_7f7fc99e;
  fVar50 = __real_7f7fc99e;
  fVar14 = __real_ff7fc99e;
  while( true ) {
    if ((this->LegsData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Anim::FootPlacement::FLegRuntimeData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_1b8);
      fVar14 = local_1b0._0_4_;
    }
    if (pFVar16 == pFVar19) break;
    auVar36 = *(undefined1 (*) [16])
               (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64;
    dVar25 = auVar36._0_8_;
    auVar33 = *(undefined1 (*) [16])
               (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64;
    auVar21 = *(undefined1 (*) [16])
               (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64;
    dVar7 = (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[0] *
            (pVVar17->XY).m128d_f64[0];
    dVar9 = (this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64[1] *
            (pVVar17->XY).m128d_f64[1];
    uVar39 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar46._0_8_ =
         (pVVar17->ZW).m128d_f64[0] *
         (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[0];
    auVar46._8_8_ = (this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar1 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1];
    auVar40._8_4_ = SUB84(dVar9,0);
    auVar40._0_8_ = dVar7;
    auVar40._12_4_ = uVar39;
    auVar30 = blendpd(auVar33,auVar36,2);
    auVar41._0_8_ = auVar40._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar7;
    auVar41._8_8_ = auVar46._0_8_ * auVar33._8_8_ - dVar25 * dVar9;
    auVar33._8_4_ = SUB84(dVar9,0);
    auVar33._0_8_ = dVar7;
    auVar33._12_4_ = uVar39;
    auVar33 = blendpd(auVar33,auVar46,2);
    auVar27._0_8_ = auVar33._0_8_ * dVar25 - auVar30._0_8_ * auVar46._0_8_;
    auVar27._8_8_ = auVar33._8_8_ * auVar36._8_8_ - auVar30._8_8_ * auVar46._8_8_;
    auVar33 = blendpd(auVar41,auVar27,2);
    dVar4 = auVar41._8_8_ + auVar41._8_8_;
    dVar5 = auVar27._0_8_ + auVar27._0_8_;
    uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar42._0_8_ = auVar33._0_8_ + auVar33._0_8_;
    auVar42._8_8_ = auVar33._8_8_ + auVar33._8_8_;
    auVar37._8_4_ = SUB84(dVar5,0);
    auVar37._0_8_ = dVar4;
    auVar37._12_4_ = uVar39;
    auVar31._8_4_ = SUB84(dVar5,0);
    auVar31._0_8_ = dVar4;
    auVar31._12_4_ = uVar39;
    auVar33 = blendpd(auVar31,auVar42,2);
    auVar38._0_8_ = auVar37._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar4;
    auVar38._8_8_ = auVar42._0_8_ * auVar21._8_8_ - dVar25 * dVar5;
    auVar30._8_4_ = SUB84(auVar38._8_8_,0);
    auVar30._0_8_ = auVar38._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar27 = blendpd(auVar21,auVar36,2);
    auVar21._0_8_ = auVar33._0_8_ * dVar25 - auVar27._0_8_ * auVar42._0_8_;
    auVar21._8_8_ = auVar33._8_8_ * auVar36._8_8_ - auVar27._8_8_ * auVar42._8_8_;
    auVar36 = blendpd(auVar38,auVar21,2);
    dVar5 = dVar5 * dVar1 + dVar9 + auVar21._0_8_ +
            (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1];
    local_188[0]._16_8_ =
         auVar42._0_8_ * dVar1 + auVar46._0_8_ + auVar36._0_8_ +
         (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0];
    local_188[0]._8_4_ = SUB84(dVar5,0);
    local_188[0]._0_8_ =
         dVar4 * dVar1 + dVar7 + auVar30._8_8_ +
         (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0];
    local_188[0]._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    FindPelvisOffsetRangeForLimb
              (this,param_1,pFVar16,(TVector<double> *)&local_188[0]._s_0,&local_148,&local_1a8);
    pFVar16 = pFVar16 + 1;
    pVVar17 = pVVar17 + 0x36;
    fVar14 = local_1a8.DesiredExtension;
    if (fVar47 <= local_1a8.DesiredExtension) {
      fVar14 = fVar47;
    }
    fVar47 = fVar14;
    fVar14 = local_1a8.MinExtension;
    if (local_1a8.MinExtension <= local_1b0._0_4_) {
      fVar14 = local_1b0._0_4_;
    }
    fVar49 = fVar49 + local_1a8.DesiredExtension / (float)iVar2;
    fVar48 = local_1a8.MaxExtension;
    if (fVar50 <= local_1a8.MaxExtension) {
      fVar48 = fVar50;
    }
    fVar50 = fVar48;
    local_1b0 = (FScriptContainerElement *)CONCAT44(local_1b0._4_4_,fVar14);
  }
  fVar48 = fVar47 + ___real_bd4ccccd;
  fVar24 = (fVar50 - fVar47) + (fVar49 - fVar47);
  if (__real_322bcc77 < (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar48 = ((fVar50 - fVar47) * (fVar49 - fVar47)) / fVar24 + fVar48;
  }
  if (fVar50 <= fVar48) {
    fVar48 = fVar50;
  }
  if (fVar48 <= fVar14) {
    fVar48 = fVar14;
  }
  dVar26 = (double)(float)((uint)fVar48 ^ __xmm_80000000800000008000000080000000);
  dVar4 = (param_1->ApproachDirCS).field0_0x0._s_0.Y;
  dVar5 = (param_1->ApproachDirCS).field0_0x0._s_0.X;
  dVar7 = (param_1->ApproachDirCS).field0_0x0._s_0.Z;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
  dVar9 = (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
       (this->PelvisData).InputPose.FKTransformCS.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar9;
  dVar25 = (__return_storage_ptr__->Translation).XY.m128d_f64[1];
  dVar9 = (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  dVar1 = (__return_storage_ptr__->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
       (__return_storage_ptr__->Translation).XY.m128d_f64[0] + dVar8 + dVar26 * dVar5;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar25 + dVar3 + dVar26 * dVar4;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar32 + dVar26 * dVar7 + dVar9;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1 + 0.0;
  return __return_storage_ptr__;
}

// UpdateInternal @ 14a731070

void __thiscall
FAnimNode_FootPlacement::UpdateInternal
          (FAnimNode_FootPlacement *this,FAnimationUpdateContext *param_1)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  
  FAnimNode_SkeletalControlBase::UpdateInternal((FAnimNode_SkeletalControlBase *)this,param_1);
  if ((((this->bIsFirstUpdate == false) && (sVar3 = (this->UpdateCounter).Counter, sVar3 != -1)) &&
      ((this->UpdateCounter).LastSyncronizedFrame != 0xffffffffffffffff)) &&
     (sVar3 != *(short *)(param_1->_padding_ + 0x5b0))) {
    sVar2 = (this->UpdateCounter).Counter + 1;
    sVar3 = 0;
    if (sVar2 != -1) {
      sVar3 = sVar2;
    }
    if (((sVar3 == -1) || (GFrameCounter == 0xffffffffffffffff)) ||
       (sVar3 != *(short *)(param_1->_padding_ + 0x5b0))) {
      ResetRuntimeData(this);
    }
  }
  lVar1 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar1 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar1 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar1 + 0x5b2);
  this->CachedDeltaTime = param_1->DeltaTime + this->CachedDeltaTime;
  return;
}

// UpdatePelvisInterpolationRootSpace @ 14a731180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_FootPlacement::UpdatePelvisInterpolationRootSpace
          (FAnimNode_FootPlacement *this,TTransform<double> *__return_storage_ptr__,
          FEvaluationContext *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined4 uVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8 [8];
  
  dVar1 = (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar22 = (this->PelvisData).InputPose.RootTransformCS.Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar18 = (this->PelvisData).InputPose.RootTransformCS.Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar10 = (this->PelvisData).InputPose.FKTransformCS.Translation.ZW.m128d_f64[0] -
           (this->PelvisData).InputPose.RootTransformCS.Translation.ZW.m128d_f64[0];
  auVar19._8_4_ = SUB84(dVar22,0);
  auVar19._0_8_ = dVar1;
  auVar19._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  dVar21 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[0] -
           (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[0];
  dVar28 = (this->PelvisData).InputPose.FKTransformCS.Translation.XY.m128d_f64[1] -
           (this->PelvisData).InputPose.RootTransformCS.Translation.XY.m128d_f64[1];
  uVar30 = (undefined4)((ulonglong)dVar28 >> 0x20);
  auVar15._8_4_ = SUB84(dVar18,0);
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar20 = blendpd(auVar19,auVar15,2);
  auVar35._8_4_ = SUB84(dVar28,0);
  auVar35._0_8_ = dVar21;
  auVar35._12_4_ = uVar30;
  auVar17._8_4_ = SUB84(dVar2,0);
  auVar17._0_8_ = dVar22;
  auVar17._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar14._8_4_ = SUB84(dVar28,0);
  auVar14._0_8_ = dVar21;
  auVar14._12_4_ = uVar30;
  auVar36._0_8_ = auVar35._8_8_ * dVar1 - dVar22 * dVar21;
  auVar36._8_8_ = dVar10 * dVar22 - auVar17._8_8_ * dVar28;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = dVar10;
  auVar15 = blendpd(auVar14,auVar24,2);
  auVar29._8_4_ = SUB84(auVar36._8_8_,0);
  auVar29._0_8_ = auVar36._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar16._0_8_ = auVar15._0_8_ * dVar2 - auVar20._0_8_ * dVar10;
  auVar16._8_8_ = auVar15._8_8_ * dVar18 - auVar20._8_8_ * 0.0;
  dVar27 = auVar29._8_8_ + auVar29._8_8_;
  dVar31 = auVar16._0_8_ + auVar16._0_8_;
  auVar15 = blendpd(auVar36,auVar16,2);
  uVar30 = SUB84(dVar31,0);
  auVar33._8_4_ = uVar30;
  auVar33._0_8_ = dVar27;
  uVar32 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar33._12_4_ = uVar32;
  auVar11._8_4_ = uVar30;
  auVar11._0_8_ = dVar27;
  auVar11._12_4_ = uVar32;
  auVar23._8_4_ = uVar30;
  auVar23._0_8_ = dVar27;
  auVar23._12_4_ = uVar32;
  auVar37._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar37._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar15 = *(undefined1 (*) [16])(this->PelvisData).InputPose.RootTransformCS.Scale3D.XY.m128d_f64;
  auVar34._0_8_ = auVar33._8_8_ * dVar1 - dVar27 * dVar22;
  auVar34._8_8_ = auVar37._0_8_ * dVar22 - auVar11._8_8_ * dVar2;
  auVar24 = blendpd(auVar23,auVar37,2);
  auVar12._8_4_ = SUB84(auVar37._8_8_,0);
  auVar12._0_8_ = auVar37._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar25._0_8_ = auVar24._0_8_ * dVar2 - auVar37._0_8_ * auVar20._0_8_;
  auVar25._8_8_ = auVar24._8_8_ * dVar18 - auVar12._8_8_ * auVar20._8_8_;
  auVar24 = *(undefined1 (*) [16])(this->PelvisData).InputPose.RootTransformCS.Scale3D.ZW.m128d_f64;
  lVar7 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
  lVar8 = -(ulonglong)
           ((double)CONCAT44(auVar15._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar15._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar9 = -(ulonglong)
           ((double)CONCAT44(auVar15._12_4_ & _UNK_15061cc8c,auVar15._8_4_ & _UNK_15061cc88) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar13._8_4_ = SUB84(auVar34._8_8_,0);
  auVar13._0_8_ = auVar34._0_8_;
  auVar13._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar20._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar20._0_8_ = auVar24._0_8_;
  auVar20._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
  dVar2 = (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar17._4_4_,
                           ~(uint)lVar8 & auVar17._0_4_) *
          (dVar27 * dVar18 + dVar21 + auVar13._8_8_);
  dVar1 = (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar17._12_4_,
                           ~(uint)lVar9 & auVar17._8_4_) *
          (dVar31 * dVar18 + dVar28 + auVar25._0_8_);
  auVar24 = blendpd(auVar34,auVar25,2);
  auVar4._4_8_ = auVar25._8_8_;
  auVar4._0_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar26._0_8_ = auVar4._0_8_ << 0x20;
  auVar26._8_4_ = SUB84(dVar1,0);
  auVar26._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = (param_2->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_2->Translation).XY.m128d_f64[0] - dVar2;
  dVar28 = (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar15._4_4_,
                            ~(uint)lVar7 & auVar15._0_4_) *
           (auVar37._0_8_ * dVar18 + dVar10 + auVar24._0_8_);
  dVar22 = (param_2->Translation).XY.m128d_f64[1] - auVar26._8_8_;
  dVar21 = (param_2->Translation).ZW.m128d_f64[0] - dVar28;
  dVar18 = dVar22 * dVar22 + dVar1 * dVar1 + dVar21 * dVar21;
  local_158._s_0.Z = dVar21;
  uVar5 = dVar1;
  uVar6 = dVar22;
  if ((((double)(this->PelvisData).MaxOffsetSqrd < dVar18) &&
      (dVar10 = (double)(this->PelvisSettings).MaxOffset,
      local_158._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
      __real_3f1a36e2e0000000 <= dVar10)) &&
     (local_158._s_0.Z = dVar21, uVar5 = dVar1, uVar6 = dVar22, dVar10 * dVar10 < dVar18)) {
    dVar10 = (__real_3ff0000000000000 / SQRT(dVar18)) * dVar10;
    local_158._s_0.Z = dVar10 * dVar21;
    uVar5 = dVar1 * dVar10;
    uVar6 = dVar10 * dVar22;
  }
  local_138._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_138._s_0.Y = _UNK_150689688;
  local_118._s_0.Z = __real_bff0000000000000;
  local_d8[0]._0_8_ = (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X;
  local_d8[0]._8_8_ = (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y;
  local_118._s_0.X = ___xmm_bff0000000000000bff0000000000000;
  local_118._s_0.Y = _UNK_15076c718;
  local_d8[0]._16_8_ = (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z;
  local_138._s_0.Z = __real_3ff0000000000000;
  local_f8._8_4_ = (int)uVar6;
  local_f8._0_8_ = uVar5;
  local_f8._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  local_f8._s_0.Z = local_158._s_0.Z;
  UKismetMathLibrary::VectorSpringInterp
            ((TVector<double> *)&local_158._s_0,(TVector<double> *)&local_d8[0]._s_0,
             (TVector<double> *)&local_f8._s_0,
             &(this->PelvisData).Interpolation.PelvisTranslationSpringState,
             (this->PelvisSettings).LinearStiffness,(this->PelvisSettings).LinearDamping,
             param_1->UpdateDeltaTime,__real_3f800000,0.0,false,(TVector<double> *)&local_118._s_0,
             (TVector<double> *)&local_138._s_0,false);
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X = local_158._s_0.X;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y = local_158._s_0.Y;
  (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z = local_158._s_0.Z;
  dVar22 = auVar26._8_8_ +
           (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Y;
  dVar1 = (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.Z;
  auVar3._8_4_ = SUB84(dVar22,0);
  auVar3._0_8_ = dVar2 + (this->PelvisData).Interpolation.PelvisTranslationOffset.field0_0x0._s_0.X;
  auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar3;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar28 + dVar1;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  return __return_storage_ptr__;
}

// UpdatePlantOffsetInterpolation @ 14a731630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
FAnimNode_FootPlacement::UpdatePlantOffsetInterpolation
          (FAnimNode_FootPlacement *this,TTransform<double> *__return_storage_ptr__,
          FEvaluationContext *param_1,FInterpolationData *param_2)

{
  float fVar1;
  double dVar2;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TQuat<double> local_48 [2];
  
  fVar1 = __real_3f800000;
  local_c8._s_0.X = (param_2->UnalignedFootOffset).Translation.XY.m128d_f64[0];
  local_c8._s_0.Y = (param_2->UnalignedFootOffset).Translation.XY.m128d_f64[1];
  local_c8._s_0.Z = (param_2->UnalignedFootOffset).Translation.ZW.m128d_f64[0];
  local_88._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_88._s_0.Y = _UNK_150689688;
  local_88._s_0.Z = __real_3ff0000000000000;
  local_68._s_0.Z = __real_bff0000000000000;
  local_68._s_0.X = ___xmm_bff0000000000000bff0000000000000;
  local_68._s_0.Y = _UNK_15076c718;
  local_e8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_e8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_e8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  UKismetMathLibrary::VectorSpringInterp
            ((TVector<double> *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,
             (TVector<double> *)&local_e8._s_0,&param_2->PlantOffsetTranslationSpringState,
             (this->InterpolationSettings).UnplantLinearStiffness,
             (this->InterpolationSettings).UnplantLinearDamping,param_1->UpdateDeltaTime,
             __real_3f800000,0.0,false,(TVector<double> *)&local_68._s_0,
             (TVector<double> *)&local_88._s_0,false);
  local_e8._s_0.X = (param_2->UnalignedFootOffset).Rotation.XY.m128d_f64[0];
  local_e8._s_0.Y = (param_2->UnalignedFootOffset).Rotation.XY.m128d_f64[1];
  local_e8._s_0.Z = (param_2->UnalignedFootOffset).Rotation.ZW.m128d_f64[0];
  dStack_d0 = (param_2->UnalignedFootOffset).Rotation.ZW.m128d_f64[1];
  local_c8._s_0.X = UE::Math::TQuat<double>::Identity.X;
  local_c8._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
  local_c8._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
  dStack_b0 = UE::Math::TQuat<double>::Identity.W;
  UKismetMathLibrary::QuaternionSpringInterp
            (local_48,(TQuat<double> *)&local_e8._s_0,(TQuat<double> *)&local_c8._s_0,
             &param_2->PlantOffsetRotationSpringState,
             (this->InterpolationSettings).UnplantAngularStiffness,
             (this->InterpolationSettings).UnplantAngularDamping,param_1->UpdateDeltaTime,fVar1,0.0,
             false);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_48[0].X;
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_48[0].Y;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_48[0].Z;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_48[0].W;
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_a8._s_0.X;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_a8._s_0.Y;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_a8._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar2 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// UpdatePlantingPlaneInterpolation @ 14a731830

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAnimNode_FootPlacement::UpdatePlantingPlaneInterpolation
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,TTransform<double> *param_2,
          TTransform<double> *param_3,float param_4,TPlane<double> *param_5,FInputPoseData *param_6,
          FInterpolationData *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  double dVar12;
  float fVar13;
  bool bVar14;
  TVector<double> *pTVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  uint uVar47;
  TVector<double>_u_0 local_178;
  TQuat<double> local_158;
  TVector<double>_u_0 local_138;
  double dStack_120;
  TVector<double>_u_0 local_118;
  double dStack_100;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [6];
  
  local_f8.Z = (param_1->ApproachDirWS).field0_0x0._s_0.Z;
  dVar41 = (param_1->ApproachDirWS).field0_0x0._s_0.X;
  dVar24 = (param_1->ApproachDirWS).field0_0x0._s_0.Y;
  local_118._s_0.X = (double)param_5->_padding_;
  local_118._s_0.Y = (double)param_5->_padding_;
  local_118._s_0.Z = (double)param_5->_padding_;
  dStack_100 = param_5->W;
  dVar18 = (param_2->Translation).ZW.m128d_f64[0];
  local_178._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_178._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_178._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_d8[0].X = dVar41;
  local_d8[0].Y = dVar24;
  if ((this->TraceSettings).bDisableComplexTrace == false) {
    local_158._0_16_ = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
    local_158.Z = dVar18;
    bVar14 = UE::Anim::FootPlacement::FindPlantTraceImpact
                       (param_1,&this->TraceSettings,true,(TVector<double> *)&local_158,
                        (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_138._s_0);
    uVar40 = SUB84(local_138._s_0.X,0);
    uVar37 = (undefined4)((ulonglong)local_138._0_8_ >> 0x20);
    uVar38 = SUB84(local_138._s_0.Y,0);
    uVar39 = (undefined4)((ulonglong)local_138._8_8_ >> 0x20);
    dVar32 = local_178._s_0.Y * local_138._s_0.Y + local_178._s_0.X * local_138._s_0.X;
    dVar18 = local_178._s_0.Z * local_138._s_0.Z;
    local_158.Z = local_138._s_0.Z;
  }
  else {
    local_138._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    local_138._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
    local_138._s_0.Z = dVar18;
    bVar14 = UE::Anim::FootPlacement::FindPlantTraceImpact
                       (param_1,&this->TraceSettings,false,(TVector<double> *)&local_138._s_0,
                        (TVector<double> *)&local_178._s_0,(TVector<double> *)&local_158);
    uVar40 = local_158.X._0_4_;
    uVar37 = local_158.X._4_4_;
    uVar38 = local_158.Y._0_4_;
    uVar39 = local_158.Y._4_4_;
    dVar32 = local_178._s_0.Y * local_158.Y + local_178._s_0.X * local_158.X;
    dVar18 = local_178._s_0.Z * local_158.Z;
  }
  uVar46 = (uint)__xmm_80000000000000008000000000000000;
  uVar47 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  auVar35._0_8_ = dVar32 + dVar18;
  auVar35._8_8_ = 0;
  *(undefined4 *)&param_5->_padding_ = uVar40;
  *(undefined4 *)((longlong)&param_5->_padding_ + 4) = uVar37;
  *(undefined4 *)&param_5->_padding_ = uVar38;
  *(undefined4 *)((longlong)&param_5->_padding_ + 4) = uVar39;
  param_5->_padding_ = (longlong)local_158.Z;
  param_5->W = auVar35._0_8_;
  dVar18 = auVar35._0_8_;
  if ((this->CharacterData).bIsOnGround == false) {
    auVar35 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64;
    local_158._0_16_ = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64
    ;
    dVar7 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[0] *
            (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[0];
    dVar8 = (param_1->OwningComponentToWorld).Scale3D.XY.m128d_f64[1] *
            (this->PelvisData).InputPose.IKRootTransformCS.Translation.XY.m128d_f64[1];
    uVar40 = (undefined4)((ulonglong)dVar8 >> 0x20);
    dVar27 = (this->PelvisData).InputPose.IKRootTransformCS.Translation.ZW.m128d_f64[0] *
             (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[0];
    dVar32 = (param_1->OwningComponentToWorld).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar12 = (param_1->OwningComponentToWorld).Rotation.ZW.m128d_f64[1];
    auVar42._8_4_ = SUB84(dVar8,0);
    auVar42._0_8_ = dVar7;
    auVar42._12_4_ = uVar40;
    dVar18 = auVar35._0_8_;
    auVar25 = blendpd((undefined1  [16])local_158._0_16_,auVar35,2);
    auVar43._0_8_ = auVar42._8_8_ * local_158.X - local_158.Y * dVar7;
    auVar43._8_8_ = dVar27 * local_158.Y - dVar18 * dVar8;
    auVar44._8_4_ = SUB84(dVar8,0);
    auVar44._0_8_ = dVar7;
    auVar44._12_4_ = uVar40;
    auVar19._8_4_ = SUB84(dVar32,0);
    auVar19._0_8_ = dVar27;
    auVar19._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar19 = blendpd(auVar44,auVar19,2);
    auVar29._0_8_ = auVar19._0_8_ * dVar18 - auVar25._0_8_ * dVar27;
    auVar29._8_8_ = auVar19._8_8_ * auVar35._8_8_ - auVar25._8_8_ * dVar32;
    auVar19 = *(undefined1 (*) [16])(param_1->OwningComponentToWorld).Rotation.XY.m128d_f64;
    auVar44 = blendpd(auVar43,auVar29,2);
    dVar32 = auVar43._8_8_ + auVar43._8_8_;
    dVar26 = auVar29._0_8_ + auVar29._0_8_;
    uVar40 = (undefined4)((ulonglong)dVar26 >> 0x20);
    auVar45._0_8_ = auVar44._0_8_ + auVar44._0_8_;
    auVar45._8_8_ = auVar44._8_8_ + auVar44._8_8_;
    auVar33._8_4_ = SUB84(dVar26,0);
    auVar33._0_8_ = dVar32;
    auVar33._12_4_ = uVar40;
    auVar28._8_4_ = SUB84(dVar26,0);
    auVar28._0_8_ = dVar32;
    auVar28._12_4_ = uVar40;
    auVar29 = blendpd(auVar28,auVar45,2);
    auVar44 = blendpd(auVar19,auVar35,2);
    auVar34._0_8_ = auVar33._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar32;
    auVar34._8_8_ = auVar45._0_8_ * auVar19._8_8_ - dVar18 * dVar26;
    uVar1 = *(undefined8 *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 0x10);
    auVar25._8_4_ = SUB84(auVar34._8_8_,0);
    auVar25._0_8_ = auVar34._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
    auVar30._0_8_ = auVar29._0_8_ * dVar18 - auVar44._0_8_ * auVar45._0_8_;
    auVar30._8_8_ = auVar29._8_8_ * auVar35._8_8_ - auVar44._8_8_ * auVar45._8_8_;
    uVar2 = *(undefined8 *)((longlong)&(param_1->ApproachDirWS).field0_0x0 + 8);
    uVar21 = (uint)uVar1 ^ uVar46;
    uVar22 = (uint)((ulonglong)uVar1 >> 0x20) ^ uVar47;
    dVar23 = (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar47,(uint)uVar2 ^ uVar46);
    auVar35 = blendpd(auVar34,auVar30,2);
    dVar7 = dVar32 * dVar12 + dVar7 + auVar25._8_8_ +
            (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[0];
    dVar18 = dVar26 * dVar12 + dVar8 + auVar30._0_8_ +
             (param_1->OwningComponentToWorld).Translation.XY.m128d_f64[1];
    uVar1 = *(undefined8 *)&(param_1->ApproachDirWS).field0_0x0;
    auVar9._4_8_ = auVar30._0_8_;
    auVar9._0_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar20._0_8_ = auVar9._0_8_ << 0x20;
    auVar20._8_4_ = SUB84(dVar18,0);
    auVar20._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar26 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar47,(uint)uVar1 ^ uVar46);
    dVar18 = 0.0;
    dVar32 = (param_1->OwningComponentToWorld).Translation.ZW.m128d_f64[0];
    param_5->_padding_ = (longlong)dVar26;
    param_5->_padding_ = (longlong)dVar23;
    param_5->_padding_ = CONCAT44(uVar22,uVar21);
    param_5->W = auVar20._8_8_ * dVar23 + dVar7 * dVar26 +
                 (auVar45._0_8_ * dVar12 + dVar27 + auVar35._0_8_ + dVar32) *
                 (double)CONCAT44(uVar22,uVar21);
  }
  fVar13 = __real_3f800000;
  if (((this->InterpolationSettings).bEnableFloorInterpolation != false) &&
     (this->bIsFirstUpdate == false)) {
    dVar7 = (param_2->Translation).XY.m128d_f64[0];
    dVar26 = (param_2->Translation).XY.m128d_f64[1];
    uVar3 = param_5->_padding_;
    uVar5 = param_5->_padding_;
    uVar4 = param_5->_padding_;
    uVar6 = param_5->W;
    auVar10._4_8_ = dVar18;
    auVar10._0_4_ = (int)((ulonglong)uVar3 >> 0x20);
    auVar31._0_8_ = auVar10._0_8_ << 0x20;
    auVar31._8_4_ = (int)uVar5;
    auVar31._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    auVar11._4_8_ = auVar35._8_8_;
    auVar11._0_4_ = (int)((ulonglong)uVar4 >> 0x20);
    auVar36._0_8_ = auVar11._0_8_ << 0x20;
    auVar36._8_4_ = (int)uVar6;
    auVar36._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
    dVar18 = (param_3->Translation).ZW.m128d_f64[0];
    local_158.Z = (param_2->Translation).ZW.m128d_f64[0];
    dVar32 = (auVar36._8_8_ -
             (dVar26 * auVar31._8_8_ + dVar7 * (double)uVar3 + local_158.Z * (double)uVar4)) /
             (dVar24 * auVar31._8_8_ + dVar41 * (double)uVar3 + local_f8.Z * (double)uVar4);
    dVar26 = dVar24 * dVar32 + dVar26;
    dVar7 = dVar41 * dVar32 + dVar7;
    dVar32 = local_f8.Z * dVar32 + local_158.Z;
    dVar41 = local_118._s_0.X * local_d8[0].X + local_118._s_0.Y * dVar24 +
             local_118._s_0.Z * local_f8.Z;
    dVar18 = ((dStack_100 -
              ((param_3->Translation).XY.m128d_f64[0] * local_118._s_0.X +
               (param_3->Translation).XY.m128d_f64[1] * local_118._s_0.Y + dVar18 * local_118._s_0.Z
              )) / dVar41) * local_f8.Z + dVar18;
    dVar41 = ((dStack_100 -
              ((param_2->Translation).XY.m128d_f64[0] * local_118._s_0.X +
               (param_2->Translation).XY.m128d_f64[1] * local_118._s_0.Y +
              local_158.Z * local_118._s_0.Z)) / dVar41) * local_f8.Z + local_158.Z;
    if ((float)((uint)(float)(dVar41 - dVar32) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        (float)((uint)(float)(dVar18 - dVar32) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      dVar18 = dVar41;
    }
    fVar16 = (float)dVar18;
    if ((this->CharacterData).bIsOnGround != false) {
      uVar1 = *(undefined8 *)
               ((longlong)&(this->CharacterData).ComponentMoveDeltaWS.field0_0x0 + 0x10);
      uVar21 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar22 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      dVar24 = (double)CONCAT44(uVar22,uVar21);
      dVar18 = (double)fVar16;
      dVar41 = (double)(float)(dVar32 - dVar18);
      if ((float)(dVar32 - dVar18) <= 0.0) {
        dVar24 = (double)CONCAT44(uVar22 ^ uVar47,uVar21 ^ uVar46);
        if (dVar24 <= dVar41) {
          dVar24 = dVar41;
        }
        fVar16 = (float)(dVar24 + dVar18);
      }
      else {
        if (dVar24 <= dVar41) {
          dVar41 = dVar24;
        }
        fVar16 = (float)(dVar41 + dVar18);
      }
    }
    local_138._s_0.X = dVar7;
    local_138._s_0.Y = dVar26;
    local_f8.Z = local_158.Z;
    fVar17 = UKismetMathLibrary::FloatSpringInterp
                       (fVar16,(float)dVar32,&param_7->GroundHeightSpringState,
                        (this->InterpolationSettings).FloorLinearStiffness,
                        (this->InterpolationSettings).FloorLinearDamping,param_1->UpdateDeltaTime,
                        __real_3f800000,0.0,false,__real_bf800000,__real_3f800000,false);
    fVar16 = (this->TraceSettings).MaxGroundPenetration;
    dVar41 = (double)fVar17;
    local_138._s_0.Z = dVar41;
    if ((0.0 <= fVar16) && (bVar14 != false)) {
      local_158.Z = (double)param_5->_padding_;
      pTVar15 = &param_1->ApproachDirCS;
      local_158.X = (double)param_5->_padding_;
      local_158.Y = (double)param_5->_padding_;
      local_158.W = local_178._s_0.Y * (double)param_5->_padding_ +
                    local_178._s_0.X * (double)param_5->_padding_ +
                    local_178._s_0.Z * (double)param_5->_padding_;
      fVar17 = UE::Anim::FootPlacement::GetDistanceToPlaneAlongDirection
                         ((TVector<double> *)&local_138._s_0,(TPlane<double> *)&local_158,pTVar15);
      fVar16 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000) - fVar16;
      if (0.0 < fVar16) {
        dVar24 = (double)fVar16;
        dVar7 = dVar7 - dVar24 * (pTVar15->field0_0x0)._s_0.X;
        dVar26 = dVar26 - dVar24 * (pTVar15->field0_0x0)._s_0.Y;
        dVar41 = dVar41 - dVar24 * (pTVar15->field0_0x0)._s_0.Z;
      }
    }
    UE::Math::TQuat<double>::FindBetweenNormals
              (local_d8,(TVector<double> *)&local_118._s_0,(TVector<double> *)param_5);
    local_158.Y = local_d8[0].Y;
    local_158.X = local_d8[0].X;
    local_158.Z = local_d8[0].Z;
    local_158.W = local_d8[0].W;
    local_138._s_0.X = UE::Math::TQuat<double>::Identity.X;
    local_138._s_0.Y = UE::Math::TQuat<double>::Identity.Y;
    local_138._s_0.Z = UE::Math::TQuat<double>::Identity.Z;
    dStack_120 = UE::Math::TQuat<double>::Identity.W;
    UKismetMathLibrary::QuaternionSpringInterp
              (&local_f8,(TQuat<double> *)&local_138._s_0,&local_158,
               &param_7->GroundRotationSpringState,
               (this->InterpolationSettings).FloorAngularStiffness,
               (this->InterpolationSettings).FloorAngularDamping,param_1->UpdateDeltaTime,fVar13,0.0
               ,false);
    dVar32 = local_118._s_0.Z * local_f8.Y - local_118._s_0.Y * local_f8.Z;
    dVar32 = dVar32 + dVar32;
    dVar8 = local_118._s_0.X * local_f8.Z - local_118._s_0.Z * local_f8.X;
    dVar18 = local_118._s_0.Y * local_f8.X - local_118._s_0.X * local_f8.Y;
    dVar8 = dVar8 + dVar8;
    dVar18 = dVar18 + dVar18;
    dVar24 = (dVar18 * local_f8.Y - dVar8 * local_f8.Z) + local_f8.W * dVar32 + local_118._s_0.X;
    dVar27 = (dVar32 * local_f8.Z - dVar18 * local_f8.X) + local_f8.W * dVar8 + local_118._s_0.Y;
    dVar18 = (dVar8 * local_f8.X - dVar32 * local_f8.Y) + dVar18 * local_f8.W + local_118._s_0.Z;
    param_5->_padding_ = (longlong)dVar24;
    param_5->_padding_ = (longlong)dVar27;
    param_5->_padding_ = (longlong)dVar18;
    param_5->W = dVar27 * dVar26 + dVar24 * dVar7 + dVar18 * dVar41;
  }
  return;
}

// WantsToPlant @ 14a7320b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FAnimNode_FootPlacement::WantsToPlant
          (FAnimNode_FootPlacement *this,FEvaluationContext *param_1,FInputPoseData *param_2)

{
  float fVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  pTVar2 = CVarAnimNodeFootPlacementEnableLock.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 1;
      goto LAB_14a7320e7;
    }
  }
  lVar4 = 0;
LAB_14a7320e7:
  if ((((pTVar2->ShadowedValue[lVar4] != false) && ((this->PlantSettings).LockType != Unlocked)) &&
      (__real_322bcc77 < (float)((uint)param_2->LockAlpha & __xmm_7fffffff7fffffff7fffffff7fffffff))
      ) && ((fVar1 = (this->PlantSettings).DistanceToGround,
            param_2->DistanceToPlant <= fVar1 && fVar1 != param_2->DistanceToPlant &&
            (fVar1 = (this->PlantSettings).SpeedThreshold,
            param_2->Speed <= fVar1 && fVar1 != param_2->Speed)))) {
    return true;
  }
  return false;
}

