// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 7

// FEffector @ 14ded62c0

FEffector * __thiscall PBIK::FEffector::FEffector(FEffector *this,FBone *param_1)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FEffector *pFVar4;
  
  (this->Settings).PositionAlpha = 1.0;
  (this->Settings).RotationAlpha = 1.0;
  (this->Settings).StrengthAlpha = 1.0;
  (this->Settings).ChainDepth = 0;
  (this->Settings).PullChainAlpha = 1.0;
  (this->Settings).PinRotation = 1.0;
  this->ChainRootBody = (FRigidBody *)0x0;
  this->ChainDepthInitializedWith = -1;
  (this->DistancesFromEffector).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistancesFromEffector).ArrayNum = 0;
  (this->DistancesFromEffector).ArrayMax = 0;
  if (param_1 == (FBone *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                       ,0xf,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FEffector *)(*pcVar1)();
      return pFVar4;
    }
  }
  this->Bone = param_1;
  dVar2 = (param_1->Position).field0_0x0._s_0.Y;
  (this->PositionGoal).field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
  (this->PositionGoal).field0_0x0._s_0.Y = dVar2;
  (this->PositionGoal).field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
  dVar2 = (param_1->Rotation).Y;
  (this->RotationGoal).X = (param_1->Rotation).X;
  (this->RotationGoal).Y = dVar2;
  dVar2 = (param_1->Rotation).W;
  (this->RotationGoal).Z = (param_1->Rotation).Z;
  (this->RotationGoal).W = dVar2;
  return this;
}

// ApplyPreferredAngles @ 14ded73e0

void __thiscall PBIK::FEffector::ApplyPreferredAngles(FEffector *this)

