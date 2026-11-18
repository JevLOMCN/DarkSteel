// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 11

// FOrbitBlendCameraNodeEvaluator @ 14d5fc690

FOrbitBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::FOrbitBlendCameraNodeEvaluator
          (FOrbitBlendCameraNodeEvaluator *this)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->DrivingBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  *(undefined4 *)&this->_padding_ = 7;
  this->_padding_ = (longlong)&___7FOrbitBlendCameraNodeEvaluator_Cameras_UE__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DeltaLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DeltaLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->DeltaLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DeltaRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DeltaRotation).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->State = Active;
  (this->DeltaRotation).Roll = dVar2;
  this->SmoothingTimeLeft = -1.0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,NeedsSerialize);
  return this;
}

// ClosestPoints @ 14d60e5d0

bool __cdecl
UE::Cameras::FOrbitBlendCameraNodeEvaluator::ClosestPoints
          (TRay<double> *param_1,TRay<double> *param_2,double *param_3,double *param_4)

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
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar14 = (param_1->Direction).field0_0x0._s_0.X;
  dVar1 = (param_2->Direction).field0_0x0._s_0.X;
  dVar2 = (param_2->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_2->Direction).field0_0x0._s_0.Z;
  dVar4 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar7 = (param_2->Origin).field0_0x0._s_0.X - (param_1->Origin).field0_0x0._s_0.X;
  dVar8 = (param_2->Origin).field0_0x0._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y;
  dVar9 = (param_2->Origin).field0_0x0._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z;
  dVar10 = __real_3ff0000000000000 / SQRT(dVar4 * dVar4 + dVar14 * dVar14 + dVar5 * dVar5);
  dVar13 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
  dVar12 = dVar2 * dVar13 * dVar4 * dVar10 + dVar1 * dVar13 * dVar14 * dVar10 +
           dVar3 * dVar13 * dVar5 * dVar10;
  dVar11 = __real_3ff0000000000000 - dVar12 * dVar12;
  if (dVar11 != 0.0) {
    dVar6 = __real_3ff0000000000000 / dVar11;
    dVar1 = dVar1 * dVar13 * dVar7 + dVar2 * dVar13 * dVar8 + dVar3 * dVar13 * dVar9;
    dVar14 = dVar14 * dVar10 * dVar7 + dVar4 * dVar10 * dVar8 + dVar5 * dVar10 * dVar9;
    *param_3 = (dVar14 - dVar1 * dVar12) * dVar6;
    *param_4 = (dVar14 * dVar12 - dVar1) * dVar6;
  }
  return dVar11 != 0.0;
}

// GetTypeID @ 14d61e660

