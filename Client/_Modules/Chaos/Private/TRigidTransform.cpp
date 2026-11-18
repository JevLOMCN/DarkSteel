// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// TRigidTransform<double,3> @ 14373bd30

TRigidTransform<double,3> * __thiscall
Chaos::TRigidTransform<double,3>::TRigidTransform<double,3>(TRigidTransform<double,3> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)this = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this->field_0x8 = (double)fVar1;
  *(double *)&this->field_0x10 = (double)fVar2;
  *(double *)&this->field_0x18 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this->field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this->field_0x28 = (double)fVar1;
  *(double *)&this->field_0x30 = (double)fVar2;
  *(double *)&this->field_0x38 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this->field_0x40 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this->field_0x48 = (double)fVar1;
  *(double *)&this->field_0x50 = (double)fVar2;
  *(double *)&this->field_0x58 = (double)fVar3;
  return this;
}

// operator* @ 143742500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRigidTransform<double,3> * __thiscall
Chaos::TRigidTransform<double,3>::operator*
          (TRigidTransform<double,3> *this,TRigidTransform<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_78,(TTransform<double> *)this,(TTransform<double> *)param_1);
  *(double *)__return_storage_ptr__ = local_78.Rotation.XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x8 = local_78.Rotation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x10 = local_78.Rotation.ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x18 = local_78.Rotation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x20 = local_78.Translation.XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x28 = local_78.Translation.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x30 = local_78.Translation.ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x38 = local_78.Translation.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 = local_78.Scale3D.XY.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x48 = local_78.Scale3D.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 = local_78.Scale3D.ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x58 = local_78.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// GetRelativeTransformNoScale @ 1438bc530

