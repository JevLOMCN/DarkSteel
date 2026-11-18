// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 14

// FJointConstraint @ 14ded63a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FJointConstraint * __thiscall
PBIK::FJointConstraint::FJointConstraint
          (FJointConstraint *this,FRigidBody *param_1,FRigidBody *param_2)

{
  double dVar1;
  FBone *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  TQuat<double> *this_00;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  
  this->A = param_1;
  *(undefined1 *)&this->_padding_ = 1;
  this->bInFinalPass = false;
  this->B = param_2;
  this->_padding_ = (longlong)&___7FJointConstraint_PBIK__6B_;
  pFVar2 = param_2->Bone;
  local_48 = (param_1->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dStack_40 = (param_1->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = (pFVar2->Position).field0_0x0._s_0.X;
  dVar5 = (pFVar2->Position).field0_0x0._s_0.Y;
  dVar1 = (pFVar2->Position).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_98._s_0.X = dVar4 - (param_1->Position).field0_0x0._s_0.X;
  local_58._8_4_ = SUB84(dVar3,0);
  local_58._0_8_ =
       (param_1->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_58._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_98._s_0.Y = dVar5 - (param_1->Position).field0_0x0._s_0.Y;
  local_98._s_0.Z = dVar1 - (param_1->Position).field0_0x0._s_0.Z;
  local_78._s_0.Z = dVar1;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_58,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  (this->PinPointLocalToA).field0_0x0._s_0.X = local_78._s_0.X;
  (this->PinPointLocalToA).field0_0x0._s_0.Y = local_78._s_0.Y;
  (this->PinPointLocalToA).field0_0x0._s_0.Z = local_78._s_0.Z;
  dVar3 = (param_2->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_48 = (param_2->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dStack_40 = (param_2->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_98._s_0.X = dVar4 - (param_2->Position).field0_0x0._s_0.X;
  local_98._s_0.Y = dVar5 - (param_2->Position).field0_0x0._s_0.Y;
  local_98._s_0.Z = dVar1 - (param_2->Position).field0_0x0._s_0.Z;
  local_58._8_4_ = SUB84(dVar3,0);
  local_58._0_8_ =
       (param_2->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_58._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_58,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  uVar6 = local_78._s_0.Z;
  this_00 = &param_2->InitialRotation;
  (this->PinPointLocalToB).field0_0x0._s_0.X = local_78._s_0.X;
  (this->PinPointLocalToB).field0_0x0._s_0.Y = local_78._s_0.Y;
  local_78._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_78._s_0.Y = _UNK_150689518;
  local_78._s_0.Z = 0.0;
  (this->PinPointLocalToB).field0_0x0._s_0.Z = (double)uVar6;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
  (this->XOrig).field0_0x0._s_0.X = local_98._s_0.X;
  (this->XOrig).field0_0x0._s_0.Y = local_98._s_0.Y;
  local_78._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_78._s_0.Y = _UNK_15061cbc8;
  local_78._s_0.Z = 0.0;
  (this->XOrig).field0_0x0._s_0.Z = local_98._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
  (this->YOrig).field0_0x0._s_0.X = local_98._s_0.X;
  (this->YOrig).field0_0x0._s_0.Y = local_98._s_0.Y;
  (this->YOrig).field0_0x0._s_0.Z = local_98._s_0.Z;
  local_78._s_0.Z = __real_3ff0000000000000;
  local_78._s_0.X = 0.0;
  local_78._s_0.Y = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_78._s_0);
  (this->ZOrig).field0_0x0._s_0.X = local_98._s_0.X;
  (this->ZOrig).field0_0x0._s_0.Y = local_98._s_0.Y;
  this->AngleY = 0.0;
  this->AngleZ = 0.0;
  this->AngleX = 0.0;
  (this->ZOrig).field0_0x0._s_0.Z = local_98._s_0.Z;
  return this;
}

// ~FJointConstraint @ 14ded68d0

void __thiscall PBIK::FJointConstraint::~FJointConstraint(FJointConstraint *this)

{
  this->_padding_ = (longlong)&___7FJointConstraint_PBIK__6B_;
  return;
}

// ApplyRotationCorrection @ 14ded9360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PBIK::FJointConstraint::ApplyRotationCorrection(FJointConstraint *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  fVar8 = __real_3f800000;
  dVar5 = param_1->X;
  dVar6 = param_1->Y;
  dVar7 = param_1->Z;
  dVar2 = param_1->W;
  dVar3 = (double)(__real_3f800000 - (this->A->J).RotationStiffness);
  dVar1 = dVar3 * dVar6;
  dVar4 = dVar3 * dVar2;
  local_58._8_4_ = SUB84(dVar1,0);
  local_58._0_8_ = dVar3 * dVar5;
  local_58._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_48._8_4_ = SUB84(dVar4,0);
  local_48._0_8_ = dVar3 * dVar7;
  local_48._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  FRigidBody::ApplyRotationDelta(this->A,(TQuat<double> *)local_58);
  dVar1 = (double)(fVar8 - (this->B->J).RotationStiffness);
  uVar9 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar3 = dVar1 * dVar6 * _UNK_15076c718;
  dVar2 = (double)CONCAT44(uVar10,uVar9) * dVar2;
  local_58._8_4_ = SUB84(dVar3,0);
  local_58._0_8_ = dVar1 * dVar5 * ___xmm_bff0000000000000bff0000000000000;
  local_58._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_48._8_4_ = SUB84(dVar2,0);
  local_48._0_8_ = (double)CONCAT44(uVar10,uVar9) * dVar7;
  local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FRigidBody::ApplyRotationDelta(this->B,(TQuat<double> *)local_58);
  return;
}

// DecomposeRotationAngles @ 14ded96d0

void __thiscall PBIK::FJointConstraint::DecomposeRotationAngles(FJointConstraint *this)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FRigidBody *pFVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dStack_f0;
  double dStack_e0;
  
  pFVar6 = this->A;
  dVar15 = (pFVar6->Rotation).X;
  dVar17 = (pFVar6->Rotation).Y;
  dVar18 = (pFVar6->Rotation).Z;
  dVar26 = (pFVar6->Rotation).W;
  dVar24 = (pFVar6->InitialRotation).Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar29 = (pFVar6->InitialRotation).W *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar12 = (pFVar6->InitialRotation).X *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar28 = (pFVar6->InitialRotation).Y *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  pFVar6 = this->B;
  dVar13 = (pFVar6->InitialRotation).X *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar23 = (pFVar6->InitialRotation).Y *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar25 = (pFVar6->InitialRotation).Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar30 = (pFVar6->InitialRotation).W *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar14 = dVar15 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar26 * dVar12 +
           dVar17 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar18 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar27 = dVar15 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar26 * dVar28 +
           dVar17 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar18 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar4 = (pFVar6->Rotation).X;
  uVar5 = (pFVar6->Rotation).Y;
  dVar9 = dVar15 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar26 * dVar24 +
          dVar17 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar18 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar26 * dVar29 +
           dVar17 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar18 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar28 = (pFVar6->Rotation).Z;
  dVar26 = (pFVar6->Rotation).W;
  auVar16._8_4_ = (int)uVar4;
  auVar16._0_8_ = uVar4;
  auVar16._12_4_ = (int)((ulonglong)uVar4 >> 0x20);
  auVar7._8_4_ = SUB84(dVar12,0);
  auVar7._0_8_ = dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dStack_f0 = auVar7._8_8_;
  pTVar1 = &this->XA;
  dStack_e0 = auVar16._8_8_;
  dVar17 = (double)uVar4 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + dVar26 * dVar13 +
           (double)uVar5 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + dVar28 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar18 = (double)uVar4 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + dVar26 * dVar23 +
           (double)uVar5 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar28 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar24 = (this->XOrig).field0_0x0._s_0.X;
  dVar29 = (this->XOrig).field0_0x0._s_0.Y;
  dVar15 = (double)uVar4 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + dVar26 * dVar25 +
           (double)uVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + dVar28 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar23 = dStack_e0 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar26 * dVar30 +
           (double)uVar5 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + dVar28 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar12 = (this->XOrig).field0_0x0._s_0.Z;
  dVar28 = dVar12 * dVar27 - dVar29 * dVar9;
  dVar28 = dVar28 + dVar28;
  dVar13 = dVar24 * dVar9 - dVar12 * dVar14;
  dVar13 = dVar13 + dVar13;
  dVar26 = dVar29 * dVar14 - dVar24 * dVar27;
  dVar26 = dVar26 + dVar26;
  (pTVar1->field0_0x0)._s_0.X = (dVar26 * dVar27 - dVar13 * dVar9) + dVar28 * dStack_f0 + dVar24;
  (this->XA).field0_0x0._s_0.Y = (dVar28 * dVar9 - dVar26 * dVar14) + dVar13 * dStack_f0 + dVar29;
  (this->XA).field0_0x0._s_0.Z = (dVar13 * dVar14 - dVar28 * dVar27) + dVar26 * dStack_f0 + dVar12;
  dVar26 = (this->YOrig).field0_0x0._s_0.X;
  dVar24 = (this->YOrig).field0_0x0._s_0.Y;
  dVar12 = (this->YOrig).field0_0x0._s_0.Z;
  dVar28 = dVar12 * dVar27 - dVar24 * dVar9;
  dVar28 = dVar28 + dVar28;
  pTVar2 = &this->YA;
  pTVar3 = &this->ZA;
  dVar13 = dVar26 * dVar9 - dVar12 * dVar14;
  dVar13 = dVar13 + dVar13;
  dVar29 = dVar24 * dVar14 - dVar26 * dVar27;
  dVar29 = dVar29 + dVar29;
  (pTVar2->field0_0x0)._s_0.X = (dVar29 * dVar27 - dVar13 * dVar9) + dVar28 * dStack_f0 + dVar26;
  (this->YA).field0_0x0._s_0.Y = (dVar28 * dVar9 - dVar29 * dVar14) + dVar13 * dStack_f0 + dVar24;
  (this->YA).field0_0x0._s_0.Z = (dVar13 * dVar14 - dVar28 * dVar27) + dVar29 * dStack_f0 + dVar12;
  dVar26 = (this->ZOrig).field0_0x0._s_0.X;
  dVar24 = (this->ZOrig).field0_0x0._s_0.Y;
  dVar12 = (this->ZOrig).field0_0x0._s_0.Z;
  dVar28 = dVar12 * dVar27 - dVar24 * dVar9;
  dVar28 = dVar28 + dVar28;
  dVar13 = dVar26 * dVar9 - dVar12 * dVar14;
  dVar13 = dVar13 + dVar13;
  dVar29 = dVar24 * dVar14 - dVar26 * dVar27;
  dVar29 = dVar29 + dVar29;
  (pTVar3->field0_0x0)._s_0.X = (dVar29 * dVar27 - dVar13 * dVar9) + dVar28 * dStack_f0 + dVar26;
  (this->ZA).field0_0x0._s_0.Y = (dVar28 * dVar9 - dVar29 * dVar14) + dVar13 * dStack_f0 + dVar24;
  (this->ZA).field0_0x0._s_0.Z = (dVar13 * dVar14 - dVar28 * dVar27) + dVar29 * dStack_f0 + dVar12;
  dVar28 = (this->XOrig).field0_0x0._s_0.X;
  dVar14 = (this->XOrig).field0_0x0._s_0.Y;
  dVar12 = (this->XOrig).field0_0x0._s_0.Z;
  dVar13 = dVar12 * dVar18 - dVar14 * dVar15;
  dVar13 = dVar13 + dVar13;
  dVar9 = dVar28 * dVar15 - dVar12 * dVar17;
  dVar9 = dVar9 + dVar9;
  dVar27 = dVar14 * dVar17 - dVar28 * dVar18;
  dVar27 = dVar27 + dVar27;
  (this->XB).field0_0x0._s_0.X = (dVar27 * dVar18 - dVar9 * dVar15) + dVar13 * dVar23 + dVar28;
  (this->XB).field0_0x0._s_0.Y = (dVar13 * dVar15 - dVar27 * dVar17) + dVar9 * dVar23 + dVar14;
  (this->XB).field0_0x0._s_0.Z = (dVar9 * dVar17 - dVar13 * dVar18) + dVar27 * dVar23 + dVar12;
  dVar28 = (this->YOrig).field0_0x0._s_0.X;
  dVar14 = (this->YOrig).field0_0x0._s_0.Y;
  dVar12 = (this->YOrig).field0_0x0._s_0.Z;
  dVar13 = dVar12 * dVar18 - dVar14 * dVar15;
  dVar9 = dVar28 * dVar15 - dVar12 * dVar17;
  dVar27 = dVar14 * dVar17 - dVar28 * dVar18;
  dVar9 = dVar9 + dVar9;
  dVar27 = dVar27 + dVar27;
  dVar13 = dVar13 + dVar13;
  (this->YB).field0_0x0._s_0.X = (dVar27 * dVar18 - dVar9 * dVar15) + dVar13 * dVar23 + dVar28;
  (this->YB).field0_0x0._s_0.Y = (dVar13 * dVar15 - dVar27 * dVar17) + dVar9 * dVar23 + dVar14;
  (this->YB).field0_0x0._s_0.Z = (dVar9 * dVar17 - dVar13 * dVar18) + dVar27 * dVar23 + dVar12;
  dVar14 = (this->ZOrig).field0_0x0._s_0.X;
  dVar13 = (this->ZOrig).field0_0x0._s_0.Y;
  dVar12 = (this->ZOrig).field0_0x0._s_0.Z;
  dVar9 = dVar12 * dVar18 - dVar13 * dVar15;
  dVar9 = dVar9 + dVar9;
  dVar27 = dVar14 * dVar15 - dVar12 * dVar17;
  dVar27 = dVar27 + dVar27;
  dVar26 = dVar13 * dVar17 - dVar14 * dVar18;
  dVar26 = dVar26 + dVar26;
  dVar28 = (dVar9 * dVar15 - dVar26 * dVar17) + dVar27 * dVar23 + dVar13;
  dVar13 = (dVar27 * dVar17 - dVar9 * dVar18) + dVar26 * dVar23 + dVar12;
  (this->ZB).field0_0x0._s_0.X = (dVar26 * dVar18 - dVar27 * dVar15) + dVar9 * dVar23 + dVar14;
  (this->ZB).field0_0x0._s_0.Y = dVar28;
  (this->ZB).field0_0x0._s_0.Z = dVar13;
  dVar14 = __real_3e45798ee0000000;
  dVar23 = __real_3ff0000000000000;
  dVar12 = (this->ZB).field0_0x0._s_0.X;
  dVar27 = dVar12 * (pTVar1->field0_0x0)._s_0.X + (this->XA).field0_0x0._s_0.Y * dVar28 +
           (this->XA).field0_0x0._s_0.Z * dVar13;
  dVar9 = dVar12 - dVar27 * (pTVar1->field0_0x0)._s_0.X;
  dVar28 = dVar28 - dVar27 * (this->XA).field0_0x0._s_0.Y;
  dVar13 = dVar13 - dVar27 * (this->XA).field0_0x0._s_0.Z;
  dVar27 = dVar28 * dVar28 + dVar9 * dVar9 + dVar13 * dVar13;
  uVar19 = dVar9;
  uVar20 = dVar13;
  uVar22 = dVar28;
  if ((dVar27 != __real_3ff0000000000000) &&
     (uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     __real_3e45798ee0000000 <= dVar27)) {
    dVar27 = __real_3ff0000000000000 / SQRT(dVar27);
    uVar19 = dVar9 * dVar27;
    uVar20 = dVar13 * dVar27;
    uVar22 = dVar28 * dVar27;
  }
  auVar8._8_4_ = (int)uVar22;
  auVar8._0_8_ = uVar19;
  auVar8._12_4_ = (int)((ulonglong)uVar22 >> 0x20);
  *(undefined1 (*) [16])&(this->ZBProjOnX).field0_0x0 = auVar8;
  (this->ZBProjOnX).field0_0x0._s_0.Z = (double)uVar20;
  dVar9 = (this->ZB).field0_0x0._s_0.Y;
  dVar13 = (this->ZB).field0_0x0._s_0.Z;
  dVar28 = (this->YA).field0_0x0._s_0.Y * dVar9 + (pTVar2->field0_0x0)._s_0.X * dVar12 +
           (this->YA).field0_0x0._s_0.Z * dVar13;
  dVar12 = dVar12 - dVar28 * (pTVar2->field0_0x0)._s_0.X;
  dVar9 = dVar9 - dVar28 * (this->YA).field0_0x0._s_0.Y;
  dVar13 = dVar13 - dVar28 * (this->YA).field0_0x0._s_0.Z;
  dVar28 = dVar9 * dVar9 + dVar12 * dVar12 + dVar13 * dVar13;
  uVar22 = dVar13;
  uVar19 = dVar12;
  uVar20 = dVar9;
  if ((dVar28 != dVar23) &&
     (uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar14 <= dVar28)) {
    dVar28 = dVar23 / SQRT(dVar28);
    uVar22 = dVar28 * dVar13;
    uVar19 = dVar28 * dVar12;
    uVar20 = dVar28 * dVar9;
  }
  auVar10._8_4_ = (int)uVar20;
  auVar10._0_8_ = uVar19;
  auVar10._12_4_ = (int)((ulonglong)uVar20 >> 0x20);
  *(undefined1 (*) [16])&(this->ZBProjOnY).field0_0x0 = auVar10;
  (this->ZBProjOnY).field0_0x0._s_0.Z = (double)uVar22;
  dVar12 = (this->YB).field0_0x0._s_0.X;
  dVar9 = (this->YB).field0_0x0._s_0.Y;
  dVar13 = (this->YB).field0_0x0._s_0.Z;
  dVar28 = dVar9 * (this->ZA).field0_0x0._s_0.Y + dVar12 * (pTVar3->field0_0x0)._s_0.X +
           dVar13 * (this->ZA).field0_0x0._s_0.Z;
  dVar12 = dVar12 - dVar28 * (pTVar3->field0_0x0)._s_0.X;
  dVar9 = dVar9 - dVar28 * (this->ZA).field0_0x0._s_0.Y;
  dVar13 = dVar13 - dVar28 * (this->ZA).field0_0x0._s_0.Z;
  dVar28 = dVar9 * dVar9 + dVar12 * dVar12 + dVar13 * dVar13;
  uVar22 = dVar13;
  uVar19 = dVar12;
  uVar20 = dVar9;
  if ((dVar28 != dVar23) &&
     (uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y, dVar14 <= dVar28)) {
    dVar23 = dVar23 / SQRT(dVar28);
    uVar22 = dVar23 * dVar13;
    uVar19 = dVar23 * dVar12;
    uVar20 = dVar23 * dVar9;
  }
  auVar11._8_4_ = (int)uVar20;
  auVar11._0_8_ = uVar19;
  auVar11._12_4_ = (int)((ulonglong)uVar20 >> 0x20);
  *(undefined1 (*) [16])&(this->YBProjOnZ).field0_0x0 = auVar11;
  (this->YBProjOnZ).field0_0x0._s_0.Z = (double)uVar22;
  fVar21 = SignedAngleBetweenNormals(this,pTVar3,&this->ZBProjOnX,pTVar1);
  this->AngleX = fVar21;
  fVar21 = SignedAngleBetweenNormals(this,pTVar3,&this->ZBProjOnY,pTVar2);
  this->AngleY = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000);
  fVar21 = SignedAngleBetweenNormals(this,pTVar2,&this->YBProjOnZ,pTVar3);
  this->AngleZ = fVar21;
  return;
}

// FinalPass @ 14deda340

void __thiscall PBIK::FJointConstraint::FinalPass(FJointConstraint *this)

{
  if (this->B->bIsLockedBySubSolve == false) {
    this->bInFinalPass = true;
    UpdateJointLimits(this);
    this->bInFinalPass = false;
  }
  return;
}

// GetPositionCorrection @ 14deda6d0

TVector<double> * __thiscall
PBIK::FJointConstraint::GetPositionCorrection
          (FJointConstraint *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FRigidBody *pFVar9;
  FRigidBody *pFVar10;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_48._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
  local_48._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
  local_48._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&this->A->Rotation,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0)
  ;
  (param_1->field0_0x0)._s_0.X = local_28._s_0.X;
  (param_1->field0_0x0)._s_0.Y = local_28._s_0.Y;
  (param_1->field0_0x0)._s_0.Z = local_28._s_0.Z;
  local_28._s_0.X = (this->PinPointLocalToB).field0_0x0._s_0.X;
  local_28._s_0.Y = (this->PinPointLocalToB).field0_0x0._s_0.Y;
  local_28._s_0.Z = (this->PinPointLocalToB).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&this->B->Rotation,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0)
  ;
  (param_2->field0_0x0)._s_0.X = local_48._s_0.X;
  (param_2->field0_0x0)._s_0.Y = local_48._s_0.Y;
  (param_2->field0_0x0)._s_0.Z = local_48._s_0.Z;
  pFVar9 = this->B;
  pFVar10 = this->A;
  dVar1 = (pFVar9->Position).field0_0x0._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (pFVar10->Position).field0_0x0._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((pFVar9->Position).field0_0x0._s_0.X + (param_2->field0_0x0)._s_0.X) -
       ((pFVar10->Position).field0_0x0._s_0.X + (param_1->field0_0x0)._s_0.X);
  dVar5 = (pFVar9->Position).field0_0x0._s_0.Z;
  dVar6 = (pFVar10->Position).field0_0x0._s_0.Z;
  dVar7 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 + dVar2) - (dVar3 + dVar4);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar5 + dVar8) - (dVar6 + dVar7);
  return __return_storage_ptr__;
}