FCameraObjectTypeID * __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::GetTypeID(FOrbitBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621380

bool __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::IsKindOf
          (FOrbitBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBlendParameters @ 14d622d00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnBlendParameters
          (FOrbitBlendCameraNodeEvaluator *this,FCameraNodePreBlendParams *param_1,
          FCameraNodePreBlendResult *param_2)

{
  if (this->DrivingBlendEvaluator != (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FBlendCameraNodeEvaluator::BlendParameters
              ((FBlendCameraNodeEvaluator *)this->DrivingBlendEvaluator,param_1,param_2);
    return;
  }
  FCameraVariableTable::Override
            (param_2->VariableTable,param_1->ChildVariableTable,param_1->VariableTableFilter);
  param_2->bIsBlendFull = true;
  param_2->bIsBlendFinished = true;
  return;
}

// OnBlendResults @ 14d6231f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnBlendResults
          (FOrbitBlendCameraNodeEvaluator *this,FCameraNodeBlendParams *param_1,
          FCameraNodeBlendResult *param_2)

{
  FCameraPoseFlags *pFVar1;
  FCameraNodeEvaluationResult *this_00;
  FCameraNodeEvaluationResult *this_01;
  undefined1 auVar2 [16];
  double dVar3;
  float fVar4;
  undefined8 uVar5;
  FState FVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar12;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  TVector<double>_u_0 local_190;
  TRotator<double> local_178;
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  
  this_00 = param_2->BlendedResult;
  this_01 = param_1->ChildResult;
  if (this->DrivingBlendEvaluator == (FSimpleBlendCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluationResult::OverrideAll(this_00,this_01,false);
    this_00->bIsCameraCut = true;
    param_2->bIsBlendFull = true;
    param_2->bIsBlendFinished = true;
    return;
  }
  FCameraPose::GetAimRay(&this_00->CameraPose,(TRay<double> *)&local_160._s_0);
  FCameraPose::GetAimRay(&this_01->CameraPose,(TRay<double> *)&local_130._s_0);
  local_100 = (this_00->CameraPose).Location.field0_0x0._s_0.X;
  dStack_f8 = (this_00->CameraPose).Location.field0_0x0._s_0.Y;
  local_f0 = (this_01->CameraPose).Location.field0_0x0._s_0.X;
  dStack_e8 = (this_01->CameraPose).Location.field0_0x0._s_0.Y;
  local_190._s_0.Z = (this_00->CameraPose).Location.field0_0x0._s_0.Z;
  local_178.Roll = (this_01->CameraPose).Location.field0_0x0._s_0.Z;
  FBlendCameraNodeEvaluator::BlendResults
            ((FBlendCameraNodeEvaluator *)this->DrivingBlendEvaluator,param_1,param_2);
  dVar40 = dStack_e8;
  dVar20 = dStack_f8;
  dVar12 = local_178.Roll;
  uVar5 = local_190._s_0.Z;
  dVar32 = __real_4076800000000000;
  if (param_2->bIsBlendFull != false) {
    return;
  }
  if (this->State != Active) goto LAB_14d6238a2;
  dVar21 = __real_3ff0000000000000 /
           SQRT(local_140 * local_140 + local_148 * local_148 + local_138 * local_138);
  dVar22 = __real_3ff0000000000000 /
           SQRT(local_110 * local_110 + local_118 * local_118 + local_108 * local_108);
  dVar36 = local_110 * dVar22 * local_140 * dVar21 + local_118 * dVar22 * local_148 * dVar21 +
           local_108 * dVar22 * local_138 * dVar21;
  dVar23 = __real_3ff0000000000000 - dVar36 * dVar36;
  if (dVar23 != 0.0) {
    dVar23 = __real_3ff0000000000000 / dVar23;
    dVar22 = local_118 * dVar22 * (local_130._s_0.X - local_160._s_0.X) +
             local_110 * dVar22 * (local_130._s_0.Y - local_160._s_0.Y) +
             local_108 * dVar22 * (local_130._s_0.Z - local_160._s_0.Z);
    dVar38 = local_148 * dVar21 * (local_130._s_0.X - local_160._s_0.X) +
             local_140 * dVar21 * (local_130._s_0.Y - local_160._s_0.Y) +
             local_138 * dVar21 * (local_130._s_0.Z - local_160._s_0.Z);
    dVar21 = (dVar38 - dVar22 * dVar36) * dVar23;
    dVar23 = (dVar38 * dVar36 - dVar22) * dVar23;
    if ((0.0 < dVar21) && (0.0 < dVar23)) {
      dVar11 = local_138 * dVar21 + local_160._s_0.Z;
      dVar38 = local_148 * dVar21 + local_160._s_0.X;
      dVar3 = local_140 * dVar21 + local_160._s_0.Y;
      dVar24 = local_118 * dVar23 + local_130._s_0.X;
      dVar22 = (double)this->DrivingBlendEvaluator->BlendFactor;
      dVar30 = local_108 * dVar23 + local_130._s_0.Z;
      dVar36 = local_110 * dVar23 + local_130._s_0.Y;
      dVar21 = (dVar24 - dVar38) * dVar22 + dVar38;
      dVar31 = (dVar30 - dVar11) * dVar22 + dVar11;
      dVar25 = (dVar36 - dVar3) * dVar22 + dVar3;
      dVar32 = dVar21 - ((local_f0 - local_100) * dVar22 + local_100);
      dVar42 = dVar25 - ((dStack_e8 - dStack_f8) * dVar22 + dStack_f8);
      dVar39 = dVar31 - ((local_178.Roll - local_190._s_0.Z) * dVar22 + local_190._s_0.Z);
      dVar23 = __real_3ff0000000000000 / SQRT(dVar42 * dVar42 + dVar32 * dVar32 + dVar39 * dVar39);
      local_190._s_0.X = dVar23 * dVar32;
      local_190._s_0.Y = dVar23 * dVar42;
      local_190._s_0.Z = dVar23 * dVar39;
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_190._s_0,&local_178)
      ;
      dVar36 = dVar36 - dVar40;
      dVar40 = (double)(float)(this_00->CameraPose).Rotation.Roll;
      dVar24 = dVar24 - local_f0;
      dVar30 = dVar30 - dVar12;
      auVar13._0_8_ = (dVar11 - (double)uVar5) * (dVar11 - (double)uVar5);
      auVar13._8_8_ = 0;
      auVar33._0_8_ = dVar30 * dVar30;
      auVar33._8_8_ = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar36 * dVar36 + dVar24 * dVar24 + auVar33._0_8_;
      auVar33 = sqrtpd(auVar33,auVar14);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (dVar3 - dVar20) * (dVar3 - dVar20) +
                     (dVar38 - local_100) * (dVar38 - local_100) + auVar13._0_8_;
      auVar14 = sqrtpd(auVar13,auVar2);
      dVar32 = (auVar33._0_8_ - auVar14._0_8_) * dVar22 + auVar14._0_8_;
      dVar21 = dVar21 - local_190._s_0.X * dVar32;
      dVar12 = (this_00->CameraPose).Location.field0_0x0._s_0.Y;
      dVar25 = dVar25 - local_190._s_0.Y * dVar32;
      dVar31 = dVar31 - local_190._s_0.Z * dVar32;
      dVar32 = (this_00->CameraPose).Location.field0_0x0._s_0.Z;
      (this->DeltaLocation).field0_0x0._s_0.X =
           dVar21 - (this_00->CameraPose).Location.field0_0x0._s_0.X;
      (this->DeltaLocation).field0_0x0._s_0.Y = dVar25 - dVar12;
      (this->DeltaLocation).field0_0x0._s_0.Z = dVar31 - dVar32;
      dVar12 = (this_00->CameraPose).Rotation.Yaw;
      dVar32 = (this_00->CameraPose).Rotation.Roll;
      (this->DeltaRotation).Pitch = local_178.Pitch - (this_00->CameraPose).Rotation.Pitch;
      (this->DeltaRotation).Yaw = local_178.Yaw - dVar12;
      (this->DeltaRotation).Roll = dVar40 - dVar32;
      if ((dVar21 != (this_00->CameraPose).Location.field0_0x0._s_0.X) ||
         ((dVar25 != (this_00->CameraPose).Location.field0_0x0._s_0.Y ||
          (dVar31 != (this_00->CameraPose).Location.field0_0x0._s_0.Z)))) {
        pFVar1->Location = true;
        (this_00->CameraPose).Location.field0_0x0._s_0.X = dVar21;
        (this_00->CameraPose).Location.field0_0x0._s_0.Y = dVar25;
        (this_00->CameraPose).Location.field0_0x0._s_0.Z = dVar31;
      }
      if (((local_178.Pitch != (this_00->CameraPose).Rotation.Pitch) ||
          (local_178.Yaw != (this_00->CameraPose).Rotation.Yaw)) ||
         (dVar40 != (this_00->CameraPose).Rotation.Roll)) {
        pFVar1->Rotation = true;
        (this_00->CameraPose).Rotation.Pitch = local_178.Pitch;
        (this_00->CameraPose).Rotation.Yaw = local_178.Yaw;
        (this_00->CameraPose).Rotation.Roll = dVar40;
      }
      goto LAB_14d6238a2;
    }
  }
  if ((((this->DeltaLocation).field0_0x0._s_0.X == 0.0) &&
      ((this->DeltaLocation).field0_0x0._s_0.Y == 0.0)) &&
     ((this->DeltaLocation).field0_0x0._s_0.Z == 0.0)) {
    dVar12 = FGenericPlatformMath::Fmod((this->DeltaRotation).Pitch,__real_4076800000000000);
    if (dVar12 < 0.0) {
      dVar12 = dVar12 + dVar32;
    }
    if (dVar12 != 0.0) goto LAB_14d62387c;
    dVar12 = FGenericPlatformMath::Fmod((this->DeltaRotation).Yaw,dVar32);
    if (dVar12 < 0.0) {
      dVar12 = dVar12 + dVar32;
    }
    if (dVar12 != 0.0) goto LAB_14d62387c;
    dVar12 = FGenericPlatformMath::Fmod((this->DeltaRotation).Roll,dVar32);
    if (dVar12 < 0.0) {
      dVar12 = dVar12 + dVar32;
    }
    FVar6 = Inactive;
    if (dVar12 != 0.0) goto LAB_14d62387c;
  }
  else {
LAB_14d62387c:
    FVar6 = SmoothingOut;
  }
  this->State = FVar6;
  fVar29 = GOrbitBlendDeactivationSmoothingTime;
  if (GOrbitBlendDeactivationSmoothingTime <= GOrbitBlendDeactivationSmoothingMinTime) {
    fVar29 = GOrbitBlendDeactivationSmoothingMinTime;
  }
  this->SmoothingTimeLeft = fVar29;
LAB_14d6238a2:
  if (this->State == SmoothingOut) {
    fVar29 = this->SmoothingTimeLeft - param_1->ChildParams->DeltaTime;
    this->SmoothingTimeLeft = fVar29;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (fVar29 <= 0.0) {
      (this->DeltaLocation).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->DeltaLocation).field0_0x0._s_0.Y = (double)uVar5;
      (this->DeltaLocation).field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar32 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      (this->DeltaRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      (this->DeltaRotation).Yaw = dVar32;
      (this->DeltaRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
      this->SmoothingTimeLeft = -1.0;
      this->State = Inactive;
    }
    else {
      fVar4 = GOrbitBlendDeactivationSmoothingTime;
      if (GOrbitBlendDeactivationSmoothingTime <= GOrbitBlendDeactivationSmoothingMinTime) {
        fVar4 = GOrbitBlendDeactivationSmoothingMinTime;
      }
      dVar40 = UE::Math::TRotator<double>::ZeroRotator.Pitch - (this->DeltaRotation).Pitch;
      auVar26._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Yaw - (this->DeltaRotation).Yaw;
      auVar26._8_8_ = 0;
      dVar22 = (double)((fVar4 - fVar29) / fVar4);
      auVar16._0_8_ = UE::Math::TRotator<double>::ZeroRotator.Roll - (this->DeltaRotation).Roll;
      auVar15._8_4_ = SUB84(auVar26._0_8_,0);
      auVar15._0_8_ = dVar40;
      auVar15._12_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
      auVar14 = divpd(auVar15,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar14 = roundpd(auVar26,auVar14,3);
      dVar32 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar27._0_8_ = auVar14._0_8_ * dVar32;
      dVar12 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar27._8_8_ = auVar14._8_8_ * dVar12;
      auVar16._8_8_ = 0;
      auVar14 = divpd(auVar16,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar40 = dVar40 - auVar27._0_8_;
      dVar23 = auVar26._0_8_ - auVar27._8_8_;
      auVar14 = roundpd(auVar27,auVar14,3);
      dVar21 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar17._8_4_ = SUB84(dVar23,0);
      auVar17._0_8_ = dVar40;
      auVar17._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar20 = auVar17._8_8_ + dVar12;
      dVar36 = auVar16._0_8_ - auVar14._0_8_ * dVar21;
      dVar38 = 0.0 - auVar14._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar7 = -(ulonglong)(0.0 <= dVar36);
      uVar9 = -(ulonglong)(0.0 <= dVar38);
      uVar8 = -(ulonglong)(0.0 <= dVar40);
      uVar10 = -(ulonglong)(0.0 <= dVar23);
      auVar28._0_8_ = uVar8 & (ulonglong)dVar40;
      auVar28._8_4_ = (undefined4)(uVar10 & (ulonglong)dVar23);
      auVar28._12_4_ = (undefined4)((uVar10 & (ulonglong)dVar23) >> 0x20);
      auVar37._0_4_ = ~(uint)uVar8 & SUB84(dVar40 + dVar32,0);
      auVar37._4_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)(dVar40 + dVar32) >> 0x20);
      auVar37._8_4_ = ~(uint)uVar10 & SUB84(dVar20,0);
      auVar37._12_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
      auVar34._0_8_ = uVar7 & (ulonglong)dVar36;
      auVar34._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar38);
      auVar34._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar38) >> 0x20);
      auVar37 = auVar37 | auVar28;
      auVar18._8_4_ = SUB84(dVar38,0);
      auVar18._0_8_ = dVar36;
      auVar18._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      dVar20 = auVar18._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar41._0_4_ = ~(uint)uVar7 & SUB84(dVar36 + dVar21,0);
      auVar41._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar36 + dVar21) >> 0x20);
      auVar41._8_4_ = ~(uint)uVar9 & SUB84(dVar20,0);
      auVar41._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar20 >> 0x20);
      uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar37._0_8_);
      uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar37._8_8_);
      auVar41 = auVar41 | auVar34;
      auVar35._0_8_ = uVar8 & (ulonglong)(auVar37._0_8_ - dVar32);
      uVar7 = uVar9 & (ulonglong)(auVar37._8_8_ - dVar12);
      auVar35._8_4_ = (undefined4)uVar7;
      auVar35._12_4_ = (undefined4)(uVar7 >> 0x20);
      auVar19._0_4_ = ~(uint)uVar8 & auVar37._0_4_;
      auVar19._4_4_ = ~(uint)(uVar8 >> 0x20) & auVar37._4_4_;
      auVar19._8_4_ = ~(uint)uVar9 & auVar37._8_4_;
      auVar19._12_4_ = ~(uint)(uVar9 >> 0x20) & auVar37._12_4_;
      uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar41._0_8_);
      dVar40 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
               (this->DeltaLocation).field0_0x0._s_0.X) * dVar22 +
               (this->DeltaLocation).field0_0x0._s_0.X +
               (this_00->CameraPose).Location.field0_0x0._s_0.X;
      dVar32 = (this->DeltaRotation).Pitch;
      dVar12 = (this->DeltaRotation).Yaw;
      dVar20 = (this->DeltaRotation).Roll;
      dVar36 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               (this->DeltaLocation).field0_0x0._s_0.Y) * dVar22 +
               (this->DeltaLocation).field0_0x0._s_0.Y +
               (this_00->CameraPose).Location.field0_0x0._s_0.Y;
      dVar23 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
               (this->DeltaLocation).field0_0x0._s_0.Z) * dVar22 +
               (this->DeltaLocation).field0_0x0._s_0.Z +
               (this_00->CameraPose).Location.field0_0x0._s_0.Z;
      if (((dVar40 != (this_00->CameraPose).Location.field0_0x0._s_0.X) ||
          (dVar36 != (this_00->CameraPose).Location.field0_0x0._s_0.Y)) ||
         (dVar23 != (this_00->CameraPose).Location.field0_0x0._s_0.Z)) {
        pFVar1->Location = true;
        (this_00->CameraPose).Location.field0_0x0._s_0.X = dVar40;
        (this_00->CameraPose).Location.field0_0x0._s_0.Y = dVar36;
        (this_00->CameraPose).Location.field0_0x0._s_0.Z = dVar23;
      }
      dVar20 = (double)(uVar7 & (ulonglong)(auVar41._0_8_ - dVar21) |
                       CONCAT44(~(uint)(uVar7 >> 0x20) & auVar41._4_4_,~(uint)uVar7 & auVar41._0_4_)
                       ) * dVar22 + dVar20 + (this_00->CameraPose).Rotation.Roll;
      dVar40 = SUB168(auVar35 | auVar19,0) * dVar22 + dVar32 + (this_00->CameraPose).Rotation.Pitch;
      dVar32 = SUB168(auVar35 | auVar19,8) * dVar22 + dVar12 + (this_00->CameraPose).Rotation.Yaw;
      if (((dVar40 != (this_00->CameraPose).Rotation.Pitch) ||
          (dVar32 != (this_00->CameraPose).Rotation.Yaw)) ||
         (dVar20 != (this_00->CameraPose).Rotation.Roll)) {
        pFVar1->Rotation = true;
        (this_00->CameraPose).Rotation.Pitch = dVar40;
        (this_00->CameraPose).Rotation.Yaw = dVar32;
        (this_00->CameraPose).Rotation.Roll = dVar20;
      }
      param_2->bIsBlendFull = false;
      param_2->bIsBlendFinished = false;
    }
  }
  return;
}

