// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// SolveBasicTwoBoneIK @ 14a296200

void __cdecl
FControlRigMathLibrary::SolveBasicTwoBoneIK
          (TTransform<double> *param_1,TTransform<double> *param_2,TTransform<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,float param_7,
          float param_8,float param_9,bool param_10,float param_11,float param_12)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  ulonglong uVar14;
  float fVar15;
  double dVar16;
  __m128d _Var17;
  __m128d _Var18;
  double dVar19;
  undefined8 uVar20;
  TVector<double> *pTVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar57;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
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
  double extraout_XMM0_Qb;
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
  double extraout_XMM0_Qb_00;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar73;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar74;
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
  double dVar103;
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar109;
  double dVar110;
  double dVar119;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  uint uVar120;
  uint uVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  uint uVar124;
  uint uVar125;
  double dVar126;
  undefined1 auVar127 [16];
  TVector<double>_u_0 local_3e8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_3a0;
  TVector<double>_u_0 local_388;
  TVector<double>_u_0 local_370;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TQuat<double> local_328;
  TQuat<double> local_308;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2d0;
  double local_2b8;
  undefined1 local_2a8 [16];
  double local_298;
  undefined1 local_290 [16];
  double local_280;
  undefined1 local_278 [16];
  double local_268;
  undefined1 local_260 [16];
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  undefined1 local_230 [16];
  double local_220;
  undefined1 local_218 [16];
  double local_208;
  undefined1 local_200 [16];
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  TQuat<double> local_1c8;
  TQuat<double> local_1a8;
  undefined1 local_188 [16];
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  TVector<double> local_128;
  TVector<double> local_110;
  TVector<double> local_f8 [8];
  
  local_358._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_358._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_358._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  local_2e8._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_2e8._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_2e8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_3a0._s_0.X = (param_3->Translation).XY.m128d_f64[0];
  local_3a0._s_0.Y = (param_3->Translation).XY.m128d_f64[1];
  local_3a0._s_0.Z = (param_3->Translation).ZW.m128d_f64[0];
  AnimationCore::SolveTwoBoneIK
            ((TVector<double> *)&local_358._s_0,(TVector<double> *)&local_2e8._s_0,
             (TVector<double> *)&local_3a0._s_0,param_4,(TVector<double> *)&local_3a0._s_0,
             (TVector<double> *)&local_2e8._s_0,(TVector<double> *)&local_3a0._s_0,(double)param_8,
             (double)param_9,param_10,(double)param_11,(double)param_12);
  (param_2->Translation).XY.m128d_f64[0] = local_2e8._s_0.X;
  (param_2->Translation).XY.m128d_f64[1] = local_2e8._s_0.Y;
  (param_2->Translation).ZW.m128d_f64[0] = local_2e8._s_0.Z;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  (param_3->Translation).XY.m128d_f64[0] = local_3a0._s_0.X;
  (param_3->Translation).XY.m128d_f64[1] = local_3a0._s_0.Y;
  (param_3->Translation).ZW.m128d_f64[0] = local_3a0._s_0.Z;
  (param_3->Translation).ZW.m128d_f64[1] = 0.0;
  dVar19 = __real_3f1a36e2e0000000;
  uVar125 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar124 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar126 = __real_3fe0000000000000;
  dVar16 = __real_3e45798ee0000000;
  dVar104 = __real_3ff0000000000000;
  auVar93 = *(undefined1 (*) [16])&param_5->field0_0x0;
  dVar109 = (param_5->field0_0x0)._s_0.Z;
  local_1e8 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_1e0 = (param_1->Rotation).XY.m128d_f64[1];
  auVar26 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  auVar32 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
  dVar74 = auVar32._0_8_;
  dVar58 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar73 = auVar93._8_8_;
  auVar75 = blendpd(auVar26,auVar32,2);
  auVar105._0_8_ = dVar73 * auVar26._0_8_ - auVar26._8_8_ * auVar93._0_8_;
  auVar105._8_8_ = dVar109 * auVar26._8_8_ - dVar74 * dVar73;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = dVar109;
  auVar26 = blendpd(auVar93,auVar26,2);
  auVar76._0_8_ = auVar26._0_8_ * dVar74 - auVar75._0_8_ * dVar109;
  auVar76._8_8_ = auVar26._8_8_ * auVar32._8_8_ - auVar75._8_8_ * 0.0;
  auVar26 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
  bVar1 = false;
  auVar75 = blendpd(auVar105,auVar76,2);
  auVar106._0_8_ = auVar75._0_8_ + auVar75._0_8_;
  auVar106._8_8_ = auVar75._8_8_ + auVar75._8_8_;
  dVar72 = auVar105._8_8_ + auVar105._8_8_;
  dVar103 = auVar76._0_8_ + auVar76._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar103 >> 0x20);
  auVar91._8_4_ = SUB84(dVar103,0);
  auVar91._0_8_ = dVar72;
  auVar91._12_4_ = uVar25;
  auVar75._8_4_ = SUB84(dVar103,0);
  auVar75._0_8_ = dVar72;
  auVar75._12_4_ = uVar25;
  auVar75 = blendpd(auVar75,auVar106,2);
  auVar76 = blendpd(auVar26,auVar32,2);
  auVar92._0_8_ = auVar91._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar72;
  auVar92._8_8_ = auVar106._0_8_ * auVar26._8_8_ - dVar74 * dVar103;
  auVar81._0_8_ = auVar75._0_8_ * dVar74 - auVar76._0_8_ * auVar106._0_8_;
  auVar81._8_8_ = auVar75._8_8_ * auVar32._8_8_ - auVar76._8_8_ * auVar106._8_8_;
  auVar32._8_4_ = SUB84(auVar92._8_8_,0);
  auVar32._0_8_ = auVar92._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
  dVar74 = dVar72 * dVar58 + auVar93._0_8_ + auVar32._8_8_;
  dVar72 = dVar103 * dVar58 + dVar73 + auVar81._0_8_;
  uVar120 = SUB84(dVar72,0);
  uVar121 = (uint)((ulonglong)dVar72 >> 0x20);
  auVar93 = blendpd(auVar92,auVar81,2);
  local_3b8._8_4_ = uVar120;
  local_3b8._0_8_ = dVar74;
  local_3b8._12_4_ = uVar121;
  local_3b8._s_0.Z = auVar106._0_8_ * dVar58 + dVar109 + auVar93._0_8_;
  local_2a8 = *(undefined1 (*) [16])(param_2->Translation).XY.m128d_f64;
  local_298 = (param_2->Translation).ZW.m128d_f64[0];
  auVar8._4_8_ = auVar106._8_8_ * dVar58 + 0.0 + auVar93._8_8_;
  auVar8._0_4_ = local_2a8._4_4_;
  auVar107._0_8_ = auVar8._0_8_ << 0x20;
  auVar107._8_4_ = local_2a8._8_4_;
  auVar107._12_4_ = local_2a8._12_4_;
  local_188 = *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64;
  local_178 = (param_1->Translation).ZW.m128d_f64[0];
  dVar72 = local_298 - local_178;
  auVar9._4_8_ = (param_1->Translation).ZW.m128d_f64[1];
  auVar9._0_4_ = local_188._4_4_;
  auVar93._0_8_ = auVar9._0_8_ << 0x20;
  auVar93._8_4_ = local_188._8_4_;
  auVar93._12_4_ = local_188._12_4_;
  dVar109 = local_2a8._0_8_ - local_188._0_8_;
  dVar103 = auVar107._8_8_ - auVar93._8_8_;
  local_3d0 = (param_2->Translation).XY.m128d_f64[0];
  dStack_3c8 = (param_2->Translation).XY.m128d_f64[1];
  local_3c0 = (param_2->Translation).ZW.m128d_f64[0];
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar109,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar103 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar103,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)dVar72 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar72,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar74,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (uVar120 = uVar120 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar121 = uVar121 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar121,uVar120) &&
       (double)CONCAT44(uVar121,uVar120) != __real_3f1a36e2e0000000)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Z >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_3b8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))))
     ) {
    dVar74 = dVar103 * dVar103 + dVar109 * dVar109 + dVar72 * dVar72;
    if (dVar74 == __real_3ff0000000000000) {
      local_3e8._s_0.Y = dVar103;
      local_3e8._s_0.X = dVar109;
      local_370._s_0.Z = dVar72;
    }
    else if (__real_3e45798ee0000000 <= dVar74) {
      dVar74 = __real_3ff0000000000000 / SQRT(dVar74);
      dVar109 = dVar74 * dVar109;
      dVar103 = dVar74 * dVar103;
      local_370._s_0.Z = dVar74 * dVar72;
      local_3e8._s_0.Y = dVar103;
      local_3e8._s_0.X = dVar109;
    }
    else {
      dVar109 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      auVar10._4_8_ = local_2a8._8_8_;
      auVar10._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      auVar108._0_8_ = auVar10._0_8_ << 0x20;
      auVar108._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      auVar108._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_370._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar103 = auVar108._8_8_;
      local_3e8._0_16_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    }
    uVar20 = local_370._s_0.Z;
    local_370._s_0.Y = local_3a0._s_0.Y - local_358._s_0.Y;
    local_3e8._s_0.Z = local_370._s_0.Z;
    local_370._s_0.X = local_3a0._s_0.X - local_358._s_0.X;
    local_370._s_0.Z = local_3a0._s_0.Z - local_358._s_0.Z;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_370._s_0,(TVector<double> *)&local_2d0._s_0,
               __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
    dVar104 = (dVar103 * local_2d0._s_0.Y + dVar109 * local_2d0._s_0.X +
              (double)uVar20 * local_2d0._s_0.Z) - dVar104;
    bVar1 = (double)CONCAT44((uint)((ulonglong)dVar104 >> 0x20) & uVar125,SUB84(dVar104,0) & uVar124
                            ) < dVar19;
    UE::Math::TQuat<double>::FindBetweenNormals
              (&local_1c8,(TVector<double> *)&local_3b8._s_0,(TVector<double> *)&local_3e8._s_0);
    dVar103 = (param_1->Rotation).XY.m128d_f64[0];
    dVar58 = (param_1->Rotation).XY.m128d_f64[1];
    dVar104 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar73 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar110 = local_1c8.Z;
    auVar77._8_8_ = dVar104;
    auVar77._0_8_ = dVar73;
    dVar119 = local_1c8.W;
    auVar27._8_4_ = local_1c8.W._0_4_;
    auVar27._0_8_ = dVar119;
    auVar27._12_4_ = local_1c8.W._4_4_;
    auVar28._8_4_ = local_1c8.Z._0_4_;
    auVar28._0_8_ = dVar110;
    auVar28._12_4_ = local_1c8.Z._4_4_;
    dVar109 = local_1c8.X * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
              + dVar119 * dVar104 +
              dVar103 * local_1c8.Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
              dVar110 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar72 = local_1c8.X * dVar103 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
             + auVar27._8_8_ * dVar73 +
             dVar58 * local_1c8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
             + auVar28._8_8_ * dVar104 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar29._8_4_ = SUB84(dVar72,0);
    auVar29._0_8_ = dVar109;
    auVar29._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
    dVar74 = local_1c8.X * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
             + dVar119 * dVar103 +
             dVar104 * local_1c8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
             + dVar58 * dVar110 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar103 = local_1c8.X * dVar104 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar119 * dVar58 +
              dVar73 * local_1c8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
              + dVar103 * dVar110 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar59._8_4_ = SUB84(dVar103,0);
    auVar59._0_8_ = dVar74;
    auVar59._12_4_ = (int)((ulonglong)dVar103 >> 0x20);
    dVar58 = dVar74 * dVar74 + dVar109 * dVar109;
    dVar104 = auVar59._8_8_ * dVar103 + auVar29._8_8_ * dVar72;
    auVar30._8_4_ = SUB84(dVar104,0);
    auVar30._0_8_ = dVar58;
    auVar30._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
    auVar31._0_8_ = auVar30._8_8_ + dVar58;
    auVar31._8_8_ = dVar58 + dVar104;
    auVar26 = sqrtpd(auVar77,auVar31);
    uVar22 = -(ulonglong)(dVar16 <= auVar31._0_8_);
    uVar23 = -(ulonglong)(dVar16 <= auVar31._8_8_);
    uVar120 = (uint)(uVar22 >> 0x20);
    uVar121 = (uint)(uVar23 >> 0x20);
    auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
    auVar94._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar94._4_4_ =
         ~uVar120 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar94._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar94._12_4_ =
         ~uVar121 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar60._0_8_ = uVar22 & (ulonglong)(auVar93._0_8_ * dVar109);
    uVar14 = uVar23 & (ulonglong)(auVar93._8_8_ * dVar72);
    auVar60._8_4_ = (undefined4)uVar14;
    auVar60._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
    auVar61._0_8_ = (ulonglong)(auVar93._0_8_ * dVar74) & uVar22;
    uVar14 = (ulonglong)(auVar93._8_8_ * dVar103) & uVar23;
    auVar61._8_4_ = (undefined4)uVar14;
    auVar61._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar2._4_4_ = ~uVar120 &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar2._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar2._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar2._12_4_ =
         ~uVar121 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar61 | auVar2;
    *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar94 | auVar60;
    auVar93 = *(undefined1 (*) [16])&param_6->field0_0x0;
    dVar109 = (param_6->field0_0x0)._s_0.Z;
    local_1e8 = (param_1->Rotation).XY.m128d_f64[0];
    dStack_1e0 = (param_1->Rotation).XY.m128d_f64[1];
    auVar26 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar104 = auVar26._0_8_;
    auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar58 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar72 = auVar93._8_8_;
    auVar76 = blendpd(auVar32,auVar26,2);
    auVar111._0_8_ = dVar72 * auVar32._0_8_ - auVar32._8_8_ * auVar93._0_8_;
    auVar111._8_8_ = dVar109 * auVar32._8_8_ - dVar104 * dVar72;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar109;
    auVar32 = blendpd(auVar93,auVar4,2);
    auVar33._0_8_ = auVar32._0_8_ * dVar104 - auVar76._0_8_ * dVar109;
    auVar33._8_8_ = auVar32._8_8_ * auVar26._8_8_ - auVar76._8_8_ * 0.0;
    auVar32 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar76 = blendpd(auVar111,auVar33,2);
    dVar74 = auVar111._8_8_ + auVar111._8_8_;
    dVar103 = auVar33._0_8_ + auVar33._0_8_;
    uVar25 = (undefined4)((ulonglong)dVar103 >> 0x20);
    auVar112._0_8_ = auVar76._0_8_ + auVar76._0_8_;
    auVar112._8_8_ = auVar76._8_8_ + auVar76._8_8_;
    auVar95._8_4_ = SUB84(dVar103,0);
    auVar95._0_8_ = dVar74;
    auVar95._12_4_ = uVar25;
    auVar82._8_4_ = SUB84(dVar103,0);
    auVar82._0_8_ = dVar74;
    auVar82._12_4_ = uVar25;
    auVar76 = blendpd(auVar82,auVar112,2);
    auVar96._0_8_ = auVar95._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar74;
    auVar96._8_8_ = auVar112._0_8_ * auVar32._8_8_ - dVar104 * dVar103;
    auVar32 = blendpd(auVar32,auVar26,2);
    auVar34._8_4_ = SUB84(auVar96._8_8_,0);
    auVar34._0_8_ = auVar96._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
    auVar83._0_8_ = auVar76._0_8_ * dVar104 - auVar32._0_8_ * auVar112._0_8_;
    auVar83._8_8_ = auVar76._8_8_ * auVar26._8_8_ - auVar32._8_8_ * auVar112._8_8_;
    dVar74 = dVar74 * dVar58 + auVar93._0_8_ + auVar34._8_8_;
    dVar72 = dVar103 * dVar58 + dVar72 + auVar83._0_8_;
    uVar120 = SUB84(dVar72,0);
    uVar121 = (uint)((ulonglong)dVar72 >> 0x20);
    auVar93 = blendpd(auVar96,auVar83,2);
    local_3b8._s_0.Z = auVar112._0_8_ * dVar58 + dVar109 + auVar93._0_8_;
    local_278._8_4_ = uVar120;
    local_278._0_8_ = dVar74;
    local_278._12_4_ = uVar121;
    local_3b8._8_4_ = uVar120;
    local_3b8._0_8_ = dVar74;
    local_3b8._12_4_ = uVar121;
    local_268 = local_3b8._s_0.Z;
    if (__real_322bcc77 < param_7) {
      if (bVar1) {
        local_388._s_0.Z = (param_4->field0_0x0)._s_0.Z - local_358._s_0.Z;
        local_388._s_0.Y = (param_4->field0_0x0)._s_0.Y - local_358._s_0.Y;
        local_388._s_0.X = (param_4->field0_0x0)._s_0.X - local_358._s_0.X;
      }
      else {
        local_290 = *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64;
        local_280 = (param_3->Translation).ZW.m128d_f64[0];
        local_170 = (param_1->Translation).XY.m128d_f64[0];
        dStack_168 = (param_1->Translation).XY.m128d_f64[1];
        local_160 = (param_1->Translation).ZW.m128d_f64[0];
        auVar11._4_8_ = (param_1->Translation).ZW.m128d_f64[1];
        auVar11._0_4_ = local_290._4_4_;
        auVar62._0_8_ = auVar11._0_8_ << 0x20;
        auVar62._8_4_ = local_290._8_4_;
        auVar62._12_4_ = local_290._12_4_;
        local_388._s_0.Z = local_3c0 - (local_280 + local_160) * dVar126;
        local_388._s_0.X = local_3d0 - (local_290._0_8_ + local_170) * dVar126;
        local_388._s_0.Y = dStack_3c8 - (auVar62._8_8_ + dStack_168) * dVar126;
      }
      if ((((dVar19 < (double)CONCAT44((uint)((ulonglong)local_388._s_0.X >> 0x20) & uVar125,
                                       SUB84(local_388._s_0.X,0) & uVar124)) ||
           (dVar19 < (double)CONCAT44((uint)((ulonglong)local_388._s_0.Y >> 0x20) & uVar125,
                                      SUB84(local_388._s_0.Y,0) & uVar124))) ||
          (dVar19 < (double)CONCAT44((uint)((ulonglong)local_388._s_0.Z >> 0x20) & uVar125,
                                     SUB84(local_388._s_0.Z,0) & uVar124))) &&
         (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar125,
                                      SUB84(dVar74,0) & uVar124) ||
           (dVar19 <= (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) &&
            (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) != dVar19)) ||
          (dVar19 < (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Z >> 0x20) & uVar125,
                                     SUB84(local_3b8._s_0.Z,0) & uVar124))))) {
        dVar109 = local_388._s_0.Y * local_3e8._s_0.Y + local_388._s_0.X * local_3e8._s_0.X +
                  local_388._s_0.Z * local_3e8._s_0.Z;
        auVar84._0_8_ = local_3e8._s_0.Z * dVar109;
        auVar84._8_8_ = 0;
        local_388._s_0.X = local_388._s_0.X - local_3e8._s_0.X * dVar109;
        local_388._s_0.Y = local_388._s_0.Y - local_3e8._s_0.Y * dVar109;
        local_388._s_0.Z = local_388._s_0.Z - auVar84._0_8_;
        pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_388._s_0,&local_128,dVar16,
                             &UE::Math::TVector<double>::ZeroVector);
        local_388._s_0.X = (pTVar21->field0_0x0)._s_0.X;
        local_388._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
        local_388._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_328,(TVector<double> *)&local_3b8._s_0,(TVector<double> *)&local_388._s_0)
        ;
        _Var17 = GlobalVectorConstants::DoubleOne.XY;
        if (__real_322bcc77 <
            (float)((uint)(param_7 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          uVar25 = SUB84(local_328.W,0);
          uVar57 = (undefined4)((ulonglong)local_328.W >> 0x20);
          dVar109 = local_328.X * local_328.X + local_328.Z * local_328.Z;
          dVar72 = local_328.Y * local_328.Y + 0.0;
          auVar35._8_4_ = SUB84(dVar72,0);
          auVar35._0_8_ = dVar109;
          auVar35._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
          auVar36._0_8_ = auVar35._8_8_ + dVar109;
          auVar36._8_8_ = dVar109 + dVar72;
          auVar93 = sqrtpd(auVar84,auVar36);
          uVar22 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar36._0_8_);
          uVar24 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar36._8_8_);
          auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar93);
          uVar23 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar36._0_8_);
          auVar113._0_8_ = uVar22 & (ulonglong)(auVar26._0_8_ * local_328.X);
          uVar14 = uVar24 & (ulonglong)(auVar26._8_8_ * local_328.Y);
          auVar113._8_4_ = (undefined4)uVar14;
          auVar113._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar78._0_4_ =
               ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
          auVar78._4_4_ =
               ~(uint)(uVar22 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
          auVar78._8_4_ =
               ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
          auVar78._12_4_ =
               ~(uint)(uVar24 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
          auVar113 = auVar113 | auVar78;
          auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar93);
          local_250 = (double)(CONCAT44(~(uint)(uVar23 >> 0x20) &
                                        (uint)((ulonglong)
                                               (double)GlobalVectorConstants::Float1000.m128_f32[2]
                                              >> 0x20),
                                        ~(uint)uVar23 &
                                        SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0
                                             )) | uVar23 & (ulonglong)(auVar93._0_8_ * local_328.Z))
          ;
          if (__real_bff0000000000000 <= local_328.W) {
            if (__real_3ff0000000000000 <= local_328.W) {
              uVar25 = SUB84(__real_3ff0000000000000,0);
              uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            }
          }
          else {
            uVar25 = SUB84(__real_bff0000000000000,0);
            uVar57 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          }
          local_260 = auVar113;
          acos((double)CONCAT44(uVar57,uVar25));
          __libm_sse2_sincos_();
          local_328.X = extraout_XMM0_Qa * auVar113._0_8_;
          local_328.Y = extraout_XMM0_Qa * auVar113._8_8_;
          local_328.Z = extraout_XMM0_Qa * local_250;
          local_328.W = extraout_XMM0_Qb;
        }
        dVar72 = (param_1->Rotation).ZW.m128d_f64[0];
        dVar58 = (param_1->Rotation).ZW.m128d_f64[1];
        dVar104 = (param_1->Rotation).XY.m128d_f64[0];
        dVar126 = (param_1->Rotation).XY.m128d_f64[1];
        auVar37._8_4_ = SUB84(local_328.Z,0);
        auVar37._0_8_ = local_328.Z;
        auVar37._12_4_ = (int)((ulonglong)local_328.Z >> 0x20);
        dVar74 = local_328.X * dVar58 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 dVar104 * local_328.W +
                 dVar72 * local_328.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 local_328.Z * dVar126 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar103 = local_328.X * dVar72 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  dVar126 * local_328.W +
                  dVar58 * local_328.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar37._8_8_ * dVar104 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar38._8_4_ = SUB84(dVar103,0);
        auVar38._0_8_ = dVar74;
        auVar38._12_4_ = (int)((ulonglong)dVar103 >> 0x20);
        dVar109 = local_328.X * dVar126 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  dVar72 * local_328.W +
                  dVar104 * local_328.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  local_328.Z * dVar58 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar72 = local_328.X * dVar104 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar58 * local_328.W +
                 dVar126 * local_328.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 local_328.Z * dVar72 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar63._8_4_ = SUB84(dVar72,0);
        auVar63._0_8_ = dVar109;
        auVar63._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
        auVar64._0_8_ = dVar109 * dVar109 + dVar74 * dVar74;
        auVar64._8_8_ = auVar63._8_8_ * dVar72 + auVar38._8_8_ * dVar103;
        auVar39._8_4_ = SUB84(auVar64._8_8_,0);
        auVar39._0_8_ = auVar64._0_8_;
        auVar39._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
        auVar40._0_8_ = auVar39._8_8_ + auVar64._0_8_;
        auVar40._8_8_ = auVar64._0_8_ + auVar64._8_8_;
        uVar22 = -(ulonglong)(dVar16 <= auVar40._0_8_);
        uVar23 = -(ulonglong)(dVar16 <= auVar40._8_8_);
        auVar93 = sqrtpd(auVar64,auVar40);
        uVar120 = (uint)(uVar22 >> 0x20);
        uVar121 = (uint)(uVar23 >> 0x20);
        auVar26 = divpd((undefined1  [16])_Var17.m128d_f64,auVar93);
        auVar85._0_4_ =
             ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar85._4_4_ =
             ~uVar120 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
        auVar85._8_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar85._12_4_ =
             ~uVar121 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar93);
        auVar127._0_8_ = uVar22 & (ulonglong)(auVar26._0_8_ * dVar74);
        uVar14 = uVar23 & (ulonglong)(auVar26._8_8_ * dVar103);
        auVar127._8_4_ = (undefined4)uVar14;
        auVar127._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar41._0_8_ = (ulonglong)(auVar93._0_8_ * dVar109) & uVar22;
        uVar14 = (ulonglong)(auVar93._8_8_ * dVar72) & uVar23;
        auVar41._8_4_ = (undefined4)uVar14;
        auVar41._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar97._0_4_ =
             ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar97._4_4_ =
             ~uVar120 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
        auVar97._8_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar97._12_4_ =
             ~uVar121 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64 = auVar127 | auVar97;
        *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64 = auVar85 | auVar41;
        dVar126 = __real_3fe0000000000000;
      }
    }
  }
  auVar93 = *(undefined1 (*) [16])&param_5->field0_0x0;
  dVar109 = (param_5->field0_0x0)._s_0.Z;
  local_1e8 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_1e0 = (param_2->Rotation).XY.m128d_f64[1];
  auVar26 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar104 = auVar26._0_8_;
  auVar32 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar58 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar73 = auVar26._8_8_;
  dVar72 = auVar93._8_8_;
  auVar76 = blendpd(auVar32,auVar26,2);
  auVar114._0_8_ = dVar72 * auVar32._0_8_ - auVar32._8_8_ * auVar93._0_8_;
  auVar114._8_8_ = dVar109 * auVar32._8_8_ - dVar104 * dVar72;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar109;
  auVar32 = blendpd(auVar93,auVar5,2);
  auVar42._0_8_ = auVar32._0_8_ * dVar104 - auVar76._0_8_ * dVar109;
  auVar42._8_8_ = auVar32._8_8_ * dVar73 - auVar76._8_8_ * 0.0;
  auVar32 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar76 = blendpd(auVar114,auVar42,2);
  dVar74 = auVar114._8_8_ + auVar114._8_8_;
  dVar103 = auVar42._0_8_ + auVar42._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar103 >> 0x20);
  auVar115._0_8_ = auVar76._0_8_ + auVar76._0_8_;
  auVar115._8_8_ = auVar76._8_8_ + auVar76._8_8_;
  auVar98._8_4_ = SUB84(dVar103,0);
  auVar98._0_8_ = dVar74;
  auVar98._12_4_ = uVar25;
  auVar86._8_4_ = SUB84(dVar103,0);
  auVar86._0_8_ = dVar74;
  auVar86._12_4_ = uVar25;
  auVar26 = blendpd(auVar32,auVar26,2);
  auVar99._0_8_ = auVar98._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar74;
  auVar99._8_8_ = auVar115._0_8_ * auVar32._8_8_ - dVar104 * dVar103;
  auVar32 = blendpd(auVar86,auVar115,2);
  auVar87._0_8_ = auVar32._0_8_ * dVar104 - auVar26._0_8_ * auVar115._0_8_;
  auVar87._8_8_ = auVar32._8_8_ * dVar73 - auVar26._8_8_ * auVar115._8_8_;
  auVar43._8_4_ = SUB84(auVar99._8_8_,0);
  auVar43._0_8_ = auVar99._0_8_;
  auVar43._12_4_ = (int)((ulonglong)auVar99._8_8_ >> 0x20);
  dVar74 = dVar74 * dVar58 + auVar93._0_8_ + auVar43._8_8_;
  dVar72 = dVar103 * dVar58 + dVar72 + auVar87._0_8_;
  uVar120 = SUB84(dVar72,0);
  uVar121 = (uint)((ulonglong)dVar72 >> 0x20);
  auVar93 = blendpd(auVar99,auVar87,2);
  local_3b8._s_0.Z = auVar115._0_8_ * dVar58 + dVar109 + auVar93._0_8_;
  local_248._8_4_ = uVar120;
  local_248._0_8_ = dVar74;
  local_248._12_4_ = uVar121;
  local_3b8._8_4_ = uVar120;
  local_3b8._0_8_ = dVar74;
  local_3b8._12_4_ = uVar121;
  local_158 = *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64;
  local_148 = (param_3->Translation).ZW.m128d_f64[0];
  auVar12._4_8_ = dVar73;
  auVar12._0_4_ = local_158._4_4_;
  auVar65._0_8_ = auVar12._0_8_ << 0x20;
  auVar65._8_4_ = local_158._8_4_;
  auVar65._12_4_ = local_158._12_4_;
  local_3e8._s_0.Y = auVar65._8_8_ - dStack_3c8;
  local_3e8._s_0.X = local_158._0_8_ - local_3d0;
  local_3e8._s_0.Z = local_148 - local_3c0;
  if ((((dVar19 < (double)CONCAT44((uint)((ulonglong)local_3e8._s_0.X >> 0x20) & uVar125,
                                   SUB84(local_3e8._s_0.X,0) & uVar124)) ||
       (dVar19 < (double)CONCAT44((uint)((ulonglong)local_3e8._s_0.Y >> 0x20) & uVar125,
                                  SUB84(local_3e8._s_0.Y,0) & uVar124))) ||
      (dVar19 < (double)CONCAT44((uint)((ulonglong)local_3e8._s_0.Z >> 0x20) & uVar125,
                                 SUB84(local_3e8._s_0.Z,0) & uVar124))) &&
     (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar125,
                                  SUB84(dVar74,0) & uVar124) ||
       (dVar19 <= (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) &&
        (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) != dVar19)) ||
      (dVar19 < (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Z >> 0x20) & uVar125,
                                 SUB84(local_3b8._s_0.Z,0) & uVar124))))) {
    local_238 = local_3b8._s_0.Z;
    pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                        ((TVector<double> *)&local_3e8._s_0,&local_110,dVar16,
                         &UE::Math::TVector<double>::ZeroVector);
    local_3e8._s_0.X = (pTVar21->field0_0x0)._s_0.X;
    local_3e8._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
    local_3e8._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::FindBetweenNormals
              (&local_1a8,(TVector<double> *)&local_3b8._s_0,(TVector<double> *)&local_3e8._s_0);
    dVar104 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar73 = (param_2->Rotation).ZW.m128d_f64[1];
    dVar110 = (param_2->Rotation).XY.m128d_f64[0];
    dVar119 = (param_2->Rotation).XY.m128d_f64[1];
    dVar72 = local_1a8.W;
    auVar79._8_8_ = dVar110;
    auVar79._0_8_ = dVar119;
    dVar109 = local_1a8.Z;
    auVar44._8_4_ = local_1a8.Z._0_4_;
    auVar44._0_8_ = dVar109;
    auVar44._12_4_ = local_1a8.Z._4_4_;
    dVar103 = local_1a8.X * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
              + dVar110 * dVar72 +
              dVar104 * local_1a8.Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
              dVar109 * dVar119 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar58 = local_1a8.X * dVar104 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
             + dVar119 * dVar72 +
             dVar73 * local_1a8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
             + auVar44._8_8_ * dVar110 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar66._8_4_ = SUB84(dVar58,0);
    auVar66._0_8_ = dVar103;
    auVar66._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
    local_2b8 = dVar16;
    dVar74 = local_1a8.X * dVar119 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
             + dVar104 * dVar72 +
             dVar110 * local_1a8.Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
             + dVar109 * dVar73 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar109 = local_1a8.X * dVar110 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar73 * dVar72 +
              dVar119 * local_1a8.Y *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
              dVar109 * dVar104 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar45._8_4_ = SUB84(dVar109,0);
    auVar45._0_8_ = dVar74;
    auVar45._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
    dVar72 = dVar103 * dVar103 + dVar74 * dVar74;
    dVar104 = auVar66._8_8_ * dVar58 + auVar45._8_8_ * dVar109;
    auVar46._8_4_ = SUB84(dVar104,0);
    auVar46._0_8_ = dVar72;
    auVar46._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
    auVar47._0_8_ = auVar46._8_8_ + dVar72;
    auVar47._8_8_ = dVar72 + dVar104;
    auVar26 = sqrtpd(auVar79,auVar47);
    uVar22 = -(ulonglong)(dVar16 <= auVar47._0_8_);
    uVar23 = -(ulonglong)(dVar16 <= auVar47._8_8_);
    uVar120 = (uint)(uVar22 >> 0x20);
    uVar121 = (uint)(uVar23 >> 0x20);
    auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
    auVar67._0_8_ = uVar22 & (ulonglong)(auVar93._0_8_ * dVar74);
    uVar14 = uVar23 & (ulonglong)(auVar93._8_8_ * dVar109);
    auVar67._8_4_ = (undefined4)uVar14;
    auVar67._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar100._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar100._4_4_ =
         ~uVar120 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar100._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar100._12_4_ =
         ~uVar121 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
    auVar68._0_8_ = (ulonglong)(auVar93._0_8_ * dVar103) & uVar22;
    uVar14 = (ulonglong)(auVar93._8_8_ * dVar58) & uVar23;
    auVar68._8_4_ = (undefined4)uVar14;
    auVar68._12_4_ = (undefined4)(uVar14 >> 0x20);
    auVar3._4_4_ = ~uVar120 &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar3._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar3._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._12_4_ =
         ~uVar121 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar68 | auVar3;
    *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar100 | auVar67;
    fVar15 = __real_322bcc77;
    if (__real_322bcc77 < param_7) {
      dVar109 = (param_6->field0_0x0)._s_0.Z;
      local_1e8 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_1e0 = (param_2->Rotation).XY.m128d_f64[1];
      auVar93 = *(undefined1 (*) [16])&param_6->field0_0x0;
      auVar26 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar58 = auVar26._0_8_;
      auVar32 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      dVar103 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar104 = auVar93._8_8_;
      auVar76 = blendpd(auVar32,auVar26,2);
      auVar116._0_8_ = dVar104 * auVar32._0_8_ - auVar32._8_8_ * auVar93._0_8_;
      auVar116._8_8_ = dVar109 * auVar32._8_8_ - dVar58 * dVar104;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar109;
      auVar32 = blendpd(auVar93,auVar6,2);
      auVar48._0_8_ = auVar32._0_8_ * dVar58 - auVar76._0_8_ * dVar109;
      auVar48._8_8_ = auVar32._8_8_ * auVar26._8_8_ - auVar76._8_8_ * 0.0;
      auVar32 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar76 = blendpd(auVar116,auVar48,2);
      dVar72 = auVar116._8_8_ + auVar116._8_8_;
      dVar74 = auVar48._0_8_ + auVar48._0_8_;
      uVar25 = (undefined4)((ulonglong)dVar74 >> 0x20);
      auVar117._0_8_ = auVar76._0_8_ + auVar76._0_8_;
      auVar117._8_8_ = auVar76._8_8_ + auVar76._8_8_;
      auVar101._8_4_ = SUB84(dVar74,0);
      auVar101._0_8_ = dVar72;
      auVar101._12_4_ = uVar25;
      auVar88._8_4_ = SUB84(dVar74,0);
      auVar88._0_8_ = dVar72;
      auVar88._12_4_ = uVar25;
      auVar76 = blendpd(auVar88,auVar117,2);
      auVar102._0_8_ = auVar101._8_8_ * auVar32._0_8_ - auVar32._8_8_ * dVar72;
      auVar102._8_8_ = auVar117._0_8_ * auVar32._8_8_ - dVar58 * dVar74;
      auVar32 = blendpd(auVar32,auVar26,2);
      auVar49._8_4_ = SUB84(auVar102._8_8_,0);
      auVar49._0_8_ = auVar102._0_8_;
      auVar49._12_4_ = (int)((ulonglong)auVar102._8_8_ >> 0x20);
      auVar89._0_8_ = auVar76._0_8_ * dVar58 - auVar32._0_8_ * auVar117._0_8_;
      auVar89._8_8_ = auVar76._8_8_ * auVar26._8_8_ - auVar32._8_8_ * auVar117._8_8_;
      dVar72 = dVar72 * dVar103 + auVar93._0_8_ + auVar49._8_8_;
      dVar74 = dVar74 * dVar103 + dVar104 + auVar89._0_8_;
      uVar120 = SUB84(dVar74,0);
      uVar121 = (uint)((ulonglong)dVar74 >> 0x20);
      auVar93 = blendpd(auVar102,auVar89,2);
      local_3b8._s_0.Z = auVar117._0_8_ * dVar103 + dVar109 + auVar93._0_8_;
      local_218._8_4_ = uVar120;
      local_218._0_8_ = dVar72;
      local_218._12_4_ = uVar121;
      local_3b8._8_4_ = uVar120;
      local_3b8._0_8_ = dVar72;
      local_3b8._12_4_ = uVar121;
      if (bVar1) {
        dVar74 = (param_4->field0_0x0)._s_0.Z - local_3c0;
        dVar103 = (param_4->field0_0x0)._s_0.Y - dStack_3c8;
        dVar109 = (param_4->field0_0x0)._s_0.X - local_3d0;
      }
      else {
        local_230 = *(undefined1 (*) [16])(param_3->Translation).XY.m128d_f64;
        local_220 = (param_3->Translation).ZW.m128d_f64[0];
        local_140 = (param_1->Translation).XY.m128d_f64[0];
        dStack_138 = (param_1->Translation).XY.m128d_f64[1];
        local_130 = (param_1->Translation).ZW.m128d_f64[0];
        auVar13._4_8_ = (param_1->Translation).ZW.m128d_f64[1];
        auVar13._0_4_ = local_230._4_4_;
        auVar69._0_8_ = auVar13._0_8_ << 0x20;
        auVar69._8_4_ = local_230._8_4_;
        auVar69._12_4_ = local_230._12_4_;
        auVar89._8_8_ = local_230._8_8_;
        auVar89._0_8_ = (local_230._0_8_ + local_140) * dVar126;
        dVar74 = local_3c0 - (local_220 + local_130) * dVar126;
        dVar109 = local_3d0 - auVar89._0_8_;
        dVar103 = dStack_3c8 - (auVar69._8_8_ + dStack_138) * dVar126;
      }
      if ((((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar109 >> 0x20) & uVar125,
                                       SUB84(dVar109,0) & uVar124)) ||
           (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar103 >> 0x20) & uVar125,
                                      SUB84(dVar103,0) & uVar124))) ||
          (dVar19 < (double)CONCAT44((uint)((ulonglong)dVar74 >> 0x20) & uVar125,
                                     SUB84(dVar74,0) & uVar124))) &&
         (((dVar19 < (double)CONCAT44((uint)((ulonglong)dVar72 >> 0x20) & uVar125,
                                      SUB84(dVar72,0) & uVar124) ||
           (dVar19 <= (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) &&
            (double)CONCAT44(uVar121 & uVar125,uVar120 & uVar124) != dVar19)) ||
          (dVar19 < (double)CONCAT44((uint)((ulonglong)local_3b8._s_0.Z >> 0x20) & uVar125,
                                     SUB84(local_3b8._s_0.Z,0) & uVar124))))) {
        dVar72 = dVar103 * local_3e8._s_0.Y + dVar109 * local_3e8._s_0.X + dVar74 * local_3e8._s_0.Z
        ;
        local_340._s_0.X = dVar109 - dVar72 * local_3e8._s_0.X;
        local_340._s_0.Y = dVar103 - dVar72 * local_3e8._s_0.Y;
        local_340._s_0.Z = dVar74 - dVar72 * local_3e8._s_0.Z;
        local_208 = local_3b8._s_0.Z;
        pTVar21 = UE::Math::TVector<double>::GetSafeNormal
                            ((TVector<double> *)&local_340._s_0,local_f8,dVar16,
                             &UE::Math::TVector<double>::ZeroVector);
        local_340._s_0.X = (pTVar21->field0_0x0)._s_0.X;
        local_340._s_0.Y = (pTVar21->field0_0x0)._s_0.Y;
        local_340._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_308,(TVector<double> *)&local_3b8._s_0,(TVector<double> *)&local_340._s_0)
        ;
        _Var18 = GlobalVectorConstants::DoubleOne.ZW;
        _Var17 = GlobalVectorConstants::DoubleOne.XY;
        if (fVar15 < (float)((uint)(param_7 - __real_3f800000) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          uVar25 = SUB84(local_308.W,0);
          uVar57 = (undefined4)((ulonglong)local_308.W >> 0x20);
          dVar109 = local_308.X * local_308.X + local_308.Z * local_308.Z;
          dVar72 = local_308.Y * local_308.Y + 0.0;
          auVar50._8_4_ = SUB84(dVar72,0);
          auVar50._0_8_ = dVar109;
          auVar50._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
          auVar51._0_8_ = auVar50._8_8_ + dVar109;
          auVar51._8_8_ = dVar109 + dVar72;
          auVar93 = sqrtpd(auVar89,auVar51);
          uVar22 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar51._0_8_);
          uVar24 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar51._8_8_);
          auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar93);
          uVar23 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar51._0_8_);
          auVar118._0_8_ = uVar22 & (ulonglong)(auVar26._0_8_ * local_308.X);
          uVar14 = uVar24 & (ulonglong)(auVar26._8_8_ * local_308.Y);
          auVar118._8_4_ = (undefined4)uVar14;
          auVar118._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar80._0_4_ =
               ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
          auVar80._4_4_ =
               ~(uint)(uVar22 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
          auVar80._8_4_ =
               ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
          auVar80._12_4_ =
               ~(uint)(uVar24 >> 0x20) &
               (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
          auVar118 = auVar118 | auVar80;
          auVar93 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar93);
          local_1f0 = (double)(CONCAT44(~(uint)(uVar23 >> 0x20) &
                                        (uint)((ulonglong)
                                               (double)GlobalVectorConstants::Float1000.m128_f32[2]
                                              >> 0x20),
                                        ~(uint)uVar23 &
                                        SUB84((double)GlobalVectorConstants::Float1000.m128_f32[2],0
                                             )) | uVar23 & (ulonglong)(auVar93._0_8_ * local_308.Z))
          ;
          dVar109 = __real_bff0000000000000;
          if (__real_bff0000000000000 <= local_308.W) {
            if (__real_3ff0000000000000 <= local_308.W) {
              uVar25 = SUB84(__real_3ff0000000000000,0);
              uVar57 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            }
            dVar109 = (double)CONCAT44(uVar57,uVar25);
          }
          local_200 = auVar118;
          acos(dVar109);
          __libm_sse2_sincos_();
          local_308.X = extraout_XMM0_Qa_00 * auVar118._0_8_;
          local_308.Y = extraout_XMM0_Qa_00 * auVar118._8_8_;
          local_308.Z = extraout_XMM0_Qa_00 * local_1f0;
          local_308.W = extraout_XMM0_Qb_00;
        }
        dVar103 = (param_2->Rotation).XY.m128d_f64[0];
        dVar58 = (param_2->Rotation).XY.m128d_f64[1];
        dVar104 = (param_2->Rotation).ZW.m128d_f64[0];
        dVar126 = (param_2->Rotation).ZW.m128d_f64[1];
        auVar52._8_4_ = SUB84(local_308.W,0);
        auVar52._0_8_ = local_308.W;
        auVar52._12_4_ = (int)((ulonglong)local_308.W >> 0x20);
        auVar53._8_4_ = SUB84(local_308.Z,0);
        auVar53._0_8_ = local_308.Z;
        auVar53._12_4_ = (int)((ulonglong)local_308.Z >> 0x20);
        dVar109 = local_308.X * dVar58 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                  local_308.W * dVar104 +
                  dVar103 * local_308.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  local_308.Z * dVar126 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar72 = local_308.X * dVar103 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 auVar52._8_8_ * dVar126 +
                 dVar58 * local_308.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 auVar53._8_8_ * dVar104 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar54._8_4_ = SUB84(dVar72,0);
        auVar54._0_8_ = dVar109;
        auVar54._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
        dVar74 = local_308.X * dVar126 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_308.W * dVar103 +
                 dVar104 * local_308.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                 dVar58 * local_308.Z *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar103 = local_308.X * dVar104 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                  local_308.W * dVar58 +
                  dVar126 * local_308.Y *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  dVar103 * local_308.Z *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar70._8_4_ = SUB84(dVar103,0);
        auVar70._0_8_ = dVar74;
        auVar70._12_4_ = (int)((ulonglong)dVar103 >> 0x20);
        auVar71._0_8_ = dVar74 * dVar74 + dVar109 * dVar109;
        auVar71._8_8_ = auVar70._8_8_ * dVar103 + auVar54._8_8_ * dVar72;
        auVar55._8_4_ = SUB84(auVar71._8_8_,0);
        auVar55._0_8_ = auVar71._0_8_;
        auVar55._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
        auVar56._0_8_ = auVar55._8_8_ + auVar71._0_8_;
        auVar56._8_8_ = auVar71._0_8_ + auVar71._8_8_;
        auVar93 = sqrtpd(auVar71,auVar56);
        uVar22 = -(ulonglong)(dVar16 <= auVar56._0_8_);
        uVar23 = -(ulonglong)(dVar16 <= auVar56._8_8_);
        uVar124 = (uint)(uVar22 >> 0x20);
        uVar125 = (uint)(uVar23 >> 0x20);
        auVar26 = divpd((undefined1  [16])_Var17.m128d_f64,auVar93);
        auVar93 = divpd((undefined1  [16])_Var18.m128d_f64,auVar93);
        auVar122._0_8_ = uVar22 & (ulonglong)(auVar26._0_8_ * dVar74);
        uVar14 = uVar23 & (ulonglong)(auVar26._8_8_ * dVar103);
        auVar122._8_4_ = (undefined4)uVar14;
        auVar122._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar90._0_4_ =
             ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar90._4_4_ =
             ~uVar124 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
        auVar90._8_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar90._12_4_ =
             ~uVar125 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        auVar123._0_8_ = (ulonglong)(auVar93._0_8_ * dVar109) & uVar22;
        uVar14 = (ulonglong)(auVar93._8_8_ * dVar72) & uVar23;
        auVar123._8_4_ = (undefined4)uVar14;
        auVar123._12_4_ = (undefined4)(uVar14 >> 0x20);
        auVar7._4_4_ = ~uVar124 &
                       (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar7._0_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0)
        ;
        auVar7._8_4_ = ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
        ;
        auVar7._12_4_ =
             ~uVar125 &
             (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64 = auVar122 | auVar7;
        *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64 = auVar90 | auVar123;
      }
    }
  }
  return;
}