// RemoveStretch @ 14dedc5d0

void __thiscall PBIK::FJointConstraint::RemoveStretch(FJointConstraint *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FRigidBody *pFVar6;
  FRigidBody *pFVar7;
  double dVar8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58 [3];
  
  local_98._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
  local_98._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
  pFVar6 = this->A;
  local_98._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&pFVar6->Rotation,(TVector<double> *)&local_78._s_0,(TVector<double> *)&local_98._s_0);
  local_58[0]._0_8_ = (this->PinPointLocalToB).field0_0x0._s_0.X;
  local_58[0]._8_8_ = (this->PinPointLocalToB).field0_0x0._s_0.Y;
  pFVar7 = this->B;
  local_58[0]._16_8_ = (this->PinPointLocalToB).field0_0x0._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&pFVar7->Rotation,(TVector<double> *)&local_98._s_0,
             (TVector<double> *)&local_58[0]._s_0);
  dVar1 = (pFVar7->Position).field0_0x0._s_0.Y;
  dVar2 = (pFVar7->Position).field0_0x0._s_0.Z;
  dVar3 = (pFVar7->Position).field0_0x0._s_0.X;
  dVar4 = (pFVar6->Position).field0_0x0._s_0.Y;
  dVar8 = (double)param_1;
  dVar5 = (pFVar6->Position).field0_0x0._s_0.Z;
  (pFVar7->Position).field0_0x0._s_0.X =
       dVar3 - ((dVar3 + local_98._s_0.X) - (local_78._s_0.X + (pFVar6->Position).field0_0x0._s_0.X)
               ) * dVar8;
  (pFVar7->Position).field0_0x0._s_0.Y =
       dVar1 - ((dVar1 + local_98._s_0.Y) - (local_78._s_0.Y + dVar4)) * dVar8;
  (pFVar7->Position).field0_0x0._s_0.Z =
       dVar2 - ((dVar2 + local_98._s_0.Z) - (local_78._s_0.Z + dVar5)) * dVar8;
  return;
}

