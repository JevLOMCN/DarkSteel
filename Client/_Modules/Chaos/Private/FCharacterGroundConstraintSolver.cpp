// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// GatherInput @ 1438b78d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::GatherInput
          (FCharacterGroundConstraintSolver *this,double param_1,
          FCharacterGroundConstraintSettings *param_2,FCharacterGroundConstraintDynamicData *param_3
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  FSolverBody *pFVar3;
  FSolverBody *pFVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  double dVar24;
  TRotation<double,3> *pTVar25;
  code *pcVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  uint uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  float local_6e8;
  double local_6e0;
  double local_6d8;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  float local_6a8;
  double local_6a0;
  double local_698;
  double dStack_680;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_628;
  double local_620;
  double local_618;
  TVector<double>_u_0 local_608;
  undefined1 local_5e8 [16];
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double dStack_5c0;
  TVector<double>_u_0 local_5b8;
  undefined1 local_598 [16];
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_568;
  TVector<double>_u_0 local_548;
  TQuat<double> local_528;
  undefined1 local_508 [16];
  undefined8 local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_458;
  double dStack_450;
  double local_448;
  TQuat<double> local_438;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  undefined1 local_3e8 [16];
  TVector<double>_u_0 local_3d8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  TVector<double>_u_0 local_338;
  TQuat<double> local_318;
  double local_2f8 [6];
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278 [6];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [32];
  TRotation<double,3> local_158 [3];
  TRotation<double,3> local_e8 [6];
  
  *(undefined8 *)&(this->ImpulseData).LinearPositionImpulse =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  dVar24 = __real_3ff0000000000000;
  uVar51 = SUB84(__real_3ff0000000000000,0);
  uVar23 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  *(float *)&(this->ImpulseData).LinearPositionImpulse.field_0x8 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar49 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&(this->ImpulseData).AngularSwingImpulse =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(undefined4 *)&(this->ImpulseData).AngularSwingImpulse.field_0x8 = uVar49;
  (this->ImpulseData).AngularImpulse = 0.0;
  (this->ImpulseData).LinearCorrectionImpulse = 0.0;
  fVar37 = (this->BodyData).CharacterBody.State.ShockPropagationScale;
  pFVar3 = (this->BodyData).CharacterBody.Body;
  fVar52 = fVar37 * (this->BodyData).CharacterBody.State.InvIScale;
  pFVar4 = (this->BodyData).GroundBody.Body;
  local_6a8 = fVar52 * *(float *)&(pFVar3->State).InvILocal;
  local_6e8 = fVar52 * *(float *)&(pFVar3->State).InvILocal.field_0x4;
  fVar52 = fVar52 * *(float *)&(pFVar3->State).InvILocal.field_0x8;
  local_6a0 = 0.0;
  local_618 = (double)(fVar37 * (this->BodyData).CharacterBody.State.InvMScale *
                      (pFVar3->State).InvM);
  if (((pFVar4 != (FSolverBody *)0x0) &&
      (dVar40 = param_2->MaxCharacterGroundMassRatio, 0.0 < dVar40)) &&
     (fVar37 = (this->BodyData).GroundBody.State.ShockPropagationScale *
               (this->BodyData).GroundBody.State.InvMScale * (pFVar4->State).InvM, 0.0 < fVar37)) {
    dVar9 = dVar24 / local_618;
    local_6a0 = (double)fVar37;
    if (dVar40 < dVar9 * local_6a0) {
      local_618 = local_6a0 / dVar40;
      fVar37 = (float)(dVar9 * local_618);
      local_6a8 = local_6a8 * fVar37;
      local_6e8 = local_6e8 * fVar37;
      fVar52 = fVar52 * fVar37;
    }
  }
  local_5e8 = *(undefined1 (*) [16])&(pFVar3->State).X;
  dVar40 = *(double *)&(pFVar3->State).X.field_0x10;
  local_4e8 = *(undefined1 (*) [16])&(pFVar3->State).P;
  dVar9 = param_2->TargetHeight;
  local_3f8 = *(double *)&(pFVar3->State).Q;
  dStack_3f0 = *(double *)&(pFVar3->State).Q.field_0x8;
  auVar44 = *(undefined1 (*) [16])&(pFVar3->State).R.field_0x10;
  auVar2 = *(undefined1 (*) [16])&(pFVar3->State).R;
  local_548._s_0.Z = (double)*(undefined8 *)&(pFVar3->State).P.field_0x10;
  local_4f8 = dVar40 - *(double *)&(param_2->VerticalAxis).field_0x10 * dVar9;
  dVar27 = local_5e8._8_8_;
  local_508._8_4_ = local_5e8._8_4_;
  local_508._0_8_ = dVar27;
  local_508._12_4_ = local_5e8._12_4_;
  local_3e8 = *(undefined1 (*) [16])&(pFVar3->State).Q.field_0x10;
  local_5c8 = dVar27 - *(double *)&(param_2->VerticalAxis).field_0x8 * dVar9;
  dVar38 = local_3e8._8_8_;
  dVar30 = local_3e8._0_8_;
  dVar29 = param_3->GroundDistance;
  dVar13 = local_5e8._0_8_;
  local_528.X = dVar13 - *(double *)&param_2->VerticalAxis * dVar9;
  dVar9 = dVar40 - dVar29 * *(double *)&(param_2->VerticalAxis).field_0x10;
  dVar39 = auVar2._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar41 = auVar2._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar27 = dVar27 - dVar29 * *(double *)&(param_2->VerticalAxis).field_0x8;
  dVar28 = dVar13 - dVar29 * *(double *)&param_2->VerticalAxis;
  dVar12 = auVar44._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar14 = auVar44._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar42._8_4_ = SUB84(dVar41,0);
  auVar42._0_8_ = dVar39;
  auVar42._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  auVar31._8_4_ = local_3e8._8_4_;
  auVar31._0_8_ = dVar38;
  auVar31._12_4_ = local_3e8._12_4_;
  dVar29 = local_3f8 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar38 * dVar39;
  dVar35 = local_3f8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar31._8_8_ * dVar41;
  auVar7._8_4_ = SUB84(dVar35,0);
  auVar7._0_8_ = dVar29;
  auVar7._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  dStack_680 = auVar7._8_8_;
  auVar32._8_4_ = local_3e8._0_4_;
  auVar32._0_8_ = dVar30;
  auVar32._12_4_ = local_3e8._4_4_;
  local_178._0_8_ =
       dVar29 + dStack_3f0 * dVar12 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar30 * auVar42._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar29 = dStack_680 +
           dStack_3f0 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar32._8_8_ * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar8._8_4_ = SUB84(dVar29,0);
  auVar8._0_8_ = local_178._0_8_;
  auVar8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  auVar16._4_8_ = dVar39;
  auVar16._0_4_ = local_3e8._4_4_;
  auVar43._0_8_ = auVar16._0_8_ << 0x20;
  auVar43._8_4_ = local_3e8._8_4_;
  auVar43._12_4_ = local_3e8._12_4_;
  dVar29 = local_3f8 * auVar42._8_8_ *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar38 * dVar12 +
           dStack_3f0 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar30 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar35 = local_3f8 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar38 * dVar14 +
           dStack_3f0 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar30 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar17._4_8_ = dVar35;
  auVar17._0_4_ = auVar44._4_4_;
  auVar33._0_8_ = auVar17._0_8_ << 0x20;
  auVar33._8_4_ = auVar44._8_4_;
  auVar33._12_4_ = auVar44._12_4_;
  auVar18._4_8_ = auVar44._8_8_;
  auVar18._0_4_ = auVar2._4_4_;
  auVar34._0_8_ = auVar18._0_8_ << 0x20;
  auVar34._8_4_ = auVar2._8_4_;
  auVar34._12_4_ = auVar2._12_4_;
  dStack_680 = auVar8._8_8_;
  if (auVar43._8_8_ * auVar33._8_8_ + dVar30 * auVar44._0_8_ +
      dStack_3f0 * auVar34._8_8_ + local_3f8 * auVar2._0_8_ < 0.0) {
    local_178._0_8_ = 0.0 - (double)local_178._0_8_;
    dStack_680 = 0.0 - dStack_680;
    dVar29 = 0.0 - dVar29;
    dVar35 = 0.0 - dVar35;
  }
  local_178._24_4_ = SUB84(dVar35,0);
  local_178._16_8_ = dVar29;
  local_178._28_4_ = (int)((ulonglong)dVar35 >> 0x20);
  local_5d8 = dVar40;
  local_448 = param_1;
  local_178._8_8_ = dStack_680;
  UE::Math::TQuat<double>::Log((TQuat<double> *)local_178,&local_318);
  uVar20 = local_548._s_0.Z;
  dVar39 = local_4f8 - dVar9;
  local_5d0 = local_5c8 - dVar27;
  dVar41 = local_528.X - dVar28;
  uVar49 = *(undefined4 *)&param_3->GroundNormal;
  uVar50 = *(undefined4 *)&(param_3->GroundNormal).field_0x4;
  uStack_4f0 = *(undefined4 *)&(param_3->GroundNormal).field_0x8;
  uStack_4ec = *(undefined4 *)&(param_3->GroundNormal).field_0xc;
  dVar30 = local_318.X * __real_4000000000000000;
  dVar38 = local_318.Y * __real_4000000000000000;
  dVar14 = local_318.Z * __real_4000000000000000;
  dVar29 = *(double *)&param_2->VerticalAxis;
  dVar35 = *(double *)&(param_2->VerticalAxis).field_0x8;
  dVar12 = *(double *)&(param_2->VerticalAxis).field_0x10;
  local_4d8 = 0.0;
  local_498 = 0.0;
  dStack_4d0 = 0.0;
  local_4b8 = ZEXT816(0);
  local_588._s_0.X = local_548._s_0.Z - dVar40;
  dStack_490 = 0.0;
  local_5b8._s_0.X = (double)local_4e8._0_8_ - dVar13;
  dStack_450 = (double)local_4e8._8_8_;
  local_458 = (double)local_4e8._8_8_;
  local_568._s_0.X = (double)local_4e8._8_8_ - (double)local_508._0_8_;
  local_6d8 = dVar39 + local_588._s_0.X;
  local_4c8 = 0.0;
  dVar40 = local_5d0 + local_568._s_0.X;
  local_6e0 = dVar41 + local_5b8._s_0.X;
  local_6c8 = ___xmm_3ff00000000000000000000000000000;
  dStack_6c0 = _UNK_15061cbc8;
  local_608._s_0.X = 0.0;
  local_608._s_0.Y = 0.0;
  local_548._s_0.Z = (double)*(undefined8 *)&(param_3->GroundNormal).field_0x10;
  local_598._0_8_ = dVar40;
  local_4a8 = 0.0;
  local_488 = 0.0;
  dStack_4c0 = 0.0;
  dStack_4a0 = 0.0;
  dStack_480 = 0.0;
  local_650 = dVar24;
  local_660 = dVar24;
  local_658 = dVar24;
  local_648 = dVar24;
  local_628 = dVar24;
  local_438.X = UE::Math::TQuat<double>::Identity.X;
  local_438.Y = UE::Math::TQuat<double>::Identity.Y;
  local_438.Z = UE::Math::TQuat<double>::Identity.Z;
  local_438.W = UE::Math::TQuat<double>::Identity.W;
  local_620 = dVar24;
  local_418 = UE::Math::TQuat<double>::Identity.X;
  dStack_410 = UE::Math::TQuat<double>::Identity.Y;
  local_408 = UE::Math::TQuat<double>::Identity.Z;
  dStack_400 = UE::Math::TQuat<double>::Identity.W;
  local_508 = *(undefined1 (*) [16])&param_3->GroundNormal;
  local_698 = local_618;
  if (pFVar4 != (FSolverBody *)0x0) {
    pFVar3 = (this->BodyData).GroundBody.Body;
    local_418 = *(double *)&(pFVar3->State).Q;
    dStack_410 = *(double *)&(pFVar3->State).Q.field_0x8;
    dVar13 = *(double *)&(pFVar3->State).X;
    dVar1 = *(double *)&(pFVar3->State).X.field_0x8;
    dVar40 = *(double *)&(pFVar3->State).X.field_0x10;
    dVar10 = *(double *)&(pFVar3->State).P;
    dVar11 = *(double *)&(pFVar3->State).P.field_0x8;
    local_658 = *(double *)&(pFVar3->State).P.field_0x10;
    local_408 = *(double *)&(pFVar3->State).Q.field_0x10;
    dStack_400 = *(double *)&(pFVar3->State).Q.field_0x18;
    local_158[0]._0_8_ = *(undefined8 *)&(pFVar3->State).R;
    local_158[0]._8_8_ = *(undefined8 *)&(pFVar3->State).R.field_0x8;
    local_158[0]._16_8_ = *(undefined8 *)&(pFVar3->State).R.field_0x10;
    local_158[0]._24_8_ = *(undefined8 *)&(pFVar3->State).R.field_0x18;
    pTVar25 = GetRelativeRotation(local_e8,local_158,(TRotation<double,3> *)&local_418);
    local_438.X = *(double *)pTVar25;
    local_438.Y = *(double *)&pTVar25->field_0x8;
    dVar27 = dVar27 - dVar1;
    local_438.Z = *(double *)&pTVar25->field_0x10;
    local_438.W = *(double *)&pTVar25->field_0x18;
    dVar28 = dVar28 - dVar13;
    dVar9 = dVar9 - dVar40;
    local_338._s_0.X = dVar28;
    local_338._s_0.Y = dVar27;
    local_338._s_0.Z = dVar9;
    UE::Math::TQuat<double>::RotateVector
              (&local_438,(TVector<double> *)&local_3d8._s_0,(TVector<double> *)&local_338._s_0);
    local_620 = ((local_658 - dVar40) + local_3d8._s_0.Z) - dVar9;
    local_660 = (local_5c8 + local_568._s_0.X) - dVar11;
    local_650 = (local_5b8._s_0.X + local_528.X) - dVar10;
    local_628 = ((dVar11 - dVar1) + local_3d8._s_0.Y) - dVar27;
    local_568._s_0.X = (double)*(undefined8 *)&param_3->GroundNormal;
    local_568._s_0.Y = (double)*(undefined8 *)&(param_3->GroundNormal).field_0x8;
    local_648 = ((dVar10 - dVar13) + local_3d8._s_0.X) - dVar28;
    local_658 = (local_4f8 + local_588._s_0.X) - local_658;
    local_568._s_0.Z = (double)*(undefined8 *)&(param_3->GroundNormal).field_0x10;
    UE::Math::TQuat<double>::RotateVector
              (&local_438,(TVector<double> *)&local_588._s_0,(TVector<double> *)&local_568._s_0);
    uVar21 = local_588._s_0.X;
    local_508._8_8_ = local_588._s_0.Y;
    local_508._0_8_ = local_588._s_0.X;
    uVar49 = SUB84(local_588._s_0.X,0);
    uVar50 = (undefined4)((ulonglong)local_588._0_8_ >> 0x20);
    uStack_4f0 = SUB84(local_588._s_0.Y,0);
    uStack_4ec = (undefined4)((ulonglong)local_588._8_8_ >> 0x20);
    local_548._s_0.Z = local_588._s_0.Z;
    fVar37 = (this->BodyData).GroundBody.State.ShockPropagationScale;
    local_6e0 = local_6e0 - local_648;
    dVar40 = (double)local_598._0_8_ - local_628;
    local_2f8[4] = 0.0;
    local_2b8 = 0;
    local_2f8[1] = 0.0;
    local_6d8 = local_6d8 - local_620;
    local_2b0 = 0;
    local_2f8[2] = 0.0;
    local_2c8 = 0;
    local_2f8[3] = 0.0;
    fVar36 = fVar37 * (this->BodyData).GroundBody.State.InvIScale;
    local_2c0 = 0;
    local_2a0 = 0;
    local_6a0 = (double)(fVar37 * (this->BodyData).GroundBody.State.InvMScale * (pFVar3->State).InvM
                        );
    local_2f8[0] = (double)(fVar36 * *(float *)&(pFVar3->State).InvILocal);
    local_2f8[5] = (double)(fVar36 * *(float *)&(pFVar3->State).InvILocal.field_0x4);
    local_2a8 = (double)(fVar36 * *(float *)&(pFVar3->State).InvILocal.field_0x8);
    local_288 = ___xmm_3ff00000000000000000000000000000;
    dStack_280 = _UNK_15061cbc8;
    local_298 = 0;
    uStack_290 = 0;
    Utilities::ComputeWorldSpaceInertia
              ((PMatrix<double,3,3> *)&local_1f8,(TRotation<double,3> *)&local_418,
               (PMatrix<double,3,3> *)local_2f8);
    local_4c8 = local_1e8;
    dStack_4c0 = dStack_1e0;
    dVar9 = (double)uVar21 * local_658 - local_588._s_0.Z * local_650;
    local_4a8 = local_1c8;
    dStack_4a0 = dStack_1c0;
    local_498 = local_1b8;
    dStack_490 = dStack_1b0;
    local_488 = local_1a8;
    dStack_480 = dStack_1a0;
    local_608._s_0.X = local_198;
    local_608._s_0.Y = dStack_190;
    local_6c8 = local_188;
    dStack_6c0 = dStack_180;
    local_4d8 = local_1f8;
    dStack_4d0 = dStack_1f0;
    dVar13 = local_588._s_0.Z * local_660 - local_588._s_0.Y * local_658;
    local_4b8 = local_1d8;
    dVar27 = local_588._s_0.Y * local_650 - (double)uVar21 * local_660;
    auVar19._4_8_ = dStack_1f0;
    auVar19._0_4_ = local_1d8._4_4_;
    auVar44._0_8_ = auVar19._0_8_ << 0x20;
    auVar44._8_4_ = local_1d8._8_4_;
    auVar44._12_4_ = local_1d8._12_4_;
    local_698 = (dStack_1f0 * dVar9 + local_1f8 * dVar13 + local_1e8 * dVar27) * dVar13 +
                (auVar44._8_8_ * dVar9 + local_1d8._0_8_ * dVar13 + local_1c8 * dVar27) * dVar9 +
                (dStack_1b0 * dVar9 + local_1b8 * dVar13 + local_1a8 * dVar27) * dVar27 +
                local_6a0 + local_618;
  }
  uVar21 = local_548._s_0.Z;
  local_698 = dVar24 / local_698;
  local_4f8 = (double)CONCAT44(uStack_4ec,uStack_4f0);
  dVar9 = (double)CONCAT44(uStack_4ec,uStack_4f0) * local_5d0 +
          (double)CONCAT44(uVar50,uVar49) * dVar41 + local_548._s_0.Z * dVar39;
  uVar45 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar46 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  bVar5 = (double)CONCAT44(uVar46,uVar45) == 0.0;
  bVar6 = (double)CONCAT44(uVar46,uVar45) < 0.0;
  if ((bVar6 || bVar5) ||
     (__real_8000000000000000 <=
      (double)CONCAT44(uStack_4ec,uStack_4f0) * dVar40 + (double)CONCAT44(uVar50,uVar49) * local_6e0
      + local_548._s_0.Z * local_6d8)) {
    this->CorrectionSolveFunction = NoSolve;
    dVar9 = local_5d0;
    if (bVar6 || bVar5) goto LAB_1438b8499;
  }
  else {
    this->CorrectionSolveFunction = SolveCorrectionSingleBody;
  }
  dVar9 = param_2->DampingFactor;
  uVar47 = SUB84(dVar9,0);
  uVar48 = (int)((ulonglong)dVar9 >> 0x20);
  if (dVar24 <= dVar9) {
    uVar47 = uVar51;
    uVar48 = (int)uVar23;
  }
  if ((double)CONCAT44(uVar48,uVar47) <= 0.0) {
    uVar47 = 0;
    uVar48 = 0;
  }
  dVar13 = (double)CONCAT44(uVar48,uVar47) * (double)CONCAT44(uVar46,uVar45);
  dVar9 = (double)CONCAT44(uVar50,uVar49) * dVar13;
  dVar27 = dVar13 * (double)CONCAT44(uStack_4ec,uStack_4f0);
  local_6e0 = local_6e0 + dVar9;
  dVar41 = dVar41 + dVar9;
  dVar39 = dVar39 + dVar13 * local_548._s_0.Z;
  dVar40 = dVar40 + dVar27;
  local_6d8 = local_6d8 + dVar13 * local_548._s_0.Z;
  dVar9 = local_5d0 + dVar27;
LAB_1438b8499:
  local_598._0_8_ = local_4b8._0_8_;
  local_598._8_8_ = local_4b8._8_8_;
  (this->ConstraintData).GroundInvM = (float)local_6a0;
  (this->ConstraintData).CharacterInvM = (float)local_618;
  *(float *)&(this->ConstraintData).GroundInvI = (float)local_4d8;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x4 = (float)dStack_4d0;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x8 = (float)local_4c8;
  *(float *)&(this->ConstraintData).GroundInvI.field_0xc = (float)dStack_4c0;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x10 = (float)(double)local_598._0_8_;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x14 = (float)(double)local_598._8_8_;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x18 = (float)local_4a8;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x1c = (float)dStack_4a0;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x20 = (float)local_498;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x24 = (float)dStack_490;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x28 = (float)local_488;
  *(float *)&(this->ConstraintData).GroundInvI.field_0x2c = (float)dStack_480;
  *(ulonglong *)&(this->ConstraintData).GroundInvI.field_0x30 =
       CONCAT44((float)local_608._s_0.Y,(float)local_608._s_0.X);
  *(ulonglong *)&(this->ConstraintData).GroundInvI.field_0x38 =
       CONCAT44((float)dStack_6c0,(float)local_6c8);
  (this->ConstraintData).EffectiveMassN = (float)local_698;
  *(float *)&(this->ConstraintData).Normal = (float)(double)CONCAT44(uVar50,uVar49);
  *(float *)&(this->ConstraintData).Normal.field_0x4 =
       (float)(double)CONCAT44(uStack_4ec,uStack_4f0);
  *(float *)&(this->ConstraintData).Normal.field_0x8 = (float)local_548._s_0.Z;
  *(float *)&(this->ConstraintData).GroundOffset = (float)local_650;
  *(float *)&(this->ConstraintData).GroundOffset.field_0x4 = (float)local_660;
  *(float *)&(this->ConstraintData).GroundOffset.field_0x8 = (float)local_658;
  local_278[4] = 0.0;
  local_238 = 0;
  local_278[1] = 0.0;
  local_230 = 0;
  local_278[2] = 0.0;
  local_248 = 0;
  (this->ConstraintData).InitialError =
       (float)((double)CONCAT44(uStack_4ec,uStack_4f0) * dVar9 +
               (double)CONCAT44(uVar50,uVar49) * dVar41 + local_548._s_0.Z * dVar39);
  local_278[0] = (double)local_6a8;
  (this->ConstraintData).InitialProjectedError =
       (float)((double)CONCAT44(uStack_4ec,uStack_4f0) * dVar40 +
               (double)CONCAT44(uVar50,uVar49) * local_6e0 + local_548._s_0.Z * local_6d8);
  local_278[5] = (double)local_6e8;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (double)fVar52;
  local_208 = ___xmm_3ff00000000000000000000000000000;
  dStack_200 = _UNK_15061cbc8;
  local_278[3] = 0.0;
  local_240 = 0;
  local_220 = 0;
  local_5c8 = local_4c8;
  dStack_5c0 = dStack_4c0;
  local_5b8._s_0.X = local_4a8;
  local_5b8._s_0.Y = dStack_4a0;
  local_598 = local_4b8;
  local_588._s_0.X = local_488;
  local_588._s_0.Y = dStack_480;
  local_568._s_0.X = local_498;
  local_568._s_0.Y = dStack_490;
  local_528.X = local_4d8;
  local_528.Y = dStack_4d0;
  Utilities::ComputeWorldSpaceInertia
            ((PMatrix<double,3,3> *)&local_3b8,(TRotation<double,3> *)&local_3f8,
             (PMatrix<double,3,3> *)local_278);
  *(float *)&(this->ConstraintData).CharacterInvI = (float)local_3b8;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x4 = (float)dStack_3b0;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x8 = (float)local_3a8;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0xc = (float)dStack_3a0;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x10 = (float)local_398;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x14 = (float)dStack_390;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x18 = (float)local_388;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x1c = (float)dStack_380;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x20 = (float)local_378;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x24 = (float)dStack_370;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x28 = (float)local_368;
  *(float *)&(this->ConstraintData).CharacterInvI.field_0x2c = (float)dStack_360;
  *(ulonglong *)&(this->ConstraintData).CharacterInvI.field_0x30 =
       CONCAT44((float)dStack_350,(float)local_358);
  *(ulonglong *)&(this->ConstraintData).CharacterInvI.field_0x38 =
       CONCAT44((float)dStack_340,(float)local_348);
  dVar40 = *(double *)&(param_2->VerticalAxis).field_0x8;
  dVar9 = *(double *)&(param_2->VerticalAxis).field_0x10;
  *(float *)&(this->ConstraintData).VerticalAxis = (float)*(double *)&param_2->VerticalAxis;
  *(float *)&(this->ConstraintData).VerticalAxis.field_0x4 = (float)dVar40;
  *(float *)&(this->ConstraintData).VerticalAxis.field_0x8 = (float)dVar9;
  dVar39 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dStack_3f0 -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * (double)local_3e8._0_8_;
  dVar39 = dVar39 + dVar39;
  dVar27 = (double)local_3e8._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * local_3f8;
  dVar27 = dVar27 + dVar27;
  dVar13 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * local_3f8 -
           dStack_3f0 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  dVar13 = dVar13 + dVar13;
  dVar40 = dVar27 * (double)local_3e8._8_8_ + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  dVar9 = dVar13 * (double)local_3e8._8_8_ + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  *(float *)&(this->ConstraintData).CharacterVerticalAxis =
       (float)((dVar13 * dStack_3f0 - dVar27 * (double)local_3e8._0_8_) +
              dVar39 * (double)local_3e8._8_8_ +
              UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X);
  *(float *)&(this->ConstraintData).CharacterVerticalAxis.field_0x4 =
       (float)((dVar39 * (double)local_3e8._0_8_ - dVar13 * local_3f8) + dVar40);
  *(float *)&(this->ConstraintData).CharacterVerticalAxis.field_0x8 =
       (float)((dVar27 * local_3f8 - dVar39 * dStack_3f0) + dVar9);
  local_6c8 = *(double *)&param_3->TargetDeltaPosition;
  dStack_6c0 = *(double *)&(param_3->TargetDeltaPosition).field_0x8;
  local_6b8 = *(double *)&(param_3->TargetDeltaPosition).field_0x10;
  local_698 = param_3->TargetDeltaFacing;
  if ((this->BodyData).GroundBody.Body != (FSolverBody *)0x0) {
    local_548._s_0.X = local_6c8;
    local_548._s_0.Y = dStack_6c0;
    local_548._s_0.Z = local_6b8;
    UE::Math::TQuat<double>::RotateVector
              (&local_438,(TVector<double> *)&local_5b8._s_0,(TVector<double> *)&local_548._s_0);
    local_6c8 = local_5b8._s_0.X + local_648;
    dStack_6c0 = local_5b8._s_0.Y + local_628;
    local_6b8 = local_5b8._s_0.Z + local_620;
    UE::Math::TQuat<double>::Log(&local_438,&local_528);
    local_698 = local_528.X * __real_4000000000000000 * *(double *)&param_2->VerticalAxis +
                local_528.Y * __real_4000000000000000 *
                *(double *)&(param_2->VerticalAxis).field_0x8 +
                local_528.Z * __real_4000000000000000 *
                *(double *)&(param_2->VerticalAxis).field_0x10 + local_698;
  }
  dVar27 = __real_3e45798ee0000000;
  bVar5 = false;
  dVar40 = *(double *)&(param_2->VerticalAxis).field_0x8;
  dVar9 = *(double *)&(param_2->VerticalAxis).field_0x10;
  dVar13 = local_448 * local_448;
  dVar39 = (double)local_508._0_8_ * *(double *)&param_2->VerticalAxis + dVar40 * local_4f8 +
           dVar9 * (double)uVar21;
  if (param_3->CosMaxWalkableSlopeAngle <= dVar39 && dVar39 != param_3->CosMaxWalkableSlopeAngle) {
    dVar40 = param_2->RadialForceLimit;
  }
  else {
    local_608._s_0.X = *(double *)&param_2->VerticalAxis - (double)local_508._0_8_ * dVar39;
    local_608._s_0.Y = dVar40 - dVar39 * local_4f8;
    local_608._s_0.Z = dVar9 - dVar39 * (double)uVar21;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_608._s_0,__real_3e45798ee0000000)
    ;
    dVar40 = dStack_6c0 * local_608._s_0.Y + local_608._s_0.X * local_6c8 +
             local_6b8 * local_608._s_0.Z;
    if (0.0 < dVar40) {
      local_6c8 = local_6c8 - dVar40 * local_608._s_0.X;
      dStack_6c0 = dStack_6c0 - dVar40 * local_608._s_0.Y;
      local_6b8 = local_6b8 - dVar40 * local_608._s_0.Z;
    }
    bVar5 = true;
    dVar40 = param_2->FrictionForceLimit;
  }
  (this->ConstraintData).RadialImpulseLimit = (float)(dVar13 * dVar40);
  local_458 = local_458 - (dStack_6c0 + (double)local_5e8._8_8_);
  dVar9 = (double)uVar20 - (local_6b8 + local_5d8);
  dVar40 = (double)local_4e8._0_8_ - ((double)local_5e8._0_8_ + local_6c8);
  dVar39 = local_458 * local_458 + dVar40 * dVar40 + dVar9 * dVar9;
  if (dVar39 <= dVar27) {
    dVar41 = dStack_6c0 * dStack_6c0 + local_6c8 * local_6c8 + local_6b8 * local_6b8;
    uVar20 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    uVar21 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    uVar22 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    if (dVar27 < dVar41) {
      dVar27 = dVar24 / SQRT(dVar41);
      uVar20 = dVar27 * dStack_6c0;
      uVar21 = dVar27 * local_6c8;
      uVar22 = dVar27 * local_6b8;
    }
  }
  else {
    dVar27 = dVar24 / SQRT(dVar39);
    uVar20 = local_458 * dVar27;
    uVar21 = dVar27 * dVar40;
    uVar22 = dVar9 * dVar27;
  }
  dVar27 = param_2->MotionTargetMassBias;
  (this->ConstraintData).MassBiasT = (float)dVar27;
  dVar41 = *(double *)&param_2->VerticalAxis;
  dVar28 = *(double *)&(param_2->VerticalAxis).field_0x8;
  dVar1 = *(double *)&(param_2->VerticalAxis).field_0x10;
  if (pFVar4 != (FSolverBody *)0x0) {
    dVar10 = (double)uVar22 * local_660 - (double)uVar20 * local_658;
    dVar11 = (double)uVar21 * local_658 - (double)uVar22 * local_650;
    dVar15 = (double)uVar20 * local_650 - (double)uVar21 * local_660;
    local_618 = ((dVar11 * (double)local_4b8._8_8_ + dVar10 * (double)local_4b8._0_8_ +
                 dVar15 * local_4a8) * dVar11 +
                 (dVar11 * dStack_4d0 + dVar10 * local_4d8 + dVar15 * local_4c8) * dVar10 +
                 (dVar11 * dStack_490 + dVar10 * local_498 + dVar15 * local_488) * dVar15 +
                local_6a0) * (double)(float)dVar27 + local_618;
  }
  if ((!bVar5) && (__real_3e45798ee0000000 < dVar39)) {
    fVar52 = (float)(SQRT(dVar39) * (dVar24 / local_618) * param_2->RadialForceMotionTargetScaling);
    fVar37 = (this->ConstraintData).RadialImpulseLimit;
    if (fVar52 <= fVar37) {
      fVar52 = fVar37;
    }
    (this->ConstraintData).RadialImpulseLimit = fVar52;
  }
  pcVar26 = SolvePositionSingleBody;
  if (pFVar4 != (FSolverBody *)0x0) {
    pcVar26 = SolvePositionTwoBody;
  }
  (this->ConstraintData).AngularTwistImpulseLimit = (float)(dVar13 * param_2->TwistTorqueLimit);
  (this->ConstraintData).AngularSwingImpulseLimit = (float)(dVar13 * param_2->SwingTorqueLimit);
  (this->ConstraintData).AssumedOnGroundHeight = (float)param_2->AssumedOnGroundHeight;
  *(float *)&(this->ConstraintData).MotionTargetError = (float)dVar40;
  *(float *)&(this->ConstraintData).MotionTargetError.field_0x4 = (float)local_458;
  *(float *)&(this->ConstraintData).MotionTargetError.field_0x8 = (float)dVar9;
  this->PositionSolveFunction = pcVar26;
  (this->ConstraintData).MotionTargetAngularError =
       (float)((dVar38 * dVar35 + dVar30 * dVar29 + dVar14 * dVar12) - local_698);
  (this->ConstraintData).EffectiveMassT = (float)(dVar24 / local_618);
  (this->ConstraintData).EffectiveInertiaT =
       (float)(dVar24 / ((dVar28 * dStack_3b0 + dVar41 * local_3b8 + dVar1 * local_3a8) * dVar41 +
                         (dVar28 * dStack_390 + dVar41 * local_398 + dVar1 * local_388) * dVar28 +
                        (dVar28 * dStack_370 + dVar41 * local_378 + dVar1 * local_368) * dVar1));
  return;
}

