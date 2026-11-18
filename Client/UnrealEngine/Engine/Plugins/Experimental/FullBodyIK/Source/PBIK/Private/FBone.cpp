// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 3

// FBone @ 14ded6240

FBone * __thiscall
PBIK::FBone::FBone(FBone *this,FName param_1,int *param_2,TVector<double> *param_3,
                  TQuat<double> *param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  
  this->ParentIndex = -2;
  (this->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).ArrayNum = 0;
  (this->Children).ArrayMax = 0;
  this->bIsSolverRoot = false;
  this->bIsSolved = false;
  this->bIsSubRoot = false;
  this->bIsPartOfSolvedBranch = false;
  this->Length = 0.0;
  this->Body = (FRigidBody *)0x0;
  this->Parent = (FBone *)0x0;
  this->Name = param_1;
  this->EffectorIndex = -1;
  this->ParentIndex = *param_2;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->Position).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->Position).field0_0x0._s_0.Y = dVar1;
  (this->Position).field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  dVar1 = param_4->Y;
  (this->Rotation).X = param_4->X;
  (this->Rotation).Y = dVar1;
  dVar1 = param_4->Z;
  dVar2 = param_4->W;
  this->bIsSolverRoot = param_5;
  (this->Rotation).Z = dVar1;
  (this->Rotation).W = dVar2;
  return this;
}

// HasChild @ 14dedb540

bool __thiscall PBIK::FBone::HasChild(FBone *this,FBone *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Children).AllocatorInstance.Data;
  iVar2 = (this->Children).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Children).ArrayNum != iVar2) {
      `TCheckedPointerIterator<PBIK::FBone_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (param_1->Name == **(FName **)pFVar3) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// UpdateFromInputs @ 14dee0260

void __thiscall PBIK::FBone::UpdateFromInputs(FBone *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FBone *pFVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  
  if ((this->bIsPartOfSolvedBranch != false) && (pFVar3 = this->Parent, pFVar3 != (FBone *)0x0)) {
    dVar23 = (this->Position).field0_0x0._s_0.X - (pFVar3->Position).field0_0x0._s_0.X;
    dVar8 = (this->Position).field0_0x0._s_0.Y - (pFVar3->Position).field0_0x0._s_0.Y;
    dVar12 = (this->Position).field0_0x0._s_0.Z - (pFVar3->Position).field0_0x0._s_0.Z;
    dVar13 = (pFVar3->Rotation).Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar14 = (pFVar3->Rotation).W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar15 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * (pFVar3->Rotation).X;
    dVar16 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] * (pFVar3->Rotation).Y;
    dVar9 = dVar16 * dVar12 - dVar13 * dVar8;
    dVar9 = dVar9 + dVar9;
    dVar11 = dVar13 * dVar23 - dVar15 * dVar12;
    dVar11 = dVar11 + dVar11;
    dVar5 = dVar15 * dVar8 - dVar16 * dVar23;
    dVar5 = dVar5 + dVar5;
    (this->LocalPositionFromInput).field0_0x0._s_0.X =
         (dVar5 * dVar16 - dVar11 * dVar13) + dVar9 * dVar14 + dVar23;
    (this->LocalPositionFromInput).field0_0x0._s_0.Y =
         (dVar9 * dVar13 - dVar5 * dVar15) + dVar11 * dVar14 + dVar8;
    (this->LocalPositionFromInput).field0_0x0._s_0.Z =
         (dVar11 * dVar15 - dVar9 * dVar16) + dVar5 * dVar14 + dVar12;
    dVar17 = (this->Rotation).Z;
    dVar18 = (this->Rotation).W;
    uVar1 = (this->Rotation).X;
    uVar2 = (this->Rotation).Y;
    auVar19._8_4_ = SUB84(dVar14,0);
    auVar19._0_8_ = dVar14;
    auVar19._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar20._8_4_ = (int)uVar1;
    auVar20._0_8_ = uVar2;
    auVar20._12_4_ = (int)((ulonglong)uVar1 >> 0x20);
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar6 = dVar18 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar14 * (double)uVar1 +
            dVar16 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            (double)uVar2 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
    ;
    dVar7 = dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar19._8_8_ * (double)uVar2 +
            dVar16 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            auVar20._8_8_ * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
    ;
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar4._8_4_ = SUB84(dVar7,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    (this->LocalRotationFromInput).X = dVar6;
    (this->LocalRotationFromInput).Y = (double)auVar4._8_8_;
    dVar5 = (double)uVar2 * dVar15 * dVar5 + dVar14 * dVar17 + dVar16 * (double)uVar1 * dVar8 +
            dVar18 * dVar13 * dVar9;
    dVar8 = (double)uVar1 * dVar15 * dVar11 + dVar14 * dVar18 + dVar16 * (double)uVar2 * dVar12 +
            dVar17 * dVar13 * dVar23;
    auVar10._8_4_ = SUB84(dVar8,0);
    auVar10._0_8_ = dVar5;
    auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    (this->LocalRotationFromInput).Z = dVar5;
    (this->LocalRotationFromInput).W = (double)auVar10._8_8_;
    dVar5 = (this->LocalPositionFromInput).field0_0x0._s_0.Y;
    dVar8 = (this->LocalPositionFromInput).field0_0x0._s_0.X;
    dVar9 = (this->LocalPositionFromInput).field0_0x0._s_0.Z;
    auVar21._0_8_ = dVar8 * dVar8;
    auVar21._8_8_ = 0;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar5 * dVar5 + auVar21._0_8_ + dVar9 * dVar9;
    auVar22 = sqrtpd(auVar21,auVar22);
    this->Length = (float)auVar22._0_8_;
  }
  return;
}