// RotateToAlignAxes @ 14dedcc40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
PBIK::FJointConstraint::RotateToAlignAxes
          (FJointConstraint *this,TVector<double> *param_1,TVector<double> *param_2)

{
  FRigidBody *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  double dVar22;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  fVar13 = __real_3f800000;
  if (this->bInFinalPass == false) {
    dVar3 = (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.X;
    dVar15 = (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z -
             (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y;
    dVar21 = dVar4 * (param_1->field0_0x0)._s_0.Z - dVar3 * (param_2->field0_0x0)._s_0.Z;
    auVar18._0_8_ = dVar15 * dVar15;
    auVar18._8_8_ = 0;
    dVar3 = dVar3 * (param_2->field0_0x0)._s_0.Y - dVar4 * (param_1->field0_0x0)._s_0.Y;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar21 * dVar21 + auVar18._0_8_ + dVar3 * dVar3;
    auVar19 = sqrtpd(auVar18,auVar19);
    fVar20 = (float)auVar19._0_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 < fVar20) {
      dVar4 = (double)(__real_3f800000 / fVar20);
      uVar6 = dVar15 * dVar4;
      uVar7 = dVar21 * dVar4;
      uVar8 = dVar3 * dVar4;
    }
    fVar14 = (float)((double)uVar7 * (double)uVar7 + (double)uVar6 * (double)uVar6 +
                    (double)uVar8 * (double)uVar8);
    if (__real_38d1b717 <= fVar14) {
      dVar21 = (double)(fVar20 / fVar14);
      dVar4 = (double)(__real_3f800000 - (this->A->J).RotationStiffness);
      dVar3 = dVar21 * (double)uVar7 * dVar4;
      local_78._8_4_ = SUB84(dVar3,0);
      local_78._0_8_ = dVar21 * (double)uVar6 * dVar4;
      local_78._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      local_68._8_8_ = dVar4 * 0.0;
      local_68._0_8_ = dVar21 * (double)uVar8 * dVar4;
      FRigidBody::ApplyRotationDelta(this->A,(TQuat<double> *)local_78);
      dVar15 = (double)(fVar13 - (this->B->J).RotationStiffness);
      dVar4 = dVar21 * (double)uVar7 * _UNK_15076c718 * dVar15;
      dVar3 = _UNK_15076c718 * 0.0 * dVar15;
      local_78._8_4_ = SUB84(dVar4,0);
      local_78._0_8_ = dVar21 * (double)uVar6 * ___xmm_bff0000000000000bff0000000000000 * dVar15;
      local_78._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      local_68._8_4_ = SUB84(dVar3,0);
      local_68._0_8_ = dVar21 * (double)uVar8 * ___xmm_bff0000000000000bff0000000000000 * dVar15;
      local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      FRigidBody::ApplyRotationDelta(this->B,(TQuat<double> *)local_78);
    }
  }
  else {
    UE::Math::TQuat<double>::FindBetweenVectors((TQuat<double> *)local_78,param_2,param_1);
    pFVar1 = this->B;
    dVar22 = local_68._8_8_;
    dVar21 = local_68._0_8_;
    auVar16._8_4_ = local_68._8_4_;
    auVar16._0_8_ = dVar22;
    auVar16._12_4_ = local_68._12_4_;
    dVar9 = (pFVar1->Rotation).Z;
    dVar10 = (pFVar1->Rotation).W;
    dVar11 = (pFVar1->Rotation).X;
    dVar12 = (pFVar1->Rotation).Y;
    auVar17._8_4_ = local_68._0_4_;
    auVar17._0_8_ = dVar21;
    auVar17._12_4_ = local_68._4_4_;
    dVar3 = (double)local_78._0_8_ * dVar10 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar22 * dVar11 +
            (double)local_78._8_8_ * dVar9 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar21 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar4 = (double)local_78._0_8_ * dVar9 *
            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar16._8_8_ * dVar12
            + (double)local_78._8_8_ * dVar10 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar17._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
    ;
    dVar15 = (double)local_78._0_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar22 * dVar9 +
             (double)local_78._8_8_ * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar21 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar21 = (double)local_78._0_8_ * dVar11 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar22 * dVar10 +
             (double)local_78._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar21 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (pFVar1->Rotation).X = dVar3;
    (pFVar1->Rotation).Y = (double)auVar2._8_8_;
    auVar5._8_4_ = SUB84(dVar21,0);
    auVar5._0_8_ = dVar15;
    auVar5._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    (pFVar1->Rotation).Z = dVar15;
    (pFVar1->Rotation).W = (double)auVar5._8_8_;
  }
  return;
}

// RotateWithinLimits @ 14dedcf20

void __thiscall
PBIK::FJointConstraint::RotateWithinLimits
          (FJointConstraint *this,float param_1,float param_2,float param_3,TVector<double> *param_4
          ,TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar10;
  TVector<double>_u_0 local_98 [6];
  
  if ((param_3 < param_1) || (param_2 < param_3)) {
    dVar6 = (param_4->field0_0x0)._s_0.X;
    dVar5 = (param_4->field0_0x0)._s_0.Y;
    dVar1 = (param_4->field0_0x0)._s_0.Z;
    __libm_sse2_sincos_();
    dVar7 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    dVar8 = (param_6->field0_0x0)._s_0.X;
    dVar9 = (param_6->field0_0x0)._s_0.Y;
    dVar2 = (param_6->field0_0x0)._s_0.Z;
    dVar6 = extraout_XMM0_Qa * dVar6;
    dVar1 = extraout_XMM0_Qa * dVar1;
    dVar5 = extraout_XMM0_Qa * dVar5;
    dVar4 = dVar5 * dVar2 - dVar1 * dVar9;
    dVar4 = dVar4 + dVar4;
    dVar3 = dVar1 * dVar8 - dVar6 * dVar2;
    dVar3 = dVar3 + dVar3;
    dVar10 = dVar6 * dVar9 - dVar5 * dVar8;
    dVar10 = dVar10 + dVar10;
    local_98[0]._0_8_ = (dVar10 * dVar5 - dVar3 * dVar1) + dVar4 * dVar7 + dVar8;
    local_98[0]._16_8_ = (dVar3 * dVar6 - dVar4 * dVar5) + dVar10 * dVar7 + dVar2;
    local_98[0]._8_8_ = (dVar4 * dVar1 - dVar10 * dVar6) + dVar3 * dVar7 + dVar9;
    RotateToAlignAxes(this,(TVector<double> *)&local_98[0]._s_0,param_5);
  }
  return;
}

// SignedAngleBetweenNormals @ 14dedd470

float __thiscall
PBIK::FJointConstraint::SignedAngleBetweenNormals
          (FJointConstraint *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (float)(dVar2 * dVar1 + dVar6 * dVar5 + dVar4 * dVar3);
  fVar8 = __real_bf800000;
  if ((__real_bf800000 <= fVar7) && (fVar8 = fVar7, __real_3f800000 <= fVar7)) {
    fVar8 = __real_3f800000;
  }
  fVar7 = acosf(fVar8);
  fVar8 = __real_c2652ee0;
  if (0.0 <= (float)((dVar5 * dVar4 - dVar6 * dVar3) * (param_3->field0_0x0)._s_0.Y +
                     (dVar2 * dVar3 - dVar1 * dVar4) * (param_3->field0_0x0)._s_0.X +
                    (dVar1 * dVar6 - dVar2 * dVar5) * (param_3->field0_0x0)._s_0.Z)) {
    fVar8 = __real_42652ee0;
  }
  return fVar7 * fVar8;
}

// Solve @ 14dedd5b0

void __thiscall PBIK::FJointConstraint::Solve(FJointConstraint *this,FPBIKSolverSettings *param_1)

{
  float fVar1;
  FRigidBody *pFVar2;
  FRigidBody *pFVar3;
  float fVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  undefined8 uVar17;
  uint uVar23;
  double dVar18;
  double dVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0 [6];
  
  fVar4 = __real_322bcc77;
  pFVar2 = this->A;
  if ((pFVar2->bIsLockedBySubSolve == false) || (this->B->bIsLockedBySubSolve == false)) {
    pFVar3 = this->B;
    fVar1 = pFVar2->InvMass;
    fVar36 = pFVar3->InvMass + fVar1;
    if (__real_322bcc77 < (float)((uint)fVar36 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_e8._s_0.X = (this->PinPointLocalToA).field0_0x0._s_0.X;
      local_e8._s_0.Y = (this->PinPointLocalToA).field0_0x0._s_0.Y;
      local_e8._s_0.Z = (this->PinPointLocalToA).field0_0x0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (&pFVar2->Rotation,(TVector<double> *)&local_108._s_0,
                 (TVector<double> *)&local_e8._s_0);
      uVar17 = local_108._s_0.Z;
      uVar25 = local_108._s_0.Y;
      uVar10 = local_108._s_0.X;
      local_e8._s_0.X = (this->PinPointLocalToB).field0_0x0._s_0.X;
      local_e8._s_0.Y = (this->PinPointLocalToB).field0_0x0._s_0.Y;
      local_e8._s_0.Z = (this->PinPointLocalToB).field0_0x0._s_0.Z;
      local_c8._s_0.X = local_108._s_0.X;
      local_c8._s_0.Y = local_108._s_0.Y;
      local_c8._s_0.Z = local_108._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (&pFVar3->Rotation,(TVector<double> *)&local_108._s_0,
                 (TVector<double> *)&local_e8._s_0);
      fVar12 = __real_3f800000;
      local_b0[0]._s_0.X = local_108._s_0.X;
      local_b0[0]._s_0.Y = local_108._s_0.Y;
      dVar31 = (local_108._s_0.X + (pFVar3->Position).field0_0x0._s_0.X) -
               ((double)uVar10 + (pFVar2->Position).field0_0x0._s_0.X);
      local_b0[0]._s_0.Z = local_108._s_0.Z;
      dVar27 = (local_108._s_0.Y + (pFVar3->Position).field0_0x0._s_0.Y) -
               ((double)uVar25 + (pFVar2->Position).field0_0x0._s_0.Y);
      auVar32._0_8_ =
           (local_108._s_0.Z + (pFVar3->Position).field0_0x0._s_0.Z) -
           ((double)uVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
      auVar32._8_8_ = 0;
      fVar35 = (float)SQRT(dVar27 * dVar27 + dVar31 * dVar31 + auVar32._0_8_ * auVar32._0_8_);
      uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (fVar4 < fVar35) {
        dVar16 = (double)(__real_3f800000 / fVar35);
        uVar25 = dVar16 * dVar31;
        uVar17 = dVar16 * auVar32._0_8_;
        uVar10 = dVar16 * dVar27;
      }
      dVar31 = (double)(fVar35 / fVar36);
      dVar27 = (double)fVar1;
      dVar8 = dVar31 * (double)uVar25 * dVar27;
      dVar9 = dVar31 * (double)uVar10 * dVar27;
      dVar27 = dVar31 * (double)uVar17 * dVar27;
      dVar16 = (double)pFVar3->InvMass;
      dVar6 = dVar31 * (double)uVar25 * dVar16;
      dVar7 = dVar31 * (double)uVar10 * dVar16;
      dVar16 = dVar31 * (double)uVar17 * dVar16;
      uVar15 = (uint)__xmm_80000000000000008000000000000000;
      uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_e8._s_0.X =
           (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar23,SUB84(dVar6,0) ^ uVar15);
      local_e8._s_0.Y =
           (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar23,SUB84(dVar7,0) ^ uVar15);
      local_e8._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^ uVar23,SUB84(dVar16,0) ^ uVar15);
      local_108._s_0.X = dVar8;
      local_108._s_0.Y = dVar9;
      local_108._s_0.Z = dVar27;
      FRigidBody::ApplyPushToRotateBody
                (pFVar2,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_c8._s_0);
      FRigidBody::ApplyPushToRotateBody
                (this->B,(TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_b0[0]._s_0);
      UpdateJointLimits(this);
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      pFVar2 = this->A;
      if (((pFVar2->bIsLockedBySubSolve == false) && (fVar4 < pFVar2->InvMass)) &&
         (fVar1 = (pFVar2->J).PositionStiffness,
         fVar4 < (float)((uint)(fVar1 - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        dVar26 = (double)pFVar2->SolverSettings->OverRelaxation;
        dVar18 = (double)(fVar12 - fVar1);
        dVar31 = (pFVar2->Position).field0_0x0._s_0.Y;
        dVar24 = (pFVar2->Position).field0_0x0._s_0.Z;
        (pFVar2->Position).field0_0x0._s_0.X =
             dVar8 * dVar18 * dVar26 + (pFVar2->Position).field0_0x0._s_0.X;
        (pFVar2->Position).field0_0x0._s_0.Y = dVar9 * dVar18 * dVar26 + dVar31;
        (pFVar2->Position).field0_0x0._s_0.Z = dVar27 * dVar18 * dVar26 + dVar24;
      }
      pFVar2 = this->B;
      if (((pFVar2->bIsLockedBySubSolve == false) && (fVar4 < pFVar2->InvMass)) &&
         (fVar1 = (pFVar2->J).PositionStiffness, fVar4 < (float)((uint)(fVar1 - fVar12) & uVar15)))
      {
        dVar27 = (double)(fVar12 - fVar1);
        dVar31 = (double)pFVar2->SolverSettings->OverRelaxation;
        (pFVar2->Position).field0_0x0._s_0.X =
             (pFVar2->Position).field0_0x0._s_0.X - dVar6 * dVar27 * dVar31;
        (pFVar2->Position).field0_0x0._s_0.Y =
             (pFVar2->Position).field0_0x0._s_0.Y - dVar7 * dVar27 * dVar31;
        (pFVar2->Position).field0_0x0._s_0.Z =
             (pFVar2->Position).field0_0x0._s_0.Z - dVar16 * dVar27 * dVar31;
      }
      dVar9 = __real_3e45798ee0000000;
      pFVar2 = this->A;
      dVar16 = (pFVar2->Rotation).X;
      dVar6 = (pFVar2->Rotation).Y;
      dVar7 = (pFVar2->Rotation).Z;
      dVar8 = (pFVar2->Rotation).W;
      dVar31 = dVar7 * dVar7 + dVar16 * dVar16;
      dVar24 = dVar8 * dVar8 + dVar6 * dVar6;
      dVar27 = dVar24 + dVar31;
      dVar31 = dVar31 + dVar24;
      auVar30._8_4_ = SUB84(dVar31,0);
      auVar30._0_8_ = dVar27;
      auVar30._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar30 = sqrtpd(auVar32,auVar30);
      uVar13 = -(ulonglong)(__real_3e45798ee0000000 <= dVar27);
      uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= dVar31);
      uVar15 = (uint)(uVar13 >> 0x20);
      uVar23 = (uint)(uVar14 >> 0x20);
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
      fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
      fVar1 = GlobalVectorConstants::Float0001.m128_f32[3];
      auVar33._0_8_ = uVar13 & (ulonglong)(auVar32._0_8_ * dVar16);
      uVar11 = uVar14 & (ulonglong)(auVar32._8_8_ * dVar6);
      auVar33._8_4_ = (undefined4)uVar11;
      auVar33._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar19._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar19._4_4_ =
           ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar19._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar19._12_4_ =
           ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
      (pFVar2->Rotation).X = (double)SUB168(auVar33 | auVar19,0);
      (pFVar2->Rotation).Y = (double)SUB168(auVar33 | auVar19,8);
      auVar20._0_8_ = (ulonglong)(auVar32._0_8_ * dVar7) & uVar13;
      uVar11 = (ulonglong)(auVar32._8_8_ * dVar8) & uVar14;
      auVar20._8_4_ = (undefined4)uVar11;
      auVar20._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar28._0_4_ = ~(uint)uVar13 & SUB84((double)fVar4,0);
      auVar28._4_4_ = ~uVar15 & (uint)((ulonglong)(double)fVar4 >> 0x20);
      auVar28._8_4_ = ~(uint)uVar14 & SUB84((double)fVar1,0);
      auVar28._12_4_ = ~uVar23 & (uint)((ulonglong)(double)fVar1 >> 0x20);
      (pFVar2->Rotation).Z = (double)SUB168(auVar28 | auVar20,0);
      (pFVar2->Rotation).W = (double)SUB168(auVar28 | auVar20,8);
      pFVar2 = this->B;
      dVar16 = (pFVar2->Rotation).X;
      dVar6 = (pFVar2->Rotation).Y;
      dVar7 = (pFVar2->Rotation).Z;
      dVar8 = (pFVar2->Rotation).W;
      dVar31 = dVar7 * dVar7 + dVar16 * dVar16;
      dVar24 = dVar8 * dVar8 + dVar6 * dVar6;
      dVar27 = dVar24 + dVar31;
      dVar31 = dVar31 + dVar24;
      auVar5._8_4_ = SUB84(dVar31,0);
      auVar5._0_8_ = dVar27;
      auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      auVar32 = sqrtpd(auVar30,auVar5);
      uVar14 = -(ulonglong)(dVar9 <= dVar27);
      uVar13 = -(ulonglong)(dVar9 <= dVar31);
      uVar15 = (uint)(uVar14 >> 0x20);
      uVar23 = (uint)(uVar13 >> 0x20);
      auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      auVar34._0_8_ = uVar14 & (ulonglong)(auVar30._0_8_ * dVar16);
      uVar11 = uVar13 & (ulonglong)(auVar30._8_8_ * dVar6);
      auVar34._8_4_ = (undefined4)uVar11;
      auVar34._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar21._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar21._4_4_ =
           ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar21._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar21._12_4_ =
           ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar29._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar29._4_4_ =
           ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar29._8_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar29._12_4_ =
           ~uVar23 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar22._0_8_ = (ulonglong)(auVar32._0_8_ * dVar7) & uVar14;
      uVar13 = (ulonglong)(auVar32._8_8_ * dVar8) & uVar13;
      auVar22._8_4_ = (undefined4)uVar13;
      auVar22._12_4_ = (undefined4)(uVar13 >> 0x20);
      (pFVar2->Rotation).X = (double)SUB168(auVar34 | auVar21,0);
      (pFVar2->Rotation).Y = (double)SUB168(auVar34 | auVar21,8);
      (pFVar2->Rotation).Z = (double)SUB168(auVar29 | auVar22,0);
      (pFVar2->Rotation).W = (double)SUB168(auVar29 | auVar22,8);
    }
  }
  return;
}

// UpdateFromInputs @ 14dee09e0

void __thiscall PBIK::FJointConstraint::UpdateFromInputs(FJointConstraint *this)

{
  double dVar1;
  FRigidBody *pFVar2;
  FBone *pFVar3;
  FRigidBody *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  pFVar2 = this->B;
  pFVar3 = pFVar2->Bone;
  dVar7 = (pFVar3->Position).field0_0x0._s_0.X;
  dVar8 = (pFVar3->Position).field0_0x0._s_0.Y;
  dVar1 = (pFVar3->Position).field0_0x0._s_0.Z;
  pFVar4 = this->A;
  dVar5 = (pFVar4->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar6 = (pFVar4->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_48._8_4_ = SUB84(dVar5,0);
  local_48._0_8_ =
       (pFVar4->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_98._s_0.X = dVar7 - (pFVar4->Position).field0_0x0._s_0.X;
  local_58._8_4_ = SUB84(dVar6,0);
  local_58._0_8_ =
       (pFVar4->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_98._s_0.Y = dVar8 - (pFVar4->Position).field0_0x0._s_0.Y;
  local_98._s_0.Z = dVar1 - (pFVar4->Position).field0_0x0._s_0.Z;
  local_78._s_0.Z = dVar1;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_58,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  (this->PinPointLocalToA).field0_0x0._s_0.X = local_78._s_0.X;
  (this->PinPointLocalToA).field0_0x0._s_0.Y = local_78._s_0.Y;
  (this->PinPointLocalToA).field0_0x0._s_0.Z = local_78._s_0.Z;
  dVar6 = (pFVar2->Rotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = (pFVar2->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_98._s_0.X = dVar7 - (pFVar2->Position).field0_0x0._s_0.X;
  local_98._s_0.Y = dVar8 - (pFVar2->Position).field0_0x0._s_0.Y;
  local_98._s_0.Z = dVar1 - (pFVar2->Position).field0_0x0._s_0.Z;
  local_58._8_4_ = SUB84(dVar6,0);
  local_58._0_8_ =
       (pFVar2->Rotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_58._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_48._8_4_ = SUB84(dVar5,0);
  local_48._0_8_ =
       (pFVar2->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_58,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  (this->PinPointLocalToB).field0_0x0._s_0.X = local_78._s_0.X;
  (this->PinPointLocalToB).field0_0x0._s_0.Y = local_78._s_0.Y;
  (this->PinPointLocalToB).field0_0x0._s_0.Z = local_78._s_0.Z;
  return;
}

// UpdateJointLimits @ 14dee0c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall PBIK::FJointConstraint::UpdateJointLimits(FJointConstraint *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ELimitType EVar5;
  FRigidBody *pFVar6;
  FRigidBody *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
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
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  bool bVar54;
  TVector<double> *pTVar55;
  TVector<double> *pTVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined8 local_c0;
  
  fVar52 = __real_3f800000;
  pFVar6 = this->B;
  EVar5 = (pFVar6->J).X;
  if (((EVar5 == Free) && ((pFVar6->J).Y == Free)) && ((pFVar6->J).Z == Free)) {
    return;
  }
  fVar1 = (pFVar6->J).MinX;
  fVar57 = (pFVar6->J).MaxX;
  if (fVar57 < fVar1) {
    fVar57 = fVar1 + __real_3f800000;
  }
  fVar2 = (pFVar6->J).MinY;
  fVar58 = (pFVar6->J).MaxY;
  (pFVar6->J).MaxX = fVar57;
  if (fVar58 < fVar2) {
    fVar58 = fVar2 + fVar52;
  }
  fVar3 = (pFVar6->J).MinZ;
  fVar59 = (pFVar6->J).MaxZ;
  (pFVar6->J).MaxY = fVar58;
  fVar53 = __real_40000000;
  if (fVar59 < fVar3) {
    fVar59 = fVar3 + fVar52;
  }
  (pFVar6->J).MaxZ = fVar59;
  if ((EVar5 == Locked) || ((EVar5 == Limited && (fVar57 - fVar1 < fVar53)))) {
    bVar49 = true;
  }
  else {
    bVar49 = false;
  }
  EVar5 = (pFVar6->J).Y;
  if ((EVar5 == Locked) || ((EVar5 == Limited && (fVar58 - fVar2 < fVar53)))) {
    bVar47 = true;
  }
  else {
    bVar47 = false;
  }
  EVar5 = (pFVar6->J).Z;
  if ((EVar5 == Locked) || ((EVar5 == Limited && (fVar59 - fVar3 < fVar53)))) {
    bVar48 = true;
  }
  else {
    bVar48 = false;
  }
  if ((bVar47) && (bVar48)) {
    if (bVar49) {
      pFVar6 = this->A;
      pFVar7 = this->B;
      dVar37 = (pFVar6->InitialRotation).X;
      dVar38 = (pFVar6->InitialRotation).Y;
      dVar39 = (pFVar6->InitialRotation).Z;
      dVar40 = (pFVar6->InitialRotation).W;
      dVar32 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar18 = (pFVar7->InitialRotation).Z * dVar32;
      dVar33 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar21 = (pFVar7->InitialRotation).W * dVar33;
      dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
      dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      dVar41 = (pFVar7->Rotation).X;
      dVar42 = (pFVar7->Rotation).Y;
      dVar43 = (pFVar7->Rotation).Z;
      dVar44 = (pFVar7->Rotation).W;
      dVar19 = dVar43 * dVar32;
      dVar22 = dVar44 * dVar33;
      dVar28 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar26 = (pFVar7->InitialRotation).X * dVar28;
      dVar31 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar29 = (pFVar7->InitialRotation).Y * dVar31;
      dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar14 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar45 = (pFVar6->Rotation).X;
      dVar46 = (pFVar6->Rotation).Y;
      dVar27 = dVar41 * dVar28;
      dVar30 = dVar42 * dVar31;
      dVar34 = dVar37 * dVar21 * dVar20 + dVar40 * dVar26 + dVar38 * dVar18 * dVar23 +
               dVar39 * dVar29 * dVar9;
      dVar35 = dVar37 * dVar18 * dVar11 + dVar40 * dVar29 + dVar38 * dVar21 * dVar12 +
               dVar39 * dVar26 * dVar15;
      dVar36 = dVar37 * dVar29 * dVar8 + dVar40 * dVar18 + dVar38 * dVar26 * dVar25 +
               dVar39 * dVar21 * dVar10;
      dVar29 = dVar37 * dVar26 * dVar14 + dVar40 * dVar21 + dVar38 * dVar29 * dVar13 +
               dVar39 * dVar18 * dVar16;
      dVar37 = (pFVar6->Rotation).Z;
      dVar38 = (pFVar6->Rotation).W;
      dVar21 = (dVar45 * dVar22 * dVar20 + dVar38 * dVar27 + dVar46 * dVar19 * dVar23 +
               dVar37 * dVar30 * dVar9) * dVar28;
      dVar26 = (dVar45 * dVar19 * dVar11 + dVar38 * dVar30 + dVar46 * dVar22 * dVar12 +
               dVar37 * dVar27 * dVar15) * dVar31;
      dVar18 = (dVar45 * dVar30 * dVar8 + dVar38 * dVar19 + dVar46 * dVar27 * dVar25 +
               dVar37 * dVar22 * dVar10) * dVar32;
      dVar19 = (dVar45 * dVar27 * dVar14 + dVar38 * dVar22 + dVar46 * dVar30 * dVar13 +
               dVar37 * dVar19 * dVar16) * dVar33;
      local_d8._s_0.Z =
           dVar34 * dVar26 * dVar8 + dVar29 * dVar18 + dVar21 * dVar35 * dVar25 +
           dVar36 * dVar19 * dVar10;
      local_d8._s_0.X =
           dVar34 * dVar19 * dVar20 + dVar29 * dVar21 + dVar18 * dVar35 * dVar23 +
           dVar36 * dVar26 * dVar9;
      local_d8._s_0.Y =
           dVar34 * dVar18 * dVar11 + dVar29 * dVar26 + dVar19 * dVar35 * dVar12 +
           dVar36 * dVar21 * dVar15;
      if (this->bInFinalPass != false) {
        dVar32 = local_d8._s_0.Z * dVar32;
        dVar33 = (dVar34 * dVar21 * dVar14 + dVar29 * dVar19 + dVar26 * dVar35 * dVar13 +
                 dVar36 * dVar18 * dVar16) * dVar33;
        dVar28 = local_d8._s_0.X * dVar28;
        dVar31 = local_d8._s_0.Y * dVar31;
        dVar20 = dVar44 * dVar28 * dVar20 + dVar41 * dVar33 + dVar43 * dVar31 * dVar23 +
                 dVar42 * dVar32 * dVar9;
        dVar23 = dVar43 * dVar28 * dVar11 + dVar42 * dVar33 + dVar44 * dVar31 * dVar12 +
                 dVar41 * dVar32 * dVar15;
        dVar25 = dVar42 * dVar28 * dVar8 + dVar43 * dVar33 + dVar41 * dVar31 * dVar25 +
                 dVar44 * dVar32 * dVar10;
        dVar32 = dVar41 * dVar28 * dVar14 + dVar44 * dVar33 + dVar42 * dVar31 * dVar13 +
                 dVar43 * dVar32 * dVar16;
        auVar17._8_4_ = SUB84(dVar23,0);
        auVar17._0_8_ = dVar20;
        auVar17._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        (pFVar7->Rotation).X = dVar20;
        (pFVar7->Rotation).Y = (double)auVar17._8_8_;
        auVar24._8_4_ = SUB84(dVar32,0);
        auVar24._0_8_ = dVar25;
        auVar24._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
        (pFVar7->Rotation).Z = dVar25;
        (pFVar7->Rotation).W = (double)auVar24._8_8_;
        return;
      }
      local_c0 = 0;
      ApplyRotationCorrection(this,(TQuat<double> *)&local_d8._s_0);
      return;
    }
    bVar50 = true;
LAB_14dee11d1:
    bVar54 = false;
    bVar51 = false;
    if (((!bVar49) || (!bVar47)) || (bVar48)) goto LAB_14dee11fa;
    bVar54 = true;
  }
  else {
    bVar50 = false;
    if ((!bVar49) || ((bVar47 || (!bVar48)))) goto LAB_14dee11d1;
    bVar54 = true;
LAB_14dee11fa:
    bVar51 = bVar54;
    bVar54 = false;
  }
  if (bVar50) {
    UpdateLocalRotateAxes(this,true,false,false);
    pTVar56 = &this->XB;
    pTVar55 = &this->XA;
  }
  else if (bVar51) {
    UpdateLocalRotateAxes(this,false,true,false);
    pTVar56 = &this->YB;
    pTVar55 = &this->YA;
  }
  else {
    if (!bVar54) goto LAB_14dee1270;
    UpdateLocalRotateAxes(this,false,false,true);
    pTVar56 = &this->ZB;
    pTVar55 = &this->ZA;
  }
  RotateToAlignAxes(this,pTVar55,pTVar56);
LAB_14dee1270:
  if (((pFVar6->J).X != Limited) || (bVar49)) {
    bVar49 = false;
  }
  else {
    bVar49 = true;
  }
  if (((pFVar6->J).Y != Limited) || (bVar47)) {
    bVar47 = false;
  }
  else {
    bVar47 = true;
  }
  if (((pFVar6->J).Z != Limited) || (bVar48)) {
    bVar48 = false;
  }
  else {
    bVar48 = true;
  }
  if (((bVar49) || (bVar47)) || (bVar48)) {
    DecomposeRotationAngles(this);
    if (bVar49) {
      local_118._s_0.X = (this->ZA).field0_0x0._s_0.X;
      local_118._s_0.Y = (this->ZA).field0_0x0._s_0.Y;
      local_118._s_0.Z = (this->ZA).field0_0x0._s_0.Z;
      local_f8._s_0.Z = (this->ZBProjOnX).field0_0x0._s_0.Z;
      local_f8._s_0.X = (this->ZBProjOnX).field0_0x0._s_0.X;
      local_f8._s_0.Y = (this->ZBProjOnX).field0_0x0._s_0.Y;
      local_d8._s_0.Z = (this->XA).field0_0x0._s_0.Z;
      local_d8._s_0.X = (this->XA).field0_0x0._s_0.X;
      local_d8._s_0.Y = (this->XA).field0_0x0._s_0.Y;
      RotateWithinLimits(this,(pFVar6->J).MinX,(pFVar6->J).MaxX,this->AngleX,
                         (TVector<double> *)&local_d8._s_0,(TVector<double> *)&local_f8._s_0,
                         (TVector<double> *)&local_118._s_0);
    }
    if (bVar47) {
      local_d8._s_0.X = (this->ZA).field0_0x0._s_0.X;
      local_d8._s_0.Y = (this->ZA).field0_0x0._s_0.Y;
      local_d8._s_0.Z = (this->ZA).field0_0x0._s_0.Z;
      local_f8._s_0.Z = (this->ZBProjOnY).field0_0x0._s_0.Z;
      local_f8._s_0.X = (this->ZBProjOnY).field0_0x0._s_0.X;
      local_f8._s_0.Y = (this->ZBProjOnY).field0_0x0._s_0.Y;
      uVar4 = *(undefined8 *)((longlong)&(this->YA).field0_0x0 + 0x10);
      local_118._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            (uint)uVar4 ^ (uint)__xmm_80000000000000008000000000000000);
      local_118._4_4_ =
           *(uint *)((longlong)&(this->YA).field0_0x0 + 4) ^
           __xmm_80000000000000008000000000000000._4_4_;
      local_118._0_4_ =
           *(uint *)&(this->YA).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
      local_118._12_4_ = *(uint *)((longlong)&(this->YA).field0_0x0 + 0xc) ^ _UNK_15066df7c;
      local_118._8_4_ = *(uint *)((longlong)&(this->YA).field0_0x0 + 8) ^ _UNK_15066df78;
      RotateWithinLimits(this,(pFVar6->J).MinY,(pFVar6->J).MaxY,this->AngleY,
                         (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_f8._s_0,
                         (TVector<double> *)&local_d8._s_0);
    }
    if (bVar48) {
      local_d8._s_0.X = (this->YA).field0_0x0._s_0.X;
      local_d8._s_0.Y = (this->YA).field0_0x0._s_0.Y;
      local_f8._s_0.Z = (this->YBProjOnZ).field0_0x0._s_0.Z;
      local_d8._s_0.Z = (this->YA).field0_0x0._s_0.Z;
      local_f8._s_0.X = (this->YBProjOnZ).field0_0x0._s_0.X;
      local_f8._s_0.Y = (this->YBProjOnZ).field0_0x0._s_0.Y;
      local_118._s_0.Z = (this->ZA).field0_0x0._s_0.Z;
      local_118._s_0.X = (this->ZA).field0_0x0._s_0.X;
      local_118._s_0.Y = (this->ZA).field0_0x0._s_0.Y;
      RotateWithinLimits(this,(pFVar6->J).MinZ,(pFVar6->J).MaxZ,this->AngleZ,
                         (TVector<double> *)&local_118._s_0,(TVector<double> *)&local_f8._s_0,
                         (TVector<double> *)&local_d8._s_0);
    }
  }
  return;
}

// UpdateLocalRotateAxes @ 14dee1480

void __thiscall
PBIK::FJointConstraint::UpdateLocalRotateAxes
          (FJointConstraint *this,bool param_1,bool param_2,bool param_3)

{
  FRigidBody *pFVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
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
  double dVar21;
  double dStack_d0;
  double dStack_c0;
  
  pFVar1 = this->A;
  dVar6 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * (pFVar1->InitialRotation).X
  ;
  dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] * (pFVar1->InitialRotation).Y
  ;
  dVar13 = (pFVar1->Rotation).X;
  dVar5 = (pFVar1->Rotation).Y;
  dVar19 = (pFVar1->Rotation).Z;
  dVar14 = (pFVar1->Rotation).W;
  dVar16 = (pFVar1->InitialRotation).Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar20 = (pFVar1->InitialRotation).W *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  pFVar1 = this->B;
  dVar7 = (pFVar1->InitialRotation).X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0]
  ;
  dVar9 = (pFVar1->InitialRotation).Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1]
  ;
  dVar17 = (pFVar1->InitialRotation).Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar21 = (pFVar1->InitialRotation).W *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar15 = (pFVar1->Rotation).X;
  dVar18 = (pFVar1->Rotation).Y;
  dVar11 = dVar13 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar14 * dVar6 +
           dVar5 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar19 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar12 = dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar14 * dVar8 +
           dVar5 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar19 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar14 * dVar16 +
          dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar19 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar13 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar14 * dVar20 +
          dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar19 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar5 = (pFVar1->Rotation).Z;
  dVar19 = (pFVar1->Rotation).W;
  auVar2._8_4_ = SUB84(dVar6,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar6 = dVar15 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
  dVar8 = dVar15 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ = dVar11;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar3._8_4_ = SUB84(dVar8,0);
  auVar3._0_8_ = dVar6;
  auVar3._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dStack_d0 = auVar3._8_8_;
  dStack_c0 = auVar10._8_8_;
  dVar12 = dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar19 * dVar17 +
           dVar18 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar5 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar13 = dVar15 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar19 * dVar21 +
           dVar18 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar5 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = dVar6 + dVar19 * dVar7 +
          dVar18 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar7 = dStack_d0 + dVar19 * dVar9 +
          dVar18 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = auVar2._8_8_;
  if (param_1) {
    dVar14 = (this->XOrig).field0_0x0._s_0.X;
    dVar15 = (this->XOrig).field0_0x0._s_0.Y;
    dVar9 = (this->XOrig).field0_0x0._s_0.Z;
    dVar19 = dVar9 * dStack_c0 - dVar15 * dVar4;
    dVar19 = dVar19 + dVar19;
    dVar5 = dVar14 * dVar4 - dVar9 * dVar11;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar15 * dVar11 - dVar14 * dStack_c0;
    dVar18 = dVar18 + dVar18;
    (this->XA).field0_0x0._s_0.X = (dVar18 * dStack_c0 - dVar5 * dVar4) + dVar19 * dVar6 + dVar14;
    (this->XA).field0_0x0._s_0.Y = (dVar19 * dVar4 - dVar18 * dVar11) + dVar5 * dVar6 + dVar15;
    (this->XA).field0_0x0._s_0.Z = (dVar5 * dVar11 - dVar19 * dStack_c0) + dVar18 * dVar6 + dVar9;
    dVar14 = (this->XOrig).field0_0x0._s_0.X;
    dVar15 = (this->XOrig).field0_0x0._s_0.Y;
    dVar9 = (this->XOrig).field0_0x0._s_0.Z;
    dVar19 = dVar9 * dVar7 - dVar15 * dVar12;
    dVar19 = dVar19 + dVar19;
    dVar5 = dVar14 * dVar12 - dVar9 * dVar8;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar15 * dVar8 - dVar14 * dVar7;
    dVar18 = dVar18 + dVar18;
    (this->XB).field0_0x0._s_0.X = (dVar18 * dVar7 - dVar5 * dVar12) + dVar19 * dVar13 + dVar14;
    (this->XB).field0_0x0._s_0.Y = (dVar19 * dVar12 - dVar18 * dVar8) + dVar5 * dVar13 + dVar15;
    (this->XB).field0_0x0._s_0.Z = (dVar5 * dVar8 - dVar19 * dVar7) + dVar18 * dVar13 + dVar9;
  }
  if (param_2) {
    dVar14 = (this->YOrig).field0_0x0._s_0.X;
    dVar15 = (this->YOrig).field0_0x0._s_0.Y;
    dVar9 = (this->YOrig).field0_0x0._s_0.Z;
    dVar19 = dVar9 * dStack_c0 - dVar15 * dVar4;
    dVar19 = dVar19 + dVar19;
    dVar5 = dVar14 * dVar4 - dVar9 * dVar11;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar15 * dVar11 - dVar14 * dStack_c0;
    dVar18 = dVar18 + dVar18;
    (this->YA).field0_0x0._s_0.X = (dVar18 * dStack_c0 - dVar5 * dVar4) + dVar19 * dVar6 + dVar14;
    (this->YA).field0_0x0._s_0.Y = (dVar19 * dVar4 - dVar18 * dVar11) + dVar5 * dVar6 + dVar15;
    (this->YA).field0_0x0._s_0.Z = (dVar5 * dVar11 - dVar19 * dStack_c0) + dVar18 * dVar6 + dVar9;
    dVar14 = (this->YOrig).field0_0x0._s_0.X;
    dVar15 = (this->YOrig).field0_0x0._s_0.Y;
    dVar9 = (this->YOrig).field0_0x0._s_0.Z;
    dVar19 = dVar9 * dVar7 - dVar15 * dVar12;
    dVar19 = dVar19 + dVar19;
    dVar5 = dVar14 * dVar12 - dVar9 * dVar8;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar15 * dVar8 - dVar14 * dVar7;
    dVar18 = dVar18 + dVar18;
    (this->YB).field0_0x0._s_0.X = (dVar18 * dVar7 - dVar5 * dVar12) + dVar19 * dVar13 + dVar14;
    (this->YB).field0_0x0._s_0.Y = (dVar19 * dVar12 - dVar18 * dVar8) + dVar5 * dVar13 + dVar15;
    (this->YB).field0_0x0._s_0.Z = (dVar5 * dVar8 - dVar19 * dVar7) + dVar18 * dVar13 + dVar9;
  }
  if (param_3) {
    dVar14 = (this->ZOrig).field0_0x0._s_0.X;
    dVar15 = (this->ZOrig).field0_0x0._s_0.Y;
    dVar9 = (this->ZOrig).field0_0x0._s_0.Z;
    dVar19 = dVar9 * dStack_c0 - dVar15 * dVar4;
    dVar19 = dVar19 + dVar19;
    dVar5 = dVar14 * dVar4 - dVar9 * dVar11;
    dVar5 = dVar5 + dVar5;
    dVar18 = dVar15 * dVar11 - dVar14 * dStack_c0;
    dVar18 = dVar18 + dVar18;
    (this->ZA).field0_0x0._s_0.X = (dVar18 * dStack_c0 - dVar5 * dVar4) + dVar19 * dVar6 + dVar14;
    (this->ZA).field0_0x0._s_0.Y = (dVar19 * dVar4 - dVar18 * dVar11) + dVar5 * dVar6 + dVar15;
    (this->ZA).field0_0x0._s_0.Z = (dVar5 * dVar11 - dVar19 * dStack_c0) + dVar18 * dVar6 + dVar9;
    dVar11 = (this->ZOrig).field0_0x0._s_0.X;
    dVar5 = (this->ZOrig).field0_0x0._s_0.Y;
    dVar6 = (this->ZOrig).field0_0x0._s_0.Z;
    dVar9 = dVar6 * dVar7 - dVar5 * dVar12;
    dVar9 = dVar9 + dVar9;
    dVar4 = dVar11 * dVar12 - dVar6 * dVar8;
    dVar4 = dVar4 + dVar4;
    dVar19 = dVar5 * dVar8 - dVar11 * dVar7;
    dVar19 = dVar19 + dVar19;
    (this->ZB).field0_0x0._s_0.X = (dVar7 * dVar19 - dVar4 * dVar12) + dVar9 * dVar13 + dVar11;
    (this->ZB).field0_0x0._s_0.Y = (dVar9 * dVar12 - dVar8 * dVar19) + dVar4 * dVar13 + dVar5;
    (this->ZB).field0_0x0._s_0.Z = (dVar4 * dVar8 - dVar9 * dVar7) + dVar13 * dVar19 + dVar6;
  }
  return;
}

