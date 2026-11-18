// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// FUMGViewportCameraTransform @ 146988390

FUMGViewportCameraTransform * __thiscall
FUMGViewportCameraTransform::FUMGViewportCameraTransform(FUMGViewportCameraTransform *this)

{
  undefined8 uVar1;
  double dVar2;
  
  this->TransitionStartTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ViewLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ViewRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ViewRotation).Yaw = dVar2;
  (this->ViewRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DesiredLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DesiredLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->DesiredLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAt).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LookAt).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAt).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->OrthoZoom = 10000.0;
  return this;
}

// ComputeOrbitMatrix @ 1469a7740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __thiscall
FUMGViewportCameraTransform::ComputeOrbitMatrix
          (FUMGViewportCameraTransform *this,TMatrix<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  TQuat<double> *pTVar12;
  TInverseRotationMatrix<double> *pTVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_3d8 [32];
  TRotator<double> local_3b8;
  TRotator<double> local_3a0;
  TQuat<double> local_388;
  undefined1 local_368 [32];
  __m128d local_348;
  double local_338;
  double dStack_330;
  __m128d local_328;
  __m128d local_318;
  double local_308;
  double dStack_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  __m128d local_e8;
  __m128d local_d8;
  __m128d local_c8;
  __m128d local_b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  uVar21 = (uint)__xmm_80000000000000008000000000000000;
  uVar22 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(this->LookAt).field0_0x0 + 0x10);
  local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  uVar2 = *(undefined8 *)&(this->LookAt).field0_0x0;
  local_168.Translation.XY.m128d_f64[0]._0_4_ = (uint)uVar2 ^ uVar21;
  local_168.Translation.XY.m128d_f64[0]._4_4_ = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar22;
  uVar2 = *(undefined8 *)((longlong)&(this->LookAt).field0_0x0 + 8);
  local_168.Translation.XY.m128d_f64[1]._0_4_ = (uint)uVar2 ^ uVar21;
  local_168.Translation.XY.m128d_f64[1]._4_4_ = (uint)((ulonglong)uVar2 >> 0x20) ^ uVar22;
  local_3a0.Pitch = 0.0;
  local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_3a0.Yaw = (this->ViewRotation).Yaw;
  local_3a0.Roll = 0.0;
  local_168.Translation.ZW.m128d_f64[0] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar22,(uint)uVar1 ^ uVar21);
  local_168.Translation.ZW.m128d_f64[1] = 0.0;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_3a0,&local_388);
  uVar27 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1c8.Rotation.ZW.m128d_f64[0] = pTVar12->Z;
  local_1c8.Rotation.ZW.m128d_f64[1] = pTVar12->W;
  local_1c8.Rotation.XY.m128d_f64[0] = pTVar12->X;
  local_1c8.Rotation.XY.m128d_f64[1] = pTVar12->Y;
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar25 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_288.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_288.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_288.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_288.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_1c8.Translation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1c8.Translation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_1c8.Translation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1c8.Translation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
  local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
  local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  local_288.Translation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_288.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_288.Translation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_288.Translation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_288.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_288.Translation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_288.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
  local_288.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_288.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
  local_288.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_288.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_288.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  UE::Math::TTransform<double>::Multiply(&local_288,&local_168,&local_1c8);
  local_3b8.Pitch = 0.0;
  local_3b8.Yaw = 0.0;
  local_3b8.Roll = (this->ViewRotation).Pitch;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_3b8,&local_388);
  uVar27 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  uVar28 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108._0_8_ = pTVar12->X;
  local_108._8_8_ = pTVar12->Y;
  local_f8 = pTVar12->Z;
  dStack_f0 = pTVar12->W;
  uVar25 = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  uVar26 = (undefined4)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.m128d_f64[1]._0_4_ = uVar25;
  local_d8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.m128d_f64[1]._4_4_ = uVar26;
  local_e8.m128d_f64[1]._0_4_ = uVar27;
  local_e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.m128d_f64[1]._4_4_ = uVar28;
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_228.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_228.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_228.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_228.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_c8.m128d_f64[1]._0_4_ = uVar23;
  local_c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.m128d_f64[1]._4_4_ = uVar24;
  local_b8.m128d_f64[1]._0_4_ = uVar19;
  local_b8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8.m128d_f64[1]._4_4_ = uVar20;
  local_228.Translation.XY.m128d_f64[1]._0_4_ = uVar27;
  local_228.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_228.Translation.XY.m128d_f64[1]._4_4_ = uVar28;
  local_228.Translation.ZW.m128d_f64[1]._0_4_ = uVar25;
  local_228.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_228.Translation.ZW.m128d_f64[1]._4_4_ = uVar26;
  local_228.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
  local_228.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_228.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
  local_228.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_228.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_228.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  UE::Math::TTransform<double>::Multiply(&local_228,&local_288,(TTransform<double> *)local_108);
  dVar5 = (this->ViewLocation).field0_0x0._s_0.Y - (this->LookAt).field0_0x0._s_0.Y;
  dVar4 = (this->ViewLocation).field0_0x0._s_0.X - (this->LookAt).field0_0x0._s_0.X;
  dVar3 = (this->ViewLocation).field0_0x0._s_0.Z - (this->LookAt).field0_0x0._s_0.Z;
  uVar23 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar14._8_8_ = GlobalVectorConstants::Float0001.m128_u64[1];
  auVar14._0_8_ = auVar14._8_8_;
  uVar19 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_368._8_4_ = uVar23;
  local_368._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_368._12_4_ = uVar24;
  local_368._24_4_ = uVar19;
  local_368._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_368._28_4_ = uVar20;
  local_2e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar23;
  local_2e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_2e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar24;
  local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_2e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar20;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
  auVar15 = sqrtpd(auVar14,auVar15);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar15._0_8_;
  local_348.m128d_f64 = (double  [2])(auVar11 << 0x40);
  uVar23 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar24 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar19 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar20 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_338 = 0.0;
  dStack_330 = 0.0;
  local_2e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_2e8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_2e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_2e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_328.m128d_f64[1]._0_4_ = uVar23;
  local_328.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_328.m128d_f64[1]._4_4_ = uVar24;
  local_318.m128d_f64[1]._0_4_ = uVar19;
  local_318.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_318.m128d_f64[1]._4_4_ = uVar20;
  local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar23;
  local_2e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar24;
  local_2e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar19;
  local_2e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_2e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar20;
  UE::Math::TTransform<double>::Multiply(&local_2e8,&local_228,(TTransform<double> *)local_368);
  dVar3 = local_2e8.Rotation.ZW.m128d_f64[0];
  dVar4 = dVar3 + dVar3;
  dVar10 = local_2e8.Rotation.XY.m128d_f64[1] + local_2e8.Rotation.XY.m128d_f64[1];
  dVar8 = local_2e8.Rotation.XY.m128d_f64[0] *
          (local_2e8.Rotation.XY.m128d_f64[0] + local_2e8.Rotation.XY.m128d_f64[0]);
  dVar9 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar3 * dVar4 + dVar8);
  dVar5 = local_2e8.Rotation.ZW.m128d_f64[1];
  auVar16._8_4_ = local_2e8.Rotation.ZW.m128d_f64[1]._0_4_;
  auVar16._0_8_ = dVar5;
  auVar16._12_4_ = local_2e8.Rotation.ZW.m128d_f64[1]._4_4_;
  dVar18 = auVar16._8_8_ * (local_2e8.Rotation.XY.m128d_f64[0] + local_2e8.Rotation.XY.m128d_f64[0])
  ;
  dVar6 = dVar5 * dVar4 + dVar10 * local_2e8.Rotation.XY.m128d_f64[0];
  dVar7 = dVar18 + dVar4 * local_2e8.Rotation.XY.m128d_f64[1];
  dVar18 = dVar4 * local_2e8.Rotation.XY.m128d_f64[1] - dVar18;
  local_3b8.Roll = 0.0;
  local_318.m128d_f64[1] = 0.0;
  local_318.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatOne.m128_f32[2] -
       (dVar8 + local_2e8.Rotation.XY.m128d_f64[1] * dVar10);
  local_368._24_8_ = 0;
  local_368._16_8_ = local_2e8.Rotation.XY.m128d_f64[0] * dVar4 - dVar10 * dVar5;
  auVar17._8_4_ = SUB84(dVar7,0);
  auVar17._0_8_ = dVar6;
  auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_368._8_4_ = SUB84(dVar6,0);
  local_368._0_8_ =
       (double)GlobalVectorConstants::FloatOne.m128_f32[0] -
       (dVar3 * dVar4 + local_2e8.Rotation.XY.m128d_f64[1] * dVar10);
  local_368._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_338 = auVar17._8_8_;
  uStack_2f0 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  uStack_2ec = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  dStack_330 = 0.0;
  local_348.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_348.m128d_f64[0] = dVar10 * local_2e8.Rotation.XY.m128d_f64[0] - dVar5 * dVar4;
  local_348.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_3b8.Pitch = ___xmm_40568000000000000000000000000000;
  local_3b8.Yaw = _UNK_1513b2f18;
  local_328.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
  local_328.m128d_f64[0] = dVar10 * dVar5 + local_2e8.Rotation.XY.m128d_f64[0] * dVar4;
  local_328.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_308 = local_2e8.Translation.XY.m128d_f64[0];
  dStack_300 = local_2e8.Translation.XY.m128d_f64[1];
  local_2f8 = local_2e8.Translation.ZW.m128d_f64[0]._0_4_;
  uStack_2f4 = local_2e8.Translation.ZW.m128d_f64[0]._4_4_;
  pTVar13 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                      ((TInverseRotationMatrix<double> *)local_108,&local_3b8);
  VectorMatrixMultiply
            (__return_storage_ptr__,(TMatrix<double> *)local_368,(TMatrix<double> *)pTVar13);
  return __return_storage_ptr__;
}