{
  FRigidBody *pFVar1;
  FBone *pFVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
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
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  FRigidBody *pFVar35;
  TQuat<double> *pTVar36;
  FEffector *pFVar37;
  FBone *pFVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar46;
  double dVar52;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  TRotator<double> local_118;
  TRotator<double> local_100;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  TQuat<double> local_c8 [6];
  
  uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar32 = __real_3e45798ee0000000;
  pFVar1 = this->ChainRootBody;
  if ((pFVar1 != (FRigidBody *)0x0) &&
     (fVar43 = this->DistToChainRootInInputPose, __real_322bcc77 < fVar43)) {
    pFVar37 = pFVar1->Effector;
    if (pFVar1->Effector == (FEffector *)0x0) {
      pFVar37 = (FEffector *)&pFVar1->Position;
    }
    local_100.Roll = (pFVar37->PositionFinal).field0_0x0._s_0.Z;
    dVar53 = (pFVar37->PositionFinal).field0_0x0._s_0.X - (this->PositionFinal).field0_0x0._s_0.X;
    dVar44 = local_100.Roll - (this->PositionFinal).field0_0x0._s_0.Z;
    dVar46 = (pFVar37->PositionFinal).field0_0x0._s_0.Y - (this->PositionFinal).field0_0x0._s_0.Y;
    fVar59 = (float)SQRT(dVar46 * dVar46 + dVar53 * dVar53 + dVar44 * dVar44);
    if (((fVar59 < fVar43) &&
        (fVar43 = (fVar43 - fVar59) / fVar43 - __real_3f800000,
        fVar43 = SQRT(__real_3f800000 - fVar43 * fVar43), __real_322bcc77 < fVar43)) &&
       (pFVar38 = this->Bone->Parent, pFVar38 != (FBone *)0x0)) {
      while (pFVar38->bIsSolved != false) {
        pFVar1 = pFVar38->Body;
        if ((pFVar1->J).bUsePreferredAngles != false) {
          dVar45 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
          dVar30 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
          dVar31 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
          dVar26 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
          dVar27 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
          dVar28 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          dVar51 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
          dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
          dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
          dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar52 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          if ((pFVar1->Bone == (FBone *)0x0) ||
             (pFVar2 = pFVar1->Bone->Parent, pFVar2 == (FBone *)0x0)) {
            pFVar35 = (FRigidBody *)0x0;
LAB_14ded7661:
            dVar18 = (pFVar1->Rotation).X;
            dVar19 = (pFVar1->Rotation).Y;
            dVar17 = (pFVar1->Rotation).Z;
            dVar10 = (pFVar1->Rotation).W;
          }
          else {
            pFVar35 = pFVar2->Body;
            if (pFVar35 == (FRigidBody *)0x0) goto LAB_14ded7661;
            dVar20 = (pFVar1->Rotation).Z;
            dVar12 = (pFVar1->Rotation).W;
            dVar14 = (pFVar1->Rotation).X;
            dVar16 = (pFVar1->Rotation).Y;
            dVar10 = (pFVar35->Rotation).X * dVar26;
            dVar11 = (pFVar35->Rotation).Y * dVar27;
            dVar13 = (pFVar35->Rotation).Z * dVar30;
            dVar15 = (pFVar35->Rotation).W * dVar31;
            auVar58._8_4_ = SUB84(dVar15,0);
            auVar58._0_8_ = dVar13;
            auVar58._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
            dVar18 = dVar10 * dVar12 * dVar45 + dVar14 * auVar58._8_8_ + dVar20 * dVar11 * dVar46 +
                     dVar13 * dVar16 * dVar44;
            dVar19 = dVar10 * dVar20 * dVar51 + dVar16 * dVar15 + dVar12 * dVar11 * dVar6 +
                     dVar13 * dVar14 * dVar7;
            dVar17 = dVar10 * dVar16 * dVar53 + dVar20 * auVar58._8_8_ + dVar14 * dVar11 * dVar28 +
                     dVar13 * dVar12 * dVar9;
            dVar10 = dVar10 * dVar14 * dVar3 + dVar12 * dVar15 + dVar16 * dVar11 * dVar29 +
                     dVar13 * dVar20 * dVar52;
          }
          if (pFVar35 == (FRigidBody *)0x0) {
            dVar15 = (pFVar1->InitialRotation).X;
            dVar20 = (pFVar1->InitialRotation).Y;
            dVar11 = (pFVar1->InitialRotation).Z;
            dVar13 = (pFVar1->InitialRotation).W;
          }
          else {
            dVar22 = (pFVar1->InitialRotation).Z;
            dVar23 = (pFVar1->InitialRotation).W;
            dVar24 = (pFVar1->InitialRotation).X;
            dVar25 = (pFVar1->InitialRotation).Y;
            dVar13 = (pFVar35->InitialRotation).X * dVar26;
            dVar12 = (pFVar35->InitialRotation).Y * dVar27;
            dVar14 = (pFVar35->InitialRotation).Z * dVar30;
            dVar16 = (pFVar35->InitialRotation).W * dVar31;
            auVar60._8_4_ = SUB84(dVar16,0);
            auVar60._0_8_ = dVar14;
            auVar60._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
            dVar15 = dVar13 * dVar23 * dVar45 + dVar24 * auVar60._8_8_ + dVar22 * dVar12 * dVar46 +
                     dVar14 * dVar25 * dVar44;
            dVar20 = dVar13 * dVar22 * dVar51 + dVar25 * dVar16 + dVar23 * dVar12 * dVar6 +
                     dVar14 * dVar24 * dVar7;
            dVar11 = dVar13 * dVar25 * dVar53 + dVar22 * auVar60._8_8_ + dVar24 * dVar12 * dVar28 +
                     dVar14 * dVar23 * dVar9;
            dVar13 = dVar13 * dVar24 * dVar3 + dVar23 * dVar16 + dVar25 * dVar12 * dVar29 +
                     dVar14 * dVar22 * dVar52;
          }
          dVar15 = dVar15 * dVar26;
          dVar20 = dVar20 * dVar27;
          dVar11 = dVar11 * dVar30;
          dVar13 = dVar13 * dVar31;
          auVar56._8_4_ = SUB84(dVar13,0);
          auVar56._0_8_ = dVar11;
          auVar56._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          auVar47._8_4_ = SUB84(dVar19,0);
          auVar47._0_8_ = dVar19;
          auVar47._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
          auVar54._8_4_ = SUB84(dVar20,0);
          auVar54._0_8_ = dVar15;
          auVar54._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          dVar6 = dVar18 * dVar11 * dVar51 + dVar10 * dVar20 + auVar47._8_8_ * dVar13 * dVar6 +
                  dVar17 * dVar15 * dVar7;
          local_d8 = dVar18 * auVar54._8_8_ * dVar53 + dVar10 * dVar11 + dVar19 * dVar15 * dVar28 +
                     dVar17 * auVar56._8_8_ * dVar9;
          dStack_d0 = dVar18 * dVar15 * dVar3 + dVar10 * dVar13 + dVar19 * dVar20 * dVar29 +
                      dVar17 * dVar11 * dVar52;
          local_e8._8_4_ = SUB84(dVar6,0);
          local_e8._0_8_ =
               dVar18 * auVar56._8_8_ * dVar45 + dVar10 * dVar15 + dVar19 * dVar11 * dVar46 +
               dVar17 * auVar54._8_8_ * dVar44;
          local_e8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
          UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_e8,&local_118);
          local_100.Roll = (double)fVar43;
          local_100.Pitch = local_100.Roll * (pFVar1->J).PreferredAngles.Pitch;
          local_100.Yaw = local_100.Roll * (pFVar1->J).PreferredAngles.Yaw;
          local_100.Roll = local_100.Roll * (pFVar1->J).PreferredAngles.Roll;
          dVar53 = (double)CONCAT44((uint)((ulonglong)local_100.Pitch >> 0x20) & uVar34,
                                    SUB84(local_100.Pitch,0) & uVar33);
          if ((dVar53 <= dVar32) ||
             (uVar41 = SUB84(local_118.Pitch,0) & uVar33,
             uVar42 = (uint)((ulonglong)local_118.Pitch >> 0x20) & uVar34,
             dVar53 < (double)CONCAT44(uVar42,uVar41) || dVar53 == (double)CONCAT44(uVar42,uVar41)))
          {
            local_100.Pitch = 0.0;
          }
          else {
            local_100.Pitch = local_100.Pitch - local_118.Pitch;
          }
          dVar53 = (double)CONCAT44((uint)((ulonglong)local_100.Yaw >> 0x20) & uVar34,
                                    SUB84(local_100.Yaw,0) & uVar33);
          if ((dVar53 <= dVar32) ||
             (uVar41 = SUB84(local_118.Yaw,0) & uVar33,
             uVar42 = (uint)((ulonglong)local_118.Yaw >> 0x20) & uVar34,
             dVar53 < (double)CONCAT44(uVar42,uVar41) || dVar53 == (double)CONCAT44(uVar42,uVar41)))
          {
            local_100.Yaw = 0.0;
          }
          else {
            local_100.Yaw = local_100.Yaw - local_118.Yaw;
          }
          dVar53 = (double)CONCAT44((uint)((ulonglong)local_100.Roll >> 0x20) & uVar34,
                                    SUB84(local_100.Roll,0) & uVar33);
          if ((dVar53 <= dVar32) ||
             (uVar41 = SUB84(local_118.Roll,0) & uVar33,
             uVar42 = (uint)((ulonglong)local_118.Roll >> 0x20) & uVar34,
             dVar53 < (double)CONCAT44(uVar42,uVar41) || dVar53 == (double)CONCAT44(uVar42,uVar41)))
          {
            local_100.Roll = 0.0;
          }
          else {
            local_100.Roll = local_100.Roll - local_118.Roll;
          }
          pTVar36 = UE::Math::TRotator<double>::Quaternion(&local_100,local_c8);
          dVar26 = (pFVar1->Rotation).X;
          dVar27 = (pFVar1->Rotation).Y;
          dVar28 = (pFVar1->Rotation).Z;
          dVar29 = (pFVar1->Rotation).W;
          dVar30 = pTVar36->Z;
          dVar31 = pTVar36->W;
          dVar45 = pTVar36->X;
          dVar51 = pTVar36->Y;
          auVar57._8_8_ = dVar30;
          auVar57._0_8_ = dVar31;
          dVar53 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
          dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
          dVar46 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
          dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
          dVar52 = dVar26 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                   + dVar45 * dVar29 +
                   dVar30 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                   + dVar28 * dVar51 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
          dVar7 = dVar26 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                  + dVar51 * dVar29 +
                  dVar31 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                  + dVar28 * dVar45 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
          dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
          dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
          auVar5._8_4_ = SUB84(dVar7,0);
          auVar5._0_8_ = dVar52;
          auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
          (pFVar1->Rotation).X = dVar52;
          (pFVar1->Rotation).Y = (double)auVar5._8_8_;
          dVar44 = dVar26 * dVar51 * dVar53 + dVar30 * dVar29 + dVar45 * dVar27 * dVar44 +
                   dVar28 * dVar31 * dVar46;
          dVar9 = dVar26 * dVar45 * dVar9 + dVar31 * dVar29 + dVar51 * dVar27 * dVar6 +
                  dVar28 * dVar30 * dVar3;
          uVar62 = (undefined4)((ulonglong)dVar9 >> 0x20);
          auVar8._8_4_ = SUB84(dVar9,0);
          auVar8._0_8_ = dVar44;
          auVar8._12_4_ = uVar62;
          (pFVar1->Rotation).Z = dVar44;
          (pFVar1->Rotation).W = (double)auVar8._8_8_;
          dVar3 = (pFVar1->Rotation).X;
          dVar6 = (pFVar1->Rotation).Y;
          auVar48._8_4_ = SUB84(dVar9,0);
          auVar48._0_8_ = dVar44;
          auVar48._12_4_ = uVar62;
          dVar46 = dVar44 * dVar44 + dVar3 * dVar3;
          dVar52 = auVar48._8_8_ * dVar9 + dVar6 * dVar6;
          dVar53 = dVar52 + dVar46;
          dVar46 = dVar46 + dVar52;
          auVar4._8_4_ = SUB84(dVar46,0);
          auVar4._0_8_ = dVar53;
          auVar4._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          auVar58 = sqrtpd(auVar57,auVar4);
          uVar39 = -(ulonglong)(dVar32 <= dVar53);
          uVar40 = -(ulonglong)(dVar32 <= dVar46);
          uVar41 = (uint)(uVar39 >> 0x20);
          uVar42 = (uint)(uVar40 >> 0x20);
          auVar60 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar58);
          auVar61._0_8_ = uVar39 & (ulonglong)(auVar60._0_8_ * dVar3);
          uVar21 = uVar40 & (ulonglong)(auVar60._8_8_ * dVar6);
          auVar61._8_4_ = (undefined4)uVar21;
          auVar61._12_4_ = (undefined4)(uVar21 >> 0x20);
          auVar49._0_4_ =
               ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
          auVar49._4_4_ =
               ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                               0x20);
          auVar49._8_4_ =
               ~(uint)uVar40 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
          auVar49._12_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                               0x20);
          auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar58);
          auVar55._0_4_ =
               ~(uint)uVar39 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
          auVar55._4_4_ =
               ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                               0x20);
          auVar55._8_4_ =
               ~(uint)uVar40 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
          auVar55._12_4_ =
               ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                               0x20);
          (pFVar1->Rotation).X = (double)SUB168(auVar61 | auVar49,0);
          (pFVar1->Rotation).Y = (double)SUB168(auVar61 | auVar49,8);
          auVar50._0_8_ = (ulonglong)(auVar58._0_8_ * dVar44) & uVar39;
          uVar40 = (ulonglong)(auVar58._8_8_ * dVar9) & uVar40;
          auVar50._8_4_ = (undefined4)uVar40;
          auVar50._12_4_ = (undefined4)(uVar40 >> 0x20);
          (pFVar1->Rotation).Z = (double)SUB168(auVar55 | auVar50,0);
          (pFVar1->Rotation).W = (double)SUB168(auVar55 | auVar50,8);
        }
        if (pFVar38 == this->ChainRootBody->Bone) {
          return;
        }
        pFVar38 = pFVar38->Parent;
        if (pFVar38 == (FBone *)0x0) {
          return;
        }
      }
    }
  }
  return;
}

