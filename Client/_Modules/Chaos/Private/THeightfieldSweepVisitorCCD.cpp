// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 23

// THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_> @ 143af74d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>::
THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>
          (THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_> *this,FData<unsigned_short> *param_1,
          TBox<double,3> *param_2,TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> @ 143af7780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *this
          ,FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::TBox<double,3>,1> *param_2,
          TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,TVector<double,3> *param_5,
          double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> @ 143af7a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
           *this,FData<unsigned_short> *param_1,
          TImplicitObjectScaled<Chaos::TSphere<double,3>,1> *param_2,TAABB<double,3> *param_3,
          TRigidTransform<double,3> *param_4,TVector<double,3> *param_5,double param_6,
          double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> @ 143af7ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::
THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::FCapsule,1> *param_2,
          TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,TVector<double,3> *param_5,
          double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> @ 143af7f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this,
          FData<unsigned_short> *param_1,TImplicitObjectScaled<Chaos::FConvex,1> *param_2,
          TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,TVector<double,3> *param_5,
          double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_> @ 143af8240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>::
THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>
          (THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_> *this,
          FData<unsigned_short> *param_1,TSphere<double,3> *param_2,TAABB<double,3> *param_3,
          TRigidTransform<double,3> *param_4,TVector<double,3> *param_5,double param_6,
          double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::FCapsule> @ 143af84f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::FCapsule> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::FCapsule>::THeightfieldSweepVisitorCCD<Chaos::FCapsule>
          (THeightfieldSweepVisitorCCD<Chaos::FCapsule> *this,FData<unsigned_short> *param_1,
          FCapsule *param_2,TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// THeightfieldSweepVisitorCCD<Chaos::FConvex> @ 143af87a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

THeightfieldSweepVisitorCCD<Chaos::FConvex> * __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::FConvex>::THeightfieldSweepVisitorCCD<Chaos::FConvex>
          (THeightfieldSweepVisitorCCD<Chaos::FConvex> *this,FData<unsigned_short> *param_1,
          FConvex *param_2,TAABB<double,3> *param_3,TRigidTransform<double,3> *param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8)

{
  __m128 _Var1;
  __m128 _Var2;
  __m128 _Var3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  __m128 _Var26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  this->OutFaceIndex = -1;
  this->OutDistance = 1.7976931348623157e+308;
  this->OutPhi = 1.7976931348623157e+308;
  *(undefined8 *)&this->OutPosition = 0;
  *(undefined8 *)&(this->OutPosition).field_0x8 = 0;
  *(undefined8 *)&(this->OutPosition).field_0x10 = 0;
  *(undefined8 *)&this->OutNormal = 0;
  *(undefined8 *)&(this->OutNormal).field_0x8 = 0;
  *(undefined8 *)&(this->OutNormal).field_0x10 = 0;
  this->HfData = param_1;
  uVar10 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->StartTM = *(undefined8 *)param_4;
  *(undefined8 *)&(this->StartTM).field_0x8 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->StartTM).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->StartTM).field_0x18 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->StartTM).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->StartTM).field_0x28 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->StartTM).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->StartTM).field_0x38 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->StartTM).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->StartTM).field_0x48 = uVar10;
  uVar10 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->StartTM).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->StartTM).field_0x58 = uVar10;
  this->OtherGeom = param_2;
  this->TargetPenetration = param_8;
  this->IgnorePenetration = param_7;
  dVar7 = *(double *)&(this->StartTM).field_0x20;
  dVar8 = *(double *)&(this->StartTM).field_0x28;
  dVar9 = *(double *)&(this->StartTM).field_0x30;
  dVar6 = (*(double *)&param_3->MMax - *(double *)&param_3->MMin) * __real_3fe0000000000000;
  dVar4 = (*(double *)&(param_3->MMax).field_0x8 - *(double *)&(param_3->MMin).field_0x8) *
          __real_3fe0000000000000;
  dVar5 = (*(double *)&(param_3->MMax).field_0x10 - *(double *)&(param_3->MMin).field_0x10) *
          __real_3fe0000000000000;
  _Var26._0_4_ = (float)(dVar6 + *(double *)&param_3->MMin + dVar7);
  _Var26._4_4_ = (float)(dVar4 + *(double *)&(param_3->MMin).field_0x8 + dVar8);
  _Var26.m128_f32[2] = (float)(dVar5 + *(double *)&(param_3->MMin).field_0x10 + dVar9);
  _Var26.m128_f32[3] = 0.0;
  fVar27 = (float)dVar7;
  fVar28 = (float)dVar8;
  this->BoundsStartPointSimd = _Var26;
  fVar20 = (float)dVar9;
  _Var1.m128_f32[1] = fVar28;
  _Var1.m128_f32[0] = fVar27;
  _Var1.m128_f32[2] = fVar20;
  _Var1.m128_f32[3] = 0.0;
  this->StartPointSimd = _Var1;
  fVar29 = (float)*(double *)param_5;
  fVar30 = (float)*(double *)&param_5->field_0x8;
  fVar21 = (float)*(double *)&param_5->field_0x10;
  _Var3.m128_f32[1] = fVar30;
  _Var3.m128_f32[0] = fVar29;
  _Var3.m128_f32[2] = fVar21;
  _Var3.m128_f32[3] = 0.0;
  this->DirSimd = _Var3;
  (this->EndPointSimd).m128_f32[0] = (float)param_6 * fVar29 + fVar27;
  (this->EndPointSimd).m128_f32[1] = (float)param_6 * fVar30 + fVar28;
  (this->EndPointSimd).m128_f32[2] = (float)param_6 * fVar21 + fVar20;
  (this->EndPointSimd).m128_f32[3] = (float)param_6 * 0.0 + 0.0;
  fVar31 = (float)*(double *)&this->StartTM;
  fVar32 = (float)*(double *)&(this->StartTM).field_0x8;
  fVar20 = (float)*(double *)&(this->StartTM).field_0x10;
  fVar28 = (float)*(double *)&(this->StartTM).field_0x18;
  fVar27 = (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar29);
  fVar24 = (float)(_UNK_15061cc74 & (uint)fVar30);
  fVar25 = (float)(_UNK_15061cc78 & (uint)fVar21);
  (this->RotationSimd).m128_f32[0] = fVar31;
  (this->RotationSimd).m128_f32[1] = fVar32;
  (this->RotationSimd).m128_f32[2] = fVar20;
  (this->RotationSimd).m128_f32[3] = fVar28;
  uVar11 = -(uint)(fVar27 < GlobalVectorConstants::SmallNumber.m128_f32[0]);
  uVar12 = -(uint)(fVar24 < GlobalVectorConstants::SmallNumber.m128_f32[1]);
  uVar14 = -(uint)(fVar25 < GlobalVectorConstants::SmallNumber.m128_f32[2]);
  uVar16 = -(uint)(0.0 < GlobalVectorConstants::SmallNumber.m128_f32[3]);
  (this->ParallelSimd).m128_u32[0] = uVar11;
  (this->ParallelSimd).m128_u32[1] = uVar12;
  (this->ParallelSimd).m128_u32[2] = uVar14;
  (this->ParallelSimd).m128_u32[3] = uVar16;
  auVar18._4_4_ = fVar30;
  auVar18._0_4_ = fVar29;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = 0;
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  (this->InvDirSimd).m128_u32[0] = ~uVar11 & auVar18._0_4_;
  (this->InvDirSimd).m128_u32[1] = ~uVar12 & auVar18._4_4_;
  (this->InvDirSimd).m128_u32[2] = ~uVar14 & auVar18._8_4_;
  (this->InvDirSimd).m128_u32[3] = ~uVar16 & auVar18._12_4_;
  auVar22._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar22._8_4_ = SUB84(dVar4,0) & _UNK_15061cc88;
  auVar22._12_4_ = (uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c;
  _Var2.m128_f32[1] = (float)auVar22._8_8_;
  _Var2.m128_f32[0] = (float)auVar22._0_8_;
  _Var2.m128_f32[2] =
       (float)(double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  _Var2.m128_f32[3] = 0.0;
  this->Inflation3DSimd = _Var2;
  auVar19._0_4_ = fVar32 * fVar32 + fVar31 * fVar31;
  auVar19._4_4_ = fVar31 * fVar31 + fVar32 * fVar32;
  auVar19._8_4_ = fVar28 * fVar28 + fVar20 * fVar20;
  auVar19._12_4_ = fVar20 * fVar20 + fVar28 * fVar28;
  auVar23._0_4_ = auVar19._8_4_ + auVar19._0_4_;
  auVar23._4_4_ = auVar19._12_4_ + auVar19._4_4_;
  auVar23._8_4_ = auVar19._0_4_ + auVar19._8_4_;
  auVar23._12_4_ = auVar19._4_4_ + auVar19._12_4_;
  auVar18 = sqrtps(auVar19,auVar23);
  uVar16 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <= auVar23._0_4_);
  uVar13 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <= auVar23._4_4_);
  uVar15 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <= auVar23._8_4_);
  uVar17 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <= auVar23._12_4_);
  auVar18 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar18);
  uVar11 = GlobalVectorConstants::Float0001.m128_u32[1];
  uVar12 = GlobalVectorConstants::Float0001.m128_u32[2];
  uVar14 = GlobalVectorConstants::Float0001.m128_u32[3];
  (this->RotationSimd).m128_u32[0] =
       (uint)(auVar18._0_4_ * fVar31) & uVar16 |
       ~uVar16 & GlobalVectorConstants::Float0001.m128_u32[0];
  (this->RotationSimd).m128_u32[1] = (uint)(auVar18._4_4_ * fVar32) & uVar13 | ~uVar13 & uVar11;
  (this->RotationSimd).m128_u32[2] = (uint)(auVar18._8_4_ * fVar20) & uVar15 | ~uVar15 & uVar12;
  (this->RotationSimd).m128_u32[3] = (uint)(auVar18._12_4_ * fVar28) & uVar17 | ~uVar17 & uVar14;
  return this;
}