// NoSolve @ 1438c4660

void __cdecl
Chaos::Private::FCharacterGroundConstraintSolver::NoSolve
          (FConstraintData *param_1,FBodyData *param_2,FImpulseData *param_3)

{
  return;
}

// Reset @ 1438d0180

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::Reset(FCharacterGroundConstraintSolver *this)

{
  (this->BodyData).CharacterBody.Body = (FSolverBody *)0x0;
  (this->BodyData).GroundBody.Body = (FSolverBody *)0x0;
  return;
}

// ScatterOutput @ 1438d0f30

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::ScatterOutput
          (FCharacterGroundConstraintSolver *this,double param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (__real_3e45798ee0000000 < param_1) {
    fVar1 = (this->ImpulseData).LinearCorrectionImpulse;
    fVar2 = *(float *)&(this->ConstraintData).Normal.field_0x4;
    fVar3 = *(float *)&(this->ImpulseData).LinearPositionImpulse.field_0x4;
    dVar7 = __real_3ff0000000000000 / (param_1 * param_1);
    fVar4 = *(float *)&(this->ConstraintData).Normal.field_0x8;
    fVar5 = *(float *)&(this->ImpulseData).LinearPositionImpulse.field_0x8;
    *(double *)param_2 =
         (double)(fVar1 * *(float *)&(this->ConstraintData).Normal +
                 *(float *)&(this->ImpulseData).LinearPositionImpulse) * dVar7;
    *(double *)&param_2->field_0x8 = (double)(fVar1 * fVar2 + fVar3) * dVar7;
    *(double *)&param_2->field_0x10 = (double)(fVar1 * fVar4 + fVar5) * dVar7;
    fVar1 = (this->ImpulseData).AngularImpulse;
    fVar2 = *(float *)&(this->ConstraintData).VerticalAxis.field_0x4;
    fVar3 = *(float *)&(this->ImpulseData).AngularSwingImpulse.field_0x4;
    fVar4 = *(float *)&(this->ConstraintData).VerticalAxis.field_0x8;
    fVar5 = *(float *)&(this->ImpulseData).AngularSwingImpulse.field_0x8;
    *(double *)param_3 =
         (double)(fVar1 * *(float *)&(this->ConstraintData).VerticalAxis +
                 *(float *)&(this->ImpulseData).AngularSwingImpulse) * dVar7;
    *(double *)&param_3->field_0x8 = (double)(fVar1 * fVar2 + fVar3) * dVar7;
    *(double *)&param_3->field_0x10 = (double)(fVar1 * fVar4 + fVar5) * dVar7;
    (this->BodyData).GroundBody.Body = (FSolverBody *)0x0;
    (this->BodyData).CharacterBody.Body = (FSolverBody *)0x0;
    return;
  }
  *(double *)param_2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_2->field_0x8 = uVar6;
  *(double *)&param_2->field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)param_3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&param_3->field_0x8 = uVar6;
  *(double *)&param_3->field_0x10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->BodyData).GroundBody.Body = (FSolverBody *)0x0;
  (this->BodyData).CharacterBody.Body = (FSolverBody *)0x0;
  return;
}