// CalculateDistanceToChainRoot @ 14ded9610

float __thiscall PBIK::FEffector::CalculateDistanceToChainRoot(FEffector *this)

{
  FRigidBody *pFVar1;
  FBone *pFVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pFVar1 = this->ChainRootBody;
  if (pFVar1 != (FRigidBody *)0x0) {
    pTVar3 = &pFVar1->Effector->PositionOrig;
    if (pFVar1->Effector == (FEffector *)0x0) {
      pTVar3 = &pFVar1->Position;
    }
    pFVar2 = this->Bone;
    dVar5 = (pTVar3->field0_0x0)._s_0.Z - (pFVar2->Position).field0_0x0._s_0.Z;
    dVar4 = (pTVar3->field0_0x0)._s_0.X - (pFVar2->Position).field0_0x0._s_0.X;
    dVar6 = (pTVar3->field0_0x0)._s_0.Y - (pFVar2->Position).field0_0x0._s_0.Y;
    return (float)SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5);
  }
  return 0.0;
}

// CalculateDistanceToSolveRootAlongBones @ 14ded9690

float __thiscall PBIK::FEffector::CalculateDistanceToSolveRootAlongBones(FEffector *this)

{
  char cVar1;
  FBone *pFVar2;
  float fVar3;
  
  pFVar2 = this->Bone;
  fVar3 = 0.0;
  cVar1 = pFVar2->bIsSolverRoot;
  while (cVar1 == '\0') {
    fVar3 = fVar3 + pFVar2->Length;
    pFVar2 = pFVar2->Parent;
    cVar1 = pFVar2->bIsSolverRoot;
  }
  return fVar3;
}

