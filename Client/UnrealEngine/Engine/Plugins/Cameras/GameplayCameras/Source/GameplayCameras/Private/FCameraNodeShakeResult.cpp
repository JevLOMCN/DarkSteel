// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 1

// ApplyDelta @ 14d599660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FCameraNodeShakeResult::ApplyDelta
          (FCameraNodeShakeResult *this,FCameraNodeShakeParams *param_1)

{
  FCameraPoseFlags *pFVar1;
  undefined1 *puVar2;
  float fVar3;
  double dVar4;
  IXRTrackingSystem *pIVar5;
  FCameraNodeEvaluationResult *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  char cVar14;
  TRotationMatrix<double> *pTVar15;
  TMatrix<double> *pTVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_6a8 [32];
  TRotator<double> local_678;
  TRotator<double> local_660;
  float local_648;
  double local_638;
  TRotator<double> local_628;
  TRotator<double> local_610 [3];
  TMatrix<double> local_5c8;
  TMatrix<double> local_548;
  TMatrix<double> local_4c8;
  TMatrix<double> local_448;
  TMatrix<double> local_3c8;
  TMatrix<double> local_348;
  TRotationMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TRotationMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  dVar12 = __real_4076800000000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_6a8;
  local_660.Pitch = (this->ShakeDelta).Location.field0_0x0._s_0.X;
  local_660.Yaw = (this->ShakeDelta).Location.field0_0x0._s_0.Y;
  local_660.Roll = (this->ShakeDelta).Location.field0_0x0._s_0.Z;
  fVar3 = param_1->ShakeScale;
  fVar21 = (this->ShakeDelta).FieldOfView;
  dVar9 = (this->ShakeDelta).Rotation.Pitch;
  dVar10 = (this->ShakeDelta).Rotation.Yaw;
  dVar4 = (this->ShakeDelta).Rotation.Roll;
  dVar11 = local_660.Pitch;
  dVar7 = local_660.Yaw;
  local_638 = local_660.Roll;
  if (fVar3 != __real_3f800000) {
    dVar7 = (double)fVar3;
    fVar21 = fVar21 * fVar3;
    local_638 = local_660.Roll * dVar7;
    dVar9 = dVar9 * dVar7;
    dVar10 = dVar10 * dVar7;
    dVar4 = dVar4 * dVar7;
    dVar11 = local_660.Pitch * dVar7;
    dVar7 = local_660.Yaw * dVar7;
  }
  local_678.Pitch = dVar9;
  local_678.Yaw = dVar10;
  local_678.Roll = dVar4;
  dVar8 = FGenericPlatformMath::Fmod(dVar9,__real_4076800000000000);
  if (dVar8 < 0.0) {
    dVar8 = dVar8 + dVar12;
  }
  if (dVar8 == 0.0) {
    dVar10 = FGenericPlatformMath::Fmod(dVar10,dVar12);
    if (dVar10 < 0.0) {
      dVar10 = dVar10 + dVar12;
    }
    if (dVar10 != 0.0) goto LAB_14d5997e4;
    dVar4 = FGenericPlatformMath::Fmod(dVar4,dVar12);
    if (dVar4 < 0.0) {
      dVar4 = dVar4 + dVar12;
    }
    if (dVar4 != 0.0) goto LAB_14d5997e4;
  }
  else {
LAB_14d5997e4:
    pIVar5 = (GEngine->XRSystem).Object;
    if ((pIVar5 == (IXRTrackingSystem *)0x0) ||
       (cVar14 = (**(code **)((longlong)*pIVar5 + 0x148))(), cVar14 == '\0')) {
      local_610[0].Roll = (this->ShakenResult->CameraPose).Rotation.Roll;
      dVar4 = FGenericPlatformMath::Fmod((this->ShakenResult->CameraPose).Rotation.Pitch,dVar12);
      dVar10 = __real_4066800000000000;
      if (dVar4 < 0.0) {
        dVar4 = dVar4 + dVar12;
      }
      if (__real_4066800000000000 < dVar4) {
        dVar4 = dVar4 - dVar12;
      }
      local_648 = (float)dVar4;
      dVar9 = FGenericPlatformMath::Fmod(dVar9,dVar12);
      fVar3 = __real_43b40000;
      if (dVar9 < 0.0) {
        dVar9 = dVar9 + dVar12;
      }
      if (dVar10 < dVar9) {
        dVar9 = dVar9 - dVar12;
      }
      fVar20 = (float)dVar9 + (float)dVar4;
      fVar17 = FGenericPlatformMath::Fmod(__real_4333cccd,__real_43b40000);
      if (fVar17 < 0.0) {
        fVar17 = fVar17 + fVar3;
      }
      fVar17 = fVar17 * __real_3f000000;
      fVar18 = FGenericPlatformMath::Fmod(fVar17 - __real_42b3cccd,fVar3);
      if (fVar18 < 0.0) {
        fVar18 = fVar18 + fVar3;
      }
      fVar19 = FGenericPlatformMath::Fmod(fVar20 - fVar18,fVar3);
      fVar13 = __real_43340000;
      if (fVar19 < 0.0) {
        fVar19 = fVar19 + fVar3;
      }
      if (__real_43340000 < fVar19) {
        fVar19 = fVar19 - fVar3;
      }
      if (fVar19 <= fVar17) {
        if (fVar19 < (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000)) {
          fVar20 = fVar18 - fVar17;
        }
      }
      else {
        fVar20 = fVar18 + fVar17;
      }
      fVar17 = FGenericPlatformMath::Fmod(fVar20,fVar3);
      if (fVar17 < 0.0) {
        fVar17 = fVar17 + fVar3;
      }
      if (fVar13 < fVar17) {
        fVar17 = fVar17 - fVar3;
      }
      local_678.Pitch = (double)(fVar17 - local_648);
    }
  }
  pFVar6 = this->ShakenResult;
  local_610[0].Pitch = (pFVar6->CameraPose).Rotation.Pitch;
  local_610[0].Yaw = (pFVar6->CameraPose).Rotation.Yaw;
  local_610[0].Roll = (pFVar6->CameraPose).Rotation.Roll;
  UE::Math::TRotationMatrix<double>::TRotationMatrix<double>
            ((TRotationMatrix<double> *)&local_5c8,local_610);
  if (param_1->PlaySpace == CameraLocal) {
    dVar4 = (pFVar6->CameraPose).Location.field0_0x0._s_0.X +
            local_5c8.M[1][0] * dVar7 + local_5c8.M[0][0] * dVar11 + local_5c8.M[2][0] * local_638 +
            local_5c8.M[3][0] * 0.0;
    dVar9 = (pFVar6->CameraPose).Location.field0_0x0._s_0.Y +
            local_5c8.M[1][1] * dVar7 + local_5c8.M[0][1] * dVar11 + local_5c8.M[2][1] * local_638 +
            local_5c8.M[3][1] * 0.0;
    dVar10 = (pFVar6->CameraPose).Location.field0_0x0._s_0.Z +
             local_5c8.M[1][2] * dVar7 + local_5c8.M[0][2] * dVar11 + local_5c8.M[2][2] * local_638
             + local_5c8.M[3][2] * 0.0;
    if (((dVar4 != (pFVar6->CameraPose).Location.field0_0x0._s_0.X) ||
        (dVar9 != (pFVar6->CameraPose).Location.field0_0x0._s_0.Y)) ||
       (dVar10 != (pFVar6->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar1->Location = true;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.X = dVar4;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.Y = dVar9;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.Z = dVar10;
    }
    pTVar15 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_2c8,&local_678);
    VectorMatrixMultiply(&local_548,(TMatrix<double> *)pTVar15,&local_5c8);
    UE::Math::TMatrix<double>::Rotator(&local_548,&local_660);
    if (((local_660.Pitch == (pFVar6->CameraPose).Rotation.Pitch) &&
        (local_660.Yaw == (pFVar6->CameraPose).Rotation.Yaw)) &&
       (local_660.Roll == (pFVar6->CameraPose).Rotation.Roll)) goto LAB_14d599ca3;
    local_628.Pitch._0_4_ = local_660.Pitch._0_4_;
    local_628.Pitch._4_4_ = local_660.Pitch._4_4_;
    local_628.Yaw._0_4_ = local_660.Yaw._0_4_;
    local_628.Yaw._4_4_ = local_660.Yaw._4_4_;
    local_628.Roll = local_660.Roll;
  }
  else {
    if (param_1->PlaySpace != UserDefined) goto LAB_14d599ca3;
    dVar4 = (pFVar6->CameraPose).Location.field0_0x0._s_0.X +
            dVar11 * (param_1->UserPlaySpaceMatrix).M[0][0] +
            (param_1->UserPlaySpaceMatrix).M[1][0] * dVar7 +
            (param_1->UserPlaySpaceMatrix).M[2][0] * local_638 +
            (param_1->UserPlaySpaceMatrix).M[3][0] * 0.0;
    dVar9 = (pFVar6->CameraPose).Location.field0_0x0._s_0.Y +
            dVar11 * (param_1->UserPlaySpaceMatrix).M[0][1] +
            (param_1->UserPlaySpaceMatrix).M[1][1] * dVar7 +
            (param_1->UserPlaySpaceMatrix).M[2][1] * local_638 +
            (param_1->UserPlaySpaceMatrix).M[3][1] * 0.0;
    dVar10 = (pFVar6->CameraPose).Location.field0_0x0._s_0.Z +
             (param_1->UserPlaySpaceMatrix).M[1][2] * dVar7 +
             (param_1->UserPlaySpaceMatrix).M[0][2] * dVar11 +
             (param_1->UserPlaySpaceMatrix).M[2][2] * local_638 +
             (param_1->UserPlaySpaceMatrix).M[3][2] * 0.0;
    if (((dVar4 != (pFVar6->CameraPose).Location.field0_0x0._s_0.X) ||
        (dVar9 != (pFVar6->CameraPose).Location.field0_0x0._s_0.Y)) ||
       (dVar10 != (pFVar6->CameraPose).Location.field0_0x0._s_0.Z)) {
      pFVar1->Location = true;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.X = dVar4;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.Y = dVar9;
      (pFVar6->CameraPose).Location.field0_0x0._s_0.Z = dVar10;
    }
    pTVar16 = UE::Math::TMatrix<double>::Inverse(&param_1->UserPlaySpaceMatrix,&local_248);
    pTVar15 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_1c8,&local_678);
    VectorMatrixMultiply(&local_4c8,pTVar16,(TMatrix<double> *)pTVar15);
    VectorMatrixMultiply(&local_448,&local_4c8,&param_1->UserPlaySpaceMatrix);
    pTVar16 = UE::Math::TMatrix<double>::Inverse(&local_5c8,&local_148);
    VectorMatrixMultiply(&local_3c8,pTVar16,&local_448);
    VectorMatrixMultiply(&local_348,&local_3c8,&local_5c8);
    UE::Math::TMatrix<double>::Rotator(&local_348,&local_628);
    if ((((double)CONCAT44(local_628.Pitch._4_4_,local_628.Pitch._0_4_) ==
          (pFVar6->CameraPose).Rotation.Pitch) &&
        ((double)CONCAT44(local_628.Yaw._4_4_,local_628.Yaw._0_4_) ==
         (pFVar6->CameraPose).Rotation.Yaw)) &&
       (local_628.Roll == (pFVar6->CameraPose).Rotation.Roll)) goto LAB_14d599ca3;
  }
  pFVar1->Rotation = true;
  *(undefined4 *)&(pFVar6->CameraPose).Rotation.Pitch = local_628.Pitch._0_4_;
  *(undefined4 *)((longlong)&(pFVar6->CameraPose).Rotation.Pitch + 4) = local_628.Pitch._4_4_;
  *(undefined4 *)&(pFVar6->CameraPose).Rotation.Yaw = local_628.Yaw._0_4_;
  *(undefined4 *)((longlong)&(pFVar6->CameraPose).Rotation.Yaw + 4) = local_628.Yaw._4_4_;
  (pFVar6->CameraPose).Rotation.Roll = local_628.Roll;
LAB_14d599ca3:
  if (fVar21 != 0.0) {
    dVar4 = FCameraPose::GetEffectiveFieldOfView
                      ((pFVar6->CameraPose).FocalLength,(pFVar6->CameraPose).FieldOfView,
                       (pFVar6->CameraPose).SensorWidth,(pFVar6->CameraPose).SensorHeight,
                       (pFVar6->CameraPose).SqueezeFactor,(pFVar6->CameraPose).Overscan);
    if ((float)(dVar4 + (double)fVar21) != (pFVar6->CameraPose).FieldOfView) {
      (pFVar6->CameraPose).ChangedFlags.FieldOfView = true;
      (pFVar6->CameraPose).FieldOfView = (float)(dVar4 + (double)fVar21);
    }
    if (__real_bf800000 != (pFVar6->CameraPose).FocalLength) {
      (pFVar6->CameraPose).ChangedFlags.FocalLength = true;
      (pFVar6->CameraPose).FocalLength = -1.0;
    }
  }
  return;
}