// SetBodies @ 1438d1b30

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::SetBodies
          (FCharacterGroundConstraintSolver *this,FSolverBody *param_1,FSolverBody *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCharacterBody != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintSolver.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->BodyData).CharacterBody.Body = param_1;
  if (param_2 != (FSolverBody *)0x0) {
    (this->BodyData).GroundBody.Body = param_2;
  }
  return;
}

// SolveCorrectionSingleBody @ 1438d4b20

void __cdecl
Chaos::Private::FCharacterGroundConstraintSolver::SolveCorrectionSingleBody
          (FConstraintData *param_1,FBodyData *param_2,FImpulseData *param_3)

{
  float fVar1;
  FSolverBody *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pFVar2 = (param_2->CharacterBody).Body;
  fVar5 = *(float *)&(pFVar2->State).CP * *(float *)&param_1->Normal +
          *(float *)&(param_1->Normal).field_0x4 * *(float *)&(pFVar2->State).CP.field_0x4 +
          *(float *)&(pFVar2->State).CP.field_0x8 * *(float *)&(param_1->Normal).field_0x8 +
          param_1->InitialError;
  if (fVar5 < 0.0) {
    fVar6 = (float)((uint)(fVar5 / param_1->CharacterInvM) ^ __xmm_80000000800000008000000080000000)
    ;
    param_3->LinearCorrectionImpulse = fVar6 + param_3->LinearCorrectionImpulse;
    fVar6 = fVar6 * param_1->CharacterInvM;
    fVar3 = fVar6 * *(float *)&param_1->Normal;
    fVar4 = fVar6 * *(float *)&(param_1->Normal).field_0x4;
    fVar6 = fVar6 * *(float *)&(param_1->Normal).field_0x8;
    fVar5 = *(float *)&(pFVar2->State).CP.field_0x4;
    *(float *)&(pFVar2->State).CP = fVar3 + *(float *)&(pFVar2->State).CP;
    fVar1 = *(float *)&(pFVar2->State).CP.field_0x8;
    *(float *)&(pFVar2->State).CP.field_0x4 = fVar4 + fVar5;
    *(float *)&(pFVar2->State).CP.field_0x8 = fVar6 + fVar1;
    fVar5 = *(float *)&(pFVar2->State).DP.field_0x4;
    fVar1 = *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DP = fVar3 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = fVar4 + fVar5;
    *(float *)&(pFVar2->State).DP.field_0x8 = fVar6 + fVar1;
  }
  return;
}