// SetLocation @ 146a16990

void __thiscall
FUMGViewportCameraTransform::SetLocation(FUMGViewportCameraTransform *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->ViewLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->ViewLocation).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->ViewLocation).field0_0x0._s_0.Z = dVar1;
  dVar2 = (this->ViewLocation).field0_0x0._s_0.Y;
  (this->DesiredLocation).field0_0x0._s_0.X = (this->ViewLocation).field0_0x0._s_0.X;
  (this->DesiredLocation).field0_0x0._s_0.Y = dVar2;
  (this->DesiredLocation).field0_0x0._s_0.Z = dVar1;
  return;
}

// TransitionToLocation @ 146a2a7a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUMGViewportCameraTransform::TransitionToLocation
          (FUMGViewportCameraTransform *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FSlateApplication *pFVar4;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  if (param_2) {
    (this->ViewLocation).field0_0x0._s_0.X = dVar1;
    (this->ViewLocation).field0_0x0._s_0.Y = dVar2;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    (this->ViewLocation).field0_0x0._s_0.Z = dVar1;
    dVar2 = (this->ViewLocation).field0_0x0._s_0.Y;
    (this->DesiredLocation).field0_0x0._s_0.X = (this->ViewLocation).field0_0x0._s_0.X;
    (this->DesiredLocation).field0_0x0._s_0.Y = dVar2;
    (this->DesiredLocation).field0_0x0._s_0.Z = dVar1;
    pFVar4 = FSlateApplication::Get();
    dVar1 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
    this->TransitionStartTime = dVar1 - __real_3fd0000000000000;
    return;
  }
  (this->DesiredLocation).field0_0x0._s_0.X = dVar1;
  (this->DesiredLocation).field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->ViewLocation).field0_0x0._s_0.X;
  dVar3 = (this->ViewLocation).field0_0x0._s_0.Y;
  (this->DesiredLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->ViewLocation).field0_0x0._s_0.Z;
  (this->StartLocation).field0_0x0._s_0.X = dVar2;
  (this->StartLocation).field0_0x0._s_0.Y = dVar3;
  (this->StartLocation).field0_0x0._s_0.Z = dVar1;
  pFVar4 = FSlateApplication::Get();
  dVar1 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
  this->TransitionStartTime = dVar1;
  return;
}

