// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 54

// ConditionInertia @ 143c93fe0

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::ConditionInertia
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar7;
  
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  uVar11 = SUB84(dVar1,0);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if ((dVar2 <= dVar1) ||
     (dVar10 = *(double *)&param_1->field_0x10, uVar5 = uVar11, uVar8 = uVar12, dVar10 <= dVar1)) {
    dVar10 = *(double *)&param_1->field_0x10;
    dVar7 = dVar10;
    if (dVar2 <= dVar10) {
      dVar7 = dVar2;
    }
    uVar5 = SUB84(dVar7,0);
    uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if ((dVar2 < dVar1) && (dVar10 < dVar1)) goto LAB_143c94023;
  }
  uVar11 = SUB84(dVar2,0);
  uVar12 = (int)((ulonglong)dVar2 >> 0x20);
  if (dVar2 <= dVar10) {
    uVar11 = SUB84(dVar10,0);
    uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  }
LAB_143c94023:
  if (((param_2 <= 0.0) ||
      ((double)CONCAT44(uVar8,uVar5) < 0.0 || (double)CONCAT44(uVar8,uVar5) == 0.0)) ||
     ((double)CONCAT44(uVar12,uVar11) / (double)CONCAT44(uVar8,uVar5) <= param_2)) {
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    uVar3 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  }
  else {
    dVar9 = (double)CONCAT44(uVar12,uVar11) / param_2;
    dVar6 = (double)CONCAT44(uVar12,uVar11) - dVar9;
    dVar7 = __real_3ff0000000000000 /
            ((double)CONCAT44(uVar12,uVar11) - (double)CONCAT44(uVar8,uVar5));
    *(double *)__return_storage_ptr__ =
         (dVar1 - (double)CONCAT44(uVar8,uVar5)) * dVar7 * dVar6 + dVar9;
    *(double *)&__return_storage_ptr__->field_0x8 =
         (dVar2 - (double)CONCAT44(uVar8,uVar5)) * dVar7 * dVar6 + dVar9;
    *(double *)&__return_storage_ptr__->field_0x10 =
         (dVar10 - (double)CONCAT44(uVar8,uVar5)) * dVar7 * dVar6 + dVar9;
  }
  return __return_storage_ptr__;
}

// ConditionInverseMassAndInertia @ 143c94110

void __cdecl
Chaos::FPBDJointUtilities::ConditionInverseMassAndInertia
          (double *param_1,double *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,double param_6)

{
  ConditionInverseMassAndInertia
            (param_1,param_2,param_3,param_4,param_5,param_6,param_1,param_2,param_3,param_4);
  return;
}

// ConditionInverseMassAndInertia @ 143c94160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FPBDJointUtilities::ConditionInverseMassAndInertia
          (double *param_1,double *param_2,TVector<double,3> *param_3,TVector<double,3> *param_4,
          double param_5,double param_6,double *param_7,double *param_8,TVector<double,3> *param_9,
          TVector<double,3> *param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  TVector<double,3> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double local_118;
  double dStack_110;
  undefined1 local_100 [16];
  double local_f0;
  TVector<double,3> local_e8 [8];
  
  auVar5 = ___xmm_3ff00000000000003ff0000000000000;
  dVar2 = __real_3ff0000000000000;
  dVar1 = 0.0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  dVar3 = 0.0;
  uVar18 = 0;
  uVar19 = 0;
  dVar4 = 0.0;
  dVar9 = *param_1;
  uVar20 = 0;
  uVar21 = 0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  if (0.0 < dVar9) {
    local_100 = divpd(___xmm_3ff00000000000003ff0000000000000,*(undefined1 (*) [16])param_3);
    local_f0 = __real_3ff0000000000000 / *(double *)&param_3->field_0x10;
    dVar3 = __real_3ff0000000000000 / dVar9;
    pTVar6 = ConditionInertia(local_e8,(TVector<double,3> *)local_100,param_6);
    uVar18 = (undefined4)*(undefined8 *)&pTVar6->field_0x10;
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)&pTVar6->field_0x10 >> 0x20);
    uVar14 = *(undefined4 *)pTVar6;
    uVar15 = *(undefined4 *)&pTVar6->field_0x4;
    uVar16 = *(undefined4 *)&pTVar6->field_0x8;
    uVar17 = *(undefined4 *)&pTVar6->field_0xc;
  }
  dVar12 = (double)CONCAT44(uVar17,uVar16);
  dVar13 = (double)CONCAT44(uVar15,uVar14);
  dVar10 = *param_2;
  dVar11 = (double)CONCAT44(uVar19,uVar18);
  if (0.0 < dVar10) {
    local_100 = divpd(auVar5,*(undefined1 (*) [16])param_4);
    local_f0 = dVar2 / *(double *)&param_4->field_0x10;
    dVar4 = dVar2 / dVar10;
    pTVar6 = ConditionInertia(local_e8,(TVector<double,3> *)local_100,param_6);
    local_118 = *(double *)pTVar6;
    dStack_110 = *(double *)&pTVar6->field_0x8;
    uVar20 = (undefined4)*(undefined8 *)&pTVar6->field_0x10;
    uVar21 = (undefined4)((ulonglong)*(undefined8 *)&pTVar6->field_0x10 >> 0x20);
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar3 = 0.0;
    goto LAB_143c943f1;
  }
  if (0.0 < dVar10) {
    if (0.0 < param_5) {
      if (((dVar3 <= 0.0) || (dVar4 <= 0.0)) || (param_5 <= dVar3 / dVar4)) {
        if (param_5 <= 0.0) goto LAB_143c943b6;
      }
      else {
        dVar3 = dVar3 * (param_5 / (dVar3 / dVar4));
      }
      dVar9 = (double)CONCAT44(uVar17,uVar16);
      if ((((double)CONCAT44(uVar15,uVar14) < dVar9 || (double)CONCAT44(uVar15,uVar14) == dVar9) ||
          (uVar7 = uVar14, uVar8 = uVar15,
          (double)CONCAT44(uVar15,uVar14) < (double)CONCAT44(uVar19,uVar18) ||
          (double)CONCAT44(uVar15,uVar14) == (double)CONCAT44(uVar19,uVar18))) &&
         (uVar7 = uVar16, uVar8 = uVar17,
         (double)CONCAT44(uVar17,uVar16) <= (double)CONCAT44(uVar19,uVar18))) {
        uVar7 = uVar18;
        uVar8 = uVar19;
      }
      if (((local_118 <= dStack_110) ||
          (dVar10 = local_118,
          local_118 < (double)CONCAT44(uVar21,uVar20) ||
          local_118 == (double)CONCAT44(uVar21,uVar20))) &&
         (dVar10 = dStack_110, dStack_110 <= (double)CONCAT44(uVar21,uVar20))) {
        dVar10 = (double)CONCAT44(uVar21,uVar20);
      }
      if (((0.0 <= (double)CONCAT44(uVar8,uVar7) && (double)CONCAT44(uVar8,uVar7) != 0.0) &&
          (0.0 < dVar10)) && (dVar10 = (double)CONCAT44(uVar8,uVar7) / dVar10, dVar10 < param_5)) {
        dVar10 = param_5 / dVar10;
        dVar13 = (double)CONCAT44(uVar15,uVar14) * dVar10;
        dVar12 = dVar10 * dVar9;
        dVar11 = dVar10 * (double)CONCAT44(uVar19,uVar18);
      }
    }
LAB_143c943b6:
    uVar18 = SUB84(dVar11,0);
    uVar19 = (undefined4)((ulonglong)dVar11 >> 0x20);
  }
  dVar12 = dVar2 / dVar12;
  dVar3 = dVar2 / dVar3;
  dVar9 = dVar2 / (double)CONCAT44(uVar19,uVar18);
  dVar13 = dVar2 / dVar13;
LAB_143c943f1:
  *param_7 = dVar3;
  *(double *)param_9 = dVar13;
  *(double *)&param_9->field_0x8 = dVar12;
  *(double *)&param_9->field_0x10 = dVar9;
  if (*param_2 <= 0.0) {
    dStack_110 = 0.0;
    local_118 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar1 = dVar2 / (double)CONCAT44(uVar21,uVar20);
    dStack_110 = dVar2 / dStack_110;
    local_118 = dVar2 / local_118;
    dVar2 = dVar2 / dVar4;
  }
  *param_8 = dVar2;
  *(double *)param_10 = local_118;
  *(double *)&param_10->field_0x8 = dStack_110;
  *(double *)&param_10->field_0x10 = dVar1;
  return;
}

// ConditionParentInertia @ 143c944b0

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::ConditionParentInertia
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  
  if (0.0 < param_3) {
    dVar1 = *(double *)&param_1->field_0x8;
    dVar2 = *(double *)param_1;
    if ((dVar2 <= dVar1) || (dVar8 = *(double *)&param_1->field_0x10, dVar2 <= dVar8)) {
      dVar8 = *(double *)&param_1->field_0x10;
      uVar5 = SUB84(dVar8,0);
      uVar6 = (int)((ulonglong)dVar8 >> 0x20);
      if (dVar8 <= dVar1) {
        uVar5 = SUB84(dVar1,0);
        uVar6 = (int)((ulonglong)dVar1 >> 0x20);
      }
    }
    else {
      uVar5 = SUB84(dVar2,0);
      uVar6 = (int)((ulonglong)dVar2 >> 0x20);
    }
    dVar7 = *(double *)param_2;
    if ((dVar7 < *(double *)&param_2->field_0x8 || dVar7 == *(double *)&param_2->field_0x8) ||
       (dVar7 < *(double *)&param_2->field_0x10 || dVar7 == *(double *)&param_2->field_0x10)) {
      dVar7 = *(double *)&param_2->field_0x10;
      if (*(double *)&param_2->field_0x10 <= *(double *)&param_2->field_0x8) {
        dVar7 = *(double *)&param_2->field_0x8;
      }
    }
    if (((0.0 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != 0.0) &&
        (0.0 < dVar7)) && (dVar7 = (double)CONCAT44(uVar6,uVar5) / dVar7, dVar7 < param_3)) {
      dVar7 = param_3 / dVar7;
      *(double *)__return_storage_ptr__ = dVar7 * dVar2;
      *(double *)&__return_storage_ptr__->field_0x8 = dVar7 * dVar1;
      *(double *)&__return_storage_ptr__->field_0x10 = dVar7 * dVar8;
      return __return_storage_ptr__;
    }
  }
  uVar4 = *(undefined8 *)&param_1->field_0x8;
  uVar3 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar3;
  return __return_storage_ptr__;
}

