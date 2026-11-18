// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 11

// FRigidBody @ 14ded6800

FRigidBody * __thiscall PBIK::FRigidBody::FRigidBody(FRigidBody *this,FBone *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  this->Bone = (FBone *)0x0;
  (this->J).RotationStiffness = 0.0;
  (this->J).PositionStiffness = 0.0;
  (this->J).MinX = 0.0;
  (this->J).MaxX = 0.0;
  (this->J).MinY = 0.0;
  (this->J).MaxY = 0.0;
  (this->J).MinZ = 0.0;
  (this->J).MaxZ = 0.0;
  (this->J).bUsePreferredAngles = false;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->J).PreferredAngles.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->J).PreferredAngles.Yaw = dVar1;
  (this->J).PreferredAngles.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->Pin = (FPinConstraint *)0x0;
  this->Effector = (FEffector *)0x0;
  this->InvMass = 0.0;
  this->Mass = 0.0;
  this->MaxAngle = 0.0;
  this->bIsLockedBySubSolve = false;
  this->bIsPartOfSubChain = false;
  this->NumBonesToRoot = 0;
  this->Bone = param_1;
  dVar3 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->J).RotationStiffness = 0.0;
  (this->J).PositionStiffness = 0.0;
  (this->J).X = Free;
  *(undefined3 *)&(this->J).field_0x9 = 0;
  (this->J).MinX = 0.0;
  (this->J).MaxX = 0.0;
  (this->J).Y = Free;
  *(undefined3 *)&(this->J).field_0x15 = 0;
  (this->J).MinY = 0.0;
  (this->J).MaxY = 0.0;
  (this->J).Z = Free;
  *(undefined3 *)&(this->J).field_0x21 = 0;
  (this->J).MinZ = 0.0;
  (this->J).MaxZ = 0.0;
  (this->J).bUsePreferredAngles = false;
  *(undefined3 *)&(this->J).field_0x2d = 0;
  (this->J).PreferredAngles.Pitch = dVar1;
  (this->J).PreferredAngles.Yaw = dVar2;
  (this->J).PreferredAngles.Roll = dVar3;
  return this;
}

// ApplyPositionDelta @ 14ded7340

