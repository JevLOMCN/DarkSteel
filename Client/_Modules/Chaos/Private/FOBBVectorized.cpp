// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// FOBBVectorized @ 143be1e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOBBVectorized * __thiscall
Chaos::Private::FOBBVectorized::FOBBVectorized
          (FOBBVectorized *this,TRigidTransform<double,3> *param_1,TVector<float,3> *param_2,
          TVector<float,3> *param_3)

{
  undefined8 uVar1;
  __m128 _Var2;
  __m128 _Var3;
  __m128 _Var4;
  __m128 _Var5;
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  TVector<float,3> TVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_108 [32];
  TQuat<float> local_e8 [4];
  TMatrix<float> local_a8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8[0].X = (float)*(double *)param_1;
  local_e8[0].Y = (float)*(double *)&param_1->field_0x8;
  local_e8[0].Z = (float)*(double *)&param_1->field_0x10;
  local_e8[0].W = (float)*(double *)&param_1->field_0x18;
  local_a8.M[0][0] = 0.0;
  local_a8.M[0][1] = 0.0;
  local_a8.M[0][2] = 0.0;
  local_a8.M[0][3] = 0.0;
  local_a8.M[1][0] = 0.0;
  local_a8.M[1][1] = 0.0;
  local_a8.M[1][2] = 0.0;
  local_a8.M[1][3] = 0.0;
  local_a8.M[2][0] = 0.0;
  local_a8.M[2][1] = 0.0;
  local_a8.M[2][2] = 0.0;
  local_a8.M[2][3] = 0.0;
  local_a8.M[3][0] = 0.0;
  local_a8.M[3][1] = 0.0;
  local_a8.M[3][2] = 0.0;
  local_a8.M[3][3] = 0.0;
  UE::Math::TQuat<float>::ToMatrix(local_e8,&local_a8);
  _Var8.m128_f32[2] = local_a8.M[0][2];
  _Var8._0_4_ = local_a8.M[0][0];
  _Var8._4_4_ = local_a8.M[0][1];
  _Var7.m128_f32[2] = local_a8.M[1][2];
  _Var7._0_4_ = local_a8.M[1][0];
  _Var7._4_4_ = local_a8.M[1][1];
  _Var6.m128_f32[2] = local_a8.M[2][2];
  _Var6._0_4_ = local_a8.M[2][0];
  _Var6._4_4_ = local_a8.M[2][1];
  _Var8.m128_f32[3] = 0.0;
  this->XAxis = _Var8;
  _Var7.m128_f32[3] = 0.0;
  this->YAxis = _Var7;
  _Var6.m128_f32[3] = 0.0;
  this->ZAxis = _Var6;
  dVar10 = *(double *)&param_1->field_0x30;
  dVar11 = *(double *)&param_1->field_0x20;
  dVar12 = *(double *)&param_1->field_0x28;
  _Var4.m128_f32[1] = (float)dVar12;
  _Var4.m128_f32[0] = (float)dVar11;
  _Var4.m128_f32[2] = (float)dVar10;
  _Var4.m128_f32[3] = 0.0;
  this->Position = _Var4;
  fVar19 = *(float *)&param_3->field_0x8;
  TVar9 = *param_3;
  fVar18 = (float)*(undefined8 *)param_3;
  fVar23 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  _Var3.m128_f32[3] = 0.0;
  _Var3._0_12_ = (undefined1  [12])*param_3;
  this->InvScale = _Var3;
  fVar24 = (float)dVar11 * fVar18;
  fVar25 = (float)dVar12 * fVar23;
  fVar26 = (float)dVar10 * fVar19;
  _Var5.m128_f32[1] = fVar25;
  _Var5.m128_f32[0] = fVar24;
  _Var5.m128_f32[2] = fVar26;
  _Var5.m128_f32[3] = 0.0;
  this->Position = _Var5;
  uVar15 = _UNK_15061cc78;
  uVar14 = _UNK_15061cc74;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar22 = *(float *)&param_2->field_0x8;
  uVar1 = *(undefined8 *)param_2;
  _Var2.m128_f32[3] = 0.0;
  _Var2._0_12_ = (undefined1  [12])*param_2;
  this->HalfExtents = _Var2;
  fVar20 = (float)uVar1 + GlobalVectorConstants::KindaSmallNumber.m128_f32[0];
  fVar21 = (float)((ulonglong)uVar1 >> 0x20) + GlobalVectorConstants::KindaSmallNumber.m128_f32[1];
  fVar22 = fVar22 + GlobalVectorConstants::KindaSmallNumber.m128_f32[2];
  fVar17 = GlobalVectorConstants::KindaSmallNumber.m128_f32[3];
  (this->HalfExtents).m128_f32[0] = fVar20;
  (this->HalfExtents).m128_f32[1] = fVar21;
  (this->HalfExtents).m128_f32[2] = fVar22;
  (this->HalfExtents).m128_f32[3] = fVar17 + 0.0;
  fVar17 = (fVar22 * (float)(uVar13 & (uint)local_a8.M[2][0]) +
            fVar21 * (float)(uVar13 & (uint)local_a8.M[1][0]) +
           fVar20 * (float)(uVar13 & (uint)local_a8.M[0][0])) * (float)(uVar13 & (uint)fVar18);
  fVar18 = (fVar22 * (float)(uVar14 & (uint)local_a8.M[2][1]) +
            fVar21 * (float)(uVar14 & (uint)local_a8.M[1][1]) +
           fVar20 * (float)(uVar14 & (uint)local_a8.M[0][1])) * (float)(uVar14 & (uint)fVar23);
  fVar19 = (fVar22 * (float)(uVar15 & (uint)local_a8.M[2][2]) +
            fVar21 * (float)(uVar15 & (uint)local_a8.M[1][2]) +
           fVar20 * (float)(uVar15 & (uint)local_a8.M[0][2])) * (float)(uVar15 & (uint)fVar19);
  fVar22 = (fVar22 * 0.0 + fVar21 * 0.0 + fVar20 * 0.0) * 0.0;
  (this->MaxObb).m128_f32[0] = fVar17 + fVar24;
  (this->MaxObb).m128_f32[1] = fVar18 + fVar25;
  (this->MaxObb).m128_f32[2] = fVar19 + fVar26;
  (this->MaxObb).m128_f32[3] = fVar22 + 0.0;
  (this->MinObb).m128_f32[0] = fVar24 - fVar17;
  (this->MinObb).m128_f32[1] = fVar25 - fVar18;
  (this->MinObb).m128_f32[2] = fVar26 - fVar19;
  (this->MinObb).m128_f32[3] = 0.0 - fVar22;
  auVar16._12_4_ = 0;
  auVar16._0_12_ = (undefined1  [12])TVar9;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar16);
  fVar19 = auVar16._0_4_;
  fVar22 = auVar16._4_4_;
  fVar17 = auVar16._8_4_;
  fVar18 = auVar16._12_4_;
  (this->XAxis).m128_f32[0] = fVar19 * local_a8.M[0][0];
  (this->XAxis).m128_f32[1] = fVar22 * local_a8.M[0][1];
  (this->XAxis).m128_f32[2] = fVar17 * local_a8.M[0][2];
  (this->XAxis).m128_f32[3] = fVar18 * 0.0;
  (this->YAxis).m128_f32[0] = fVar19 * local_a8.M[1][0];
  (this->YAxis).m128_f32[1] = fVar22 * local_a8.M[1][1];
  (this->YAxis).m128_f32[2] = fVar17 * local_a8.M[1][2];
  (this->YAxis).m128_f32[3] = fVar18 * 0.0;
  (this->ZAxis).m128_f32[0] = fVar19 * local_a8.M[2][0];
  (this->ZAxis).m128_f32[1] = fVar22 * local_a8.M[2][1];
  (this->ZAxis).m128_f32[2] = fVar17 * local_a8.M[2][2];
  (this->ZAxis).m128_f32[3] = fVar18 * 0.0;
  return this;
}