// SetGoal @ 14dedd3f0

void __thiscall
PBIK::FEffector::SetGoal
          (FEffector *this,TVector<double> *param_1,TQuat<double> *param_2,
          FEffectorSettings *param_3)

{
  double dVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  fVar2 = param_3->RotationAlpha;
  fVar3 = param_3->StrengthAlpha;
  iVar4 = param_3->ChainDepth;
  (this->Settings).PositionAlpha = param_3->PositionAlpha;
  (this->Settings).RotationAlpha = fVar2;
  (this->Settings).StrengthAlpha = fVar3;
  (this->Settings).ChainDepth = iVar4;
  fVar2 = param_3->PinRotation;
  (this->Settings).PullChainAlpha = param_3->PullChainAlpha;
  (this->Settings).PinRotation = fVar2;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->PositionGoal).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->PositionGoal).field0_0x0._s_0.Y = dVar1;
  (this->PositionGoal).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  dVar1 = param_2->Y;
  (this->RotationGoal).X = param_2->X;
  (this->RotationGoal).Y = dVar1;
  dVar1 = param_2->W;
  (this->RotationGoal).Z = param_2->Z;
  (this->RotationGoal).W = dVar1;
  return;
}

// UpdateChainStates @ 14dedfff0

void __thiscall PBIK::FEffector::UpdateChainStates(FEffector *this)