void __thiscall PBIK::FRigidBody::ApplyPositionDelta(FRigidBody *this,TVector<double> *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((this->bIsLockedBySubSolve == false) && (__real_322bcc77 < this->InvMass)) {
    fVar1 = (this->J).PositionStiffness;
    if (__real_322bcc77 <
        (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      dVar7 = (double)(__real_3f800000 - fVar1);
      dVar6 = (double)this->SolverSettings->OverRelaxation;
      dVar2 = (param_1->field0_0x0)._s_0.Z;
      dVar3 = (param_1->field0_0x0)._s_0.X;
      dVar4 = (this->Position).field0_0x0._s_0.Z;
      dVar5 = (this->Position).field0_0x0._s_0.X;
      (this->Position).field0_0x0._s_0.Y =
           dVar7 * (param_1->field0_0x0)._s_0.Y * dVar6 + (this->Position).field0_0x0._s_0.Y;
      (this->Position).field0_0x0._s_0.Z = dVar7 * dVar2 * dVar6 + dVar4;
      (this->Position).field0_0x0._s_0.X = dVar7 * dVar3 * dVar6 + dVar5;
    }
  }
  return;
}

// ApplyPushToRotateBody @ 14ded8580

void __thiscall
PBIK::FRigidBody::ApplyPushToRotateBody
          (FRigidBody *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  TQuat<double> local_48 [2];
  
  if (this->bIsLockedBySubSolve == false) {
    if ((__real_322bcc77 < this->InvMass) &&
       (__real_322bcc77 <
        (float)((uint)((this->J).RotationStiffness - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_2->field0_0x0)._s_0.X;
      local_48[0].Z =
           (double)((__real_3f800000 - (this->J).RotationStiffness) * this->InvMass *
                   this->SolverSettings->OverRelaxation);
      local_48[0].X =
           ((param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y -
           (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z) * local_48[0].Z;
      local_48[0].W = 0.0;
      local_48[0].Y =
           (dVar1 * (param_2->field0_0x0)._s_0.Z - dVar2 * (param_1->field0_0x0)._s_0.Z) *
           local_48[0].Z;
      local_48[0].Z =
           (dVar2 * (param_1->field0_0x0)._s_0.Y - dVar1 * (param_2->field0_0x0)._s_0.Y) *
           local_48[0].Z;
      ApplyRotationDelta(this,local_48);
    }
  }
  return;
}

// ApplyRotationDelta @ 14ded9420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall PBIK::FRigidBody::ApplyRotationDelta(FRigidBody *this,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  
  if (((this->bIsLockedBySubSolve == false) && (__real_322bcc77 < this->InvMass)) &&
     (__real_322bcc77 <
      (float)((uint)((this->J).RotationStiffness - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    fVar23 = this->SolverSettings->MaxAngle * __real_3c8efa35;
    auVar19._0_8_ = param_1->X * param_1->X;
    auVar19._8_8_ = 0;
    dVar12 = param_1->X;
    dVar13 = param_1->Y;
    dVar14 = param_1->Z;
    dVar15 = param_1->W;
    auVar20._8_8_ = 0;
    auVar20._0_8_ =
         param_1->Y * param_1->Y + auVar19._0_8_ + param_1->Z * param_1->Z + param_1->W * param_1->W
    ;
    auVar20 = sqrtpd(auVar19,auVar20);
    if (fVar23 < (float)auVar20._0_8_) {
      fVar23 = fVar23 / (float)auVar20._0_8_;
      dVar12 = dVar12 * (double)fVar23;
      dVar13 = dVar13 * (double)fVar23;
      dVar14 = dVar14 * (double)fVar23;
      dVar15 = dVar15 * (double)fVar23;
    }
    dVar16 = (this->Rotation).Z;
    dVar17 = (this->Rotation).W;
    dVar18 = (this->Rotation).X;
    dVar8 = (this->Rotation).Y;
    auVar21._8_4_ = SUB84(dVar15,0);
    auVar21._0_8_ = dVar15;
    auVar21._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    auVar22._8_4_ = SUB84(dVar14,0);
    auVar22._0_8_ = dVar14;
    auVar22._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar10 = (dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
              dVar15 * dVar16 +
              dVar13 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar16;
    dVar11 = (dVar12 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
              dVar15 * dVar17 +
              dVar13 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]) *
             _UNK_150689678 + dVar17;
    dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar10;
    auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    (this->Rotation).Z = dVar10;
    (this->Rotation).W = (double)auVar9._8_8_;
    dVar14 = (dVar12 * dVar17 * dVar1 + dVar15 * dVar18 + dVar13 * dVar16 * dVar2 +
             dVar14 * dVar8 * dVar3) * ___xmm_3fe00000000000003fe0000000000000 + dVar18;
    dVar8 = (dVar12 * dVar16 * dVar4 + auVar21._8_8_ * dVar8 + dVar13 * dVar17 * dVar5 +
            auVar22._8_8_ * dVar18 * dVar6) * _UNK_150689678 + dVar8;
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = dVar14;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (this->Rotation).X = dVar14;
    (this->Rotation).Y = (double)auVar7._8_8_;
  }
  return;
}

// GetNumBonesToRoot @ 14deda690

int __thiscall PBIK::FRigidBody::GetNumBonesToRoot(FRigidBody *this)

{
  return this->NumBonesToRoot;
}

// GetParentBody @ 14deda6a0

FRigidBody * __thiscall PBIK::FRigidBody::GetParentBody(FRigidBody *this)

{
  FBone *pFVar1;
  
  if ((this->Bone != (FBone *)0x0) && (pFVar1 = this->Bone->Parent, pFVar1 != (FBone *)0x0)) {
    return pFVar1->Body;
  }
  return (FRigidBody *)0x0;
}

// Initialize @ 14dedc4a0

void __thiscall PBIK::FRigidBody::Initialize(FRigidBody *this,FBone *param_1)

{
  FBone *pFVar1;
  int iVar2;
  
  UpdateTransformAndMassFromBones(this);
  pFVar1 = this->Bone;
  iVar2 = 0;
  this->NumBonesToRoot = 0;
  for (; (pFVar1 != (FBone *)0x0 && (pFVar1 != param_1)); pFVar1 = pFVar1->Parent) {
    iVar2 = iVar2 + 1;
    this->NumBonesToRoot = iVar2;
  }
  return;
}

// IsPositionLocked @ 14dedc530

bool __thiscall PBIK::FRigidBody::IsPositionLocked(FRigidBody *this)

{
  if (((this->bIsLockedBySubSolve == false) && (__real_322bcc77 < this->InvMass)) &&
     (__real_322bcc77 <
      (float)((uint)((this->J).PositionStiffness - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    return false;
  }
  return true;
}

// IsRotationLocked @ 14dedc580

bool __thiscall PBIK::FRigidBody::IsRotationLocked(FRigidBody *this)

{
  if (((this->bIsLockedBySubSolve == false) && (__real_322bcc77 < this->InvMass)) &&
     (__real_322bcc77 <
      (float)((uint)((this->J).RotationStiffness - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    return false;
  }
  return true;
}

// UpdateFromInputs @ 14dee0bf0

void __thiscall PBIK::FRigidBody::UpdateFromInputs(FRigidBody *this,FPBIKSolverSettings *param_1)

{
  float fVar1;
  
  UpdateTransformAndMassFromBones(this);
  fVar1 = param_1->MassMultiplier;
  this->SolverSettings = param_1;
  fVar1 = this->Mass * fVar1 * GLOBAL_UNITS;
  if (fVar1 <= __real_3f000000) {
    fVar1 = __real_3f000000;
  }
  this->InvMass = __real_3f800000 / fVar1;
  return;
}

// UpdateTransformAndMassFromBones @ 14dee1c50

void __thiscall PBIK::FRigidBody::UpdateTransformAndMassFromBones(FRigidBody *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FBone *pFVar5;
  longlong lVar6;
  FBone *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TQuat<double> local_68 [2];
  
  pFVar5 = this->Bone;
  dVar9 = (pFVar5->Position).field0_0x0._s_0.X;
  dVar8 = (pFVar5->Position).field0_0x0._s_0.Y;
  dVar2 = (pFVar5->Position).field0_0x0._s_0.Z;
  this->Mass = 0.0;
  pFVar11 = (pFVar5->Children).AllocatorInstance.Data;
  iVar4 = (pFVar5->Children).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar4 * 8;
  local_a8._s_0.X = dVar9;
  local_a8._s_0.Y = dVar8;
  local_a8._s_0.Z = dVar2;
  while( true ) {
    if ((pFVar5->Children).ArrayNum != iVar4) {
      `TCheckedPointerIterator<PBIK::FBone_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar1) break;
    lVar6 = *(longlong *)pFVar11;
    pFVar11 = pFVar11 + 8;
    dVar3 = *(double *)(lVar6 + 0x18);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar3;
    dVar9 = dVar9 + *(double *)(lVar6 + 0x10);
    dVar8 = dVar8 + dVar3;
    pFVar7 = this->Bone;
    dVar2 = dVar2 + *(double *)(lVar6 + 0x20);
    dVar3 = (pFVar7->Position).field0_0x0._s_0.Y - dVar3;
    dVar15 = (pFVar7->Position).field0_0x0._s_0.X - *(double *)(lVar6 + 0x10);
    dVar12 = (pFVar7->Position).field0_0x0._s_0.Z - *(double *)(lVar6 + 0x20);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar3 * dVar3 + dVar15 * dVar15 + dVar12 * dVar12;
    auVar14 = sqrtpd(auVar13,auVar14);
    this->Mass = (float)(auVar14._0_8_ + (double)this->Mass);
  }
  pFVar5 = this->Bone;
  dVar12 = (double)(__real_3f800000 / ((float)(pFVar5->Children).ArrayNum + __real_3f800000));
  (this->InputPosition).field0_0x0._s_0.X = dVar12 * dVar9;
  (this->InputPosition).field0_0x0._s_0.Y = dVar12 * dVar8;
  (this->InputPosition).field0_0x0._s_0.Z = dVar12 * dVar2;
  dVar15 = (this->InputPosition).field0_0x0._s_0.Y;
  dVar3 = (this->InputPosition).field0_0x0._s_0.Z;
  (this->Position).field0_0x0._s_0.X = (this->InputPosition).field0_0x0._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar15;
  (this->Position).field0_0x0._s_0.Z = dVar3;
  dVar3 = (pFVar5->Rotation).Y;
  (this->InitialRotation).X = (pFVar5->Rotation).X;
  (this->InitialRotation).Y = dVar3;
  dVar3 = (pFVar5->Rotation).Z;
  dVar15 = (pFVar5->Rotation).W;
  (this->InitialRotation).Z = dVar3;
  (this->InitialRotation).W = dVar15;
  dVar10 = (this->InitialRotation).Y;
  (this->Rotation).X = (this->InitialRotation).X;
  (this->Rotation).Y = dVar10;
  (this->Rotation).Z = dVar3;
  (this->Rotation).W = dVar15;
  local_68[0].Z =
       (pFVar5->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_68[0].W =
       (pFVar5->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_68[0].X =
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * (pFVar5->Rotation).X;
  local_68[0].Y =
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] * (pFVar5->Rotation).Y;
  local_a8._s_0.X = (pFVar5->Position).field0_0x0._s_0.X - dVar12 * dVar9;
  local_a8._s_0.Y = (pFVar5->Position).field0_0x0._s_0.Y - dVar12 * dVar8;
  local_a8._s_0.Z = (pFVar5->Position).field0_0x0._s_0.Z - dVar12 * dVar2;
  UE::Math::TQuat<double>::RotateVector
            (local_68,(TVector<double> *)&local_88._s_0,(TVector<double> *)&local_a8._s_0);
  (this->BoneLocalPosition).field0_0x0._s_0.X = local_88._s_0.X;
  (this->BoneLocalPosition).field0_0x0._s_0.Y = local_88._s_0.Y;
  (this->BoneLocalPosition).field0_0x0._s_0.Z = local_88._s_0.Z;
  return;
}