// SolvePositionSingleBody @ 1438d4c10

/* WARNING: Type propagation algorithm not settling */

void __cdecl
Chaos::Private::FCharacterGroundConstraintSolver::SolvePositionSingleBody
          (FConstraintData *param_1,FBodyData *param_2,FImpulseData *param_3)

{
  float fVar1;
  FSolverBody *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_b8;
  
  fVar8 = *(float *)&(param_1->Normal).field_0x4;
  fVar12 = *(float *)&(param_1->Normal).field_0x8;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar18 = fVar8 * *(float *)&(pFVar2->State).DP.field_0x4 +
           *(float *)&param_1->Normal * *(float *)&(pFVar2->State).DP +
           fVar12 * *(float *)&(pFVar2->State).DP.field_0x8 + param_1->InitialProjectedError;
  if (fVar18 < 0.0) {
    fVar3 = (float)((uint)(fVar18 / param_1->CharacterInvM) ^ __xmm_80000000800000008000000080000000
                   );
    fVar8 = fVar8 * fVar3;
    fVar12 = fVar12 * fVar3;
    fVar3 = fVar3 * *(float *)&param_1->Normal;
    fVar17 = *(float *)&param_3->LinearPositionImpulse;
    *(float *)&(param_3->LinearPositionImpulse).field_0x4 =
         fVar8 + *(float *)&(param_3->LinearPositionImpulse).field_0x4;
    *(float *)&param_3->LinearPositionImpulse = fVar3 + fVar17;
    *(float *)&(param_3->LinearPositionImpulse).field_0x8 =
         fVar12 + *(float *)&(param_3->LinearPositionImpulse).field_0x8;
    fVar17 = param_1->CharacterInvM;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar20 = *(float *)&(pFVar2->State).DP.field_0x4;
    fVar1 = *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DP = fVar17 * fVar3 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = fVar8 * fVar17 + fVar20;
    *(float *)&(pFVar2->State).DP.field_0x8 = fVar12 * fVar17 + fVar1;
  }
  fVar3 = __real_3f800000;
  fVar1 = __real_322bcc77;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar8 = *(float *)&(param_1->CharacterVerticalAxis).field_0x8;
  fVar12 = *(float *)&param_1->CharacterVerticalAxis;
  fVar17 = *(float *)&(param_1->CharacterVerticalAxis).field_0x4;
  fVar20 = *(float *)&(pFVar2->State).DQ;
  fVar19 = (fVar12 * *(float *)&(pFVar2->State).DQ.field_0x8 - fVar20 * fVar8) + fVar17;
  fVar20 = (fVar20 * fVar17 - fVar12 * *(float *)&(pFVar2->State).DQ.field_0x4) + fVar8;
  fVar12 = (fVar8 * *(float *)&(pFVar2->State).DQ.field_0x4 -
           fVar17 * *(float *)&(pFVar2->State).DQ.field_0x8) + fVar12;
  fVar8 = fVar12 * fVar12 + fVar19 * fVar19 + fVar20 * fVar20;
  if (__real_322bcc77 < fVar8) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    fVar12 = fVar8 * fVar12;
    fVar19 = fVar8 * fVar19;
    fVar20 = fVar8 * fVar20;
  }
  fVar8 = *(float *)&(param_1->VerticalAxis).field_0x4;
  fVar17 = *(float *)&(param_1->VerticalAxis).field_0x8;
  fVar9 = fVar17 * fVar19 - fVar8 * fVar20;
  fVar19 = fVar8 * fVar12 - *(float *)&param_1->VerticalAxis * fVar19;
  fVar12 = *(float *)&param_1->VerticalAxis * fVar20 - fVar17 * fVar12;
  fVar8 = fVar12 * fVar12 + fVar9 * fVar9 + fVar19 * fVar19;
  if (__real_322bcc77 < fVar8) {
    fVar21 = __real_3f800000 / SQRT(fVar8);
    fVar9 = fVar21 * fVar9;
    fVar19 = fVar21 * fVar19;
    fVar21 = fVar21 * fVar12;
    fVar12 = *(float *)&(param_1->CharacterInvI).field_0x10;
    fVar17 = *(float *)&param_1->CharacterInvI;
    fVar20 = *(float *)&(param_1->CharacterInvI).field_0x18;
    fVar16 = *(float *)&(param_1->CharacterInvI).field_0x14;
    fVar5 = *(float *)&(param_1->CharacterInvI).field_0x24;
    fVar7 = *(float *)&(param_1->CharacterInvI).field_0x4;
    fVar11 = *(float *)&(param_1->CharacterInvI).field_0x8;
    fVar13 = *(float *)&(param_1->CharacterInvI).field_0x20;
    fVar14 = *(float *)&(param_1->CharacterInvI).field_0x28;
    fVar8 = SQRT(fVar8);
    fVar15 = __real_bf800000;
    if ((__real_bf800000 <= fVar8) && (fVar15 = fVar8, __real_3f800000 <= fVar8)) {
      fVar15 = __real_3f800000;
    }
    fVar4 = asinf(fVar15);
    fVar8 = *(float *)&(param_3->AngularSwingImpulse).field_0x4;
    fVar15 = *(float *)&(param_3->AngularSwingImpulse).field_0x8;
    fVar4 = fVar4 / ((fVar21 * fVar16 + fVar9 * fVar12 + fVar19 * fVar20) * fVar21 +
                     (fVar9 * fVar17 + fVar21 * fVar7 + fVar19 * fVar11) * fVar9 +
                    (fVar21 * fVar5 + fVar9 * fVar13 + fVar19 * fVar14) * fVar19);
    fVar12 = *(float *)&param_3->AngularSwingImpulse;
    fVar17 = param_1->AngularSwingImpulseLimit;
    fVar20 = fVar4 * fVar21 + fVar8;
    local_b8 = fVar4 * fVar9 + fVar12;
    uVar10 = fVar4 * fVar19 + fVar15;
    fVar19 = local_b8 * local_b8 + fVar20 * fVar20 + (float)uVar10 * (float)uVar10;
    if (fVar19 <= fVar17 * fVar17) {
      uVar6 = CONCAT44(fVar20,local_b8);
    }
    else if (fVar17 * fVar17 <= fVar1) {
      fVar20 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_b8 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      fVar19 = fVar3 / SQRT(fVar19);
      local_b8 = fVar19 * local_b8 * fVar17;
      fVar20 = fVar19 * fVar20 * fVar17;
      uVar6 = CONCAT44(fVar20,local_b8);
      uVar10 = fVar19 * (float)uVar10 * fVar17;
    }
    *(undefined8 *)&param_3->AngularSwingImpulse = uVar6;
    local_b8 = local_b8 - fVar12;
    *(undefined4 *)&(param_3->AngularSwingImpulse).field_0x8 = uVar10;
    fVar15 = (float)uVar10 - fVar15;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar20 = fVar20 - fVar8;
    fVar8 = *(float *)&param_1->CharacterInvI;
    fVar12 = *(float *)&(param_1->CharacterInvI).field_0x28;
    fVar17 = *(float *)&(param_1->CharacterInvI).field_0x20;
    fVar19 = *(float *)&(param_1->CharacterInvI).field_0x24;
    fVar9 = *(float *)&(param_1->CharacterInvI).field_0x4;
    fVar16 = *(float *)&(param_1->CharacterInvI).field_0x8;
    fVar5 = *(float *)&(pFVar2->State).DQ.field_0x8;
    fVar7 = *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 =
         fVar20 * *(float *)&(param_1->CharacterInvI).field_0x14 +
         fVar15 * *(float *)&(param_1->CharacterInvI).field_0x18 +
         local_b8 * *(float *)&(param_1->CharacterInvI).field_0x10 +
         *(float *)&(pFVar2->State).DQ.field_0x4;
    *(float *)&(pFVar2->State).DQ.field_0x8 =
         fVar15 * fVar12 + fVar20 * fVar19 + local_b8 * fVar17 + fVar5;
    *(float *)&(pFVar2->State).DQ = local_b8 * fVar8 + fVar20 * fVar9 + fVar15 * fVar16 + fVar7;
  }
  fVar8 = *(float *)&(param_3->LinearPositionImpulse).field_0x4;
  fVar12 = *(float *)&param_3->LinearPositionImpulse;
  fVar17 = *(float *)&(param_1->Normal).field_0x4;
  fVar20 = *(float *)&param_1->Normal;
  fVar19 = *(float *)&(param_3->LinearPositionImpulse).field_0x8;
  fVar9 = *(float *)&(param_1->Normal).field_0x8;
  fVar16 = fVar8 * fVar17 + fVar12 * fVar20 + fVar19 * fVar9;
  if ((fVar16 + param_3->LinearCorrectionImpulse <= 0.0) &&
     (param_1->AssumedOnGroundHeight <= fVar18)) {
    return;
  }
  pFVar2 = (param_2->CharacterBody).Body;
  fVar7 = *(float *)&(param_1->MotionTargetError).field_0x8 +
          *(float *)&(pFVar2->State).DP.field_0x8;
  fVar13 = *(float *)&(param_1->MotionTargetError).field_0x4 +
           *(float *)&(pFVar2->State).DP.field_0x4;
  fVar14 = *(float *)&(pFVar2->State).DP + *(float *)&param_1->MotionTargetError;
  fVar11 = fVar17 * fVar13 + fVar14 * fVar20 + fVar9 * fVar7;
  fVar5 = fVar19 - fVar9 * fVar16;
  fVar15 = fVar8 - fVar17 * fVar16;
  fVar16 = fVar12 - fVar16 * fVar20;
  fVar18 = fVar3 / param_1->CharacterInvM;
  uVar10 = fVar5 - (fVar7 - fVar9 * fVar11) * fVar18;
  fVar17 = fVar15 - (fVar13 - fVar17 * fVar11) * fVar18;
  fVar9 = fVar16 - (fVar14 - fVar11 * fVar20) * fVar18;
  fVar18 = param_1->RadialImpulseLimit;
  fVar20 = fVar9 * fVar9 + fVar17 * fVar17 + (float)uVar10 * (float)uVar10;
  if (fVar20 <= fVar18 * fVar18) {
    uVar6 = CONCAT44(fVar17,fVar9);
  }
  else {
    if (fVar1 < fVar18 * fVar18) {
      fVar3 = fVar3 / SQRT(fVar20);
      fVar17 = fVar3 * fVar17 * fVar18;
      local_b8 = fVar3 * fVar9 * fVar18;
      uVar10 = fVar3 * (float)uVar10 * fVar18;
      goto LAB_1438d52c4;
    }
    fVar17 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
    uVar6 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  local_b8 = (float)uVar6;
LAB_1438d52c4:
  fVar5 = (float)uVar10 - fVar5;
  local_b8 = local_b8 - fVar16;
  fVar17 = fVar17 - fVar15;
  *(float *)&param_3->LinearPositionImpulse = local_b8 + fVar12;
  *(float *)&(param_3->LinearPositionImpulse).field_0x4 = fVar17 + fVar8;
  *(float *)&(param_3->LinearPositionImpulse).field_0x8 = fVar19 + fVar5;
  fVar8 = param_1->CharacterInvM;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar12 = *(float *)&(pFVar2->State).DP;
  fVar18 = *(float *)&(pFVar2->State).DP.field_0x4;
  *(float *)&(pFVar2->State).DP.field_0x8 = fVar5 * fVar8 + *(float *)&(pFVar2->State).DP.field_0x8;
  *(float *)&(pFVar2->State).DP = local_b8 * fVar8 + fVar12;
  *(float *)&(pFVar2->State).DP.field_0x4 = fVar17 * fVar8 + fVar18;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar8 = param_3->AngularImpulse;
  fVar12 = param_1->AngularTwistImpulseLimit;
  fVar17 = fVar8 - (*(float *)&(param_1->VerticalAxis).field_0x4 *
                    *(float *)&(pFVar2->State).DQ.field_0x4 +
                    *(float *)&(pFVar2->State).DQ * *(float *)&param_1->VerticalAxis +
                    *(float *)&(param_1->VerticalAxis).field_0x8 *
                    *(float *)&(pFVar2->State).DQ.field_0x8 + param_1->MotionTargetAngularError) *
                   param_1->EffectiveInertiaT;
  fVar18 = fVar12;
  if ((fVar17 <= fVar12) &&
     (fVar18 = (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000),
     (float)((uint)fVar12 ^ __xmm_80000000800000008000000080000000) <= fVar17)) {
    fVar18 = fVar17;
  }
  param_3->AngularImpulse = fVar18;
  fVar12 = *(float *)&(param_1->VerticalAxis).field_0x4;
  fVar18 = fVar18 - fVar8;
  fVar8 = *(float *)&param_1->VerticalAxis;
  fVar17 = *(float *)&(param_1->VerticalAxis).field_0x8;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar20 = *(float *)&(param_1->CharacterInvI).field_0x4;
  fVar1 = *(float *)&(param_1->CharacterInvI).field_0x14;
  fVar3 = *(float *)&(param_1->CharacterInvI).field_0x18;
  fVar19 = *(float *)&(param_1->CharacterInvI).field_0x10;
  fVar9 = *(float *)&(param_1->CharacterInvI).field_0x8;
  fVar16 = *(float *)&param_1->CharacterInvI;
  fVar5 = *(float *)&(pFVar2->State).DQ.field_0x4;
  fVar7 = *(float *)&(pFVar2->State).DQ;
  *(float *)&(pFVar2->State).DQ.field_0x8 =
       fVar18 * *(float *)&(param_1->CharacterInvI).field_0x24 * fVar12 +
       *(float *)&(pFVar2->State).DQ.field_0x8 +
       fVar18 * *(float *)&(param_1->CharacterInvI).field_0x28 * fVar17 +
       fVar18 * *(float *)&(param_1->CharacterInvI).field_0x20 * fVar8;
  *(float *)&(pFVar2->State).DQ.field_0x4 =
       fVar18 * fVar3 * fVar17 + fVar18 * fVar19 * fVar8 + fVar18 * fVar1 * fVar12 + fVar5;
  *(float *)&(pFVar2->State).DQ =
       fVar18 * fVar20 * fVar12 + fVar18 * fVar16 * fVar8 + fVar18 * fVar9 * fVar17 + fVar7;
  return;
}