// OnBuild @ 14d623ff0

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnBuild
          (FOrbitBlendCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  FSimpleBlendCameraNodeEvaluator *pFVar4;
  
  if (this->_padding_ != 0) {
    pUVar2 = UOrbitBlendCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d624029;
    }
  }
  lVar3 = 0;
LAB_14d624029:
  if (*(UCameraNode **)(lVar3 + 0x38) != (UCameraNode *)0x0) {
    pFVar4 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FSimpleBlendCameraNodeEvaluator>
                       (param_1,*(UCameraNode **)(lVar3 + 0x38));
    this->DrivingBlendEvaluator = pFVar4;
  }
  return;
}

// OnBuildDebugBlocks @ 14d6249e0

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnBuildDebugBlocks
          (FOrbitBlendCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar1;
  double dVar2;
  FCameraDebugBlock *pFVar3;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar3 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x60,8);
  pFVar3[1]._padding_ = 0;
  pFVar3[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[1].Attachments.ArrayNum = 0;
  pFVar3[1].Attachments.ArrayMax = 0;
  pFVar3[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[1].Children.ArrayNum = 0;
  pFVar3[1].Children.ArrayMax = 0;
  pFVar3[2]._padding_ = 0;
  pFVar3[2].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Attachments).ArrayNum = 0;
  (pFVar3->Attachments).ArrayMax = 0;
  (pFVar3->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Children).ArrayNum = 0;
  (pFVar3->Children).ArrayMax = 0;
  pFVar3->_padding_ = (longlong)&___7FOrbitBlendCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar3);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar3);
  pFVar1 = (FScriptContainerElement *)(this->DeltaLocation).field0_0x0._s_0.Y;
  pFVar3[1]._padding_ = (longlong)(this->DeltaLocation).field0_0x0._s_0.X;
  pFVar3[1].Attachments.AllocatorInstance.Data = pFVar1;
  *(double *)&pFVar3[1].Attachments.ArrayNum = (this->DeltaLocation).field0_0x0._s_0.Z;
  dVar2 = (this->DeltaRotation).Yaw;
  pFVar3[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)(this->DeltaRotation).Pitch
  ;
  *(double *)&pFVar3[1].Children.ArrayNum = dVar2;
  pFVar3[2]._padding_ = (longlong)(this->DeltaRotation).Roll;
  *(float *)&pFVar3[2].Attachments.AllocatorInstance.Data = this->SmoothingTimeLeft;
  *(bool *)((longlong)&pFVar3[2].Attachments.AllocatorInstance.Data + 4) = this->State == Active;
  return;
}

