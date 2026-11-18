// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// FBoxSimd @ 143a02ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoxSimd * __thiscall
Chaos::FBoxSimd::FBoxSimd(FBoxSimd *this,TRigidTransform<double,3> *param_1,TBox<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  __m128 _Var4;
  double dVar5;
  double dVar6;
  __m128 _Var7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var24;
  float fVar25;
  double dVar26;
  float fVar32;
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar27;
  __m128 _Var31;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar40;
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auStack_168 [32];
  TQuat<float> local_148 [3];
  double local_118;
  TMatrix<float> local_108;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_168;
  auVar17 = *(undefined1 (*) [16])param_1;
  auVar16 = *(undefined1 (*) [16])&param_1->field_0x10;
  local_c8 = *(undefined8 *)&param_1->field_0x40;
  uStack_c0 = *(undefined8 *)&param_1->field_0x48;
  local_b8 = *(undefined8 *)&param_1->field_0x50;
  uStack_b0 = *(undefined8 *)&param_1->field_0x58;
  dVar14 = (*(double *)&(param_2->AABB).MMax - *(double *)&(param_2->AABB).MMin) *
           __real_3fe0000000000000;
  dVar13 = (*(double *)&(param_2->AABB).MMax.field_0x8 - *(double *)&(param_2->AABB).MMin.field_0x8)
           * __real_3fe0000000000000;
  dVar12 = (*(double *)&(param_2->AABB).MMax.field_0x10 -
           *(double *)&(param_2->AABB).MMin.field_0x10) * __real_3fe0000000000000;
  dVar6 = dVar14 + *(double *)&(param_2->AABB).MMin;
  auVar39 = blendpd(auVar17,auVar16,2);
  dVar10 = auVar16._0_8_;
  dVar5 = auVar17._8_8_;
  local_118 = dVar12 + *(double *)&(param_2->AABB).MMin.field_0x10;
  dVar11 = auVar16._8_8_;
  dVar26 = dVar13 + *(double *)&(param_2->AABB).MMin.field_0x8;
  uVar37 = (undefined4)((ulonglong)dVar26 >> 0x20);
  auVar28._8_4_ = SUB84(dVar26,0);
  auVar28._0_8_ = dVar6;
  auVar28._12_4_ = uVar37;
  auVar16._8_4_ = SUB84(dVar26,0);
  auVar16._0_8_ = dVar6;
  auVar16._12_4_ = uVar37;
  dVar2 = auVar17._0_8_;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_118;
  auVar17 = blendpd(auVar16,auVar17,2);
  auVar29._0_8_ = auVar28._8_8_ * dVar2 - dVar5 * dVar6;
  auVar29._8_8_ = local_118 * dVar5 - dVar10 * dVar26;
  auVar18._0_8_ = auVar17._0_8_ * dVar10 - local_118 * auVar39._0_8_;
  auVar18._8_8_ = auVar17._8_8_ * dVar11 - auVar39._8_8_ * 0.0;
  auVar17 = blendpd(auVar29,auVar18,2);
  dVar8 = auVar29._8_8_ + auVar29._8_8_;
  dVar9 = auVar18._0_8_ + auVar18._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar30._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar30._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar22._8_4_ = SUB84(dVar9,0);
  auVar22._0_8_ = dVar8;
  auVar22._12_4_ = uVar37;
  auVar19._8_4_ = SUB84(dVar9,0);
  auVar19._0_8_ = dVar8;
  auVar19._12_4_ = uVar37;
  auVar17 = blendpd(auVar19,auVar30,2);
  auVar23._0_8_ = auVar22._8_8_ * dVar2 - dVar8 * dVar5;
  auVar23._8_8_ = auVar30._0_8_ * dVar5 - dVar9 * dVar10;
  auVar20._0_8_ = auVar17._0_8_ * dVar10 - auVar30._0_8_ * auVar39._0_8_;
  auVar20._8_8_ = auVar17._8_8_ * dVar11 - auVar30._8_8_ * auVar39._8_8_;
  dVar1 = *(double *)&param_1->field_0x20;
  dVar3 = *(double *)&param_1->field_0x28;
  local_148[0].X = (float)dVar2;
  dVar27 = auVar30._0_8_ * dVar11 + local_118;
  auVar17 = blendpd(auVar23,auVar20,2);
  dVar2 = *(double *)&param_1->field_0x30;
  local_148[0].Y = (float)dVar5;
  local_148[0].Z = (float)dVar10;
  local_148[0].W = (float)dVar11;
  local_108.M[0][0] = 0.0;
  local_108.M[0][1] = 0.0;
  local_108.M[0][2] = 0.0;
  local_108.M[0][3] = 0.0;
  local_108.M[1][0] = 0.0;
  local_108.M[1][1] = 0.0;
  local_108.M[1][2] = 0.0;
  local_108.M[1][3] = 0.0;
  local_108.M[2][0] = 0.0;
  local_108.M[2][1] = 0.0;
  local_108.M[2][2] = 0.0;
  local_108.M[2][3] = 0.0;
  local_108.M[3][0] = 0.0;
  local_108.M[3][1] = 0.0;
  local_108.M[3][2] = 0.0;
  local_108.M[3][3] = 0.0;
  UE::Math::TQuat<float>::ToMatrix(local_148,&local_108);
  _Var7.m128_f32[2] = local_108.M[0][2];
  _Var7._0_4_ = local_108.M[0][0];
  _Var7._4_4_ = local_108.M[0][1];
  _Var4.m128_f32[2] = local_108.M[1][2];
  _Var4._0_4_ = local_108.M[1][0];
  _Var4._4_4_ = local_108.M[1][1];
  _Var31.m128_f32[2] = local_108.M[2][2];
  _Var31._0_4_ = local_108.M[2][0];
  _Var31._4_4_ = local_108.M[2][1];
  _Var31.m128_f32[3] = 0.0;
  _Var4.m128_f32[3] = 0.0;
  this->YAxis = _Var4;
  this->ZAxis = _Var31;
  _Var24._0_4_ = (float)(dVar8 * dVar11 + dVar6 + auVar23._8_8_ + dVar1);
  _Var24._4_4_ = (float)(dVar9 * dVar11 + dVar26 + auVar20._0_8_ + dVar3);
  _Var7.m128_f32[3] = 0.0;
  this->XAxis = _Var7;
  _Var24.m128_f32[2] = (float)(dVar27 + auVar17._0_8_ + dVar2);
  _Var24.m128_f32[3] = 0.0;
  this->Position = _Var24;
  fVar15 = (float)dVar13;
  fVar21 = (float)dVar12;
  fVar41 = (float)dVar14;
  (this->XHalfExtent).m128_f32[0] = fVar41;
  (this->XHalfExtent).m128_f32[1] = fVar41;
  (this->XHalfExtent).m128_f32[2] = fVar41;
  (this->XHalfExtent).m128_f32[3] = fVar41;
  fVar38 = fVar41 * local_108.M[0][0];
  fVar40 = fVar41 * local_108.M[0][1];
  local_108.M[0][2] = fVar41 * local_108.M[0][2];
  fVar41 = fVar41 * 0.0;
  (this->YHalfExtent).m128_f32[0] = fVar15;
  (this->YHalfExtent).m128_f32[1] = fVar15;
  (this->YHalfExtent).m128_f32[2] = fVar15;
  (this->YHalfExtent).m128_f32[3] = fVar15;
  fVar35 = fVar15 * local_108.M[1][0];
  fVar36 = fVar15 * local_108.M[1][1];
  local_108.M[1][2] = fVar15 * local_108.M[1][2];
  fVar15 = fVar15 * 0.0;
  (this->XAxisHalfExtent).m128_f32[0] = fVar38;
  (this->XAxisHalfExtent).m128_f32[1] = fVar40;
  (this->XAxisHalfExtent).m128_f32[2] = local_108.M[0][2];
  (this->XAxisHalfExtent).m128_f32[3] = fVar41;
  (this->ZHalfExtent).m128_f32[0] = fVar21;
  (this->ZHalfExtent).m128_f32[1] = fVar21;
  (this->ZHalfExtent).m128_f32[2] = fVar21;
  (this->ZHalfExtent).m128_f32[3] = fVar21;
  fVar42 = fVar21 * local_108.M[2][0];
  fVar43 = fVar21 * local_108.M[2][1];
  local_108.M[2][2] = fVar21 * local_108.M[2][2];
  fVar21 = fVar21 * 0.0;
  (this->YAxisHalfExtent).m128_f32[0] = fVar35;
  (this->YAxisHalfExtent).m128_f32[1] = fVar36;
  (this->YAxisHalfExtent).m128_f32[2] = local_108.M[1][2];
  (this->YAxisHalfExtent).m128_f32[3] = fVar15;
  (this->ZAxisHalfExtent).m128_f32[0] = fVar42;
  (this->ZAxisHalfExtent).m128_f32[1] = fVar43;
  (this->ZAxisHalfExtent).m128_f32[2] = local_108.M[2][2];
  (this->ZAxisHalfExtent).m128_f32[3] = fVar21;
  fVar25 = fVar35 + fVar38 + fVar42;
  fVar32 = fVar36 + fVar40 + fVar43;
  fVar33 = local_108.M[1][2] + local_108.M[0][2] + local_108.M[2][2];
  fVar34 = fVar15 + fVar41 + fVar21;
  this->Edges[0].m128_f32[0] = ((0.0 - fVar38) + fVar35 + fVar42) - fVar25;
  this->Edges[0].m128_f32[1] = ((0.0 - fVar40) + fVar36 + fVar43) - fVar32;
  this->Edges[0].m128_f32[2] =
       ((0.0 - local_108.M[0][2]) + local_108.M[1][2] + local_108.M[2][2]) - fVar33;
  this->Edges[0].m128_f32[3] = ((0.0 - fVar41) + fVar15 + fVar21) - fVar34;
  this->Edges[1].m128_f32[0] = ((0.0 - fVar35) + fVar38 + fVar42) - fVar25;
  *(float *)((longlong)this->Edges + 0x14) = ((0.0 - fVar36) + fVar40 + fVar43) - fVar32;
  *(float *)((longlong)this->Edges + 0x18) =
       ((0.0 - local_108.M[1][2]) + local_108.M[0][2] + local_108.M[2][2]) - fVar33;
  *(float *)((longlong)this->Edges + 0x1c) = ((0.0 - fVar15) + fVar41 + fVar21) - fVar34;
  this->Edges[2].m128_f32[0] = ((0.0 - fVar42) + fVar35 + fVar38) - fVar25;
  *(float *)((longlong)this->Edges + 0x24) = ((0.0 - fVar43) + fVar36 + fVar40) - fVar32;
  *(float *)((longlong)this->Edges + 0x28) =
       ((0.0 - local_108.M[2][2]) + local_108.M[1][2] + local_108.M[0][2]) - fVar33;
  *(float *)((longlong)this->Edges + 0x2c) = ((0.0 - fVar21) + fVar15 + fVar41) - fVar34;
  return this;
}