TRigidTransform<double,3> * __thiscall
Chaos::TRigidTransform<double,3>::GetRelativeTransformNoScale
          (TRigidTransform<double,3> *this,TRigidTransform<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  __m128d _Var21;
  __m128d _Var22;
  __m128d _Var23;
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
  undefined4 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  
  _Var21.m128d_f64 = GlobalVectorConstants::Double1110.ZW.m128d_f64;
  _Var23.m128d_f64 = GlobalVectorConstants::Double1110.XY.m128d_f64;
  dVar24 = *(double *)&this->field_0x30 - *(double *)&param_1->field_0x30;
  dVar17 = *(double *)this;
  dVar18 = *(double *)&this->field_0x8;
  dVar10 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar11 = *(double *)&param_1->field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar13 = *(double *)&param_1->field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar14 = *(double *)&param_1->field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar28._8_4_ = SUB84(dVar11,0);
  auVar28._0_8_ = dVar10;
  auVar28._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar15 = *(double *)&this->field_0x20 - *(double *)&param_1->field_0x20;
  dVar16 = *(double *)&this->field_0x28 - *(double *)&param_1->field_0x28;
  uVar34 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar12._8_4_ = SUB84(dVar14,0);
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  auVar29 = blendpd(auVar28,auVar12,2);
  auVar35._8_4_ = SUB84(dVar16,0);
  auVar35._0_8_ = dVar15;
  auVar35._12_4_ = uVar34;
  auVar25._8_4_ = SUB84(dVar16,0);
  auVar25._0_8_ = dVar15;
  auVar25._12_4_ = uVar34;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = dVar24;
  auVar26 = blendpd(auVar25,auVar26,2);
  auVar36._0_8_ = auVar35._8_8_ * dVar10 - dVar11 * dVar15;
  auVar36._8_8_ = dVar24 * dVar11 - dVar13 * dVar16;
  auVar27._0_8_ = auVar26._0_8_ * dVar13 - auVar29._0_8_ * dVar24;
  auVar27._8_8_ = auVar26._8_8_ * dVar14 - auVar29._8_8_ * 0.0;
  auVar26 = blendpd(auVar36,auVar27,2);
  dVar8 = auVar36._8_8_ + auVar36._8_8_;
  dVar9 = auVar27._0_8_ + auVar27._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar37._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar37._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  auVar32._8_4_ = SUB84(dVar9,0);
  auVar32._0_8_ = dVar8;
  auVar32._12_4_ = uVar34;
  dVar19 = *(double *)&this->field_0x10;
  dVar20 = *(double *)&this->field_0x18;
  auVar30._8_4_ = SUB84(dVar9,0);
  auVar30._0_8_ = dVar8;
  auVar30._12_4_ = uVar34;
  auVar26 = blendpd(auVar30,auVar37,2);
  auVar33._0_8_ = auVar32._8_8_ * dVar10 - dVar8 * dVar11;
  auVar33._8_8_ = auVar37._0_8_ * dVar11 - dVar9 * dVar13;
  auVar31._0_8_ = auVar26._0_8_ * dVar13 - auVar37._0_8_ * auVar29._0_8_;
  auVar31._8_8_ = auVar26._8_8_ * dVar14 - auVar37._8_8_ * auVar29._8_8_;
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar6 = dVar17 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar20 * dVar14 +
          dVar11 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar19 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar26 = blendpd(auVar33,auVar31,2);
  dVar4 = dVar19 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar18 * dVar14 +
          dVar11 * *(double *)&this->field_0x18 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar17 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar9 = dVar9 * dVar14 + dVar16 + auVar31._0_8_;
  auVar29._8_4_ = SUB84(dVar4,0);
  auVar29._0_8_ =
       dVar20 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar17 * dVar14 +
       dVar11 * *(double *)&this->field_0x10 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar18 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar29._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar29;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar18 * dVar10 * dVar1 + dVar19 * dVar14 + dVar11 * dVar17 * dVar3 +
                 dVar20 * dVar13 * dVar2;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar5;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar8 * dVar14 + dVar15 + auVar33._8_8_;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x20 = auVar7;
  *(double *)&__return_storage_ptr__->field_0x30 = auVar37._0_8_ * dVar14 + dVar24 + auVar26._0_8_;
  *(double *)&__return_storage_ptr__->field_0x38 = auVar37._8_8_ * dVar14 + 0.0 + auVar26._8_8_;
  _Var22 = GlobalVectorConstants::Double1110.XY;
  GlobalVectorConstants::Double1110.XY.m128d_f64[0] = _Var23.m128d_f64[0];
  GlobalVectorConstants::Double1110.XY.m128d_f64[1] = _Var23.m128d_f64[1];
  dVar1 = GlobalVectorConstants::Double1110.XY.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x40 = GlobalVectorConstants::Double1110.XY.m128d_f64[0]
  ;
  GlobalVectorConstants::Double1110.XY = _Var22;
  _Var23 = GlobalVectorConstants::Double1110.ZW;
  *(double *)&__return_storage_ptr__->field_0x48 = dVar1;
  GlobalVectorConstants::Double1110.ZW.m128d_f64[0] = _Var21.m128d_f64[0];
  GlobalVectorConstants::Double1110.ZW.m128d_f64[1] = _Var21.m128d_f64[1];
  dVar1 = GlobalVectorConstants::Double1110.ZW.m128d_f64[1];
  *(double *)&__return_storage_ptr__->field_0x50 = GlobalVectorConstants::Double1110.ZW.m128d_f64[0]
  ;
  GlobalVectorConstants::Double1110.ZW = _Var23;
  *(double *)&__return_storage_ptr__->field_0x58 = dVar1;
  return __return_storage_ptr__;
}

// MultiplyNoScale @ 1438c4370

