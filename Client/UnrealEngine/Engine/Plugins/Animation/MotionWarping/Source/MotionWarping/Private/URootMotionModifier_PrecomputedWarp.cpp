// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 8

// StaticClass @ 14ceff360

UClass * __cdecl URootMotionModifier_PrecomputedWarp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_PrecomputedWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_PrecomputedWarp,0x600,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_PrecomputedWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_PrecomputedWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton;
}

// URootMotionModifier_PrecomputedWarp @ 14cf04d50

URootMotionModifier_PrecomputedWarp * __thiscall
URootMotionModifier_PrecomputedWarp::URootMotionModifier_PrecomputedWarp
          (URootMotionModifier_PrecomputedWarp *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined8 uVar27;
  double dVar28;
  
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->_padding_ = (longlong)&___7URootMotionModifier_PrecomputedWarp__6B_;
  (this->TranslationWarpingCurve).CurveType = FromRootMotionTranslation;
  (this->TranslationWarpingCurve).StartRatio = 0.0;
  (this->TranslationWarpingCurve_InMovementDirection).CurveType = FromRootMotionTranslation;
  (this->TranslationWarpingCurve_InMovementDirection).StartRatio = 0.0;
  (this->TranslationWarpingCurve_OutOfMovementDirection).StartRatio = 0.0;
  (this->RotationWarpingCurve).StartRatio = 0.0;
  (this->TranslationWarpingCurve).EndRatio = 1.0;
  *(undefined8 *)&(this->TranslationWarpingCurve_InMovementDirection).EndRatio = 0x3f800000;
  *(undefined8 *)&(this->TranslationWarpingCurve_OutOfMovementDirection).EndRatio = 0x3f800000;
  (this->RotationWarpingCurve).EndRatio = 1.0;
  this->bSeparateTranslationCurves = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Disable).ComparisonIndex = 0;
  (this->Disable).Number = 0;
  (this->SteeringSettings).bEnableSmoothing = true;
  (this->SteeringSettings).SmoothStiffness = 300.0;
  (this->SteeringSettings).SmoothDamping = 1.0;
  (this->SteeringSettings).AngleThreshold = 135.0;
  this->bForceTargetTransformUpright = false;
  this->bEnableSteering = false;
  this->bFirstFrame = true;
  this->ActualStartTime = 0.0;
  this->RoundedEndTime = 0.0;
  this->PreviousFrame = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = auVar20;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  (this->FilteredSteeringTarget).X = UE::Math::TQuat<double>::Identity.X;
  (this->FilteredSteeringTarget).Y = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  (this->FilteredSteeringTarget).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->FilteredSteeringTarget).W = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  (this->TargetSmoothingState).PrevTarget.X = UE::Math::TQuat<double>::Identity.X;
  (this->TargetSmoothingState).PrevTarget.Y = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  (this->TargetSmoothingState).PrevTarget.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->TargetSmoothingState).PrevTarget.W = dVar28;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Y = (double)uVar27;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetSmoothingState).bPrevTargetValid = false;
  (this->WarpedTrajectory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpedTrajectory).ArrayNum = 0;
  (this->WarpedTrajectory).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Translation.XY.m128d_f64 =
       auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Translation.ZW.m128d_f64 =
       auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Scale3D.ZW.m128d_f64 = auVar26;
  (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).Trajectory.ArrayNum = 0;
  (this->AnimTrajectoryData).Trajectory.ArrayMax = 0;
  (this->AnimTrajectoryData).TranslationCurve.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).TranslationCurve.ArrayNum = 0;
  (this->AnimTrajectoryData).TranslationCurve.ArrayMax = 0;
  (this->AnimTrajectoryData).RotationCurve.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).RotationCurve.ArrayNum = 0;
  (this->AnimTrajectoryData).RotationCurve.ArrayMax = 0;
  return this;
}

// URootMotionModifier_PrecomputedWarp @ 14cf05010

URootMotionModifier_PrecomputedWarp * __thiscall
URootMotionModifier_PrecomputedWarp::URootMotionModifier_PrecomputedWarp
          (URootMotionModifier_PrecomputedWarp *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined8 uVar27;
  double dVar28;
  
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->_padding_ = (longlong)&___7URootMotionModifier_PrecomputedWarp__6B_;
  (this->TranslationWarpingCurve).CurveType = FromRootMotionTranslation;
  (this->TranslationWarpingCurve).StartRatio = 0.0;
  (this->TranslationWarpingCurve_InMovementDirection).CurveType = FromRootMotionTranslation;
  (this->TranslationWarpingCurve_InMovementDirection).StartRatio = 0.0;
  (this->TranslationWarpingCurve_OutOfMovementDirection).StartRatio = 0.0;
  (this->RotationWarpingCurve).StartRatio = 0.0;
  (this->TranslationWarpingCurve).EndRatio = 1.0;
  *(undefined8 *)&(this->TranslationWarpingCurve_InMovementDirection).EndRatio = 0x3f800000;
  *(undefined8 *)&(this->TranslationWarpingCurve_OutOfMovementDirection).EndRatio = 0x3f800000;
  (this->RotationWarpingCurve).EndRatio = 1.0;
  this->bSeparateTranslationCurves = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AlignOffset).Scale3D.ZW.m128d_f64 = auVar8;
  (this->Disable).ComparisonIndex = 0;
  (this->Disable).Number = 0;
  (this->SteeringSettings).bEnableSmoothing = true;
  (this->SteeringSettings).SmoothStiffness = 300.0;
  (this->SteeringSettings).SmoothDamping = 1.0;
  (this->SteeringSettings).AngleThreshold = 135.0;
  this->bForceTargetTransformUpright = false;
  this->bEnableSteering = false;
  this->bFirstFrame = true;
  this->ActualStartTime = 0.0;
  this->RoundedEndTime = 0.0;
  this->PreviousFrame = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Rotation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar2,0);
  auVar10._0_8_ = (double)fVar1;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Rotation.ZW.m128d_f64 = auVar10;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Translation.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar2,0);
  auVar12._0_8_ = (double)fVar1;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Translation.ZW.m128d_f64 = auVar12;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar13._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar13._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar13._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Scale3D.XY.m128d_f64 = auVar13;
  auVar14._8_4_ = SUB84((double)fVar2,0);
  auVar14._0_8_ = (double)fVar1;
  auVar14._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->StartingRootTransform).Scale3D.ZW.m128d_f64 = auVar14;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar15._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar15._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar15._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64 = auVar15;
  auVar16._8_4_ = SUB84((double)fVar2,0);
  auVar16._0_8_ = (double)fVar1;
  auVar16._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64 = auVar16;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar17._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar17._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar17._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.XY.m128d_f64 = auVar17;
  auVar18._8_4_ = SUB84((double)fVar2,0);
  auVar18._0_8_ = (double)fVar1;
  auVar18._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.ZW.m128d_f64 = auVar18;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar19._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar19._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar19._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64 = auVar19;
  auVar20._8_4_ = SUB84((double)fVar2,0);
  auVar20._0_8_ = (double)fVar1;
  auVar20._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = auVar20;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  (this->FilteredSteeringTarget).X = UE::Math::TQuat<double>::Identity.X;
  (this->FilteredSteeringTarget).Y = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  (this->FilteredSteeringTarget).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->FilteredSteeringTarget).W = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.Y;
  (this->TargetSmoothingState).PrevTarget.X = UE::Math::TQuat<double>::Identity.X;
  (this->TargetSmoothingState).PrevTarget.Y = dVar28;
  dVar28 = UE::Math::TQuat<double>::Identity.W;
  (this->TargetSmoothingState).PrevTarget.Z = UE::Math::TQuat<double>::Identity.Z;
  (this->TargetSmoothingState).PrevTarget.W = dVar28;
  uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Y = (double)uVar27;
  (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->TargetSmoothingState).bPrevTargetValid = false;
  (this->WarpedTrajectory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpedTrajectory).ArrayNum = 0;
  (this->WarpedTrajectory).ArrayMax = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar21._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar21._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Rotation.XY.m128d_f64 = auVar21;
  auVar22._8_4_ = SUB84((double)fVar2,0);
  auVar22._0_8_ = (double)fVar1;
  auVar22._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Rotation.ZW.m128d_f64 = auVar22;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar23._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar23._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar23._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Translation.XY.m128d_f64 =
       auVar23;
  auVar24._8_4_ = SUB84((double)fVar2,0);
  auVar24._0_8_ = (double)fVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Translation.ZW.m128d_f64 =
       auVar24;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar25._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar25._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar25._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Scale3D.XY.m128d_f64 = auVar25;
  auVar26._8_4_ = SUB84((double)fVar2,0);
  auVar26._0_8_ = (double)fVar1;
  auVar26._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->AnimTrajectoryData).TargetTransform.Scale3D.ZW.m128d_f64 = auVar26;
  (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).Trajectory.ArrayNum = 0;
  (this->AnimTrajectoryData).Trajectory.ArrayMax = 0;
  (this->AnimTrajectoryData).TranslationCurve.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).TranslationCurve.ArrayNum = 0;
  (this->AnimTrajectoryData).TranslationCurve.ArrayMax = 0;
  (this->AnimTrajectoryData).RotationCurve.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimTrajectoryData).RotationCurve.ArrayNum = 0;
  (this->AnimTrajectoryData).RotationCurve.ArrayMax = 0;
  return this;
}

// ~URootMotionModifier_PrecomputedWarp @ 14cf05aa0

void __thiscall
URootMotionModifier_PrecomputedWarp::~URootMotionModifier_PrecomputedWarp
          (URootMotionModifier_PrecomputedWarp *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URootMotionModifier_PrecomputedWarp__6B_;
  pFVar1 = (this->AnimTrajectoryData).RotationCurve.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimTrajectoryData).TranslationCurve.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WarpedTrajectory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cf10bc0

UClass * __cdecl URootMotionModifier_PrecomputedWarp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_PrecomputedWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_PrecomputedWarp,0x600,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_PrecomputedWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_PrecomputedWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_PrecomputedWarp.InnerSingleton;
}

// GetWeight @ 14cf11de0

float __thiscall
URootMotionModifier_PrecomputedWarp::GetWeight
          (URootMotionModifier_PrecomputedWarp *this,float param_1,FPrecomputedWarpCurve *param_2)