// operator() @ 143b05fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>::VisitSweep'::__l2::<lambda_1>::
operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
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
  float fVar27;
  float fVar28;
  undefined1 auStackY_178 [32];
  float local_118 [2];
  double local_110;
  undefined1 local_108 [16];
  code *local_f8;
  double local_f0;
  __m128 local_e8;
  FGeomGJKHelperSIMD local_d8;
  __m128 local_b8;
  __m128 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  fVar22 = param_2->m128_f32[0];
  fVar23 = param_2->m128_f32[1];
  fVar24 = param_2->m128_f32[2];
  fVar17 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_88 = param_3->m128_f32[0] - fVar22;
  fStack_84 = param_3->m128_f32[1] - fVar23;
  fStack_80 = param_3->m128_f32[2] - fVar24;
  fStack_7c = param_3->m128_f32[3] - fVar17;
  local_98 = 0;
  uStack_90 = 0;
  local_78 = param_4->m128_f32[0] - fVar22;
  fStack_74 = param_4->m128_f32[1] - fVar23;
  fStack_70 = param_4->m128_f32[2] - fVar24;
  fStack_6c = param_4->m128_f32[3] - fVar17;
  local_a8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar22);
  local_a8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar23);
  local_a8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar24);
  local_a8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar17);
  fVar22 = fVar22 - *(float *)(lVar1 + 0xf0);
  fVar23 = fVar23 - *(float *)(lVar1 + 0xf4);
  fVar24 = fVar24 - *(float *)(lVar1 + 0xf8);
  fVar27 = (float)*(double *)(lVar1 + 0xb8);
  fVar28 = (float)*(double *)(lVar1 + 0xb8);
  fVar12 = fStack_74 * local_88 - fStack_84 * local_78;
  fVar14 = fStack_70 * fStack_84 - fStack_80 * fStack_74;
  fVar16 = local_78 * fStack_80 - local_88 * fStack_70;
  fVar17 = fStack_6c * fStack_7c - fStack_7c * fStack_6c;
  fVar18 = *(float *)(lVar1 + 0x120) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar19 = *(float *)(lVar1 + 0x124) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar20 = *(float *)(lVar1 + 0x128) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar21 = *(float *)(lVar1 + 300) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar17 = fVar17 * fVar17;
  fVar7 = fVar16 * fVar16 + fVar14 * fVar14;
  fVar9 = fVar14 * fVar14 + fVar16 * fVar16;
  fVar11 = fVar17 + fVar12 * fVar12;
  fVar17 = fVar12 * fVar12 + fVar17;
  auVar5._0_4_ = fVar11 + fVar7;
  auVar5._4_4_ = fVar17 + fVar9;
  auVar5._8_4_ = fVar7 + fVar11;
  auVar5._12_4_ = fVar9 + fVar17;
  auVar5 = sqrtps(auVar5,auVar5);
  auVar5 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar5);
  fVar14 = auVar5._0_4_ * fVar14;
  fVar16 = auVar5._4_4_ * fVar16;
  fVar12 = auVar5._8_4_ * fVar12;
  fVar11 = fVar16 * fVar18 - fVar19 * fVar14;
  fVar25 = fVar12 * fVar19 - fVar20 * fVar16;
  fVar26 = fVar14 * fVar20 - fVar18 * fVar12;
  fVar25 = fVar25 + fVar25;
  fVar26 = fVar26 + fVar26;
  fVar11 = fVar11 + fVar11;
  fVar17 = fVar23 * fVar18 - fVar22 * fVar19;
  fVar7 = fVar24 * fVar19 - fVar23 * fVar20;
  fVar9 = fVar22 * fVar20 - fVar24 * fVar18;
  fVar14 = fVar25 * fVar21 + fVar14 + (fVar11 * fVar19 - fVar26 * fVar20);
  fVar16 = fVar26 * fVar21 + fVar16 + (fVar25 * fVar20 - fVar11 * fVar18);
  fVar11 = fVar11 * fVar21 + fVar12 + (fVar26 * fVar18 - fVar25 * fVar19);
  local_d8.Geometry = *(void **)(lVar1 + 0xb0);
  fVar7 = fVar7 + fVar7;
  fVar9 = fVar9 + fVar9;
  fVar17 = fVar17 + fVar17;
  pdVar4 = (double *)((longlong)local_d8.Geometry + 0x20);
  if (0.0 <= 0.0 - fVar14) {
    pdVar4 = (double *)((longlong)local_d8.Geometry + 0x38);
  }
  if (0.0 <= 0.0 - fVar16) {
    uVar8 = (undefined4)*(undefined8 *)((longlong)local_d8.Geometry + 0x40);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_d8.Geometry + 0x40) >> 0x20);
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)((longlong)local_d8.Geometry + 0x28);
    uVar10 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_d8.Geometry + 0x28) >> 0x20);
  }
  if (0.0 <= 0.0 - fVar11) {
    uVar13 = (undefined4)*(undefined8 *)((longlong)local_d8.Geometry + 0x48);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_d8.Geometry + 0x48) >> 0x20);
  }
  else {
    uVar13 = (undefined4)*(undefined8 *)((longlong)local_d8.Geometry + 0x30);
    uVar15 = (undefined4)((ulonglong)*(undefined8 *)((longlong)local_d8.Geometry + 0x30) >> 0x20);
  }
  fVar22 = ((fVar9 * fVar21 + fVar23 + (fVar7 * fVar20 - fVar17 * fVar18)) -
           (float)(double)CONCAT44(uVar10,uVar8)) * fVar16 +
           ((fVar7 * fVar21 + fVar22 + (fVar17 * fVar19 - fVar9 * fVar20)) - (float)*pdVar4) *
           fVar14 + ((fVar17 * fVar21 + fVar24 + (fVar9 * fVar18 - fVar7 * fVar19)) -
                    (float)(double)CONCAT44(uVar15,uVar13)) * fVar11;
  auVar6._4_4_ = -(uint)(fVar22 < fVar28);
  auVar6._0_4_ = -(uint)(fVar22 < fVar27);
  auVar6._8_4_ = -(uint)(fVar22 < fVar27);
  auVar6._12_4_ = -(uint)(fVar22 < fVar28);
  iVar3 = movmskps((int)pdVar4,auVar6);
  if (iVar3 == 0) {
    local_d8.Margin = *(float *)((longlong)local_d8.Geometry + 0x10);
    local_d8.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TBox<double,3>_>;
    local_f8 = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_d8.Radius = 0.0;
    local_108._8_8_ = 0;
    local_108._0_8_ = &local_98;
    bVar2 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      ((FGeomGJKHelperSIMD *)local_108,&local_d8,(__m128 *)(lVar1 + 0x120),&local_a8
                       ,(__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),local_118
                       ,&local_e8,&local_b8,true,&GlobalVectorConstants::Float1000);
    if (bVar2) {
      lVar1 = *(longlong *)this;
      local_e8.m128_f32[0] = local_e8.m128_f32[0] + param_2->m128_f32[0];
      local_e8.m128_f32[1] = local_e8.m128_f32[1] + param_2->m128_f32[1];
      local_e8.m128_f32[2] = local_e8.m128_f32[2] + param_2->m128_f32[2];
      local_e8.m128_f32[3] = local_e8.m128_f32[3] + param_2->m128_f32[3];
      local_110 = (double)(*(float *)(lVar1 + 0x114) * local_b8.m128_f32[1] +
                           *(float *)(lVar1 + 0x110) * local_b8.m128_f32[0] +
                          *(float *)(lVar1 + 0x118) * local_b8.m128_f32[2]);
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                (local_110,**(double **)((longlong)this + 8),(double)local_118[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),&local_f0,&local_110);
      pdVar4 = *(double **)((longlong)this + 8);
      local_f0 = *pdVar4 * local_f0;
      if (local_f0 < *pdVar4) {
        *pdVar4 = local_f0;
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_b8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_b8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_b8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_e8.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_e8.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_e8.m128_f32[2];
        **(double **)this = local_f0;
        *(double *)(*(longlong *)this + 8) = local_110;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar2 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}

// operator() @ 143b06880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  bool bVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStackY_1c8 [32];
  float local_168 [2];
  double local_160;
  double local_158 [2];
  __m128 local_148;
  FGeomGJKHelperSIMD local_138;
  FGeomGJKHelperSIMD local_120;
  __m128 local_108;
  __m128 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  fVar23 = param_2->m128_f32[0];
  fVar24 = param_2->m128_f32[1];
  fVar25 = param_2->m128_f32[2];
  fVar26 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_138.Radius = 0.0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = param_3->m128_f32[0] - fVar23;
  fStack_d4 = param_3->m128_f32[1] - fVar24;
  fStack_d0 = param_3->m128_f32[2] - fVar25;
  fStack_cc = param_3->m128_f32[3] - fVar26;
  local_c8 = param_4->m128_f32[0] - fVar23;
  fStack_c4 = param_4->m128_f32[1] - fVar24;
  fStack_c0 = param_4->m128_f32[2] - fVar25;
  fStack_bc = param_4->m128_f32[3] - fVar26;
  local_f8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar23);
  local_f8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar24);
  local_f8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar25);
  local_f8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar26);
  local_138.Geometry = *(void **)(lVar1 + 0xb0);
  lVar2 = *(longlong *)((longlong)local_138.Geometry + 0x70);
  if (*(float *)(lVar2 + 0x10) <= 0.0) {
    fVar26 = 0.0;
  }
  else {
    fVar26 = *(float *)((longlong)local_138.Geometry + 0x10);
  }
  fVar23 = fVar23 - *(float *)(lVar1 + 0xf0);
  fVar24 = fVar24 - *(float *)(lVar1 + 0xf4);
  fVar25 = fVar25 - *(float *)(lVar1 + 0xf8);
  fVar21 = (float)*(double *)(lVar1 + 0xb8);
  fVar22 = (float)*(double *)(lVar1 + 0xb8);
  fVar11 = fStack_c4 * local_d8 - fStack_d4 * local_c8;
  fVar12 = fStack_c0 * fStack_d4 - fStack_d0 * fStack_c4;
  fVar13 = local_c8 * fStack_d0 - local_d8 * fStack_c0;
  fVar14 = fStack_bc * fStack_cc - fStack_cc * fStack_bc;
  fVar14 = fVar14 * fVar14;
  fVar8 = fVar13 * fVar13 + fVar12 * fVar12;
  fVar9 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar10 = fVar14 + fVar11 * fVar11;
  fVar14 = fVar11 * fVar11 + fVar14;
  auVar6._0_4_ = fVar10 + fVar8;
  auVar6._4_4_ = fVar14 + fVar9;
  auVar6._8_4_ = fVar8 + fVar10;
  auVar6._12_4_ = fVar9 + fVar14;
  fVar14 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] *
           ((__m128 *)(lVar1 + 0x120))->m128_f32[0];
  fVar8 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] * *(float *)(lVar1 + 0x124);
  fVar9 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] * *(float *)(lVar1 + 0x128);
  fVar10 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] * *(float *)(lVar1 + 300);
  auVar7 = sqrtps(auVar6,auVar6);
  auVar7 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar7);
  fVar12 = auVar7._0_4_ * fVar12;
  fVar13 = auVar7._4_4_ * fVar13;
  fVar11 = auVar7._8_4_ * fVar11;
  fVar18 = fVar13 * fVar14 - fVar8 * fVar12;
  fVar19 = fVar11 * fVar8 - fVar9 * fVar13;
  fVar20 = fVar12 * fVar9 - fVar14 * fVar11;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar20 + fVar20;
  fVar18 = fVar18 + fVar18;
  fVar15 = fVar24 * fVar14 - fVar8 * fVar23;
  fVar16 = fVar25 * fVar8 - fVar9 * fVar24;
  fVar17 = fVar23 * fVar9 - fVar14 * fVar25;
  fVar16 = fVar16 + fVar16;
  fVar17 = fVar17 + fVar17;
  fVar15 = fVar15 + fVar15;
  fVar23 = ((fVar10 * fVar17 + fVar24 + (fVar16 * fVar9 - fVar14 * fVar15)) -
           *(float *)(lVar2 + 0x24) * *(float *)((longlong)local_138.Geometry + 0x24)) *
           (fVar10 * fVar20 + fVar13 + (fVar19 * fVar9 - fVar14 * fVar18)) +
           ((fVar10 * fVar16 + fVar23 + (fVar15 * fVar8 - fVar9 * fVar17)) -
           *(float *)((longlong)local_138.Geometry + 0x20) * *(float *)(lVar2 + 0x20)) *
           (fVar10 * fVar19 + fVar12 + (fVar18 * fVar8 - fVar9 * fVar20)) +
           ((fVar10 * fVar15 + fVar25 + (fVar17 * fVar14 - fVar8 * fVar16)) -
           *(float *)(lVar2 + 0x28) * *(float *)((longlong)local_138.Geometry + 0x28)) *
           (fVar10 * fVar18 + fVar11 + (fVar20 * fVar14 - fVar8 * fVar19));
  auVar7._4_4_ = -(uint)(fVar23 < fVar22 - fVar26);
  auVar7._0_4_ = -(uint)(fVar23 < fVar21 - fVar26);
  auVar7._8_4_ = -(uint)(fVar23 < fVar21 - fVar26);
  auVar7._12_4_ = -(uint)(fVar23 < fVar22 - fVar26);
  iVar5 = movmskps((int)lVar2,auVar7);
  if (iVar5 == 0) {
    local_138.Margin = *(float *)((longlong)local_138.Geometry + 0x10);
    if (0.0 < *(float *)(lVar2 + 0x10)) {
      local_138.Radius = *(float *)((longlong)local_138.Geometry + 0x10);
    }
    local_138.Func =
         Chaos::FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>;
    local_120.Geometry = &local_e8;
    local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_120.Margin = 0.0;
    local_120.Radius = 0.0;
    bVar4 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      (&local_120,&local_138,(__m128 *)(lVar1 + 0x120),&local_f8,
                       (__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),local_168,
                       &local_148,&local_108,true,&GlobalVectorConstants::Float1000);
    if (bVar4) {
      lVar1 = *(longlong *)this;
      local_148.m128_f32[0] = local_148.m128_f32[0] + param_2->m128_f32[0];
      local_148.m128_f32[1] = local_148.m128_f32[1] + param_2->m128_f32[1];
      local_148.m128_f32[2] = local_148.m128_f32[2] + param_2->m128_f32[2];
      local_148.m128_f32[3] = local_148.m128_f32[3] + param_2->m128_f32[3];
      local_160 = (double)(local_108.m128_f32[1] * *(float *)(lVar1 + 0x114) +
                           local_108.m128_f32[0] * *(float *)(lVar1 + 0x110) +
                          local_108.m128_f32[2] * *(float *)(lVar1 + 0x118));
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                (local_160,**(double **)((longlong)this + 8),(double)local_168[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),local_158,&local_160);
      pdVar3 = *(double **)((longlong)this + 8);
      local_158[0] = *pdVar3 * local_158[0];
      if (local_158[0] < *pdVar3) {
        *pdVar3 = local_158[0];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_108.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_108.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_108.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_148.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_148.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_148.m128_f32[2];
        **(double **)this = local_158[0];
        *(double *)(*(longlong *)this + 8) = local_160;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar4 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// operator() @ 143b06cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::VisitSweep'::
__l2::<lambda_1>::operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  undefined1 auStackY_1b8 [32];
  float local_158 [2];
  FGeomGJKHelperSIMD local_150;
  double local_138 [2];
  __m128 local_128;
  FGeomGJKHelperSIMD local_118;
  __m128 local_f8;
  __m128 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  fVar26 = param_2->m128_f32[0];
  fVar27 = param_2->m128_f32[1];
  fVar28 = param_2->m128_f32[2];
  fVar29 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_150.Radius = 0.0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = param_3->m128_f32[0] - fVar26;
  fStack_c4 = param_3->m128_f32[1] - fVar27;
  fStack_c0 = param_3->m128_f32[2] - fVar28;
  fStack_bc = param_3->m128_f32[3] - fVar29;
  local_b8 = param_4->m128_f32[0] - fVar26;
  fStack_b4 = param_4->m128_f32[1] - fVar27;
  fStack_b0 = param_4->m128_f32[2] - fVar28;
  fStack_ac = param_4->m128_f32[3] - fVar29;
  local_e8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar26);
  local_e8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar27);
  local_e8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar28);
  local_e8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar29);
  pvVar2 = *(void **)(lVar1 + 0xb0);
  lVar3 = *(longlong *)((longlong)pvVar2 + 0x70);
  if (*(float *)(lVar3 + 0x10) <= 0.0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = *(float *)((longlong)pvVar2 + 0x10);
  }
  fVar26 = fVar26 - *(float *)(lVar1 + 0xf0);
  fVar27 = fVar27 - *(float *)(lVar1 + 0xf4);
  fVar28 = fVar28 - *(float *)(lVar1 + 0xf8);
  fVar29 = fVar29 - *(float *)(lVar1 + 0xfc);
  fVar32 = (float)*(double *)(lVar1 + 0xb8);
  fVar33 = (float)*(double *)(lVar1 + 0xb8);
  fVar18 = fStack_b4 * local_c8 - fStack_c4 * local_b8;
  fVar20 = fStack_b0 * fStack_c4 - fStack_c0 * fStack_b4;
  fVar22 = local_b8 * fStack_c0 - local_c8 * fStack_b0;
  fVar24 = fStack_ac * fStack_bc - fStack_bc * fStack_ac;
  fVar24 = fVar24 * fVar24;
  fVar15 = fVar22 * fVar22 + fVar20 * fVar20;
  fVar16 = fVar20 * fVar20 + fVar22 * fVar22;
  fVar17 = fVar24 + fVar18 * fVar18;
  fVar24 = fVar18 * fVar18 + fVar24;
  auVar10._0_4_ = fVar17 + fVar15;
  auVar10._4_4_ = fVar24 + fVar16;
  auVar10._8_4_ = fVar15 + fVar17;
  auVar10._12_4_ = fVar16 + fVar24;
  auVar10 = sqrtps(auVar10,auVar10);
  auVar10 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar10);
  fVar20 = auVar10._0_4_ * fVar20;
  fVar22 = auVar10._4_4_ * fVar22;
  fVar18 = auVar10._8_4_ * fVar18;
  fVar19 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0] *
           ((__m128 *)(lVar1 + 0x120))->m128_f32[0];
  fVar21 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1] * *(float *)(lVar1 + 0x124);
  fVar23 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2] * *(float *)(lVar1 + 0x128);
  fVar25 = GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3] * *(float *)(lVar1 + 300);
  fVar24 = fVar22 * fVar19 - fVar21 * fVar20;
  fVar15 = fVar18 * fVar21 - fVar23 * fVar22;
  fVar16 = fVar20 * fVar23 - fVar19 * fVar18;
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 + fVar16;
  fVar24 = fVar24 + fVar24;
  fVar30 = fVar25 * fVar15 + fVar20 + (fVar24 * fVar21 - fVar23 * fVar16);
  fVar31 = fVar25 * fVar16 + fVar22 + (fVar15 * fVar23 - fVar19 * fVar24);
  fVar18 = fVar25 * fVar24 + fVar18 + (fVar16 * fVar19 - fVar21 * fVar15);
  fVar16 = fVar27 * fVar19 - fVar21 * fVar26;
  fVar17 = fVar28 * fVar21 - fVar23 * fVar27;
  fVar20 = fVar26 * fVar23 - fVar19 * fVar28;
  fVar22 = fVar29 * fVar25 - fVar25 * fVar29;
  dVar5 = (double)(0.0 - fVar30);
  dVar6 = (double)(0.0 - fVar31);
  fVar17 = fVar17 + fVar17;
  fVar20 = fVar20 + fVar20;
  fVar16 = fVar16 + fVar16;
  fVar22 = fVar22 + fVar22;
  fVar29 = fVar20 * fVar19 - fVar21 * fVar17;
  fVar24 = fVar16 * fVar21 - fVar23 * fVar20;
  fVar15 = fVar17 * fVar23 - fVar19 * fVar16;
  auVar11._12_4_ = fVar22 * fVar25 - fVar25 * fVar22;
  auVar11._4_4_ = fVar15;
  auVar11._0_4_ = fVar24;
  auVar11._8_4_ = fVar29;
  auVar7._4_8_ = auVar11._8_8_;
  auVar7._0_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar12._0_8_ = auVar7._0_8_ << 0x20;
  auVar12._8_4_ = SUB84(dVar6,0);
  auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if ((float)(auVar12._8_8_ * (double)*(float *)((longlong)pvVar2 + 0x24)) *
      *(float *)(lVar3 + 0x30) +
      (float)(dVar5 * (double)*(float *)((longlong)pvVar2 + 0x20)) * *(float *)(lVar3 + 0x2c) +
      (0.0 - fVar18) * *(float *)((longlong)pvVar2 + 0x28) * *(float *)(lVar3 + 0x34) < 0.0) {
    fVar22 = *(float *)(lVar3 + 0x28);
    fVar19 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
    local_150.Geometry._0_4_ = (float)*(undefined8 *)(lVar3 + 0x20);
  }
  else {
    fVar22 = *(float *)(lVar3 + 0x38);
    local_150.Geometry._0_4_ = *(float *)(lVar3 + 0x2c) * fVar22 + *(float *)(lVar3 + 0x20);
    fVar19 = *(float *)(lVar3 + 0x30) * fVar22 + *(float *)(lVar3 + 0x24);
    fVar22 = *(float *)(lVar3 + 0x34) * fVar22 + *(float *)(lVar3 + 0x28);
  }
  fVar26 = ((fVar25 * fVar20 + fVar27 + fVar15) - *(float *)((longlong)pvVar2 + 0x24) * fVar19) *
           fVar31 + ((fVar25 * fVar17 + fVar26 + fVar24) -
                    *(float *)((longlong)pvVar2 + 0x20) * local_150.Geometry._0_4_) * fVar30 +
           ((fVar25 * fVar16 + fVar28 + fVar29) - *(float *)((longlong)pvVar2 + 0x28) * fVar22) *
           fVar18;
  auVar13._4_4_ = -(uint)(fVar26 < fVar33 - fVar14);
  auVar13._0_4_ = -(uint)(fVar26 < fVar32 - fVar14);
  auVar13._8_4_ = -(uint)(fVar26 < fVar32 - fVar14);
  auVar13._12_4_ = -(uint)(fVar26 < fVar33 - fVar14);
  iVar9 = movmskps((int)lVar3,auVar13);
  if (iVar9 == 0) {
    local_150.Margin = *(float *)((longlong)pvVar2 + 0x10);
    if (0.0 < *(float *)(lVar3 + 0x10)) {
      local_150.Radius = *(float *)((longlong)pvVar2 + 0x10);
    }
    local_150.Func =
         Chaos::FGeomGJKHelperSIMD::
         SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>;
    local_118.Geometry = &local_d8;
    local_118.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_118.Margin = 0.0;
    local_118.Radius = 0.0;
    local_150.Geometry = pvVar2;
    bVar8 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      (&local_118,&local_150,(__m128 *)(lVar1 + 0x120),&local_e8,
                       (__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),local_158,
                       &local_128,&local_f8,true,&GlobalVectorConstants::Float1000);
    if (bVar8) {
      lVar1 = *(longlong *)this;
      local_128.m128_f32[0] = local_128.m128_f32[0] + param_2->m128_f32[0];
      local_128.m128_f32[1] = local_128.m128_f32[1] + param_2->m128_f32[1];
      local_128.m128_f32[2] = local_128.m128_f32[2] + param_2->m128_f32[2];
      local_128.m128_f32[3] = local_128.m128_f32[3] + param_2->m128_f32[3];
      local_150.Geometry =
           (void *)(double)(local_f8.m128_f32[1] * *(float *)(lVar1 + 0x114) +
                            local_f8.m128_f32[0] * *(float *)(lVar1 + 0x110) +
                           local_f8.m128_f32[2] * *(float *)(lVar1 + 0x118));
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                ((double)local_150.Geometry,**(double **)((longlong)this + 8),(double)local_158[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),local_138,(double *)&local_150)
      ;
      pdVar4 = *(double **)((longlong)this + 8);
      local_138[0] = *pdVar4 * local_138[0];
      if (local_138[0] < *pdVar4) {
        *pdVar4 = local_138[0];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_f8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_f8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_f8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_128.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_128.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_128.m128_f32[2];
        **(double **)this = local_138[0];
        *(void **)(*(longlong *)this + 8) = local_150.Geometry;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar8 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}

// operator() @ 143b07210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::VisitSweep'::
__l2::<lambda_1>::operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double *pdVar2;
  bool bVar3;
  int iVar4;
  TVector<double,3> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_1b8 [32];
  undefined8 local_158;
  float local_150 [2];
  double local_148;
  FGeomGJKHelperSIMD local_140;
  undefined1 local_128 [8];
  undefined8 local_120;
  _func___cdecl___m128_void_ptr_float___m128 *local_118;
  __m128 local_108;
  __m128 local_f8;
  __m128 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  fVar22 = param_2->m128_f32[0];
  fVar23 = param_2->m128_f32[1];
  fVar24 = param_2->m128_f32[2];
  fVar14 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_a8 = param_3->m128_f32[0] - fVar22;
  fStack_a4 = param_3->m128_f32[1] - fVar23;
  fStack_a0 = param_3->m128_f32[2] - fVar24;
  fStack_9c = param_3->m128_f32[3] - fVar14;
  local_b8 = 0;
  uStack_b0 = 0;
  local_98 = param_4->m128_f32[0] - fVar22;
  fStack_94 = param_4->m128_f32[1] - fVar23;
  fStack_90 = param_4->m128_f32[2] - fVar24;
  fStack_8c = param_4->m128_f32[3] - fVar14;
  local_e8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar22);
  local_e8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar23);
  local_e8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar24);
  local_e8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar14);
  fVar22 = fVar22 - *(float *)(lVar1 + 0xf0);
  fVar23 = fVar23 - *(float *)(lVar1 + 0xf4);
  fVar24 = fVar24 - *(float *)(lVar1 + 0xf8);
  dVar15 = *(double *)(lVar1 + 0xb8);
  fVar16 = *(float *)(lVar1 + 0x120) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar17 = *(float *)(lVar1 + 0x124) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar18 = *(float *)(lVar1 + 0x128) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar19 = *(float *)(lVar1 + 300) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar11 = fStack_94 * local_a8 - fStack_a4 * local_98;
  fVar12 = fStack_90 * fStack_a4 - fStack_a0 * fStack_94;
  fVar13 = local_98 * fStack_a0 - local_a8 * fStack_90;
  fVar14 = fStack_8c * fStack_9c - fStack_9c * fStack_8c;
  fVar14 = fVar14 * fVar14;
  fVar8 = fVar13 * fVar13 + fVar12 * fVar12;
  fVar9 = fVar12 * fVar12 + fVar13 * fVar13;
  fVar10 = fVar14 + fVar11 * fVar11;
  fVar14 = fVar11 * fVar11 + fVar14;
  auVar6._0_4_ = fVar10 + fVar8;
  auVar6._4_4_ = fVar14 + fVar9;
  auVar6._8_4_ = fVar8 + fVar10;
  auVar6._12_4_ = fVar9 + fVar14;
  auVar7 = sqrtps(auVar6,auVar6);
  auVar7 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar7);
  fVar12 = auVar7._0_4_ * fVar12;
  fVar13 = auVar7._4_4_ * fVar13;
  fVar11 = auVar7._8_4_ * fVar11;
  fVar14 = fVar13 * fVar16 - fVar17 * fVar12;
  fVar8 = fVar11 * fVar17 - fVar18 * fVar13;
  fVar9 = fVar12 * fVar18 - fVar16 * fVar11;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar14 = fVar14 + fVar14;
  fVar10 = fVar23 * fVar16 - fVar17 * fVar22;
  fVar20 = fVar24 * fVar17 - fVar18 * fVar23;
  fVar21 = fVar22 * fVar18 - fVar16 * fVar24;
  fVar12 = fVar19 * fVar8 + fVar12 + (fVar14 * fVar17 - fVar18 * fVar9);
  fVar13 = fVar19 * fVar9 + fVar13 + (fVar8 * fVar18 - fVar16 * fVar14);
  fVar9 = fVar19 * fVar14 + fVar11 + (fVar9 * fVar16 - fVar17 * fVar8);
  fVar20 = fVar20 + fVar20;
  fVar21 = fVar21 + fVar21;
  fVar10 = fVar10 + fVar10;
  lVar1 = *(longlong *)(lVar1 + 0xb0);
  local_158._0_4_ = -1;
  local_d8 = (double)(0.0 - fVar12);
  dStack_d0 = (double)(0.0 - fVar13);
  local_c8 = (double)(0.0 - fVar9);
  local_120 = (double)*(float *)(lVar1 + 0x24);
  local_128 = (undefined1  [8])(double)*(float *)(lVar1 + 0x20);
  local_118 = (_func___cdecl___m128_void_ptr_float___m128 *)(double)*(float *)(lVar1 + 0x28);
  pTVar5 = Chaos::FConvex::SupportCoreScaled
                     (*(FConvex **)(lVar1 + 0x70),(TVector<double,3> *)&local_140,
                      (TVector<double,3> *)&local_d8,0.0,(TVector<double,3> *)local_128,
                      (double *)0x0,(int *)&local_158);
  fVar14 = (float)dVar15;
  fVar8 = (float)dVar15;
  fVar22 = ((fVar19 * fVar21 + fVar23 + (fVar20 * fVar18 - fVar16 * fVar10)) -
           (float)(double)CONCAT44(local_140.Radius,local_140.Margin)) * fVar13 +
           ((fVar19 * fVar20 + fVar22 + (fVar10 * fVar17 - fVar18 * fVar21)) -
           (float)(double)local_140.Geometry) * fVar12 +
           ((fVar19 * fVar10 + fVar24 + (fVar21 * fVar16 - fVar17 * fVar20)) -
           (float)(double)local_140.Func) * fVar9;
  auVar7._4_4_ = -(uint)(fVar22 < fVar8);
  auVar7._0_4_ = -(uint)(fVar22 < fVar14);
  auVar7._8_4_ = -(uint)(fVar22 < fVar14);
  auVar7._12_4_ = -(uint)(fVar22 < fVar8);
  iVar4 = movmskps((int)pTVar5,auVar7);
  if (iVar4 == 0) {
    lVar1 = *(longlong *)this;
    local_140.Geometry = *(void **)(lVar1 + 0xb0);
    local_140.Margin = *(float *)((longlong)local_140.Geometry + 0x10);
    local_140.Func =
         Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>
    ;
    local_118 = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_140.Radius = 0.0;
    local_120._0_4_ = 0.0;
    local_120._4_4_ = 0.0;
    local_128 = (undefined1  [8])&local_b8;
    bVar3 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      ((FGeomGJKHelperSIMD *)local_128,&local_140,(__m128 *)(lVar1 + 0x120),
                       &local_e8,(__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),
                       local_150,&local_108,&local_f8,true,&GlobalVectorConstants::Float1000);
    if (bVar3) {
      lVar1 = *(longlong *)this;
      local_108.m128_f32[0] = local_108.m128_f32[0] + param_2->m128_f32[0];
      local_108.m128_f32[1] = local_108.m128_f32[1] + param_2->m128_f32[1];
      local_108.m128_f32[2] = local_108.m128_f32[2] + param_2->m128_f32[2];
      local_108.m128_f32[3] = local_108.m128_f32[3] + param_2->m128_f32[3];
      local_148 = (double)(*(float *)(lVar1 + 0x114) * local_f8.m128_f32[1] +
                           *(float *)(lVar1 + 0x110) * local_f8.m128_f32[0] +
                          *(float *)(lVar1 + 0x118) * local_f8.m128_f32[2]);
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                (local_148,**(double **)((longlong)this + 8),(double)local_150[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),(double *)&local_158,&local_148
                );
      pdVar2 = *(double **)((longlong)this + 8);
      dVar15 = *pdVar2 * (double)CONCAT44(local_158._4_4_,(int)local_158);
      if (dVar15 < *pdVar2) {
        *pdVar2 = dVar15;
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_f8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_f8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_f8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_108.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_108.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_108.m128_f32[2];
        **(double **)this = dVar15;
        *(double *)(*(longlong *)this + 8) = local_148;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar3 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 143b07680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::<lambda_1>::
operator()(void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double *pdVar2;
  bool bVar3;
  int iVar4;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  double local_120;
  double local_118 [2];
  __m128 local_108;
  FGeomGJKHelperSIMD local_f8;
  FGeomGJKHelperSIMD local_e0;
  __m128 local_c8;
  __m128 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar20 = param_2->m128_f32[0];
  fVar21 = param_2->m128_f32[1];
  fVar22 = param_2->m128_f32[2];
  fVar15 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_98 = param_3->m128_f32[0] - fVar20;
  fStack_94 = param_3->m128_f32[1] - fVar21;
  fStack_90 = param_3->m128_f32[2] - fVar22;
  fStack_8c = param_3->m128_f32[3] - fVar15;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = param_4->m128_f32[0] - fVar20;
  fStack_84 = param_4->m128_f32[1] - fVar21;
  fStack_80 = param_4->m128_f32[2] - fVar22;
  fStack_7c = param_4->m128_f32[3] - fVar15;
  local_b8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar20);
  local_b8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar21);
  local_b8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar22);
  local_b8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar15);
  fVar20 = fVar20 - *(float *)(lVar1 + 0xf0);
  fVar21 = fVar21 - *(float *)(lVar1 + 0xf4);
  fVar22 = fVar22 - *(float *)(lVar1 + 0xf8);
  local_f8.Geometry = *(void **)(lVar1 + 0xb0);
  fVar23 = (float)*(double *)(lVar1 + 0xb8);
  fVar24 = (float)*(double *)(lVar1 + 0xb8);
  local_f8.Margin = *(float *)((longlong)local_f8.Geometry + 0x10);
  fVar10 = fStack_84 * local_98 - fStack_94 * local_88;
  fVar11 = fStack_80 * fStack_94 - fStack_90 * fStack_84;
  fVar13 = local_88 * fStack_90 - local_98 * fStack_80;
  fVar15 = fStack_7c * fStack_8c - fStack_8c * fStack_7c;
  fVar15 = fVar15 * fVar15;
  fVar7 = fVar13 * fVar13 + fVar11 * fVar11;
  fVar8 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar9 = fVar15 + fVar10 * fVar10;
  fVar15 = fVar10 * fVar10 + fVar15;
  auVar5._0_4_ = fVar9 + fVar7;
  auVar5._4_4_ = fVar15 + fVar8;
  auVar5._8_4_ = fVar7 + fVar9;
  auVar5._12_4_ = fVar8 + fVar15;
  auVar6 = sqrtps(auVar5,auVar5);
  auVar6 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar6);
  fVar11 = auVar6._0_4_ * fVar11;
  fVar13 = auVar6._4_4_ * fVar13;
  fVar10 = auVar6._8_4_ * fVar10;
  fVar9 = ((__m128 *)(lVar1 + 0x120))->m128_f32[0] *
          GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar12 = *(float *)(lVar1 + 0x124) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar14 = *(float *)(lVar1 + 0x128) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar16 = *(float *)(lVar1 + 300) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar17 = fVar13 * fVar9 - fVar12 * fVar11;
  fVar18 = fVar10 * fVar12 - fVar14 * fVar13;
  fVar19 = fVar11 * fVar14 - fVar9 * fVar10;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar17 = fVar17 + fVar17;
  fVar15 = fVar21 * fVar9 - fVar20 * fVar12;
  fVar7 = fVar22 * fVar12 - fVar21 * fVar14;
  fVar8 = fVar20 * fVar14 - fVar22 * fVar9;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar15 = fVar15 + fVar15;
  fVar20 = ((fVar16 * fVar8 + fVar21 + (fVar7 * fVar14 - fVar9 * fVar15)) -
           (float)((ulonglong)*(undefined8 *)((longlong)local_f8.Geometry + 0x20) >> 0x20)) *
           (fVar16 * fVar19 + fVar13 + (fVar18 * fVar14 - fVar9 * fVar17)) +
           ((fVar16 * fVar7 + fVar20 + (fVar15 * fVar12 - fVar14 * fVar8)) -
           (float)*(undefined8 *)((longlong)local_f8.Geometry + 0x20)) *
           (fVar16 * fVar18 + fVar11 + (fVar17 * fVar12 - fVar14 * fVar19)) +
           ((fVar16 * fVar15 + fVar22 + (fVar8 * fVar9 - fVar12 * fVar7)) -
           *(float *)((longlong)local_f8.Geometry + 0x28)) *
           (fVar16 * fVar17 + fVar10 + (fVar19 * fVar9 - fVar12 * fVar18));
  auVar6._4_4_ = -(uint)(fVar20 < fVar24 - local_f8.Margin);
  auVar6._0_4_ = -(uint)(fVar20 < fVar23 - local_f8.Margin);
  auVar6._8_4_ = -(uint)(fVar20 < fVar23 - local_f8.Margin);
  auVar6._12_4_ = -(uint)(fVar20 < fVar24 - local_f8.Margin);
  iVar4 = movmskps((int)param_4,auVar6);
  if (iVar4 == 0) {
    local_f8.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::TSphere<double,3>_>;
    local_e0.Geometry = &local_a8;
    local_e0.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_e0.Margin = 0.0;
    local_e0.Radius = 0.0;
    local_f8.Radius = local_f8.Margin;
    bVar3 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      (&local_e0,&local_f8,(__m128 *)(lVar1 + 0x120),&local_b8,
                       (__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),local_128,
                       &local_108,&local_c8,true,&GlobalVectorConstants::Float1000);
    if (bVar3) {
      lVar1 = *(longlong *)this;
      local_108.m128_f32[0] = local_108.m128_f32[0] + param_2->m128_f32[0];
      local_108.m128_f32[1] = local_108.m128_f32[1] + param_2->m128_f32[1];
      local_108.m128_f32[2] = local_108.m128_f32[2] + param_2->m128_f32[2];
      local_108.m128_f32[3] = local_108.m128_f32[3] + param_2->m128_f32[3];
      local_120 = (double)(local_c8.m128_f32[1] * *(float *)(lVar1 + 0x114) +
                           local_c8.m128_f32[0] * *(float *)(lVar1 + 0x110) +
                          local_c8.m128_f32[2] * *(float *)(lVar1 + 0x118));
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                (local_120,**(double **)((longlong)this + 8),(double)local_128[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),local_118,&local_120);
      pdVar2 = *(double **)((longlong)this + 8);
      local_118[0] = *pdVar2 * local_118[0];
      if (local_118[0] < *pdVar2) {
        *pdVar2 = local_118[0];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_c8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_c8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_c8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_108.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_108.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_108.m128_f32[2];
        **(double **)this = local_118[0];
        *(double *)(*(longlong *)this + 8) = local_120;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar3 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 143b07a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  void *pvVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auVar5 [12];
  bool bVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_188 [32];
  float local_128 [2];
  FGeomGJKHelperSIMD local_120;
  double local_108 [2];
  __m128 local_f8;
  FGeomGJKHelperSIMD local_e8;
  __m128 local_c8;
  __m128 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_188;
  fVar23 = param_2->m128_f32[0];
  fVar24 = param_2->m128_f32[1];
  fVar25 = param_2->m128_f32[2];
  fVar26 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_98 = param_3->m128_f32[0] - fVar23;
  fStack_94 = param_3->m128_f32[1] - fVar24;
  fStack_90 = param_3->m128_f32[2] - fVar25;
  fStack_8c = param_3->m128_f32[3] - fVar26;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = param_4->m128_f32[0] - fVar23;
  fStack_84 = param_4->m128_f32[1] - fVar24;
  fStack_80 = param_4->m128_f32[2] - fVar25;
  fStack_7c = param_4->m128_f32[3] - fVar26;
  local_b8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar23);
  local_b8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar24);
  local_b8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar25);
  local_b8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar26);
  pvVar2 = *(void **)(lVar1 + 0xb0);
  fVar23 = fVar23 - *(float *)(lVar1 + 0xf0);
  fVar24 = fVar24 - *(float *)(lVar1 + 0xf4);
  fVar25 = fVar25 - *(float *)(lVar1 + 0xf8);
  fVar26 = fVar26 - *(float *)(lVar1 + 0xfc);
  fVar27 = (float)*(double *)(lVar1 + 0xb8);
  fVar28 = (float)*(double *)(lVar1 + 0xb8);
  local_120.Margin = *(float *)((longlong)pvVar2 + 0x10);
  fVar15 = fStack_84 * local_98 - fStack_94 * local_88;
  fVar16 = fStack_80 * fStack_94 - fStack_90 * fStack_84;
  fVar17 = local_88 * fStack_90 - local_98 * fStack_80;
  fVar18 = fStack_7c * fStack_8c - fStack_8c * fStack_7c;
  fVar19 = ((__m128 *)(lVar1 + 0x120))->m128_f32[0] *
           GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar20 = *(float *)(lVar1 + 0x124) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar21 = *(float *)(lVar1 + 0x128) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar22 = *(float *)(lVar1 + 300) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar18 = fVar18 * fVar18;
  fVar12 = fVar17 * fVar17 + fVar16 * fVar16;
  fVar13 = fVar16 * fVar16 + fVar17 * fVar17;
  fVar14 = fVar18 + fVar15 * fVar15;
  fVar18 = fVar15 * fVar15 + fVar18;
  auVar8._0_4_ = fVar14 + fVar12;
  auVar8._4_4_ = fVar18 + fVar13;
  auVar8._8_4_ = fVar12 + fVar14;
  auVar8._12_4_ = fVar13 + fVar18;
  auVar8 = sqrtps(auVar8,auVar8);
  auVar8 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar8);
  fVar16 = auVar8._0_4_ * fVar16;
  fVar17 = auVar8._4_4_ * fVar17;
  fVar15 = auVar8._8_4_ * fVar15;
  fVar18 = fVar17 * fVar19 - fVar20 * fVar16;
  fVar12 = fVar15 * fVar20 - fVar21 * fVar17;
  fVar13 = fVar16 * fVar21 - fVar19 * fVar15;
  fVar12 = fVar12 + fVar12;
  fVar13 = fVar13 + fVar13;
  fVar18 = fVar18 + fVar18;
  fVar16 = fVar12 * fVar22 + fVar16 + (fVar18 * fVar20 - fVar13 * fVar21);
  fVar17 = fVar13 * fVar22 + fVar17 + (fVar12 * fVar21 - fVar18 * fVar19);
  fVar15 = fVar18 * fVar22 + fVar15 + (fVar13 * fVar19 - fVar12 * fVar20);
  fVar18 = 0.0 - fVar16;
  fVar12 = fVar24 * fVar19 - fVar23 * fVar20;
  fVar13 = fVar25 * fVar20 - fVar24 * fVar21;
  fVar14 = fVar23 * fVar21 - fVar25 * fVar19;
  fVar26 = fVar26 * fVar22 - fVar26 * fVar22;
  fVar13 = fVar13 + fVar13;
  fVar14 = fVar14 + fVar14;
  fVar12 = fVar12 + fVar12;
  auVar9._0_4_ = fVar13 * fVar20;
  auVar9._4_4_ = fVar14 * fVar21;
  auVar9._8_4_ = fVar12 * fVar19;
  auVar9._12_4_ = (fVar26 + fVar26) * fVar22;
  dVar4 = (double)(0.0 - fVar17);
  auVar5._4_8_ = auVar9._8_8_;
  auVar5._0_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
  auVar10._0_8_ = auVar5._0_8_ << 0x20;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  if ((float)auVar10._8_8_ * *(float *)((longlong)pvVar2 + 0x30) +
      fVar18 * *(float *)((longlong)pvVar2 + 0x2c) +
      (0.0 - fVar15) * *(float *)((longlong)pvVar2 + 0x34) < 0.0) {
    fVar26 = *(float *)((longlong)pvVar2 + 0x28);
    fVar18 = (float)((ulonglong)*(undefined8 *)((longlong)pvVar2 + 0x20) >> 0x20);
    local_120.Geometry._0_4_ = (float)*(undefined8 *)((longlong)pvVar2 + 0x20);
  }
  else {
    fVar26 = *(float *)((longlong)pvVar2 + 0x38);
    local_120.Geometry._0_4_ =
         fVar26 * *(float *)((longlong)pvVar2 + 0x2c) + *(float *)((longlong)pvVar2 + 0x20);
    fVar18 = fVar26 * *(float *)((longlong)pvVar2 + 0x30) + *(float *)((longlong)pvVar2 + 0x24);
    fVar26 = fVar26 * *(float *)((longlong)pvVar2 + 0x34) + *(float *)((longlong)pvVar2 + 0x28);
  }
  fVar23 = ((fVar14 * fVar22 + fVar24 + (fVar13 * fVar21 - auVar9._8_4_)) - fVar18) * fVar17 +
           ((fVar13 * fVar22 + fVar23 + (fVar12 * fVar20 - auVar9._4_4_)) - local_120.Geometry._0_4_
           ) * fVar16 +
           ((fVar12 * fVar22 + fVar25 + (fVar14 * fVar19 - auVar9._0_4_)) - fVar26) * fVar15;
  auVar11._4_4_ = -(uint)(fVar23 < fVar28 - local_120.Margin);
  auVar11._0_4_ = -(uint)(fVar23 < fVar27 - local_120.Margin);
  auVar11._8_4_ = -(uint)(fVar23 < fVar27 - local_120.Margin);
  auVar11._12_4_ = -(uint)(fVar23 < fVar28 - local_120.Margin);
  iVar7 = movmskps((int)param_4,auVar11);
  if (iVar7 == 0) {
    local_120.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FCapsule>;
    local_e8.Geometry = &local_a8;
    local_e8.Func = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_e8.Margin = 0.0;
    local_e8.Radius = 0.0;
    local_120.Geometry = pvVar2;
    local_120.Radius = local_120.Margin;
    bVar6 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      (&local_e8,&local_120,(__m128 *)(lVar1 + 0x120),&local_b8,
                       (__m128 *)(lVar1 + 0x110),(float)**(double **)((longlong)this + 8),local_128,
                       &local_f8,&local_c8,true,&GlobalVectorConstants::Float1000);
    if (bVar6) {
      lVar1 = *(longlong *)this;
      local_f8.m128_f32[0] = local_f8.m128_f32[0] + param_2->m128_f32[0];
      local_f8.m128_f32[1] = local_f8.m128_f32[1] + param_2->m128_f32[1];
      local_f8.m128_f32[2] = local_f8.m128_f32[2] + param_2->m128_f32[2];
      local_f8.m128_f32[3] = local_f8.m128_f32[3] + param_2->m128_f32[3];
      local_120.Geometry =
           (void *)(double)(local_c8.m128_f32[1] * *(float *)(lVar1 + 0x114) +
                            local_c8.m128_f32[0] * *(float *)(lVar1 + 0x110) +
                           local_c8.m128_f32[2] * *(float *)(lVar1 + 0x118));
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                ((double)local_120.Geometry,**(double **)((longlong)this + 8),(double)local_128[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),local_108,(double *)&local_120)
      ;
      pdVar3 = *(double **)((longlong)this + 8);
      local_108[0] = *pdVar3 * local_108[0];
      if (local_108[0] < *pdVar3) {
        *pdVar3 = local_108[0];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_c8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_c8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_c8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_f8.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_f8.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_f8.m128_f32[2];
        **(double **)this = local_108[0];
        *(void **)(*(longlong *)this + 8) = local_120.Geometry;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar6 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar6 = true;
  }
  return bVar6;
}

// operator() @ 143b07ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`Chaos::THeightfieldSweepVisitorCCD<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::operator()
          (void *this,int param_1,__m128 *param_2,__m128 *param_3,__m128 *param_4)

{
  longlong lVar1;
  double *pdVar2;
  bool bVar3;
  int iVar4;
  __m128 *p_Var5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
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
  undefined1 auStackY_1a8 [32];
  float local_148 [4];
  undefined1 local_138 [16];
  code *local_128;
  __m128 local_118;
  code *local_108;
  __m128 local_f8;
  __m128 local_e8;
  __m128 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  fVar24 = param_2->m128_f32[0];
  fVar25 = param_2->m128_f32[1];
  fVar26 = param_2->m128_f32[2];
  fVar8 = param_2->m128_f32[3];
  lVar1 = *(longlong *)this;
  local_b8 = param_3->m128_f32[0] - fVar24;
  fStack_b4 = param_3->m128_f32[1] - fVar25;
  fStack_b0 = param_3->m128_f32[2] - fVar26;
  fStack_ac = param_3->m128_f32[3] - fVar8;
  local_c8 = 0;
  uStack_c0 = 0;
  local_a8 = param_4->m128_f32[0] - fVar24;
  fStack_a4 = param_4->m128_f32[1] - fVar25;
  fStack_a0 = param_4->m128_f32[2] - fVar26;
  fStack_9c = param_4->m128_f32[3] - fVar8;
  local_d8.m128_f32[0] = (float)(*(double *)(lVar1 + 0x70) - (double)fVar24);
  local_d8.m128_f32[1] = (float)(*(double *)(lVar1 + 0x78) - (double)fVar25);
  local_d8.m128_f32[2] = (float)(*(double *)(lVar1 + 0x80) - (double)fVar26);
  local_d8.m128_f32[3] = (float)(*(double *)(lVar1 + 0x88) - (double)fVar8);
  fVar24 = fVar24 - *(float *)(lVar1 + 0xf0);
  fVar25 = fVar25 - *(float *)(lVar1 + 0xf4);
  fVar26 = fVar26 - *(float *)(lVar1 + 0xf8);
  dVar16 = *(double *)(lVar1 + 0xb8);
  fVar17 = *(float *)(lVar1 + 0x120) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[0];
  fVar18 = *(float *)(lVar1 + 0x124) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[1];
  fVar19 = *(float *)(lVar1 + 0x128) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[2];
  fVar20 = *(float *)(lVar1 + 300) * GlobalVectorConstants::QINV_SIGN_MASK.m128_f32[3];
  fVar12 = fStack_a4 * local_b8 - fStack_b4 * local_a8;
  fVar13 = fStack_a0 * fStack_b4 - fStack_b0 * fStack_a4;
  fVar14 = local_a8 * fStack_b0 - local_b8 * fStack_a0;
  fVar15 = fStack_9c * fStack_ac - fStack_ac * fStack_9c;
  fVar8 = fVar14 * fVar14 + fVar13 * fVar13;
  fVar9 = fVar13 * fVar13 + fVar14 * fVar14;
  fVar10 = fVar15 * fVar15 + fVar12 * fVar12;
  fVar11 = fVar12 * fVar12 + fVar15 * fVar15;
  auVar6._0_4_ = fVar10 + fVar8;
  auVar6._4_4_ = fVar11 + fVar9;
  auVar6._8_4_ = fVar8 + fVar10;
  auVar6._12_4_ = fVar9 + fVar11;
  auVar7 = sqrtps(auVar6,auVar6);
  auVar7 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar7);
  fVar13 = auVar7._0_4_ * fVar13;
  fVar14 = auVar7._4_4_ * fVar14;
  fVar12 = auVar7._8_4_ * fVar12;
  fVar15 = auVar7._12_4_ * fVar15;
  fVar8 = fVar14 * fVar17 - fVar18 * fVar13;
  fVar9 = fVar12 * fVar18 - fVar19 * fVar14;
  fVar10 = fVar13 * fVar19 - fVar17 * fVar12;
  fVar11 = fVar15 * fVar20 - fVar20 * fVar15;
  fVar9 = fVar9 + fVar9;
  fVar10 = fVar10 + fVar10;
  fVar8 = fVar8 + fVar8;
  fVar11 = fVar11 + fVar11;
  fVar21 = fVar25 * fVar17 - fVar24 * fVar18;
  fVar22 = fVar26 * fVar18 - fVar25 * fVar19;
  fVar23 = fVar24 * fVar19 - fVar26 * fVar17;
  fVar13 = fVar20 * fVar9 + fVar13 + (fVar8 * fVar18 - fVar19 * fVar10);
  fVar14 = fVar20 * fVar10 + fVar14 + (fVar9 * fVar19 - fVar17 * fVar8);
  fVar10 = fVar20 * fVar8 + fVar12 + (fVar10 * fVar17 - fVar18 * fVar9);
  fVar22 = fVar22 + fVar22;
  fVar23 = fVar23 + fVar23;
  fVar21 = fVar21 + fVar21;
  local_138._8_4_ = 0.0 - fVar10;
  local_138._12_4_ = 0.0 - (fVar20 * fVar11 + fVar15 + (fVar11 * fVar20 - fVar20 * fVar11));
  local_138._4_4_ = 0.0 - fVar14;
  local_138._0_4_ = 0.0 - fVar13;
  p_Var5 = Chaos::FConvex::SupportCoreSimd
                     (*(FConvex **)(lVar1 + 0xb0),&local_118,(__m128 *)local_138,0.0);
  fVar8 = (float)dVar16;
  fVar9 = (float)dVar16;
  fVar24 = ((fVar20 * fVar23 + fVar25 + (fVar22 * fVar19 - fVar17 * fVar21)) - local_118.m128_f32[1]
           ) * fVar14 +
           ((fVar20 * fVar22 + fVar24 + (fVar21 * fVar18 - fVar19 * fVar23)) - local_118.m128_f32[0]
           ) * fVar13 +
           ((fVar20 * fVar21 + fVar26 + (fVar23 * fVar17 - fVar18 * fVar22)) - local_118.m128_f32[2]
           ) * fVar10;
  auVar7._4_4_ = -(uint)(fVar24 < fVar9);
  auVar7._0_4_ = -(uint)(fVar24 < fVar8);
  auVar7._8_4_ = -(uint)(fVar24 < fVar8);
  auVar7._12_4_ = -(uint)(fVar24 < fVar9);
  iVar4 = movmskps((int)p_Var5,auVar7);
  if (iVar4 == 0) {
    lVar1 = *(longlong *)this;
    local_138._0_8_ = *(ulong64 *)(lVar1 + 0xb0);
    local_138._8_4_ = *(float *)(local_138._0_8_ + 0x10);
    local_128 = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FConvex>;
    local_118.m128_u64[0] = (ulong64)&local_c8;
    local_108 = Chaos::FGeomGJKHelperSIMD::SupportCoreSimd<Chaos::FTriangleRegister>;
    local_138._12_4_ = 0.0;
    local_118.m128_u64[1] = 0;
    bVar3 = Chaos::GJKRaycast2ImplSimd<__m128,1>
                      ((FGeomGJKHelperSIMD *)&local_118,(FGeomGJKHelperSIMD *)local_138,
                       (__m128 *)(lVar1 + 0x120),&local_d8,(__m128 *)(lVar1 + 0x110),
                       (float)**(double **)((longlong)this + 8),local_148,&local_f8,&local_e8,true,
                       &GlobalVectorConstants::Float1000);
    if (bVar3) {
      lVar1 = *(longlong *)this;
      local_f8.m128_f32[0] = local_f8.m128_f32[0] + param_2->m128_f32[0];
      local_f8.m128_f32[1] = local_f8.m128_f32[1] + param_2->m128_f32[1];
      local_f8.m128_f32[2] = local_f8.m128_f32[2] + param_2->m128_f32[2];
      local_f8.m128_f32[3] = local_f8.m128_f32[3] + param_2->m128_f32[3];
      local_138._0_8_ =
           (undefined8)
           (*(float *)(lVar1 + 0x114) * local_e8.m128_f32[1] +
            *(float *)(lVar1 + 0x110) * local_e8.m128_f32[0] +
           *(float *)(lVar1 + 0x118) * local_e8.m128_f32[2]);
      Chaos::ComputeSweptContactTOIAndPhiAtTargetPenetration
                ((double)local_138._0_8_,**(double **)((longlong)this + 8),(double)local_148[0],
                 *(double *)(lVar1 + 0xb8),*(double *)(lVar1 + 0xc0),(double *)local_118.m128_f32,
                 (double *)local_138);
      pdVar2 = *(double **)((longlong)this + 8);
      dVar16 = *pdVar2 * (double)local_118.m128_u64[0];
      if (dVar16 < *pdVar2) {
        *pdVar2 = dVar16;
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x28) = (double)local_e8.m128_f32[0];
        *(double *)(lVar1 + 0x30) = (double)local_e8.m128_f32[1];
        *(double *)(lVar1 + 0x38) = (double)local_e8.m128_f32[2];
        lVar1 = *(longlong *)this;
        *(double *)(lVar1 + 0x10) = (double)local_f8.m128_f32[0];
        *(double *)(lVar1 + 0x18) = (double)local_f8.m128_f32[1];
        *(double *)(lVar1 + 0x20) = (double)local_f8.m128_f32[2];
        **(double **)this = dVar16;
        *(undefined8 *)(*(longlong *)this + 8) = local_138._0_8_;
        *(int *)(*(longlong *)this + 0x40) = param_1;
      }
    }
    bVar3 = 0.0 < **(double **)((longlong)this + 8);
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

// VisitSweep @ 143b4cf00

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_> *this,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TBox<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4d3e0

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
VisitSweep(THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *this
          ,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::
              THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::
              THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TBox<double,3>,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4d8c0

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>::
VisitSweep(THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
           *this,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::
              THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
              ::VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::
              THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::TSphere<double,3>,1>_>
              ::VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4dda0

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *this,
          int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
              ::VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FCapsule,1>_>
              ::VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4e280

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this,
          int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::
              VisitSweep'::__l2::<lambda_1>::operator()
                        (&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4e760

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_> *this,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::TSphere<double,3>_>::VisitSweep'::__l2::
              <lambda_1>::operator()(&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4ec40

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::FCapsule>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::FCapsule> *this,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::FCapsule> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::FCapsule>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

// VisitSweep @ 143b4f120

bool __thiscall
Chaos::THeightfieldSweepVisitorCCD<Chaos::FConvex>::VisitSweep
          (THeightfieldSweepVisitorCCD<Chaos::FConvex> *this,int param_1,double *param_2)

{
  FData<unsigned_short> *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  THeightfieldSweepVisitorCCD<Chaos::FConvex> *local_d8;
  double *local_d0;
  __m128 local_c8;
  __m128 local_b8;
  __m128 local_a8;
  __m128 local_98 [8];
  
  if ((-1 < param_1) && (pFVar1 = this->HfData, param_1 < (pFVar1->MaterialIndices).ArrayNum)) {
    uVar6 = 0;
    if (param_1 < (pFVar1->MaterialIndices).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((pFVar1->MaterialIndices).AllocatorInstance.Data[param_1] == (FScriptContainerElement)0xff)
    {
      return true;
    }
  }
  pFVar1 = this->HfData;
  uVar8 = param_1 / (int)(pFVar1->NumCols - 1) + param_1;
  uVar6 = 0;
  if ((int)uVar8 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  local_d8 = this;
  local_d0 = param_2;
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar6 = uVar8 + 1;
  uVar10 = 0;
  if ((int)uVar6 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  fVar36 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar8 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar9 = pFVar1->NumCols + uVar8;
  uVar10 = 0;
  if ((int)uVar9 < (pFVar1->Heights).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  fVar35 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar6 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar10 = pFVar1->NumCols + 1 + uVar8;
  uVar6 = 0;
  if ((int)uVar10 < (pFVar1->Heights).ArrayNum) {
    uVar6 = ~uVar10 >> 0x1f;
  }
  fVar34 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar9 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  fVar18 = (pFVar1->ScaleSimd).m128_f32[0];
  fVar19 = (pFVar1->ScaleSimd).m128_f32[1];
  fVar28 = (pFVar1->ScaleSimd).m128_f32[2];
  fVar30 = (pFVar1->ScaleSimd).m128_f32[3];
  iVar7 = (int)uVar8 / (int)(uint)pFVar1->NumCols;
  fVar27 = (float)((int)uVar8 % (int)(uint)pFVar1->NumCols);
  fVar32 = fVar27 + __real_3f800000;
  fVar24 = (float)iVar7;
  fVar33 = (float)((double)*(ushort *)
                            ((pFVar1->Heights).AllocatorInstance.Data + (longlong)(int)uVar10 * 2) *
                   pFVar1->HeightPerUnit + pFVar1->MinValue);
  fVar31 = fVar24 + __real_3f800000;
  fVar17 = fVar33;
  if (fVar34 <= fVar33) {
    fVar17 = fVar34;
  }
  local_c8.m128_f32[0] = fVar27 * fVar18;
  local_c8.m128_f32[1] = fVar24 * fVar19;
  local_c8.m128_f32[2] = fVar36 * fVar28;
  local_c8.m128_f32[3] = fVar30 * 0.0;
  if (fVar35 <= fVar17) {
    fVar17 = fVar35;
  }
  local_b8.m128_f32[0] = fVar32 * fVar18;
  local_b8.m128_f32[1] = fVar24 * fVar19;
  local_b8.m128_f32[2] = fVar35 * fVar28;
  local_b8.m128_f32[3] = fVar30 * 0.0;
  if (fVar36 <= fVar17) {
    fVar17 = fVar36;
  }
  local_a8.m128_f32[0] = fVar27 * fVar18;
  local_a8.m128_f32[1] = fVar31 * fVar19;
  local_a8.m128_f32[2] = fVar34 * fVar28;
  local_a8.m128_f32[3] = fVar30 * 0.0;
  auVar14._0_8_ = CONCAT44(fVar24 * fVar19,fVar27 * fVar18);
  auVar14._8_4_ = fVar17 * fVar28;
  auVar14._12_4_ = fVar30 * 0.0;
  fVar17 = fVar33;
  if (fVar33 <= fVar34) {
    fVar17 = fVar34;
  }
  auVar15._8_4_ = auVar14._8_4_;
  auVar15._0_8_ = auVar14._0_8_;
  auVar15._12_4_ = auVar14._12_4_;
  local_98[0]._0_4_ = fVar32 * fVar18;
  local_98[0]._4_4_ = fVar31 * fVar19;
  local_98[0]._8_4_ = fVar33 * fVar28;
  local_98[0]._12_4_ = fVar30 * 0.0;
  if (fVar17 <= fVar35) {
    fVar17 = fVar35;
  }
  fVar35 = (this->BoundsStartPointSimd).m128_f32[0];
  fVar34 = (this->BoundsStartPointSimd).m128_f32[1];
  fVar24 = (this->BoundsStartPointSimd).m128_f32[2];
  fVar27 = (this->BoundsStartPointSimd).m128_f32[3];
  if (fVar17 <= fVar36) {
    fVar17 = fVar36;
  }
  fVar33 = (float)*param_2;
  auVar20._0_4_ = fVar32 * fVar18;
  auVar20._4_4_ = fVar31 * fVar19;
  auVar20._8_4_ = fVar17 * fVar28;
  auVar20._12_4_ = fVar30 * 0.0;
  auVar29 = maxps(auVar14,auVar20);
  auVar14 = minps(auVar15,auVar20);
  uVar6 = (this->ParallelSimd).m128_u32[0];
  uVar8 = (this->ParallelSimd).m128_u32[1];
  uVar10 = (this->ParallelSimd).m128_u32[2];
  uVar9 = (this->ParallelSimd).m128_u32[3];
  fVar28 = auVar29._0_4_ + (this->Inflation3DSimd).m128_f32[0];
  fVar30 = auVar29._4_4_ + (this->Inflation3DSimd).m128_f32[1];
  fVar31 = auVar29._8_4_ + (this->Inflation3DSimd).m128_f32[2];
  fVar32 = auVar29._12_4_ + (this->Inflation3DSimd).m128_f32[3];
  fVar36 = auVar14._0_4_ - (this->Inflation3DSimd).m128_f32[0];
  fVar17 = auVar14._4_4_ - (this->Inflation3DSimd).m128_f32[1];
  fVar18 = auVar14._8_4_ - (this->Inflation3DSimd).m128_f32[2];
  fVar19 = auVar14._12_4_ - (this->Inflation3DSimd).m128_f32[3];
  auVar29._0_4_ = -(uint)(fVar28 < fVar35 || fVar35 < fVar36) & uVar6;
  auVar29._4_4_ = -(uint)(fVar30 < fVar34 || fVar34 < fVar17) & uVar8;
  auVar29._8_4_ = -(uint)(fVar31 < fVar24 || fVar24 < fVar18) & uVar10;
  auVar29._12_4_ = -(uint)(fVar32 < fVar27 || fVar27 < fVar19) & uVar9;
  iVar7 = movmskps(iVar7,auVar29);
  if (iVar7 == 0) {
    auVar21._0_4_ = uVar6 & (uint)fVar33;
    auVar21._4_4_ = uVar8 & (uint)fVar33;
    auVar21._8_4_ = uVar10 & (uint)fVar33;
    auVar21._12_4_ = uVar9 & (uint)fVar33;
    auVar25._0_8_ =
         CONCAT44(~uVar8 & (uint)((fVar17 - fVar34) * (this->InvDirSimd).m128_f32[1]),
                  ~uVar6 & (uint)((fVar36 - fVar35) * (this->InvDirSimd).m128_f32[0]));
    auVar25._8_4_ = ~uVar10 & (uint)((fVar18 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar25._12_4_ = ~uVar9 & (uint)((fVar19 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar13._0_4_ = ~uVar6 & (uint)((fVar28 - fVar35) * (this->InvDirSimd).m128_f32[0]);
    auVar13._4_4_ = ~uVar8 & (uint)((fVar30 - fVar34) * (this->InvDirSimd).m128_f32[1]);
    auVar13._8_4_ = ~uVar10 & (uint)((fVar31 - fVar24) * (this->InvDirSimd).m128_f32[2]);
    auVar13._12_4_ = ~uVar9 & (uint)((fVar32 - fVar27) * (this->InvDirSimd).m128_f32[3]);
    auVar22._8_4_ = auVar25._8_4_;
    auVar22._0_8_ = auVar25._0_8_;
    auVar22._12_4_ = auVar25._12_4_;
    auVar14 = maxps(auVar25,auVar13 | auVar21);
    auVar29 = minps(auVar22,auVar13 | auVar21);
    auVar26._12_4_ = auVar14._12_4_;
    auVar11._0_8_ = auVar14._4_8_;
    auVar11._8_4_ = auVar14._0_4_;
    auVar11._12_4_ = auVar26._12_4_;
    auVar23._12_4_ = auVar29._12_4_;
    auVar15 = minps(auVar14,auVar11);
    auVar26._4_4_ = auVar14._0_4_;
    auVar26._0_4_ = auVar14._8_4_;
    auVar26._8_4_ = auVar14._4_4_;
    auVar12._0_8_ = auVar29._4_8_;
    auVar12._8_4_ = auVar29._0_4_;
    auVar12._12_4_ = auVar23._12_4_;
    auVar14 = maxps(auVar29,auVar12);
    auVar15 = minps(auVar15,auVar26);
    auVar23._4_4_ = auVar29._0_4_;
    auVar23._0_4_ = auVar29._8_4_;
    auVar23._8_4_ = auVar29._4_4_;
    auVar14 = maxps(auVar14,auVar23);
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar33;
    auVar3._8_4_ = fVar33;
    auVar3._12_4_ = fVar33;
    auVar15 = minps(auVar15,auVar3);
    auVar14 = maxps(auVar14,ZEXT816(0));
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < auVar14._4_4_);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < auVar14._0_4_);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < auVar14._8_4_);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < auVar14._12_4_);
    iVar7 = movmskps(0,auVar16);
    if (iVar7 == 0) {
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_d8,param_1 * 2,&local_c8,&local_b8,local_98);
      if (!bVar4) {
        return false;
      }
      bVar4 = `Chaos::THeightfieldSweepVisitorCCD<Chaos::FConvex>::VisitSweep'::__l2::<lambda_1>::
              operator()(&local_d8,param_1 * 2 + 1,&local_c8,local_98,&local_a8);
      return bVar4;
    }
  }
  return true;
}

