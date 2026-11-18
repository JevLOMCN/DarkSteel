// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FAABBSimd @ 143a02b20

FAABBSimd * __thiscall Chaos::FAABBSimd::FAABBSimd(FAABBSimd *this,TBox<double,3> *param_1)

{
  __m128 _Var1;
  __m128 _Var2;
  double dVar3;
  
  dVar3 = __real_3fe0000000000000;
  _Var2.m128_f32[1] =
       (float)((*(double *)&(param_1->AABB).MMax.field_0x8 -
               *(double *)&(param_1->AABB).MMin.field_0x8) * __real_3fe0000000000000 +
              *(double *)&(param_1->AABB).MMin.field_0x8);
  _Var2.m128_f32[0] =
       (float)((*(double *)&(param_1->AABB).MMax - *(double *)&(param_1->AABB).MMin) *
               __real_3fe0000000000000 + *(double *)&(param_1->AABB).MMin);
  _Var2.m128_f32[2] =
       (float)((*(double *)&(param_1->AABB).MMax.field_0x10 -
               *(double *)&(param_1->AABB).MMin.field_0x10) * __real_3fe0000000000000 +
              *(double *)&(param_1->AABB).MMin.field_0x10);
  _Var2.m128_f32[3] = 0.0;
  this->Position = _Var2;
  _Var1.m128_f32[1] =
       (float)((*(double *)&(param_1->AABB).MMax.field_0x8 -
               *(double *)&(param_1->AABB).MMin.field_0x8) * dVar3);
  _Var1.m128_f32[0] =
       (float)((*(double *)&(param_1->AABB).MMax - *(double *)&(param_1->AABB).MMin) * dVar3);
  _Var1.m128_f32[2] =
       (float)((*(double *)&(param_1->AABB).MMax.field_0x10 -
               *(double *)&(param_1->AABB).MMin.field_0x10) * dVar3);
  _Var1.m128_f32[3] = 0.0;
  this->HalfExtents = _Var1;
  return this;
}

// FAABBSimd @ 143a02bd0

FAABBSimd * __thiscall
Chaos::FAABBSimd::FAABBSimd(FAABBSimd *this,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_1)

{
  TBox<double,3> *pTVar1;
  __m128 _Var2;
  __m128 _Var3;
  float fVar4;
  double dVar5;
  
  dVar5 = __real_3fe0000000000000;
  fVar4 = __real_322bcc77;
  pTVar1 = (param_1->MObject).Reference;
  _Var2.m128_f32[1] =
       (float)(((*(double *)&(pTVar1->AABB).MMax.field_0x8 -
                *(double *)&(pTVar1->AABB).MMin.field_0x8) * __real_3fe0000000000000 +
               *(double *)&(pTVar1->AABB).MMin.field_0x8) *
              (double)*(float *)((longlong)&param_1->_padding_ + 4));
  _Var2.m128_f32[0] =
       (float)(((*(double *)&(pTVar1->AABB).MMax - *(double *)&(pTVar1->AABB).MMin) *
                __real_3fe0000000000000 + *(double *)&(pTVar1->AABB).MMin) *
              (double)*(float *)&param_1->_padding_);
  _Var2.m128_f32[2] =
       (float)(((*(double *)&(pTVar1->AABB).MMax.field_0x10 -
                *(double *)&(pTVar1->AABB).MMin.field_0x10) * __real_3fe0000000000000 +
               *(double *)&(pTVar1->AABB).MMin.field_0x10) * (double)*(float *)&param_1->_padding_);
  _Var2.m128_f32[3] = 0.0;
  this->Position = _Var2;
  pTVar1 = (param_1->MObject).Reference;
  _Var3.m128_f32[1] =
       (float)((*(double *)&(pTVar1->AABB).MMax.field_0x8 -
               *(double *)&(pTVar1->AABB).MMin.field_0x8) *
               (double)(*(float *)((longlong)&param_1->_padding_ + 4) + fVar4) * dVar5);
  _Var3.m128_f32[0] =
       (float)((*(double *)&(pTVar1->AABB).MMax - *(double *)&(pTVar1->AABB).MMin) *
               (double)(*(float *)&param_1->_padding_ + fVar4) * dVar5);
  _Var3.m128_f32[2] =
       (float)((*(double *)&(pTVar1->AABB).MMax.field_0x10 -
               *(double *)&(pTVar1->AABB).MMin.field_0x10) *
               (double)(*(float *)&param_1->_padding_ + fVar4) * dVar5);
  _Var3.m128_f32[3] = 0.0;
  this->HalfExtents = _Var3;
  return this;
}