// ConditionParentMass @ 143c94580

double __cdecl
Chaos::FPBDJointUtilities::ConditionParentMass(double param_1,double param_2,double param_3)

{
  if ((((0.0 < param_3) && (0.0 < param_1)) && (0.0 < param_2)) && (param_1 / param_2 < param_3)) {
    param_1 = param_1 * (param_3 / (param_1 / param_2));
  }
  return param_1;
}

// DecomposeSwingTwistLocal @ 143c98d00

void __cdecl
Chaos::FPBDJointUtilities::DecomposeSwingTwistLocal
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,TRotation<double,3> *param_3,
          TRotation<double,3> *param_4)

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
  double dVar10;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  dVar7 = *(double *)&param_2->field_0x10;
  dVar8 = *(double *)&param_2->field_0x18;
  dVar9 = *(double *)param_2;
  dVar10 = *(double *)&param_2->field_0x8;
  dVar3 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar4 = *(double *)&param_1->field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = *(double *)&param_1->field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = *(double *)&param_1->field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar1 = dVar3 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar6 * dVar10 +
          dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar2 = dVar3 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar6 * dVar8 +
          dVar4 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ =
       dVar3 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar6 * dVar9 +
       dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_68._8_4_ = SUB84(dVar2,0);
  local_68._0_8_ =
       dVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar6 * dVar7 +
       dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_68._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  TRotation<double,3>::ToSwingTwistX
            ((TRotation<double,3> *)local_78,(TQuat<double> *)param_3,(TQuat<double> *)param_4);
  return;
}

// GetAngularDriveAccelerationMode @ 143c9d7c0

bool __cdecl
Chaos::FPBDJointUtilities::GetAngularDriveAccelerationMode
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  return param_2->AngularDriveForceMode == Acceleration;
}

// GetAngularProjection @ 143c9d7e0

double __cdecl
Chaos::FPBDJointUtilities::GetAngularProjection
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->AngularProjectionOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->AngularProjection;
  }
  return dVar1;
}

// GetAngularSLerpDriveDamping @ 143c9d800

double __cdecl
Chaos::FPBDJointUtilities::GetAngularSLerpDriveDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularSLerpVelocityDriveEnabled != false) {
    dVar3 = param_1->AngularDriveDampingOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&param_2->AngularDriveDamping;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularSLerpDriveStiffness @ 143c9d830

double __cdecl
Chaos::FPBDJointUtilities::GetAngularSLerpDriveStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularSLerpPositionDriveEnabled != false) {
    dVar3 = param_1->AngularDriveStiffnessOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&param_2->AngularDriveStiffness;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularSoftAccelerationMode @ 143c9d860

bool __cdecl
Chaos::FPBDJointUtilities::GetAngularSoftAccelerationMode
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  return param_2->AngularSoftForceMode == Acceleration;
}

// GetAngularSwingDriveDamping @ 143c9d880

double __cdecl
Chaos::FPBDJointUtilities::GetAngularSwingDriveDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularSwingVelocityDriveEnabled != false) {
    dVar3 = param_1->AngularDriveDampingOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&(param_2->AngularDriveDamping).field_0x10;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularSwingDriveStiffness @ 143c9d8b0

double __cdecl
Chaos::FPBDJointUtilities::GetAngularSwingDriveStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularSwingPositionDriveEnabled != false) {
    dVar3 = param_1->AngularDriveStiffnessOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&(param_2->AngularDriveStiffness).field_0x10;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularSwingDriveTorqueLimit @ 143c9d8e0

double __cdecl
Chaos::FPBDJointUtilities::GetAngularSwingDriveTorqueLimit
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if (param_2->bAngularSwingVelocityDriveEnabled != false) {
    return *(double *)&(param_2->AngularDriveMaxTorque).field_0x10;
  }
  return 0.0;
}

// GetAngularTwistDriveDamping @ 143c9d900

double __cdecl
Chaos::FPBDJointUtilities::GetAngularTwistDriveDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularTwistVelocityDriveEnabled != false) {
    dVar3 = param_1->AngularDriveDampingOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&param_2->AngularDriveDamping;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularTwistDriveStiffness @ 143c9d930

double __cdecl
Chaos::FPBDJointUtilities::GetAngularTwistDriveStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_2->bAngularTwistPositionDriveEnabled != false) {
    dVar3 = param_1->AngularDriveStiffnessOverride;
    if (dVar3 < 0.0) {
      dVar3 = *(double *)&param_2->AngularDriveStiffness;
    }
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  return (double)CONCAT44(uVar2,uVar1);
}

// GetAngularTwistDriveTorqueLimit @ 143c9d960

double __cdecl
Chaos::FPBDJointUtilities::GetAngularTwistDriveTorqueLimit
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if (param_2->bAngularTwistVelocityDriveEnabled != false) {
    return *(double *)&param_2->AngularDriveMaxTorque;
  }
  return 0.0;
}

// GetCircularConeAxisErrorLocal @ 143c9da00

void __cdecl
Chaos::FPBDJointUtilities::GetCircularConeAxisErrorLocal
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  
  dVar2 = __real_3ff0000000000000;
  auVar18 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar11 = *(double *)param_2;
  dVar17 = *(double *)&param_2->field_0x8;
  dVar14 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar12 = *(double *)&param_1->field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = *(double *)&param_1->field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&param_1->field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar20 = auVar18._0_8_;
  dVar21 = auVar18._8_8_;
  auVar13._8_4_ = SUB84(dVar12,0);
  auVar13._0_8_ = dVar12;
  auVar13._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar3 = dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar8 * dVar20 +
          dVar12 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar1 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar14 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar8 * dVar21 +
          dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar1 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar12 = dVar14 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar8 * dVar11 +
           dVar12 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar1 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar14 = dVar14 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar8 * dVar17 +
           auVar13._8_8_ * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar1 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar13 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
  auVar23 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  if (dVar12 != 0.0) {
    dVar8 = dVar12 * dVar12 + 0.0;
    dVar11 = dVar4 * dVar4 + 0.0;
    dVar1 = dVar11 + dVar8;
    dVar8 = dVar8 + dVar11;
    auVar23._8_4_ = SUB84(dVar8,0);
    auVar23._0_8_ = dVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar13 = sqrtpd(auVar18,auVar23);
    uVar6 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar8);
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
    uVar15 = (uint)(uVar6 >> 0x20);
    uVar16 = (uint)(uVar7 >> 0x20);
    auVar19._0_8_ = uVar6 & (ulonglong)(auVar18._0_8_ * dVar12);
    uVar5 = uVar7 & (ulonglong)(auVar18._8_8_ * 0.0);
    auVar19._8_4_ = (undefined4)uVar5;
    auVar19._12_4_ = (undefined4)(uVar5 >> 0x20);
    auVar18._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar18._4_4_ =
         ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar18._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar18._12_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar13);
    auVar22._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar22._4_4_ =
         ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar22._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar22._12_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar9._0_8_ = (ulonglong)(auVar13._0_8_ * 0.0) & uVar6;
    uVar7 = (ulonglong)(auVar13._8_8_ * dVar4) & uVar7;
    auVar9._8_4_ = (undefined4)uVar7;
    auVar9._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar13 = auVar19 | auVar18;
    auVar23 = auVar22 | auVar9;
  }
  dVar17 = auVar13._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar20 = auVar13._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar21 = auVar23._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar24 = auVar23._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar14,0);
  auVar10._0_8_ = dVar14;
  auVar10._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  dVar1 = dVar12 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar4 * dVar17 +
          dVar14 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar3 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar8 = dVar12 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar4 * dVar20 +
          auVar10._8_8_ * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar3 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar11 = dVar12 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar4 * dVar21 +
           dVar14 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar3 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar14 = dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar4 * dVar24 +
           dVar14 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar3 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar12 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar14) && (dVar12 = dVar14, __real_3ff0000000000000 <= dVar14)) {
    dVar12 = __real_3ff0000000000000;
  }
  dVar14 = acos(dVar12);
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar8 * dVar8 + dVar1 * dVar1 + dVar11 * dVar11;
  if (dVar12 <= __real_3eb0c6f7a0000000) {
    dVar8 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar12 = dVar2 / SQRT(dVar12);
    dVar2 = dVar11 * dVar12;
    dVar8 = dVar8 * dVar12;
    dVar1 = dVar1 * dVar12;
  }
  *(double *)param_4 = dVar1;
  *(double *)&param_4->field_0x8 = dVar8;
  *(double *)&param_4->field_0x10 = dVar2;
  *param_5 = 0.0;
  if (dVar14 <= param_3) {
    if ((double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000) <= dVar14)
    {
      return;
    }
    dVar14 = dVar14 + param_3;
  }
  else {
    dVar14 = dVar14 - param_3;
  }
  *param_5 = dVar14;
  return;
}

// GetConeAngleLimit @ 143c9dde0

