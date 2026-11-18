// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ApplyForces @ 1474bd170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FAnimPhysSpring::ApplyForces(FAnimPhysSpring *this,float param_1)

{
  AnimPhysTwistAxis AVar1;
  FAnimPhysRigidBody *pFVar2;
  FAnimPhysRigidBody *pFVar3;
  code *pcVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar25;
  uint uVar27;
  uint uVar28;
  uint uVar30;
  double dVar31;
  double dVar32;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  TVector<double>_u_0 local_308;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double> local_288;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TQuat<double> local_f8 [7];
  double dVar26;
  double dVar29;
  
  dVar21 = __real_3ff0000000000000;
  if (this->bApplyLinear != false) {
    pFVar2 = this->Body0;
    if (pFVar2 == (FAnimPhysRigidBody *)0x0) {
      dVar31 = (this->Anchor0).field0_0x0._s_0.X;
      dVar22 = (this->Anchor0).field0_0x0._s_0.Y;
      dVar17 = (this->Anchor0).field0_0x0._s_0.Z;
      local_288.field0_0x0._s_0.Z = dVar17;
    }
    else {
      local_268._s_0.X = (this->Anchor0).field0_0x0._s_0.X;
      local_268._s_0.Y = (this->Anchor0).field0_0x0._s_0.Y;
      local_268._s_0.Z = (this->Anchor0).field0_0x0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&pFVar2->_padding_,(TVector<double> *)&local_2b8._s_0,
                 (TVector<double> *)&local_268._s_0);
      dVar31 = local_2b8._s_0.X + (double)pFVar2->_padding_;
      dVar22 = local_2b8._s_0.Y + (double)pFVar2->_padding_;
      dVar17 = local_2b8._s_0.Z + (double)pFVar2->_padding_;
    }
    pFVar3 = this->Body1;
    if (pFVar3 == (FAnimPhysRigidBody *)0x0) {
      auVar24 = *(undefined1 (*) [16])&(this->Anchor1).field0_0x0;
      dVar29 = auVar24._0_8_;
      dVar26 = (this->Anchor1).field0_0x0._s_0.Z;
      auVar8._4_8_ = unaff_XMM7_Qb;
      auVar8._0_4_ = auVar24._4_4_;
      auVar33._0_8_ = auVar8._0_8_ << 0x20;
      auVar33._8_4_ = auVar24._8_4_;
      auVar33._12_4_ = auVar24._12_4_;
      dVar32 = auVar33._8_8_;
      local_288.field0_0x0._s_0.Z = dVar26;
    }
    else {
      local_248._s_0.X = (this->Anchor1).field0_0x0._s_0.X;
      local_248._s_0.Y = (this->Anchor1).field0_0x0._s_0.Y;
      local_248._s_0.Z = (this->Anchor1).field0_0x0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&pFVar3->_padding_,(TVector<double> *)&local_2a0._s_0,
                 (TVector<double> *)&local_248._s_0);
      dVar29 = local_2a0._s_0.X + (double)pFVar3->_padding_;
      dVar32 = local_2a0._s_0.Y + (double)pFVar3->_padding_;
      dVar26 = local_2a0._s_0.Z + (double)pFVar3->_padding_;
    }
    if (pFVar2 == (FAnimPhysRigidBody *)0x0) {
      local_208._0_4_ = *(undefined4 *)&(this->Anchor0).field0_0x0;
      local_208._4_4_ = *(undefined4 *)((longlong)&(this->Anchor0).field0_0x0 + 4);
      local_208._8_4_ = *(undefined4 *)((longlong)&(this->Anchor0).field0_0x0 + 8);
      local_208._12_4_ = *(undefined4 *)((longlong)&(this->Anchor0).field0_0x0 + 0xc);
      local_208._s_0.Z = (this->Anchor0).field0_0x0._s_0.Z;
    }
    else {
      local_228._s_0.X = (this->Anchor0).field0_0x0._s_0.X;
      local_228._s_0.Y = (this->Anchor0).field0_0x0._s_0.Y;
      local_228._s_0.Z = (this->Anchor0).field0_0x0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&pFVar2->_padding_,(TVector<double> *)&local_208._s_0,
                 (TVector<double> *)&local_228._s_0);
    }
    local_308._s_0.Z = local_208._s_0.Z;
    if (pFVar3 == (FAnimPhysRigidBody *)0x0) {
      local_1c8._0_4_ = *(undefined4 *)&(this->Anchor1).field0_0x0;
      local_1c8._4_4_ = *(undefined4 *)((longlong)&(this->Anchor1).field0_0x0 + 4);
      local_1c8._8_4_ = *(undefined4 *)((longlong)&(this->Anchor1).field0_0x0 + 8);
      local_1c8._12_4_ = *(undefined4 *)((longlong)&(this->Anchor1).field0_0x0 + 0xc);
      local_1c8._s_0.Z = (this->Anchor1).field0_0x0._s_0.Z;
    }
    else {
      local_1e8._s_0.X = (this->Anchor1).field0_0x0._s_0.X;
      local_1e8._s_0.Y = (this->Anchor1).field0_0x0._s_0.Y;
      local_1e8._s_0.Z = (this->Anchor1).field0_0x0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&pFVar3->_padding_,(TVector<double> *)&local_1c8._s_0,
                 (TVector<double> *)&local_1e8._s_0);
    }
    dStack_2e8 = dVar32 - dVar22;
    local_2e0 = dVar26 - dVar17;
    uVar7 = dVar29 - dVar31;
    dVar17 = dStack_2e8 * dStack_2e8 + (double)uVar7 * (double)uVar7 + local_2e0 * local_2e0;
    if (dVar17 != dVar21) {
      if (__real_3e45798ee0000000 <= dVar17) {
        in_XMM3._0_8_ = dVar21 / SQRT(dVar17);
        in_XMM3._8_8_ = 0;
        dStack_2e8 = dStack_2e8 * in_XMM3._0_8_;
        local_2e0 = local_2e0 * in_XMM3._0_8_;
        uVar7 = (double)uVar7 * in_XMM3._0_8_;
      }
      else {
        local_2f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_2e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_2e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      }
    }
    dVar17 = (double)(float)((uint)((float)SQRT(dVar17) * this->SpringConstantLinear * param_1) ^
                            __xmm_80000000800000008000000080000000);
    dVar22 = (double)uVar7 * dVar17;
    dVar31 = dStack_2e8 * dVar17;
    dVar17 = local_2e0 * dVar17;
    if (pFVar2 != (FAnimPhysRigidBody *)0x0) {
      auVar9._4_8_ = in_XMM3._8_8_;
      auVar9._0_4_ = local_208._4_4_;
      auVar24._0_8_ = auVar9._0_8_ << 0x20;
      auVar24._8_4_ = local_208._8_4_;
      auVar24._12_4_ = local_208._12_4_;
      uVar25 = (uint)__xmm_80000000000000008000000000000000;
      uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      dVar32 = (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) ^ uVar27,SUB84(dVar22,0) ^ uVar25)
      ;
      in_XMM3._12_4_ = local_208._12_4_;
      in_XMM3._8_4_ = local_208._8_4_;
      uVar28 = SUB84(dVar31,0) ^ uVar25;
      uVar30 = (uint)((ulonglong)dVar31 >> 0x20) ^ uVar27;
      dVar29 = (double)CONCAT44(uVar30,uVar28);
      uVar25 = SUB84(dVar17,0) ^ uVar25;
      uVar27 = (uint)((ulonglong)dVar17 >> 0x20) ^ uVar27;
      dVar26 = (double)CONCAT44(uVar27,uVar25);
      pFVar2->_padding_ = (longlong)(dVar32 + (double)pFVar2->_padding_);
      pFVar2->_padding_ = (longlong)((double)CONCAT44(uVar30,uVar28) + (double)pFVar2->_padding_);
      in_XMM3._0_8_ = auVar24._8_8_ * dVar32;
      pFVar2->_padding_ = (longlong)((double)CONCAT44(uVar27,uVar25) + (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           ((auVar24._8_8_ * dVar26 - local_308._s_0.Z * dVar29) + (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           (((double)CONCAT44(local_208._4_4_,local_208._0_4_) * dVar29 - in_XMM3._0_8_) +
           (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           ((local_308._s_0.Z * dVar32 - (double)CONCAT44(local_208._4_4_,local_208._0_4_) * dVar26)
           + (double)pFVar2->_padding_);
    }
    pFVar2 = this->Body1;
    local_2d8._s_0.Z = local_1c8._s_0.Z;
    if (pFVar2 != (FAnimPhysRigidBody *)0x0) {
      auVar10._4_8_ = in_XMM3._8_8_;
      auVar10._0_4_ = local_1c8._4_4_;
      auVar23._0_8_ = auVar10._0_8_ << 0x20;
      auVar23._8_4_ = local_1c8._8_4_;
      auVar23._12_4_ = local_1c8._12_4_;
      in_XMM3._12_4_ = local_1c8._12_4_;
      in_XMM3._8_4_ = local_1c8._8_4_;
      pFVar2->_padding_ = (longlong)(dVar22 + (double)pFVar2->_padding_);
      pFVar2->_padding_ = (longlong)(dVar31 + (double)pFVar2->_padding_);
      in_XMM3._0_8_ = auVar23._8_8_ * dVar22;
      pFVar2->_padding_ = (longlong)(dVar17 + (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           ((auVar23._8_8_ * dVar17 - local_1c8._s_0.Z * dVar31) + (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           (((double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_) * dVar31 - in_XMM3._0_8_) +
           (double)pFVar2->_padding_);
      pFVar2->_padding_ =
           (longlong)
           ((local_1c8._s_0.Z * dVar22 - (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_) * dVar17)
           + (double)pFVar2->_padding_);
    }
  }
  uVar25 = __xmm_80000000800000008000000080000000;
  if (this->bApplyAngular != false) {
    AVar1 = this->AngularTargetAxis;
    local_308._s_0.Z = 0.0;
    local_308._s_0.X = 0.0;
    local_308._s_0.Y = 0.0;
    if (AVar1 == AxisX) {
      local_158._s_0.Z = 0.0;
      local_158._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_158._s_0.Y = _UNK_150689518;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&this->Body1->_padding_,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&local_158._s_0);
      local_308._s_0.X = local_138._s_0.X;
      local_308._s_0.Y = local_138._s_0.Y;
      local_308._s_0.Z = local_138._s_0.Z;
    }
    else if (AVar1 == AxisY) {
      local_198._s_0.Z = 0.0;
      local_198._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_198._s_0.Y = _UNK_15061cbc8;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&this->Body1->_padding_,(TVector<double> *)&local_178._s_0,
                 (TVector<double> *)&local_198._s_0);
      local_308._s_0.X = local_178._s_0.X;
      local_308._s_0.Y = local_178._s_0.Y;
      local_308._s_0.Z = local_178._s_0.Z;
    }
    else if (AVar1 == AxisZ) {
      local_2d8._s_0.Z = dVar21;
      local_2d8._s_0.X = 0.0;
      local_2d8._s_0.Y = 0.0;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)&this->Body1->_padding_,(TVector<double> *)&local_1b0._s_0,
                 (TVector<double> *)&local_2d8._s_0);
      local_308._s_0.X = local_1b0._s_0.X;
      local_308._s_0.Y = local_1b0._s_0.Y;
      local_308._s_0.Z = local_1b0._s_0.Z;
    }
    else {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                          ,0x442,L"Invalid target axis option");
      if (bVar12) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_118._s_0.X = (this->AngularTarget).field0_0x0._s_0.X;
    local_118._s_0.Y = (this->AngularTarget).field0_0x0._s_0.Y;
    local_118._s_0.Z = (this->AngularTarget).field0_0x0._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (&this->TargetOrientationOffset,&local_288,(TVector<double> *)&local_118._s_0);
    UE::Math::TQuat<double>::FindBetweenVectors
              (local_f8,(TVector<double> *)&local_308._s_0,&local_288);
    uVar16 = SUB84(__real_bff0000000000000,0);
    uVar20 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    if (__real_bff0000000000000 <= local_f8[0].W) {
      if (dVar21 <= local_f8[0].W) {
        local_f8[0].W = dVar21;
      }
      uVar16 = SUB84(local_f8[0].W,0);
      uVar20 = (undefined4)((ulonglong)local_f8[0].W >> 0x20);
    }
    dVar21 = local_f8[0].Z * local_f8[0].Z + local_f8[0].X * local_f8[0].X;
    dVar17 = local_f8[0].Y * local_f8[0].Y + 0.0;
    auVar18._8_4_ = SUB84(dVar17,0);
    auVar18._0_8_ = dVar21;
    auVar18._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar19._0_8_ = auVar18._8_8_ + dVar21;
    auVar19._8_8_ = dVar21 + dVar17;
    auVar24 = sqrtpd(in_XMM3,auVar19);
    uVar13 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar19._0_8_);
    uVar15 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar19._8_8_);
    auVar33 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar24);
    uVar14 = -(ulonglong)
              (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar19._0_8_);
    auVar34._0_8_ = uVar13 & (ulonglong)(auVar33._0_8_ * local_f8[0].X);
    uVar11 = uVar15 & (ulonglong)(auVar33._8_8_ * local_f8[0].Y);
    auVar34._8_4_ = (undefined4)uVar11;
    auVar34._12_4_ = (undefined4)(uVar11 >> 0x20);
    fVar5 = GlobalVectorConstants::Float1000.m128_f32[2];
    auVar6._4_4_ = ~(uint)(uVar13 >> 0x20) &
                   (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[0] >> 0x20);
    auVar6._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[0],0);
    auVar6._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float1000.m128_f32[1],0);
    auVar6._12_4_ =
         ~(uint)(uVar15 >> 0x20) &
         (uint)((ulonglong)(double)GlobalVectorConstants::Float1000.m128_f32[1] >> 0x20);
    auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar24);
    dVar21 = acos((double)CONCAT44(uVar20,uVar16));
    pFVar2 = this->Body0;
    dVar17 = (double)param_1;
    dVar21 = (double)(float)((uint)((float)(dVar21 + dVar21) * this->SpringConstantAngular) ^ uVar25
                            );
    dVar22 = dVar21 * SUB168(auVar34 | auVar6,0) * dVar17;
    dVar31 = dVar21 * SUB168(auVar34 | auVar6,8) * dVar17;
    dVar17 = dVar21 * (double)(CONCAT44(~(uint)(uVar14 >> 0x20) &
                                        (uint)((ulonglong)(double)fVar5 >> 0x20),
                                        ~(uint)uVar14 & SUB84((double)fVar5,0)) |
                              uVar14 & (ulonglong)(auVar24._0_8_ * local_f8[0].Z)) * dVar17;
    if (pFVar2 != (FAnimPhysRigidBody *)0x0) {
      pFVar2->_padding_ = (longlong)(dVar22 + (double)pFVar2->_padding_);
      pFVar2->_padding_ = (longlong)(dVar31 + (double)pFVar2->_padding_);
      pFVar2->_padding_ = (longlong)(dVar17 + (double)pFVar2->_padding_);
    }
    pFVar2 = this->Body1;
    if (pFVar2 != (FAnimPhysRigidBody *)0x0) {
      pFVar2->_padding_ = (longlong)((double)pFVar2->_padding_ - dVar22);
      pFVar2->_padding_ = (longlong)((double)pFVar2->_padding_ - dVar31);
      pFVar2->_padding_ = (longlong)((double)pFVar2->_padding_ - dVar17);
    }
  }
  return;
}

