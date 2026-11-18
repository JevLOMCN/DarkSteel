// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 89

// ApplyAngularVelocityConstraint @ 143b87060

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAngularVelocityConstraint
          (FPBDJointCachedSolver *this,int param_1)

{
  undefined8 uVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  EJointMotionType EVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = (longlong)param_1;
  if ((2 < (uint)param_1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar6 * 8 + 0x210);
  if (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    uVar7 = 0;
    uVar8 = 0;
    EVar5 = FAxisConstraintDatas::GetMotionType(&this->RotationConstraints,param_1);
    if (EVar5 == Limited) {
      if ((2 < (uint)param_1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(double *)(&(this->RotationConstraints).ConstraintRestitution.field_0x0 + lVar6 * 8) !=
          0.0) {
        if ((2 < (uint)param_1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar2 = *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))[1].field_0x0 + lVar6 * 8);
        if ((double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution < dVar2) {
          if ((2 < (uint)param_1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                 ,0x7a2,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar2 = dVar2 * *(double *)
                           (&(this->RotationConstraints).ConstraintRestitution.field_0x0 + lVar6 * 8
                           );
          uVar7 = SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar8 = (uint)((ulonglong)dVar2 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
        }
      }
    }
    SolveAngularVelocityConstraint(this,param_1,(double)CONCAT44(uVar8,uVar7));
  }
  return;
}

// ApplyAngularVelocityConstraintSimd @ 143b877c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAngularVelocityConstraintSimd(FPBDJointCachedSolver *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSolverBody *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined4 in_EAX;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  uVar15 = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
                  (float)(__xmm_7fffffff7fffffff7fffffff7fffffff &
                         *(uint *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120)));
  uVar16 = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
                  (float)(_UNK_15061cc74 &
                         *(uint *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x124)));
  uVar17 = -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (float)(_UNK_15061cc78 &
                         *(uint *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128)));
  auVar19._4_4_ = uVar16;
  auVar19._0_4_ = uVar15;
  auVar19._8_4_ = uVar17;
  auVar19._12_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (float)(_UNK_15061cc7c &
                     *(uint *)((longlong)&(this->RotationConstraints).field0_0x0 + 300)));
  iVar14 = movmskps(in_EAX,auVar19);
  if (iVar14 != 0) {
    fVar23 = (float)*(double *)&(this->RotationConstraints).ConstraintRestitution;
    fVar24 = (float)*(double *)&(this->RotationConstraints).ConstraintRestitution.field_0x8;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar20 = (float)*(double *)&(this->RotationConstraints).ConstraintRestitution.field_0x10;
    auVar22._4_4_ = -(uint)(fVar24 != 0.0);
    auVar22._0_4_ = -(uint)(fVar23 != 0.0);
    auVar22._8_4_ = -(uint)(fVar20 != 0.0);
    auVar22._12_4_ = 0;
    iVar14 = movmskps(iVar14,auVar22);
    if (iVar14 != 0) {
      fVar26 = (float)*(double *)&(this->InitConstraintAxisAngularVelocities).field_0x8;
      fVar27 = (float)*(double *)&(this->InitConstraintAxisAngularVelocities).field_0x10;
      fVar25 = (float)((uint)((0.0 - fVar23) *
                             (float)*(double *)&this->InitConstraintAxisAngularVelocities) &
                      -(uint)(Chaos_Joint_AngularVelocityThresholdToApplyRestitution <
                             (float)*(double *)&this->InitConstraintAxisAngularVelocities));
      fVar26 = (float)((uint)((0.0 - fVar24) * fVar26) &
                      -(uint)(Chaos_Joint_AngularVelocityThresholdToApplyRestitution < fVar26));
      fVar27 = (float)((uint)((0.0 - fVar20) * fVar27) &
                      -(uint)(Chaos_Joint_AngularVelocityThresholdToApplyRestitution < fVar27));
    }
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this->SolverBodies[0].Body;
    fVar20 = *(float *)&(pFVar4->State).W;
    fVar23 = *(float *)&(pFVar4->State).W.field_0x4;
    fVar24 = *(float *)&(pFVar4->State).W.field_0x8;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this->SolverBodies[1].Body;
    uVar6 = *(undefined8 *)&(pFVar4->State).W;
    auVar21._0_8_ = CONCAT44((float)((ulonglong)uVar6 >> 0x20) - fVar23,(float)uVar6 - fVar20);
    auVar21._8_4_ = *(float *)&(pFVar4->State).W.field_0x8 - fVar24;
    auVar21._12_4_ = 0;
    auVar28._8_4_ = auVar21._8_4_;
    auVar28._0_8_ = auVar21._0_8_;
    auVar28._12_4_ = 0;
    auVar18._8_4_ = auVar21._8_4_;
    auVar18._0_8_ = auVar21._0_8_;
    auVar18._12_4_ = 0;
    auVar28 = dpps(auVar28,(undefined1  [16])
                           (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[0],0xff);
    auVar19 = dpps(auVar18,(undefined1  [16])
                           (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[1],0xff);
    auVar22 = dpps(auVar21,(undefined1  [16])
                           (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[2],0xff);
    fVar20 = (float)this->SolverStiffness;
    auVar29._0_4_ =
         (auVar28._0_4_ - fVar25) * fVar20 * *(float *)&(this->RotationConstraints).field0_0x0;
    auVar29._4_4_ =
         (auVar19._0_4_ - fVar26) *
         fVar20 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 4);
    auVar29._8_4_ =
         (auVar22._0_4_ - fVar27) *
         fVar20 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 8);
    auVar29._12_4_ =
         (auVar22._4_4_ - 0.0) *
         fVar20 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc);
    auVar19 = divps(auVar29,(undefined1  [16])
                            (this->RotationConstraints).field0_0x0.Simd.ConstraintHardIM);
    fVar20 = (float)(auVar19._0_4_ & uVar15);
    fVar23 = (float)(auVar19._4_4_ & uVar16);
    fVar24 = (float)(auVar19._8_4_ & uVar17);
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar25 = __real_00800000;
    pFVar4 = this->SolverBodies[0].Body;
    if (__real_00800000 <
        this->SolverBodies[0].State.InvMScale * this->SolverBodies[0].State.ShockPropagationScale *
        (pFVar4->State).InvM) {
      fVar26 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd0);
      fVar27 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd4);
      fVar7 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd8);
      fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb0);
      fVar9 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb4);
      fVar10 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb8);
      fVar11 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf0);
      fVar12 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf4);
      fVar3 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf8);
      if ((pFVar4 == (FSolverBody *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = this->SolverBodies[0].Body;
      fVar1 = *(float *)&(pFVar4->State).W.field_0x4;
      fVar2 = *(float *)&(pFVar4->State).W.field_0x8;
      *(float *)&(pFVar4->State).W =
           fVar26 * fVar23 + fVar8 * fVar20 + fVar11 * fVar24 + *(float *)&(pFVar4->State).W;
      *(float *)&(pFVar4->State).W.field_0x4 =
           fVar27 * fVar23 + fVar9 * fVar20 + fVar12 * fVar24 + fVar1;
      *(float *)&(pFVar4->State).W.field_0x8 =
           fVar7 * fVar23 + fVar10 * fVar20 + fVar3 * fVar24 + fVar2;
    }
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = this->SolverBodies[1].Body;
    if (fVar25 < this->SolverBodies[1].State.ShockPropagationScale *
                 this->SolverBodies[1].State.InvMScale * (pFVar4->State).InvM) {
      fVar25 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe0);
      fVar26 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe4);
      fVar27 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe8);
      fVar7 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc0);
      fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc4);
      fVar9 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 200);
      fVar10 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x100);
      fVar11 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x104);
      fVar12 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x108);
      if ((pFVar4 == (FSolverBody *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = this->SolverBodies[1].Body;
      fVar3 = *(float *)&(pFVar4->State).W.field_0x4;
      fVar1 = *(float *)&(pFVar4->State).W.field_0x8;
      *(float *)&(pFVar4->State).W =
           fVar25 * fVar23 + fVar7 * fVar20 + fVar10 * fVar24 + *(float *)&(pFVar4->State).W;
      *(float *)&(pFVar4->State).W.field_0x4 =
           fVar26 * fVar23 + fVar8 * fVar20 + fVar11 * fVar24 + fVar3;
      *(float *)&(pFVar4->State).W.field_0x8 =
           fVar27 * fVar23 + fVar9 * fVar20 + fVar12 * fVar24 + fVar1;
    }
  }
  return;
}

// ApplyAngularVelocityConstraints @ 143b87ba0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAngularVelocityConstraints(FPBDJointCachedSolver *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  EJointMotionType EVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee0000000;
  if ((this->RotationConstraints).bUseSimd != '\0') {
    ApplyAngularVelocityConstraintSimd(this);
    return;
  }
  uVar12 = 0;
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  uVar14 = uVar12;
  do {
    iVar13 = (int)uVar14;
    if (iVar13 == 0) {
      bVar10 = (this->RotationConstraints).field_0x2c0;
LAB_143b87c6d:
      if (((bVar10 & 1) != 0) &&
         (uVar1 = *(undefined8 *)
                   ((longlong)&(this->RotationConstraints).field0_0x0 + uVar12 + 0x210),
         dVar6 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar8,(uint)uVar1 & uVar7))) {
        uVar15 = 0;
        uVar16 = 0;
        EVar11 = FAxisConstraintDatas::GetMotionType(&this->RotationConstraints,iVar13);
        if ((EVar11 == Limited) &&
           (dVar2 = *(double *)
                     (&(this->RotationConstraints).ConstraintRestitution.field_0x0 + uVar12),
           dVar2 != 0.0)) {
          dVar3 = *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))[1].field_0x0 + uVar12);
          if (dVar3 <= (double)Chaos_Joint_AngularVelocityThresholdToApplyRestitution) {
            uVar15 = 0;
            uVar16 = 0;
          }
          else {
            dVar2 = dVar2 * dVar3;
            uVar15 = SUB84(dVar2,0) ^ uVar17;
            uVar16 = (uint)((ulonglong)dVar2 >> 0x20) ^ (uint)uVar5;
          }
        }
        SolveAngularVelocityConstraint(this,iVar13,(double)CONCAT44(uVar16,uVar15));
      }
    }
    else {
      if (iVar13 == 1) {
        bVar10 = (byte)(this->RotationConstraints).field_0x2c0 >> 1;
        goto LAB_143b87c6d;
      }
      if (iVar13 == 2) {
        bVar10 = (byte)(this->RotationConstraints).field_0x2c0 >> 2;
        goto LAB_143b87c6d;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar14 = (ulonglong)(iVar13 + 1U);
    uVar12 = uVar12 + 8;
    if (2 < (int)(iVar13 + 1U)) {
      return;
    }
  } while( true );
}

// ApplyAxisPositionConstraint @ 143b884c0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisPositionConstraint
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  FAxisConstraintDatas *this_00;
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  FSolverBody *pFVar14;
  FSolverBody *pFVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  EJointMotionType EVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  this_00 = &this->PositionConstraints;
  lVar24 = (longlong)param_1;
  if (((this->PositionConstraints).bUseSimd != '\0') &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("PositionConstraints.bUseSimd == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0x316,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar14 = this->SolverBodies[1].Body;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar15 = this->SolverBodies[0].Body;
  fVar2 = *(float *)&(pFVar14->State).DP.field_0x8;
  fVar3 = *(float *)&(pFVar14->State).DP.field_0x4;
  fVar4 = *(float *)&(pFVar14->State).DP;
  fVar5 = *(float *)&(pFVar15->State).DP.field_0x8;
  fVar6 = *(float *)&(pFVar15->State).DP.field_0x4;
  fVar7 = *(float *)&(pFVar15->State).DP;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar14 = this->SolverBodies[1].Body;
  dVar19 = (double)*(float *)&(pFVar14->State).DQ.field_0x4;
  dVar8 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x68);
  dVar25 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x70);
  dVar9 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x60);
  dVar26 = (double)*(float *)&(pFVar14->State).DQ.field_0x8;
  dVar17 = (double)*(float *)&(pFVar14->State).DQ;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar14 = this->SolverBodies[0].Body;
  dVar20 = (double)*(float *)&(pFVar14->State).DQ.field_0x4;
  dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x50);
  dVar11 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x58);
  dVar12 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x30 + 0x48);
  dVar18 = (double)*(float *)&(pFVar14->State).DQ;
  dVar27 = (double)*(float *)&(pFVar14->State).DQ.field_0x8;
  if ((2 < (uint)param_1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar21)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  bVar21 = false;
  dVar8 = (double)(((float)(dVar9 * dVar26 - dVar25 * dVar17) + (fVar3 - fVar6)) -
                  (float)(dVar12 * dVar27 - dVar11 * dVar18)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x18 + 0xe0) +
          (double)(((float)(dVar25 * dVar19 - dVar8 * dVar26) + (fVar4 - fVar7)) -
                  (float)(dVar11 * dVar20 - dVar10 * dVar27)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x18 + 0xd8) +
          (double)(((float)(dVar8 * dVar17 - dVar9 * dVar19) + (fVar2 - fVar5)) -
                  (float)(dVar10 * dVar18 - dVar12 * dVar20)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 0x18 + 0xe8) +
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x1f8);
  bVar22 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
  if (bVar22) {
    if ((2 < (uint)param_1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar22)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pdVar1 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x120);
    if (dVar8 < *pdVar1 || dVar8 == *pdVar1) {
      if ((2 < (uint)param_1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar22)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      uVar13 = *(undefined8 *)
                ((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x120);
      if ((double)CONCAT44((uint)((ulonglong)uVar13 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           (uint)uVar13 ^ (uint)__xmm_80000000000000008000000000000000) <= dVar8)
      goto LAB_143b888aa;
      if ((2 < (uint)param_1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      dVar8 = dVar8 + *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x120);
    }
    else {
      if ((2 < (uint)param_1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar21)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      dVar8 = dVar8 - *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x120);
    }
    bVar21 = true;
  }
LAB_143b888aa:
  bVar22 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
  if (bVar22) {
    bVar22 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
    if (!bVar22) {
      return;
    }
    if (!bVar21) {
      return;
    }
    dVar25 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar25 < this->PositionTolerance || dVar25 == this->PositionTolerance) {
      return;
    }
  }
  EVar23 = FAxisConstraintDatas::GetMotionType(this_00,param_1);
  if ((EVar23 == Limited) && (bVar21 = FAxisConstraintDatas::GetSoftLimit(this_00,param_1), bVar21))
  {
    SolvePositionConstraintSoft(this,param_1,dVar8,param_2,0.0);
    return;
  }
  EVar23 = FAxisConstraintDatas::GetMotionType(this_00,param_1);
  if (EVar23 != Free) {
    if ((uint)param_1 < 3) {
      dVar8 = (this->SolverStiffness *
               *(double *)
                ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 + lVar24 * 8
                ) * dVar8) /
              *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x150);
    }
    else {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar21) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar21) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      dVar8 = (this->SolverStiffness *
               *(double *)
                ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 + lVar24 * 8
                ) * dVar8) /
              *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x150);
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar21) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x210) =
         dVar8 + *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar24 * 8 + 0x210)
    ;
    SolvePositionConstraintDelta(this,param_1,dVar8,this_00);
  }
  return;
}

// ApplyAxisPositionDrive @ 143b88a70

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisPositionDrive
          (FPBDJointCachedSolver *this,int param_1,double param_2)

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
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FSolverBody *pFVar18;
  FSolverBody *pFVar19;
  code *pcVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double local_res8;
  double local_res20;
  
  lVar26 = (longlong)param_1;
  if ((this->PositionDrives).bUseSimd != '\0') {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("PositionDrives.bUseSimd == false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                        ,0x93b,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  if ((uint)param_1 < 3) {
    uVar1 = *(undefined8 *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x18);
    uVar32 = (undefined4)uVar1;
    uVar33 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x30);
    uVar30 = (undefined4)uVar1;
    uVar31 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    uVar1 = *(undefined8 *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x18);
    uVar32 = (undefined4)uVar1;
    uVar33 = (undefined4)((ulonglong)uVar1 >> 0x20);
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    uVar1 = *(undefined8 *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x30);
    uVar30 = (undefined4)uVar1;
    uVar31 = (undefined4)((ulonglong)uVar1 >> 0x20);
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  dVar2 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x138);
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  pFVar18 = this->SolverBodies[0].Body;
  if (pFVar18 == (FSolverBody *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  pFVar19 = this->SolverBodies[0].Body;
  dVar22 = (double)*(float *)&(pFVar19->State).DQ.field_0x4;
  dVar3 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x50);
  dVar4 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x58);
  dVar5 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x48);
  dVar28 = (double)*(float *)&(pFVar19->State).DQ.field_0x8;
  dVar21 = (double)*(float *)&(pFVar19->State).DQ;
  dVar27 = (double)((float)(dVar4 * dVar22 - dVar3 * dVar28) + *(float *)&(pFVar18->State).DP);
  dVar4 = (double)((float)(dVar5 * dVar28 - dVar4 * dVar21) +
                  *(float *)&(pFVar18->State).DP.field_0x4);
  dVar3 = (double)((float)(dVar3 * dVar21 - dVar5 * dVar22) +
                  *(float *)&(pFVar18->State).DP.field_0x8);
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  pFVar18 = this->SolverBodies[1].Body;
  if (pFVar18 == (FSolverBody *)0x0) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  pFVar19 = this->SolverBodies[1].Body;
  dVar23 = (double)*(float *)&(pFVar19->State).DQ.field_0x4;
  dVar5 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x68);
  dVar21 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x70);
  dVar22 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x30 + 0x60);
  dVar29 = (double)*(float *)&(pFVar19->State).DQ.field_0x8;
  dVar28 = (double)*(float *)&(pFVar19->State).DQ;
  dVar24 = (double)((float)(dVar21 * dVar23 - dVar5 * dVar29) + *(float *)&(pFVar18->State).DP);
  dVar21 = (double)((float)(dVar22 * dVar29 - dVar21 * dVar28) +
                   *(float *)&(pFVar18->State).DP.field_0x4);
  dVar5 = (double)((float)(dVar5 * dVar28 - dVar22 * dVar23) +
                  *(float *)&(pFVar18->State).DP.field_0x8);
  if (2 < (uint)param_1) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  dVar6 = 0.0;
  dVar22 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xe0);
  dVar28 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xd8);
  dVar23 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xe8);
  dVar29 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x1f8);
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar31,uVar30) &&
      (double)CONCAT44(uVar31,uVar30) != __real_3f1a36e2e0000000) {
    dVar6 = *(double *)this->ConnectorXs;
    dVar7 = *(double *)&this->ConnectorXs[0].field_0x8;
    dVar8 = *(double *)&this->ConnectorXs[0].field_0x10;
    dVar9 = *(double *)(this->ConnectorXs + 1);
    dVar10 = *(double *)&this->ConnectorXs[1].field_0x8;
    dVar11 = *(double *)&this->ConnectorXs[1].field_0x10;
    dVar12 = *(double *)this->InitConnectorXs;
    dVar13 = *(double *)&this->InitConnectorXs[0].field_0x8;
    dVar14 = *(double *)&this->InitConnectorXs[0].field_0x10;
    dVar15 = *(double *)(this->InitConnectorXs + 1);
    dVar16 = *(double *)&this->InitConnectorXs[1].field_0x8;
    dVar17 = *(double *)&this->InitConnectorXs[1].field_0x10;
    if (2 < (uint)param_1) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar25) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    dVar6 = (((dVar27 + dVar6) - dVar12) - ((dVar24 + dVar9) - dVar15)) *
            *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xd8) +
            (((dVar4 + dVar7) - dVar13) - ((dVar21 + dVar10) - dVar16)) *
            *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xe0) +
            (((dVar3 + dVar8) - dVar14) - ((dVar5 + dVar11) - dVar17)) *
            *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 0x18 + 0xe8) +
            param_2 * *(double *)(&(this->PositionDrives).ConstraintVX.field_0x0 + lVar26 * 8);
  }
  if (2 < (uint)param_1) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  local_res8 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x210);
  local_res20 = (((((dVar24 - dVar27) * dVar28 + (dVar21 - dVar4) * dVar22 +
                    (dVar5 - dVar3) * dVar23 + dVar29) * (double)CONCAT44(uVar33,uVar32) -
                  dVar6 * (double)CONCAT44(uVar31,uVar30)) - local_res8) * this->SolverStiffness) /
                dVar2;
  local_res8 = local_res20 + local_res8;
  FAxisConstraintDatas::ApplyMaxLambda(&this->PositionDrives,param_1,&local_res20,&local_res8);
  dVar2 = local_res8;
  if (2 < (uint)param_1) {
    bVar25 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar25) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar26 * 8 + 0x210) = dVar2;
  SolvePositionConstraintDelta(this,param_1,local_res20,&this->PositionDrives);
  return;
}

// ApplyAxisPositionProjection @ 143b89010

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisPositionProjection
          (FPBDJointCachedSolver *this,double param_1,int param_2)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  FSolverBody *pFVar17;
  FSolverBody *pFVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  bool bVar23;
  bool bVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  
  lVar25 = (longlong)param_2;
  bVar23 = FAxisConstraintDatas::GetValidDatas(&this->PositionConstraints,param_2);
  if (!bVar23) {
    return;
  }
  bVar23 = FAxisConstraintDatas::GetSoftLimit(&this->PositionConstraints,param_2);
  if (bVar23) {
    return;
  }
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar17 = this->SolverBodies[1].Body;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar18 = this->SolverBodies[0].Body;
  fVar2 = *(float *)&(pFVar17->State).DP.field_0x8;
  fVar3 = *(float *)&(pFVar17->State).DP.field_0x4;
  fVar4 = *(float *)&(pFVar17->State).DP;
  fVar5 = *(float *)&(pFVar18->State).DP.field_0x8;
  fVar6 = *(float *)&(pFVar18->State).DP.field_0x4;
  fVar7 = *(float *)&(pFVar18->State).DP;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar17 = this->SolverBodies[1].Body;
  dVar8 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x68);
  dVar26 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x70);
  dVar30 = (double)*(float *)&(pFVar17->State).DQ.field_0x8;
  dVar28 = (double)*(float *)&(pFVar17->State).DQ.field_0x4;
  dVar9 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x60);
  dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x60);
  dVar20 = (double)*(float *)&(pFVar17->State).DQ;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar17 = this->SolverBodies[0].Body;
  dVar21 = (double)*(float *)&(pFVar17->State).DQ;
  dVar11 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x50);
  dVar12 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x58);
  dVar13 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x48);
  dVar22 = (double)*(float *)&(pFVar17->State).DQ.field_0x4;
  dVar29 = (double)*(float *)&(pFVar17->State).DQ.field_0x8;
  if ((2 < (uint)param_2) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar23)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  bVar23 = false;
  dVar8 = (double)(((float)(dVar26 * dVar28 - dVar8 * dVar30) + (fVar4 - fVar7)) -
                  (float)(dVar12 * dVar22 - dVar11 * dVar29)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xd8) +
          (double)(((float)(dVar30 * dVar9 - dVar26 * dVar20) + (fVar3 - fVar6)) -
                  (float)(dVar13 * dVar29 - dVar12 * dVar21)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe0) +
          (double)(((float)(dVar8 * dVar20 - dVar28 * dVar10) + (fVar2 - fVar5)) -
                  (float)(dVar11 * dVar21 - dVar13 * dVar22)) *
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe8) +
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 8 + 0x1f8);
  bVar24 = FAxisConstraintDatas::GetLimitsCheck(&this->PositionConstraints,param_2);
  uVar31 = (uint)__xmm_80000000000000008000000000000000;
  uVar32 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (bVar24) {
    if ((2 < (uint)param_2) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar24)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pdVar1 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 8 + 0x120);
    if (dVar8 < *pdVar1 || dVar8 == *pdVar1) {
      if ((2 < (uint)param_2) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar24)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uVar14 = *(undefined8 *)
                ((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 8 + 0x120);
      if ((double)CONCAT44((uint)((ulonglong)uVar14 >> 0x20) ^ uVar32,(uint)uVar14 ^ uVar31) <=
          dVar8) goto LAB_143b893f1;
      if ((2 < (uint)param_2) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar23)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      dVar8 = dVar8 + *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 8 + 0x120);
    }
    else {
      if ((2 < (uint)param_2) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar23)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      dVar8 = dVar8 - *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 8 + 0x120);
    }
    bVar23 = true;
  }
LAB_143b893f1:
  bVar24 = FAxisConstraintDatas::GetLimitsCheck(&this->PositionConstraints,param_2);
  if ((!bVar24) ||
     (((bVar24 = FAxisConstraintDatas::GetLimitsCheck(&this->PositionConstraints,param_2), bVar24 &&
       (bVar23)) &&
      (dVar26 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
      this->PositionTolerance <= dVar26 && dVar26 != this->PositionTolerance)))) {
    dVar26 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x60);
    dVar9 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xd8);
    dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe8);
    dVar20 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe0);
    dVar28 = this->InvMs[1];
    dVar30 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x70);
    dVar11 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x68);
    dVar12 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x68);
    dVar13 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe0);
    dVar21 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x70);
    dVar22 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 400);
    dVar29 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x188);
    dVar15 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x180);
    if ((2 < (uint)param_2) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar23)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    dVar27 = param_1 * this->InvMs[1];
    dVar16 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x188);
    dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^ uVar32,SUB84(dVar27,0) ^ uVar31);
    dVar28 = (*(double *)
               ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 + lVar25 * 8)
              * this->SolverStiffness * dVar8) /
             (dVar28 - ((dVar9 * dVar30 - dVar26 * dVar10) * dVar29 +
                        (dVar10 * dVar12 - dVar13 * dVar21) * dVar15 +
                       (dVar26 * dVar20 - dVar9 * dVar11) * dVar22));
    dVar8 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 400);
    dVar26 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x30 + 0x180);
    dVar9 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xd8);
    dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe0);
    dVar20 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar25 * 0x18 + 0xe8);
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar23)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar17 = this->SolverBodies[1].Body;
    fVar2 = *(float *)&(pFVar17->State).DP.field_0x4;
    *(float *)&(pFVar17->State).DP =
         (float)(dVar28 * dVar9 * dVar27) + *(float *)&(pFVar17->State).DP;
    *(float *)&(pFVar17->State).DP.field_0x4 = (float)(dVar28 * dVar10 * dVar27) + fVar2;
    *(float *)&(pFVar17->State).DP.field_0x8 =
         (float)(dVar28 * dVar20 * dVar27) + *(float *)&(pFVar17->State).DP.field_0x8;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar23)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar17 = this->SolverBodies[1].Body;
    *(float *)&(pFVar17->State).DQ =
         (float)(param_1 * dVar26 * dVar28) + *(float *)&(pFVar17->State).DQ;
    *(float *)&(pFVar17->State).DQ.field_0x4 =
         (float)(param_1 * dVar16 * dVar28) + *(float *)&(pFVar17->State).DQ.field_0x4;
    *(float *)&(pFVar17->State).DQ.field_0x8 =
         (float)(param_1 * dVar8 * dVar28) + *(float *)&(pFVar17->State).DQ.field_0x8;
  }
  return;
}

// ApplyAxisPositionTeleport @ 143b89690

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisPositionTeleport
          (FPBDJointCachedSolver *this,double param_1,int param_2)

{
  FAxisConstraintDatas *this_00;
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  FSolverBody *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  this_00 = &this->PositionConstraints;
  lVar10 = (longlong)param_2;
  if (((this->PositionConstraints).bUseSimd != '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PositionConstraints.bUseSimd == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                         ,0x8e4,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = FAxisConstraintDatas::GetValidDatas(this_00,param_2);
  if (!bVar8) {
    return;
  }
  bVar8 = FAxisConstraintDatas::GetSoftLimit(this_00,param_2);
  if (bVar8) {
    return;
  }
  if ((2 < (uint)param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar2 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 8 + 0x1f8);
  bVar8 = false;
  bVar9 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_2);
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (bVar9) {
    if ((2 < (uint)param_2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pdVar1 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 8 + 0x120);
    if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
      if ((2 < (uint)param_2) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar3 = *(undefined8 *)
               ((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 8 + 0x120);
      if ((double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar13,(uint)uVar3 ^ uVar11) <= dVar2)
      goto LAB_143b8984e;
      if ((2 < (uint)param_2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar2 = dVar2 + *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 8 + 0x120);
    }
    else {
      if ((2 < (uint)param_2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7a2,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar2 = dVar2 - *(double *)
                       ((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 8 + 0x120);
    }
    bVar8 = true;
  }
LAB_143b8984e:
  uVar12 = (uint)((ulonglong)dVar2 >> 0x20);
  bVar9 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_2);
  if (((!bVar9) ||
      ((bVar9 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_2), bVar9 && (bVar8)))) &&
     (param_1 < (double)CONCAT44(uVar12 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    uVar11 = SUB84(dVar2,0) ^ uVar11;
    uVar12 = uVar12 ^ uVar13;
    dVar2 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 0x18 + 0xd8);
    dVar4 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 0x18 + 0xe0);
    dVar5 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar10 * 0x18 + 0xe8);
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                           ,0xf2,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = this->SolverBodies[1].Body;
    *(float *)&(pFVar6->State).DP =
         (float)((double)CONCAT44(uVar12,uVar11) * dVar2) + *(float *)&(pFVar6->State).DP;
    *(float *)&(pFVar6->State).DP.field_0x4 =
         (float)((double)CONCAT44(uVar12,uVar11) * dVar4) + *(float *)&(pFVar6->State).DP.field_0x4;
    *(float *)&(pFVar6->State).DP.field_0x8 =
         (float)((double)CONCAT44(uVar12,uVar11) * dVar5) + *(float *)&(pFVar6->State).DP.field_0x8;
  }
  return;
}

// ApplyAxisPositionVelocityDrive @ 143b89950

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisPositionVelocityDrive
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  FSolverBody *pFVar16;
  code *pcVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  bool bVar22;
  double *pdVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint uVar31;
  uint uVar32;
  double local_res8;
  double local_res18;
  double local_res20;
  
  lVar24 = (longlong)param_1;
  if (((this->PositionDrives).bUseSimd != '\0') &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("PositionDrives.bUseSimd == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0x96c,L""), bVar22)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  if ((2 < (uint)param_1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar22)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  dVar20 = param_2 * *(double *)(&(this->PositionDrives).SettingsSoftDamping.field_0x0 + lVar24 * 8)
  ;
  if (__real_3e45798ee0000000 <= dVar20) {
    if ((this->PositionDrives).bAccelerationMode == '\0') {
      pdVar23 = (double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 8 + 0x150);
      dVar19 = __real_3ff0000000000000;
    }
    else {
      if ((2 < (uint)param_1) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pdVar23 = (double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 8 + 0x150);
      dVar19 = __real_3ff0000000000000 / *pdVar23;
    }
    dVar21 = __real_3ff0000000000000;
    if ((2 < (uint)param_1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    dVar19 = dVar19 * dVar20;
    dVar20 = *pdVar23;
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar16->State).V;
    fVar2 = *(float *)&(pFVar16->State).V.field_0x4;
    fVar3 = *(float *)&(pFVar16->State).V.field_0x8;
    if ((pFVar16 == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[0].Body;
    dVar6 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x50);
    dVar7 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x58);
    dVar8 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x48);
    dVar27 = (double)*(float *)&(pFVar16->State).W;
    dVar29 = (double)*(float *)&(pFVar16->State).W.field_0x4;
    dVar25 = (double)*(float *)&(pFVar16->State).W.field_0x8;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[1].Body;
    fVar4 = *(float *)&(pFVar16->State).V;
    fVar5 = *(float *)&(pFVar16->State).V.field_0x4;
    local_res20 = (double)*(float *)&(pFVar16->State).V.field_0x8;
    if ((pFVar16 == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[1].Body;
    dVar30 = (double)*(float *)&(pFVar16->State).W.field_0x4;
    dVar9 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x68);
    dVar10 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x70);
    dVar11 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x60);
    dVar26 = (double)*(float *)&(pFVar16->State).W.field_0x8;
    dVar28 = (double)*(float *)&(pFVar16->State).W;
    dVar18 = (dVar9 * dVar28 - dVar11 * dVar30) + local_res20;
    dVar12 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xd8);
    dVar13 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xe0);
    dVar14 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xe8);
    if ((uint)param_1 < 3) {
      dVar15 = *(double *)(&(this->PositionDrives).ConstraintVX.field_0x0 + lVar24 * 8);
    }
    else {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar22) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      dVar15 = *(double *)(&(this->PositionDrives).ConstraintVX.field_0x0 + lVar24 * 8);
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar22) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    dVar20 = (((dVar19 * (((((dVar10 * dVar30 - dVar9 * dVar26) + (double)fVar4) -
                           ((dVar7 * dVar29 - dVar6 * dVar25) + (double)fVar1)) * dVar12 +
                           (((dVar11 * dVar26 - dVar10 * dVar28) + (double)fVar5) -
                           ((dVar8 * dVar25 - dVar7 * dVar27) + (double)fVar2)) * dVar13 +
                          (dVar18 - ((dVar6 * dVar27 - dVar8 * dVar29) + (double)fVar3)) * dVar14) -
                         dVar15) -
               *(double *)(&(this->PositionDrives).ConstraintLambdaVelocity.field_0x0 + lVar24 * 8))
              * this->SolverStiffness) / (dVar19 * dVar20 + dVar21)) * param_2;
    local_res8 = dVar20;
    if ((2 < (uint)param_1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    local_res18 = dVar20 + *(double *)
                            ((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 8 + 0x210);
    FAxisConstraintDatas::ApplyMaxLambda(&this->PositionDrives,param_1,&local_res8,&local_res18);
    dVar20 = local_res18;
    if ((2 < (uint)param_1) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 8 + 0x210) = dVar20;
    dVar20 = local_res8 / param_2;
    *(double *)(&(this->PositionDrives).ConstraintLambdaVelocity.field_0x0 + lVar24 * 8) =
         dVar20 + *(double *)
                   (&(this->PositionDrives).ConstraintLambdaVelocity.field_0x0 + lVar24 * 8);
    dVar19 = dVar20 * *(double *)
                       ((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xd8);
    dVar21 = dVar20 * *(double *)
                       ((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xe0);
    dVar6 = dVar20 * *(double *)
                      ((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x18 + 0xe8);
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[0].Body;
    if (__real_00800000 <
        this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
        (pFVar16->State).InvM) {
      dVar7 = this->InvMs[0];
      dVar8 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x168);
      dVar25 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x170);
      dVar27 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x178);
      if ((pFVar16 == (FSolverBody *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar16 = this->SolverBodies[0].Body;
      fVar1 = *(float *)&(pFVar16->State).V.field_0x4;
      *(float *)&(pFVar16->State).V = (float)(dVar7 * dVar19) + *(float *)&(pFVar16->State).V;
      *(float *)&(pFVar16->State).V.field_0x4 = (float)(dVar7 * dVar21) + fVar1;
      *(float *)&(pFVar16->State).V.field_0x8 =
           (float)(dVar7 * dVar6) + *(float *)&(pFVar16->State).V.field_0x8;
      fVar1 = *(float *)&(pFVar16->State).W.field_0x4;
      fVar2 = *(float *)&(pFVar16->State).W.field_0x8;
      *(float *)&(pFVar16->State).W = (float)(dVar20 * dVar8) + *(float *)&(pFVar16->State).W;
      *(float *)&(pFVar16->State).W.field_0x4 = (float)(dVar20 * dVar25) + fVar1;
      *(float *)&(pFVar16->State).W.field_0x8 = (float)(dVar20 * dVar27) + fVar2;
    }
    fVar1 = __real_00800000;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar22)) {
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pFVar16 = this->SolverBodies[1].Body;
    if (fVar1 < this->SolverBodies[1].State.ShockPropagationScale *
                this->SolverBodies[1].State.InvMScale * (pFVar16->State).InvM) {
      uVar31 = SUB84(this->InvMs[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar32 = (uint)((ulonglong)this->InvMs[1] >> 0x20) ^
               __xmm_80000000000000008000000000000000._4_4_;
      dVar7 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x180);
      dVar8 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 0x188);
      dVar25 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar24 * 0x30 + 400);
      if ((pFVar16 == (FSolverBody *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar22)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pFVar16 = this->SolverBodies[1].Body;
      *(float *)&(pFVar16->State).V =
           (float)((double)CONCAT44(uVar32,uVar31) * dVar19) + *(float *)&(pFVar16->State).V;
      *(float *)&(pFVar16->State).V.field_0x4 =
           (float)((double)CONCAT44(uVar32,uVar31) * dVar21) +
           *(float *)&(pFVar16->State).V.field_0x4;
      *(float *)&(pFVar16->State).V.field_0x8 =
           (float)((double)CONCAT44(uVar32,uVar31) * dVar6) +
           *(float *)&(pFVar16->State).V.field_0x8;
      fVar1 = *(float *)&(pFVar16->State).W.field_0x4;
      fVar2 = *(float *)&(pFVar16->State).W.field_0x8;
      *(float *)&(pFVar16->State).W = (float)(dVar20 * dVar7) + *(float *)&(pFVar16->State).W;
      *(float *)&(pFVar16->State).W.field_0x4 = (float)(dVar20 * dVar8) + fVar1;
      *(float *)&(pFVar16->State).W.field_0x8 = (float)(dVar20 * dVar25) + fVar2;
    }
  }
  return;
}

// ApplyAxisRotationDrive @ 143b8a140

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisRotationDrive
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  FConstraintSolverBody *pFVar1;
  FAxisConstraintDatas *this_00;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FSolverBody *pFVar18;
  FSolverBody *pFVar19;
  code *pcVar20;
  bool bVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double local_res8 [2];
  double local_res18;
  double local_res20;
  
  this_00 = &this->RotationDrives;
  lVar22 = (longlong)param_1;
  lVar2 = lVar22 * 8;
  local_res18 = param_2;
  if ((uint)param_1 < 3) {
    uVar9 = *(undefined8 *)((longlong)&this_00->field0_0x0 + lVar2 + 0x18);
    uVar25 = (undefined4)uVar9;
    uVar26 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar9 = *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + lVar2 + 0x30);
    uVar23 = (undefined4)uVar9;
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  else {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar21) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    uVar9 = *(undefined8 *)((longlong)&this_00->field0_0x0 + lVar2 + 0x18);
    uVar25 = (undefined4)uVar9;
    uVar26 = (undefined4)((ulonglong)uVar9 >> 0x20);
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar21) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
    uVar9 = *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + lVar2 + 0x30);
    uVar23 = (undefined4)uVar9;
    uVar24 = (undefined4)((ulonglong)uVar9 >> 0x20);
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar21) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  dVar15 = __real_3f1a36e2e0000000;
  pFVar1 = this->SolverBodies + 1;
  dVar10 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar2 + 0x138);
  dVar14 = 0.0;
  dVar11 = 0.0;
  if (__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar26,uVar25) &&
      (double)CONCAT44(uVar26,uVar25) != __real_3f1a36e2e0000000) {
    if (pFVar1->Body == (FSolverBody *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    pFVar18 = pFVar1->Body;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    fVar3 = *(float *)&(pFVar18->State).DQ.field_0x8;
    pFVar19 = this->SolverBodies[0].Body;
    fVar4 = *(float *)&(pFVar19->State).DQ.field_0x8;
    fVar5 = *(float *)&(pFVar18->State).DQ;
    dVar11 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xe8);
    fVar6 = *(float *)&(pFVar19->State).DQ;
    fVar7 = *(float *)&(pFVar18->State).DQ.field_0x4;
    dVar12 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xd8);
    fVar8 = *(float *)&(pFVar19->State).DQ.field_0x4;
    dVar13 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xe0);
    if (2 < (uint)param_1) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    dVar11 = (double)(fVar5 - fVar6) * dVar12 +
             *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar2 + 0x1f8) +
             (double)(fVar7 - fVar8) * dVar13 + (double)(fVar3 - fVar4) * dVar11;
  }
  if (dVar15 <= (double)CONCAT44(uVar24,uVar23) && (double)CONCAT44(uVar24,uVar23) != dVar15) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    pFVar18 = this->SolverBodies[0].Body;
    fVar3 = *(float *)&(pFVar18->State).DQ;
    fVar4 = *(float *)&(pFVar18->State).DQ.field_0x4;
    fVar5 = *(float *)&(pFVar18->State).DQ.field_0x8;
    dVar14 = *(double *)this->ConnectorWDts;
    dVar15 = *(double *)&this->ConnectorWDts[0].field_0x8;
    dVar12 = *(double *)&this->ConnectorWDts[0].field_0x10;
    if (pFVar1->Body == (FSolverBody *)0x0) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    pFVar18 = pFVar1->Body;
    fVar6 = *(float *)&(pFVar18->State).DQ;
    fVar7 = *(float *)&(pFVar18->State).DQ.field_0x4;
    fVar8 = *(float *)&(pFVar18->State).DQ.field_0x8;
    dVar13 = *(double *)(this->ConnectorWDts + 1);
    dVar16 = *(double *)&this->ConnectorWDts[1].field_0x8;
    dVar17 = *(double *)&this->ConnectorWDts[1].field_0x10;
    if (2 < (uint)param_1) {
      bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar21) {
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
    }
    dVar14 = (((double)fVar3 + dVar14) - ((double)fVar6 + dVar13)) *
             *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xd8) +
             (((double)fVar4 + dVar15) - ((double)fVar7 + dVar16)) *
             *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xe0) +
             (((double)fVar5 + dVar12) - ((double)fVar8 + dVar17)) *
             *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 0x18 + 0xe8) +
             local_res18 * *(double *)(&(this->RotationDrives).ConstraintVX.field_0x0 + lVar22 * 8);
  }
  if (2 < (uint)param_1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar21) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  local_res8[0] = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 8 + 0x210);
  local_res20 = (((dVar11 * (double)CONCAT44(uVar26,uVar25) -
                  dVar14 * (double)CONCAT44(uVar24,uVar23)) - local_res8[0]) * this->SolverStiffness
                ) / dVar10;
  local_res8[0] = local_res20 + local_res8[0];
  FAxisConstraintDatas::ApplyMaxLambda(this_00,param_1,&local_res20,local_res8);
  dVar10 = local_res8[0];
  if (2 < (uint)param_1) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar21) {
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar22 * 8 + 0x210) = dVar10;
  SolveRotationConstraintDelta(this,param_1,local_res20,true,this_00);
  return;
}

// ApplyAxisRotationProjection @ 143b8a630

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisRotationProjection
          (FPBDJointCachedSolver *this,double param_1,bool param_2,int param_3)

{
  FAxisConstraintDatas *this_00;
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  FSolverBody *pFVar11;
  FSolverBody *pFVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  
  this_00 = &this->RotationConstraints;
  lVar16 = (longlong)param_3;
  if (((this->RotationConstraints).bUseSimd != '\0') &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("RotationConstraints.bUseSimd == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0x7aa,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  bVar14 = FAxisConstraintDatas::GetValidDatas(this_00,param_3);
  if (!bVar14) {
    return;
  }
  bVar14 = FAxisConstraintDatas::GetSoftLimit(this_00,param_3);
  if (bVar14) {
    return;
  }
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar11 = this->SolverBodies[1].Body;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[0].Body;
  fVar2 = *(float *)&(pFVar11->State).DQ.field_0x8;
  fVar3 = *(float *)&(pFVar12->State).DQ.field_0x8;
  fVar4 = *(float *)&(pFVar11->State).DQ;
  dVar18 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe8);
  fVar5 = *(float *)&(pFVar12->State).DQ;
  fVar6 = *(float *)&(pFVar11->State).DQ.field_0x4;
  dVar17 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xd8);
  fVar7 = *(float *)&(pFVar12->State).DQ.field_0x4;
  dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe0);
  if ((2 < (uint)param_3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  bVar14 = false;
  dVar18 = (double)(fVar4 - fVar5) * dVar17 +
           *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x1f8) +
           (double)(fVar6 - fVar7) * dVar8 + (double)(fVar2 - fVar3) * dVar18;
  bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_3);
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (bVar15) {
    if ((2 < (uint)param_3) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pdVar1 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    if (dVar18 < *pdVar1 || dVar18 == *pdVar1) {
      if ((2 < (uint)param_3) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar9 = *(undefined8 *)
               ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
      if ((double)CONCAT44((uint)((ulonglong)uVar9 >> 0x20) ^ uVar23,(uint)uVar9 ^ uVar22) <= dVar18
         ) goto LAB_143b8a8bc;
      if ((2 < (uint)param_3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar18 = dVar18 + *(double *)
                         ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    }
    else {
      if ((2 < (uint)param_3) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar18 = dVar18 - *(double *)
                         ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    }
    bVar14 = true;
  }
LAB_143b8a8bc:
  bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_3);
  if ((!bVar15) ||
     (((bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_3), bVar15 && (bVar14)) &&
      (dVar17 = (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
      this->AngleTolerance <= dVar17 && dVar17 != this->AngleTolerance)))) {
    dVar17 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe8);
    dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 0x188);
    dVar21 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe0);
    dVar19 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 0x180);
    dVar20 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xd8);
    dVar10 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 400);
    if ((2 < (uint)param_3) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    dVar18 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8) *
             this->SolverStiffness * dVar18 *
             (__real_bff0000000000000 / (dVar8 * dVar21 + dVar19 * dVar20 + dVar17 * dVar10));
    dVar17 = param_1 * *(double *)
                        ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 0x180)
             * dVar18;
    dVar8 = param_1 * *(double *)
                       ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 0x188) *
            dVar18;
    dVar18 = param_1 * *(double *)
                        ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x30 + 400) *
             dVar18;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar11 = this->SolverBodies[1].Body;
    fVar2 = *(float *)&(pFVar11->State).DQ.field_0x4;
    *(float *)&(pFVar11->State).DQ = (float)dVar17 + *(float *)&(pFVar11->State).DQ;
    *(float *)&(pFVar11->State).DQ.field_0x4 = (float)dVar8 + fVar2;
    *(float *)&(pFVar11->State).DQ.field_0x8 =
         (float)dVar18 + *(float *)&(pFVar11->State).DQ.field_0x8;
    if (param_2) {
      if ((this->PositionConstraints).bUseSimd == '\0') {
        pdVar1 = (double *)
                 ((longlong)&(this->PositionConstraints).field0_0x0 + lVar16 * 0x30 + 0x60);
        dVar19 = *pdVar1;
        dVar20 = pdVar1[1];
        dVar21 = *(double *)
                  ((longlong)&(this->PositionConstraints).field0_0x0 + lVar16 * 0x30 + 0x70);
      }
      else {
        dVar19 = (double)*(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
        dVar20 = (double)*(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
        dVar21 = (double)*(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
      }
      uVar22 = SUB84(param_1,0) ^ uVar22;
      uVar23 = (uint)((ulonglong)param_1 >> 0x20) ^ uVar23;
      if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar11 = this->SolverBodies[1].Body;
      *(float *)&(pFVar11->State).DP =
           (float)((dVar8 * dVar21 - dVar18 * dVar20) * (double)CONCAT44(uVar23,uVar22)) +
           *(float *)&(pFVar11->State).DP;
      *(float *)&(pFVar11->State).DP.field_0x4 =
           (float)((dVar18 * dVar19 - dVar17 * dVar21) * (double)CONCAT44(uVar23,uVar22)) +
           *(float *)&(pFVar11->State).DP.field_0x4;
      *(float *)&(pFVar11->State).DP.field_0x8 =
           (float)((dVar17 * dVar20 - dVar8 * dVar19) * (double)CONCAT44(uVar23,uVar22)) +
           *(float *)&(pFVar11->State).DP.field_0x8;
    }
  }
  return;
}

// ApplyAxisRotationVelocityDrive @ 143b8ab80

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisRotationVelocityDrive
          (FPBDJointCachedSolver *this,int param_1,double param_2)

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
  double dVar14;
  double dVar15;
  bool bVar16;
  double *pdVar17;
  longlong lVar18;
  double local_res8;
  double local_res18;
  
  lVar18 = (longlong)param_1;
  if (((this->RotationDrives).bUseSimd != '\0') &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("RotationDrives.bUseSimd == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0xb32,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((2 < (uint)param_1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar16)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  dVar15 = param_2 * *(double *)(&(this->RotationDrives).SettingsSoftDamping.field_0x0 + lVar18 * 8)
  ;
  if (__real_3e45798ee0000000 <= dVar15) {
    if ((this->RotationDrives).bAccelerationMode == '\0') {
      pdVar17 = (double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 8 + 0x150);
      dVar14 = __real_3ff0000000000000;
    }
    else {
      if ((2 < (uint)param_1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pdVar17 = (double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 8 + 0x150);
      dVar14 = __real_3ff0000000000000 / *pdVar17;
    }
    dVar11 = __real_3ff0000000000000;
    if ((2 < (uint)param_1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    dVar14 = dVar14 * dVar15;
    dVar15 = *pdVar17;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar12->State).W;
    fVar2 = *(float *)&(pFVar12->State).W.field_0x4;
    fVar3 = *(float *)&(pFVar12->State).W.field_0x8;
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[0].Body;
    fVar4 = *(float *)&(pFVar12->State).W.field_0x4;
    fVar5 = *(float *)&(pFVar12->State).W;
    dVar7 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x18 + 0xe0);
    fVar6 = *(float *)&(pFVar12->State).W.field_0x8;
    dVar8 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x18 + 0xd8);
    dVar9 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x18 + 0xe8);
    if ((uint)param_1 < 3) {
      dVar10 = *(double *)(&(this->RotationDrives).ConstraintVX.field_0x0 + lVar18 * 8);
    }
    else {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar16) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar10 = *(double *)(&(this->RotationDrives).ConstraintVX.field_0x0 + lVar18 * 8);
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar16) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    dVar15 = (((dVar14 * ((((double)fVar2 - (double)fVar4) * dVar7 +
                           ((double)fVar1 - (double)fVar5) * dVar8 +
                          ((double)fVar3 - (double)fVar6) * dVar9) - dVar10) -
               *(double *)(&(this->RotationDrives).ConstraintLambdaVelocity.field_0x0 + lVar18 * 8))
              * this->SolverStiffness) / (dVar14 * dVar15 + dVar11)) * param_2;
    local_res8 = dVar15;
    if ((2 < (uint)param_1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    local_res18 = dVar15 + *(double *)
                            ((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 8 + 0x210);
    FAxisConstraintDatas::ApplyMaxLambda(&this->RotationDrives,param_1,&local_res8,&local_res18);
    dVar15 = local_res18;
    if ((2 < (uint)param_1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 8 + 0x210) = dVar15;
    dVar15 = local_res8 / param_2;
    *(double *)(&(this->RotationDrives).ConstraintLambdaVelocity.field_0x0 + lVar18 * 8) =
         dVar15 + *(double *)
                   (&(this->RotationDrives).ConstraintLambdaVelocity.field_0x0 + lVar18 * 8);
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fVar1 = __real_00800000;
    pFVar12 = this->SolverBodies[0].Body;
    if (__real_00800000 <
        this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
        (pFVar12->State).InvM) {
      dVar14 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 0x168);
      dVar11 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 0x170);
      dVar7 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 0x178);
      if ((pFVar12 == (FSolverBody *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar12 = this->SolverBodies[0].Body;
      fVar2 = *(float *)&(pFVar12->State).W.field_0x4;
      fVar3 = *(float *)&(pFVar12->State).W.field_0x8;
      *(float *)&(pFVar12->State).W = (float)(dVar15 * dVar14) + *(float *)&(pFVar12->State).W;
      *(float *)&(pFVar12->State).W.field_0x4 = (float)(dVar15 * dVar11) + fVar2;
      *(float *)&(pFVar12->State).W.field_0x8 = (float)(dVar15 * dVar7) + fVar3;
    }
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[1].Body;
    if (fVar1 < this->SolverBodies[1].State.ShockPropagationScale *
                this->SolverBodies[1].State.InvMScale * (pFVar12->State).InvM) {
      dVar14 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 0x180);
      dVar11 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 0x188);
      dVar7 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + lVar18 * 0x30 + 400);
      if ((pFVar12 == (FSolverBody *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar12 = this->SolverBodies[1].Body;
      fVar1 = *(float *)&(pFVar12->State).W.field_0x4;
      fVar2 = *(float *)&(pFVar12->State).W.field_0x8;
      *(float *)&(pFVar12->State).W = (float)(dVar15 * dVar14) + *(float *)&(pFVar12->State).W;
      *(float *)&(pFVar12->State).W.field_0x4 = (float)(dVar15 * dVar11) + fVar1;
      *(float *)&(pFVar12->State).W.field_0x8 = (float)(dVar15 * dVar7) + fVar2;
    }
  }
  return;
}

// ApplyAxisVelocityConstraint @ 143b8b0f0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyAxisVelocityConstraint(FPBDJointCachedSolver *this,int param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  EJointMotionType EVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  lVar7 = (longlong)param_1;
  if ((this->PositionConstraints).bUseSimd != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("PositionConstraints.bUseSimd == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                       ,0x3c5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (2 < (uint)param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar1 = *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar7 * 8 + 0x210);
  if (__real_3e45798ee0000000 <
      (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    uVar8 = 0;
    uVar9 = 0;
    if (2 < (uint)param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    dVar2 = *(double *)(&(this->PositionConstraints).ConstraintRestitution.field_0x0 + lVar7 * 8);
    EVar6 = FAxisConstraintDatas::GetMotionType(&this->PositionConstraints,param_1);
    if ((EVar6 == Limited) && (dVar2 != 0.0)) {
      if (2 < (uint)param_1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      dVar3 = *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + lVar7 * 8);
      if ((double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution < dVar3) {
        dVar3 = dVar3 * dVar2;
        uVar8 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar9 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      }
    }
    SolveLinearVelocityConstraint(this,param_1,(double)CONCAT44(uVar9,uVar8));
  }
  return;
}

// ApplyConstraints @ 143b8bcb0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyConstraints
          (FPBDJointCachedSolver *this,double param_1,double param_2,
          FPBDJointSolverSettings *param_3,FPBDJointSettings *param_4)

{
  this->SolverStiffness = param_2;
  this->NumActiveConstraints = 0;
  if (param_3->bSolvePositionLast != false) {
    ApplyRotationConstraints(this,param_1);
    ApplyPositionConstraints(this,param_1);
    ApplyRotationDrives(this,param_1);
    ApplyPositionDrives(this,param_1);
    return;
  }
  ApplyPositionConstraints(this,param_1);
  ApplyRotationConstraints(this,param_1);
  ApplyPositionDrives(this,param_1);
  ApplyRotationDrives(this,param_1);
  return;
}

// ApplyLinearVelocityConstraints @ 143b8ddc0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyLinearVelocityConstraints(FPBDJointCachedSolver *this)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  EJointMotionType EVar11;
  byte bVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = __real_3e45798ee0000000;
  if ((this->PositionConstraints).bUseSimd != '\0') {
    ApplyVelocityConstraintSimd(this);
    return;
  }
  uVar13 = 0;
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
  uVar15 = uVar13;
  do {
    iVar14 = (int)uVar15;
    if (iVar14 == 0) {
      bVar12 = (this->PositionConstraints).field_0x2c0;
      bVar10 = bVar12;
LAB_143b8de9d:
      if ((bVar10 & 1) != 0) {
        if (iVar14 == 0) {
          bVar12 = bVar12 >> 6;
LAB_143b8deee:
          bVar12 = bVar12 & 1;
LAB_143b8def1:
          if (bVar12 != 0) goto LAB_143b8df98;
        }
        else {
          if (iVar14 == 1) {
            bVar12 = bVar12 >> 7;
            goto LAB_143b8def1;
          }
          if (iVar14 == 2) {
            bVar12 = (this->PositionConstraints).field_0x2c1;
            goto LAB_143b8deee;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                             ,0xa2,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((this->PositionConstraints).bUseSimd != '\0') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("PositionConstraints.bUseSimd == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                             ,0x3c5,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        uVar1 = *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + uVar13 + 0x210);
        if (dVar6 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar8,(uint)uVar1 & uVar7))
        {
          dVar2 = *(double *)(&(this->PositionConstraints).ConstraintRestitution.field_0x0 + uVar13)
          ;
          uVar16 = 0;
          uVar17 = 0;
          EVar11 = FAxisConstraintDatas::GetMotionType(&this->PositionConstraints,iVar14);
          if ((EVar11 == Limited) && (dVar2 != 0.0)) {
            dVar3 = *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + uVar13);
            if (dVar3 <= (double)Chaos_Joint_LinearVelocityThresholdToApplyRestitution) {
              uVar16 = 0;
              uVar17 = 0;
            }
            else {
              dVar3 = dVar3 * dVar2;
              uVar16 = SUB84(dVar3,0) ^ uVar18;
              uVar17 = (uint)((ulonglong)dVar3 >> 0x20) ^ (uint)uVar5;
            }
          }
          SolveLinearVelocityConstraint(this,iVar14,(double)CONCAT44(uVar17,uVar16));
        }
      }
    }
    else {
      if (iVar14 == 1) {
        bVar12 = (this->PositionConstraints).field_0x2c0;
        bVar10 = bVar12 >> 1;
        goto LAB_143b8de9d;
      }
      if (iVar14 == 2) {
        bVar12 = (this->PositionConstraints).field_0x2c0;
        bVar10 = bVar12 >> 2;
        goto LAB_143b8de9d;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
LAB_143b8df98:
    uVar15 = (ulonglong)(iVar14 + 1U);
    uVar13 = uVar13 + 8;
    if (2 < (int)(iVar14 + 1U)) {
      return;
    }
  } while( true );
}

// ApplyPositionConstraints @ 143b95240

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionConstraints(FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if ((this->PositionConstraints).bUseSimd != '\0') {
    ApplyPositionConstraintsSimd(this,param_1);
    return;
  }
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      bVar3 = (this->PositionConstraints).field_0x2c0;
LAB_143b952c6:
      if ((bVar3 & 1) != 0) {
        ApplyAxisPositionConstraint(this,iVar4,param_1);
      }
    }
    else {
      if (iVar4 == 1) {
        bVar3 = (byte)(this->PositionConstraints).field_0x2c0 >> 1;
        goto LAB_143b952c6;
      }
      if (iVar4 == 2) {
        bVar3 = (byte)(this->PositionConstraints).field_0x2c0 >> 2;
        goto LAB_143b952c6;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      return;
    }
  } while( true );
}

// ApplyPositionConstraintsSimd @ 143b956f0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionConstraintsSimd
          (FPBDJointCachedSolver *this,double param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  FSolverBody *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar17 = *(float *)&(pFVar6->State).DP.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar33 = *(float *)&(pFVar6->State).DP.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar34 = *(float *)&((this->SolverBodies[0].Body)->State).DP;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar22 = *(float *)&(pFVar6->State).DP.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar23 = *(float *)&(pFVar6->State).DP.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar24 = *(float *)&((this->SolverBodies[1].Body)->State).DP;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar25 = *(float *)&(pFVar6->State).DQ.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar28 = *(float *)&(pFVar6->State).DQ.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar29 = *(float *)&((this->SolverBodies[0].Body)->State).DQ;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar30 = *(float *)&(pFVar6->State).DQ.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar31 = *(float *)&(pFVar6->State).DQ.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
  fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
  fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
  fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x4c);
  fVar32 = *(float *)&((this->SolverBodies[1].Body)->State).DQ;
  fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x30);
  fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x34);
  fVar13 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x38);
  fVar14 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x3c);
  auVar3 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
  auVar4 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
  auVar5 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
  auVar21._0_8_ =
       CONCAT44(((fVar8 * fVar30 - fVar32 * fVar9) - (fVar11 * fVar25 - fVar29 * fVar13)) +
                (fVar23 - fVar33),
                ((fVar9 * fVar31 - fVar30 * fVar2) - (fVar13 * fVar28 - fVar25 * fVar12)) +
                (fVar24 - fVar34));
  auVar21._8_4_ =
       ((fVar2 * fVar32 - fVar31 * fVar8) - (fVar12 * fVar29 - fVar28 * fVar11)) + (fVar22 - fVar17)
  ;
  auVar21._12_4_ = ((fVar10 * 0.0 - fVar10 * 0.0) - (fVar14 * 0.0 - fVar14 * 0.0)) + 0.0;
  auVar26._8_4_ = auVar21._8_4_;
  auVar26._0_8_ = auVar21._0_8_;
  auVar26._12_4_ = auVar21._12_4_;
  auVar19._8_4_ = auVar21._8_4_;
  auVar19._0_8_ = auVar21._0_8_;
  auVar19._12_4_ = auVar21._12_4_;
  auVar19 = dpps(auVar19,auVar3,0xff);
  auVar26 = dpps(auVar26,auVar5,0xff);
  fVar17 = (float)this->SolverStiffness;
  auVar21 = dpps(auVar21,auVar4,0xff);
  auVar27._0_4_ =
       (auVar26._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x110)) *
       fVar17 * *(float *)&(this->PositionConstraints).field0_0x0;
  auVar27._4_4_ =
       (auVar19._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x114)) *
       fVar17 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 4);
  auVar27._8_4_ =
       (auVar21._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118)) *
       fVar17 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 8);
  auVar27._12_4_ =
       (auVar21._4_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x11c)) *
       fVar17 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc);
  auVar19 = divps(auVar27,(undefined1  [16])
                          (this->PositionConstraints).field0_0x0.Simd.ConstraintHardIM);
  fVar25 = auVar19._0_4_;
  fVar28 = auVar19._4_4_;
  fVar29 = auVar19._8_4_;
  fVar17 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x124);
  fVar33 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128);
  fVar34 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 300);
  fVar30 = fVar25 * auVar5._0_4_;
  fVar31 = fVar25 * auVar5._4_4_;
  fVar32 = fVar25 * auVar5._8_4_;
  fVar22 = fVar29 * auVar4._0_4_;
  fVar23 = fVar29 * auVar4._4_4_;
  fVar24 = fVar29 * auVar4._8_4_;
  *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120) =
       fVar25 + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120);
  *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x124) = fVar28 + fVar17;
  *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128) = fVar29 + fVar33;
  *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 300) = auVar19._12_4_ + fVar34;
  fVar17 = fVar28 * auVar3._0_4_;
  fVar33 = fVar28 * auVar3._4_4_;
  fVar34 = fVar28 * auVar3._8_4_;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar8 = __real_00800000;
  pFVar6 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      (pFVar6->State).InvM) {
    fVar18 = (float)this->InvMs[0];
    fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb0);
    fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb4);
    fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb8);
    fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd0);
    fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd4);
    fVar13 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd8);
    fVar14 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf0);
    fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf4);
    fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf8);
    if (pFVar6 == (FSolverBody *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar6->State).DP.field_0x4;
    *(float *)&(pFVar6->State).DP =
         (fVar30 + fVar17 + fVar22) * fVar18 + *(float *)&(pFVar6->State).DP;
    *(float *)&(pFVar6->State).DP.field_0x4 = (fVar31 + fVar33 + fVar23) * fVar18 + fVar1;
    *(float *)&(pFVar6->State).DP.field_0x8 =
         (fVar32 + fVar34 + fVar24) * fVar18 + *(float *)&(pFVar6->State).DP.field_0x8;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = this->SolverBodies[0].Body;
    fVar18 = *(float *)&(pFVar6->State).DQ.field_0x4;
    *(float *)&(pFVar6->State).DQ =
         fVar2 * fVar25 + fVar11 * fVar28 + fVar14 * fVar29 + *(float *)&(pFVar6->State).DQ;
    fVar2 = *(float *)&(pFVar6->State).DQ.field_0x8;
    *(float *)&(pFVar6->State).DQ.field_0x4 =
         fVar9 * fVar25 + fVar12 * fVar28 + fVar15 * fVar29 + fVar18;
    *(float *)&(pFVar6->State).DQ.field_0x8 =
         fVar10 * fVar25 + fVar13 * fVar28 + fVar20 * fVar29 + fVar2;
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar16) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  if (fVar8 < this->SolverBodies[1].State.ShockPropagationScale *
              this->SolverBodies[1].State.InvMScale * (pFVar6->State).InvM) {
    fVar20 = (float)this->InvMs[1];
    fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe0);
    fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe4);
    fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe8);
    fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc0);
    fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc4);
    fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 200);
    fVar13 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x100);
    fVar14 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x104);
    fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x108);
    if (pFVar6 == (FSolverBody *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = this->SolverBodies[1].Body;
    fVar18 = *(float *)&(pFVar6->State).DP.field_0x4;
    *(float *)&(pFVar6->State).DP =
         (((0.0 - fVar20 * fVar30) - fVar20 * fVar17) - fVar20 * fVar22) +
         *(float *)&(pFVar6->State).DP;
    *(float *)&(pFVar6->State).DP.field_0x4 =
         (((0.0 - fVar20 * fVar31) - fVar20 * fVar33) - fVar20 * fVar23) + fVar18;
    *(float *)&(pFVar6->State).DP.field_0x8 =
         (((0.0 - fVar20 * fVar32) - fVar20 * fVar34) - fVar20 * fVar24) +
         *(float *)&(pFVar6->State).DP.field_0x8;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar16) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = this->SolverBodies[1].Body;
    fVar17 = *(float *)&(pFVar6->State).DQ.field_0x4;
    *(float *)&(pFVar6->State).DQ =
         fVar8 * fVar28 + fVar10 * fVar25 + fVar13 * fVar29 + *(float *)&(pFVar6->State).DQ;
    *(float *)&(pFVar6->State).DQ.field_0x4 =
         fVar2 * fVar28 + fVar11 * fVar25 + fVar14 * fVar29 + fVar17;
    *(float *)&(pFVar6->State).DQ.field_0x8 =
         fVar9 * fVar28 + fVar12 * fVar25 + fVar15 * fVar29 +
         *(float *)&(pFVar6->State).DQ.field_0x8;
  }
  this->NumActiveConstraints = this->NumActiveConstraints + 3;
  return;
}

// ApplyPositionDelta @ 143b95eb0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionDelta
          (FPBDJointCachedSolver *this,int param_1,TVector<double,3> *param_2)

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
  fVar1 = *(float *)&(pFVar5->State).DP.field_0x8;
  *(float *)&(pFVar5->State).DP.field_0x4 =
       (float)*(double *)&param_2->field_0x8 + *(float *)&(pFVar5->State).DP.field_0x4;
  fVar2 = *(float *)&(pFVar5->State).DP;
  *(float *)&(pFVar5->State).DP.field_0x8 = (float)dVar3 + fVar1;
  *(float *)&(pFVar5->State).DP = (float)dVar4 + fVar2;
  return;
}

// ApplyPositionDrives @ 143b96330

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionDrives(FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    puVar4 = &(this->PositionDrives).field_0x2c0;
    if (iVar5 == 0) {
      bVar3 = *puVar4;
LAB_143b963af:
      if ((bVar3 & 1) != 0) {
        ApplyAxisPositionDrive(this,iVar5,param_1);
      }
    }
    else {
      if (iVar5 == 1) {
        bVar3 = (byte)*puVar4 >> 1;
        goto LAB_143b963af;
      }
      if (iVar5 == 2) {
        bVar3 = (byte)(this->PositionDrives).field_0x2c0 >> 2;
        goto LAB_143b963af;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return;
    }
  } while( true );
}

// ApplyPositionProjection @ 143b96810

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionProjection
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = FPBDJointUtilities::GetLinearProjection(param_2,param_3);
  if (dVar2 != 0.0) {
    if ((this->PositionConstraints).bUseSimd != '\0') {
      ApplyPositionProjectionSimd(this,dVar2);
      return;
    }
    iVar1 = 0;
    do {
      ApplyAxisPositionProjection(this,dVar2,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
  }
  return;
}

// ApplyPositionProjectionSimd @ 143b969c0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionProjectionSimd
          (FPBDJointCachedSolver *this,double param_1)

{
  FConstraintSolverBody *pFVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  bool bVar20;
  float *pfVar21;
  __m128 *p_Var22;
  longlong lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float local_a8 [6];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar24 = *(float *)&(pFVar7->State).DP.field_0x8;
  if (pFVar7 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar28 = *(float *)&(pFVar7->State).DP.field_0x4;
  if (pFVar7 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar1 = this->SolverBodies + 1;
  fVar31 = *(float *)&((this->SolverBodies[0].Body)->State).DP;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar32 = *(float *)&(pFVar1->Body->State).DP.field_0x8;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar33 = *(float *)&(pFVar1->Body->State).DP.field_0x4;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar35 = *(float *)&(pFVar1->Body->State).DP;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar36 = *(float *)&(pFVar7->State).DQ.field_0x8;
  if (pFVar7 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[0].Body;
  fVar37 = *(float *)&(pFVar7->State).DQ.field_0x4;
  if (pFVar7 == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar3 = *(float *)&((this->SolverBodies[0].Body)->State).DQ;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar4 = *(float *)&(pFVar1->Body->State).DQ.field_0x8;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar5 = *(float *)&(pFVar1->Body->State).DQ.field_0x4;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  auVar25 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
  auVar27 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
  p_Var22 = (this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[0] + 1;
  fVar6 = *(float *)&(pFVar1->Body->State).DQ;
  fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
  fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
  fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
  fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x4c);
  auVar40 = *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
  fVar13 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x30);
  fVar14 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x34);
  fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x38);
  fVar16 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x3c);
  auVar38._12_4_ = auVar40._12_4_ * fVar12 - auVar40._12_4_ * fVar12;
  auVar39._0_8_ =
       CONCAT44(((fVar4 * fVar9 - fVar6 * fVar11) - (fVar13 * fVar36 - fVar3 * fVar15)) +
                (fVar33 - fVar28),
                ((fVar5 * fVar11 - fVar4 * fVar10) - (fVar15 * fVar37 - fVar36 * fVar14)) +
                (fVar35 - fVar31));
  auVar39._8_4_ =
       ((fVar6 * fVar10 - fVar5 * fVar9) - (fVar14 * fVar3 - fVar37 * fVar13)) + (fVar32 - fVar24);
  auVar39._12_4_ = ((fVar12 * 0.0 - fVar12 * 0.0) - (fVar16 * 0.0 - fVar16 * 0.0)) + 0.0;
  auVar38._4_4_ = auVar40._0_4_ * fVar11 - auVar40._8_4_ * fVar9;
  auVar38._0_4_ = auVar40._8_4_ * fVar10 - auVar40._4_4_ * fVar11;
  auVar38._8_4_ = auVar40._4_4_ * fVar9 - auVar40._0_4_ * fVar10;
  auVar38 = dpps(auVar38,(undefined1  [16])*(float (*) [4])p_Var22,0xff);
  auVar34._12_4_ = auVar25._12_4_ * fVar12 - auVar25._12_4_ * fVar12;
  auVar29._8_4_ = auVar39._8_4_;
  auVar29._0_8_ = auVar39._0_8_;
  auVar29._12_4_ = auVar39._12_4_;
  auVar29 = dpps(auVar29,auVar40,0xff);
  auVar34._4_4_ = auVar25._0_4_ * fVar11 - auVar25._8_4_ * fVar9;
  auVar34._0_4_ = auVar25._8_4_ * fVar10 - auVar25._4_4_ * fVar11;
  auVar34._8_4_ = auVar25._4_4_ * fVar9 - auVar25._0_4_ * fVar10;
  auVar34 = dpps(auVar34,(undefined1  [16])
                         (this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[1][1],0xff);
  auVar26._12_4_ = auVar27._12_4_ * fVar12 - auVar27._12_4_ * fVar12;
  auVar40._8_4_ = auVar39._8_4_;
  auVar40._0_8_ = auVar39._0_8_;
  auVar40._12_4_ = auVar39._12_4_;
  auVar25 = dpps(auVar40,auVar25,0xff);
  fVar24 = (float)this->SolverStiffness;
  auVar40 = dpps(auVar39,auVar27,0xff);
  auVar26._4_4_ = auVar27._0_4_ * fVar11 - auVar27._8_4_ * fVar9;
  auVar26._0_4_ = auVar27._8_4_ * fVar10 - auVar27._4_4_ * fVar11;
  auVar26._8_4_ = auVar27._4_4_ * fVar9 - auVar27._0_4_ * fVar10;
  auVar27 = dpps(auVar26,(undefined1  [16])
                         (this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[2][1],0xff);
  auVar30._0_4_ =
       (auVar29._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x110)) *
       fVar24 * *(float *)&(this->PositionConstraints).field0_0x0;
  auVar30._4_4_ =
       (auVar25._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x114)) *
       fVar24 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 4);
  auVar30._8_4_ =
       (auVar40._0_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118)) *
       fVar24 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 8);
  auVar30._12_4_ =
       (auVar40._4_4_ + *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x11c)) *
       fVar24 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc);
  fVar24 = (float)this->InvMs[1];
  auVar25._0_4_ = fVar24 - auVar38._0_4_;
  auVar25._4_4_ = fVar24 - auVar34._0_4_;
  auVar25._8_4_ = fVar24 - auVar27._0_4_;
  auVar25._12_4_ = fVar24 - auVar27._4_4_;
  auVar25 = divps(auVar30,auVar25);
  local_a8[0] = auVar25._0_4_;
  local_a8[4] = auVar25._4_4_;
  local_88 = auVar25._8_4_;
  local_a8[1] = local_a8[0];
  local_a8[2] = local_a8[0];
  local_a8[3] = local_a8[0];
  pfVar21 = local_a8;
  local_a8[5] = local_a8[4];
  uStack_90 = local_a8[4];
  uStack_8c = local_a8[4];
  uStack_84 = local_88;
  uStack_80 = local_88;
  uStack_7c = local_88;
  lVar23 = 3;
  fVar33 = (float)param_1;
  fVar28 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar24 = (float)((uint)(float)(param_1 * this->InvMs[1]) ^ __xmm_80000000800000008000000080000000)
  ;
  do {
    pfVar2 = (float *)((longlong)pfVar21 + (longlong)this + (0x4d0 - (longlong)local_a8));
    fVar28 = fVar28 + *pfVar21 * *pfVar2 * fVar24;
    fVar31 = fVar31 + pfVar21[1] * pfVar2[1] * fVar24;
    fVar32 = fVar32 + pfVar21[2] * pfVar2[2] * fVar24;
    fVar3 = p_Var22->m128_f32[0];
    puVar18 = (undefined1 *)((longlong)p_Var22 + 4);
    puVar19 = (undefined1 *)((longlong)p_Var22 + 8);
    p_Var22 = p_Var22 + 2;
    fVar4 = *pfVar21;
    pfVar2 = pfVar21 + 1;
    pfVar17 = pfVar21 + 2;
    pfVar21 = pfVar21 + 4;
    fVar35 = fVar35 + fVar33 * fVar3 * fVar4;
    fVar36 = fVar36 + fVar33 * *(float *)puVar18 * *pfVar2;
    fVar37 = fVar37 + fVar33 * *(float *)puVar19 * *pfVar17;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = pFVar1->Body;
  fVar24 = *(float *)&(pFVar7->State).DP.field_0x4;
  *(float *)&(pFVar7->State).DP = fVar28 + *(float *)&(pFVar7->State).DP;
  *(float *)&(pFVar7->State).DP.field_0x4 = fVar31 + fVar24;
  *(float *)&(pFVar7->State).DP.field_0x8 = fVar32 + *(float *)&(pFVar7->State).DP.field_0x8;
  if (pFVar1->Body == (FSolverBody *)0x0) {
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar20) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = pFVar1->Body;
  fVar24 = *(float *)&(pFVar7->State).DQ.field_0x4;
  *(float *)&(pFVar7->State).DQ = fVar35 + *(float *)&(pFVar7->State).DQ;
  fVar28 = *(float *)&(pFVar7->State).DQ.field_0x8;
  *(float *)&(pFVar7->State).DQ.field_0x4 = fVar36 + fVar24;
  *(float *)&(pFVar7->State).DQ.field_0x8 = fVar37 + fVar28;
  return;
}

// ApplyPositionTeleport @ 143b96ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionTeleport
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  float fVar1;
  float fVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined4 in_EAX;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0.0 < param_3->TeleportDistance) {
    if ((this->PositionConstraints).bUseSimd == '\0') {
      iVar14 = 0;
      do {
        ApplyAxisPositionTeleport(this,param_3->TeleportDistance,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
    }
    else {
      fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x110);
      fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x114);
      fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118);
      fVar21 = (float)param_3->TeleportDistance;
      uVar15 = -(uint)(fVar21 < (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar2));
      uVar16 = -(uint)(fVar21 < (float)(_UNK_15061cc74 & (uint)fVar6));
      uVar17 = -(uint)(fVar21 < (float)(_UNK_15061cc78 & (uint)fVar7));
      auVar5._4_4_ = uVar16;
      auVar5._0_4_ = uVar15;
      auVar5._8_4_ = uVar17;
      auVar5._12_4_ =
           -(uint)(fVar21 < (float)(_UNK_15061cc7c &
                                   *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 +
                                            0x11c)));
      iVar14 = movmskps(in_EAX,auVar5);
      if (iVar14 != 0) {
        fVar18 = (float)((uint)(0.0 - fVar2) & uVar15);
        fVar19 = (float)((uint)(0.0 - fVar6) & uVar16);
        fVar20 = (float)((uint)(0.0 - fVar7) & uVar17);
        fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
        fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100);
        fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68);
        fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
        fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54);
        fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58);
        fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
        fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
        fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
        if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("SolverBodies[BodyIndex].IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                                ,0xf2,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = this->SolverBodies[1].Body;
        fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
        *(float *)&(pFVar3->State).DP =
             fVar19 * fVar2 + fVar18 * fVar21 + fVar20 * fVar10 + *(float *)&(pFVar3->State).DP;
        fVar2 = *(float *)&(pFVar3->State).DP.field_0x8;
        *(float *)&(pFVar3->State).DP.field_0x4 =
             fVar19 * fVar6 + fVar18 * fVar8 + fVar20 * fVar11 + fVar1;
        *(float *)&(pFVar3->State).DP.field_0x8 =
             fVar19 * fVar7 + fVar18 * fVar9 + fVar20 * fVar12 + fVar2;
        return;
      }
    }
  }
  return;
}

// ApplyPositionTeleportSimd @ 143b97170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionTeleportSimd(FPBDJointCachedSolver *this,float param_1)

{
  float fVar1;
  float fVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined4 in_EAX;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x110);
  fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x114);
  fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118);
  uVar16 = -(uint)(param_1 < (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar2));
  uVar17 = -(uint)(param_1 < (float)(_UNK_15061cc74 & (uint)fVar6));
  uVar18 = -(uint)(param_1 < (float)(_UNK_15061cc78 & (uint)fVar7));
  auVar5._4_4_ = uVar17;
  auVar5._0_4_ = uVar16;
  auVar5._8_4_ = uVar18;
  auVar5._12_4_ =
       -(uint)(param_1 <
              (float)(_UNK_15061cc7c &
                     *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x11c)));
  iVar15 = movmskps(in_EAX,auVar5);
  if (iVar15 != 0) {
    fVar19 = (float)((uint)(0.0 - fVar2) & uVar16);
    fVar20 = (float)((uint)(0.0 - fVar6) & uVar17);
    fVar21 = (float)((uint)(0.0 - fVar7) & uVar18);
    fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
    fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100);
    fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68);
    fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
    fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54);
    fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58);
    fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
    fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
    fVar13 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar14) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
    *(float *)&(pFVar3->State).DP =
         fVar20 * fVar2 + fVar19 * fVar8 + fVar21 * fVar11 + *(float *)&(pFVar3->State).DP;
    fVar2 = *(float *)&(pFVar3->State).DP.field_0x8;
    *(float *)&(pFVar3->State).DP.field_0x4 =
         fVar20 * fVar6 + fVar19 * fVar9 + fVar21 * fVar12 + fVar1;
    *(float *)&(pFVar3->State).DP.field_0x8 =
         fVar20 * fVar7 + fVar19 * fVar10 + fVar21 * fVar13 + fVar2;
  }
  return;
}

// ApplyPositionVelocityDrives @ 143b97290

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyPositionVelocityDrives
          (FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if (this->bUsePositionBasedDrives == false) {
    iVar4 = 0;
    do {
      if (iVar4 == 0) {
        bVar3 = (this->PositionDrives).field_0x2c0;
LAB_143b97307:
        if ((bVar3 & 1) != 0) {
          ApplyAxisPositionVelocityDrive(this,iVar4,param_1);
        }
      }
      else {
        if (iVar4 == 1) {
          bVar3 = (byte)(this->PositionDrives).field_0x2c0 >> 1;
          goto LAB_143b97307;
        }
        if (iVar4 == 2) {
          bVar3 = (byte)(this->PositionDrives).field_0x2c0 >> 2;
          goto LAB_143b97307;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                           ,0x8c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  return;
}

// ApplyProjections @ 143b97360

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyProjections
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FSolverBody *pFVar9;
  code *pcVar10;
  bool bVar11;
  float fVar12;
  
  if ((param_3->bProjectionEnabled != false) && (0.0 < this->InvMs[1])) {
    this->SolverStiffness = 1.0;
    if (param_2->bSolvePositionLast == false) {
      ApplyPositionProjection(this,param_1,param_2,param_3);
      ApplyRotationProjection(this,param_1,param_2,param_3);
    }
    else {
      ApplyRotationProjection(this,param_1,param_2,param_3);
      ApplyPositionProjection(this,param_1,param_2,param_3);
    }
    if ((param_4) && (0.0 < Chaos_Joint_VelProjectionAlpha)) {
      pFVar9 = this->SolverBodies[1].Body;
      fVar12 = Chaos_Joint_VelProjectionAlpha / (float)param_1;
      fVar1 = *(float *)&(pFVar9->State).DP;
      fVar2 = *(float *)&(pFVar9->State).DP.field_0x4;
      fVar3 = *(float *)&(pFVar9->State).DP.field_0x8;
      fVar4 = *(float *)&(pFVar9->State).DQ;
      fVar5 = *(float *)&(pFVar9->State).DQ.field_0x4;
      fVar6 = *(float *)&(pFVar9->State).DQ.field_0x8;
      if ((pFVar9 == (FSolverBody *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = this->SolverBodies[1].Body;
      fVar7 = *(float *)&(pFVar9->State).V.field_0x4;
      fVar8 = *(float *)&(pFVar9->State).V.field_0x8;
      *(float *)&(pFVar9->State).V = fVar12 * fVar1 + *(float *)&(pFVar9->State).V;
      *(float *)&(pFVar9->State).V.field_0x4 = fVar12 * fVar2 + fVar7;
      *(float *)&(pFVar9->State).V.field_0x8 = fVar12 * fVar3 + fVar8;
      fVar1 = *(float *)&(pFVar9->State).W.field_0x4;
      fVar2 = *(float *)&(pFVar9->State).W.field_0x8;
      *(float *)&(pFVar9->State).W = fVar12 * fVar4 + *(float *)&(pFVar9->State).W;
      *(float *)&(pFVar9->State).W.field_0x4 = fVar12 * fVar5 + fVar1;
      *(float *)&(pFVar9->State).W.field_0x8 = fVar12 * fVar6 + fVar2;
    }
  }
  return;
}

// ApplyRotationConstraint @ 143b97900

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationConstraint
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  FAxisConstraintDatas *this_00;
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  FSolverBody *pFVar11;
  FSolverBody *pFVar12;
  code *pcVar13;
  bool bVar14;
  bool bVar15;
  longlong lVar16;
  double dVar17;
  
  this_00 = &this->RotationConstraints;
  lVar16 = (longlong)param_1;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar11 = this->SolverBodies[1].Body;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar12 = this->SolverBodies[0].Body;
  fVar2 = *(float *)&(pFVar11->State).DQ.field_0x8;
  fVar3 = *(float *)&(pFVar12->State).DQ.field_0x8;
  fVar4 = *(float *)&(pFVar11->State).DQ;
  dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe8);
  fVar5 = *(float *)&(pFVar12->State).DQ;
  fVar6 = *(float *)&(pFVar11->State).DQ.field_0x4;
  dVar17 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xd8);
  fVar7 = *(float *)&(pFVar12->State).DQ.field_0x4;
  dVar9 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 0x18 + 0xe0);
  if ((2 < (uint)param_1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar14)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  bVar14 = false;
  dVar8 = (double)(fVar2 - fVar3) * dVar8 +
          *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x1f8) +
          (double)(fVar4 - fVar5) * dVar17 + (double)(fVar6 - fVar7) * dVar9;
  bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
  if (bVar15) {
    if ((2 < (uint)param_1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar15)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pdVar1 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    if (dVar8 < *pdVar1 || dVar8 == *pdVar1) {
      if ((2 < (uint)param_1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar15)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar10 = *(undefined8 *)
                ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
      if ((double)CONCAT44((uint)((ulonglong)uVar10 >> 0x20) ^
                           __xmm_80000000000000008000000000000000._4_4_,
                           (uint)uVar10 ^ (uint)__xmm_80000000000000008000000000000000) <= dVar8)
      goto LAB_143b97b1b;
      if ((2 < (uint)param_1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar8 = dVar8 + *(double *)
                       ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    }
    else {
      if ((2 < (uint)param_1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L""), bVar14)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      dVar8 = dVar8 - *(double *)
                       ((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x120);
    }
    bVar14 = true;
  }
LAB_143b97b1b:
  bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
  if (bVar15) {
    bVar15 = FAxisConstraintDatas::GetLimitsCheck(this_00,param_1);
    if (!bVar15) {
      return;
    }
    if (!bVar14) {
      return;
    }
    dVar17 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar8,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    if (dVar17 < this->AngleTolerance || dVar17 == this->AngleTolerance) {
      return;
    }
  }
  bVar14 = FAxisConstraintDatas::GetSoftLimit(this_00,param_1);
  if (bVar14) {
    SolveRotationConstraintSoft(this,param_1,dVar8,param_2,0.0);
  }
  else {
    if (2 < (uint)param_1) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L"");
      if (bVar14) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
    dVar8 = (this->SolverStiffness *
             *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8) * dVar8) /
            *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x150);
    if ((2 < (uint)param_1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x210) =
         dVar8 + *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar16 * 8 + 0x210)
    ;
    SolveRotationConstraintDelta(this,param_1,dVar8,false,this_00);
  }
  return;
}

// ApplyRotationConstraints @ 143b99e80

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationConstraints(FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if ((this->RotationConstraints).bUseSimd != '\0') {
    ApplyRotationSoftConstraintsSimd(this,param_1);
    return;
  }
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      bVar3 = (this->RotationConstraints).field_0x2c0;
LAB_143b99f06:
      if ((bVar3 & 1) != 0) {
        ApplyRotationConstraint(this,iVar4,param_1);
      }
    }
    else {
      if (iVar4 == 1) {
        bVar3 = (byte)(this->RotationConstraints).field_0x2c0 >> 1;
        goto LAB_143b99f06;
      }
      if (iVar4 == 2) {
        bVar3 = (byte)(this->RotationConstraints).field_0x2c0 >> 2;
        goto LAB_143b99f06;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      return;
    }
  } while( true );
}

// ApplyRotationDelta @ 143b9a2c0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationDelta
          (FPBDJointCachedSolver *this,int param_1,TVector<double,3> *param_2)

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
  return;
}

// ApplyRotationDrives @ 143b9a4f0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationDrives(FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if ((this->RotationDrives).bUseSimd != '\0') {
    ApplyRotationDrivesSimd(this,param_1);
    return;
  }
  iVar4 = 0;
  do {
    if (iVar4 == 0) {
      bVar3 = (this->RotationDrives).field_0x2c0;
LAB_143b9a576:
      if ((bVar3 & 1) != 0) {
        ApplyAxisRotationDrive(this,iVar4,param_1);
      }
    }
    else {
      if (iVar4 == 1) {
        bVar3 = (byte)(this->RotationDrives).field_0x2c0 >> 1;
        goto LAB_143b9a576;
      }
      if (iVar4 == 2) {
        bVar3 = (byte)(this->RotationDrives).field_0x2c0 >> 2;
        goto LAB_143b9a576;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0x8c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    if (2 < iVar4) {
      return;
    }
  } while( true );
}

// ApplyRotationDrivesSimd @ 143b9a6c0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationDrivesSimd(FPBDJointCachedSolver *this,double param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  FSolverBody *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  bool bVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_88 [6];
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  fVar30 = *(float *)&(pFVar5->State).DQ.field_0x8;
  if (pFVar5 == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  fVar29 = *(float *)&(pFVar5->State).DQ.field_0x4;
  if (pFVar5 == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  fVar28 = *(float *)&((this->SolverBodies[0].Body)->State).DQ;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[1].Body;
  fVar31 = *(float *)&(pFVar5->State).DQ.field_0x8;
  if (pFVar5 == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[1].Body;
  fVar22 = *(float *)&(pFVar5->State).DQ.field_0x4;
  if (pFVar5 == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  auVar2 = *(undefined1 (*) [16])((longlong)&(this->RotationDrives).field0_0x0 + 0x70);
  fVar7 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120);
  fVar8 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x124);
  fVar9 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128);
  fVar10 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 300);
  fVar21 = *(float *)&((this->SolverBodies[1].Body)->State).DQ;
  auVar3 = *(undefined1 (*) [16])((longlong)&(this->RotationDrives).field0_0x0 + 0x50);
  auVar4 = *(undefined1 (*) [16])((longlong)&(this->RotationDrives).field0_0x0 + 0x60);
  fVar18 = (float)param_1;
  auVar26._0_8_ = CONCAT44(fVar22 - fVar29,fVar21 - fVar28);
  auVar26._8_4_ = fVar31 - fVar30;
  auVar26._12_4_ = 0;
  fVar28 = (fVar28 + this->ConnectorWDtsSimd[0].m128_f32[0]) -
           (fVar21 + this->ConnectorWDtsSimd[1].m128_f32[0]);
  fVar29 = (fVar29 + this->ConnectorWDtsSimd[0].m128_f32[1]) -
           (fVar22 + *(float *)((longlong)this->ConnectorWDtsSimd + 0x14));
  fVar30 = (fVar30 + this->ConnectorWDtsSimd[0].m128_f32[2]) -
           (fVar31 + *(float *)((longlong)this->ConnectorWDtsSimd + 0x18));
  fVar31 = (this->ConnectorWDtsSimd[0].m128_f32[3] + 0.0) -
           (*(float *)((longlong)this->ConnectorWDtsSimd + 0x1c) + 0.0);
  auVar19._4_4_ = fVar29;
  auVar19._0_4_ = fVar28;
  auVar19._8_4_ = fVar30;
  auVar19._12_4_ = fVar31;
  auVar24 = dpps(auVar3,auVar19,0xff);
  auVar20._4_4_ = fVar29;
  auVar20._0_4_ = fVar28;
  auVar20._8_4_ = fVar30;
  auVar20._12_4_ = fVar31;
  auVar19 = dpps(auVar4,auVar20,0xff);
  auVar25._8_4_ = auVar26._8_4_;
  auVar25._0_8_ = auVar26._0_8_;
  auVar25._12_4_ = 0;
  auVar20 = dpps(auVar25,auVar4,0xff);
  auVar23._4_4_ = fVar29;
  auVar23._0_4_ = fVar28;
  auVar23._8_4_ = fVar30;
  auVar23._12_4_ = fVar31;
  auVar23 = dpps(auVar2,auVar23,0xff);
  auVar27._8_4_ = auVar26._8_4_;
  auVar27._0_8_ = auVar26._0_8_;
  auVar27._12_4_ = 0;
  auVar25 = dpps(auVar27,auVar3,0xff);
  fVar30 = (float)this->SolverStiffness;
  auVar27 = dpps(auVar26,auVar2,0xff);
  auVar24._0_4_ =
       (auVar25._0_4_ + *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x110)) *
       *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x10) -
       (((float)*(double *)&(this->RotationDrives).ConstraintVX * fVar18 + auVar24._0_4_) *
        *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x20) + fVar7);
  auVar24._4_4_ =
       (auVar20._0_4_ + *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x114)) *
       *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x14) -
       (((float)*(double *)&(this->RotationDrives).ConstraintVX.field_0x8 * fVar18 + auVar19._0_4_)
        * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x24) + fVar8);
  auVar24._8_4_ =
       (auVar27._0_4_ + *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x118)) *
       *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x18) -
       (((float)*(double *)&(this->RotationDrives).ConstraintVX.field_0x10 * fVar18 + auVar23._0_4_)
        * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x28) + fVar9);
  auVar24._12_4_ =
       (auVar27._4_4_ + *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x11c)) *
       *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x1c) -
       ((fVar18 * 0.0 + auVar23._4_4_) *
        *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x2c) + fVar10);
  auVar19 = divps(auVar24,(undefined1  [16])(this->RotationDrives).field0_0x0.Simd.ConstraintSoftIM)
  ;
  fVar29 = auVar19._0_4_ * fVar30;
  fVar28 = auVar19._4_4_ * fVar30;
  fVar31 = auVar19._8_4_ * fVar30;
  local_68 = fVar31 * auVar2._0_4_;
  fStack_64 = fVar31 * auVar2._4_4_;
  fStack_60 = fVar31 * auVar2._8_4_;
  fStack_5c = fVar31 * auVar2._12_4_;
  *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) = fVar7 + fVar29;
  *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x124) = fVar8 + fVar28;
  *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = fVar9 + fVar31;
  *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 300) = fVar10 + auVar19._12_4_ * fVar30;
  local_88[0] = fVar29 * auVar3._0_4_;
  local_88[1] = fVar29 * auVar3._4_4_;
  local_88[2] = fVar29 * auVar3._8_4_;
  local_88[3] = fVar29 * auVar3._12_4_;
  local_88[4] = fVar28 * auVar4._0_4_;
  local_88[5] = fVar28 * auVar4._4_4_;
  fStack_70 = fVar28 * auVar4._8_4_;
  fStack_6c = fVar28 * auVar4._12_4_;
  if (pFVar5 == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  fVar30 = __real_00800000;
  lVar17 = 3;
  pFVar5 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.InvMScale * this->SolverBodies[0].State.ShockPropagationScale *
      (pFVar5->State).InvM) {
    pfVar14 = local_88;
    lVar16 = 3;
    pfVar15 = (float *)((longlong)&(this->RotationDrives).field0_0x0 + 0xb0);
    fVar29 = 0.0;
    fVar28 = 0.0;
    fVar31 = 0.0;
    do {
      pfVar1 = (float *)((longlong)pfVar14 + (longlong)this + (0xd40 - (longlong)local_88));
      fVar22 = *pfVar15;
      pfVar11 = pfVar15 + 1;
      pfVar12 = pfVar15 + 2;
      pfVar15 = pfVar15 + 8;
      fVar21 = pfVar1[1] * *pfVar11 + *pfVar1 * fVar22 + pfVar1[2] * *pfVar12;
      fVar22 = *pfVar14;
      pfVar1 = pfVar14 + 1;
      pfVar11 = pfVar14 + 2;
      pfVar14 = pfVar14 + 4;
      fVar29 = fVar29 + fVar21 * fVar22;
      fVar28 = fVar28 + fVar21 * *pfVar1;
      fVar31 = fVar31 + fVar21 * *pfVar11;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    if (pFVar5 == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = this->SolverBodies[0].Body;
    fVar22 = *(float *)&(pFVar5->State).DQ.field_0x4;
    *(float *)&(pFVar5->State).DQ = fVar29 + *(float *)&(pFVar5->State).DQ;
    *(float *)&(pFVar5->State).DQ.field_0x4 = fVar28 + fVar22;
    *(float *)&(pFVar5->State).DQ.field_0x8 = fVar31 + *(float *)&(pFVar5->State).DQ.field_0x8;
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this->SolverBodies[1].State.ShockPropagationScale * this->SolverBodies[1].State.InvMScale *
      ((this->SolverBodies[1].Body)->State).InvM <= fVar30) {
    this->NumActiveConstraints = this->NumActiveConstraints + 3;
  }
  else {
    pfVar14 = local_88;
    fVar30 = 0.0;
    fVar29 = 0.0;
    fVar28 = 0.0;
    pfVar15 = (float *)((longlong)&(this->RotationDrives).field0_0x0 + 0xc0);
    do {
      pfVar1 = (float *)((longlong)pfVar14 + (longlong)this + (0xd40 - (longlong)local_88));
      fVar31 = *pfVar15;
      pfVar11 = pfVar15 + 1;
      pfVar12 = pfVar15 + 2;
      pfVar15 = pfVar15 + 8;
      fVar22 = pfVar1[1] * *pfVar11 + *pfVar1 * fVar31 + pfVar1[2] * *pfVar12;
      fVar31 = *pfVar14;
      pfVar1 = pfVar14 + 1;
      pfVar11 = pfVar14 + 2;
      pfVar14 = pfVar14 + 4;
      fVar30 = fVar30 + fVar22 * fVar31;
      fVar29 = fVar29 + fVar22 * *pfVar1;
      fVar28 = fVar28 + fVar22 * *pfVar11;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar5 = this->SolverBodies[1].Body;
    fVar31 = *(float *)&(pFVar5->State).DQ.field_0x4;
    *(float *)&(pFVar5->State).DQ = fVar30 + *(float *)&(pFVar5->State).DQ;
    *(float *)&(pFVar5->State).DQ.field_0x4 = fVar29 + fVar31;
    *(float *)&(pFVar5->State).DQ.field_0x8 = fVar28 + *(float *)&(pFVar5->State).DQ.field_0x8;
    this->NumActiveConstraints = this->NumActiveConstraints + 3;
  }
  return;
}

// ApplyRotationProjection @ 143b9ac10

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationProjection
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  
  dVar3 = FPBDJointUtilities::GetAngularProjection(param_2,param_3);
  if (dVar3 != 0.0) {
    if ((((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked) &&
        ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) &&
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((this->RotationConstraints).bUseSimd == '\0') {
      iVar1 = 0;
      do {
        ApplyAxisRotationProjection(this,dVar3,bVar2,iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 3);
    }
    else {
      ApplyRotationProjectionSimd(this,(float)dVar3,bVar2);
    }
  }
  return;
}

// ApplyRotationProjectionSimd @ 143b9afd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationProjectionSimd
          (FPBDJointCachedSolver *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  float fVar2;
  __m128 _Var3;
  __m128 _Var4;
  __m128 _Var5;
  FSolverBody *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FSolverBody *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [12];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined7 extraout_var;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[0].Body;
  fVar28 = *(float *)&(pFVar10->State).DQ.field_0x8;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[0].Body;
  fVar22 = *(float *)&(pFVar10->State).DQ.field_0x4;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar23 = *(float *)&((this->SolverBodies[0].Body)->State).DQ;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[1].Body;
  fVar34 = *(float *)&(pFVar10->State).DQ.field_0x8;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = this->SolverBodies[1].Body;
  fVar27 = *(float *)&(pFVar10->State).DQ.field_0x4;
  if (pFVar10 == (FSolverBody *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    pFVar10 = (FSolverBody *)CONCAT71(extraout_var,bVar8);
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  _Var3 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[2];
  _Var4 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[1];
  auVar24._0_8_ = CONCAT44(fVar27 - fVar22,*(float *)&(pFVar6->State).DQ - fVar23);
  auVar24._8_4_ = fVar34 - fVar28;
  auVar24._12_4_ = 0;
  _Var5 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[0];
  auVar29._8_4_ = auVar24._8_4_;
  auVar29._0_8_ = auVar24._0_8_;
  auVar29._12_4_ = 0;
  auVar19._8_4_ = auVar24._8_4_;
  auVar19._0_8_ = auVar24._0_8_;
  auVar19._12_4_ = 0;
  auVar29 = dpps(auVar29,(undefined1  [16])_Var5,0xff);
  auVar19 = dpps(auVar19,(undefined1  [16])_Var4,0xff);
  auVar24 = dpps(auVar24,(undefined1  [16])_Var3,0xff);
  fVar27 = auVar29._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x110);
  fVar31 = auVar19._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x114);
  fVar32 = auVar24._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x118);
  fVar33 = auVar24._4_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x11c);
  fVar28 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x80);
  fVar22 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x84);
  fVar23 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x88);
  fVar34 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x8c);
  uVar11 = -(uint)(fVar28 < fVar27);
  uVar13 = -(uint)(fVar22 < fVar31);
  uVar15 = -(uint)(fVar23 < fVar32);
  uVar17 = -(uint)(fVar34 < fVar33);
  uVar12 = -(uint)(fVar27 < 0.0 - fVar28);
  uVar14 = -(uint)(fVar31 < 0.0 - fVar22);
  uVar16 = -(uint)(fVar32 < 0.0 - fVar23);
  uVar18 = -(uint)(fVar33 < 0.0 - fVar34);
  fVar27 = (float)(~uVar11 & ((uint)(fVar28 + fVar27) & uVar12 | ~uVar12 & (uint)fVar27) |
                  (uint)(fVar27 - fVar28) & uVar11);
  fVar22 = (float)(~uVar13 & ((uint)(fVar22 + fVar31) & uVar14 | ~uVar14 & (uint)fVar31) |
                  (uint)(fVar31 - fVar22) & uVar13);
  fVar23 = (float)(~uVar15 & ((uint)(fVar23 + fVar32) & uVar16 | ~uVar16 & (uint)fVar32) |
                  (uint)(fVar32 - fVar23) & uVar15);
  fVar34 = (float)(~uVar17 & ((uint)(fVar34 + fVar33) & uVar18 | ~uVar18 & (uint)fVar33) |
                  (uint)(fVar33 - fVar34) & uVar17);
  fVar28 = (float)this->AngleTolerance;
  auVar30._0_4_ =
       -(uint)(fVar28 < (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar27)) &
       (uVar12 | uVar11);
  auVar30._4_4_ = -(uint)(fVar28 < (float)(_UNK_15061cc74 & (uint)fVar22)) & (uVar14 | uVar13);
  auVar30._8_4_ = -(uint)(fVar28 < (float)(_UNK_15061cc78 & (uint)fVar23)) & (uVar16 | uVar15);
  auVar30._12_4_ = -(uint)(fVar28 < (float)(_UNK_15061cc7c & (uint)fVar34)) & (uVar18 | uVar17);
  iVar9 = movmskps((int)pFVar10,auVar30);
  if (iVar9 != 0) {
    auVar19 = *(undefined1 (*) [16])((longlong)&(this->RotationConstraints).field0_0x0 + 0xc0);
    auVar24 = *(undefined1 (*) [16])((longlong)&(this->RotationConstraints).field0_0x0 + 0xe0);
    auVar29 = *(undefined1 (*) [16])((longlong)&(this->RotationConstraints).field0_0x0 + 0x100);
    fVar28 = (float)this->SolverStiffness;
    auVar35 = dpps((undefined1  [16])_Var5,auVar19,0xff);
    auVar36 = dpps((undefined1  [16])_Var4,auVar24,0xff);
    auVar37 = dpps((undefined1  [16])_Var3,auVar29,0xff);
    auVar21._0_4_ = fVar28 * *(float *)&(this->RotationConstraints).field0_0x0 * fVar27;
    auVar21._4_4_ =
         fVar28 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 4) * fVar22;
    auVar21._8_4_ =
         fVar28 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 8) * fVar23;
    auVar21._12_4_ =
         fVar28 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc) * fVar34;
    auVar36._4_4_ = 0.0 - auVar36._0_4_;
    auVar36._0_4_ = 0.0 - auVar35._0_4_;
    auVar36._8_4_ = 0.0 - auVar37._0_4_;
    auVar36._12_4_ = 0.0 - auVar37._4_4_;
    auVar36 = divps(auVar21,auVar36);
    fVar28 = (float)(auVar36._0_4_ & auVar30._0_4_) * param_1;
    fVar22 = (float)(auVar36._4_4_ & auVar30._4_4_) * param_1;
    fVar23 = (float)(auVar36._8_4_ & auVar30._8_4_) * param_1;
    fVar34 = fVar22 * auVar24._0_4_ + fVar28 * auVar19._0_4_ + fVar23 * auVar29._0_4_;
    fVar27 = fVar22 * auVar24._4_4_ + fVar28 * auVar19._4_4_ + fVar23 * auVar29._4_4_;
    fVar28 = fVar22 * auVar24._8_4_ + fVar28 * auVar19._8_4_ + fVar23 * auVar29._8_4_;
    if (pFVar6 == (FSolverBody *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0xf2,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar10 = this->SolverBodies[1].Body;
    fVar22 = *(float *)&(pFVar10->State).DQ.field_0x4;
    *(float *)&(pFVar10->State).DQ = fVar34 + *(float *)&(pFVar10->State).DQ;
    *(float *)&(pFVar10->State).DQ.field_0x4 = fVar27 + fVar22;
    *(float *)&(pFVar10->State).DQ.field_0x8 = fVar28 + *(float *)&(pFVar10->State).DQ.field_0x8;
    if (param_2) {
      fVar22 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
      if ((this->PositionConstraints).bUseSimd == '\0') {
        auVar25._4_4_ = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68)
        ;
        auVar25._0_4_ = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60)
        ;
        auVar25._8_4_ = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70)
        ;
      }
      else {
        auVar25 = SUB1612(*(undefined1 (*) [16])
                           ((longlong)&(this->PositionConstraints).field0_0x0 + 0x40),0);
      }
      if ((this->PositionConstraints).bUseSimd == '\0') {
        fVar23 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x90);
        fVar31 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x98);
        fVar32 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xa0);
      }
      else {
        fVar23 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
        fVar31 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
        fVar32 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
      }
      if ((this->PositionConstraints).bUseSimd == '\0') {
        fVar33 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc0);
        fVar26 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 200);
        fVar20 = (float)*(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd0);
      }
      else {
        fVar33 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
        fVar26 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
        fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
      }
      if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SolverBodies[BodyIndex].IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                           ,0xf2,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar10 = this->SolverBodies[1].Body;
      fVar2 = *(float *)&(pFVar10->State).DP.field_0x4;
      *(float *)&(pFVar10->State).DP =
           ((fVar20 * fVar27 - fVar28 * fVar26) +
           (fVar32 * fVar27 - fVar28 * fVar31) + (auVar25._8_4_ * fVar27 - auVar25._4_4_ * fVar28))
           * fVar22 + *(float *)&(pFVar10->State).DP;
      *(float *)&(pFVar10->State).DP.field_0x4 =
           ((fVar33 * fVar28 - fVar34 * fVar20) +
           (fVar23 * fVar28 - fVar34 * fVar32) + (auVar25._0_4_ * fVar28 - auVar25._8_4_ * fVar34))
           * fVar22 + fVar2;
      *(float *)&(pFVar10->State).DP.field_0x8 =
           ((fVar26 * fVar34 - fVar27 * fVar33) +
           (fVar31 * fVar34 - fVar27 * fVar23) + (auVar25._4_4_ * fVar34 - auVar25._0_4_ * fVar27))
           * fVar22 + *(float *)&(pFVar10->State).DP.field_0x8;
    }
  }
  return;
}

// ApplyRotationSoftConstraintsSimd @ 143b9b4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationSoftConstraintsSimd
          (FPBDJointCachedSolver *this,double param_1)

{
  float fVar1;
  float fVar2;
  __m128 _Var3;
  __m128 _Var4;
  __m128 _Var5;
  FSolverBody *pFVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar23 = *(float *)&(pFVar6->State).DQ.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[0].Body;
  fVar26 = *(float *)&(pFVar6->State).DQ.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar30 = *(float *)&((this->SolverBodies[0].Body)->State).DQ;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar32 = *(float *)&(pFVar6->State).DQ.field_0x8;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = this->SolverBodies[1].Body;
  fVar31 = *(float *)&(pFVar6->State).DQ.field_0x4;
  if (pFVar6 == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  fVar33 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x80);
  fVar34 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x84);
  fVar35 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x88);
  fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x8c);
  pFVar6 = this->SolverBodies[1].Body;
  _Var3 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[2];
  _Var4 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[0];
  fVar30 = *(float *)&(pFVar6->State).DQ - fVar30;
  fVar31 = fVar31 - fVar26;
  fVar32 = fVar32 - fVar23;
  _Var5 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis[1];
  auVar24._4_4_ = fVar31;
  auVar24._0_4_ = fVar30;
  auVar24._8_4_ = fVar32;
  auVar24._12_4_ = 0;
  auVar20._4_4_ = fVar31;
  auVar20._0_4_ = fVar30;
  auVar20._8_4_ = fVar32;
  auVar20._12_4_ = 0;
  auVar24 = dpps(auVar24,(undefined1  [16])_Var4,0xff);
  auVar20 = dpps(auVar20,(undefined1  [16])_Var5,0xff);
  auVar21._4_4_ = fVar31;
  auVar21._0_4_ = fVar30;
  auVar21._8_4_ = fVar32;
  auVar21._12_4_ = 0;
  auVar21 = dpps(auVar21,(undefined1  [16])_Var3,0xff);
  fVar23 = auVar24._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x110);
  fVar26 = auVar20._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x114);
  fVar27 = auVar21._0_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x118);
  fVar28 = auVar21._4_4_ + *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x11c);
  uVar12 = -(uint)(fVar33 < fVar23);
  uVar14 = -(uint)(fVar34 < fVar26);
  uVar16 = -(uint)(fVar35 < fVar27);
  uVar18 = -(uint)(fVar8 < fVar28);
  uVar13 = -(uint)(fVar23 < 0.0 - fVar33);
  uVar15 = -(uint)(fVar26 < 0.0 - fVar34);
  uVar17 = -(uint)(fVar27 < 0.0 - fVar35);
  uVar19 = -(uint)(fVar28 < 0.0 - fVar8);
  fVar33 = (float)(~uVar12 & ((uint)(fVar33 + fVar23) & uVar13 | ~uVar13 & (uint)fVar23) |
                  (uint)(fVar23 - fVar33) & uVar12);
  fVar26 = (float)(~uVar14 & ((uint)(fVar34 + fVar26) & uVar15 | ~uVar15 & (uint)fVar26) |
                  (uint)(fVar26 - fVar34) & uVar14);
  fVar34 = (float)(~uVar16 & ((uint)(fVar35 + fVar27) & uVar17 | ~uVar17 & (uint)fVar27) |
                  (uint)(fVar27 - fVar35) & uVar16);
  fVar35 = (float)(~uVar18 & ((uint)(fVar8 + fVar28) & uVar19 | ~uVar19 & (uint)fVar28) |
                  (uint)(fVar28 - fVar8) & uVar18);
  fVar23 = (float)this->AngleTolerance;
  auVar25._0_4_ =
       -(uint)(fVar23 < (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar33)) &
       (uVar13 | uVar12);
  auVar25._4_4_ = -(uint)(fVar23 < (float)(_UNK_15061cc74 & (uint)fVar26)) & (uVar15 | uVar14);
  auVar25._8_4_ = -(uint)(fVar23 < (float)(_UNK_15061cc78 & (uint)fVar34)) & (uVar17 | uVar16);
  auVar25._12_4_ = -(uint)(fVar23 < (float)(_UNK_15061cc7c & (uint)fVar35)) & (uVar19 | uVar18);
  iVar11 = movmskps((int)pFVar6,auVar25);
  if (iVar11 != 0) {
    pFVar6 = this->SolverBodies[0].Body;
    fVar23 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120);
    fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x124);
    fVar27 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128);
    fVar28 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 300);
    auVar22._0_4_ =
         this->ConnectorWDtsSimd[0].m128_f32[0] - (this->ConnectorWDtsSimd[1].m128_f32[0] + fVar30);
    auVar22._4_4_ =
         this->ConnectorWDtsSimd[0].m128_f32[1] -
         (*(float *)((longlong)this->ConnectorWDtsSimd + 0x14) + fVar31);
    auVar22._8_4_ =
         this->ConnectorWDtsSimd[0].m128_f32[2] -
         (*(float *)((longlong)this->ConnectorWDtsSimd + 0x18) + fVar32);
    auVar22._12_4_ =
         this->ConnectorWDtsSimd[0].m128_f32[3] -
         (*(float *)((longlong)this->ConnectorWDtsSimd + 0x1c) + 0.0);
    fVar30 = (float)this->SolverStiffness;
    auVar20 = dpps((undefined1  [16])_Var5,auVar22,0xff);
    auVar21 = dpps((undefined1  [16])_Var4,auVar22,0xff);
    auVar24 = dpps((undefined1  [16])_Var3,auVar22,0xff);
    auVar29._0_4_ =
         *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x10) * fVar33 -
         (auVar21._0_4_ * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x20) +
         fVar23);
    auVar29._4_4_ =
         *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x14) * fVar26 -
         (auVar20._0_4_ * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x24) +
         fVar8);
    auVar29._8_4_ =
         *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x18) * fVar34 -
         (auVar24._0_4_ * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x28) +
         fVar27);
    auVar29._12_4_ =
         *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x1c) * fVar35 -
         (auVar24._4_4_ * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x2c) +
         fVar28);
    auVar20 = divps(auVar29,(undefined1  [16])
                            (this->RotationConstraints).field0_0x0.Simd.ConstraintSoftIM);
    fVar26 = (float)((uint)(auVar20._0_4_ * fVar30) & auVar25._0_4_);
    fVar32 = (float)((uint)(auVar20._4_4_ * fVar30) & auVar25._4_4_);
    fVar31 = (float)((uint)(auVar20._8_4_ * fVar30) & auVar25._8_4_);
    *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120) = fVar23 + fVar26;
    *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x124) = fVar8 + fVar32;
    *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128) = fVar27 + fVar31;
    *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 300) =
         fVar28 + (float)((uint)(auVar20._12_4_ * fVar30) & auVar25._12_4_);
    if (pFVar6 == (FSolverBody *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar23 = __real_00800000;
    pFVar6 = this->SolverBodies[0].Body;
    if (__real_00800000 <
        this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
        (pFVar6->State).InvM) {
      fVar30 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd0);
      fVar33 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd4);
      fVar34 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xd8);
      fVar35 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb0);
      fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb4);
      fVar27 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xb8);
      fVar28 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf0);
      fVar9 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf4);
      fVar2 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xf8);
      if (pFVar6 == (FSolverBody *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = this->SolverBodies[0].Body;
      fVar1 = *(float *)&(pFVar6->State).DQ.field_0x4;
      *(float *)&(pFVar6->State).DQ =
           fVar30 * fVar32 + fVar35 * fVar26 + fVar28 * fVar31 + *(float *)&(pFVar6->State).DQ;
      fVar30 = *(float *)&(pFVar6->State).DQ.field_0x8;
      *(float *)&(pFVar6->State).DQ.field_0x4 =
           fVar33 * fVar32 + fVar8 * fVar26 + fVar9 * fVar31 + fVar1;
      *(float *)&(pFVar6->State).DQ.field_0x8 =
           fVar34 * fVar32 + fVar27 * fVar26 + fVar2 * fVar31 + fVar30;
    }
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = this->SolverBodies[1].Body;
    if (fVar23 < this->SolverBodies[1].State.ShockPropagationScale *
                 this->SolverBodies[1].State.InvMScale * (pFVar6->State).InvM) {
      fVar23 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe0);
      fVar30 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe4);
      fVar33 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe8);
      fVar34 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc0);
      fVar35 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc4);
      fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 200);
      fVar27 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x100);
      fVar28 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x104);
      fVar9 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x108);
      if (pFVar6 == (FSolverBody *)0x0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L"");
        if (bVar10) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar6 = this->SolverBodies[1].Body;
      fVar2 = *(float *)&(pFVar6->State).DQ.field_0x4;
      *(float *)&(pFVar6->State).DQ =
           fVar23 * fVar32 + fVar34 * fVar26 + fVar27 * fVar31 + *(float *)&(pFVar6->State).DQ;
      *(float *)&(pFVar6->State).DQ.field_0x4 =
           fVar30 * fVar32 + fVar35 * fVar26 + fVar28 * fVar31 + fVar2;
      *(float *)&(pFVar6->State).DQ.field_0x8 =
           fVar33 * fVar32 + fVar8 * fVar26 + fVar9 * fVar31 +
           *(float *)&(pFVar6->State).DQ.field_0x8;
    }
    this->NumActiveConstraints = this->NumActiveConstraints + 3;
  }
  return;
}

// ApplyRotationTeleport @ 143b9ba00

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationTeleport
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  return;
}

// ApplyRotationVelocityDrives @ 143b9ba10

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyRotationVelocityDrives
          (FPBDJointCachedSolver *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  
  if (this->bUsePositionBasedDrives == false) {
    iVar4 = 0;
    do {
      if (iVar4 == 0) {
        bVar3 = (this->RotationDrives).field_0x2c0;
LAB_143b9ba87:
        if ((bVar3 & 1) != 0) {
          ApplyAxisRotationVelocityDrive(this,iVar4,param_1);
        }
      }
      else {
        if (iVar4 == 1) {
          bVar3 = (byte)(this->RotationDrives).field_0x2c0 >> 1;
          goto LAB_143b9ba87;
        }
        if (iVar4 == 2) {
          bVar3 = (byte)(this->RotationDrives).field_0x2c0 >> 2;
          goto LAB_143b9ba87;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                           ,0x8c,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  return;
}

// ApplyTeleports @ 143b9db80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyTeleports
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  float fVar1;
  float fVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  undefined4 in_EAX;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (0.0 < param_3->TeleportDistance) {
    if ((this->PositionConstraints).bUseSimd == '\0') {
      iVar14 = 0;
      do {
        ApplyAxisPositionTeleport(this,param_3->TeleportDistance,iVar14);
        iVar14 = iVar14 + 1;
      } while (iVar14 < 3);
    }
    else {
      fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x110);
      fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x114);
      fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118);
      fVar21 = (float)param_3->TeleportDistance;
      uVar15 = -(uint)(fVar21 < (float)(__xmm_7fffffff7fffffff7fffffff7fffffff & (uint)fVar2));
      uVar16 = -(uint)(fVar21 < (float)(_UNK_15061cc74 & (uint)fVar6));
      uVar17 = -(uint)(fVar21 < (float)(_UNK_15061cc78 & (uint)fVar7));
      auVar5._4_4_ = uVar16;
      auVar5._0_4_ = uVar15;
      auVar5._8_4_ = uVar17;
      auVar5._12_4_ =
           -(uint)(fVar21 < (float)(_UNK_15061cc7c &
                                   *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 +
                                            0x11c)));
      iVar14 = movmskps(in_EAX,auVar5);
      if (iVar14 != 0) {
        fVar18 = (float)((uint)(0.0 - fVar2) & uVar15);
        fVar19 = (float)((uint)(0.0 - fVar6) & uVar16);
        fVar20 = (float)((uint)(0.0 - fVar7) & uVar17);
        fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
        fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100);
        fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68);
        fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
        fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54);
        fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58);
        fVar10 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
        fVar11 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
        fVar12 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
        if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("SolverBodies[BodyIndex].IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                                ,0xf2,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = this->SolverBodies[1].Body;
        fVar1 = *(float *)&(pFVar3->State).DP.field_0x4;
        *(float *)&(pFVar3->State).DP =
             fVar19 * fVar2 + fVar18 * fVar21 + fVar20 * fVar10 + *(float *)&(pFVar3->State).DP;
        fVar2 = *(float *)&(pFVar3->State).DP.field_0x8;
        *(float *)&(pFVar3->State).DP.field_0x4 =
             fVar19 * fVar6 + fVar18 * fVar8 + fVar20 * fVar11 + fVar1;
        *(float *)&(pFVar3->State).DP.field_0x8 =
             fVar19 * fVar7 + fVar18 * fVar9 + fVar20 * fVar12 + fVar2;
        return;
      }
    }
  }
  return;
}

// ApplyVelocityConstraintSimd @ 143b9e600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyVelocityConstraintSimd(FPBDJointCachedSolver *this)

{
  TVector<float,3> *pTVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FSolverBody *pFVar12;
  code *pcVar13;
  undefined8 uVar14;
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
  bool bVar25;
  undefined4 in_EAX;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  auVar29._4_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[1] <
              (float)(_UNK_15061cc74 &
                     *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x124)));
  auVar29._0_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[0] <
              (float)(__xmm_7fffffff7fffffff7fffffff7fffffff &
                     *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120)));
  auVar29._8_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (float)(_UNK_15061cc78 &
                     *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128)));
  auVar29._12_4_ =
       -(uint)(GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (float)(_UNK_15061cc7c &
                     *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 300)));
  iVar26 = movmskps(in_EAX,auVar29);
  if (iVar26 != 0) {
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[0].Body;
    fVar27 = *(float *)&(pFVar12->State).V;
    fVar35 = *(float *)&(pFVar12->State).V.field_0x4;
    fVar36 = *(float *)&(pFVar12->State).V.field_0x8;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[1].Body;
    fVar2 = *(float *)&(pFVar12->State).V;
    fVar3 = *(float *)&(pFVar12->State).V.field_0x4;
    fVar4 = *(float *)&(pFVar12->State).V.field_0x8;
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[0].Body;
    pTVar1 = &(pFVar12->State).W;
    fVar5 = *(float *)pTVar1;
    fVar6 = *(float *)&(pFVar12->State).W.field_0x4;
    uVar14 = *(undefined8 *)pTVar1;
    fVar7 = *(float *)&(pFVar12->State).W.field_0x8;
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xfa,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[1].Body;
    fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x30);
    fVar16 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x34);
    fVar17 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x38);
    fVar18 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x3c);
    fVar19 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
    fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
    fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
    fVar22 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x4c);
    pTVar1 = &(pFVar12->State).W;
    fVar8 = *(float *)pTVar1;
    fVar9 = *(float *)&(pFVar12->State).W.field_0x8;
    auVar31._0_8_ =
         CONCAT44(((fVar19 * fVar9 - fVar8 * fVar21) + fVar3) -
                  ((fVar15 * fVar7 - fVar5 * fVar17) + fVar35),
                  ((fVar21 * *(float *)&(pFVar12->State).W.field_0x4 - fVar9 * fVar20) + fVar2) -
                  ((fVar17 * fVar6 - fVar7 * fVar16) + fVar27));
    auVar31._8_4_ =
         ((fVar20 * fVar8 - (float)((ulonglong)*(undefined8 *)pTVar1 >> 0x20) * fVar19) + fVar4) -
         ((fVar16 * fVar5 - (float)((ulonglong)uVar14 >> 0x20) * fVar15) + fVar36);
    auVar31._12_4_ = ((fVar22 * 0.0 - fVar22 * 0.0) + 0.0) - ((fVar18 * 0.0 - fVar18 * 0.0) + 0.0);
    auVar33._8_4_ = auVar31._8_4_;
    auVar33._0_8_ = auVar31._0_8_;
    auVar33._12_4_ = auVar31._12_4_;
    auVar32._8_4_ = auVar31._8_4_;
    auVar32._0_8_ = auVar31._0_8_;
    auVar32._12_4_ = auVar31._12_4_;
    auVar33 = dpps(auVar33,(undefined1  [16])
                           (this->PositionConstraints).field0_0x0.Simd.ConstraintAxis[0],0xff);
    auVar29 = dpps(auVar32,(undefined1  [16])
                           (this->PositionConstraints).field0_0x0.Simd.ConstraintAxis[1],0xff);
    auVar32 = dpps(auVar31,(undefined1  [16])
                           (this->PositionConstraints).field0_0x0.Simd.ConstraintAxis[2],0xff);
    fVar27 = (float)this->SolverStiffness;
    auVar34._0_4_ = auVar33._0_4_ * fVar27 * *(float *)&(this->PositionConstraints).field0_0x0;
    auVar34._4_4_ =
         auVar29._0_4_ * fVar27 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 4);
    auVar34._8_4_ =
         auVar32._0_4_ * fVar27 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 8);
    auVar34._12_4_ =
         auVar32._4_4_ *
         fVar27 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc);
    auVar29 = divps(auVar34,(undefined1  [16])
                            (this->PositionConstraints).field0_0x0.Simd.ConstraintHardIM);
    fVar27 = auVar29._0_4_;
    fVar35 = auVar29._4_4_;
    fVar36 = auVar29._8_4_;
    if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    fVar2 = __real_00800000;
    pFVar12 = this->SolverBodies[0].Body;
    if (__real_00800000 <
        this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
        (pFVar12->State).InvM) {
      fVar3 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb0);
      fVar4 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb4);
      fVar5 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb8);
      fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
      fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54);
      fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58);
      fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
      fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100);
      fVar16 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68);
      fVar17 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
      fVar18 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
      fVar19 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
      fVar28 = (float)this->InvMs[0];
      fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd0);
      fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd4);
      fVar22 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd8);
      fVar23 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf0);
      fVar24 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf4);
      fVar30 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf8);
      if ((pFVar12 == (FSolverBody *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar25)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar12 = this->SolverBodies[0].Body;
      fVar10 = *(float *)&(pFVar12->State).V.field_0x4;
      fVar11 = *(float *)&(pFVar12->State).V.field_0x8;
      *(float *)&(pFVar12->State).V =
           (fVar27 * fVar6 + fVar35 * fVar9 + fVar17 * fVar36) * fVar28 +
           *(float *)&(pFVar12->State).V;
      *(float *)&(pFVar12->State).V.field_0x4 =
           (fVar27 * fVar7 + fVar35 * fVar15 + fVar18 * fVar36) * fVar28 + fVar10;
      *(float *)&(pFVar12->State).V.field_0x8 =
           (fVar27 * fVar8 + fVar35 * fVar16 + fVar19 * fVar36) * fVar28 + fVar11;
      fVar6 = *(float *)&(pFVar12->State).W.field_0x4;
      fVar7 = *(float *)&(pFVar12->State).W.field_0x8;
      *(float *)&(pFVar12->State).W =
           fVar3 * fVar27 + fVar20 * fVar35 + fVar23 * fVar36 + *(float *)&(pFVar12->State).W;
      *(float *)&(pFVar12->State).W.field_0x4 =
           fVar4 * fVar27 + fVar21 * fVar35 + fVar24 * fVar36 + fVar6;
      *(float *)&(pFVar12->State).W.field_0x8 =
           fVar5 * fVar27 + fVar22 * fVar35 + fVar30 * fVar36 + fVar7;
    }
    if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("SolverBodies[BodyIndex].IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                            ,0xf2,L""), bVar25)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = this->SolverBodies[1].Body;
    if (fVar2 < this->SolverBodies[1].State.ShockPropagationScale *
                this->SolverBodies[1].State.InvMScale * (pFVar12->State).InvM) {
      fVar2 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe0);
      fVar3 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe4);
      fVar4 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe8);
      fVar5 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60);
      fVar6 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100);
      fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68);
      fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50);
      fVar9 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54);
      fVar15 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58);
      fVar16 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
      fVar17 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
      fVar18 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
      fVar19 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc0);
      fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc4);
      fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 200);
      fVar30 = (float)((uint)(float)this->InvMs[1] ^ __xmm_80000000800000008000000080000000);
      fVar22 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x100);
      fVar23 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x104);
      fVar24 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x108);
      if ((pFVar12 == (FSolverBody *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("SolverBodies[BodyIndex].IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0xf2,L""), bVar25)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pFVar12 = this->SolverBodies[1].Body;
      fVar28 = *(float *)&(pFVar12->State).V.field_0x4;
      fVar10 = *(float *)&(pFVar12->State).V.field_0x8;
      *(float *)&(pFVar12->State).V =
           (fVar35 * fVar5 + fVar27 * fVar8 + fVar16 * fVar36) * fVar30 +
           *(float *)&(pFVar12->State).V;
      *(float *)&(pFVar12->State).V.field_0x4 =
           (fVar35 * fVar6 + fVar27 * fVar9 + fVar17 * fVar36) * fVar30 + fVar28;
      *(float *)&(pFVar12->State).V.field_0x8 =
           (fVar35 * fVar7 + fVar27 * fVar15 + fVar18 * fVar36) * fVar30 + fVar10;
      fVar5 = *(float *)&(pFVar12->State).W.field_0x4;
      fVar6 = *(float *)&(pFVar12->State).W.field_0x8;
      *(float *)&(pFVar12->State).W =
           fVar2 * fVar35 + fVar19 * fVar27 + fVar22 * fVar36 + *(float *)&(pFVar12->State).W;
      *(float *)&(pFVar12->State).W.field_0x4 =
           fVar3 * fVar35 + fVar20 * fVar27 + fVar23 * fVar36 + fVar5;
      *(float *)&(pFVar12->State).W.field_0x8 =
           fVar4 * fVar35 + fVar21 * fVar27 + fVar24 * fVar36 + fVar6;
    }
  }
  return;
}

// ApplyVelocityConstraints @ 143b9ebe0

void __thiscall
Chaos::FPBDJointCachedSolver::ApplyVelocityConstraints
          (FPBDJointCachedSolver *this,double param_1,double param_2,
          FPBDJointSolverSettings *param_3,FPBDJointSettings *param_4)

{
  this->SolverStiffness = param_2;
  if (param_3->bSolvePositionLast != false) {
    ApplyAngularVelocityConstraints(this);
    ApplyLinearVelocityConstraints(this);
    ApplyRotationVelocityDrives(this,param_1);
    ApplyPositionVelocityDrives(this,param_1);
    return;
  }
  ApplyLinearVelocityConstraints(this);
  ApplyAngularVelocityConstraints(this);
  ApplyPositionVelocityDrives(this,param_1);
  ApplyRotationVelocityDrives(this,param_1);
  return;
}

// Body @ 143b9f640

FConstraintSolverBody * __thiscall
Chaos::FPBDJointCachedSolver::Body(FPBDJointCachedSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstraintSolverBody *pFVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BodyIndex >= 0) && (BodyIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->SolverBodies[param_1].Body == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->SolverBodies + param_1;
}

// Body @ 143b9f6d0

FConstraintSolverBody * __thiscall
Chaos::FPBDJointCachedSolver::Body(FPBDJointCachedSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FConstraintSolverBody *pFVar3;
  
  if (1 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BodyIndex >= 0) && (BodyIndex < 2)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xf9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->SolverBodies[param_1].Body == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SolverBodies[BodyIndex].IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                       ,0xfa,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConstraintSolverBody *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->SolverBodies + param_1;
}

// ComputeBodyState @ 143ba16d0

void __thiscall
Chaos::FPBDJointCachedSolver::ComputeBodyState(FPBDJointCachedSolver *this,int param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  double dVar3;
  FSolverBody *pFVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  FConstraintSolverBody *pFVar22;
  TQuat<double> *this_00;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  
  pFVar22 = Body(this,param_1);
  pFVar4 = pFVar22->Body;
  uVar2 = *(undefined8 *)&(pFVar4->State).DP.field_0x4;
  dVar3 = *(double *)&(pFVar4->State).P.field_0x8;
  dVar9 = (double)(float)((ulonglong)uVar2 >> 0x20) + *(double *)&(pFVar4->State).P.field_0x10;
  *(double *)(this->CurrentPs + param_1) =
       (double)*(float *)&(pFVar4->State).DP + *(double *)&(pFVar4->State).P;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = (double)(float)uVar2 + dVar3;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])&this->CurrentPs[param_1].field_0x8 = auVar8;
  pFVar22 = Body(this,param_1);
  FSolverBody::CorrectedQ(pFVar22->Body,(TRotation<double,3> *)&local_78);
  this_00 = (TQuat<double> *)(this->CurrentQs + param_1);
  this_00->X = local_78;
  this_00->Y = dStack_70;
  this_00->Z = local_68;
  this_00->W = dStack_60;
  puVar1 = &this->LocalConnectorXs[param_1].field_0x20;
  local_98._s_0.X = (double)*(undefined8 *)puVar1;
  local_98._s_0.Y = (double)*(undefined8 *)(puVar1 + 8);
  local_98._s_0.Z = (double)*(undefined8 *)&this->LocalConnectorXs[param_1].field_0x30;
  UE::Math::TQuat<double>::RotateVector
            (this_00,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_98._s_0);
  dVar9 = *(double *)&this->CurrentPs[param_1].field_0x8;
  dVar3 = *(double *)&this->CurrentPs[param_1].field_0x10;
  *(double *)(this->ConnectorXs + param_1) =
       local_b8._s_0.X + *(double *)(this->CurrentPs + param_1);
  *(double *)&this->ConnectorXs[param_1].field_0x8 = local_b8._s_0.Y + dVar9;
  *(double *)&this->ConnectorXs[param_1].field_0x10 = local_b8._s_0.Z + dVar3;
  puVar1 = &this->LocalConnectorXs[param_1].field_0x10;
  dVar14 = *(double *)puVar1;
  dVar15 = *(double *)(puVar1 + 8);
  dVar16 = this_00->X;
  dVar17 = this_00->Y;
  dVar18 = this_00->Z;
  dVar19 = this_00->W;
  dVar20 = *(double *)(this->LocalConnectorXs + param_1);
  dVar21 = *(double *)&this->LocalConnectorXs[param_1].field_0x8;
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar11 = dVar14 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar19 * dVar21 +
           dVar17 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar18 * dVar20 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ =
       dVar15 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar19 * dVar20 +
       dVar17 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar18 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + param_1) = auVar10;
  dVar13 = dVar16 * dVar20 * dVar13 + dVar19 * dVar15 + dVar17 * dVar21 * dVar6 +
           dVar18 * dVar14 * dVar7;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ =
       dVar16 * dVar21 * dVar9 + dVar19 * dVar14 + dVar17 * dVar20 * dVar3 + dVar18 * dVar15 * dVar5
  ;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[param_1].field_0x10 = auVar12;
  return;
}

// CorrectAxisAngleConstraint @ 143ba1920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::CorrectAxisAngleConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,int param_2,
          TVector<double,3> *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (2 < (uint)param_2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7ab,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = __xmm_80000000000000008000000000000000._4_4_;
  uVar4 = (uint)__xmm_80000000000000008000000000000000;
  dVar1 = *(double *)((longlong)(&param_1->ConnectorTransforms + 1) + ((longlong)param_2 + 0xd) * 8)
  ;
  dVar2 = *param_4;
  if (dVar1 < dVar2) {
    *param_4 = dVar2 - dVar1;
    return;
  }
  if (dVar2 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^
                               __xmm_80000000000000008000000000000000._4_4_,
                               SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
    *param_4 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000) -
               dVar1;
    uVar7 = *(uint *)&param_3->field_0x4 ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = *(uint *)&param_3->field_0x8 ^ _UNK_15066df78;
    uVar9 = *(uint *)&param_3->field_0xc ^ _UNK_15066df7c;
    *(uint *)param_3 = *(uint *)param_3 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)&param_3->field_0x4 = uVar7;
    *(uint *)&param_3->field_0x8 = uVar8;
    *(uint *)&param_3->field_0xc = uVar9;
    *(ulonglong *)&param_3->field_0x10 =
         CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x10 >> 0x20) ^ uVar5,
                  (uint)*(undefined8 *)&param_3->field_0x10 ^ uVar4);
    return;
  }
  *param_4 = 0.0;
  return;
}

// Deinit @ 143ba1a00

void __thiscall Chaos::FPBDJointCachedSolver::Deinit(FPBDJointCachedSolver *this)

{
  this->SolverBodies[0].Body = (FSolverBody *)0x0;
  this->SolverBodies[1].Body = (FSolverBody *)0x0;
  return;
}

// GetNetAngularImpulse @ 143ba2760

TVector<double,3> * __thiscall
Chaos::FPBDJointCachedSolver::GetNetAngularImpulse
          (FPBDJointCachedSolver *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  byte bVar11;
  TVector<double,3> *pTVar12;
  double *pdVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar15 = 0;
  puVar1 = &__return_storage_ptr__->field_0x8;
  puVar2 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)puVar2 = 0;
  if ((this->RotationConstraints).bUseSimd == '\0') {
    if ((this->RotationDrives).bUseSimd == '\0') goto LAB_143ba2886;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
LAB_143ba2813:
    fVar7 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120);
    fVar8 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x124);
    fVar9 = *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128);
    fVar17 = fVar17 + fVar7 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x50) +
             fVar8 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x60) +
             fVar9 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x70);
    fVar18 = fVar18 + fVar7 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x54) +
             fVar8 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 100) +
             fVar9 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x74);
    fVar19 = fVar19 + fVar7 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x58) +
             fVar8 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x68) +
             fVar9 * *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x78);
  }
  else {
    fVar19 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120);
    fVar7 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x124);
    fVar8 = *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128);
    fVar17 = fVar7 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x60) +
             fVar19 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x50) +
             fVar8 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x70);
    fVar18 = fVar7 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 100) +
             fVar19 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x54) +
             fVar8 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x74);
    fVar19 = fVar7 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x68) +
             fVar19 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x58) +
             fVar8 * *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x78);
    if ((this->RotationDrives).bUseSimd != '\0') goto LAB_143ba2813;
  }
  *(double *)__return_storage_ptr__ = (double)fVar17;
  *(double *)puVar2 = (double)fVar19;
  *(double *)puVar1 = (double)fVar18;
LAB_143ba2886:
  pdVar13 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xe8);
  uVar16 = uVar15;
  do {
    iVar14 = (int)uVar15;
    if ((this->RotationConstraints).bUseSimd == '\0') {
      if (iVar14 == 0) {
        bVar11 = (this->RotationConstraints).field_0x2c0;
      }
      else if (iVar14 == 1) {
        bVar11 = (byte)(this->RotationConstraints).field_0x2c0 >> 1;
      }
      else {
        if (iVar14 != 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0x8c,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TVector<double,3> *)(*pcVar6)();
            return pTVar12;
          }
          goto LAB_143ba292f;
        }
        bVar11 = (byte)(this->RotationConstraints).field_0x2c0 >> 2;
      }
      if ((bVar11 & 1) != 0) {
        dVar3 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + uVar16 + 0x210);
        dVar4 = pdVar13[-1];
        dVar5 = *pdVar13;
        *(double *)__return_storage_ptr__ = dVar3 * pdVar13[-2] + *(double *)__return_storage_ptr__;
        *(double *)puVar1 = dVar3 * dVar4 + *(double *)puVar1;
        *(double *)puVar2 = dVar3 * dVar5 + *(double *)puVar2;
      }
    }
LAB_143ba292f:
    if ((this->RotationDrives).bUseSimd == '\0') {
      if (iVar14 == 0) {
        bVar11 = (this->RotationDrives).field_0x2c0;
      }
      else if (iVar14 == 1) {
        bVar11 = (byte)(this->RotationDrives).field_0x2c0 >> 1;
      }
      else {
        if (iVar14 != 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0x8c,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TVector<double,3> *)(*pcVar6)();
            return pTVar12;
          }
          goto LAB_143ba29dc;
        }
        bVar11 = (byte)(this->RotationDrives).field_0x2c0 >> 2;
      }
      if ((bVar11 & 1) != 0) {
        dVar3 = *(double *)((longlong)&(this->RotationDrives).field0_0x0 + uVar16 + 0x210);
        dVar4 = pdVar13[0xb3];
        dVar5 = pdVar13[0xb4];
        *(double *)__return_storage_ptr__ =
             dVar3 * pdVar13[0xb2] + *(double *)__return_storage_ptr__;
        *(double *)puVar1 = dVar3 * dVar4 + *(double *)puVar1;
        *(double *)puVar2 = dVar3 * dVar5 + *(double *)puVar2;
      }
    }
LAB_143ba29dc:
    uVar15 = (ulonglong)(iVar14 + 1U);
    pdVar13 = pdVar13 + 3;
    uVar16 = uVar16 + 8;
    if (2 < (int)(iVar14 + 1U)) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// GetNetLinearImpulse @ 143ba2a20

TVector<double,3> * __thiscall
Chaos::FPBDJointCachedSolver::GetNetLinearImpulse
          (FPBDJointCachedSolver *this,TVector<double,3> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  byte bVar11;
  TVector<double,3> *pTVar12;
  double *pdVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar15 = 0;
  puVar1 = &__return_storage_ptr__->field_0x8;
  puVar2 = &__return_storage_ptr__->field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)puVar2 = 0;
  if ((this->PositionConstraints).bUseSimd == '\0') {
    if ((this->PositionDrives).bUseSimd == '\0') goto LAB_143ba2b46;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
LAB_143ba2ad3:
    fVar7 = *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x120);
    fVar8 = *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x124);
    fVar9 = *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x128);
    fVar17 = fVar17 + fVar7 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x50) +
             fVar8 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x60) +
             fVar9 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x70);
    fVar18 = fVar18 + fVar7 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x54) +
             fVar8 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 100) +
             fVar9 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x74);
    fVar19 = fVar19 + fVar7 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x58) +
             fVar8 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x68) +
             fVar9 * *(float *)((longlong)&(this->PositionDrives).field0_0x0 + 0x78);
  }
  else {
    fVar19 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120);
    fVar7 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x124);
    fVar8 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128);
    fVar17 = fVar7 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x60) +
             fVar19 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x50) +
             fVar8 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70);
    fVar18 = fVar7 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 100) +
             fVar19 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x54) +
             fVar8 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x74);
    fVar19 = fVar7 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x68) +
             fVar19 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58) +
             fVar8 * *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x78);
    if ((this->PositionDrives).bUseSimd != '\0') goto LAB_143ba2ad3;
  }
  *(double *)__return_storage_ptr__ = (double)fVar17;
  *(double *)puVar2 = (double)fVar19;
  *(double *)puVar1 = (double)fVar18;
LAB_143ba2b46:
  pdVar13 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe8);
  uVar16 = uVar15;
  do {
    iVar14 = (int)uVar15;
    if ((this->PositionConstraints).bUseSimd == '\0') {
      if (iVar14 == 0) {
        bVar11 = (this->PositionConstraints).field_0x2c0;
      }
      else if (iVar14 == 1) {
        bVar11 = (byte)(this->PositionConstraints).field_0x2c0 >> 1;
      }
      else {
        if (iVar14 != 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0x8c,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TVector<double,3> *)(*pcVar6)();
            return pTVar12;
          }
          goto LAB_143ba2bef;
        }
        bVar11 = (byte)(this->PositionConstraints).field_0x2c0 >> 2;
      }
      if ((bVar11 & 1) != 0) {
        dVar3 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + uVar16 + 0x210);
        dVar4 = pdVar13[-1];
        dVar5 = *pdVar13;
        *(double *)__return_storage_ptr__ = dVar3 * pdVar13[-2] + *(double *)__return_storage_ptr__;
        *(double *)puVar1 = dVar3 * dVar4 + *(double *)puVar1;
        *(double *)puVar2 = dVar3 * dVar5 + *(double *)puVar2;
      }
    }
LAB_143ba2bef:
    if ((this->PositionDrives).bUseSimd == '\0') {
      if (iVar14 == 0) {
        bVar11 = (this->PositionDrives).field_0x2c0;
      }
      else if (iVar14 == 1) {
        bVar11 = (byte)(this->PositionDrives).field_0x2c0 >> 1;
      }
      else {
        if (iVar14 != 2) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                              ,0x8c,L"");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            pTVar12 = (TVector<double,3> *)(*pcVar6)();
            return pTVar12;
          }
          goto LAB_143ba2c9c;
        }
        bVar11 = (byte)(this->PositionDrives).field_0x2c0 >> 2;
      }
      if ((bVar11 & 1) != 0) {
        dVar3 = *(double *)((longlong)&(this->PositionDrives).field0_0x0 + uVar16 + 0x210);
        dVar4 = pdVar13[0xb3];
        dVar5 = pdVar13[0xb4];
        *(double *)__return_storage_ptr__ =
             dVar3 * pdVar13[0xb2] + *(double *)__return_storage_ptr__;
        *(double *)puVar1 = dVar3 * dVar4 + *(double *)puVar1;
        *(double *)puVar2 = dVar3 * dVar5 + *(double *)puVar2;
      }
    }
LAB_143ba2c9c:
    uVar15 = (ulonglong)(iVar14 + 1U);
    pdVar13 = pdVar13 + 3;
    uVar16 = uVar16 + 8;
    if (2 < (int)(iVar14 + 1U)) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// Init @ 143ba2e30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::Init
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,TRigidTransform<double,3> *param_4,
          TRigidTransform<double,3> *param_5)

{
  undefined1 *puVar1;
  double dVar2;
  undefined8 uVar3;
  byte bVar4;
  EJointMotionType EVar5;
  EJointMotionType EVar6;
  EJointMotionType EVar7;
  FSolverBody *pFVar8;
  FSolverBody *pFVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298 [6];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  double local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218 [6];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  PMatrix<double,3,3> local_198;
  PMatrix<double,3,3> local_118 [2];
  
  uVar3 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)this->LocalConnectorXs = *(undefined8 *)param_4;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&this->LocalConnectorXs[0].field_0x58 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x8;
  *(undefined8 *)(this->LocalConnectorXs + 1) = *(undefined8 *)param_5;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x8 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x18 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x20 = *(undefined8 *)&param_5->field_0x20;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x28 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x38;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x30 = *(undefined8 *)&param_5->field_0x30;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x38 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x48;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x40 = *(undefined8 *)&param_5->field_0x40;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x48 = uVar3;
  uVar3 = *(undefined8 *)&param_5->field_0x58;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x50 = *(undefined8 *)&param_5->field_0x50;
  *(undefined8 *)&this->LocalConnectorXs[1].field_0x58 = uVar3;
  dVar2 = param_3->ParentInvMassScale;
  dVar10 = param_1 * __real_40ac200000000000;
  this->SolverBodies[1].State.InvMScale = 1.0;
  dVar10 = dVar10 * param_1;
  this->SolverBodies[0].State.InvMScale = (float)dVar2;
  dVar2 = param_3->ParentInvMassScale;
  this->SolverBodies[1].State.InvIScale = 1.0;
  if (__real_3ff0000000000000 <= dVar10) {
    dVar10 = __real_3ff0000000000000;
  }
  this->SolverBodies[0].State.ShockPropagationScale = 1.0;
  this->SolverBodies[1].State.ShockPropagationScale = 1.0;
  this->SolverBodies[0].State.InvIScale = (float)dVar2;
  this->PositionTolerance = dVar10 * param_2->PositionTolerance;
  dVar2 = param_2->AngleTolerance;
  this->NumActiveConstraints = -1;
  this->bIsActive = true;
  this->bIsBroken = false;
  this->bIsViolating = false;
  this->AngleTolerance = dVar10 * dVar2;
  this->bUseSimd = param_2->bUseSimd;
  this->bUsePositionBasedDrives = param_2->bUsePositionBasedDrives;
  this->SolverStiffness = 1.0;
  InitDerivedState(this);
  fVar15 = this->SolverBodies[0].State.ShockPropagationScale;
  pFVar8 = this->SolverBodies[0].Body;
  fVar18 = fVar15 * this->SolverBodies[0].State.InvMScale;
  pFVar9 = this->SolverBodies[1].Body;
  fVar16 = this->SolverBodies[1].State.ShockPropagationScale;
  fVar17 = fVar16 * this->SolverBodies[1].State.InvMScale;
  local_308 = (double)(fVar18 * (pFVar8->State).InvM);
  fVar15 = fVar15 * this->SolverBodies[0].State.InvIScale;
  fVar16 = fVar16 * this->SolverBodies[1].State.InvIScale;
  local_300 = (double)(fVar17 * (pFVar9->State).InvM);
  local_2f8 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal);
  local_2e8 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal.field_0x8);
  local_2f0 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal.field_0x4);
  uVar3 = *(undefined8 *)&(pFVar9->State).InvILocal.field_0x4;
  local_2e0 = (double)(fVar16 * *(float *)&(pFVar9->State).InvILocal);
  dVar2 = (double)(fVar16 * (float)((ulonglong)uVar3 >> 0x20));
  local_2d8._8_4_ = SUB84(dVar2,0);
  local_2d8._0_8_ = (double)(fVar16 * (float)uVar3);
  local_2d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  if (param_3->bMassConditioningEnabled != false) {
    local_2c8 = (double)(fVar16 * *(float *)&(pFVar9->State).InvILocal);
    local_2c0 = (double)(fVar16 * *(float *)&(pFVar9->State).InvILocal.field_0x4);
    local_2b8 = (double)(fVar16 * *(float *)&(pFVar9->State).InvILocal.field_0x8);
    local_2b0 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal);
    local_2a8 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal.field_0x4);
    local_2a0 = (double)(fVar15 * *(float *)&(pFVar8->State).InvILocal.field_0x8);
    param_4 = (TRigidTransform<double,3> *)(double)(fVar17 * (pFVar9->State).InvM);
    param_5 = (TRigidTransform<double,3> *)(double)(fVar18 * (pFVar8->State).InvM);
    FPBDJointUtilities::ConditionInverseMassAndInertia
              ((double *)&param_5,(double *)&param_4,(TVector<double,3> *)&local_2b0,
               (TVector<double,3> *)&local_2c8,param_2->MinParentMassRatio,param_2->MaxInertiaRatio,
               &local_308,&local_300,(TVector<double,3> *)&local_2f8,(TVector<double,3> *)&local_2e0
              );
  }
  fVar15 = __real_00800000;
  uVar11 = _UNK_15061cbc8;
  uVar3 = ___xmm_3ff00000000000000000000000000000;
  if (this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      ((this->SolverBodies[0].Body)->State).InvM <= __real_00800000) {
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
    this->InvMs[0] = local_308;
    local_238 = 0;
    uStack_230 = 0;
    local_298[4] = 0.0;
    local_258 = 0;
    local_298[1] = 0.0;
    local_250 = 0;
    local_298[2] = 0.0;
    local_268 = 0;
    local_298[3] = 0.0;
    local_260 = 0;
    local_240 = 0;
    local_228 = uVar3;
    uStack_220 = uVar11;
    local_298[0] = local_2f8;
    local_298[5] = local_2f0;
    local_248 = local_2e8;
    Utilities::ComputeWorldSpaceInertia(&local_198,this->CurrentQs,(PMatrix<double,3,3> *)local_298)
    ;
    *(undefined8 *)this->InvIs = local_198._0_8_;
    *(undefined8 *)&this->InvIs[0].field_0x8 = local_198._8_8_;
    *(undefined8 *)&this->InvIs[0].field_0x10 = local_198._16_8_;
    *(undefined8 *)&this->InvIs[0].field_0x18 = local_198._24_8_;
    *(undefined8 *)&this->InvIs[0].field_0x20 = local_198._32_8_;
    *(undefined8 *)&this->InvIs[0].field_0x28 = local_198._40_8_;
    *(undefined8 *)&this->InvIs[0].field_0x30 = local_198._48_8_;
    *(undefined8 *)&this->InvIs[0].field_0x38 = local_198._56_8_;
    *(undefined8 *)&this->InvIs[0].field_0x40 = local_198._64_8_;
    *(undefined8 *)&this->InvIs[0].field_0x48 = local_198._72_8_;
    *(undefined8 *)&this->InvIs[0].field_0x50 = local_198._80_8_;
    *(undefined8 *)&this->InvIs[0].field_0x58 = local_198._88_8_;
    *(undefined8 *)&this->InvIs[0].field_0x60 = local_198._96_8_;
    *(undefined8 *)&this->InvIs[0].field_0x68 = local_198._104_8_;
    *(undefined8 *)&this->InvIs[0].field_0x70 = local_198._112_8_;
    *(undefined8 *)&this->InvIs[0].field_0x78 = local_198._120_8_;
  }
  if (this->SolverBodies[1].State.InvMScale * this->SolverBodies[1].State.ShockPropagationScale *
      ((this->SolverBodies[1].Body)->State).InvM <= fVar15) {
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
    this->InvMs[1] = local_300;
    local_218[0] = local_2e0;
    local_218[5] = (double)local_2d8._0_8_;
    local_1c8 = local_2d8._8_8_;
    local_218[4] = 0.0;
    local_1d8 = 0;
    local_218[1] = 0.0;
    local_1d0 = 0;
    local_218[2] = 0.0;
    local_1e8 = 0;
    local_218[3] = 0.0;
    local_1e0 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = uVar3;
    uStack_1a0 = uVar11;
    Utilities::ComputeWorldSpaceInertia
              (local_118,this->CurrentQs + 1,(PMatrix<double,3,3> *)local_218);
    *(undefined8 *)(this->InvIs + 1) = local_118[0]._0_8_;
    *(undefined8 *)&this->InvIs[1].field_0x8 = local_118[0]._8_8_;
    *(undefined8 *)&this->InvIs[1].field_0x10 = local_118[0]._16_8_;
    *(undefined8 *)&this->InvIs[1].field_0x18 = local_118[0]._24_8_;
    *(undefined8 *)&this->InvIs[1].field_0x20 = local_118[0]._32_8_;
    *(undefined8 *)&this->InvIs[1].field_0x28 = local_118[0]._40_8_;
    *(undefined8 *)&this->InvIs[1].field_0x30 = local_118[0]._48_8_;
    *(undefined8 *)&this->InvIs[1].field_0x38 = local_118[0]._56_8_;
    *(undefined8 *)&this->InvIs[1].field_0x40 = local_118[0]._64_8_;
    *(undefined8 *)&this->InvIs[1].field_0x48 = local_118[0]._72_8_;
    *(undefined8 *)&this->InvIs[1].field_0x50 = local_118[0]._80_8_;
    *(undefined8 *)&this->InvIs[1].field_0x58 = local_118[0]._88_8_;
    *(undefined8 *)&this->InvIs[1].field_0x60 = local_118[0]._96_8_;
    *(undefined8 *)&this->InvIs[1].field_0x68 = local_118[0]._104_8_;
    *(undefined8 *)&this->InvIs[1].field_0x70 = local_118[0]._112_8_;
    *(undefined8 *)&this->InvIs[1].field_0x78 = local_118[0]._120_8_;
  }
  InitPositionConstraints(this,param_1,param_2,param_3,true);
  InitRotationConstraints(this,param_1,param_2,param_3,true);
  InitPositionDrives(this,param_1,param_2,param_3);
  (this->RotationDrives).bValidDatas0 = '\0';
  (this->RotationDrives).bValidDatas2 = '\0';
  (this->RotationDrives).bValidDatas1 = '\0';
  (this->RotationDrives).bUseSimd = '\0';
  if (((((param_3->bAngularTwistPositionDriveEnabled == false) &&
        (param_3->bAngularTwistVelocityDriveEnabled == false)) &&
       (param_3->bAngularSwingPositionDriveEnabled == false)) &&
      (((param_3->bAngularSwingVelocityDriveEnabled == false &&
        (param_3->bAngularSLerpPositionDriveEnabled == false)) &&
       (param_3->bAngularSLerpVelocityDriveEnabled == false)))) || (param_2->bEnableDrives == false)
     ) goto LAB_143ba360b;
  EVar5 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  EVar6 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar7 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  if (((param_3->bAngularSLerpPositionDriveEnabled != false) ||
      (param_3->bAngularSLerpVelocityDriveEnabled != false)) &&
     ((EVar5 != Locked && ((EVar6 != Locked && (EVar7 != Locked)))))) {
    bVar4 = (this->RotationDrives).field_0x2c1;
    (this->RotationDrives).field_0x2c1 = (this->bUseSimd << 2 ^ bVar4) & 4 ^ bVar4;
    InitSLerpDrive(this,param_1,param_2,param_3);
    goto LAB_143ba360b;
  }
  if (((param_3->bAngularTwistPositionDriveEnabled == false) &&
      (param_3->bAngularTwistVelocityDriveEnabled == false)) || (EVar5 == Locked)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((param_3->bAngularSwingPositionDriveEnabled == false) &&
     (param_3->bAngularSwingVelocityDriveEnabled == false)) {
    bVar14 = false;
LAB_143ba35e0:
    bVar12 = false;
  }
  else {
    bVar14 = EVar6 != Locked;
    if (EVar7 == Locked) goto LAB_143ba35e0;
    bVar12 = true;
  }
  if (((bVar13 != false) || (bVar14 != false)) || (bVar12 != false)) {
    InitSwingTwistDrives(this,param_1,param_2,param_3,bVar13,bVar14,bVar12);
  }
LAB_143ba360b:
  *(undefined8 *)this->LastDPs = 0;
  *(undefined8 *)&this->LastDPs[0].field_0x8 = 0;
  *(undefined8 *)&this->LastDPs[0].field_0x10 = 0;
  *(undefined8 *)(this->LastDPs + 1) = 0;
  *(undefined8 *)&this->LastDPs[1].field_0x8 = 0;
  *(undefined8 *)&this->LastDPs[1].field_0x10 = 0;
  *(undefined8 *)this->LastDQs = 0;
  *(undefined8 *)&this->LastDQs[0].field_0x8 = 0;
  *(undefined8 *)&this->LastDQs[0].field_0x10 = 0;
  *(undefined8 *)(this->LastDQs + 1) = 0;
  *(undefined8 *)&this->LastDQs[1].field_0x8 = 0;
  *(undefined8 *)&this->LastDQs[1].field_0x10 = 0;
  return;
}

// InitAxisPositionDrive @ 143ba3ae0

void __thiscall
Chaos::FPBDJointCachedSolver::InitAxisPositionDrive
          (FPBDJointCachedSolver *this,int param_1,TVector<double,3> *param_2,
          TVector<double,3> *param_3,TVector<double,3> *param_4,double param_5)

{
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_20 = *(double *)this->ConnectorXs - *(double *)this->CurrentPs;
  local_18 = *(double *)&this->ConnectorXs[0].field_0x8 - *(double *)&this->CurrentPs[0].field_0x8;
  local_10 = *(double *)&this->ConnectorXs[0].field_0x10 - *(double *)&this->CurrentPs[0].field_0x10
  ;
  local_30 = *(double *)&this->ConnectorXs[1].field_0x8 - *(double *)&this->CurrentPs[1].field_0x8;
  local_38 = *(double *)(this->ConnectorXs + 1) - *(double *)(this->CurrentPs + 1);
  local_28 = *(double *)&this->ConnectorXs[1].field_0x10 - *(double *)&this->CurrentPs[1].field_0x10
  ;
  FAxisConstraintDatas::UpdateDatas
            (&this->PositionDrives,param_1,param_2,
             *(double *)&param_2->field_0x8 * *(double *)&param_3->field_0x8 +
             *(double *)param_2 * *(double *)param_3 +
             *(double *)&param_2->field_0x10 * *(double *)&param_3->field_0x10,0.0,true,
             (TVector<double,3> *)&local_20,(TVector<double,3> *)&local_38,
             *(double *)&param_2->field_0x8 * *(double *)&param_4->field_0x8 +
             *(double *)param_2 * *(double *)param_4 +
             *(double *)&param_2->field_0x10 * *(double *)&param_4->field_0x10);
  InitPositionDatasMass(this,&this->PositionDrives,param_1,param_5);
  return;
}

// InitConeConstraint @ 143ba3c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitConeConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double local_res8;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48 [2];
  
  local_res8 = 0.0;
  FPBDJointUtilities::GetEllipticalConeAxisErrorLocal
            (this->ConnectorRs,this->ConnectorRs + 1,0.0,0.0,(TVector<double,3> *)&local_88,
             &local_res8);
  auVar2._0_8_ = local_88 * local_88;
  auVar2._8_8_ = 0;
  dVar3 = dStack_80 * dStack_80 + auVar2._0_8_ + local_78 * local_78;
  if (__real_3f1a36e2e0000000 <= dVar3) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = dVar3;
    auVar2 = sqrtpd(auVar2,auVar1);
    dVar3 = __real_3ff0000000000000 / auVar2._0_8_;
    local_88 = local_88 * dVar3;
    dStack_80 = dStack_80 * dVar3;
    local_78 = local_78 * dVar3;
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
  local_68._s_0.X = (double)local_48[0]._0_8_;
  local_68._s_0.Y = (double)local_48[0]._8_8_;
  local_68._s_0.Z = (double)local_48[0]._16_8_;
  InitRotationConstraintDatas
            (this,param_1,1,(TVector<double,3> *)&local_68._s_0,local_res8,param_1->SwingRestitution
             ,param_2,true);
  return;
}

// InitCylindricalPositionConstraint @ 143ba3db0

void __thiscall
Chaos::FPBDJointCachedSolver::InitCylindricalPositionConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,int param_3)

{
  int iVar1;
  FAxisConstraintDatas *this_00;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  double local_res8;
  double local_res10;
  undefined1 local_178 [24];
  undefined1 local_160 [12];
  uint uStack_154;
  double local_150;
  undefined1 local_148 [24];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_d8;
  
  FPBDJointUtilities::GetCylindricalAxesDeltas
            (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_3,
             (TVector<double,3> *)&local_100,&local_res10,(TVector<double,3> *)local_178,&local_res8
            );
  local_128 = *(double *)&this->ConnectorXs[1].field_0x8;
  local_120 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar7 = (double)local_178._16_8_ * local_f8 -
          local_f0 * (double)CONCAT44(local_178._12_4_,local_178._8_4_);
  dVar6 = local_f0 * (double)CONCAT44(local_178._4_4_,local_178._0_4_) -
          (double)local_178._16_8_ * local_100;
  uVar20 = (uint)((ulonglong)dVar6 >> 0x20);
  dVar2 = *(double *)(this->ConnectorXs + 1);
  dVar15 = (double)CONCAT44(local_178._12_4_,local_178._8_4_) * local_100 -
           (double)CONCAT44(local_178._4_4_,local_178._0_4_) * local_f8;
  local_118 = dVar2 - *(double *)this->CurrentPs;
  local_130 = dVar2 - *(double *)(this->CurrentPs + 1);
  dVar5 = (local_128 - *(double *)&this->ConnectorXs[0].field_0x8) * dVar6 +
          (dVar2 - *(double *)this->ConnectorXs) * dVar7 +
          (local_120 - *(double *)&this->ConnectorXs[0].field_0x10) * dVar15;
  local_110 = local_128 - *(double *)&this->CurrentPs[0].field_0x8;
  local_128 = local_128 - *(double *)&this->CurrentPs[1].field_0x8;
  local_108 = local_120 - *(double *)&this->CurrentPs[0].field_0x10;
  local_120 = local_120 - *(double *)&this->CurrentPs[1].field_0x10;
  SetInitConstraintVelocity(this,(TVector<double,3> *)&local_118,(TVector<double,3> *)&local_130);
  dVar2 = param_1->LinearLimit;
  iVar1 = param_3 + 1;
  dVar3 = param_1->LinearRestitution;
  uVar18 = SUB84(local_res8,0);
  uVar19 = (uint)((ulonglong)local_res8 >> 0x20);
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar11 = iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                   (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3;
  local_148._0_4_ = local_178._0_4_;
  local_148._4_4_ = local_178._4_4_;
  local_148._8_4_ = local_178._8_4_;
  local_148._12_4_ = local_178._12_4_;
  local_148._16_8_ = local_178._16_8_;
  if (local_res8 < 0.0) {
    local_148._0_4_ = local_178._0_4_ ^ uVar16;
    local_148._4_4_ = local_178._4_4_ ^ uVar17;
    uVar12 = (uint)local_178._16_8_ ^ uVar16;
    uVar13 = SUB84(local_178._16_8_,4) ^ uVar17;
    local_148._8_4_ = local_178._8_4_ ^ uVar16;
    local_148._12_4_ = local_178._12_4_ ^ uVar17;
    local_d8 = (double)CONCAT44(uVar13,uVar12);
    local_148._16_8_ = CONCAT44(uVar13,uVar12);
    uVar18 = uVar18 ^ uVar16;
    uVar19 = uVar19 ^ uVar17;
  }
  this_00 = &this->PositionConstraints;
  FAxisConstraintDatas::SetMotionType(this_00,uVar11,Limited);
  if ((2 < uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + (longlong)(int)uVar11 * 8 + 0x120)
       = dVar2;
  FAxisConstraintDatas::UpdateDatas
            (this_00,uVar11,(TVector<double,3> *)local_148,(double)CONCAT44(uVar19,uVar18),dVar3,
             true,(TVector<double,3> *)&local_118,(TVector<double,3> *)&local_130,0.0);
  dVar8 = (double)CONCAT44(local_148._4_4_,local_148._0_4_);
  dVar9 = (double)CONCAT44(local_148._12_4_,local_148._8_4_);
  dVar2 = *(double *)&(this->InitConstraintVelocity).field_0x8;
  dVar3 = *(double *)&this->InitConstraintVelocity;
  dVar14 = (double)local_148._16_8_ * *(double *)&(this->InitConstraintVelocity).field_0x10;
  if ((2 < uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + (longlong)(int)uVar11 * 8)
       = dVar9 * dVar2 + dVar8 * dVar3 + dVar14;
  InitPositionDatasMass(this,this_00,uVar11,param_2);
  dVar2 = param_1->LinearLimit;
  iVar1 = param_3 + 2;
  dVar3 = param_1->LinearRestitution;
  uVar11 = iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                   (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3;
  if (0.0 <= dVar5) {
    local_160._8_4_ = SUB84(dVar6,0);
    local_160._0_8_ = dVar7;
    uStack_154 = uVar20;
  }
  else {
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar17,SUB84(dVar15,0) ^ uVar16);
    local_160._4_4_ = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar17;
    local_160._0_4_ = SUB84(dVar7,0) ^ uVar16;
    local_160._8_4_ = SUB84(dVar6,0) ^ uVar16;
    uStack_154 = uVar20 ^ uVar17;
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar17,SUB84(dVar5,0) ^ uVar16);
  }
  local_150 = dVar15;
  local_d8 = dVar15;
  FAxisConstraintDatas::SetMotionType(this_00,uVar11,Limited);
  if ((2 < uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + (longlong)(int)uVar11 * 8 + 0x120)
       = dVar2;
  FAxisConstraintDatas::UpdateDatas
            (this_00,uVar11,(TVector<double,3> *)local_160,dVar5,dVar3,true,
             (TVector<double,3> *)&local_118,(TVector<double,3> *)&local_130,0.0);
  dVar3 = stack0xfffffffffffffea8 * *(double *)&(this->InitConstraintVelocity).field_0x8;
  dVar2 = (double)local_160._0_8_ * *(double *)&this->InitConstraintVelocity;
  dVar15 = local_150 * *(double *)&(this->InitConstraintVelocity).field_0x10;
  if ((2 < uVar11) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + (longlong)(int)uVar11 * 8)
       = dVar3 + dVar2 + dVar15;
  InitPositionDatasMass(this,this_00,uVar11,param_2);
  return;
}

// InitDerivedState @ 143ba4590

void __thiscall Chaos::FPBDJointCachedSolver::InitDerivedState(FPBDJointCachedSolver *this)

{
  TRotation<double,3> *pTVar1;
  TRotation<double,3> *pTVar2;
  double dVar3;
  FSolverBody *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  __m128 _Var13;
  __m128 _Var14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double,3> local_138;
  TVector<double,3> local_120;
  TQuat<double> local_108;
  TQuat<double> local_e8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->SolverBodies[0].Body;
  dVar3 = *(double *)&(pFVar4->State).X.field_0x10;
  dVar22 = *(double *)&(pFVar4->State).X;
  dVar6 = *(double *)&(pFVar4->State).X.field_0x8;
  if ((pFVar4 == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->SolverBodies[0].Body;
  local_178._s_0.X = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x20;
  local_178._s_0.Y = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x28;
  local_108.X = *(double *)&(pFVar4->State).R;
  local_108.Y = *(double *)&(pFVar4->State).R.field_0x8;
  local_108.Z = *(double *)&(pFVar4->State).R.field_0x10;
  local_108.W = *(double *)&(pFVar4->State).R.field_0x18;
  local_178._s_0.Z = (double)*(undefined8 *)&this->LocalConnectorXs[0].field_0x30;
  local_c8 = local_178._s_0.X;
  dStack_c0 = local_178._s_0.Y;
  local_b8 = local_178._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&local_108,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_178._s_0);
  *(double *)this->InitConnectorXs = local_1a8._s_0.X + dVar22;
  *(double *)&this->InitConnectorXs[0].field_0x8 = local_1a8._s_0.Y + dVar6;
  *(double *)&this->InitConnectorXs[0].field_0x10 = local_1a8._s_0.Z + dVar3;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->SolverBodies[1].Body;
  dVar3 = *(double *)&(pFVar4->State).X.field_0x10;
  dVar22 = *(double *)&(pFVar4->State).X;
  dVar6 = *(double *)&(pFVar4->State).X.field_0x8;
  if ((pFVar4 == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = this->SolverBodies[1].Body;
  local_158._s_0.X = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x20;
  local_158._s_0.Y = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x28;
  local_e8.X = *(double *)&(pFVar4->State).R;
  local_e8.Y = *(double *)&(pFVar4->State).R.field_0x8;
  local_e8.Z = *(double *)&(pFVar4->State).R.field_0x10;
  local_e8.W = *(double *)&(pFVar4->State).R.field_0x18;
  local_158._s_0.Z = (double)*(undefined8 *)&this->LocalConnectorXs[1].field_0x30;
  local_b0 = local_158._s_0.X;
  dStack_a8 = local_158._s_0.Y;
  local_a0 = local_158._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            (&local_e8,(TVector<double> *)&local_190._s_0,(TVector<double> *)&local_158._s_0);
  *(double *)(this->InitConnectorXs + 1) = local_190._s_0.X + dVar22;
  *(double *)&this->InitConnectorXs[1].field_0x8 = local_190._s_0.Y + dVar6;
  *(double *)&this->InitConnectorXs[1].field_0x10 = local_190._s_0.Z + dVar3;
  if ((this->SolverBodies[0].Body == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar23 = *(double *)&this->LocalConnectorXs[0].field_0x10;
  dVar24 = *(double *)&this->LocalConnectorXs[0].field_0x18;
  pTVar2 = this->InitConnectorRs;
  dVar25 = *(double *)this->LocalConnectorXs;
  dVar26 = *(double *)&this->LocalConnectorXs[0].field_0x8;
  pFVar4 = this->SolverBodies[0].Body;
  local_98 = *(double *)&(pFVar4->State).R;
  dStack_90 = *(double *)&(pFVar4->State).R.field_0x8;
  local_88 = *(double *)&(pFVar4->State).R.field_0x10;
  dStack_80 = *(double *)&(pFVar4->State).R.field_0x18;
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar17 = local_98 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar25 * dStack_80 +
           dStack_90 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_88 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar18 = local_98 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar26 * dStack_80 +
           dStack_90 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_88 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar32 = SUB84(dVar18,0);
  uVar33 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar16._8_4_ = uVar32;
  auVar16._0_8_ = dVar17;
  auVar16._12_4_ = uVar33;
  *(undefined1 (*) [16])pTVar2 = auVar16;
  dVar3 = local_98 * dVar26 * dVar3 + dVar23 * dStack_80 + dStack_90 * dVar25 * dVar22 +
          local_88 * dVar24 * dVar6;
  dVar22 = local_98 * dVar25 * dVar20 + dVar24 * dStack_80 + dStack_90 * dVar26 * dVar7 +
           local_88 * dVar23 * dVar8;
  uVar36 = SUB84(dVar22,0);
  uVar37 = (undefined4)((ulonglong)dVar22 >> 0x20);
  local_78._8_4_ = uVar32;
  local_78._0_8_ = dVar17;
  local_78._12_4_ = uVar33;
  auVar21._8_4_ = uVar36;
  auVar21._0_8_ = dVar3;
  auVar21._12_4_ = uVar37;
  *(undefined1 (*) [16])&this->InitConnectorRs[0].field_0x10 = auVar21;
  local_68._8_4_ = uVar36;
  local_68._0_8_ = dVar3;
  local_68._12_4_ = uVar37;
  if ((this->SolverBodies[1].Body == (FSolverBody *)0x0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L""), bVar31)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  dVar30 = __real_3ff0000000000000;
  dVar18 = *(double *)(this->LocalConnectorXs + 1);
  dVar23 = *(double *)&this->LocalConnectorXs[1].field_0x8;
  dVar24 = *(double *)&this->LocalConnectorXs[1].field_0x10;
  dVar25 = *(double *)&this->LocalConnectorXs[1].field_0x18;
  pFVar4 = this->SolverBodies[1].Body;
  dVar26 = *(double *)&(pFVar4->State).R;
  dVar27 = *(double *)&(pFVar4->State).R.field_0x8;
  dVar28 = *(double *)&(pFVar4->State).R.field_0x10;
  dVar29 = *(double *)&(pFVar4->State).R.field_0x18;
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar20 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  uVar34 = SUB84(__real_3ff0000000000000,0);
  uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar17 = dVar26 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar29 * dVar23 +
           dVar27 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar28 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar36 = (undefined4)__real_bff0000000000000;
  uVar37 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  auVar15._8_4_ = SUB84(dVar17,0);
  auVar15._0_8_ =
       dVar26 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar29 * dVar18 +
       dVar27 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar28 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(this->InitConnectorRs + 1) = auVar15;
  dVar20 = dVar26 * dVar18 * dVar20 + dVar29 * dVar25 + dVar27 * dVar23 * dVar7 +
           dVar28 * dVar24 * dVar8;
  auVar19._8_4_ = SUB84(dVar20,0);
  auVar19._0_8_ =
       dVar26 * dVar23 * dVar3 + dVar29 * dVar24 + dVar27 * dVar18 * dVar22 +
       dVar28 * dVar25 * dVar6;
  auVar19._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])&this->InitConnectorRs[1].field_0x10 = auVar19;
  uVar32 = uVar36;
  uVar33 = uVar37;
  if (0.0 <= *(double *)&this->InitConnectorRs[0].field_0x18 *
             *(double *)&this->InitConnectorRs[1].field_0x18 +
             *(double *)&this->InitConnectorRs[0].field_0x10 *
             *(double *)&this->InitConnectorRs[1].field_0x10 +
             *(double *)&this->InitConnectorRs[0].field_0x8 *
             *(double *)&this->InitConnectorRs[1].field_0x8 +
             *(double *)(this->InitConnectorRs + 1) * *(double *)pTVar2) {
    uVar32 = uVar34;
    uVar33 = uVar35;
  }
  dVar3 = *(double *)&this->InitConnectorRs[1].field_0x8 * (double)CONCAT44(uVar33,uVar32);
  auVar9._8_4_ = SUB84(dVar3,0);
  auVar9._0_8_ = *(double *)(this->InitConnectorRs + 1) * (double)CONCAT44(uVar33,uVar32);
  auVar9._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->InitConnectorRs + 1) = auVar9;
  dVar3 = (double)CONCAT44(uVar33,uVar32) * *(double *)&this->InitConnectorRs[1].field_0x18;
  auVar10._8_4_ = SUB84(dVar3,0);
  auVar10._0_8_ = (double)CONCAT44(uVar33,uVar32) * *(double *)&this->InitConnectorRs[1].field_0x10;
  auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this->InitConnectorRs[1].field_0x10 = auVar10;
  ComputeBodyState(this,0);
  ComputeBodyState(this,1);
  pTVar1 = this->ConnectorRs + 1;
  if (0.0 <= *(double *)&this->ConnectorRs[1].field_0x18 *
             *(double *)&this->ConnectorRs[0].field_0x18 +
             *(double *)&this->ConnectorRs[0].field_0x10 *
             *(double *)&this->ConnectorRs[1].field_0x10 +
             *(double *)&this->ConnectorRs[1].field_0x8 * *(double *)&this->ConnectorRs[0].field_0x8
             + *(double *)this->ConnectorRs * *(double *)pTVar1) {
    uVar36 = uVar34;
    uVar37 = uVar35;
  }
  dVar3 = (double)CONCAT44(uVar37,uVar36) * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar11._8_4_ = SUB84(dVar3,0);
  auVar11._0_8_ = (double)CONCAT44(uVar37,uVar36) * *(double *)pTVar1;
  auVar11._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])pTVar1 = auVar11;
  dVar3 = (double)CONCAT44(uVar37,uVar36) * *(double *)&this->ConnectorRs[1].field_0x18;
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = (double)CONCAT44(uVar37,uVar36) * *(double *)&this->ConnectorRs[1].field_0x10;
  auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar12;
  TRotation<double,3>::CalculateAngularVelocity1(&local_138,pTVar2,this->ConnectorRs,dVar30);
  *(undefined8 *)this->ConnectorWDts = local_138._0_8_;
  *(undefined8 *)&this->ConnectorWDts[0].field_0x8 = local_138._8_8_;
  *(undefined8 *)&this->ConnectorWDts[0].field_0x10 = local_138._16_8_;
  TRotation<double,3>::CalculateAngularVelocity1(&local_120,this->InitConnectorRs + 1,pTVar1,dVar30)
  ;
  *(undefined8 *)(this->ConnectorWDts + 1) = local_120._0_8_;
  *(undefined8 *)&this->ConnectorWDts[1].field_0x8 = local_120._8_8_;
  *(undefined8 *)&this->ConnectorWDts[1].field_0x10 = local_120._16_8_;
  _Var13.m128_f32[1] = (float)*(double *)&this->ConnectorWDts[0].field_0x8;
  _Var13.m128_f32[0] = (float)*(double *)this->ConnectorWDts;
  _Var13.m128_f32[2] = (float)*(double *)&this->ConnectorWDts[0].field_0x10;
  _Var13.m128_f32[3] = 0.0;
  this->ConnectorWDtsSimd[0] = _Var13;
  _Var14.m128_f32[1] = (float)*(double *)&this->ConnectorWDts[1].field_0x8;
  _Var14.m128_f32[0] = (float)*(double *)(this->ConnectorWDts + 1);
  _Var14.m128_f32[2] = (float)*(double *)&this->ConnectorWDts[1].field_0x10;
  _Var14.m128_f32[3] = 0.0;
  this->ConnectorWDtsSimd[1] = _Var14;
  return;
}

// InitDualConeSwingConstraint @ 143ba55f0

void __thiscall
Chaos::FPBDJointCachedSolver::InitDualConeSwingConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,
          EJointAngularConstraintIndex param_3)

{
  double local_res8;
  TVector<double,3> local_38 [2];
  
  FPBDJointUtilities::GetDualConeSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_3,local_38,&local_res8);
  InitRotationConstraintDatas
            (this,param_1,param_3,local_38,local_res8,param_1->SwingRestitution,param_2,true);
  return;
}

// InitLockedPositionConstraint @ 143ba5690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FPBDJointCachedSolver::InitLockedPositionConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,
          TVector<Chaos::EJointMotionType,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double adStackY_6f8 [163];
  undefined8 uStackY_1e0;
  undefined1 auStackY_1d8 [32];
  double local_188;
  double local_180;
  double local_178;
  TVector<double,3> local_170;
  double local_158 [3];
  undefined1 local_140 [16];
  double local_130;
  TMatrix<double> local_128;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  dVar1 = *(double *)(this->ConnectorXs + 1);
  dVar2 = *(double *)&this->ConnectorXs[1].field_0x10;
  local_140._0_8_ = dVar1 - *(double *)(this->CurrentPs + 1);
  dVar3 = *(double *)&this->ConnectorXs[1].field_0x8;
  dVar6 = dVar2 - *(double *)&this->CurrentPs[0].field_0x10;
  dVar5 = dVar3 - *(double *)&this->CurrentPs[0].field_0x8;
  dVar4 = dVar1 - *(double *)this->CurrentPs;
  dVar1 = dVar1 - *(double *)this->ConnectorXs;
  local_140._8_8_ = dVar3 - *(double *)&this->CurrentPs[1].field_0x8;
  dVar3 = dVar3 - *(double *)&this->ConnectorXs[0].field_0x8;
  local_130 = dVar2 - *(double *)&this->CurrentPs[1].field_0x10;
  dVar2 = dVar2 - *(double *)&this->ConnectorXs[0].field_0x10;
  local_128.M[0][0] = 0.0;
  local_128.M[0][1] = 0.0;
  local_128.M[0][2] = 0.0;
  local_128.M[0][3] = 0.0;
  local_128.M[1][0] = 0.0;
  local_128.M[1][1] = 0.0;
  local_128.M[1][2] = 0.0;
  local_128.M[1][3] = 0.0;
  local_128.M[2][0] = 0.0;
  local_128.M[2][1] = 0.0;
  local_128.M[2][2] = 0.0;
  local_128.M[2][3] = 0.0;
  local_128.M[3][0] = 0.0;
  local_128.M[3][1] = 0.0;
  local_128.M[3][2] = 0.0;
  local_128.M[3][3] = 0.0;
  uStackY_1e0 = 0x143ba57c3;
  local_188 = dVar4;
  local_180 = dVar5;
  local_178 = dVar6;
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)this->ConnectorRs,&local_128);
  local_158[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_158[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((param_3->field0_0x0)._s_0.X == Locked) {
    local_158[0] = dVar1 * local_128.M[0][0] + local_128.M[0][1] * dVar3 + local_128.M[0][2] * dVar2
    ;
    dVar4 = dVar4 - local_128.M[0][0] * local_158[0];
    dVar5 = dVar5 - local_128.M[0][1] * local_158[0];
    dVar6 = dVar6 - local_128.M[0][2] * local_158[0];
    local_188 = dVar4;
    local_180 = dVar5;
    local_178 = dVar6;
  }
  if ((param_3->field0_0x0)._s_0.Y == Locked) {
    local_158[1] = dVar1 * local_128.M[1][0] + local_128.M[1][1] * dVar3 + local_128.M[1][2] * dVar2
    ;
    dVar4 = dVar4 - local_128.M[1][0] * local_158[1];
    dVar5 = dVar5 - local_128.M[1][1] * local_158[1];
    dVar6 = dVar6 - local_128.M[1][2] * local_158[1];
    local_188 = dVar4;
    local_180 = dVar5;
    local_178 = dVar6;
  }
  if ((param_3->field0_0x0)._s_0.Z == Locked) {
    local_158[2] = dVar1 * local_128.M[2][0] + local_128.M[2][1] * dVar3 + local_128.M[2][2] * dVar2
    ;
    local_188 = dVar4 - local_128.M[2][0] * local_158[2];
    local_180 = dVar5 - local_128.M[2][1] * local_158[2];
    local_178 = dVar6 - local_128.M[2][2] * local_158[2];
  }
  uStackY_1e0 = 0x143ba5920;
  SetInitConstraintVelocity(this,(TVector<double,3> *)&local_188,(TVector<double,3> *)local_140);
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pdVar8 = local_128.M[0] + 1;
  iVar7 = 0;
  lVar9 = 0x5a0;
  do {
    if (*(int *)&(param_3->field0_0x0)._s_0 == 2) {
      dVar1 = *(double *)((longlong)adStackY_6f8 + lVar9);
      uVar16 = SUB84(dVar1,0);
      uVar17 = (uint)((ulonglong)dVar1 >> 0x20);
      uVar12 = SUB84((*(double (*) [4])(pdVar8 + -1))[0],0);
      uVar13 = (uint)((ulonglong)(*(double (*) [4])(pdVar8 + -1))[0] >> 0x20);
      uVar10 = SUB84(*pdVar8,0);
      uVar11 = (uint)((ulonglong)*pdVar8 >> 0x20);
      uVar14 = SUB84(pdVar8[1],0);
      uVar15 = (uint)((ulonglong)pdVar8[1] >> 0x20);
      if (dVar1 < 0.0) {
        uVar12 = uVar12 ^ uVar18;
        uVar13 = uVar13 ^ uVar19;
        uVar10 = uVar10 ^ uVar18;
        uVar11 = uVar11 ^ uVar19;
        uVar14 = uVar14 ^ uVar18;
        uVar15 = uVar15 ^ uVar19;
        uVar16 = uVar16 ^ uVar18;
        uVar17 = uVar17 ^ uVar19;
      }
      local_170._20_4_ = uVar15;
      local_170._16_4_ = uVar14;
      local_170._12_4_ = uVar11;
      local_170._8_4_ = uVar10;
      local_170._4_4_ = uVar13;
      local_170._0_4_ = uVar12;
      uStackY_1e0 = 0x143ba59a7;
      FAxisConstraintDatas::SetMotionType(&this->PositionConstraints,iVar7,Locked);
      *(undefined8 *)((longlong)&this->SolverBodies[0].Body + lVar9) = 0;
      uStackY_1e0 = 0x143ba59e9;
      FAxisConstraintDatas::UpdateDatas
                (&this->PositionConstraints,iVar7,&local_170,(double)CONCAT44(uVar17,uVar16),0.0,
                 false,(TVector<double,3> *)&local_188,(TVector<double,3> *)local_140,0.0);
      *(double *)((longlong)this + lVar9 + -0x160) =
           (double)CONCAT44(uVar11,uVar10) * *(double *)&(this->InitConstraintVelocity).field_0x8 +
           (double)CONCAT44(uVar13,uVar12) * *(double *)&this->InitConstraintVelocity +
           (double)CONCAT44(uVar15,uVar14) * *(double *)&(this->InitConstraintVelocity).field_0x10;
      uStackY_1e0 = 0x143ba5a31;
      InitPositionDatasMass(this,&this->PositionConstraints,iVar7,param_2);
    }
    iVar7 = iVar7 + 1;
    param_3 = (TVector<Chaos::EJointMotionType,3> *)((longlong)&param_3->field0_0x0 + 4);
    pdVar8 = pdVar8 + 4;
    lVar9 = lVar9 + 8;
  } while (iVar7 < 3);
  return;
}

// InitLockedPositionConstraintSimd @ 143ba5ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointCachedSolver::InitLockedPositionConstraintSimd
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,
          TVector<Chaos::EJointMotionType,3> *param_3)

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
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  __m128 _Var13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  float *pfVar24;
  float *pfVar25;
  longlong lVar26;
  double *pdVar27;
  __m128 *p_Var28;
  __m128 *p_Var29;
  uint uVar30;
  uint uVar31;
  double dVar32;
  double dVar33;
  uint uVar34;
  uint uVar35;
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
  undefined1 auStack_2b8 [32];
  float local_298 [4];
  undefined1 local_288 [12];
  double local_278;
  double local_270 [35];
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  dVar1 = *(double *)(this->ConnectorXs + 1);
  dVar2 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar3 = *(double *)&this->ConnectorXs[1].field_0x8;
  local_278 = dVar1 - *(double *)(this->CurrentPs + 1);
  dVar17 = dVar1 - *(double *)this->CurrentPs;
  dVar4 = *(double *)this->ConnectorXs;
  dVar18 = dVar3 - *(double *)&this->CurrentPs[0].field_0x8;
  dVar19 = dVar2 - *(double *)&this->CurrentPs[0].field_0x10;
  dVar5 = *(double *)&this->CurrentPs[1].field_0x10;
  dVar6 = *(double *)&this->ConnectorXs[0].field_0x10;
  dVar7 = *(double *)&this->CurrentPs[1].field_0x8;
  dVar8 = *(double *)&this->ConnectorXs[0].field_0x8;
  local_158.M[0][0] = 0.0;
  local_158.M[0][1] = 0.0;
  local_158.M[0][2] = 0.0;
  local_158.M[0][3] = 0.0;
  local_158.M[1][0] = 0.0;
  local_158.M[1][1] = 0.0;
  local_158.M[1][2] = 0.0;
  local_158.M[1][3] = 0.0;
  local_158.M[2][0] = 0.0;
  local_158.M[2][1] = 0.0;
  local_158.M[2][2] = 0.0;
  local_158.M[2][3] = 0.0;
  local_158.M[3][0] = 0.0;
  local_158.M[3][1] = 0.0;
  local_158.M[3][2] = 0.0;
  local_158.M[3][3] = 0.0;
  UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)this->ConnectorRs,&local_158);
  p_Var28 = (this->PositionConstraints).field0_0x0.Simd.ConstraintAxis;
  lVar26 = 0;
  pdVar27 = local_158.M[0] + 1;
  uVar34 = (uint)__xmm_80000000000000008000000000000000;
  uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_270[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_270[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_270[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_298[0] = (float)(this->InvMs[1] + this->InvMs[0]);
  local_298[1] = local_298[0];
  local_298[2] = local_298[0];
  p_Var29 = p_Var28;
  do {
    if ((param_3->field0_0x0).XYZ[lVar26] != Locked) {
      bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("LinearMotion[ConstraintIndex] == EJointMotionType::Locked",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0x255,L"");
      if (bVar23) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    dVar33 = (*(double (*) [4])(pdVar27 + -1))[0];
    dVar9 = *pdVar27;
    uVar30 = SUB84(dVar9,0);
    uVar31 = (uint)((ulonglong)dVar9 >> 0x20);
    dVar32 = pdVar27[1];
    dVar12 = dVar33 * (dVar1 - dVar4) + dVar9 * (dVar3 - dVar8) + dVar32 * (dVar2 - dVar6);
    local_270[lVar26] = dVar12;
    dVar17 = dVar17 - dVar33 * dVar12;
    dVar18 = dVar18 - dVar9 * dVar12;
    dVar19 = dVar19 - dVar32 * dVar12;
    if (dVar12 < 0.0) {
      dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar35,SUB84(dVar12,0) ^ uVar34)
      ;
      uVar30 = uVar30 ^ uVar34;
      uVar31 = uVar31 ^ uVar35;
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) ^ uVar35,SUB84(dVar32,0) ^ uVar34)
      ;
      dVar33 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) ^ uVar35,SUB84(dVar33,0) ^ uVar34)
      ;
    }
    pdVar27 = pdVar27 + 4;
    *(float *)(local_288 + lVar26 * 4) = (float)dVar12;
    lVar26 = lVar26 + 1;
    _Var13.m128_f32[1] = (float)(double)CONCAT44(uVar31,uVar30);
    _Var13.m128_f32[0] = (float)dVar33;
    _Var13.m128_f32[2] = (float)dVar32;
    _Var13.m128_f32[3] = 0.0;
    *p_Var29 = _Var13;
    p_Var29 = p_Var29 + 1;
  } while (lVar26 < 3);
  pfVar24 = local_298;
  pfVar25 = (float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc0);
  auVar14._12_4_ = 0;
  auVar14._0_12_ = local_288;
  *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x110) = auVar14;
  lVar26 = 3;
  auVar15._4_4_ = (float)dVar18;
  auVar15._0_4_ = (float)dVar17;
  auVar15._8_4_ = (float)dVar19;
  auVar15._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x30) = auVar15;
  auVar16._4_4_ = (float)(dVar3 - dVar7);
  auVar16._0_4_ = (float)local_278;
  auVar16._8_4_ = (float)(dVar2 - dVar5);
  auVar16._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0x40) = auVar16;
  do {
    fVar36 = p_Var28->m128_f32[0];
    fVar37 = *(float *)((longlong)p_Var28 + 4);
    fVar38 = *(float *)((longlong)p_Var28 + 8);
    fVar39 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x30);
    fVar40 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x34);
    fVar41 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x38);
    fVar20 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x40);
    fVar21 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x44);
    fVar22 = *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x48);
    fVar45 = fVar39 * fVar37 - fVar40 * fVar36;
    fVar46 = fVar40 * fVar38 - fVar41 * fVar37;
    fVar47 = fVar41 * fVar36 - fVar39 * fVar38;
    dVar1 = *(double *)&this->InvIs[1].field_0x50;
    dVar2 = *(double *)&this->InvIs[1].field_0x20;
    dVar3 = *(double *)&this->InvIs[1].field_0x28;
    dVar4 = *(double *)&this->InvIs[1].field_0x30;
    dVar5 = *(double *)(this->InvIs + 1);
    dVar6 = *(double *)&this->InvIs[1].field_0x8;
    dVar7 = *(double *)&this->InvIs[1].field_0x10;
    fVar42 = (float)*(double *)&this->InvIs[0].field_0x40 * fVar45 +
             (float)*(double *)&this->InvIs[0].field_0x20 * fVar47 +
             (float)*(double *)this->InvIs * fVar46;
    fVar43 = (float)*(double *)&this->InvIs[0].field_0x48 * fVar45 +
             (float)*(double *)&this->InvIs[0].field_0x28 * fVar47 +
             (float)*(double *)&this->InvIs[0].field_0x8 * fVar46;
    fVar44 = (float)*(double *)&this->InvIs[0].field_0x50 * fVar45 +
             (float)*(double *)&this->InvIs[0].field_0x30 * fVar47 +
             (float)*(double *)&this->InvIs[0].field_0x10 * fVar46;
    dVar8 = *(double *)&this->InvIs[1].field_0x40;
    dVar17 = *(double *)&this->InvIs[1].field_0x48;
    fVar39 = fVar20 * fVar37 - fVar21 * fVar36;
    fVar40 = fVar21 * fVar38 - fVar22 * fVar37;
    fVar41 = fVar22 * fVar36 - fVar20 * fVar38;
    pfVar25[-4] = fVar42;
    pfVar25[-3] = fVar43;
    pfVar25[-2] = fVar44;
    pfVar25[-1] = fVar45 * 0.0 + fVar47 * 0.0 + fVar46 * 0.0;
    p_Var28 = p_Var28 + 1;
    fVar36 = (float)dVar8 * fVar39 + (float)dVar2 * fVar41 + (float)dVar5 * fVar40;
    fVar37 = (float)dVar17 * fVar39 + (float)dVar3 * fVar41 + (float)dVar6 * fVar40;
    fVar38 = (float)dVar1 * fVar39 + (float)dVar4 * fVar41 + (float)dVar7 * fVar40;
    *pfVar25 = 0.0 - fVar36;
    pfVar25[1] = 0.0 - fVar37;
    pfVar25[2] = 0.0 - fVar38;
    pfVar25[3] = 0.0 - (fVar39 * 0.0 + fVar41 * 0.0 + fVar40 * 0.0);
    pfVar25 = pfVar25 + 8;
    *pfVar24 = fVar37 * fVar41 + fVar36 * fVar40 + fVar38 * fVar39 +
               fVar43 * fVar47 + fVar42 * fVar46 + fVar44 * fVar45 + *pfVar24;
    pfVar24 = pfVar24 + 1;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  auVar11._4_4_ = local_298[1];
  auVar11._0_4_ = local_298[0];
  auVar11._8_4_ = local_298[2];
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)&(this->PositionConstraints).field0_0x0 + 0xa0) = auVar11;
  return;
}

// InitLockedRotationConstraints @ 143ba60b0

void __thiscall
Chaos::FPBDJointCachedSolver::InitLockedRotationConstraints
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,bool param_3,
          bool param_4,bool param_5)

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
  TVector<double,3> local_b8;
  TVector<double,3> local_a0;
  TVector<double,3> local_88 [5];
  
  FPBDJointUtilities::GetLockedRotationAxes
            (this->ConnectorRs,this->ConnectorRs + 1,&local_b8,local_88,&local_a0);
  dVar11 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar12 = *(double *)&this->ConnectorRs[1].field_0x18;
  dVar13 = *(double *)(this->ConnectorRs + 1);
  dVar14 = *(double *)&this->ConnectorRs[1].field_0x8;
  dVar7 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
          *(double *)this->ConnectorRs;
  dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
          *(double *)&this->ConnectorRs[0].field_0x8;
  dVar9 = *(double *)&this->ConnectorRs[0].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar10 = *(double *)&this->ConnectorRs[0].field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  if (param_3) {
    InitRotationConstraintDatas
              (this,param_1,0,&local_b8,
               dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar10 * dVar13 +
               dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar9 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0],0.0,
               param_2,false);
  }
  if (param_4) {
    InitRotationConstraintDatas
              (this,param_1,2,&local_a0,
               dVar7 * dVar14 * dVar1 + dVar10 * dVar11 + dVar8 * dVar13 * dVar3 +
               dVar9 * dVar12 * dVar2,0.0,param_2,false);
  }
  if (param_5) {
    InitRotationConstraintDatas
              (this,param_1,1,local_88,
               dVar7 * dVar11 * dVar4 + dVar10 * dVar14 + dVar8 * dVar12 * dVar5 +
               dVar9 * dVar13 * dVar6,0.0,param_2,false);
  }
  return;
}

// InitPlanarPositionConstraint @ 143ba62e0

void __thiscall
Chaos::FPBDJointCachedSolver::InitPlanarPositionConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double local_res8;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  
  FPBDJointUtilities::GetPlanarAxisDelta
            (this->ConnectorRs,this->ConnectorXs,this->ConnectorXs + 1,param_3,
             (TVector<double,3> *)local_c8,&local_res8);
  local_88 = *(double *)&this->ConnectorXs[1].field_0x10;
  local_90 = *(double *)&this->ConnectorXs[1].field_0x8;
  local_80 = *(double *)(this->ConnectorXs + 1) - *(double *)this->CurrentPs;
  local_98 = *(double *)(this->ConnectorXs + 1) - *(double *)(this->CurrentPs + 1);
  local_78 = local_90 - *(double *)&this->CurrentPs[0].field_0x8;
  local_90 = local_90 - *(double *)&this->CurrentPs[1].field_0x8;
  local_70 = local_88 - *(double *)&this->CurrentPs[0].field_0x10;
  local_88 = local_88 - *(double *)&this->CurrentPs[1].field_0x10;
  SetInitConstraintVelocity(this,(TVector<double,3> *)&local_80,(TVector<double,3> *)&local_98);
  uVar10 = SUB84(local_res8,0);
  uVar11 = (uint)((ulonglong)local_res8 >> 0x20);
  dVar1 = param_1->LinearLimit;
  dVar2 = param_1->LinearRestitution;
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_b0._0_4_ = local_c8._0_4_;
  local_b0._4_4_ = local_c8._4_4_;
  local_b0._8_4_ = local_c8._8_4_;
  local_b0._12_4_ = local_c8._12_4_;
  local_b0._16_8_ = local_c8._16_8_;
  if (local_res8 < 0.0) {
    local_b0._0_4_ = local_c8._0_4_ ^ uVar8;
    local_b0._4_4_ = local_c8._4_4_ ^ uVar9;
    local_b0._8_4_ = local_c8._8_4_ ^ uVar8;
    local_b0._12_4_ = local_c8._12_4_ ^ uVar9;
    local_b0._16_8_ = CONCAT44(SUB84(local_c8._16_8_,4) ^ uVar9,(uint)local_c8._16_8_ ^ uVar8);
    uVar10 = uVar10 ^ uVar8;
    uVar11 = uVar11 ^ uVar9;
  }
  FAxisConstraintDatas::SetMotionType(&this->PositionConstraints,param_3,Limited);
  if ((2 < (uint)param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + (longlong)param_3 * 8 + 0x120) =
       dVar1;
  FAxisConstraintDatas::UpdateDatas
            (&this->PositionConstraints,param_3,(TVector<double,3> *)local_b0,
             (double)CONCAT44(uVar11,uVar10),dVar2,true,(TVector<double,3> *)&local_80,
             (TVector<double,3> *)&local_98,0.0);
  dVar4 = (double)CONCAT44(local_b0._4_4_,local_b0._0_4_);
  dVar5 = (double)CONCAT44(local_b0._12_4_,local_b0._8_4_);
  dVar1 = *(double *)&(this->InitConstraintVelocity).field_0x8;
  dVar2 = *(double *)&this->InitConstraintVelocity;
  dVar7 = (double)local_b0._16_8_ * *(double *)&(this->InitConstraintVelocity).field_0x10;
  if ((2 < (uint)param_3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + (longlong)param_3 * 8) =
       dVar5 * dVar1 + dVar4 * dVar2 + dVar7;
  InitPositionDatasMass(this,&this->PositionConstraints,param_3,param_2);
  return;
}

// InitPositionConstraintDatas @ 143ba6560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitPositionConstraintDatas
          (FPBDJointCachedSolver *this,int param_1,TVector<double,3> *param_2,double *param_3,
          double param_4,double param_5,double param_6,EJointMotionType param_7,
          TVector<double,3> *param_8,TVector<double,3> *param_9)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_58 [40];
  double local_30;
  
  local_58._0_4_ = *(undefined4 *)param_2;
  local_58._4_4_ = *(undefined4 *)&param_2->field_0x4;
  local_58._8_4_ = *(undefined4 *)&param_2->field_0x8;
  local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
  lVar8 = (longlong)param_1;
  dVar1 = *param_3;
  uVar9 = SUB84(dVar1,0);
  uVar10 = (uint)((ulonglong)dVar1 >> 0x20);
  if (0.0 <= dVar1) {
    local_58._16_8_ = *(undefined8 *)&param_2->field_0x10;
  }
  else {
    local_58._0_4_ = local_58._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_58._4_4_ = local_58._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_58._8_4_ = local_58._8_4_ ^ _UNK_15066df78;
    local_58._12_4_ = local_58._12_4_ ^ _UNK_15066df7c;
    local_58._16_8_ =
         CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field_0x10 >> 0x20) ^
                  __xmm_80000000000000008000000000000000._4_4_,
                  (uint)*(undefined8 *)&param_2->field_0x10 ^
                  (uint)__xmm_80000000000000008000000000000000);
    uVar9 = uVar9 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = uVar10 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_30 = (double)local_58._16_8_;
  }
  FAxisConstraintDatas::SetMotionType(&this->PositionConstraints,param_1,param_7);
  if (param_7 == Locked) {
    if (2 < (uint)param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar7 = false;
    param_4 = 0.0;
    *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar8 * 8 + 0x120) = 0;
  }
  else {
    if (param_7 != Limited) goto LAB_143ba66db;
    if (2 < (uint)param_1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar8 * 8 + 0x120) = param_6;
    bVar7 = true;
  }
  FAxisConstraintDatas::UpdateDatas
            (&this->PositionConstraints,param_1,(TVector<double,3> *)local_58,
             (double)CONCAT44(uVar10,uVar9),param_4,bVar7,param_8,param_9,0.0);
LAB_143ba66db:
  dVar6 = (double)CONCAT44(local_58._12_4_,local_58._8_4_);
  dVar1 = *(double *)&(this->InitConstraintVelocity).field_0x8;
  dVar5 = (double)CONCAT44(local_58._4_4_,local_58._0_4_);
  dVar2 = *(double *)&this->InitConstraintVelocity;
  dVar4 = (double)local_58._16_8_ * *(double *)&(this->InitConstraintVelocity).field_0x10;
  if (2 < (uint)param_1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))->field_0x0 + lVar8 * 8) =
       dVar6 * dVar1 + dVar5 * dVar2 + dVar4;
  InitPositionDatasMass(this,&this->PositionConstraints,param_1,param_5);
  return;
}

// InitPositionConstraints @ 143ba6780

void __thiscall
Chaos::FPBDJointCachedSolver::InitPositionConstraints
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  EJointMotionType EVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  float fVar13;
  
  (this->PositionConstraints).bValidDatas0 = '\0';
  (this->PositionConstraints).bValidDatas2 = '\0';
  (this->PositionConstraints).bValidDatas1 = '\0';
  bVar2 = (this->PositionConstraints).field_0x2c1;
  (this->PositionConstraints).bUseSimd = '\0';
  EVar3 = (param_3->LinearMotionTypes).field0_0x0._s_0.X;
  if (((EVar3 == Free) && ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar4 = (param_3->LinearMotionTypes).field0_0x0._s_0.Z;
  EVar5 = (param_3->LinearMotionTypes).field0_0x0._s_0.Y;
  if (((this->bUseSimd == false) || (EVar3 != Locked)) || ((EVar5 != Locked || (EVar4 != Locked))))
  {
    bVar11 = 0;
  }
  else {
    bVar11 = 4;
  }
  (this->PositionConstraints).field_0x2c1 = bVar2 & 0xfb | bVar11;
  bVar10 = FPBDJointUtilities::GetLinearSoftAccelerationMode(param_2,param_3);
  (this->PositionConstraints).bAccelerationMode = '\0';
  puVar1 = &(this->PositionConstraints).field_0x2c1;
  *puVar1 = *puVar1 | bVar10 * '\x02';
  if ((this->PositionConstraints).bUseSimd == '\0') {
    dVar7 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    dVar8 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
    dVar9 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
    if ((EVar3 == Limited) &&
       (bVar10 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3), bVar10)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    FAxisConstraintDatas::InitDatas(&this->PositionConstraints,0,bVar10,dVar9,dVar8,dVar7,param_4);
    dVar7 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    dVar8 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
    dVar9 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
    if ((EVar5 == Limited) &&
       (bVar10 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3), bVar10)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    FAxisConstraintDatas::InitDatas(&this->PositionConstraints,1,bVar10,dVar9,dVar8,dVar7,param_4);
    dVar7 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    dVar8 = FPBDJointUtilities::GetSoftLinearDamping(param_2,param_3);
    dVar9 = FPBDJointUtilities::GetSoftLinearStiffness(param_2,param_3);
    if ((EVar4 == Limited) &&
       (bVar10 = FPBDJointUtilities::GetSoftLinearLimitEnabled(param_2,param_3), bVar10)) {
      bVar10 = true;
    }
    else {
      bVar10 = false;
    }
    FAxisConstraintDatas::InitDatas(&this->PositionConstraints,2,bVar10,dVar9,dVar8,dVar7,param_4);
  }
  else {
    dVar7 = FPBDJointUtilities::GetLinearStiffness(param_2,param_3);
    fVar13 = (float)dVar7;
    *(float *)&(this->PositionConstraints).field0_0x0 = fVar13;
    *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 4) = fVar13;
    *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 8) = fVar13;
    *(float *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xc) = fVar13;
    if (param_4) {
      *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120) = 0;
      *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128) = 0;
    }
  }
  if (((EVar3 == Locked) || (EVar5 == Locked)) || (EVar4 == Locked)) {
    if ((this->PositionConstraints).bUseSimd == '\0') {
      InitLockedPositionConstraint(this,param_3,param_1,&param_3->LinearMotionTypes);
    }
    else {
      InitLockedPositionConstraintSimd(this,param_3,param_1,&param_3->LinearMotionTypes);
    }
  }
  if (((EVar3 != Limited) && (EVar5 != Limited)) && (EVar4 != Limited)) {
    return;
  }
  if (((this->PositionConstraints).bUseSimd != '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PositionConstraints.bUseSimd == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0x1b4,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (EVar3 == Limited) {
    if (EVar5 == Limited) {
      if (EVar4 == Limited) {
        InitSphericalPositionConstraint(this,param_3,param_1);
        return;
      }
LAB_143ba6abe:
      if (EVar3 != Limited) {
        if (EVar5 == Limited) {
          iVar12 = 1;
          goto LAB_143ba6b11;
        }
        goto LAB_143ba6afd;
      }
    }
    if (EVar4 == Limited) {
      InitCylindricalPositionConstraint(this,param_3,param_1,1);
      return;
    }
    if (EVar5 == Limited) {
      InitCylindricalPositionConstraint(this,param_3,param_1,2);
      return;
    }
    iVar12 = 0;
  }
  else {
    if (EVar5 == Limited) {
      if (EVar4 == Limited) {
        InitCylindricalPositionConstraint(this,param_3,param_1,0);
        return;
      }
      goto LAB_143ba6abe;
    }
LAB_143ba6afd:
    if (EVar4 != Limited) {
      return;
    }
    iVar12 = 2;
  }
LAB_143ba6b11:
  InitPlanarPositionConstraint(this,param_3,param_1,iVar12);
  return;
}

// InitPositionDatasMass @ 143ba6b50

void __thiscall
Chaos::FPBDJointCachedSolver::InitPositionDatasMass
          (FPBDJointCachedSolver *this,FAxisConstraintDatas *param_1,int param_2,double param_3)

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
  longlong lVar11;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  
  lVar11 = (longlong)param_2;
  dVar1 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x18 + 0xe0);
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x18 + 0xe8);
  dVar3 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x18 + 0xd8);
  dVar4 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x48);
  dVar9 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x50) * dVar2 -
          *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x58) * dVar1;
  dVar7 = dVar3 * *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x58) - dVar4 * dVar2
  ;
  dVar8 = dVar4 * dVar1 - dVar3 * *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x50)
  ;
  dVar4 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x68);
  dVar5 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x70);
  dVar6 = *(double *)((longlong)&param_1->field0_0x0 + lVar11 * 0x30 + 0x60);
  dVar10 = dVar4 * dVar2 - dVar5 * dVar1;
  dVar2 = dVar5 * dVar3 - dVar6 * dVar2;
  dVar1 = dVar6 * dVar1 - dVar4 * dVar3;
  local_148 = dVar7 * *(double *)&this->InvIs[0].field_0x20 + dVar9 * *(double *)this->InvIs +
              dVar8 * *(double *)&this->InvIs[0].field_0x40;
  local_140 = dVar7 * *(double *)&this->InvIs[0].field_0x28 +
              dVar9 * *(double *)&this->InvIs[0].field_0x8 +
              dVar8 * *(double *)&this->InvIs[0].field_0x48;
  local_138 = dVar7 * *(double *)&this->InvIs[0].field_0x30 +
              dVar9 * *(double *)&this->InvIs[0].field_0x10 +
              dVar8 * *(double *)&this->InvIs[0].field_0x50;
  local_160 = dVar2 * *(double *)&this->InvIs[1].field_0x20 + dVar10 * *(double *)(this->InvIs + 1)
              + dVar1 * *(double *)&this->InvIs[1].field_0x40;
  local_158 = dVar2 * *(double *)&this->InvIs[1].field_0x28 +
              dVar10 * *(double *)&this->InvIs[1].field_0x8 +
              dVar1 * *(double *)&this->InvIs[1].field_0x48;
  local_150 = dVar2 * *(double *)&this->InvIs[1].field_0x30 +
              dVar10 * *(double *)&this->InvIs[1].field_0x10 +
              dVar1 * *(double *)&this->InvIs[1].field_0x50;
  FAxisConstraintDatas::UpdateMass
            (param_1,param_2,(TVector<double,3> *)&local_148,(TVector<double,3> *)&local_160,
             local_140 * dVar7 + local_148 * dVar9 + local_138 * dVar8 + this->InvMs[0] +
             local_158 * dVar2 + local_160 * dVar10 + local_150 * dVar1 + this->InvMs[1],param_3,
             this->bUsePositionBasedDrives);
  return;
}

// InitPositionDrives @ 143ba6ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::FPBDJointCachedSolver::InitPositionDrives
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  char cVar17;
  longlong lVar18;
  char cVar19;
  double *pdVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  double dVar24;
  undefined1 auStackY_228 [32];
  char local_1d8 [8];
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  FPBDJointSolverSettings *local_178;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_228;
  (this->PositionDrives).bValidDatas0 = '\0';
  (this->PositionDrives).bValidDatas2 = '\0';
  (this->PositionDrives).bValidDatas1 = '\0';
  (this->PositionDrives).bUseSimd = '\0';
  if (param_2->bEnableDrives != false) {
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.X == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.X == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.X == Locked)) {
      cVar19 = '\0';
    }
    else {
      cVar19 = '\x01';
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Y == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Y == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Y == Locked)) {
      cVar17 = '\0';
    }
    else {
      cVar17 = '\x01';
    }
    if ((((param_3->bLinearPositionDriveEnabled).field0_0x0._s_0.Z == false) &&
        ((param_3->bLinearVelocityDriveEnabled).field0_0x0._s_0.Z == false)) ||
       ((param_3->LinearMotionTypes).field0_0x0._s_0.Z == Locked)) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    local_1d8[0] = cVar19;
    local_1d8[1] = cVar17;
    local_1d8[2] = cVar14;
    local_178 = param_2;
    bVar13 = FPBDJointUtilities::GetLinearDriveAccelerationMode(param_2,param_3);
    (this->PositionDrives).bAccelerationMode = '\0';
    puVar1 = &(this->PositionDrives).field_0x2c1;
    *puVar1 = *puVar1 | bVar13 * '\x02';
    if (((cVar19 != '\0') || (cVar17 != '\0')) || (cVar14 != '\0')) {
      local_168.M[0][0] = 0.0;
      local_168.M[0][1] = 0.0;
      local_168.M[0][2] = 0.0;
      local_168.M[0][3] = 0.0;
      local_168.M[1][0] = 0.0;
      local_168.M[1][1] = 0.0;
      local_168.M[1][2] = 0.0;
      local_168.M[1][3] = 0.0;
      local_168.M[2][0] = 0.0;
      local_168.M[2][1] = 0.0;
      local_168.M[2][2] = 0.0;
      local_168.M[2][3] = 0.0;
      local_168.M[3][0] = 0.0;
      local_168.M[3][1] = 0.0;
      local_168.M[3][2] = 0.0;
      local_168.M[3][3] = 0.0;
      UE::Math::TQuat<double>::ToMatrix((TQuat<double> *)this->ConnectorRs,&local_168);
      local_198._s_0.X = (double)*(undefined8 *)&param_3->LinearDrivePositionTarget;
      local_198._s_0.Y = (double)*(undefined8 *)&(param_3->LinearDrivePositionTarget).field_0x8;
      local_198._s_0.Z = (double)*(undefined8 *)&(param_3->LinearDrivePositionTarget).field_0x10;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_1d0._s_0,
                 (TVector<double> *)&local_198._s_0);
      local_1b8._s_0.X = (double)*(undefined8 *)&param_3->LinearDriveVelocityTarget;
      local_1b8._s_0.Y = (double)*(undefined8 *)&(param_3->LinearDriveVelocityTarget).field_0x8;
      local_1b8._s_0.Z = (double)*(undefined8 *)&(param_3->LinearDriveVelocityTarget).field_0x10;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_198._s_0,
                 (TVector<double> *)&local_1b8._s_0);
      dVar5 = local_1d0._s_0.X + *(double *)this->ConnectorXs;
      dVar2 = *(double *)(this->ConnectorXs + 1);
      dVar3 = *(double *)&this->ConnectorXs[1].field_0x10;
      dVar23 = local_1d0._s_0.Y + *(double *)&this->ConnectorXs[0].field_0x8;
      dVar4 = *(double *)&this->ConnectorXs[1].field_0x8;
      dVar6 = local_1d0._s_0.Z + *(double *)&this->ConnectorXs[0].field_0x10;
      local_1b8._s_0.Y = dVar4 - *(double *)&this->CurrentPs[0].field_0x8;
      local_1d0._s_0.Y = dVar4 - *(double *)&this->CurrentPs[1].field_0x8;
      local_1b8._s_0.X = dVar2 - *(double *)this->CurrentPs;
      local_1d0._s_0.X = dVar2 - *(double *)(this->CurrentPs + 1);
      local_1b8._s_0.Z = dVar3 - *(double *)&this->CurrentPs[0].field_0x10;
      local_1d0._s_0.Z = dVar3 - *(double *)&this->CurrentPs[1].field_0x10;
      SetInitConstraintVelocity
                (this,(TVector<double,3> *)&local_1b8._s_0,(TVector<double,3> *)&local_1d0._s_0);
      uVar12 = local_198._s_0.Z;
      uVar11 = local_198._s_0.Y;
      uVar10 = local_198._s_0.X;
      uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      pcVar16 = local_1d8;
      pdVar20 = local_168.M[0] + 1;
      iVar15 = 0;
      lVar18 = 0;
      do {
        if (*pcVar16 != '\0') {
          dVar24 = FPBDJointUtilities::GetLinearDriveDamping(param_2,param_3,iVar15);
          dVar7 = FPBDJointUtilities::GetLinearDriveStiffness(param_2,param_3,iVar15);
          FAxisConstraintDatas::InitDatas(&this->PositionDrives,iVar15,true,dVar7,dVar24,0.0,true);
          local_1d0._s_0.X = (*(double (*) [4])(pdVar20 + -1))[0];
          local_1d0._s_0.Y = *pdVar20;
          local_1d0._s_0.Z = pdVar20[1];
          dVar24 = local_1d0._s_0.Y * (dVar4 - dVar23) + local_1d0._s_0.X * (dVar2 - dVar5) +
                   local_1d0._s_0.Z * (dVar3 - dVar6);
          uVar21 = SUB84(dVar24,0) & uVar8;
          uVar22 = (uint)((ulonglong)dVar24 >> 0x20) & uVar9;
          if ((this->PositionTolerance <= (double)CONCAT44(uVar22,uVar21) &&
               (double)CONCAT44(uVar22,uVar21) != this->PositionTolerance) ||
             (0.0 < *(double *)((longlong)&(this->PositionDrives).field0_0x0 + lVar18 + 0x30))) {
            local_1b8._s_0.X = *(double *)this->ConnectorXs - *(double *)this->CurrentPs;
            local_1b8._s_0.Y =
                 *(double *)&this->ConnectorXs[0].field_0x8 -
                 *(double *)&this->CurrentPs[0].field_0x8;
            local_1b8._s_0.Z =
                 *(double *)&this->ConnectorXs[0].field_0x10 -
                 *(double *)&this->CurrentPs[0].field_0x10;
            local_198._s_0.X = *(double *)(this->ConnectorXs + 1) - *(double *)(this->CurrentPs + 1)
            ;
            local_198._s_0.Y =
                 *(double *)&this->ConnectorXs[1].field_0x8 -
                 *(double *)&this->CurrentPs[1].field_0x8;
            local_198._s_0.Z =
                 *(double *)&this->ConnectorXs[1].field_0x10 -
                 *(double *)&this->CurrentPs[1].field_0x10;
            FAxisConstraintDatas::UpdateDatas
                      (&this->PositionDrives,iVar15,(TVector<double,3> *)&local_1d0._s_0,dVar24,0.0,
                       true,(TVector<double,3> *)&local_1b8._s_0,
                       (TVector<double,3> *)&local_198._s_0,
                       (double)uVar11 * local_1d0._s_0.Y + (double)uVar10 * local_1d0._s_0.X +
                       (double)uVar12 * local_1d0._s_0.Z);
            InitPositionDatasMass(this,&this->PositionDrives,iVar15,param_1);
          }
          FAxisConstraintDatas::SetMaxForce
                    (&this->PositionDrives,iVar15,
                     *(double *)(&(param_3->LinearDriveMaxForce).field_0x0 + lVar18),param_1);
          param_2 = local_178;
        }
        iVar15 = iVar15 + 1;
        pcVar16 = pcVar16 + 1;
        pdVar20 = pdVar20 + 4;
        lVar18 = lVar18 + 8;
      } while (iVar15 < 3);
    }
  }
  return;
}

// InitProjection @ 143ba7430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitProjection
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  FSolverBody *pFVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  
  dVar14 = FPBDJointUtilities::GetLinearProjection(param_2,param_3);
  dVar2 = FPBDJointUtilities::GetAngularProjection(param_2,param_3);
  if ((param_3->bProjectionEnabled == false) ||
     ((dVar14 <= 0.0 && (param_3->TeleportDistance <= 0.0)))) {
    bVar5 = false;
    if (param_3->bProjectionEnabled != false) goto LAB_143ba74a3;
  }
  else {
    bVar5 = true;
LAB_143ba74a3:
    if (0.0 < dVar2) {
      bVar6 = true;
      goto LAB_143ba74b1;
    }
  }
  bVar6 = false;
LAB_143ba74b1:
  if ((bVar5) || (bVar6)) {
    ComputeBodyState(this,0);
    ComputeBodyState(this,1);
    if (*(double *)&this->ConnectorRs[0].field_0x18 * *(double *)&this->ConnectorRs[1].field_0x18 +
        *(double *)&this->ConnectorRs[0].field_0x10 * *(double *)&this->ConnectorRs[1].field_0x10 +
        *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8 +
        *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1) < 0.0) {
      uVar9 = (undefined4)__real_bff0000000000000;
      uVar11 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    else {
      uVar9 = (undefined4)__real_3ff0000000000000;
      uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    dVar14 = (double)CONCAT44(uVar11,uVar9) * *(double *)&this->ConnectorRs[1].field_0x8;
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = (double)CONCAT44(uVar11,uVar9) * *(double *)(this->ConnectorRs + 1);
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar3;
    dVar14 = (double)CONCAT44(uVar11,uVar9) * *(double *)&this->ConnectorRs[1].field_0x18;
    auVar4._8_4_ = SUB84(dVar14,0);
    auVar4._0_8_ = (double)CONCAT44(uVar11,uVar9) * *(double *)&this->ConnectorRs[1].field_0x10;
    auVar4._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar4;
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
    uVar8 = _UNK_15061cbc8;
    uVar7 = ___xmm_3ff00000000000000000000000000000;
    pFVar1 = this->SolverBodies[1].Body;
    this->InvMs[1] =
         (double)(this->SolverBodies[1].State.ShockPropagationScale *
                  this->SolverBodies[1].State.InvMScale * (pFVar1->State).InvM);
    fVar13 = this->SolverBodies[1].State.ShockPropagationScale *
             this->SolverBodies[1].State.InvIScale;
    fVar12 = fVar13 * *(float *)&(pFVar1->State).InvILocal.field_0x4;
    fVar10 = fVar13 * *(float *)&(pFVar1->State).InvILocal;
    fVar13 = fVar13 * *(float *)&(pFVar1->State).InvILocal.field_0x8;
    if (fVar10 <= fVar12) {
      fVar12 = fVar10;
    }
    if (fVar13 <= fVar12) {
      fVar12 = fVar13;
    }
    dVar14 = (double)fVar12;
    *(double *)(this->InvIs + 1) = dVar14;
    *(undefined8 *)&this->InvIs[1].field_0x8 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x10 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x18 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x20 = 0;
    *(double *)&this->InvIs[1].field_0x28 = dVar14;
    *(undefined8 *)&this->InvIs[1].field_0x30 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x38 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x40 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x48 = 0;
    *(double *)&this->InvIs[1].field_0x50 = dVar14;
    *(undefined8 *)&this->InvIs[1].field_0x58 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x60 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x68 = 0;
    *(undefined8 *)&this->InvIs[1].field_0x70 = uVar7;
    *(undefined8 *)&this->InvIs[1].field_0x78 = uVar8;
    if (bVar5) {
      InitPositionConstraints(this,param_1,param_2,param_3,false);
    }
    if (bVar6) {
      InitRotationConstraints(this,param_1,param_2,param_3,false);
    }
  }
  return;
}

// InitPyramidSwingConstraint @ 143ba7710

void __thiscall
Chaos::FPBDJointCachedSolver::InitPyramidSwingConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,bool param_3,
          bool param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  TRotation<double,3> local_98 [4];
  
  local_98[0]._0_8_ = 0;
  local_98[0]._8_8_ = 0;
  local_98[0]._16_8_ = 0;
  local_98[0]._24_8_ = 0;
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  FPBDJointUtilities::DecomposeSwingTwistLocal
            (this->ConnectorRs,this->ConnectorRs + 1,(TRotation<double,3> *)&local_b8,local_98);
  dVar6 = __real_3ff0000000000000;
  dVar2 = *(double *)this->ConnectorRs;
  dVar7 = *(double *)&this->ConnectorRs[0].field_0x8;
  dVar8 = *(double *)&this->ConnectorRs[0].field_0x10;
  dVar5 = *(double *)&this->ConnectorRs[0].field_0x18;
  dVar3 = dVar2 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar5 * local_b8 +
          local_a8 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dStack_b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar4 = dVar2 * local_a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar5 * dStack_b0 +
          dStack_a0 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * local_b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar1 = dVar2 * dStack_b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          local_a8 * dVar5 +
          dVar7 * local_b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dStack_a0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar2 = dVar2 * local_b8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dStack_a0 * dVar5 +
          dVar7 * dStack_b0 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * local_a8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (param_3) {
    dVar8 = dVar4 + dVar4;
    dVar7 = (double)CONCAT44((uint)((ulonglong)(dVar3 + dVar3) >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar3 + dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_d8 = dVar2 * dVar8 - dVar1 * dVar7;
    local_d0 = dVar2 * dVar7 + dVar1 * dVar8;
    local_c8 = (dVar3 * dVar7 - dVar4 * dVar8) + __real_3ff0000000000000;
    dVar7 = FGenericPlatformMath::Atan2(local_a8,dStack_a0 + __real_3ff0000000000000);
    InitRotationConstraintDatas
              (this,param_1,2,(TVector<double,3> *)&local_d8,dVar7 * __real_4010000000000000,
               param_1->SwingRestitution,param_2,true);
  }
  if (param_4) {
    dVar7 = dVar3 + dVar3;
    dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar1 + dVar1) >> 0x20) ^
                             __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar1 + dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_d8 = dVar2 * dVar8 + dVar4 * dVar7;
    local_d0 = (dVar1 * dVar8 - dVar3 * dVar7) + dVar6;
    local_c8 = dVar2 * dVar7 - dVar4 * dVar8;
    dVar1 = FGenericPlatformMath::Atan2(dStack_b0,dStack_a0 + dVar6);
    InitRotationConstraintDatas
              (this,param_1,1,(TVector<double,3> *)&local_d8,dVar1 * __real_4010000000000000,
               param_1->SwingRestitution,param_2,true);
  }
  return;
}

// InitRotationConstraintDatas @ 143ba7a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationConstraintDatas
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,int param_2,
          TVector<double,3> *param_3,double param_4,double param_5,double param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FSolverBody *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_88 [24];
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  lVar11 = (longlong)param_2;
  local_88._0_4_ = *(undefined4 *)param_3;
  local_88._4_4_ = *(undefined4 *)&param_3->field_0x4;
  local_88._8_4_ = *(undefined4 *)&param_3->field_0x8;
  local_88._12_4_ = *(undefined4 *)&param_3->field_0xc;
  if (0.0 <= param_4) {
    local_88._16_8_ = *(undefined8 *)&param_3->field_0x10;
  }
  else {
    local_88._0_4_ = local_88._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_88._4_4_ = local_88._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_88._8_4_ = local_88._8_4_ ^ _UNK_15066df78;
    local_88._12_4_ = local_88._12_4_ ^ _UNK_15066df7c;
    local_88._16_8_ =
         CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field_0x10 >> 0x20) ^
                  __xmm_80000000000000008000000000000000._4_4_,
                  (uint)*(undefined8 *)&param_3->field_0x10 ^
                  (uint)__xmm_80000000000000008000000000000000);
  }
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FAxisConstraintDatas::UpdateDatas
            (&this->RotationConstraints,param_2,(TVector<double,3> *)local_88,
             (double)CONCAT44((uint)((ulonglong)param_4 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(param_4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
             param_5,param_7,(TVector<double,3> *)&local_58,(TVector<double,3> *)&local_70,0.0);
  if ((uint)param_2 < 3) {
    uVar12 = SUB84(*(double *)((longlong)(&param_1->ConnectorTransforms + 1) + (lVar11 + 0xd) * 8),0
                  );
    uVar13 = (undefined4)
             ((ulonglong)
              *(double *)((longlong)(&param_1->ConnectorTransforms + 1) + (lVar11 + 0xd) * 8) >>
             0x20);
  }
  else {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7ab,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = SUB84(*(double *)((longlong)(&param_1->ConnectorTransforms + 1) + (lVar11 + 0xd) * 8),0
                  );
    uVar13 = (undefined4)
             ((ulonglong)
              *(double *)((longlong)(&param_1->ConnectorTransforms + 1) + (lVar11 + 0xd) * 8) >>
             0x20);
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(ulonglong *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x120) =
       CONCAT44(uVar13,uVar12);
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar5->State).W;
  fVar2 = *(float *)&(pFVar5->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar5->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->SolverBodies[0].Body;
  fVar4 = *(float *)&(pFVar5->State).W;
  dVar7 = ((double)fVar3 - (double)*(float *)&(pFVar5->State).W.field_0x8) * (double)local_88._16_8_
  ;
  fVar3 = *(float *)&(pFVar5->State).W.field_0x4;
  dVar8 = (double)CONCAT44(local_88._4_4_,local_88._0_4_);
  dVar9 = (double)CONCAT44(local_88._12_4_,local_88._8_4_);
  if (2 < (uint)param_2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  *(double *)(&((TVector<double,3> *)(this->CurrentQs + 2))[1].field_0x0 + lVar11 * 8) =
       ((double)fVar1 - (double)fVar4) * dVar8 + ((double)fVar2 - (double)fVar3) * dVar9 + dVar7;
  InitRotationDatasMass(this,&this->RotationConstraints,param_2,param_6);
  return;
}

// InitRotationConstraintDrive @ 143ba7cf0

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationConstraintDrive
          (FPBDJointCachedSolver *this,int param_1,TVector<double,3> *param_2,double param_3,
          double param_4)

{
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FAxisConstraintDatas::UpdateDatas
            (&this->RotationDrives,param_1,param_2,param_4,0.0,true,(TVector<double,3> *)&local_30,
             (TVector<double,3> *)&local_48,0.0);
  InitRotationDatasMass(this,&this->RotationDrives,param_1,param_3);
  return;
}

// InitRotationConstraintDriveSimd @ 143ba7da0

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationConstraintDriveSimd
          (FPBDJointCachedSolver *this,TVector<double,3> *param_1,float param_2,
          TVector<double,3> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  byte bVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  float *pfVar16;
  __m128 *p_Var17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  __m128 _Var22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double local_1e0 [4];
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  iVar15 = 0;
  pdVar13 = local_1e0;
  pfVar16 = (float *)((longlong)&(this->RotationDrives).field0_0x0 + 0xc0);
  p_Var17 = (this->RotationDrives).field0_0x0.Simd.ConstraintAxis;
  pdVar14 = (double *)&param_1->field_0x8;
  auVar21._0_4_ = (float)*(double *)param_3;
  auVar21._4_4_ = (float)*(double *)&param_3->field_0x8;
  auVar21._8_4_ = (float)*(double *)&param_3->field_0x10;
  auVar21._12_4_ = 0;
  *(undefined1 (*) [16])((longlong)&(this->RotationDrives).field0_0x0 + 0x110) = auVar21;
  do {
    *(undefined8 *)((longlong)this + (0xf68 - (longlong)local_1e0) + (longlong)pdVar13) = 0;
    fVar29 = (float)pdVar14[-1];
    fVar30 = (float)*pdVar14;
    fVar18 = (float)pdVar14[1];
    _Var22.m128_f32[1] = fVar30;
    _Var22.m128_f32[0] = fVar29;
    _Var22.m128_f32[2] = fVar18;
    _Var22.m128_f32[3] = 0.0;
    *p_Var17 = _Var22;
    local_188 = *(double *)&this->InvIs[0].field_0x40;
    dStack_180 = *(double *)&this->InvIs[0].field_0x48;
    local_1a8 = *(double *)&this->InvIs[0].field_0x20;
    dStack_1a0 = *(double *)&this->InvIs[0].field_0x28;
    local_1e0[3] = *(double *)this->InvIs;
    dStack_1c0 = *(double *)&this->InvIs[0].field_0x8;
    local_168 = *(undefined8 *)&this->InvIs[0].field_0x60;
    uStack_160 = *(undefined8 *)&this->InvIs[0].field_0x68;
    local_198 = *(double *)&this->InvIs[0].field_0x30;
    uStack_190 = *(undefined8 *)&this->InvIs[0].field_0x38;
    local_158 = *(undefined8 *)&this->InvIs[0].field_0x70;
    uStack_150 = *(undefined8 *)&this->InvIs[0].field_0x78;
    local_178 = *(double *)&this->InvIs[0].field_0x50;
    uStack_170 = *(undefined8 *)&this->InvIs[0].field_0x58;
    local_1b8 = *(double *)&this->InvIs[0].field_0x10;
    uStack_1b0 = *(undefined8 *)&this->InvIs[0].field_0x18;
    local_128 = *(double *)&this->InvIs[1].field_0x20;
    dStack_120 = *(double *)&this->InvIs[1].field_0x28;
    local_148 = *(double *)(this->InvIs + 1);
    dStack_140 = *(double *)&this->InvIs[1].field_0x8;
    local_118 = *(double *)&this->InvIs[1].field_0x30;
    uStack_110 = *(undefined8 *)&this->InvIs[1].field_0x38;
    local_138 = *(double *)&this->InvIs[1].field_0x10;
    uStack_130 = *(undefined8 *)&this->InvIs[1].field_0x18;
    fVar26 = (float)local_188 * fVar18 + (float)local_1a8 * fVar30 + (float)local_1e0[3] * fVar29;
    fVar27 = (float)dStack_180 * fVar18 + (float)dStack_1a0 * fVar30 + (float)dStack_1c0 * fVar29;
    fVar28 = (float)local_178 * fVar18 + (float)local_198 * fVar30 + (float)local_1b8 * fVar29;
    local_108 = *(double *)&this->InvIs[1].field_0x40;
    dStack_100 = *(double *)&this->InvIs[1].field_0x48;
    local_e8 = *(undefined8 *)&this->InvIs[1].field_0x60;
    uStack_e0 = *(undefined8 *)&this->InvIs[1].field_0x68;
    local_d8 = *(undefined8 *)&this->InvIs[1].field_0x70;
    uStack_d0 = *(undefined8 *)&this->InvIs[1].field_0x78;
    local_f8 = *(double *)&this->InvIs[1].field_0x50;
    uStack_f0 = *(undefined8 *)&this->InvIs[1].field_0x58;
    pfVar16[-4] = fVar26;
    pfVar16[-3] = fVar27;
    pfVar16[-2] = fVar28;
    pfVar16[-1] = fVar18 * 0.0 + fVar30 * 0.0 + fVar29 * 0.0;
    fVar23 = (float)local_108 * fVar18 + (float)local_128 * fVar30 + (float)local_148 * fVar29;
    fVar24 = (float)dStack_100 * fVar18 + (float)dStack_120 * fVar30 + (float)dStack_140 * fVar29;
    fVar25 = (float)local_f8 * fVar18 + (float)local_118 * fVar30 + (float)local_138 * fVar29;
    *pdVar13 = (double)(fVar24 * fVar30 + fVar23 * fVar29 + fVar25 * fVar18 +
                       fVar27 * fVar30 + fVar26 * fVar29 + fVar28 * fVar18);
    *pfVar16 = 0.0 - fVar23;
    pfVar16[1] = 0.0 - fVar24;
    pfVar16[2] = 0.0 - fVar25;
    pfVar16[3] = 0.0 - (fVar18 * 0.0 + fVar30 * 0.0 + fVar29 * 0.0);
    if (iVar15 == 0) {
      bVar12 = (byte)(this->RotationDrives).field_0x2c0 >> 6;
LAB_143ba8146:
      bVar12 = bVar12 & 1;
LAB_143ba8148:
      if (bVar12 == 0) goto LAB_143ba814c;
    }
    else {
      if (iVar15 == 1) {
        bVar12 = (this->RotationDrives).bSoftLimit1;
        goto LAB_143ba8148;
      }
      if (iVar15 == 2) {
        bVar12 = (this->RotationDrives).field_0x2c1;
        goto LAB_143ba8146;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xa2,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
LAB_143ba814c:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("RotationDrives.GetSoftLimit(ConstraintIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                          ,0xa06,L"");
      if (bVar11) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar15 = iVar15 + 1;
    p_Var17 = p_Var17 + 1;
    pdVar14 = pdVar14 + 3;
    pdVar13 = pdVar13 + 1;
    pfVar16 = pfVar16 + 8;
    if (2 < iVar15) {
      fVar23 = (float)local_1e0[0];
      fVar24 = (float)local_1e0[1];
      fVar18 = (float)local_1e0[2];
      auVar9._4_4_ = fVar24;
      auVar9._0_4_ = fVar23;
      auVar9._8_4_ = fVar18;
      auVar9._12_4_ = 0;
      *(undefined1 (*) [16])((longlong)&(this->RotationDrives).field0_0x0 + 0xa0) = auVar9;
      dVar1 = *(double *)&(this->RotationDrives).SettingsSoftDamping.field_0x8;
      dVar2 = *(double *)&(this->RotationDrives).SettingsSoftDamping;
      dVar3 = *(double *)&(this->RotationDrives).SettingsSoftDamping.field_0x10;
      _Var22 = GlobalVectorConstants::FloatOne;
      if ((this->RotationDrives).bAccelerationMode != '\0') {
        auVar10._4_4_ = fVar24;
        auVar10._0_4_ = fVar23;
        auVar10._8_4_ = fVar18;
        auVar10._12_4_ = 0;
        _Var22.m128_f32 = (float  [4])divps(GlobalVectorConstants::FloatOne.m128_f32,auVar10);
      }
      fVar25 = param_2 * param_2 *
               _Var22.m128_f32[0] * (float)*(double *)&(this->RotationDrives).SettingsSoftStiffness;
      fVar26 = param_2 * param_2 *
               _Var22.m128_f32[1] *
               (float)*(double *)&(this->RotationDrives).SettingsSoftStiffness.field_0x8;
      fVar27 = param_2 * param_2 *
               _Var22.m128_f32[2] *
               (float)*(double *)&(this->RotationDrives).SettingsSoftStiffness.field_0x10;
      fVar28 = param_2 * param_2 * _Var22.m128_f32[3] * 0.0;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x10) = fVar25;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x14) = fVar26;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x18) = fVar27;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x1c) = fVar28;
      if (this->bUsePositionBasedDrives == false) {
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
      }
      else {
        fVar29 = param_2 * (float)dVar2 * _Var22.m128_f32[0];
        fVar30 = param_2 * (float)dVar1 * _Var22.m128_f32[1];
        fVar19 = param_2 * (float)dVar3 * _Var22.m128_f32[2];
        fVar20 = param_2 * 0.0 * _Var22.m128_f32[3];
      }
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x20) = fVar29;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x24) = fVar30;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x28) = fVar19;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x2c) = fVar20;
      fVar6 = GlobalVectorConstants::FloatOne.m128_f32[1];
      fVar7 = GlobalVectorConstants::FloatOne.m128_f32[2];
      fVar8 = GlobalVectorConstants::FloatOne.m128_f32[3];
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x90) =
           (fVar29 + fVar25) * fVar23 + GlobalVectorConstants::FloatOne.m128_f32[0];
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x94) =
           (fVar30 + fVar26) * fVar24 + fVar6;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x98) =
           (fVar19 + fVar27) * fVar18 + fVar7;
      *(float *)((longlong)&(this->RotationDrives).field0_0x0 + 0x9c) =
           (fVar20 + fVar28) * 0.0 + fVar8;
      return;
    }
  } while( true );
}

// InitRotationConstraints @ 143ba82e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationConstraints
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined1 *puVar3;
  byte bVar4;
  EJointMotionType EVar5;
  EJointMotionType EVar6;
  EJointMotionType EVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  EJointAngularConstraintIndex EVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_res8;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  TVector<double,3> local_88 [4];
  
  (this->RotationConstraints).bValidDatas0 = '\0';
  (this->RotationConstraints).bValidDatas2 = '\0';
  (this->RotationConstraints).bValidDatas1 = '\0';
  (this->RotationConstraints).bUseSimd = '\0';
  EVar5 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  if (((EVar5 == Free) && ((param_3->AngularMotionTypes).field0_0x0._s_0.Y == Free)) &&
     ((param_3->AngularMotionTypes).field0_0x0._s_0.Z == Free)) {
    return;
  }
  EVar6 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  EVar7 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  bVar11 = FPBDJointUtilities::GetAngularSoftAccelerationMode(param_2,param_3);
  (this->RotationConstraints).bAccelerationMode = '\0';
  puVar1 = &(this->RotationConstraints).field_0x2c1;
  *puVar1 = *puVar1 | bVar11 * '\x02';
  if ((((this->bUseSimd != false) && (EVar5 == Limited)) &&
      ((EVar6 == Limited &&
       ((EVar7 == Limited &&
        (bVar11 = FPBDJointUtilities::GetSoftTwistLimitEnabled(param_2,param_3), bVar11)))))) &&
     (bVar11 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3), bVar11)) {
    (this->RotationConstraints).bUseSimd = '\x01';
    dVar16 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
    dVar17 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
    dVar18 = FPBDJointUtilities::GetSoftTwistStiffness(param_2,param_3);
    *(double *)&(this->RotationConstraints).SettingsSoftStiffness = dVar18;
    *(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x8 = dVar17;
    *(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x10 = dVar16;
    dVar16 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
    dVar17 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
    dVar18 = FPBDJointUtilities::GetSoftTwistDamping(param_2,param_3);
    *(double *)&(this->RotationConstraints).SettingsSoftDamping = dVar18;
    *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x8 = dVar17;
    *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x10 = dVar16;
    if (param_4) {
      *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120) = 0;
      *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128) = 0;
    }
    dVar16 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
    dVar17 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
    dVar18 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
    auVar8._4_4_ = (float)dVar17;
    auVar8._0_4_ = (float)dVar18;
    auVar8._8_4_ = (float)dVar16;
    auVar8._12_4_ = 0;
    *(undefined1 (*) [16])&(this->RotationConstraints).field0_0x0 = auVar8;
    InitRotationConstraintsSimd(this,param_3,(float)param_1);
    return;
  }
  (this->RotationConstraints).bUseSimd = '\0';
  dVar16 = FPBDJointUtilities::GetTwistStiffness(param_2,param_3);
  dVar17 = FPBDJointUtilities::GetSoftTwistDamping(param_2,param_3);
  dVar18 = FPBDJointUtilities::GetSoftTwistStiffness(param_2,param_3);
  bVar11 = FPBDJointUtilities::GetSoftTwistLimitEnabled(param_2,param_3);
  if ((bVar11) && (EVar5 != Locked)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  FAxisConstraintDatas::InitDatas(&this->RotationConstraints,0,bVar11,dVar18,dVar17,dVar16,param_4);
  dVar16 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
  dVar17 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
  dVar18 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
  bVar11 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3);
  if ((bVar11) && (EVar7 != Locked)) {
    bVar12 = 1;
  }
  else {
    bVar12 = 0;
  }
  (this->RotationConstraints).bSoftLimit2 = '\0';
  pdVar2 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x210);
  puVar1 = &(this->RotationConstraints).field_0x2c1;
  *puVar1 = *puVar1 | bVar12;
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x10) = dVar16;
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x28) = dVar18;
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x40) = dVar17;
  *(undefined8 *)&(this->RotationConstraints).ConstraintMaxLambda.field_0x10 = 0;
  *(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x10 = dVar18;
  *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x10 = dVar17;
  (this->RotationConstraints).bValidDatas2 = '\0';
  (this->RotationConstraints).bLimitsCheck2 = '\x01';
  (this->RotationConstraints).MotionType2 = '\0';
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_4) {
    *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x218) = uVar9;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x220) = uVar10;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&(this->RotationConstraints).ConstraintLambdaVelocity =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&(this->RotationConstraints).ConstraintLambdaVelocity.field_0x8 = uVar9;
    *(undefined8 *)&(this->RotationConstraints).ConstraintLambdaVelocity.field_0x10 = uVar10;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128) = uVar9;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x130) = uVar10;
  }
  dVar16 = FPBDJointUtilities::GetSwingStiffness(param_2,param_3);
  dVar17 = FPBDJointUtilities::GetSoftSwingDamping(param_2,param_3);
  dVar18 = FPBDJointUtilities::GetSoftSwingStiffness(param_2,param_3);
  bVar11 = FPBDJointUtilities::GetSoftSwingLimitEnabled(param_2,param_3);
  if ((bVar11) && (EVar6 != Locked)) {
    bVar12 = 0x80;
  }
  else {
    bVar12 = 0;
  }
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 8) = dVar16;
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x20) = dVar18;
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x38) = dVar17;
  *(undefined8 *)&(this->RotationConstraints).ConstraintMaxLambda.field_0x8 = 0;
  *(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x8 = dVar18;
  *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x8 = dVar17;
  (this->RotationConstraints).MotionType1 = '\0';
  puVar3 = &(this->RotationConstraints).field_0x2c0;
  (this->RotationConstraints).bValidDatas1 = '\0';
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationConstraints).bSoftLimit1 = bVar12 >> 7;
  (this->RotationConstraints).bLimitsCheck1 = '\x01';
  if (param_4) {
    *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x218) = uVar9;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x220) = uVar10;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&(this->RotationConstraints).ConstraintLambdaVelocity =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&(this->RotationConstraints).ConstraintLambdaVelocity.field_0x8 = uVar9;
    *(undefined8 *)&(this->RotationConstraints).ConstraintLambdaVelocity.field_0x10 = uVar10;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x120) =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x128) = uVar9;
    *(undefined8 *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x130) = uVar10;
  }
  local_c8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_c8._s_0.Y = _UNK_150689518;
  local_c8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_f8._s_0,
             (TVector<double> *)&local_c8._s_0);
  local_a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_a8._s_0.Y = _UNK_150689518;
  local_a8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)(this->ConnectorRs + 1),(TVector<double> *)&local_e0._s_0,
             (TVector<double> *)&local_a8._s_0);
  bVar11 = local_f8._s_0.Y * local_e0._s_0.Y + local_f8._s_0.X * local_e0._s_0.X +
           local_f8._s_0.Z * local_e0._s_0.Z < (double)Chaos_Joint_DegenerateRotationLimit;
  if (((param_2->bEnableTwistLimits != false) && (EVar5 == Limited)) && (!bVar11)) {
    FPBDJointUtilities::GetTwistAxisAngle
              (this->ConnectorRs,this->ConnectorRs + 1,local_88,&local_res8);
    InitRotationConstraintDatas
              (this,param_3,0,local_88,local_res8,param_3->TwistRestitution,param_1,true);
  }
  if (param_2->bEnableSwingLimits != false) {
    if (EVar7 == Limited) {
      if (EVar6 == Limited) {
        bVar14 = true;
LAB_143ba88be:
        bVar11 = true;
LAB_143ba88c3:
        InitPyramidSwingConstraint(this,param_3,param_1,bVar14,bVar11);
      }
      else if (EVar6 == Locked) {
        if (!bVar11) {
          bVar14 = true;
          goto LAB_143ba88c3;
        }
      }
      else if ((EVar6 == Free) && (!bVar11)) {
        EVar15 = Swing1;
        goto LAB_143ba88e6;
      }
    }
    else if (EVar7 == Locked) {
      if ((EVar6 == Limited) && (!bVar11)) {
        bVar14 = false;
        goto LAB_143ba88be;
      }
    }
    else if (((EVar7 == Free) && (EVar6 == Limited)) && (!bVar11)) {
      EVar15 = Swing2;
LAB_143ba88e6:
      InitDualConeSwingConstraint(this,param_3,param_1,EVar15);
    }
  }
  if ((param_2->bEnableTwistLimits == false) || (EVar5 != Locked)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if ((param_2->bEnableSwingLimits == false) || (EVar7 != Locked)) {
    bVar14 = false;
    if (param_2->bEnableSwingLimits != false) goto LAB_143ba8929;
  }
  else {
    bVar14 = true;
LAB_143ba8929:
    if (EVar6 == Locked) {
      bVar13 = true;
      goto LAB_143ba8934;
    }
  }
  bVar13 = false;
LAB_143ba8934:
  if (((bVar11 != false) || (bVar14 != false)) || (bVar13 != false)) {
    InitLockedRotationConstraints(this,param_3,param_1,bVar11,bVar14,bVar13);
  }
  return;
}

// InitRotationConstraintsSimd @ 143ba89a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationConstraintsSimd
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,float param_2)

{
  TRotation<double,3> *this_00;
  undefined1 auVar1 [16];
  undefined1 uVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  TVector<double,3> *pTVar18;
  TVector<double,3> *pTVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  float fVar26;
  uint uVar27;
  double dVar28;
  __m128 _Var29;
  undefined1 auVar30 [16];
  double dVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  uint uVar46;
  uint uVar47;
  undefined1 auStack_378 [32];
  float local_358;
  __m128 *local_350;
  longlong local_348;
  undefined1 local_340 [12];
  undefined8 local_330;
  undefined4 local_328;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  TRotation<double,3> local_2b8;
  TVector<double> local_298;
  TVector<double> local_280;
  undefined8 local_258;
  double local_148 [4];
  TVector<double,3> local_128;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_378;
  this_00 = this->ConnectorRs;
  local_2f8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_2f8._s_0.Y = _UNK_150689518;
  local_2f8._s_0.Z = 0.0;
  local_358 = param_2;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)this_00,&local_298,(TVector<double> *)&local_2f8._s_0);
  local_2d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_2d8._s_0.Y = _UNK_150689518;
  local_2d8._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)(this->ConnectorRs + 1),&local_280,(TVector<double> *)&local_2d8._s_0)
  ;
  FPBDJointUtilities::GetTwistAxisAngle(this_00,this->ConnectorRs + 1,&local_128,local_148);
  local_2b8._0_8_ = 0;
  local_2b8._8_8_ = 0;
  local_2b8._16_8_ = 0;
  local_2b8._24_8_ = 0;
  local_318 = 0.0;
  dStack_310 = 0.0;
  local_308 = 0.0;
  dStack_300 = 0.0;
  FPBDJointUtilities::DecomposeSwingTwistLocal
            (this_00,this->ConnectorRs + 1,(TRotation<double,3> *)&local_318,&local_2b8);
  dVar14 = __real_3ff0000000000000;
  dVar28 = *(double *)&this_00->field_0x0;
  dVar13 = *(double *)&this->ConnectorRs[0].field_0x8;
  auVar1 = *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10;
  uVar46 = (uint)__xmm_80000000000000008000000000000000;
  uVar47 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar12 = auVar1._8_8_;
  dVar23 = auVar1._0_8_;
  auVar24._8_4_ = auVar1._0_4_;
  auVar24._0_8_ = dVar23;
  auVar24._12_4_ = auVar1._4_4_;
  dVar9 = dVar28 * dStack_300 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          local_318 * dVar12 +
          local_308 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar23 * dStack_310 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar10 = dVar28 * local_308 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dStack_310 * dVar12 +
           dStack_300 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar24._8_8_ * local_318 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar31 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar47,SUB84(dVar9,0) ^ uVar46);
  dVar11 = dVar28 * dStack_310 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           local_308 * dVar12 +
           local_318 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar23 * dStack_300 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar12 = dVar28 * local_318 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dStack_300 * dVar12 +
           dStack_310 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar23 * local_308 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar23 = dVar10 + dVar10;
  dVar31 = dVar31 + dVar31;
  local_f8 = dVar12 * dVar23 - dVar11 * dVar31;
  local_f0 = dVar12 * dVar31 + dVar11 * dVar23;
  local_e8 = (dVar9 * dVar31 - dVar10 * dVar23) + __real_3ff0000000000000;
  local_148[2] = FGenericPlatformMath::Atan2(local_308,dStack_300 + __real_3ff0000000000000);
  local_148[2] = local_148[2] * __real_4010000000000000;
  dVar23 = dVar9 + dVar9;
  dVar28 = (double)CONCAT44((uint)((ulonglong)(dVar11 + dVar11) >> 0x20) ^ uVar47,
                            SUB84(dVar11 + dVar11,0) ^ uVar46);
  local_110 = dVar10 * dVar23 + dVar12 * dVar28;
  dStack_108 = (dVar11 * dVar28 - dVar9 * dVar23) + dVar14;
  local_100 = dVar12 * dVar23 - dVar10 * dVar28;
  dVar23 = FGenericPlatformMath::Atan2(dStack_310,dStack_300 + dVar14);
  pTVar19 = &this->InitConstraintAxisAngularVelocities;
  uVar15 = *(undefined4 *)&param_1->SwingRestitution;
  uVar16 = *(undefined4 *)((longlong)&param_1->SwingRestitution + 4);
  pTVar18 = &local_128;
  pfVar20 = (float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0xc0);
  lVar22 = (longlong)local_148 - (longlong)pTVar19;
  local_348 = 3;
  local_148[1] = dVar23 * __real_4010000000000000;
  lVar21 = 0;
  *(double *)&(this->RotationConstraints).ConstraintRestitution = param_1->TwistRestitution;
  local_350 = (this->RotationConstraints).field0_0x0.Simd.ConstraintAxis;
  *(undefined4 *)&(this->RotationConstraints).ConstraintRestitution.field_0x8 = uVar15;
  *(undefined4 *)&(this->RotationConstraints).ConstraintRestitution.field_0xc = uVar16;
  *(undefined4 *)&(this->RotationConstraints).ConstraintRestitution.field_0x10 = uVar15;
  *(undefined4 *)&(this->RotationConstraints).ConstraintRestitution.field_0x14 = uVar16;
  do {
    dVar23 = *(double *)((longlong)pTVar19 + lVar22);
    uVar25 = SUB84(dVar23,0);
    uVar27 = (uint)((ulonglong)dVar23 >> 0x20);
    if (0.0 <= dVar23) {
      uVar32 = *(uint *)pTVar18;
      uVar33 = *(uint *)&pTVar18->field_0x4;
      uVar34 = *(uint *)&pTVar18->field_0x8;
      uVar35 = *(uint *)&pTVar18->field_0xc;
      local_258 = *(undefined8 *)&pTVar18->field_0x10;
      uVar36 = (uint)local_258;
      uVar38 = (uint)((ulonglong)local_258 >> 0x20);
    }
    else {
      uVar25 = uVar25 ^ uVar46;
      uVar27 = uVar27 ^ uVar47;
      uVar32 = (uint)*(undefined8 *)pTVar18 ^ uVar46;
      uVar33 = (uint)((ulonglong)*(undefined8 *)pTVar18 >> 0x20) ^ uVar47;
      uVar34 = (uint)*(undefined8 *)&pTVar18->field_0x8 ^ uVar46;
      uVar35 = (uint)((ulonglong)*(undefined8 *)&pTVar18->field_0x8 >> 0x20) ^ uVar47;
      uVar36 = (uint)*(undefined8 *)&pTVar18->field_0x10 ^ uVar46;
      uVar38 = (uint)((ulonglong)*(undefined8 *)&pTVar18->field_0x10 >> 0x20) ^ uVar47;
    }
    pFVar3 = this->SolverBodies[1].Body;
    *(float *)((longlong)&local_330 + lVar21) = (float)(double)CONCAT44(uVar27,uVar25);
    if (pFVar3 == (FSolverBody *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L"");
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    fVar37 = *(float *)&(pFVar3->State).W;
    fVar39 = *(float *)&(pFVar3->State).W.field_0x4;
    fVar40 = *(float *)&(pFVar3->State).W.field_0x8;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xfa,L"");
      if (bVar17) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[0].Body;
    fVar44 = (float)(double)CONCAT44(uVar33,uVar32);
    fVar45 = (float)(double)CONCAT44(uVar35,uVar34);
    fVar26 = (float)(double)CONCAT44(uVar38,uVar36);
    *(double *)pTVar19 =
         ((double)fVar39 - (double)*(float *)&(pFVar3->State).W.field_0x4) *
         (double)CONCAT44(uVar35,uVar34) +
         ((double)fVar37 - (double)*(float *)&(pFVar3->State).W) * (double)CONCAT44(uVar33,uVar32) +
         ((double)fVar40 - (double)*(float *)&(pFVar3->State).W.field_0x8) *
         (double)CONCAT44(uVar38,uVar36);
    _Var29.m128_f32[1] = fVar45;
    _Var29.m128_f32[0] = fVar44;
    _Var29.m128_f32[2] = fVar26;
    _Var29.m128_f32[3] = 0.0;
    *local_350 = _Var29;
    dVar23 = *(double *)&this->InvIs[1].field_0x20;
    dVar12 = *(double *)&this->InvIs[1].field_0x28;
    dVar9 = *(double *)(this->InvIs + 1);
    dVar10 = *(double *)&this->InvIs[1].field_0x8;
    dVar11 = *(double *)&this->InvIs[1].field_0x10;
    fVar41 = (float)*(double *)&this->InvIs[0].field_0x40 * fVar26 +
             (float)*(double *)&this->InvIs[0].field_0x20 * fVar45 +
             (float)*(double *)this->InvIs * fVar44;
    fVar42 = (float)*(double *)&this->InvIs[0].field_0x48 * fVar26 +
             (float)*(double *)&this->InvIs[0].field_0x28 * fVar45 +
             (float)*(double *)&this->InvIs[0].field_0x8 * fVar44;
    fVar43 = (float)*(double *)&this->InvIs[0].field_0x50 * fVar26 +
             (float)*(double *)&this->InvIs[0].field_0x30 * fVar45 +
             (float)*(double *)&this->InvIs[0].field_0x10 * fVar44;
    dVar28 = *(double *)&this->InvIs[1].field_0x40;
    dVar13 = *(double *)&this->InvIs[1].field_0x48;
    local_350 = local_350 + 1;
    pTVar18 = pTVar18 + 1;
    pTVar19 = (TVector<double,3> *)&pTVar19->field_0x8;
    dVar14 = *(double *)&this->InvIs[1].field_0x50;
    dVar31 = *(double *)&this->InvIs[1].field_0x30;
    pfVar20[-4] = fVar41;
    pfVar20[-3] = fVar42;
    pfVar20[-2] = fVar43;
    pfVar20[-1] = fVar26 * 0.0 + fVar45 * 0.0 + fVar44 * 0.0;
    fVar37 = (float)dVar28 * fVar26 + (float)dVar23 * fVar45 + (float)dVar9 * fVar44;
    fVar39 = (float)dVar13 * fVar26 + (float)dVar12 * fVar45 + (float)dVar10 * fVar44;
    fVar40 = (float)dVar14 * fVar26 + (float)dVar31 * fVar45 + (float)dVar11 * fVar44;
    *pfVar20 = 0.0 - fVar37;
    pfVar20[1] = 0.0 - fVar39;
    pfVar20[2] = 0.0 - fVar40;
    pfVar20[3] = 0.0 - (fVar26 * 0.0 + fVar45 * 0.0 + fVar44 * 0.0);
    pfVar20 = pfVar20 + 8;
    *(float *)(local_340 + lVar21) =
         fVar39 * fVar45 + fVar37 * fVar44 + fVar40 * fVar26 +
         fVar42 * fVar45 + fVar41 * fVar44 + fVar43 * fVar26;
    lVar21 = lVar21 + 4;
    local_348 = local_348 + -1;
  } while (local_348 != 0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_340;
  *(undefined1 (*) [16])((longlong)&(this->RotationConstraints).field0_0x0 + 0xa0) = auVar1;
  dVar23 = *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x8;
  dVar12 = *(double *)&(this->RotationConstraints).SettingsSoftDamping;
  dVar9 = *(double *)&(this->RotationConstraints).SettingsSoftDamping.field_0x10;
  _Var29 = GlobalVectorConstants::FloatOne;
  if ((this->RotationConstraints).bAccelerationMode != '\0') {
    auVar8._12_4_ = 0;
    auVar8._0_12_ = local_340;
    _Var29.m128_f32 = (float  [4])divps(GlobalVectorConstants::FloatOne.m128_f32,auVar8);
  }
  bVar17 = this->bUsePositionBasedDrives;
  fVar37 = _Var29.m128_f32[0] * (float)*(double *)&(this->RotationConstraints).SettingsSoftStiffness
           * local_358 * local_358;
  fVar39 = _Var29.m128_f32[1] *
           (float)*(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x8 *
           local_358 * local_358;
  fVar40 = _Var29.m128_f32[2] *
           (float)*(double *)&(this->RotationConstraints).SettingsSoftStiffness.field_0x10 *
           local_358 * local_358;
  fVar26 = _Var29.m128_f32[3] * 0.0 * local_358 * local_358;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x10) = fVar37;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x14) = fVar39;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x18) = fVar40;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x1c) = fVar26;
  dVar10 = __real_47eff933c0000000;
  if (bVar17 == false) {
    fVar41 = 0.0;
    fVar42 = 0.0;
    fVar43 = 0.0;
    fVar44 = 0.0;
  }
  else {
    fVar41 = local_358 * (float)dVar12 * _Var29.m128_f32[0];
    fVar42 = local_358 * (float)dVar23 * _Var29.m128_f32[1];
    fVar43 = local_358 * (float)dVar9 * _Var29.m128_f32[2];
    fVar44 = local_358 * 0.0 * _Var29.m128_f32[3];
  }
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x20) = fVar41;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x24) = fVar42;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x28) = fVar43;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x2c) = fVar44;
  auVar30._8_4_ = local_328;
  auVar30._0_8_ = local_330;
  auVar30._12_4_ = 0;
  fVar45 = GlobalVectorConstants::FloatOne.m128_f32[0];
  fVar5 = GlobalVectorConstants::FloatOne.m128_f32[1];
  fVar6 = GlobalVectorConstants::FloatOne.m128_f32[2];
  fVar7 = GlobalVectorConstants::FloatOne.m128_f32[3];
  *(undefined1 (*) [16])((longlong)&(this->RotationConstraints).field0_0x0 + 0x110) = auVar30;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x90) =
       (fVar37 + fVar41) * local_340._0_4_ + fVar45;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x94) =
       (fVar39 + fVar42) * local_340._4_4_ + fVar5;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x98) =
       (fVar40 + fVar43) * local_340._8_4_ + fVar6;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x9c) =
       (fVar26 + fVar44) * 0.0 + fVar7;
  dVar12 = *(double *)&(param_1->AngularLimits).field_0x8;
  dVar23 = *(double *)&(param_1->AngularLimits).field_0x10;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x80) =
       (float)*(double *)&param_1->AngularLimits;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x84) = (float)dVar12;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x88) = (float)dVar23;
  *(float *)((longlong)&(this->RotationConstraints).field0_0x0 + 0x8c) = (float)dVar10;
  return;
}

// InitRotationDatasMass @ 143ba9200

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationDatasMass
          (FPBDJointCachedSolver *this,FAxisConstraintDatas *param_1,int param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  
  lVar4 = (longlong)param_2;
  dVar1 = *(double *)((longlong)&param_1->field0_0x0 + lVar4 * 0x18 + 0xd8);
  dVar2 = *(double *)((longlong)&param_1->field0_0x0 + lVar4 * 0x18 + 0xe0);
  dVar3 = *(double *)((longlong)&param_1->field0_0x0 + lVar4 * 0x18 + 0xe8);
  local_140 = dVar2 * *(double *)&this->InvIs[0].field_0x20 + dVar1 * *(double *)this->InvIs +
              dVar3 * *(double *)&this->InvIs[0].field_0x40;
  local_138 = dVar2 * *(double *)&this->InvIs[0].field_0x28 +
              dVar1 * *(double *)&this->InvIs[0].field_0x8 +
              dVar3 * *(double *)&this->InvIs[0].field_0x48;
  local_130 = dVar2 * *(double *)&this->InvIs[0].field_0x30 +
              dVar1 * *(double *)&this->InvIs[0].field_0x10 +
              dVar3 * *(double *)&this->InvIs[0].field_0x50;
  local_158 = dVar2 * *(double *)&this->InvIs[1].field_0x20 + dVar1 * *(double *)(this->InvIs + 1) +
              dVar3 * *(double *)&this->InvIs[1].field_0x40;
  local_150 = dVar2 * *(double *)&this->InvIs[1].field_0x28 +
              dVar1 * *(double *)&this->InvIs[1].field_0x8 +
              dVar3 * *(double *)&this->InvIs[1].field_0x48;
  local_148 = dVar2 * *(double *)&this->InvIs[1].field_0x30 +
              dVar1 * *(double *)&this->InvIs[1].field_0x10 +
              dVar3 * *(double *)&this->InvIs[1].field_0x50;
  FAxisConstraintDatas::UpdateMass
            (param_1,param_2,(TVector<double,3> *)&local_140,(TVector<double,3> *)&local_158,
             (local_150 + local_138) * dVar2 + (local_158 + local_140) * dVar1 +
             (local_148 + local_130) * dVar3,param_3,this->bUsePositionBasedDrives);
  return;
}

// InitRotationDrives @ 143ba9480

void __thiscall
Chaos::FPBDJointCachedSolver::InitRotationDrives
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  EJointMotionType EVar3;
  EJointMotionType EVar4;
  EJointMotionType EVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  (this->RotationDrives).bValidDatas0 = '\0';
  (this->RotationDrives).bValidDatas2 = '\0';
  (this->RotationDrives).bValidDatas1 = '\0';
  bVar2 = (this->RotationDrives).field_0x2c1;
  (this->RotationDrives).bUseSimd = '\0';
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
  EVar3 = (param_3->AngularMotionTypes).field0_0x0._s_0.X;
  EVar4 = (param_3->AngularMotionTypes).field0_0x0._s_0.Z;
  EVar5 = (param_3->AngularMotionTypes).field0_0x0._s_0.Y;
  if (((param_3->bAngularSLerpPositionDriveEnabled != false) ||
      (param_3->bAngularSLerpVelocityDriveEnabled != false)) &&
     ((EVar3 != Locked && ((EVar4 != Locked && (EVar5 != Locked)))))) {
    (this->RotationDrives).field_0x2c1 = (this->bUseSimd << 2 ^ bVar2) & 4 ^ bVar2;
    InitSLerpDrive(this,param_1,param_2,param_3);
    return;
  }
  if (((param_3->bAngularTwistPositionDriveEnabled == false) &&
      (param_3->bAngularTwistVelocityDriveEnabled == false)) || (EVar3 == Locked)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((param_3->bAngularSwingPositionDriveEnabled == false) &&
     (param_3->bAngularSwingVelocityDriveEnabled == false)) {
    bVar8 = false;
  }
  else {
    bVar8 = EVar4 != Locked;
    if (EVar5 != Locked) {
      bVar6 = true;
      goto LAB_143ba9585;
    }
  }
  bVar6 = false;
LAB_143ba9585:
  if (((bVar7 != false) || (bVar8 != false)) || (bVar6 != false)) {
    InitSwingTwistDrives(this,param_1,param_2,param_3,bVar7,bVar8,bVar6);
  }
  return;
}

// InitSLerpDrive @ 143ba95d0

void __thiscall
Chaos::FPBDJointCachedSolver::InitSLerpDrive
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  FAxisConstraintDatas *this_00;
  undefined8 uVar1;
  undefined1 uVar2;
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
  bool bVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  TVector<double>_u_0 local_d8 [8];
  
  this_00 = &this->RotationDrives;
  iVar19 = 0;
  do {
    dVar3 = FPBDJointUtilities::GetAngularSLerpDriveDamping(param_2,param_3);
    dVar4 = FPBDJointUtilities::GetAngularSLerpDriveStiffness(param_2,param_3);
    FAxisConstraintDatas::InitDatas(this_00,iVar19,true,dVar4,dVar3,0.0,true);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 3);
  bVar18 = FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  dVar17 = __real_3ff0000000000000;
  uVar20 = SUB84(__real_3ff0000000000000,0);
  uVar22 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  (this->RotationDrives).bAccelerationMode = bVar18;
  dVar7 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar8 = *(double *)&this->ConnectorRs[1].field_0x18;
  dVar9 = *(double *)(this->ConnectorRs + 1);
  dVar13 = *(double *)&this->ConnectorRs[1].field_0x8;
  dVar3 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
          *(double *)this->ConnectorRs;
  dVar4 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
          *(double *)&this->ConnectorRs[0].field_0x8;
  dVar5 = *(double *)&this->ConnectorRs[0].field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = *(double *)&this->ConnectorRs[0].field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar24._8_4_ = SUB84(dVar4,0);
  auVar24._0_8_ = dVar4;
  auVar24._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  dVar14 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x8;
  dVar11 = dVar3 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar6 * dVar9 +
           dVar4 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar5 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar12 = dVar3 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar6 * dVar13 +
           auVar24._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar5 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar15 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x10;
  dVar16 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x18;
  dVar10 = dVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar6 * dVar7 +
           dVar4 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = dVar3 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar6 * dVar8 +
          dVar4 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  if (dVar3 * dVar16 + dVar10 * dVar15 +
      dVar12 * dVar14 + dVar11 * *(double *)&param_3->AngularDrivePositionTarget < 0.0) {
    uVar20 = (undefined4)__real_bff0000000000000;
    uVar22 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  dVar8 = dVar15 * (double)CONCAT44(uVar22,uVar20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar9 = dVar16 * (double)CONCAT44(uVar22,uVar20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar6 = *(double *)&param_3->AngularDrivePositionTarget * (double)CONCAT44(uVar22,uVar20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar7 = dVar14 * (double)CONCAT44(uVar22,uVar20) *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar25._8_4_ = SUB84(dVar7,0);
  auVar25._0_8_ = dVar7;
  auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar4 = dVar6 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar11 * dVar9 +
          dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar5 = dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar12 * dVar9 +
          auVar25._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar3 = dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar10 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar4 = ((dVar4 * dVar4 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar4 * dVar4 +
          dVar17) * dVar4;
  dVar3 = ((dVar3 * dVar3 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar3 * dVar3 +
          dVar17) * dVar3;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar5 = ((dVar5 * dVar5 * __real_3fb3333333333333 + __real_3fc5555555555555) * dVar5 * dVar5 +
          dVar17) * dVar5;
  dVar5 = dVar5 + dVar5;
  TRotation<double,3>::ToMatrixAxes
            (this->ConnectorRs + 1,(TVector<double,3> *)&local_128,(TVector<double,3> *)&local_110,
             (TVector<double,3> *)&local_f8);
  if ((this->RotationDrives).bUseSimd == '\0') {
    InitRotationConstraintDrive(this,0,(TVector<double,3> *)&local_128,param_1,dVar4);
    InitRotationConstraintDrive(this,1,(TVector<double,3> *)&local_110,param_1,dVar5);
    InitRotationConstraintDrive(this,2,(TVector<double,3> *)&local_f8,param_1,dVar3);
  }
  else {
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) = 0;
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = 0;
    *(undefined8 *)&this_00->field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 8) = 0;
    local_148._s_0.X = dVar4;
    local_148._s_0.Y = dVar5;
    local_148._s_0.Z = dVar3;
    InitRotationConstraintDriveSimd
              (this,(TVector<double,3> *)&local_128,(float)param_1,
               (TVector<double,3> *)&local_148._s_0);
  }
  FAxisConstraintDatas::SetMaxForce(this_00,0,*(double *)&param_3->AngularDriveMaxTorque,param_1);
  FAxisConstraintDatas::SetMaxForce
            (this_00,1,*(double *)&(param_3->AngularDriveMaxTorque).field_0x8,param_1);
  FAxisConstraintDatas::SetMaxForce
            (this_00,2,*(double *)&(param_3->AngularDriveMaxTorque).field_0x10,param_1);
  uVar21 = (uint)*(undefined8 *)&param_3->AngularDriveVelocityTarget &
           (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)*(undefined8 *)&param_3->AngularDriveVelocityTarget >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar21) &&
        (double)CONCAT44(uVar23,uVar21) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x8,
      uVar21 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar23 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar21) &&
      (double)CONCAT44(uVar23,uVar21) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10,
     uVar21 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar23 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar23,uVar21) &&
     (double)CONCAT44(uVar23,uVar21) != __real_3f1a36e2e0000000)) {
    local_d8[0]._0_8_ = *(undefined8 *)&param_3->AngularDriveVelocityTarget;
    local_d8[0]._8_8_ = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x8;
    local_d8[0]._16_8_ = *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)this->ConnectorRs,(TVector<double> *)&local_148._s_0,
               (TVector<double> *)&local_d8[0]._s_0);
    *(double *)&(this->RotationDrives).ConstraintVX =
         local_148._s_0.Y * local_120 + local_148._s_0.X * local_128 + local_148._s_0.Z * local_118;
    *(double *)&(this->RotationDrives).ConstraintVX.field_0x8 =
         local_148._s_0.Y * local_108 + local_148._s_0.X * local_110 + local_148._s_0.Z * local_100;
    *(double *)&(this->RotationDrives).ConstraintVX.field_0x10 =
         local_148._s_0.Y * local_f0 + local_148._s_0.X * local_f8 + local_148._s_0.Z * local_e8;
  }
  return;
}

// InitSingleLockedSwingConstraint @ 143ba9bd0

void __thiscall
Chaos::FPBDJointCachedSolver::InitSingleLockedSwingConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2,
          EJointAngularConstraintIndex param_3)

{
  double local_res8;
  TVector<double,3> local_48 [2];
  
  FPBDJointUtilities::GetSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,0.0,param_3,local_48,&local_res8);
  InitRotationConstraintDatas(this,param_1,param_3,local_48,local_res8,0.0,param_2,false);
  return;
}

// InitSphericalPositionConstraint @ 143ba9c80

void __thiscall
Chaos::FPBDJointCachedSolver::InitSphericalPositionConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2)

{
  undefined1 *puVar1;
  FAxisConstraintDatas *pFVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  __m128 _Var6;
  __m128 _Var7;
  __m128 _Var8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  double local_res8;
  double local_res10;
  double local_res18;
  double local_res20;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  
  local_res18 = param_2;
  FPBDJointUtilities::GetSphericalAxisDelta
            (this->ConnectorXs,this->ConnectorXs + 1,(TVector<double,3> *)&local_138,&local_res8);
  uVar19 = (uint)((ulonglong)local_138 >> 0x20);
  uVar34 = SUB84(dStack_130,0);
  uVar35 = (uint)((ulonglong)dStack_130 >> 0x20);
  uVar30 = SUB84(local_128,0);
  uVar31 = (uint)((ulonglong)local_128 >> 0x20);
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if ((double)CONCAT44((uint)((ulonglong)(local_138 - __real_3ff0000000000000) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_138 - __real_3ff0000000000000,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000) {
    if ((double)CONCAT44((uint)((ulonglong)(dStack_130 - __real_3ff0000000000000) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dStack_130 - __real_3ff0000000000000,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3e45798ee0000000) {
      uVar32 = 0;
      uVar33 = 0;
      uVar30 = SUB84(local_138,0) ^ uVar24;
      uVar31 = uVar19 ^ uVar25;
    }
    else {
      uVar34 = uVar30 ^ uVar24;
      uVar35 = uVar31 ^ uVar25;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = SUB84(local_138,0);
      uVar33 = uVar19;
    }
  }
  else {
    uVar32 = uVar34 ^ uVar24;
    uVar33 = uVar35 ^ uVar25;
    uVar34 = 0;
    uVar35 = 0;
  }
  local_118 = *(double *)&this->ConnectorXs[1].field_0x8;
  dVar13 = *(double *)(this->ConnectorXs + 1) - *(double *)this->CurrentPs;
  dVar9 = *(double *)(this->ConnectorXs + 1) - *(double *)(this->CurrentPs + 1);
  dVar16 = (double)CONCAT44(uVar33,uVar32) * dStack_130 -
           local_128 * (double)CONCAT44(uVar31,uVar30);
  dVar14 = local_128 * (double)CONCAT44(uVar35,uVar34) - (double)CONCAT44(uVar33,uVar32) * local_138
  ;
  local_e8 = *(double *)&this->ConnectorXs[1].field_0x10;
  dVar15 = local_138 * (double)CONCAT44(uVar31,uVar30) -
           (double)CONCAT44(uVar35,uVar34) * dStack_130;
  local_120 = local_118 - *(double *)&this->CurrentPs[0].field_0x8;
  local_118 = local_118 - *(double *)&this->CurrentPs[1].field_0x8;
  local_100 = local_e8 - *(double *)&this->CurrentPs[0].field_0x10;
  local_e8 = local_e8 - *(double *)&this->CurrentPs[1].field_0x10;
  local_110 = dVar13;
  local_108 = local_120;
  local_f8 = dVar9;
  local_f0 = local_118;
  SetInitConstraintVelocity(this,(TVector<double,3> *)&local_110,(TVector<double,3> *)&local_f8);
  dVar18 = local_e8;
  dVar17 = local_100;
  local_res10 = param_1->LinearLimit;
  local_res20 = param_1->LinearRestitution;
  uVar19 = SUB84(dStack_130,0);
  uVar20 = (uint)((ulonglong)dStack_130 >> 0x20);
  if (0.0 <= local_res8) {
    auVar21._8_8_ = dStack_130;
    auVar21._0_8_ = local_138;
  }
  else {
    uVar22 = SUB84(local_138,0) ^ uVar24;
    uVar23 = (uint)((ulonglong)local_138 >> 0x20) ^ uVar25;
    local_138 = (double)CONCAT44(uVar23,uVar22);
    auVar21._4_4_ = uVar23;
    auVar21._0_4_ = uVar22;
    uVar19 = uVar19 ^ uVar24;
    uVar20 = uVar20 ^ uVar25;
    auVar21._12_4_ = uVar20;
    auVar21._8_4_ = uVar19;
    local_128 = (double)CONCAT44((uint)((ulonglong)local_128 >> 0x20) ^ uVar25,
                                 SUB84(local_128,0) ^ uVar24);
    local_res8 = (double)CONCAT44((uint)((ulonglong)local_res8 >> 0x20) ^ uVar25,
                                  SUB84(local_res8,0) ^ uVar24);
  }
  puVar1 = &(this->PositionConstraints).field_0x2c1;
  *puVar1 = *puVar1 & 0xef;
  pFVar2 = &this->PositionConstraints;
  puVar1 = &(this->PositionConstraints).field_0x2c1;
  *puVar1 = *puVar1 | 8;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x120) = local_res10;
  (this->PositionConstraints).bValidDatas0 = '\x01';
  (this->PositionConstraints).bLimitsCheck0 = '\x01';
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x1f8) = local_res8;
  *(undefined8 *)&(this->PositionConstraints).ConstraintVX = 0;
  *(double *)&(this->PositionConstraints).ConstraintRestitution = local_res20;
  uVar28 = SUB84(local_120,0);
  uVar29 = (undefined4)((ulonglong)local_120 >> 0x20);
  auVar10._8_4_ = uVar28;
  auVar10._0_8_ = dVar13;
  auVar10._12_4_ = uVar29;
  *(undefined1 (*) [16])
   ((longlong)(this->PositionConstraints).field0_0x0.Simd.ConstraintArms + 0x18) = auVar10;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x58) = local_100;
  uVar26 = SUB84(local_118,0);
  uVar27 = (undefined4)((ulonglong)local_118 >> 0x20);
  _Var6.m128_i32[2] = uVar26;
  _Var6.m128_u64[0] = (ulong64)dVar9;
  _Var6.m128_i32[3] = uVar27;
  (this->PositionConstraints).field0_0x0.Simd.ConstraintAxis[1] = _Var6;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x70) = local_e8;
  *(undefined1 (*) [16])
   ((longlong)(this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[1] + 8) = auVar21;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xe8) = local_128;
  *(double *)&this->InitConstraintAxisLinearVelocities =
       local_138 * *(double *)&this->InitConstraintVelocity +
       (double)CONCAT44(uVar20,uVar19) * *(double *)&(this->InitConstraintVelocity).field_0x8 +
       local_128 * *(double *)&(this->InitConstraintVelocity).field_0x10;
  InitPositionDatasMass(this,pFVar2,0,local_res18);
  dVar3 = param_1->LinearRestitution;
  dVar4 = param_1->LinearLimit;
  puVar1 = &(this->PositionConstraints).field_0x2c1;
  *puVar1 = *puVar1 & 0xbf;
  puVar1 = &(this->PositionConstraints).field_0x2c1;
  *puVar1 = *puVar1 | 0x20;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x128) = dVar4;
  (this->PositionConstraints).bValidDatas1 = '\x01';
  (this->PositionConstraints).bLimitsCheck1 = '\x01';
  *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x200) = 0x8000000000000000;
  *(undefined8 *)&(this->PositionConstraints).ConstraintVX.field_0x8 = 0;
  *(double *)&(this->PositionConstraints).ConstraintRestitution.field_0x8 = dVar3;
  auVar11._8_4_ = uVar28;
  auVar11._0_8_ = dVar13;
  auVar11._12_4_ = uVar29;
  *(undefined1 (*) [16])
   ((longlong)(this->PositionConstraints).field0_0x0.Simd.ConstraintAxis + 0x28) = auVar11;
  _Var7.m128_i32[2] = uVar26;
  _Var7.m128_u64[0] = (ulong64)dVar9;
  _Var7.m128_i32[3] = uVar27;
  (this->PositionConstraints).field0_0x0.Simd.ConstraintSoftIM = _Var7;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x88) = dVar17;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xa0) = dVar18;
  *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf0) = uVar34;
  *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf4) = uVar35;
  *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xf8) = uVar30;
  *(uint *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xfc) = uVar31;
  *(ulonglong *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x100) =
       CONCAT44(uVar33,uVar32);
  *(double *)&(this->InitConstraintAxisLinearVelocities).field_0x8 =
       (double)CONCAT44(uVar31,uVar30) * *(double *)&(this->InitConstraintVelocity).field_0x8 +
       (double)CONCAT44(uVar35,uVar34) * *(double *)&this->InitConstraintVelocity +
       (double)CONCAT44(uVar33,uVar32) * *(double *)&(this->InitConstraintVelocity).field_0x10;
  InitPositionDatasMass(this,pFVar2,1,local_res18);
  dVar3 = param_1->LinearRestitution;
  dVar4 = param_1->LinearLimit;
  puVar1 = &(this->PositionConstraints).field_0x2c2;
  *puVar1 = *puVar1 & 0xfd;
  puVar1 = &(this->PositionConstraints).field_0x2c2;
  *puVar1 = *puVar1 | 1;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x130) = dVar4;
  (this->PositionConstraints).bValidDatas2 = '\x01';
  (this->PositionConstraints).bLimitsCheck2 = '\x01';
  *(undefined8 *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x208) = 0x8000000000000000;
  *(undefined8 *)&(this->PositionConstraints).ConstraintVX.field_0x10 = 0;
  *(double *)&(this->PositionConstraints).ConstraintRestitution.field_0x10 = dVar3;
  auVar12._8_4_ = uVar28;
  auVar12._0_8_ = dVar13;
  auVar12._12_4_ = uVar29;
  *(undefined1 (*) [16])
   ((longlong)&(this->PositionConstraints).field0_0x0.Simd.ConstraintHardIM + 8) = auVar12;
  _Var8.m128_i32[2] = uVar26;
  _Var8.m128_u64[0] = (ulong64)dVar9;
  _Var8.m128_i32[3] = uVar27;
  (this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[0][1] = _Var8;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xb8) = dVar17;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0xd0) = dVar18;
  auVar5._8_4_ = SUB84(dVar14,0);
  auVar5._0_8_ = dVar16;
  auVar5._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])
   ((longlong)(this->PositionConstraints).field0_0x0.Simd.ConstraintDRAxis[2] + 0x18) = auVar5;
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + 0x118) = dVar15;
  *(double *)&(this->InitConstraintAxisLinearVelocities).field_0x10 =
       dVar16 * *(double *)&this->InitConstraintVelocity +
       dVar14 * *(double *)&(this->InitConstraintVelocity).field_0x8 +
       dVar15 * *(double *)&(this->InitConstraintVelocity).field_0x10;
  InitPositionDatasMass(this,pFVar2,2,local_res18);
  return;
}

// InitSwingConstraint @ 143baa180

void __thiscall
Chaos::FPBDJointCachedSolver::InitSwingConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,FPBDJointSolverSettings *param_2,
          double param_3,EJointAngularConstraintIndex param_4)

{
  double local_res8;
  TVector<double,3> local_38 [2];
  
  FPBDJointUtilities::GetSwingAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,param_2->SwingTwistAngleTolerance,param_4,
             local_38,&local_res8);
  InitRotationConstraintDatas
            (this,param_1,param_4,local_38,local_res8,param_1->SwingRestitution,param_3,true);
  return;
}

// InitSwingTwistDrives @ 143baa220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::InitSwingTwistDrives
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3,bool param_4,bool param_5,bool param_6)

{
  TQuat<double> *this_00;
  FAxisConstraintDatas *this_01;
  undefined1 *puVar1;
  double *pdVar2;
  undefined1 *puVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  char cVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  double dVar33;
  uint uVar34;
  uint uVar35;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  
  dVar16 = __real_3ff0000000000000;
  dVar32 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x10;
  dVar10 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x18;
  this_00 = (TQuat<double> *)(this->ConnectorRs + 1);
  dVar11 = *(double *)&param_3->AngularDrivePositionTarget;
  dVar12 = *(double *)&(param_3->AngularDrivePositionTarget).field_0x8;
  auVar25 = *(undefined1 (*) [16])this->ConnectorRs;
  auVar26 = *(undefined1 (*) [16])&this->ConnectorRs[0].field_0x10;
  dVar33 = auVar26._8_8_;
  dVar5 = auVar25._0_8_;
  auVar24._8_4_ = auVar26._8_4_;
  auVar24._0_8_ = dVar33;
  auVar24._12_4_ = auVar26._12_4_;
  dVar6 = auVar25._8_8_;
  auVar29._8_4_ = auVar25._8_4_;
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = auVar25._12_4_;
  dVar28 = auVar26._0_8_;
  auVar25._8_4_ = auVar26._0_4_;
  auVar25._0_8_ = dVar28;
  auVar25._12_4_ = auVar26._4_4_;
  dVar7 = dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar33 * dVar11 +
          dVar6 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar28 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar8 = dVar5 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar24._8_8_ * dVar12 +
          auVar29._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar25._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar23 = dVar5 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar33 * dVar32 +
           dVar6 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar28 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar33 * dVar10 +
          dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar28 * dVar32 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar6 = __real_bff0000000000000;
  if (0.0 <= dVar5 * *(double *)&this->ConnectorRs[1].field_0x18 +
             dVar23 * *(double *)&this->ConnectorRs[1].field_0x10 +
             dVar8 * *(double *)&this->ConnectorRs[1].field_0x8 + dVar7 * this_00->X) {
    dVar6 = __real_3ff0000000000000;
  }
  dVar10 = this_00->X;
  dVar11 = *(double *)&this->ConnectorRs[1].field_0x8;
  this_01 = &this->RotationDrives;
  dVar28 = dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar7 = dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar23 = dVar23 * dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar5 = dVar5 * dVar6 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar12 = *(double *)&this->ConnectorRs[1].field_0x10;
  dVar33 = *(double *)&this->ConnectorRs[1].field_0x18;
  auVar30._8_4_ = SUB84(dVar7,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar26._8_4_ = SUB84(dVar5,0);
  auVar26._0_8_ = dVar5;
  auVar26._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar32 = auVar30._8_8_ * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar23,0);
  auVar27._0_8_ = dVar23;
  auVar27._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar8 = dVar28 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar5 * dVar10 +
          dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar23 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar6 = dVar28 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          auVar26._8_8_ * dVar11 + dVar32 +
          auVar27._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar9._4_8_ = dVar32;
  auVar9._0_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar31._0_8_ = auVar9._0_8_ << 0x20;
  auVar31._8_4_ = SUB84(dVar6,0);
  auVar31._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar32 = dVar28 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar5 * dVar12 +
           dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar23 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar28 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar5 * dVar33 +
          dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar23 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar28 = auVar31._8_8_ + auVar31._8_8_;
  dVar6 = dVar8 + dVar8;
  dVar32 = dVar32 + dVar32;
  dVar23 = (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar28 = dVar5 * dVar23 + dVar8 * dVar32;
  dVar5 = dVar5 * dVar32 - dVar8 * dVar23;
  uVar34 = SUB84(dVar28,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar35 = (uint)((ulonglong)dVar28 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  dVar28 = FPBDJointUtilities::GetAngularTwistDriveDamping(param_2,param_3);
  dVar23 = FPBDJointUtilities::GetAngularTwistDriveStiffness(param_2,param_3);
  (this->RotationDrives).bSoftLimit0 = '\x01';
  *(undefined8 *)&this_01->field0_0x0 = 0;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x18) = dVar23;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x30) = dVar28;
  *(undefined8 *)&(this->RotationDrives).ConstraintMaxLambda = 0;
  *(double *)&(this->RotationDrives).SettingsSoftStiffness = dVar23;
  *(double *)&(this->RotationDrives).SettingsSoftDamping = dVar28;
  (this->RotationDrives).bValidDatas0 = '\0';
  (this->RotationDrives).bLimitsCheck0 = '\x01';
  (this->RotationDrives).MotionType0 = '\0';
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x210) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x218) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x220) = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(this->RotationDrives).ConstraintLambdaVelocity =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x8 = uVar19;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x10 = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x130) = uVar20;
  dVar28 = FPBDJointUtilities::GetAngularSwingDriveDamping(param_2,param_3);
  dVar23 = FPBDJointUtilities::GetAngularSwingDriveStiffness(param_2,param_3);
  (this->RotationDrives).bSoftLimit2 = '\x01';
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x10) = 0;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x28) = dVar23;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x40) = dVar28;
  *(undefined8 *)&(this->RotationDrives).ConstraintMaxLambda.field_0x10 = 0;
  *(double *)&(this->RotationDrives).SettingsSoftStiffness.field_0x10 = dVar23;
  *(double *)&(this->RotationDrives).SettingsSoftDamping.field_0x10 = dVar28;
  (this->RotationDrives).bValidDatas2 = '\0';
  (this->RotationDrives).bLimitsCheck2 = '\x01';
  (this->RotationDrives).MotionType2 = '\0';
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x210) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x218) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x220) = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(this->RotationDrives).ConstraintLambdaVelocity =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x8 = uVar19;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x10 = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x130) = uVar20;
  dVar28 = FPBDJointUtilities::GetAngularSwingDriveDamping(param_2,param_3);
  dVar23 = FPBDJointUtilities::GetAngularSwingDriveStiffness(param_2,param_3);
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 8) = 0;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x20) = dVar23;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x38) = dVar28;
  *(undefined8 *)&(this->RotationDrives).ConstraintMaxLambda.field_0x8 = 0;
  *(double *)&(this->RotationDrives).SettingsSoftStiffness.field_0x8 = dVar23;
  *(double *)&(this->RotationDrives).SettingsSoftDamping.field_0x8 = dVar28;
  (this->RotationDrives).MotionType1 = '\0';
  puVar1 = &(this->RotationDrives).field_0x2c0;
  (this->RotationDrives).bValidDatas1 = '\0';
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationDrives).bSoftLimit1 = '\x01';
  (this->RotationDrives).bLimitsCheck1 = '\x01';
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x210) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x218) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x220) = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&(this->RotationDrives).ConstraintLambdaVelocity =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x8 = uVar19;
  *(undefined8 *)&(this->RotationDrives).ConstraintLambdaVelocity.field_0x10 = uVar20;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = uVar19;
  *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x130) = uVar20;
  bVar21 = FPBDJointUtilities::GetAngularDriveAccelerationMode(param_2,param_3);
  uVar18 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  bVar4 = (this->RotationDrives).field_0x2c1;
  pdVar2 = &this->AngleTolerance;
  (this->RotationDrives).bAccelerationMode = bVar21;
  if ((!param_4) ||
     (((dVar28 = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar18,SUB84(dVar6,0) & uVar17)
       , dVar28 < *pdVar2 || dVar28 == *pdVar2 ||
       (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x18) <= 0.0)) &&
      (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x30) <= 0.0)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((!param_5) ||
     (((dVar28 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar18,SUB84(dVar5,0) & uVar17)
       , dVar28 < *pdVar2 || dVar28 == *pdVar2 ||
       (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x28) <= 0.0)) &&
      (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x40) <= 0.0)))) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if ((!param_6) ||
     (((dVar28 = (double)CONCAT44(uVar35 & uVar18,uVar34 & uVar17),
       dVar28 < *pdVar2 || dVar28 == *pdVar2 ||
       (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x20) <= 0.0)) &&
      (*(double *)((longlong)&(this->RotationDrives).field0_0x0 + 0x38) <= 0.0)))) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if ((((this->bUseSimd == false) || (!bVar13)) || (!bVar14)) || (!bVar15)) {
    cVar22 = '\0';
  }
  else {
    cVar22 = '\x01';
  }
  (this->RotationDrives).field_0x2c1 = bVar4 & 0xf9 | bVar21 * '\x02' | cVar22 << 2;
  if (cVar22 == '\0') {
    if (bVar13) {
      local_138._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_138._s_0.Y = _UNK_150689518;
      local_138._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0);
      local_138._s_0.X = local_118._s_0.X;
      local_138._s_0.Y = local_118._s_0.Y;
      local_138._s_0.Z = local_118._s_0.Z;
      InitRotationConstraintDrive(this,0,(TVector<double,3> *)&local_138._s_0,param_1,dVar6);
      *(undefined8 *)&(this->RotationDrives).ConstraintVX =
           *(undefined8 *)&param_3->AngularDriveVelocityTarget;
      FAxisConstraintDatas::SetMaxForce
                (this_01,0,*(double *)&param_3->AngularDriveMaxTorque,param_1);
    }
    if (bVar14) {
      local_138._s_0.Z = dVar16;
      local_138._s_0.X = 0.0;
      local_138._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0);
      local_138._s_0.X = local_118._s_0.X;
      local_138._s_0.Y = local_118._s_0.Y;
      local_138._s_0.Z = local_118._s_0.Z;
      InitRotationConstraintDrive(this,2,(TVector<double,3> *)&local_138._s_0,param_1,dVar5);
      *(undefined8 *)&(this->RotationDrives).ConstraintVX.field_0x10 =
           *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10;
      FAxisConstraintDatas::SetMaxForce
                (this_01,2,*(double *)&(param_3->AngularDriveMaxTorque).field_0x10,param_1);
    }
    if (!bVar15) {
      return;
    }
    local_138._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_138._s_0.Y = _UNK_15061cbc8;
    local_138._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0);
    local_138._s_0.X = local_118._s_0.X;
    local_138._s_0.Y = local_118._s_0.Y;
    local_138._s_0.Z = local_118._s_0.Z;
    InitRotationConstraintDrive
              (this,1,(TVector<double,3> *)&local_138._s_0,param_1,(double)CONCAT44(uVar35,uVar34));
  }
  else {
    local_118._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_118._s_0.Y = _UNK_150689518;
    local_118._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (this_00,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_118._s_0);
    local_e8 = local_138._s_0.Z;
    local_f8 = local_138._s_0.X;
    dStack_f0 = local_138._s_0.Y;
    local_138._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_138._s_0.Y = _UNK_15061cbc8;
    local_138._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0);
    local_e0 = local_118._s_0.X;
    dStack_d8 = local_118._s_0.Y;
    local_138._s_0.Z = dVar16;
    local_138._s_0.X = 0.0;
    local_138._s_0.Y = 0.0;
    local_d0 = local_118._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (this_00,(TVector<double> *)&local_118._s_0,(TVector<double> *)&local_138._s_0);
    local_c8 = local_118._s_0.X;
    dStack_c0 = local_118._s_0.Y;
    local_b8 = local_118._s_0.Z;
    local_118._s_0.X = dVar6;
    local_118._s_0.Y = (double)CONCAT44(uVar35,uVar34);
    local_118._s_0.Z = dVar5;
    InitRotationConstraintDriveSimd
              (this,(TVector<double,3> *)&local_f8,(float)param_1,
               (TVector<double,3> *)&local_118._s_0);
    *(undefined8 *)&(this->RotationDrives).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x120) = 0;
    *(undefined8 *)((longlong)&(this->RotationDrives).field0_0x0 + 0x128) = 0;
    *(undefined8 *)&(this->RotationDrives).ConstraintVX =
         *(undefined8 *)&param_3->AngularDriveVelocityTarget;
    FAxisConstraintDatas::SetMaxForce(this_01,0,*(double *)&param_3->AngularDriveMaxTorque,param_1);
    *(undefined8 *)&(this->RotationDrives).ConstraintVX.field_0x10 =
         *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x10;
    FAxisConstraintDatas::SetMaxForce
              (this_01,2,*(double *)&(param_3->AngularDriveMaxTorque).field_0x10,param_1);
  }
  *(undefined8 *)&(this->RotationDrives).ConstraintVX.field_0x8 =
       *(undefined8 *)&(param_3->AngularDriveVelocityTarget).field_0x8;
  FAxisConstraintDatas::SetMaxForce
            (this_01,1,*(double *)&(param_3->AngularDriveMaxTorque).field_0x8,param_1);
  return;
}

// InitTwistConstraint @ 143baab70

void __thiscall
Chaos::FPBDJointCachedSolver::InitTwistConstraint
          (FPBDJointCachedSolver *this,FPBDJointSettings *param_1,double param_2)

{
  double local_res8;
  TVector<double,3> local_38 [2];
  
  FPBDJointUtilities::GetTwistAxisAngle
            (this->ConnectorRs,this->ConnectorRs + 1,local_38,&local_res8);
  InitRotationConstraintDatas
            (this,param_1,0,local_38,local_res8,param_1->TwistRestitution,param_2,true);
  return;
}

// SetInitConstraintVelocity @ 143babf20

void __thiscall
Chaos::FPBDJointCachedSolver::SetInitConstraintVelocity
          (FPBDJointCachedSolver *this,TVector<double,3> *param_1,TVector<double,3> *param_2)

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
  double dVar12;
  FSolverBody *pFVar13;
  code *pcVar14;
  double dVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  pFVar13 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar13->State).V;
  fVar2 = *(float *)&(pFVar13->State).V.field_0x4;
  fVar3 = *(float *)&(pFVar13->State).V.field_0x8;
  if (pFVar13 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  pFVar13 = this->SolverBodies[0].Body;
  dVar7 = *(double *)&param_1->field_0x8;
  dVar8 = *(double *)&param_1->field_0x10;
  dVar9 = *(double *)param_1;
  dVar19 = (double)*(float *)&(pFVar13->State).W;
  dVar20 = (double)*(float *)&(pFVar13->State).W.field_0x4;
  dVar17 = (double)*(float *)&(pFVar13->State).W.field_0x8;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  pFVar13 = this->SolverBodies[1].Body;
  fVar4 = *(float *)&(pFVar13->State).V;
  fVar5 = *(float *)&(pFVar13->State).V.field_0x4;
  fVar6 = *(float *)&(pFVar13->State).V.field_0x8;
  if (pFVar13 == (FSolverBody *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar16) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  pFVar13 = this->SolverBodies[1].Body;
  dVar10 = *(double *)&param_2->field_0x8;
  dVar11 = *(double *)&param_2->field_0x10;
  dVar12 = *(double *)param_2;
  dVar15 = (double)*(float *)&(pFVar13->State).W.field_0x4;
  dVar18 = (double)*(float *)&(pFVar13->State).W.field_0x8;
  dVar21 = (double)*(float *)&(pFVar13->State).W;
  *(double *)&this->InitConstraintVelocity =
       ((dVar11 * dVar15 - dVar10 * dVar18) + (double)fVar4) -
       ((dVar8 * dVar20 - dVar7 * dVar17) + (double)fVar1);
  *(double *)&(this->InitConstraintVelocity).field_0x8 =
       ((dVar12 * dVar18 - dVar11 * dVar21) + (double)fVar5) -
       ((dVar9 * dVar17 - dVar8 * dVar19) + (double)fVar2);
  *(double *)&(this->InitConstraintVelocity).field_0x10 =
       ((dVar10 * dVar21 - dVar12 * dVar15) + (double)fVar6) -
       ((dVar7 * dVar19 - dVar9 * dVar20) + (double)fVar3);
  return;
}

// SetShockPropagationScales @ 143bac6c0

void __thiscall
Chaos::FPBDJointCachedSolver::SetShockPropagationScales
          (FPBDJointCachedSolver *this,double param_1,double param_2,double param_3)

{
  float fVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  double dVar17;
  
  fVar1 = this->SolverBodies[0].State.ShockPropagationScale;
  dVar17 = (double)fVar1;
  bVar14 = false;
  if ((dVar17 != param_1) && (0.0 < fVar1)) {
    bVar14 = true;
    dVar17 = param_1 / dVar17;
    dVar9 = *(double *)&this->InvIs[0].field_0x8 * dVar17;
    auVar5._8_4_ = SUB84(dVar9,0);
    auVar5._0_8_ = *(double *)this->InvIs * dVar17;
    auVar5._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])this->InvIs = auVar5;
    dVar9 = *(double *)&this->InvIs[0].field_0x10;
    this->InvMs[0] = dVar17 * this->InvMs[0];
    *(double *)&this->InvIs[0].field_0x10 = dVar17 * dVar9;
    dVar9 = *(double *)&this->InvIs[0].field_0x28 * dVar17;
    dVar10 = *(double *)&this->InvIs[0].field_0x48 * dVar17;
    auVar3._8_4_ = SUB84(dVar9,0);
    auVar3._0_8_ = *(double *)&this->InvIs[0].field_0x20 * dVar17;
    auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])&this->InvIs[0].field_0x20 = auVar3;
    auVar6._8_4_ = SUB84(dVar10,0);
    auVar6._0_8_ = *(double *)&this->InvIs[0].field_0x40 * dVar17;
    auVar6._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])&this->InvIs[0].field_0x40 = auVar6;
    *(double *)&this->InvIs[0].field_0x50 = dVar17 * *(double *)&this->InvIs[0].field_0x50;
    *(double *)&this->InvIs[0].field_0x30 = dVar17 * *(double *)&this->InvIs[0].field_0x30;
    this->SolverBodies[0].State.ShockPropagationScale = (float)param_1;
  }
  fVar1 = this->SolverBodies[1].State.ShockPropagationScale;
  dVar17 = (double)fVar1;
  if ((dVar17 == param_2) || (fVar1 <= 0.0)) {
    if (!bVar14) {
      return;
    }
  }
  else {
    dVar17 = param_2 / dVar17;
    dVar10 = *(double *)&this->InvIs[1].field_0x8 * dVar17;
    dVar9 = this->InvMs[1];
    auVar7._8_4_ = SUB84(dVar10,0);
    auVar7._0_8_ = *(double *)(this->InvIs + 1) * dVar17;
    auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])(this->InvIs + 1) = auVar7;
    dVar10 = *(double *)&this->InvIs[1].field_0x10;
    this->InvMs[1] = dVar17 * dVar9;
    dVar12 = *(double *)&this->InvIs[1].field_0x20;
    dVar9 = *(double *)&this->InvIs[1].field_0x28;
    *(double *)&this->InvIs[1].field_0x10 = dVar17 * dVar10;
    dVar13 = *(double *)&this->InvIs[1].field_0x40;
    dVar9 = dVar9 * dVar17;
    dVar11 = *(double *)&this->InvIs[1].field_0x48 * dVar17;
    auVar4._8_4_ = SUB84(dVar9,0);
    auVar4._0_8_ = dVar12 * dVar17;
    auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])&this->InvIs[1].field_0x20 = auVar4;
    dVar9 = *(double *)&this->InvIs[1].field_0x50;
    dVar10 = *(double *)&this->InvIs[1].field_0x30;
    auVar8._8_4_ = SUB84(dVar11,0);
    auVar8._0_8_ = dVar13 * dVar17;
    auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])&this->InvIs[1].field_0x40 = auVar8;
    *(double *)&this->InvIs[1].field_0x50 = dVar17 * dVar9;
    *(double *)&this->InvIs[1].field_0x30 = dVar17 * dVar10;
    this->SolverBodies[1].State.ShockPropagationScale = (float)param_2;
  }
  iVar16 = 0;
  do {
    if (iVar16 == 0) {
      bVar15 = (this->PositionConstraints).field_0x2c0;
LAB_143bac8bb:
      if ((bVar15 & 1) != 0) {
        InitPositionDatasMass(this,&this->PositionConstraints,iVar16,param_3);
      }
    }
    else {
      if (iVar16 == 1) {
        bVar15 = (byte)(this->PositionConstraints).field_0x2c0 >> 1;
        goto LAB_143bac8bb;
      }
      if (iVar16 == 2) {
        bVar15 = (byte)(this->PositionConstraints).field_0x2c0 >> 2;
        goto LAB_143bac8bb;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0x8c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar16 == 0) {
      bVar15 = (this->RotationConstraints).field_0x2c0;
LAB_143bac92a:
      if ((bVar15 & 1) != 0) {
        InitRotationDatasMass(this,&this->RotationConstraints,iVar16,param_3);
      }
    }
    else {
      if (iVar16 == 1) {
        bVar15 = (byte)(this->RotationConstraints).field_0x2c0 >> 1;
        goto LAB_143bac92a;
      }
      if (iVar16 == 2) {
        bVar15 = (byte)(this->RotationConstraints).field_0x2c0 >> 2;
        goto LAB_143bac92a;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0x8c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar16 == 0) {
      bVar15 = (this->PositionDrives).field_0x2c0;
LAB_143bac999:
      if ((bVar15 & 1) != 0) {
        InitPositionDatasMass(this,&this->PositionDrives,iVar16,param_3);
      }
    }
    else {
      if (iVar16 == 1) {
        bVar15 = (byte)(this->PositionDrives).field_0x2c0 >> 1;
        goto LAB_143bac999;
      }
      if (iVar16 == 2) {
        bVar15 = (byte)(this->PositionDrives).field_0x2c0 >> 2;
        goto LAB_143bac999;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0x8c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar16 == 0) {
      bVar15 = (this->RotationDrives).field_0x2c0;
LAB_143baca08:
      if ((bVar15 & 1) != 0) {
        InitRotationDatasMass(this,&this->RotationDrives,iVar16,param_3);
      }
    }
    else {
      if (iVar16 == 1) {
        bVar15 = (byte)(this->RotationDrives).field_0x2c0 >> 1;
        goto LAB_143baca08;
      }
      if (iVar16 == 2) {
        bVar15 = (byte)(this->RotationDrives).field_0x2c0 >> 2;
        goto LAB_143baca08;
      }
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0x8c,L"");
      if (bVar14) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar16 = iVar16 + 1;
    if (2 < iVar16) {
      return;
    }
  } while( true );
}

// SolveAngularVelocityConstraint @ 143bacb50

void __thiscall
Chaos::FPBDJointCachedSolver::SolveAngularVelocityConstraint
          (FPBDJointCachedSolver *this,int param_1,double param_2)

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
  code *pcVar12;
  bool bVar13;
  longlong lVar14;
  
  lVar14 = (longlong)param_1;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[1].Body;
  fVar1 = *(float *)&(pFVar11->State).W;
  fVar2 = *(float *)&(pFVar11->State).W.field_0x4;
  fVar3 = *(float *)&(pFVar11->State).W.field_0x8;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[0].Body;
  fVar4 = *(float *)&(pFVar11->State).W.field_0x8;
  fVar5 = *(float *)&(pFVar11->State).W;
  dVar7 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x18 + 0xe8);
  fVar6 = *(float *)&(pFVar11->State).W.field_0x4;
  dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x18 + 0xd8);
  dVar9 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x18 + 0xe0);
  if (2 < (uint)param_1) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  dVar7 = (((((double)fVar1 - (double)fVar5) * dVar8 + ((double)fVar2 - (double)fVar6) * dVar9 +
            ((double)fVar3 - (double)fVar4) * dVar7) - param_2) *
          this->SolverStiffness *
          *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 8)) /
          *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 8 + 0x150);
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  fVar1 = __real_00800000;
  pFVar11 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      (pFVar11->State).InvM) {
    dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 0x168);
    dVar9 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 0x170);
    dVar10 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 0x178);
    if (pFVar11 == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    pFVar11 = this->SolverBodies[0].Body;
    fVar2 = *(float *)&(pFVar11->State).W.field_0x4;
    fVar3 = *(float *)&(pFVar11->State).W.field_0x8;
    *(float *)&(pFVar11->State).W = (float)(dVar7 * dVar8) + *(float *)&(pFVar11->State).W;
    *(float *)&(pFVar11->State).W.field_0x4 = (float)(dVar7 * dVar9) + fVar2;
    *(float *)&(pFVar11->State).W.field_0x8 = (float)(dVar7 * dVar10) + fVar3;
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar11 = this->SolverBodies[1].Body;
  if (fVar1 < this->SolverBodies[1].State.ShockPropagationScale *
              this->SolverBodies[1].State.InvMScale * (pFVar11->State).InvM) {
    dVar8 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 0x180);
    dVar9 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 0x188);
    dVar10 = *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar14 * 0x30 + 400);
    if (pFVar11 == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    pFVar11 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar11->State).W.field_0x4;
    fVar2 = *(float *)&(pFVar11->State).W.field_0x8;
    *(float *)&(pFVar11->State).W = (float)(dVar7 * dVar8) + *(float *)&(pFVar11->State).W;
    *(float *)&(pFVar11->State).W.field_0x4 = (float)(dVar7 * dVar9) + fVar1;
    *(float *)&(pFVar11->State).W.field_0x8 = (float)(dVar7 * dVar10) + fVar2;
  }
  return;
}

// SolveLinearVelocityConstraint @ 143bacea0

void __thiscall
Chaos::FPBDJointCachedSolver::SolveLinearVelocityConstraint
          (FPBDJointCachedSolver *this,int param_1,double param_2)

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
  double dVar12;
  double dVar13;
  double dVar14;
  FSolverBody *pFVar15;
  code *pcVar16;
  bool bVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar18 = (longlong)param_1;
  if ((this->PositionConstraints).bUseSimd != '\0') {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("PositionConstraints.bUseSimd == false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                        ,0x3a5,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[0].Body;
  fVar1 = *(float *)&(pFVar15->State).V;
  fVar2 = *(float *)&(pFVar15->State).V.field_0x4;
  fVar3 = *(float *)&(pFVar15->State).V.field_0x8;
  if (pFVar15 == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[0].Body;
  dVar7 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x50);
  dVar8 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x58);
  dVar9 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x48);
  dVar24 = (double)*(float *)&(pFVar15->State).W.field_0x4;
  dVar20 = (double)*(float *)&(pFVar15->State).W.field_0x8;
  dVar22 = (double)*(float *)&(pFVar15->State).W;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[1].Body;
  fVar4 = *(float *)&(pFVar15->State).V;
  fVar5 = *(float *)&(pFVar15->State).V.field_0x4;
  fVar6 = *(float *)&(pFVar15->State).V.field_0x8;
  if (pFVar15 == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xfa,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[1].Body;
  dVar25 = (double)*(float *)&(pFVar15->State).W;
  dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x68);
  dVar19 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x60);
  dVar11 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x70);
  dVar21 = (double)*(float *)&(pFVar15->State).W.field_0x4;
  dVar23 = (double)*(float *)&(pFVar15->State).W.field_0x8;
  dVar12 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xe8);
  dVar13 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xd8);
  dVar14 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xe0);
  if (2 < (uint)param_1) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  dVar7 = ((((((dVar11 * dVar21 - dVar10 * dVar23) + (double)fVar4) -
             ((dVar8 * dVar24 - dVar7 * dVar20) + (double)fVar1)) * dVar13 +
             (((dVar19 * dVar23 - dVar11 * dVar25) + (double)fVar5) -
             ((dVar9 * dVar20 - dVar8 * dVar22) + (double)fVar2)) * dVar14 +
            (((dVar10 * dVar25 - dVar19 * dVar21) + (double)fVar6) -
            ((dVar7 * dVar22 - dVar9 * dVar24) + (double)fVar3)) * dVar12) - param_2) *
          this->SolverStiffness *
          *(double *)
           ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 + lVar18 * 8)) /
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 8 + 0x150);
  dVar8 = dVar7 * *(double *)
                   ((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xd8);
  dVar9 = dVar7 * *(double *)
                   ((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xe0);
  dVar20 = dVar7 * *(double *)
                    ((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x18 + 0xe8);
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      (pFVar15->State).InvM) {
    dVar22 = this->InvMs[0];
    dVar24 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x168);
    dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x170);
    dVar19 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x178);
    if (pFVar15 == (FSolverBody *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar17) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    pFVar15 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar15->State).V.field_0x4;
    *(float *)&(pFVar15->State).V = (float)(dVar22 * dVar8) + *(float *)&(pFVar15->State).V;
    *(float *)&(pFVar15->State).V.field_0x4 = (float)(dVar22 * dVar9) + fVar1;
    *(float *)&(pFVar15->State).V.field_0x8 =
         (float)(dVar22 * dVar20) + *(float *)&(pFVar15->State).V.field_0x8;
    fVar1 = *(float *)&(pFVar15->State).W.field_0x4;
    fVar2 = *(float *)&(pFVar15->State).W.field_0x8;
    *(float *)&(pFVar15->State).W = (float)(dVar7 * dVar24) + *(float *)&(pFVar15->State).W;
    *(float *)&(pFVar15->State).W.field_0x4 = (float)(dVar7 * dVar10) + fVar1;
    *(float *)&(pFVar15->State).W.field_0x8 = (float)(dVar7 * dVar19) + fVar2;
  }
  fVar1 = __real_00800000;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar17) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  pFVar15 = this->SolverBodies[1].Body;
  if (fVar1 < this->SolverBodies[1].State.ShockPropagationScale *
              this->SolverBodies[1].State.InvMScale * (pFVar15->State).InvM) {
    dVar19 = (double)CONCAT44((uint)((ulonglong)this->InvMs[1] >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(this->InvMs[1],0) ^ (uint)__xmm_80000000000000008000000000000000
                             );
    dVar22 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x180);
    dVar24 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 0x188);
    dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar18 * 0x30 + 400);
    if (pFVar15 == (FSolverBody *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar17) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
    pFVar15 = this->SolverBodies[1].Body;
    fVar1 = *(float *)&(pFVar15->State).V.field_0x4;
    *(float *)&(pFVar15->State).V = (float)(dVar8 * dVar19) + *(float *)&(pFVar15->State).V;
    *(float *)&(pFVar15->State).V.field_0x4 = (float)(dVar9 * dVar19) + fVar1;
    *(float *)&(pFVar15->State).V.field_0x8 =
         (float)(dVar20 * dVar19) + *(float *)&(pFVar15->State).V.field_0x8;
    fVar1 = *(float *)&(pFVar15->State).W.field_0x4;
    fVar2 = *(float *)&(pFVar15->State).W.field_0x8;
    *(float *)&(pFVar15->State).W = (float)(dVar7 * dVar22) + *(float *)&(pFVar15->State).W;
    *(float *)&(pFVar15->State).W.field_0x4 = (float)(dVar7 * dVar24) + fVar1;
    *(float *)&(pFVar15->State).W.field_0x8 = (float)(dVar7 * dVar10) + fVar2;
  }
  return;
}

// SolvePositionConstraintDelta @ 143bad490

void __thiscall
Chaos::FPBDJointCachedSolver::SolvePositionConstraintDelta
          (FPBDJointCachedSolver *this,int param_1,double param_2,FAxisConstraintDatas *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  bool bVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  
  lVar14 = (longlong)param_1;
  dVar9 = param_2 * *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x18 + 0xe8);
  dVar10 = param_2 * *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x18 + 0xd8);
  dVar11 = param_2 * *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x18 + 0xe0);
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar12 = __real_00800000;
  pFVar7 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      (pFVar7->State).InvM) {
    dVar3 = this->InvMs[0];
    dVar4 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 0x168);
    dVar5 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 0x170);
    dVar6 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 0x178);
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar7->State).DP.field_0x4;
    *(float *)&(pFVar7->State).DP = (float)(dVar3 * dVar10) + *(float *)&(pFVar7->State).DP;
    *(float *)&(pFVar7->State).DP.field_0x4 = (float)(dVar3 * dVar11) + fVar1;
    *(float *)&(pFVar7->State).DP.field_0x8 =
         (float)(dVar3 * dVar9) + *(float *)&(pFVar7->State).DP.field_0x8;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar7->State).DQ.field_0x4;
    *(float *)&(pFVar7->State).DQ = (float)(param_2 * dVar4) + *(float *)&(pFVar7->State).DQ;
    fVar2 = *(float *)&(pFVar7->State).DQ.field_0x8;
    *(float *)&(pFVar7->State).DQ.field_0x4 = (float)(param_2 * dVar5) + fVar1;
    *(float *)&(pFVar7->State).DQ.field_0x8 = (float)(param_2 * dVar6) + fVar2;
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = this->SolverBodies[1].Body;
  if (fVar12 < this->SolverBodies[1].State.ShockPropagationScale *
               this->SolverBodies[1].State.InvMScale * (pFVar7->State).InvM) {
    uVar15 = SUB84(this->InvMs[1],0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar16 = (uint)((ulonglong)this->InvMs[1] >> 0x20) ^
             __xmm_80000000000000008000000000000000._4_4_;
    dVar3 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 0x180);
    dVar4 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 0x188);
    dVar5 = *(double *)((longlong)&param_3->field0_0x0 + lVar14 * 0x30 + 400);
    if (pFVar7 == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[1].Body;
    *(float *)&(pFVar7->State).DP =
         (float)((double)CONCAT44(uVar16,uVar15) * dVar10) + *(float *)&(pFVar7->State).DP;
    *(float *)&(pFVar7->State).DP.field_0x4 =
         (float)((double)CONCAT44(uVar16,uVar15) * dVar11) + *(float *)&(pFVar7->State).DP.field_0x4
    ;
    *(float *)&(pFVar7->State).DP.field_0x8 =
         (float)((double)CONCAT44(uVar16,uVar15) * dVar9) + *(float *)&(pFVar7->State).DP.field_0x8;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar13) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[1].Body;
    *(float *)&(pFVar7->State).DQ = (float)(param_2 * dVar3) + *(float *)&(pFVar7->State).DQ;
    *(float *)&(pFVar7->State).DQ.field_0x4 =
         (float)(param_2 * dVar4) + *(float *)&(pFVar7->State).DQ.field_0x4;
    *(float *)&(pFVar7->State).DQ.field_0x8 =
         (float)(param_2 * dVar5) + *(float *)&(pFVar7->State).DQ.field_0x8;
  }
  this->NumActiveConstraints = this->NumActiveConstraints + 1;
  return;
}

// SolvePositionConstraintHard @ 143bad850

void __thiscall
Chaos::FPBDJointCachedSolver::SolvePositionConstraintHard
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar2 = (*(double *)
            ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 + lVar4 * 8) *
           this->SolverStiffness * param_2) /
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar4 * 8 + 0x150);
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar4 * 8 + 0x210) =
       dVar2 + *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar4 * 8 + 0x210);
  SolvePositionConstraintDelta(this,param_1,dVar2,&this->PositionConstraints);
  return;
}

// SolvePositionConstraintSoft @ 143bad960

void __thiscall
Chaos::FPBDJointCachedSolver::SolvePositionConstraintSoft
          (FPBDJointCachedSolver *this,int param_1,double param_2,double param_3,double param_4)

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
  FSolverBody *pFVar22;
  code *pcVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  double *pdVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  lVar28 = (longlong)param_1;
  if ((this->PositionConstraints).bUseSimd != '\0') {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("PositionConstraints.bUseSimd == false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.cpp"
                        ,0x302,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  dVar7 = 0.0;
  if (2 < (uint)param_1) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  if (__real_3f1a36e2e0000000 < *(double *)((longlong)(this->CurrentQs + 5) + lVar28 * 8 + 0x10)) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar26) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
    }
    pFVar22 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar22->State).DP.field_0x8;
    fVar2 = *(float *)&(pFVar22->State).DP.field_0x4;
    fVar3 = *(float *)&(pFVar22->State).DP;
    dVar7 = *(double *)&this->ConnectorXs[0].field_0x10;
    dVar8 = *(double *)&this->ConnectorXs[0].field_0x8;
    dVar9 = *(double *)this->ConnectorXs;
    if (pFVar22 == (FSolverBody *)0x0) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar26) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
    }
    pFVar22 = this->SolverBodies[0].Body;
    dVar25 = (double)*(float *)&(pFVar22->State).DQ;
    dVar10 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x50);
    dVar11 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x58);
    dVar12 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x48);
    dVar31 = (double)*(float *)&(pFVar22->State).DQ.field_0x4;
    dVar29 = (double)*(float *)&(pFVar22->State).DQ.field_0x8;
    dVar13 = *(double *)this->InitConnectorXs;
    dVar14 = *(double *)&this->InitConnectorXs[0].field_0x8;
    dVar15 = *(double *)&this->InitConnectorXs[0].field_0x10;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar26) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
    }
    pFVar22 = this->SolverBodies[1].Body;
    fVar4 = *(float *)&(pFVar22->State).DP.field_0x8;
    fVar5 = *(float *)&(pFVar22->State).DP.field_0x4;
    fVar6 = *(float *)&(pFVar22->State).DP;
    dVar16 = *(double *)&this->ConnectorXs[1].field_0x10;
    dVar17 = *(double *)&this->ConnectorXs[1].field_0x8;
    dVar18 = *(double *)(this->ConnectorXs + 1);
    if (pFVar22 == (FSolverBody *)0x0) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar26) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
    }
    pFVar22 = this->SolverBodies[1].Body;
    dVar24 = (double)*(float *)&(pFVar22->State).DQ.field_0x8;
    dVar19 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x70);
    dVar20 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x68);
    dVar21 = *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x30 + 0x60);
    dVar30 = (double)*(float *)&(pFVar22->State).DQ;
    dVar32 = (double)*(float *)&(pFVar22->State).DQ.field_0x4;
    dVar7 = ((((dVar11 * dVar31 - dVar10 * dVar29) + (double)fVar3 + dVar9) - dVar13) -
            (((dVar19 * dVar32 - dVar20 * dVar24) + (double)fVar6 + dVar18) -
            *(double *)(this->InitConnectorXs + 1))) *
            *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x18 + 0xd8) +
            ((((dVar12 * dVar29 - dVar25 * dVar11) + (double)fVar2 + dVar8) - dVar14) -
            (((dVar21 * dVar24 - dVar19 * dVar30) + (double)fVar5 + dVar17) -
            *(double *)&this->InitConnectorXs[1].field_0x8)) *
            *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x18 + 0xe0) +
            ((((dVar25 * dVar10 - dVar12 * dVar31) + (double)fVar1 + dVar7) - dVar15) -
            (((dVar20 * dVar30 - dVar21 * dVar32) + (double)fVar4 + dVar16) -
            *(double *)&this->InitConnectorXs[1].field_0x10)) *
            *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 0x18 + 0xe8) +
            param_3 * param_4;
  }
  if ((uint)param_1 < 3) {
    pdVar27 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 8 + 0x210);
  }
  else {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
    pdVar27 = (double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 8 + 0x210);
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  dVar7 = (((param_2 * *(double *)
                        ((longlong)&((FAxisConstraintDatas *)(this->CurrentQs + 4))->field0_0x0 +
                        lVar28 * 8 + 0x18) -
            dVar7 * *(double *)((longlong)(this->CurrentQs + 5) + lVar28 * 8 + 0x10)) - *pdVar27) *
          this->SolverStiffness) /
          *(double *)((longlong)&(this->PositionConstraints).field0_0x0 + lVar28 * 8 + 0x138);
  if (2 < (uint)param_1) {
    bVar26 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                        ,0x7a2,L"");
    if (bVar26) {
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  *pdVar27 = dVar7 + *pdVar27;
  SolvePositionConstraintDelta(this,param_1,dVar7,&this->PositionConstraints);
  return;
}

// SolveRotationConstraintDelta @ 143bade90

void __thiscall
Chaos::FPBDJointCachedSolver::SolveRotationConstraintDelta
          (FPBDJointCachedSolver *this,int param_1,double param_2,bool param_3,
          FAxisConstraintDatas *param_4)

{
  float fVar1;
  float fVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  
  lVar11 = (longlong)param_1;
  dVar8 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xd8);
  dVar6 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe0);
  dVar5 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe8);
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  fVar9 = __real_00800000;
  pFVar3 = this->SolverBodies[0].Body;
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      (pFVar3->State).InvM) {
    if (param_3) {
      dVar12 = *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xd8) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x168) +
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x170) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe0) +
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe8) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x178);
      dVar13 = dVar5 * dVar12;
      dVar7 = dVar6 * dVar12;
      dVar12 = dVar8 * dVar12;
    }
    else {
      dVar13 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x178);
      dVar7 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x170);
      dVar12 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x168);
    }
    if (pFVar3 == (FSolverBody *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar3->State).DQ.field_0x4;
    *(float *)&(pFVar3->State).DQ = (float)dVar12 + *(float *)&(pFVar3->State).DQ;
    fVar2 = *(float *)&(pFVar3->State).DQ.field_0x8;
    *(float *)&(pFVar3->State).DQ.field_0x4 = (float)dVar7 + fVar1;
    *(float *)&(pFVar3->State).DQ.field_0x8 = (float)dVar13 + fVar2;
  }
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->SolverBodies[1].Body;
  if (fVar9 < this->SolverBodies[1].State.ShockPropagationScale *
              this->SolverBodies[1].State.InvMScale * (pFVar3->State).InvM) {
    if (param_3) {
      dVar13 = *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x188) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe0) +
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x180) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xd8) +
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x18 + 0xe8) *
               *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 400);
      dVar5 = dVar5 * dVar13;
      dVar6 = dVar6 * dVar13;
      dVar8 = dVar8 * dVar13;
    }
    else {
      dVar5 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 400);
      dVar6 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x188);
      dVar8 = param_2 * *(double *)((longlong)&param_4->field0_0x0 + lVar11 * 0x30 + 0x180);
    }
    if (pFVar3 == (FSolverBody *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    *(float *)&(pFVar3->State).DQ = (float)dVar8 + *(float *)&(pFVar3->State).DQ;
    *(float *)&(pFVar3->State).DQ.field_0x4 = (float)dVar6 + *(float *)&(pFVar3->State).DQ.field_0x4
    ;
    *(float *)&(pFVar3->State).DQ.field_0x8 = (float)dVar5 + *(float *)&(pFVar3->State).DQ.field_0x8
    ;
  }
  this->NumActiveConstraints = this->NumActiveConstraints + 1;
  return;
}

// SolveRotationConstraintHard @ 143bae1e0

void __thiscall
Chaos::FPBDJointCachedSolver::SolveRotationConstraintHard
          (FPBDJointCachedSolver *this,int param_1,double param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  dVar2 = (*(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar4 * 8) *
           this->SolverStiffness * param_2) /
          *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar4 * 8 + 0x150);
  if (2 < (uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar4 * 8 + 0x210) =
       dVar2 + *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar4 * 8 + 0x210);
  SolveRotationConstraintDelta(this,param_1,dVar2,false,&this->RotationConstraints);
  return;
}

// SolveRotationConstraintSoft @ 143bae300

void __thiscall
Chaos::FPBDJointCachedSolver::SolveRotationConstraintSoft
          (FPBDJointCachedSolver *this,int param_1,double param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FSolverBody *pFVar7;
  code *pcVar8;
  bool bVar9;
  double *pdVar10;
  longlong lVar11;
  
  dVar4 = 0.0;
  lVar11 = (longlong)param_1;
  if (2 < (uint)param_1) {
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
  if (__real_3f1a36e2e0000000 <
      *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x30)) {
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0xf2,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[0].Body;
    fVar1 = *(float *)&(pFVar7->State).DQ;
    fVar2 = *(float *)&(pFVar7->State).DQ.field_0x4;
    fVar3 = *(float *)&(pFVar7->State).DQ.field_0x8;
    dVar4 = *(double *)this->ConnectorWDts;
    dVar5 = *(double *)&this->ConnectorWDts[0].field_0x8;
    dVar6 = *(double *)&this->ConnectorWDts[0].field_0x10;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SolverBodies[BodyIndex].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                         ,0xf2,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = this->SolverBodies[1].Body;
    dVar4 = (((double)fVar2 + dVar5) -
            ((double)*(float *)&(pFVar7->State).DQ.field_0x4 +
            *(double *)&this->ConnectorWDts[1].field_0x8)) *
            *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 0x18 + 0xe0) +
            (((double)fVar1 + dVar4) -
            ((double)*(float *)&(pFVar7->State).DQ + *(double *)(this->ConnectorWDts + 1))) *
            *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 0x18 + 0xd8) +
            (((double)fVar3 + dVar6) -
            ((double)*(float *)&(pFVar7->State).DQ.field_0x8 +
            *(double *)&this->ConnectorWDts[1].field_0x10)) *
            *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 0x18 + 0xe8) +
            param_3 * param_4;
  }
  if ((uint)param_1 < 3) {
    pdVar10 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x210);
  }
  else {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                       ,0x7a2,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pdVar10 = (double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x210);
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
  dVar4 = (((param_2 * *(double *)
                        ((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x18) -
            dVar4 * *(double *)
                     ((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x30)) -
           *pdVar10) * this->SolverStiffness) /
          *(double *)((longlong)&(this->RotationConstraints).field0_0x0 + lVar11 * 8 + 0x138);
  if (2 < (uint)param_1) {
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
  *pdVar10 = dVar4 + *pdVar10;
  SolveRotationConstraintDelta(this,param_1,dVar4,false,&this->RotationConstraints);
  return;
}

// Update @ 143bae860

void __thiscall
Chaos::FPBDJointCachedSolver::Update
          (FPBDJointCachedSolver *this,double param_1,FPBDJointSolverSettings *param_2,
          FPBDJointSettings *param_3)

{
  return;
}

// UpdateDerivedState @ 143baea20

void __thiscall
Chaos::FPBDJointCachedSolver::UpdateDerivedState(FPBDJointCachedSolver *this,int param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  
  ComputeBodyState(this,param_1);
  dVar4 = __real_bff0000000000000;
  if (0.0 <= *(double *)&this->ConnectorRs[0].field_0x18 *
             *(double *)&this->ConnectorRs[1].field_0x18 +
             *(double *)&this->ConnectorRs[0].field_0x10 *
             *(double *)&this->ConnectorRs[1].field_0x10 +
             *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8
             + *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1)) {
    dVar4 = __real_3ff0000000000000;
  }
  dVar2 = dVar4 * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = dVar4 * *(double *)(this->ConnectorRs + 1);
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar1;
  dVar2 = dVar4 * *(double *)&this->ConnectorRs[1].field_0x18;
  auVar3._8_4_ = SUB84(dVar2,0);
  auVar3._0_8_ = dVar4 * *(double *)&this->ConnectorRs[1].field_0x10;
  auVar3._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar3;
  return;
}

// UpdateDerivedState @ 143baead0

void __thiscall Chaos::FPBDJointCachedSolver::UpdateDerivedState(FPBDJointCachedSolver *this)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar3 = __real_3e45798ee0000000;
  if (__real_3e45798ee0000000 < this->InvMs[0]) {
    ComputeBodyState(this,0);
  }
  if (dVar3 < this->InvMs[1]) {
    ComputeBodyState(this,1);
  }
  if (*(double *)&this->ConnectorRs[0].field_0x18 * *(double *)&this->ConnectorRs[1].field_0x18 +
      *(double *)&this->ConnectorRs[0].field_0x10 * *(double *)&this->ConnectorRs[1].field_0x10 +
      *(double *)&this->ConnectorRs[0].field_0x8 * *(double *)&this->ConnectorRs[1].field_0x8 +
      *(double *)this->ConnectorRs * *(double *)(this->ConnectorRs + 1) < 0.0) {
    uVar4 = (undefined4)__real_bff0000000000000;
    uVar5 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  else {
    uVar4 = (undefined4)__real_3ff0000000000000;
    uVar5 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar3 = (double)CONCAT44(uVar5,uVar4) * *(double *)&this->ConnectorRs[1].field_0x8;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (double)CONCAT44(uVar5,uVar4) * *(double *)(this->ConnectorRs + 1);
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])(this->ConnectorRs + 1) = auVar2;
  dVar3 = *(double *)&this->ConnectorRs[1].field_0x18 * (double)CONCAT44(uVar5,uVar4);
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = *(double *)&this->ConnectorRs[1].field_0x10 * (double)CONCAT44(uVar5,uVar4);
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&this->ConnectorRs[1].field_0x10 = auVar1;
  return;
}

// UpdateIsActive @ 143baf5e0

bool __thiscall Chaos::FPBDJointCachedSolver::UpdateIsActive(FPBDJointCachedSolver *this)

{
  double dVar1;
  undefined8 uVar2;
  FSolverBody *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  if ((this->NumActiveConstraints < 0) || (this->SolverStiffness <= 0.0)) goto LAB_143baf8ac;
  dVar1 = this->PositionTolerance;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar3 = this->SolverBodies[0].Body;
  dVar17 = *(double *)&this->LastDPs[0].field_0x8 - (double)*(float *)&(pFVar3->State).DP.field_0x4;
  dVar15 = *(double *)&this->LastDPs[0].field_0x10 - (double)*(float *)&(pFVar3->State).DP.field_0x8
  ;
  dVar16 = *(double *)this->LastDPs - (double)*(float *)&(pFVar3->State).DP;
  uVar13 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((dVar1 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != dVar1) ||
      (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
LAB_143baf894:
    bVar11 = true;
  }
  else {
    dVar1 = this->PositionTolerance;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
    }
    dVar15 = __real_3fe0000000000000;
    pFVar3 = this->SolverBodies[1].Body;
    dVar18 = *(double *)&this->LastDPs[1].field_0x8 -
             (double)*(float *)&(pFVar3->State).DP.field_0x4;
    dVar17 = *(double *)&this->LastDPs[1].field_0x10 -
             (double)*(float *)&(pFVar3->State).DP.field_0x8;
    dVar16 = *(double *)(this->LastDPs + 1) - (double)*(float *)&(pFVar3->State).DP;
    uVar13 = SUB84(dVar16,0) & uVar9;
    uVar14 = (uint)((ulonglong)dVar16 >> 0x20) & uVar10;
    if (((dVar1 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != dVar1) ||
        (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar10,SUB84(dVar18,0) & uVar9
                                 ))) ||
       (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar10,SUB84(dVar17,0) & uVar9)
       )) goto LAB_143baf894;
    dVar1 = this->AngleTolerance * __real_3fe0000000000000;
    if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
    }
    pFVar3 = this->SolverBodies[0].Body;
    dVar18 = *(double *)&this->LastDQs[0].field_0x8 -
             (double)*(float *)&(pFVar3->State).DQ.field_0x4;
    dVar17 = *(double *)&this->LastDQs[0].field_0x10 -
             (double)*(float *)&(pFVar3->State).DQ.field_0x8;
    dVar16 = *(double *)this->LastDQs - (double)*(float *)&(pFVar3->State).DQ;
    uVar13 = SUB84(dVar16,0) & uVar9;
    uVar14 = (uint)((ulonglong)dVar16 >> 0x20) & uVar10;
    if (((dVar1 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != dVar1) ||
        (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & uVar10,SUB84(dVar18,0) & uVar9
                                 ))) ||
       (dVar1 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar10,SUB84(dVar17,0) & uVar9)
       )) goto LAB_143baf894;
    dVar15 = this->AngleTolerance * dVar15;
    if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SolverBodies[BodyIndex].IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                          ,0xf2,L"");
      if (bVar11) {
        pcVar4 = (code *)swi(3);
        uVar12 = (*pcVar4)();
        return (bool)uVar12;
      }
    }
    pFVar3 = this->SolverBodies[1].Body;
    dVar17 = *(double *)&this->LastDQs[1].field_0x8 -
             (double)*(float *)&(pFVar3->State).DQ.field_0x4;
    dVar16 = *(double *)&this->LastDQs[1].field_0x10 -
             (double)*(float *)&(pFVar3->State).DQ.field_0x8;
    dVar1 = *(double *)(this->LastDQs + 1) - (double)*(float *)&(pFVar3->State).DQ;
    uVar13 = SUB84(dVar1,0) & uVar9;
    uVar14 = (uint)((ulonglong)dVar1 >> 0x20) & uVar10;
    if (((dVar15 <= (double)CONCAT44(uVar14,uVar13) && (double)CONCAT44(uVar14,uVar13) != dVar15) ||
        (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar10,
                                   SUB84(dVar17,0) & uVar9))) ||
       (dVar15 < (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) & uVar10,SUB84(dVar16,0) & uVar9
                                 ))) goto LAB_143baf894;
    bVar11 = false;
  }
  this->bIsActive = bVar11;
LAB_143baf8ac:
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  pFVar3 = this->SolverBodies[0].Body;
  uVar2 = *(undefined8 *)&(pFVar3->State).DP.field_0x4;
  dVar1 = (double)(float)((ulonglong)uVar2 >> 0x20);
  *(double *)this->LastDPs = (double)*(float *)&(pFVar3->State).DP;
  auVar5._8_4_ = SUB84(dVar1,0);
  auVar5._0_8_ = (double)(float)uVar2;
  auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->LastDPs[0].field_0x8 = auVar5;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  pFVar3 = this->SolverBodies[1].Body;
  uVar2 = *(undefined8 *)&(pFVar3->State).DP.field_0x4;
  dVar1 = (double)(float)((ulonglong)uVar2 >> 0x20);
  *(double *)(this->LastDPs + 1) = (double)*(float *)&(pFVar3->State).DP;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = (double)(float)uVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->LastDPs[1].field_0x8 = auVar6;
  if (this->SolverBodies[0].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  pFVar3 = this->SolverBodies[0].Body;
  uVar2 = *(undefined8 *)&(pFVar3->State).DQ.field_0x4;
  dVar1 = (double)(float)((ulonglong)uVar2 >> 0x20);
  *(double *)this->LastDQs = (double)*(float *)&(pFVar3->State).DQ;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = (double)(float)uVar2;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->LastDQs[0].field_0x8 = auVar7;
  if (this->SolverBodies[1].Body == (FSolverBody *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SolverBodies[BodyIndex].IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Joint\\PBDJointCachedSolverGaussSeidel.h"
                        ,0xf2,L"");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  pFVar3 = this->SolverBodies[1].Body;
  uVar2 = *(undefined8 *)&(pFVar3->State).DQ.field_0x4;
  dVar1 = (double)(float)((ulonglong)uVar2 >> 0x20);
  *(double *)(this->LastDQs + 1) = (double)*(float *)&(pFVar3->State).DQ;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = (double)(float)uVar2;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&this->LastDQs[1].field_0x8 = auVar8;
  return this->bIsActive;
}

// UpdateMass0 @ 143bafa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::UpdateMass0
          (FPBDJointCachedSolver *this,double *param_1,TVector<double,3> *param_2)

{
  PMatrix<double,3,3> local_108;
  PMatrix<double,3,3> local_88;
  
  if (__real_00800000 <
      this->SolverBodies[0].State.ShockPropagationScale * this->SolverBodies[0].State.InvMScale *
      ((this->SolverBodies[0].Body)->State).InvM) {
    this->InvMs[0] = *param_1;
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._40_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._80_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._112_8_ = ___xmm_3ff00000000000000000000000000000;
    local_108._120_8_ = _UNK_15061cbc8;
    local_108._32_8_ = 0;
    local_108._64_8_ = 0;
    local_108._8_8_ = 0;
    local_108._72_8_ = 0;
    local_108._16_8_ = 0;
    local_108._48_8_ = 0;
    local_108._24_8_ = 0;
    local_108._56_8_ = 0;
    local_108._88_8_ = 0;
    local_108._96_8_ = 0;
    local_108._104_8_ = 0;
    Utilities::ComputeWorldSpaceInertia(&local_88,this->CurrentQs,&local_108);
    *(undefined8 *)this->InvIs = local_88._0_8_;
    *(undefined8 *)&this->InvIs[0].field_0x8 = local_88._8_8_;
    *(undefined8 *)&this->InvIs[0].field_0x10 = local_88._16_8_;
    *(undefined8 *)&this->InvIs[0].field_0x18 = local_88._24_8_;
    *(undefined8 *)&this->InvIs[0].field_0x20 = local_88._32_8_;
    *(undefined8 *)&this->InvIs[0].field_0x28 = local_88._40_8_;
    *(undefined8 *)&this->InvIs[0].field_0x30 = local_88._48_8_;
    *(undefined8 *)&this->InvIs[0].field_0x38 = local_88._56_8_;
    *(undefined8 *)&this->InvIs[0].field_0x40 = local_88._64_8_;
    *(undefined8 *)&this->InvIs[0].field_0x48 = local_88._72_8_;
    *(undefined8 *)&this->InvIs[0].field_0x50 = local_88._80_8_;
    *(undefined8 *)&this->InvIs[0].field_0x58 = local_88._88_8_;
    *(undefined8 *)&this->InvIs[0].field_0x60 = local_88._96_8_;
    *(undefined8 *)&this->InvIs[0].field_0x68 = local_88._104_8_;
    *(undefined8 *)&this->InvIs[0].field_0x70 = local_88._112_8_;
    *(undefined8 *)&this->InvIs[0].field_0x78 = local_88._120_8_;
    return;
  }
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
  return;
}

// UpdateMass1 @ 143bafe10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDJointCachedSolver::UpdateMass1
          (FPBDJointCachedSolver *this,double *param_1,TVector<double,3> *param_2)

{
  PMatrix<double,3,3> local_108;
  PMatrix<double,3,3> local_88;
  
  if (__real_00800000 <
      this->SolverBodies[1].State.ShockPropagationScale * this->SolverBodies[1].State.InvMScale *
      ((this->SolverBodies[1].Body)->State).InvM) {
    this->InvMs[1] = *param_1;
    local_108._0_8_ = *(undefined8 *)param_2;
    local_108._40_8_ = *(undefined8 *)&param_2->field_0x8;
    local_108._80_8_ = *(undefined8 *)&param_2->field_0x10;
    local_108._112_8_ = ___xmm_3ff00000000000000000000000000000;
    local_108._120_8_ = _UNK_15061cbc8;
    local_108._32_8_ = 0;
    local_108._64_8_ = 0;
    local_108._8_8_ = 0;
    local_108._72_8_ = 0;
    local_108._16_8_ = 0;
    local_108._48_8_ = 0;
    local_108._24_8_ = 0;
    local_108._56_8_ = 0;
    local_108._88_8_ = 0;
    local_108._96_8_ = 0;
    local_108._104_8_ = 0;
    Utilities::ComputeWorldSpaceInertia(&local_88,this->CurrentQs + 1,&local_108);
    *(undefined8 *)(this->InvIs + 1) = local_88._0_8_;
    *(undefined8 *)&this->InvIs[1].field_0x8 = local_88._8_8_;
    *(undefined8 *)&this->InvIs[1].field_0x10 = local_88._16_8_;
    *(undefined8 *)&this->InvIs[1].field_0x18 = local_88._24_8_;
    *(undefined8 *)&this->InvIs[1].field_0x20 = local_88._32_8_;
    *(undefined8 *)&this->InvIs[1].field_0x28 = local_88._40_8_;
    *(undefined8 *)&this->InvIs[1].field_0x30 = local_88._48_8_;
    *(undefined8 *)&this->InvIs[1].field_0x38 = local_88._56_8_;
    *(undefined8 *)&this->InvIs[1].field_0x40 = local_88._64_8_;
    *(undefined8 *)&this->InvIs[1].field_0x48 = local_88._72_8_;
    *(undefined8 *)&this->InvIs[1].field_0x50 = local_88._80_8_;
    *(undefined8 *)&this->InvIs[1].field_0x58 = local_88._88_8_;
    *(undefined8 *)&this->InvIs[1].field_0x60 = local_88._96_8_;
    *(undefined8 *)&this->InvIs[1].field_0x68 = local_88._104_8_;
    *(undefined8 *)&this->InvIs[1].field_0x70 = local_88._112_8_;
    *(undefined8 *)&this->InvIs[1].field_0x78 = local_88._120_8_;
    return;
  }
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
  return;
}