{
  EPrecomputedWarpWeightCurveType EVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  EVar1 = param_2->CurveType;
  if (EVar1 == FromRootMotionTranslation) {
    pTVar2 = &(this->AnimTrajectoryData).TranslationCurve;
  }
  else {
    if (EVar1 != FromRootMotionRotation) goto LAB_14cf11e3f;
    pTVar2 = &(this->AnimTrajectoryData).RotationCurve;
  }
  if (pTVar2->ArrayNum != 0) {
    fVar3 = this->ActualStartTime;
    fVar4 = *(float *)((longlong)&this->_padding_ + 4) - *(float *)&this->_padding_;
    fVar5 = fVar4 * param_2->StartRatio;
    if (fVar5 <= fVar3) {
      fVar5 = fVar3;
    }
    fVar3 = ::`anonymous_namespace'::SampleCurve
                      (param_1 - fVar3,fVar5 - fVar3,fVar4 * param_2->EndRatio - fVar3,pTVar2);
    return fVar3;
  }
LAB_14cf11e3f:
  fVar3 = *(float *)&this->_padding_;
  fVar4 = *(float *)((longlong)&this->_padding_ + 4) - fVar3;
  fVar5 = fVar4 * param_2->StartRatio + fVar3;
  if (fVar5 <= this->ActualStartTime) {
    fVar5 = this->ActualStartTime;
  }
  fVar3 = (param_1 - fVar5) / ((fVar4 * param_2->EndRatio + fVar3) - fVar5);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (EVar1 == EaseIn) {
    fVar3 = fVar3 * fVar3 * fVar3;
  }
  else {
    if (EVar1 == EaseOut) {
      fVar3 = fVar3 - __real_3f800000;
      return fVar3 * fVar3 * fVar3 + __real_3f800000;
    }
    if (EVar1 == EaseInOut) {
      if (fVar3 < __real_3f000000) {
        return fVar3 * fVar3 * fVar3 * __real_40800000;
      }
      fVar4 = (fVar3 + fVar3) - __real_40000000;
      fVar5 = fVar4 * fVar3;
      fVar3 = fVar5 - (((fVar3 - __real_3f800000) + fVar3) - __real_3f800000);
      return (fVar5 * fVar4 - (fVar3 + fVar3)) + __real_3f800000;
    }
    if (EVar1 == Instant) {
      return __real_3f800000;
    }
    if (EVar1 == DoNotWarp) {
      return 0.0;
    }
  }
  return fVar3;
}

// ProcessRootMotion @ 14cf15e10

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TTransform<double> * __thiscall
URootMotionModifier_PrecomputedWarp::ProcessRootMotion
          (URootMotionModifier_PrecomputedWarp *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *this_01;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  ulonglong uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  __m128 _Var26;
  undefined8 uVar27;
  bool bVar28;
  UAnimSequenceBase *pUVar29;
  UMotionWarpingBaseAdapter *pUVar30;
  undefined1 (*pauVar31) [16];
  AActor *this_02;
  TQuat<double> *pTVar32;
  URootMotionModifier_PrecomputedWarp *pUVar33;
  TMatrix<double> *pTVar34;
  TTransform<double> *pTVar35;
  longlong lVar36;
  FColor *pFVar37;
  uint uVar38;
  TTransform<double> *__return_storage_ptr___00;
  uint uVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  int iVar43;
  uint uVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  ulong64 uVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  double dVar87;
  undefined1 auVar88 [16];
  double dVar90;
  double dVar91;
  undefined1 auVar89 [16];
  float fVar92;
  undefined1 auVar93 [16];
  uint uVar94;
  double dVar95;
  uint uVar96;
  double dVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  double dVar100;
  double dVar102;
  uint uVar103;
  undefined1 auVar101 [16];
  float fVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined4 uVar108;
  undefined4 uVar109;
  undefined4 uVar110;
  float fVar111;
  undefined1 auStackY_1028 [32];
  undefined1 local_fd8;
  undefined1 local_fd7 [3];
  float local_fd4;
  float local_fd0;
  double local_fc8;
  float local_fc0;
  TTransform<double> *local_fb8;
  longlong local_fb0;
  longlong local_fa8;
  UAnimSequenceBase *local_fa0;
  URootMotionModifier_PrecomputedWarp *local_f98;
  TQuat<double> local_f88;
  FName local_f68;
  FName local_f60;
  FName local_f58;
  FName local_f50;
  FName local_f48;
  FName local_f40;
  TTransform<double> *local_f38;
  double local_f30;
  double dStack_f28;
  double local_f20;
  double local_f18;
  double dStack_f10;
  double local_f08;
  double dStack_f00;
  double local_ef8;
  double dStack_ef0;
  double local_ee8;
  double dStack_ee0;
  double local_ed8;
  double dStack_ed0;
  double local_ec8;
  double dStack_ec0;
  TRotator<double> local_eb8;
  double local_ea0;
  double dStack_e98;
  double local_e90;
  TVector<double>_u_0 local_e88;
  double local_e70;
  double dStack_e68;
  double local_e60;
  double local_e58;
  double dStack_e50;
  double local_e48;
  TVector<double>_u_0 local_e40;
  TVector<double>_u_0 local_e28;
  double local_e10;
  double dStack_e08;
  double local_e00;
  TVector<double>_u_0 local_df8;
  TVector<double>_u_0 local_de0;
  TVector<double>_u_0 local_dc8;
  TVector<double>_u_0 local_db0;
  TVector<double>_u_0 local_d98;
  TVector<double>_u_0 local_d80;
  TVector<double>_u_0 local_d68;
  TVector<double>_u_0 local_d50;
  double local_d38;
  TVector<double>_u_0 local_d28;
  undefined1 local_d08 [16];
  undefined1 local_cf8 [16];
  TQuat<double> local_ce8;
  TQuat<double> local_cc8;
  TQuat<double> local_ca8;
  TQuat<double> local_c88;
  TQuat<double> local_c68;
  TQuat<double> local_c48;
  TQuat<double> local_c28;
  TQuat<double> local_c08;
  undefined4 local_be8;
  undefined4 uStack_be4;
  undefined4 uStack_be0;
  undefined4 uStack_bdc;
  double local_bd8;
  double local_bd0 [2];
  double local_bc0;
  undefined1 local_bb8 [16];
  double local_ba8;
  double local_ba0;
  double dStack_b98;
  double local_b90;
  undefined1 local_b88 [16];
  undefined1 local_b78 [16];
  undefined1 local_b68 [32];
  TQuat<double> local_b48;
  TQuat<double> local_b28;
  TQuat<double> local_b08;
  TQuat<double> local_ae8;
  double local_ac8;
  double dStack_ac0;
  TQuat<double> local_aa8;
  TQuat<double> local_a88;
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
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_1028;
  fVar51 = *(float *)((longlong)&this->_padding_ + 4);
  local_fd4 = param_2;
  local_fd0 = fVar51;
  local_fb8 = __return_storage_ptr__;
  local_f38 = param_1;
  pUVar29 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_fa0 = pUVar29;
  pUVar30 = URootMotionModifier::GetOwnerAdapter((URootMotionModifier *)this);
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
  if (pUVar30 == (UMotionWarpingBaseAdapter *)0x0) {
    pUVar33 = this;
    uVar98 = local_cf8._0_4_;
    uVar99 = local_cf8._4_4_;
    uVar105 = local_cf8._8_4_;
    uVar106 = local_cf8._12_4_;
    uVar107 = local_d08._0_4_;
    uVar108 = local_d08._4_4_;
    uVar109 = local_d08._8_4_;
    uVar110 = local_d08._12_4_;
  }
  else {
    local_f98 = this;
    pauVar31 = (undefined1 (*) [16])(**(code **)(pUVar30->_padding_ + 0x2d0))(pUVar30,local_b68);
    auVar79 = *pauVar31;
    auVar89 = pauVar31[1];
    local_d08 = auVar79;
    local_cf8 = auVar89;
    (**(code **)(pUVar30->_padding_ + 0x2c0))(pUVar30,&local_e10);
    this_02 = (AActor *)(**(code **)(pUVar30->_padding_ + 0x2b0))(pUVar30);
    pTVar32 = AActor::GetActorQuat(this_02,&local_b48);
    dVar95 = auVar89._0_8_;
    dVar102 = auVar89._8_8_;
    dVar97 = auVar79._0_8_;
    dVar100 = auVar79._8_8_;
    uVar2 = pTVar32->X;
    uVar4 = pTVar32->Y;
    uVar3 = pTVar32->Z;
    uVar5 = pTVar32->W;
    auVar78._8_4_ = (int)uVar2;
    auVar78._0_8_ = uVar2;
    auVar78._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
    auVar52._8_4_ = (int)uVar5;
    auVar52._0_8_ = uVar5;
    auVar52._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
    auVar69._8_4_ = (int)uVar4;
    auVar69._0_8_ = uVar4;
    auVar69._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
    auVar53._8_4_ = (int)uVar3;
    auVar53._0_8_ = uVar3;
    auVar53._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
    local_a08.Rotation.XY.m128d_f64[0] =
         (double)uVar2 * dVar102 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         (double)uVar5 * dVar97 +
         (double)uVar4 * dVar95 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         (double)uVar3 * dVar100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_a08.Rotation.XY.m128d_f64[1] =
         auVar78._8_8_ * dVar95 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         auVar52._8_8_ * dVar100 +
         auVar69._8_8_ * dVar102 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         auVar53._8_8_ * dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_a08.Translation.XY.m128d_f64[0] = local_e10;
    local_a08.Translation.XY.m128d_f64[1] = dStack_e08;
    local_a08.Translation.ZW.m128d_f64[0] = local_e00;
    local_a08.Translation.ZW.m128d_f64[1] = 0.0;
    local_a08.Rotation.ZW.m128d_f64[0] =
         (double)uVar2 * dVar100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         (double)uVar5 * dVar95 +
         (double)uVar4 * dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         (double)uVar3 * dVar102 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_a08.Rotation.ZW.m128d_f64[1] =
         (double)uVar2 * dVar97 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
         (double)uVar5 * dVar102 +
         (double)uVar4 * dVar100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
         (double)uVar3 * dVar95 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_a08.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_a08.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_a08.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_a08.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    pUVar33 = (URootMotionModifier_PrecomputedWarp *)
              (**(code **)(pUVar30->_padding_ + 0x2b0))(pUVar30);
    uVar98 = auVar89._0_4_;
    uVar99 = auVar89._4_4_;
    uVar105 = auVar89._8_4_;
    uVar106 = auVar89._12_4_;
    uVar107 = auVar79._0_4_;
    uVar108 = auVar79._4_4_;
    uVar109 = auVar79._8_4_;
    uVar110 = auVar79._12_4_;
  }
  fVar92 = __real_41efffff;
  _Var26 = GlobalVectorConstants::Float0001;
  fVar67 = __real_3f800000;
  lVar46 = 0x60;
  fVar104 = __real_3d088889;
  uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar44 = _UNK_15061cc88;
  uVar103 = _UNK_15061cc8c;
  local_f98 = pUVar33;
  if (this->bFirstFrame == false) {
LAB_14cf17b22:
    fVar67 = __real_3f800000;
    pTVar1 = &this->WarpedTrajectory;
    iVar43 = (this->WarpedTrajectory).ArrayNum;
    if (iVar43 != 0) {
      fVar92 = (float)(iVar43 + -1);
      fVar51 = ((param_2 + fVar51) - this->ActualStartTime) * __real_41efffff;
      if (this->PreviousFrame <= fVar92 && fVar92 != this->PreviousFrame) {
        local_9a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_9a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_9a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_9a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_9a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_9a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_9a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_9a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_9a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_9a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_9a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_9a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        if (fVar51 <= fVar92) {
          ::`anonymous_namespace'::GetTransformForFrame(fVar51,pTVar1,&local_9a8);
        }
        else {
          ::`anonymous_namespace'::ExtractRootMotionHelper
                    (&local_288,pUVar29,this->RoundedEndTime,(fVar51 - fVar92) * fVar104,false);
          ::`anonymous_namespace'::GetTransformForFrame(fVar51,pTVar1,&local_9a8);
          iVar43 = (this->WarpedTrajectory).ArrayNum;
          uVar94 = iVar43 - 1;
          uVar39 = 0;
          if ((int)uVar94 < iVar43) {
            uVar39 = ~uVar94 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          local_708.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_708.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_708.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_708.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_708.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_708.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_708.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_708.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_708.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_708.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_708.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_708.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_708,&local_288,
                     (TTransform<double> *)
                     ((pTVar1->AllocatorInstance).Data +
                     (longlong)((this->WarpedTrajectory).ArrayNum + -1) * 0x60));
          local_9a8.Rotation.XY.m128d_f64[0] = local_708.Rotation.XY.m128d_f64[0];
          local_9a8.Rotation.XY.m128d_f64[1] = local_708.Rotation.XY.m128d_f64[1];
          local_9a8.Rotation.ZW.m128d_f64[0] = local_708.Rotation.ZW.m128d_f64[0];
          local_9a8.Rotation.ZW.m128d_f64[1] = local_708.Rotation.ZW.m128d_f64[1];
          local_9a8.Translation.XY.m128d_f64[0] = local_708.Translation.XY.m128d_f64[0];
          local_9a8.Translation.XY.m128d_f64[1] = local_708.Translation.XY.m128d_f64[1];
          local_9a8.Translation.ZW.m128d_f64[0] = local_708.Translation.ZW.m128d_f64[0];
          local_9a8.Translation.ZW.m128d_f64[1] = local_708.Translation.ZW.m128d_f64[1];
          local_9a8.Scale3D.XY.m128d_f64[0] = local_708.Scale3D.XY.m128d_f64[0];
          local_9a8.Scale3D.XY.m128d_f64[1] = local_708.Scale3D.XY.m128d_f64[1];
          local_9a8.Scale3D.ZW.m128d_f64[0] = local_708.Scale3D.ZW.m128d_f64[0];
          local_9a8.Scale3D.ZW.m128d_f64[1] = local_708.Scale3D.ZW.m128d_f64[1];
        }
        if (this->UpdateMode == World) {
          pTVar35 = &local_a08;
          __return_storage_ptr___00 = &local_228;
        }
        else {
          local_408.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_408.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_408.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_408.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_408.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_408.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_408.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_408.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_408.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_408.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_408.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_408.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          ::`anonymous_namespace'::GetTransformForFrame(this->PreviousFrame,pTVar1,&local_408);
          pTVar35 = &local_408;
          __return_storage_ptr___00 = &local_1c8;
        }
        pTVar35 = UE::Math::TTransform<double>::GetRelativeTransform
                            (&local_9a8,__return_storage_ptr___00,pTVar35);
        local_f08 = (pTVar35->Rotation).ZW.m128d_f64[0];
        dStack_f00 = (pTVar35->Rotation).ZW.m128d_f64[1];
        local_f18 = (pTVar35->Rotation).XY.m128d_f64[0];
        dStack_f10 = (pTVar35->Rotation).XY.m128d_f64[1];
        local_ee8 = (pTVar35->Translation).ZW.m128d_f64[0];
        dStack_ee0 = (pTVar35->Translation).ZW.m128d_f64[1];
        local_ef8 = (pTVar35->Translation).XY.m128d_f64[0];
        dStack_ef0 = (pTVar35->Translation).XY.m128d_f64[1];
        local_ec8 = (pTVar35->Scale3D).ZW.m128d_f64[0];
        dStack_ec0 = (pTVar35->Scale3D).ZW.m128d_f64[1];
        local_ed8 = (pTVar35->Scale3D).XY.m128d_f64[0];
        dStack_ed0 = (pTVar35->Scale3D).XY.m128d_f64[1];
        if (((this->AnimTrajectoryData).Trajectory.ArrayNum < 1) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          pTVar35 = (TTransform<double> *)(*pcVar8)();
          return pTVar35;
        }
        local_a68.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a68.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_a68.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_a68.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_a68.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_a68.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_a68.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_a68.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_a68.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_a68.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_a68.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_a68.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_a68,
                   (TTransform<double> *)
                   (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data,
                   &this->StartingRootTransform);
        pUVar33 = local_f98;
        iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
        uVar39 = 1;
        if (1 < iVar43) {
          do {
            uVar94 = 0;
            if ((int)uVar39 < iVar43) {
              uVar94 = ~uVar39 >> 0x1f;
            }
            if ((uVar94 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar8 = (code *)swi(3);
              pTVar35 = (TTransform<double> *)(*pcVar8)();
              return pTVar35;
            }
            local_948.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_948.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_948.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_948.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_948.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_948.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_948.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_948.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_948.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_948.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_948.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_948.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply
                      (&local_948,
                       (TTransform<double> *)
                       ((this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data +
                       (longlong)(int)uVar39 * 0x60),&this->StartingRootTransform);
            if (FVisualLogger::bIsRecording != 0) {
              local_df8._s_0.X = local_948.Translation.XY.m128d_f64[0];
              local_df8._s_0.Y = local_948.Translation.XY.m128d_f64[1];
              local_df8._s_0.Z = local_948.Translation.ZW.m128d_f64[0];
              local_de0._s_0.X = local_a68.Translation.XY.m128d_f64[0];
              local_de0._s_0.Y = local_a68.Translation.XY.m128d_f64[1];
              local_de0._s_0.Z = local_a68.Translation.ZW.m128d_f64[0];
              ::FName::FName(&local_f60,"Alignment");
              pFVar37 = &FColor::Red;
              if ((uVar39 & 1) == 0) {
                pFVar37 = &FColor::Yellow;
              }
              FVisualLogger::SegmentLogfImpl
                        ((UObject *)pUVar33,&local_f60,Display,(TVector<double> *)&local_de0._s_0,
                         (TVector<double> *)&local_df8._s_0,pFVar37,0,L"");
            }
            local_a68.Rotation.XY.m128d_f64[0] = local_948.Rotation.XY.m128d_f64[0];
            local_a68.Rotation.XY.m128d_f64[1] = local_948.Rotation.XY.m128d_f64[1];
            uVar39 = uVar39 + 1;
            local_a68.Rotation.ZW.m128d_f64[0] = local_948.Rotation.ZW.m128d_f64[0];
            local_a68.Rotation.ZW.m128d_f64[1] = local_948.Rotation.ZW.m128d_f64[1];
            iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
            local_a68.Translation.XY.m128d_f64[0] = local_948.Translation.XY.m128d_f64[0];
            local_a68.Translation.XY.m128d_f64[1] = local_948.Translation.XY.m128d_f64[1];
            local_a68.Translation.ZW.m128d_f64[0] = local_948.Translation.ZW.m128d_f64[0];
            local_a68.Translation.ZW.m128d_f64[1] = local_948.Translation.ZW.m128d_f64[1];
            local_a68.Scale3D.XY.m128d_f64[0] = local_948.Scale3D.XY.m128d_f64[0];
            local_a68.Scale3D.XY.m128d_f64[1] = local_948.Scale3D.XY.m128d_f64[1];
            local_a68.Scale3D.ZW.m128d_f64[0] = local_948.Scale3D.ZW.m128d_f64[0];
            local_a68.Scale3D.ZW.m128d_f64[1] = local_948.Scale3D.ZW.m128d_f64[1];
            __return_storage_ptr__ = local_fb8;
          } while ((int)uVar39 < iVar43);
        }
        iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
        uVar96 = iVar43 - 1;
        uVar94 = ~uVar96 >> 0x1f;
        uVar39 = 0;
        if ((int)uVar96 < iVar43) {
          uVar39 = uVar94;
        }
        if (uVar39 == 0) {
          uVar94 = 0x506106c8;
          bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar28) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
        }
        iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
        pFVar7 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
        lVar46 = (longlong)iVar43 * 0x60;
        pFVar41 = pFVar7 + lVar46 + -0x10;
        auVar85._0_8_ = (double)CONCAT44(uVar40 & *(uint *)(pFVar41 + 4),uVar38 & *(uint *)pFVar41);
        auVar85._8_4_ = uVar44 & *(uint *)(pFVar41 + 8);
        auVar85._12_4_ = uVar103 & *(uint *)(pFVar41 + 0xc);
        pFVar41 = pFVar7 + lVar46 + -0x20;
        auVar101._0_8_ = (double)CONCAT44(uVar40 & *(uint *)(pFVar41 + 4),uVar38 & *(uint *)pFVar41)
        ;
        auVar101._8_4_ = uVar44 & *(uint *)(pFVar41 + 8);
        auVar101._12_4_ = uVar103 & *(uint *)(pFVar41 + 0xc);
        auVar76._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar85._8_8_);
        auVar76._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar85._0_8_);
        uVar38 = movmskpd(uVar94,auVar76);
        auVar65._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar101._8_8_);
        auVar65._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar101._0_8_);
        iVar43 = movmskpd(iVar43,auVar65);
        if ((uVar38 & 0x3fffffff) == 0 && iVar43 == 0) {
          local_528.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_528.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_528.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_528.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_528.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_528.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)(pFVar7 + lVar46 + -0x60),&local_528);
        }
        if (((this->AnimTrajectoryData).Trajectory.ArrayNum < 1) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar8 = (code *)swi(3);
          pTVar35 = (TTransform<double> *)(*pcVar8)();
          return pTVar35;
        }
        local_3a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_3a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_3a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_3a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_3a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_3a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_3a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_3a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_3a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_3a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_3a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_3a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply
                  (&local_3a8,
                   (TTransform<double> *)
                   (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data,&local_528);
        local_6a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_6a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_6a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_6a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_6a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_6a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_6a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_6a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_6a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_6a8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_6a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_6a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_6a8,&local_3a8,&this->TargetTransform);
        uVar38 = 1;
        iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
        local_a68.Rotation.XY.m128d_f64[0] = local_6a8.Rotation.XY.m128d_f64[0];
        local_a68.Rotation.XY.m128d_f64[1] = local_6a8.Rotation.XY.m128d_f64[1];
        local_a68.Rotation.ZW.m128d_f64[0] = local_6a8.Rotation.ZW.m128d_f64[0];
        local_a68.Rotation.ZW.m128d_f64[1] = local_6a8.Rotation.ZW.m128d_f64[1];
        local_a68.Translation.XY.m128d_f64[0] = local_6a8.Translation.XY.m128d_f64[0];
        local_a68.Translation.XY.m128d_f64[1] = local_6a8.Translation.XY.m128d_f64[1];
        local_a68.Translation.ZW.m128d_f64[0] = local_6a8.Translation.ZW.m128d_f64[0];
        local_a68.Translation.ZW.m128d_f64[1] = local_6a8.Translation.ZW.m128d_f64[1];
        local_a68.Scale3D.XY.m128d_f64[0] = local_6a8.Scale3D.XY.m128d_f64[0];
        local_a68.Scale3D.XY.m128d_f64[1] = local_6a8.Scale3D.XY.m128d_f64[1];
        local_a68.Scale3D.ZW.m128d_f64[0] = local_6a8.Scale3D.ZW.m128d_f64[0];
        local_a68.Scale3D.ZW.m128d_f64[1] = local_6a8.Scale3D.ZW.m128d_f64[1];
        if (1 < iVar43) {
          do {
            uVar40 = 0;
            if ((int)uVar38 < iVar43) {
              uVar40 = ~uVar38 >> 0x1f;
            }
            if ((uVar40 == 0) &&
               (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar28)) {
              pcVar8 = (code *)swi(3);
              pTVar35 = (TTransform<double> *)(*pcVar8)();
              return pTVar35;
            }
            local_348.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_348.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_348.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_348.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_348.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_348.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_348.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_348.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_348.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_348.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_348.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_348.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply
                      (&local_348,
                       (TTransform<double> *)
                       ((this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data +
                       (longlong)(int)uVar38 * 0x60),&local_528);
            local_8e8.Rotation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[0];
            local_8e8.Rotation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[1];
            local_8e8.Rotation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[2];
            local_8e8.Rotation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::Float0001.m128_f32[3];
            local_8e8.Translation.XY.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[0];
            local_8e8.Translation.XY.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[1];
            local_8e8.Translation.ZW.m128d_f64[0] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[2];
            local_8e8.Translation.ZW.m128d_f64[1] =
                 (double)GlobalVectorConstants::FloatZero.m128_f32[3];
            local_8e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0]
            ;
            local_8e8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1]
            ;
            local_8e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2]
            ;
            local_8e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3]
            ;
            UE::Math::TTransform<double>::Multiply(&local_8e8,&local_348,&this->TargetTransform);
            if (FVisualLogger::bIsRecording != 0) {
              local_dc8._s_0.X = local_8e8.Translation.XY.m128d_f64[0];
              local_dc8._s_0.Y = local_8e8.Translation.XY.m128d_f64[1];
              local_dc8._s_0.Z = local_8e8.Translation.ZW.m128d_f64[0];
              local_db0._s_0.X = local_a68.Translation.XY.m128d_f64[0];
              local_db0._s_0.Y = local_a68.Translation.XY.m128d_f64[1];
              local_db0._s_0.Z = local_a68.Translation.ZW.m128d_f64[0];
              ::FName::FName(&local_f58,"Alignment");
              pFVar37 = &FColor::Red;
              if ((uVar38 & 1) == 0) {
                pFVar37 = &FColor::Yellow;
              }
              FVisualLogger::SegmentLogfImpl
                        ((UObject *)pUVar33,&local_f58,Display,(TVector<double> *)&local_db0._s_0,
                         (TVector<double> *)&local_dc8._s_0,pFVar37,0,L"");
            }
            local_a68.Rotation.XY.m128d_f64[0] = local_8e8.Rotation.XY.m128d_f64[0];
            local_a68.Rotation.XY.m128d_f64[1] = local_8e8.Rotation.XY.m128d_f64[1];
            uVar38 = uVar38 + 1;
            local_a68.Rotation.ZW.m128d_f64[0] = local_8e8.Rotation.ZW.m128d_f64[0];
            local_a68.Rotation.ZW.m128d_f64[1] = local_8e8.Rotation.ZW.m128d_f64[1];
            iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
            local_a68.Translation.XY.m128d_f64[0] = local_8e8.Translation.XY.m128d_f64[0];
            local_a68.Translation.XY.m128d_f64[1] = local_8e8.Translation.XY.m128d_f64[1];
            local_a68.Translation.ZW.m128d_f64[0] = local_8e8.Translation.ZW.m128d_f64[0];
            local_a68.Translation.ZW.m128d_f64[1] = local_8e8.Translation.ZW.m128d_f64[1];
            local_a68.Scale3D.XY.m128d_f64[0] = local_8e8.Scale3D.XY.m128d_f64[0];
            local_a68.Scale3D.XY.m128d_f64[1] = local_8e8.Scale3D.XY.m128d_f64[1];
            local_a68.Scale3D.ZW.m128d_f64[0] = local_8e8.Scale3D.ZW.m128d_f64[0];
            local_a68.Scale3D.ZW.m128d_f64[1] = local_8e8.Scale3D.ZW.m128d_f64[1];
            __return_storage_ptr__ = local_fb8;
          } while ((int)uVar38 < iVar43);
        }
        uVar38 = 1;
        lVar46 = 0x60;
        if (1 < (this->WarpedTrajectory).ArrayNum) {
          do {
            if (FVisualLogger::bIsRecording != 0) {
              pFVar37 = &FColor::Blue;
              if ((uVar38 & 1) == 0) {
                pFVar37 = &FColor::Green;
              }
              uVar40 = 0;
              if ((int)uVar38 < (this->WarpedTrajectory).ArrayNum) {
                uVar40 = ~uVar38 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar8 = (code *)swi(3);
                pTVar35 = (TTransform<double> *)(*pcVar8)();
                return pTVar35;
              }
              pFVar7 = (this->WarpedTrajectory).AllocatorInstance.Data;
              pFVar41 = pFVar7 + lVar46 + 0x20;
              local_d98._s_0.X = (double)*(undefined8 *)pFVar41;
              local_d98._s_0.Y = (double)*(undefined8 *)(pFVar41 + 8);
              local_d98._s_0.Z = (double)*(undefined8 *)(pFVar7 + lVar46 + 0x30);
              uVar40 = 0;
              if ((int)(uVar38 - 1) < (this->WarpedTrajectory).ArrayNum) {
                uVar40 = -uVar38 >> 0x1f;
              }
              if ((uVar40 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar8 = (code *)swi(3);
                pTVar35 = (TTransform<double> *)(*pcVar8)();
                return pTVar35;
              }
              pFVar7 = (this->WarpedTrajectory).AllocatorInstance.Data;
              pFVar41 = pFVar7 + lVar46 + -0x40;
              local_d80._s_0.X = (double)*(undefined8 *)pFVar41;
              local_d80._s_0.Y = (double)*(undefined8 *)(pFVar41 + 8);
              local_d80._s_0.Z = (double)*(undefined8 *)(pFVar7 + lVar46 + -0x30);
              ::FName::FName(&local_f50,"Alignment");
              FVisualLogger::SegmentLogfImpl
                        ((UObject *)pUVar33,&local_f50,Display,(TVector<double> *)&local_d80._s_0,
                         (TVector<double> *)&local_d98._s_0,pFVar37,0,L"");
            }
            uVar38 = uVar38 + 1;
            lVar46 = lVar46 + 0x60;
            __return_storage_ptr__ = local_fb8;
          } while ((int)uVar38 < (this->WarpedTrajectory).ArrayNum);
        }
        if (FVisualLogger::bIsRecording != 0) {
          local_d68._s_0.X = local_a08.Translation.XY.m128d_f64[0];
          local_d68._s_0.Y = local_a08.Translation.XY.m128d_f64[1];
          local_d68._s_0.Z = local_a08.Translation.ZW.m128d_f64[0];
          ::FName::FName(&local_f48,"Alignment");
          FVisualLogger::SphereLogfImpl
                    ((UObject *)pUVar33,&local_f48,Display,(TVector<double> *)&local_d68._s_0,fVar67
                     ,&FColor::Green,false,L"");
          if (FVisualLogger::bIsRecording != 0) {
            local_d50._s_0.X = local_9a8.Translation.XY.m128d_f64[0];
            local_d50._s_0.Y = local_9a8.Translation.XY.m128d_f64[1];
            local_d50._s_0.Z = local_9a8.Translation.ZW.m128d_f64[0];
            ::FName::FName(&local_f40,"Alignment");
            FVisualLogger::SphereLogfImpl
                      ((UObject *)pUVar33,&local_f40,Display,(TVector<double> *)&local_d50._s_0,
                       fVar67,&FColor::Red,false,L"");
          }
        }
        this->PreviousFrame = fVar51;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_f18;
        (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dStack_f10;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_f08;
        (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dStack_f00;
        (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_ef8;
        (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dStack_ef0;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_ee8;
        (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dStack_ee0;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_ed8;
        (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_ed0;
        goto LAB_14cf18863;
      }
    }
  }
  else {
    fVar104 = *(float *)((longlong)&this->_padding_ + 4);
    this->ActualStartTime = fVar51;
    this->bFirstFrame = false;
    auVar54._0_8_ = (double)((fVar104 - fVar51) * fVar92);
    auVar54._8_8_ = 0;
    auVar79 = roundpd((undefined1  [16])_Var26,auVar54,2);
    this->RoundedEndTime = (float)(auVar79._0_8_ * __real_3fa1111111111111 + (double)fVar51);
    uVar22 = (undefined4)this->_padding_;
    uVar23 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar24 = (undefined4)this->_padding_;
    uVar25 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    dVar10 = (double)this->_padding_;
    local_be8 = uVar22;
    uStack_be4 = uVar23;
    uStack_be0 = uVar24;
    uStack_bdc = uVar25;
    pTVar32 = URootMotionModifier_Warp::GetTargetRotation
                        ((URootMotionModifier_Warp *)this,&local_b28);
    pTVar35 = &this->TargetTransform;
    auVar55._0_8_ = (double)CONCAT44(uVar99,uVar98);
    auVar55._8_4_ = uVar105;
    auVar55._12_4_ = uVar106;
    dVar87 = (double)CONCAT44(uVar106,uVar105);
    dVar11 = pTVar32->X;
    dVar15 = pTVar32->Y;
    auVar70._0_8_ = (double)CONCAT44(uVar108,uVar107);
    auVar70._8_4_ = uVar109;
    auVar70._12_4_ = uVar110;
    dVar12 = pTVar32->Z;
    dVar91 = pTVar32->W;
    dVar9 = (double)CONCAT44(uVar110,uVar109);
    auVar93._8_4_ = uVar107;
    auVar93._0_8_ = dVar9;
    auVar93._12_4_ = uVar108;
    auVar89._8_8_ = dVar91;
    auVar89._0_8_ = dVar91;
    dVar95 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar102 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    auVar56._8_4_ = uVar98;
    auVar56._0_8_ = dVar87;
    auVar56._12_4_ = uVar99;
    dVar97 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar66 = auVar56._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar100 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    auVar19._4_8_ = dVar66;
    auVar19._0_4_ = uVar23;
    auVar57._0_8_ = auVar19._0_8_ << 0x20;
    auVar57._8_4_ = uVar24;
    auVar57._12_4_ = uVar25;
    dVar77 = (double)CONCAT44(uVar99,uVar98) * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             (double)CONCAT44(uVar110,uVar109) * dVar91 +
             (double)CONCAT44(uVar106,uVar105) * dVar15 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             (double)CONCAT44(uVar108,uVar107) * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar79._8_4_ = SUB84(dVar77,0);
    auVar79._0_8_ =
         dVar87 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         (double)CONCAT44(uVar108,uVar107) * dVar91 +
         (double)CONCAT44(uVar99,uVar98) * dVar15 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar79._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    *(undefined1 (*) [16])(pTVar35->Rotation).XY.m128d_f64 = auVar79;
    (this->TargetTransform).Rotation.ZW.m128d_f64[0] =
         dVar9 * dVar11 * dVar95 + auVar55._0_8_ * dVar91 + auVar70._0_8_ * dVar15 * dVar100 +
         dVar87 * dVar12 * dVar97;
    (this->TargetTransform).Rotation.ZW.m128d_f64[1] =
         auVar93._8_8_ * dVar11 * dVar102 + auVar55._8_8_ * dVar91 + auVar70._8_8_ * dVar15 * dVar68
         + dVar66;
    *(undefined4 *)(this->TargetTransform).Translation.XY.m128d_f64 = uVar22;
    *(undefined4 *)((longlong)(this->TargetTransform).Translation.XY.m128d_f64 + 4) = uVar23;
    (this->TargetTransform).Translation.XY.m128d_f64[1] = auVar57._8_8_;
    (this->TargetTransform).Translation.ZW.m128d_f64[0] = dVar10;
    (this->TargetTransform).Translation.ZW.m128d_f64[1] = 0.0;
    dVar95 = _UNK_150689688;
    (this->TargetTransform).Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar95;
    dVar95 = _UNK_150689518;
    (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = dVar95;
    local_bd8 = dVar10;
    if (FVisualLogger::bIsRecording != 0) {
      pTVar34 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar35,&local_168);
      ::FName::FName(&local_f68,"Alignment");
      FVisualLogger::BoxLogfImpl
                ((UObject *)pUVar33,&local_f68,Display,&UnitBox,pTVar34,&FColor::Blue,false,L"");
    }
    local_888.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_888.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_888.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_888.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_888.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_888.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_888.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_888.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_888.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_888.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_888.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_888.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_888,&this->AlignOffset,pTVar35);
    bVar28 = this->bForceTargetTransformUpright;
    (pTVar35->Rotation).XY.m128d_f64[0] = local_888.Rotation.XY.m128d_f64[0];
    (this->TargetTransform).Rotation.XY.m128d_f64[1] = local_888.Rotation.XY.m128d_f64[1];
    (this->TargetTransform).Rotation.ZW.m128d_f64[0] = local_888.Rotation.ZW.m128d_f64[0];
    (this->TargetTransform).Rotation.ZW.m128d_f64[1] = local_888.Rotation.ZW.m128d_f64[1];
    (this->TargetTransform).Translation.XY.m128d_f64[0] = local_888.Translation.XY.m128d_f64[0];
    (this->TargetTransform).Translation.XY.m128d_f64[1] = local_888.Translation.XY.m128d_f64[1];
    (this->TargetTransform).Translation.ZW.m128d_f64[0] = local_888.Translation.ZW.m128d_f64[0];
    (this->TargetTransform).Translation.ZW.m128d_f64[1] = local_888.Translation.ZW.m128d_f64[1];
    (this->TargetTransform).Scale3D.XY.m128d_f64[0] = local_888.Scale3D.XY.m128d_f64[0];
    (this->TargetTransform).Scale3D.XY.m128d_f64[1] = local_888.Scale3D.XY.m128d_f64[1];
    (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = local_888.Scale3D.ZW.m128d_f64[0];
    (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = local_888.Scale3D.ZW.m128d_f64[1];
    if (bVar28 != false) {
      local_c88.X = (pTVar35->Rotation).XY.m128d_f64[0];
      local_c88.Y = (this->TargetTransform).Rotation.XY.m128d_f64[1];
      local_c88.Z = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
      local_c88.W = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_c88,&local_eb8);
      local_eb8.Roll = 0.0;
      local_eb8.Pitch = 0.0;
      pTVar32 = UE::Math::TRotator<double>::Quaternion(&local_eb8,&local_b08);
      dVar95 = pTVar32->Y;
      dVar97 = pTVar32->Z;
      dVar100 = pTVar32->W;
      (pTVar35->Rotation).XY.m128d_f64[0] = pTVar32->X;
      (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar95;
      (this->TargetTransform).Rotation.ZW.m128d_f64[0] = dVar97;
      (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar100;
    }
    (this->StartingRootTransform).Rotation.XY.m128d_f64[0] = local_a08.Rotation.XY.m128d_f64[0];
    (this->StartingRootTransform).Rotation.XY.m128d_f64[1] = local_a08.Rotation.XY.m128d_f64[1];
    (this->StartingRootTransform).Rotation.ZW.m128d_f64[0] = local_a08.Rotation.ZW.m128d_f64[0];
    (this->StartingRootTransform).Rotation.ZW.m128d_f64[1] = local_a08.Rotation.ZW.m128d_f64[1];
    (this->StartingRootTransform).Translation.XY.m128d_f64[0] =
         local_a08.Translation.XY.m128d_f64[0];
    (this->StartingRootTransform).Translation.XY.m128d_f64[1] =
         local_a08.Translation.XY.m128d_f64[1];
    (this->StartingRootTransform).Translation.ZW.m128d_f64[0] =
         local_a08.Translation.ZW.m128d_f64[0];
    (this->StartingRootTransform).Translation.ZW.m128d_f64[1] =
         local_a08.Translation.ZW.m128d_f64[1];
    (this->StartingRootTransform).Scale3D.XY.m128d_f64[0] = local_a08.Scale3D.XY.m128d_f64[0];
    (this->StartingRootTransform).Scale3D.XY.m128d_f64[1] = local_a08.Scale3D.XY.m128d_f64[1];
    fVar51 = this->RoundedEndTime;
    fVar104 = this->ActualStartTime;
    (this->StartingRootTransform).Scale3D.ZW.m128d_f64[0] = local_a08.Scale3D.ZW.m128d_f64[0];
    (this->StartingRootTransform).Scale3D.ZW.m128d_f64[1] = local_a08.Scale3D.ZW.m128d_f64[1];
    iVar43 = (int)((fVar51 - fVar104) * __real_41efffff + fVar67);
    if (0 < iVar43) {
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&(this->AnimTrajectoryData).Trajectory,iVar43,Default);
      this_00 = &(this->AnimTrajectoryData).TranslationCurve;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar43,Default);
      this_01 = &(this->AnimTrajectoryData).RotationCurve;
      TArray<float,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar43,Default);
      local_fc0 = (this->SteeringSettings).AngleThreshold * __real_3c8efa35;
      dVar95 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      dVar97 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      fVar51 = GlobalVectorConstants::Float0001.m128_f32[2];
      uVar98 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      uVar99 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      local_7c8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar98;
      local_7c8.Rotation.ZW.m128d_f64[0] = (double)fVar51;
      local_7c8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar99;
      dVar100 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      dVar102 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      fVar67 = GlobalVectorConstants::FloatZero.m128_f32[2];
      uVar105 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      uVar106 = (undefined4)
                ((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      fVar92 = GlobalVectorConstants::Float1110.m128_f32[0];
      local_7c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar105;
      local_7c8.Translation.ZW.m128d_f64[0] = (double)fVar67;
      local_7c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar106;
      uVar107 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      uVar108 = (undefined4)
                ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_7c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar107;
      local_7c8.Scale3D.XY.m128d_f64[0] = (double)fVar92;
      local_7c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar108;
      fVar104 = GlobalVectorConstants::Float1110.m128_f32[2];
      uVar109 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      uVar110 = (undefined4)
                ((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_7c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar109;
      local_7c8.Scale3D.ZW.m128d_f64[0] = (double)fVar104;
      local_7c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar110;
      local_7c8.Rotation.XY.m128d_f64[0] = dVar95;
      local_7c8.Rotation.XY.m128d_f64[1] = dVar97;
      local_7c8.Translation.XY.m128d_f64[0] = dVar100;
      local_7c8.Translation.XY.m128d_f64[1] = dVar102;
      if (((this->AnimTrajectoryData).Trajectory.ArrayNum < 1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        pTVar35 = (TTransform<double> *)(*pcVar8)();
        return pTVar35;
      }
      pFVar41 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
      *(double *)pFVar41 = dVar95;
      *(double *)(pFVar41 + 8) = dVar97;
      auVar13._8_4_ = uVar98;
      auVar13._0_8_ = (double)fVar51;
      auVar13._12_4_ = uVar99;
      *(undefined1 (*) [16])(pFVar41 + 0x10) = auVar13;
      fVar51 = __real_3d088889;
      *(double *)(pFVar41 + 0x20) = dVar100;
      *(double *)(pFVar41 + 0x28) = dVar102;
      fVar111 = local_fd0 + fVar51;
      auVar16._8_4_ = uVar105;
      auVar16._0_8_ = (double)fVar67;
      auVar16._12_4_ = uVar106;
      *(undefined1 (*) [16])(pFVar41 + 0x30) = auVar16;
      auVar17._8_4_ = uVar107;
      auVar17._0_8_ = (double)fVar92;
      auVar17._12_4_ = uVar108;
      *(undefined1 (*) [16])(pFVar41 + 0x40) = auVar17;
      auVar18._8_4_ = uVar109;
      auVar18._0_8_ = (double)fVar104;
      auVar18._12_4_ = uVar110;
      *(undefined1 (*) [16])(pFVar41 + 0x50) = auVar18;
      if (((this->AnimTrajectoryData).TranslationCurve.ArrayNum < 1) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        pTVar35 = (TTransform<double> *)(*pcVar8)();
        return pTVar35;
      }
      dVar97 = __real_bff0000000000000;
      dVar95 = __real_3ff0000000000000;
      uVar39 = 1;
      *(undefined4 *)(this_00->AllocatorInstance).Data = 0;
      fVar67 = __real_3d088889;
      lVar36 = (longlong)iVar43;
      uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar44 = _UNK_15061cc88;
      uVar103 = _UNK_15061cc8c;
      local_fa8 = lVar36;
      if (1 < lVar36) {
        lVar45 = 1;
        do {
          ::`anonymous_namespace'::ExtractRootMotionHelper
                    (&local_2e8,local_fa0,fVar111,fVar67,false);
          local_828.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_828.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_828.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_828.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_828.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_828.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          uVar86 = GlobalVectorConstants::FloatZero.m128_u64[1];
          local_828.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_828.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_828.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_828.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_828.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_828.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_828,&local_2e8,&local_7c8);
          dVar66 = local_828.Scale3D.ZW.m128d_f64[1];
          dVar91 = local_828.Scale3D.ZW.m128d_f64[0];
          dVar12 = local_828.Scale3D.XY.m128d_f64[1];
          dVar15 = local_828.Scale3D.XY.m128d_f64[0];
          dVar11 = local_828.Translation.ZW.m128d_f64[1];
          dVar10 = local_828.Translation.ZW.m128d_f64[0];
          dVar9 = local_828.Translation.XY.m128d_f64[1];
          dVar77 = local_828.Translation.XY.m128d_f64[0];
          dVar87 = local_828.Rotation.ZW.m128d_f64[1];
          dVar68 = local_828.Rotation.ZW.m128d_f64[0];
          dVar102 = local_828.Rotation.XY.m128d_f64[1];
          dVar100 = local_828.Rotation.XY.m128d_f64[0];
          local_7c8.Rotation.XY.m128d_f64[0] = local_828.Rotation.XY.m128d_f64[0];
          local_7c8.Rotation.XY.m128d_f64[1] = local_828.Rotation.XY.m128d_f64[1];
          local_7c8.Rotation.ZW.m128d_f64[1] = local_828.Rotation.ZW.m128d_f64[1];
          local_7c8.Rotation.ZW.m128d_f64[0] = local_828.Rotation.ZW.m128d_f64[0];
          uVar38 = 0;
          if ((int)uVar39 < (this->AnimTrajectoryData).Trajectory.ArrayNum) {
            uVar38 = ~uVar39 >> 0x1f;
          }
          local_7c8.Translation.XY.m128d_f64[0] = local_828.Translation.XY.m128d_f64[0];
          local_7c8.Translation.XY.m128d_f64[1] = local_828.Translation.XY.m128d_f64[1];
          local_7c8.Translation.ZW.m128d_f64[1] = local_828.Translation.ZW.m128d_f64[1];
          local_7c8.Translation.ZW.m128d_f64[0] = local_828.Translation.ZW.m128d_f64[0];
          local_7c8.Scale3D.XY.m128d_f64[1] = local_828.Scale3D.XY.m128d_f64[1];
          local_7c8.Scale3D.XY.m128d_f64[0] = local_828.Scale3D.XY.m128d_f64[0];
          local_7c8.Scale3D.ZW.m128d_f64[1] = local_828.Scale3D.ZW.m128d_f64[1];
          local_7c8.Scale3D.ZW.m128d_f64[0] = local_828.Scale3D.ZW.m128d_f64[0];
          local_fc8 = (double)CONCAT44(local_fc8._4_4_,~uVar39 >> 0x1f);
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          pFVar41 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
          fVar111 = fVar111 + fVar67;
          *(double *)(pFVar41 + lVar46) = dVar100;
          *(double *)(pFVar41 + lVar46 + 8) = dVar102;
          *(double *)(pFVar41 + lVar46 + 0x10) = dVar68;
          *(double *)(pFVar41 + lVar46 + 0x10 + 8) = dVar87;
          *(double *)(pFVar41 + lVar46 + 0x20) = dVar77;
          *(double *)(pFVar41 + lVar46 + 0x20 + 8) = dVar9;
          *(double *)(pFVar41 + lVar46 + 0x30) = dVar10;
          *(double *)(pFVar41 + lVar46 + 0x30 + 8) = dVar11;
          *(double *)(pFVar41 + lVar46 + 0x40) = dVar15;
          *(double *)(pFVar41 + lVar46 + 0x40 + 8) = dVar12;
          *(double *)(pFVar41 + lVar46 + 0x50) = dVar91;
          *(double *)(pFVar41 + lVar46 + 0x50 + 8) = dVar66;
          dVar100 = local_2e8.Translation.XY.m128d_f64[0];
          auVar20._4_8_ = uVar86;
          auVar20._0_4_ = local_2e8.Translation.XY.m128d_f64[0]._4_4_;
          auVar80._0_8_ = auVar20._0_8_ << 0x20;
          auVar80._8_4_ = local_2e8.Translation.XY.m128d_f64[1]._0_4_;
          auVar80._12_4_ = local_2e8.Translation.XY.m128d_f64[1]._4_4_;
          uVar38 = 0;
          if ((int)(uVar39 - 1) < (this->AnimTrajectoryData).TranslationCurve.ArrayNum) {
            uVar38 = -uVar39 >> 0x1f;
          }
          local_fb0 = CONCAT44(local_fb0._4_4_,-uVar39 >> 0x1f);
          local_bc0 = local_2e8.Translation.ZW.m128d_f64[0];
          dVar102 = local_2e8.Translation.ZW.m128d_f64[0] * local_2e8.Translation.ZW.m128d_f64[0];
          local_bd0[0] = local_2e8.Translation.XY.m128d_f64[0];
          local_bd0[1] = local_2e8.Translation.XY.m128d_f64[1];
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          fVar51 = *(float *)((this_00->AllocatorInstance).Data + lVar45 * 4 + -4);
          iVar43 = 0;
          if ((int)uVar39 < (this->AnimTrajectoryData).TranslationCurve.ArrayNum) {
            iVar43 = local_fc8._0_4_;
          }
          if ((iVar43 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          *(float *)((this_00->AllocatorInstance).Data + lVar45 * 4) =
               (float)((double)fVar51 +
                      SQRT(auVar80._8_8_ * auVar80._8_8_ + dVar100 * dVar100 + dVar102));
          dVar100 = dVar97;
          if ((dVar97 <= local_2e8.Rotation.ZW.m128d_f64[1]) &&
             (dVar100 = local_2e8.Rotation.ZW.m128d_f64[1],
             dVar95 <= local_2e8.Rotation.ZW.m128d_f64[1])) {
            dVar100 = dVar95;
          }
          dVar100 = acos(dVar100);
          iVar43 = 0;
          if ((int)(uVar39 - 1) < (this->AnimTrajectoryData).RotationCurve.ArrayNum) {
            iVar43 = (int)local_fb0;
          }
          if ((iVar43 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          uVar103 = _UNK_15061cc8c;
          uVar44 = _UNK_15061cc88;
          uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          fVar51 = *(float *)((this_01->AllocatorInstance).Data + lVar45 * 4 + -4);
          uVar94 = SUB84(dVar100 + dVar100,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar96 = (uint)((ulonglong)(dVar100 + dVar100) >> 0x20) &
                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          iVar43 = 0;
          if ((int)uVar39 < (this->AnimTrajectoryData).RotationCurve.ArrayNum) {
            iVar43 = local_fc8._0_4_;
          }
          if ((iVar43 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          uVar39 = uVar39 + 1;
          lVar46 = lVar46 + 0x60;
          *(float *)((this_01->AllocatorInstance).Data + lVar45 * 4) =
               (float)((double)CONCAT44(uVar96,uVar94) + (double)fVar51);
          lVar45 = lVar45 + 1;
          fVar51 = __real_3d088889;
        } while (lVar45 < lVar36);
      }
      iVar43 = (this->AnimTrajectoryData).TranslationCurve.ArrayNum;
      uVar94 = iVar43 - 1;
      uVar39 = 0;
      if ((int)uVar94 < iVar43) {
        uVar39 = ~uVar94 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        pTVar35 = (TTransform<double> *)(*pcVar8)();
        return pTVar35;
      }
      fVar67 = __real_322bcc77;
      iVar43 = (this->AnimTrajectoryData).TranslationCurve.ArrayNum;
      pFVar41 = (this_00->AllocatorInstance).Data;
      if (__real_322bcc77 < *(float *)(pFVar41 + ((longlong)iVar43 + -1) * 4) ||
          __real_322bcc77 == *(float *)(pFVar41 + ((longlong)iVar43 + -1) * 4)) {
        pFVar7 = pFVar41 + (longlong)iVar43 * 4;
        while( true ) {
          if ((this->AnimTrajectoryData).TranslationCurve.ArrayNum != iVar43) {
            local_fd8 = 0;
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_fd8);
          }
          if (pFVar41 == pFVar7) break;
          iVar6 = (this->AnimTrajectoryData).TranslationCurve.ArrayNum;
          uVar94 = iVar6 - 1;
          uVar39 = 0;
          if ((int)uVar94 < iVar6) {
            uVar39 = ~uVar94 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          *(float *)pFVar41 =
               *(float *)pFVar41 /
               *(float *)((this_00->AllocatorInstance).Data +
                         (longlong)(this->AnimTrajectoryData).TranslationCurve.ArrayNum * 4 + -4);
          pFVar41 = pFVar41 + 4;
        }
      }
      else {
        iVar43 = (this->AnimTrajectoryData).TranslationCurve.ArrayMax;
        (this->AnimTrajectoryData).TranslationCurve.ArrayNum = 0;
        if (iVar43 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&this_00->AllocatorInstance,0,
                     &(this->AnimTrajectoryData).TranslationCurve.ArrayMax);
        }
      }
      iVar43 = (this->AnimTrajectoryData).RotationCurve.ArrayNum;
      uVar94 = iVar43 - 1;
      uVar39 = 0;
      if ((int)uVar94 < iVar43) {
        uVar39 = ~uVar94 >> 0x1f;
      }
      if ((uVar39 == 0) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar28)) {
        pcVar8 = (code *)swi(3);
        pTVar35 = (TTransform<double> *)(*pcVar8)();
        return pTVar35;
      }
      iVar43 = (this->AnimTrajectoryData).RotationCurve.ArrayNum;
      pFVar41 = (this_01->AllocatorInstance).Data;
      if (fVar67 < *(float *)(pFVar41 + ((longlong)iVar43 + -1) * 4) ||
          fVar67 == *(float *)(pFVar41 + ((longlong)iVar43 + -1) * 4)) {
        pFVar7 = pFVar41 + (longlong)iVar43 * 4;
        while( true ) {
          if ((this->AnimTrajectoryData).RotationCurve.ArrayNum != iVar43) {
            local_fd7[0] = 0;
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_fd7);
          }
          if (pFVar41 == pFVar7) break;
          iVar6 = (this->AnimTrajectoryData).RotationCurve.ArrayNum;
          uVar94 = iVar6 - 1;
          uVar39 = 0;
          if ((int)uVar94 < iVar6) {
            uVar39 = ~uVar94 >> 0x1f;
          }
          if ((uVar39 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          *(float *)pFVar41 =
               *(float *)pFVar41 /
               *(float *)((this_01->AllocatorInstance).Data +
                         (longlong)(this->AnimTrajectoryData).RotationCurve.ArrayNum * 4 + -4);
          pFVar41 = pFVar41 + 4;
        }
      }
      else {
        iVar43 = (this->AnimTrajectoryData).RotationCurve.ArrayMax;
        (this->AnimTrajectoryData).RotationCurve.ArrayNum = 0;
        if (iVar43 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&this_01->AllocatorInstance,0,
                     &(this->AnimTrajectoryData).RotationCurve.ArrayMax);
        }
      }
      dVar95 = UE::Math::TQuat<double>::Identity.Y;
      uVar42 = 0;
      if ((this->bEnableSteering != false) && ((this->SteeringSettings).bEnableSmoothing != false))
      {
        (this->FilteredSteeringTarget).X = UE::Math::TQuat<double>::Identity.X;
        (this->FilteredSteeringTarget).Y = dVar95;
        dVar95 = UE::Math::TQuat<double>::Identity.W;
        (this->FilteredSteeringTarget).Z = UE::Math::TQuat<double>::Identity.Z;
        (this->FilteredSteeringTarget).W = dVar95;
        dVar95 = UE::Math::TQuat<double>::Identity.Y;
        (this->TargetSmoothingState).PrevTarget.X = UE::Math::TQuat<double>::Identity.X;
        (this->TargetSmoothingState).PrevTarget.Y = dVar95;
        dVar95 = UE::Math::TQuat<double>::Identity.W;
        (this->TargetSmoothingState).PrevTarget.Z = UE::Math::TQuat<double>::Identity.Z;
        (this->TargetSmoothingState).PrevTarget.W = dVar95;
        uVar27 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Y = (double)uVar27;
        (this->TargetSmoothingState).AngularVelocity.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        (this->TargetSmoothingState).bPrevTargetValid = false;
        local_c68.X = UE::Math::TQuat<double>::Identity.X;
        local_c68.Y = UE::Math::TQuat<double>::Identity.Y;
        local_c48.X = (this->FilteredSteeringTarget).X;
        local_c48.Y = (this->FilteredSteeringTarget).Y;
        local_c68.Z = UE::Math::TQuat<double>::Identity.Z;
        local_c68.W = UE::Math::TQuat<double>::Identity.W;
        local_c48.Z = (this->FilteredSteeringTarget).Z;
        local_c48.W = (this->FilteredSteeringTarget).W;
        pTVar32 = UKismetMathLibrary::QuaternionSpringInterp
                            (&local_ae8,&local_c48,&local_c68,&this->TargetSmoothingState,
                             (this->SteeringSettings).SmoothStiffness,
                             (this->SteeringSettings).SmoothDamping,local_fd4,__real_3f800000,0.0,
                             true);
        dVar95 = pTVar32->Y;
        (this->FilteredSteeringTarget).X = pTVar32->X;
        (this->FilteredSteeringTarget).Y = dVar95;
        dVar95 = pTVar32->W;
        (this->FilteredSteeringTarget).Z = pTVar32->Z;
        (this->FilteredSteeringTarget).W = dVar95;
      }
      pTVar1 = &this->WarpedTrajectory;
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (pTVar1,(this->AnimTrajectoryData).Trajectory.ArrayNum,Default);
      local_c28.X = local_a08.Rotation.XY.m128d_f64[0];
      local_c28.Y = local_a08.Rotation.XY.m128d_f64[1];
      local_d28._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_d28._s_0.Y = _UNK_15061cbc8;
      local_d28._s_0.Z = 0.0;
      local_c28.Z = local_a08.Rotation.ZW.m128d_f64[0];
      local_c28.W = local_a08.Rotation.ZW.m128d_f64[1];
      UE::Math::TQuat<double>::RotateVector
                (&local_c28,(TVector<double> *)&local_e88._s_0,(TVector<double> *)&local_d28._s_0);
      iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
      uVar96 = iVar43 - 1;
      uVar94 = ~uVar96 >> 0x1f;
      uVar39 = 0;
      if ((int)uVar96 < iVar43) {
        uVar39 = uVar94;
      }
      if (uVar39 == 0) {
        uVar94 = 0x506106c8;
        bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar28) {
          pcVar8 = (code *)swi(3);
          pTVar35 = (TTransform<double> *)(*pcVar8)();
          return pTVar35;
        }
      }
      iVar43 = (this->AnimTrajectoryData).Trajectory.ArrayNum;
      pFVar7 = (this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data;
      lVar46 = (longlong)iVar43 * 0x60;
      pFVar41 = pFVar7 + lVar46 + -0x10;
      auVar81._0_8_ = (double)CONCAT44(uVar40 & *(uint *)(pFVar41 + 4),uVar38 & *(uint *)pFVar41);
      auVar81._8_4_ = uVar44 & *(uint *)(pFVar41 + 8);
      auVar81._12_4_ = uVar103 & *(uint *)(pFVar41 + 0xc);
      auVar71._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar81._8_8_);
      auVar71._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar81._0_8_);
      uVar39 = movmskpd(uVar94,auVar71);
      pFVar41 = pFVar7 + lVar46 + -0x20;
      auVar82._0_8_ = (double)CONCAT44(uVar40 & *(uint *)(pFVar41 + 4),uVar38 & *(uint *)pFVar41);
      auVar82._8_4_ = uVar44 & *(uint *)(pFVar41 + 8);
      auVar82._12_4_ = uVar103 & *(uint *)(pFVar41 + 0xc);
      auVar58._8_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar82._8_8_);
      auVar58._0_8_ =
           -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar82._0_8_);
      iVar43 = movmskpd(iVar43,auVar58);
      if ((uVar39 & 0x3fffffff) == 0 && iVar43 == 0) {
        local_5e8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_5e8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_5e8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_5e8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_5e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_5e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
      }
      else {
        UE::Math::TTransform<double>::InverseFast
                  ((TTransform<double> *)(pFVar7 + lVar46 + -0x60),&local_5e8);
      }
      if (0 < local_fa8) {
        local_fb0 = local_fa8;
        uVar47 = uVar42;
        do {
          uVar40 = (uint)uVar42;
          uVar44 = ~uVar40 >> 0x1f;
          uVar38 = 0;
          if ((int)uVar40 < (this->AnimTrajectoryData).Trajectory.ArrayNum) {
            uVar38 = uVar44;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          local_768.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_768.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_768.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_768.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_fc8 = (double)((longlong)(int)uVar40 * 0x60);
          local_768.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_768.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_768.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_768.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_768.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_768.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_768.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_768.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_768,
                     (TTransform<double> *)
                     ((this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data +
                     (longlong)local_fc8),&local_a08);
          uVar38 = 0;
          if ((int)uVar40 < (this->AnimTrajectoryData).Trajectory.ArrayNum) {
            uVar38 = uVar44;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          local_4c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_4c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_4c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_4c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_4c8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_4c8.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_4c8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_4c8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_4c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_4c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_4c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_4c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_4c8,
                     (TTransform<double> *)
                     ((this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data +
                     (longlong)local_fc8),&local_5e8);
          local_648.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_648.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_648.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_648.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_648.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_648.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_648.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_648.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_648.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_648.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_648.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_648.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_648,&local_4c8,&this->TargetTransform);
          dVar97 = local_768.Translation.XY.m128d_f64[1];
          dVar95 = local_768.Translation.XY.m128d_f64[0];
          dVar100 = local_768.Translation.XY.m128d_f64[0] - local_ea0;
          local_fc8 = local_768.Translation.XY.m128d_f64[1] - dStack_e98;
          local_e70 = local_768.Translation.XY.m128d_f64[0];
          dStack_e68 = local_768.Translation.XY.m128d_f64[1];
          local_e60 = local_768.Translation.ZW.m128d_f64[0];
          local_ea0 = local_768.Translation.XY.m128d_f64[0];
          dStack_e98 = local_768.Translation.XY.m128d_f64[1];
          fVar67 = (float)(int)uVar40 * fVar51 + this->ActualStartTime;
          local_e90 = local_768.Translation.ZW.m128d_f64[0];
          if (this->bSeparateTranslationCurves == false) {
            fVar51 = GetWeight(this,fVar67,&this->TranslationWarpingCurve);
            local_ba0 = local_648.Translation.XY.m128d_f64[0];
            dStack_b98 = local_648.Translation.XY.m128d_f64[1];
            dVar102 = (double)fVar51;
            local_b90 = local_648.Translation.ZW.m128d_f64[0];
            dVar95 = (local_648.Translation.XY.m128d_f64[0] - dVar95) * dVar102 + dVar95;
            dVar97 = (local_648.Translation.XY.m128d_f64[1] - dVar97) * dVar102 + dVar97;
            local_f20 = (local_648.Translation.ZW.m128d_f64[0] - local_e60) * dVar102 + local_e60;
          }
          else {
            fVar67 = GetWeight(this,fVar67,&this->TranslationWarpingCurve_InMovementDirection);
            fVar51 = GetWeight(this,(float)(int)uVar40 * fVar51 + this->ActualStartTime,
                               &this->TranslationWarpingCurve_OutOfMovementDirection);
            local_bb8._8_8_ = local_648.Translation.XY.m128d_f64[1];
            local_bb8._0_8_ = local_648.Translation.XY.m128d_f64[0];
            local_ba8 = local_648.Translation.ZW.m128d_f64[0];
            dVar87 = (double)fVar67;
            dVar102 = (local_648.Translation.XY.m128d_f64[1] - dVar97) * local_e88._s_0.Y +
                      (local_648.Translation.XY.m128d_f64[0] - dVar95) * local_e88._s_0.X +
                      (local_648.Translation.ZW.m128d_f64[0] - local_e60) * local_e88._s_0.Z;
            dVar68 = (double)fVar51;
            dVar95 = ((local_648.Translation.XY.m128d_f64[0] - dVar95) - dVar102 * local_e88._s_0.X)
                     * dVar68 + dVar87 * dVar102 * local_e88._s_0.X + dVar95;
            local_f20 = ((local_648.Translation.ZW.m128d_f64[0] - local_e60) -
                        dVar102 * local_e88._s_0.Z) * dVar68 +
                        dVar87 * dVar102 * local_e88._s_0.Z + local_e60;
            dVar97 = ((local_648.Translation.XY.m128d_f64[1] - dVar97) - dVar102 * local_e88._s_0.Y)
                     * dVar68 + dVar87 * dVar102 * local_e88._s_0.Y + dVar97;
          }
          dVar102 = local_f20;
          local_e48 = local_f20;
          uVar38 = 0;
          if ((int)uVar40 < (this->WarpedTrajectory).ArrayNum) {
            uVar38 = uVar44;
          }
          dVar87 = dVar95 - local_e58;
          dVar68 = dVar97 - dStack_e50;
          local_f30 = dVar95;
          dStack_f28 = dVar97;
          local_e58 = dVar95;
          dStack_e50 = dVar97;
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          pFVar41 = pFVar7 + uVar47 + 0x20;
          *(double *)pFVar41 = dVar95;
          *(double *)(pFVar41 + 8) = dVar97;
          pFVar7 = pFVar7 + uVar47 + 0x30;
          *(double *)pFVar7 = dVar102;
          *(double *)(pFVar7 + 8) = 0.0;
          uVar38 = 0;
          if ((int)uVar40 < (this->WarpedTrajectory).ArrayNum) {
            uVar38 = uVar44;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          dVar77 = local_768.Rotation.ZW.m128d_f64[1];
          dVar102 = local_768.Rotation.ZW.m128d_f64[0];
          dVar97 = local_768.Rotation.XY.m128d_f64[1];
          dVar95 = local_768.Rotation.XY.m128d_f64[0];
          pFVar7 = (pTVar1->AllocatorInstance).Data;
          local_ac8 = local_768.Rotation.XY.m128d_f64[0];
          dStack_ac0 = local_768.Rotation.XY.m128d_f64[1];
          pFVar41 = pFVar7 + uVar47;
          *(double *)pFVar41 = local_768.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar41 + 8) = local_768.Rotation.XY.m128d_f64[1];
          pFVar7 = pFVar7 + uVar47 + 0x10;
          *(double *)pFVar7 = local_768.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar7 + 8) = local_768.Rotation.ZW.m128d_f64[1];
          if ((0 < (int)uVar40) && (this->bEnableSteering != false)) {
            local_e28._s_0.Y = local_fc8;
            local_e40._s_0.Z = 0.0;
            local_e28._s_0.Z = 0.0;
            local_e40._s_0.X = dVar87;
            local_e40._s_0.Y = dVar68;
            local_e28._s_0.X = dVar100;
            UE::Math::TQuat<double>::FindBetweenVectors
                      (&local_f88,(TVector<double> *)&local_e28._s_0,
                       (TVector<double> *)&local_e40._s_0);
            uVar98 = (undefined4)((ulonglong)dVar95 >> 0x20);
            uVar106 = (undefined4)((ulonglong)dVar102 >> 0x20);
            uVar99 = (undefined4)((ulonglong)dVar77 >> 0x20);
            uVar105 = (undefined4)((ulonglong)dVar97 >> 0x20);
            if ((this->SteeringSettings).bEnableSmoothing == false) {
              dVar100 = __real_bff0000000000000;
              if ((__real_bff0000000000000 <= local_f88.W) &&
                 (dVar100 = local_f88.W, __real_3ff0000000000000 <= local_f88.W)) {
                dVar100 = __real_3ff0000000000000;
              }
              dVar100 = acos(dVar100);
              if (dVar100 + dVar100 < (double)local_fc0) {
                uVar38 = 0;
                if ((int)uVar40 < (this->WarpedTrajectory).ArrayNum) {
                  uVar38 = uVar44;
                }
                if ((uVar38 == 0) &&
                   (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar28)) {
                  pcVar8 = (code *)swi(3);
                  pTVar35 = (TTransform<double> *)(*pcVar8)();
                  return pTVar35;
                }
                dVar12 = (double)CONCAT44(local_f88.X._4_4_,local_f88.X._0_4_);
                auVar89._8_4_ = local_f88.Y._0_4_;
                auVar89._0_8_ = dVar12;
                auVar89._12_4_ = local_f88.Y._4_4_;
                pFVar41 = (pTVar1->AllocatorInstance).Data;
                auVar84._8_4_ = SUB84(dVar95,0);
                auVar84._0_8_ = dVar95;
                auVar84._12_4_ = uVar98;
                auVar61._8_4_ = SUB84(dVar77,0);
                auVar61._0_8_ = dVar77;
                auVar61._12_4_ = uVar99;
                auVar73._8_4_ = SUB84(dVar97,0);
                auVar73._0_8_ = dVar97;
                auVar73._12_4_ = uVar105;
                dVar91 = auVar89._8_8_;
                dVar100 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
                dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
                auVar62._8_4_ = SUB84(dVar102,0);
                auVar62._0_8_ = dVar102;
                auVar62._12_4_ = uVar106;
                dVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
                dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
                dVar87 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                dVar15 = dVar95 * local_f88.Z *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                         dVar77 * dVar91 +
                         dVar97 * local_f88.W *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                         dVar102 * dVar12 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                auVar14._8_4_ = SUB84(dVar15,0);
                auVar14._0_8_ =
                     dVar95 * local_f88.W *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar77 * dVar12 +
                     dVar97 * local_f88.Z *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar102 * dVar91 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                *(undefined1 (*) [16])(pFVar41 + uVar47) = auVar14;
                pFVar41 = pFVar41 + uVar47 + 0x10;
                *(double *)pFVar41 =
                     dVar95 * dVar91 * dVar100 + dVar77 * local_f88.Z + dVar97 * dVar12 * dVar68 +
                     dVar102 * local_f88.W * dVar87;
                *(double *)(pFVar41 + 8) =
                     auVar84._8_8_ * dVar12 * dVar9 + auVar61._8_8_ * local_f88.W +
                     auVar73._8_8_ * dVar91 * dVar10 + auVar62._8_8_ * local_f88.Z * dVar11;
              }
            }
            else {
              dVar100 = __real_bff0000000000000;
              if ((__real_bff0000000000000 <= local_f88.W) &&
                 (dVar100 = local_f88.W, __real_3ff0000000000000 <= local_f88.W)) {
                dVar100 = __real_3ff0000000000000;
              }
              dVar100 = acos(dVar100);
              if (dVar100 + dVar100 < (double)local_fc0) {
                local_c08.X = (double)CONCAT44(local_f88.X._4_4_,local_f88.X._0_4_);
                local_c08.Y = (double)CONCAT44(local_f88.Y._4_4_,local_f88.Y._0_4_);
                local_ce8.X = (this->FilteredSteeringTarget).X;
                local_ce8.Y = (this->FilteredSteeringTarget).Y;
                local_c08.Z = local_f88.Z;
                local_c08.W = local_f88.W;
                local_ce8.Z = (this->FilteredSteeringTarget).Z;
                local_ce8.W = (this->FilteredSteeringTarget).W;
                pTVar32 = UKismetMathLibrary::QuaternionSpringInterp
                                    (&local_aa8,&local_ce8,&local_c08,&this->TargetSmoothingState,
                                     (this->SteeringSettings).SmoothStiffness,
                                     (this->SteeringSettings).SmoothDamping,local_fd4,
                                     __real_3f800000,0.0,true);
                dVar100 = pTVar32->Y;
                (this->FilteredSteeringTarget).X = pTVar32->X;
                (this->FilteredSteeringTarget).Y = dVar100;
                dVar100 = pTVar32->W;
                (this->FilteredSteeringTarget).Z = pTVar32->Z;
                (this->FilteredSteeringTarget).W = dVar100;
              }
              local_f88.X._0_4_ = *(undefined4 *)&(this->FilteredSteeringTarget).X;
              local_f88.X._4_4_ = *(undefined4 *)((longlong)&(this->FilteredSteeringTarget).X + 4);
              local_f88.Y._0_4_ = *(undefined4 *)&(this->FilteredSteeringTarget).Y;
              local_f88.Y._4_4_ = *(undefined4 *)((longlong)&(this->FilteredSteeringTarget).Y + 4);
              local_f88.Z = (this->FilteredSteeringTarget).Z;
              local_f88.W = (this->FilteredSteeringTarget).W;
              uVar38 = 0;
              if ((int)uVar40 < (this->WarpedTrajectory).ArrayNum) {
                uVar38 = uVar44;
              }
              if ((uVar38 == 0) &&
                 (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar28)) {
                pcVar8 = (code *)swi(3);
                pTVar35 = (TTransform<double> *)(*pcVar8)();
                return pTVar35;
              }
              pFVar7 = (pTVar1->AllocatorInstance).Data;
              auVar83._8_4_ = SUB84(dVar95,0);
              auVar83._0_8_ = dVar95;
              auVar83._12_4_ = uVar98;
              auVar59._8_4_ = SUB84(dVar77,0);
              auVar59._0_8_ = dVar77;
              auVar59._12_4_ = uVar99;
              auVar72._8_4_ = SUB84(dVar97,0);
              auVar72._0_8_ = dVar97;
              auVar72._12_4_ = uVar105;
              auVar88._4_4_ = local_f88.X._4_4_;
              auVar88._0_4_ = local_f88.X._0_4_;
              auVar88._8_4_ = local_f88.Y._0_4_;
              auVar88._12_4_ = local_f88.Y._4_4_;
              dVar66 = (double)CONCAT44(local_f88.X._4_4_,local_f88.X._0_4_);
              dVar90 = auVar88._8_8_;
              auVar89._8_8_ = dVar66;
              auVar89._0_8_ = dVar90;
              dVar100 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
              dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
              dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
              auVar60._8_4_ = SUB84(dVar102,0);
              auVar60._0_8_ = dVar102;
              auVar60._12_4_ = uVar106;
              dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
              dVar68 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
              dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
              dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar87 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar91 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              pFVar41 = pFVar7 + uVar47;
              *(double *)pFVar41 =
                   dVar95 * local_f88.W *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                   dVar77 * (double)CONCAT44(local_f88.X._4_4_,local_f88.X._0_4_) +
                   dVar97 * local_f88.Z *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                   dVar102 * dVar90 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              *(double *)(pFVar41 + 8) =
                   dVar95 * local_f88.Z * dVar10 +
                   dVar77 * (double)CONCAT44(local_f88.Y._4_4_,local_f88.Y._0_4_) +
                   dVar97 * local_f88.W * dVar11 + dVar102 * dVar66 * dVar12;
              pFVar7 = pFVar7 + uVar47 + 0x10;
              *(double *)pFVar7 =
                   dVar95 * dVar90 * dVar100 + dVar77 * local_f88.Z +
                   dVar97 * (double)CONCAT44(local_f88.X._4_4_,local_f88.X._0_4_) * dVar68 +
                   dVar102 * local_f88.W * dVar87;
              *(double *)(pFVar7 + 8) =
                   auVar83._8_8_ * dVar66 * dVar9 + auVar59._8_8_ * local_f88.W +
                   auVar72._8_8_ * (double)CONCAT44(local_f88.Y._4_4_,local_f88.Y._0_4_) * dVar15 +
                   auVar60._8_8_ * local_f88.Z * dVar91;
            }
          }
          uVar42 = (ulonglong)(uVar40 + 1);
          uVar47 = uVar47 + 0x60;
          local_fb0 = local_fb0 + -1;
          fVar51 = __real_3d088889;
        } while (local_fb0 != 0);
        local_fb0 = 0;
        uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar44 = _UNK_15061cc88;
        uVar103 = _UNK_15061cc8c;
      }
      fVar104 = __real_3d088889;
      dVar95 = __real_3e45798ee0000000;
      uVar42 = 0;
      pUVar29 = local_fa0;
      __return_storage_ptr__ = local_fb8;
      param_2 = local_fd4;
      fVar51 = local_fd0;
      if (0 < local_fa8) {
        uVar47 = uVar42;
        uVar48 = uVar42;
        do {
          uVar44 = (uint)uVar42;
          fVar51 = GetWeight(this,(float)(int)uVar44 * fVar104 + this->ActualStartTime,
                             &this->RotationWarpingCurve);
          uVar40 = ~uVar44 >> 0x1f;
          uVar38 = 0;
          if ((int)uVar44 < (this->WarpedTrajectory).ArrayNum) {
            uVar38 = uVar40;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          pFVar7 = (this->WarpedTrajectory).AllocatorInstance.Data;
          pFVar41 = pFVar7 + uVar47;
          local_ca8.X = *(double *)pFVar41;
          local_ca8.Y = *(double *)(pFVar41 + 8);
          pFVar7 = pFVar7 + uVar47 + 0x10;
          local_ca8.Z = *(double *)pFVar7;
          local_ca8.W = *(double *)(pFVar7 + 8);
          uVar38 = 0;
          if ((int)uVar44 < (this->AnimTrajectoryData).Trajectory.ArrayNum) {
            uVar38 = uVar40;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          local_468.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_468.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_468.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_468.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_468.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_468.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_468.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_468.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_468.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_468.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_468.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_468.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_468,
                     (TTransform<double> *)
                     ((this->AnimTrajectoryData).Trajectory.AllocatorInstance.Data + uVar47),
                     &local_5e8);
          local_588.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_588.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_588.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_588.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_588.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_588.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_588.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_588.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_588.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_588.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_588.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_588.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply(&local_588,&local_468,&this->TargetTransform);
          uVar38 = 0;
          if ((int)uVar44 < (this->WarpedTrajectory).ArrayNum) {
            uVar38 = uVar40;
          }
          if ((uVar38 == 0) &&
             (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar28)) {
            pcVar8 = (code *)swi(3);
            pTVar35 = (TTransform<double> *)(*pcVar8)();
            return pTVar35;
          }
          pFVar41 = (this->WarpedTrajectory).AllocatorInstance.Data;
          local_cc8.X = local_588.Rotation.XY.m128d_f64[0];
          local_cc8.Y = local_588.Rotation.XY.m128d_f64[1];
          local_cc8.Z = local_588.Rotation.ZW.m128d_f64[0];
          local_cc8.W = local_588.Rotation.ZW.m128d_f64[1];
          pTVar32 = UE::Math::TQuat<double>::Slerp_NotNormalized
                              (&local_a88,&local_ca8,&local_cc8,(double)fVar51);
          uVar42 = (ulonglong)(uVar44 + 1);
          local_d38 = dVar95;
          uVar48 = uVar48 + 1;
          dVar97 = pTVar32->X;
          dVar100 = pTVar32->Y;
          dVar102 = pTVar32->Z;
          dVar68 = pTVar32->W;
          dVar87 = dVar102 * dVar102 + dVar97 * dVar97;
          dVar77 = dVar68 * dVar68 + dVar100 * dVar100;
          auVar63._8_4_ = SUB84(dVar77,0);
          auVar63._0_8_ = dVar87;
          auVar63._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
          auVar64._0_8_ = auVar63._8_8_ + dVar87;
          auVar64._8_8_ = dVar87 + dVar77;
          auVar89 = sqrtpd(auVar89,auVar64);
          uVar49 = -(ulonglong)(dVar95 <= auVar64._0_8_);
          uVar50 = -(ulonglong)(dVar95 <= auVar64._8_8_);
          auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar89);
          uVar38 = (uint)(uVar49 >> 0x20);
          uVar40 = (uint)(uVar50 >> 0x20);
          local_b88._0_8_ = uVar49 & (ulonglong)(auVar79._0_8_ * dVar97);
          uVar21 = uVar50 & (ulonglong)(auVar79._8_8_ * dVar100);
          local_b88._8_4_ = (undefined4)uVar21;
          local_b88._12_4_ = (undefined4)(uVar21 >> 0x20);
          auVar74._0_4_ =
               ~(uint)uVar49 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar74._4_4_ =
               ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar74._8_4_ =
               ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar74._12_4_ =
               ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          local_b88 = local_b88 | auVar74;
          auVar79 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar89);
          auVar75._0_8_ = (ulonglong)(auVar79._0_8_ * dVar102) & uVar49;
          uVar21 = (ulonglong)(auVar79._8_8_ * dVar68) & uVar50;
          auVar75._8_4_ = (undefined4)uVar21;
          auVar75._12_4_ = (undefined4)(uVar21 >> 0x20);
          local_b78._0_4_ =
               ~(uint)uVar49 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          local_b78._4_4_ =
               ~uVar38 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          local_b78._8_4_ =
               ~(uint)uVar50 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          local_b78._12_4_ =
               ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          local_b78 = local_b78 | auVar75;
          *(undefined1 (*) [16])(pFVar41 + uVar47) = local_b88;
          *(undefined1 (*) [16])(pFVar41 + uVar47 + 0x10) = local_b78;
          uVar47 = uVar47 + 0x60;
          pUVar29 = local_fa0;
          __return_storage_ptr__ = local_fb8;
          param_2 = local_fd4;
          fVar51 = local_fd0;
          uVar38 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar40 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar44 = _UNK_15061cc88;
          uVar103 = _UNK_15061cc8c;
        } while ((longlong)uVar48 < local_fa8);
      }
      goto LAB_14cf17b22;
    }
  }
  dVar95 = (local_f38->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (local_f38->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar95;
  dVar95 = (local_f38->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (local_f38->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar95;
  dVar95 = (local_f38->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (local_f38->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar95;
  dVar95 = (local_f38->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (local_f38->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar95;
  dVar95 = (local_f38->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (local_f38->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar95;
  local_ec8 = (local_f38->Scale3D).ZW.m128d_f64[0];
  dStack_ec0 = (local_f38->Scale3D).ZW.m128d_f64[1];
LAB_14cf18863:
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_ec8;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dStack_ec0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesURootMotionModifier_PrecomputedWarp @ 14cf1bf60

void __cdecl
URootMotionModifier_PrecomputedWarp::StaticRegisterNativesURootMotionModifier_PrecomputedWarp(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