double __cdecl
Chaos::FPBDJointUtilities::GetConeAngleLimit
          (FPBDJointSettings *param_1,TVector<double,3> *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  
  dVar1 = *(double *)&(param_1->AngularLimits).field_0x10;
  dVar2 = *(double *)&(param_1->AngularLimits).field_0x8;
  if (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(dVar1 - dVar2) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1 - dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&param_2->field_0x10 &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    uVar5 = (uint)*(undefined8 *)&param_2->field_0x8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar6 = (uint)((ulonglong)*(undefined8 *)&param_2->field_0x8 >> 0x20) &
            __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    auVar4._0_8_ = (double)CONCAT44(uVar6,uVar5) * dVar2 * (double)CONCAT44(uVar6,uVar5) * dVar2;
    auVar4._8_8_ = 0;
    auVar7._0_8_ = dVar3 * dVar1 * dVar3 * dVar1 + auVar4._0_8_;
    auVar7._8_8_ = 0;
    auVar4 = sqrtpd(auVar4,auVar7);
    return auVar4._0_8_;
  }
  return dVar1;
}

// GetConeAxisAngleLocal @ 143c9de50

void __cdecl
Chaos::FPBDJointUtilities::GetConeAxisAngleLocal
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  uint uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar21;
  double dVar24;
  
  dVar2 = __real_3ff0000000000000;
  auVar18 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar12 = *(double *)param_2;
  dVar17 = *(double *)&param_2->field_0x8;
  dVar13 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar9 = *(double *)&param_1->field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar1 = *(double *)&param_1->field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&param_1->field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar14._8_4_ = SUB84(dVar9,0);
  auVar14._0_8_ = dVar9;
  auVar14._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  dVar20 = auVar18._0_8_;
  dVar21 = auVar18._8_8_;
  dVar3 = dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar8 * dVar20 +
          dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar1 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar13 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar8 * dVar21 +
          dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar1 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = dVar13 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar8 * dVar12 +
          dVar9 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar1 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar13 = dVar13 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar8 * dVar17 +
           auVar14._8_8_ * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + dVar1 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar14 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
  auVar23 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  if (dVar9 != 0.0) {
    dVar8 = dVar9 * dVar9 + 0.0;
    dVar12 = dVar4 * dVar4 + 0.0;
    dVar1 = dVar12 + dVar8;
    dVar8 = dVar8 + dVar12;
    auVar23._8_4_ = SUB84(dVar8,0);
    auVar23._0_8_ = dVar1;
    auVar23._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    auVar14 = sqrtpd(auVar18,auVar23);
    uVar6 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
    uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar8);
    auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
    uVar15 = (uint)(uVar6 >> 0x20);
    uVar16 = (uint)(uVar7 >> 0x20);
    auVar19._0_8_ = uVar6 & (ulonglong)(auVar18._0_8_ * dVar9);
    uVar5 = uVar7 & (ulonglong)(auVar18._8_8_ * 0.0);
    auVar19._8_4_ = (undefined4)uVar5;
    auVar19._12_4_ = (undefined4)(uVar5 >> 0x20);
    auVar18._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar18._4_4_ =
         ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar18._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar18._12_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
    auVar22._0_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar22._4_4_ =
         ~uVar15 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar22._8_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar22._12_4_ =
         ~uVar16 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar10._0_8_ = (ulonglong)(auVar14._0_8_ * 0.0) & uVar6;
    uVar7 = (ulonglong)(auVar14._8_8_ * dVar4) & uVar7;
    auVar10._8_4_ = (undefined4)uVar7;
    auVar10._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar14 = auVar19 | auVar18;
    auVar23 = auVar22 | auVar10;
  }
  dVar21 = auVar23._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar24 = auVar23._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar17 = auVar14._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar20 = auVar14._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar11._8_4_ = SUB84(dVar13,0);
  auVar11._0_8_ = dVar13;
  auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  dVar1 = dVar9 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar4 * dVar17 +
          dVar13 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar3 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar8 = dVar9 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar4 * dVar20 +
          auVar11._8_8_ * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar3 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar12 = dVar9 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar4 * dVar21 +
           dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar3 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar13 = dVar9 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar4 * dVar24 +
           dVar13 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar3 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar9 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar13) && (dVar9 = dVar13, __real_3ff0000000000000 <= dVar13)) {
    dVar9 = __real_3ff0000000000000;
  }
  dVar13 = acos(dVar9);
  *param_5 = dVar13 + dVar13;
  dVar13 = dVar8 * dVar8 + dVar1 * dVar1 + dVar12 * dVar12;
  if (dVar13 <= param_3) {
    dVar8 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar13 = dVar2 / SQRT(dVar13);
    dVar2 = dVar12 * dVar13;
    dVar8 = dVar8 * dVar13;
    dVar1 = dVar1 * dVar13;
  }
  *(double *)param_4 = dVar1;
  *(double *)&param_4->field_0x8 = dVar8;
  *(double *)&param_4->field_0x10 = dVar2;
  if (__real_400921fb60000000 < *param_5) {
    *param_5 = *param_5 - __real_401921fb60000000;
  }
  return;
}

// GetCylinderLimitedPositionError @ 143c9e460

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::GetCylinderLimitedPositionError
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,EJointMotionType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM4 [16];
  undefined1 auVar8 [16];
  
  dVar4 = *(double *)&param_1->field_0x8 * *(double *)&param_2->field_0x8 +
          *(double *)param_1 * *(double *)param_2 +
          *(double *)&param_1->field_0x10 * *(double *)&param_2->field_0x10;
  dVar7 = dVar4 * *(double *)param_2;
  dVar3 = dVar4 * *(double *)&param_2->field_0x8;
  dVar4 = dVar4 * *(double *)&param_2->field_0x10;
  dVar2 = *(double *)param_1 - dVar7;
  dVar1 = *(double *)&param_1->field_0x8 - dVar3;
  dVar5 = *(double *)&param_1->field_0x10 - dVar4;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar2 * dVar2 + dVar1 * dVar1 + dVar5 * dVar5;
  auVar8 = sqrtpd(in_XMM4,auVar8);
  if (param_4 == Free) {
    dVar7 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
  }
  dVar6 = auVar8._0_8_;
  if (param_3 <= dVar6) {
    if (__real_3f1a36e2e0000000 < dVar6) {
      dVar6 = __real_3ff0000000000000 / dVar6;
      dVar1 = dVar1 - dVar6 * dVar1 * param_3;
      dVar2 = dVar2 - dVar6 * dVar2 * param_3;
      dVar5 = dVar5 - dVar6 * dVar5 * param_3;
    }
  }
  else {
    dVar2 = 0.0;
    dVar1 = 0.0;
    dVar5 = 0.0;
  }
  *(double *)&__return_storage_ptr__->field_0x8 = dVar3 + dVar1;
  *(double *)__return_storage_ptr__ = dVar7 + dVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar5 + dVar4;
  return __return_storage_ptr__;
}

// GetCylindricalAxesDeltas @ 143c9e5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FPBDJointUtilities::GetCylindricalAxesDeltas
          (TRotation<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          int param_4,TVector<double,3> *param_5,double *param_6,TVector<double,3> *param_7,
          double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 in_XMM3 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_f8 [32];
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)&param_5->field_0x8 = 0;
  *(undefined8 *)&param_5->field_0x10 = 0;
  *param_6 = 0.0;
  *(undefined8 *)param_7 = 0;
  *(undefined8 *)&param_7->field_0x8 = 0;
  *(undefined8 *)&param_7->field_0x10 = 0;
  *param_8 = 0.0;
  dVar1 = *(double *)param_3;
  dVar5 = *(double *)&param_3->field_0x10 - *(double *)&param_2->field_0x10;
  dVar6 = *(double *)&param_3->field_0x8 - *(double *)&param_2->field_0x8;
  dVar7 = *(double *)param_2;
  local_d8.M[0][0] = 0.0;
  local_d8.M[0][1] = 0.0;
  local_d8.M[0][2] = 0.0;
  local_d8.M[0][3] = 0.0;
  local_d8.M[1][0] = 0.0;
  local_d8.M[1][1] = 0.0;
  local_d8.M[1][2] = 0.0;
  local_d8.M[1][3] = 0.0;
  local_d8.M[2][0] = 0.0;
  local_d8.M[2][1] = 0.0;
  local_d8.M[2][2] = 0.0;
  local_d8.M[2][3] = 0.0;
  local_d8.M[3][0] = 0.0;
  local_d8.M[3][1] = 0.0;
  local_d8.M[3][2] = 0.0;
  local_d8.M[3][3] = 0.0;
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)param_1,&local_d8);
  dVar2 = local_d8.M[param_4][0];
  dVar3 = local_d8.M[param_4][1];
  dVar4 = local_d8.M[param_4][2];
  *(double *)param_5 = dVar2;
  *(double *)&param_5->field_0x8 = dVar3;
  *(double *)&param_5->field_0x10 = dVar4;
  dVar2 = dVar2 * (dVar1 - dVar7) + dVar3 * dVar6 + dVar4 * dVar5;
  *param_6 = dVar2;
  dVar5 = dVar5 - dVar2 * *(double *)&param_5->field_0x10;
  dVar1 = (dVar1 - dVar7) - dVar2 * *(double *)param_5;
  dVar6 = dVar6 - dVar2 * *(double *)&param_5->field_0x8;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1 * dVar1 + dVar6 * dVar6 + dVar5 * dVar5;
  auVar8 = sqrtpd(in_XMM3,auVar8);
  dVar7 = auVar8._0_8_;
  if (__real_3f1a36e2e0000000 < dVar7) {
    dVar2 = __real_3ff0000000000000 / dVar7;
    *(double *)param_7 = dVar2 * dVar1;
    *(double *)&param_7->field_0x8 = dVar2 * dVar6;
    *(double *)&param_7->field_0x10 = dVar2 * dVar5;
    *param_8 = dVar7;
  }
  return;
}