// FAABBSimd @ 143a02cf0

FAABBSimd * __thiscall
Chaos::FAABBSimd::FAABBSimd(FAABBSimd *this,TVector<double,3> *param_1,TBox<double,3> *param_2)

{
  double dVar1;
  double dVar2;
  __m128 _Var3;
  __m128 _Var4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *(double *)&(param_2->AABB).MMin.field_0x10;
  dVar2 = *(double *)&(param_2->AABB).MMin.field_0x8;
  dVar7 = (*(double *)&(param_2->AABB).MMax.field_0x8 - dVar2) * __real_3fe0000000000000;
  dVar6 = (*(double *)&(param_2->AABB).MMax.field_0x10 - dVar1) * __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_2->AABB).MMax - *(double *)&(param_2->AABB).MMin) *
          __real_3fe0000000000000;
  _Var3.m128_f32[1] = (float)(dVar2 + dVar7 + *(double *)&param_1->field_0x8);
  _Var3.m128_f32[0] = (float)(dVar5 + *(double *)&(param_2->AABB).MMin + *(double *)param_1);
  _Var3.m128_f32[2] = (float)(dVar1 + dVar6 + *(double *)&param_1->field_0x10);
  _Var3.m128_f32[3] = 0.0;
  this->Position = _Var3;
  _Var4.m128_f32[1] = (float)dVar7;
  _Var4.m128_f32[0] = (float)dVar5;
  _Var4.m128_f32[2] = (float)dVar6;
  _Var4.m128_f32[3] = 0.0;
  this->HalfExtents = _Var4;
  return this;
}

// FAABBSimd @ 143a02da0

FAABBSimd * __thiscall
Chaos::FAABBSimd::FAABBSimd
          (FAABBSimd *this,TVector<double,3> *param_1,
          TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2)

{
  float fVar1;
  double dVar2;
  TBox<double,3> *pTVar3;
  __m128 _Var4;
  __m128 _Var5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar10 = __real_3fe0000000000000;
  dVar9 = __real_3e45798ee0000000;
  pTVar3 = (param_2->MObject).Reference;
  dVar2 = *(double *)&(pTVar3->AABB).MMin.field_0x8;
  fVar1 = *(float *)&param_2->_padding_;
  dVar6 = *(double *)&(pTVar3->AABB).MMax - *(double *)&(pTVar3->AABB).MMin;
  dVar8 = (*(double *)&(pTVar3->AABB).MMax.field_0x8 - dVar2) * __real_3fe0000000000000;
  dVar7 = (*(double *)&(pTVar3->AABB).MMax.field_0x10 - *(double *)&(pTVar3->AABB).MMin.field_0x10)
          * __real_3fe0000000000000;
  dVar12 = (double)*(float *)((longlong)&param_2->_padding_ + 4);
  dVar11 = (double)*(float *)&param_2->_padding_ + __real_3e45798ee0000000;
  _Var4.m128_f32[1] = (float)((dVar8 + dVar2) * dVar12 + *(double *)&param_1->field_0x8);
  _Var4.m128_f32[0] =
       (float)((dVar6 * __real_3fe0000000000000 + *(double *)&(pTVar3->AABB).MMin) *
               (double)*(float *)&param_2->_padding_ + *(double *)param_1);
  _Var4.m128_f32[2] =
       (float)((dVar7 + *(double *)&(pTVar3->AABB).MMin.field_0x10) * (double)fVar1 +
              *(double *)&param_1->field_0x10);
  _Var4.m128_f32[3] = 0.0;
  this->Position = _Var4;
  _Var5.m128_f32[1] = (float)((dVar12 + dVar9) * dVar8);
  _Var5.m128_f32[0] = (float)(dVar11 * dVar6 * dVar10);
  _Var5.m128_f32[2] = (float)(((double)fVar1 + dVar9) * dVar7);
  _Var5.m128_f32[3] = 0.0;
  this->HalfExtents = _Var5;
  return this;
}