{
  int iVar1;
  FBone *pFVar2;
  bool bVar3;
  FBone *pFVar4;
  int iVar5;
  FBone *pFVar6;
  
  iVar1 = (this->Settings).ChainDepth;
  iVar5 = 1;
  this->ChainRootBody = (FRigidBody *)0x0;
  pFVar2 = this->Bone->Parent;
  pFVar6 = this->Bone;
  if (pFVar2 == (FBone *)0x0) {
    this->ChainDepthInitializedWith = iVar1;
    return;
  }
  do {
    pFVar4 = pFVar2;
    if (pFVar4->bIsSolved == false) {
LAB_14dee008a:
      this->ChainDepthInitializedWith = (this->Settings).ChainDepth;
      return;
    }
    if ((pFVar4->bIsSubRoot == false) && (pFVar4->bIsSolverRoot == false)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((0 < iVar1) && (iVar1 < iVar5)) || (bVar3)) {
      this->ChainRootBody = pFVar6->Body;
      goto LAB_14dee008a;
    }
    iVar5 = iVar5 + 1;
    pFVar4->Body->bIsPartOfSubChain = true;
    pFVar2 = pFVar4->Parent;
    pFVar6 = pFVar4;
    if (pFVar4->Parent == (FBone *)0x0) {
      this->ChainDepthInitializedWith = (this->Settings).ChainDepth;
      return;
    }
  } while( true );
}

// UpdateFromInputs @ 14dee04f0