// GetDualConeSwingAxisAngle @ 143c9e7a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FPBDJointUtilities::GetDualConeSwingAxisAngle
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,
          EJointAngularConstraintIndex param_3,TVector<double,3> *param_4,double *param_5)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  double dVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  double local_50;
  double _X;
  
  local_98._s_0.Z = 0.0;
  local_98._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_98._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_2,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  uVar4 = local_78._s_0.Z;
  uVar3 = local_78._s_0.Y;
  uVar2 = local_78._s_0.X;
  dVar6 = __real_3ff0000000000000;
  local_50 = local_78._s_0.Z;
  if (param_3 == Swing1) {
    local_98._s_0.Y = __real_3ff0000000000000;
    local_98._s_0.Z = 0.0;
  }
  else {
    local_98._s_0.Y = 0.0;
    local_98._s_0.Z = __real_3ff0000000000000;
  }
  local_98._s_0.X = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_1,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  *(double *)param_4 = local_78._s_0.Y * (double)uVar4 - (double)uVar3 * local_78._s_0.Z;
  *(double *)&param_4->field_0x8 = (double)uVar2 * local_78._s_0.Z - local_78._s_0.X * (double)uVar4
  ;
  *(double *)&param_4->field_0x10 =
       local_78._s_0.X * (double)uVar3 - (double)uVar2 * local_78._s_0.Y;
  dVar8 = __real_3f1a36e2e0000000;
  *param_5 = 0.0;
  bVar5 = Utilities::NormalizeSafe(param_4,dVar8);
  if (bVar5) {
    auVar1._4_8_ = extraout_XMM0_Qb;
    auVar1._0_4_ = (int)((ulonglong)local_78._0_8_ >> 0x20);
    auVar7._0_8_ = auVar1._0_8_ << 0x20;
    auVar7._8_4_ = SUB84(local_78._s_0.Y,0);
    auVar7._12_4_ = (int)((ulonglong)local_78._8_8_ >> 0x20);
    dVar8 = (double)uVar3 * auVar7._8_8_ + local_78._s_0.X * (double)uVar2 +
            local_78._s_0.Z * local_50;
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    if (dVar6 <= dVar8) {
      dVar8 = dVar6;
    }
    if (dVar8 <= __real_bff0000000000000) {
      dVar8 = __real_bff0000000000000;
    }
    _X = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar8) && (_X = dVar8, dVar6 <= dVar8)) {
      _X = dVar6;
    }
    dVar6 = asin(_X);
    *param_5 = dVar6;
  }
  return;
}

// GetEllipticalConeAxisErrorLocal @ 143c9ec20

void __cdecl
Chaos::FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,double param_3,double param_4,
          TVector<double,3> *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [12];
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar12;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  
  uVar7 = SUB84(param_3 - param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)(param_3 - param_4) >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3f50624dd2f1a9fc <= (double)CONCAT44(uVar8,uVar7) &&
      (double)CONCAT44(uVar8,uVar7) != __real_3f50624dd2f1a9fc) {
    *(undefined8 *)param_5 = 0;
    *(undefined8 *)&param_5->field_0x8 = 0;
    *(undefined8 *)&param_5->field_0x10 = 0x3ff0000000000000;
    *param_6 = 0.0;
    auVar17 = *(undefined1 (*) [16])&param_2->field_0x10;
    dVar16 = *(double *)param_2;
    dVar1 = *(double *)&param_2->field_0x8;
    dVar15 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar21 = *(double *)&param_1->field_0x8 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar23 = *(double *)&param_1->field_0x10 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar26 = *(double *)&param_1->field_0x18 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar9 = auVar17._0_8_;
    dVar12 = auVar17._8_8_;
    auVar14._8_4_ = SUB84(dVar21,0);
    auVar14._0_8_ = dVar21;
    auVar14._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar2 = dVar15 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar26 * dVar16 +
            dVar21 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar23 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar22 = dVar15 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar26 * dVar1 +
             auVar14._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar23 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar13 = dVar15 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar26 * dVar9 +
             dVar21 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar23 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar16 = dVar15 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar26 * dVar12 +
             dVar21 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar23 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar14 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
    auVar25 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
    if (dVar2 != 0.0) {
      dVar9 = dVar2 * dVar2 + 0.0;
      dVar12 = dVar16 * dVar16 + 0.0;
      dVar1 = dVar12 + dVar9;
      dVar9 = dVar9 + dVar12;
      auVar25._8_4_ = SUB84(dVar9,0);
      auVar25._0_8_ = dVar1;
      auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar14 = sqrtpd(auVar17,auVar25);
      uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
      uVar6 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
      auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
      uVar7 = (uint)(uVar5 >> 0x20);
      uVar8 = (uint)(uVar6 >> 0x20);
      auVar18._0_8_ = uVar5 & (ulonglong)(auVar17._0_8_ * dVar2);
      uVar4 = uVar6 & (ulonglong)(auVar17._8_8_ * 0.0);
      auVar18._8_4_ = (undefined4)uVar4;
      auVar18._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar17._0_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar17._4_4_ =
           ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
      auVar17._8_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar17._12_4_ =
           ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
      auVar24._0_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar24._4_4_ =
           ~uVar7 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
      auVar24._8_4_ = ~(uint)uVar6 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar24._12_4_ =
           ~uVar8 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      auVar10._0_8_ = (ulonglong)(auVar14._0_8_ * 0.0) & uVar5;
      uVar6 = (ulonglong)(auVar14._8_8_ * dVar16) & uVar6;
      auVar10._8_4_ = (undefined4)uVar6;
      auVar10._12_4_ = (undefined4)(uVar6 >> 0x20);
      auVar14 = auVar18 | auVar17;
      auVar25 = auVar24 | auVar10;
    }
    dVar15 = auVar14._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar21 = auVar14._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar23 = auVar25._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar26 = auVar25._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar11._8_4_ = SUB84(dVar22,0);
    auVar11._0_8_ = dVar22;
    auVar11._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar9 = dVar2 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar16 * dVar15 +
            dVar22 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar13 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar12 = dVar2 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dVar16 * dVar21 +
             auVar11._8_8_ * dVar26 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar1 = dVar2 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar16 * dVar23 +
            dVar22 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar13 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar2 = dVar2 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar16 * dVar26 +
            dVar22 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar13 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dVar16 = dVar2 + __real_3ff0000000000000;
    dVar13 = FGenericPlatformMath::Atan2(dVar1,dVar16);
    dVar15 = dVar13 * __real_4010000000000000;
    auVar3._4_8_ = auVar19._8_8_;
    auVar3._0_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar20._0_8_ = auVar3._0_8_ << 0x20;
    auVar20._8_4_ = SUB84(dVar12,0);
    auVar20._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar22 = auVar20._8_8_;
    dVar16 = FGenericPlatformMath::Atan2(dVar22,dVar16);
    local_f8 = __real_3ff0000000000000;
    local_118 = dVar16 * __real_4010000000000000;
    if (__real_3ff0000000000000 <
        (__real_3ff0000000000000 / param_3) * (__real_3ff0000000000000 / param_3) *
        __real_4030000000000000 * dVar16 * dVar16 +
        (__real_3ff0000000000000 / param_4) * (__real_3ff0000000000000 / param_4) *
        __real_4030000000000000 * dVar13 * dVar13) {
      local_128 = param_3;
      local_120 = param_4;
      local_110 = dVar15;
      NearPointOnEllipse((TVector<double,2> *)&local_108,(TVector<double,2> *)&local_118,
                         (TVector<double,2> *)&local_128,0x14,__real_3f1a36e2e0000000);
      local_c8._0_8_ = 0;
      dVar13 = dVar1 + dVar1;
      uVar7 = SUB84(dVar12 + dVar22,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (uint)((ulonglong)(dVar12 + dVar22) >> 0x20) ^
              __xmm_80000000000000008000000000000000._4_4_;
      local_f8 = ((double)CONCAT44(uVar8,uVar7) * dVar22 - dVar13 * dVar1) + local_f8;
      local_f0 = dVar13 * dVar2 - (double)CONCAT44(uVar8,uVar7) * dVar9;
      local_e8 = (double)CONCAT44(uVar8,uVar7) * dVar2 + dVar13 * dVar9;
      local_c8._8_8_ = tan(local_108 * __real_3fd0000000000000);
      local_b8 = tan(local_100 * __real_3fd0000000000000);
      local_e0._8_8_ = local_108 / (param_3 * param_3);
      local_d0 = local_100 / (param_4 * param_4);
      local_e0._0_8_ = 0;
      GetEllipticalAxisError
                ((TVector<double,3> *)local_c8,(TVector<double,3> *)local_e0,
                 (TVector<double,3> *)&local_f8,param_5,param_6);
    }
  }
  else {
    GetCircularConeAxisErrorLocal(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}

// GetLimitedPositionError @ 143c9f1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::GetLimitedPositionError
          (TVector<double,3> *__return_storage_ptr__,FPBDJointSettings *param_1,
          TRotation<double,3> *param_2,TVector<double,3> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined8 uVar4;
  EJointMotionType EVar5;
  EJointMotionType EVar6;
  EJointMotionType EVar7;
  EJointMotionType EVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [4];
  
  EVar8 = (param_1->LinearMotionTypes).field0_0x0._s_0.X;
  EVar5 = Free;
  if ((EVar8 == Limited) && (param_1->bSoftLinearLimitsEnabled != false)) {
    EVar8 = EVar5;
  }
  EVar6 = (param_1->LinearMotionTypes).field0_0x0._s_0.Y;
  if ((EVar6 == Limited) && (param_1->bSoftLinearLimitsEnabled != false)) {
    EVar6 = EVar5;
  }
  EVar7 = (param_1->LinearMotionTypes).field0_0x0._s_0.Z;
  if ((EVar7 == Limited) && (param_1->bSoftLinearLimitsEnabled != false)) {
    EVar7 = EVar5;
  }
  if (EVar8 == Locked) {
    if (EVar6 == Locked) {
      if (EVar7 == Locked) {
LAB_143c9f247:
        uVar4 = *(undefined8 *)&param_3->field_0x8;
        *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_3;
        *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar4;
        *(undefined8 *)&__return_storage_ptr__->field_0x10 = *(undefined8 *)&param_3->field_0x10;
        return __return_storage_ptr__;
      }
    }
    else {
LAB_143c9f321:
      if ((EVar6 == Limited) && (EVar7 == Limited)) {
        local_b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
        local_b8._s_0.Y = _UNK_150689518;
        local_b8._s_0.Z = 0.0;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)param_2,(TVector<double> *)&local_d8._s_0,
                   (TVector<double> *)&local_b8._s_0);
        EVar7 = EVar8;
        goto LAB_143c9f354;
      }
LAB_143c9f383:
      if (EVar8 == Limited) goto LAB_143c9f389;
    }
  }
  else {
    if (EVar8 != Limited) goto LAB_143c9f321;
    if (EVar6 == Limited) {
      if (EVar7 == Limited) {
        dVar9 = *(double *)param_3;
        dVar1 = *(double *)&param_3->field_0x8;
        dVar3 = *(double *)&param_3->field_0x10;
        dVar16 = param_1->LinearLimit;
        auVar11._0_8_ = dVar9 * dVar9;
        auVar11._8_8_ = 0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar1 * dVar1 + auVar11._0_8_ + dVar3 * dVar3;
        auVar12 = sqrtpd(auVar11,auVar12);
        dVar15 = auVar12._0_8_;
        if (dVar15 < dVar16) {
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (__real_3e45798ee0000000 < dVar15) {
          dVar15 = __real_3ff0000000000000 / dVar15;
          *(double *)__return_storage_ptr__ = dVar9 - dVar15 * dVar9 * dVar16;
          *(double *)&__return_storage_ptr__->field_0x8 = dVar1 - dVar15 * dVar1 * dVar16;
          *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar15 * dVar3 * dVar16;
          return __return_storage_ptr__;
        }
        goto LAB_143c9f247;
      }
      goto LAB_143c9f383;
    }
LAB_143c9f389:
    if (EVar7 == Limited) {
      local_b8._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_b8._s_0.Y = _UNK_15061cbc8;
      local_b8._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)param_2,(TVector<double> *)&local_d8._s_0,
                 (TVector<double> *)&local_b8._s_0);
      EVar7 = EVar6;
LAB_143c9f354:
      local_b8._s_0.X = local_d8._s_0.X;
      local_b8._s_0.Y = local_d8._s_0.Y;
      local_b8._s_0.Z = local_d8._s_0.Z;
      GetCylinderLimitedPositionError
                (__return_storage_ptr__,param_3,(TVector<double,3> *)&local_b8._s_0,
                 param_1->LinearLimit,EVar7);
      return __return_storage_ptr__;
    }
    if (EVar6 == Limited) {
      local_b8._s_0.Z = __real_3ff0000000000000;
      local_b8._s_0.X = 0.0;
      local_b8._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)param_2,(TVector<double> *)&local_d8._s_0,
                 (TVector<double> *)&local_b8._s_0);
      goto LAB_143c9f354;
    }
  }
  dVar9 = *(double *)&param_3->field_0x10;
  dVar3 = *(double *)param_3;
  dVar1 = *(double *)&param_3->field_0x8;
  if (EVar8 != Locked) {
    local_98[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_98[0]._s_0.Y = _UNK_150689518;
    local_98[0]._s_0.Z = 0.0;
    local_d8._s_0.Z = dVar9;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)param_2,(TVector<double> *)&local_b8._s_0,
               (TVector<double> *)&local_98[0]._s_0);
    dVar16 = param_1->LinearLimit;
    dVar15 = dVar3 * local_b8._s_0.X + dVar1 * local_b8._s_0.Y + local_d8._s_0.Z * local_b8._s_0.Z;
    if ((EVar8 == Free) ||
       ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar16))
    {
      dVar10 = dVar15 * local_b8._s_0.X;
      dVar9 = dVar15 * local_b8._s_0.Z;
      dVar13 = dVar15 * local_b8._s_0.Y;
    }
    else {
      dVar9 = dVar16 * local_b8._s_0.Z;
      dVar13 = dVar16 * local_b8._s_0.Y;
      dVar10 = dVar16 * local_b8._s_0.X;
      if (dVar15 < dVar16) {
        dVar9 = local_d8._s_0.Z + dVar9;
        dVar1 = dVar1 + dVar13;
        dVar3 = dVar3 + dVar10;
        goto LAB_143c9f51a;
      }
    }
    dVar3 = dVar3 - dVar10;
    dVar1 = dVar1 - dVar13;
    dVar9 = local_d8._s_0.Z - dVar9;
  }