// IntersectAABB @ 143c0abb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::Private::FOBBVectorized::IntersectAABB(FOBBVectorized *this,FAABBVectorized *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar6 = (param_1->Max).m128_f32[0];
  fVar9 = (param_1->Max).m128_f32[1];
  fVar10 = (param_1->Max).m128_f32[2];
  fVar8 = (param_1->Min).m128_f32[0];
  fVar11 = (param_1->Min).m128_f32[1];
  fVar3 = (param_1->Min).m128_f32[2];
  auVar7._4_4_ = -(uint)((this->MaxObb).m128_f32[1] < fVar11);
  auVar7._0_4_ = -(uint)((this->MaxObb).m128_f32[0] < fVar8);
  auVar7._8_4_ = -(uint)((this->MaxObb).m128_f32[2] < fVar3);
  auVar7._12_4_ = -(uint)((this->MaxObb).m128_f32[3] < (param_1->Min).m128_f32[3]);
  auVar1._4_4_ = -(uint)(fVar9 < (this->MinObb).m128_f32[1]);
  auVar1._0_4_ = -(uint)(fVar6 < (this->MinObb).m128_f32[0]);
  auVar1._8_4_ = -(uint)(fVar10 < (this->MinObb).m128_f32[2]);
  auVar1._12_4_ = -(uint)((param_1->Max).m128_f32[3] < (this->MinObb).m128_f32[3]);
  iVar4 = movmskps(in_EAX,auVar7 | auVar1);
  if (iVar4 != 0) {
    return false;
  }
  fVar12 = (fVar6 - fVar8) * GlobalVectorConstants::FloatOneHalf.m128_f32[0];
  fVar13 = (fVar9 - fVar11) * GlobalVectorConstants::FloatOneHalf.m128_f32[1];
  fVar14 = (fVar10 - fVar3) * GlobalVectorConstants::FloatOneHalf.m128_f32[2];
  fVar8 = (fVar8 + fVar6) * GlobalVectorConstants::FloatOneHalf.m128_f32[0] -
          (this->Position).m128_f32[0];
  fVar9 = (fVar11 + fVar9) * GlobalVectorConstants::FloatOneHalf.m128_f32[1] -
          (this->Position).m128_f32[1];
  fVar10 = (fVar3 + fVar10) * GlobalVectorConstants::FloatOneHalf.m128_f32[2] -
           (this->Position).m128_f32[2];
  fVar11 = (this->ZAxis).m128_f32[1] * fVar9 + (this->ZAxis).m128_f32[0] * fVar8 +
           (this->ZAxis).m128_f32[2] * fVar10;
  fVar6 = (float)((uint)(this->ZAxis).m128_f32[1] & _UNK_15061cc74) * fVar13 +
          (float)((uint)(this->ZAxis).m128_f32[0] & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar12
          + (float)((uint)(this->ZAxis).m128_f32[2] & _UNK_15061cc78) * fVar14;
  auVar2._4_4_ = -(uint)((this->HalfExtents).m128_f32[1] <
                        (float)((uint)((this->YAxis).m128_f32[1] * fVar9 +
                                       (this->YAxis).m128_f32[0] * fVar8 +
                                      (this->YAxis).m128_f32[2] * fVar10) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff) -
                        ((float)((uint)(this->YAxis).m128_f32[1] & _UNK_15061cc74) * fVar13 +
                         (float)((uint)(this->YAxis).m128_f32[0] &
                                __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar12 +
                        (float)((uint)(this->YAxis).m128_f32[2] & _UNK_15061cc78) * fVar14));
  auVar2._0_4_ = -(uint)((this->HalfExtents).m128_f32[0] <
                        (float)((uint)((this->XAxis).m128_f32[1] * fVar9 +
                                       (this->XAxis).m128_f32[0] * fVar8 +
                                      (this->XAxis).m128_f32[2] * fVar10) &
                               __xmm_7fffffff7fffffff7fffffff7fffffff) -
                        ((float)(_UNK_15061cc74 & (this->XAxis).m128_u32[1]) * fVar13 +
                         (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (this->XAxis).m128_u32[0])
                         * fVar12 + (float)(_UNK_15061cc78 & (this->XAxis).m128_u32[2]) * fVar14));
  auVar2._8_4_ = -(uint)((this->HalfExtents).m128_f32[2] <
                        (float)((uint)fVar11 & __xmm_7fffffff7fffffff7fffffff7fffffff) - fVar6);
  auVar2._12_4_ =
       -(uint)((this->HalfExtents).m128_f32[3] < (float)((uint)fVar11 & _UNK_15061cc74) - fVar6);
  uVar5 = movmskps(0,auVar2);
  return (uVar5 & 7) == 0;
}