void __thiscall PBIK::FEffector::UpdateFromInputs(FEffector *this,FBone *param_1,bool param_2)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  FPinConstraint *pFVar7;
  FRigidBody *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  float fVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  bool bVar14;
  int iVar15;
  TQuat<double> *pTVar16;
  TVector<double> *pTVar17;
  FBone *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined1 in_XMM4 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  uint uVar34;
  double local_d8;
  TQuat<double> local_98 [4];
  
  pFVar18 = this->Bone;
  dVar24 = (double)(this->Settings).PositionAlpha;
  dVar4 = (pFVar18->Position).field0_0x0._s_0.Y;
  (this->PositionOrig).field0_0x0._s_0.X = (pFVar18->Position).field0_0x0._s_0.X;
  (this->PositionOrig).field0_0x0._s_0.Y = dVar4;
  (this->PositionOrig).field0_0x0._s_0.Z = (pFVar18->Position).field0_0x0._s_0.Z;
  dVar4 = (pFVar18->Rotation).Y;
  (this->RotationOrig).X = (pFVar18->Rotation).X;
  (this->RotationOrig).Y = dVar4;
  dVar4 = (pFVar18->Rotation).W;
  (this->RotationOrig).Z = (pFVar18->Rotation).Z;
  (this->RotationOrig).W = dVar4;
  dVar4 = (this->PositionGoal).field0_0x0._s_0.Z;
  dVar22 = (this->PositionOrig).field0_0x0._s_0.Z;
  dVar26 = (this->PositionGoal).field0_0x0._s_0.Y;
  dVar27 = (this->PositionOrig).field0_0x0._s_0.Y;
  dVar25 = (this->PositionOrig).field0_0x0._s_0.Z;
  dVar5 = (this->PositionOrig).field0_0x0._s_0.Y;
  (this->PositionFinal).field0_0x0._s_0.X =
       ((this->PositionGoal).field0_0x0._s_0.X - (this->PositionOrig).field0_0x0._s_0.X) * dVar24 +
       (this->PositionOrig).field0_0x0._s_0.X;
  (this->PositionFinal).field0_0x0._s_0.Y = (dVar26 - dVar27) * dVar24 + dVar5;
  (this->PositionFinal).field0_0x0._s_0.Z = (dVar4 - dVar22) * dVar24 + dVar25;
  pTVar16 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (local_98,&this->RotationOrig,&this->RotationGoal,
                       (double)(this->Settings).RotationAlpha);
  dVar26 = pTVar16->X;
  dVar27 = pTVar16->Y;
  dVar25 = pTVar16->Z;
  dVar5 = pTVar16->W;
  dVar22 = dVar26 * dVar26 + dVar25 * dVar25;
  dVar24 = dVar27 * dVar27 + dVar5 * dVar5;
  dVar4 = dVar24 + dVar22;
  dVar22 = dVar22 + dVar24;
  auVar30._8_4_ = SUB84(dVar22,0);
  auVar30._0_8_ = dVar4;
  auVar30._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar30 = sqrtpd(in_XMM4,auVar30);
  uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= dVar4);
  uVar20 = -(ulonglong)(__real_3e45798ee0000000 <= dVar22);
  uVar33 = (uint)(uVar19 >> 0x20);
  uVar34 = (uint)(uVar20 >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
  fVar21 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar32._0_8_ = uVar19 & (ulonglong)(auVar31._0_8_ * dVar26);
  uVar13 = uVar20 & (ulonglong)(auVar31._8_8_ * dVar27);
  auVar32._8_4_ = (undefined4)uVar13;
  auVar32._12_4_ = (undefined4)(uVar13 >> 0x20);
  auVar31._0_4_ = ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar31._4_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar31._8_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar31._12_4_ =
       ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  (this->RotationFinal).X = (double)SUB168(auVar32 | auVar31,0);
  (this->RotationFinal).Y = (double)SUB168(auVar32 | auVar31,8);
  auVar28._0_4_ = ~(uint)uVar19 & SUB84((double)fVar21,0);
  auVar28._4_4_ = ~uVar33 & (uint)((ulonglong)(double)fVar21 >> 0x20);
  auVar28._8_4_ = ~(uint)uVar20 & SUB84((double)fVar11,0);
  auVar28._12_4_ = ~uVar34 & (uint)((ulonglong)(double)fVar11 >> 0x20);
  auVar23._0_8_ = (ulonglong)(auVar30._0_8_ * dVar25) & uVar19;
  uVar20 = (ulonglong)(auVar30._8_8_ * dVar5) & uVar20;
  auVar23._8_4_ = (undefined4)uVar20;
  auVar23._12_4_ = (undefined4)(uVar20 >> 0x20);
  (this->RotationFinal).Z = (double)SUB168(auVar28 | auVar23,0);
  (this->RotationFinal).W = (double)SUB168(auVar28 | auVar23,8);
  if (((float)((uint)param_1->Body->InvMass & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
       __real_322bcc77) && (!param_2)) {
    pFVar18 = this->Bone;
    fVar21 = 0.0;
    cVar6 = pFVar18->bIsSolverRoot;
    while (cVar6 == '\0') {
      fVar21 = fVar21 + pFVar18->Length;
      pFVar18 = pFVar18->Parent;
      cVar6 = pFVar18->bIsSolverRoot;
    }
    dVar4 = (param_1->Position).field0_0x0._s_0.X;
    dVar22 = (param_1->Position).field0_0x0._s_0.Y;
    uVar12 = (this->PositionFinal).field0_0x0._s_0.X - dVar4;
    dVar26 = (param_1->Position).field0_0x0._s_0.Z;
    uVar29 = (this->PositionFinal).field0_0x0._s_0.Y - dVar22;
    dVar27 = (double)fVar21;
    local_d8 = (this->PositionFinal).field0_0x0._s_0.Z - dVar26;
    if (__real_3f1a36e2e0000000 <= dVar27) {
      dVar25 = (double)uVar12 * (double)uVar12 + (double)uVar29 * (double)uVar29 +
               local_d8 * local_d8;
      if (dVar27 * dVar27 < dVar25) {
        dVar27 = (__real_3ff0000000000000 / SQRT(dVar25)) * dVar27;
        uVar29 = (double)uVar29 * dVar27;
        local_d8 = local_d8 * dVar27;
        uVar12 = (double)uVar12 * dVar27;
      }
    }
    else {
      local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    }
    (this->PositionFinal).field0_0x0._s_0.X = dVar4 + (double)uVar12;
    (this->PositionFinal).field0_0x0._s_0.Y = dVar22 + (double)uVar29;
    (this->PositionFinal).field0_0x0._s_0.Z = dVar26 + local_d8;
  }
  pFVar7 = this->Pin;
  dVar4 = (this->PositionFinal).field0_0x0._s_0.Y;
  fVar21 = (this->Settings).StrengthAlpha;
  (pFVar7->GoalPosition).field0_0x0._s_0.X = (this->PositionFinal).field0_0x0._s_0.X;
  (pFVar7->GoalPosition).field0_0x0._s_0.Y = dVar4;
  (pFVar7->GoalPosition).field0_0x0._s_0.Z = (this->PositionFinal).field0_0x0._s_0.Z;
  dVar4 = (this->RotationFinal).Y;
  (pFVar7->GoalRotation).X = (this->RotationFinal).X;
  (pFVar7->GoalRotation).Y = dVar4;
  dVar4 = (this->RotationFinal).W;
  (pFVar7->GoalRotation).Z = (this->RotationFinal).Z;
  (pFVar7->GoalRotation).W = dVar4;
  pFVar7->Alpha = fVar21;
  pFVar8 = this->ChainRootBody;
  if (pFVar8 == (FRigidBody *)0x0) {
    this->DistToChainRootInInputPose = 0.0;
  }
  else {
    pTVar2 = &this->DistancesFromEffector;
    piVar1 = &(this->DistancesFromEffector).ArrayMax;
    pTVar17 = &pFVar8->Effector->PositionOrig;
    if (pFVar8->Effector == (FEffector *)0x0) {
      pTVar17 = &pFVar8->Position;
    }
    pFVar18 = this->Bone;
    dVar22 = (pTVar17->field0_0x0)._s_0.Z - (pFVar18->Position).field0_0x0._s_0.Z;
    dVar26 = (pTVar17->field0_0x0)._s_0.Y - (pFVar18->Position).field0_0x0._s_0.Y;
    dVar4 = (pTVar17->field0_0x0)._s_0.X - (pFVar18->Position).field0_0x0._s_0.X;
    this->DistToChainRootInInputPose =
         (float)SQRT(dVar26 * dVar26 + dVar4 * dVar4 + dVar22 * dVar22);
    (this->DistancesFromEffector).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    pfVar3 = &this->DistToChainRootAlongBones;
    *pfVar3 = 0.0;
    pFVar18 = this->Bone;
    while( true ) {
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar9 <= pfVar3) && (pfVar3 < pFVar9 + (longlong)*piVar1 * 4)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar15 = (this->DistancesFromEffector).ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->DistancesFromEffector).ArrayNum = iVar15 + 1;
      *(float *)((pTVar2->AllocatorInstance).Data + (longlong)iVar15 * 4) = *pfVar3;
      if ((pFVar18 == (FBone *)0x0) || (pFVar18->Body == this->ChainRootBody)) break;
      *pfVar3 = pFVar18->Length + *pfVar3;
      pFVar18 = pFVar18->Parent;
    }
  }
  return;
}