LAB_143c9f51a:
  local_d8._s_0.Z = dVar9;
  if (EVar6 != Locked) {
    local_98[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_98[0]._s_0.Y = _UNK_15061cbc8;
    local_98[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)param_2,(TVector<double> *)&local_b8._s_0,
               (TVector<double> *)&local_98[0]._s_0);
    dVar16 = param_1->LinearLimit;
    dVar15 = dVar3 * local_b8._s_0.X + dVar1 * local_b8._s_0.Y + dVar9 * local_b8._s_0.Z;
    if ((EVar6 == Free) ||
       ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar16))
    {
      dVar10 = dVar15 * local_b8._s_0.X;
      dVar13 = dVar15 * local_b8._s_0.Z;
      dVar14 = dVar15 * local_b8._s_0.Y;
    }
    else {
      dVar13 = dVar16 * local_b8._s_0.Z;
      dVar14 = dVar16 * local_b8._s_0.Y;
      dVar10 = dVar16 * local_b8._s_0.X;
      if (dVar15 < dVar16) {
        local_d8._s_0.Z = dVar9 + dVar13;
        dVar1 = dVar1 + dVar14;
        dVar3 = dVar3 + dVar10;
        goto LAB_143c9f5ee;
      }
    }
    dVar3 = dVar3 - dVar10;
    dVar1 = dVar1 - dVar14;
    local_d8._s_0.Z = dVar9 - dVar13;
  }
LAB_143c9f5ee:
  uVar4 = local_d8._s_0.Z;
  if (EVar7 != Locked) {
    local_98[0]._s_0.Z = __real_3ff0000000000000;
    local_98[0]._s_0.X = 0.0;
    local_98[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)param_2,(TVector<double> *)&local_b8._s_0,
               (TVector<double> *)&local_98[0]._s_0);
    dVar9 = param_1->LinearLimit;
    dVar16 = dVar3 * local_b8._s_0.X + dVar1 * local_b8._s_0.Y + (double)uVar4 * local_b8._s_0.Z;
    if ((EVar7 == Free) ||
       ((double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < dVar9)) {
      dVar15 = dVar16 * local_b8._s_0.X;
      dVar10 = dVar16 * local_b8._s_0.Z;
      dVar13 = dVar16 * local_b8._s_0.Y;
    }
    else {
      dVar10 = dVar9 * local_b8._s_0.Z;
      dVar13 = dVar9 * local_b8._s_0.Y;
      dVar15 = dVar9 * local_b8._s_0.X;
      if (dVar16 < dVar9) {
        local_d8._s_0.Z = (double)uVar4 + dVar10;
        dVar1 = dVar1 + dVar13;
        dVar3 = dVar3 + dVar15;
        goto LAB_143c9f6cf;
      }
    }
    dVar3 = dVar3 - dVar15;
    dVar1 = dVar1 - dVar13;
    local_d8._s_0.Z = (double)uVar4 - dVar10;
  }
LAB_143c9f6cf:
  auVar2._8_4_ = SUB84(dVar1,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar2;
  *(double *)&__return_storage_ptr__->field_0x10 = local_d8._s_0.Z;
  return __return_storage_ptr__;
}

// GetLineLimitedPositionError @ 143c9f730

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::GetLineLimitedPositionError
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,EJointMotionType param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = *(double *)param_2;
  dVar6 = *(double *)&param_2->field_0x8;
  dVar7 = *(double *)&param_2->field_0x10;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = dVar2 * dVar6 + dVar1 * dVar5 + dVar3 * dVar7;
  if ((param_4 == Free) ||
     ((double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) < param_3)) {
    dVar5 = dVar5 * dVar4;
    dVar6 = dVar6 * dVar4;
    dVar7 = dVar7 * dVar4;
  }
  else {
    dVar5 = dVar5 * param_3;
    dVar6 = dVar6 * param_3;
    dVar7 = dVar7 * param_3;
    if (dVar4 < param_3) {
      *(double *)__return_storage_ptr__ = dVar5 + dVar1;
      *(double *)&__return_storage_ptr__->field_0x8 = dVar6 + dVar2;
      *(double *)&__return_storage_ptr__->field_0x10 = dVar7 + dVar3;
      return __return_storage_ptr__;
    }
  }
  *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar7;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar2 - dVar6;
  *(double *)__return_storage_ptr__ = dVar1 - dVar5;
  return __return_storage_ptr__;
}

// GetLinearDriveAccelerationMode @ 143c9f830

bool __cdecl
Chaos::FPBDJointUtilities::GetLinearDriveAccelerationMode
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  return param_2->LinearDriveForceMode == Acceleration;
}

// GetLinearDriveDamping @ 143c9f850