// FAABBSimd @ 143a02ed0

FAABBSimd * __thiscall Chaos::FAABBSimd::FAABBSimd(FAABBSimd *this)

{
  (this->Position).m128_u64[0] = 0;
  (this->Position).m128_u64[1] = 0;
  return this;
}

// OverlapTriangle @ 143a0feb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::FAABBSimd::OverlapTriangle(FAABBSimd *this,__m128 *param_1,__m128 *param_2,__m128 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  __m128 *p_Var18;
  __m128 *p_Var19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined8 uVar41;
  float fVar43;
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  
  uVar1 = SignBit.m128_u32[0];
  uVar2 = SignBit.m128_u32[1];
  uVar3 = SignBit.m128_u32[2];
  fVar7 = (this->Position).m128_f32[0];
  fVar8 = (this->Position).m128_f32[1];
  fVar9 = (this->Position).m128_f32[2];
  fVar44 = (this->Position).m128_f32[3];
  fVar10 = (float)(this->HalfExtents).m128_u32[0];
  fVar11 = (float)(this->HalfExtents).m128_u32[1];
  fVar12 = (float)(this->HalfExtents).m128_u32[2];
  fVar34 = param_2->m128_f32[0];
  fVar24 = param_2->m128_f32[1];
  fVar31 = param_2->m128_f32[2];
  fVar40 = param_2->m128_f32[3];
  fVar29 = fVar34 - fVar7;
  fVar32 = fVar24 - fVar8;
  fVar33 = fVar31 - fVar9;
  fVar35 = fVar40 - fVar44;
  fVar13 = param_3->m128_f32[0];
  fVar14 = param_3->m128_f32[1];
  fVar15 = param_3->m128_f32[2];
  fVar23 = param_1->m128_f32[0];
  fVar30 = param_1->m128_f32[1];
  fVar16 = param_1->m128_f32[2];
  fVar36 = fVar13 - fVar7;
  fVar37 = fVar14 - fVar8;
  fVar38 = fVar15 - fVar9;
  fVar39 = param_3->m128_f32[3] - fVar44;
  uVar41 = CONCAT44(fVar30 - fVar8,fVar23 - fVar7);
  fVar43 = fVar16 - fVar9;
  fVar44 = param_1->m128_f32[3] - fVar44;
  auVar25._8_4_ = fVar43;
  auVar25._0_8_ = uVar41;
  auVar25._12_4_ = fVar44;
  auVar20._8_4_ = fVar43;
  auVar20._0_8_ = uVar41;
  auVar20._12_4_ = fVar44;
  auVar21._4_4_ = fVar32;
  auVar21._0_4_ = fVar29;
  auVar21._8_4_ = fVar33;
  auVar21._12_4_ = fVar35;
  auVar26 = maxps(auVar25,auVar21);
  auVar27._4_4_ = fVar32;
  auVar27._0_4_ = fVar29;
  auVar27._8_4_ = fVar33;
  auVar27._12_4_ = fVar35;
  auVar21 = minps(auVar20,auVar27);
  auVar4._4_4_ = fVar37;
  auVar4._0_4_ = fVar36;
  auVar4._8_4_ = fVar38;
  auVar4._12_4_ = fVar39;
  auVar27 = maxps(auVar26,auVar4);
  auVar5._4_4_ = fVar37;
  auVar5._0_4_ = fVar36;
  auVar5._8_4_ = fVar38;
  auVar5._12_4_ = fVar39;
  auVar21 = minps(auVar21,auVar5);
  auVar42._0_4_ = (uint)(fVar23 - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar42._4_4_ = (uint)(fVar30 - fVar8) & _UNK_15061cc74;
  auVar42._8_4_ = (uint)fVar43 & _UNK_15061cc78;
  auVar42._12_4_ = (uint)fVar44 & _UNK_15061cc7c;
  auVar26._4_4_ = (uint)fVar32 & _UNK_15061cc74;
  auVar26._0_4_ = (uint)fVar29 & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar26._8_4_ = (uint)fVar33 & _UNK_15061cc78;
  auVar26._12_4_ = (uint)fVar35 & _UNK_15061cc7c;
  auVar26 = minps(auVar42,auVar26);
  auVar6._4_4_ = (uint)fVar37 & _UNK_15061cc74;
  auVar6._0_4_ = (uint)fVar36 & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar6._8_4_ = (uint)fVar38 & _UNK_15061cc78;
  auVar6._12_4_ = (uint)fVar39 & _UNK_15061cc7c;
  auVar26 = minps(auVar26,auVar6);
  auVar28._0_4_ =
       -(uint)((float)((int)(auVar27._0_4_ & uVar1) >> 1) ==
               (float)((int)(auVar21._0_4_ & uVar1) >> 1) && fVar10 < auVar26._0_4_);
  auVar28._4_4_ =
       -(uint)((float)((int)(auVar27._4_4_ & uVar2) >> 1) ==
               (float)((int)(auVar21._4_4_ & uVar2) >> 1) && fVar11 < auVar26._4_4_);
  auVar28._8_4_ =
       -(uint)((float)((int)(auVar27._8_4_ & uVar3) >> 1) ==
               (float)((int)(auVar21._8_4_ & uVar3) >> 1) && fVar12 < auVar26._8_4_);
  auVar28._12_4_ =
       -(uint)((float)((int)(auVar27._12_4_ & SignBit.m128_u32[3]) >> 1) ==
               (float)((int)(auVar21._12_4_ & SignBit.m128_u32[3]) >> 1) &&
              (this->HalfExtents).m128_f32[3] < auVar26._12_4_);
  iVar17 = movmskps((int)&stack0x00000000,auVar28);
  if (iVar17 == 0) {
    fVar47 = fVar13 - fVar34;
    fVar48 = fVar14 - fVar24;
    fVar49 = fVar15 - fVar31;
    fVar44 = param_3->m128_f32[3] - fVar40;
    fVar37 = fVar34 - fVar23;
    fVar38 = fVar24 - fVar30;
    fVar39 = fVar31 - fVar16;
    fVar40 = fVar40 - param_1->m128_f32[3];
    fVar50 = fVar23 - fVar13;
    fVar51 = fVar30 - fVar14;
    fVar52 = fVar16 - fVar15;
    fVar43 = (fVar23 + fVar34 + fVar13) * ___xmm_3eaaaaab3eaaaaab3eaaaaab3eaaaaab;
    fVar45 = (fVar30 + fVar24 + fVar14) * _UNK_150af0124;
    fVar46 = (fVar16 + fVar31 + fVar15) * _UNK_150af0128;
    fVar33 = fVar48 * fVar37 - fVar38 * fVar47;
    fVar35 = fVar49 * fVar38 - fVar39 * fVar48;
    fVar36 = fVar47 * fVar39 - fVar37 * fVar49;
    fVar44 = fVar44 * fVar40 - fVar40 * fVar44;
    fVar44 = fVar44 * fVar44;
    fVar40 = fVar36 * fVar36 + fVar35 * fVar35;
    fVar29 = fVar35 * fVar35 + fVar36 * fVar36;
    fVar32 = fVar44 + fVar33 * fVar33;
    fVar44 = fVar33 * fVar33 + fVar44;
    auVar22._0_4_ = fVar32 + fVar40;
    auVar22._4_4_ = fVar44 + fVar29;
    auVar22._8_4_ = fVar40 + fVar32;
    auVar22._12_4_ = fVar29 + fVar44;
    auVar21 = sqrtps(auVar22,auVar22);
    auVar21 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar21);
    fVar35 = auVar21._0_4_ * fVar35;
    fVar36 = auVar21._4_4_ * fVar36;
    fVar33 = auVar21._8_4_ * fVar33;
    fVar44 = fVar35 * fVar38 - fVar36 * fVar37;
    fVar40 = fVar36 * fVar39 - fVar33 * fVar38;
    fVar29 = fVar33 * fVar37 - fVar35 * fVar39;
    if ((((fVar30 - ((float)((uint)fVar29 & uVar2 | (uint)fVar11) + fVar8)) * fVar29 +
          (fVar23 - ((float)((uint)fVar40 & uVar1 | (uint)fVar10) + fVar7)) * fVar40 +
          (fVar16 - ((float)((uint)fVar44 & uVar3 | (uint)fVar12) + fVar9)) * fVar44 <= 0.0) &&
        (fVar44 = fVar48 * fVar35 - fVar36 * fVar47, fVar40 = fVar49 * fVar36 - fVar33 * fVar48,
        fVar29 = fVar47 * fVar33 - fVar35 * fVar49,
        (fVar24 - ((float)((uint)fVar29 & uVar2 | (uint)fVar11) + fVar8)) * fVar29 +
        (fVar34 - ((float)((uint)fVar40 & uVar1 | (uint)fVar10) + fVar7)) * fVar40 +
        (fVar31 - ((float)((uint)fVar44 & uVar3 | (uint)fVar12) + fVar9)) * fVar44 <= 0.0)) &&
       (fVar44 = fVar51 * fVar35 - fVar36 * fVar50, fVar40 = fVar52 * fVar36 - fVar33 * fVar51,
       fVar29 = fVar50 * fVar33 - fVar35 * fVar52,
       (fVar14 - ((float)((uint)fVar29 & uVar2 | (uint)fVar11) + fVar8)) * fVar29 +
       (fVar13 - ((float)((uint)fVar40 & uVar1 | (uint)fVar10) + fVar7)) * fVar40 +
       (fVar15 - ((float)((uint)fVar44 & uVar3 | (uint)fVar12) + fVar9)) * fVar44 <= 0.0)) {
      fVar44 = (float)((uint)fVar35 & uVar1 | (uint)fVar10);
      fVar40 = (float)((uint)fVar36 & uVar2 | (uint)fVar11);
      fVar29 = (float)((uint)fVar33 & uVar3 | (uint)fVar12);
      fVar32 = ((fVar40 + fVar8) - fVar45) * fVar36 + ((fVar44 + fVar7) - fVar43) * fVar35 +
               ((fVar29 + fVar9) - fVar46) * fVar33;
      fVar44 = ((fVar8 - fVar40) - fVar45) * fVar36 + ((fVar7 - fVar44) - fVar43) * fVar35 +
               ((fVar9 - fVar29) - fVar46) * fVar33;
      if ((__real_38d1b717 < (float)((uint)fVar32 & __xmm_7fffffff7fffffff7fffffff7fffffff)) &&
         (__real_38d1b717 < (float)((uint)fVar44 & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        fVar40 = __real_3f800000;
        if ((fVar32 <= 0.0) && (fVar40 = __real_bf800000, 0.0 <= fVar32)) {
          fVar40 = 0.0;
        }
        fVar29 = __real_3f800000;
        if ((fVar44 <= 0.0) && (fVar29 = __real_bf800000, 0.0 <= fVar44)) {
          fVar29 = 0.0;
        }
        if (fVar40 == fVar29) {
          return false;
        }
      }
      p_Var18 = Edges;
      p_Var19 = Edges;
      do {
        fVar32 = p_Var19->m128_f32[0] * fVar38 - p_Var19->m128_f32[1] * fVar37;
        fVar44 = p_Var19->m128_f32[1] * fVar39 - p_Var19->m128_f32[2] * fVar38;
        fVar40 = p_Var19->m128_f32[2] * fVar37 - p_Var19->m128_f32[0] * fVar39;
        fVar29 = (fVar30 - fVar45) * fVar40 + (fVar23 - fVar43) * fVar44 +
                 (fVar16 - fVar46) * fVar32;
        fVar44 = (float)(((uint)fVar44 ^ uVar1) & -(uint)(fVar29 < 0.0) |
                        ~-(uint)(fVar29 < 0.0) & (uint)fVar44);
        fVar40 = (float)(((uint)fVar40 ^ uVar2) & -(uint)(fVar29 < 0.0) |
                        ~-(uint)(fVar29 < 0.0) & (uint)fVar40);
        fVar29 = (float)(((uint)fVar32 ^ uVar3) & -(uint)(fVar29 < 0.0) |
                        ~-(uint)(fVar29 < 0.0) & (uint)fVar32);
        if (__real_38d1b717 <
            (((float)(~(uint)fVar40 & uVar2 | (uint)fVar11) + fVar8) - fVar30) * fVar40 +
            (((float)(~(uint)fVar44 & uVar1 | (uint)fVar10) + fVar7) - fVar23) * fVar44 +
            (((float)(~(uint)fVar29 & uVar3 | (uint)fVar12) + fVar9) - fVar16) * fVar29) {
          return false;
        }
        p_Var19 = (__m128 *)(p_Var19->m128_f32 + 4);
      } while ((longlong)p_Var19 < 0x150aefb60);
      p_Var19 = Edges;
      do {
        fVar30 = p_Var19->m128_f32[0] * fVar48 - p_Var19->m128_f32[1] * fVar47;
        fVar44 = p_Var19->m128_f32[1] * fVar49 - p_Var19->m128_f32[2] * fVar48;
        fVar40 = p_Var19->m128_f32[2] * fVar47 - p_Var19->m128_f32[0] * fVar49;
        fVar23 = (fVar24 - fVar45) * fVar40 + (fVar34 - fVar43) * fVar44 +
                 (fVar31 - fVar46) * fVar30;
        fVar44 = (float)(((uint)fVar44 ^ uVar1) & -(uint)(fVar23 < 0.0) |
                        ~-(uint)(fVar23 < 0.0) & (uint)fVar44);
        fVar40 = (float)(((uint)fVar40 ^ uVar2) & -(uint)(fVar23 < 0.0) |
                        ~-(uint)(fVar23 < 0.0) & (uint)fVar40);
        fVar23 = (float)(((uint)fVar30 ^ uVar3) & -(uint)(fVar23 < 0.0) |
                        ~-(uint)(fVar23 < 0.0) & (uint)fVar30);
        if (__real_38d1b717 <
            (((float)(~(uint)fVar40 & uVar2 | (uint)fVar11) + fVar8) - fVar24) * fVar40 +
            (((float)(~(uint)fVar44 & uVar1 | (uint)fVar10) + fVar7) - fVar34) * fVar44 +
            (((float)(~(uint)fVar23 & uVar3 | (uint)fVar12) + fVar9) - fVar31) * fVar23) {
          return false;
        }
        p_Var19 = (__m128 *)(p_Var19->m128_f32 + 4);
      } while ((longlong)p_Var19 < 0x150aefb60);
      while( true ) {
        fVar31 = p_Var18->m128_f32[0] * fVar51 - p_Var18->m128_f32[1] * fVar50;
        fVar44 = p_Var18->m128_f32[1] * fVar52 - p_Var18->m128_f32[2] * fVar51;
        fVar34 = p_Var18->m128_f32[2] * fVar50 - p_Var18->m128_f32[0] * fVar52;
        fVar24 = (fVar14 - fVar45) * fVar34 + (fVar13 - fVar43) * fVar44 +
                 (fVar15 - fVar46) * fVar31;
        fVar44 = (float)(((uint)fVar44 ^ uVar1) & -(uint)(fVar24 < 0.0) |
                        ~-(uint)(fVar24 < 0.0) & (uint)fVar44);
        fVar34 = (float)(((uint)fVar34 ^ uVar2) & -(uint)(fVar24 < 0.0) |
                        ~-(uint)(fVar24 < 0.0) & (uint)fVar34);
        fVar24 = (float)(((uint)fVar31 ^ uVar3) & -(uint)(fVar24 < 0.0) |
                        ~-(uint)(fVar24 < 0.0) & (uint)fVar31);
        if (__real_38d1b717 <
            (((float)(~(uint)fVar34 & uVar2 | (uint)fVar11) + fVar8) - fVar14) * fVar34 +
            (((float)(~(uint)fVar44 & uVar1 | (uint)fVar10) + fVar7) - fVar13) * fVar44 +
            (((float)(~(uint)fVar24 & uVar3 | (uint)fVar12) + fVar9) - fVar15) * fVar24) break;
        p_Var18 = (__m128 *)(p_Var18->m128_f32 + 4);
        if (0x150aefb5f < (longlong)p_Var18) {
          return true;
        }
      }
    }
  }
  return false;
}