// UpdateTransition @ 146a2c8a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUMGViewportCameraTransform::UpdateTransition(FUMGViewportCameraTransform *this)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  FSlateApplication *pFVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pFVar4 = FSlateApplication::Get();
  dVar8 = this->TransitionStartTime;
  dVar7 = (double)(**(code **)(*(longlong *)pFVar4 + 0x60))(pFVar4);
  dVar8 = (dVar7 - dVar8) * __real_4010000000000000;
  if (__real_3ff0000000000000 <= dVar8) {
    dVar8 = __real_3ff0000000000000;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if ((((__real_3ff0000000000000 <= dVar8) &&
       ((this->DesiredLocation).field0_0x0._s_0.X == (this->ViewLocation).field0_0x0._s_0.X)) &&
      ((this->DesiredLocation).field0_0x0._s_0.Y == (this->ViewLocation).field0_0x0._s_0.Y)) &&
     ((this->DesiredLocation).field0_0x0._s_0.Z == (this->ViewLocation).field0_0x0._s_0.Z)) {
    return false;
  }
  fVar5 = (float)dVar8 - __real_3f800000;
  fVar5 = fVar5 * fVar5 * fVar5 + __real_3f800000;
  if (fVar5 == __real_3f800000) {
    dVar7 = (this->DesiredLocation).field0_0x0._s_0.Y;
    dVar8 = (this->DesiredLocation).field0_0x0._s_0.Z;
    (this->ViewLocation).field0_0x0._s_0.X = (this->DesiredLocation).field0_0x0._s_0.X;
    (this->ViewLocation).field0_0x0._s_0.Y = dVar7;
    (this->ViewLocation).field0_0x0._s_0.Z = dVar8;
    return true;
  }
  dVar7 = (this->StartLocation).field0_0x0._s_0.Y;
  dVar8 = (this->StartLocation).field0_0x0._s_0.Z;
  dVar2 = (this->DesiredLocation).field0_0x0._s_0.Y;
  dVar3 = (this->DesiredLocation).field0_0x0._s_0.Z;
  dVar6 = (double)fVar5;
  (this->ViewLocation).field0_0x0._s_0.X =
       ((this->DesiredLocation).field0_0x0._s_0.X - (this->StartLocation).field0_0x0._s_0.X) * dVar6
       + (this->StartLocation).field0_0x0._s_0.X;
  dVar8 = (dVar3 - dVar8) * dVar6 + dVar8;
  auVar1._8_4_ = SUB84(dVar8,0);
  auVar1._0_8_ = (dVar2 - dVar7) * dVar6 + dVar7;
  auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->ViewLocation).field0_0x0 + 8) = auVar1;
  return true;
}