double __cdecl
Chaos::FPBDJointUtilities::GetLinearDriveDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if ((param_2->bLinearVelocityDriveEnabled).field0_0x0.XYZ[param_3] != false) {
    dVar5 = param_1->LinearDriveDampingOverride;
    if (dVar5 < 0.0) {
      if (2 < (uint)param_3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          dVar5 = (double)(*pcVar1)();
          return dVar5;
        }
      }
      dVar5 = *(double *)(&(param_2->LinearDriveDamping).field_0x0 + (longlong)param_3 * 8);
    }
    uVar3 = SUB84(dVar5,0);
    uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  return (double)CONCAT44(uVar4,uVar3);
}

// GetLinearDriveStiffness @ 143c9f8d0

double __cdecl
Chaos::FPBDJointUtilities::GetLinearDriveStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  uVar3 = 0;
  uVar4 = 0;
  if ((param_2->bLinearPositionDriveEnabled).field0_0x0.XYZ[param_3] != false) {
    dVar5 = param_1->LinearDriveStiffnessOverride;
    if (dVar5 < 0.0) {
      if (2 < (uint)param_3) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7ab,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          dVar5 = (double)(*pcVar1)();
          return dVar5;
        }
      }
      dVar5 = *(double *)(&(param_2->LinearDriveStiffness).field_0x0 + (longlong)param_3 * 8);
    }
    uVar3 = SUB84(dVar5,0);
    uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
  }
  return (double)CONCAT44(uVar4,uVar3);
}

// GetLinearIsFree @ 143c9f950

bool __cdecl Chaos::FPBDJointUtilities::GetLinearIsFree(FPBDJointSettings *param_1)

{
  if (((((param_1->LinearMotionTypes).field0_0x0._s_0.X == Free) &&
       ((param_1->LinearMotionTypes).field0_0x0._s_0.Y == Free)) &&
      ((param_1->LinearMotionTypes).field0_0x0._s_0.Z == Free)) &&
     ((((param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.X == false &&
       ((param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.Y == false)) &&
      (((param_1->bLinearPositionDriveEnabled).field0_0x0._s_0.Z == false &&
       (bExcludeFreeJointInertiaConditioning)))))) {
    return true;
  }
  return false;
}

// GetLinearProjection @ 143c9f9a0

double __cdecl
Chaos::FPBDJointUtilities::GetLinearProjection
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->LinearProjectionOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->LinearProjection;
  }
  return dVar1;
}

// GetLinearSoftAccelerationMode @ 143c9f9c0

bool __cdecl
Chaos::FPBDJointUtilities::GetLinearSoftAccelerationMode
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  return param_2->LinearSoftForceMode == Acceleration;
}

// GetLinearStiffness @ 143c9f9e0

double __cdecl
Chaos::FPBDJointUtilities::GetLinearStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->LinearStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->Stiffness;
  }
  return dVar1;
}

// GetLockedRotationAxes @ 143c9fa00

void __cdecl
Chaos::FPBDJointUtilities::GetLockedRotationAxes
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,TVector<double,3> *param_3,
          TVector<double,3> *param_4,TVector<double,3> *param_5)

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
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar13 = __real_3fe0000000000000;
  dVar16 = *(double *)param_2;
  dVar1 = *(double *)&param_2->field_0x18;
  dVar2 = *(double *)&param_1->field_0x18;
  dVar3 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x10;
  dVar6 = *(double *)&param_2->field_0x10;
  dVar7 = *(double *)&param_1->field_0x8;
  dVar12 = dVar16 * dVar2 + dVar4 * dVar1;
  dVar8 = dVar3 * dVar7;
  dVar9 = dVar6 * dVar5;
  dVar11 = dVar3 * dVar2 + dVar7 * dVar1;
  dVar10 = dVar16 * dVar4 + dVar8 + dVar9;
  dVar15 = dVar6 * dVar2 + dVar5 * dVar1;
  dVar19 = dVar1 * dVar2 - dVar10;
  dVar17 = dVar16 * dVar7 + dVar3 * dVar4;
  dVar18 = dVar16 * dVar5 + dVar6 * dVar4;
  dVar14 = (dVar17 + dVar15) * __real_3fe0000000000000;
  dVar17 = (dVar17 - dVar15) * __real_3fe0000000000000;
  dVar15 = (dVar18 - dVar11) * __real_3fe0000000000000;
  *(double *)param_3 = ((dVar4 + dVar4) * dVar16 + dVar19) * __real_3fe0000000000000;
  *(double *)&param_3->field_0x8 = dVar14;
  *(double *)&param_3->field_0x10 = dVar15;
  *(double *)param_4 = dVar17;
  dVar16 = dVar3 * dVar5 + dVar6 * dVar7;
  dVar10 = dVar10 + dVar1 * dVar2;
  *(double *)&param_4->field_0x8 = (dVar8 + dVar8 + dVar19) * dVar13;
  *(double *)&param_4->field_0x10 = (dVar16 + dVar12) * dVar13;
  *(double *)param_5 = (dVar18 + dVar11) * dVar13;
  *(double *)&param_5->field_0x8 = (dVar16 - dVar12) * dVar13;
  *(double *)&param_5->field_0x10 = (dVar9 + dVar9 + dVar19) * dVar13;
  dVar16 = __real_3e45798ee0000000;
  if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3e45798ee0000000) {
    *(double *)param_3 = *(double *)param_3 + __real_3e45798ee0000000;
    *(double *)&param_4->field_0x8 = *(double *)&param_4->field_0x8 + dVar16;
    *(double *)&param_5->field_0x10 = *(double *)&param_5->field_0x10 + dVar16;
  }
  return;
}

// GetLockedSwingAxisAngle @ 143c9fc70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FPBDJointUtilities::GetLockedSwingAxisAngle
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,
          EJointAngularConstraintIndex param_3,TVector<double,3> *param_4,double *param_5)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  double dVar6;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  double local_40;
  
  local_88._s_0.Z = 0.0;
  local_88._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_88._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_2,(TVector<double> *)&local_68._s_0,
             (TVector<double> *)&local_88._s_0);
  uVar4 = local_68._s_0.Z;
  uVar3 = local_68._s_0.Y;
  uVar2 = local_68._s_0.X;
  local_40 = local_68._s_0.Z;
  if (param_3 == Swing1) {
    local_88._s_0.Y = __real_3ff0000000000000;
    local_88._s_0.Z = 0.0;
  }
  else {
    local_88._s_0.Y = 0.0;
    local_88._s_0.Z = __real_3ff0000000000000;
  }
  local_88._s_0.X = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_1,(TVector<double> *)&local_68._s_0,
             (TVector<double> *)&local_88._s_0);
  auVar1._4_8_ = uVar3;
  auVar1._0_4_ = (int)((ulonglong)local_68._0_8_ >> 0x20);
  auVar5._0_8_ = auVar1._0_8_ << 0x20;
  auVar5._8_4_ = SUB84(local_68._s_0.Y,0);
  auVar5._12_4_ = (int)((ulonglong)local_68._8_8_ >> 0x20);
  *(double *)param_4 = local_68._s_0.Y * (double)uVar4 - (double)uVar3 * local_68._s_0.Z;
  *(double *)&param_4->field_0x8 = (double)uVar2 * local_68._s_0.Z - local_68._s_0.X * (double)uVar4
  ;
  *(double *)&param_4->field_0x10 =
       local_68._s_0.X * (double)uVar3 - (double)uVar2 * local_68._s_0.Y;
  dVar6 = (double)uVar3 * auVar5._8_8_ + local_68._s_0.X * (double)uVar2 +
          local_68._s_0.Z * local_40;
  *param_5 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000);
  return;
}

// GetPlanarAxisDelta @ 143c9fe30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Chaos::FPBDJointUtilities::GetPlanarAxisDelta
          (TRotation<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          int param_4,TVector<double,3> *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_c8 [32];
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)param_1,&local_a8);
  dVar1 = local_a8.M[param_4][0];
  dVar2 = local_a8.M[param_4][1];
  dVar3 = local_a8.M[param_4][2];
  *(double *)param_5 = dVar1;
  *(double *)&param_5->field_0x8 = dVar2;
  *(double *)&param_5->field_0x10 = dVar3;
  *param_6 = (*(double *)&param_3->field_0x8 - *(double *)&param_2->field_0x8) * dVar2 +
             (*(double *)param_3 - *(double *)param_2) * dVar1 +
             (*(double *)&param_3->field_0x10 - *(double *)&param_2->field_0x10) * dVar3;
  return;
}

// GetShockPropagationInvMassScale @ 143c9ffb0

double __cdecl
Chaos::FPBDJointUtilities::GetShockPropagationInvMassScale
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if (0.0 <= param_1->ShockPropagationOverride) {
    return __real_3ff0000000000000 - param_1->ShockPropagationOverride;
  }
  return __real_3ff0000000000000 - param_2->ShockPropagation;
}

// GetSoftLinearDamping @ 143c9ffe0

double __cdecl
Chaos::FPBDJointUtilities::GetSoftLinearDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftLinearDampingOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftLinearDamping;
  }
  return dVar1;
}

// GetSoftLinearLimitEnabled @ 143ca0000

bool __cdecl
Chaos::FPBDJointUtilities::GetSoftLinearLimitEnabled
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if ((param_2->bSoftLinearLimitsEnabled != false) && (!bChaos_Joint_DisableSoftLimits)) {
    return true;
  }
  return false;
}

// GetSoftLinearStiffness @ 143ca0020

double __cdecl
Chaos::FPBDJointUtilities::GetSoftLinearStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftLinearStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftLinearStiffness;
  }
  return dVar1;
}

// GetSoftSwingDamping @ 143ca0040

double __cdecl
Chaos::FPBDJointUtilities::GetSoftSwingDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftSwingDampingOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftSwingDamping;
  }
  return dVar1;
}

// GetSoftSwingLimitEnabled @ 143ca0060