TRigidTransform<double,3> * __cdecl
Chaos::TRigidTransform<double,3>::MultiplyNoScale
          (TRigidTransform<double,3> *__return_storage_ptr__,TRigidTransform<double,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  __m128 _Var31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar1._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar1._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar1._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar1;
  auVar38._8_4_ = SUB84((double)fVar4,0);
  auVar38._0_8_ = (double)fVar3;
  auVar38._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x10 = auVar38;
  _Var31 = GlobalVectorConstants::FloatZero;
  auVar43._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar43._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar43._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x20 = auVar43;
  dVar12 = (double)_Var31.m128_f32[3];
  auVar2._8_4_ = SUB84(dVar12,0);
  auVar2._0_8_ = (double)_Var31.m128_f32[2];
  auVar2._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x30 = auVar2;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar35._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar35._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar35._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x40 = auVar35;
  auVar39._8_4_ = SUB84((double)fVar4,0);
  auVar39._0_8_ = (double)fVar3;
  auVar39._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x50 = auVar39;
  dVar19 = *(double *)param_2;
  dVar20 = *(double *)&param_2->field_0x8;
  dVar21 = *(double *)&param_1->field_0x10;
  dVar22 = *(double *)&param_1->field_0x18;
  dVar23 = *(double *)param_1;
  dVar24 = *(double *)&param_1->field_0x8;
  auVar1 = *(undefined1 (*) [16])&param_1->field_0x20;
  dVar25 = *(double *)&param_2->field_0x18;
  dVar26 = *(double *)&param_2->field_0x10;
  dVar27 = *(double *)&param_2->field_0x18;
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar38 = *(undefined1 (*) [16])param_2;
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar43 = *(undefined1 (*) [16])&param_2->field_0x10;
  auVar2 = *(undefined1 (*) [16])&param_1->field_0x30;
  dVar32 = auVar2._0_8_;
  dVar45 = auVar1._8_8_;
  auVar39 = blendpd(auVar1,auVar2,2);
  auVar35 = blendpd(auVar38,auVar43,2);
  auVar40._0_8_ = auVar39._0_8_ * auVar43._0_8_ - auVar35._0_8_ * dVar32;
  auVar40._8_8_ = auVar39._8_8_ * auVar43._8_8_ - auVar35._8_8_ * auVar2._8_8_;
  auVar42._0_8_ = dVar45 * auVar38._0_8_ - auVar38._8_8_ * auVar1._0_8_;
  auVar42._8_8_ = dVar32 * auVar38._8_8_ - auVar43._0_8_ * dVar45;
  auVar38 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar14 = auVar42._8_8_ + auVar42._8_8_;
  dVar15 = auVar40._0_8_ + auVar40._0_8_;
  uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar43 = blendpd(auVar42,auVar40,2);
  auVar44._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar44._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar36._8_4_ = SUB84(dVar15,0);
  auVar36._0_8_ = dVar14;
  auVar36._12_4_ = uVar41;
  auVar43 = *(undefined1 (*) [16])param_2;
  auVar33._8_4_ = SUB84(dVar15,0);
  auVar33._0_8_ = dVar14;
  auVar33._12_4_ = uVar41;
  auVar39 = blendpd(auVar33,auVar44,2);
  auVar35 = blendpd(auVar43,auVar38,2);
  auVar37._0_8_ = auVar36._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar14;
  auVar37._8_8_ = auVar44._0_8_ * auVar43._8_8_ - auVar38._0_8_ * dVar15;
  dVar28 = *(double *)&param_2->field_0x20;
  dVar16 = *(double *)&param_2->field_0x28;
  auVar34._0_8_ = auVar39._0_8_ * auVar38._0_8_ - auVar35._0_8_ * auVar44._0_8_;
  auVar34._8_8_ = auVar39._8_8_ * auVar38._8_8_ - auVar35._8_8_ * auVar44._8_8_;
  dVar29 = *(double *)&param_2->field_0x30;
  dVar30 = *(double *)&param_2->field_0x38;
  dVar18 = dVar21 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar25 * dVar24 +
           dVar20 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar23 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar18,0);
  auVar17._0_8_ =
       dVar22 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar25 * dVar23 +
       dVar20 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar24 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar17;
  *(double *)&__return_storage_ptr__->field_0x10 =
       dVar24 * dVar19 * dVar12 + dVar25 * dVar21 + dVar20 * dVar23 * dVar5 +
       dVar22 * dVar26 * dVar6;
  *(double *)&__return_storage_ptr__->field_0x18 =
       dVar23 * dVar19 * dVar7 + dVar25 * dVar22 + dVar20 * dVar24 * dVar8 + dVar21 * dVar26 * dVar9
  ;
  auVar38 = blendpd(auVar37,auVar34,2);
  dVar16 = dVar15 * dVar27 + dVar45 + auVar34._0_8_ + dVar16;
  auVar13._8_4_ = SUB84(dVar16,0);
  auVar13._0_8_ = dVar14 * dVar27 + auVar1._0_8_ + auVar37._8_8_ + dVar28;
  auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x20 = auVar13;
  *(double *)&__return_storage_ptr__->field_0x30 =
       auVar44._0_8_ * dVar27 + dVar32 + auVar38._0_8_ + dVar29;
  *(double *)&__return_storage_ptr__->field_0x38 =
       auVar44._8_8_ * dVar27 + auVar2._8_8_ + auVar38._8_8_ + dVar30;
  fVar3 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatOne.m128_f32[3];
  auVar10._8_4_ = SUB84((double)GlobalVectorConstants::FloatOne.m128_f32[1],0);
  auVar10._0_8_ = (double)GlobalVectorConstants::FloatOne.m128_f32[0];
  auVar10._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatOne.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x40 = auVar10;
  auVar11._8_4_ = SUB84((double)fVar4,0);
  auVar11._0_8_ = (double)fVar3;
  auVar11._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field_0x50 = auVar11;
  return __return_storage_ptr__;
}

