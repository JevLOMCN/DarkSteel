// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 84

// ApplyAngularVelocityConstraint @ 143b871e0

void __thiscall
Chaos::FPBDJointSolver::ApplyAngularVelocityConstraint
          (FPBDJointSolver *this,double param_1,TVector<double,3> *param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar27) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar7->State).W;
  fVar2 = *(float *)&(pFVar7->State).W.field_0x8;
  fVar3 = *(float *)&(pFVar7->State).W.field_0x4;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar27) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  dVar4 = *(double *)&param_2->field_0x8;
  dVar5 = *(double *)param_2;
  dVar6 = *(double *)&param_2->field_0x10;
  dVar10 = *(double *)this->InvIs;
  dVar11 = *(double *)&this->InvIs[0].field_0x8;
  dVar12 = *(double *)&this->InvIs[0].field_0x50;
  dVar13 = *(double *)&this->InvIs[1].field_0x30;
  dVar14 = *(double *)&this->InvIs[0].field_0x40;
  dVar15 = *(double *)&this->InvIs[0].field_0x48;
  dVar16 = *(double *)&this->InvIs[0].field_0x10;
  dVar17 = *(double *)&this->InvIs[0].field_0x20;
  dVar18 = *(double *)&this->InvIs[0].field_0x28;
  dVar19 = *(double *)&this->InvIs[0].field_0x30;
  dVar9 = (((((double)fVar3 - (double)*(float *)&(pFVar7->State).W.field_0x4) *
             *(double *)&param_2->field_0x8 +
             ((double)fVar1 - (double)*(float *)&(pFVar7->State).W) * *(double *)param_2 +
            ((double)fVar2 - (double)*(float *)&(pFVar7->State).W.field_0x8) *
            *(double *)&param_2->field_0x10) - param_3) * param_1) /
          ((*(double *)&this->InvIs[1].field_0x8 * *(double *)param_2 +
            *(double *)&this->InvIs[1].field_0x48 * *(double *)&param_2->field_0x10 +
            *(double *)&this->InvIs[1].field_0x28 * *(double *)&param_2->field_0x8 +
           *(double *)&this->InvIs[0].field_0x8 * *(double *)param_2 +
           *(double *)&this->InvIs[0].field_0x48 * *(double *)&param_2->field_0x10 +
           *(double *)&this->InvIs[0].field_0x28 * dVar4) * dVar4 +
           (*(double *)(this->InvIs + 1) * dVar5 + *(double *)&this->InvIs[1].field_0x40 * dVar6 +
            *(double *)&this->InvIs[1].field_0x20 * dVar4 +
           *(double *)this->InvIs * dVar5 + *(double *)&this->InvIs[0].field_0x40 * dVar6 +
           *(double *)&this->InvIs[0].field_0x20 * dVar4) * dVar5 +
          (*(double *)&this->InvIs[1].field_0x10 * dVar5 +
           *(double *)&this->InvIs[1].field_0x50 * dVar6 +
           *(double *)&this->InvIs[1].field_0x30 * dVar4 +
          *(double *)&this->InvIs[0].field_0x10 * dVar5 +
          *(double *)&this->InvIs[0].field_0x50 * dVar6 +
          *(double *)&this->InvIs[0].field_0x30 * dVar4) * dVar6);
  dVar20 = *(double *)&this->InvIs[1].field_0x20;
  dVar21 = *(double *)&this->InvIs[1].field_0x28;
  dVar4 = dVar4 * dVar9;
  dVar5 = dVar5 * dVar9;
  dVar6 = dVar6 * dVar9;
  dVar9 = *(double *)&this->InvIs[1].field_0x10;
  dVar22 = *(double *)(this->InvIs + 1);
  dVar23 = *(double *)&this->InvIs[1].field_0x8;
  uVar28 = (uint)__xmm_80000000000000008000000000000000;
  uVar29 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar32 = SUB84(dVar5,0) ^ uVar28;
  uVar33 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar29;
  uVar30 = SUB84(dVar4,0) ^ uVar28;
  uVar31 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar29;
  uVar28 = SUB84(dVar6,0) ^ uVar28;
  uVar29 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar29;
  dVar24 = *(double *)&this->InvIs[1].field_0x40;
  dVar25 = *(double *)&this->InvIs[1].field_0x48;
  dVar26 = *(double *)&this->InvIs[1].field_0x50;
  if (pFVar7 == (FSolverBody *)0x0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x26,L"");
    if (bVar27) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar7->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar7->State).W.field_0x8;
  *(float *)&(pFVar7->State).W =
       (float)(dVar17 * dVar4 + dVar10 * dVar5 + dVar14 * dVar6) + *(float *)&(pFVar7->State).W;
  *(float *)&(pFVar7->State).W.field_0x4 =
       (float)(dVar18 * dVar4 + dVar11 * dVar5 + dVar15 * dVar6) + fVar1;
  *(float *)&(pFVar7->State).W.field_0x8 =
       (float)(dVar19 * dVar4 + dVar16 * dVar5 + dVar12 * dVar6) + fVar2;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x26,L"");
    if (bVar27) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar7->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar7->State).W.field_0x8;
  *(float *)&(pFVar7->State).W =
       (float)(dVar20 * (double)CONCAT44(uVar31,uVar30) + dVar22 * (double)CONCAT44(uVar33,uVar32) +
              dVar24 * (double)CONCAT44(uVar29,uVar28)) + *(float *)&(pFVar7->State).W;
  *(float *)&(pFVar7->State).W.field_0x4 =
       (float)(dVar21 * (double)CONCAT44(uVar31,uVar30) + dVar23 * (double)CONCAT44(uVar33,uVar32) +
              dVar25 * (double)CONCAT44(uVar29,uVar28)) + fVar1;
  *(float *)&(pFVar7->State).W.field_0x8 =
       (float)(dVar13 * (double)CONCAT44(uVar31,uVar30) + dVar9 * (double)CONCAT44(uVar33,uVar32) +
              dVar26 * (double)CONCAT44(uVar29,uVar28)) + fVar2;
  return;
}

// ApplyAngularVelocityConstraints @ 143b87d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyAngularVelocityConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined8 uVar1;
  double dVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  EJointMotionType EVar5;
  undefined1 auVar6 [16];
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  uint uVar21;
  uint uVar22;
  double local_res20;
  EJointAngularConstraintIndex EVar23;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8 [6];
  
  EVar3 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  if (((EVar3 == Free) && ((param_3->AngularMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->AngularMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar4 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar5 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  bVar14 = FPBDJointUtilities::GetSoftTwistLimitEnabled(param_2,param_3);
  local_res20 = (double)CONCAT71(local_res20._1_7_,bVar14);
  bVar15 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3);
  uVar21 = 0;
  uVar22 = 0;
  local_e8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_e8._s_0.Y = _UNK_150689518;
  local_e8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_108._s_0,
             (TVector<double> *)&local_e8._s_0);
  local_c8[0]._s_0.Z = 0.0;
  local_c8[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_c8[0]._s_0.Y = _UNK_150689518;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)(this->ConnectorRs + 1),(TVector<double> *)&local_e8._s_0,
             (TVector<double> *)&local_c8[0]._s_0);
  dVar18 = __real_3ff0000000000000;
  dVar7 = local_108._s_0.X * local_e8._s_0.X + local_108._s_0.Y * local_e8._s_0.Y +
          local_108._s_0.Z * local_e8._s_0.Z;
  bVar14 = (double)Chaos_Joint_DegenerateRotationLimit <= dVar7;
  if ((dVar7 < (double)Chaos_Joint_DegenerateRotationLimit) && (6 < (byte)LogChaosJoint._0_1_)) {
    dVar16 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar7) && (dVar16 = dVar7, __real_3ff0000000000000 <= dVar7)) {
      dVar16 = __real_3ff0000000000000;
    }
    acos(dVar16);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  dVar16 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15066df7c;
  uVar12 = _UNK_15066df78;
  uVar11 = __xmm_80000000000000008000000000000000._4_4_;
  uVar10 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar7 = __real_3e45798ee0000000;
  if (((param_2->bEnableTwistLimits != false) && (bVar14)) &&
     ((EVar3 == Limited &&
      ((((__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)&this->NetAngularImpulse &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
         (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
         __real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
        (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
        __real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
       ((local_res20._0_1_ == '\0' &&
        (__real_3e45798ee0000000 < *(double *)&this->AngularHardLambda)))))))) {
    FPBDJointUtilities::GetTwistAxisAngle
              (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)&local_108._s_0,
               &local_res20);
    if (local_res20 < 0.0) {
      local_108._4_4_ = local_108._4_4_ ^ uVar11;
      local_108._0_4_ = local_108._0_4_ ^ uVar10;
      local_108._12_4_ = local_108._12_4_ ^ uVar13;
      local_108._8_4_ = local_108._8_4_ ^ uVar12;
      local_108._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_108._16_8_ >> 0x20) ^ uVar11,
                            SUB84(local_108._s_0.Z,0) ^ uVar10);
    }
    dVar2 = this->SolverStiffness;
    dVar17 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
    dVar20 = 0.0;
    if ((param_3->TwistRestitution != 0.0) &&
       ((double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution <
        *(double *)&this->InitConstraintAxisAngularVelocities)) {
      dVar20 = param_3->TwistRestitution * *(double *)&this->InitConstraintAxisAngularVelocities;
      dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar11,SUB84(dVar20,0) ^ uVar10)
      ;
    }
    ApplyAngularVelocityConstraint(this,dVar17 * dVar2,(TVector<double,3> *)&local_108._s_0,dVar20);
  }
  if (param_2->bEnableSwingLimits == false) goto LAB_143b882ec;
  if (EVar4 == Limited) {
    if (EVar5 == Limited) {
      if ((((dVar16 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >>
                                             0x20) & uVar9,
                                       (uint)*(undefined8 *)&this->NetAngularImpulse & uVar8)) ||
           (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
           dVar16 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar9,(uint)uVar1 & uVar8)))
          || (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
             dVar16 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar9,(uint)uVar1 & uVar8)
             )) && ((!bVar15 && (dVar7 < *(double *)&(this->AngularHardLambda).field_0x8)))) {
        local_res20 = 0.0;
        FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
                  (this->ConnectorRs,this->ConnectorRs + 1,
                   *(double *)&(param_3->AngularLimits).field_0x8,
                   *(double *)&(param_3->AngularLimits).field_0x10,
                   (TVector<double,3> *)&local_108._s_0,&local_res20);
        auVar19._0_8_ = local_108._s_0.X * local_108._s_0.X;
        auVar19._8_8_ = 0;
        dVar7 = local_108._s_0.Y * local_108._s_0.Y + auVar19._0_8_ +
                local_108._s_0.Z * local_108._s_0.Z;
        if (dVar16 <= dVar7) {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = dVar7;
          auVar19 = sqrtpd(auVar19,auVar6);
          dVar18 = dVar18 / auVar19._0_8_;
          local_108._s_0.X = local_108._s_0.X * dVar18;
          local_108._s_0.Y = local_108._s_0.Y * dVar18;
          local_108._s_0.Z = local_108._s_0.Z * dVar18;
        }
        else {
          local_108._s_0.Z = 0.0;
          local_108._s_0.X = ___xmm_00000000000000003ff0000000000000;
          local_108._s_0.Y = _UNK_150689518;
        }
        local_c8[0]._s_0.Z = local_108._s_0.Z;
        local_c8[0]._0_8_ = local_108._s_0.X;
        local_c8[0]._8_8_ = local_108._s_0.Y;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_e8._s_0,
                   (TVector<double> *)&local_c8[0]._s_0);
        dVar7 = this->SolverStiffness;
        local_c8[0]._s_0.X = local_e8._s_0.X;
        local_c8[0]._s_0.Y = local_e8._s_0.Y;
        local_c8[0]._s_0.Z = local_e8._s_0.Z;
        dVar18 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
        if ((param_3->SwingRestitution != 0.0) &&
           (dVar16 = *(double *)&(this->InitConstraintAxisAngularVelocities).field_0x10,
           (double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution < dVar16)) {
          dVar16 = param_3->SwingRestitution * dVar16;
          uVar21 = SUB84(dVar16,0) ^ uVar10;
          uVar22 = (uint)((ulonglong)dVar16 >> 0x20) ^ uVar11;
        }
        ApplyAngularVelocityConstraint
                  (this,dVar18 * dVar7,(TVector<double,3> *)&local_c8[0]._s_0,
                   (double)CONCAT44(uVar22,uVar21));
      }
      goto LAB_143b882ec;
    }
    if (EVar5 != Locked) {
      if ((EVar5 != Free) || (!bVar14)) goto LAB_143b882ec;
      EVar23 = Swing1;
LAB_143b882b3:
      ApplyDualConeSwingVelocityConstraint(this,param_1,param_2,param_3,EVar23,bVar15);
      goto LAB_143b882ec;
    }
    ApplySingleLockedSwingVelocityConstraint(this,param_1,param_2,param_3,Swing2,false);
joined_r0x000143b88262:
    if (bVar14) {
      ApplySwingVelocityConstraint(this,param_1,param_2,param_3,EVar5,bVar15);
    }
  }
  else {
    if (EVar4 == Locked) {
      if (EVar5 == Limited) {
        ApplySingleLockedSwingVelocityConstraint(this,param_1,param_2,param_3,Swing1,false);
        goto joined_r0x000143b88262;
      }
      if (EVar5 != Free) goto LAB_143b882ec;
      EVar23 = Swing1;
    }
    else {
      if (EVar4 != Free) goto LAB_143b882ec;
      if (EVar5 == Limited) {
        if (!bVar14) goto LAB_143b882ec;
        EVar23 = Swing2;
        goto LAB_143b882b3;
      }
      if (EVar5 != Locked) goto LAB_143b882ec;
      EVar23 = Swing2;
    }
    ApplySingleLockedSwingVelocityConstraint(this,param_1,param_2,param_3,EVar23,false);
  }
LAB_143b882ec:
  if ((param_2->bEnableTwistLimits == false) ||
     ((param_3->AngularMotionTypes).field0_0x0._s_0.X != Locked)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (((param_2->bEnableSwingLimits == false) ||
      ((param_3->AngularMotionTypes).field0_0x0._s_0.Z != Locked)) ||
     ((param_3->AngularMotionTypes).field0_0x0._s_0.Y != Locked)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if ((bVar14 != false) || (bVar15 != false)) {
    ApplyLockedRotationVelocityConstraints(this,param_1,param_2,param_3,bVar14,bVar15);
  }
  return;
}

// ApplyAngularVelocityDelta @ 143b883c0

void __thiscall
Chaos::FPBDJointSolver::ApplyAngularVelocityDelta
          (FPBDJointSolver *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x26,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  dVar3 = *(double *)&param_1->field_0x8;
  dVar4 = *(double *)&param_1->field_0x10;
  fVar1 = *(float *)&(pFVar5->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar5->State).W.field_0x8;
  *(float *)&(pFVar5->State).W = (float)*(double *)param_1 + *(float *)&(pFVar5->State).W;
  *(float *)&(pFVar5->State).W.field_0x4 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).W.field_0x8 = (float)dVar4 + fVar2;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x26,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[1].Body;
  dVar3 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)&param_2->field_0x10;
  fVar1 = *(float *)&(pFVar5->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar5->State).W.field_0x8;
  *(float *)&(pFVar5->State).W = (float)*(double *)param_2 + *(float *)&(pFVar5->State).W;
  *(float *)&(pFVar5->State).W.field_0x4 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).W.field_0x8 = (float)dVar4 + fVar2;
  return;
}

// ApplyConeConstraint @ 143b8b270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyConeConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  double local_res8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  double local_158;
  double dStack_150;
  double local_148;
  
  local_res8 = 0.0;
  FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
            (this->ConnectorRs,this->ConnectorRs + 1,*(double *)&(param_3->AngularLimits).field_0x8,
             *(double *)&(param_3->AngularLimits).field_0x10,(TVector<double,3> *)&local_158,
             &local_res8);
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  local_178._s_0.X = local_158;
  local_178._s_0.Y = dStack_150;
  local_178._s_0.Z = local_148;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_190._s_0,
             (TVector<double> *)&local_178._s_0);
  local_1a8 = local_190._s_0.X;
  dStack_1a0 = local_190._s_0.Y;
  local_198 = local_190._s_0.Z;
  if (this->AngleTolerance <= local_res8 && local_res8 != this->AngleTolerance) {
    if (param_4) {
      dVar1 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
      dVar2 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
      bVar9 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
      ApplyRotationConstraintSoft
                (this,param_1,dVar1,dVar2,bVar9,(TVector<double,3> *)&local_1a8,local_res8,0.0,0.0,
                 &this->SwingSoftLambda);
    }
    else {
      dVar1 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      if (0.0 < this->InvMs[0]) {
        if (0.0 < this->InvMs[1]) {
          dVar5 = *(double *)this->InvIs * local_1a8 +
                  *(double *)&this->InvIs[0].field_0x20 * dStack_1a0 +
                  *(double *)&this->InvIs[0].field_0x40 * local_198;
          dVar6 = *(double *)&this->InvIs[0].field_0x8 * local_1a8 +
                  *(double *)&this->InvIs[0].field_0x28 * dStack_1a0 +
                  *(double *)&this->InvIs[0].field_0x48 * local_198;
          dVar7 = *(double *)&this->InvIs[0].field_0x10 * local_1a8 +
                  *(double *)&this->InvIs[0].field_0x30 * dStack_1a0 +
                  *(double *)&this->InvIs[0].field_0x50 * local_198;
          dVar3 = *(double *)&this->InvIs[1].field_0x8 * local_1a8 +
                  *(double *)&this->InvIs[1].field_0x28 * dStack_1a0 +
                  *(double *)&this->InvIs[1].field_0x48 * local_198;
          dVar2 = *(double *)(this->InvIs + 1) * local_1a8 +
                  *(double *)&this->InvIs[1].field_0x20 * dStack_1a0 +
                  *(double *)&this->InvIs[1].field_0x40 * local_198;
          dVar4 = *(double *)&this->InvIs[1].field_0x10 * local_1a8 +
                  *(double *)&this->InvIs[1].field_0x30 * dStack_1a0 +
                  *(double *)&this->InvIs[1].field_0x50 * local_198;
          dVar8 = (dVar1 * this->SolverStiffness * local_res8) /
                  (dVar2 * local_1a8 + dVar3 * dStack_1a0 + dVar4 * local_198 +
                  dVar5 * local_1a8 + dVar6 * dStack_1a0 + dVar7 * local_198);
          local_178._s_0.X = dVar5 * dVar8;
          uVar10 = SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar12 = (uint)((ulonglong)dVar8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_190._s_0.X = dVar2 * (double)CONCAT44(uVar12,uVar10);
          local_190._s_0.Y = dVar3 * (double)CONCAT44(uVar12,uVar10);
          local_190._s_0.Z = dVar4 * (double)CONCAT44(uVar12,uVar10);
          local_178._s_0.Y = dVar6 * dVar8;
          local_178._s_0.Z = dVar7 * dVar8;
          ApplyRotationDelta(this,(TVector<double,3> *)&local_178._s_0,
                             (TVector<double,3> *)&local_190._s_0);
          dVar1 = *(double *)&(this->NetAngularImpulse).field_0x8;
          *(double *)&this->NetAngularImpulse =
               local_1a8 * dVar8 + *(double *)&this->NetAngularImpulse;
          *(double *)&(this->NetAngularImpulse).field_0x8 = dStack_1a0 * dVar8 + dVar1;
          *(double *)&(this->NetAngularImpulse).field_0x10 =
               local_198 * dVar8 + *(double *)&(this->NetAngularImpulse).field_0x10;
          *(double *)&(this->AngularHardLambda).field_0x8 =
               dVar8 + *(double *)&(this->AngularHardLambda).field_0x8;
        }
        else {
          ApplyRotationConstraintKD
                    (this,1,0,dVar1,(TVector<double,3> *)&local_1a8,
                     (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(local_res8,0) ^
                                      (uint)__xmm_80000000000000008000000000000000),1);
        }
      }
      else {
        ApplyRotationConstraintKD(this,0,1,dVar1,(TVector<double,3> *)&local_1a8,local_res8,1);
      }
    }
    uVar11 = SUB84(local_res8,0);
    uVar13 = (undefined4)((ulonglong)local_res8 >> 0x20);
    dVar1 = this->AngularViolation;
    if (local_res8 <= dVar1) {
      uVar11 = SUB84(dVar1,0);
      uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
    }
    this->AngularViolation = (double)CONCAT44(uVar13,uVar11);
  }
  return;
}

// ApplyConeProjection @ 143b8b7b0

void __thiscall
Chaos::FPBDJointSolver::ApplyConeProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,bool param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7)

{
  float fVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double local_res8;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  TVector<double>_u_0 local_88 [5];
  
  dVar5 = 0.0;
  local_res8 = 0.0;
  FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
            (this->ConnectorRs,this->ConnectorRs + 1,*(double *)&(param_3->AngularLimits).field_0x8,
             *(double *)&(param_3->AngularLimits).field_0x10,(TVector<double,3> *)&local_a0,
             &local_res8);
  local_88[0]._s_0.X = local_a0;
  local_88[0]._s_0.Y = dStack_98;
  local_88[0]._s_0.Z = local_90;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)&local_88[0]._s_0);
  if (0.0 < local_res8) {
    uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar10 = 0.0;
    dVar13 = 0.0;
    uVar14 = SUB84(local_res8 * param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)(local_res8 * param_4) >> 0x20) ^ uVar9;
    dVar6 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.X;
    dVar7 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.Y;
    dVar4 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.Z;
    if (param_5) {
      pFVar2 = this->SolverBodies[1].Body;
      dVar13 = (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^ uVar9,
                                SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar2->State).P.field_0x10;
      dVar12 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar2->State).P.field_0x8;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar2->State).P;
      dVar5 = (dVar7 * dVar10 - dVar4 * dVar12) * dVar13;
      dVar10 = (dVar4 * dVar11 - dVar6 * dVar10) * dVar13;
      dVar13 = (dVar6 * dVar12 - dVar7 * dVar11) * dVar13;
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = (float)dVar5 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = (float)dVar10 + fVar1;
    *(float *)&(pFVar2->State).DP.field_0x8 =
         (float)dVar13 + *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DQ = (float)dVar6 + *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 = (float)dVar7 + *(float *)&(pFVar2->State).DQ.field_0x4
    ;
    *(float *)&(pFVar2->State).DQ.field_0x8 = (float)dVar4 + *(float *)&(pFVar2->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)&param_6->field_0x8 = dVar10 + *(double *)&param_6->field_0x8;
    *(double *)&param_6->field_0x10 = dVar13 + *(double *)&param_6->field_0x10;
    *(double *)param_6 = dVar5 + *(double *)param_6;
    *(double *)param_7 = dVar6 + *(double *)param_7;
    *(double *)&param_7->field_0x8 = dVar7 + *(double *)&param_7->field_0x8;
    *(double *)&param_7->field_0x10 = dVar4 + *(double *)&param_7->field_0x10;
  }
  return;
}

// ApplyConeVelocityConstraint @ 143b8ba80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplyConeVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  uint uVar7;
  uint uVar8;
  double local_res8;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  dVar6 = __real_3f1a36e2e0000000;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetAngularImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     ((!param_4 && (__real_3e45798ee0000000 < *(double *)&(this->AngularHardLambda).field_0x8)))) {
    uVar7 = 0;
    uVar8 = 0;
    local_res8 = 0.0;
    FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
              (this->ConnectorRs,this->ConnectorRs + 1,
               *(double *)&(param_3->AngularLimits).field_0x8,
               *(double *)&(param_3->AngularLimits).field_0x10,(TVector<double,3> *)&local_88,
               &local_res8);
    auVar5._0_8_ = local_88 * local_88;
    auVar5._8_8_ = 0;
    dVar4 = dStack_80 * dStack_80 + auVar5._0_8_ + local_78 * local_78;
    if (dVar6 <= dVar4) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = dVar4;
      auVar5 = sqrtpd(auVar5,auVar3);
      dVar6 = __real_3ff0000000000000 / auVar5._0_8_;
      local_88 = local_88 * dVar6;
      dStack_80 = dStack_80 * dVar6;
      local_78 = local_78 * dVar6;
    }
    else {
      local_78 = 0.0;
      local_88 = ___xmm_00000000000000003ff0000000000000;
      dStack_80 = _UNK_150689518;
    }
    local_68._s_0.Z = local_78;
    local_68._s_0.X = local_88;
    local_68._s_0.Y = dStack_80;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_48[0]._s_0,
               (TVector<double> *)&local_68._s_0);
    dVar6 = this->SolverStiffness;
    local_68._s_0.X = (double)local_48[0]._0_8_;
    local_68._s_0.Y = (double)local_48[0]._8_8_;
    local_68._s_0.Z = (double)local_48[0]._16_8_;
    dVar4 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
    if ((param_3->SwingRestitution != 0.0) &&
       (dVar2 = *(double *)&(this->InitConstraintAxisAngularVelocities).field_0x10,
       (double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution < dVar2)) {
      dVar2 = param_3->SwingRestitution * dVar2;
      uVar7 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar8 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    }
    ApplyAngularVelocityConstraint
              (this,dVar4 * dVar6,(TVector<double,3> *)&local_68._s_0,(double)CONCAT44(uVar8,uVar7))
    ;
  }
  return;
}

// ApplyConstraints @ 143b8bd40

void __thiscall
Chaos::FPBDJointSolver::ApplyConstraints
          (FPBDJointSolver *this,double param_1,double param_2,FPBDJointSolverSettings *param_3,
          FPBDJointSettings *param_4)

{
  this->LinearViolationSq = 0.0;
  this->AngularViolation = 0.0;
  this->SolverStiffness = param_2;
  if (param_3->bSolvePositionLast == false) {
    ApplyPositionConstraints(this,param_1,param_3,param_4);
    ApplyRotationConstraints(this,param_1,param_3,param_4);
    ApplyPositionDrives(this,param_1,param_3,param_4);
    ApplyRotationDrives(this,param_1,param_3,param_4);
  }
  else {
    ApplyRotationConstraints(this,param_1,param_3,param_4);
    ApplyPositionConstraints(this,param_1,param_3,param_4);
    ApplyRotationDrives(this,param_1,param_3,param_4);
    ApplyPositionDrives(this,param_1,param_3,param_4);
  }
  return;
}

// ApplyCylindricalPositionConstraint @ 143b8be20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplyCylindricalPositionConstraint
          (FPBDJointSolver *this,double param_1,int param_2,EJointMotionType param_3,
          EJointMotionType param_4,FPBDJointSolverSettings *param_5,FPBDJointSettings *param_6)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double local_res8;
  undefined1 local_e8 [24];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  
  if ((param_3 == param_4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxialMotion != RadialMotion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                         ,0x814,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FPBDJointUtilities::GetCylindricalAxesDeltas
            (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_2,
             (TVector<double,3> *)local_e8,&local_res8,(TVector<double,3> *)&local_c8,&local_d0);
  uVar8 = SUB84(local_res8,0);
  uVar9 = (uint)((ulonglong)local_res8 >> 0x20);
  if (local_res8 < 0.0) {
    uVar8 = uVar8 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = uVar9 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_e8._0_4_ = local_e8._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_e8._4_4_ = local_e8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_e8._8_4_ = local_e8._8_4_ ^ _UNK_15066df78;
    local_e8._12_4_ = local_e8._12_4_ ^ _UNK_15066df7c;
    local_res8 = (double)CONCAT44(uVar9,uVar8);
    local_e8._16_8_ =
         CONCAT44(SUB84(local_e8._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_e8._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (param_3 == Locked) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = SUB84(param_6->LinearLimit,0);
    uVar6 = (undefined4)((ulonglong)param_6->LinearLimit >> 0x20);
  }
  dVar7 = this->PositionTolerance;
  dVar3 = (double)CONCAT44(uVar9,uVar8) - (double)CONCAT44(uVar6,uVar5);
  if (dVar7 < dVar3) {
    if (param_3 == Limited) {
      bVar4 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_5,param_6);
      if (bVar4) {
        dVar7 = FPBDJointUtilities::GetSoftLinearStiffness(param_5,param_6);
        dVar2 = FPBDJointUtilities::GetSoftLinearDamping(param_5,param_6);
        bVar4 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_5,param_6);
        ApplyPositionConstraintSoft
                  (this,param_1,dVar7,dVar2,bVar4,(TVector<double,3> *)local_e8,dVar3,0.0,0.0,
                   &this->LinearSoftLambda);
      }
      else {
LAB_143b8bfd7:
        dVar7 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
        local_b0 = (*(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs) -
                   (double)CONCAT44(local_e8._4_4_,local_e8._0_4_) * dVar3;
        local_a8 = (*(double *)&this->ConnectorXs[1].field_0x8 -
                   *(double *)&this->ConnectorXs[0].field_0x8) -
                   (double)CONCAT44(local_e8._12_4_,local_e8._8_4_) * dVar3;
        local_a0 = (*(double *)&this->ConnectorXs[1].field_0x10 -
                   *(double *)&this->ConnectorXs[0].field_0x10) - (double)local_e8._16_8_ * dVar3;
        ApplyPositionConstraint
                  (this,dVar7,(TVector<double,3> *)local_e8,dVar3,(TVector<double,3> *)&local_b0,0);
      }
    }
    else if (param_3 != Free) goto LAB_143b8bfd7;
    dVar7 = this->PositionTolerance;
    dVar2 = dVar3 * dVar3;
    if (dVar3 * dVar3 <= this->LinearViolationSq) {
      dVar2 = this->LinearViolationSq;
    }
    this->LinearViolationSq = dVar2;
  }
  if (param_4 == Locked) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = SUB84(param_6->LinearLimit,0);
    uVar6 = (undefined4)((ulonglong)param_6->LinearLimit >> 0x20);
  }
  dVar3 = local_d0 - (double)CONCAT44(uVar6,uVar5);
  if (dVar3 <= dVar7) {
    return;
  }
  if (param_4 == Limited) {
    bVar4 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_5,param_6);
    if (bVar4) {
      dVar7 = FPBDJointUtilities::GetSoftLinearStiffness(param_5,param_6);
      dVar2 = FPBDJointUtilities::GetSoftLinearDamping(param_5,param_6);
      bVar4 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_5,param_6);
      ApplyPositionConstraintSoft
                (this,param_1,dVar7,dVar2,bVar4,(TVector<double,3> *)&local_c8,dVar3,0.0,0.0,
                 &this->LinearSoftLambda);
      goto LAB_143b8c1fb;
    }
  }
  else if (param_4 == Free) goto LAB_143b8c1fb;
  dVar7 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
  local_98 = (*(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs) - local_c8 * dVar3;
  local_90 = (*(double *)&this->ConnectorXs[1].field_0x8 -
             *(double *)&this->ConnectorXs[0].field_0x8) - local_c0 * dVar3;
  local_88 = (*(double *)&this->ConnectorXs[1].field_0x10 -
             *(double *)&this->ConnectorXs[0].field_0x10) - local_b8 * dVar3;
  ApplyPositionConstraint
            (this,dVar7,(TVector<double,3> *)&local_c8,dVar3,(TVector<double,3> *)&local_98,1);
LAB_143b8c1fb:
  dVar7 = dVar3 * dVar3;
  if (dVar3 * dVar3 <= this->LinearViolationSq) {
    dVar7 = this->LinearViolationSq;
  }
  this->LinearViolationSq = dVar7;
  return;
}

// ApplyCylindricalVelocityConstraint @ 143b8c250

void __thiscall
Chaos::FPBDJointSolver::ApplyCylindricalVelocityConstraint
          (FPBDJointSolver *this,double param_1,int param_2,EJointMotionType param_3,
          EJointMotionType param_4,FPBDJointSolverSettings *param_5,FPBDJointSettings *param_6)

{
  undefined8 uVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double local_res8;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  
  if ((param_3 == param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AxialMotion != RadialMotion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                         ,0xa26,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetLinearImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetLinearImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (bVar7 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_5,param_6), !bVar7)) {
    FPBDJointUtilities::GetCylindricalAxesDeltas
              (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_2,
               (TVector<double,3> *)&local_f8,&local_res8,(TVector<double,3> *)&local_d8,&local_e0);
    dVar2 = __real_3e45798ee0000000;
    uVar11 = 0;
    uVar12 = 0;
    dVar4 = *(double *)&this->ConnectorXs[1].field_0x10 -
            *(double *)&this->ConnectorXs[0].field_0x10;
    dVar5 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&this->ConnectorXs[0].field_0x8;
    dVar6 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
    uVar13 = (uint)__xmm_80000000000000008000000000000000;
    uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (__real_3e45798ee0000000 < *(double *)&this->LinearHardLambda) {
      dVar8 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
      if (local_res8 < 0.0) {
        local_res8 = (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^ uVar14,
                                      SUB84(local_res8,0) ^ uVar13);
        local_f8 = (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) ^ uVar14,
                                    SUB84(local_f8,0) ^ uVar13);
        local_f0 = (double)CONCAT44((uint)((ulonglong)local_f0 >> 0x20) ^ uVar14,
                                    SUB84(local_f0,0) ^ uVar13);
        local_e8 = (double)CONCAT44((uint)((ulonglong)local_e8 >> 0x20) ^ uVar14,
                                    SUB84(local_e8,0) ^ uVar13);
      }
      if (param_3 == Locked) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = param_6->LinearLimit;
      }
      dVar10 = local_res8 - dVar10;
      local_c0 = dVar6 - dVar10 * local_f8;
      dVar9 = 0.0;
      local_b8 = dVar5 - dVar10 * local_f0;
      local_b0 = dVar4 - dVar10 * local_e8;
      if (((param_3 == Limited) && (param_6->LinearRestitution != 0.0)) &&
         ((double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution <
          *(double *)&this->InitConstraintAxisLinearVelocities)) {
        dVar10 = param_6->LinearRestitution * *(double *)&this->InitConstraintAxisLinearVelocities;
        dVar9 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar14,SUB84(dVar10,0) ^ uVar13
                                );
      }
      ApplyLinearVelocityConstraint
                (this,dVar8 * this->SolverStiffness,(TVector<double,3> *)&local_f8,
                 (TVector<double,3> *)&local_c0,dVar9);
    }
    if (dVar2 < *(double *)&(this->LinearHardLambda).field_0x8) {
      dVar2 = this->SolverStiffness;
      dVar8 = FPBDJointUtilities::GetLinearStiffness(param_5,param_6);
      if (param_4 == Locked) {
        dVar10 = 0.0;
      }
      else {
        dVar10 = param_6->LinearLimit;
      }
      local_e0 = local_e0 - dVar10;
      if (local_e0 <= 0.0) {
        local_e0 = 0.0;
      }
      local_a8 = dVar6 - local_e0 * local_d8;
      local_a0 = dVar5 - local_e0 * local_d0;
      local_98 = dVar4 - local_e0 * local_c8;
      if (((param_4 == Limited) && (param_6->LinearRestitution != 0.0)) &&
         (dVar4 = *(double *)&(this->InitConstraintAxisLinearVelocities).field_0x8,
         (double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution < dVar4)) {
        dVar4 = param_6->LinearRestitution * dVar4;
        uVar11 = SUB84(dVar4,0) ^ uVar13;
        uVar12 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar14;
      }
      ApplyLinearVelocityConstraint
                (this,dVar8 * dVar2,(TVector<double,3> *)&local_d8,(TVector<double,3> *)&local_a8,
                 (double)CONCAT44(uVar12,uVar11));
    }
  }
  return;
}

// ApplyDelta @ 143b8c630

void __thiscall
Chaos::FPBDJointSolver::ApplyDelta
          (FPBDJointSolver *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FSolverBody *pFVar8;
  FConstraintSolverBody *pFVar9;
  
  pFVar9 = Body(this,param_1);
  dVar3 = *(double *)&param_2->field_0x10;
  dVar4 = *(double *)param_2;
  pFVar8 = pFVar9->Body;
  dVar5 = *(double *)param_3;
  dVar6 = *(double *)&param_3->field_0x8;
  dVar7 = *(double *)&param_3->field_0x10;
  fVar1 = *(float *)&(pFVar8->State).DP.field_0x8;
  *(float *)&(pFVar8->State).DP.field_0x4 =
       (float)*(double *)&param_2->field_0x8 + *(float *)&(pFVar8->State).DP.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).DP;
  *(float *)&(pFVar8->State).DP.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar8->State).DP = (float)dVar4 + fVar2;
  fVar1 = *(float *)&(pFVar8->State).DQ.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).DQ.field_0x8;
  *(float *)&(pFVar8->State).DQ = (float)dVar5 + *(float *)&(pFVar8->State).DQ;
  *(float *)&(pFVar8->State).DQ.field_0x4 = (float)dVar6 + fVar1;
  *(float *)&(pFVar8->State).DQ.field_0x8 = (float)dVar7 + fVar2;
  UpdateDerivedState(this,param_1);
  return;
}

// ApplyDoubleLockedSwingProjection @ 143b8c700

void __thiscall
Chaos::FPBDJointSolver::ApplyDoubleLockedSwingProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,bool param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7)

{
  float fVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  double local_res8;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  TVector<double>_u_0 local_88 [5];
  
  dVar5 = 0.0;
  local_res8 = 0.0;
  FPBDJointUtilities::GetCircularConeAxisErrorLocal
            (this->ConnectorRs,this->ConnectorRs + 1,0.0,(TVector<double,3> *)&local_a0,&local_res8)
  ;
  local_88[0]._s_0.X = local_a0;
  local_88[0]._s_0.Y = dStack_98;
  local_88[0]._s_0.Z = local_90;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_b8._s_0,
             (TVector<double> *)&local_88[0]._s_0);
  if (0.0 < local_res8) {
    uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar10 = 0.0;
    dVar13 = 0.0;
    uVar14 = SUB84(local_res8 * param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)(local_res8 * param_4) >> 0x20) ^ uVar9;
    dVar6 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.X;
    dVar7 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.Y;
    dVar4 = (double)CONCAT44(uVar15,uVar14) * local_b8._s_0.Z;
    if (param_5) {
      pFVar2 = this->SolverBodies[1].Body;
      dVar13 = (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^ uVar9,
                                SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000);
      dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar2->State).P.field_0x10;
      dVar12 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar2->State).P.field_0x8;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar2->State).P;
      dVar5 = (dVar7 * dVar10 - dVar4 * dVar12) * dVar13;
      dVar10 = (dVar4 * dVar11 - dVar6 * dVar10) * dVar13;
      dVar13 = (dVar6 * dVar12 - dVar7 * dVar11) * dVar13;
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = (float)dVar5 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = (float)dVar10 + fVar1;
    *(float *)&(pFVar2->State).DP.field_0x8 =
         (float)dVar13 + *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DQ = (float)dVar6 + *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 = (float)dVar7 + *(float *)&(pFVar2->State).DQ.field_0x4
    ;
    *(float *)&(pFVar2->State).DQ.field_0x8 = (float)dVar4 + *(float *)&(pFVar2->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)&param_6->field_0x8 = dVar10 + *(double *)&param_6->field_0x8;
    *(double *)&param_6->field_0x10 = dVar13 + *(double *)&param_6->field_0x10;
    *(double *)param_6 = dVar5 + *(double *)param_6;
    *(double *)param_7 = dVar6 + *(double *)param_7;
    *(double *)&param_7->field_0x8 = dVar7 + *(double *)&param_7->field_0x8;
    *(double *)&param_7->field_0x10 = dVar4 + *(double *)&param_7->field_0x10;
  }
  return;
}

// ApplyDualConeSwingConstraint @ 143b8c9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyDualConeSwingConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double local_res8;
  TVector<double,3> local_78 [4];
  
  FPBDJointUtilities::GetDualConeSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_4,local_78,&local_res8);
  dVar4 = 0.0;
  if ((Swing1 < param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  dVar1 = *(double *)
           ((longlong)(&param_3->ConnectorTransforms + 1) + ((longlong)(int)param_4 + 0xd) * 8);
  uVar9 = SUB84(local_res8,0);
  uVar10 = (uint)((ulonglong)local_res8 >> 0x20);
  if (local_res8 <= dVar1) {
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
        local_res8) goto LAB_143b8caad;
    local_78[0]._0_4_ = local_78[0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_78[0]._4_4_ = local_78[0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_78[0]._8_4_ = local_78[0]._8_4_ ^ _UNK_15066df78;
    local_78[0]._12_4_ = local_78[0]._12_4_ ^ _UNK_15066df7c;
    uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = uVar10 ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = (uint)local_78[0]._16_8_;
    local_78[0]._20_4_ = SUB84(local_78[0]._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_78[0]._16_4_ = uVar8 ^ (uint)__xmm_80000000000000008000000000000000;
  }
  dVar4 = (double)CONCAT44(uVar10,uVar9) - dVar1;
LAB_143b8caad:
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  if (this->AngleTolerance <= dVar4 && dVar4 != this->AngleTolerance) {
    if (param_5) {
      dVar1 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
      dVar3 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
      bVar7 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
      ApplyRotationConstraintSoft
                (this,param_1,dVar1,dVar3,bVar7,local_78,dVar4,0.0,0.0,&this->SwingSoftLambda);
    }
    else {
      dVar1 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      if (0.0 < this->InvMs[0]) {
        if (0.0 < this->InvMs[1]) {
          ApplyRotationConstraintDD(this,dVar1,local_78,dVar4,param_4);
        }
        else {
          ApplyRotationConstraintKD
                    (this,1,0,dVar1,local_78,
                     (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar6,
                                      SUB84(dVar4,0) ^ uVar5),param_4);
        }
      }
      else {
        ApplyRotationConstraintKD(this,0,1,dVar1,local_78,dVar4,param_4);
      }
    }
    dVar1 = this->AngularViolation;
    if (this->AngularViolation <= dVar4) {
      dVar1 = dVar4;
    }
    this->AngularViolation = dVar1;
  }
  return;
}

// ApplyDualConeSwingProjection @ 143b8cc50

void __thiscall
Chaos::FPBDJointSolver::ApplyDualConeSwingProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,double param_5,
          bool param_6,TVector<double,3> *param_7,TVector<double,3> *param_8)

{
  float fVar1;
  double dVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  double local_res8;
  double local_88;
  double local_80;
  double local_78;
  
  FPBDJointUtilities::GetDualConeSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_4,(TVector<double,3> *)&local_88,
             &local_res8);
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (Swing1 < param_4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar2 = *(double *)
           ((longlong)(&param_3->ConnectorTransforms + 1) + ((longlong)(int)param_4 + 0xd) * 8);
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (local_res8 <= dVar2) {
    if (local_res8 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar13,SUB84(dVar2,0) ^ uVar12)) {
      dVar5 = dVar2 + local_res8;
    }
  }
  else {
    dVar5 = local_res8 - dVar2;
  }
  if (0.0 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar14 = 0.0;
    dVar10 = 0.0;
    uVar15 = SUB84(dVar5 * param_5,0) ^ uVar12;
    uVar16 = (uint)((ulonglong)(dVar5 * param_5) >> 0x20) ^ uVar13;
    dVar2 = (double)CONCAT44(uVar16,uVar15) * local_88;
    dVar7 = (double)CONCAT44(uVar16,uVar15) * local_80;
    dVar5 = (double)CONCAT44(uVar16,uVar15) * local_78;
    if (param_6) {
      pFVar3 = this->SolverBodies[1].Body;
      dVar14 = (double)CONCAT44((uint)((ulonglong)param_5 >> 0x20) ^ uVar13,
                                SUB84(param_5,0) ^ uVar12);
      dVar8 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar3->State).P.field_0x8;
      dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar3->State).P.field_0x10;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar3->State).P;
      dVar6 = (dVar10 * dVar7 - dVar8 * dVar5) * dVar14;
      dVar10 = (dVar11 * dVar5 - dVar10 * dVar2) * dVar14;
      dVar14 = (dVar8 * dVar2 - dVar11 * dVar7) * dVar14;
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
    *(float *)&(pFVar3->State).DP = (float)dVar6 + *(float *)&(pFVar3->State).DP;
    *(float *)&(pFVar3->State).DP.field_0x4 = (float)dVar10 + fVar1;
    *(float *)&(pFVar3->State).DP.field_0x8 =
         (float)dVar14 + *(float *)&(pFVar3->State).DP.field_0x8;
    *(float *)&(pFVar3->State).DQ = (float)dVar2 + *(float *)&(pFVar3->State).DQ;
    *(float *)&(pFVar3->State).DQ.field_0x4 = (float)dVar7 + *(float *)&(pFVar3->State).DQ.field_0x4
    ;
    *(float *)&(pFVar3->State).DQ.field_0x8 = (float)dVar5 + *(float *)&(pFVar3->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)&param_7->field_0x8 = dVar10 + *(double *)&param_7->field_0x8;
    *(double *)&param_7->field_0x10 = dVar14 + *(double *)&param_7->field_0x10;
    *(double *)param_7 = dVar6 + *(double *)param_7;
    *(double *)param_8 = dVar2 + *(double *)param_8;
    *(double *)&param_8->field_0x8 = dVar7 + *(double *)&param_8->field_0x8;
    *(double *)&param_8->field_0x10 = dVar5 + *(double *)&param_8->field_0x10;
  }
  return;
}

// ApplyDualConeSwingVelocityConstraint @ 143b8cf30

void __thiscall
Chaos::FPBDJointSolver::ApplyDualConeSwingVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double local_res8;
  TVector<double,3> local_58 [2];
  
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetAngularImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) && (!param_5))
  {
    if ((Swing1 < param_4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (__real_3e45798ee0000000 <
        *(double *)(&this->LastPs[-5].field_0x0 + (longlong)(int)param_4 * 8)) {
      FPBDJointUtilities::GetDualConeSwingAxisAngle
                (this->ConnectorRs,this->ConnectorRs + 1,param_4,local_58,&local_res8);
      dVar2 = this->SolverStiffness;
      dVar6 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      uVar7 = 0;
      uVar8 = 0;
      if (param_3->SwingRestitution != 0.0) {
        if ((Swing1 < param_4) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar3 = *(double *)
                 (&((TVector<double,3> *)(this->LastQs + 2))[1].field_0x0 +
                 (longlong)(int)param_4 * 8);
        if ((double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution < dVar3) {
          dVar3 = dVar3 * param_3->SwingRestitution;
          uVar7 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar8 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        }
      }
      ApplyAngularVelocityConstraint(this,dVar6 * dVar2,local_58,(double)CONCAT44(uVar8,uVar7));
    }
  }
  return;
}

// ApplyLinearVelocityConstraint @ 143b8d5b0

void __thiscall
Chaos::FPBDJointSolver::ApplyLinearVelocityConstraint
          (FPBDJointSolver *this,double param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  
  pFVar8 = this->SolverBodies[0].Body;
  pFVar9 = this->SolverBodies[1].Body;
  dVar14 = *(double *)&this->ConnectorXs[1].field_0x10 - *(double *)&(pFVar9->State).P.field_0x10;
  dVar16 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar9->State).P.field_0x8;
  dVar17 = (*(double *)&this->ConnectorXs[0].field_0x10 + *(double *)&param_3->field_0x10) -
           *(double *)&(pFVar8->State).P.field_0x10;
  dVar29 = (*(double *)param_3 + *(double *)this->ConnectorXs) - *(double *)&(pFVar8->State).P;
  dVar13 = (*(double *)&this->ConnectorXs[0].field_0x8 + *(double *)&param_3->field_0x8) -
           *(double *)&(pFVar8->State).P.field_0x8;
  dVar15 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar9->State).P;
  if (pFVar8 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar20) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar8->State).V;
  fVar2 = *(float *)&(pFVar8->State).V.field_0x4;
  fVar3 = *(float *)&(pFVar8->State).V.field_0x8;
  if (pFVar8 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar20) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[0].Body;
  dVar21 = (double)*(float *)&(pFVar8->State).W.field_0x8;
  dVar28 = (double)*(float *)&(pFVar8->State).W.field_0x4;
  dVar26 = (double)*(float *)&(pFVar8->State).W;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar20) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[1].Body;
  fVar4 = *(float *)&(pFVar8->State).V;
  fVar5 = *(float *)&(pFVar8->State).V.field_0x4;
  fVar6 = *(float *)&(pFVar8->State).V.field_0x8;
  if (pFVar8 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar20) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  dVar7 = *(double *)&param_2->field_0x8;
  dVar24 = *(double *)&param_2->field_0x10;
  dVar25 = *(double *)param_2;
  pFVar8 = this->SolverBodies[1].Body;
  dVar12 = (double)*(float *)&(pFVar8->State).W;
  dVar22 = dVar13 * dVar24 - dVar17 * dVar7;
  dVar27 = (double)*(float *)&(pFVar8->State).W.field_0x8;
  dVar18 = dVar17 * dVar25 - dVar29 * dVar24;
  dVar11 = (double)*(float *)&(pFVar8->State).W.field_0x4;
  dVar19 = dVar29 * dVar7 - dVar13 * dVar25;
  dVar23 = dVar24 * dVar16 - dVar7 * dVar14;
  dVar24 = dVar25 * dVar14 - dVar15 * dVar24;
  dVar25 = dVar15 * dVar7 - dVar25 * dVar16;
  local_2b8 = this->InvMs[0];
  uVar34 = (uint)__xmm_80000000000000008000000000000000;
  uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar7 = this->InvMs[1];
  uVar30 = SUB84(dVar7,0) ^ uVar34;
  uVar31 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar35;
  dVar21 = ((((((dVar15 * dVar27 - dVar12 * dVar14) + (double)fVar5) -
              ((dVar29 * dVar21 - dVar17 * dVar26) + (double)fVar2)) *
              *(double *)&param_2->field_0x8 +
              (((dVar11 * dVar14 - dVar16 * dVar27) + (double)fVar4) -
              ((dVar17 * dVar28 - dVar13 * dVar21) + (double)fVar1)) * *(double *)param_2 +
             (((dVar12 * dVar16 - dVar11 * dVar15) + (double)fVar6) -
             ((dVar13 * dVar26 - dVar29 * dVar28) + (double)fVar3)) *
             *(double *)&param_2->field_0x10) - param_4) * param_1) /
           ((*(double *)&this->InvIs[0].field_0x28 * dVar18 +
             *(double *)&this->InvIs[0].field_0x8 * dVar22 +
            *(double *)&this->InvIs[0].field_0x48 * dVar19) * dVar18 +
            (*(double *)&this->InvIs[0].field_0x20 * dVar18 + *(double *)this->InvIs * dVar22 +
            *(double *)&this->InvIs[0].field_0x40 * dVar19) * dVar22 +
            (*(double *)&this->InvIs[0].field_0x30 * dVar18 +
             *(double *)&this->InvIs[0].field_0x10 * dVar22 +
            *(double *)&this->InvIs[0].field_0x50 * dVar19) * dVar19 + local_2b8 +
           (*(double *)&this->InvIs[1].field_0x28 * dVar24 +
            *(double *)&this->InvIs[1].field_0x8 * dVar23 +
           *(double *)&this->InvIs[1].field_0x48 * dVar25) * dVar24 +
           (*(double *)&this->InvIs[1].field_0x20 * dVar24 + *(double *)(this->InvIs + 1) * dVar23 +
           *(double *)&this->InvIs[1].field_0x40 * dVar25) * dVar23 +
           (*(double *)&this->InvIs[1].field_0x30 * dVar24 +
            *(double *)&this->InvIs[1].field_0x10 * dVar23 +
           *(double *)&this->InvIs[1].field_0x50 * dVar25) * dVar25 + dVar7);
  dVar28 = *(double *)param_2 * dVar21;
  dVar7 = *(double *)&param_2->field_0x8 * dVar21;
  dVar21 = *(double *)&param_2->field_0x10 * dVar21;
  local_2c8 = local_2b8 * dVar28;
  local_2c0 = local_2b8 * dVar7;
  local_2b8 = local_2b8 * dVar21;
  local_2f8 = (double)CONCAT44(uVar31,uVar30) * dVar28;
  local_2f0 = (double)CONCAT44(uVar31,uVar30) * dVar7;
  local_2e8 = (double)CONCAT44(uVar31,uVar30) * dVar21;
  uVar30 = SUB84(dVar28,0) ^ uVar34;
  uVar31 = (uint)((ulonglong)dVar28 >> 0x20) ^ uVar35;
  dVar26 = dVar13 * dVar21 - dVar17 * dVar7;
  uVar32 = SUB84(dVar21,0) ^ uVar34;
  uVar33 = (uint)((ulonglong)dVar21 >> 0x20) ^ uVar35;
  uVar34 = SUB84(dVar7,0) ^ uVar34;
  uVar35 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar35;
  dVar17 = dVar17 * dVar28 - dVar29 * dVar21;
  dVar29 = dVar29 * dVar7 - dVar13 * dVar28;
  local_2e0 = dVar17 * *(double *)&this->InvIs[0].field_0x20 + dVar26 * *(double *)this->InvIs +
              dVar29 * *(double *)&this->InvIs[0].field_0x40;
  local_2d8 = dVar17 * *(double *)&this->InvIs[0].field_0x28 +
              dVar26 * *(double *)&this->InvIs[0].field_0x8 +
              dVar29 * *(double *)&this->InvIs[0].field_0x48;
  local_2d0 = dVar17 * *(double *)&this->InvIs[0].field_0x30 +
              dVar26 * *(double *)&this->InvIs[0].field_0x10 +
              dVar29 * *(double *)&this->InvIs[0].field_0x50;
  dVar29 = (double)CONCAT44(uVar33,uVar32) * dVar16 - dVar14 * (double)CONCAT44(uVar35,uVar34);
  dVar16 = dVar15 * (double)CONCAT44(uVar35,uVar34) - dVar16 * (double)CONCAT44(uVar31,uVar30);
  dVar13 = dVar14 * (double)CONCAT44(uVar31,uVar30) - dVar15 * (double)CONCAT44(uVar33,uVar32);
  local_310 = dVar13 * *(double *)&this->InvIs[1].field_0x20 + dVar29 * *(double *)(this->InvIs + 1)
              + dVar16 * *(double *)&this->InvIs[1].field_0x40;
  local_308 = dVar13 * *(double *)&this->InvIs[1].field_0x28 +
              dVar29 * *(double *)&this->InvIs[1].field_0x8 +
              dVar16 * *(double *)&this->InvIs[1].field_0x48;
  local_300 = dVar13 * *(double *)&this->InvIs[1].field_0x30 +
              dVar29 * *(double *)&this->InvIs[1].field_0x10 +
              dVar16 * *(double *)&this->InvIs[1].field_0x50;
  ApplyVelocityDelta(this,(TVector<double,3> *)&local_2c8,(TVector<double,3> *)&local_2e0,
                     (TVector<double,3> *)&local_2f8,(TVector<double,3> *)&local_310);
  return;
}

// ApplyLinearVelocityConstraints @ 143b8dff0

void __thiscall
Chaos::FPBDJointSolver::ApplyLinearVelocityConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined8 uVar1;
  double dVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  bool bVar5;
  int iVar6;
  EJointMotionType EVar7;
  double dVar8;
  double dVar9;
  double local_res20;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  EVar3 = (param_3->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar3 == Free) && ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar7 = (param_3->LinearMotionTypes).field0_0x0._s_0.Y;
  EVar4 = (param_3->LinearMotionTypes).field0_0x0._s_0.Z;
  if (EVar3 == Locked) {
    if ((EVar7 == Locked) && (EVar4 == Locked)) {
      ApplyPointVelocityConstraint(this,param_1,param_2,param_3);
      return;
    }
LAB_143b8e22b:
    if (EVar3 == Locked) {
      if (EVar4 == Locked) {
        if (EVar7 != Locked) {
          ApplyCylindricalVelocityConstraint(this,param_1,1,EVar7,Locked,param_2,param_3);
          return;
        }
      }
      else {
        if (EVar7 != Locked) goto LAB_143b8e27e;
        if (EVar4 != Locked) goto LAB_143b8e2f7;
      }
    }
    else {
LAB_143b8e27e:
      if ((EVar7 != Limited) || (EVar4 != Limited)) goto LAB_143b8e2b4;
      if (EVar3 != Limited) {
        ApplyCylindricalVelocityConstraint(this,param_1,0,EVar3,Limited,param_2,param_3);
        return;
      }
    }
  }
  else {
    if ((EVar3 != Limited) || (EVar7 != Limited)) {
      if ((EVar7 != Locked) || (EVar4 != Locked)) goto LAB_143b8e22b;
      if (EVar3 != Locked) {
        ApplyCylindricalVelocityConstraint(this,param_1,0,EVar3,Locked,param_2,param_3);
        return;
      }
      goto LAB_143b8e333;
    }
    if (EVar4 == Limited) {
      if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetLinearImpulse >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             (uint)*(undefined8 *)&this->NetLinearImpulse &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000) &&
          (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x8,
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
          __real_3f1a36e2e0000000)) &&
         (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x10,
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) {
        return;
      }
      bVar5 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
      if (bVar5) {
        return;
      }
      FPBDJointUtilities::GetSphericalAxisDelta
                (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_48,&local_res20
                );
      dVar2 = this->SolverStiffness;
      dVar8 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
      dVar9 = param_3->LinearLimit;
      local_20 = *(double *)&this->ConnectorXs[1].field_0x10 -
                 *(double *)&this->ConnectorXs[0].field_0x10;
      local_28 = *(double *)&this->ConnectorXs[1].field_0x8 -
                 *(double *)&this->ConnectorXs[0].field_0x8;
      local_30 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
      if (dVar9 < local_res20) {
        local_20 = dVar9 * local_38;
        local_28 = dVar9 * local_40;
        local_30 = dVar9 * local_48;
      }
      dVar9 = 0.0;
      if ((param_3->LinearRestitution != 0.0) &&
         ((double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution <
          *(double *)&this->InitConstraintAxisLinearVelocities)) {
        dVar9 = param_3->LinearRestitution * *(double *)&this->InitConstraintAxisLinearVelocities;
        dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000);
      }
      ApplyLinearVelocityConstraint
                (this,dVar8 * dVar2,(TVector<double,3> *)&local_48,(TVector<double,3> *)&local_30,
                 dVar9);
      return;
    }
LAB_143b8e2b4:
    if (EVar3 == Limited) {
      if (EVar4 == Limited) {
        if (EVar7 != Limited) {
          ApplyCylindricalVelocityConstraint(this,param_1,1,EVar7,Limited,param_2,param_3);
          return;
        }
      }
      else if ((EVar7 == Limited) && (EVar4 != Limited)) {
LAB_143b8e2f7:
        ApplyCylindricalVelocityConstraint(this,param_1,2,EVar4,EVar7,param_2,param_3);
        return;
      }
    }
    else if (EVar3 != Locked) {
      if (EVar7 - Limited < 2) {
        iVar6 = 1;
      }
      else {
        if (1 < EVar4 - Limited) {
          return;
        }
        iVar6 = 2;
        EVar7 = EVar4;
      }
      goto LAB_143b8e339;
    }
  }
LAB_143b8e333:
  iVar6 = 0;
  EVar7 = EVar3;
LAB_143b8e339:
  ApplyPlanarVelocityConstraint(this,param_1,iVar6,EVar7,param_2,param_3);
  return;
}

// ApplyLockedRotationConstraints @ 143b8e370

void __thiscall
Chaos::FPBDJointSolver::ApplyLockedRotationConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4,bool param_5)

{
  undefined4 uVar1;
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  
  FPBDJointUtilities::GetLockedRotationAxes
            (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)&local_1a8,
             (TVector<double,3> *)&local_190,(TVector<double,3> *)&local_178);
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  dVar7 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar8 = *(double *)&this->ConnectorRs[1].field_0x18;
  dVar9 = *(double *)(this->ConnectorRs + 1);
  dVar10 = *(double *)&this->ConnectorRs[1].field_0x8;
  dVar11 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
           *(double *)this->ConnectorRs;
  dVar12 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
           *(double *)&this->ConnectorRs[0].field_0x8;
  dVar2 = *(double *)&this->ConnectorRs[0].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&this->ConnectorRs[0].field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar5 = dVar11 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar3 * dVar9 +
          dVar12 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar2 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  uVar16 = (uint)((ulonglong)dVar5 >> 0x20);
  dVar6 = dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar3 * dVar10 +
          dVar12 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar2 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar18 = (uint)((ulonglong)dVar6 >> 0x20);
  dVar4 = dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar3 * dVar8 +
          dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148._8_4_ = SUB84(dVar6,0);
  local_148._0_8_ = dVar5;
  local_148._12_4_ = uVar18;
  local_158._8_4_ = SUB84(dVar4,0);
  local_158._0_8_ =
       dVar11 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar3 * dVar7 +
       dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_158._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = __xmm_80000000000000008000000000000000._4_4_;
  if (param_4) {
    dVar11 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
    uVar13 = __xmm_80000000000000008000000000000000._4_4_;
    uVar17 = (uint)__xmm_80000000000000008000000000000000;
    if (0.0 < this->InvMs[0]) {
      if (0.0 < this->InvMs[1]) {
        local_1c0 = *(double *)&this->InvIs[0].field_0x20 * local_1a0 +
                    local_1a8 * *(double *)this->InvIs +
                    *(double *)&this->InvIs[0].field_0x40 * local_198;
        local_1b8 = *(double *)&this->InvIs[0].field_0x28 * local_1a0 +
                    local_1a8 * *(double *)&this->InvIs[0].field_0x8 +
                    *(double *)&this->InvIs[0].field_0x48 * local_198;
        local_1b0 = *(double *)&this->InvIs[0].field_0x30 * local_1a0 +
                    local_1a8 * *(double *)&this->InvIs[0].field_0x10 +
                    *(double *)&this->InvIs[0].field_0x50 * local_198;
        local_1d8 = *(double *)&this->InvIs[1].field_0x20 * local_1a0 +
                    local_1a8 * *(double *)(this->InvIs + 1) +
                    *(double *)&this->InvIs[1].field_0x40 * local_198;
        local_1d0 = *(double *)&this->InvIs[1].field_0x28 * local_1a0 +
                    local_1a8 * *(double *)&this->InvIs[1].field_0x8 +
                    *(double *)&this->InvIs[1].field_0x48 * local_198;
        local_1c8 = *(double *)&this->InvIs[1].field_0x30 * local_1a0 +
                    local_1a8 * *(double *)&this->InvIs[1].field_0x10 +
                    *(double *)&this->InvIs[1].field_0x50 * local_198;
        dVar12 = (dVar11 * this->SolverStiffness * dVar5) /
                 (local_1d8 * local_1a8 + local_1d0 * local_1a0 + local_1c8 * local_198 +
                 local_1c0 * local_1a8 + local_1b8 * local_1a0 + local_1b0 * local_198);
        local_1c0 = local_1c0 * dVar12;
        dVar11 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000);
        local_1b8 = local_1b8 * dVar12;
        local_1d8 = local_1d8 * dVar11;
        local_1d0 = local_1d0 * dVar11;
        local_1c8 = local_1c8 * dVar11;
        local_1b0 = local_1b0 * dVar12;
        ApplyRotationDelta(this,(TVector<double,3> *)&local_1c0,(TVector<double,3> *)&local_1d8);
        dVar11 = *(double *)&this->NetAngularImpulse;
        *(double *)&(this->NetAngularImpulse).field_0x8 =
             dVar12 * local_1a0 + *(double *)&(this->NetAngularImpulse).field_0x8;
        *(double *)&this->NetAngularImpulse = local_1a8 * dVar12 + dVar11;
        *(double *)&(this->NetAngularImpulse).field_0x10 =
             dVar12 * local_198 + *(double *)&(this->NetAngularImpulse).field_0x10;
        *(double *)&this->AngularHardLambda = dVar12 + *(double *)&this->AngularHardLambda;
      }
      else {
        ApplyRotationConstraintKD
                  (this,1,0,dVar11,(TVector<double,3> *)&local_1a8,
                   (double)CONCAT44(uVar16 ^ uVar14,SUB84(dVar5,0) ^ uVar15),0);
        uVar17 = uVar15;
        uVar13 = uVar14;
      }
    }
    else {
      ApplyRotationConstraintKD(this,0,1,dVar11,(TVector<double,3> *)&local_1a8,dVar5,0);
      uVar17 = uVar15;
      uVar13 = uVar14;
    }
    dVar11 = (double)CONCAT44(uVar16 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar11 <= this->AngularViolation) {
      dVar11 = this->AngularViolation;
    }
    this->AngularViolation = dVar11;
  }
  if (param_5) {
    dVar11 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
    uVar14 = __xmm_80000000000000008000000000000000._4_4_;
    uVar15 = (uint)__xmm_80000000000000008000000000000000;
    if (0.0 < this->InvMs[0]) {
      if (0.0 < this->InvMs[1]) {
        uVar1 = local_148._12_4_;
        local_1d8 = *(double *)&this->InvIs[0].field_0x20 * local_188 +
                    local_190 * *(double *)this->InvIs +
                    *(double *)&this->InvIs[0].field_0x40 * local_180;
        local_1d0 = *(double *)&this->InvIs[0].field_0x28 * local_188 +
                    local_190 * *(double *)&this->InvIs[0].field_0x8 +
                    *(double *)&this->InvIs[0].field_0x48 * local_180;
        local_1c8 = *(double *)&this->InvIs[0].field_0x30 * local_188 +
                    local_190 * *(double *)&this->InvIs[0].field_0x10 +
                    *(double *)&this->InvIs[0].field_0x50 * local_180;
        local_1c0 = *(double *)&this->InvIs[1].field_0x20 * local_188 +
                    local_190 * *(double *)(this->InvIs + 1) +
                    *(double *)&this->InvIs[1].field_0x40 * local_180;
        local_1b8 = *(double *)&this->InvIs[1].field_0x28 * local_188 +
                    local_190 * *(double *)&this->InvIs[1].field_0x8 +
                    *(double *)&this->InvIs[1].field_0x48 * local_180;
        dVar12 = local_148._8_8_;
        local_148._8_4_ = local_148._8_4_;
        local_148._0_8_ = dVar12;
        local_148._12_4_ = uVar1;
        local_1b0 = *(double *)&this->InvIs[1].field_0x30 * local_188 +
                    local_190 * *(double *)&this->InvIs[1].field_0x10 +
                    *(double *)&this->InvIs[1].field_0x50 * local_180;
        dVar2 = (dVar11 * this->SolverStiffness * dVar12) /
                (local_190 * local_1c0 + local_188 * local_1b8 + local_180 * local_1b0 +
                local_1d0 * local_188 + local_1d8 * local_190 + local_1c8 * local_180);
        local_1d8 = local_1d8 * dVar2;
        uVar17 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar13 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        local_1d0 = local_1d0 * dVar2;
        local_1c8 = local_1c8 * dVar2;
        local_1c0 = (double)CONCAT44(uVar13,uVar17) * local_1c0;
        local_1b8 = (double)CONCAT44(uVar13,uVar17) * local_1b8;
        local_1b0 = (double)CONCAT44(uVar13,uVar17) * local_1b0;
        ApplyRotationDelta(this,(TVector<double,3> *)&local_1d8,(TVector<double,3> *)&local_1c0);
        dVar6 = local_148._0_8_;
        dVar12 = *(double *)&this->NetAngularImpulse;
        *(double *)&(this->NetAngularImpulse).field_0x8 =
             dVar2 * local_188 + *(double *)&(this->NetAngularImpulse).field_0x8;
        *(double *)&this->NetAngularImpulse = local_190 * dVar2 + dVar12;
        *(double *)&(this->NetAngularImpulse).field_0x10 =
             dVar2 * local_180 + *(double *)&(this->NetAngularImpulse).field_0x10;
        *(double *)&(this->AngularHardLambda).field_0x8 =
             dVar2 + *(double *)&(this->AngularHardLambda).field_0x8;
      }
      else {
        ApplyRotationConstraintKD
                  (this,1,0,dVar11,(TVector<double,3> *)&local_190,
                   (double)CONCAT44(uVar18 ^ uVar13,SUB84(dVar6,0) ^ uVar17),1);
        uVar15 = uVar17;
        uVar14 = uVar13;
      }
    }
    else {
      ApplyRotationConstraintKD(this,0,1,dVar11,(TVector<double,3> *)&local_190,dVar6,1);
      uVar15 = uVar17;
      uVar14 = uVar13;
    }
    if (0.0 < this->InvMs[0]) {
      if (0.0 < this->InvMs[1]) {
        local_1d8 = *(double *)&this->InvIs[0].field_0x20 * local_170 +
                    local_178 * *(double *)this->InvIs +
                    *(double *)&this->InvIs[0].field_0x40 * local_168;
        local_1d0 = *(double *)&this->InvIs[0].field_0x28 * local_170 +
                    local_178 * *(double *)&this->InvIs[0].field_0x8 +
                    *(double *)&this->InvIs[0].field_0x48 * local_168;
        local_1c8 = *(double *)&this->InvIs[0].field_0x30 * local_170 +
                    local_178 * *(double *)&this->InvIs[0].field_0x10 +
                    *(double *)&this->InvIs[0].field_0x50 * local_168;
        local_1c0 = *(double *)&this->InvIs[1].field_0x20 * local_170 +
                    local_178 * *(double *)(this->InvIs + 1) +
                    *(double *)&this->InvIs[1].field_0x40 * local_168;
        local_1b8 = *(double *)&this->InvIs[1].field_0x28 * local_170 +
                    local_178 * *(double *)&this->InvIs[1].field_0x8 +
                    *(double *)&this->InvIs[1].field_0x48 * local_168;
        local_1b0 = *(double *)&this->InvIs[1].field_0x30 * local_170 +
                    local_178 * *(double *)&this->InvIs[1].field_0x10 +
                    *(double *)&this->InvIs[1].field_0x50 * local_168;
        dVar12 = (dVar11 * this->SolverStiffness * (double)local_158._0_8_) /
                 (local_170 * local_1b8 + local_178 * local_1c0 + local_168 * local_1b0 +
                 local_170 * local_1d0 + local_178 * local_1d8 + local_168 * local_1c8);
        uVar15 = SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar17 = (uint)((ulonglong)dVar12 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        local_1d8 = dVar12 * local_1d8;
        local_1d0 = dVar12 * local_1d0;
        local_1c8 = dVar12 * local_1c8;
        local_1b8 = (double)CONCAT44(uVar17,uVar15) * local_1b8;
        local_1c0 = (double)CONCAT44(uVar17,uVar15) * local_1c0;
        local_1b0 = (double)CONCAT44(uVar17,uVar15) * local_1b0;
        ApplyRotationDelta(this,(TVector<double,3> *)&local_1d8,(TVector<double,3> *)&local_1c0);
        dVar11 = *(double *)&this->NetAngularImpulse;
        *(double *)&(this->NetAngularImpulse).field_0x8 =
             dVar12 * local_170 + *(double *)&(this->NetAngularImpulse).field_0x8;
        *(double *)&this->NetAngularImpulse = local_178 * dVar12 + dVar11;
        *(double *)&(this->NetAngularImpulse).field_0x10 =
             dVar12 * local_168 + *(double *)&(this->NetAngularImpulse).field_0x10;
        *(double *)&(this->AngularHardLambda).field_0x10 =
             dVar12 + *(double *)&(this->AngularHardLambda).field_0x10;
      }
      else {
        ApplyRotationConstraintKD
                  (this,1,0,dVar11,(TVector<double,3> *)&local_178,
                   (double)CONCAT44(local_158._4_4_ ^ uVar14,local_158._0_4_ ^ uVar15),2);
      }
    }
    else {
      ApplyRotationConstraintKD
                (this,0,1,dVar11,(TVector<double,3> *)&local_178,(double)local_158._0_8_,2);
    }
    uVar15 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar17 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar11 = this->AngularViolation;
    if ((double)CONCAT44(uVar17,uVar15) <= dVar11) {
      uVar15 = SUB84(dVar11,0);
      uVar17 = (uint)((ulonglong)dVar11 >> 0x20);
    }
    if ((double)CONCAT44(uVar17,uVar15) <=
        (double)CONCAT44(local_158._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         local_158._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      uVar15 = local_158._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar17 = local_158._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    }
    this->AngularViolation = (double)CONCAT44(uVar17,uVar15);
  }
  return;
}

// ApplyLockedRotationVelocityConstraints @ 143b8eec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplyLockedRotationVelocityConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4,bool param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  
  dVar7 = __real_3f1a36e2e0000000;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&this->NetAngularImpulse &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
     __real_3f1a36e2e0000000 <
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    FPBDJointUtilities::GetLockedRotationAxes
              (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)&local_b8,
               (TVector<double,3> *)&local_a0,(TVector<double,3> *)&local_88);
    dVar13 = __real_3e45798ee0000000;
    dVar6 = __real_3ff0000000000000;
    if ((param_4) && (__real_3e45798ee0000000 < *(double *)&this->AngularHardLambda)) {
      dVar9 = this->SolverStiffness;
      dVar8 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
      auVar12._0_8_ = local_b8 * local_b8;
      auVar12._8_8_ = 0;
      dVar4 = dStack_b0 * dStack_b0 + auVar12._0_8_ + local_a8 * local_a8;
      if (dVar7 <= dVar4) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar4;
        auVar12 = sqrtpd(auVar12,auVar3);
        dVar4 = dVar6 / auVar12._0_8_;
        local_b8 = local_b8 * dVar4;
        dStack_b0 = dStack_b0 * dVar4;
        local_a8 = local_a8 * dVar4;
      }
      else {
        local_b8 = ___xmm_00000000000000003ff0000000000000;
        dStack_b0 = _UNK_150689518;
        local_a8 = 0.0;
      }
      ApplyAngularVelocityConstraint(this,dVar8 * dVar9,(TVector<double,3> *)&local_b8,0.0);
    }
    if ((param_5) &&
       (dVar13 < *(double *)&(this->AngularHardLambda).field_0x10 +
                 *(double *)&(this->AngularHardLambda).field_0x8)) {
      dVar13 = this->SolverStiffness;
      dVar9 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      auVar10._0_8_ = local_a0 * local_a0;
      auVar10._8_8_ = 0;
      dVar9 = dVar9 * dVar13;
      dVar13 = dStack_98 * dStack_98 + auVar10._0_8_ + local_90 * local_90;
      if (dVar7 <= dVar13) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar13;
        auVar12 = sqrtpd(auVar10,auVar5);
        dVar13 = dVar6 / auVar12._0_8_;
        local_a0 = local_a0 * dVar13;
        dStack_98 = dStack_98 * dVar13;
        local_90 = local_90 * dVar13;
      }
      else {
        local_a0 = ___xmm_00000000000000003ff0000000000000;
        dStack_98 = _UNK_150689518;
        local_90 = 0.0;
      }
      ApplyAngularVelocityConstraint(this,dVar9,(TVector<double,3> *)&local_a0,0.0);
      auVar11._0_8_ = local_88 * local_88;
      auVar11._8_8_ = 0;
      dVar13 = dStack_80 * dStack_80 + auVar11._0_8_ + local_78 * local_78;
      if (dVar7 <= dVar13) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = dVar13;
        auVar12 = sqrtpd(auVar11,auVar2);
        dVar6 = dVar6 / auVar12._0_8_;
        local_88 = local_88 * dVar6;
        dStack_80 = dStack_80 * dVar6;
        local_78 = local_78 * dVar6;
      }
      else {
        local_88 = ___xmm_00000000000000003ff0000000000000;
        dStack_80 = _UNK_150689518;
        local_78 = 0.0;
      }
      ApplyAngularVelocityConstraint(this,dVar9,(TVector<double,3> *)&local_88,0.0);
    }
  }
  return;
}

// ApplyPlanarPositionConstraint @ 143b8f6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplyPlanarPositionConstraint
          (FPBDJointSolver *this,double param_1,int param_2,EJointMotionType param_3,
          FPBDJointSolverSettings *param_4,FPBDJointSettings *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  double local_res8;
  undefined1 local_98 [24];
  double local_80;
  double local_78;
  double local_70;
  
  FPBDJointUtilities::GetPlanarAxisDelta
            (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_2,
             (TVector<double,3> *)local_98,&local_res8);
  uVar7 = SUB84(local_res8,0);
  uVar8 = (uint)((ulonglong)local_res8 >> 0x20);
  if (local_res8 < 0.0) {
    uVar7 = uVar7 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar8 = uVar8 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_98._0_4_ = local_98._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_98._4_4_ = local_98._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_98._8_4_ = local_98._8_4_ ^ _UNK_15066df78;
    local_98._12_4_ = local_98._12_4_ ^ _UNK_15066df7c;
    local_res8 = (double)CONCAT44(uVar8,uVar7);
    local_98._16_8_ =
         CONCAT44(SUB84(local_98._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_98._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (param_3 == Locked) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = SUB84(param_5->LinearLimit,0);
    uVar6 = (undefined4)((ulonglong)param_5->LinearLimit >> 0x20);
  }
  dVar3 = (double)CONCAT44(uVar8,uVar7) - (double)CONCAT44(uVar6,uVar5);
  if (this->PositionTolerance <= dVar3 && dVar3 != this->PositionTolerance) {
    if ((param_3 == Limited) &&
       (bVar4 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_4,param_5), bVar4)) {
      dVar1 = FPBDJointUtilities::GetSoftLinearStiffness(param_4,param_5);
      dVar2 = FPBDJointUtilities::GetSoftLinearDamping(param_4,param_5);
      bVar4 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_4,param_5);
      ApplyPositionConstraintSoft
                (this,param_1,dVar1,dVar2,bVar4,(TVector<double,3> *)local_98,dVar3,0.0,0.0,
                 &this->LinearSoftLambda);
    }
    else {
      dVar1 = FPBDJointUtilities::GetLinearStiffness(param_4,param_5);
      local_80 = (*(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs) -
                 (double)CONCAT44(local_98._4_4_,local_98._0_4_) * dVar3;
      local_78 = (*(double *)&this->ConnectorXs[1].field_0x8 -
                 *(double *)&this->ConnectorXs[0].field_0x8) -
                 (double)CONCAT44(local_98._12_4_,local_98._8_4_) * dVar3;
      local_70 = (*(double *)&this->ConnectorXs[1].field_0x10 -
                 *(double *)&this->ConnectorXs[0].field_0x10) - (double)local_98._16_8_ * dVar3;
      ApplyPositionConstraint
                (this,dVar1,(TVector<double,3> *)local_98,dVar3,(TVector<double,3> *)&local_80,-1);
    }
    dVar1 = dVar3 * dVar3;
    if (dVar3 * dVar3 <= this->LinearViolationSq) {
      dVar1 = this->LinearViolationSq;
    }
    this->LinearViolationSq = dVar1;
    return;
  }
  return;
}

// ApplyPlanarVelocityConstraint @ 143b8f910

void __thiscall
Chaos::FPBDJointSolver::ApplyPlanarVelocityConstraint
          (FPBDJointSolver *this,double param_1,int param_2,EJointMotionType param_3,
          FPBDJointSolverSettings *param_4,FPBDJointSettings *param_5)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double local_res8;
  double local_78;
  double local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  double local_50;
  
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetLinearImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetLinearImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (bVar3 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_4,param_5), !bVar3)) {
    FPBDJointUtilities::GetPlanarAxisDelta
              (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_2,
               (TVector<double,3> *)&local_78,&local_res8);
    dVar2 = this->SolverStiffness;
    dVar4 = FPBDJointUtilities::GetLinearStiffness(param_4,param_5);
    uVar9 = (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar5 = 0.0;
    uVar7 = (uint)local_68;
    uVar8 = SUB84(local_68,4);
    if (local_res8 < 0.0) {
      local_res8 = (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^ uVar10,
                                    SUB84(local_res8,0) ^ uVar9);
      local_78 = (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) ^ uVar10,
                                  SUB84(local_78,0) ^ uVar9);
      local_70 = (double)CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar10,
                                  SUB84(local_70,0) ^ uVar9);
      uVar7 = uVar7 ^ uVar9;
      uVar8 = uVar8 ^ uVar10;
      local_68._4_4_ = uVar8;
      local_68._0_4_ = uVar7;
    }
    if (param_3 == Locked) {
      dVar6 = 0.0;
    }
    else {
      dVar6 = param_5->LinearLimit;
    }
    dVar6 = local_res8 - dVar6;
    local_60 = (*(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs) -
               dVar6 * local_78;
    local_58 = (*(double *)&this->ConnectorXs[1].field_0x8 -
               *(double *)&this->ConnectorXs[0].field_0x8) - dVar6 * local_70;
    local_50 = (*(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&this->ConnectorXs[0].field_0x10) - dVar6 * (double)CONCAT44(uVar8,uVar7);
    if (((param_3 == Limited) && (param_5->LinearRestitution != 0.0)) &&
       ((double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution <
        *(double *)&this->InitConstraintAxisLinearVelocities)) {
      dVar5 = param_5->LinearRestitution * *(double *)&this->InitConstraintAxisLinearVelocities;
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar10,SUB84(dVar5,0) ^ uVar9);
    }
    ApplyLinearVelocityConstraint
              (this,dVar4 * dVar2,(TVector<double,3> *)&local_78,(TVector<double,3> *)&local_60,
               dVar5);
  }
  return;
}

// ApplyPointPositionConstraintDD @ 143b8fb60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyPointPositionConstraintDD
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  double dVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  TMatrix<double> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 in_XMM2 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_628 [32];
  double local_608;
  double local_600;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  double local_558;
  double local_550;
  double local_548;
  double local_540;
  double local_538;
  double local_528;
  double local_520;
  double local_518;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4c8;
  double local_4c0;
  double local_4b8;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_488;
  double local_480;
  double local_478;
  PMatrix<double,3,3> local_448;
  PMatrix<double,3,3> local_3c8;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_628;
  if (this->InvMs[0] <= 0.0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDynamic(0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                       ,0x7ba,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->InvMs[1] <= 0.0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDynamic(1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                       ,0x7bb,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  dVar1 = this->SolverStiffness;
  dVar5 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
  local_600 = *(double *)&this->ConnectorXs[1].field_0x8 -
              *(double *)&this->ConnectorXs[0].field_0x8;
  local_5f8 = *(double *)&this->ConnectorXs[1].field_0x10 -
              *(double *)&this->ConnectorXs[0].field_0x10;
  local_608 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
  dVar5 = dVar5 * dVar1;
  if (6 < (byte)LogChaosJoint._0_1_) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_600 * local_600 + local_608 * local_608 + local_5f8 * local_5f8;
    sqrtpd(in_XMM2,auVar4);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  dVar1 = local_608 * local_608 + local_600 * local_600 + local_5f8 * local_5f8;
  if (this->PositionTolerance * this->PositionTolerance < dVar1) {
    if (bChaos_Joint_ISPC_Enabled == false) {
      local_5f0 = this->InvMs[0];
      local_448._0_8_ = *(undefined8 *)this->InvIs;
      local_448._8_8_ = *(undefined8 *)&this->InvIs[0].field_0x8;
      local_448._16_8_ = *(undefined8 *)&this->InvIs[0].field_0x10;
      local_448._24_8_ = *(undefined8 *)&this->InvIs[0].field_0x18;
      local_448._48_8_ = *(undefined8 *)&this->InvIs[0].field_0x30;
      local_448._56_8_ = *(undefined8 *)&this->InvIs[0].field_0x38;
      local_448._32_8_ = *(undefined8 *)&this->InvIs[0].field_0x20;
      local_448._40_8_ = *(undefined8 *)&this->InvIs[0].field_0x28;
      local_448._80_8_ = *(undefined8 *)&this->InvIs[0].field_0x50;
      local_448._88_8_ = *(undefined8 *)&this->InvIs[0].field_0x58;
      local_448._64_8_ = *(undefined8 *)&this->InvIs[0].field_0x40;
      local_448._72_8_ = *(undefined8 *)&this->InvIs[0].field_0x48;
      local_448._112_8_ = *(undefined8 *)&this->InvIs[0].field_0x70;
      local_448._120_8_ = *(undefined8 *)&this->InvIs[0].field_0x78;
      local_448._96_8_ = *(undefined8 *)&this->InvIs[0].field_0x60;
      local_448._104_8_ = *(undefined8 *)&this->InvIs[0].field_0x68;
      if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                           ,0x2e,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = this->SolverBodies[0].Body;
      local_5d8 = *(double *)this->ConnectorXs -
                  ((double)*(float *)&(pFVar2->State).DP + *(double *)&(pFVar2->State).P);
      local_5d0 = *(double *)&this->ConnectorXs[0].field_0x8 -
                  ((double)*(float *)&(pFVar2->State).DP.field_0x4 +
                  *(double *)&(pFVar2->State).P.field_0x8);
      local_5c8 = *(double *)&this->ConnectorXs[0].field_0x10 -
                  ((double)*(float *)&(pFVar2->State).DP.field_0x8 +
                  *(double *)&(pFVar2->State).P.field_0x10);
      Utilities::ComputeJointFactorMatrix<double>
                ((PMatrix<double,3,3> *)&local_548,(TVector<double,3> *)&local_5d8,&local_448,
                 &local_5f0);
      local_5e8 = this->InvMs[1];
      local_3c8._0_8_ = *(undefined8 *)(this->InvIs + 1);
      local_3c8._8_8_ = *(undefined8 *)&this->InvIs[1].field_0x8;
      local_3c8._16_8_ = *(undefined8 *)&this->InvIs[1].field_0x10;
      local_3c8._24_8_ = *(undefined8 *)&this->InvIs[1].field_0x18;
      local_3c8._32_8_ = *(undefined8 *)&this->InvIs[1].field_0x20;
      local_3c8._40_8_ = *(undefined8 *)&this->InvIs[1].field_0x28;
      local_3c8._48_8_ = *(undefined8 *)&this->InvIs[1].field_0x30;
      local_3c8._56_8_ = *(undefined8 *)&this->InvIs[1].field_0x38;
      local_3c8._64_8_ = *(undefined8 *)&this->InvIs[1].field_0x40;
      local_3c8._72_8_ = *(undefined8 *)&this->InvIs[1].field_0x48;
      local_3c8._80_8_ = *(undefined8 *)&this->InvIs[1].field_0x50;
      local_3c8._88_8_ = *(undefined8 *)&this->InvIs[1].field_0x58;
      local_3c8._96_8_ = *(undefined8 *)&this->InvIs[1].field_0x60;
      local_3c8._104_8_ = *(undefined8 *)&this->InvIs[1].field_0x68;
      local_3c8._112_8_ = *(undefined8 *)&this->InvIs[1].field_0x70;
      local_3c8._120_8_ = *(undefined8 *)&this->InvIs[1].field_0x78;
      if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                           ,0x2e,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = this->SolverBodies[1].Body;
      local_5c0 = *(double *)(this->ConnectorXs + 1) -
                  ((double)*(float *)&(pFVar2->State).DP + *(double *)&(pFVar2->State).P);
      local_5b8 = *(double *)&this->ConnectorXs[1].field_0x8 -
                  ((double)*(float *)&(pFVar2->State).DP.field_0x4 +
                  *(double *)&(pFVar2->State).P.field_0x8);
      local_5b0 = *(double *)&this->ConnectorXs[1].field_0x10 -
                  ((double)*(float *)&(pFVar2->State).DP.field_0x8 +
                  *(double *)&(pFVar2->State).P.field_0x10);
      Utilities::ComputeJointFactorMatrix<double>
                ((PMatrix<double,3,3> *)&local_4c8,(TVector<double,3> *)&local_5c0,&local_3c8,
                 &local_5e8);
      local_148.M[0][0] = local_548 + local_4c8;
      local_148.M[1][0] = local_528 + local_4a8;
      local_148.M[0][3] = 0.0;
      local_148.M[1][3] = 0.0;
      local_148.M[2][0] = local_508 + local_488;
      local_148.M[0][1] = local_540 + local_4c0;
      local_148.M[2][3] = 0.0;
      local_148.M[1][1] = local_520 + local_4a0;
      local_148.M[2][1] = local_500 + local_480;
      local_148.M[0][2] = local_538 + local_4b8;
      local_148.M[1][2] = local_518 + local_498;
      local_148.M[2][2] = local_4f8 + local_478;
      local_148.M[3][2] = ___xmm_3ff00000000000000000000000000000;
      local_148.M[3][3] = _UNK_15061cbc8;
      local_148.M[3][0] = 0.0;
      local_148.M[3][1] = 0.0;
      pTVar9 = UE::Math::TMatrix<double>::Inverse(&local_148,&local_1c8);
      local_348 = pTVar9->M[0][0];
      dStack_340 = pTVar9->M[0][1];
      local_2e8 = pTVar9->M[3][0];
      dStack_2e0 = pTVar9->M[3][1];
      local_328 = pTVar9->M[1][0];
      dStack_320 = pTVar9->M[1][1];
      local_338 = pTVar9->M[0][2];
      dStack_330 = pTVar9->M[0][3];
      local_318 = pTVar9->M[1][2];
      dStack_310 = pTVar9->M[1][3];
      local_308 = pTVar9->M[2][0];
      dStack_300 = pTVar9->M[2][1];
      local_2f8 = pTVar9->M[2][2];
      dStack_2f0 = pTVar9->M[2][3];
      local_2d8 = pTVar9->M[3][2];
      dStack_2d0 = pTVar9->M[3][3];
      uVar14 = SUB84(this->InvMs[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (uint)((ulonglong)this->InvMs[1] >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      local_588 = this->InvMs[0];
      dVar6 = (local_348 * local_608 + local_328 * local_600 + local_308 * local_5f8) * dVar5;
      local_590 = local_588 * dVar6;
      dVar7 = (local_338 * local_608 + local_318 * local_600 + local_2f8 * local_5f8) * dVar5;
      local_5a8 = dVar6 * (double)CONCAT44(uVar15,uVar14);
      dVar5 = (dStack_340 * local_608 + dStack_320 * local_600 + dStack_300 * local_5f8) * dVar5;
      local_580 = local_588 * dVar7;
      local_588 = local_588 * dVar5;
      local_598 = dVar7 * (double)CONCAT44(uVar15,uVar14);
      local_5a0 = dVar5 * (double)CONCAT44(uVar15,uVar14);
      local_5e0 = dVar6;
      if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                           ,0x2e,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = this->SolverBodies[0].Body;
      local_2c8 = *(double *)this->InvIs;
      dStack_2c0 = *(double *)&this->InvIs[0].field_0x8;
      local_2a8 = *(double *)&this->InvIs[0].field_0x20;
      dStack_2a0 = *(double *)&this->InvIs[0].field_0x28;
      local_288 = *(double *)&this->InvIs[0].field_0x40;
      dStack_280 = *(double *)&this->InvIs[0].field_0x48;
      local_278 = *(double *)&this->InvIs[0].field_0x50;
      uStack_270 = *(undefined8 *)&this->InvIs[0].field_0x58;
      local_2b8 = *(double *)&this->InvIs[0].field_0x10;
      uStack_2b0 = *(undefined8 *)&this->InvIs[0].field_0x18;
      local_298 = *(double *)&this->InvIs[0].field_0x30;
      uStack_290 = *(undefined8 *)&this->InvIs[0].field_0x38;
      dVar11 = *(double *)&this->ConnectorXs[0].field_0x10 -
               ((double)*(float *)&(pFVar2->State).DP.field_0x8 +
               *(double *)&(pFVar2->State).P.field_0x10);
      dVar12 = *(double *)&this->ConnectorXs[0].field_0x8 -
               ((double)*(float *)&(pFVar2->State).DP.field_0x4 +
               *(double *)&(pFVar2->State).P.field_0x8);
      dVar10 = *(double *)this->ConnectorXs -
               ((double)*(float *)&(pFVar2->State).DP + *(double *)&(pFVar2->State).P);
      dVar13 = dVar12 * dVar7 - dVar5 * dVar11;
      local_258 = *(undefined8 *)&this->InvIs[0].field_0x70;
      uStack_250 = *(undefined8 *)&this->InvIs[0].field_0x78;
      dVar12 = dVar5 * dVar10 - dVar12 * dVar6;
      dVar11 = dVar11 * dVar6 - dVar10 * dVar7;
      local_268 = *(undefined8 *)&this->InvIs[0].field_0x60;
      uStack_260 = *(undefined8 *)&this->InvIs[0].field_0x68;
      local_560 = local_2c8 * dVar13 + dVar11 * local_2a8 + dVar12 * local_288;
      local_550 = local_2b8 * dVar13 + dVar11 * local_298 + dVar12 * local_278;
      uVar14 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (uint)((ulonglong)dVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      uVar18 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar19 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      local_558 = dStack_2c0 * dVar13 + dVar11 * dStack_2a0 + dVar12 * dStack_280;
      uVar16 = SUB84(dVar7,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar17 = (uint)((ulonglong)dVar7 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                           ,0x2e,L"");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = this->SolverBodies[1].Body;
      dVar13 = *(double *)&this->ConnectorXs[1].field_0x10 -
               ((double)*(float *)&(pFVar2->State).DP.field_0x8 +
               *(double *)&(pFVar2->State).P.field_0x10);
      dVar6 = *(double *)&this->ConnectorXs[1].field_0x8 -
              ((double)*(float *)&(pFVar2->State).DP.field_0x4 +
              *(double *)&(pFVar2->State).P.field_0x8);
      dVar11 = *(double *)(this->ConnectorXs + 1) -
               ((double)*(float *)&(pFVar2->State).DP + *(double *)&(pFVar2->State).P);
      dVar12 = dVar6 * (double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar19,uVar18) * dVar13;
      dVar13 = (double)CONCAT44(uVar15,uVar14) * dVar13 - (double)CONCAT44(uVar17,uVar16) * dVar11;
      dVar6 = (double)CONCAT44(uVar19,uVar18) * dVar11 - (double)CONCAT44(uVar15,uVar14) * dVar6;
      local_578 = dVar13 * *(double *)&this->InvIs[1].field_0x20 +
                  dVar12 * *(double *)(this->InvIs + 1) +
                  dVar6 * *(double *)&this->InvIs[1].field_0x40;
      local_570 = dVar13 * *(double *)&this->InvIs[1].field_0x28 +
                  dVar12 * *(double *)&this->InvIs[1].field_0x8 +
                  dVar6 * *(double *)&this->InvIs[1].field_0x48;
      local_568 = dVar13 * *(double *)&this->InvIs[1].field_0x30 +
                  dVar12 * *(double *)&this->InvIs[1].field_0x10 +
                  dVar6 * *(double *)&this->InvIs[1].field_0x50;
      ApplyPositionDelta(this,(TVector<double,3> *)&local_590,(TVector<double,3> *)&local_5a8);
      ApplyRotationDelta(this,(TVector<double,3> *)&local_560,(TVector<double,3> *)&local_578);
      dVar6 = *(double *)&this->NetLinearImpulse;
      *(double *)&(this->NetLinearImpulse).field_0x8 =
           dVar5 + *(double *)&(this->NetLinearImpulse).field_0x8;
      *(double *)&(this->NetLinearImpulse).field_0x10 =
           dVar7 + *(double *)&(this->NetLinearImpulse).field_0x10;
      *(double *)&this->NetLinearImpulse = local_5e0 + dVar6;
    }
    else {
      ::ApplyPointPositionConstraintDD(this,&local_608);
    }
    dVar5 = this->LinearViolationSq;
    if (this->LinearViolationSq <= dVar1) {
      dVar5 = dVar1;
    }
    this->LinearViolationSq = dVar5;
  }
  return;
}

// ApplyPointPositionConstraintKD @ 143b905f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyPointPositionConstraintKD
          (FPBDJointSolver *this,int param_1,int param_2,double param_3,
          FPBDJointSolverSettings *param_4,FPBDJointSettings *param_5)

{
  undefined1 *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  FSolverBody *pFVar4;
  code *pcVar5;
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
  bool bVar17;
  FConstraintSolverBody *pFVar18;
  TMatrix<double> *pTVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double local_388;
  undefined1 local_378 [16];
  PMatrix<double,3,3> local_368 [3];
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  if (0.0 < this->InvMs[param_1]) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsDynamic(KIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                        ,0x78a,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->InvMs[param_2] <= 0.0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsDynamic(DIndex)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                        ,0x78b,L"");
    if (bVar17) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar2 = this->SolverStiffness;
  dVar6 = FPBDJointUtilities::GetLinearStiffness(param_4,param_5);
  local_3b0 = *(double *)&this->ConnectorXs[param_2].field_0x10 -
              *(double *)&this->ConnectorXs[param_1].field_0x10;
  local_3b8 = *(double *)&this->ConnectorXs[param_2].field_0x8 -
              *(double *)&this->ConnectorXs[param_1].field_0x8;
  local_3c0 = *(double *)(this->ConnectorXs + param_2) - *(double *)(this->ConnectorXs + param_1);
  dVar6 = dVar6 * dVar2;
  if (6 < (byte)LogChaosJoint._0_1_) {
    auVar23._0_8_ = local_3b0 * local_3b0;
    auVar23._8_8_ = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_3b8 * local_3b8 + local_3c0 * local_3c0 + auVar23._0_8_;
    sqrtpd(auVar23,auVar3);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  local_388 = local_3c0 * local_3c0 + local_3b8 * local_3b8 + local_3b0 * local_3b0;
  if (this->PositionTolerance * this->PositionTolerance < local_388) {
    if (bChaos_Joint_ISPC_Enabled == false) {
      local_3c8 = this->InvMs[param_2];
      puVar1 = &this->InvIs[param_2].field_0x10;
      local_368[0]._16_8_ = *(undefined8 *)puVar1;
      local_368[0]._24_8_ = *(undefined8 *)(puVar1 + 8);
      local_368[0]._0_8_ = *(undefined8 *)(this->InvIs + param_2);
      local_368[0]._8_8_ = *(undefined8 *)&this->InvIs[param_2].field_0x8;
      puVar1 = &this->InvIs[param_2].field_0x20;
      local_368[0]._32_8_ = *(undefined8 *)puVar1;
      local_368[0]._40_8_ = *(undefined8 *)(puVar1 + 8);
      puVar1 = &this->InvIs[param_2].field_0x30;
      local_368[0]._48_8_ = *(undefined8 *)puVar1;
      local_368[0]._56_8_ = *(undefined8 *)(puVar1 + 8);
      puVar1 = &this->InvIs[param_2].field_0x40;
      local_368[0]._64_8_ = *(undefined8 *)puVar1;
      local_368[0]._72_8_ = *(undefined8 *)(puVar1 + 8);
      puVar1 = &this->InvIs[param_2].field_0x50;
      local_368[0]._80_8_ = *(undefined8 *)puVar1;
      local_368[0]._88_8_ = *(undefined8 *)(puVar1 + 8);
      puVar1 = &this->InvIs[param_2].field_0x60;
      local_368[0]._96_8_ = *(undefined8 *)puVar1;
      local_368[0]._104_8_ = *(undefined8 *)(puVar1 + 8);
      puVar1 = &this->InvIs[param_2].field_0x70;
      local_368[0]._112_8_ = *(undefined8 *)puVar1;
      local_368[0]._120_8_ = *(undefined8 *)(puVar1 + 8);
      pFVar18 = Body(this,param_2);
      pFVar4 = pFVar18->Body;
      local_3a8._8_8_ =
           *(double *)&this->ConnectorXs[param_2].field_0x8 -
           ((double)*(float *)&(pFVar4->State).DP.field_0x4 +
           *(double *)&(pFVar4->State).P.field_0x8);
      local_3a8._0_8_ =
           *(double *)(this->ConnectorXs + param_2) -
           ((double)*(float *)&(pFVar4->State).DP + *(double *)&(pFVar4->State).P);
      local_398 = *(double *)&this->ConnectorXs[param_2].field_0x10 -
                  ((double)*(float *)&(pFVar4->State).DP.field_0x8 +
                  *(double *)&(pFVar4->State).P.field_0x10);
      Utilities::ComputeJointFactorMatrix<double>
                ((PMatrix<double,3,3> *)&local_168,(TVector<double,3> *)local_3a8,local_368,
                 &local_3c8);
      pTVar19 = UE::Math::TMatrix<double>::Inverse(&local_168,&local_1e8);
      auVar3 = *(undefined1 (*) [16])pTVar19->M[1];
      auVar23 = *(undefined1 (*) [16])(pTVar19->M[1] + 2);
      local_3c8 = (auVar3._0_8_ * local_3b8 + pTVar19->M[0][0] * local_3c0 +
                  pTVar19->M[2][0] * local_3b0) * dVar6;
      uVar26 = (uint)__xmm_80000000000000008000000000000000;
      uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar28 = SUB84(local_3c8,0) ^ uVar26;
      uVar29 = (uint)((ulonglong)local_3c8 >> 0x20) ^ uVar27;
      dVar2 = (auVar23._0_8_ * local_3b8 + pTVar19->M[0][2] * local_3c0 +
              pTVar19->M[2][2] * local_3b0) * dVar6;
      dVar6 = (auVar3._8_8_ * local_3b8 + pTVar19->M[0][1] * local_3c0 +
              pTVar19->M[2][1] * local_3b0) * dVar6;
      local_3a8._8_4_ = auVar23._8_4_;
      local_3a8._0_8_ = dVar2;
      local_3a8._12_4_ = auVar23._12_4_;
      uVar24 = SUB84(dVar2,0) ^ uVar26;
      uVar25 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar27;
      uVar30 = SUB84(this->InvMs[param_2],0) ^ uVar26;
      uVar31 = (uint)((ulonglong)this->InvMs[param_2] >> 0x20) ^ uVar27;
      local_378._8_4_ = auVar3._8_4_;
      local_378._0_8_ = dVar6;
      local_378._12_4_ = auVar3._12_4_;
      uVar26 = SUB84(dVar6,0) ^ uVar26;
      uVar27 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar27;
      pFVar18 = Body(this,param_2);
      pFVar4 = pFVar18->Body;
      dVar8 = *(double *)&this->InvIs[param_2].field_0x10;
      dVar9 = *(double *)&this->InvIs[param_2].field_0x30;
      dVar10 = *(double *)&this->InvIs[param_2].field_0x50;
      dVar6 = *(double *)&this->ConnectorXs[param_2].field_0x10 -
              ((double)*(float *)&(pFVar4->State).DP.field_0x8 +
              *(double *)&(pFVar4->State).P.field_0x10);
      dVar22 = *(double *)&this->ConnectorXs[param_2].field_0x8 -
               ((double)*(float *)&(pFVar4->State).DP.field_0x4 +
               *(double *)&(pFVar4->State).P.field_0x8);
      dVar7 = *(double *)(this->ConnectorXs + param_2) -
              ((double)*(float *)&(pFVar4->State).DP + *(double *)&(pFVar4->State).P);
      puVar1 = &this->InvIs[param_2].field_0x20;
      dVar11 = *(double *)puVar1;
      dVar12 = *(double *)(puVar1 + 8);
      dVar2 = dVar22 * (double)CONCAT44(uVar25,uVar24) - dVar6 * (double)CONCAT44(uVar27,uVar26);
      puVar1 = &this->InvIs[param_2].field_0x40;
      dVar13 = *(double *)puVar1;
      dVar14 = *(double *)(puVar1 + 8);
      dVar15 = *(double *)(this->InvIs + param_2);
      dVar16 = *(double *)&this->InvIs[param_2].field_0x8;
      dVar6 = dVar6 * (double)CONCAT44(uVar29,uVar28) - dVar7 * (double)CONCAT44(uVar25,uVar24);
      dVar7 = dVar7 * (double)CONCAT44(uVar27,uVar26) - dVar22 * (double)CONCAT44(uVar29,uVar28);
      pFVar18 = Body(this,param_2);
      pFVar4 = pFVar18->Body;
      *(float *)&(pFVar4->State).DP =
           (float)(local_3c8 * (double)CONCAT44(uVar31,uVar30)) + *(float *)&(pFVar4->State).DP;
      *(float *)&(pFVar4->State).DP.field_0x4 =
           (float)((double)local_378._0_8_ * (double)CONCAT44(uVar31,uVar30)) +
           *(float *)&(pFVar4->State).DP.field_0x4;
      *(float *)&(pFVar4->State).DP.field_0x8 =
           (float)((double)local_3a8._0_8_ * (double)CONCAT44(uVar31,uVar30)) +
           *(float *)&(pFVar4->State).DP.field_0x8;
      *(float *)&(pFVar4->State).DQ =
           (float)(dVar11 * dVar6 + dVar15 * dVar2 + dVar13 * dVar7) + *(float *)&(pFVar4->State).DQ
      ;
      *(float *)&(pFVar4->State).DQ.field_0x4 =
           (float)(dVar12 * dVar6 + dVar16 * dVar2 + dVar14 * dVar7) +
           *(float *)&(pFVar4->State).DQ.field_0x4;
      *(float *)&(pFVar4->State).DQ.field_0x8 =
           (float)(dVar9 * dVar6 + dVar8 * dVar2 + dVar10 * dVar7) +
           *(float *)&(pFVar4->State).DQ.field_0x8;
      UpdateDerivedState(this,param_2);
      if (param_1 != 0) {
        uVar26 = (uint)__xmm_80000000000000008000000000000000;
        uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_3c8 = (double)CONCAT44((uint)((ulonglong)local_3c8 >> 0x20) ^ uVar27,
                                     SUB84(local_3c8,0) ^ uVar26);
        local_378._0_4_ = local_378._0_4_ ^ uVar26;
        local_378._4_4_ = local_378._4_4_ ^ uVar27;
        local_3a8._0_4_ = local_3a8._0_4_ ^ uVar26;
        local_3a8._4_4_ = local_3a8._4_4_ ^ uVar27;
      }
      dVar2 = *(double *)&(this->NetLinearImpulse).field_0x8;
      dVar6 = *(double *)&(this->NetLinearImpulse).field_0x10;
      *(double *)&this->NetLinearImpulse = local_3c8 + *(double *)&this->NetLinearImpulse;
      *(double *)&(this->NetLinearImpulse).field_0x8 =
           (double)CONCAT44(local_378._4_4_,local_378._0_4_) + dVar2;
      *(double *)&(this->NetLinearImpulse).field_0x10 =
           (double)CONCAT44(local_3a8._4_4_,local_3a8._0_4_) + dVar6;
    }
    else {
      local_3d8 = dVar6;
      ::ApplyPointPositionConstraintKD(this,param_1,param_2,&local_3c0);
    }
    dVar2 = this->LinearViolationSq;
    uVar20 = SUB84(dVar2,0);
    uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar2 <= local_388) {
      uVar20 = SUB84(local_388,0);
      uVar21 = (undefined4)((ulonglong)local_388 >> 0x20);
    }
    this->LinearViolationSq = (double)CONCAT44(uVar21,uVar20);
  }
  return;
}

// ApplyPointProjection @ 143b90cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointSolver::ApplyPointProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6)

{
  float fVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  TMatrix<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  undefined1 auStack_388 [32];
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  PMatrix<double,3,3> local_338;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_350 = *(double *)&this->ConnectorXs[1].field_0x8;
  dVar7 = local_350 - *(double *)&this->ConnectorXs[0].field_0x8;
  local_348 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar8 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
  dVar6 = local_348 - *(double *)&this->ConnectorXs[0].field_0x10;
  auVar17._0_8_ = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
  auVar17._8_8_ = 0;
  auVar17 = sqrtpd(auVar17,auVar17);
  if (0.0 < auVar17._0_8_) {
    pFVar2 = this->SolverBodies[1].Body;
    local_368 = this->InvMs[1];
    local_338._16_8_ = *(undefined8 *)&this->InvIs[1].field_0x10;
    local_338._24_8_ = *(undefined8 *)&this->InvIs[1].field_0x18;
    local_358 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar2->State).P;
    local_350 = local_350 - *(double *)&(pFVar2->State).P.field_0x8;
    local_348 = local_348 - *(double *)&(pFVar2->State).P.field_0x10;
    local_338._0_8_ = *(undefined8 *)(this->InvIs + 1);
    local_338._8_8_ = *(undefined8 *)&this->InvIs[1].field_0x8;
    local_338._32_8_ = *(undefined8 *)&this->InvIs[1].field_0x20;
    local_338._40_8_ = *(undefined8 *)&this->InvIs[1].field_0x28;
    local_338._48_8_ = *(undefined8 *)&this->InvIs[1].field_0x30;
    local_338._56_8_ = *(undefined8 *)&this->InvIs[1].field_0x38;
    local_338._64_8_ = *(undefined8 *)&this->InvIs[1].field_0x40;
    local_338._72_8_ = *(undefined8 *)&this->InvIs[1].field_0x48;
    local_338._80_8_ = *(undefined8 *)&this->InvIs[1].field_0x50;
    local_338._88_8_ = *(undefined8 *)&this->InvIs[1].field_0x58;
    local_338._96_8_ = *(undefined8 *)&this->InvIs[1].field_0x60;
    local_338._104_8_ = *(undefined8 *)&this->InvIs[1].field_0x68;
    local_338._112_8_ = *(undefined8 *)&this->InvIs[1].field_0x70;
    local_338._120_8_ = *(undefined8 *)&this->InvIs[1].field_0x78;
    Utilities::ComputeJointFactorMatrix<double>
              ((PMatrix<double,3,3> *)&local_138,(TVector<double,3> *)&local_358,&local_338,
               &local_368);
    pTVar13 = UE::Math::TMatrix<double>::Inverse(&local_138,&local_1b8);
    local_2b8 = pTVar13->M[0][0];
    dStack_2b0 = pTVar13->M[0][1];
    local_298 = pTVar13->M[1][0];
    dStack_290 = pTVar13->M[1][1];
    local_278 = pTVar13->M[2][0];
    dStack_270 = pTVar13->M[2][1];
    local_258 = pTVar13->M[3][0];
    dStack_250 = pTVar13->M[3][1];
    local_2a8 = pTVar13->M[0][2];
    dStack_2a0 = pTVar13->M[0][3];
    local_288 = pTVar13->M[1][2];
    dStack_280 = pTVar13->M[1][3];
    local_268 = pTVar13->M[2][2];
    dStack_260 = pTVar13->M[2][3];
    local_248 = pTVar13->M[3][2];
    dStack_240 = pTVar13->M[3][3];
    dVar5 = local_298 * dVar7 + local_2b8 * dVar8 + local_278 * dVar6;
    dVar4 = param_4 * this->InvMs[1];
    uVar14 = SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)dVar4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar4 = dStack_290 * dVar7 + dStack_2b0 * dVar8 + dStack_270 * dVar6;
    dVar8 = local_288 * dVar7 + local_2a8 * dVar8 + local_268 * dVar6;
    pFVar2 = this->SolverBodies[1].Body;
    uVar18 = SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)param_4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_360 = dVar8 * (double)CONCAT44(uVar15,uVar14);
    dVar10 = dVar5 * (double)CONCAT44(uVar15,uVar14);
    dVar11 = dVar4 * (double)CONCAT44(uVar15,uVar14);
    dVar7 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar2->State).P.field_0x8;
    dVar16 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar2->State).P;
    dVar6 = *(double *)&this->ConnectorXs[1].field_0x10 - *(double *)&(pFVar2->State).P.field_0x10;
    local_208 = *(double *)&this->InvIs[1].field_0x30;
    uStack_200 = *(undefined8 *)&this->InvIs[1].field_0x38;
    dVar9 = dVar4 * dVar16 - dVar5 * dVar7;
    dVar7 = dVar8 * dVar7 - dVar4 * dVar6;
    local_238 = *(double *)(this->InvIs + 1);
    dStack_230 = *(double *)&this->InvIs[1].field_0x8;
    dVar6 = dVar5 * dVar6 - dVar8 * dVar16;
    local_218 = *(double *)&this->InvIs[1].field_0x20;
    dStack_210 = *(double *)&this->InvIs[1].field_0x28;
    local_1f8 = *(double *)&this->InvIs[1].field_0x40;
    dStack_1f0 = *(double *)&this->InvIs[1].field_0x48;
    local_1d8 = *(undefined8 *)&this->InvIs[1].field_0x60;
    uStack_1d0 = *(undefined8 *)&this->InvIs[1].field_0x68;
    local_228 = *(double *)&this->InvIs[1].field_0x10;
    uStack_220 = *(undefined8 *)&this->InvIs[1].field_0x18;
    local_1e8 = *(double *)&this->InvIs[1].field_0x50;
    uStack_1e0 = *(undefined8 *)&this->InvIs[1].field_0x58;
    dVar8 = (dStack_210 * dVar6 + dStack_230 * dVar7 + dStack_1f0 * dVar9) *
            (double)CONCAT44(uVar19,uVar18);
    dVar4 = (local_218 * dVar6 + local_238 * dVar7 + local_1f8 * dVar9) *
            (double)CONCAT44(uVar19,uVar18);
    local_1c8 = *(undefined8 *)&this->InvIs[1].field_0x70;
    uStack_1c0 = *(undefined8 *)&this->InvIs[1].field_0x78;
    dVar6 = (local_208 * dVar6 + local_228 * dVar7 + local_1e8 * dVar9) *
            (double)CONCAT44(uVar19,uVar18);
    if (pFVar2 == (FSolverBody *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x26,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar7 = local_360;
    pFVar2 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 =
         (float)dVar11 + *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = (float)dVar10 + fVar1;
    *(float *)&(pFVar2->State).DP.field_0x8 =
         (float)local_360 + *(float *)&(pFVar2->State).DP.field_0x8;
    *(float *)&(pFVar2->State).DQ = (float)dVar4 + *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 = (float)dVar8 + *(float *)&(pFVar2->State).DQ.field_0x4
    ;
    *(float *)&(pFVar2->State).DQ.field_0x8 = (float)dVar6 + *(float *)&(pFVar2->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)param_5 = dVar10 + *(double *)param_5;
    *(double *)&param_5->field_0x8 = dVar11 + *(double *)&param_5->field_0x8;
    *(double *)&param_5->field_0x10 = dVar7 + *(double *)&param_5->field_0x10;
    *(double *)param_6 = dVar4 + *(double *)param_6;
    *(double *)&param_6->field_0x8 = dVar8 + *(double *)&param_6->field_0x8;
    *(double *)&param_6->field_0x10 = dVar6 + *(double *)&param_6->field_0x10;
  }
  return;
}

// ApplyPointVelocityConstraint @ 143b91200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyPointVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  FSolverBody *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  PMatrix<double,3,3> *pPVar19;
  TMatrix<double> *pTVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  uint uVar54;
  undefined4 uVar55;
  uint uVar56;
  undefined4 uVar57;
  uint uVar58;
  undefined4 uVar59;
  uint uVar60;
  undefined1 auStackY_788 [32];
  double local_748;
  double local_738 [2];
  double local_728;
  undefined8 uStack_720;
  double local_718 [2];
  double local_708;
  double dStack_700;
  double local_6f8;
  double local_6e8;
  double local_6e0;
  double local_6d8;
  double local_6d0;
  double local_6c8;
  double local_6c0;
  double local_6b8;
  double local_6b0;
  double local_6a8;
  double local_6a0;
  double local_698;
  double local_690;
  double local_688;
  double local_680;
  double local_678;
  undefined4 local_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  PMatrix<double,3,3> local_648;
  PMatrix<double,3,3> local_5c8 [6];
  PMatrix<double,3,3> local_2c8;
  PMatrix<double,3,3> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_788;
  uVar21 = (uint)*(undefined8 *)&this->NetLinearImpulse &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)*(undefined8 *)&this->NetLinearImpulse >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar22,uVar21) &&
        (double)CONCAT44(uVar22,uVar21) != __real_3f1a36e2e0000000) ||
      (uVar6 = *(undefined8 *)&(this->NetLinearImpulse).field_0x8,
      uVar21 = (uint)uVar6 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar22 = (uint)((ulonglong)uVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar22,uVar21) &&
      (double)CONCAT44(uVar22,uVar21) != __real_3f1a36e2e0000000)) ||
     (uVar6 = *(undefined8 *)&(this->NetLinearImpulse).field_0x10,
     uVar21 = (uint)uVar6 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar22 = (uint)((ulonglong)uVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar22,uVar21) &&
     (double)CONCAT44(uVar22,uVar21) != __real_3f1a36e2e0000000)) {
    bVar18 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
    if (!bVar18) {
      dVar7 = this->SolverStiffness;
      dVar10 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
      dVar10 = dVar10 * dVar7;
      if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                            ,0x2e,L"");
        if (bVar18) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar8 = this->SolverBodies[0].Body;
      fVar1 = *(float *)&(pFVar8->State).V;
      fVar2 = *(float *)&(pFVar8->State).V.field_0x4;
      fVar3 = *(float *)&(pFVar8->State).V.field_0x8;
      dVar7 = *(double *)&this->ConnectorXs[0].field_0x10 - *(double *)&(pFVar8->State).P.field_0x10
      ;
      dVar12 = *(double *)&this->ConnectorXs[0].field_0x8 - *(double *)&(pFVar8->State).P.field_0x8;
      dVar25 = *(double *)this->ConnectorXs - *(double *)&(pFVar8->State).P;
      if (pFVar8 == (FSolverBody *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                            ,0x2e,L"");
        if (bVar18) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar8 = this->SolverBodies[0].Body;
      dVar15 = (double)*(float *)&(pFVar8->State).W.field_0x8;
      dVar27 = (double)*(float *)&(pFVar8->State).W;
      dVar23 = (double)*(float *)&(pFVar8->State).W.field_0x4;
      if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                            ,0x2e,L"");
        if (bVar18) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar8 = this->SolverBodies[1].Body;
      fVar4 = *(float *)&(pFVar8->State).V.field_0x4;
      fVar5 = *(float *)&(pFVar8->State).V;
      dVar16 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar8->State).P.field_0x10;
      dVar17 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar8->State).P.field_0x8;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar8->State).P;
      local_718[0] = (double)*(float *)&(pFVar8->State).V.field_0x8;
      if (pFVar8 == (FSolverBody *)0x0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                            ,0x2e,L"");
        if (bVar18) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      pFVar8 = this->SolverBodies[1].Body;
      dVar13 = (double)*(float *)&(pFVar8->State).W.field_0x4;
      dVar24 = (double)*(float *)&(pFVar8->State).W;
      dVar26 = (double)*(float *)&(pFVar8->State).W.field_0x8;
      dVar14 = ((dVar24 * dVar17 - dVar11 * dVar13) + local_718[0]) -
               ((dVar27 * dVar12 - dVar23 * dVar25) + (double)fVar3);
      dVar25 = ((dVar11 * dVar26 - dVar24 * dVar16) + (double)fVar4) -
               ((dVar15 * dVar25 - dVar7 * dVar27) + (double)fVar2);
      dVar7 = ((dVar13 * dVar16 - dVar26 * dVar17) + (double)fVar5) -
              ((dVar7 * dVar23 - dVar15 * dVar12) + (double)fVar1);
      if (6 < (byte)LogChaosJoint._0_1_) {
        auVar28._0_8_ = dVar7 * dVar7 + dVar25 * dVar25 + dVar14 * dVar14;
        auVar28._8_8_ = 0;
        sqrtpd(auVar28,auVar28);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
      }
      dVar12 = __real_3e45798ee0000000;
      local_718[0]._0_4_ = PMatrix<double,3,3>::Zero._0_4_;
      local_718[0]._0_4_ = PMatrix<double,3,3>::Zero._0_4_;
      local_718[0]._4_4_ = PMatrix<double,3,3>::Zero._4_4_;
      local_718[1]._0_4_ = PMatrix<double,3,3>::Zero._8_4_;
      local_718[1]._4_4_ = PMatrix<double,3,3>::Zero._12_4_;
      local_668 = PMatrix<double,3,3>::Zero._32_4_;
      uStack_664 = PMatrix<double,3,3>::Zero._36_4_;
      uStack_660 = PMatrix<double,3,3>::Zero._40_4_;
      uStack_65c = PMatrix<double,3,3>::Zero._44_4_;
      local_658 = PMatrix<double,3,3>::Zero._64_4_;
      uStack_654 = PMatrix<double,3,3>::Zero._68_4_;
      uStack_650 = PMatrix<double,3,3>::Zero._72_4_;
      uStack_64c = PMatrix<double,3,3>::Zero._76_4_;
      local_738[0] = (double)PMatrix<double,3,3>::Zero._80_8_;
      local_738[1] = (double)PMatrix<double,3,3>::Zero._88_8_;
      local_728 = (double)CONCAT44(PMatrix<double,3,3>::Zero._20_4_,PMatrix<double,3,3>::Zero._16_4_
                                  );
      uStack_720 = CONCAT44(PMatrix<double,3,3>::Zero._28_4_,PMatrix<double,3,3>::Zero._24_4_);
      local_748 = (double)CONCAT44(PMatrix<double,3,3>::Zero._52_4_,PMatrix<double,3,3>::Zero._48_4_
                                  );
      local_708 = (double)PMatrix<double,3,3>::Zero._80_8_;
      dStack_700 = (double)PMatrix<double,3,3>::Zero._88_8_;
      uVar41 = PMatrix<double,3,3>::Zero._0_4_;
      uVar42 = PMatrix<double,3,3>::Zero._4_4_;
      uVar43 = PMatrix<double,3,3>::Zero._8_4_;
      uVar44 = PMatrix<double,3,3>::Zero._12_4_;
      uVar45 = PMatrix<double,3,3>::Zero._32_4_;
      uVar46 = PMatrix<double,3,3>::Zero._36_4_;
      uVar47 = PMatrix<double,3,3>::Zero._40_4_;
      uVar48 = PMatrix<double,3,3>::Zero._44_4_;
      uVar49 = PMatrix<double,3,3>::Zero._64_4_;
      uVar50 = PMatrix<double,3,3>::Zero._68_4_;
      uVar51 = PMatrix<double,3,3>::Zero._72_4_;
      uVar52 = PMatrix<double,3,3>::Zero._76_4_;
      uVar53 = PMatrix<double,3,3>::Zero._16_4_;
      uVar55 = PMatrix<double,3,3>::Zero._20_4_;
      uVar57 = PMatrix<double,3,3>::Zero._48_4_;
      uVar59 = PMatrix<double,3,3>::Zero._52_4_;
      if (__real_3e45798ee0000000 < this->InvMs[0]) {
        pFVar8 = this->SolverBodies[0].Body;
        local_648._16_8_ = *(undefined8 *)&this->InvIs[0].field_0x10;
        local_648._24_8_ = *(undefined8 *)&this->InvIs[0].field_0x18;
        local_648._0_8_ = *(undefined8 *)this->InvIs;
        local_648._8_8_ = *(undefined8 *)&this->InvIs[0].field_0x8;
        local_648._48_8_ = *(undefined8 *)&this->InvIs[0].field_0x30;
        local_648._56_8_ = *(undefined8 *)&this->InvIs[0].field_0x38;
        local_648._32_8_ = *(undefined8 *)&this->InvIs[0].field_0x20;
        local_648._40_8_ = *(undefined8 *)&this->InvIs[0].field_0x28;
        local_648._80_8_ = *(undefined8 *)&this->InvIs[0].field_0x50;
        local_648._88_8_ = *(undefined8 *)&this->InvIs[0].field_0x58;
        local_648._64_8_ = *(undefined8 *)&this->InvIs[0].field_0x40;
        local_648._72_8_ = *(undefined8 *)&this->InvIs[0].field_0x48;
        local_648._112_8_ = *(undefined8 *)&this->InvIs[0].field_0x70;
        local_648._120_8_ = *(undefined8 *)&this->InvIs[0].field_0x78;
        local_648._96_8_ = *(undefined8 *)&this->InvIs[0].field_0x60;
        local_648._104_8_ = *(undefined8 *)&this->InvIs[0].field_0x68;
        local_6e0 = *(double *)&this->ConnectorXs[0].field_0x8 -
                    *(double *)&(pFVar8->State).P.field_0x8;
        local_6e8 = *(double *)this->ConnectorXs - *(double *)&(pFVar8->State).P;
        local_6d8 = *(double *)&this->ConnectorXs[0].field_0x10 -
                    *(double *)&(pFVar8->State).P.field_0x10;
        local_738[0] = this->InvMs[0];
        pPVar19 = Utilities::ComputeJointFactorMatrix<double>
                            (&local_2c8,(TVector<double,3> *)&local_6e8,&local_648,local_738);
        local_738[0] = *(double *)&pPVar19->field_0x50;
        local_738[1] = *(double *)&pPVar19->field_0x58;
        uVar41 = *(undefined4 *)pPVar19;
        uVar42 = *(undefined4 *)&pPVar19->field_0x4;
        uVar43 = *(undefined4 *)&pPVar19->field_0x8;
        uVar44 = *(undefined4 *)&pPVar19->field_0xc;
        uVar53 = *(undefined4 *)&pPVar19->field_0x10;
        uVar55 = *(undefined4 *)&pPVar19->field_0x14;
        uVar45 = *(undefined4 *)&pPVar19->field_0x20;
        uVar46 = *(undefined4 *)&pPVar19->field_0x24;
        uVar47 = *(undefined4 *)&pPVar19->field_0x28;
        uVar48 = *(undefined4 *)&pPVar19->field_0x2c;
        uVar57 = *(undefined4 *)&pPVar19->field_0x30;
        uVar59 = *(undefined4 *)&pPVar19->field_0x34;
        uVar49 = *(undefined4 *)&pPVar19->field_0x40;
        uVar50 = *(undefined4 *)&pPVar19->field_0x44;
        uVar51 = *(undefined4 *)&pPVar19->field_0x48;
        uVar52 = *(undefined4 *)&pPVar19->field_0x4c;
      }
      uVar29 = local_718[0]._0_4_;
      uVar30 = local_718[0]._4_4_;
      uVar31 = local_718[1]._0_4_;
      uVar32 = local_718[1]._4_4_;
      uVar33 = local_668;
      uVar34 = uStack_664;
      uVar35 = uStack_660;
      uVar36 = uStack_65c;
      uVar37 = local_658;
      uVar38 = uStack_654;
      uVar39 = uStack_650;
      uVar40 = uStack_64c;
      local_148.M[2][2] = local_708;
      if (dVar12 < this->InvMs[1]) {
        pFVar8 = this->SolverBodies[1].Body;
        local_5c8[0]._16_8_ = *(undefined8 *)&this->InvIs[1].field_0x10;
        local_5c8[0]._24_8_ = *(undefined8 *)&this->InvIs[1].field_0x18;
        local_5c8[0]._0_8_ = *(undefined8 *)(this->InvIs + 1);
        local_5c8[0]._8_8_ = *(undefined8 *)&this->InvIs[1].field_0x8;
        local_5c8[0]._48_8_ = *(undefined8 *)&this->InvIs[1].field_0x30;
        local_5c8[0]._56_8_ = *(undefined8 *)&this->InvIs[1].field_0x38;
        local_5c8[0]._32_8_ = *(undefined8 *)&this->InvIs[1].field_0x20;
        local_5c8[0]._40_8_ = *(undefined8 *)&this->InvIs[1].field_0x28;
        local_5c8[0]._80_8_ = *(undefined8 *)&this->InvIs[1].field_0x50;
        local_5c8[0]._88_8_ = *(undefined8 *)&this->InvIs[1].field_0x58;
        local_5c8[0]._64_8_ = *(undefined8 *)&this->InvIs[1].field_0x40;
        local_5c8[0]._72_8_ = *(undefined8 *)&this->InvIs[1].field_0x48;
        local_5c8[0]._112_8_ = *(undefined8 *)&this->InvIs[1].field_0x70;
        local_5c8[0]._120_8_ = *(undefined8 *)&this->InvIs[1].field_0x78;
        local_5c8[0]._96_8_ = *(undefined8 *)&this->InvIs[1].field_0x60;
        local_5c8[0]._104_8_ = *(undefined8 *)&this->InvIs[1].field_0x68;
        dStack_700 = *(double *)&this->ConnectorXs[1].field_0x8 -
                     *(double *)&(pFVar8->State).P.field_0x8;
        local_708 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar8->State).P;
        local_6f8 = *(double *)&this->ConnectorXs[1].field_0x10 -
                    *(double *)&(pFVar8->State).P.field_0x10;
        local_728 = this->InvMs[1];
        pPVar19 = Utilities::ComputeJointFactorMatrix<double>
                            (&local_248,(TVector<double,3> *)&local_708,local_5c8,&local_728);
        local_728 = *(double *)&pPVar19->field_0x10;
        uStack_720 = *(undefined8 *)&pPVar19->field_0x18;
        uVar29 = *(undefined4 *)pPVar19;
        uVar30 = *(undefined4 *)&pPVar19->field_0x4;
        uVar31 = *(undefined4 *)&pPVar19->field_0x8;
        uVar32 = *(undefined4 *)&pPVar19->field_0xc;
        uVar33 = *(undefined4 *)&pPVar19->field_0x20;
        uVar34 = *(undefined4 *)&pPVar19->field_0x24;
        uVar35 = *(undefined4 *)&pPVar19->field_0x28;
        uVar36 = *(undefined4 *)&pPVar19->field_0x2c;
        uVar37 = *(undefined4 *)&pPVar19->field_0x40;
        uVar38 = *(undefined4 *)&pPVar19->field_0x44;
        uVar39 = *(undefined4 *)&pPVar19->field_0x48;
        uVar40 = *(undefined4 *)&pPVar19->field_0x4c;
        local_148.M[2][2] = *(double *)&pPVar19->field_0x50;
        local_748 = *(double *)&pPVar19->field_0x30;
      }
      local_148.M[0][2] = (double)CONCAT44(uVar55,uVar53) + local_728;
      local_148.M[1][2] = (double)CONCAT44(uVar59,uVar57) + local_748;
      local_148.M[3][2] = ___xmm_3ff00000000000000000000000000000;
      local_148.M[3][3] = _UNK_15061cbc8;
      local_148.M[0][0] = (double)CONCAT44(uVar42,uVar41) + (double)CONCAT44(uVar30,uVar29);
      local_148.M[0][1] = (double)CONCAT44(uVar44,uVar43) + (double)CONCAT44(uVar32,uVar31);
      local_148.M[1][0] = (double)CONCAT44(uVar46,uVar45) + (double)CONCAT44(uVar34,uVar33);
      local_148.M[1][1] = (double)CONCAT44(uVar48,uVar47) + (double)CONCAT44(uVar36,uVar35);
      local_148.M[2][0] = (double)CONCAT44(uVar50,uVar49) + (double)CONCAT44(uVar38,uVar37);
      local_148.M[2][1] = (double)CONCAT44(uVar52,uVar51) + (double)CONCAT44(uVar40,uVar39);
      local_148.M[2][2] = local_738[0] + local_148.M[2][2];
      local_148.M[0][3] = 0.0;
      local_148.M[1][3] = 0.0;
      local_148.M[2][3] = 0.0;
      local_148.M[3][0] = 0.0;
      local_148.M[3][1] = 0.0;
      pTVar20 = UE::Math::TMatrix<double>::Inverse(&local_148,&local_1c8);
      uVar54 = (uint)__xmm_80000000000000008000000000000000;
      uVar56 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar27 = (dVar7 * pTVar20->M[0][0] + dVar25 * pTVar20->M[1][0] + dVar14 * pTVar20->M[2][0]) *
               dVar10;
      local_680 = this->InvMs[0];
      local_688 = dVar27 * local_680;
      dVar12 = (dVar7 * pTVar20->M[0][2] + dVar25 * pTVar20->M[1][2] + dVar14 * pTVar20->M[2][2]) *
               dVar10;
      dVar10 = (dVar7 * pTVar20->M[0][1] + dVar25 * pTVar20->M[1][1] + dVar14 * pTVar20->M[2][1]) *
               dVar10;
      local_678 = dVar12 * local_680;
      local_680 = dVar10 * local_680;
      uVar21 = SUB84(this->InvMs[1],0) ^ uVar54;
      uVar22 = (uint)((ulonglong)this->InvMs[1] >> 0x20) ^ uVar56;
      pFVar8 = this->SolverBodies[0].Body;
      dVar15 = *(double *)&this->ConnectorXs[0].field_0x10 -
               *(double *)&(pFVar8->State).P.field_0x10;
      dVar25 = *(double *)this->ConnectorXs - *(double *)&(pFVar8->State).P;
      local_6b8 = (double)CONCAT44(uVar22,uVar21) * dVar27;
      local_6b0 = (double)CONCAT44(uVar22,uVar21) * dVar10;
      local_6a8 = (double)CONCAT44(uVar22,uVar21) * dVar12;
      dVar23 = *(double *)&this->ConnectorXs[0].field_0x8 - *(double *)&(pFVar8->State).P.field_0x8;
      pFVar8 = this->SolverBodies[1].Body;
      uVar58 = SUB84(dVar27,0) ^ uVar54;
      uVar60 = (uint)((ulonglong)dVar27 >> 0x20) ^ uVar56;
      dVar7 = dVar23 * dVar12 - dVar15 * dVar10;
      uVar21 = SUB84(dVar10,0) ^ uVar54;
      uVar22 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar56;
      dVar15 = dVar15 * dVar27 - dVar25 * dVar12;
      dVar10 = dVar25 * dVar10 - dVar23 * dVar27;
      local_6a0 = dVar15 * *(double *)&this->InvIs[0].field_0x20 + dVar7 * *(double *)this->InvIs +
                  dVar10 * *(double *)&this->InvIs[0].field_0x40;
      dVar27 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar56,SUB84(dVar12,0) ^ uVar54)
      ;
      local_698 = dVar15 * *(double *)&this->InvIs[0].field_0x28 +
                  dVar7 * *(double *)&this->InvIs[0].field_0x8 +
                  dVar10 * *(double *)&this->InvIs[0].field_0x48;
      dVar25 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar8->State).P.field_0x8;
      local_690 = dVar15 * *(double *)&this->InvIs[0].field_0x30 +
                  dVar7 * *(double *)&this->InvIs[0].field_0x10 +
                  dVar10 * *(double *)&this->InvIs[0].field_0x50;
      dVar10 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar8->State).P;
      dVar12 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar8->State).P.field_0x10;
      dVar7 = dVar25 * dVar27 - dVar12 * (double)CONCAT44(uVar22,uVar21);
      dVar12 = dVar12 * (double)CONCAT44(uVar60,uVar58) - dVar10 * dVar27;
      dVar10 = dVar10 * (double)CONCAT44(uVar22,uVar21) - dVar25 * (double)CONCAT44(uVar60,uVar58);
      local_6d0 = dVar12 * *(double *)&this->InvIs[1].field_0x20 +
                  dVar7 * *(double *)(this->InvIs + 1) +
                  dVar10 * *(double *)&this->InvIs[1].field_0x40;
      local_6c8 = dVar12 * *(double *)&this->InvIs[1].field_0x28 +
                  dVar7 * *(double *)&this->InvIs[1].field_0x8 +
                  dVar10 * *(double *)&this->InvIs[1].field_0x48;
      local_6c0 = dVar12 * *(double *)&this->InvIs[1].field_0x30 +
                  dVar7 * *(double *)&this->InvIs[1].field_0x10 +
                  dVar10 * *(double *)&this->InvIs[1].field_0x50;
      ApplyVelocityDelta(this,(TVector<double,3> *)&local_688,(TVector<double,3> *)&local_6a0,
                         (TVector<double,3> *)&local_6b8,(TVector<double,3> *)&local_6d0);
    }
  }
  return;
}

// ApplyPositionConstraint @ 143b91ca0

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionConstraint
          (FPBDJointSolver *this,double param_1,TVector<double,3> *param_2,double param_3,
          TVector<double,3> *param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FSolverBody *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double local_268;
  double dStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  dVar1 = *(double *)&this->ConnectorXs[0].field_0x8;
  dVar2 = *(double *)&this->ConnectorXs[0].field_0x10;
  dVar3 = this->SolverStiffness;
  dVar4 = *(double *)param_4;
  dVar5 = *(double *)this->ConnectorXs;
  dVar6 = *(double *)&param_4->field_0x10;
  dVar7 = *(double *)&param_4->field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar17) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[0].Body;
  dVar4 = (dVar4 + dVar5) - ((double)*(float *)&(pFVar8->State).DP + *(double *)&(pFVar8->State).P);
  dVar1 = (dVar1 + dVar7) -
          ((double)*(float *)&(pFVar8->State).DP.field_0x4 + *(double *)&(pFVar8->State).P.field_0x8
          );
  dVar2 = (dVar2 + dVar6) -
          ((double)*(float *)&(pFVar8->State).DP.field_0x8 +
          *(double *)&(pFVar8->State).P.field_0x10);
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar17) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[1].Body;
  dVar5 = *(double *)&param_2->field_0x8;
  dVar6 = *(double *)&param_2->field_0x10;
  dVar7 = *(double *)param_2;
  local_2a8 = *(double *)this->InvIs;
  dStack_2a0 = *(double *)&this->InvIs[0].field_0x8;
  local_288 = *(double *)&this->InvIs[0].field_0x20;
  dStack_280 = *(double *)&this->InvIs[0].field_0x28;
  local_268 = *(double *)&this->InvIs[0].field_0x40;
  dStack_260 = *(double *)&this->InvIs[0].field_0x48;
  dVar14 = *(double *)&this->ConnectorXs[1].field_0x10 -
           ((double)*(float *)&(pFVar8->State).DP.field_0x8 +
           *(double *)&(pFVar8->State).P.field_0x10);
  dVar15 = *(double *)&this->ConnectorXs[1].field_0x8 -
           ((double)*(float *)&(pFVar8->State).DP.field_0x4 +
           *(double *)&(pFVar8->State).P.field_0x8);
  dVar13 = *(double *)(this->ConnectorXs + 1) -
           ((double)*(float *)&(pFVar8->State).DP + *(double *)&(pFVar8->State).P);
  dVar10 = dVar1 * dVar6 - dVar2 * dVar5;
  dVar11 = dVar2 * dVar7 - dVar4 * dVar6;
  dVar12 = dVar4 * dVar5 - dVar1 * dVar7;
  local_218 = *(double *)&this->InvIs[1].field_0x10;
  uStack_210 = *(undefined8 *)&this->InvIs[1].field_0x18;
  local_228 = *(double *)(this->InvIs + 1);
  dStack_220 = *(double *)&this->InvIs[1].field_0x8;
  local_238 = *(undefined8 *)&this->InvIs[0].field_0x70;
  uStack_230 = *(undefined8 *)&this->InvIs[0].field_0x78;
  dVar16 = dVar15 * dVar6 - dVar14 * dVar5;
  local_208 = *(double *)&this->InvIs[1].field_0x20;
  dStack_200 = *(double *)&this->InvIs[1].field_0x28;
  dVar6 = dVar14 * dVar7 - dVar6 * dVar13;
  local_1f8 = *(double *)&this->InvIs[1].field_0x30;
  uStack_1f0 = *(undefined8 *)&this->InvIs[1].field_0x38;
  local_1e8 = *(double *)&this->InvIs[1].field_0x40;
  dStack_1e0 = *(double *)&this->InvIs[1].field_0x48;
  dVar7 = dVar5 * dVar13 - dVar15 * dVar7;
  local_298 = *(undefined8 *)&this->InvIs[0].field_0x10;
  uStack_290 = *(undefined8 *)&this->InvIs[0].field_0x18;
  local_278 = *(undefined8 *)&this->InvIs[0].field_0x30;
  uStack_270 = *(undefined8 *)&this->InvIs[0].field_0x38;
  local_258 = *(undefined8 *)&this->InvIs[0].field_0x50;
  uStack_250 = *(undefined8 *)&this->InvIs[0].field_0x58;
  local_248 = *(undefined8 *)&this->InvIs[0].field_0x60;
  uStack_240 = *(undefined8 *)&this->InvIs[0].field_0x68;
  local_1d8 = *(double *)&this->InvIs[1].field_0x50;
  uStack_1d0 = *(undefined8 *)&this->InvIs[1].field_0x58;
  local_1c8 = *(undefined8 *)&this->InvIs[1].field_0x60;
  uStack_1c0 = *(undefined8 *)&this->InvIs[1].field_0x68;
  local_1b8 = *(undefined8 *)&this->InvIs[1].field_0x70;
  uStack_1b0 = *(undefined8 *)&this->InvIs[1].field_0x78;
  local_2e0 = this->InvMs[0];
  dVar5 = this->InvMs[1];
  dVar3 = (param_1 * dVar3 * param_3) /
          ((dStack_200 * dVar6 + dStack_220 * dVar16 + dStack_1e0 * dVar7) * dVar6 +
           (local_208 * dVar6 + local_228 * dVar16 + local_1e8 * dVar7) * dVar16 +
           (local_1f8 * dVar6 + local_218 * dVar16 + local_1d8 * dVar7) * dVar7 + dVar5 +
          (dStack_280 * dVar11 + dStack_2a0 * dVar10 + dStack_260 * dVar12) * dVar11 +
          (local_288 * dVar11 + local_2a8 * dVar10 + local_268 * dVar12) * dVar10 +
          (*(double *)&this->InvIs[0].field_0x30 * dVar11 +
           *(double *)&this->InvIs[0].field_0x10 * dVar10 +
          *(double *)&this->InvIs[0].field_0x50 * dVar12) * dVar12 + local_2e0);
  dVar6 = dVar3 * *(double *)&param_2->field_0x10;
  dVar7 = dVar3 * *(double *)param_2;
  dVar10 = dVar3 * *(double *)&param_2->field_0x8;
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_188 = *(double *)&this->InvIs[0].field_0x20;
  dStack_180 = *(double *)&this->InvIs[0].field_0x28;
  uVar20 = SUB84(dVar5,0) ^ uVar18;
  uVar21 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar19;
  local_198 = *(double *)&this->InvIs[0].field_0x10;
  uStack_190 = *(undefined8 *)&this->InvIs[0].field_0x18;
  local_178 = *(double *)&this->InvIs[0].field_0x30;
  uStack_170 = *(undefined8 *)&this->InvIs[0].field_0x38;
  local_158 = *(double *)&this->InvIs[0].field_0x50;
  uStack_150 = *(undefined8 *)&this->InvIs[0].field_0x58;
  local_2f0 = dVar7 * local_2e0;
  local_2e8 = dVar10 * local_2e0;
  uVar22 = SUB84(dVar10,0) ^ uVar18;
  uVar23 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar19;
  local_2e0 = dVar6 * local_2e0;
  local_300 = (double)CONCAT44(uVar21,uVar20) * dVar10;
  local_308 = (double)CONCAT44(uVar21,uVar20) * dVar7;
  local_2f8 = (double)CONCAT44(uVar21,uVar20) * dVar6;
  local_138 = *(undefined8 *)&this->InvIs[0].field_0x70;
  uStack_130 = *(undefined8 *)&this->InvIs[0].field_0x78;
  local_1a8 = *(double *)this->InvIs;
  dStack_1a0 = *(double *)&this->InvIs[0].field_0x8;
  dVar5 = dVar6 * dVar1 - dVar10 * dVar2;
  local_168 = *(double *)&this->InvIs[0].field_0x40;
  dStack_160 = *(double *)&this->InvIs[0].field_0x48;
  dVar2 = dVar7 * dVar2 - dVar6 * dVar4;
  dVar1 = dVar10 * dVar4 - dVar7 * dVar1;
  local_148 = *(undefined8 *)&this->InvIs[0].field_0x60;
  uStack_140 = *(undefined8 *)&this->InvIs[0].field_0x68;
  local_2c0 = local_188 * dVar2 + local_1a8 * dVar5 + local_168 * dVar1;
  local_2b8 = dStack_180 * dVar2 + dStack_1a0 * dVar5 + dStack_160 * dVar1;
  local_2b0 = dVar2 * local_178 + local_198 * dVar5 + dVar1 * local_158;
  uVar20 = SUB84(dVar7,0) ^ uVar18;
  uVar21 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar19;
  uVar18 = SUB84(dVar6,0) ^ uVar18;
  uVar19 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar19;
  local_128 = *(double *)(this->InvIs + 1);
  dStack_120 = *(double *)&this->InvIs[1].field_0x8;
  local_108 = *(double *)&this->InvIs[1].field_0x20;
  dStack_100 = *(double *)&this->InvIs[1].field_0x28;
  local_e8 = *(double *)&this->InvIs[1].field_0x40;
  dStack_e0 = *(double *)&this->InvIs[1].field_0x48;
  local_118 = *(double *)&this->InvIs[1].field_0x10;
  uStack_110 = *(undefined8 *)&this->InvIs[1].field_0x18;
  local_f8 = *(double *)&this->InvIs[1].field_0x30;
  uStack_f0 = *(undefined8 *)&this->InvIs[1].field_0x38;
  local_d8 = *(double *)&this->InvIs[1].field_0x50;
  uStack_d0 = *(undefined8 *)&this->InvIs[1].field_0x58;
  dVar2 = (double)CONCAT44(uVar21,uVar20) * dVar14 - (double)CONCAT44(uVar19,uVar18) * dVar13;
  local_b8 = *(undefined8 *)&this->InvIs[1].field_0x70;
  uStack_b0 = *(undefined8 *)&this->InvIs[1].field_0x78;
  dVar1 = (double)CONCAT44(uVar19,uVar18) * dVar15 - (double)CONCAT44(uVar23,uVar22) * dVar14;
  local_c8 = *(undefined8 *)&this->InvIs[1].field_0x60;
  uStack_c0 = *(undefined8 *)&this->InvIs[1].field_0x68;
  dVar4 = (double)CONCAT44(uVar23,uVar22) * dVar13 - (double)CONCAT44(uVar21,uVar20) * dVar15;
  local_2d8 = dVar2 * local_108 + dVar1 * local_128 + dVar4 * local_e8;
  local_2d0 = dVar2 * dStack_100 + dVar1 * dStack_120 + dVar4 * dStack_e0;
  local_2c8 = dVar2 * local_f8 + dVar1 * local_118 + dVar4 * local_d8;
  ApplyPositionDelta(this,(TVector<double,3> *)&local_2f0,(TVector<double,3> *)&local_308);
  ApplyRotationDelta(this,(TVector<double,3> *)&local_2c0,(TVector<double,3> *)&local_2d8);
  dVar1 = *(double *)&(this->NetLinearImpulse).field_0x8;
  dVar2 = *(double *)&(this->NetLinearImpulse).field_0x10;
  *(double *)&this->NetLinearImpulse = dVar7 + *(double *)&this->NetLinearImpulse;
  *(double *)&(this->NetLinearImpulse).field_0x8 = dVar10 + dVar1;
  *(double *)&(this->NetLinearImpulse).field_0x10 = dVar6 + dVar2;
  if (-1 < param_5) {
    if (2 < param_5) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar17) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    *(double *)
     ((longlong)((TVector<double,3> *)(this->InvIs + 2) + 2) + ((longlong)param_5 + 2) * 8) =
         dVar3 + *(double *)
                  ((longlong)((TVector<double,3> *)(this->InvIs + 2) + 2) +
                  ((longlong)param_5 + 2) * 8);
  }
  return;
}

// ApplyPositionConstraintSoft @ 143b92500

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionConstraintSoft
          (FPBDJointSolver *this,double param_1,double param_2,double param_3,bool param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8,double *param_9)

{
  double dVar1;
  undefined1 auVar2 [16];
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  undefined8 in_R9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  undefined1 local_348 [16];
  double local_338;
  double local_330;
  double local_328;
  double local_320;
  TVector<double,3> local_318;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  
  if (bChaos_Joint_ISPC_Enabled) {
    local_368 = *param_9;
    ::ApplyPositionConstraintSoft
              (SUB84(param_7,0),SUB84(param_1,0),SUB84(param_2,0),in_R9,param_4,param_5,param_6,
               param_7,&local_368);
    *param_9 = local_368;
    return;
  }
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->SolverBodies[0].Body;
  dVar8 = *(double *)&this->ConnectorXs[0].field_0x10 -
          ((double)*(float *)&(pFVar3->State).DP.field_0x8 +
          *(double *)&(pFVar3->State).P.field_0x10);
  dVar7 = *(double *)this->ConnectorXs -
          ((double)*(float *)&(pFVar3->State).DP + *(double *)&(pFVar3->State).P);
  dVar12 = *(double *)&this->ConnectorXs[0].field_0x8 -
           ((double)*(float *)&(pFVar3->State).DP.field_0x4 +
           *(double *)&(pFVar3->State).P.field_0x8);
  local_360 = dVar12 * *(double *)&param_5->field_0x10 - dVar8 * *(double *)&param_5->field_0x8;
  dVar8 = dVar8 * *(double *)param_5 - dVar7 * *(double *)&param_5->field_0x10;
  dVar7 = dVar7 * *(double *)&param_5->field_0x8 - dVar12 * *(double *)param_5;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->SolverBodies[1].Body;
  local_338 = *(double *)&param_5->field_0x8;
  local_330 = *(double *)&param_5->field_0x10;
  dVar6 = *(double *)&this->ConnectorXs[1].field_0x10 -
          ((double)*(float *)&(pFVar3->State).DP.field_0x8 +
          *(double *)&(pFVar3->State).P.field_0x10);
  dVar5 = *(double *)&this->ConnectorXs[1].field_0x8 -
          ((double)*(float *)&(pFVar3->State).DP.field_0x4 + *(double *)&(pFVar3->State).P.field_0x8
          );
  dVar12 = *(double *)(this->ConnectorXs + 1) -
           ((double)*(float *)&(pFVar3->State).DP + *(double *)&(pFVar3->State).P);
  local_368 = dVar5 * local_330 - dVar6 * local_338;
  local_328 = *(double *)param_5;
  local_358 = dVar6 * local_328 - local_330 * dVar12;
  auVar2 = *(undefined1 (*) [16])this->InvIs;
  local_350 = local_338 * dVar12 - dVar5 * local_328;
  local_320 = this->InvMs[0];
  dVar5 = (auVar2._8_8_ * local_360 + *(double *)&this->InvIs[0].field_0x28 * dVar8 +
          dVar7 * *(double *)&this->InvIs[0].field_0x48) * dVar8 +
          (auVar2._0_8_ * local_360 + *(double *)&this->InvIs[0].field_0x20 * dVar8 +
          dVar7 * *(double *)&this->InvIs[0].field_0x40) * local_360 +
          (*(double *)&this->InvIs[0].field_0x10 * local_360 +
           *(double *)&this->InvIs[0].field_0x30 * dVar8 +
          dVar7 * *(double *)&this->InvIs[0].field_0x50) * dVar7 + this->InvMs[0];
  local_348._8_4_ = auVar2._8_4_;
  local_348._0_8_ = dVar5;
  local_348._12_4_ = auVar2._12_4_;
  dVar12 = this->InvMs[1];
  dVar6 = 0.0;
  if (param_3 <= __real_3f1a36e2e0000000) {
    uVar13 = SUB84(local_338,0);
    uVar14 = (undefined4)((ulonglong)local_338 >> 0x20);
    uVar15 = SUB84(local_330,0);
    uVar17 = (undefined4)((ulonglong)local_330 >> 0x20);
    uVar21 = SUB84(local_328,0);
    uVar22 = (undefined4)((ulonglong)local_328 >> 0x20);
  }
  else {
    dVar6 = *(double *)&param_5->field_0x8;
    uVar13 = SUB84(dVar6,0);
    uVar14 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar10 = *(double *)param_5;
    uVar21 = SUB84(dVar10,0);
    uVar22 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar1 = *(double *)&param_5->field_0x10;
    uVar15 = SUB84(dVar1,0);
    uVar17 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar6 = ((*(double *)&this->ConnectorXs[0].field_0x8 -
             *(double *)&this->InitConnectorXs[0].field_0x8) -
            (*(double *)&this->ConnectorXs[1].field_0x8 -
            *(double *)&this->InitConnectorXs[1].field_0x8)) * dVar6 +
            ((*(double *)this->ConnectorXs - *(double *)this->InitConnectorXs) -
            (*(double *)(this->ConnectorXs + 1) - *(double *)(this->InitConnectorXs + 1))) * dVar10
            + ((*(double *)&this->ConnectorXs[0].field_0x10 -
               *(double *)&this->InitConnectorXs[0].field_0x10) -
              (*(double *)&this->ConnectorXs[1].field_0x10 -
              *(double *)&this->InitConnectorXs[1].field_0x10)) * dVar1 + param_1 * param_7;
  }
  if (param_4) {
    dVar10 = this->InvMs[0];
    uVar19 = SUB84(dVar10,0);
    uVar20 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar10 = __real_3ff0000000000000 / (dVar12 + dVar10);
  }
  else {
    uVar19 = SUB84(local_320,0);
    uVar20 = (undefined4)((ulonglong)local_320 >> 0x20);
    dVar10 = __real_3ff0000000000000;
  }
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = param_1 * param_1 * param_2 * dVar10;
  dVar11 = dVar10 * param_3 * param_1;
  dVar10 = *param_9;
  dVar5 = (this->SolverStiffness /
          ((dVar11 + dVar1) *
           (dVar5 + (local_358 * *(double *)&this->InvIs[1].field_0x28 +
                     local_368 * *(double *)&this->InvIs[1].field_0x8 +
                    local_350 * *(double *)&this->InvIs[1].field_0x48) * local_358 +
                    (local_358 * *(double *)&this->InvIs[1].field_0x20 +
                     local_368 * *(double *)(this->InvIs + 1) +
                    local_350 * *(double *)&this->InvIs[1].field_0x40) * local_368 +
                    (local_358 * *(double *)&this->InvIs[1].field_0x30 +
                     local_368 * *(double *)&this->InvIs[1].field_0x10 +
                    local_350 * *(double *)&this->InvIs[1].field_0x50) * local_350 + dVar12) +
          __real_3ff0000000000000)) * ((dVar1 * param_6 - dVar11 * dVar6) - dVar10);
  if (__real_3e45798ee0000000 < param_8) {
    dVar6 = (double)CONCAT44((uint)((ulonglong)param_8 >> 0x20) ^ uVar18,SUB84(param_8,0) ^ uVar16)
            - dVar10;
    dVar1 = param_8 - dVar10;
    if (dVar5 <= param_8 - dVar10) {
      dVar1 = dVar5;
    }
    dVar5 = dVar1;
    if (dVar1 <= dVar6) {
      dVar5 = dVar6;
    }
  }
  local_2f0 = (double)CONCAT44(uVar20,uVar19) * dVar5;
  dVar12 = dVar12 * dVar5;
  local_2f8 = (double)CONCAT44(uVar14,uVar13) * local_2f0;
  local_300 = local_2f0 * (double)CONCAT44(uVar22,uVar21);
  dVar6 = (double)CONCAT44(uVar14,uVar13) * dVar12;
  local_2f0 = (double)CONCAT44(uVar17,uVar15) * local_2f0;
  dVar10 = (double)CONCAT44(uVar17,uVar15) * dVar12;
  dVar12 = dVar12 * (double)CONCAT44(uVar22,uVar21);
  local_318._20_4_ = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar18;
  local_318._16_4_ = SUB84(dVar10,0) ^ uVar16;
  local_318._4_4_ = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar18;
  local_318._0_4_ = SUB84(dVar12,0) ^ uVar16;
  local_318._12_4_ = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar18;
  local_318._8_4_ = SUB84(dVar6,0) ^ uVar16;
  local_2d0 = (*(double *)this->InvIs * local_360 + *(double *)&this->InvIs[0].field_0x20 * dVar8 +
              dVar7 * *(double *)&this->InvIs[0].field_0x40) * dVar5;
  local_2c8 = (*(double *)&this->InvIs[0].field_0x8 * local_360 +
               *(double *)&this->InvIs[0].field_0x28 * dVar8 +
              dVar7 * *(double *)&this->InvIs[0].field_0x48) * dVar5;
  local_2c0 = (*(double *)&this->InvIs[0].field_0x10 * local_360 +
               *(double *)&this->InvIs[0].field_0x30 * dVar8 +
              dVar7 * *(double *)&this->InvIs[0].field_0x50) * dVar5;
  uVar16 = SUB84(dVar5,0) ^ uVar16;
  uVar18 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar18;
  local_2e8 = (local_368 * *(double *)(this->InvIs + 1) +
               local_358 * *(double *)&this->InvIs[1].field_0x20 +
              *(double *)&this->InvIs[1].field_0x40 * local_350) * (double)CONCAT44(uVar18,uVar16);
  local_2e0 = (local_368 * *(double *)&this->InvIs[1].field_0x8 +
               local_358 * *(double *)&this->InvIs[1].field_0x28 +
              *(double *)&this->InvIs[1].field_0x48 * local_350) * (double)CONCAT44(uVar18,uVar16);
  local_2d8 = (local_368 * *(double *)&this->InvIs[1].field_0x10 +
               local_358 * *(double *)&this->InvIs[1].field_0x30 +
              *(double *)&this->InvIs[1].field_0x50 * local_350) * (double)CONCAT44(uVar18,uVar16);
  ApplyPositionDelta(this,(TVector<double,3> *)&local_300,&local_318);
  ApplyRotationDelta(this,(TVector<double,3> *)&local_2d0,(TVector<double,3> *)&local_2e8);
  *param_9 = dVar5 + *param_9;
  dVar7 = *(double *)&param_5->field_0x10;
  dVar8 = *(double *)&param_5->field_0x8;
  dVar12 = *(double *)&(this->NetLinearImpulse).field_0x10;
  dVar6 = *(double *)&(this->NetLinearImpulse).field_0x8;
  *(double *)&this->NetLinearImpulse =
       dVar5 * *(double *)param_5 + *(double *)&this->NetLinearImpulse;
  *(double *)&(this->NetLinearImpulse).field_0x10 = dVar5 * dVar7 + dVar12;
  *(double *)&(this->NetLinearImpulse).field_0x8 = dVar5 * dVar8 + dVar6;
  return;
}

// ApplyPositionConstraints @ 143b95300

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double local_res20;
  double local_78;
  double dStack_70;
  double local_68;
  undefined1 local_60 [16];
  double local_50;
  
  EVar1 = (param_3->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar1 == Free) && ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar2 = (param_3->LinearMotionTypes).field0_0x0._s_0.Y;
  EVar3 = (param_3->LinearMotionTypes).field0_0x0._s_0.Z;
  if (EVar1 == Locked) {
    if ((EVar2 == Locked) && (EVar3 == Locked)) {
      if (this->InvMs[0] <= 0.0) {
        ApplyPointPositionConstraintKD(this,0,1,param_1,param_2,param_3);
        return;
      }
      if (this->InvMs[1] <= 0.0) {
        ApplyPointPositionConstraintKD(this,1,0,param_1,param_2,param_3);
        return;
      }
      ApplyPointPositionConstraintDD(this,param_1,param_2,param_3);
      return;
    }
LAB_143b95586:
    if (EVar1 == Locked) {
      if (EVar3 == Locked) {
        if (EVar2 != Locked) {
          ApplyCylindricalPositionConstraint(this,param_1,1,EVar2,Locked,param_2,param_3);
          return;
        }
        goto LAB_143b956ca;
      }
      if (EVar2 == Locked) {
        if (EVar3 == Locked) goto LAB_143b956ca;
        goto LAB_143b9565d;
      }
    }
    if ((EVar2 == Limited) && (EVar3 == Limited)) {
      if (EVar1 != Limited) {
        ApplyCylindricalPositionConstraint(this,param_1,0,EVar1,Limited,param_2,param_3);
        return;
      }
      goto LAB_143b956ca;
    }
  }
  else {
    if ((EVar1 != Limited) || (EVar2 != Limited)) {
      if ((EVar2 == Locked) && (EVar3 == Locked)) {
        if (EVar1 != Locked) {
          ApplyCylindricalPositionConstraint(this,param_1,0,EVar1,Locked,param_2,param_3);
          return;
        }
        goto LAB_143b956ca;
      }
      goto LAB_143b95586;
    }
    if (EVar3 == Limited) {
      FPBDJointUtilities::GetSphericalAxisDelta
                (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_78,&local_res20
                );
      dVar7 = param_3->LinearLimit;
      dVar4 = local_res20 - dVar7;
      if (dVar4 < this->PositionTolerance || dVar4 == this->PositionTolerance) {
        return;
      }
      bVar5 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
      if (bVar5) {
        dVar7 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
        dVar6 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
        bVar5 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_2,param_3);
        ApplyPositionConstraintSoft
                  (this,param_1,dVar7,dVar6,bVar5,(TVector<double,3> *)&local_78,dVar4,0.0,0.0,
                   &this->LinearSoftLambda);
      }
      else {
        dVar6 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
        local_60._8_4_ = SUB84(dStack_70 * dVar7,0);
        local_60._0_8_ = local_78 * dVar7;
        local_60._12_4_ = (int)((ulonglong)(dStack_70 * dVar7) >> 0x20);
        local_50 = local_68 * dVar7;
        ApplyPositionConstraint
                  (this,dVar6,(TVector<double,3> *)&local_78,dVar4,(TVector<double,3> *)local_60,-1)
        ;
      }
      dVar7 = dVar4 * dVar4;
      if (dVar4 * dVar4 <= this->LinearViolationSq) {
        dVar7 = this->LinearViolationSq;
      }
      this->LinearViolationSq = dVar7;
      return;
    }
  }
  if (EVar1 == Limited) {
    if (EVar3 == Limited) {
      if (EVar2 != Limited) {
        ApplyCylindricalPositionConstraint(this,param_1,1,EVar2,Limited,param_2,param_3);
        return;
      }
    }
    else if ((EVar2 == Limited) && (EVar3 != Limited)) {
LAB_143b9565d:
      ApplyCylindricalPositionConstraint(this,param_1,2,EVar3,EVar2,param_2,param_3);
      return;
    }
  }
  else if (EVar1 != Locked) {
    if (EVar2 - Limited < 2) {
      ApplyPlanarPositionConstraint(this,param_1,1,EVar2,param_2,param_3);
      return;
    }
    if (1 < EVar3 - Limited) {
      return;
    }
    ApplyPlanarPositionConstraint(this,param_1,2,EVar3,param_2,param_3);
    return;
  }
LAB_143b956ca:
  ApplyPlanarPositionConstraint(this,param_1,0,EVar1,param_2,param_3);
  return;
}

// ApplyPositionDelta @ 143b95f10

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionDelta
          (FPBDJointSolver *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x26,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)param_1;
  fVar1 = *(float *)&(pFVar5->State).DP.field_0x8;
  *(float *)&(pFVar5->State).DP.field_0x4 =
       (float)*(double *)&param_1->field_0x8 + *(float *)&(pFVar5->State).DP.field_0x4;
  fVar2 = *(float *)&(pFVar5->State).DP;
  *(float *)&(pFVar5->State).DP.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).DP = (float)dVar4 + fVar2;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x26,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[1].Body;
  dVar3 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)&param_2->field_0x10;
  fVar1 = *(float *)&(pFVar5->State).DP.field_0x4;
  *(float *)&(pFVar5->State).DP = (float)*(double *)param_2 + *(float *)&(pFVar5->State).DP;
  fVar2 = *(float *)&(pFVar5->State).DP.field_0x8;
  *(float *)&(pFVar5->State).DP.field_0x4 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).DP.field_0x8 = (float)dVar4 + fVar2;
  *(double *)this->ConnectorXs = *(double *)this->ConnectorXs + *(double *)param_1;
  *(double *)&this->ConnectorXs[0].field_0x8 =
       *(double *)&param_1->field_0x8 + *(double *)&this->ConnectorXs[0].field_0x8;
  *(double *)&this->ConnectorXs[0].field_0x10 =
       *(double *)&param_1->field_0x10 + *(double *)&this->ConnectorXs[0].field_0x10;
  dVar3 = *(double *)&this->ConnectorXs[1].field_0x8;
  *(double *)(this->ConnectorXs + 1) = *(double *)(this->ConnectorXs + 1) + *(double *)param_2;
  dVar4 = *(double *)&this->ConnectorXs[1].field_0x10;
  *(double *)&this->ConnectorXs[1].field_0x8 = dVar3 + *(double *)&param_2->field_0x8;
  *(double *)&this->ConnectorXs[1].field_0x10 = dVar4 + *(double *)&param_2->field_0x10;
  return;
}

// ApplyPositionDelta @ 143b96090

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionDelta
          (FPBDJointSolver *this,int param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  FConstraintSolverBody *pFVar6;
  
  pFVar6 = Body(this,param_1);
  dVar3 = *(double *)&param_2->field_0x8;
  dVar4 = *(double *)&param_2->field_0x10;
  pFVar5 = pFVar6->Body;
  fVar1 = *(float *)&(pFVar5->State).DP.field_0x4;
  *(float *)&(pFVar5->State).DP = (float)*(double *)param_2 + *(float *)&(pFVar5->State).DP;
  fVar2 = *(float *)&(pFVar5->State).DP.field_0x8;
  *(float *)&(pFVar5->State).DP.field_0x4 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).DP.field_0x8 = (float)dVar4 + fVar2;
  *(double *)(this->ConnectorXs + param_1) =
       *(double *)(this->ConnectorXs + param_1) + *(double *)param_2;
  *(double *)&this->ConnectorXs[param_1].field_0x8 =
       *(double *)&param_2->field_0x8 + *(double *)&this->ConnectorXs[param_1].field_0x8;
  *(double *)&this->ConnectorXs[param_1].field_0x10 =
       *(double *)&param_2->field_0x10 + *(double *)&this->ConnectorXs[param_1].field_0x10;
  return;
}

// ApplyPositionDrive @ 143b96140

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionDrive
          (FPBDJointSolver *this,double param_1,int param_2,FPBDJointSolverSettings *param_3,
          FPBDJointSettings *param_4,TVector<double,3> *param_5,double param_6,double param_7)

{
  double dVar1;
  code *pcVar2;
  FPBDJointSettings *pFVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pFVar3 = param_4;
  lVar7 = (longlong)param_2;
  dVar8 = FPBDJointUtilities::GetLinearDriveStiffness(param_3,param_4,param_2);
  dVar9 = FPBDJointUtilities::GetLinearDriveDamping(param_3,pFVar3,param_2);
  bVar5 = FPBDJointUtilities::GetLinearDriveAccelerationMode(param_3,pFVar3);
  if (2 < (uint)param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  dVar4 = param_6;
  dVar1 = *(double *)(&(pFVar3->LinearDriveMaxForce).field_0x0 + lVar7 * 8);
  dVar10 = (double)CONCAT44((uint)((ulonglong)param_6 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(param_6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((this->PositionTolerance <= dVar10 && dVar10 != this->PositionTolerance) || (0.0 < dVar9)) {
    if (2 < (uint)param_2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    param_4 = *(FPBDJointSettings **)(&this->LastPs[-3].field_0x0 + lVar7 * 8);
    ApplyPositionConstraintSoft
              (this,param_1,dVar8,dVar9,bVar5,param_5,dVar4,param_7,param_1 * dVar1 * param_1,
               (double *)&param_4);
    pFVar3 = param_4;
    if (2 < (uint)param_2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(FPBDJointSettings **)(&this->LastPs[-3].field_0x0 + lVar7 * 8) = pFVar3;
  }
  return;
}

// ApplyPositionDrives @ 143b963f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionDrives
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

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
  bool bVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  char *pcVar14;
  double dVar15;
  double dVar16;
  undefined1 auStackY_238 [32];
  char local_1e8 [8];
  double local_1e0;
  double local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TMatrix<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if (param_2->bEnableDrives != false) {
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.X == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.X == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked)) {
      local_1e8[0] = '\0';
    }
    else {
      local_1e8[0] = '\x01';
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Y == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) {
      local_1e8[1] = '\0';
    }
    else {
      local_1e8[1] = '\x01';
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Z == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
      local_1e8[2] = '\0';
    }
    else {
      local_1e8[2] = '\x01';
    }
    if (((local_1e8[0] != '\0') || (local_1e8[1] != '\0')) || (local_1e8[2] != '\0')) {
      local_178.M[0][0] = 0.0;
      local_178.M[0][1] = 0.0;
      local_178.M[0][2] = 0.0;
      local_178.M[0][3] = 0.0;
      local_178.M[1][0] = 0.0;
      local_178.M[1][1] = 0.0;
      local_178.M[1][2] = 0.0;
      local_178.M[1][3] = 0.0;
      local_178.M[2][0] = 0.0;
      local_178.M[2][1] = 0.0;
      local_178.M[2][2] = 0.0;
      local_178.M[2][3] = 0.0;
      local_178.M[3][0] = 0.0;
      local_178.M[3][1] = 0.0;
      local_178.M[3][2] = 0.0;
      local_178.M[3][3] = 0.0;
      UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)this->ConnectorRs,&local_178);
      local_1b8._s_0.X = (double)*(undefined8 *)&param_3->LinearDrivePositionTarget;
      local_1b8._s_0.Y = (double)*(undefined8 *)&(param_3->LinearDrivePositionTarget).field_0x8;
      local_1b8._s_0.Z = (double)*(undefined8 *)&(param_3->LinearDrivePositionTarget).field_0x10;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_1d0._s_0,
                 (TVector<double> *)&local_1b8._s_0);
      local_198._s_0.X = (double)*(undefined8 *)&param_3->LinearDriveVelocityTarget;
      local_198._s_0.Y = (double)*(undefined8 *)&(param_3->LinearDriveVelocityTarget).field_0x8;
      local_198._s_0.Z = (double)*(undefined8 *)&(param_3->LinearDriveVelocityTarget).field_0x10;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_1b8._s_0,
                 (TVector<double> *)&local_198._s_0);
      pcVar14 = local_1e8;
      dVar3 = local_1d0._s_0.Z + *(double *)&this->ConnectorXs[0].field_0x10;
      pdVar13 = local_178.M[0] + 1;
      dVar15 = local_1d0._s_0.Y + *(double *)&this->ConnectorXs[0].field_0x8;
      dVar1 = *(double *)&this->ConnectorXs[1].field_0x10;
      iVar11 = 0;
      dVar2 = *(double *)&this->ConnectorXs[1].field_0x8;
      lVar12 = 0;
      dVar16 = *(double *)(this->ConnectorXs + 1) -
               (local_1d0._s_0.X + *(double *)this->ConnectorXs);
      local_1d8 = dVar16;
      do {
        if (*pcVar14 != '\0') {
          local_1d0._s_0.X = (*(double (*) [4])(pdVar13 + -1))[0];
          local_1d0._s_0.Y = *pdVar13;
          local_1d0._s_0.Z = pdVar13[1];
          dVar8 = local_1b8._s_0.Z * local_1d0._s_0.Z;
          dVar6 = local_1b8._s_0.X * local_1d0._s_0.X;
          dVar7 = (dVar2 - dVar15) * local_1d0._s_0.Y + dVar16 * local_1d0._s_0.X +
                  (dVar1 - dVar3) * local_1d0._s_0.Z;
          dVar9 = local_1b8._s_0.Y * local_1d0._s_0.Y;
          dVar4 = FPBDJointUtilities::GetLinearDriveStiffness(param_2,param_3,iVar11);
          dVar5 = FPBDJointUtilities::GetLinearDriveDamping(param_2,param_3,iVar11);
          bVar10 = FPBDJointUtilities::GetLinearDriveAccelerationMode(param_2,param_3);
          dVar16 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
          if ((this->PositionTolerance <= dVar16 && dVar16 != this->PositionTolerance) ||
             (dVar16 = local_1d8, 0.0 < dVar5)) {
            local_1e0 = *(double *)(&this->LastPs[-3].field_0x0 + lVar12);
            ApplyPositionConstraintSoft
                      (this,param_1,dVar4,dVar5,bVar10,(TVector<double,3> *)&local_1d0._s_0,dVar7,
                       dVar6 + dVar9 + dVar8,
                       param_1 * *(double *)(&(param_3->LinearDriveMaxForce).field_0x0 + lVar12) *
                       param_1,&local_1e0);
            *(double *)(&this->LastPs[-3].field_0x0 + lVar12) = local_1e0;
            dVar16 = local_1d8;
          }
        }
        iVar11 = iVar11 + 1;
        pcVar14 = pcVar14 + 1;
        pdVar13 = pdVar13 + 4;
        lVar12 = lVar12 + 8;
      } while (iVar11 < 3);
    }
  }
  return;
}

// ApplyPositionProjection @ 143b96890

void __thiscall
Chaos::FPBDJointSolver::ApplyPositionProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,TVector<double,3> *param_4,TVector<double,3> *param_5)

{
  EJointMotionType EVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  
  dVar5 = FPBDJointUtilities::GetLinearProjection(param_2,param_3);
  bVar4 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
  if ((bVar4) || (param_3->bProjectionEnabled == false)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  EVar1 = (param_3->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar1 == Locked) && ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
     ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    bVar2 = false;
    if (((EVar1 == Limited) && ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Limited)) &&
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Limited)) {
      bVar3 = true;
      goto LAB_143b968ff;
    }
  }
  bVar2 = bVar3;
  bVar3 = false;
LAB_143b968ff:
  if ((bVar4) && (0.0 < dVar5)) {
    if (bVar2) {
      ApplyPointProjection(this,param_1,param_2,param_3,dVar5,param_4,param_5);
    }
    else if (bVar3) {
      ApplySphereProjection(this,param_1,param_2,param_3,dVar5,param_4,param_5);
    }
  }
  return;
}

// ApplyProjections @ 143b97520

void __thiscall
Chaos::FPBDJointSolver::ApplyProjections
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FSolverBody *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  double local_res8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  
  if (0.0 < this->InvMs[1]) {
    local_a8 = 0.0;
    this->SolverStiffness = 1.0;
    local_90 = 0.0;
    local_a0 = 0.0;
    dStack_98 = 0.0;
    local_b8 = 0.0;
    dStack_b0 = 0.0;
    if (param_2->bSolvePositionLast == false) {
      ApplyPositionProjection
                (this,param_1,param_2,param_3,(TVector<double,3> *)&local_b8,
                 (TVector<double,3> *)&local_a0);
      ApplyRotationProjection
                (this,param_1,param_2,param_3,(TVector<double,3> *)&local_b8,
                 (TVector<double,3> *)&local_a0);
    }
    else {
      ApplyRotationProjection
                (this,param_1,param_2,param_3,(TVector<double,3> *)&local_b8,
                 (TVector<double,3> *)&local_a0);
      ApplyPositionProjection
                (this,param_1,param_2,param_3,(TVector<double,3> *)&local_b8,
                 (TVector<double,3> *)&local_a0);
    }
    if ((((param_4) && ((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked)) &&
        ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
      dVar6 = FPBDJointUtilities::GetLinearProjection(param_2,param_3);
      bVar12 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
      if (((!bVar12) && (param_3->bProjectionEnabled != false)) && (0.0 < dVar6)) {
        FPBDJointUtilities::GetSphericalAxisDelta
                  (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_88,
                   &local_res8);
        local_res8 = local_res8 - param_3->LinearLimit;
        if (local_res8 <= 0.0) {
          local_res8 = 0.0;
        }
        if (0.0 < local_res8) {
          uVar13 = SUB84(local_res8 * dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar14 = (uint)((ulonglong)(local_res8 * dVar6) >> 0x20) ^
                   __xmm_80000000000000008000000000000000._4_4_;
          dVar7 = (double)CONCAT44(uVar14,uVar13) * local_88;
          dVar8 = (double)CONCAT44(uVar14,uVar13) * local_80;
          dVar6 = (double)CONCAT44(uVar14,uVar13) * local_78;
          if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SolverBodies[BodyIndex].IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                                  ,0x26,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = this->SolverBodies[1].Body;
          local_b8 = local_b8 + dVar7;
          fVar1 = *(float *)&(pFVar4->State).DP;
          local_a8 = local_a8 + dVar6;
          *(float *)&(pFVar4->State).DP.field_0x4 =
               (float)dVar8 + *(float *)&(pFVar4->State).DP.field_0x4;
          *(float *)&(pFVar4->State).DP = (float)dVar7 + fVar1;
          *(float *)&(pFVar4->State).DP.field_0x8 =
               (float)dVar6 + *(float *)&(pFVar4->State).DP.field_0x8;
          dVar3 = *(double *)&this->ConnectorXs[1].field_0x8;
          *(double *)(this->ConnectorXs + 1) = dVar7 + *(double *)(this->ConnectorXs + 1);
          dVar7 = *(double *)&this->ConnectorXs[1].field_0x10;
          *(double *)&this->ConnectorXs[1].field_0x8 = dVar8 + dVar3;
          *(double *)&this->ConnectorXs[1].field_0x10 = dVar6 + dVar7;
          dStack_b0 = dStack_b0 + dVar8;
        }
      }
      if (0.0 < Chaos_Joint_VelProjectionAlpha) {
        dVar6 = __real_3ff0000000000000 / param_1;
        dVar7 = (double)Chaos_Joint_VelProjectionAlpha;
        dVar8 = dVar7 * local_b8;
        dVar3 = dVar7 * dStack_b0;
        dVar9 = dVar7 * local_a8;
        dVar10 = dVar7 * local_a0;
        dVar11 = dVar7 * dStack_98;
        dVar7 = dVar7 * local_90;
        if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("SolverBodies[BodyIndex].IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                                ,0x26,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = this->SolverBodies[1].Body;
        fVar1 = *(float *)&(pFVar4->State).V.field_0x4;
        *(float *)&(pFVar4->State).V = (float)(dVar8 * dVar6) + *(float *)&(pFVar4->State).V;
        *(float *)&(pFVar4->State).V.field_0x4 = (float)(dVar3 * dVar6) + fVar1;
        *(float *)&(pFVar4->State).V.field_0x8 =
             (float)(dVar9 * dVar6) + *(float *)&(pFVar4->State).V.field_0x8;
        fVar1 = *(float *)&(pFVar4->State).W.field_0x4;
        fVar2 = *(float *)&(pFVar4->State).W.field_0x8;
        *(float *)&(pFVar4->State).W = (float)(dVar10 * dVar6) + *(float *)&(pFVar4->State).W;
        *(float *)&(pFVar4->State).W.field_0x4 = (float)(dVar11 * dVar6) + fVar1;
        *(float *)&(pFVar4->State).W.field_0x8 = (float)(dVar7 * dVar6) + fVar2;
      }
    }
  }
  return;
}

// ApplyRotationConstraint @ 143b97c90

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraint
          (FPBDJointSolver *this,double param_1,TVector<double,3> *param_2,double param_3,
          int param_4)

{
  if (this->InvMs[0] <= 0.0) {
    ApplyRotationConstraintKD(this,0,1,param_1,param_2,param_3,param_4);
    return;
  }
  if (this->InvMs[1] <= 0.0) {
    ApplyRotationConstraintKD
              (this,1,0,param_1,param_2,
               (double)CONCAT44((uint)((ulonglong)param_3 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(param_3,0) ^ (uint)__xmm_80000000000000008000000000000000),
               param_4);
    return;
  }
  ApplyRotationConstraintDD(this,param_1,param_2,param_3,param_4);
  return;
}

// ApplyRotationConstraintDD @ 143b97d20

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraintDD
          (FPBDJointSolver *this,double param_1,TVector<double,3> *param_2,double param_3,
          int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  local_1a8 = *(double *)this->InvIs;
  dStack_1a0 = *(double *)&this->InvIs[0].field_0x8;
  local_188 = *(double *)&this->InvIs[0].field_0x20;
  dStack_180 = *(double *)&this->InvIs[0].field_0x28;
  local_168 = *(double *)&this->InvIs[0].field_0x40;
  dStack_160 = *(double *)&this->InvIs[0].field_0x48;
  local_178 = *(double *)&this->InvIs[0].field_0x30;
  uStack_170 = *(undefined8 *)&this->InvIs[0].field_0x38;
  local_148 = *(undefined8 *)&this->InvIs[0].field_0x60;
  uStack_140 = *(undefined8 *)&this->InvIs[0].field_0x68;
  local_138 = *(undefined8 *)&this->InvIs[0].field_0x70;
  uStack_130 = *(undefined8 *)&this->InvIs[0].field_0x78;
  local_158 = *(double *)&this->InvIs[0].field_0x50;
  uStack_150 = *(undefined8 *)&this->InvIs[0].field_0x58;
  local_198 = *(double *)&this->InvIs[0].field_0x10;
  uStack_190 = *(undefined8 *)&this->InvIs[0].field_0x18;
  dVar1 = *(double *)&param_2->field_0x8;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&param_2->field_0x10;
  local_108 = *(double *)&this->InvIs[1].field_0x20;
  dStack_100 = *(double *)&this->InvIs[1].field_0x28;
  local_1c0 = dVar1 * local_188 + dVar2 * local_1a8 + dVar3 * local_168;
  local_128 = *(double *)(this->InvIs + 1);
  dStack_120 = *(double *)&this->InvIs[1].field_0x8;
  local_e8 = *(double *)&this->InvIs[1].field_0x40;
  dStack_e0 = *(double *)&this->InvIs[1].field_0x48;
  local_1b8 = dVar1 * dStack_180 + dVar2 * dStack_1a0 + dVar3 * dStack_160;
  local_118 = *(double *)&this->InvIs[1].field_0x10;
  uStack_110 = *(undefined8 *)&this->InvIs[1].field_0x18;
  local_c8 = *(undefined8 *)&this->InvIs[1].field_0x60;
  uStack_c0 = *(undefined8 *)&this->InvIs[1].field_0x68;
  local_f8 = *(double *)&this->InvIs[1].field_0x30;
  uStack_f0 = *(undefined8 *)&this->InvIs[1].field_0x38;
  local_1b0 = dVar1 * local_178 + dVar2 * local_198 + dVar3 * local_158;
  local_b8 = *(undefined8 *)&this->InvIs[1].field_0x70;
  uStack_b0 = *(undefined8 *)&this->InvIs[1].field_0x78;
  local_d8 = *(double *)&this->InvIs[1].field_0x50;
  uStack_d0 = *(undefined8 *)&this->InvIs[1].field_0x58;
  local_1d8 = dVar1 * local_108 + dVar2 * local_128 + dVar3 * local_e8;
  local_1d0 = dVar1 * dStack_100 + dVar2 * dStack_120 + dVar3 * dStack_e0;
  local_1c8 = dVar1 * local_f8 + dVar2 * local_118 + dVar3 * local_d8;
  dVar5 = (param_1 * this->SolverStiffness * param_3) /
          ((local_1d0 + local_1b8) * dVar1 + (local_1d8 + local_1c0) * dVar2 +
          (local_1c8 + local_1b0) * dVar3);
  uVar7 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_1c0 = dVar5 * local_1c0;
  local_1b8 = dVar5 * local_1b8;
  local_1b0 = dVar5 * local_1b0;
  local_1d0 = (double)CONCAT44(uVar8,uVar7) * local_1d0;
  local_1d8 = (double)CONCAT44(uVar8,uVar7) * local_1d8;
  local_1c8 = (double)CONCAT44(uVar8,uVar7) * local_1c8;
  ApplyRotationDelta(this,(TVector<double,3> *)&local_1c0,(TVector<double,3> *)&local_1d8);
  dVar1 = *(double *)&param_2->field_0x10;
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)&this->NetAngularImpulse;
  *(double *)&(this->NetAngularImpulse).field_0x8 =
       dVar5 * *(double *)&param_2->field_0x8 + *(double *)&(this->NetAngularImpulse).field_0x8;
  *(double *)&(this->NetAngularImpulse).field_0x10 =
       dVar5 * dVar1 + *(double *)&(this->NetAngularImpulse).field_0x10;
  *(double *)&this->NetAngularImpulse = dVar5 * dVar2 + dVar3;
  if (-1 < param_4) {
    if (2 < param_4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(double *)(&this->LastPs[-5].field_0x0 + (longlong)param_4 * 8) =
         dVar5 + *(double *)(&this->LastPs[-5].field_0x0 + (longlong)param_4 * 8);
  }
  return;
}

// ApplyRotationConstraintKD @ 143b980d0

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraintKD
          (FPBDJointSolver *this,int param_1,int param_2,double param_3,TVector<double,3> *param_4,
          double param_5,int param_6)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FSolverBody *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  FConstraintSolverBody *pFVar12;
  uint uVar13;
  uint uVar14;
  
  dVar3 = *(double *)param_4;
  dVar4 = *(double *)&param_4->field_0x8;
  dVar5 = *(double *)&param_4->field_0x10;
  puVar1 = &this->InvIs[param_2].field_0x20;
  puVar2 = &this->InvIs[param_2].field_0x40;
  dVar10 = dVar4 * *(double *)puVar1 + dVar3 * *(double *)(this->InvIs + param_2) +
           dVar5 * *(double *)puVar2;
  dVar9 = dVar4 * *(double *)(puVar1 + 8) + dVar3 * *(double *)&this->InvIs[param_2].field_0x8 +
          dVar5 * *(double *)(puVar2 + 8);
  dVar8 = dVar4 * *(double *)&this->InvIs[param_2].field_0x30 +
          dVar3 * *(double *)&this->InvIs[param_2].field_0x10 +
          dVar5 * *(double *)&this->InvIs[param_2].field_0x50;
  dVar5 = (param_5 / (dVar9 * dVar4 + dVar10 * dVar3 + dVar8 * dVar5)) *
          param_3 * this->SolverStiffness;
  uVar13 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar14 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  pFVar12 = Body(this,param_2);
  pFVar6 = pFVar12->Body;
  *(float *)&(pFVar6->State).DQ =
       (float)(dVar10 * (double)CONCAT44(uVar14,uVar13)) + *(float *)&(pFVar6->State).DQ;
  *(float *)&(pFVar6->State).DQ.field_0x4 =
       (float)(dVar9 * (double)CONCAT44(uVar14,uVar13)) + *(float *)&(pFVar6->State).DQ.field_0x4;
  *(float *)&(pFVar6->State).DQ.field_0x8 =
       (float)(dVar8 * (double)CONCAT44(uVar14,uVar13)) + *(float *)&(pFVar6->State).DQ.field_0x8;
  UpdateDerivedState(this,param_2);
  dVar3 = *(double *)&param_4->field_0x8;
  dVar4 = *(double *)&param_4->field_0x10;
  dVar8 = dVar5;
  if (param_1 != 0) {
    dVar8 = (double)CONCAT44(uVar14,uVar13);
  }
  dVar9 = *(double *)&(this->NetAngularImpulse).field_0x8;
  dVar10 = *(double *)&(this->NetAngularImpulse).field_0x10;
  *(double *)&this->NetAngularImpulse =
       *(double *)param_4 * dVar8 + *(double *)&this->NetAngularImpulse;
  *(double *)&(this->NetAngularImpulse).field_0x8 = dVar3 * dVar8 + dVar9;
  *(double *)&(this->NetAngularImpulse).field_0x10 = dVar4 * dVar8 + dVar10;
  if (-1 < param_6) {
    if ((2 < param_6) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(double *)(&this->LastPs[-5].field_0x0 + (longlong)param_6 * 8) =
         dVar5 + *(double *)(&this->LastPs[-5].field_0x0 + (longlong)param_6 * 8);
  }
  return;
}

// ApplyRotationConstraintSoft @ 143b983e0

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraintSoft
          (FPBDJointSolver *this,double param_1,double param_2,double param_3,bool param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8,double *param_9)

{
  if (this->InvMs[0] <= 0.0) {
    ApplyRotationConstraintSoftKD
              (this,0,1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (this->InvMs[1] <= 0.0) {
    ApplyRotationConstraintSoftKD
              (this,1,0,param_1,param_2,param_3,param_4,param_5,
               (double)CONCAT44((uint)((ulonglong)param_6 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(param_6,0) ^ (uint)__xmm_80000000000000008000000000000000),
               (double)CONCAT44((uint)((ulonglong)param_7 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(param_7,0) ^ (uint)__xmm_80000000000000008000000000000000),
               param_8,param_9);
    return;
  }
  ApplyRotationConstraintSoftDD
            (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

// ApplyRotationConstraintSoftDD @ 143b98540

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraintSoftDD
          (FPBDJointSolver *this,double param_1,double param_2,double param_3,bool param_4,
          TVector<double,3> *param_5,double param_6,double param_7,double param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double local_res8;
  double local_res10;
  double local_res18;
  double local_res20;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  
  dVar1 = 0.0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((this->InvMs[0] <= 0.0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDynamic(0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                         ,0x5c2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->InvMs[1] <= 0.0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsDynamic(1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                         ,0x5c3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar2 = local_res20;
  dVar5 = __real_3ff0000000000000;
  if (bChaos_Joint_ISPC_Enabled == false) {
    local_200 = *(double *)param_5;
    local_1f8 = *(double *)&param_5->field_0x8;
    dVar8 = *(double *)&param_5->field_0x10;
    uVar11 = SUB84(dVar8,0);
    uVar12 = (undefined4)((ulonglong)dVar8 >> 0x20);
    local_res8 = (*(double *)&param_5->field_0x8 * *(double *)&this->InvIs[0].field_0x28 +
                  *(double *)param_5 * *(double *)&this->InvIs[0].field_0x8 +
                 *(double *)&param_5->field_0x10 * *(double *)&this->InvIs[0].field_0x48) *
                 *(double *)&param_5->field_0x8 +
                 (*(double *)&param_5->field_0x8 * *(double *)&this->InvIs[0].field_0x20 +
                  *(double *)param_5 * *(double *)this->InvIs +
                 *(double *)&param_5->field_0x10 * *(double *)&this->InvIs[0].field_0x40) *
                 local_200 +
                 (local_1f8 * *(double *)&this->InvIs[0].field_0x30 +
                  local_200 * *(double *)&this->InvIs[0].field_0x10 +
                 dVar8 * *(double *)&this->InvIs[0].field_0x50) * dVar8;
    dVar8 = (local_1f8 * *(double *)&this->InvIs[1].field_0x28 +
             local_200 * *(double *)&this->InvIs[1].field_0x8 +
            dVar8 * *(double *)&this->InvIs[1].field_0x48) * local_1f8 +
            (local_1f8 * *(double *)&this->InvIs[1].field_0x20 +
             local_200 * *(double *)(this->InvIs + 1) +
            dVar8 * *(double *)&this->InvIs[1].field_0x40) * local_200 +
            (local_1f8 * *(double *)&this->InvIs[1].field_0x30 +
             local_200 * *(double *)&this->InvIs[1].field_0x10 +
            dVar8 * *(double *)&this->InvIs[1].field_0x50) * dVar8;
    dVar7 = dVar8 + local_res8;
    if (__real_3f1a36e2e0000000 < local_res20) {
      TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_230,this->InitConnectorRs,this->ConnectorRs,
                 __real_3ff0000000000000);
      TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_218,this->InitConnectorRs + 1,this->ConnectorRs + 1,
                 dVar5);
      local_200 = *(double *)param_5;
      local_1f8 = *(double *)&param_5->field_0x8;
      dVar1 = *(double *)&param_5->field_0x10;
      uVar11 = SUB84(dVar1,0);
      uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar1 = (local_228 - local_210) * local_1f8 + (local_230 - local_218) * local_200 +
              (local_220 - local_208) * dVar1 + local_res10 * param_7;
    }
    dVar9 = dVar5;
    if (param_4) {
      dVar9 = dVar5 / dVar7;
    }
    dVar6 = local_res10 * local_res10 * local_res18 * dVar9;
    dVar9 = dVar9 * dVar2 * local_res10;
    dVar2 = *param_9;
    uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar1 = ((dVar6 * param_6 - dVar9 * dVar1) - dVar2) *
            (this->SolverStiffness / ((dVar6 + dVar9) * dVar7 + dVar5));
    if (__real_3e45798ee0000000 < param_8) {
      dVar7 = (double)CONCAT44((uint)((ulonglong)param_8 >> 0x20) ^ uVar10,
                               SUB84(param_8,0) ^ (uint)__xmm_80000000000000008000000000000000) -
              dVar2;
      dVar5 = param_8 - dVar2;
      if (dVar1 <= param_8 - dVar2) {
        dVar5 = dVar1;
      }
      dVar1 = dVar5;
      if (dVar5 <= dVar7) {
        dVar1 = dVar7;
      }
    }
    local_1d8 = dVar1 * local_res8;
    local_1e0 = local_1f8 * local_1d8;
    local_1e8 = local_200 * local_1d8;
    dVar8 = dVar1 * dVar8;
    local_1d8 = (double)CONCAT44(uVar12,uVar11) * local_1d8;
    local_1f0 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,
                                 SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_200 = local_200 * local_1f0;
    local_1f8 = local_1f8 * local_1f0;
    local_1f0 = (double)CONCAT44(uVar12,uVar11) * local_1f0;
    ApplyRotationDelta(this,(TVector<double,3> *)&local_1e8,(TVector<double,3> *)&local_200);
    *param_9 = dVar1 + *param_9;
    dVar5 = *(double *)&param_5->field_0x8;
    dVar2 = *(double *)param_5;
    dVar8 = *(double *)&this->NetAngularImpulse;
    *(double *)&(this->NetAngularImpulse).field_0x10 =
         dVar1 * *(double *)&param_5->field_0x10 + *(double *)&(this->NetAngularImpulse).field_0x10;
    *(double *)&(this->NetAngularImpulse).field_0x8 =
         dVar1 * dVar5 + *(double *)&(this->NetAngularImpulse).field_0x8;
    *(double *)&this->NetAngularImpulse = dVar1 * dVar2 + dVar8;
  }
  else {
    local_res8 = *param_9;
    ::ApplyRotationConstraintSoftDD
              (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_res8);
    *param_9 = local_res8;
  }
  return;
}

// ApplyRotationConstraintSoftKD @ 143b98b50

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraintSoftKD
          (FPBDJointSolver *this,int param_1,int param_2,double param_3,double param_4,
          double param_5,bool param_6,TVector<double,3> *param_7,double param_8,double param_9,
          double param_10,double *param_11)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FConstraintSolverBody *pFVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double local_res8;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  
  dVar11 = 0.0;
  if (0.0 < this->InvMs[param_1]) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsDynamic(KIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                       ,0x585,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->InvMs[param_2] <= 0.0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsDynamic(DIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointSolverGaussSeidel.cpp"
                       ,0x586,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar10 = __real_3ff0000000000000;
  if (bChaos_Joint_ISPC_Enabled == false) {
    dVar3 = *(double *)param_7;
    uVar16 = SUB84(dVar3,0);
    uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
    puVar1 = &this->InvIs[param_2].field_0x20;
    puVar2 = &this->InvIs[param_2].field_0x40;
    dVar12 = *(double *)&param_7->field_0x8;
    uVar18 = SUB84(dVar12,0);
    uVar19 = (undefined4)((ulonglong)dVar12 >> 0x20);
    dVar4 = *(double *)&param_7->field_0x10;
    uVar20 = SUB84(dVar4,0);
    uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar3 = (dVar12 * *(double *)puVar1 + dVar3 * *(double *)(this->InvIs + param_2) +
            dVar4 * *(double *)puVar2) * dVar3 +
            (dVar12 * *(double *)(puVar1 + 8) + dVar3 * *(double *)&this->InvIs[param_2].field_0x8 +
            dVar4 * *(double *)(puVar2 + 8)) * dVar12 +
            (dVar12 * *(double *)&this->InvIs[param_2].field_0x30 +
             dVar3 * *(double *)&this->InvIs[param_2].field_0x10 +
            dVar4 * *(double *)&this->InvIs[param_2].field_0x50) * dVar4;
    if (__real_3f1a36e2e0000000 < param_5) {
      TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_168,this->InitConnectorRs + param_1,
                 this->ConnectorRs + param_1,__real_3ff0000000000000);
      TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_150,this->InitConnectorRs + param_2,
                 this->ConnectorRs + param_2,dVar10);
      dVar11 = *(double *)param_7;
      uVar16 = SUB84(dVar11,0);
      uVar17 = (undefined4)((ulonglong)dVar11 >> 0x20);
      dVar12 = *(double *)&param_7->field_0x8;
      uVar18 = SUB84(dVar12,0);
      uVar19 = (undefined4)((ulonglong)dVar12 >> 0x20);
      dVar4 = *(double *)&param_7->field_0x10;
      uVar20 = SUB84(dVar4,0);
      uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar11 = (local_160 - local_148) * dVar12 + (local_168 - local_150) * dVar11 +
               (local_158 - local_140) * dVar4 + param_3 * param_9;
    }
    dVar12 = dVar10;
    if (param_6) {
      dVar12 = dVar10 / dVar3;
    }
    dVar4 = *param_11;
    dVar13 = dVar12 * param_5 * param_3;
    dVar12 = param_3 * param_3 * param_4 * dVar12;
    dVar11 = ((dVar12 * param_8 - dVar13 * dVar11) - dVar4) *
             (this->SolverStiffness / ((dVar13 + dVar12) * dVar3 + dVar10));
    uVar15 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    if (__real_3e45798ee0000000 < param_10) {
      dVar12 = (double)CONCAT44((uint)((ulonglong)param_10 >> 0x20) ^ uVar15,
                                SUB84(param_10,0) ^ (uint)__xmm_80000000000000008000000000000000) -
               dVar4;
      dVar10 = param_10 - dVar4;
      if (dVar11 <= param_10 - dVar4) {
        dVar10 = dVar11;
      }
      dVar11 = dVar10;
      if (dVar10 <= dVar12) {
        dVar11 = dVar12;
      }
    }
    uVar14 = SUB84(dVar11 * dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)(dVar11 * dVar3) >> 0x20) ^ uVar15;
    pFVar9 = Body(this,param_2);
    pFVar5 = pFVar9->Body;
    *(float *)&(pFVar5->State).DQ =
         (float)((double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar17,uVar16)) +
         *(float *)&(pFVar5->State).DQ;
    *(float *)&(pFVar5->State).DQ.field_0x4 =
         (float)((double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar19,uVar18)) +
         *(float *)&(pFVar5->State).DQ.field_0x4;
    *(float *)&(pFVar5->State).DQ.field_0x8 =
         (float)((double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar21,uVar20)) +
         *(float *)&(pFVar5->State).DQ.field_0x8;
    UpdateDerivedState(this,param_2);
    iVar8 = -1;
    if (param_1 == 0) {
      iVar8 = 1;
    }
    *param_11 = dVar11 + *param_11;
    dVar11 = (double)iVar8 * dVar11;
    dVar10 = *(double *)&param_7->field_0x10;
    dVar3 = *(double *)param_7;
    dVar12 = *(double *)&this->NetAngularImpulse;
    *(double *)&(this->NetAngularImpulse).field_0x8 =
         dVar11 * *(double *)&param_7->field_0x8 + *(double *)&(this->NetAngularImpulse).field_0x8;
    *(double *)&(this->NetAngularImpulse).field_0x10 =
         dVar11 * dVar10 + *(double *)&(this->NetAngularImpulse).field_0x10;
    *(double *)&this->NetAngularImpulse = dVar11 * dVar3 + dVar12;
  }
  else {
    local_res8 = *param_11;
    ::ApplyRotationConstraintSoftKD
              (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               &local_res8);
    *param_11 = local_res8;
  }
  return;
}

// ApplyRotationConstraints @ 143b99f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationConstraints
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double _X;
  double dVar7;
  EJointAngularConstraintIndex EVar8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68 [2];
  
  EVar1 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  if (((EVar1 == Free) && ((param_3->AngularMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->AngularMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar2 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar3 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  bVar4 = FPBDJointUtilities::GetSoftTwistLimitEnabled(param_2,param_3);
  bVar5 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3);
  local_88._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_88._s_0.Y = _UNK_150689518;
  local_88._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_a8._s_0,
             (TVector<double> *)&local_88._s_0);
  local_68[0]._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_68[0]._s_0.Y = _UNK_150689518;
  local_68[0]._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)(this->ConnectorRs + 1),(TVector<double> *)&local_88._s_0,
             (TVector<double> *)&local_68[0]._s_0);
  dVar7 = local_a8._s_0.Y * local_88._s_0.Y + local_a8._s_0.X * local_88._s_0.X +
          local_a8._s_0.Z * local_88._s_0.Z;
  bVar6 = (double)Chaos_Joint_DegenerateRotationLimit <= dVar7;
  if ((dVar7 < (double)Chaos_Joint_DegenerateRotationLimit) && (6 < (byte)LogChaosJoint._0_1_)) {
    _X = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar7) && (_X = dVar7, __real_3ff0000000000000 <= dVar7)) {
      _X = __real_3ff0000000000000;
    }
    acos(_X);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  if (((param_2->bEnableTwistLimits != false) && (bVar6)) && (EVar1 == Limited)) {
    ApplyTwistConstraint(this,param_1,param_2,param_3,bVar4);
  }
  if (param_2->bEnableSwingLimits == false) goto LAB_143b9a22b;
  if (EVar2 == Limited) {
    if (EVar3 == Limited) {
      ApplyConeConstraint(this,param_1,param_2,param_3,bVar5);
      goto LAB_143b9a22b;
    }
    if (EVar3 != Locked) {
      if ((EVar3 != Free) || (!bVar6)) goto LAB_143b9a22b;
      EVar8 = Swing1;
LAB_143b9a1f4:
      ApplyDualConeSwingConstraint(this,param_1,param_2,param_3,EVar8,bVar5);
      goto LAB_143b9a22b;
    }
    ApplySingleLockedSwingConstraint(this,param_1,param_2,param_3,Swing2,false);
joined_r0x000143b9a1a4:
    if (bVar6) {
      ApplySwingConstraint(this,param_1,param_2,param_3,EVar3,bVar5);
    }
  }
  else {
    if (EVar2 == Locked) {
      if (EVar3 == Limited) {
        ApplySingleLockedSwingConstraint(this,param_1,param_2,param_3,Swing1,false);
        goto joined_r0x000143b9a1a4;
      }
      if (EVar3 != Free) goto LAB_143b9a22b;
      EVar8 = Swing1;
    }
    else {
      if (EVar2 != Free) goto LAB_143b9a22b;
      if (EVar3 == Limited) {
        if (!bVar6) goto LAB_143b9a22b;
        EVar8 = Swing2;
        goto LAB_143b9a1f4;
      }
      if (EVar3 != Locked) goto LAB_143b9a22b;
      EVar8 = Swing2;
    }
    ApplySingleLockedSwingConstraint(this,param_1,param_2,param_3,EVar8,false);
  }
LAB_143b9a22b:
  if ((param_2->bEnableTwistLimits == false) ||
     ((param_3->AngularMotionTypes).field0_0x0._s_0.X != Locked)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((param_2->bEnableSwingLimits == false) ||
      ((param_3->AngularMotionTypes).field0_0x0._s_0.Z != Locked)) ||
     ((param_3->AngularMotionTypes).field0_0x0._s_0.Y != Locked)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar6 != false) || (bVar4 != false)) {
    ApplyLockedRotationConstraints(this,param_1,param_2,param_3,bVar6,bVar4);
  }
  return;
}

// ApplyRotationDelta @ 143b9a320

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationDelta
          (FPBDJointSolver *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  if (bChaos_Joint_ISPC_Enabled) {
    ApplyRotationDelta2();
    return;
  }
  if (0.0 < this->InvMs[0]) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = this->SolverBodies[0].Body;
    dVar3 = *(double *)&param_1->field_0x10;
    dVar4 = *(double *)param_1;
    fVar1 = *(float *)&(pFVar5->State).DQ.field_0x8;
    *(float *)&(pFVar5->State).DQ.field_0x4 =
         (float)*(double *)&param_1->field_0x8 + *(float *)&(pFVar5->State).DQ.field_0x4;
    fVar2 = *(float *)&(pFVar5->State).DQ;
    *(float *)&(pFVar5->State).DQ.field_0x8 = (float)dVar3 + fVar1;
    *(float *)&(pFVar5->State).DQ = (float)dVar4 + fVar2;
  }
  if (0.0 < this->InvMs[1]) {
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = this->SolverBodies[1].Body;
    dVar3 = *(double *)&param_2->field_0x10;
    dVar4 = *(double *)param_2;
    fVar1 = *(float *)&(pFVar5->State).DQ.field_0x8;
    *(float *)&(pFVar5->State).DQ.field_0x4 =
         (float)*(double *)&param_2->field_0x8 + *(float *)&(pFVar5->State).DQ.field_0x4;
    fVar2 = *(float *)&(pFVar5->State).DQ;
    *(float *)&(pFVar5->State).DQ.field_0x8 = (float)dVar3 + fVar1;
    *(float *)&(pFVar5->State).DQ = (float)dVar4 + fVar2;
  }
  UpdateDerivedState(this);
  return;
}

// ApplyRotationDelta @ 143b9a470

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationDelta
          (FPBDJointSolver *this,int param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  FSolverBody *pFVar5;
  FConstraintSolverBody *pFVar6;
  
  pFVar6 = Body(this,param_1);
  dVar3 = *(double *)&param_2->field_0x10;
  dVar4 = *(double *)param_2;
  pFVar5 = pFVar6->Body;
  fVar1 = *(float *)&(pFVar5->State).DQ.field_0x8;
  *(float *)&(pFVar5->State).DQ.field_0x4 =
       (float)*(double *)&param_2->field_0x8 + *(float *)&(pFVar5->State).DQ.field_0x4;
  fVar2 = *(float *)&(pFVar5->State).DQ;
  *(float *)&(pFVar5->State).DQ.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).DQ = (float)dVar4 + fVar2;
  UpdateDerivedState(this,param_1);
  return;
}

// ApplyRotationDrives @ 143b9a5b0

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationDrives
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  if (((((param_3->bAngularTwistPositionDriveEnabled == false) &&
        (param_3->bAngularTwistVelocityDriveEnabled == false)) &&
       (param_3->bAngularSwingPositionDriveEnabled == false)) &&
      ((param_3->bAngularSwingVelocityDriveEnabled == false &&
       (param_3->bAngularSLerpPositionDriveEnabled == false)))) &&
     (param_3->bAngularSLerpVelocityDriveEnabled == false)) {
    return;
  }
  if (param_2->bEnableDrives == false) {
    return;
  }
  EVar1 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  EVar2 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar3 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  if (((param_3->bAngularSLerpPositionDriveEnabled != false) ||
      (param_3->bAngularSLerpVelocityDriveEnabled != false)) &&
     ((EVar1 != Locked && ((EVar2 != Locked && (EVar3 != Locked)))))) {
    ApplySLerpDrive(this,param_1,param_2,param_3);
    return;
  }
  if (((param_3->bAngularTwistPositionDriveEnabled == false) &&
      (param_3->bAngularTwistVelocityDriveEnabled == false)) || (EVar1 == Locked)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((param_3->bAngularSwingPositionDriveEnabled == false) &&
     (param_3->bAngularSwingVelocityDriveEnabled == false)) {
    bVar6 = false;
  }
  else {
    bVar6 = EVar2 != Locked;
    if (EVar3 != Locked) {
      bVar4 = true;
      goto LAB_143b9a67a;
    }
  }
  bVar4 = false;
LAB_143b9a67a:
  if (((bVar5 != false) || (bVar6 != false)) || (bVar4 != false)) {
    ApplySwingTwistDrives(this,param_1,param_2,param_3,bVar5,bVar6,bVar4);
  }
  return;
}

// ApplyRotationProjection @ 143b9acd0

void __thiscall
Chaos::FPBDJointSolver::ApplyRotationProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,TVector<double,3> *param_4,TVector<double,3> *param_5)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  EJointAngularConstraintIndex EVar6;
  
  dVar5 = FPBDJointUtilities::GetAngularProjection(param_2,param_3);
  if ((((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked) &&
      ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
     ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  bVar3 = FPBDJointUtilities::GetSoftTwistLimitEnabled(param_2,param_3);
  if (((param_2->bEnableTwistLimits != false) && (!bVar3)) &&
     ((param_3->bProjectionEnabled != false &&
      ((0.0 < dVar5 && ((param_3->AngularMotionTypes).field0_0x0._s_0.X != Free)))))) {
    ApplyTwistProjection(this,param_1,param_2,param_3,dVar5,bVar4,param_4,param_5);
  }
  bVar3 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3);
  if (param_2->bEnableSwingLimits == false) {
    return;
  }
  if (bVar3) {
    return;
  }
  if (param_3->bProjectionEnabled == false) {
    return;
  }
  if (dVar5 <= 0.0) {
    return;
  }
  EVar1 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar2 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  if (EVar1 == Limited) {
    if (EVar2 == Limited) {
      ApplyConeProjection(this,param_1,param_2,param_3,dVar5,bVar4,param_4,param_5);
      return;
    }
    if (EVar2 != Locked) {
      if (EVar2 != Free) {
        return;
      }
      EVar6 = Swing1;
LAB_143b9af47:
      ApplyDualConeSwingProjection(this,param_1,param_2,param_3,EVar6,dVar5,bVar4,param_4,param_5);
      return;
    }
    ApplySwingProjection(this,param_1,param_2,param_3,Swing2,dVar5,bVar4,param_4,param_5);
LAB_143b9ae6d:
    EVar6 = Swing1;
  }
  else {
    if (EVar1 == Locked) {
      if (EVar2 != Limited) {
        if (EVar2 == Locked) {
          ApplyDoubleLockedSwingProjection(this,param_1,param_2,param_3,dVar5,bVar4,param_4,param_5)
          ;
          return;
        }
        if (EVar2 != Free) {
          return;
        }
        goto LAB_143b9ae6d;
      }
      ApplySwingProjection(this,param_1,param_2,param_3,Swing1,dVar5,bVar4,param_4,param_5);
    }
    else {
      if (EVar1 != Free) {
        return;
      }
      if (EVar2 == Limited) {
        EVar6 = Swing2;
        goto LAB_143b9af47;
      }
      if (EVar2 != Locked) {
        return;
      }
    }
    EVar6 = Swing2;
  }
  ApplySwingProjection(this,param_1,param_2,param_3,EVar6,dVar5,bVar4,param_4,param_5);
  return;
}

// ApplySLerpDrive @ 143b9bac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointSolver::ApplySLerpDrive
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined4 uVar26;
  undefined1 auStackY_1b8 [32];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  dVar2 = FPBDJointUtilities::GetAngularSLerpDriveStiffness(param_2,param_3);
  dVar3 = FPBDJointUtilities::GetAngularSLerpDriveDamping(param_2,param_3);
  bVar16 = FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  dVar4 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
          *(double *)this->ConnectorRs;
  dVar5 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
          *(double *)&this->ConnectorRs[0].field_0x8;
  dVar8 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar7 = *(double *)&this->ConnectorRs[1].field_0x18;
  dVar9 = *(double *)(this->ConnectorRs + 1);
  dVar12 = *(double *)&this->ConnectorRs[1].field_0x8;
  dVar6 = *(double *)&this->ConnectorRs[0].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar25 = *(double *)&this->ConnectorRs[0].field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar17 = SUB84(__real_3ff0000000000000,0);
  uVar19 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  auVar21._8_4_ = SUB84(dVar5,0);
  auVar21._0_8_ = dVar5;
  auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar24 = auVar21._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar13 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x8;
  dVar10 = dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar25 * dVar9 +
           dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_168._s_0.Y =
       dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       dVar25 * dVar12 + dVar24 +
       dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar14 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x10;
  dVar15 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x18;
  auVar11._4_8_ = dVar24;
  auVar11._0_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar22._0_8_ = auVar11._0_8_ << 0x20;
  auVar22._8_4_ = SUB84(local_168._s_0.Y,0);
  auVar22._12_4_ = (int)((ulonglong)local_168._s_0.Y >> 0x20);
  dVar24 = dVar4 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar25 * dVar8 +
           dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar6 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar25 * dVar7 +
          dVar5 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
  local_168._s_0.X = (double)auVar22._8_8_;
  local_148._8_4_ = SUB84(dVar4,0);
  local_148._0_8_ = dVar4;
  local_148._12_4_ = uVar26;
  if (dVar4 * dVar15 + dVar24 * dVar14 +
      local_168._s_0.X * dVar13 + dVar10 * *(double *)&param_3->AngularDrivePositionTarget < 0.0) {
    uVar17 = (undefined4)__real_bff0000000000000;
    uVar19 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  auVar23._8_4_ = SUB84(dVar4,0);
  auVar23._0_8_ = dVar24;
  auVar23._12_4_ = uVar26;
  dVar5 = *(double *)&param_3->AngularDrivePositionTarget * (double)CONCAT44(uVar19,uVar17) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = dVar13 * (double)CONCAT44(uVar19,uVar17) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar25 = dVar14 * (double)CONCAT44(uVar19,uVar17) *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar7 = dVar15 * (double)CONCAT44(uVar19,uVar17) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar8 = dVar5 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar10 * dVar7 +
          dVar24 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar25 * local_168._s_0.X *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar9 = dVar5 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          local_168._s_0.X * dVar7 +
          auVar23._8_8_ * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar25 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = dVar5 * local_168._s_0.X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
          + dVar24 * dVar7 +
          dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar25 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = ((dVar8 * dVar8 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar8 * dVar8 +
          __real_3ff0000000000000) * dVar8;
  dVar9 = ((dVar9 * dVar9 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar9 * dVar9 +
          __real_3ff0000000000000) * dVar9;
  dVar6 = ((dVar6 * dVar6 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar6 * dVar6 +
          __real_3ff0000000000000) * dVar6;
  TRotation<double,3>::ToMatrixAxes
            (this->ConnectorRs + 1,(TVector<double,3> *)&local_128,(TVector<double,3> *)&local_110,
             (TVector<double,3> *)&local_f8);
  dVar25 = 0.0;
  dVar5 = 0.0;
  uVar18 = (uint)*(undefined8 *)&param_3->AngularDriveVelocityTarget &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar20 = (uint)((ulonglong)*(undefined8 *)&param_3->AngularDriveVelocityTarget >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar4 = 0.0;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar20,uVar18) &&
        (double)CONCAT44(uVar20,uVar18) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x8,
      uVar18 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar20 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar20,uVar18) &&
      (double)CONCAT44(uVar20,uVar18) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10,
     uVar18 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar20 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar20,uVar18) &&
     (double)CONCAT44(uVar20,uVar18) != __real_3f1a36e2e0000000)) {
    local_148._0_16_ = *(undefined1 (*) [16])&param_3->AngularDriveVelocityTarget;
    local_148._s_0.Z = (double)*(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_168._s_0,
               (TVector<double> *)&local_148._s_0);
    dVar25 = local_120 * local_168._s_0.Y + local_128 * local_168._s_0.X +
             local_118 * local_168._s_0.Z;
    dVar5 = local_108 * local_168._s_0.Y + local_110 * local_168._s_0.X +
            local_100 * local_168._s_0.Z;
    dVar4 = local_168._s_0.Y * local_f0 + local_168._s_0.X * local_f8 + local_e8 * local_168._s_0.Z;
  }
  ApplyRotationConstraintSoft
            (this,param_1,dVar2,dVar3,bVar16,(TVector<double,3> *)&local_128,dVar8 + dVar8,dVar25,
             0.0,(double *)&this->RotationDriveLambdas);
  ApplyRotationConstraintSoft
            (this,param_1,dVar2,dVar3,bVar16,(TVector<double,3> *)&local_110,dVar9 + dVar9,dVar5,0.0
             ,(double *)&(this->RotationDriveLambdas).field_0x8);
  ApplyRotationConstraintSoft
            (this,param_1,dVar2,dVar3,bVar16,(TVector<double,3> *)&local_f8,dVar6 + dVar6,dVar4,0.0,
             (double *)&(this->RotationDriveLambdas).field_0x10);
  return;
}

// ApplySingleLockedSwingConstraint @ 143b9c0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplySingleLockedSwingConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double local_res8;
  TVector<double,3> local_88 [4];
  
  FPBDJointUtilities::GetLockedSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_4,local_88,&local_res8);
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  uVar4 = (uint)((ulonglong)local_res8 >> 0x20);
  uVar5 = SUB84(local_res8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = uVar4 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (this->AngleTolerance <= (double)CONCAT44(uVar6,uVar5) &&
      (double)CONCAT44(uVar6,uVar5) != this->AngleTolerance) {
    if (param_5) {
      dVar2 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
      dVar3 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
      bVar1 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
      ApplyRotationConstraintSoft
                (this,param_1,dVar2,dVar3,bVar1,local_88,local_res8,0.0,0.0,&this->SwingSoftLambda);
    }
    else {
      dVar2 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      if (0.0 < this->InvMs[0]) {
        if (0.0 < this->InvMs[1]) {
          ApplyRotationConstraintDD(this,dVar2,local_88,local_res8,param_4);
        }
        else {
          ApplyRotationConstraintKD
                    (this,1,0,dVar2,local_88,
                     (double)CONCAT44(uVar4 ^ __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(local_res8,0) ^
                                      (uint)__xmm_80000000000000008000000000000000),param_4);
        }
      }
      else {
        ApplyRotationConstraintKD(this,0,1,dVar2,local_88,local_res8,param_4);
      }
    }
    dVar2 = this->AngularViolation;
    if (dVar2 <= (double)CONCAT44(uVar6,uVar5)) {
      dVar2 = (double)CONCAT44(uVar6,uVar5);
    }
    this->AngularViolation = dVar2;
  }
  return;
}

// ApplySingleLockedSwingProjection @ 143b9c2f0

void __thiscall
Chaos::FPBDJointSolver::ApplySingleLockedSwingProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,double param_5,
          bool param_6,TVector<double,3> *param_7,TVector<double,3> *param_8)

{
  ApplySwingProjection(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// ApplySingleLockedSwingVelocityConstraint @ 143b9c310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplySingleLockedSwingVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double local_res8;
  double local_48;
  double dStack_40;
  double local_38;
  
  dVar7 = __real_3f1a36e2e0000000;
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetAngularImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) && (!param_5))
  {
    if (Swing1 < param_4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (__real_3e45798ee0000000 <
        *(double *)(&this->LastPs[-5].field_0x0 + (longlong)(int)param_4 * 8)) {
      FPBDJointUtilities::GetLockedSwingAxisAngle
                (this->ConnectorRs,this->ConnectorRs + 1,param_4,(TVector<double,3> *)&local_48,
                 &local_res8);
      auVar6._0_8_ = dStack_40 * dStack_40;
      auVar6._8_8_ = 0;
      dVar5 = local_48 * local_48 + auVar6._0_8_ + local_38 * local_38;
      if (dVar7 <= dVar5) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar5;
        auVar6 = sqrtpd(auVar6,auVar3);
        dVar7 = __real_3ff0000000000000 / auVar6._0_8_;
        local_48 = local_48 * dVar7;
        dStack_40 = dStack_40 * dVar7;
        local_38 = local_38 * dVar7;
      }
      else {
        local_48 = ___xmm_00000000000000003ff0000000000000;
        dStack_40 = _UNK_150689518;
        local_38 = 0.0;
      }
      dVar7 = this->SolverStiffness;
      dVar5 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      ApplyAngularVelocityConstraint(this,dVar5 * dVar7,(TVector<double,3> *)&local_48,0.0);
    }
  }
  return;
}

// ApplySphereProjection @ 143b9c4d0

void __thiscall
Chaos::FPBDJointSolver::ApplySphereProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6)

{
  float fVar1;
  FSolverBody *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  FPBDJointUtilities::GetSphericalAxisDelta
            (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_1c0,&local_1d8);
  local_1d8 = local_1d8 - param_3->LinearLimit;
  if (local_1d8 <= 0.0) {
    local_1d8 = 0.0;
  }
  uVar13 = SUB84(local_1d8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)local_1d8 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (0.0 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != 0.0) {
    local_168 = *(double *)&this->InvIs[1].field_0x40;
    dStack_160 = *(double *)&this->InvIs[1].field_0x48;
    pFVar2 = this->SolverBodies[1].Body;
    local_1a8 = *(double *)(this->InvIs + 1);
    dStack_1a0 = *(double *)&this->InvIs[1].field_0x8;
    local_1d0 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar2->State).P.field_0x8
    ;
    local_188 = *(double *)&this->InvIs[1].field_0x20;
    dStack_180 = *(double *)&this->InvIs[1].field_0x28;
    local_158 = *(double *)&this->InvIs[1].field_0x50;
    uStack_150 = *(undefined8 *)&this->InvIs[1].field_0x58;
    local_198 = *(double *)&this->InvIs[1].field_0x10;
    uStack_190 = *(undefined8 *)&this->InvIs[1].field_0x18;
    local_178 = *(double *)&this->InvIs[1].field_0x30;
    uStack_170 = *(undefined8 *)&this->InvIs[1].field_0x38;
    dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 - *(double *)&(pFVar2->State).P.field_0x10;
    dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar2->State).P;
    dVar7 = local_1b0 * local_1d0 - local_1b8 * dVar10;
    dVar5 = dVar10 * local_1c0 - local_1b0 * dVar11;
    local_138 = *(undefined8 *)&this->InvIs[1].field_0x70;
    uStack_130 = *(undefined8 *)&this->InvIs[1].field_0x78;
    dVar6 = local_1b8 * dVar11 - local_1d0 * local_1c0;
    local_148 = *(undefined8 *)&this->InvIs[1].field_0x60;
    uStack_140 = *(undefined8 *)&this->InvIs[1].field_0x68;
    dVar4 = this->InvMs[1] * param_4;
    uVar15 = SUB84(param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar16 = (uint)((ulonglong)param_4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar13 = SUB84(dVar4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar14 = (uint)((ulonglong)dVar4 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_128 = *(double *)(this->InvIs + 1);
    dStack_120 = *(double *)&this->InvIs[1].field_0x8;
    local_108 = *(double *)&this->InvIs[1].field_0x20;
    dStack_100 = *(double *)&this->InvIs[1].field_0x28;
    local_d8 = *(double *)&this->InvIs[1].field_0x50;
    uStack_d0 = *(undefined8 *)&this->InvIs[1].field_0x58;
    local_b8 = *(undefined8 *)&this->InvIs[1].field_0x70;
    uStack_b0 = *(undefined8 *)&this->InvIs[1].field_0x78;
    dVar4 = __real_3ff0000000000000 /
            ((dStack_180 * dVar5 + dStack_1a0 * dVar7 + dStack_160 * dVar6) * dVar5 +
             (local_188 * dVar5 + local_1a8 * dVar7 + local_168 * dVar6) * dVar7 +
             (local_178 * dVar5 + local_198 * dVar7 + local_158 * dVar6) * dVar6 + this->InvMs[1]);
    local_118 = *(double *)&this->InvIs[1].field_0x10;
    uStack_110 = *(undefined8 *)&this->InvIs[1].field_0x18;
    dVar9 = local_1b0 * local_1d8 * dVar4;
    dVar8 = local_1c0 * local_1d8 * dVar4;
    dVar4 = local_1b8 * local_1d8 * dVar4;
    dVar5 = (double)CONCAT44(uVar14,uVar13) * dVar8;
    local_1c8 = (double)CONCAT44(uVar14,uVar13) * dVar4;
    dVar6 = (double)CONCAT44(uVar14,uVar13) * dVar9;
    dVar7 = dVar8 * dVar10 - dVar9 * dVar11;
    dVar9 = dVar9 * local_1d0 - dVar4 * dVar10;
    dVar4 = dVar4 * dVar11 - dVar8 * local_1d0;
    local_e8 = *(double *)&this->InvIs[1].field_0x40;
    dStack_e0 = *(double *)&this->InvIs[1].field_0x48;
    local_c8 = *(undefined8 *)&this->InvIs[1].field_0x60;
    uStack_c0 = *(undefined8 *)&this->InvIs[1].field_0x68;
    local_f8 = *(double *)&this->InvIs[1].field_0x30;
    uStack_f0 = *(undefined8 *)&this->InvIs[1].field_0x38;
    dVar10 = (local_108 * dVar7 + local_128 * dVar9 + local_e8 * dVar4) *
             (double)CONCAT44(uVar16,uVar15);
    dVar8 = (dStack_100 * dVar7 + dStack_120 * dVar9 + dStack_e0 * dVar4) *
            (double)CONCAT44(uVar16,uVar15);
    dVar4 = (local_f8 * dVar7 + local_118 * dVar9 + local_d8 * dVar4) *
            (double)CONCAT44(uVar16,uVar15);
    if (pFVar2 == (FSolverBody *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x26,L"");
      if (bVar12) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar7 = local_1c8;
    pFVar2 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar2->State).DP.field_0x4;
    *(float *)&(pFVar2->State).DP = (float)dVar5 + *(float *)&(pFVar2->State).DP;
    *(float *)&(pFVar2->State).DP.field_0x4 = (float)local_1c8 + fVar1;
    *(float *)&(pFVar2->State).DP.field_0x8 = (float)dVar6 + *(float *)&(pFVar2->State).DP.field_0x8
    ;
    *(float *)&(pFVar2->State).DQ = (float)dVar10 + *(float *)&(pFVar2->State).DQ;
    *(float *)&(pFVar2->State).DQ.field_0x4 = (float)dVar8 + *(float *)&(pFVar2->State).DQ.field_0x4
    ;
    *(float *)&(pFVar2->State).DQ.field_0x8 = (float)dVar4 + *(float *)&(pFVar2->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)param_5 = dVar5 + *(double *)param_5;
    *(double *)&param_5->field_0x8 = dVar7 + *(double *)&param_5->field_0x8;
    *(double *)&param_5->field_0x10 = dVar6 + *(double *)&param_5->field_0x10;
    *(double *)param_6 = dVar10 + *(double *)param_6;
    *(double *)&param_6->field_0x8 = dVar8 + *(double *)&param_6->field_0x8;
    *(double *)&param_6->field_0x10 = dVar4 + *(double *)&param_6->field_0x10;
  }
  return;
}

// ApplySphericalPositionConstraint @ 143b9ca40

void __thiscall
Chaos::FPBDJointSolver::ApplySphericalPositionConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double local_res8;
  double local_78;
  double dStack_70;
  double local_68;
  undefined1 local_60 [16];
  double local_50;
  
  FPBDJointUtilities::GetSphericalAxisDelta
            (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_78,&local_res8);
  dVar4 = param_3->LinearLimit;
  dVar1 = local_res8 - dVar4;
  if (this->PositionTolerance <= dVar1 && dVar1 != this->PositionTolerance) {
    bVar2 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3);
    if (bVar2) {
      dVar4 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
      dVar3 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
      bVar2 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_2,param_3);
      ApplyPositionConstraintSoft
                (this,param_1,dVar4,dVar3,bVar2,(TVector<double,3> *)&local_78,dVar1,0.0,0.0,
                 &this->LinearSoftLambda);
    }
    else {
      dVar3 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
      local_60._8_4_ = SUB84(dStack_70 * dVar4,0);
      local_60._0_8_ = local_78 * dVar4;
      local_60._12_4_ = (int)((ulonglong)(dStack_70 * dVar4) >> 0x20);
      local_50 = local_68 * dVar4;
      ApplyPositionConstraint
                (this,dVar3,(TVector<double,3> *)&local_78,dVar1,(TVector<double,3> *)local_60,-1);
    }
    dVar4 = dVar1 * dVar1;
    if (dVar1 * dVar1 <= this->LinearViolationSq) {
      dVar4 = this->LinearViolationSq;
    }
    this->LinearViolationSq = dVar4;
  }
  return;
}

// ApplySphericalVelocityConstraint @ 143b9cbc0

void __thiscall
Chaos::FPBDJointSolver::ApplySphericalVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined8 uVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double local_res8;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetLinearImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetLinearImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetLinearImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (bVar3 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3), !bVar3)) {
    FPBDJointUtilities::GetSphericalAxisDelta
              (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_48,&local_res8);
    dVar2 = this->SolverStiffness;
    dVar4 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    dVar5 = param_3->LinearLimit;
    local_20 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&this->ConnectorXs[0].field_0x10;
    local_28 = *(double *)&this->ConnectorXs[1].field_0x8 -
               *(double *)&this->ConnectorXs[0].field_0x8;
    local_30 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
    if (dVar5 < local_res8) {
      local_20 = dVar5 * local_38;
      local_28 = dVar5 * local_40;
      local_30 = dVar5 * local_48;
    }
    dVar5 = 0.0;
    if ((param_3->LinearRestitution != 0.0) &&
       ((double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution <
        *(double *)&this->InitConstraintAxisLinearVelocities)) {
      dVar5 = param_3->LinearRestitution * *(double *)&this->InitConstraintAxisLinearVelocities;
      dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    ApplyLinearVelocityConstraint
              (this,dVar4 * dVar2,(TVector<double,3> *)&local_48,(TVector<double,3> *)&local_30,
               dVar5);
  }
  return;
}

// ApplySwingConstraint @ 143b9cd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplySwingConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double local_res8;
  TVector<double,3> local_78 [4];
  
  FPBDJointUtilities::GetSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_2->SwingTwistAngleTolerance,param_4,
             local_78,&local_res8);
  dVar4 = 0.0;
  if ((Swing1 < param_4) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7ab,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  dVar1 = *(double *)
           ((longlong)(&param_3->ConnectorTransforms + 1) + ((longlong)(int)param_4 + 0xd) * 8);
  uVar9 = SUB84(local_res8,0);
  uVar10 = (uint)((ulonglong)local_res8 >> 0x20);
  if (local_res8 <= dVar1) {
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
        local_res8) goto LAB_143b9ce67;
    local_78[0]._0_4_ = local_78[0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_78[0]._4_4_ = local_78[0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_78[0]._8_4_ = local_78[0]._8_4_ ^ _UNK_15066df78;
    local_78[0]._12_4_ = local_78[0]._12_4_ ^ _UNK_15066df7c;
    uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = uVar10 ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = (uint)local_78[0]._16_8_;
    local_78[0]._20_4_ = SUB84(local_78[0]._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_;
    local_78[0]._16_4_ = uVar8 ^ (uint)__xmm_80000000000000008000000000000000;
  }
  dVar4 = (double)CONCAT44(uVar10,uVar9) - dVar1;
LAB_143b9ce67:
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  if (this->AngleTolerance <= dVar4 && dVar4 != this->AngleTolerance) {
    if (param_5) {
      dVar1 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
      dVar3 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
      bVar7 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
      ApplyRotationConstraintSoft
                (this,param_1,dVar1,dVar3,bVar7,local_78,dVar4,0.0,0.0,&this->SwingSoftLambda);
    }
    else {
      dVar1 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      if (0.0 < this->InvMs[0]) {
        if (0.0 < this->InvMs[1]) {
          ApplyRotationConstraintDD(this,dVar1,local_78,dVar4,param_4);
        }
        else {
          ApplyRotationConstraintKD
                    (this,1,0,dVar1,local_78,
                     (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar6,
                                      SUB84(dVar4,0) ^ uVar5),param_4);
        }
      }
      else {
        ApplyRotationConstraintKD(this,0,1,dVar1,local_78,dVar4,param_4);
      }
    }
    dVar1 = this->AngularViolation;
    if (this->AngularViolation <= dVar4) {
      dVar1 = dVar4;
    }
    this->AngularViolation = dVar1;
  }
  return;
}

// ApplySwingProjection @ 143b9d010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplySwingProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,double param_5,
          bool param_6,TVector<double,3> *param_7,TVector<double,3> *param_8)

{
  float fVar1;
  double dVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double local_res8;
  double local_88;
  double local_80;
  double local_78;
  
  FPBDJointUtilities::GetSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_2->SwingTwistAngleTolerance,param_4,
             (TVector<double,3> *)&local_88,&local_res8);
  dVar6 = 0.0;
  dVar5 = 0.0;
  if (Swing1 < param_4) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar2 = *(double *)
           ((longlong)(&param_3->ConnectorTransforms + 1) + ((longlong)(int)param_4 + 0xd) * 8);
  if (local_res8 <= dVar2) {
    if (local_res8 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
      dVar5 = dVar2 + local_res8;
    }
  }
  else {
    dVar5 = local_res8 - dVar2;
  }
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  if (0.0 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar8 = 0.0;
    dVar10 = 0.0;
    uVar12 = SUB84(dVar5 * param_5,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)(dVar5 * param_5) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar2 = (double)CONCAT44(uVar13,uVar12) * local_88;
    dVar7 = (double)CONCAT44(uVar13,uVar12) * local_80;
    dVar5 = (double)CONCAT44(uVar13,uVar12) * local_78;
    if (param_6) {
      pFVar3 = this->SolverBodies[1].Body;
      uVar12 = SUB84(param_5,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar13 = (uint)((ulonglong)param_5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar8 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar3->State).P.field_0x8;
      dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar3->State).P.field_0x10;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar3->State).P;
      dVar6 = (dVar10 * dVar7 - dVar8 * dVar5) * (double)CONCAT44(uVar13,uVar12);
      dVar10 = (dVar11 * dVar5 - dVar10 * dVar2) * (double)CONCAT44(uVar13,uVar12);
      dVar8 = (dVar8 * dVar2 - dVar11 * dVar7) * (double)CONCAT44(uVar13,uVar12);
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
    *(float *)&(pFVar3->State).DP = (float)dVar6 + *(float *)&(pFVar3->State).DP;
    *(float *)&(pFVar3->State).DP.field_0x4 = (float)dVar10 + fVar1;
    *(float *)&(pFVar3->State).DP.field_0x8 = (float)dVar8 + *(float *)&(pFVar3->State).DP.field_0x8
    ;
    *(float *)&(pFVar3->State).DQ = (float)dVar2 + *(float *)&(pFVar3->State).DQ;
    *(float *)&(pFVar3->State).DQ.field_0x4 = (float)dVar7 + *(float *)&(pFVar3->State).DQ.field_0x4
    ;
    *(float *)&(pFVar3->State).DQ.field_0x8 = (float)dVar5 + *(float *)&(pFVar3->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)&param_7->field_0x8 = dVar10 + *(double *)&param_7->field_0x8;
    *(double *)&param_7->field_0x10 = dVar8 + *(double *)&param_7->field_0x10;
    *(double *)param_7 = dVar6 + *(double *)param_7;
    *(double *)param_8 = dVar2 + *(double *)param_8;
    *(double *)&param_8->field_0x8 = dVar7 + *(double *)&param_8->field_0x8;
    *(double *)&param_8->field_0x10 = dVar5 + *(double *)&param_8->field_0x10;
  }
  return;
}

// ApplySwingTwistDrives @ 143b9d340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplySwingTwistDrives
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4,bool param_5,bool param_6)

{
  TQuat<double> *this_00;
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  double local_res8;
  double local_res10;
  double local_res20;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8 [8];
  
  dVar6 = __real_3ff0000000000000;
  dVar19 = *(double *)&param_3->AngularDrivePositionTarget;
  dVar3 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x8;
  this_00 = (TQuat<double> *)(this->ConnectorRs + 1);
  dVar4 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x10;
  dVar5 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x18;
  auVar14 = *(undefined1 (*) [16])this->ConnectorRs;
  auVar15 = *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10;
  dVar20 = auVar15._8_8_;
  dVar12 = auVar14._0_8_;
  auVar13._8_4_ = auVar15._8_4_;
  auVar13._0_8_ = dVar20;
  auVar13._12_4_ = auVar15._12_4_;
  dVar8 = auVar14._8_8_;
  auVar17._8_4_ = auVar14._8_4_;
  auVar17._0_8_ = dVar8;
  auVar17._12_4_ = auVar14._12_4_;
  dVar9 = auVar15._0_8_;
  auVar14._8_4_ = auVar15._0_4_;
  auVar14._0_8_ = dVar9;
  auVar14._12_4_ = auVar15._4_4_;
  dVar10 = dVar12 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar20 * dVar19 +
           dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar11 = dVar12 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar13._8_8_ * dVar3 +
           auVar17._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar14._8_8_ * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar2 = dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar20 * dVar4 +
          dVar8 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = dVar12 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar20 * dVar5 +
           dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = __real_bff0000000000000;
  if (0.0 <= dVar11 * *(double *)&this->ConnectorRs[1].field_0x8 + dVar10 * this_00->X +
             dVar12 * *(double *)&this->ConnectorRs[1].field_0x18 +
             dVar2 * *(double *)&this->ConnectorRs[1].field_0x10) {
    dVar8 = __real_3ff0000000000000;
  }
  dVar3 = this_00->X;
  dVar4 = *(double *)&this->ConnectorRs[1].field_0x8;
  dVar9 = dVar8 * dVar10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar10 = dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = dVar2 * dVar8 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar11 = dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar5 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar20 = *(double *)&this->ConnectorRs[1].field_0x18;
  auVar15._8_4_ = SUB84(dVar11,0);
  auVar15._0_8_ = dVar11;
  auVar15._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar18._8_4_ = SUB84(dVar10,0);
  auVar18._0_8_ = dVar10;
  auVar18._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar16._8_4_ = SUB84(dVar2,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar12 = dVar9 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar11 * dVar3 +
           dVar10 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar2 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar8 = dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar15._8_8_ * dVar4 +
          auVar18._8_8_ * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar16._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar19 = dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar11 * dVar5 +
           dVar10 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar2 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar11 * dVar20 +
          dVar10 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar2 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar12 + dVar12;
  dVar8 = dVar8 + dVar8;
  dVar19 = dVar19 + dVar19;
  uVar23 = SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)dVar8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar8 = (double)CONCAT44(uVar25,uVar23) * dVar9 + dVar19 * dVar12;
  dVar12 = dVar19 * dVar9 - (double)CONCAT44(uVar25,uVar23) * dVar12;
  uVar24 = SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar26 = (uint)((ulonglong)dVar8 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar8 = FPBDJointUtilities::GetAngularTwistDriveStiffness(param_2,param_3);
  local_res10 = FPBDJointUtilities::GetAngularTwistDriveDamping(param_2,param_3);
  dVar9 = FPBDJointUtilities::GetAngularTwistDriveTorqueLimit(param_2,param_3);
  dVar10 = FPBDJointUtilities::GetAngularSwingDriveStiffness(param_2,param_3);
  dVar11 = FPBDJointUtilities::GetAngularSwingDriveDamping(param_2,param_3);
  local_res8 = FPBDJointUtilities::GetAngularSwingDriveTorqueLimit(param_2,param_3);
  bVar7 = FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  pdVar1 = &this->AngleTolerance;
  local_res8 = local_res8 * param_1 * param_1;
  uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((param_4) &&
     (((dVar19 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
       *pdVar1 <= dVar19 && dVar19 != *pdVar1 && (0.0 < dVar8)) || (0.0 < local_res10)))) {
    local_res20 = *(double *)&this->RotationDriveLambdas;
    local_128._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_128._s_0.Y = _UNK_150689518;
    local_128._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (this_00,(TVector<double> *)&local_108._s_0,(TVector<double> *)&local_128._s_0);
    local_e8[0]._s_0.X = local_108._s_0.X;
    local_e8[0]._s_0.Y = local_108._s_0.Y;
    local_e8[0]._s_0.Z = local_108._s_0.Z;
    ApplyRotationConstraintSoft
              (this,param_1,dVar8,local_res10,bVar7,(TVector<double,3> *)&local_e8[0]._s_0,dVar2,
               *(double *)&param_3->AngularDriveVelocityTarget,dVar9 * param_1 * param_1,
               &local_res20);
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    *(double *)&this->RotationDriveLambdas = local_res20;
  }
  if ((!param_5) ||
     (((dVar8 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) & uVar25,SUB84(dVar12,0) & uVar23
                                ), dVar8 < *pdVar1 || dVar8 == *pdVar1 || (dVar10 <= 0.0)) &&
      (dVar11 <= 0.0)))) {
    uVar21 = SUB84(local_res8,0);
    uVar22 = (undefined4)((ulonglong)local_res8 >> 0x20);
  }
  else {
    local_res10 = *(double *)&(this->RotationDriveLambdas).field_0x10;
    local_e8[0]._s_0.Z = dVar6;
    local_e8[0]._s_0.X = 0.0;
    local_e8[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(this->ConnectorRs + 1),(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_e8[0]._s_0);
    uVar21 = SUB84(local_res8,0);
    uVar22 = (undefined4)((ulonglong)local_res8 >> 0x20);
    local_128._s_0.X = local_108._s_0.X;
    local_128._s_0.Y = local_108._s_0.Y;
    local_128._s_0.Z = local_108._s_0.Z;
    ApplyRotationConstraintSoft
              (this,param_1,dVar10,dVar11,bVar7,(TVector<double,3> *)&local_128._s_0,dVar12,
               *(double *)&(param_3->AngularDriveVelocityTarget).field_0x10,local_res8,&local_res10)
    ;
    uVar25 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar23 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    *(double *)&(this->RotationDriveLambdas).field_0x10 = local_res10;
  }
  if ((param_6) &&
     (((dVar12 = (double)CONCAT44(uVar26 & uVar25,uVar24 & uVar23),
       this->AngleTolerance <= dVar12 && dVar12 != this->AngleTolerance && (0.0 < dVar10)) ||
      (0.0 < dVar11)))) {
    local_res8 = *(double *)&(this->RotationDriveLambdas).field_0x8;
    local_e8[0]._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_e8[0]._s_0.Y = _UNK_15061cbc8;
    local_e8[0]._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(this->ConnectorRs + 1),(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_e8[0]._s_0);
    local_128._s_0.X = local_108._s_0.X;
    local_128._s_0.Y = local_108._s_0.Y;
    local_128._s_0.Z = local_108._s_0.Z;
    ApplyRotationConstraintSoft
              (this,param_1,dVar10,dVar11,bVar7,(TVector<double,3> *)&local_128._s_0,
               (double)CONCAT44(uVar26,uVar24),
               *(double *)&(param_3->AngularDriveVelocityTarget).field_0x8,
               (double)CONCAT44(uVar22,uVar21),&local_res8);
    *(double *)&(this->RotationDriveLambdas).field_0x8 = local_res8;
  }
  return;
}

// ApplySwingVelocityConstraint @ 143b9d9d0

void __thiscall
Chaos::FPBDJointSolver::ApplySwingVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,EJointAngularConstraintIndex param_4,bool param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  double local_res8;
  TVector<double,3> local_58 [2];
  
  if ((((__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)*(undefined8 *)&this->NetAngularImpulse &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
       (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
       __real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
      __real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) && (!param_5))
  {
    if ((Swing1 < param_4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (__real_3e45798ee0000000 <
        *(double *)(&this->LastPs[-5].field_0x0 + (longlong)(int)param_4 * 8)) {
      FPBDJointUtilities::GetSwingAxisAngle
                (this->ConnectorRs,this->ConnectorRs + 1,param_2->SwingTwistAngleTolerance,param_4,
                 local_58,&local_res8);
      dVar2 = this->SolverStiffness;
      dVar6 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
      uVar7 = 0;
      uVar8 = 0;
      if (param_3->SwingRestitution != 0.0) {
        if ((Swing1 < param_4) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar3 = *(double *)
                 (&((TVector<double,3> *)(this->LastQs + 2))[1].field_0x0 +
                 (longlong)(int)param_4 * 8);
        if ((double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution < dVar3) {
          dVar3 = dVar3 * param_3->SwingRestitution;
          uVar7 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar8 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        }
      }
      ApplyAngularVelocityConstraint(this,dVar6 * dVar2,local_58,(double)CONCAT44(uVar8,uVar7));
    }
  }
  return;
}

// ApplyTranslateProjection @ 143b9db90

void __thiscall
Chaos::FPBDJointSolver::ApplyTranslateProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6)

{
  double dVar1;
  double dVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  double local_res8;
  double local_58;
  double local_50;
  double local_48;
  
  FPBDJointUtilities::GetSphericalAxisDelta
            (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_58,&local_res8);
  local_res8 = local_res8 - param_3->LinearLimit;
  if (local_res8 <= 0.0) {
    local_res8 = 0.0;
  }
  if (0.0 < local_res8) {
    uVar9 = SUB84(local_res8 * param_4,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = (uint)((ulonglong)(local_res8 * param_4) >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar6 = (double)CONCAT44(uVar10,uVar9) * local_58;
    dVar7 = (double)CONCAT44(uVar10,uVar9) * local_50;
    dVar5 = (double)CONCAT44(uVar10,uVar9) * local_48;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    *(float *)&(pFVar3->State).DP = (float)dVar6 + *(float *)&(pFVar3->State).DP;
    *(float *)&(pFVar3->State).DP.field_0x4 = (float)dVar7 + *(float *)&(pFVar3->State).DP.field_0x4
    ;
    *(float *)&(pFVar3->State).DP.field_0x8 = (float)dVar5 + *(float *)&(pFVar3->State).DP.field_0x8
    ;
    dVar1 = *(double *)&this->ConnectorXs[1].field_0x8;
    *(double *)(this->ConnectorXs + 1) = dVar6 + *(double *)(this->ConnectorXs + 1);
    dVar2 = *(double *)&this->ConnectorXs[1].field_0x10;
    *(double *)&this->ConnectorXs[1].field_0x8 = dVar7 + dVar1;
    *(double *)&this->ConnectorXs[1].field_0x10 = dVar5 + dVar2;
    *(double *)param_5 = dVar6 + *(double *)param_5;
    *(double *)&param_5->field_0x8 = dVar7 + *(double *)&param_5->field_0x8;
    *(double *)&param_5->field_0x10 = dVar5 + *(double *)&param_5->field_0x10;
  }
  return;
}

// ApplyTwistConstraint @ 143b9dd00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::ApplyTwistConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double local_res20;
  undefined1 local_188 [24];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  
  FPBDJointUtilities::GetTwistAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)local_188,&local_res20);
  uVar7 = __xmm_80000000000000008000000000000000._4_4_;
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  dVar1 = *(double *)&param_3->AngularLimits;
  uVar8 = SUB84(local_res20,0);
  uVar9 = (uint)((ulonglong)local_res20 >> 0x20);
  dVar3 = 0.0;
  if (local_res20 <= dVar1) {
    if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
        local_res20) goto LAB_143b9ddb7;
    local_188._0_4_ = local_188._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_188._4_4_ = local_188._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_188._8_4_ = local_188._8_4_ ^ _UNK_15066df78;
    local_188._12_4_ = local_188._12_4_ ^ _UNK_15066df7c;
    uVar8 = uVar8 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar9 = uVar9 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_188._16_8_ =
         CONCAT44(SUB84(local_188._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_188._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  dVar3 = (double)CONCAT44(uVar9,uVar8) - dVar1;
LAB_143b9ddb7:
  if (6 < (byte)LogChaosJoint._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
  }
  if (this->AngleTolerance <= dVar3 && dVar3 != this->AngleTolerance) {
    if (param_4) {
      dVar1 = FPBDJointUtilities::GetSoftTwistStiffness(param_2,param_3);
      dVar2 = FPBDJointUtilities::GetSoftTwistDamping(param_2,param_3);
      bVar5 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
      ApplyRotationConstraintSoft
                (this,param_1,dVar1,dVar2,bVar5,(TVector<double,3> *)local_188,dVar3,0.0,0.0,
                 &this->TwistSoftLambda);
    }
    else {
      dVar1 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
      if (0.0 < this->InvMs[0]) {
        if (0.0 < this->InvMs[1]) {
          dVar2 = (double)CONCAT44(local_188._4_4_,local_188._0_4_);
          dVar4 = (double)CONCAT44(local_188._12_4_,local_188._8_4_);
          local_158 = *(double *)&this->InvIs[0].field_0x20 * dVar4 + *(double *)this->InvIs * dVar2
                      + *(double *)&this->InvIs[0].field_0x40 * (double)local_188._16_8_;
          local_150 = *(double *)&this->InvIs[0].field_0x28 * dVar4 +
                      *(double *)&this->InvIs[0].field_0x8 * dVar2 +
                      *(double *)&this->InvIs[0].field_0x48 * (double)local_188._16_8_;
          local_148 = *(double *)&this->InvIs[0].field_0x30 * dVar4 +
                      *(double *)&this->InvIs[0].field_0x10 * dVar2 +
                      *(double *)&this->InvIs[0].field_0x50 * (double)local_188._16_8_;
          local_170 = *(double *)&this->InvIs[1].field_0x20 * dVar4 +
                      *(double *)(this->InvIs + 1) * dVar2 +
                      *(double *)&this->InvIs[1].field_0x40 * (double)local_188._16_8_;
          local_168 = *(double *)&this->InvIs[1].field_0x28 * dVar4 +
                      *(double *)&this->InvIs[1].field_0x8 * dVar2 +
                      *(double *)&this->InvIs[1].field_0x48 * (double)local_188._16_8_;
          local_160 = *(double *)&this->InvIs[1].field_0x30 * dVar4 +
                      *(double *)&this->InvIs[1].field_0x10 * dVar2 +
                      *(double *)&this->InvIs[1].field_0x50 * (double)local_188._16_8_;
          dVar1 = (dVar1 * this->SolverStiffness * dVar3) /
                  (local_170 * dVar2 + local_168 * dVar4 + local_160 * (double)local_188._16_8_ +
                  local_158 * dVar2 + local_150 * dVar4 + local_148 * (double)local_188._16_8_);
          local_158 = local_158 * dVar1;
          uVar6 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar7 = (uint)((ulonglong)dVar1 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
          local_170 = local_170 * (double)CONCAT44(uVar7,uVar6);
          local_168 = local_168 * (double)CONCAT44(uVar7,uVar6);
          local_160 = local_160 * (double)CONCAT44(uVar7,uVar6);
          local_150 = local_150 * dVar1;
          local_148 = local_148 * dVar1;
          ApplyRotationDelta(this,(TVector<double,3> *)&local_158,(TVector<double,3> *)&local_170);
          *(double *)&this->NetAngularImpulse =
               dVar1 * (double)CONCAT44(local_188._4_4_,local_188._0_4_) +
               *(double *)&this->NetAngularImpulse;
          *(double *)&(this->NetAngularImpulse).field_0x8 =
               (double)CONCAT44(local_188._12_4_,local_188._8_4_) * dVar1 +
               *(double *)&(this->NetAngularImpulse).field_0x8;
          *(double *)&(this->NetAngularImpulse).field_0x10 =
               dVar1 * (double)local_188._16_8_ + *(double *)&(this->NetAngularImpulse).field_0x10;
          *(double *)&this->AngularHardLambda = dVar1 + *(double *)&this->AngularHardLambda;
        }
        else {
          ApplyRotationConstraintKD
                    (this,1,0,dVar1,(TVector<double,3> *)local_188,
                     (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar7,
                                      SUB84(dVar3,0) ^ uVar6),0);
        }
      }
      else {
        ApplyRotationConstraintKD(this,0,1,dVar1,(TVector<double,3> *)local_188,dVar3,0);
      }
    }
    if (dVar3 <= this->AngularViolation) {
      dVar3 = this->AngularViolation;
    }
    this->AngularViolation = dVar3;
  }
  return;
}

// ApplyTwistProjection @ 143b9e200

void __thiscall
Chaos::FPBDJointSolver::ApplyTwistProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,bool param_5,TVector<double,3> *param_6,
          TVector<double,3> *param_7)

{
  float fVar1;
  double dVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  double local_res8;
  double local_88;
  double local_80;
  double local_78;
  
  FPBDJointUtilities::GetTwistAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)&local_88,&local_res8);
  dVar2 = *(double *)&param_3->AngularLimits;
  dVar6 = 0.0;
  dVar5 = 0.0;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (local_res8 <= dVar2) {
    if (local_res8 <
        (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar13,SUB84(dVar2,0) ^ uVar12)) {
      dVar5 = dVar2 + local_res8;
    }
  }
  else {
    dVar5 = local_res8 - dVar2;
  }
  if (0.0 < (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar14 = 0.0;
    dVar10 = 0.0;
    uVar15 = SUB84(dVar5 * param_4,0) ^ uVar12;
    uVar16 = (uint)((ulonglong)(dVar5 * param_4) >> 0x20) ^ uVar13;
    dVar5 = (double)CONCAT44(uVar16,uVar15) * local_88;
    dVar7 = (double)CONCAT44(uVar16,uVar15) * local_80;
    dVar2 = (double)CONCAT44(uVar16,uVar15) * local_78;
    if (param_5) {
      pFVar3 = this->SolverBodies[1].Body;
      dVar14 = (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) ^ uVar13,
                                SUB84(param_4,0) ^ uVar12);
      dVar8 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&(pFVar3->State).P.field_0x8;
      dVar10 = *(double *)&this->ConnectorXs[1].field_0x10 -
               *(double *)&(pFVar3->State).P.field_0x10;
      dVar11 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar3->State).P;
      dVar6 = (dVar10 * dVar7 - dVar8 * dVar2) * dVar14;
      dVar10 = (dVar11 * dVar2 - dVar10 * dVar5) * dVar14;
      dVar14 = (dVar8 * dVar5 - dVar11 * dVar7) * dVar14;
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x26,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
    *(float *)&(pFVar3->State).DP = (float)dVar6 + *(float *)&(pFVar3->State).DP;
    *(float *)&(pFVar3->State).DP.field_0x4 = (float)dVar10 + fVar1;
    *(float *)&(pFVar3->State).DP.field_0x8 =
         (float)dVar14 + *(float *)&(pFVar3->State).DP.field_0x8;
    *(float *)&(pFVar3->State).DQ = (float)dVar5 + *(float *)&(pFVar3->State).DQ;
    *(float *)&(pFVar3->State).DQ.field_0x4 = (float)dVar7 + *(float *)&(pFVar3->State).DQ.field_0x4
    ;
    *(float *)&(pFVar3->State).DQ.field_0x8 = (float)dVar2 + *(float *)&(pFVar3->State).DQ.field_0x8
    ;
    UpdateDerivedState(this,1);
    *(double *)&param_6->field_0x8 = dVar10 + *(double *)&param_6->field_0x8;
    *(double *)&param_6->field_0x10 = dVar14 + *(double *)&param_6->field_0x10;
    *(double *)param_6 = dVar6 + *(double *)param_6;
    *(double *)param_7 = dVar5 + *(double *)param_7;
    *(double *)&param_7->field_0x8 = dVar7 + *(double *)&param_7->field_0x8;
    *(double *)&param_7->field_0x10 = dVar2 + *(double *)&param_7->field_0x10;
  }
  return;
}

// ApplyTwistVelocityConstraint @ 143b9e490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::ApplyTwistVelocityConstraint
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double local_res8;
  TVector<double,3> local_58 [3];
  
  uVar5 = (uint)*(undefined8 *)&this->NetAngularImpulse &
          (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar7 = (uint)((ulonglong)*(undefined8 *)&this->NetAngularImpulse >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar5) &&
         (double)CONCAT44(uVar7,uVar5) != __real_3f1a36e2e0000000) ||
       (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x8,
       uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar5) &&
       (double)CONCAT44(uVar7,uVar5) != __real_3f1a36e2e0000000)) ||
      (uVar1 = *(undefined8 *)&(this->NetAngularImpulse).field_0x10,
      uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar5) &&
      (double)CONCAT44(uVar7,uVar5) != __real_3f1a36e2e0000000)) &&
     ((!param_4 && (__real_3e45798ee0000000 < *(double *)&this->AngularHardLambda)))) {
    FPBDJointUtilities::GetTwistAxisAngle
              (this->ConnectorRs,this->ConnectorRs + 1,local_58,&local_res8);
    uVar7 = __xmm_80000000000000008000000000000000._4_4_;
    uVar5 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = 0;
    uVar9 = 0;
    if (local_res8 < 0.0) {
      local_58[0]._0_4_ = local_58[0]._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
      local_58[0]._4_4_ = local_58[0]._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_58[0]._8_4_ = local_58[0]._8_4_ ^ _UNK_15066df78;
      local_58[0]._12_4_ = local_58[0]._12_4_ ^ _UNK_15066df7c;
      uVar6 = (uint)local_58[0]._16_8_;
      local_58[0]._20_4_ =
           SUB84(local_58[0]._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_;
      local_58[0]._16_4_ = uVar6 ^ (uint)__xmm_80000000000000008000000000000000;
    }
    dVar2 = this->SolverStiffness;
    dVar3 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
    if ((param_3->TwistRestitution != 0.0) &&
       ((double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution <
        *(double *)&this->InitConstraintAxisAngularVelocities)) {
      dVar4 = param_3->TwistRestitution * *(double *)&this->InitConstraintAxisAngularVelocities;
      uVar8 = SUB84(dVar4,0) ^ uVar5;
      uVar9 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar7;
    }
    ApplyAngularVelocityConstraint(this,dVar3 * dVar2,local_58,(double)CONCAT44(uVar9,uVar8));
  }
  return;
}

// ApplyVelocityConstraints @ 143b9ec60

void __thiscall
Chaos::FPBDJointSolver::ApplyVelocityConstraints
          (FPBDJointSolver *this,double param_1,double param_2,FPBDJointSolverSettings *param_3,
          FPBDJointSettings *param_4)

{
  this->SolverStiffness = param_2;
  if (param_3->bSolvePositionLast != false) {
    ApplyAngularVelocityConstraints(this,param_1,param_3,param_4);
    ApplyLinearVelocityConstraints(this,param_1,param_3,param_4);
    return;
  }
  ApplyLinearVelocityConstraints(this,param_1,param_3,param_4);
  ApplyAngularVelocityConstraints(this,param_1,param_3,param_4);
  return;
}

// ApplyVelocityDelta @ 143b9ecf0

void __thiscall
Chaos::FPBDJointSolver::ApplyVelocityDelta
          (FPBDJointSolver *this,TVector<double,3> *param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FSolverBody *pFVar8;
  code *pcVar9;
  bool bVar10;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x26,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar8 = this->SolverBodies[0].Body;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)param_2;
  dVar6 = *(double *)&param_2->field_0x8;
  dVar7 = *(double *)&param_2->field_0x10;
  fVar1 = *(float *)&(pFVar8->State).V.field_0x8;
  *(float *)&(pFVar8->State).V.field_0x4 =
       (float)*(double *)&param_1->field_0x8 + *(float *)&(pFVar8->State).V.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).V;
  *(float *)&(pFVar8->State).V.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar8->State).V = (float)dVar4 + fVar2;
  fVar1 = *(float *)&(pFVar8->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).W.field_0x8;
  *(float *)&(pFVar8->State).W = (float)dVar5 + *(float *)&(pFVar8->State).W;
  *(float *)&(pFVar8->State).W.field_0x4 = (float)dVar6 + fVar1;
  *(float *)&(pFVar8->State).W.field_0x8 = (float)dVar7 + fVar2;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x26,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  dVar3 = *(double *)&param_3->field_0x10;
  dVar4 = *(double *)param_3;
  dVar5 = *(double *)param_4;
  dVar6 = *(double *)&param_4->field_0x8;
  dVar7 = *(double *)&param_4->field_0x10;
  pFVar8 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar8->State).V.field_0x8;
  *(float *)&(pFVar8->State).V.field_0x4 =
       (float)*(double *)&param_3->field_0x8 + *(float *)&(pFVar8->State).V.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).V;
  *(float *)&(pFVar8->State).V.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar8->State).V = (float)dVar4 + fVar2;
  fVar1 = *(float *)&(pFVar8->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).W.field_0x8;
  *(float *)&(pFVar8->State).W = (float)dVar5 + *(float *)&(pFVar8->State).W;
  *(float *)&(pFVar8->State).W.field_0x4 = (float)dVar6 + fVar1;
  *(float *)&(pFVar8->State).W.field_0x8 = (float)dVar7 + fVar2;
  return;
}

// ApplyVelocityDelta @ 143b9ee80

void __thiscall
Chaos::FPBDJointSolver::ApplyVelocityDelta
          (FPBDJointSolver *this,int param_1,TVector<double,3> *param_2,TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FSolverBody *pFVar8;
  FConstraintSolverBody *pFVar9;
  
  pFVar9 = Body(this,param_1);
  dVar3 = *(double *)param_3;
  dVar4 = *(double *)&param_3->field_0x8;
  dVar5 = *(double *)&param_3->field_0x10;
  pFVar8 = pFVar9->Body;
  dVar6 = *(double *)&param_2->field_0x10;
  dVar7 = *(double *)param_2;
  fVar1 = *(float *)&(pFVar8->State).V.field_0x8;
  *(float *)&(pFVar8->State).V.field_0x4 =
       (float)*(double *)&param_2->field_0x8 + *(float *)&(pFVar8->State).V.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).V;
  *(float *)&(pFVar8->State).V.field_0x8 = (float)dVar6 + fVar1;
  *(float *)&(pFVar8->State).V = (float)dVar7 + fVar2;
  fVar1 = *(float *)&(pFVar8->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar8->State).W.field_0x8;
  *(float *)&(pFVar8->State).W = (float)dVar3 + *(float *)&(pFVar8->State).W;
  *(float *)&(pFVar8->State).W.field_0x4 = (float)dVar4 + fVar1;
  *(float *)&(pFVar8->State).W.field_0x8 = (float)dVar5 + fVar2;
  return;
}

// ApplyVelocityProjection @ 143b9ef20

void __thiscall
Chaos::FPBDJointSolver::ApplyVelocityProjection
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,double param_4,TVector<double,3> *param_5,
          TVector<double,3> *param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FSolverBody *pFVar9;
  code *pcVar10;
  bool bVar11;
  double dVar12;
  
  dVar12 = __real_3ff0000000000000 / param_1;
  dVar3 = *(double *)param_5;
  dVar4 = *(double *)&param_5->field_0x8;
  dVar5 = *(double *)&param_5->field_0x10;
  dVar6 = *(double *)param_6;
  dVar7 = *(double *)&param_6->field_0x8;
  dVar8 = *(double *)&param_6->field_0x10;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x26,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar9 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar9->State).V.field_0x4;
  *(float *)&(pFVar9->State).V = (float)(param_4 * dVar3 * dVar12) + *(float *)&(pFVar9->State).V;
  *(float *)&(pFVar9->State).V.field_0x4 = (float)(param_4 * dVar4 * dVar12) + fVar1;
  *(float *)&(pFVar9->State).V.field_0x8 =
       (float)(param_4 * dVar5 * dVar12) + *(float *)&(pFVar9->State).V.field_0x8;
  fVar1 = *(float *)&(pFVar9->State).W.field_0x4;
  fVar2 = *(float *)&(pFVar9->State).W.field_0x8;
  *(float *)&(pFVar9->State).W = (float)(param_4 * dVar6 * dVar12) + *(float *)&(pFVar9->State).W;
  *(float *)&(pFVar9->State).W.field_0x4 = (float)(param_4 * dVar7 * dVar12) + fVar1;
  *(float *)&(pFVar9->State).W.field_0x8 = (float)(param_4 * dVar8 * dVar12) + fVar2;
  return;
}

// Body @ 143b9f760

FConstraintSolverBody * __thiscall Chaos::FPBDJointSolver::Body(FPBDJointSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstraintSolverBody *pFVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BodyIndex >= 0) && (BodyIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->SolverBodies[param_1].Body == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x26,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->SolverBodies + param_1;
}

// Body @ 143b9f7f0

FConstraintSolverBody * __thiscall Chaos::FPBDJointSolver::Body(FPBDJointSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstraintSolverBody *pFVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BodyIndex >= 0) && (BodyIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->SolverBodies[param_1].Body == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->SolverBodies + param_1;
}

// CalculateConeConstraintAxisAngularVelocities @ 143b9f880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::CalculateConeConstraintAxisAngularVelocities
          (FPBDJointSolver *this,FPBDJointSettings *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSolverBody *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double local_res8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_78;
  double local_50;
  
  local_res8 = 0.0;
  FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
            (this->ConnectorRs,this->ConnectorRs + 1,*(double *)&(param_1->AngularLimits).field_0x8,
             *(double *)&(param_1->AngularLimits).field_0x10,(TVector<double,3> *)&local_b8,
             &local_res8);
  auVar8._0_8_ = dStack_b0 * dStack_b0;
  auVar8._8_8_ = 0;
  dVar9 = local_b8 * local_b8 + auVar8._0_8_ + local_a8 * local_a8;
  if (__real_3f1a36e2e0000000 <= dVar9) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    auVar8 = sqrtpd(auVar8,auVar6);
    dVar9 = __real_3ff0000000000000 / auVar8._0_8_;
    local_b8 = local_b8 * dVar9;
    dStack_b0 = dStack_b0 * dVar9;
    local_a8 = local_a8 * dVar9;
  }
  else {
    local_a8 = 0.0;
    local_b8 = ___xmm_00000000000000003ff0000000000000;
    dStack_b0 = _UNK_150689518;
  }
  local_98._s_0.Z = local_a8;
  local_98._s_0.X = local_b8;
  local_98._s_0.Y = dStack_b0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&local_98._s_0);
  local_50 = local_78._s_0.Z;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar4->State).W;
  fVar2 = *(float *)&(pFVar4->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar4->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = this->SolverBodies[0].Body;
  *(double *)&param_2->field_0x10 =
       ((double)fVar2 - (double)*(float *)&(pFVar4->State).W.field_0x4) * local_78._s_0.Y +
       ((double)fVar1 - (double)*(float *)&(pFVar4->State).W) * local_78._s_0.X +
       ((double)fVar3 - (double)*(float *)&(pFVar4->State).W.field_0x8) * local_50;
  return;
}

// CalculateConstraintAxisAngularVelocities @ 143b9faa0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDJointSolver::CalculateConstraintAxisAngularVelocities
          (FPBDJointSolver *this,FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  EJointMotionType EVar4;
  EJointMotionType EVar5;
  EJointMotionType EVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  bool bVar13;
  EJointAngularConstraintIndex EVar14;
  double _X;
  undefined1 auVar15 [16];
  TQuat<double> *local_178;
  undefined1 local_170 [24];
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  double local_80;
  
  EVar4 = (param_2->AngularMotionTypes).field0_0x0._s_0.X;
  if (((EVar4 != Free) || ((param_2->AngularMotionTypes).field0_0x0._s_0.Y != Free)) ||
     ((param_2->AngularMotionTypes).field0_0x0._s_0.Z != Free)) {
    EVar5 = (param_2->AngularMotionTypes).field0_0x0._s_0.Z;
    EVar6 = (param_2->AngularMotionTypes).field0_0x0._s_0.Y;
    local_108._s_0.Z = 0.0;
    local_108._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_108._s_0.Y = _UNK_150689518;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_138._s_0,
               (TVector<double> *)&local_108._s_0);
    local_178 = (TQuat<double> *)(this->ConnectorRs + 1);
    local_e8._s_0.Z = 0.0;
    local_e8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_e8._s_0.Y = _UNK_150689518;
    UE::Math::TQuat<double>::RotateVector
              (local_178,(TVector<double> *)&local_120._s_0,(TVector<double> *)&local_e8._s_0);
    dVar11 = __real_3ff0000000000000;
    dVar10 = local_138._s_0.Y * local_120._s_0.Y + local_120._s_0.X * local_138._s_0.X +
             local_138._s_0.Z * local_120._s_0.Z;
    bVar13 = (double)Chaos_Joint_DegenerateRotationLimit <= dVar10;
    if ((dVar10 < (double)Chaos_Joint_DegenerateRotationLimit) && (6 < (byte)LogChaosJoint._0_1_)) {
      _X = __real_bff0000000000000;
      if ((__real_bff0000000000000 <= dVar10) && (_X = dVar10, __real_3ff0000000000000 <= dVar10)) {
        _X = __real_3ff0000000000000;
      }
      acos(_X);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogChaosJoint);
    }
    if (((param_1->bEnableTwistLimits != false) && (bVar13)) && (EVar4 == Limited)) {
      FPBDJointUtilities::GetTwistAxisAngle
                (this->ConnectorRs,(TRotation<double,3> *)local_178,(TVector<double,3> *)local_170,
                 &local_140);
      if (local_140 < 0.0) {
        local_170._0_4_ = local_170._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
        local_170._4_4_ = local_170._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
        local_170._8_4_ = local_170._8_4_ ^ _UNK_15066df78;
        local_170._12_4_ = local_170._12_4_ ^ _UNK_15066df7c;
        local_170._16_8_ =
             CONCAT44(SUB84(local_170._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                      (uint)local_170._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
      }
      if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                              ,0x2e,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = this->SolverBodies[1].Body;
      fVar1 = *(float *)&(pFVar7->State).W;
      fVar2 = *(float *)&(pFVar7->State).W.field_0x4;
      fVar3 = *(float *)&(pFVar7->State).W.field_0x8;
      if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                              ,0x2e,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = this->SolverBodies[0].Body;
      *(double *)param_3 =
           ((double)fVar2 - (double)*(float *)&(pFVar7->State).W.field_0x4) *
           (double)CONCAT44(local_170._12_4_,local_170._8_4_) +
           ((double)fVar1 - (double)*(float *)&(pFVar7->State).W) *
           (double)CONCAT44(local_170._4_4_,local_170._0_4_) +
           ((double)fVar3 - (double)*(float *)&(pFVar7->State).W.field_0x8) *
           (double)local_170._16_8_;
    }
    if (param_1->bEnableSwingLimits != false) {
      if (EVar5 == Limited) {
        if (EVar6 == Limited) {
          local_178 = (TQuat<double> *)0x0;
          FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
                    (this->ConnectorRs,this->ConnectorRs + 1,
                     *(double *)&(param_2->AngularLimits).field_0x8,
                     *(double *)&(param_2->AngularLimits).field_0x10,(TVector<double,3> *)&local_158
                     ,(double *)&local_178);
          auVar15._0_8_ = local_158 * local_158;
          auVar15._8_8_ = 0;
          dVar10 = dStack_150 * dStack_150 + auVar15._0_8_ + local_148 * local_148;
          if (__real_3f1a36e2e0000000 <= dVar10) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = dVar10;
            auVar15 = sqrtpd(auVar15,auVar9);
            dVar11 = dVar11 / auVar15._0_8_;
            local_158 = local_158 * dVar11;
            dStack_150 = dStack_150 * dVar11;
            local_148 = local_148 * dVar11;
          }
          else {
            local_148 = 0.0;
            local_158 = ___xmm_00000000000000003ff0000000000000;
            dStack_150 = _UNK_150689518;
          }
          local_c8._s_0.Z = local_148;
          local_c8._s_0.X = local_158;
          local_c8._s_0.Y = dStack_150;
          UE::Math::TQuat<double>::RotateVector
                    ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_a8._s_0,
                     (TVector<double> *)&local_c8._s_0);
          local_80 = local_a8._s_0.Z;
          if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SolverBodies[BodyIndex].IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                                  ,0x2e,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = this->SolverBodies[1].Body;
          fVar1 = *(float *)&(pFVar7->State).W;
          fVar2 = *(float *)&(pFVar7->State).W.field_0x4;
          fVar3 = *(float *)&(pFVar7->State).W.field_0x8;
          if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SolverBodies[BodyIndex].IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                                  ,0x2e,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = this->SolverBodies[0].Body;
          *(double *)&param_3->field_0x10 =
               ((double)fVar2 - (double)*(float *)&(pFVar7->State).W.field_0x4) * local_a8._s_0.Y +
               ((double)fVar1 - (double)*(float *)&(pFVar7->State).W) * local_a8._s_0.X +
               ((double)fVar3 - (double)*(float *)&(pFVar7->State).W.field_0x8) * local_80;
          return;
        }
        if (EVar6 == Locked) {
          if (!bVar13) {
            return;
          }
          CalculateSwingConstraintAxisAngularVelocities(this,param_1,param_2,Swing1,param_3);
          return;
        }
        if (EVar6 != Free) {
          return;
        }
        if (!bVar13) {
          return;
        }
        EVar14 = Swing1;
      }
      else {
        if (EVar5 == Locked) {
          if (EVar6 != Limited) {
            return;
          }
          if (!bVar13) {
            return;
          }
          CalculateSwingConstraintAxisAngularVelocities(this,param_1,param_2,Swing2,param_3);
          return;
        }
        if (EVar5 != Free) {
          return;
        }
        if (EVar6 != Limited) {
          return;
        }
        if (!bVar13) {
          return;
        }
        EVar14 = Swing2;
      }
      CalculateDualConeSwingConstraintAxisAngularVelocities(this,param_2,EVar14,param_3);
    }
  }
  return;
}

// CalculateConstraintAxisLinearVelocities @ 143b9fff0

void __thiscall
Chaos::FPBDJointSolver::CalculateConstraintAxisLinearVelocities
          (FPBDJointSolver *this,FPBDJointSettings *param_1,TVector<double,3> *param_2)

{
  EJointMotionType EVar1;
  EJointMotionType EVar2;
  EJointMotionType EVar3;
  
  EVar1 = (param_1->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar1 == Free) && ((param_1->LinearMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_1->LinearMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar2 = (param_1->LinearMotionTypes).field0_0x0._s_0.Y;
  EVar3 = (param_1->LinearMotionTypes).field0_0x0._s_0.Z;
  if (EVar1 == Locked) {
    if (EVar2 == Locked) {
      if (EVar3 == Locked) {
        return;
      }
      goto LAB_143ba003a;
    }
LAB_143ba0089:
    if (EVar1 == Locked) {
      if (EVar3 == Locked) {
        if (EVar2 == Locked) {
          return;
        }
        CalculateCylindricalConstraintAxisLinearVelocities(this,1,EVar2,Locked,param_1,param_2);
        return;
      }
      if (EVar2 == Locked) {
        if (EVar3 == Locked) {
          return;
        }
        CalculateCylindricalConstraintAxisLinearVelocities(this,2,EVar3,Locked,param_1,param_2);
        return;
      }
    }
    if ((EVar2 == Limited) && (EVar3 == Limited)) {
      if (EVar1 != Limited) {
        CalculateCylindricalConstraintAxisLinearVelocities(this,0,EVar1,Limited,param_1,param_2);
        return;
      }
      goto LAB_143ba0161;
    }
  }
  else {
LAB_143ba003a:
    if ((EVar1 != Limited) || (EVar2 != Limited)) {
      if ((EVar2 == Locked) && (EVar3 == Locked)) {
        if (EVar1 == Locked) {
          return;
        }
        CalculateCylindricalConstraintAxisLinearVelocities(this,0,EVar1,Locked,param_1,param_2);
        return;
      }
      goto LAB_143ba0089;
    }
    if (EVar3 == Limited) {
      CalculateSphericalConstraintAxisLinearVelocities(this,param_1,param_2);
      return;
    }
  }
  if (EVar1 != Limited) {
    if (EVar2 != Limited) {
      if (EVar3 == Limited) {
        CalculatePlanarConstraintAxisLinearVelocities(this,2,Limited,param_1,param_2);
      }
      return;
    }
    CalculatePlanarConstraintAxisLinearVelocities(this,1,Limited,param_1,param_2);
    return;
  }
  if (EVar3 == Limited) {
    if (EVar2 != Limited) {
      CalculateCylindricalConstraintAxisLinearVelocities(this,1,EVar2,Limited,param_1,param_2);
      return;
    }
  }
  else if ((EVar2 == Limited) && (EVar3 != Limited)) {
    CalculateCylindricalConstraintAxisLinearVelocities(this,2,EVar3,Limited,param_1,param_2);
    return;
  }
LAB_143ba0161:
  CalculatePlanarConstraintAxisLinearVelocities(this,0,EVar1,param_1,param_2);
  return;
}

// CalculateCylindricalConstraintAxisLinearVelocities @ 143ba01c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::CalculateCylindricalConstraintAxisLinearVelocities
          (FPBDJointSolver *this,int param_1,EJointMotionType param_2,EJointMotionType param_3,
          FPBDJointSettings *param_4,TVector<double,3> *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FSolverBody *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  FConstraintSolverBody *pFVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_res8;
  double local_100;
  undefined1 local_f8 [24];
  double local_e0;
  double local_d8;
  double local_d0;
  
  FPBDJointUtilities::GetCylindricalAxesDeltas
            (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_1,
             (TVector<double,3> *)local_f8,&local_res8,(TVector<double,3> *)&local_e0,&local_100);
  dVar7 = *(double *)&this->ConnectorXs[0].field_0x10;
  dVar13 = *(double *)&this->ConnectorXs[1].field_0x10 - dVar7;
  dVar8 = *(double *)&this->ConnectorXs[0].field_0x8;
  dVar9 = *(double *)this->ConnectorXs;
  dVar12 = *(double *)&this->ConnectorXs[1].field_0x8 - dVar8;
  dVar14 = *(double *)(this->ConnectorXs + 1) - dVar9;
  if (param_2 == Limited) {
    if (local_res8 < 0.0) {
      local_res8 = (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(local_res8,0) ^
                                    (uint)__xmm_80000000000000008000000000000000);
      local_f8._0_4_ = local_f8._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
      local_f8._4_4_ = local_f8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_f8._8_4_ = local_f8._8_4_ ^ _UNK_15066df78;
      local_f8._12_4_ = local_f8._12_4_ ^ _UNK_15066df7c;
      local_f8._16_8_ =
           CONCAT44(SUB84(local_f8._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                    (uint)local_f8._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
    }
    dVar23 = local_res8 - param_4->LinearLimit;
    dVar19 = dVar23 * (double)local_f8._16_8_;
    dVar17 = (double)CONCAT44(local_f8._12_4_,local_f8._8_4_);
    dVar22 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_);
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    dVar9 = ((dVar14 - dVar23 * dVar22) + dVar9) -
            ((double)*(float *)&(pFVar10->State).DP + *(double *)&(pFVar10->State).P);
    dVar8 = ((dVar12 - dVar23 * dVar17) + dVar8) -
            ((double)*(float *)&(pFVar10->State).DP.field_0x4 +
            *(double *)&(pFVar10->State).P.field_0x8);
    dVar7 = ((dVar13 - dVar19) + dVar7) -
            ((double)*(float *)&(pFVar10->State).DP.field_0x8 +
            *(double *)&(pFVar10->State).P.field_0x10);
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[1].Body;
    dVar19 = *(double *)&this->ConnectorXs[1].field_0x10 -
             ((double)*(float *)&(pFVar10->State).DP.field_0x8 +
             *(double *)&(pFVar10->State).P.field_0x10);
    dVar22 = *(double *)&this->ConnectorXs[1].field_0x8 -
             ((double)*(float *)&(pFVar10->State).DP.field_0x4 +
             *(double *)&(pFVar10->State).P.field_0x8);
    dVar17 = *(double *)(this->ConnectorXs + 1) -
             ((double)*(float *)&(pFVar10->State).DP + *(double *)&(pFVar10->State).P);
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar10->State).V.field_0x4;
    fVar2 = *(float *)&(pFVar10->State).V;
    fVar3 = *(float *)&(pFVar10->State).V.field_0x8;
    if (pFVar10 == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    dVar24 = (double)*(float *)&(pFVar10->State).W.field_0x4;
    dVar23 = (double)*(float *)&(pFVar10->State).W.field_0x8;
    dVar20 = (double)*(float *)&(pFVar10->State).W;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[1].Body;
    fVar4 = *(float *)&(pFVar10->State).V.field_0x8;
    fVar5 = *(float *)&(pFVar10->State).V;
    fVar6 = *(float *)&(pFVar10->State).V.field_0x4;
    if (pFVar10 == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[1].Body;
    dVar21 = (double)*(float *)&(pFVar10->State).W;
    dVar18 = (double)*(float *)&(pFVar10->State).W.field_0x8;
    dVar25 = (double)*(float *)&(pFVar10->State).W.field_0x4;
    *(double *)param_5 =
         (((dVar17 * dVar18 - dVar19 * dVar21) + (double)fVar6) -
         ((dVar9 * dVar23 - dVar7 * dVar20) + (double)fVar1)) *
         (double)CONCAT44(local_f8._12_4_,local_f8._8_4_) +
         (((dVar19 * dVar25 - dVar22 * dVar18) + (double)fVar5) -
         ((dVar7 * dVar24 - dVar8 * dVar23) + (double)fVar2)) *
         (double)CONCAT44(local_f8._4_4_,local_f8._0_4_) +
         (((dVar22 * dVar21 - dVar17 * dVar25) + (double)fVar4) -
         ((dVar8 * dVar20 - dVar9 * dVar24) + (double)fVar3)) * (double)local_f8._16_8_;
  }
  if (param_3 == Limited) {
    local_100 = local_100 - param_4->LinearLimit;
    if (local_100 <= 0.0) {
      local_100 = 0.0;
    }
    dVar19 = local_100 * local_d0;
    dVar22 = local_100 * local_d8;
    dVar17 = local_100 * local_e0;
    dVar7 = *(double *)&this->ConnectorXs[0].field_0x10;
    dVar8 = *(double *)&this->ConnectorXs[0].field_0x8;
    dVar9 = *(double *)this->ConnectorXs;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    dVar9 = ((dVar14 - dVar17) + dVar9) -
            ((double)*(float *)&(pFVar10->State).DP + *(double *)&(pFVar10->State).P);
    dVar8 = ((dVar12 - dVar22) + dVar8) -
            ((double)*(float *)&(pFVar10->State).DP.field_0x4 +
            *(double *)&(pFVar10->State).P.field_0x8);
    dVar7 = ((dVar13 - dVar19) + dVar7) -
            ((double)*(float *)&(pFVar10->State).DP.field_0x8 +
            *(double *)&(pFVar10->State).P.field_0x10);
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar16 = this->SolverBodies + 1;
    pFVar10 = this->SolverBodies[1].Body;
    dVar13 = *(double *)&this->ConnectorXs[1].field_0x10 -
             ((double)*(float *)&(pFVar10->State).DP.field_0x8 +
             *(double *)&(pFVar10->State).P.field_0x10);
    dVar14 = *(double *)&this->ConnectorXs[1].field_0x8 -
             ((double)*(float *)&(pFVar10->State).DP.field_0x4 +
             *(double *)&(pFVar10->State).P.field_0x8);
    dVar12 = *(double *)(this->ConnectorXs + 1) -
             ((double)*(float *)&(pFVar10->State).DP + *(double *)&(pFVar10->State).P);
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar10->State).V;
    fVar2 = *(float *)&(pFVar10->State).V.field_0x4;
    fVar3 = *(float *)&(pFVar10->State).V.field_0x8;
    if (pFVar10 == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[0].Body;
    dVar17 = (double)*(float *)&(pFVar10->State).W.field_0x4;
    dVar19 = (double)*(float *)&(pFVar10->State).W.field_0x8;
    dVar22 = (double)*(float *)&(pFVar10->State).W;
    if (pFVar16->Body == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = pFVar16->Body;
    fVar4 = *(float *)&(pFVar10->State).V;
    fVar5 = *(float *)&(pFVar10->State).V.field_0x4;
    fVar6 = *(float *)&(pFVar10->State).V.field_0x8;
    if (pFVar10 == (FSolverBody *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    pFVar10 = pFVar16->Body;
    dVar24 = (double)*(float *)&(pFVar10->State).W;
    dVar23 = (double)*(float *)&(pFVar10->State).W.field_0x8;
    dVar20 = (double)*(float *)&(pFVar10->State).W.field_0x4;
    *(double *)&param_5->field_0x8 =
         (((dVar12 * dVar23 - dVar24 * dVar13) + (double)fVar5) -
         ((dVar9 * dVar19 - dVar7 * dVar22) + (double)fVar2)) * local_d8 +
         (((dVar20 * dVar13 - dVar23 * dVar14) + (double)fVar4) -
         ((dVar7 * dVar17 - dVar8 * dVar19) + (double)fVar1)) * local_e0 +
         (((dVar24 * dVar14 - dVar12 * dVar20) + (double)fVar6) -
         ((dVar8 * dVar22 - dVar9 * dVar17) + (double)fVar3)) * local_d0;
  }
  return;
}

// CalculateDualConeSwingConstraintAxisAngularVelocities @ 143ba09d0

void __thiscall
Chaos::FPBDJointSolver::CalculateDualConeSwingConstraintAxisAngularVelocities
          (FPBDJointSolver *this,FPBDJointSettings *param_1,EJointAngularConstraintIndex param_2,
          TVector<double,3> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  bool bVar9;
  double local_res8;
  double local_58;
  double local_50;
  double local_48;
  
  FPBDJointUtilities::GetDualConeSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_2,(TVector<double,3> *)&local_58,
             &local_res8);
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar7->State).W;
  fVar2 = *(float *)&(pFVar7->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar7->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar4 = *(float *)&(pFVar7->State).W.field_0x8;
  fVar5 = *(float *)&(pFVar7->State).W;
  fVar6 = *(float *)&(pFVar7->State).W.field_0x4;
  if (Swing1 < param_2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(double *)(&param_3->field_0x0 + (longlong)(int)param_2 * 8) =
       ((double)fVar1 - (double)fVar5) * local_58 + ((double)fVar2 - (double)fVar6) * local_50 +
       ((double)fVar3 - (double)fVar4) * local_48;
  return;
}

// CalculatePlanarConstraintAxisLinearVelocities @ 143ba0b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::CalculatePlanarConstraintAxisLinearVelocities
          (FPBDJointSolver *this,int param_1,EJointMotionType param_2,FPBDJointSettings *param_3,
          TVector<double,3> *param_4)

{
  TVector<double,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  FSolverBody *pFVar10;
  FSolverBody *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_res8;
  undefined1 local_c8 [192];
  
  pTVar1 = this->ConnectorXs;
  FPBDJointUtilities::GetPlanarAxisDelta
            (this->ConnectorRs,pTVar1,this->ConnectorXs + 1,param_1,(TVector<double,3> *)local_c8,
             &local_res8);
  dVar23 = 0.0;
  if (local_res8 < 0.0) {
    local_res8 = (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(local_res8,0) ^ (uint)__xmm_80000000000000008000000000000000
                                 );
    local_c8._0_4_ = local_c8._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_c8._4_4_ = local_c8._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_c8._8_4_ = local_c8._8_4_ ^ _UNK_15066df78;
    local_c8._12_4_ = local_c8._12_4_ ^ _UNK_15066df7c;
    local_c8._16_8_ =
         CONCAT44(SUB84(local_c8._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_c8._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (param_2 != Locked) {
    dVar23 = param_3->LinearLimit;
  }
  pFVar10 = this->SolverBodies[0].Body;
  dVar23 = local_res8 - dVar23;
  pFVar11 = this->SolverBodies[1].Body;
  dVar8 = *(double *)&this->ConnectorXs[1].field_0x8;
  dVar9 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar13 = dVar9 - *(double *)&(pFVar11->State).P.field_0x10;
  dVar14 = dVar8 - *(double *)&(pFVar11->State).P.field_0x8;
  dVar17 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar11->State).P;
  dVar16 = (((*(double *)(this->ConnectorXs + 1) - *(double *)pTVar1) -
            dVar23 * (double)CONCAT44(local_c8._4_4_,local_c8._0_4_)) + *(double *)pTVar1) -
           *(double *)&(pFVar10->State).P;
  dVar8 = (((dVar8 - *(double *)&this->ConnectorXs[0].field_0x8) -
           dVar23 * (double)CONCAT44(local_c8._12_4_,local_c8._8_4_)) +
          *(double *)&this->ConnectorXs[0].field_0x8) - *(double *)&(pFVar10->State).P.field_0x8;
  dVar23 = (((dVar9 - *(double *)&this->ConnectorXs[0].field_0x10) -
            (double)local_c8._16_8_ * dVar23) + *(double *)&this->ConnectorXs[0].field_0x10) -
           *(double *)&(pFVar10->State).P.field_0x10;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[0].Body;
  fVar2 = *(float *)&(pFVar10->State).V.field_0x4;
  fVar3 = *(float *)&(pFVar10->State).V;
  fVar4 = *(float *)&(pFVar10->State).V.field_0x8;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[0].Body;
  dVar9 = (double)*(float *)&(pFVar10->State).W.field_0x8;
  dVar15 = (double)*(float *)&(pFVar10->State).W;
  dVar19 = (double)*(float *)&(pFVar10->State).W.field_0x4;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[1].Body;
  fVar5 = *(float *)&(pFVar10->State).V;
  fVar6 = *(float *)&(pFVar10->State).V.field_0x4;
  fVar7 = *(float *)&(pFVar10->State).V.field_0x8;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar18) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[1].Body;
  dVar21 = (double)*(float *)&(pFVar10->State).W;
  dVar20 = (double)*(float *)&(pFVar10->State).W.field_0x8;
  dVar22 = (double)*(float *)&(pFVar10->State).W.field_0x4;
  *(double *)param_4 =
       (((dVar17 * dVar20 - dVar13 * dVar21) + (double)fVar6) -
       ((dVar9 * dVar16 - dVar15 * dVar23) + (double)fVar2)) *
       (double)CONCAT44(local_c8._12_4_,local_c8._8_4_) +
       (((dVar13 * dVar22 - dVar14 * dVar20) + (double)fVar5) -
       ((dVar19 * dVar23 - dVar9 * dVar8) + (double)fVar3)) *
       (double)CONCAT44(local_c8._4_4_,local_c8._0_4_) +
       (((dVar14 * dVar21 - dVar17 * dVar22) + (double)fVar7) -
       ((dVar15 * dVar8 - dVar19 * dVar16) + (double)fVar4)) * (double)local_c8._16_8_;
  return;
}

// CalculateSphericalConstraintAxisLinearVelocities @ 143ba0f00

void __thiscall
Chaos::FPBDJointSolver::CalculateSphericalConstraintAxisLinearVelocities
          (FPBDJointSolver *this,FPBDJointSettings *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FSolverBody *pFVar11;
  FSolverBody *pFVar12;
  code *pcVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_res8;
  double local_res10;
  double local_res18;
  double local_d8;
  double local_d0;
  double local_c8;
  
  FPBDJointUtilities::GetSphericalAxisDelta
            (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_d8,&local_res8);
  local_res18 = *(double *)&this->ConnectorXs[1].field_0x8;
  dVar7 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar8 = param_1->LinearLimit;
  dVar9 = *(double *)&this->ConnectorXs[0].field_0x10;
  dVar10 = *(double *)&this->ConnectorXs[0].field_0x8;
  dVar15 = dVar7 - dVar9;
  dVar17 = local_res18 - dVar10;
  dVar19 = *(double *)(this->ConnectorXs + 1) - *(double *)this->ConnectorXs;
  if (dVar8 < local_res8) {
    dVar15 = local_c8 * dVar8;
    dVar17 = local_d0 * dVar8;
    dVar19 = local_d8 * dVar8;
  }
  pFVar11 = this->SolverBodies[0].Body;
  pFVar12 = this->SolverBodies[1].Body;
  local_res18 = local_res18 - *(double *)&(pFVar12->State).P.field_0x8;
  local_res10 = *(double *)(this->ConnectorXs + 1) - *(double *)&(pFVar12->State).P;
  dVar8 = (*(double *)this->ConnectorXs + dVar19) - *(double *)&(pFVar11->State).P;
  dVar10 = (dVar10 + dVar17) - *(double *)&(pFVar11->State).P.field_0x8;
  dVar9 = (dVar9 + dVar15) - *(double *)&(pFVar11->State).P.field_0x10;
  dVar7 = dVar7 - *(double *)&(pFVar12->State).P.field_0x10;
  if (pFVar11 == (FSolverBody *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar11->State).V;
  fVar2 = *(float *)&(pFVar11->State).V.field_0x4;
  fVar3 = *(float *)&(pFVar11->State).V.field_0x8;
  if (pFVar11 == (FSolverBody *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[0].Body;
  dVar15 = (double)*(float *)&(pFVar11->State).W.field_0x8;
  dVar17 = (double)*(float *)&(pFVar11->State).W;
  dVar19 = (double)*(float *)&(pFVar11->State).W.field_0x4;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[1].Body;
  fVar4 = *(float *)&(pFVar11->State).V;
  fVar5 = *(float *)&(pFVar11->State).V.field_0x4;
  fVar6 = *(float *)&(pFVar11->State).V.field_0x8;
  if (pFVar11 == (FSolverBody *)0x0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                        ,0x2e,L"");
    if (bVar14) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[1].Body;
  dVar20 = (double)*(float *)&(pFVar11->State).W;
  dVar16 = (double)*(float *)&(pFVar11->State).W.field_0x8;
  dVar18 = (double)*(float *)&(pFVar11->State).W.field_0x4;
  *(double *)param_2 =
       (((dVar16 * local_res10 - dVar20 * dVar7) + (double)fVar5) -
       ((dVar15 * dVar8 - dVar17 * dVar9) + (double)fVar2)) * local_d0 +
       (((dVar18 * dVar7 - dVar16 * local_res18) + (double)fVar4) -
       ((dVar19 * dVar9 - dVar15 * dVar10) + (double)fVar1)) * local_d8 +
       (((dVar20 * local_res18 - dVar18 * local_res10) + (double)fVar6) -
       ((dVar17 * dVar10 - dVar19 * dVar8) + (double)fVar3)) * local_c8;
  return;
}

// CalculateSwingConstraintAxisAngularVelocities @ 143ba1280

void __thiscall
Chaos::FPBDJointSolver::CalculateSwingConstraintAxisAngularVelocities
          (FPBDJointSolver *this,FPBDJointSolverSettings *param_1,FPBDJointSettings *param_2,
          EJointAngularConstraintIndex param_3,TVector<double,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  bool bVar9;
  double local_res8;
  double local_58;
  double local_50;
  double local_48;
  
  FPBDJointUtilities::GetSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_1->SwingTwistAngleTolerance,param_3,
             (TVector<double,3> *)&local_58,&local_res8);
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar7->State).W;
  fVar2 = *(float *)&(pFVar7->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar7->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar4 = *(float *)&(pFVar7->State).W.field_0x8;
  fVar5 = *(float *)&(pFVar7->State).W;
  fVar6 = *(float *)&(pFVar7->State).W.field_0x4;
  if (Swing1 < param_3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  *(double *)(&param_4->field_0x0 + (longlong)(int)param_3 * 8) =
       ((double)fVar1 - (double)fVar5) * local_58 + ((double)fVar2 - (double)fVar6) * local_50 +
       ((double)fVar3 - (double)fVar4) * local_48;
  return;
}

// CalculateTwistConstraintAxisAngularVelocities @ 143ba13f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointSolver::CalculateTwistConstraintAxisAngularVelocities
          (FPBDJointSolver *this,FPBDJointSettings *param_1,TVector<double,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSolverBody *pFVar4;
  code *pcVar5;
  bool bVar6;
  double local_res8;
  undefined1 local_58 [80];
  
  FPBDJointUtilities::GetTwistAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,(TVector<double,3> *)local_58,&local_res8);
  if (local_res8 < 0.0) {
    local_58._0_4_ = local_58._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_58._4_4_ = local_58._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_58._8_4_ = local_58._8_4_ ^ _UNK_15066df78;
    local_58._12_4_ = local_58._12_4_ ^ _UNK_15066df7c;
    local_58._16_8_ =
         CONCAT44(SUB84(local_58._16_8_,4) ^ __xmm_80000000000000008000000000000000._4_4_,
                  (uint)local_58._16_8_ ^ (uint)__xmm_80000000000000008000000000000000);
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar4->State).W;
  fVar2 = *(float *)&(pFVar4->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar4->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                       ,0x2e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = this->SolverBodies[0].Body;
  *(double *)param_2 =
       ((double)fVar2 - (double)*(float *)&(pFVar4->State).W.field_0x4) *
       (double)CONCAT44(local_58._12_4_,local_58._8_4_) +
       ((double)fVar1 - (double)*(float *)&(pFVar4->State).W) *
       (double)CONCAT44(local_58._4_4_,local_58._0_4_) +
       ((double)fVar3 - (double)*(float *)&(pFVar4->State).W.field_0x8) * (double)local_58._16_8_;
  return;
}

// Deinit @ 143ba1a10

void __thiscall Chaos::FPBDJointSolver::Deinit(FPBDJointSolver *this)

{
  this->SolverBodies[0].Body = (FSolverBody *)0x0;
  this->SolverBodies[1].Body = (FSolverBody *)0x0;
  return;
}

// Init @ 143ba36d0

void __thiscall
Chaos::FPBDJointSolver::Init
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,TRigidTransform<double,3> *param_4,
          TRigidTransform<double,3> *param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  FSolverBody *pFVar4;
  FSolverBody *pFVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  uVar2 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)this->LocalConnectorXs = *(undefined8 *)param_4;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x58 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x8;
  *(undefined8 *)(this->LocalConnectorXs + 1) = *(undefined8 *)param_5;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x18 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x20 = *(undefined8 *)&param_5->field_0x20;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x28 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x38;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x30 = *(undefined8 *)&param_5->field_0x30;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x38 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x48;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x40 = *(undefined8 *)&param_5->field_0x40;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x48 = uVar2;
  uVar2 = *(undefined8 *)&param_5->field_0x58;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x50 = *(undefined8 *)&param_5->field_0x50;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x58 = uVar2;
  dVar1 = param_3->ParentInvMassScale;
  this->SolverBodies[1].State.InvMScale = 1.0;
  fVar11 = (float)dVar1;
  this->SolverBodies[0].State.InvMScale = fVar11;
  dVar1 = param_3->ParentInvMassScale;
  this->SolverBodies[1].State.InvIScale = 1.0;
  this->SolverBodies[0].State.ShockPropagationScale = 1.0;
  this->SolverBodies[1].State.ShockPropagationScale = 1.0;
  fVar10 = (float)dVar1;
  this->SolverBodies[0].State.InvIScale = fVar10;
  this->InvMScales[0] = 1.0;
  this->InvMScales[1] = 1.0;
  pFVar4 = this->SolverBodies[0].Body;
  this->ConditionedInvMs[0] = (double)(fVar11 * (pFVar4->State).InvM);
  this->ConditionedInvMs[1] =
       (double)(this->SolverBodies[1].State.InvMScale *
                this->SolverBodies[1].State.ShockPropagationScale *
               ((this->SolverBodies[1].Body)->State).InvM);
  uVar2 = *(undefined8 *)&(pFVar4->State).InvILocal.field_0x4;
  *(double *)this->ConditionedInvILs = (double)(fVar10 * *(float *)&(pFVar4->State).InvILocal);
  dVar1 = (double)(fVar10 * (float)((ulonglong)uVar2 >> 0x20));
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = (double)(fVar10 * (float)uVar2);
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->ConditionedInvILs[0].field_0x8 = auVar6;
  pFVar5 = this->SolverBodies[1].Body;
  fVar9 = this->SolverBodies[1].State.InvIScale * this->SolverBodies[1].State.ShockPropagationScale;
  uVar2 = *(undefined8 *)&(pFVar5->State).InvILocal.field_0x4;
  *(double *)(this->ConditionedInvILs + 1) = (double)(fVar9 * *(float *)&(pFVar5->State).InvILocal);
  dVar1 = (double)(fVar9 * (float)((ulonglong)uVar2 >> 0x20));
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(fVar9 * (float)uVar2);
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->ConditionedInvILs[1].field_0x8 = auVar7;
  if (param_3->bMassConditioningEnabled != false) {
    fVar9 = this->SolverBodies[1].State.ShockPropagationScale;
    fVar8 = fVar9 * this->SolverBodies[1].State.InvIScale;
    local_48 = (double)(fVar8 * *(float *)&(pFVar5->State).InvILocal);
    local_40 = (double)(fVar8 * *(float *)&(pFVar5->State).InvILocal.field_0x4);
    local_38 = (double)(fVar8 * *(float *)&(pFVar5->State).InvILocal.field_0x8);
    local_30 = (double)(fVar10 * *(float *)&(pFVar4->State).InvILocal);
    local_28 = (double)(fVar10 * *(float *)&(pFVar4->State).InvILocal.field_0x4);
    local_20 = (double)(fVar10 * *(float *)&(pFVar4->State).InvILocal.field_0x8);
    param_4 = (TRigidTransform<double,3> *)
              (double)(fVar9 * this->SolverBodies[1].State.InvMScale * (pFVar5->State).InvM);
    param_5 = (TRigidTransform<double,3> *)(double)(fVar11 * (pFVar4->State).InvM);
    FPBDJointUtilities::ConditionInverseMassAndInertia
              ((double *)&param_5,(double *)&param_4,(TVector<double,3> *)&local_30,
               (TVector<double,3> *)&local_48,param_2->MinParentMassRatio,param_2->MaxInertiaRatio,
               this->ConditionedInvMs,this->ConditionedInvMs + 1,this->ConditionedInvILs,
               this->ConditionedInvILs + 1);
  }
  UpdateMass0(this);
  UpdateMass1(this);
  *(undefined8 *)&this->NetLinearImpulse = 0;
  *(undefined8 *)&(this->NetLinearImpulse).field_0x8 = 0;
  *(undefined8 *)&(this->NetLinearImpulse).field_0x10 = 0;
  *(undefined8 *)&this->NetAngularImpulse = 0;
  *(undefined8 *)&(this->NetAngularImpulse).field_0x8 = 0;
  *(undefined8 *)&(this->NetAngularImpulse).field_0x10 = 0;
  this->LinearViolationSq = 0.0;
  this->AngularViolation = 0.0;
  this->LinearSoftLambda = 0.0;
  this->TwistSoftLambda = 0.0;
  this->SwingSoftLambda = 0.0;
  *(undefined8 *)&this->LinearDriveLambdas = 0;
  *(undefined8 *)&(this->LinearDriveLambdas).field_0x8 = 0;
  *(undefined8 *)&(this->LinearDriveLambdas).field_0x10 = 0;
  *(undefined8 *)&this->RotationDriveLambdas = 0;
  *(undefined8 *)&(this->RotationDriveLambdas).field_0x8 = 0;
  *(undefined8 *)&(this->RotationDriveLambdas).field_0x10 = 0;
  dVar1 = param_1 * __real_40ac200000000000 * param_1;
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  this->PositionTolerance = dVar1 * param_2->PositionTolerance;
  dVar3 = param_2->AngleTolerance;
  this->SolverStiffness = 1.0;
  this->bIsBroken = false;
  this->AngleTolerance = dVar1 * dVar3;
  *(undefined8 *)&this->LinearHardLambda = 0;
  *(undefined8 *)&(this->LinearHardLambda).field_0x8 = 0;
  *(undefined8 *)&(this->LinearHardLambda).field_0x10 = 0;
  *(undefined8 *)&this->AngularHardLambda = 0;
  *(undefined8 *)&(this->AngularHardLambda).field_0x8 = 0;
  *(undefined8 *)&(this->AngularHardLambda).field_0x10 = 0;
  InitDerivedState(this);
  if (param_3->LinearRestitution != 0.0) {
    CalculateConstraintAxisLinearVelocities(this,param_3,&this->InitConstraintAxisLinearVelocities);
  }
  if ((param_3->TwistRestitution != 0.0) || (param_3->SwingRestitution != 0.0)) {
    CalculateConstraintAxisAngularVelocities
              (this,param_2,param_3,&this->InitConstraintAxisAngularVelocities);
  }
  return;
}

// InitDerivedState @ 143ba4bd0

void __thiscall Chaos::FPBDJointSolver::InitDerivedState(FPBDJointSolver *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  FSolverBody *pFVar12;
  code *pcVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  bool bVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[0].Body;
  if ((pFVar12 == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_198._s_0.X = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x20;
  local_198._s_0.Y = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x28;
  local_198._s_0.Z = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x30;
  local_158 = local_198._s_0.X;
  dStack_150 = local_198._s_0.Y;
  local_148 = local_198._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)&((this->SolverBodies[0].Body)->State).R,
             (TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_198._s_0);
  dVar7 = *(double *)&(pFVar12->State).X.field_0x8;
  dVar8 = *(double *)&(pFVar12->State).X.field_0x10;
  *(double *)this->InitConnectorXs = local_1c8._s_0.X + *(double *)&(pFVar12->State).X;
  *(double *)&this->InitConnectorXs[0].field_0x8 = local_1c8._s_0.Y + dVar7;
  *(double *)&this->InitConnectorXs[0].field_0x10 = local_1c8._s_0.Z + dVar8;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[1].Body;
  if ((pFVar12 == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_178._s_0.X = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x20;
  local_178._s_0.Y = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x28;
  local_178._s_0.Z = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x30;
  local_140 = local_178._s_0.X;
  dStack_138 = local_178._s_0.Y;
  local_130 = local_178._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)&((this->SolverBodies[1].Body)->State).R,
             (TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_178._s_0);
  dVar7 = *(double *)&(pFVar12->State).X.field_0x8;
  dVar8 = *(double *)&(pFVar12->State).X.field_0x10;
  *(double *)(this->InitConnectorXs + 1) = local_1b0._s_0.X + *(double *)&(pFVar12->State).X;
  *(double *)&this->InitConnectorXs[1].field_0x8 = local_1b0._s_0.Y + dVar7;
  *(double *)&this->InitConnectorXs[1].field_0x10 = local_1b0._s_0.Z + dVar8;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  dVar26 = *(double *)&this->LocalConnectorXs[0].field_0x10;
  dVar27 = *(double *)&this->LocalConnectorXs[0].field_0x18;
  dVar28 = *(double *)this->LocalConnectorXs;
  dVar29 = *(double *)&this->LocalConnectorXs[0].field_0x8;
  pFVar12 = this->SolverBodies[0].Body;
  dVar30 = *(double *)&(pFVar12->State).R;
  dVar31 = *(double *)&(pFVar12->State).R.field_0x8;
  dVar32 = *(double *)&(pFVar12->State).R.field_0x10;
  dVar33 = *(double *)&(pFVar12->State).R.field_0x18;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar19 = dVar30 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar28 * dVar33 +
           dVar26 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar32 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar20 = dVar30 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar29 * dVar33 +
           dVar27 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar32 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar36 = SUB84(dVar20,0);
  uVar37 = (undefined4)((ulonglong)dVar20 >> 0x20);
  auVar16._8_4_ = uVar36;
  auVar16._0_8_ = dVar19;
  auVar16._12_4_ = uVar37;
  *(undefined1 (*) [16])this->InitConnectorRs = auVar16;
  dVar7 = dVar30 * dVar29 * dVar7 + dVar26 * dVar33 + dVar28 * dVar31 * dVar8 +
          dVar32 * dVar27 * dVar35;
  dVar8 = dVar30 * dVar28 * dVar9 + dVar27 * dVar33 + dVar29 * dVar31 * dVar10 +
          dVar32 * dVar26 * dVar11;
  uVar38 = SUB84(dVar8,0);
  uVar39 = (undefined4)((ulonglong)dVar8 >> 0x20);
  local_128._8_4_ = uVar36;
  local_128._0_8_ = dVar19;
  local_128._12_4_ = uVar37;
  auVar23._8_4_ = uVar38;
  auVar23._0_8_ = dVar7;
  auVar23._12_4_ = uVar39;
  *(undefined1 (*) [16])&this->InitConnectorRs[0].field_0x10 = auVar23;
  local_118._8_4_ = uVar38;
  local_118._0_8_ = dVar7;
  local_118._12_4_ = uVar39;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  dVar26 = *(double *)&this->LocalConnectorXs[1].field_0x10;
  dVar27 = *(double *)&this->LocalConnectorXs[1].field_0x18;
  dVar28 = *(double *)(this->LocalConnectorXs + 1);
  dVar29 = *(double *)&this->LocalConnectorXs[1].field_0x8;
  pFVar12 = this->SolverBodies[1].Body;
  dVar30 = *(double *)&(pFVar12->State).R;
  dVar31 = *(double *)&(pFVar12->State).R.field_0x8;
  dVar32 = *(double *)&(pFVar12->State).R.field_0x10;
  dVar33 = *(double *)&(pFVar12->State).R.field_0x18;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar19 = dVar30 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar28 * dVar33 +
           dVar26 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar32 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar20 = dVar30 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar29 * dVar33 +
           dVar27 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar32 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar36 = (undefined4)((ulonglong)dVar20 >> 0x20);
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar17._8_4_ = SUB84(dVar20,0);
  auVar17._0_8_ = dVar19;
  auVar17._12_4_ = uVar36;
  *(undefined1 (*) [16])(this->InitConnectorRs + 1) = auVar17;
  local_108._8_4_ = SUB84(dVar20,0);
  local_108._0_8_ = dVar19;
  local_108._12_4_ = uVar36;
  dVar7 = dVar30 * dVar29 * dVar7 + dVar26 * dVar33 + dVar28 * dVar31 * dVar8 +
          dVar32 * dVar27 * dVar35;
  dVar8 = dVar30 * dVar28 * dVar9 + dVar27 * dVar33 + dVar29 * dVar31 * dVar10 +
          dVar32 * dVar26 * dVar11;
  uVar36 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar24._8_4_ = SUB84(dVar8,0);
  auVar24._0_8_ = dVar7;
  auVar24._12_4_ = uVar36;
  *(undefined1 (*) [16])&this->InitConnectorRs[1].field_0x10 = auVar24;
  local_f8._8_4_ = SUB84(dVar8,0);
  local_f8._0_8_ = dVar7;
  local_f8._12_4_ = uVar36;
  dVar35 = __real_bff0000000000000;
  if (0.0 <= dVar8 * *(double *)&this->InitConnectorRs[0].field_0x18 +
             *(double *)&this->InitConnectorRs[0].field_0x10 *
             *(double *)&this->InitConnectorRs[1].field_0x10 +
             *(double *)&this->InitConnectorRs[1].field_0x8 *
             *(double *)&this->InitConnectorRs[0].field_0x8 +
             *(double *)(this->InitConnectorRs + 1) * *(double *)this->InitConnectorRs) {
    dVar35 = __real_3ff0000000000000;
  }
  auVar14._8_4_ = SUB84(dVar35 * dVar20,0);
  auVar14._0_8_ = dVar35 * dVar19;
  auVar14._12_4_ = (int)((ulonglong)(dVar35 * dVar20) >> 0x20);
  *(undefined1 (*) [16])(this->InitConnectorRs + 1) = auVar14;
  auVar15._8_4_ = SUB84(dVar35 * dVar8,0);
  auVar15._0_8_ = dVar35 * dVar7;
  auVar15._12_4_ = (int)((ulonglong)(dVar35 * dVar8) >> 0x20);
  *(undefined1 (*) [16])&this->InitConnectorRs[1].field_0x10 = auVar15;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar12->State).DP.field_0x8;
  dVar7 = *(double *)&(pFVar12->State).P.field_0x10;
  fVar2 = *(float *)&(pFVar12->State).DP.field_0x4;
  dVar8 = *(double *)&(pFVar12->State).P.field_0x8;
  fVar3 = *(float *)&(pFVar12->State).DP;
  dVar35 = *(double *)&(pFVar12->State).P;
  if ((pFVar12 == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FSolverBody::CorrectedQ(this->SolverBodies[0].Body,(TRotation<double,3> *)&local_208);
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[1].Body;
  fVar4 = *(float *)&(pFVar12->State).DP.field_0x8;
  fVar5 = *(float *)&(pFVar12->State).DP.field_0x4;
  fVar6 = *(float *)&(pFVar12->State).DP;
  dVar9 = *(double *)&(pFVar12->State).P.field_0x10;
  dVar10 = *(double *)&(pFVar12->State).P.field_0x8;
  dVar11 = *(double *)&(pFVar12->State).P;
  if ((pFVar12 == (FSolverBody *)0x0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L""), bVar34)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  FSolverBody::CorrectedQ(this->SolverBodies[1].Body,(TRotation<double,3> *)&local_1e8);
  dVar27 = *(double *)&this->LocalConnectorXs[0].field_0x20;
  dVar28 = *(double *)&this->LocalConnectorXs[0].field_0x28;
  dVar29 = *(double *)&this->LocalConnectorXs[0].field_0x30;
  dVar26 = dVar29 * dStack_200 - dVar28 * local_1f8;
  dVar26 = dVar26 + dVar26;
  dVar19 = dVar27 * local_1f8 - dVar29 * local_208;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar28 * local_208 - dVar27 * dStack_200;
  dVar20 = dVar20 + dVar20;
  *(double *)this->ConnectorXs =
       (dVar20 * dStack_200 - dVar19 * local_1f8) + dVar26 * dStack_1f0 + dVar27 +
       (double)fVar3 + dVar35;
  *(double *)&this->ConnectorXs[0].field_0x8 =
       (dVar26 * local_1f8 - dVar20 * local_208) + dVar19 * dStack_1f0 + dVar28 +
       (double)fVar2 + dVar8;
  *(double *)&this->ConnectorXs[0].field_0x10 =
       (dVar19 * local_208 - dVar26 * dStack_200) + dVar20 * dStack_1f0 + dVar29 +
       (double)fVar1 + dVar7;
  dVar19 = *(double *)&this->LocalConnectorXs[1].field_0x20;
  dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x28;
  dVar26 = *(double *)&this->LocalConnectorXs[1].field_0x30;
  dVar35 = dVar26 * dStack_1e0 - dVar20 * local_1d8;
  dVar7 = dVar19 * local_1d8 - dVar26 * local_1e8;
  dVar8 = dVar20 * local_1e8 - dVar19 * dStack_1e0;
  dVar7 = dVar7 + dVar7;
  dVar35 = dVar35 + dVar35;
  dVar8 = dVar8 + dVar8;
  *(double *)(this->ConnectorXs + 1) =
       (dVar8 * dStack_1e0 - dVar7 * local_1d8) + dVar35 * dStack_1d0 + dVar19 +
       (double)fVar6 + dVar11;
  *(double *)&this->ConnectorXs[1].field_0x8 =
       (dVar35 * local_1d8 - dVar8 * local_1e8) + dVar7 * dStack_1d0 + dVar20 +
       (double)fVar5 + dVar10;
  *(double *)&this->ConnectorXs[1].field_0x10 =
       (dVar7 * local_1e8 - dVar35 * dStack_1e0) + dVar8 * dStack_1d0 + dVar26 +
       (double)fVar4 + dVar9;
  dVar20 = *(double *)&this->LocalConnectorXs[0].field_0x10;
  dVar26 = *(double *)&this->LocalConnectorXs[0].field_0x18;
  dVar27 = *(double *)this->LocalConnectorXs;
  dVar28 = *(double *)&this->LocalConnectorXs[0].field_0x8;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar19 = dVar20 * local_208 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar28 * dStack_1f0 +
           dVar26 * dStack_200 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_1f8 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar19,0);
  auVar21._0_8_ =
       dVar26 * local_208 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar27 * dStack_1f0 +
       dVar20 * dStack_200 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_1f8 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar21._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])this->ConnectorRs = auVar21;
  dVar9 = local_208 * dVar27 * dVar9 + dVar26 * dStack_1f0 + dVar28 * dStack_200 * dVar10 +
          local_1f8 * dVar20 * dVar11;
  auVar25._8_4_ = SUB84(dVar9,0);
  auVar25._0_8_ =
       local_208 * dVar28 * dVar7 + dVar20 * dStack_1f0 + dVar27 * dStack_200 * dVar8 +
       local_1f8 * dVar26 * dVar35;
  auVar25._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10 = auVar25;
  dVar11 = *(double *)(this->LocalConnectorXs + 1);
  dVar19 = *(double *)&this->LocalConnectorXs[1].field_0x8;
  dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x10;
  dVar26 = *(double *)&this->LocalConnectorXs[1].field_0x18;
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar9 = dVar20 * local_1e8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar19 * dStack_1d0 +
          dVar26 * dStack_1e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          local_1d8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar10 = local_1e8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar26 * dStack_1d0 +
           dVar19 * dStack_1e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           local_1d8 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar18._8_4_ = SUB84(dVar9,0);
  auVar18._0_8_ =
       dVar26 * local_1e8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar11 * dStack_1d0 +
       dVar20 * dStack_1e0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_1d8 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar18._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar18;
  auVar22._8_4_ = SUB84(dVar10,0);
  auVar22._0_8_ =
       local_1e8 * dVar19 * dVar7 + dVar20 * dStack_1d0 + dVar11 * dStack_1e0 * dVar8 +
       local_1d8 * dVar26 * dVar35;
  auVar22._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar22;
  UE::Math::TQuat<double>::EnforceShortestArcWith
            ((TQuat<double> *)(this->ConnectorRs + 1),(TQuat<double> *)this->ConnectorRs);
  return;
}

// SetShockPropagationScales @ 143baca60

void __thiscall
Chaos::FPBDJointSolver::SetShockPropagationScales
          (FPBDJointSolver *this,double param_1,double param_2,double param_3)

{
  if (param_1 != this->InvMScales[0]) {
    this->InvMScales[0] = param_1;
    UpdateMass0(this);
  }
  if (param_2 != this->InvMScales[1]) {
    this->InvMScales[1] = param_2;
    UpdateMass1(this);
  }
  return;
}

// Update @ 143bae870

void __thiscall
Chaos::FPBDJointSolver::Update
          (FPBDJointSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  
  uVar25 = SUB84(__real_3e45798ee0000000,0);
  uVar26 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  if (__real_3e45798ee0000000 < this->InvMs[0]) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar7->State).DP.field_0x8;
    fVar2 = *(float *)&(pFVar7->State).DP.field_0x4;
    fVar3 = *(float *)&(pFVar7->State).DP;
    dVar4 = *(double *)&(pFVar7->State).P.field_0x10;
    dVar5 = *(double *)&(pFVar7->State).P.field_0x8;
    dVar6 = *(double *)&(pFVar7->State).P;
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[0].Body,(TRotation<double,3> *)&dStack_148);
    dStack_108 = *(double *)&this->LocalConnectorXs[0].field_0x20;
    dStack_100 = *(double *)&this->LocalConnectorXs[0].field_0x28;
    dStack_f8 = *(double *)&this->LocalConnectorXs[0].field_0x30;
    dVar19 = dStack_f8 * dStack_140 - dStack_100 * dStack_138;
    dVar19 = dVar19 + dVar19;
    dVar13 = dStack_108 * dStack_138 - dStack_f8 * dStack_148;
    dVar13 = dVar13 + dVar13;
    dVar16 = dStack_100 * dStack_148 - dStack_108 * dStack_140;
    dVar16 = dVar16 + dVar16;
    *(double *)this->ConnectorXs =
         (dVar16 * dStack_140 - dVar13 * dStack_138) + dVar19 * dStack_130 + dStack_108 +
         (double)fVar3 + dVar6;
    *(double *)&this->ConnectorXs[0].field_0x8 =
         (dVar19 * dStack_138 - dVar16 * dStack_148) + dVar13 * dStack_130 + dStack_100 +
         (double)fVar2 + dVar5;
    *(double *)&this->ConnectorXs[0].field_0x10 =
         (dVar13 * dStack_148 - dVar19 * dStack_140) + dVar16 * dStack_130 + dStack_f8 +
         (double)fVar1 + dVar4;
    dVar20 = *(double *)this->LocalConnectorXs;
    dVar21 = *(double *)&this->LocalConnectorXs[0].field_0x8;
    dVar22 = *(double *)&this->LocalConnectorXs[0].field_0x10;
    dVar23 = *(double *)&this->LocalConnectorXs[0].field_0x18;
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar14 = dVar23 * dStack_148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dStack_130 * dVar20 +
             dStack_140 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dStack_138 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar15 = dVar22 * dStack_148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dStack_130 * dVar21 +
             dStack_140 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dStack_138 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar27 = SUB84(dVar15,0);
    uVar28 = (undefined4)((ulonglong)dVar15 >> 0x20);
    uVar25 = SUB84(__real_3e45798ee0000000,0);
    uVar26 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    auVar11._8_4_ = uVar27;
    auVar11._0_8_ = dVar14;
    auVar11._12_4_ = uVar28;
    *(undefined1 (*) [16])this->ConnectorRs = auVar11;
    dVar4 = dStack_148 * dVar21 * dVar4 + dStack_130 * dVar22 + dStack_140 * dVar20 * dVar5 +
            dStack_138 * dVar23 * dVar6;
    dVar5 = dStack_148 * dVar20 * dVar13 + dStack_130 * dVar23 + dStack_140 * dVar21 * dVar16 +
            dStack_138 * dVar22 * dVar19;
    uVar29 = SUB84(dVar5,0);
    uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auStack_e8._8_4_ = uVar27;
    auStack_e8._0_8_ = dVar14;
    auStack_e8._12_4_ = uVar28;
    auStack_d8._8_4_ = uVar29;
    auStack_d8._0_8_ = dVar4;
    auStack_d8._12_4_ = uVar30;
    auVar17._8_4_ = uVar29;
    auVar17._0_8_ = dVar4;
    auVar17._12_4_ = uVar30;
    *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10 = auVar17;
  }
  if ((double)CONCAT44(uVar26,uVar25) < this->InvMs[1]) {
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar7->State).DP.field_0x8;
    fVar2 = *(float *)&(pFVar7->State).DP.field_0x4;
    fVar3 = *(float *)&(pFVar7->State).DP;
    dVar4 = *(double *)&(pFVar7->State).P.field_0x10;
    dVar5 = *(double *)&(pFVar7->State).P.field_0x8;
    dVar6 = *(double *)&(pFVar7->State).P;
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[1].Body,(TRotation<double,3> *)&dStack_128);
    dVar14 = *(double *)&this->LocalConnectorXs[1].field_0x20;
    dVar15 = *(double *)&this->LocalConnectorXs[1].field_0x28;
    dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x30;
    dVar19 = dVar20 * dStack_120 - dVar15 * dStack_118;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar14 * dStack_118 - dVar20 * dStack_128;
    dVar13 = dVar13 + dVar13;
    dVar16 = dVar15 * dStack_128 - dVar14 * dStack_120;
    dVar16 = dVar16 + dVar16;
    *(double *)(this->ConnectorXs + 1) =
         (dVar16 * dStack_120 - dVar13 * dStack_118) + dVar19 * dStack_110 + dVar14 +
         (double)fVar3 + dVar6;
    *(double *)&this->ConnectorXs[1].field_0x8 =
         (dVar19 * dStack_118 - dVar16 * dStack_128) + dVar13 * dStack_110 + dVar15 +
         (double)fVar2 + dVar5;
    *(double *)&this->ConnectorXs[1].field_0x10 =
         (dVar13 * dStack_128 - dVar19 * dStack_120) + dVar16 * dStack_110 + dVar20 +
         (double)fVar1 + dVar4;
    dVar19 = *(double *)(this->LocalConnectorXs + 1);
    dVar14 = *(double *)&this->LocalConnectorXs[1].field_0x8;
    dVar15 = *(double *)&this->LocalConnectorXs[1].field_0x10;
    dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x18;
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar13 = dVar15 * dStack_128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dStack_110 * dVar14 +
             dStack_120 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dStack_118 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar16 = dStack_128 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dStack_110 * dVar20 +
             dStack_120 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dStack_118 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ =
         dVar20 * dStack_128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dStack_110 * dVar19 +
         dStack_120 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dStack_118 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar12;
    auVar18._8_4_ = SUB84(dVar16,0);
    auVar18._0_8_ =
         dStack_128 * dVar14 * dVar4 + dStack_110 * dVar15 + dStack_120 * dVar19 * dVar5 +
         dStack_118 * dVar20 * dVar6;
    auVar18._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar18;
  }
  if (*(double *)&this->ConnectorRs[0].field_0x18 * *(double *)&this->ConnectorRs[1].field_0x18 +
      *(double *)&this->ConnectorRs[0].field_0x10 * *(double *)&this->ConnectorRs[1].field_0x10 +
      *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8 +
      *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1) < 0.0) {
    uVar25 = (undefined4)__real_bff0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar25 = (undefined4)__real_3ff0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar26,uVar25) * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = (double)CONCAT44(uVar26,uVar25) * *(double *)(this->ConnectorRs + 1);
  auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar10;
  dVar4 = *(double *)&this->ConnectorRs[1].field_0x18 * (double)CONCAT44(uVar26,uVar25);
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = *(double *)&this->ConnectorRs[1].field_0x10 * (double)CONCAT44(uVar26,uVar25);
  auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar9;
  return;
}

// UpdateDerivedState @ 143baebc0

void __thiscall Chaos::FPBDJointSolver::UpdateDerivedState(FPBDJointSolver *this,int param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FConstraintSolverBody *pFVar20;
  double dVar21;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  
  pFVar20 = Body(this,param_1);
  pFVar7 = pFVar20->Body;
  fVar2 = *(float *)&(pFVar7->State).DP.field_0x8;
  fVar3 = *(float *)&(pFVar7->State).DP.field_0x4;
  fVar4 = *(float *)&(pFVar7->State).DP;
  dVar21 = *(double *)&(pFVar7->State).P.field_0x10;
  dVar5 = *(double *)&(pFVar7->State).P.field_0x8;
  dVar6 = *(double *)&(pFVar7->State).P;
  pFVar20 = Body(this,param_1);
  FSolverBody::CorrectedQ(pFVar20->Body,(TRotation<double,3> *)&local_c8);
  puVar1 = &this->LocalConnectorXs[param_1].field_0x20;
  dVar12 = *(double *)puVar1;
  dVar16 = *(double *)(puVar1 + 8);
  dVar17 = *(double *)&this->LocalConnectorXs[param_1].field_0x30;
  dVar15 = dVar17 * dStack_c0 - dVar16 * local_b8;
  dVar15 = dVar15 + dVar15;
  dVar11 = dVar12 * local_b8 - dVar17 * local_c8;
  dVar11 = dVar11 + dVar11;
  dVar13 = dVar16 * local_c8 - dVar12 * dStack_c0;
  dVar13 = dVar13 + dVar13;
  *(double *)(this->ConnectorXs + param_1) =
       (dVar13 * dStack_c0 - dVar11 * local_b8) + dVar15 * dStack_b0 + dVar12 +
       (double)fVar4 + dVar6;
  *(double *)&this->ConnectorXs[param_1].field_0x8 =
       (dVar15 * local_b8 - dVar13 * local_c8) + dVar11 * dStack_b0 + dVar16 + (double)fVar3 + dVar5
  ;
  *(double *)&this->ConnectorXs[param_1].field_0x10 =
       (dVar11 * local_c8 - dVar15 * dStack_c0) + dVar13 * dStack_b0 + dVar17 +
       (double)fVar2 + dVar21;
  puVar1 = &this->LocalConnectorXs[param_1].field_0x10;
  dVar16 = *(double *)puVar1;
  dVar17 = *(double *)(puVar1 + 8);
  dVar18 = *(double *)(this->LocalConnectorXs + param_1);
  dVar19 = *(double *)&this->LocalConnectorXs[param_1].field_0x8;
  dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar12 = dVar16 * local_c8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dStack_b0 * dVar19 +
           dStack_c0 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_b8 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar15 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ =
       dVar17 * local_c8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dStack_b0 * dVar18 +
       dStack_c0 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       local_b8 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + param_1) = auVar10;
  dVar11 = local_c8 * dVar18 * dVar11 + dStack_b0 * dVar17 + dStack_c0 * dVar19 * dVar13 +
           local_b8 * dVar16 * dVar15;
  auVar14._8_4_ = SUB84(dVar11,0);
  auVar14._0_8_ =
       local_c8 * dVar19 * dVar21 + dStack_b0 * dVar16 + dStack_c0 * dVar18 * dVar5 +
       local_b8 * dVar17 * dVar6;
  auVar14._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[param_1].field_0x10 = auVar14;
  dVar21 = __real_bff0000000000000;
  if (0.0 <= *(double *)&this->ConnectorRs[0].field_0x18 *
             *(double *)&this->ConnectorRs[1].field_0x18 +
             *(double *)&this->ConnectorRs[0].field_0x10 *
             *(double *)&this->ConnectorRs[1].field_0x10 +
             *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8
             + *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1)) {
    dVar21 = __real_3ff0000000000000;
  }
  dVar5 = dVar21 * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar8._8_4_ = SUB84(dVar5,0);
  auVar8._0_8_ = dVar21 * *(double *)(this->ConnectorRs + 1);
  auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar8;
  dVar5 = dVar21 * *(double *)&this->ConnectorRs[1].field_0x18;
  auVar9._8_4_ = SUB84(dVar5,0);
  auVar9._0_8_ = dVar21 * *(double *)&this->ConnectorRs[1].field_0x10;
  auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar9;
  return;
}

// UpdateDerivedState @ 143baef40

void __thiscall Chaos::FPBDJointSolver::UpdateDerivedState(FPBDJointSolver *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  
  uVar25 = SUB84(__real_3e45798ee0000000,0);
  uVar26 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  if (__real_3e45798ee0000000 < this->InvMs[0]) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar7->State).DP.field_0x8;
    fVar2 = *(float *)&(pFVar7->State).DP.field_0x4;
    fVar3 = *(float *)&(pFVar7->State).DP;
    dVar4 = *(double *)&(pFVar7->State).P.field_0x10;
    dVar5 = *(double *)&(pFVar7->State).P.field_0x8;
    dVar6 = *(double *)&(pFVar7->State).P;
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[0].Body,(TRotation<double,3> *)&local_148);
    local_108 = *(double *)&this->LocalConnectorXs[0].field_0x20;
    dStack_100 = *(double *)&this->LocalConnectorXs[0].field_0x28;
    local_f8 = *(double *)&this->LocalConnectorXs[0].field_0x30;
    dVar19 = local_f8 * dStack_140 - dStack_100 * local_138;
    dVar19 = dVar19 + dVar19;
    dVar13 = local_108 * local_138 - local_f8 * local_148;
    dVar13 = dVar13 + dVar13;
    dVar16 = dStack_100 * local_148 - local_108 * dStack_140;
    dVar16 = dVar16 + dVar16;
    *(double *)this->ConnectorXs =
         (dVar16 * dStack_140 - dVar13 * local_138) + dVar19 * dStack_130 + local_108 +
         (double)fVar3 + dVar6;
    *(double *)&this->ConnectorXs[0].field_0x8 =
         (dVar19 * local_138 - dVar16 * local_148) + dVar13 * dStack_130 + dStack_100 +
         (double)fVar2 + dVar5;
    *(double *)&this->ConnectorXs[0].field_0x10 =
         (dVar13 * local_148 - dVar19 * dStack_140) + dVar16 * dStack_130 + local_f8 +
         (double)fVar1 + dVar4;
    dVar20 = *(double *)this->LocalConnectorXs;
    dVar21 = *(double *)&this->LocalConnectorXs[0].field_0x8;
    dVar22 = *(double *)&this->LocalConnectorXs[0].field_0x10;
    dVar23 = *(double *)&this->LocalConnectorXs[0].field_0x18;
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar16 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar19 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar14 = dVar23 * local_148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dStack_130 * dVar20 +
             dStack_140 * dVar22 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             local_138 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar15 = dVar22 * local_148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dStack_130 * dVar21 +
             dStack_140 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_138 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    uVar27 = SUB84(dVar15,0);
    uVar28 = (undefined4)((ulonglong)dVar15 >> 0x20);
    uVar25 = SUB84(__real_3e45798ee0000000,0);
    uVar26 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    auVar11._8_4_ = uVar27;
    auVar11._0_8_ = dVar14;
    auVar11._12_4_ = uVar28;
    *(undefined1 (*) [16])this->ConnectorRs = auVar11;
    dVar4 = local_148 * dVar21 * dVar4 + dStack_130 * dVar22 + dStack_140 * dVar20 * dVar5 +
            local_138 * dVar23 * dVar6;
    dVar5 = local_148 * dVar20 * dVar13 + dStack_130 * dVar23 + dStack_140 * dVar21 * dVar16 +
            local_138 * dVar22 * dVar19;
    uVar29 = SUB84(dVar5,0);
    uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
    local_e8._8_4_ = uVar27;
    local_e8._0_8_ = dVar14;
    local_e8._12_4_ = uVar28;
    local_d8._8_4_ = uVar29;
    local_d8._0_8_ = dVar4;
    local_d8._12_4_ = uVar30;
    auVar17._8_4_ = uVar29;
    auVar17._0_8_ = dVar4;
    auVar17._12_4_ = uVar30;
    *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10 = auVar17;
  }
  if ((double)CONCAT44(uVar26,uVar25) < this->InvMs[1]) {
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar7->State).DP.field_0x8;
    fVar2 = *(float *)&(pFVar7->State).DP.field_0x4;
    fVar3 = *(float *)&(pFVar7->State).DP;
    dVar4 = *(double *)&(pFVar7->State).P.field_0x10;
    dVar5 = *(double *)&(pFVar7->State).P.field_0x8;
    dVar6 = *(double *)&(pFVar7->State).P;
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                          ,0x2e,L"");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[1].Body,(TRotation<double,3> *)&local_128);
    dVar14 = *(double *)&this->LocalConnectorXs[1].field_0x20;
    dVar15 = *(double *)&this->LocalConnectorXs[1].field_0x28;
    dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x30;
    dVar19 = dVar20 * dStack_120 - dVar15 * local_118;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar14 * local_118 - dVar20 * local_128;
    dVar13 = dVar13 + dVar13;
    dVar16 = dVar15 * local_128 - dVar14 * dStack_120;
    dVar16 = dVar16 + dVar16;
    *(double *)(this->ConnectorXs + 1) =
         (dVar16 * dStack_120 - dVar13 * local_118) + dVar19 * dStack_110 + dVar14 +
         (double)fVar3 + dVar6;
    *(double *)&this->ConnectorXs[1].field_0x8 =
         (dVar19 * local_118 - dVar16 * local_128) + dVar13 * dStack_110 + dVar15 +
         (double)fVar2 + dVar5;
    *(double *)&this->ConnectorXs[1].field_0x10 =
         (dVar13 * local_128 - dVar19 * dStack_120) + dVar16 * dStack_110 + dVar20 +
         (double)fVar1 + dVar4;
    dVar19 = *(double *)(this->LocalConnectorXs + 1);
    dVar14 = *(double *)&this->LocalConnectorXs[1].field_0x8;
    dVar15 = *(double *)&this->LocalConnectorXs[1].field_0x10;
    dVar20 = *(double *)&this->LocalConnectorXs[1].field_0x18;
    dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar13 = dVar15 * local_128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             dStack_110 * dVar14 +
             dStack_120 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             local_118 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar16 = local_128 * dVar19 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dStack_110 * dVar20 +
             dStack_120 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             local_118 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    auVar12._8_4_ = SUB84(dVar13,0);
    auVar12._0_8_ =
         dVar20 * local_128 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dStack_110 * dVar19 +
         dStack_120 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         local_118 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar12;
    auVar18._8_4_ = SUB84(dVar16,0);
    auVar18._0_8_ =
         local_128 * dVar14 * dVar4 + dStack_110 * dVar15 + dStack_120 * dVar19 * dVar5 +
         local_118 * dVar20 * dVar6;
    auVar18._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar18;
  }
  if (*(double *)&this->ConnectorRs[0].field_0x18 * *(double *)&this->ConnectorRs[1].field_0x18 +
      *(double *)&this->ConnectorRs[0].field_0x10 * *(double *)&this->ConnectorRs[1].field_0x10 +
      *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8 +
      *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1) < 0.0) {
    uVar25 = (undefined4)__real_bff0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar25 = (undefined4)__real_3ff0000000000000;
    uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar4 = (double)CONCAT44(uVar26,uVar25) * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar10._8_4_ = SUB84(dVar4,0);
  auVar10._0_8_ = (double)CONCAT44(uVar26,uVar25) * *(double *)(this->ConnectorRs + 1);
  auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar10;
  dVar4 = *(double *)&this->ConnectorRs[1].field_0x18 * (double)CONCAT44(uVar26,uVar25);
  auVar9._8_4_ = SUB84(dVar4,0);
  auVar9._0_8_ = *(double *)&this->ConnectorRs[1].field_0x10 * (double)CONCAT44(uVar26,uVar25);
  auVar9._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar9;
  return;
}

// UpdateMass0 @ 143bafbd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FPBDJointSolver::UpdateMass0(FPBDJointSolver *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  double local_168 [6];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  PMatrix<double,3,3> local_e8;
  TRotation<double,3> local_68 [3];
  
  if ((this->ConditionedInvMs[0] <= 0.0) || (dVar1 = this->InvMScales[0], dVar1 <= 0.0)) {
    this->InvMs[0] = 0.0;
    *(undefined8 *)this->InvIs = 0;
    *(undefined8 *)&this->InvIs[0].field_0x8 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x10 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x18 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x20 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x28 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x30 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x38 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x40 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x48 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x50 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x58 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x60 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x68 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x70 = 0;
    *(undefined8 *)&this->InvIs[0].field_0x78 = 0x3ff0000000000000;
  }
  else {
    this->InvMs[0] = dVar1 * this->ConditionedInvMs[0];
    dVar2 = *(double *)this->ConditionedInvILs;
    dVar3 = *(double *)&this->ConditionedInvILs[0].field_0x8;
    dVar4 = *(double *)&this->ConditionedInvILs[0].field_0x10;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x2e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[0].Body,local_68);
    local_f8 = ___xmm_3ff00000000000000000000000000000;
    uStack_f0 = _UNK_15061cbc8;
    local_108 = 0;
    uStack_100 = 0;
    local_168[4] = 0.0;
    local_128 = 0;
    local_168[1] = 0.0;
    local_120 = 0;
    local_168[2] = 0.0;
    local_138 = 0;
    local_168[3] = 0.0;
    local_130 = 0;
    local_110 = 0;
    local_168[0] = dVar1 * dVar2;
    local_168[5] = dVar1 * dVar3;
    local_118 = dVar1 * dVar4;
    Utilities::ComputeWorldSpaceInertia(&local_e8,local_68,(PMatrix<double,3,3> *)local_168);
    *(undefined8 *)this->InvIs = local_e8._0_8_;
    *(undefined8 *)&this->InvIs[0].field_0x8 = local_e8._8_8_;
    *(undefined8 *)&this->InvIs[0].field_0x10 = local_e8._16_8_;
    *(undefined8 *)&this->InvIs[0].field_0x18 = local_e8._24_8_;
    *(undefined8 *)&this->InvIs[0].field_0x20 = local_e8._32_8_;
    *(undefined8 *)&this->InvIs[0].field_0x28 = local_e8._40_8_;
    *(undefined8 *)&this->InvIs[0].field_0x30 = local_e8._48_8_;
    *(undefined8 *)&this->InvIs[0].field_0x38 = local_e8._56_8_;
    *(undefined8 *)&this->InvIs[0].field_0x40 = local_e8._64_8_;
    *(undefined8 *)&this->InvIs[0].field_0x48 = local_e8._72_8_;
    *(undefined8 *)&this->InvIs[0].field_0x50 = local_e8._80_8_;
    *(undefined8 *)&this->InvIs[0].field_0x58 = local_e8._88_8_;
    *(undefined8 *)&this->InvIs[0].field_0x60 = local_e8._96_8_;
    *(undefined8 *)&this->InvIs[0].field_0x68 = local_e8._104_8_;
    *(undefined8 *)&this->InvIs[0].field_0x70 = local_e8._112_8_;
    *(undefined8 *)&this->InvIs[0].field_0x78 = local_e8._120_8_;
  }
  return;
}

// UpdateMass1 @ 143baffe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Chaos::FPBDJointSolver::UpdateMass1(FPBDJointSolver *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  double local_168 [6];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  PMatrix<double,3,3> local_e8;
  TRotation<double,3> local_68 [3];
  
  if ((this->ConditionedInvMs[1] <= 0.0) || (dVar1 = this->InvMScales[1], dVar1 <= 0.0)) {
    this->InvMs[1] = 0.0;
    *(undefined8 *)(this->InvIs + 1) = 0;
    *(undefined8 *)&this->InvIs[1].field_0x8 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x10 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x18 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x20 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x28 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x30 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x38 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x40 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x48 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x50 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x58 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x60 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x68 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x70 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x78 = 0x3ff0000000000000;
  }
  else {
    this->InvMs[1] = dVar1 * this->ConditionedInvMs[1];
    dVar2 = *(double *)(this->ConditionedInvILs + 1);
    dVar3 = *(double *)&this->ConditionedInvILs[1].field_0x8;
    dVar4 = *(double *)&this->ConditionedInvILs[1].field_0x10;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointSolverGaussSeidel.h"
                         ,0x2e,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FSolverBody::CorrectedQ(this->SolverBodies[1].Body,local_68);
    local_f8 = ___xmm_3ff00000000000000000000000000000;
    uStack_f0 = _UNK_15061cbc8;
    local_108 = 0;
    uStack_100 = 0;
    local_168[4] = 0.0;
    local_128 = 0;
    local_168[1] = 0.0;
    local_120 = 0;
    local_168[2] = 0.0;
    local_138 = 0;
    local_168[3] = 0.0;
    local_130 = 0;
    local_110 = 0;
    local_168[0] = dVar1 * dVar2;
    local_168[5] = dVar1 * dVar3;
    local_118 = dVar1 * dVar4;
    Utilities::ComputeWorldSpaceInertia(&local_e8,local_68,(PMatrix<double,3,3> *)local_168);
    *(undefined8 *)(this->InvIs + 1) = local_e8._0_8_;
    *(undefined8 *)&this->InvIs[1].field_0x8 = local_e8._8_8_;
    *(undefined8 *)&this->InvIs[1].field_0x10 = local_e8._16_8_;
    *(undefined8 *)&this->InvIs[1].field_0x18 = local_e8._24_8_;
    *(undefined8 *)&this->InvIs[1].field_0x20 = local_e8._32_8_;
    *(undefined8 *)&this->InvIs[1].field_0x28 = local_e8._40_8_;
    *(undefined8 *)&this->InvIs[1].field_0x30 = local_e8._48_8_;
    *(undefined8 *)&this->InvIs[1].field_0x38 = local_e8._56_8_;
    *(undefined8 *)&this->InvIs[1].field_0x40 = local_e8._64_8_;
    *(undefined8 *)&this->InvIs[1].field_0x48 = local_e8._72_8_;
    *(undefined8 *)&this->InvIs[1].field_0x50 = local_e8._80_8_;
    *(undefined8 *)&this->InvIs[1].field_0x58 = local_e8._88_8_;
    *(undefined8 *)&this->InvIs[1].field_0x60 = local_e8._96_8_;
    *(undefined8 *)&this->InvIs[1].field_0x68 = local_e8._104_8_;
    *(undefined8 *)&this->InvIs[1].field_0x70 = local_e8._112_8_;
    *(undefined8 *)&this->InvIs[1].field_0x78 = local_e8._120_8_;
  }
  return;
}

// UpdateMasses @ 143bb0580

void __thiscall
Chaos::FPBDJointSolver::UpdateMasses(FPBDJointSolver *this,double param_1,double param_2)

{
  this->InvMScales[0] = param_1;
  this->InvMScales[1] = param_2;
  UpdateMass0(this);
  UpdateMass1(this);
  return;
}