bool __cdecl
Chaos::FPBDJointUtilities::GetSoftSwingLimitEnabled
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if ((param_2->bSoftSwingLimitsEnabled != false) && (!bChaos_Joint_DisableSoftLimits)) {
    return true;
  }
  return false;
}

// GetSoftSwingStiffness @ 143ca0080

double __cdecl
Chaos::FPBDJointUtilities::GetSoftSwingStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftSwingStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftSwingStiffness;
  }
  return dVar1;
}

// GetSoftTwistDamping @ 143ca00a0

double __cdecl
Chaos::FPBDJointUtilities::GetSoftTwistDamping
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftTwistDampingOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftTwistDamping;
  }
  return dVar1;
}

// GetSoftTwistLimitEnabled @ 143ca00c0

bool __cdecl
Chaos::FPBDJointUtilities::GetSoftTwistLimitEnabled
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  if ((param_2->bSoftTwistLimitsEnabled != false) && (!bChaos_Joint_DisableSoftLimits)) {
    return true;
  }
  return false;
}

// GetSoftTwistStiffness @ 143ca00e0

double __cdecl
Chaos::FPBDJointUtilities::GetSoftTwistStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SoftTwistStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->SoftTwistStiffness;
  }
  return dVar1;
}

// GetSphereLimitedPositionError @ 143ca0100

TVector<double,3> * __cdecl
Chaos::FPBDJointUtilities::GetSphereLimitedPositionError
          (TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  auVar6._0_8_ = dVar1 * dVar1;
  auVar6._8_8_ = 0;
  dVar3 = *(double *)&param_1->field_0x10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar2 * dVar2 + auVar6._0_8_ + dVar3 * dVar3;
  auVar7 = sqrtpd(auVar6,auVar7);
  dVar8 = auVar7._0_8_;
  if (dVar8 < param_2) {
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
    return __return_storage_ptr__;
  }
  if (__real_3e45798ee0000000 < dVar8) {
    dVar8 = __real_3ff0000000000000 / dVar8;
    *(double *)__return_storage_ptr__ = dVar1 - dVar8 * dVar1 * param_2;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar2 - dVar8 * dVar2 * param_2;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar3 - dVar8 * dVar3 * param_2;
    return __return_storage_ptr__;
  }
  uVar5 = *(undefined8 *)&param_1->field_0x8;
  uVar4 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)param_1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar4;
  return __return_storage_ptr__;
}

// GetSphericalAxisDelta @ 143ca01f0

void __cdecl
Chaos::FPBDJointUtilities::GetSphericalAxisDelta
          (TVector<double,3> *param_1,TVector<double,3> *param_2,TVector<double,3> *param_3,
          double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)&param_3->field_0x8 = 0;
  *(undefined8 *)&param_3->field_0x10 = 0;
  *param_4 = 0.0;
  dVar6 = *(double *)&param_2->field_0x8 - *(double *)&param_1->field_0x8;
  dVar2 = *(double *)param_2 - *(double *)param_1;
  dVar5 = *(double *)&param_2->field_0x10 - *(double *)&param_1->field_0x10;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + dVar6 * dVar6 + dVar5 * dVar5;
  auVar4 = sqrtpd(in_XMM3,auVar4);
  dVar3 = auVar4._0_8_;
  if (__real_3f1a36e2e0000000 < dVar3) {
    dVar1 = __real_3ff0000000000000 / dVar3;
    *(double *)param_3 = dVar1 * dVar2;
    *(double *)&param_3->field_0x8 = dVar1 * dVar6;
    *(double *)&param_3->field_0x10 = dVar1 * dVar5;
    *param_4 = dVar3;
  }
  return;
}

// GetSwingAxisAngle @ 143ca0720

void __cdecl
Chaos::FPBDJointUtilities::GetSwingAxisAngle
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,double param_3,
          EJointAngularConstraintIndex param_4,TVector<double,3> *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8 [6];
  
  auVar22 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar16 = *(double *)param_2;
  dVar24 = *(double *)&param_2->field_0x8;
  dVar1 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar2 = *(double *)&param_1->field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar3 = *(double *)&param_1->field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar12 = *(double *)&param_1->field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar25 = auVar22._0_8_;
  dVar28 = auVar22._8_8_;
  auVar17._8_4_ = SUB84(dVar2,0);
  auVar17._0_8_ = dVar2;
  auVar17._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar4 = dVar1 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar12 * dVar25 +
          dVar2 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar3 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar1 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar12 * dVar28 +
          dVar2 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar3 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar1 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar12 * dVar16 +
          dVar2 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar3 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar1 = dVar1 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar12 * dVar24 +
          auVar17._8_8_ * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar3 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar17 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
  auVar27 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  if (dVar2 != 0.0) {
    dVar12 = dVar2 * dVar2 + 0.0;
    dVar16 = dVar5 * dVar5 + 0.0;
    dVar3 = dVar16 + dVar12;
    dVar12 = dVar12 + dVar16;
    auVar27._8_4_ = SUB84(dVar12,0);
    auVar27._0_8_ = dVar3;
    auVar27._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar17 = sqrtpd(auVar22,auVar27);
    uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
    uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar12);
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
    uVar18 = (uint)(uVar8 >> 0x20);
    uVar19 = (uint)(uVar9 >> 0x20);
    auVar23._0_8_ = uVar8 & (ulonglong)(auVar22._0_8_ * dVar2);
    uVar7 = uVar9 & (ulonglong)(auVar22._8_8_ * 0.0);
    auVar23._8_4_ = (undefined4)uVar7;
    auVar23._12_4_ = (undefined4)(uVar7 >> 0x20);
    auVar22._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar22._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar22._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar22._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
    auVar26._0_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar26._4_4_ =
         ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar26._8_4_ = ~(uint)uVar9 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar26._12_4_ =
         ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar13._0_8_ = (ulonglong)(auVar17._0_8_ * 0.0) & uVar8;
    uVar9 = (ulonglong)(auVar17._8_8_ * dVar5) & uVar9;
    auVar13._8_4_ = (undefined4)uVar9;
    auVar13._12_4_ = (undefined4)(uVar9 >> 0x20);
    auVar17 = auVar23 | auVar22;
    auVar27 = auVar26 | auVar13;
  }
  auVar14._8_4_ = SUB84(dVar1,0);
  auVar14._0_8_ = dVar1;
  auVar14._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar25 = auVar27._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar28 = auVar27._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar16 = auVar17._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar24 = auVar17._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar12 = auVar14._8_8_ * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar3 = dVar2 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar5 * dVar25 +
          dVar1 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar4 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar1 = dVar2 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar5 * dVar28 +
          dVar1 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar4 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar20 = SUB84(__real_3ff0000000000000,0);
  uVar21 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar10 = uVar20;
  uVar11 = uVar21;
  if (param_4 == Swing1) {
    auVar6._4_8_ = dVar12;
    auVar6._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar15._0_8_ = auVar6._0_8_ << 0x20;
    auVar15._8_4_ = SUB84(dVar1,0);
    auVar15._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    dVar1 = FGenericPlatformMath::Atan2(dVar3,auVar15._8_8_ + __real_3ff0000000000000);
    *param_6 = dVar1 * __real_4010000000000000;
    uVar20 = 0;
    uVar21 = 0;
  }
  else {
    dVar1 = FGenericPlatformMath::Atan2
                      (dVar2 * dVar25 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       dVar5 * dVar24 + dVar12 +
                       dVar4 * dVar16 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1],
                       dVar1 + __real_3ff0000000000000);
    *param_6 = dVar1 * __real_4010000000000000;
    if (param_4 == Swing1) {
      uVar20 = 0;
      uVar21 = 0;
    }
    else {
      uVar10 = 0;
      uVar11 = 0;
    }
  }
  local_c8._s_0.X = 0.0;
  local_c8._s_0.Y = (double)CONCAT44(uVar21,uVar20);
  local_c8._s_0.Z = (double)CONCAT44(uVar11,uVar10);
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_1,(TVector<double> *)&local_a8[0]._s_0,
             (TVector<double> *)&local_c8._s_0);
  *(undefined8 *)param_5 = local_a8[0]._s_0.X;
  *(undefined8 *)&param_5->field_0x8 = local_a8[0]._s_0.Y;
  *(undefined8 *)&param_5->field_0x10 = local_a8[0]._s_0.Z;
  return;
}

// GetSwingStiffness @ 143ca0ac0

double __cdecl
Chaos::FPBDJointUtilities::GetSwingStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->SwingStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->Stiffness;
  }
  return dVar1;
}

// GetSwingTwistAngles @ 143ca0ae0