// OnGetChildren @ 14d627750

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnGetChildren
          (FOrbitBlendCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FSimpleBlendCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = this->DrivingBlendEvaluator;
  local_18._First = (FCameraNodeEvaluator **)&local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnRun @ 14d62b990

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnRun
          (FOrbitBlendCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FSimpleBlendCameraNodeEvaluator *pFVar1;
  TVector<double>_u_0 TStack_28;
  
  pFVar1 = this->DrivingBlendEvaluator;
  if (pFVar1 == (FSimpleBlendCameraNodeEvaluator *)0x0) {
    return;
  }
  if ((pFVar1->_padding_ == 0) || (*(char *)(pFVar1->_padding_ + 0x30) != '\0')) {
    (**(code **)(pFVar1->_padding_ + 0x48))();
    if ((char)pFVar1->_padding_ != '\0') {
      TStack_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      TStack_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      TStack_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&TStack_28._s_0);
    }
  }
  return;
}

// OnSerialize @ 14d62dcc0

void __thiscall
UE::Cameras::FOrbitBlendCameraNodeEvaluator::OnSerialize
          (FOrbitBlendCameraNodeEvaluator *this,FCameraNodeEvaluatorSerializeParams *param_1,
          FArchive *param_2)

{
  FState *pFVar1;
  float *pfVar2;
  FState *pFVar3;
  
  UE::Math::operator<<(param_2,&this->DeltaLocation);
  UE::Math::operator<<(param_2,&this->DeltaRotation);
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if ((float *)(*(undefined8 **)&param_2->field_0x8)[1] < pfVar2 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,&this->SmoothingTimeLeft,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,(uint *)&this->SmoothingTimeLeft);
    }
  }
  else {
    this->SmoothingTimeLeft = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
  }
  pFVar1 = &this->State;
  pFVar3 = (FState *)**(undefined8 **)&param_2->field_0x8;
  if (pFVar3 + 1 <= (FState *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pFVar1 = *pFVar3;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d62dd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pFVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,pFVar1);
  return;
}

