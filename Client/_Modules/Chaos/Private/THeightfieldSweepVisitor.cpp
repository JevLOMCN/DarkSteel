// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 24

// THeightfieldSweepVisitor<Chaos::TBox<double,3>_> @ 143af5110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TBox<double,3>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TBox<double,3>_>::
THeightfieldSweepVisitor<Chaos::TBox<double,3>_>
          (THeightfieldSweepVisitor<Chaos::TBox<double,3>_> *this,FData<unsigned_short> *param_1,
          TBox<double,3> *param_2,TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  __m128 _Var24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar8 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x50;
  uVar7 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar6;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar7;
  this->OtherGeom = param_2;
  local_138 = *(double *)&(param_2->AABB).MMin;
  dStack_130 = *(double *)&(param_2->AABB).MMin.field_0x8;
  local_110 = *(double *)&(param_2->AABB).MMax.field_0x10;
  local_128 = *(double *)&(param_2->AABB).MMin.field_0x10;
  local_120 = *(double *)&(param_2->AABB).MMax;
  dStack_118 = *(double *)&(param_2->AABB).MMax.field_0x8;
  dVar5 = *(double *)&(this->StartTM).field_0x18;
  dVar3 = (local_120 - local_138) * dVar8 + local_138;
  dVar18 = (local_110 - local_128) * dVar8 + local_128;
  auVar16 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar13 = auVar16._0_8_;
  dVar25 = (dStack_118 - dStack_130) * dVar8 + dStack_130;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar19 = blendpd(auVar14,auVar16,2);
  uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar28;
  auVar30._0_8_ = auVar29._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
  auVar30._8_8_ = dVar18 * auVar14._8_8_ - dVar13 * dVar25;
  auVar31._8_4_ = SUB84(dVar25,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar18;
  auVar14 = blendpd(auVar31,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar19._0_8_ * dVar18;
  auVar15._8_8_ = auVar14._8_8_ * auVar16._8_8_ - auVar19._8_8_ * 0.0;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar31 = blendpd(auVar30,auVar15,2);
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar17 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar28;
  auVar31 = blendpd(auVar20,auVar32,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar27._8_8_ = auVar32._0_8_ * auVar14._8_8_ - dVar13 * dVar17;
  auVar14 = blendpd(auVar14,auVar16,2);
  auVar21._0_8_ = auVar31._0_8_ * dVar13 - auVar14._0_8_ * auVar32._0_8_;
  auVar21._8_8_ = auVar31._8_8_ * auVar16._8_8_ - auVar14._8_8_ * auVar32._8_8_;
  auVar19._8_4_ = SUB84(auVar27._8_8_,0);
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar14 = blendpd(auVar27,auVar21,2);
  dVar13 = dVar17 * dVar5 + dVar25 + auVar21._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar17 = *(double *)&(this->StartTM).field_0x30;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2 * dVar5 + dVar3 + auVar19._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar16;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar32._0_8_ * dVar5 + dVar18 + auVar14._0_8_ + dVar17;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_138,(TAABB<double,3> *)&local_168,&local_c8);
  dVar17 = this->Thickness;
  *(double *)&this->Inflation3D = (local_150 - local_168) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x8 = (local_148 - local_160) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x10 = (local_140 - local_158) * dVar8 + dVar17;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar9) <= dVar2;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar9) <= dVar2;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar17;
  _Var22._0_4_ = (float)*(double *)&this->StartPoint;
  _Var22._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var22.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var22.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var22;
  dVar17 = *(double *)&pTVar1->field_0x10;
  auVar23._0_4_ = (float)*(double *)pTVar1;
  auVar23._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar23._8_4_ = (float)dVar17;
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar23;
  uVar9 = -(uint)((float)((uint)auVar23._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar10 = -(uint)((float)((uint)auVar23._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar11 = -(uint)((float)((uint)(float)dVar17 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar12 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar9;
  (this->Parallel).m128_u32[1] = uVar10;
  (this->Parallel).m128_u32[2] = uVar11;
  (this->Parallel).m128_u32[3] = uVar12;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
  (this->InvDirSimd).m128_u32[0] = ~uVar9 & auVar16._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar10 & auVar16._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar11 & auVar16._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar12 & auVar16._12_4_;
  _Var24._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var24._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var24._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var24.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var24;
  return this;
}

// THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143af5580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *this,
          FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2,
          TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  __m128 _Var24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar8 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x50;
  uVar7 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar6;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar7;
  this->OtherGeom = param_2;
  local_138 = (double)param_2->_padding_;
  dStack_130 = (double)param_2->_padding_;
  local_110 = (double)param_2->_padding_;
  local_128 = (double)param_2->_padding_;
  local_120 = (double)param_2->_padding_;
  dStack_118 = (double)param_2->_padding_;
  dVar5 = *(double *)&(this->StartTM).field_0x18;
  dVar3 = (local_120 - local_138) * dVar8 + local_138;
  dVar18 = (local_110 - local_128) * dVar8 + local_128;
  auVar16 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar13 = auVar16._0_8_;
  dVar25 = (dStack_118 - dStack_130) * dVar8 + dStack_130;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar19 = blendpd(auVar14,auVar16,2);
  uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar28;
  auVar30._0_8_ = auVar29._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
  auVar30._8_8_ = dVar18 * auVar14._8_8_ - dVar13 * dVar25;
  auVar31._8_4_ = SUB84(dVar25,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar18;
  auVar14 = blendpd(auVar31,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar19._0_8_ * dVar18;
  auVar15._8_8_ = auVar14._8_8_ * auVar16._8_8_ - auVar19._8_8_ * 0.0;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar31 = blendpd(auVar30,auVar15,2);
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar17 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar28;
  auVar31 = blendpd(auVar20,auVar32,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar27._8_8_ = auVar32._0_8_ * auVar14._8_8_ - dVar13 * dVar17;
  auVar14 = blendpd(auVar14,auVar16,2);
  auVar21._0_8_ = auVar31._0_8_ * dVar13 - auVar14._0_8_ * auVar32._0_8_;
  auVar21._8_8_ = auVar31._8_8_ * auVar16._8_8_ - auVar14._8_8_ * auVar32._8_8_;
  auVar19._8_4_ = SUB84(auVar27._8_8_,0);
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar14 = blendpd(auVar27,auVar21,2);
  dVar13 = dVar17 * dVar5 + dVar25 + auVar21._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar17 = *(double *)&(this->StartTM).field_0x30;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2 * dVar5 + dVar3 + auVar19._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar16;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar32._0_8_ * dVar5 + dVar18 + auVar14._0_8_ + dVar17;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_138,(TAABB<double,3> *)&local_168,&local_c8);
  dVar17 = this->Thickness;
  *(double *)&this->Inflation3D = (local_150 - local_168) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x8 = (local_148 - local_160) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x10 = (local_140 - local_158) * dVar8 + dVar17;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar9) <= dVar2;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar9) <= dVar2;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar17;
  _Var22._0_4_ = (float)*(double *)&this->StartPoint;
  _Var22._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var22.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var22.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var22;
  dVar17 = *(double *)&pTVar1->field_0x10;
  auVar23._0_4_ = (float)*(double *)pTVar1;
  auVar23._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar23._8_4_ = (float)dVar17;
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar23;
  uVar9 = -(uint)((float)((uint)auVar23._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar10 = -(uint)((float)((uint)auVar23._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar11 = -(uint)((float)((uint)(float)dVar17 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar12 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar9;
  (this->Parallel).m128_u32[1] = uVar10;
  (this->Parallel).m128_u32[2] = uVar11;
  (this->Parallel).m128_u32[3] = uVar12;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
  (this->InvDirSimd).m128_u32[0] = ~uVar9 & auVar16._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar10 & auVar16._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar11 & auVar16._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar12 & auVar16._12_4_;
  _Var24._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var24._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var24._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var24.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var24;
  return this;
}

// THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143af59f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> *this
          ,FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_2
          ,TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,double param_5,bool param_6
          )

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  __m128 _Var24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar8 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x50;
  uVar7 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar6;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar7;
  this->OtherGeom = param_2;
  local_138 = (double)param_2->_padding_;
  dStack_130 = (double)param_2->_padding_;
  local_110 = (double)param_2->_padding_;
  local_128 = (double)param_2->_padding_;
  local_120 = (double)param_2->_padding_;
  dStack_118 = (double)param_2->_padding_;
  dVar5 = *(double *)&(this->StartTM).field_0x18;
  dVar3 = (local_120 - local_138) * dVar8 + local_138;
  dVar18 = (local_110 - local_128) * dVar8 + local_128;
  auVar16 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar13 = auVar16._0_8_;
  dVar25 = (dStack_118 - dStack_130) * dVar8 + dStack_130;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar19 = blendpd(auVar14,auVar16,2);
  uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar28;
  auVar30._0_8_ = auVar29._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
  auVar30._8_8_ = dVar18 * auVar14._8_8_ - dVar13 * dVar25;
  auVar31._8_4_ = SUB84(dVar25,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar18;
  auVar14 = blendpd(auVar31,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar19._0_8_ * dVar18;
  auVar15._8_8_ = auVar14._8_8_ * auVar16._8_8_ - auVar19._8_8_ * 0.0;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar31 = blendpd(auVar30,auVar15,2);
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar17 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar28;
  auVar31 = blendpd(auVar20,auVar32,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar27._8_8_ = auVar32._0_8_ * auVar14._8_8_ - dVar13 * dVar17;
  auVar14 = blendpd(auVar14,auVar16,2);
  auVar21._0_8_ = auVar31._0_8_ * dVar13 - auVar14._0_8_ * auVar32._0_8_;
  auVar21._8_8_ = auVar31._8_8_ * auVar16._8_8_ - auVar14._8_8_ * auVar32._8_8_;
  auVar19._8_4_ = SUB84(auVar27._8_8_,0);
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar14 = blendpd(auVar27,auVar21,2);
  dVar13 = dVar17 * dVar5 + dVar25 + auVar21._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar17 = *(double *)&(this->StartTM).field_0x30;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2 * dVar5 + dVar3 + auVar19._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar16;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar32._0_8_ * dVar5 + dVar18 + auVar14._0_8_ + dVar17;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_138,(TAABB<double,3> *)&local_168,&local_c8);
  dVar17 = this->Thickness;
  *(double *)&this->Inflation3D = (local_150 - local_168) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x8 = (local_148 - local_160) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x10 = (local_140 - local_158) * dVar8 + dVar17;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar9) <= dVar2;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar9) <= dVar2;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar17;
  _Var22._0_4_ = (float)*(double *)&this->StartPoint;
  _Var22._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var22.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var22.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var22;
  dVar17 = *(double *)&pTVar1->field_0x10;
  auVar23._0_4_ = (float)*(double *)pTVar1;
  auVar23._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar23._8_4_ = (float)dVar17;
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar23;
  uVar9 = -(uint)((float)((uint)auVar23._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar10 = -(uint)((float)((uint)auVar23._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar11 = -(uint)((float)((uint)(float)dVar17 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar12 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar9;
  (this->Parallel).m128_u32[1] = uVar10;
  (this->Parallel).m128_u32[2] = uVar11;
  (this->Parallel).m128_u32[3] = uVar12;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
  (this->InvDirSimd).m128_u32[0] = ~uVar9 & auVar16._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar10 & auVar16._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar11 & auVar16._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar12 & auVar16._12_4_;
  _Var24._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var24._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var24._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var24.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var24;
  return this;
}

// THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143af5e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::FCapsule,1> *param_2,
          TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  __m128 _Var24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar8 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x50;
  uVar7 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar6;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar7;
  this->OtherGeom = param_2;
  local_138 = (double)param_2->_padding_;
  dStack_130 = (double)param_2->_padding_;
  local_110 = (double)param_2->_padding_;
  local_128 = (double)param_2->_padding_;
  local_120 = (double)param_2->_padding_;
  dStack_118 = (double)param_2->_padding_;
  dVar5 = *(double *)&(this->StartTM).field_0x18;
  dVar3 = (local_120 - local_138) * dVar8 + local_138;
  dVar18 = (local_110 - local_128) * dVar8 + local_128;
  auVar16 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar13 = auVar16._0_8_;
  dVar25 = (dStack_118 - dStack_130) * dVar8 + dStack_130;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar19 = blendpd(auVar14,auVar16,2);
  uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar28;
  auVar30._0_8_ = auVar29._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
  auVar30._8_8_ = dVar18 * auVar14._8_8_ - dVar13 * dVar25;
  auVar31._8_4_ = SUB84(dVar25,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar18;
  auVar14 = blendpd(auVar31,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar19._0_8_ * dVar18;
  auVar15._8_8_ = auVar14._8_8_ * auVar16._8_8_ - auVar19._8_8_ * 0.0;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar31 = blendpd(auVar30,auVar15,2);
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar17 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar28;
  auVar31 = blendpd(auVar20,auVar32,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar27._8_8_ = auVar32._0_8_ * auVar14._8_8_ - dVar13 * dVar17;
  auVar14 = blendpd(auVar14,auVar16,2);
  auVar21._0_8_ = auVar31._0_8_ * dVar13 - auVar14._0_8_ * auVar32._0_8_;
  auVar21._8_8_ = auVar31._8_8_ * auVar16._8_8_ - auVar14._8_8_ * auVar32._8_8_;
  auVar19._8_4_ = SUB84(auVar27._8_8_,0);
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar14 = blendpd(auVar27,auVar21,2);
  dVar13 = dVar17 * dVar5 + dVar25 + auVar21._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar17 = *(double *)&(this->StartTM).field_0x30;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2 * dVar5 + dVar3 + auVar19._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar16;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar32._0_8_ * dVar5 + dVar18 + auVar14._0_8_ + dVar17;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_138,(TAABB<double,3> *)&local_168,&local_c8);
  dVar17 = this->Thickness;
  *(double *)&this->Inflation3D = (local_150 - local_168) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x8 = (local_148 - local_160) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x10 = (local_140 - local_158) * dVar8 + dVar17;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar9) <= dVar2;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar9) <= dVar2;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar17;
  _Var22._0_4_ = (float)*(double *)&this->StartPoint;
  _Var22._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var22.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var22.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var22;
  dVar17 = *(double *)&pTVar1->field_0x10;
  auVar23._0_4_ = (float)*(double *)pTVar1;
  auVar23._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar23._8_4_ = (float)dVar17;
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar23;
  uVar9 = -(uint)((float)((uint)auVar23._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar10 = -(uint)((float)((uint)auVar23._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar11 = -(uint)((float)((uint)(float)dVar17 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar12 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar9;
  (this->Parallel).m128_u32[1] = uVar10;
  (this->Parallel).m128_u32[2] = uVar11;
  (this->Parallel).m128_u32[3] = uVar12;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
  (this->InvDirSimd).m128_u32[0] = ~uVar9 & auVar16._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar10 & auVar16._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar11 & auVar16._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar12 & auVar16._12_4_;
  _Var24._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var24._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var24._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var24.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var24;
  return this;
}

// THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143af62d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this,
          FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::FConvex,1> *param_2,
          TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  __m128 _Var24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar8 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar6 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar6;
  uVar6 = *(undefined8 *)&param_3->field_0x50;
  uVar7 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar6;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar7;
  this->OtherGeom = param_2;
  local_138 = (double)param_2->_padding_;
  dStack_130 = (double)param_2->_padding_;
  local_110 = (double)param_2->_padding_;
  local_128 = (double)param_2->_padding_;
  local_120 = (double)param_2->_padding_;
  dStack_118 = (double)param_2->_padding_;
  dVar5 = *(double *)&(this->StartTM).field_0x18;
  dVar3 = (local_120 - local_138) * dVar8 + local_138;
  dVar18 = (local_110 - local_128) * dVar8 + local_128;
  auVar16 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar13 = auVar16._0_8_;
  dVar25 = (dStack_118 - dStack_130) * dVar8 + dStack_130;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar19 = blendpd(auVar14,auVar16,2);
  uVar28 = (undefined4)((ulonglong)dVar25 >> 0x20);
  auVar29._8_4_ = SUB84(dVar25,0);
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar28;
  auVar30._0_8_ = auVar29._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar3;
  auVar30._8_8_ = dVar18 * auVar14._8_8_ - dVar13 * dVar25;
  auVar31._8_4_ = SUB84(dVar25,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar28;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar18;
  auVar14 = blendpd(auVar31,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar13 - auVar19._0_8_ * dVar18;
  auVar15._8_8_ = auVar14._8_8_ * auVar16._8_8_ - auVar19._8_8_ * 0.0;
  auVar14 = *(undefined1 (*) [16])&this->StartTM;
  auVar31 = blendpd(auVar30,auVar15,2);
  dVar2 = auVar30._8_8_ + auVar30._8_8_;
  dVar17 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar17 >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar32._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar26._8_4_ = SUB84(dVar17,0);
  auVar26._0_8_ = dVar2;
  auVar26._12_4_ = uVar28;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar28;
  auVar31 = blendpd(auVar20,auVar32,2);
  auVar27._0_8_ = auVar26._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar2;
  auVar27._8_8_ = auVar32._0_8_ * auVar14._8_8_ - dVar13 * dVar17;
  auVar14 = blendpd(auVar14,auVar16,2);
  auVar21._0_8_ = auVar31._0_8_ * dVar13 - auVar14._0_8_ * auVar32._0_8_;
  auVar21._8_8_ = auVar31._8_8_ * auVar16._8_8_ - auVar14._8_8_ * auVar32._8_8_;
  auVar19._8_4_ = SUB84(auVar27._8_8_,0);
  auVar19._0_8_ = auVar27._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
  auVar14 = blendpd(auVar27,auVar21,2);
  dVar13 = dVar17 * dVar5 + dVar25 + auVar21._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar17 = *(double *)&(this->StartTM).field_0x30;
  auVar16._8_4_ = SUB84(dVar13,0);
  auVar16._0_8_ = dVar2 * dVar5 + dVar3 + auVar19._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar16._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar16;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar32._0_8_ * dVar5 + dVar18 + auVar14._0_8_ + dVar17;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_138,(TAABB<double,3> *)&local_168,&local_c8);
  dVar17 = this->Thickness;
  *(double *)&this->Inflation3D = (local_150 - local_168) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x8 = (local_148 - local_160) * dVar8 + dVar17;
  *(double *)&(this->Inflation3D).field_0x10 = (local_140 - local_158) * dVar8 + dVar17;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar17 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar9) <= dVar2;
  this->bParallel[1] = bVar4;
  if (bVar4) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar17 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar13;
  bVar4 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar10,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar9) <= dVar2;
  this->bParallel[2] = bVar4;
  if (bVar4) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar17 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar17;
  _Var22._0_4_ = (float)*(double *)&this->StartPoint;
  _Var22._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var22.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var22.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var22;
  dVar17 = *(double *)&pTVar1->field_0x10;
  auVar23._0_4_ = (float)*(double *)pTVar1;
  auVar23._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar23._8_4_ = (float)dVar17;
  auVar23._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar23;
  uVar9 = -(uint)((float)((uint)auVar23._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar10 = -(uint)((float)((uint)auVar23._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar11 = -(uint)((float)((uint)(float)dVar17 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar12 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar9;
  (this->Parallel).m128_u32[1] = uVar10;
  (this->Parallel).m128_u32[2] = uVar11;
  (this->Parallel).m128_u32[3] = uVar12;
  auVar16 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar23);
  (this->InvDirSimd).m128_u32[0] = ~uVar9 & auVar16._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar10 & auVar16._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar11 & auVar16._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar12 & auVar16._12_4_;
  _Var24._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var24._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var24._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var24.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var24;
  return this;
}

// THeightfieldSweepVisitor<Chaos::TSphere<double,3>_> @ 143af6740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::TSphere<double,3>_> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>::
THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>
          (THeightfieldSweepVisitor<Chaos::TSphere<double,3>_> *this,FData<unsigned_short> *param_1,
          TSphere<double,3> *param_2,TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,bool param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector<double,3> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  __m128 _Var25;
  undefined1 auVar26 [16];
  __m128 _Var27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_198 [32];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  dVar12 = __real_3fe0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_3->field_0x50;
  uVar11 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar10;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar11;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  this->OtherGeom = param_2;
  fVar1 = *(float *)&param_2->_padding_;
  fVar2 = *(float *)&(param_2->Center).field_0x4;
  fVar3 = *(float *)&(param_2->Center).field_0x8;
  dVar9 = *(double *)&(this->StartTM).field_0x18;
  local_130 = (double)(*(float *)&param_2->Center + fVar1);
  dStack_128 = (double)(fVar2 + fVar1);
  local_120 = (double)(fVar3 + fVar1);
  local_148 = (double)(*(float *)&param_2->Center - fVar1);
  local_140 = (double)(fVar2 - fVar1);
  auVar18 = *(undefined1 (*) [16])&this->StartTM;
  local_138 = (double)(fVar3 - fVar1);
  dVar31 = (dStack_128 - local_140) * dVar12 + local_140;
  dVar7 = (local_130 - local_148) * dVar12 + local_148;
  auVar20 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar17 = auVar20._0_8_;
  auVar22 = blendpd(auVar18,auVar20,2);
  dVar6 = (local_120 - local_138) * dVar12 + local_138;
  uVar30 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar32._8_4_ = SUB84(dVar31,0);
  auVar32._0_8_ = dVar7;
  auVar32._12_4_ = uVar30;
  auVar33._0_8_ = auVar32._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar7;
  auVar33._8_8_ = dVar6 * auVar18._8_8_ - dVar17 * dVar31;
  auVar23._8_4_ = SUB84(dVar31,0);
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar30;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar6;
  auVar18 = blendpd(auVar23,auVar34,2);
  auVar19._0_8_ = auVar18._0_8_ * dVar17 - auVar22._0_8_ * dVar6;
  auVar19._8_8_ = auVar18._8_8_ * auVar20._8_8_ - auVar22._8_8_ * 0.0;
  auVar18 = *(undefined1 (*) [16])&this->StartTM;
  auVar34 = blendpd(auVar33,auVar19,2);
  dVar5 = auVar33._8_8_ + auVar33._8_8_;
  dVar21 = auVar19._0_8_ + auVar19._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar21 >> 0x20);
  auVar35._0_8_ = auVar34._0_8_ + auVar34._0_8_;
  auVar35._8_8_ = auVar34._8_8_ + auVar34._8_8_;
  auVar28._8_4_ = SUB84(dVar21,0);
  auVar28._0_8_ = dVar5;
  auVar28._12_4_ = uVar30;
  auVar22._8_4_ = SUB84(dVar21,0);
  auVar22._0_8_ = dVar5;
  auVar22._12_4_ = uVar30;
  auVar23 = blendpd(auVar22,auVar35,2);
  auVar34 = blendpd(auVar18,auVar20,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar5;
  auVar29._8_8_ = auVar35._0_8_ * auVar18._8_8_ - dVar17 * dVar21;
  auVar24._0_8_ = auVar23._0_8_ * dVar17 - auVar34._0_8_ * auVar35._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * auVar20._8_8_ - auVar34._8_8_ * auVar35._8_8_;
  auVar20._8_4_ = SUB84(auVar29._8_8_,0);
  auVar20._0_8_ = auVar29._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar34 = blendpd(auVar29,auVar24,2);
  dVar17 = dVar21 * dVar9 + dVar31 + auVar24._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar21 = *(double *)&(this->StartTM).field_0x30;
  auVar18._8_4_ = SUB84(dVar17,0);
  auVar18._0_8_ = dVar5 * dVar9 + dVar7 + auVar20._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar18._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar18;
  *(double *)&(this->StartPoint).field_0x10 = auVar35._0_8_ * dVar9 + dVar6 + auVar34._0_8_ + dVar21
  ;
  local_d8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_d8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_d8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_d8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_d8.Translation.XY.m128d_f64[0] = 0.0;
  local_d8.Translation.XY.m128d_f64[1] = 0.0;
  local_d8.Translation.ZW.m128d_f64[0] = 0.0;
  local_d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_d8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_148,(TAABB<double,3> *)&local_178,&local_d8);
  dVar21 = this->Thickness;
  *(double *)&this->Inflation3D = (local_160 - local_178) * dVar12 + dVar21;
  *(double *)&(this->Inflation3D).field_0x8 = (local_158 - local_170) * dVar12 + dVar21;
  *(double *)&(this->Inflation3D).field_0x10 = (local_150 - local_168) * dVar12 + dVar21;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar5 = __real_3e45798ee2308c3a;
  dVar21 = __real_3ff0000000000000;
  pTVar4 = this->Dir;
  bVar8 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar8;
  if (bVar8) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar21 / *(double *)pTVar4;
  }
  *(double *)&this->InvDir = dVar17;
  bVar8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar4->field_0x8 >> 0x20) & uVar14,
                           (uint)*(undefined8 *)&pTVar4->field_0x8 & uVar13) <= dVar5;
  this->bParallel[1] = bVar8;
  if (bVar8) {
    dVar17 = 0.0;
  }
  else {
    dVar17 = dVar21 / *(double *)&pTVar4->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar17;
  bVar8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar4->field_0x10 >> 0x20) & uVar14,
                           (uint)*(undefined8 *)&pTVar4->field_0x10 & uVar13) <= dVar5;
  this->bParallel[2] = bVar8;
  if (bVar8) {
    dVar21 = 0.0;
  }
  else {
    dVar21 = dVar21 / *(double *)&pTVar4->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar21;
  _Var25._0_4_ = (float)*(double *)&this->StartPoint;
  _Var25._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var25.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var25.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var25;
  dVar21 = *(double *)&pTVar4->field_0x10;
  auVar26._0_4_ = (float)*(double *)pTVar4;
  auVar26._4_4_ = (float)*(double *)&pTVar4->field_0x8;
  dVar5 = *(double *)&(this->Inflation3D).field_0x10;
  auVar26._8_4_ = (float)dVar21;
  auVar26._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar26;
  uVar13 = -(uint)((float)((uint)auVar26._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                  GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar14 = -(uint)((float)((uint)auVar26._4_4_ & _UNK_15061cc74) <
                  GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar15 = -(uint)((float)((uint)(float)dVar21 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar13;
  (this->Parallel).m128_u32[1] = uVar14;
  (this->Parallel).m128_u32[2] = uVar15;
  (this->Parallel).m128_u32[3] = uVar16;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar26);
  (this->InvDirSimd).m128_u32[0] = ~uVar13 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar14 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar15 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  _Var27._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var27._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var27._8_4_ = (uint)(float)dVar5 & _UNK_15061cc78;
  _Var27.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var27;
  return this;
}

// THeightfieldSweepVisitor<Chaos::FCapsule> @ 143af6bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::FCapsule> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::FCapsule>::THeightfieldSweepVisitor<Chaos::FCapsule>
          (THeightfieldSweepVisitor<Chaos::FCapsule> *this,FData<unsigned_short> *param_1,
          FCapsule *param_2,TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  __m128 _Var20;
  undefined1 auVar21 [16];
  __m128 _Var22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->HfData = param_1;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x50;
  uVar6 = *(undefined8 *)&param_3->field_0x58;
  this->Dir = param_4;
  this->bComputeMTD = param_6;
  this->Thickness = param_5;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar5;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar6;
  this->OtherGeom = param_2;
  FCapsule::BoundingBox(param_2,(TAABB<double,3> *)&local_168);
  dVar7 = __real_3fe0000000000000;
  auVar13 = *(undefined1 (*) [16])&this->StartTM;
  dVar4 = *(double *)&(this->StartTM).field_0x18;
  local_158 = (local_140 - local_158) * __real_3fe0000000000000 + local_158;
  local_160 = (local_148 - local_160) * __real_3fe0000000000000 + local_160;
  local_168 = (local_150 - local_168) * __real_3fe0000000000000 + local_168;
  auVar15 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar12 = auVar15._0_8_;
  auVar17 = blendpd(auVar13,auVar15,2);
  uVar25 = (undefined4)((ulonglong)local_160 >> 0x20);
  auVar26._8_4_ = SUB84(local_160,0);
  auVar26._0_8_ = local_168;
  auVar26._12_4_ = uVar25;
  auVar27._0_8_ = auVar26._8_8_ * auVar13._0_8_ - auVar13._8_8_ * local_168;
  auVar27._8_8_ = local_158 * auVar13._8_8_ - dVar12 * local_160;
  auVar18._8_4_ = SUB84(local_160,0);
  auVar18._0_8_ = local_168;
  auVar18._12_4_ = uVar25;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = local_158;
  auVar13 = blendpd(auVar18,auVar28,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar12 - auVar17._0_8_ * local_158;
  auVar14._8_8_ = auVar13._8_8_ * auVar15._8_8_ - auVar17._8_8_ * 0.0;
  auVar13 = *(undefined1 (*) [16])&this->StartTM;
  dVar2 = auVar27._8_8_ + auVar27._8_8_;
  dVar16 = auVar14._0_8_ + auVar14._0_8_;
  uVar25 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar28 = blendpd(auVar27,auVar14,2);
  auVar29._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar29._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  auVar23._8_4_ = SUB84(dVar16,0);
  auVar23._0_8_ = dVar2;
  auVar23._12_4_ = uVar25;
  auVar17._8_4_ = SUB84(dVar16,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar25;
  auVar18 = blendpd(auVar17,auVar29,2);
  auVar28 = blendpd(auVar13,auVar15,2);
  auVar24._0_8_ = auVar23._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
  auVar24._8_8_ = auVar29._0_8_ * auVar13._8_8_ - dVar12 * dVar16;
  auVar19._0_8_ = auVar18._0_8_ * dVar12 - auVar28._0_8_ * auVar29._0_8_;
  auVar19._8_8_ = auVar18._8_8_ * auVar15._8_8_ - auVar28._8_8_ * auVar29._8_8_;
  auVar15._8_4_ = SUB84(auVar24._8_8_,0);
  auVar15._0_8_ = auVar24._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar24._8_8_ >> 0x20);
  dVar12 = dVar16 * dVar4 + local_160 + auVar19._0_8_ + *(double *)&(this->StartTM).field_0x28;
  auVar28 = blendpd(auVar24,auVar19,2);
  dVar16 = *(double *)&(this->StartTM).field_0x30;
  auVar13._8_4_ = SUB84(dVar12,0);
  auVar13._0_8_ = dVar2 * dVar4 + local_168 + auVar15._8_8_ + *(double *)&(this->StartTM).field_0x20
  ;
  auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar13;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar29._0_8_ * dVar4 + local_158 + auVar28._0_8_ + dVar16;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_168,(TAABB<double,3> *)&local_138,&local_c8);
  dVar16 = this->Thickness;
  *(double *)&this->Inflation3D = (local_120 - local_138) * dVar7 + dVar16;
  *(double *)&(this->Inflation3D).field_0x8 = (local_118 - local_130) * dVar7 + dVar16;
  *(double *)&(this->Inflation3D).field_0x10 = (local_110 - local_128) * dVar7 + dVar16;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar16 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar3;
  if (bVar3) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar16 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar12;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar9,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar8) <= dVar2;
  this->bParallel[1] = bVar3;
  if (bVar3) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar16 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar12;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar9,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar8) <= dVar2;
  this->bParallel[2] = bVar3;
  if (bVar3) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = dVar16 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar16;
  _Var20._0_4_ = (float)*(double *)&this->StartPoint;
  _Var20._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var20.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var20.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var20;
  dVar16 = *(double *)&pTVar1->field_0x10;
  auVar21._0_4_ = (float)*(double *)pTVar1;
  auVar21._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar21._8_4_ = (float)dVar16;
  auVar21._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar21;
  uVar8 = -(uint)((float)((uint)auVar21._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar9 = -(uint)((float)((uint)auVar21._4_4_ & _UNK_15061cc74) <
                 GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar10 = -(uint)((float)((uint)(float)dVar16 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar11 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar8;
  (this->Parallel).m128_u32[1] = uVar9;
  (this->Parallel).m128_u32[2] = uVar10;
  (this->Parallel).m128_u32[3] = uVar11;
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar21);
  (this->InvDirSimd).m128_u32[0] = ~uVar8 & auVar13._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar9 & auVar13._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar10 & auVar13._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar11 & auVar13._12_4_;
  _Var22._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var22._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var22._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var22.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var22;
  return this;
}

// THeightfieldSweepVisitor<Chaos::FConvex> @ 143af7040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitor<Chaos::FConvex> * __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::FConvex>::THeightfieldSweepVisitor<Chaos::FConvex>
          (THeightfieldSweepVisitor<Chaos::FConvex> *this,FData<unsigned_short> *param_1,
          FConvex *param_2,TRigidTransform<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,bool param_6)

{
  TVector<double,3> *pTVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  __m128 _Var21;
  undefined1 auVar22 [16];
  __m128 _Var23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  dVar7 = __real_3fe0000000000000;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->OutTime = 1.7976931348623157e+308;
  this->OutFaceIndex = -1;
  this->HfData = param_1;
  uVar5 = *(undefined8 *)&param_3->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_3;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_3->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_3->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar5;
  uVar5 = *(undefined8 *)&param_3->field_0x50;
  uVar6 = *(undefined8 *)&param_3->field_0x58;
  this->Thickness = param_5;
  this->Dir = param_4;
  *(undefined8 *)&(this->StartTM).field_0x50 = uVar5;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar6;
  this->bComputeMTD = param_6;
  this->OtherGeom = param_2;
  dVar4 = *(double *)&(this->StartTM).field_0x18;
  local_168 = (double)*(float *)&(param_2->LocalBoundingBox).MMin;
  local_150 = (double)*(float *)&(param_2->LocalBoundingBox).MMax;
  local_140 = (double)*(float *)&(param_2->LocalBoundingBox).MMax.field_0x8;
  local_148 = (double)*(float *)&(param_2->LocalBoundingBox).MMax.field_0x4;
  local_158 = (double)*(float *)&(param_2->LocalBoundingBox).MMin.field_0x8;
  local_160 = (double)*(float *)&(param_2->LocalBoundingBox).MMin.field_0x4;
  dVar24 = (local_150 - local_168) * dVar7 + local_168;
  auVar13 = *(undefined1 (*) [16])&this->StartTM;
  dVar16 = (local_148 - local_160) * dVar7 + local_160;
  auVar14 = *(undefined1 (*) [16])&(this->StartTM).field_0x10;
  dVar15 = auVar14._0_8_;
  auVar18._0_8_ = (local_140 - local_158) * dVar7 + local_158;
  auVar18._8_8_ = 0;
  auVar17 = blendpd(auVar13,auVar14,2);
  uVar27 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar28._8_4_ = SUB84(dVar16,0);
  auVar28._0_8_ = dVar24;
  auVar28._12_4_ = uVar27;
  auVar29._0_8_ = auVar28._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar24;
  auVar29._8_8_ = auVar18._0_8_ * auVar13._8_8_ - dVar15 * dVar16;
  auVar30._8_4_ = SUB84(dVar16,0);
  auVar30._0_8_ = dVar24;
  auVar30._12_4_ = uVar27;
  auVar13 = blendpd(auVar30,auVar18,2);
  auVar19._0_8_ = auVar13._0_8_ * dVar15 - auVar17._0_8_ * auVar18._0_8_;
  auVar19._8_8_ = auVar13._8_8_ * auVar14._8_8_ - auVar17._8_8_ * 0.0;
  auVar13 = *(undefined1 (*) [16])&this->StartTM;
  dVar2 = auVar29._8_8_ + auVar29._8_8_;
  dVar12 = auVar19._0_8_ + auVar19._0_8_;
  uVar27 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar30 = blendpd(auVar29,auVar19,2);
  auVar31._0_8_ = auVar30._0_8_ + auVar30._0_8_;
  auVar31._8_8_ = auVar30._8_8_ + auVar30._8_8_;
  auVar25._8_4_ = SUB84(dVar12,0);
  auVar25._0_8_ = dVar2;
  auVar25._12_4_ = uVar27;
  auVar17._8_4_ = SUB84(dVar12,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = uVar27;
  auVar19 = blendpd(auVar17,auVar31,2);
  auVar30 = blendpd(auVar13,auVar14,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
  auVar26._8_8_ = auVar31._0_8_ * auVar13._8_8_ - dVar15 * dVar12;
  auVar20._0_8_ = auVar19._0_8_ * dVar15 - auVar30._0_8_ * auVar31._0_8_;
  auVar20._8_8_ = auVar19._8_8_ * auVar14._8_8_ - auVar30._8_8_ * auVar31._8_8_;
  auVar14._8_4_ = SUB84(auVar26._8_8_,0);
  auVar14._0_8_ = auVar26._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  auVar30 = blendpd(auVar26,auVar20,2);
  dVar12 = dVar12 * dVar4 + dVar16 + auVar20._0_8_ + *(double *)&(this->StartTM).field_0x28;
  dVar16 = *(double *)&(this->StartTM).field_0x30;
  auVar13._8_4_ = SUB84(dVar12,0);
  auVar13._0_8_ = dVar2 * dVar4 + dVar24 + auVar14._8_8_ + *(double *)&(this->StartTM).field_0x20;
  auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])&this->StartPoint = auVar13;
  *(double *)&(this->StartPoint).field_0x10 =
       auVar31._0_8_ * dVar4 + auVar18._0_8_ + auVar30._0_8_ + dVar16;
  local_c8.Rotation.XY.m128d_f64[0] = *(double *)&this->StartTM;
  local_c8.Rotation.XY.m128d_f64[1] = *(double *)&(this->StartTM).field_0x8;
  local_c8.Rotation.ZW.m128d_f64[0] = *(double *)&(this->StartTM).field_0x10;
  local_c8.Rotation.ZW.m128d_f64[1] = *(double *)&(this->StartTM).field_0x18;
  local_c8.Translation.XY.m128d_f64[0] = 0.0;
  local_c8.Translation.XY.m128d_f64[1] = 0.0;
  local_c8.Translation.ZW.m128d_f64[0] = 0.0;
  local_c8.Translation.ZW.m128d_f64[1] = 0.0;
  local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  TAABB<double,3>::TransformedAABB
            ((TAABB<double,3> *)&local_168,(TAABB<double,3> *)&local_138,&local_c8);
  dVar16 = this->Thickness;
  *(double *)&this->Inflation3D = (local_120 - local_138) * dVar7 + dVar16;
  *(double *)&(this->Inflation3D).field_0x8 = (local_118 - local_130) * dVar7 + dVar16;
  *(double *)&(this->Inflation3D).field_0x10 = (local_110 - local_128) * dVar7 + dVar16;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar2 = __real_3e45798ee2308c3a;
  dVar16 = __real_3ff0000000000000;
  pTVar1 = this->Dir;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(double *)pTVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)pTVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                          ) <= __real_3e45798ee2308c3a;
  this->bParallel[0] = bVar3;
  if (bVar3) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar16 / *(double *)pTVar1;
  }
  *(double *)&this->InvDir = dVar12;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x8 >> 0x20) & uVar9,
                           (uint)*(undefined8 *)&pTVar1->field_0x8 & uVar8) <= dVar2;
  this->bParallel[1] = bVar3;
  if (bVar3) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = dVar16 / *(double *)&pTVar1->field_0x8;
  }
  *(double *)&(this->InvDir).field_0x8 = dVar12;
  bVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar1->field_0x10 >> 0x20) & uVar9,
                           (uint)*(undefined8 *)&pTVar1->field_0x10 & uVar8) <= dVar2;
  this->bParallel[2] = bVar3;
  if (bVar3) {
    dVar16 = 0.0;
  }
  else {
    dVar16 = dVar16 / *(double *)&pTVar1->field_0x10;
  }
  *(double *)&(this->InvDir).field_0x10 = dVar16;
  _Var21._0_4_ = (float)*(double *)&this->StartPoint;
  _Var21._4_4_ = (float)*(double *)&(this->StartPoint).field_0x8;
  _Var21.m128_f32[2] = (float)*(double *)&(this->StartPoint).field_0x10;
  _Var21.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var21;
  dVar16 = *(double *)&pTVar1->field_0x10;
  auVar22._0_4_ = (float)*(double *)pTVar1;
  auVar22._4_4_ = (float)*(double *)&pTVar1->field_0x8;
  dVar2 = *(double *)&(this->Inflation3D).field_0x10;
  auVar22._8_4_ = (float)dVar16;
  auVar22._12_4_ = 0;
  *(undefined1 (*) [16])(this->DirSimd).m128_f32 = auVar22;
  uVar8 = -(uint)((float)((uint)auVar22._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                 GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar9 = -(uint)((float)((uint)auVar22._4_4_ & _UNK_15061cc74) <
                 GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar10 = -(uint)((float)((uint)(float)dVar16 & _UNK_15061cc78) <
                  GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar11 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->Parallel).m128_u32[0] = uVar8;
  (this->Parallel).m128_u32[1] = uVar9;
  (this->Parallel).m128_u32[2] = uVar10;
  (this->Parallel).m128_u32[3] = uVar11;
  auVar13 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar22);
  (this->InvDirSimd).m128_u32[0] = ~uVar8 & auVar13._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar9 & auVar13._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar10 & auVar13._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar11 & auVar13._12_4_;
  _Var23._0_4_ = (uint)(float)*(double *)&this->Inflation3D & __xmm_7fffffff7fffffff7fffffff7fffffff
  ;
  _Var23._4_4_ = (uint)(float)*(double *)&(this->Inflation3D).field_0x8 & _UNK_15061cc74;
  _Var23._8_4_ = (uint)(float)dVar2 & _UNK_15061cc78;
  _Var23.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var23;
  return this;
}

// operator() @ 143b03fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TBox<double,3>_>::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_120.Radius = 0.0;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b043d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func =
       Chaos::FGeomGJKHelperSIMD::
       SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_120.Radius = 0.0;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b047c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  if (*(float *)(*(longlong *)((longlong)local_120.Geometry + 0x70) + 0x10) <= 0.0) {
    local_120.Radius = 0.0;
  }
  else {
    local_120.Radius = *(float *)((longlong)local_120.Geometry + 0x10);
  }
  local_120.Func =
       Chaos::FGeomGJKHelperSIMD::
       SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b04bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::VisitSweep'::
__l2::<lambda_1>::operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  if (*(float *)(*(longlong *)((longlong)local_120.Geometry + 0x70) + 0x10) <= 0.0) {
    local_120.Radius = 0.0;
  }
  else {
    local_120.Radius = *(float *)((longlong)local_120.Geometry + 0x10);
  }
  local_120.Func =
       Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b04fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::VisitSweep'::__l2
::<lambda_1>::operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func =
       Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_120.Radius = 0.0;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b053d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::<lambda_1>::
operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Radius = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b057c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Radius = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// operator() @ 143b05bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitor<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double dVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  FGeomGJKHelperSIMD local_108;
  __m128 local_e8;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_108.Geometry = &local_88;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar29 = param_2->m128_f32[0];
  fVar19 = param_2->m128_f32[1];
  fVar23 = param_2->m128_f32[2];
  fVar25 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = param_3->m128_f32[0] - fVar29;
  fStack_74 = param_3->m128_f32[1] - fVar19;
  fStack_70 = param_3->m128_f32[2] - fVar23;
  fStack_6c = param_3->m128_f32[3] - fVar25;
  local_68._0_4_ = param_4->m128_f32[0] - fVar29;
  local_68._4_4_ = param_4->m128_f32[1] - fVar19;
  local_68._8_4_ = param_4->m128_f32[2] - fVar23;
  local_68._12_4_ = param_4->m128_f32[3] - fVar25;
  auVar15 = *(undefined1 (*) [16])(lVar1 + 0xb0);
  auVar20 = *(undefined1 (*) [16])(lVar1 + 0xa0);
  auVar4._4_8_ = local_68._8_8_;
  auVar4._0_4_ = auVar20._4_4_;
  auVar13._0_8_ = auVar4._0_8_ << 0x20;
  auVar13._8_4_ = auVar20._8_4_;
  auVar13._12_4_ = auVar20._12_4_;
  auVar5._4_8_ = auVar20._8_8_;
  auVar5._0_4_ = auVar15._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar15._8_4_;
  auVar14._12_4_ = auVar15._12_4_;
  fVar27 = (float)auVar20._0_8_;
  fVar28 = (float)auVar13._8_8_;
  fVar17 = (float)auVar15._0_8_;
  fVar21 = (float)auVar14._8_8_;
  fVar18 = fVar28 * fVar28 + fVar27 * fVar27;
  fVar22 = fVar27 * fVar27 + fVar28 * fVar28;
  fVar24 = fVar21 * fVar21 + fVar17 * fVar17;
  fVar26 = fVar17 * fVar17 + fVar21 * fVar21;
  auVar15._0_4_ = fVar24 + fVar18;
  auVar15._4_4_ = fVar26 + fVar22;
  auVar15._8_4_ = fVar18 + fVar24;
  auVar15._12_4_ = fVar22 + fVar26;
  uVar9 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar15._0_4_);
  uVar10 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar15._4_4_);
  uVar11 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar15._8_4_);
  uVar12 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar15._12_4_);
  auVar15 = sqrtps(auVar15,auVar15);
  auVar20 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
  local_d8.m128_u32[0] =
       (uint)(auVar20._0_4_ * fVar27) & uVar9 |
       ~uVar9 & GlobalVectorConstants::Float0001.m128_u32[0];
  local_d8.m128_u32[1] =
       (uint)(auVar20._4_4_ * fVar28) & uVar10 |
       ~uVar10 & GlobalVectorConstants::Float0001.m128_u32[1];
  local_d8.m128_u32[2] =
       (uint)(auVar20._8_4_ * fVar17) & uVar11 |
       ~uVar11 & GlobalVectorConstants::Float0001.m128_u32[2];
  local_d8.m128_u32[3] =
       (uint)(auVar20._12_4_ * fVar21) & uVar12 |
       ~uVar12 & GlobalVectorConstants::Float0001.m128_u32[3];
  local_a8 = *(undefined1 (*) [16])(lVar1 + 0xc0);
  local_98 = *(double *)(lVar1 + 0xd0);
  auVar6._4_8_ = auVar15._8_8_;
  auVar6._0_4_ = local_a8._4_4_;
  auVar20._0_8_ = auVar6._0_8_ << 0x20;
  auVar20._8_4_ = local_a8._8_4_;
  auVar20._12_4_ = local_a8._12_4_;
  local_e8.m128_f32[0] = (float)local_a8._0_8_ - fVar29;
  local_e8.m128_f32[1] = (float)auVar20._8_8_ - fVar19;
  local_e8.m128_f32[2] = (float)local_98 - fVar23;
  local_e8.m128_f32[3] = 0.0 - fVar25;
  local_120.Geometry = *(void **)(lVar1 + 0x100);
  local_120.Margin = *(float *)((longlong)local_120.Geometry + 0x10);
  local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
  local_108.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
  local_120.Radius = 0.0;
  local_108.Margin = 0.0;
  local_108.Radius = 0.0;
  bVar7 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                    (&local_108,&local_120,&local_d8,&local_e8,(__m128 *)(lVar1 + 0x60),
                     (float)**(double **)((longlong)this + 8),local_128,&local_b8,&local_c8,
                     *(bool *)(lVar1 + 0x138),&GlobalVectorConstants::Float1000);
  if ((bVar7) && ((double)local_128[0] < **(double **)this)) {
    uVar9 = param_1 / 2;
    if ((-1 < (int)uVar9) &&
       (dVar2 = (*(double **)this)[0x12], (int)uVar9 < *(int *)((longlong)dVar2 + 0x28))) {
      uVar10 = 0;
      if ((int)uVar9 < *(int *)((longlong)dVar2 + 0x28)) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if (*(char *)((longlong)(int)uVar9 + *(longlong *)((longlong)dVar2 + 0x20)) == -1) {
        return true;
      }
    }
    *(double *)(*(longlong *)this + 0x20) = (double)local_c8.m128_f32[0];
    *(double *)(*(longlong *)this + 0x28) = (double)local_c8.m128_f32[1];
    *(double *)(*(longlong *)this + 0x30) = (double)local_c8.m128_f32[2];
    fVar29 = param_2->m128_f32[1];
    fVar19 = param_2->m128_f32[2];
    *(double *)(*(longlong *)this + 8) = (double)(local_b8.m128_f32[0] + param_2->m128_f32[0]);
    *(double *)(*(longlong *)this + 0x10) = (double)(local_b8.m128_f32[1] + fVar29);
    *(double *)(*(longlong *)this + 0x18) = (double)(local_b8.m128_f32[2] + fVar19);
    **(double **)this = (double)local_128[0];
    *(int *)(*(longlong *)this + 0x38) = param_1;
    if (0.0 < local_128[0]) {
      **(double **)((longlong)this + 8) = (double)local_128[0];
    }
    else {
      fVar17 = (param_4->m128_f32[1] - param_2->m128_f32[1]) *
               (param_3->m128_f32[0] - param_2->m128_f32[0]) -
               (param_3->m128_f32[1] - param_2->m128_f32[1]) *
               (param_4->m128_f32[0] - param_2->m128_f32[0]);
      fVar18 = (param_4->m128_f32[2] - param_2->m128_f32[2]) *
               (param_3->m128_f32[1] - param_2->m128_f32[1]) -
               (param_3->m128_f32[2] - param_2->m128_f32[2]) *
               (param_4->m128_f32[1] - param_2->m128_f32[1]);
      fVar21 = (param_4->m128_f32[0] - param_2->m128_f32[0]) *
               (param_3->m128_f32[2] - param_2->m128_f32[2]) -
               (param_3->m128_f32[0] - param_2->m128_f32[0]) *
               (param_4->m128_f32[2] - param_2->m128_f32[2]);
      fVar29 = (param_4->m128_f32[3] - param_2->m128_f32[3]) *
               (param_3->m128_f32[3] - param_2->m128_f32[3]) -
               (param_3->m128_f32[3] - param_2->m128_f32[3]) *
               (param_4->m128_f32[3] - param_2->m128_f32[3]);
      fVar29 = fVar29 * fVar29;
      fVar19 = fVar21 * fVar21 + fVar18 * fVar18;
      fVar23 = fVar18 * fVar18 + fVar21 * fVar21;
      fVar25 = fVar29 + fVar17 * fVar17;
      fVar29 = fVar17 * fVar17 + fVar29;
      auVar16._0_4_ = fVar25 + fVar19;
      auVar16._4_4_ = fVar29 + fVar23;
      auVar16._8_4_ = fVar19 + fVar25;
      auVar16._12_4_ = fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar16);
      auVar15 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar15);
      *(double *)(*(longlong *)this + 0x20) = (double)(auVar15._0_4_ * fVar18);
      *(double *)(*(longlong *)this + 0x28) = (double)(auVar15._4_4_ * fVar21);
      *(double *)(*(longlong *)this + 0x30) = (double)(auVar15._8_4_ * fVar17);
      **(undefined8 **)((longlong)this + 8) = 0x3f1a36e2e0000000;
    }
  }
  return true;
}

// VisitSweep @ 143b4ac80

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TBox<double,3>_>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::TBox<double,3>_> *this,int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TBox<double,3>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::TBox<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TBox<double,3>_>::VisitSweep'::__l2::<lambda_1>::
        operator()(&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4b0d0

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *this,
          int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::
              THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
        VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4b520

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
VisitSweep(THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> *this
          ,int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::
              THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
        ::VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4b970

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
        VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4bdc0

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this,
          int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
        VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4c210

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::TSphere<double,3>_> *this,int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::TSphere<double,3>_> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::<lambda_1>::
        operator()(&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4c660

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::FCapsule>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::FCapsule> *this,int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::FCapsule> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

// VisitSweep @ 143b4cab0

bool __thiscall
Chaos::THeightfieldSweepVisitor<Chaos::FConvex>::VisitSweep
          (THeightfieldSweepVisitor<Chaos::FConvex> *this,int param_1,double *param_2)

{
  uint uVar1;
  FData<unsigned_short> *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar20;
  float fVar21;
  undefined1 auVar17 [16];
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  THeightfieldSweepVisitor<Chaos::FConvex> *local_e8;
  double *local_e0;
  __m128 local_d8;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8 [9];
  
  pFVar2 = this->HfData;
  uVar1 = param_1 / (int)(pFVar2->NumCols - 1) + param_1;
  uVar9 = 0;
  if ((int)uVar1 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  local_e8 = this;
  local_e0 = param_2;
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = uVar1 + 1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar37 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar1 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar11 = pFVar2->NumCols + uVar1;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar11 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  uVar10 = pFVar2->NumCols + 1 + uVar1;
  uVar9 = 0;
  if ((int)uVar10 < (pFVar2->Heights).ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar11 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  fVar16 = (pFVar2->ScaleSimd).m128_f32[0];
  fVar20 = (pFVar2->ScaleSimd).m128_f32[1];
  fVar21 = (pFVar2->ScaleSimd).m128_f32[2];
  fVar22 = (pFVar2->ScaleSimd).m128_f32[3];
  iVar8 = (int)uVar1 / (int)(uint)pFVar2->NumCols;
  fVar29 = (float)((int)uVar1 % (int)(uint)pFVar2->NumCols);
  fVar32 = fVar29 + __real_3f800000;
  fVar25 = (float)iVar8;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar2->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar2->HeightPerUnit + pFVar2->MinValue);
  fVar31 = fVar25 + __real_3f800000;
  fVar5 = fVar34;
  if (fVar33 <= fVar34) {
    fVar5 = fVar33;
  }
  local_d8.m128_f32[0] = fVar29 * fVar16;
  local_d8.m128_f32[1] = fVar25 * fVar20;
  local_d8.m128_f32[2] = fVar37 * fVar21;
  local_d8.m128_f32[3] = fVar22 * 0.0;
  if (fVar36 <= fVar5) {
    fVar5 = fVar36;
  }
  local_c8.m128_f32[0] = fVar32 * fVar16;
  local_c8.m128_f32[1] = fVar25 * fVar20;
  local_c8.m128_f32[2] = fVar36 * fVar21;
  local_c8.m128_f32[3] = fVar22 * 0.0;
  if (fVar37 <= fVar5) {
    fVar5 = fVar37;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar33) {
    fVar35 = fVar33;
  }
  local_b8.m128_f32[0] = fVar29 * fVar16;
  local_b8.m128_f32[1] = fVar31 * fVar20;
  local_b8.m128_f32[2] = fVar34 * fVar21;
  local_b8.m128_f32[3] = fVar22 * 0.0;
  auVar17._0_8_ = CONCAT44(fVar25 * fVar20,fVar29 * fVar16);
  auVar17._8_4_ = fVar5 * fVar21;
  auVar17._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar36) {
    fVar35 = fVar36;
  }
  local_a8[0]._0_4_ = fVar32 * fVar16;
  local_a8[0]._4_4_ = fVar31 * fVar20;
  local_a8[0]._8_4_ = fVar33 * fVar21;
  local_a8[0]._12_4_ = fVar22 * 0.0;
  if (fVar35 <= fVar37) {
    fVar35 = fVar37;
  }
  auVar27._8_4_ = auVar17._8_4_;
  auVar27._0_8_ = auVar17._0_8_;
  auVar27._12_4_ = auVar17._12_4_;
  fVar37 = (this->StartPointSimd).m128_f32[0];
  fVar36 = (this->StartPointSimd).m128_f32[1];
  fVar34 = (this->StartPointSimd).m128_f32[2];
  fVar5 = (this->StartPointSimd).m128_f32[3];
  auVar23._0_4_ = fVar32 * fVar16;
  auVar23._4_4_ = fVar31 * fVar20;
  auVar23._8_4_ = fVar35 * fVar21;
  auVar23._12_4_ = fVar22 * 0.0;
  fVar33 = (float)*param_2;
  auVar30 = maxps(auVar17,auVar23);
  auVar17 = minps(auVar27,auVar23);
  uVar1 = (this->Parallel).m128_u32[0];
  uVar9 = (this->Parallel).m128_u32[1];
  uVar10 = (this->Parallel).m128_u32[2];
  uVar11 = (this->Parallel).m128_u32[3];
  fVar25 = auVar30._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar29 = auVar30._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar30._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar30._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar16 = auVar17._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar20 = auVar17._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar21 = auVar17._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar22 = auVar17._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar30._0_4_ = -(uint)(fVar25 < fVar37 || fVar37 < fVar16) & uVar1;
  auVar30._4_4_ = -(uint)(fVar29 < fVar36 || fVar36 < fVar20) & uVar9;
  auVar30._8_4_ = -(uint)(fVar31 < fVar34 || fVar34 < fVar21) & uVar10;
  auVar30._12_4_ = -(uint)(fVar32 < fVar5 || fVar5 < fVar22) & uVar11;
  iVar8 = movmskps(iVar8,auVar30);
  if (iVar8 == 0) {
    auVar24._0_4_ = uVar1 & (uint)fVar33;
    auVar24._4_4_ = uVar9 & (uint)fVar33;
    auVar24._8_4_ = uVar10 & (uint)fVar33;
    auVar24._12_4_ = uVar11 & (uint)fVar33;
    auVar26._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar20 - fVar36) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar1 & (uint)((fVar16 - fVar37) * (this->InvDirSimd).m128_f32[0]));
    auVar26._8_4_ = ~uVar10 & (uint)((fVar21 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar26._12_4_ = ~uVar11 & (uint)((fVar22 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar18._8_4_ = auVar26._8_4_;
    auVar18._0_8_ = auVar26._0_8_;
    auVar18._12_4_ = auVar26._12_4_;
    auVar14._0_4_ = ~uVar1 & (uint)((fVar25 - fVar37) * (this->InvDirSimd).m128_f32[0]);
    auVar14._4_4_ = ~uVar9 & (uint)((fVar29 - fVar36) * (this->InvDirSimd).m128_f32[1]);
    auVar14._8_4_ = ~uVar10 & (uint)((fVar31 - fVar34) * (this->InvDirSimd).m128_f32[2]);
    auVar14._12_4_ = ~uVar11 & (uint)((fVar32 - fVar5) * (this->InvDirSimd).m128_f32[3]);
    auVar17 = minps(auVar18,auVar14 | auVar24);
    auVar27 = maxps(auVar26,auVar14 | auVar24);
    auVar19._12_4_ = auVar17._12_4_;
    auVar12._0_8_ = auVar17._4_8_;
    auVar12._8_4_ = auVar17._0_4_;
    auVar12._12_4_ = auVar19._12_4_;
    auVar28._12_4_ = auVar27._12_4_;
    auVar30 = maxps(auVar17,auVar12);
    auVar19._4_4_ = auVar17._0_4_;
    auVar19._0_4_ = auVar17._8_4_;
    auVar19._8_4_ = auVar17._4_4_;
    auVar13._0_8_ = auVar27._4_8_;
    auVar13._8_4_ = auVar27._0_4_;
    auVar13._12_4_ = auVar28._12_4_;
    auVar17 = minps(auVar27,auVar13);
    auVar28._4_4_ = auVar27._0_4_;
    auVar28._0_4_ = auVar27._8_4_;
    auVar28._8_4_ = auVar27._4_4_;
    auVar17 = minps(auVar17,auVar28);
    auVar30 = maxps(auVar30,auVar19);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar33;
    auVar4._8_4_ = fVar33;
    auVar4._12_4_ = fVar33;
    auVar17 = minps(auVar17,auVar4);
    auVar30 = maxps(auVar30,ZEXT816(0));
    auVar15._4_4_ = -(uint)(auVar17._4_4_ < auVar30._4_4_);
    auVar15._0_4_ = -(uint)(auVar17._0_4_ < auVar30._0_4_);
    auVar15._8_4_ = -(uint)(auVar17._8_4_ < auVar30._8_4_);
    auVar15._12_4_ = -(uint)(auVar17._12_4_ < auVar30._12_4_);
    iVar8 = movmskps(0,auVar15);
    if (iVar8 == 0) {
      bVar6 = `Chaos::THeightfieldSweepVisitor<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_e8,param_1 * 2,&local_d8,&local_c8,local_a8);
      if (bVar6) {
        `Chaos::THeightfieldSweepVisitor<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::operator()
                  (&local_e8,param_1 * 2 + 1,&local_d8,local_a8,&local_b8);
      }
    }
  }
  return true;
}