// FBoxSimd @ 143a03250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoxSimd * __thiscall
Chaos::FBoxSimd::FBoxSimd
          (FBoxSimd *this,TRigidTransform<double,3> *param_1,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TBox<double,3> *pTVar4;
  __m128 _Var5;
  __m128 _Var6;
  double dVar7;
  __m128 _Var8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  __m128 _Var25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  float fVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_188 [32];
  TQuat<float> local_168 [2];
  double local_148;
  double local_140;
  double local_138;
  double local_120;
  TMatrix<float> local_118;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  dVar14 = __real_3fe0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_188;
  pTVar4 = (param_2->MObject).Reference;
  auVar17 = *(undefined1 (*) [16])&param_1->field_0x10;
  auVar18 = *(undefined1 (*) [16])param_1;
  local_d8 = *(undefined8 *)&param_1->field_0x40;
  uStack_d0 = *(undefined8 *)&param_1->field_0x48;
  local_c8 = *(undefined8 *)&param_1->field_0x50;
  uStack_c0 = *(undefined8 *)&param_1->field_0x58;
  fVar15 = *(float *)&param_2->_padding_;
  fVar26 = *(float *)&param_2->_padding_;
  dVar1 = *(double *)&(pTVar4->AABB).MMin;
  local_148 = *(double *)&(pTVar4->AABB).MMax - dVar1;
  local_140 = (*(double *)&(pTVar4->AABB).MMax.field_0x8 - *(double *)&(pTVar4->AABB).MMin.field_0x8
              ) * __real_3fe0000000000000;
  local_138 = (*(double *)&(pTVar4->AABB).MMax.field_0x10 -
              *(double *)&(pTVar4->AABB).MMin.field_0x10) * __real_3fe0000000000000;
  dVar38 = auVar17._0_8_;
  dVar2 = auVar18._8_8_;
  dVar13 = (double)*(float *)((longlong)&param_2->_padding_ + 4);
  dVar22 = (local_140 + *(double *)&(pTVar4->AABB).MMin.field_0x8) * dVar13;
  local_120 = (local_138 + *(double *)&(pTVar4->AABB).MMin.field_0x10) * (double)fVar26;
  auVar32 = blendpd(auVar18,auVar17,2);
  dVar7 = (local_148 * __real_3fe0000000000000 + dVar1) * (double)fVar15;
  dVar12 = auVar17._8_8_;
  uVar30 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar39._8_4_ = SUB84(dVar22,0);
  auVar39._0_8_ = dVar7;
  auVar39._12_4_ = uVar30;
  auVar16._8_4_ = SUB84(dVar22,0);
  auVar16._0_8_ = dVar7;
  auVar16._12_4_ = uVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_120;
  auVar17 = blendpd(auVar16,auVar17,2);
  dVar11 = auVar18._0_8_;
  auVar40._0_8_ = auVar39._8_8_ * dVar11 - dVar2 * dVar7;
  auVar40._8_8_ = local_120 * dVar2 - dVar38 * dVar22;
  auVar18._0_8_ = auVar17._0_8_ * dVar38 - auVar32._0_8_ * local_120;
  auVar18._8_8_ = auVar17._8_8_ * dVar12 - auVar32._8_8_ * 0.0;
  dVar9 = auVar40._8_8_ + auVar40._8_8_;
  dVar10 = auVar18._0_8_ + auVar18._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar17 = blendpd(auVar40,auVar18,2);
  auVar23._8_4_ = SUB84(dVar10,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar30;
  auVar19._8_4_ = SUB84(dVar10,0);
  auVar19._0_8_ = dVar9;
  auVar19._12_4_ = uVar30;
  auVar41._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar41._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar17 = blendpd(auVar19,auVar41,2);
  auVar24._0_8_ = auVar23._8_8_ * dVar11 - dVar9 * dVar2;
  auVar24._8_8_ = auVar41._0_8_ * dVar2 - dVar10 * dVar38;
  auVar20._0_8_ = auVar17._0_8_ * dVar38 - auVar41._0_8_ * auVar32._0_8_;
  auVar20._8_8_ = auVar17._8_8_ * dVar12 - auVar41._8_8_ * auVar32._8_8_;
  dVar1 = *(double *)&param_1->field_0x20;
  dVar3 = *(double *)&param_1->field_0x28;
  local_168[0].X = (float)dVar11;
  auVar17 = blendpd(auVar24,auVar20,2);
  local_168[0].Y = (float)dVar2;
  local_168[0].Z = (float)dVar38;
  dVar38 = auVar41._0_8_ * dVar12 + local_120;
  dVar2 = *(double *)&param_1->field_0x30;
  local_168[0].W = (float)dVar12;
  local_118.M[0][0] = 0.0;
  local_118.M[0][1] = 0.0;
  local_118.M[0][2] = 0.0;
  local_118.M[0][3] = 0.0;
  local_118.M[1][0] = 0.0;
  local_118.M[1][1] = 0.0;
  local_118.M[1][2] = 0.0;
  local_118.M[1][3] = 0.0;
  local_118.M[2][0] = 0.0;
  local_118.M[2][1] = 0.0;
  local_118.M[2][2] = 0.0;
  local_118.M[2][3] = 0.0;
  local_118.M[3][0] = 0.0;
  local_118.M[3][1] = 0.0;
  local_118.M[3][2] = 0.0;
  local_118.M[3][3] = 0.0;
  UE::Math::TQuat<float>::ToMatrix(local_168,&local_118);
  dVar11 = __real_3e45798ee0000000;
  _Var8.m128_f32[2] = local_118.M[0][2];
  _Var8._0_4_ = local_118.M[0][0];
  _Var8._4_4_ = local_118.M[0][1];
  _Var6.m128_f32[2] = local_118.M[1][2];
  _Var6._0_4_ = local_118.M[1][0];
  _Var6._4_4_ = local_118.M[1][1];
  _Var5.m128_f32[2] = local_118.M[2][2];
  _Var5._0_4_ = local_118.M[2][0];
  _Var5._4_4_ = local_118.M[2][1];
  _Var25._0_4_ = (float)(dVar9 * dVar12 + dVar7 + auVar24._8_8_ + dVar1);
  _Var25._4_4_ = (float)(dVar10 * dVar12 + dVar22 + auVar20._0_8_ + dVar3);
  dVar1 = (double)fVar15 + __real_3e45798ee0000000;
  _Var25.m128_f32[2] = (float)(dVar38 + auVar17._0_8_ + dVar2);
  _Var25.m128_f32[3] = 0.0;
  dVar13 = dVar13 + __real_3e45798ee0000000;
  _Var6.m128_f32[3] = 0.0;
  this->YAxis = _Var6;
  _Var5.m128_f32[3] = 0.0;
  this->ZAxis = _Var5;
  this->Position = _Var25;
  _Var8.m128_f32[3] = 0.0;
  this->XAxis = _Var8;
  fVar21 = (float)(dVar13 * local_140);
  fVar36 = (float)(dVar1 * local_148 * dVar14);
  fVar15 = (float)(((double)fVar26 + dVar11) * local_138);
  (this->YHalfExtent).m128_f32[0] = fVar21;
  (this->YHalfExtent).m128_f32[1] = fVar21;
  (this->YHalfExtent).m128_f32[2] = fVar21;
  (this->YHalfExtent).m128_f32[3] = fVar21;
  fVar31 = fVar21 * local_118.M[1][0];
  fVar33 = fVar21 * local_118.M[1][1];
  local_118.M[1][2] = fVar21 * local_118.M[1][2];
  fVar21 = fVar21 * 0.0;
  (this->XHalfExtent).m128_f32[0] = fVar36;
  (this->XHalfExtent).m128_f32[1] = fVar36;
  (this->XHalfExtent).m128_f32[2] = fVar36;
  (this->XHalfExtent).m128_f32[3] = fVar36;
  fVar34 = fVar36 * local_118.M[0][0];
  fVar35 = fVar36 * local_118.M[0][1];
  local_118.M[0][2] = fVar36 * local_118.M[0][2];
  fVar36 = fVar36 * 0.0;
  (this->ZHalfExtent).m128_f32[0] = fVar15;
  (this->ZHalfExtent).m128_f32[1] = fVar15;
  (this->ZHalfExtent).m128_f32[2] = fVar15;
  (this->ZHalfExtent).m128_f32[3] = fVar15;
  fVar37 = fVar15 * local_118.M[2][0];
  fVar42 = fVar15 * local_118.M[2][1];
  local_118.M[2][2] = fVar15 * local_118.M[2][2];
  fVar15 = fVar15 * 0.0;
  (this->XAxisHalfExtent).m128_f32[0] = fVar34;
  (this->XAxisHalfExtent).m128_f32[1] = fVar35;
  (this->XAxisHalfExtent).m128_f32[2] = local_118.M[0][2];
  (this->XAxisHalfExtent).m128_f32[3] = fVar36;
  (this->YAxisHalfExtent).m128_f32[0] = fVar31;
  (this->YAxisHalfExtent).m128_f32[1] = fVar33;
  (this->YAxisHalfExtent).m128_f32[2] = local_118.M[1][2];
  (this->YAxisHalfExtent).m128_f32[3] = fVar21;
  (this->ZAxisHalfExtent).m128_f32[0] = fVar37;
  (this->ZAxisHalfExtent).m128_f32[1] = fVar42;
  (this->ZAxisHalfExtent).m128_f32[2] = local_118.M[2][2];
  (this->ZAxisHalfExtent).m128_f32[3] = fVar15;
  fVar26 = fVar31 + fVar34 + fVar37;
  fVar27 = fVar33 + fVar35 + fVar42;
  fVar28 = local_118.M[1][2] + local_118.M[0][2] + local_118.M[2][2];
  fVar29 = fVar21 + fVar36 + fVar15;
  this->Edges[0].m128_f32[0] = ((0.0 - fVar34) + fVar31 + fVar37) - fVar26;
  this->Edges[0].m128_f32[1] = ((0.0 - fVar35) + fVar33 + fVar42) - fVar27;
  this->Edges[0].m128_f32[2] =
       ((0.0 - local_118.M[0][2]) + local_118.M[1][2] + local_118.M[2][2]) - fVar28;
  this->Edges[0].m128_f32[3] = ((0.0 - fVar36) + fVar21 + fVar15) - fVar29;
  this->Edges[1].m128_f32[0] = ((0.0 - fVar31) + fVar34 + fVar37) - fVar26;
  *(float *)((longlong)this->Edges + 0x14) = ((0.0 - fVar33) + fVar35 + fVar42) - fVar27;
  *(float *)((longlong)this->Edges + 0x18) =
       ((0.0 - local_118.M[1][2]) + local_118.M[0][2] + local_118.M[2][2]) - fVar28;
  *(float *)((longlong)this->Edges + 0x1c) = ((0.0 - fVar21) + fVar36 + fVar15) - fVar29;
  this->Edges[2].m128_f32[0] = ((0.0 - fVar37) + fVar31 + fVar34) - fVar26;
  *(float *)((longlong)this->Edges + 0x24) = ((0.0 - fVar42) + fVar33 + fVar35) - fVar27;
  *(float *)((longlong)this->Edges + 0x28) =
       ((0.0 - local_118.M[2][2]) + local_118.M[1][2] + local_118.M[0][2]) - fVar28;
  *(float *)((longlong)this->Edges + 0x2c) = ((0.0 - fVar15) + fVar21 + fVar36) - fVar29;
  return this;
}

// FBoxSimd @ 143a03630

FBoxSimd * __thiscall Chaos::FBoxSimd::FBoxSimd(FBoxSimd *this)

{
  return this;
}

// OverlapTriangle @ 143a10370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FBoxSimd::OverlapTriangle(FBoxSimd *this,__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  __m128 *p_Var7;
  __m128 *p_Var8;
  float fVar9;
  float fVar23;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  fVar24 = (this->XAxis).m128_f32[0];
  fVar25 = (this->XAxis).m128_f32[1];
  fVar30 = (this->XAxis).m128_f32[2];
  fVar1 = (this->Position).m128_f32[0];
  fVar2 = (this->Position).m128_f32[1];
  fVar3 = (this->Position).m128_f32[2];
  fVar47 = param_1->m128_f32[0];
  fVar29 = param_1->m128_f32[1];
  fVar33 = param_1->m128_f32[2];
  fVar46 = param_2->m128_f32[0];
  fVar26 = param_2->m128_f32[1];
  fVar32 = param_2->m128_f32[2];
  fVar9 = param_3->m128_f32[0];
  fVar36 = param_3->m128_f32[1];
  fVar23 = param_3->m128_f32[2];
  fVar49 = fVar47 - fVar1;
  fVar51 = fVar29 - fVar2;
  fVar53 = fVar33 - fVar3;
  fVar55 = fVar46 - fVar1;
  fVar56 = fVar26 - fVar2;
  fVar57 = fVar32 - fVar3;
  fVar58 = fVar9 - fVar1;
  fVar59 = fVar36 - fVar2;
  fVar60 = fVar23 - fVar3;
  fVar48 = fVar25 * fVar51 + fVar24 * fVar49 + fVar30 * fVar53;
  fVar39 = fVar25 * fVar56 + fVar24 * fVar55 + fVar30 * fVar57;
  fVar24 = fVar25 * fVar59 + fVar24 * fVar58 + fVar30 * fVar60;
  fVar25 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar48);
  fVar30 = (float)(_UNK_15061cc74 & (uint)fVar39);
  fVar34 = (float)(_UNK_15061cc78 & (uint)fVar24);
  fVar37 = (float)(_UNK_15061cc7c & (uint)fVar24);
  auVar19._4_4_ = -(uint)(fVar30 == fVar39);
  auVar19._0_4_ = -(uint)(fVar25 == fVar48);
  auVar19._8_4_ = -(uint)(fVar34 == fVar24);
  auVar19._12_4_ = -(uint)(fVar37 == fVar24);
  iVar4 = movmskps((int)&stack0x00000000,auVar19);
  if (((iVar4 != 0xf) &&
      (auVar10._4_4_ = -(uint)(0.0 - fVar30 == fVar39),
      auVar10._0_4_ = -(uint)(0.0 - fVar25 == fVar48),
      auVar10._8_4_ = -(uint)(0.0 - fVar34 == fVar24),
      auVar10._12_4_ = -(uint)(0.0 - fVar37 == fVar24), iVar4 = movmskps(iVar4,auVar10),
      iVar4 != 0xf)) ||
     (auVar11._4_4_ = -(uint)((this->XHalfExtent).m128_f32[1] < fVar30),
     auVar11._0_4_ = -(uint)((this->XHalfExtent).m128_f32[0] < fVar25),
     auVar11._8_4_ = -(uint)((this->XHalfExtent).m128_f32[2] < fVar34),
     auVar11._12_4_ = -(uint)((this->XHalfExtent).m128_f32[3] < fVar37),
     iVar4 = movmskps(iVar4,auVar11), iVar4 != 0xf)) {
    fVar24 = (this->YAxis).m128_f32[0];
    fVar25 = (this->YAxis).m128_f32[1];
    fVar30 = (this->YAxis).m128_f32[2];
    fVar48 = fVar25 * fVar51 + fVar24 * fVar49 + fVar30 * fVar53;
    fVar39 = fVar25 * fVar56 + fVar24 * fVar55 + fVar30 * fVar57;
    fVar24 = fVar25 * fVar59 + fVar24 * fVar58 + fVar30 * fVar60;
    fVar25 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar48);
    fVar30 = (float)(_UNK_15061cc74 & (uint)fVar39);
    fVar34 = (float)(_UNK_15061cc78 & (uint)fVar24);
    fVar37 = (float)(_UNK_15061cc7c & (uint)fVar24);
    auVar12._4_4_ = -(uint)(fVar30 == fVar39);
    auVar12._0_4_ = -(uint)(fVar25 == fVar48);
    auVar12._8_4_ = -(uint)(fVar34 == fVar24);
    auVar12._12_4_ = -(uint)(fVar37 == fVar24);
    iVar4 = movmskps(iVar4,auVar12);
    if (((iVar4 != 0xf) &&
        (auVar13._4_4_ = -(uint)(0.0 - fVar30 == fVar39),
        auVar13._0_4_ = -(uint)(0.0 - fVar25 == fVar48),
        auVar13._8_4_ = -(uint)(0.0 - fVar34 == fVar24),
        auVar13._12_4_ = -(uint)(0.0 - fVar37 == fVar24), iVar4 = movmskps(iVar4,auVar13),
        iVar4 != 0xf)) ||
       (auVar14._4_4_ = -(uint)((this->YHalfExtent).m128_f32[1] < fVar30),
       auVar14._0_4_ = -(uint)((this->YHalfExtent).m128_f32[0] < fVar25),
       auVar14._8_4_ = -(uint)((this->YHalfExtent).m128_f32[2] < fVar34),
       auVar14._12_4_ = -(uint)((this->YHalfExtent).m128_f32[3] < fVar37),
       iVar4 = movmskps(iVar4,auVar14), iVar4 != 0xf)) {
      fVar24 = (this->ZAxis).m128_f32[0];
      fVar25 = (this->ZAxis).m128_f32[1];
      fVar30 = (this->ZAxis).m128_f32[2];
      fVar48 = fVar25 * fVar51 + fVar24 * fVar49 + fVar30 * fVar53;
      fVar39 = fVar25 * fVar56 + fVar24 * fVar55 + fVar30 * fVar57;
      fVar24 = fVar25 * fVar59 + fVar24 * fVar58 + fVar30 * fVar60;
      fVar25 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar48);
      fVar30 = (float)(_UNK_15061cc74 & (uint)fVar39);
      fVar34 = (float)(_UNK_15061cc78 & (uint)fVar24);
      fVar37 = (float)(_UNK_15061cc7c & (uint)fVar24);
      auVar15._4_4_ = -(uint)(fVar30 == fVar39);
      auVar15._0_4_ = -(uint)(fVar25 == fVar48);
      auVar15._8_4_ = -(uint)(fVar34 == fVar24);
      auVar15._12_4_ = -(uint)(fVar37 == fVar24);
      iVar4 = movmskps(iVar4,auVar15);
      if (((iVar4 != 0xf) &&
          (auVar16._4_4_ = -(uint)(0.0 - fVar30 == fVar39),
          auVar16._0_4_ = -(uint)(0.0 - fVar25 == fVar48),
          auVar16._8_4_ = -(uint)(0.0 - fVar34 == fVar24),
          auVar16._12_4_ = -(uint)(0.0 - fVar37 == fVar24), iVar4 = movmskps(iVar4,auVar16),
          iVar4 != 0xf)) ||
         (auVar17._4_4_ = -(uint)((this->ZHalfExtent).m128_f32[1] < fVar30),
         auVar17._0_4_ = -(uint)((this->ZHalfExtent).m128_f32[0] < fVar25),
         auVar17._8_4_ = -(uint)((this->ZHalfExtent).m128_f32[2] < fVar34),
         auVar17._12_4_ = -(uint)((this->ZHalfExtent).m128_f32[3] < fVar37),
         iVar4 = movmskps(iVar4,auVar17), iVar4 != 0xf)) {
        fVar58 = fVar9 - fVar46;
        fVar31 = fVar36 - fVar26;
        fVar35 = fVar23 - fVar32;
        fVar38 = param_3->m128_f32[3] - param_2->m128_f32[3];
        fVar24 = (this->YAxisHalfExtent).m128_f32[0];
        fVar25 = (this->YAxisHalfExtent).m128_f32[1];
        fVar30 = (this->YAxisHalfExtent).m128_f32[2];
        fVar48 = fVar47 - fVar9;
        fVar49 = fVar29 - fVar36;
        fVar53 = fVar33 - fVar23;
        fVar57 = param_1->m128_f32[3] - param_3->m128_f32[3];
        fVar50 = fVar46 - fVar47;
        fVar52 = fVar26 - fVar29;
        fVar54 = fVar32 - fVar33;
        fVar56 = param_2->m128_f32[3] - param_1->m128_f32[3];
        fVar40 = fVar31 * fVar50 - fVar52 * fVar58;
        fVar59 = fVar35 * fVar52 - fVar54 * fVar31;
        fVar43 = fVar58 * fVar54 - fVar50 * fVar35;
        fVar45 = fVar38 * fVar56 - fVar56 * fVar38;
        fVar34 = fVar43 * fVar43 + fVar59 * fVar59;
        fVar37 = fVar59 * fVar59 + fVar43 * fVar43;
        fVar39 = fVar45 * fVar45 + fVar40 * fVar40;
        fVar51 = fVar40 * fVar40 + fVar45 * fVar45;
        auVar18._0_4_ = fVar39 + fVar34;
        auVar18._4_4_ = fVar51 + fVar37;
        auVar18._8_4_ = fVar34 + fVar39;
        auVar18._12_4_ = fVar37 + fVar51;
        auVar19 = sqrtps(auVar18,auVar18);
        auVar19 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
        fVar59 = auVar19._0_4_ * fVar59;
        fVar43 = auVar19._4_4_ * fVar43;
        fVar40 = auVar19._8_4_ * fVar40;
        fVar45 = auVar19._12_4_ * fVar45;
        fVar34 = (this->XAxisHalfExtent).m128_f32[0];
        fVar37 = (this->XAxisHalfExtent).m128_f32[1];
        fVar39 = (this->XAxisHalfExtent).m128_f32[2];
        fVar9 = (fVar47 + fVar46 + fVar9) * ___xmm_3eaaaaab3eaaaaab3eaaaaab3eaaaaab;
        fVar51 = (fVar29 + fVar26 + fVar36) * _UNK_150af0124;
        fVar55 = (fVar33 + fVar32 + fVar23) * _UNK_150af0128;
        fVar41 = fVar43 * fVar50 - fVar52 * fVar59;
        fVar42 = fVar40 * fVar52 - fVar54 * fVar43;
        fVar44 = fVar59 * fVar54 - fVar50 * fVar40;
        fVar46 = fVar45 * fVar56 - fVar56 * fVar45;
        fVar46 = fVar46 * fVar46;
        fVar26 = fVar44 * fVar44 + fVar42 * fVar42;
        fVar32 = fVar42 * fVar42 + fVar44 * fVar44;
        fVar36 = fVar46 + fVar41 * fVar41;
        fVar46 = fVar41 * fVar41 + fVar46;
        auVar20._0_4_ = fVar36 + fVar26;
        auVar20._4_4_ = fVar46 + fVar32;
        auVar20._8_4_ = fVar26 + fVar36;
        auVar20._12_4_ = fVar32 + fVar46;
        auVar19 = sqrtps(auVar20,auVar20);
        auVar19 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
        fVar42 = auVar19._0_4_ * fVar42;
        fVar44 = auVar19._4_4_ * fVar44;
        fVar41 = auVar19._8_4_ * fVar41;
        fVar60 = fVar37 * fVar44 + fVar34 * fVar42 + fVar39 * fVar41;
        fVar27 = fVar25 * fVar44 + fVar24 * fVar42 + fVar30 * fVar41;
        fVar46 = (this->ZAxisHalfExtent).m128_f32[0];
        fVar26 = (this->ZAxisHalfExtent).m128_f32[1];
        fVar32 = (this->ZAxisHalfExtent).m128_f32[2];
        fVar61 = 0.0 - fVar34;
        fVar62 = 0.0 - fVar37;
        fVar63 = 0.0 - fVar39;
        fVar64 = 0.0 - fVar46;
        fVar65 = 0.0 - fVar26;
        fVar66 = 0.0 - fVar32;
        fVar28 = fVar26 * fVar44 + fVar46 * fVar42 + fVar32 * fVar41;
        fVar36 = 0.0 - fVar24;
        fVar23 = 0.0 - fVar25;
        fVar56 = 0.0 - fVar30;
        if ((((float)(~-(uint)(0.0 < fVar27) & (uint)fVar25 | (uint)fVar23 & -(uint)(0.0 < fVar27))
              + (float)(~-(uint)(0.0 < fVar60) & (uint)fVar37 | (uint)fVar62 & -(uint)(0.0 < fVar60)
                       ) +
              (float)((uint)fVar65 & -(uint)(0.0 < fVar28) | ~-(uint)(0.0 < fVar28) & (uint)fVar26)
             + fVar2) - fVar29) * fVar44 +
            (((float)(~-(uint)(0.0 < fVar27) & (uint)fVar24 | (uint)fVar36 & -(uint)(0.0 < fVar27))
              + (float)(~-(uint)(0.0 < fVar60) & (uint)fVar34 | (uint)fVar61 & -(uint)(0.0 < fVar60)
                       ) +
              (float)((uint)fVar64 & -(uint)(0.0 < fVar28) | ~-(uint)(0.0 < fVar28) & (uint)fVar46)
             + fVar1) - fVar47) * fVar42 +
            (((float)(~-(uint)(0.0 < fVar27) & (uint)fVar30 | (uint)fVar56 & -(uint)(0.0 < fVar27))
              + (float)(~-(uint)(0.0 < fVar60) & (uint)fVar39 | (uint)fVar63 & -(uint)(0.0 < fVar60)
                       ) +
              (float)((uint)fVar66 & -(uint)(0.0 < fVar28) | ~-(uint)(0.0 < fVar28) & (uint)fVar32)
             + fVar3) - fVar33) * fVar41 <= 0.0) {
          p_Var8 = this->Edges;
          lVar5 = 0;
          lVar6 = lVar5;
          p_Var7 = p_Var8;
          do {
            fVar27 = fVar52 * p_Var7->m128_f32[0] - p_Var7->m128_f32[1] * fVar50;
            fVar28 = fVar54 * p_Var7->m128_f32[1] - p_Var7->m128_f32[2] * fVar52;
            fVar41 = fVar50 * p_Var7->m128_f32[2] - p_Var7->m128_f32[0] * fVar54;
            fVar60 = (fVar29 - fVar51) * fVar41 + (fVar47 - fVar9) * fVar28 +
                     (fVar33 - fVar55) * fVar27;
            fVar42 = (float)((uint)(0.0 - fVar28) & -(uint)(fVar60 < 0.0) |
                            ~-(uint)(fVar60 < 0.0) & (uint)fVar28);
            fVar41 = (float)((uint)(0.0 - fVar41) & -(uint)(fVar60 < 0.0) |
                            ~-(uint)(fVar60 < 0.0) & (uint)fVar41);
            fVar44 = (float)((uint)(0.0 - fVar27) & -(uint)(fVar60 < 0.0) |
                            ~-(uint)(fVar60 < 0.0) & (uint)fVar27);
            fVar60 = fVar37 * fVar41 + fVar34 * fVar42 + fVar39 * fVar44;
            fVar27 = fVar25 * fVar41 + fVar24 * fVar42 + fVar30 * fVar44;
            fVar28 = fVar26 * fVar41 + fVar46 * fVar42 + fVar32 * fVar44;
            if (__real_38d1b717 <
                (((float)(-(uint)(0.0 < fVar27) & (uint)fVar23 |
                         ~-(uint)(0.0 < fVar27) & (uint)fVar25) +
                  (float)(-(uint)(0.0 < fVar60) & (uint)fVar62 |
                         ~-(uint)(0.0 < fVar60) & (uint)fVar37) +
                  (float)(-(uint)(0.0 < fVar28) & (uint)fVar65 |
                         ~-(uint)(0.0 < fVar28) & (uint)fVar26) + fVar2) - param_1->m128_f32[1]) *
                fVar41 + (((float)(-(uint)(0.0 < fVar27) & (uint)fVar36 |
                                  ~-(uint)(0.0 < fVar27) & (uint)fVar24) +
                           (float)(-(uint)(0.0 < fVar60) & (uint)fVar61 |
                                  ~-(uint)(0.0 < fVar60) & (uint)fVar34) +
                           (float)(-(uint)(0.0 < fVar28) & (uint)fVar64 |
                                  ~-(uint)(0.0 < fVar28) & (uint)fVar46) + fVar1) -
                         param_1->m128_f32[0]) * fVar42 +
                (((float)(-(uint)(0.0 < fVar27) & (uint)fVar56 |
                         ~-(uint)(0.0 < fVar27) & (uint)fVar30) +
                  (float)(-(uint)(0.0 < fVar60) & (uint)fVar63 |
                         ~-(uint)(0.0 < fVar60) & (uint)fVar39) +
                  (float)(-(uint)(0.0 < fVar28) & (uint)fVar66 |
                         ~-(uint)(0.0 < fVar28) & (uint)fVar32) + fVar3) - param_1->m128_f32[2]) *
                fVar44) {
              return false;
            }
            lVar6 = lVar6 + 1;
            p_Var7 = p_Var7 + 1;
          } while (lVar6 < 3);
          fVar27 = fVar43 * fVar58 - fVar31 * fVar59;
          fVar28 = fVar40 * fVar31 - fVar35 * fVar43;
          fVar41 = fVar59 * fVar35 - fVar58 * fVar40;
          fVar47 = fVar45 * fVar38 - fVar38 * fVar45;
          fVar47 = fVar47 * fVar47;
          fVar29 = fVar41 * fVar41 + fVar28 * fVar28;
          fVar33 = fVar28 * fVar28 + fVar41 * fVar41;
          fVar60 = fVar47 + fVar27 * fVar27;
          fVar47 = fVar27 * fVar27 + fVar47;
          auVar21._0_4_ = fVar60 + fVar29;
          auVar21._4_4_ = fVar47 + fVar33;
          auVar21._8_4_ = fVar29 + fVar60;
          auVar21._12_4_ = fVar33 + fVar47;
          auVar19 = sqrtps(auVar21,auVar21);
          auVar19 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
          fVar28 = auVar19._0_4_ * fVar28;
          fVar41 = auVar19._4_4_ * fVar41;
          fVar27 = auVar19._8_4_ * fVar27;
          fVar47 = fVar41 * fVar37 + fVar28 * fVar34 + fVar27 * fVar39;
          fVar29 = fVar41 * fVar25 + fVar28 * fVar24 + fVar27 * fVar30;
          fVar33 = fVar41 * fVar26 + fVar28 * fVar46 + fVar27 * fVar32;
          if ((((float)(-(uint)(0.0 < fVar29) & (uint)fVar23 | ~-(uint)(0.0 < fVar29) & (uint)fVar25
                       ) +
                (float)(-(uint)(0.0 < fVar47) & (uint)fVar62 | ~-(uint)(0.0 < fVar47) & (uint)fVar37
                       ) +
                (float)(-(uint)(0.0 < fVar33) & (uint)fVar65 | ~-(uint)(0.0 < fVar33) & (uint)fVar26
                       ) + fVar2) - param_2->m128_f32[1]) * fVar41 +
              (((float)(-(uint)(0.0 < fVar29) & (uint)fVar36 | ~-(uint)(0.0 < fVar29) & (uint)fVar24
                       ) +
                (float)(-(uint)(0.0 < fVar47) & (uint)fVar61 | ~-(uint)(0.0 < fVar47) & (uint)fVar34
                       ) +
                (float)(-(uint)(0.0 < fVar33) & (uint)fVar64 | ~-(uint)(0.0 < fVar33) & (uint)fVar46
                       ) + fVar1) - param_2->m128_f32[0]) * fVar28 +
              (((float)(-(uint)(0.0 < fVar29) & (uint)fVar56 | ~-(uint)(0.0 < fVar29) & (uint)fVar30
                       ) +
                (float)(-(uint)(0.0 < fVar47) & (uint)fVar63 | ~-(uint)(0.0 < fVar47) & (uint)fVar39
                       ) +
                (float)(-(uint)(0.0 < fVar33) & (uint)fVar66 | ~-(uint)(0.0 < fVar33) & (uint)fVar32
                       ) + fVar3) - param_2->m128_f32[2]) * fVar27 <= 0.0) {
            lVar6 = lVar5;
            p_Var7 = p_Var8;
            do {
              fVar29 = p_Var7->m128_f32[0] * fVar31 - p_Var7->m128_f32[1] * fVar58;
              fVar33 = p_Var7->m128_f32[1] * fVar35 - p_Var7->m128_f32[2] * fVar31;
              fVar60 = p_Var7->m128_f32[2] * fVar58 - p_Var7->m128_f32[0] * fVar35;
              fVar47 = (param_2->m128_f32[1] - fVar51) * fVar60 +
                       (param_2->m128_f32[0] - fVar9) * fVar33 +
                       (param_2->m128_f32[2] - fVar55) * fVar29;
              fVar27 = (float)((uint)(0.0 - fVar33) & -(uint)(fVar47 < 0.0) |
                              ~-(uint)(fVar47 < 0.0) & (uint)fVar33);
              fVar60 = (float)((uint)(0.0 - fVar60) & -(uint)(fVar47 < 0.0) |
                              ~-(uint)(fVar47 < 0.0) & (uint)fVar60);
              fVar28 = (float)((uint)(0.0 - fVar29) & -(uint)(fVar47 < 0.0) |
                              ~-(uint)(fVar47 < 0.0) & (uint)fVar29);
              fVar47 = fVar60 * fVar37 + fVar27 * fVar34 + fVar28 * fVar39;
              fVar29 = fVar60 * fVar25 + fVar27 * fVar24 + fVar28 * fVar30;
              fVar33 = fVar60 * fVar26 + fVar27 * fVar46 + fVar28 * fVar32;
              if (__real_38d1b717 <
                  (((float)(-(uint)(0.0 < fVar29) & (uint)fVar23 |
                           ~-(uint)(0.0 < fVar29) & (uint)fVar25) +
                    (float)(-(uint)(0.0 < fVar47) & (uint)fVar62 |
                           ~-(uint)(0.0 < fVar47) & (uint)fVar37) +
                    (float)(-(uint)(0.0 < fVar33) & (uint)fVar65 |
                           ~-(uint)(0.0 < fVar33) & (uint)fVar26) + fVar2) - param_2->m128_f32[1]) *
                  fVar60 + (((float)(-(uint)(0.0 < fVar29) & (uint)fVar36 |
                                    ~-(uint)(0.0 < fVar29) & (uint)fVar24) +
                             (float)(-(uint)(0.0 < fVar47) & (uint)fVar61 |
                                    ~-(uint)(0.0 < fVar47) & (uint)fVar34) +
                             (float)(-(uint)(0.0 < fVar33) & (uint)fVar64 |
                                    ~-(uint)(0.0 < fVar33) & (uint)fVar46) + fVar1) -
                           param_2->m128_f32[0]) * fVar27 +
                  (((float)(-(uint)(0.0 < fVar29) & (uint)fVar56 |
                           ~-(uint)(0.0 < fVar29) & (uint)fVar30) +
                    (float)(-(uint)(0.0 < fVar47) & (uint)fVar63 |
                           ~-(uint)(0.0 < fVar47) & (uint)fVar39) +
                    (float)(-(uint)(0.0 < fVar33) & (uint)fVar66 |
                           ~-(uint)(0.0 < fVar33) & (uint)fVar32) + fVar3) - param_2->m128_f32[2]) *
                  fVar28) {
                return false;
              }
              lVar6 = lVar6 + 1;
              p_Var7 = p_Var7 + 1;
            } while (lVar6 < 3);
            fVar58 = fVar43 * fVar48 - fVar49 * fVar59;
            fVar60 = fVar40 * fVar49 - fVar53 * fVar43;
            fVar27 = fVar59 * fVar53 - fVar48 * fVar40;
            fVar47 = fVar45 * fVar57 - fVar57 * fVar45;
            fVar47 = fVar47 * fVar47;
            fVar29 = fVar27 * fVar27 + fVar60 * fVar60;
            fVar33 = fVar60 * fVar60 + fVar27 * fVar27;
            fVar57 = fVar47 + fVar58 * fVar58;
            fVar47 = fVar58 * fVar58 + fVar47;
            auVar22._0_4_ = fVar57 + fVar29;
            auVar22._4_4_ = fVar47 + fVar33;
            auVar22._8_4_ = fVar29 + fVar57;
            auVar22._12_4_ = fVar33 + fVar47;
            auVar19 = sqrtps(auVar22,auVar22);
            auVar19 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar19);
            fVar60 = auVar19._0_4_ * fVar60;
            fVar27 = auVar19._4_4_ * fVar27;
            fVar58 = auVar19._8_4_ * fVar58;
            fVar47 = fVar27 * fVar37 + fVar60 * fVar34 + fVar58 * fVar39;
            fVar29 = fVar27 * fVar25 + fVar60 * fVar24 + fVar58 * fVar30;
            fVar33 = fVar27 * fVar26 + fVar60 * fVar46 + fVar58 * fVar32;
            if ((((float)(~-(uint)(0.0 < fVar47) & (uint)fVar37 |
                         -(uint)(0.0 < fVar47) & (uint)fVar62) +
                  (float)(~-(uint)(0.0 < fVar29) & (uint)fVar25 |
                         -(uint)(0.0 < fVar29) & (uint)fVar23) +
                  (float)(~-(uint)(0.0 < fVar33) & (uint)fVar26 |
                         -(uint)(0.0 < fVar33) & (uint)fVar65) + fVar2) - param_3->m128_f32[1]) *
                fVar27 + (((float)(~-(uint)(0.0 < fVar47) & (uint)fVar34 |
                                  -(uint)(0.0 < fVar47) & (uint)fVar61) +
                           (float)(~-(uint)(0.0 < fVar29) & (uint)fVar24 |
                                  -(uint)(0.0 < fVar29) & (uint)fVar36) +
                           (float)(~-(uint)(0.0 < fVar33) & (uint)fVar46 |
                                  -(uint)(0.0 < fVar33) & (uint)fVar64) + fVar1) -
                         param_3->m128_f32[0]) * fVar60 +
                (((float)(~-(uint)(0.0 < fVar47) & (uint)fVar39 |
                         -(uint)(0.0 < fVar47) & (uint)fVar63) +
                  (float)(~-(uint)(0.0 < fVar29) & (uint)fVar30 |
                         -(uint)(0.0 < fVar29) & (uint)fVar56) +
                  (float)(~-(uint)(0.0 < fVar33) & (uint)fVar32 |
                         -(uint)(0.0 < fVar33) & (uint)fVar66) + fVar3) - param_3->m128_f32[2]) *
                fVar58 <= 0.0) {
              do {
                fVar29 = fVar49 * p_Var8->m128_f32[0] - p_Var8->m128_f32[1] * fVar48;
                fVar33 = fVar53 * p_Var8->m128_f32[1] - p_Var8->m128_f32[2] * fVar49;
                fVar57 = fVar48 * p_Var8->m128_f32[2] - p_Var8->m128_f32[0] * fVar53;
                fVar47 = (param_3->m128_f32[1] - fVar51) * fVar57 +
                         (param_3->m128_f32[0] - fVar9) * fVar33 +
                         (param_3->m128_f32[2] - fVar55) * fVar29;
                fVar58 = (float)((uint)(0.0 - fVar33) & -(uint)(fVar47 < 0.0) |
                                ~-(uint)(fVar47 < 0.0) & (uint)fVar33);
                fVar57 = (float)((uint)(0.0 - fVar57) & -(uint)(fVar47 < 0.0) |
                                ~-(uint)(fVar47 < 0.0) & (uint)fVar57);
                fVar60 = (float)((uint)(0.0 - fVar29) & -(uint)(fVar47 < 0.0) |
                                ~-(uint)(fVar47 < 0.0) & (uint)fVar29);
                fVar47 = fVar57 * fVar37 + fVar58 * fVar34 + fVar60 * fVar39;
                fVar29 = fVar57 * fVar25 + fVar58 * fVar24 + fVar60 * fVar30;
                fVar33 = fVar57 * fVar26 + fVar58 * fVar46 + fVar60 * fVar32;
                if (__real_38d1b717 <
                    (((float)(-(uint)(0.0 < fVar29) & (uint)fVar23 |
                             ~-(uint)(0.0 < fVar29) & (uint)fVar25) +
                      (float)(-(uint)(0.0 < fVar47) & (uint)fVar62 |
                             ~-(uint)(0.0 < fVar47) & (uint)fVar37) +
                      (float)(-(uint)(0.0 < fVar33) & (uint)fVar65 |
                             ~-(uint)(0.0 < fVar33) & (uint)fVar26) + fVar2) - param_3->m128_f32[1])
                    * fVar57 +
                    (((float)(-(uint)(0.0 < fVar29) & (uint)fVar36 |
                             ~-(uint)(0.0 < fVar29) & (uint)fVar24) +
                      (float)(-(uint)(0.0 < fVar47) & (uint)fVar61 |
                             ~-(uint)(0.0 < fVar47) & (uint)fVar34) +
                      (float)(-(uint)(0.0 < fVar33) & (uint)fVar64 |
                             ~-(uint)(0.0 < fVar33) & (uint)fVar46) + fVar1) - param_3->m128_f32[0])
                    * fVar58 +
                    (((float)(-(uint)(0.0 < fVar29) & (uint)fVar56 |
                             ~-(uint)(0.0 < fVar29) & (uint)fVar30) +
                      (float)(-(uint)(0.0 < fVar47) & (uint)fVar63 |
                             ~-(uint)(0.0 < fVar47) & (uint)fVar39) +
                      (float)(-(uint)(0.0 < fVar33) & (uint)fVar66 |
                             ~-(uint)(0.0 < fVar33) & (uint)fVar32) + fVar3) - param_3->m128_f32[2])
                    * fVar60) {
                  return false;
                }
                lVar5 = lVar5 + 1;
                p_Var8 = p_Var8 + 1;
              } while (lVar5 < 3);
              fVar36 = (this->XAxis).m128_f32[0] * (this->XHalfExtent).m128_f32[0];
              fVar23 = (this->XAxis).m128_f32[1] * (this->XHalfExtent).m128_f32[1];
              fVar34 = (this->XAxis).m128_f32[2] * (this->XHalfExtent).m128_f32[2];
              fVar46 = (this->YAxis).m128_f32[0] * (this->YHalfExtent).m128_f32[0];
              fVar26 = (this->YAxis).m128_f32[1] * (this->YHalfExtent).m128_f32[1];
              fVar32 = (this->YAxis).m128_f32[2] * (this->YHalfExtent).m128_f32[2];
              fVar47 = (this->ZAxis).m128_f32[0] * (this->ZHalfExtent).m128_f32[0];
              fVar29 = (this->ZAxis).m128_f32[1] * (this->ZHalfExtent).m128_f32[1];
              fVar33 = (this->ZAxis).m128_f32[2] * (this->ZHalfExtent).m128_f32[2];
              fVar24 = fVar23 * fVar43 + fVar36 * fVar59 + fVar34 * fVar40;
              fVar25 = fVar26 * fVar43 + fVar46 * fVar59 + fVar32 * fVar40;
              fVar30 = fVar29 * fVar43 + fVar47 * fVar59 + fVar33 * fVar40;
              fVar47 = (float)(~-(uint)(0.0 < fVar25) & (uint)(0.0 - fVar46) |
                              -(uint)(0.0 < fVar25) & (uint)fVar46) +
                       (float)(~-(uint)(0.0 < fVar24) & (uint)(0.0 - fVar36) |
                              -(uint)(0.0 < fVar24) & (uint)fVar36) +
                       (float)(~-(uint)(0.0 < fVar30) & (uint)(0.0 - fVar47) |
                              -(uint)(0.0 < fVar30) & (uint)fVar47);
              fVar29 = (float)(~-(uint)(0.0 < fVar25) & (uint)(0.0 - fVar26) |
                              -(uint)(0.0 < fVar25) & (uint)fVar26) +
                       (float)(~-(uint)(0.0 < fVar24) & (uint)(0.0 - fVar23) |
                              -(uint)(0.0 < fVar24) & (uint)fVar23) +
                       (float)(~-(uint)(0.0 < fVar30) & (uint)(0.0 - fVar29) |
                              -(uint)(0.0 < fVar30) & (uint)fVar29);
              fVar24 = (float)(~-(uint)(0.0 < fVar25) & (uint)(0.0 - fVar32) |
                              -(uint)(0.0 < fVar25) & (uint)fVar32) +
                       (float)(~-(uint)(0.0 < fVar24) & (uint)(0.0 - fVar34) |
                              -(uint)(0.0 < fVar24) & (uint)fVar34) +
                       (float)(~-(uint)(0.0 < fVar30) & (uint)(0.0 - fVar33) |
                              -(uint)(0.0 < fVar30) & (uint)fVar33);
              fVar25 = ((fVar2 + fVar29) - fVar51) * fVar43 + ((fVar1 + fVar47) - fVar9) * fVar59 +
                       ((fVar3 + fVar24) - fVar55) * fVar40;
              fVar24 = ((fVar2 - fVar29) - fVar51) * fVar43 + ((fVar1 - fVar47) - fVar9) * fVar59 +
                       ((fVar3 - fVar24) - fVar55) * fVar40;
              if ((__real_38d1b717 < (float)((uint)fVar25 & __xmm_7fffffff7fffffff7fffffff7fffffff))
                 && (__real_38d1b717 <
                     (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
                fVar30 = __real_3f800000;
                if ((fVar25 <= 0.0) && (fVar30 = __real_bf800000, 0.0 <= fVar25)) {
                  fVar30 = 0.0;
                }
                fVar25 = __real_3f800000;
                if ((fVar24 <= 0.0) && (fVar25 = __real_bf800000, 0.0 <= fVar24)) {
                  fVar25 = 0.0;
                }
                if (fVar30 == fVar25) {
                  return false;
                }
              }
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