// SolvePositionTwoBody @ 1438d54c0

void __cdecl
Chaos::Private::FCharacterGroundConstraintSolver::SolvePositionTwoBody
          (FConstraintData *param_1,FBodyData *param_2,FImpulseData *param_3)

{
  float fVar1;
  FSolverBody *pFVar2;
  FSolverBody *pFVar3;
  uint uVar4;
  PMatrix<float,3,3> *pPVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  PMatrix<float,3,3> local_f8 [3];
  
  uVar4 = __xmm_80000000800000008000000080000000;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar27 = *(float *)&param_1->GroundOffset;
  fVar8 = *(float *)&(param_1->GroundOffset).field_0x8;
  fVar15 = *(float *)&(param_1->GroundOffset).field_0x4;
  fVar9 = *(float *)&(param_1->Normal).field_0x8;
  fVar18 = *(float *)&(param_1->Normal).field_0x4;
  pFVar3 = (param_2->GroundBody).Body;
  fVar22 = *(float *)&(pFVar3->State).DQ;
  fVar27 = ((*(float *)&(pFVar2->State).DP.field_0x4 - *(float *)&(pFVar3->State).DP.field_0x4) -
           (fVar27 * *(float *)&(pFVar3->State).DQ.field_0x8 - fVar22 * fVar8)) * fVar18 +
           ((*(float *)&(pFVar2->State).DP - *(float *)&(pFVar3->State).DP) -
           (fVar8 * *(float *)&(pFVar3->State).DQ.field_0x4 -
           fVar15 * *(float *)&(pFVar3->State).DQ.field_0x8)) * *(float *)&param_1->Normal +
           ((*(float *)&(pFVar2->State).DP.field_0x8 - *(float *)&(pFVar3->State).DP.field_0x8) -
           (fVar22 * fVar15 - fVar27 * *(float *)&(pFVar3->State).DQ.field_0x4)) * fVar9 +
           param_1->InitialProjectedError;
  if (fVar27 < 0.0) {
    fVar22 = (float)((uint)(fVar27 * param_1->EffectiveMassN) ^
                    __xmm_80000000800000008000000080000000);
    fVar25 = fVar22 * *(float *)&param_1->Normal;
    fVar18 = fVar22 * fVar18;
    fVar22 = fVar22 * fVar9;
    fVar8 = *(float *)&(param_3->LinearPositionImpulse).field_0x4;
    *(float *)&param_3->LinearPositionImpulse = fVar25 + *(float *)&param_3->LinearPositionImpulse;
    *(float *)&(param_3->LinearPositionImpulse).field_0x4 = fVar18 + fVar8;
    *(float *)&(param_3->LinearPositionImpulse).field_0x8 =
         fVar22 + *(float *)&(param_3->LinearPositionImpulse).field_0x8;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar8 = param_1->CharacterInvM;
    fVar15 = *(float *)&(pFVar2->State).DP.field_0x4;
    fVar9 = *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DP = fVar25 * fVar8 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = fVar8 * fVar18 + fVar15;
    *(float *)&(pFVar2->State).DP.field_0x8 = fVar8 * fVar22 + fVar9;
    pFVar2 = (param_2->GroundBody).Body;
    fVar9 = (float)((uint)param_1->GroundInvM ^ uVar4);
    fVar8 = *(float *)&(pFVar2->State).DP.field_0x4;
    fVar15 = *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DP = fVar25 * fVar9 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = fVar9 * fVar18 + fVar8;
    *(float *)&(pFVar2->State).DP.field_0x8 = fVar9 * fVar22 + fVar15;
    pPVar5 = Chaos::operator-(local_f8,&param_1->GroundInvI);
    fVar8 = *(float *)&(param_1->GroundOffset).field_0x8;
    fVar15 = *(float *)&param_1->GroundOffset;
    fVar9 = *(float *)&(param_1->GroundOffset).field_0x4;
    fVar11 = fVar9 * fVar22 - fVar8 * fVar18;
    fVar14 = fVar15 * fVar18 - fVar9 * fVar25;
    fVar9 = *(float *)&pPVar5->field_0x20;
    fVar18 = *(float *)&pPVar5->field_0x10;
    fVar20 = fVar8 * fVar25 - fVar15 * fVar22;
    fVar8 = *(float *)&pPVar5->field_0x28;
    fVar15 = *(float *)&pPVar5->field_0x18;
    fVar22 = *(float *)&pPVar5->field_0x24;
    fVar25 = *(float *)&pPVar5->field_0x14;
    pFVar2 = (param_2->GroundBody).Body;
    fVar10 = *(float *)&(pFVar2->State).DQ.field_0x4;
    fVar12 = *(float *)&(pFVar2->State).DQ.field_0x8;
    *(float *)&(pFVar2->State).DQ =
         fVar14 * *(float *)&pPVar5->field_0x8 + fVar11 * *(float *)pPVar5 +
         fVar20 * *(float *)&pPVar5->field_0x4 + *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 =
         fVar20 * fVar25 + fVar10 + fVar11 * fVar18 + fVar14 * fVar15;
    *(float *)&(pFVar2->State).DQ.field_0x8 =
         fVar20 * fVar22 + fVar12 + fVar14 * fVar8 + fVar11 * fVar9;
  }
  fVar10 = __real_3f800000;
  fVar25 = __real_322bcc77;
  pFVar2 = (param_2->CharacterBody).Body;
  fVar8 = *(float *)&(param_1->CharacterVerticalAxis).field_0x8;
  fVar15 = *(float *)&param_1->CharacterVerticalAxis;
  fVar9 = *(float *)&(param_1->CharacterVerticalAxis).field_0x4;
  fVar18 = *(float *)&(pFVar2->State).DQ;
  fVar22 = (fVar15 * *(float *)&(pFVar2->State).DQ.field_0x8 - fVar18 * fVar8) + fVar9;
  fVar18 = (fVar18 * fVar9 - fVar15 * *(float *)&(pFVar2->State).DQ.field_0x4) + fVar8;
  fVar15 = (fVar8 * *(float *)&(pFVar2->State).DQ.field_0x4 -
           fVar9 * *(float *)&(pFVar2->State).DQ.field_0x8) + fVar15;
  fVar8 = fVar15 * fVar15 + fVar22 * fVar22 + fVar18 * fVar18;
  if (__real_322bcc77 < fVar8) {
    fVar8 = __real_3f800000 / SQRT(fVar8);
    fVar15 = fVar15 * fVar8;
    fVar22 = fVar8 * fVar22;
    fVar18 = fVar8 * fVar18;
  }
  fVar8 = *(float *)&(param_1->VerticalAxis).field_0x4;
  fVar9 = *(float *)&(param_1->VerticalAxis).field_0x8;
  fVar12 = fVar22 * fVar9 - fVar18 * fVar8;
  fVar9 = fVar18 * *(float *)&param_1->VerticalAxis - fVar15 * fVar9;
  fVar15 = fVar15 * fVar8 - fVar22 * *(float *)&param_1->VerticalAxis;
  fVar8 = fVar9 * fVar9 + fVar12 * fVar12 + fVar15 * fVar15;
  if (__real_322bcc77 < fVar8) {
    fVar23 = __real_3f800000 / SQRT(fVar8);
    fVar15 = fVar23 * fVar15;
    fVar12 = fVar23 * fVar12;
    fVar23 = fVar23 * fVar9;
    fVar9 = *(float *)&(param_1->CharacterInvI).field_0x18;
    fVar18 = *(float *)&(param_1->CharacterInvI).field_0x10;
    fVar22 = *(float *)&param_1->CharacterInvI;
    fVar11 = *(float *)&(param_1->CharacterInvI).field_0x14;
    fVar14 = *(float *)&(param_1->CharacterInvI).field_0x24;
    fVar20 = *(float *)&(param_1->CharacterInvI).field_0x4;
    fVar1 = *(float *)&(param_1->CharacterInvI).field_0x8;
    fVar13 = *(float *)&(param_1->CharacterInvI).field_0x20;
    fVar17 = *(float *)&(param_1->CharacterInvI).field_0x28;
    fVar8 = SQRT(fVar8);
    fVar21 = __real_bf800000;
    if ((__real_bf800000 <= fVar8) && (fVar21 = fVar8, __real_3f800000 <= fVar8)) {
      fVar21 = __real_3f800000;
    }
    fVar6 = asinf(fVar21);
    fVar8 = param_1->AngularSwingImpulseLimit;
    fVar21 = *(float *)&(param_3->AngularSwingImpulse).field_0x4;
    fVar16 = *(float *)&param_3->AngularSwingImpulse;
    fVar19 = *(float *)&(param_3->AngularSwingImpulse).field_0x8;
    fVar6 = fVar6 / ((fVar23 * fVar11 + fVar12 * fVar18 + fVar15 * fVar9) * fVar23 +
                     (fVar12 * fVar22 + fVar23 * fVar20 + fVar15 * fVar1) * fVar12 +
                    (fVar23 * fVar14 + fVar12 * fVar13 + fVar15 * fVar17) * fVar15);
    uVar26 = fVar12 * fVar6 + fVar16;
    uVar24 = fVar15 * fVar6 + fVar19;
    uVar28 = fVar23 * fVar6 + fVar21;
    fVar15 = (float)uVar26 * (float)uVar26 + (float)uVar28 * (float)uVar28 +
             (float)uVar24 * (float)uVar24;
    if (fVar15 <= fVar8 * fVar8) {
      uVar7 = CONCAT44(uVar28,uVar26);
    }
    else if (fVar25 < fVar8 * fVar8) {
      fVar15 = fVar10 / SQRT(fVar15);
      uVar26 = fVar15 * (float)uVar26 * fVar8;
      uVar28 = fVar15 * (float)uVar28 * fVar8;
      uVar7 = CONCAT44(uVar28,uVar26);
      uVar24 = fVar15 * (float)uVar24 * fVar8;
    }
    else {
      uVar7 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
      uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
      uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
      uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    }
    *(undefined8 *)&param_3->AngularSwingImpulse = uVar7;
    fVar21 = (float)uVar28 - fVar21;
    *(undefined4 *)&(param_3->AngularSwingImpulse).field_0x8 = uVar24;
    fVar19 = (float)uVar24 - fVar19;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar16 = (float)uVar26 - fVar16;
    fVar8 = *(float *)&(param_1->CharacterInvI).field_0x24;
    fVar15 = *(float *)&(param_1->CharacterInvI).field_0x28;
    fVar9 = *(float *)&(param_1->CharacterInvI).field_0x20;
    fVar18 = *(float *)&param_1->CharacterInvI;
    fVar22 = *(float *)&(param_1->CharacterInvI).field_0x8;
    fVar12 = *(float *)&(param_1->CharacterInvI).field_0x4;
    fVar11 = *(float *)&(pFVar2->State).DQ.field_0x8;
    fVar14 = *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 =
         fVar16 * *(float *)&(param_1->CharacterInvI).field_0x10 +
         fVar19 * *(float *)&(param_1->CharacterInvI).field_0x18 +
         fVar21 * *(float *)&(param_1->CharacterInvI).field_0x14 +
         *(float *)&(pFVar2->State).DQ.field_0x4;
    *(float *)&(pFVar2->State).DQ.field_0x8 =
         fVar21 * fVar8 + fVar11 + fVar19 * fVar15 + fVar16 * fVar9;
    *(float *)&(pFVar2->State).DQ = fVar16 * fVar18 + fVar19 * fVar22 + fVar21 * fVar12 + fVar14;
  }
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar8 = *(float *)&param_3->LinearPositionImpulse;
  fVar15 = *(float *)&(param_3->LinearPositionImpulse).field_0x4;
  fVar9 = *(float *)&(param_3->LinearPositionImpulse).field_0x8;
  fVar18 = *(float *)&(param_1->Normal).field_0x4;
  fVar22 = *(float *)&(param_1->Normal).field_0x8;
  fVar12 = *(float *)&param_1->Normal * fVar8 + fVar18 * fVar15 + fVar22 * fVar9;
  if ((0.0 < fVar12 + param_3->LinearCorrectionImpulse) || (fVar27 < param_1->AssumedOnGroundHeight)
     ) {
    pFVar2 = (param_2->GroundBody).Body;
    fVar27 = *(float *)&param_1->GroundOffset;
    pFVar3 = (param_2->CharacterBody).Body;
    fVar11 = *(float *)&(param_1->GroundOffset).field_0x8;
    fVar14 = *(float *)&(pFVar2->State).DQ;
    fVar20 = *(float *)&(param_1->GroundOffset).field_0x4;
    fVar1 = *(float *)&param_1->Normal;
    fVar23 = ((*(float *)&(pFVar3->State).DP.field_0x8 - *(float *)&(pFVar2->State).DP.field_0x8) -
             (fVar14 * fVar20 - fVar27 * *(float *)&(pFVar2->State).DQ.field_0x4)) +
             *(float *)&(param_1->MotionTargetError).field_0x8;
    fVar21 = ((*(float *)&(pFVar3->State).DP.field_0x4 - *(float *)&(pFVar2->State).DP.field_0x4) -
             (fVar27 * *(float *)&(pFVar2->State).DQ.field_0x8 - fVar14 * fVar11)) +
             *(float *)&(param_1->MotionTargetError).field_0x4;
    fVar20 = ((*(float *)&(pFVar3->State).DP - *(float *)&(pFVar2->State).DP) -
             (fVar11 * *(float *)&(pFVar2->State).DQ.field_0x4 -
             fVar20 * *(float *)&(pFVar2->State).DQ.field_0x8)) +
             *(float *)&param_1->MotionTargetError;
    fVar14 = fVar18 * fVar21 + fVar1 * fVar20 + fVar22 * fVar23;
    fVar11 = fVar9 - fVar22 * fVar12;
    fVar17 = fVar15 - fVar18 * fVar12;
    fVar27 = param_1->RadialImpulseLimit;
    fVar13 = fVar8 - fVar1 * fVar12;
    fVar12 = param_1->EffectiveMassT;
    fVar21 = fVar17 - (fVar21 - fVar18 * fVar14) * fVar12;
    fVar22 = fVar11 - (fVar23 - fVar22 * fVar14) * fVar12;
    fVar12 = fVar13 - (fVar20 - fVar1 * fVar14) * fVar12;
    fVar18 = fVar12 * fVar12 + fVar21 * fVar21 + fVar22 * fVar22;
    uVar26 = fVar22;
    uVar28 = fVar12;
    uVar24 = fVar21;
    if ((fVar27 * fVar27 < fVar18) &&
       (uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z,
       uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X,
       uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y, fVar25 < fVar27 * fVar27)) {
      fVar10 = fVar10 / SQRT(fVar18);
      uVar26 = fVar10 * fVar22 * fVar27;
      uVar28 = fVar10 * fVar12 * fVar27;
      uVar24 = fVar10 * fVar21 * fVar27;
    }
    fVar11 = (float)uVar26 - fVar11;
    fVar17 = (float)uVar24 - fVar17;
    fVar13 = (float)uVar28 - fVar13;
    *(float *)&param_3->LinearPositionImpulse = fVar8 + fVar13;
    *(float *)&(param_3->LinearPositionImpulse).field_0x8 = fVar9 + fVar11;
    *(float *)&(param_3->LinearPositionImpulse).field_0x4 = fVar15 + fVar17;
    fVar27 = param_1->CharacterInvM;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar8 = *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = fVar27 * fVar13 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = fVar17 * fVar27 + fVar8;
    *(float *)&(pFVar2->State).DP.field_0x8 =
         fVar11 * fVar27 + *(float *)&(pFVar2->State).DP.field_0x8;
    pFVar2 = (param_2->GroundBody).Body;
    fVar8 = (float)((uint)(param_1->GroundInvM * param_1->MassBiasT) ^ uVar4);
    fVar27 = *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 =
         fVar17 * fVar8 + *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = fVar8 * fVar13 + fVar27;
    *(float *)&(pFVar2->State).DP.field_0x8 =
         fVar11 * fVar8 + *(float *)&(pFVar2->State).DP.field_0x8;
    fVar27 = *(float *)&(param_1->GroundOffset).field_0x4;
    fVar20 = (float)((uint)param_1->MassBiasT ^ uVar4);
    fVar8 = *(float *)&(param_1->GroundOffset).field_0x8;
    fVar15 = *(float *)&param_1->GroundOffset;
    pFVar2 = (param_2->GroundBody).Body;
    fVar9 = *(float *)&(param_1->GroundInvI).field_0x24;
    fVar18 = *(float *)&(param_1->GroundInvI).field_0x28;
    fVar14 = fVar27 * fVar11 - fVar8 * fVar17;
    fVar22 = *(float *)&(param_1->GroundInvI).field_0x20;
    fVar12 = fVar15 * fVar17 - fVar27 * fVar13;
    fVar11 = fVar8 * fVar13 - fVar15 * fVar11;
    fVar27 = *(float *)&(param_1->GroundInvI).field_0x8;
    fVar8 = *(float *)&param_1->GroundInvI;
    fVar15 = *(float *)&(param_1->GroundInvI).field_0x4;
    fVar25 = *(float *)&(pFVar2->State).DQ.field_0x8;
    fVar10 = *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 =
         fVar20 * *(float *)&(param_1->GroundInvI).field_0x10 * fVar14 +
         fVar20 * *(float *)&(param_1->GroundInvI).field_0x18 * fVar12 +
         fVar20 * *(float *)&(param_1->GroundInvI).field_0x14 * fVar11 +
         *(float *)&(pFVar2->State).DQ.field_0x4;
    *(float *)&(pFVar2->State).DQ.field_0x8 =
         fVar20 * fVar18 * fVar12 + fVar20 * fVar22 * fVar14 + fVar20 * fVar9 * fVar11 + fVar25;
    *(float *)&(pFVar2->State).DQ =
         fVar20 * fVar27 * fVar12 + fVar20 * fVar8 * fVar14 + fVar20 * fVar15 * fVar11 + fVar10;
    pFVar2 = (param_2->CharacterBody).Body;
    pFVar3 = (param_2->GroundBody).Body;
    fVar27 = param_3->AngularImpulse;
    fVar8 = param_1->AngularTwistImpulseLimit;
    fVar9 = fVar27 - ((*(float *)&(pFVar2->State).DQ.field_0x4 -
                      *(float *)&(pFVar3->State).DQ.field_0x4) *
                      *(float *)&(param_1->VerticalAxis).field_0x4 +
                      (*(float *)&(pFVar2->State).DQ - *(float *)&(pFVar3->State).DQ) *
                      *(float *)&param_1->VerticalAxis +
                      (*(float *)&(pFVar2->State).DQ.field_0x8 -
                      *(float *)&(pFVar3->State).DQ.field_0x8) *
                      *(float *)&(param_1->VerticalAxis).field_0x8 +
                     param_1->MotionTargetAngularError) * param_1->EffectiveInertiaT;
    fVar15 = fVar8;
    if ((fVar9 <= fVar8) &&
       (fVar15 = (float)((uint)fVar8 ^ uVar4), (float)((uint)fVar8 ^ uVar4) <= fVar9)) {
      fVar15 = fVar9;
    }
    param_3->AngularImpulse = fVar15;
    fVar8 = *(float *)&(param_1->VerticalAxis).field_0x4;
    fVar15 = fVar15 - fVar27;
    fVar27 = *(float *)&param_1->VerticalAxis;
    fVar9 = *(float *)&(param_1->VerticalAxis).field_0x8;
    pFVar2 = (param_2->CharacterBody).Body;
    fVar18 = *(float *)&(param_1->CharacterInvI).field_0x14;
    fVar22 = *(float *)&(param_1->CharacterInvI).field_0x4;
    fVar25 = *(float *)&(param_1->CharacterInvI).field_0x10;
    fVar10 = *(float *)&(param_1->CharacterInvI).field_0x18;
    fVar12 = *(float *)&(param_1->CharacterInvI).field_0x8;
    fVar11 = *(float *)&param_1->CharacterInvI;
    fVar14 = *(float *)&(pFVar2->State).DQ.field_0x4;
    fVar20 = *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x8 =
         fVar15 * *(float *)&(param_1->CharacterInvI).field_0x24 * fVar8 +
         *(float *)&(pFVar2->State).DQ.field_0x8 +
         fVar15 * *(float *)&(param_1->CharacterInvI).field_0x20 * fVar27 +
         fVar15 * *(float *)&(param_1->CharacterInvI).field_0x28 * fVar9;
    *(float *)&(pFVar2->State).DQ.field_0x4 =
         fVar15 * fVar18 * fVar8 + fVar14 + fVar15 * fVar25 * fVar27 + fVar15 * fVar10 * fVar9;
    *(float *)&(pFVar2->State).DQ =
         fVar15 * fVar22 * fVar8 + fVar15 * fVar11 * fVar27 + fVar15 * fVar12 * fVar9 + fVar20;
  }
  return;
}