// Inverse @ 143d59a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TRigidTransform<double,3> * __thiscall
Chaos::TRigidTransform<double,3>::Inverse
          (TRigidTransform<double,3> *this,TRigidTransform<double,3> *__return_storage_ptr__)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  TTransform<double> local_68;
  
  auVar6._0_8_ = (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                  *(uint *)&this->field_0x44,
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                  *(uint *)&this->field_0x40);
  auVar6._8_4_ = _UNK_15061cc88 & *(uint *)&this->field_0x48;
  auVar6._12_4_ = _UNK_15061cc8c & *(uint *)&this->field_0x4c;
  lVar5 = -(ulonglong)
           ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
           (double)CONCAT44(_UNK_15061cc8c & *(uint *)&this->field_0x5c,
                            _UNK_15061cc88 & *(uint *)&this->field_0x58));
  auVar2._8_4_ = (int)lVar5;
  auVar2._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)&this->field_0x54,
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)&this->field_0x50));
  auVar2._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd((int)this,auVar2);
  lVar5 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar6._8_8_);
  auVar1._8_4_ = (int)lVar5;
  auVar1._0_8_ = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar6._0_8_)
  ;
  auVar1._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd(in_EAX,auVar1);
  if ((uVar4 & 0x3fffffff) == 0 && iVar3 == 0) {
    local_68.Rotation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_68.Rotation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_68.Rotation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_68.Rotation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_68.Translation.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_68.Translation.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_68.Translation.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_68.Translation.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_68.Translation.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_68.Translation.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_68.Translation.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_68.Scale3D.XY.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
    local_68.Scale3D.XY.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
    local_68.Scale3D.XY.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
    local_68.Scale3D.XY.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[0]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._0_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_68.Scale3D.ZW.m128d_f64[1]._4_4_ =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_68.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast((TTransform<double> *)this,&local_68);
  }
  *(undefined4 *)__return_storage_ptr__ = local_68.Rotation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_68.Rotation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = local_68.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = local_68.Rotation.XY.m128d_f64[1]._4_4_;
  *(double *)&__return_storage_ptr__->field_0x10 = local_68.Rotation.ZW.m128d_f64[0];
  *(double *)&__return_storage_ptr__->field_0x18 = local_68.Rotation.ZW.m128d_f64[1];
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_68.Translation.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = local_68.Translation.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = local_68.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = local_68.Translation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = local_68.Translation.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = local_68.Translation.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = local_68.Translation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = local_68.Translation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = local_68.Scale3D.XY.m128d_f64[0]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = local_68.Scale3D.XY.m128d_f64[0]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = local_68.Scale3D.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x4c = local_68.Scale3D.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = local_68.Scale3D.ZW.m128d_f64[0]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = local_68.Scale3D.ZW.m128d_f64[0]._4_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = local_68.Scale3D.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = local_68.Scale3D.ZW.m128d_f64[1]._4_4_;
  return __return_storage_ptr__;
}