void __cdecl
Chaos::FPBDJointUtilities::GetSwingTwistAngles
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,double *param_3,double *param_4
          ,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar25;
  undefined1 auVar24 [16];
  uint uVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  auVar28 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar30 = *(double *)param_2;
  dVar32 = *(double *)&param_2->field_0x8;
  dVar10 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar12 = *(double *)&param_1->field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar19 = *(double *)&param_1->field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar22 = *(double *)&param_1->field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar23 = auVar28._0_8_;
  dVar25 = auVar28._8_8_;
  auVar24._8_4_ = SUB84(dVar12,0);
  auVar24._0_8_ = dVar12;
  auVar24._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar13 = dVar10 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar22 * dVar30 +
           dVar12 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar19 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar14 = dVar10 * dVar23 * dVar3 + dVar22 * dVar32 + auVar24._8_8_ * dVar25 * dVar6 +
           dVar19 * dVar30 * dVar5;
  dVar15 = dVar10 * dVar32 * dVar9 + dVar22 * dVar23 + dVar12 * dVar30 * dVar2 +
           dVar19 * dVar25 * dVar1;
  dVar10 = dVar10 * dVar30 * dVar11 + dVar22 * dVar25 + dVar12 * dVar32 * dVar7 +
           dVar19 * dVar23 * dVar4;
  local_98 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
  local_88 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  if (dVar13 != 0.0) {
    dVar19 = dVar13 * dVar13 + 0.0;
    dVar22 = dVar10 * dVar10 + 0.0;
    dVar12 = dVar22 + dVar19;
    dVar19 = dVar19 + dVar22;
    auVar8._8_4_ = SUB84(dVar19,0);
    auVar8._0_8_ = dVar12;
    auVar8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar24 = sqrtpd(auVar28,auVar8);
    uVar17 = -(ulonglong)(__real_3e45798ee0000000 <= dVar12);
    uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= dVar19);
    auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
    uVar26 = (uint)(uVar17 >> 0x20);
    uVar27 = (uint)(uVar18 >> 0x20);
    auVar29._0_8_ = uVar17 & (ulonglong)(auVar28._0_8_ * dVar13);
    uVar16 = uVar18 & (ulonglong)(auVar28._8_8_ * 0.0);
    auVar29._8_4_ = (undefined4)uVar16;
    auVar29._12_4_ = (undefined4)(uVar16 >> 0x20);
    auVar28._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar28._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar28._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar28._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
    auVar31._0_4_ = ~(uint)uVar17 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar31._4_4_ =
         ~uVar26 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar31._8_4_ = ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar31._12_4_ =
         ~uVar27 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar20._0_8_ = (ulonglong)(auVar24._0_8_ * 0.0) & uVar17;
    uVar18 = (ulonglong)(auVar24._8_8_ * dVar10) & uVar18;
    auVar20._8_4_ = (undefined4)uVar18;
    auVar20._12_4_ = (undefined4)(uVar18 >> 0x20);
    local_98 = auVar29 | auVar28;
    local_88 = auVar31 | auVar20;
  }
  dVar30 = local_88._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar32 = local_88._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar19 = local_98._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar22 = local_98._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar14,0);
  auVar21._0_8_ = dVar14;
  auVar21._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  dVar12 = GetTwistAngle((TRotation<double,3> *)local_98);
  *param_3 = dVar12;
  dVar11 = dVar13 * dVar19 * dVar11 + dVar10 * dVar32 + dVar14 * dVar22 * dVar7 +
           dVar15 * dVar30 * dVar4 + __real_3ff0000000000000;
  dVar9 = FGenericPlatformMath::Atan2
                    (dVar13 * dVar22 * dVar9 + dVar10 * dVar30 + dVar14 * dVar19 * dVar2 +
                     dVar15 * dVar32 * dVar1,dVar11);
  *param_4 = dVar9 * __real_4010000000000000;
  dVar9 = FGenericPlatformMath::Atan2
                    (dVar13 * dVar30 * dVar3 + dVar10 * dVar22 + auVar21._8_8_ * dVar32 * dVar6 +
                     dVar15 * dVar19 * dVar5,dVar11);
  *param_5 = dVar9 * __real_4010000000000000;
  return;
}

// GetTwistAngle @ 143ca0ff0

double __cdecl Chaos::FPBDJointUtilities::GetTwistAngle(TRotation<double,3> *param_1)

{
  code *pcVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined1 in_XMM3 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  
  dVar7 = __real_3ff0000000000000;
  dVar3 = *(double *)param_1;
  dVar4 = *(double *)&param_1->field_0x10;
  dVar5 = *(double *)&param_1->field_0x18;
  dVar15 = dVar4 * dVar4 + dVar3 * dVar3;
  dVar16 = dVar5 * dVar5 + *(double *)&param_1->field_0x8 * *(double *)&param_1->field_0x8;
  dVar20 = dVar16 + dVar15;
  dVar15 = dVar15 + dVar16;
  auVar17._8_4_ = SUB84(dVar15,0);
  auVar17._0_8_ = dVar20;
  auVar17._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar17 = sqrtpd(in_XMM3,auVar17);
  uVar9 = -(ulonglong)(__real_3e45798ee0000000 <= dVar20);
  uVar10 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  auVar21 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar17);
  uVar18 = (uint)(uVar9 >> 0x20);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  auVar17 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar17);
  auVar6._4_4_ = ~(uint)uVar10 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar6._0_4_ = ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
  auVar6._8_4_ = ~(uint)(uVar10 >> 0x20) &
                 (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar6._12_4_ = 0;
  auVar19._0_8_ = (ulonglong)(auVar17._0_8_ * dVar4) & uVar9;
  uVar10 = (ulonglong)(auVar17._8_8_ * dVar5) & uVar10;
  auVar19._8_4_ = (undefined4)uVar10;
  auVar19._12_4_ = (undefined4)(uVar10 >> 0x20);
  auVar19 = auVar6 << 0x20 | auVar19;
  dVar20 = auVar19._8_8_;
  uVar11 = auVar19._8_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = auVar19._12_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3ff0000000000000 <= (double)CONCAT44(uVar13,uVar11) &&
      (double)CONCAT44(uVar13,uVar11) != __real_3ff0000000000000) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2553092516823957322>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDJointConstraintUtilities.cpp"
                       ,0xb6,"FMath::Abs(Twist.W) <= 1.0f");
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      dVar20 = (double)(*pcVar1)();
      return dVar20;
    }
  }
  uVar12 = SUB84(__real_bff0000000000000,0);
  uVar14 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  if (__real_bff0000000000000 <= dVar20) {
    if (dVar7 <= dVar20) {
      dVar20 = dVar7;
    }
    uVar12 = SUB84(dVar20,0);
    uVar14 = (undefined4)((ulonglong)dVar20 >> 0x20);
  }
  dVar20 = acos((double)CONCAT44(uVar14,uVar12));
  dVar20 = dVar20 + dVar20;
  if (__real_400921fb60000000 < dVar20) {
    dVar20 = dVar20 - __real_401921fb60000000;
  }
  if ((double)(uVar9 & (ulonglong)(auVar21._0_8_ * dVar3) |
              CONCAT44(~uVar18 & (uint)((ulonglong)(double)fVar2 >> 0x20),
                       ~(uint)uVar9 & SUB84((double)fVar2,0))) < 0.0) {
    dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  return dVar20;
}

// GetTwistAxisAngle @ 143ca1150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Chaos::FPBDJointUtilities::GetTwistAxisAngle
          (TRotation<double,3> *param_1,TRotation<double,3> *param_2,TVector<double,3> *param_3,
          double *param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar10;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  auVar15 = *(undefined1 (*) [16])&param_2->field_0x10;
  dVar6 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar8 = *(double *)&param_1->field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar10 = *(double *)&param_1->field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar1 = *(double *)&param_1->field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar2 = dVar6 * auVar15._8_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar1 * *(double *)param_2 +
          dVar8 * auVar15._0_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar10 * *(double *)&param_2->field_0x8 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar6 = dVar6 * *(double *)param_2 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar1 * auVar15._8_8_ +
          dVar8 * *(double *)&param_2->field_0x8 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar10 * auVar15._0_8_ * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_68 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
  local_78 = (undefined1  [16])UE::Math::TQuat<double>::Identity._0_16_;
  if (dVar2 != 0.0) {
    dVar8 = dVar2 * dVar2 + 0.0;
    dVar10 = dVar6 * dVar6 + 0.0;
    auVar12._8_4_ = SUB84(dVar10,0);
    auVar12._0_8_ = dVar8;
    auVar12._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    auVar7._0_8_ = auVar12._8_8_ + dVar8;
    auVar7._8_8_ = dVar8 + dVar10;
    auVar12 = sqrtpd(auVar15,auVar7);
    uVar4 = -(ulonglong)(__real_3e45798ee0000000 <= auVar7._0_8_);
    uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= auVar7._8_8_);
    auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar12);
    uVar13 = (uint)(uVar4 >> 0x20);
    uVar14 = (uint)(uVar5 >> 0x20);
    auVar16._0_8_ = uVar4 & (ulonglong)(auVar15._0_8_ * dVar2);
    uVar3 = uVar5 & (ulonglong)(auVar15._8_8_ * 0.0);
    auVar16._8_4_ = (undefined4)uVar3;
    auVar16._12_4_ = (undefined4)(uVar3 >> 0x20);
    auVar15._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar15._4_4_ =
         ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar15._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar15._12_4_ =
         ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar12);
    auVar9._0_8_ = (ulonglong)(auVar12._0_8_ * 0.0) & uVar4;
    uVar3 = (ulonglong)(auVar12._8_8_ * dVar6) & uVar5;
    auVar9._8_4_ = (undefined4)uVar3;
    auVar9._12_4_ = (undefined4)(uVar3 >> 0x20);
    auVar11._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar11._4_4_ =
         ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar11._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar11._12_4_ =
         ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_68 = auVar11 | auVar9;
    local_78 = auVar16 | auVar15;
  }
  local_b8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_b8._s_0.Y = _UNK_150689518;
  local_b8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)param_2,(TVector<double> *)&local_98._s_0,
             (TVector<double> *)&local_b8._s_0);
  *(double *)param_3 = local_98._s_0.X;
  *(double *)&param_3->field_0x8 = local_98._s_0.Y;
  *(double *)&param_3->field_0x10 = local_98._s_0.Z;
  dVar6 = GetTwistAngle((TRotation<double,3> *)local_78);
  *param_4 = dVar6;
  return;
}

// GetTwistStiffness @ 143ca1380

double __cdecl
Chaos::FPBDJointUtilities::GetTwistStiffness
          (FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2)

{
  double dVar1;
  
  dVar1 = param_1->TwistStiffnessOverride;
  if (dVar1 < 0.0) {
    dVar1 = param_2->Stiffness;
  }
  return dVar1;
}

