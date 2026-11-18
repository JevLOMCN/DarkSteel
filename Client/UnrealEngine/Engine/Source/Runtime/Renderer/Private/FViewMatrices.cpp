// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// HackRemoveTemporalAAProjectionJitter @ 144779cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewMatrices::HackRemoveTemporalAAProjectionJitter(FViewMatrices *this)

{
  TMatrix<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar13;
  double dVar12;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_118 [32];
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  dVar12 = __real_3ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_118;
  dVar2 = (this->ProjectionMatrix).M[3][3];
  dVar3 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.X;
  dVar21 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.Y;
  if (__real_3ff0000000000000 <= dVar2) {
    dVar14 = (this->ProjectionMatrix).M[3][1];
    (this->ProjectionMatrix).M[3][0] = (this->ProjectionMatrix).M[3][0] - dVar3;
    (this->ProjectionMatrix).M[3][1] = dVar14 - dVar21;
  }
  else {
    dVar14 = (this->ProjectionMatrix).M[2][1];
    (this->ProjectionMatrix).M[2][0] = (this->ProjectionMatrix).M[2][0] - dVar3;
    (this->ProjectionMatrix).M[2][1] = dVar14 - dVar21;
  }
  dVar3 = (this->ProjectionMatrix).M[1][0];
  if (((((((dVar3 == 0.0) && ((this->ProjectionMatrix).M[3][0] == 0.0)) &&
         ((this->ProjectionMatrix).M[0][1] == 0.0)) &&
        (((this->ProjectionMatrix).M[3][1] == 0.0 && ((this->ProjectionMatrix).M[0][2] == 0.0)))) &&
       (((this->ProjectionMatrix).M[1][2] == 0.0 &&
        (((this->ProjectionMatrix).M[0][3] == 0.0 && ((this->ProjectionMatrix).M[1][3] == 0.0))))))
      && (dVar12 == (this->ProjectionMatrix).M[2][3])) && (dVar2 == 0.0)) {
    dVar2 = dVar12 / (this->ProjectionMatrix).M[3][2];
    dVar21 = dVar12 / (this->ProjectionMatrix).M[1][1];
    dVar3 = dVar12 / (this->ProjectionMatrix).M[0][0];
    dVar14 = dVar2 * (this->ProjectionMatrix).M[2][2];
    dVar4 = dVar21 * (this->ProjectionMatrix).M[2][1];
    dVar5 = dVar3 * (this->ProjectionMatrix).M[2][0];
    uVar11 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar17 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar7 = SUB84(dVar5,0) ^ uVar11;
    uVar8 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar13;
    uVar9 = SUB84(dVar4,0) ^ uVar11;
    uVar10 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar13;
    uVar22 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar13,SUB84(dVar14,0) ^ uVar11);
  }
  else {
    dVar2 = (this->ProjectionMatrix).M[0][0];
    uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((((__real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
            (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000) ||
          (dVar2 = (this->ProjectionMatrix).M[0][1],
          uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
          (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000)) ||
         (dVar2 = (this->ProjectionMatrix).M[0][2],
         uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
         (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000)) ||
        (((uVar7 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
          (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000 ||
          (dVar2 = (this->ProjectionMatrix).M[1][1],
          uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
          (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000)) ||
         ((dVar2 = (this->ProjectionMatrix).M[1][2],
          uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
          (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000 ||
          ((dVar2 = (this->ProjectionMatrix).M[2][0],
           uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
           (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000 ||
           (dVar2 = (this->ProjectionMatrix).M[2][1],
           uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
           (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000)))))))) ||
       (dVar2 = (this->ProjectionMatrix).M[2][2],
       uVar7 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3e45798ee0000000 <= (double)CONCAT44(uVar8,uVar7) &&
       (double)CONCAT44(uVar8,uVar7) != __real_3e45798ee0000000)) {
      FMath::MatrixInverse(&local_f8,&this->ProjectionMatrix);
      uVar19 = SUB84(local_f8.M[0][1],0);
      uVar20 = (undefined4)((ulonglong)local_f8.M[0][1] >> 0x20);
      uVar15 = SUB84(local_f8.M[1][0],0);
      uVar16 = (undefined4)((ulonglong)local_f8.M[1][0] >> 0x20);
      uVar17 = SUB84(local_f8.M[2][2],0);
      uVar18 = (undefined4)((ulonglong)local_f8.M[2][2] >> 0x20);
      uVar7 = local_f8.M[3][0]._0_4_;
      uVar8 = local_f8.M[3][0]._4_4_;
      uVar9 = local_f8.M[3][1]._0_4_;
      uVar10 = local_f8.M[3][1]._4_4_;
      uVar22 = local_f8.M[0][2]._0_4_;
      uVar23 = local_f8.M[0][2]._4_4_;
      uVar24 = local_f8.M[0][3]._0_4_;
      uVar25 = local_f8.M[0][3]._4_4_;
      uVar26 = local_f8.M[1][2]._0_4_;
      uVar27 = local_f8.M[1][2]._4_4_;
      uVar28 = local_f8.M[1][3]._0_4_;
      uVar29 = local_f8.M[1][3]._4_4_;
      uVar30 = local_f8.M[2][0]._0_4_;
      uVar31 = local_f8.M[2][0]._4_4_;
      uVar32 = local_f8.M[2][1]._0_4_;
      uVar33 = local_f8.M[2][1]._4_4_;
      dVar2 = local_f8.M[2][3];
      dVar3 = local_f8.M[0][0];
      dVar21 = local_f8.M[1][1];
      dVar12 = local_f8.M[3][2];
      dVar14 = local_f8.M[3][3];
    }
    else {
      uVar19 = UE::Math::TMatrix<double>::Identity.M[0][1]._0_4_;
      uVar20 = UE::Math::TMatrix<double>::Identity.M[0][1]._4_4_;
      uVar15 = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
      uVar16 = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
      uVar17 = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
      uVar18 = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
      uVar7 = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
      uVar8 = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
      uVar9 = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
      uVar10 = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
      uVar22 = UE::Math::TMatrix<double>::Identity.M[0][2]._0_4_;
      uVar23 = UE::Math::TMatrix<double>::Identity.M[0][2]._4_4_;
      uVar24 = UE::Math::TMatrix<double>::Identity.M[0][3]._0_4_;
      uVar25 = UE::Math::TMatrix<double>::Identity.M[0][3]._4_4_;
      uVar26 = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_;
      uVar27 = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_;
      uVar28 = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_;
      uVar29 = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_;
      uVar30 = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
      uVar31 = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
      uVar32 = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
      uVar33 = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
      dVar2 = UE::Math::TMatrix<double>::Identity.M[2][3];
      dVar3 = UE::Math::TMatrix<double>::Identity.M[0][0];
      dVar21 = UE::Math::TMatrix<double>::Identity.M[1][1];
      dVar12 = UE::Math::TMatrix<double>::Identity.M[3][2];
      dVar14 = UE::Math::TMatrix<double>::Identity.M[3][3];
    }
  }
  pTVar1 = &this->InvProjectionMatrix;
  auVar6._8_4_ = uVar19;
  auVar6._0_8_ = dVar3;
  auVar6._12_4_ = uVar20;
  *(undefined1 (*) [16])pTVar1->M[0] = auVar6;
  *(undefined4 *)((this->InvProjectionMatrix).M[0] + 2) = uVar22;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[0] + 0x14) = uVar23;
  *(undefined4 *)((this->InvProjectionMatrix).M[0] + 3) = uVar24;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[0] + 0x1c) = uVar25;
  *(undefined4 *)(this->InvProjectionMatrix).M[1] = uVar15;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[1] + 4) = uVar16;
  (this->InvProjectionMatrix).M[1][1] = dVar21;
  *(undefined4 *)((this->InvProjectionMatrix).M[1] + 2) = uVar26;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[1] + 0x14) = uVar27;
  *(undefined4 *)((this->InvProjectionMatrix).M[1] + 3) = uVar28;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[1] + 0x1c) = uVar29;
  *(undefined4 *)(this->InvProjectionMatrix).M[2] = uVar30;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[2] + 4) = uVar31;
  *(undefined4 *)((this->InvProjectionMatrix).M[2] + 1) = uVar32;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[2] + 0xc) = uVar33;
  *(undefined4 *)((this->InvProjectionMatrix).M[2] + 2) = uVar17;
  *(undefined4 *)((longlong)(this->InvProjectionMatrix).M[2] + 0x14) = uVar18;
  (this->InvProjectionMatrix).M[2][3] = dVar2;
  *(uint *)(this->InvProjectionMatrix).M[3] = uVar7;
  *(uint *)((longlong)(this->InvProjectionMatrix).M[3] + 4) = uVar8;
  *(uint *)((this->InvProjectionMatrix).M[3] + 1) = uVar9;
  *(uint *)((longlong)(this->InvProjectionMatrix).M[3] + 0xc) = uVar10;
  (this->InvProjectionMatrix).M[3][2] = dVar12;
  (this->InvProjectionMatrix).M[3][3] = dVar14;
  (this->TemporalAAProjectionJitter).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  VectorMatrixMultiply(&local_f8,&this->ViewMatrix,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_f8.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_f8.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] =
       (double)CONCAT44(local_f8.M[0][2]._4_4_,local_f8.M[0][2]._0_4_);
  (this->ViewProjectionMatrix).M[0][3] =
       (double)CONCAT44(local_f8.M[0][3]._4_4_,local_f8.M[0][3]._0_4_);
  (this->ViewProjectionMatrix).M[1][0] = local_f8.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_f8.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] =
       (double)CONCAT44(local_f8.M[1][2]._4_4_,local_f8.M[1][2]._0_4_);
  (this->ViewProjectionMatrix).M[1][3] =
       (double)CONCAT44(local_f8.M[1][3]._4_4_,local_f8.M[1][3]._0_4_);
  (this->ViewProjectionMatrix).M[2][0] =
       (double)CONCAT44(local_f8.M[2][0]._4_4_,local_f8.M[2][0]._0_4_);
  (this->ViewProjectionMatrix).M[2][1] =
       (double)CONCAT44(local_f8.M[2][1]._4_4_,local_f8.M[2][1]._0_4_);
  (this->ViewProjectionMatrix).M[2][2] = local_f8.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_f8.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] =
       (double)CONCAT44(local_f8.M[3][0]._4_4_,local_f8.M[3][0]._0_4_);
  (this->ViewProjectionMatrix).M[3][1] =
       (double)CONCAT44(local_f8.M[3][1]._4_4_,local_f8.M[3][1]._0_4_);
  (this->ViewProjectionMatrix).M[3][2] = local_f8.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_f8.M[3][3];
  VectorMatrixMultiply(&local_f8,pTVar1,&this->InvViewMatrix);
  (this->InvViewProjectionMatrix).M[0][0] = local_f8.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_f8.M[0][1];
  (this->InvViewProjectionMatrix).M[0][2] =
       (double)CONCAT44(local_f8.M[0][2]._4_4_,local_f8.M[0][2]._0_4_);
  (this->InvViewProjectionMatrix).M[0][3] =
       (double)CONCAT44(local_f8.M[0][3]._4_4_,local_f8.M[0][3]._0_4_);
  (this->InvViewProjectionMatrix).M[1][0] = local_f8.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_f8.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] =
       (double)CONCAT44(local_f8.M[1][2]._4_4_,local_f8.M[1][2]._0_4_);
  (this->InvViewProjectionMatrix).M[1][3] =
       (double)CONCAT44(local_f8.M[1][3]._4_4_,local_f8.M[1][3]._0_4_);
  (this->InvViewProjectionMatrix).M[2][0] =
       (double)CONCAT44(local_f8.M[2][0]._4_4_,local_f8.M[2][0]._0_4_);
  (this->InvViewProjectionMatrix).M[2][1] =
       (double)CONCAT44(local_f8.M[2][1]._4_4_,local_f8.M[2][1]._0_4_);
  (this->InvViewProjectionMatrix).M[2][2] = local_f8.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_f8.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] =
       (double)CONCAT44(local_f8.M[3][0]._4_4_,local_f8.M[3][0]._0_4_);
  (this->InvViewProjectionMatrix).M[3][1] =
       (double)CONCAT44(local_f8.M[3][1]._4_4_,local_f8.M[3][1]._0_4_);
  (this->InvViewProjectionMatrix).M[3][2] = local_f8.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_f8.M[3][3];
  VectorMatrixMultiply(&local_f8,&this->TranslatedViewMatrix,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_f8.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_f8.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] =
       (double)CONCAT44(local_f8.M[0][2]._4_4_,local_f8.M[0][2]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[0][3] =
       (double)CONCAT44(local_f8.M[0][3]._4_4_,local_f8.M[0][3]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_f8.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_f8.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] =
       (double)CONCAT44(local_f8.M[1][2]._4_4_,local_f8.M[1][2]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[1][3] =
       (double)CONCAT44(local_f8.M[1][3]._4_4_,local_f8.M[1][3]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[2][0] =
       (double)CONCAT44(local_f8.M[2][0]._4_4_,local_f8.M[2][0]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[2][1] =
       (double)CONCAT44(local_f8.M[2][1]._4_4_,local_f8.M[2][1]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_f8.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_f8.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] =
       (double)CONCAT44(local_f8.M[3][0]._4_4_,local_f8.M[3][0]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[3][1] =
       (double)CONCAT44(local_f8.M[3][1]._4_4_,local_f8.M[3][1]._0_4_);
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_f8.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_f8.M[3][3];
  VectorMatrixMultiply(&local_f8,pTVar1,&this->InvTranslatedViewMatrix);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_f8.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_f8.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] =
       (double)CONCAT44(local_f8.M[0][2]._4_4_,local_f8.M[0][2]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[0][3] =
       (double)CONCAT44(local_f8.M[0][3]._4_4_,local_f8.M[0][3]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_f8.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_f8.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] =
       (double)CONCAT44(local_f8.M[1][2]._4_4_,local_f8.M[1][2]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[1][3] =
       (double)CONCAT44(local_f8.M[1][3]._4_4_,local_f8.M[1][3]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[2][0] =
       (double)CONCAT44(local_f8.M[2][0]._4_4_,local_f8.M[2][0]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[2][1] =
       (double)CONCAT44(local_f8.M[2][1]._4_4_,local_f8.M[2][1]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_f8.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_f8.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] =
       (double)CONCAT44(local_f8.M[3][0]._4_4_,local_f8.M[3][0]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[3][1] =
       (double)CONCAT44(local_f8.M[3][1]._4_4_,local_f8.M[3][1]._0_4_);
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_f8.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_f8.M[3][3];
  return;
}

// FViewMatrices @ 1447f5440

FViewMatrices * __thiscall FViewMatrices::FViewMatrices(FViewMatrices *this)

{
  TVector2<double> TVar1;
  undefined8 uVar2;
  
  (this->FirstPersonParams).FOVCorrectionFactor = 1.0;
  (this->ProjectionMatrix).M[0][1] = 0.0;
  (this->ProjectionMatrix).M[0][0] = 1.0;
  (this->ProjectionMatrix).M[0][2] = 0.0;
  (this->ProjectionMatrix).M[0][3] = 0.0;
  (this->ProjectionMatrix).M[1][0] = 0.0;
  (this->ProjectionMatrix).M[1][1] = 1.0;
  (this->FirstPersonParams).Scale = 1.0;
  (this->FirstPersonParams).bUseParameters = false;
  (this->ProjectionMatrix).M[1][2] = 0.0;
  (this->ProjectionMatrix).M[1][3] = 0.0;
  (this->ProjectionMatrix).M[2][0] = 0.0;
  (this->ProjectionMatrix).M[2][1] = 0.0;
  (this->ProjectionMatrix).M[2][2] = 1.0;
  (this->ProjectionMatrix).M[2][3] = 0.0;
  (this->ProjectionMatrix).M[3][0] = 0.0;
  (this->ProjectionMatrix).M[3][1] = 0.0;
  (this->ProjectionMatrix).M[3][2] = 0.0;
  (this->ProjectionMatrix).M[3][3] = 1.0;
  (this->ProjectionNoAAMatrix).M[0][0] = 1.0;
  (this->ProjectionNoAAMatrix).M[0][1] = 0.0;
  (this->ProjectionNoAAMatrix).M[0][2] = 0.0;
  (this->ProjectionNoAAMatrix).M[0][3] = 0.0;
  (this->ProjectionNoAAMatrix).M[1][0] = 0.0;
  (this->ProjectionNoAAMatrix).M[1][1] = 1.0;
  (this->ProjectionNoAAMatrix).M[1][2] = 0.0;
  (this->ProjectionNoAAMatrix).M[1][3] = 0.0;
  (this->ProjectionNoAAMatrix).M[2][0] = 0.0;
  (this->ProjectionNoAAMatrix).M[2][1] = 0.0;
  (this->ProjectionNoAAMatrix).M[2][2] = 1.0;
  (this->ProjectionNoAAMatrix).M[2][3] = 0.0;
  (this->ProjectionNoAAMatrix).M[3][0] = 0.0;
  (this->ProjectionNoAAMatrix).M[3][1] = 0.0;
  (this->ProjectionNoAAMatrix).M[3][2] = 0.0;
  (this->ProjectionNoAAMatrix).M[3][3] = 1.0;
  (this->InvProjectionMatrix).M[0][0] = 1.0;
  (this->InvProjectionMatrix).M[0][1] = 0.0;
  (this->InvProjectionMatrix).M[0][2] = 0.0;
  (this->InvProjectionMatrix).M[0][3] = 0.0;
  (this->InvProjectionMatrix).M[1][0] = 0.0;
  (this->InvProjectionMatrix).M[1][1] = 1.0;
  (this->InvProjectionMatrix).M[1][2] = 0.0;
  (this->InvProjectionMatrix).M[1][3] = 0.0;
  (this->InvProjectionMatrix).M[2][0] = 0.0;
  (this->InvProjectionMatrix).M[2][1] = 0.0;
  (this->InvProjectionMatrix).M[2][2] = 1.0;
  (this->InvProjectionMatrix).M[2][3] = 0.0;
  (this->InvProjectionMatrix).M[3][0] = 0.0;
  (this->InvProjectionMatrix).M[3][1] = 0.0;
  (this->InvProjectionMatrix).M[3][2] = 0.0;
  (this->InvProjectionMatrix).M[3][3] = 1.0;
  (this->ViewMatrix).M[0][0] = 1.0;
  (this->ViewMatrix).M[0][1] = 0.0;
  (this->ViewMatrix).M[0][2] = 0.0;
  (this->ViewMatrix).M[0][3] = 0.0;
  (this->ViewMatrix).M[1][0] = 0.0;
  (this->ViewMatrix).M[1][1] = 1.0;
  (this->ViewMatrix).M[1][2] = 0.0;
  (this->ViewMatrix).M[1][3] = 0.0;
  (this->ViewMatrix).M[2][0] = 0.0;
  (this->ViewMatrix).M[2][1] = 0.0;
  (this->ViewMatrix).M[2][2] = 1.0;
  (this->ViewMatrix).M[2][3] = 0.0;
  (this->ViewMatrix).M[3][0] = 0.0;
  (this->ViewMatrix).M[3][1] = 0.0;
  (this->ViewMatrix).M[3][2] = 0.0;
  (this->ViewMatrix).M[3][3] = 1.0;
  (this->InvViewMatrix).M[0][0] = 1.0;
  (this->InvViewMatrix).M[0][1] = 0.0;
  (this->InvViewMatrix).M[0][2] = 0.0;
  (this->InvViewMatrix).M[0][3] = 0.0;
  (this->InvViewMatrix).M[1][0] = 0.0;
  (this->InvViewMatrix).M[1][1] = 1.0;
  (this->InvViewMatrix).M[1][2] = 0.0;
  (this->InvViewMatrix).M[1][3] = 0.0;
  (this->InvViewMatrix).M[2][0] = 0.0;
  (this->InvViewMatrix).M[2][1] = 0.0;
  (this->InvViewMatrix).M[2][2] = 1.0;
  (this->InvViewMatrix).M[2][3] = 0.0;
  (this->InvViewMatrix).M[3][0] = 0.0;
  (this->InvViewMatrix).M[3][1] = 0.0;
  (this->InvViewMatrix).M[3][2] = 0.0;
  (this->InvViewMatrix).M[3][3] = 1.0;
  (this->ViewProjectionMatrix).M[0][0] = 1.0;
  (this->ViewProjectionMatrix).M[0][1] = 0.0;
  (this->ViewProjectionMatrix).M[0][2] = 0.0;
  (this->ViewProjectionMatrix).M[0][3] = 0.0;
  (this->ViewProjectionMatrix).M[1][0] = 0.0;
  (this->ViewProjectionMatrix).M[1][1] = 1.0;
  (this->ViewProjectionMatrix).M[1][2] = 0.0;
  (this->ViewProjectionMatrix).M[1][3] = 0.0;
  (this->ViewProjectionMatrix).M[2][0] = 0.0;
  (this->ViewProjectionMatrix).M[2][1] = 0.0;
  (this->ViewProjectionMatrix).M[2][2] = 1.0;
  (this->ViewProjectionMatrix).M[2][3] = 0.0;
  (this->ViewProjectionMatrix).M[3][0] = 0.0;
  (this->ViewProjectionMatrix).M[3][1] = 0.0;
  (this->ViewProjectionMatrix).M[3][2] = 0.0;
  (this->ViewProjectionMatrix).M[3][3] = 1.0;
  (this->InvViewProjectionMatrix).M[0][0] = 1.0;
  (this->InvViewProjectionMatrix).M[0][1] = 0.0;
  (this->InvViewProjectionMatrix).M[0][2] = 0.0;
  (this->InvViewProjectionMatrix).M[0][3] = 0.0;
  (this->InvViewProjectionMatrix).M[1][0] = 0.0;
  (this->InvViewProjectionMatrix).M[1][1] = 1.0;
  (this->InvViewProjectionMatrix).M[1][2] = 0.0;
  (this->InvViewProjectionMatrix).M[1][3] = 0.0;
  (this->InvViewProjectionMatrix).M[2][0] = 0.0;
  (this->InvViewProjectionMatrix).M[2][1] = 0.0;
  (this->InvViewProjectionMatrix).M[2][2] = 1.0;
  (this->InvViewProjectionMatrix).M[2][3] = 0.0;
  (this->InvViewProjectionMatrix).M[3][0] = 0.0;
  (this->InvViewProjectionMatrix).M[3][1] = 0.0;
  (this->InvViewProjectionMatrix).M[3][2] = 0.0;
  (this->InvViewProjectionMatrix).M[3][3] = 1.0;
  (this->HMDViewMatrixNoRoll).M[0][0] = 1.0;
  (this->HMDViewMatrixNoRoll).M[0][1] = 0.0;
  (this->HMDViewMatrixNoRoll).M[0][2] = 0.0;
  (this->HMDViewMatrixNoRoll).M[0][3] = 0.0;
  (this->HMDViewMatrixNoRoll).M[1][0] = 0.0;
  (this->HMDViewMatrixNoRoll).M[1][1] = 1.0;
  (this->HMDViewMatrixNoRoll).M[1][2] = 0.0;
  (this->HMDViewMatrixNoRoll).M[1][3] = 0.0;
  (this->HMDViewMatrixNoRoll).M[2][0] = 0.0;
  (this->HMDViewMatrixNoRoll).M[2][1] = 0.0;
  (this->HMDViewMatrixNoRoll).M[2][2] = 1.0;
  (this->HMDViewMatrixNoRoll).M[2][3] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][0] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][1] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][2] = 0.0;
  (this->HMDViewMatrixNoRoll).M[3][3] = 1.0;
  (this->TranslatedViewMatrix).M[0][0] = 1.0;
  (this->TranslatedViewMatrix).M[0][1] = 0.0;
  (this->TranslatedViewMatrix).M[0][2] = 0.0;
  (this->TranslatedViewMatrix).M[0][3] = 0.0;
  (this->TranslatedViewMatrix).M[1][0] = 0.0;
  (this->TranslatedViewMatrix).M[1][1] = 1.0;
  (this->TranslatedViewMatrix).M[1][2] = 0.0;
  (this->TranslatedViewMatrix).M[1][3] = 0.0;
  (this->TranslatedViewMatrix).M[2][0] = 0.0;
  (this->TranslatedViewMatrix).M[2][1] = 0.0;
  (this->TranslatedViewMatrix).M[2][2] = 1.0;
  (this->TranslatedViewMatrix).M[2][3] = 0.0;
  (this->TranslatedViewMatrix).M[3][0] = 0.0;
  (this->TranslatedViewMatrix).M[3][1] = 0.0;
  (this->TranslatedViewMatrix).M[3][2] = 0.0;
  (this->TranslatedViewMatrix).M[3][3] = 1.0;
  (this->InvTranslatedViewMatrix).M[0][0] = 1.0;
  (this->InvTranslatedViewMatrix).M[0][1] = 0.0;
  (this->InvTranslatedViewMatrix).M[0][2] = 0.0;
  (this->InvTranslatedViewMatrix).M[0][3] = 0.0;
  (this->InvTranslatedViewMatrix).M[1][0] = 0.0;
  (this->InvTranslatedViewMatrix).M[1][1] = 1.0;
  (this->InvTranslatedViewMatrix).M[1][2] = 0.0;
  (this->InvTranslatedViewMatrix).M[1][3] = 0.0;
  (this->InvTranslatedViewMatrix).M[2][0] = 0.0;
  (this->InvTranslatedViewMatrix).M[2][1] = 0.0;
  (this->InvTranslatedViewMatrix).M[2][2] = 1.0;
  (this->InvTranslatedViewMatrix).M[2][3] = 0.0;
  (this->InvTranslatedViewMatrix).M[3][0] = 0.0;
  (this->InvTranslatedViewMatrix).M[3][1] = 0.0;
  (this->InvTranslatedViewMatrix).M[3][2] = 0.0;
  (this->InvTranslatedViewMatrix).M[3][3] = 1.0;
  (this->OverriddenTranslatedViewMatrix).M[0][0] = 1.0;
  (this->OverriddenTranslatedViewMatrix).M[0][1] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[0][2] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[0][3] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[1][0] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[1][1] = 1.0;
  (this->OverriddenTranslatedViewMatrix).M[1][2] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[1][3] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[2][0] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[2][1] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[2][2] = 1.0;
  (this->OverriddenTranslatedViewMatrix).M[2][3] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[3][0] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[3][1] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[3][2] = 0.0;
  (this->OverriddenTranslatedViewMatrix).M[3][3] = 1.0;
  (this->OverriddenInvTranslatedViewMatrix).M[0][0] = 1.0;
  (this->OverriddenInvTranslatedViewMatrix).M[0][1] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[0][2] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[0][3] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[1][0] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[1][1] = 1.0;
  (this->OverriddenInvTranslatedViewMatrix).M[1][2] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[1][3] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[2][0] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[2][1] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[2][2] = 1.0;
  (this->OverriddenInvTranslatedViewMatrix).M[2][3] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[3][0] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[3][1] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[3][2] = 0.0;
  (this->OverriddenInvTranslatedViewMatrix).M[3][3] = 1.0;
  (this->TranslatedViewProjectionMatrix).M[0][0] = 1.0;
  (this->TranslatedViewProjectionMatrix).M[0][1] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[0][2] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[0][3] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[1][0] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[1][1] = 1.0;
  (this->TranslatedViewProjectionMatrix).M[1][2] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[1][3] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[2][0] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[2][1] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[2][2] = 1.0;
  (this->TranslatedViewProjectionMatrix).M[2][3] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[3][0] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[3][1] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[3][2] = 0.0;
  (this->TranslatedViewProjectionMatrix).M[3][3] = 1.0;
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = 1.0;
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = 1.0;
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = 1.0;
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = 0.0;
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = 1.0;
  (this->ScreenToClipMatrix).M[0][0] = 1.0;
  (this->ScreenToClipMatrix).M[0][1] = 0.0;
  (this->ScreenToClipMatrix).M[0][2] = 0.0;
  (this->ScreenToClipMatrix).M[0][3] = 0.0;
  (this->ScreenToClipMatrix).M[1][0] = 0.0;
  (this->ScreenToClipMatrix).M[1][1] = 1.0;
  (this->ScreenToClipMatrix).M[1][2] = 0.0;
  (this->ScreenToClipMatrix).M[1][3] = 0.0;
  (this->ScreenToClipMatrix).M[2][0] = 0.0;
  (this->ScreenToClipMatrix).M[2][1] = 0.0;
  (this->ScreenToClipMatrix).M[2][2] = 1.0;
  (this->ScreenToClipMatrix).M[2][3] = 0.0;
  (this->ScreenToClipMatrix).M[3][0] = 0.0;
  (this->ScreenToClipMatrix).M[3][1] = 0.0;
  (this->ScreenToClipMatrix).M[3][2] = 0.0;
  (this->FirstPersonTransform).M[0][1] = 0.0;
  (this->FirstPersonTransform).M[0][2] = 0.0;
  (this->FirstPersonTransform).M[0][3] = 0.0;
  (this->FirstPersonTransform).M[1][0] = 0.0;
  (this->ScreenToClipMatrix).M[3][3] = 1.0;
  (this->FirstPersonTransform).M[0][0] = 1.0;
  (this->FirstPersonTransform).M[1][1] = 1.0;
  (this->FirstPersonTransform).M[1][2] = 0.0;
  (this->FirstPersonTransform).M[1][3] = 0.0;
  (this->FirstPersonTransform).M[2][0] = 0.0;
  (this->FirstPersonTransform).M[2][1] = 0.0;
  (this->FirstPersonTransform).M[2][3] = 0.0;
  (this->FirstPersonTransform).M[3][0] = 0.0;
  (this->FirstPersonTransform).M[3][1] = 0.0;
  (this->FirstPersonTransform).M[3][2] = 0.0;
  (this->FirstPersonTransform).M[2][2] = 1.0;
  (this->FirstPersonTransform).M[3][3] = 1.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreViewTranslation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreViewTranslation).field0_0x0._s_0.Y = (double)uVar2;
  (this->PreViewTranslation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ViewOrigin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ViewOrigin).field0_0x0._s_0.Y = (double)uVar2;
  (this->ViewOrigin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraToViewTarget).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraToViewTarget).field0_0x0._s_0.Y = (double)uVar2;
  (this->CameraToViewTarget).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ProjectionScale).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->ScreenScale = 1.0;
  (this->TemporalAAProjectionJitter).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return this;
}

// ComputeInvProjectionNoAAMatrix @ 144e7e250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
FViewMatrices::ComputeInvProjectionNoAAMatrix
          (FViewMatrices *this,TMatrix<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_1a8 [32];
  TPlane<double> local_178;
  TPlane<double> local_158;
  TPlane<double> local_138;
  TPlane<double> local_118;
  TMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_f8.M[2][0] = (this->ProjectionMatrix).M[2][0];
  local_f8.M[2][1] = (this->ProjectionMatrix).M[2][1];
  local_f8.M[0][0] = (this->ProjectionMatrix).M[0][0];
  local_f8.M[0][1] = (this->ProjectionMatrix).M[0][1];
  local_f8.M[0][2] = (this->ProjectionMatrix).M[0][2];
  local_f8.M[0][3] = (this->ProjectionMatrix).M[0][3];
  local_f8.M[1][0] = (this->ProjectionMatrix).M[1][0];
  local_f8.M[1][1] = (this->ProjectionMatrix).M[1][1];
  local_f8.M[1][2] = (this->ProjectionMatrix).M[1][2];
  local_f8.M[1][3] = (this->ProjectionMatrix).M[1][3];
  local_f8.M[2][2] = (this->ProjectionMatrix).M[2][2];
  local_f8.M[2][3] = (this->ProjectionMatrix).M[2][3];
  local_f8.M[3][2] = (this->ProjectionMatrix).M[3][2];
  local_f8.M[3][3] = (this->ProjectionMatrix).M[3][3];
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  dVar2 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.X;
  dVar3 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.Y;
  local_f8.M[3][0] = (this->ProjectionMatrix).M[3][0];
  local_f8.M[3][1] = (this->ProjectionMatrix).M[3][1];
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    local_f8.M[3][0] = local_f8.M[3][0] - dVar2;
    local_f8.M[3][1] = local_f8.M[3][1] - dVar3;
  }
  else {
    local_f8.M[2][0] = local_f8.M[2][0] - dVar2;
    local_f8.M[2][1] = local_f8.M[2][1] - dVar3;
  }
  if ((((((local_f8.M[1][0] == 0.0) && (local_f8.M[3][0] == 0.0)) && (local_f8.M[0][1] == 0.0)) &&
       ((local_f8.M[3][1] == 0.0 && (local_f8.M[0][2] == 0.0)))) &&
      ((local_f8.M[1][2] == 0.0 && ((local_f8.M[0][3] == 0.0 && (local_f8.M[1][3] == 0.0)))))) &&
     ((local_f8.M[2][3] == __real_3ff0000000000000 && (local_f8.M[3][3] == 0.0)))) {
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_178._padding_ = (longlong)__real_3ff0000000000000;
    local_118._padding_ = (longlong)(__real_3ff0000000000000 / local_f8.M[0][0]);
    local_138._padding_ = (longlong)(__real_3ff0000000000000 / local_f8.M[1][1]);
    local_158.W = __real_3ff0000000000000 / local_f8.M[3][2];
    local_158._padding_ = 0;
    local_138._padding_ = 0;
    local_178._padding_ =
         CONCAT44((uint)((ulonglong)((double)local_118._padding_ * local_f8.M[2][0]) >> 0x20) ^
                  uVar5,SUB84((double)local_118._padding_ * local_f8.M[2][0],0) ^ uVar4);
    local_118._padding_ = 0;
    local_178._padding_ =
         CONCAT44((uint)((ulonglong)((double)local_138._padding_ * local_f8.M[2][1]) >> 0x20) ^
                  uVar5,SUB84((double)local_138._padding_ * local_f8.M[2][1],0) ^ uVar4);
    local_178.W = (double)CONCAT44((uint)((ulonglong)(local_158.W * local_f8.M[2][2]) >> 0x20) ^
                                   uVar5,SUB84(local_158.W * local_f8.M[2][2],0) ^ uVar4);
    local_158._padding_ = 0;
    local_158._padding_ = 0;
    local_138._padding_ = 0;
    local_138.W = 0.0;
    local_118._padding_ = 0;
    local_118.W = 0.0;
    UE::Math::TMatrix<double>::TMatrix<double>
              (__return_storage_ptr__,&local_118,&local_138,&local_158,&local_178);
  }
  else {
    UE::Math::TMatrix<double>::Inverse(&local_f8,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// ComputeProjectionNoAAMatrix @ 144e80530

TMatrix<double> * __thiscall
FViewMatrices::ComputeProjectionNoAAMatrix
          (FViewMatrices *this,TMatrix<double> *__return_storage_ptr__)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar4 = (this->ProjectionMatrix).M[0][1];
  dVar7 = (this->ProjectionMatrix).M[0][2];
  dVar8 = (this->ProjectionMatrix).M[0][3];
  dVar2 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.X;
  dVar3 = (this->TemporalAAProjectionJitter).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][0] = (this->ProjectionMatrix).M[0][0];
  __return_storage_ptr__->M[0][1] = dVar4;
  dVar4 = (this->ProjectionMatrix).M[1][0];
  dVar9 = (this->ProjectionMatrix).M[1][1];
  __return_storage_ptr__->M[0][2] = dVar7;
  __return_storage_ptr__->M[0][3] = dVar8;
  dVar7 = (this->ProjectionMatrix).M[1][2];
  dVar8 = (this->ProjectionMatrix).M[1][3];
  __return_storage_ptr__->M[1][0] = dVar4;
  __return_storage_ptr__->M[1][1] = dVar9;
  dVar4 = (this->ProjectionMatrix).M[2][0];
  dVar9 = (this->ProjectionMatrix).M[2][1];
  __return_storage_ptr__->M[1][2] = dVar7;
  __return_storage_ptr__->M[1][3] = dVar8;
  dVar7 = (this->ProjectionMatrix).M[2][2];
  dVar8 = (this->ProjectionMatrix).M[2][3];
  __return_storage_ptr__->M[2][0] = dVar4;
  __return_storage_ptr__->M[2][1] = dVar9;
  dVar4 = (this->ProjectionMatrix).M[3][0];
  dVar9 = (this->ProjectionMatrix).M[3][1];
  __return_storage_ptr__->M[2][2] = dVar7;
  __return_storage_ptr__->M[2][3] = dVar8;
  dVar7 = (this->ProjectionMatrix).M[3][2];
  dVar8 = (this->ProjectionMatrix).M[3][3];
  __return_storage_ptr__->M[3][0] = dVar4;
  __return_storage_ptr__->M[3][1] = dVar9;
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  bVar5 = __real_3ff0000000000000 != *pdVar1;
  bVar6 = *pdVar1 <= __real_3ff0000000000000;
  __return_storage_ptr__->M[3][2] = dVar7;
  __return_storage_ptr__->M[3][3] = dVar8;
  if (bVar6 && bVar5) {
    dVar4 = __return_storage_ptr__->M[2][1];
    __return_storage_ptr__->M[2][0] = __return_storage_ptr__->M[2][0] - dVar2;
    __return_storage_ptr__->M[2][1] = dVar4 - dVar3;
    return __return_storage_ptr__;
  }
  dVar4 = __return_storage_ptr__->M[3][1];
  __return_storage_ptr__->M[3][0] = __return_storage_ptr__->M[3][0] - dVar2;
  __return_storage_ptr__->M[3][1] = dVar4 - dVar3;
  return __return_storage_ptr__;
}

// ComputeHalfFieldOfViewPerAxis @ 14513c370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector2<double> * __thiscall
FViewMatrices::ComputeHalfFieldOfViewPerAxis
          (FViewMatrices *this,TVector2<double> *__return_storage_ptr__)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double _X;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_218;
  pdVar1 = (this->ProjectionMatrix).M[3] + 3;
  if (__real_3ff0000000000000 < *pdVar1 || __real_3ff0000000000000 == *pdVar1) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  }
  else {
    local_138.M[0][0] = (this->ProjectionMatrix).M[0][0];
    local_138.M[0][1] = (this->ProjectionMatrix).M[0][1];
    local_138.M[0][2] = (this->ProjectionMatrix).M[0][2];
    local_138.M[0][3] = (this->ProjectionMatrix).M[0][3];
    local_138.M[1][0] = (this->ProjectionMatrix).M[1][0];
    local_138.M[1][1] = (this->ProjectionMatrix).M[1][1];
    local_138.M[2][2] = (this->ProjectionMatrix).M[2][2];
    local_138.M[2][3] = (this->ProjectionMatrix).M[2][3];
    local_138.M[2][0] =
         (this->ProjectionMatrix).M[2][0] - (this->TemporalAAProjectionJitter).field0_0x0._s_0.X;
    local_138.M[3][2] = (this->ProjectionMatrix).M[3][2];
    local_138.M[3][3] = (this->ProjectionMatrix).M[3][3];
    local_138.M[1][2] = (this->ProjectionMatrix).M[1][2];
    local_138.M[1][3] = (this->ProjectionMatrix).M[1][3];
    local_138.M[2][1] =
         (this->ProjectionMatrix).M[2][1] - (this->TemporalAAProjectionJitter).field0_0x0._s_0.Y;
    local_138.M[3][0] = (this->ProjectionMatrix).M[3][0];
    local_138.M[3][1] = (this->ProjectionMatrix).M[3][1];
    InvertProjectionMatrix(&local_1b8,&local_138);
    _X = __real_bff0000000000000;
    dVar9 = __real_3ff0000000000000;
    dVar4 = local_1b8.M[1][0] * 0.0 + local_1b8.M[0][0] * 0.0 +
            local_1b8.M[2][0] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][0] * _UNK_15061cbc8;
    dVar5 = local_1b8.M[1][1] * 0.0 + local_1b8.M[0][1] * 0.0 +
            local_1b8.M[2][1] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][1] * _UNK_15061cbc8;
    uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
    local_1d8._8_4_ = SUB84(dVar5,0);
    local_1d8._0_8_ = dVar4;
    local_1d8._12_4_ = uVar14;
    dVar8 = local_1b8.M[1][2] * 0.0 + local_1b8.M[0][2] * 0.0 +
            local_1b8.M[2][2] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][2] * _UNK_15061cbc8;
    dVar13 = local_1b8.M[1][3] * 0.0 + local_1b8.M[0][3] * 0.0 +
             local_1b8.M[2][3] * ___xmm_3ff00000000000000000000000000000 +
             local_1b8.M[3][3] * _UNK_15061cbc8;
    local_1c8._8_4_ = SUB84(dVar13,0);
    local_1c8._0_8_ = dVar8;
    local_1c8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    local_1e8._8_4_ = SUB84(dVar5,0);
    local_1e8._0_8_ = dVar5;
    local_1e8._12_4_ = uVar14;
    dVar12 = local_1b8.M[1][0] * _UNK_15061cbc8 +
             local_1b8.M[0][0] * ___xmm_3ff00000000000000000000000000000 +
             local_1b8.M[2][0] * ___xmm_3ff00000000000000000000000000000 +
             local_1b8.M[3][0] * _UNK_15061cbc8;
    dVar11 = local_1b8.M[1][1] * _UNK_15061cbc8 +
             local_1b8.M[0][1] * ___xmm_3ff00000000000000000000000000000 +
             local_1b8.M[2][1] * ___xmm_3ff00000000000000000000000000000 +
             local_1b8.M[3][1] * _UNK_15061cbc8;
    dVar13 = local_1b8.M[1][2] * _UNK_15061cbc8 +
             local_1b8.M[0][2] * ___xmm_3ff00000000000000000000000000000;
    dVar3 = local_1b8.M[1][3] * _UNK_15061cbc8 +
            local_1b8.M[0][3] * ___xmm_3ff00000000000000000000000000000;
    auVar2._8_4_ = SUB84(dVar3,0);
    auVar2._0_8_ = dVar13;
    auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_1f8._8_8_ = auVar2._8_8_;
    dVar13 = dVar13 + local_1b8.M[2][2] * ___xmm_3ff00000000000000000000000000000;
    dVar3 = (double)local_1f8._8_8_ + local_1b8.M[2][3] * ___xmm_3ff00000000000000000000000000000;
    local_1f8._8_4_ = SUB84(dVar3,0);
    local_1f8._0_8_ = dVar13;
    local_1f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    dVar13 = dVar13 + local_1b8.M[3][2] * _UNK_15061cbc8;
    dVar6 = local_1b8.M[1][0] * _UNK_150689518 +
            local_1b8.M[0][0] * ___xmm_00000000000000003ff0000000000000 +
            local_1b8.M[2][0] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][0] * _UNK_15061cbc8;
    dVar3 = local_1b8.M[1][1] * _UNK_150689518 +
            local_1b8.M[0][1] * ___xmm_00000000000000003ff0000000000000 +
            local_1b8.M[2][1] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][1] * _UNK_15061cbc8;
    dVar7 = local_1b8.M[1][2] * _UNK_150689518 +
            local_1b8.M[0][2] * ___xmm_00000000000000003ff0000000000000 +
            local_1b8.M[2][2] * ___xmm_3ff00000000000000000000000000000 +
            local_1b8.M[3][2] * _UNK_15061cbc8;
    dVar10 = dVar5 * dVar5 + dVar4 * dVar4 + dVar8 * dVar8;
    if (__real_3e45798ee0000000 < dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      dVar4 = dVar4 * dVar10;
      dVar5 = dVar5 * dVar10;
      dVar8 = dVar8 * dVar10;
    }
    dVar10 = dVar12 * dVar12 + dVar11 * dVar11 + dVar13 * dVar13;
    if (__real_3e45798ee0000000 < dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      dVar12 = dVar12 * dVar10;
      dVar11 = dVar11 * dVar10;
      dVar13 = dVar13 * dVar10;
    }
    dVar10 = dVar3 * dVar3 + dVar6 * dVar6 + dVar7 * dVar7;
    if (__real_3e45798ee0000000 < dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      dVar6 = dVar6 * dVar10;
      dVar3 = dVar3 * dVar10;
      dVar7 = dVar7 * dVar10;
    }
    dVar12 = dVar11 * dVar5 + dVar12 * dVar4 + dVar13 * dVar8;
    dVar13 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar12) && (dVar13 = dVar12, __real_3ff0000000000000 <= dVar12))
    {
      dVar13 = __real_3ff0000000000000;
    }
    dVar13 = acos(dVar13);
    dVar3 = dVar3 * dVar5 + dVar6 * dVar4 + dVar7 * dVar8;
    if ((_X <= dVar3) && (_X = dVar3, dVar9 <= dVar3)) {
      _X = dVar9;
    }
    dVar3 = acos(_X);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar13;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  }
  return __return_storage_ptr__;
}

// InvertProjectionMatrix @ 14515a420

TMatrix<double> * __cdecl
FViewMatrices::InvertProjectionMatrix
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TPlane<double> local_88;
  TPlane<double> local_68;
  TPlane<double> local_48;
  TPlane<double> local_28;
  
  if ((((((param_1->M[1][0] == 0.0) && (param_1->M[3][0] == 0.0)) && (param_1->M[0][1] == 0.0)) &&
       ((param_1->M[3][1] == 0.0 && (param_1->M[0][2] == 0.0)))) &&
      ((param_1->M[1][2] == 0.0 && ((param_1->M[0][3] == 0.0 && (param_1->M[1][3] == 0.0)))))) &&
     ((__real_3ff0000000000000 == param_1->M[2][3] && (param_1->M[3][3] == 0.0)))) {
    local_88._padding_ = (longlong)__real_3ff0000000000000;
    local_28._padding_ = (longlong)(__real_3ff0000000000000 / param_1->M[0][0]);
    local_48._padding_ = 0;
    local_48._padding_ = (longlong)(__real_3ff0000000000000 / param_1->M[1][1]);
    local_68.W = __real_3ff0000000000000 / param_1->M[3][2];
    dVar1 = (double)local_28._padding_ * param_1->M[2][0];
    local_68._padding_ = 0;
    uVar2 = (uint)__xmm_80000000000000008000000000000000;
    uVar3 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_28._padding_ = 0;
    local_88._padding_ = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar3,SUB84(dVar1,0) ^ uVar2);
    dVar1 = (double)local_48._padding_ * param_1->M[2][1];
    local_88._padding_ = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar3,SUB84(dVar1,0) ^ uVar2);
    dVar1 = local_68.W * param_1->M[2][2];
    local_88.W = (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar3,SUB84(dVar1,0) ^ uVar2);
    local_68._padding_ = 0;
    local_68._padding_ = 0;
    local_48._padding_ = 0;
    local_48.W = 0.0;
    local_28._padding_ = 0;
    local_28.W = 0.0;
    UE::Math::TMatrix<double>::TMatrix<double>
              (__return_storage_ptr__,&local_28,&local_48,&local_68,&local_88);
    return __return_storage_ptr__;
  }
  UE::Math::TMatrix<double>::Inverse(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ComputeViewRotationProjectionMatrix @ 145238a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __thiscall
FViewMatrices::ComputeViewRotationProjectionMatrix
          (FViewMatrices *this,TMatrix<double> *__return_storage_ptr__)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98.M[0][2] = (this->ViewMatrix).M[0][2];
  local_98.M[0][3] = (this->ViewMatrix).M[0][3];
  local_98.M[0][0] = (this->ViewMatrix).M[0][0];
  local_98.M[0][1] = (this->ViewMatrix).M[0][1];
  local_98.M[1][2] = (this->ViewMatrix).M[1][2];
  local_98.M[1][3] = (this->ViewMatrix).M[1][3];
  local_98.M[1][0] = (this->ViewMatrix).M[1][0];
  local_98.M[1][1] = (this->ViewMatrix).M[1][1];
  local_98.M[2][2] = (this->ViewMatrix).M[2][2];
  local_98.M[2][3] = (this->ViewMatrix).M[2][3];
  local_98.M[2][0] = (this->ViewMatrix).M[2][0];
  local_98.M[2][1] = (this->ViewMatrix).M[2][1];
  local_98.M[3][3] = (this->ViewMatrix).M[3][3];
  local_98.M[3][2] = 0.0;
  local_98.M[3][0] = 0.0;
  local_98.M[3][1] = 0.0;
  VectorMatrixMultiply(__return_storage_ptr__,&local_98,&this->ProjectionMatrix);
  return __return_storage_ptr__;
}

// RecomputeDerivedMatrices @ 14554e8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FViewMatrices::RecomputeDerivedMatrices(FViewMatrices *this)

{
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  VectorMatrixMultiply(&local_98,&this->ViewMatrix,&this->ProjectionMatrix);
  (this->ViewProjectionMatrix).M[0][0] = local_98.M[0][0];
  (this->ViewProjectionMatrix).M[0][1] = local_98.M[0][1];
  (this->ViewProjectionMatrix).M[0][2] = local_98.M[0][2];
  (this->ViewProjectionMatrix).M[0][3] = local_98.M[0][3];
  (this->ViewProjectionMatrix).M[1][0] = local_98.M[1][0];
  (this->ViewProjectionMatrix).M[1][1] = local_98.M[1][1];
  (this->ViewProjectionMatrix).M[1][2] = local_98.M[1][2];
  (this->ViewProjectionMatrix).M[1][3] = local_98.M[1][3];
  (this->ViewProjectionMatrix).M[2][0] = local_98.M[2][0];
  (this->ViewProjectionMatrix).M[2][1] = local_98.M[2][1];
  (this->ViewProjectionMatrix).M[2][2] = local_98.M[2][2];
  (this->ViewProjectionMatrix).M[2][3] = local_98.M[2][3];
  (this->ViewProjectionMatrix).M[3][0] = local_98.M[3][0];
  (this->ViewProjectionMatrix).M[3][1] = local_98.M[3][1];
  (this->ViewProjectionMatrix).M[3][2] = local_98.M[3][2];
  (this->ViewProjectionMatrix).M[3][3] = local_98.M[3][3];
  VectorMatrixMultiply(&local_98,&this->InvProjectionMatrix,&this->InvViewMatrix);
  (this->InvViewProjectionMatrix).M[0][0] = local_98.M[0][0];
  (this->InvViewProjectionMatrix).M[0][1] = local_98.M[0][1];
  (this->InvViewProjectionMatrix).M[0][2] = local_98.M[0][2];
  (this->InvViewProjectionMatrix).M[0][3] = local_98.M[0][3];
  (this->InvViewProjectionMatrix).M[1][0] = local_98.M[1][0];
  (this->InvViewProjectionMatrix).M[1][1] = local_98.M[1][1];
  (this->InvViewProjectionMatrix).M[1][2] = local_98.M[1][2];
  (this->InvViewProjectionMatrix).M[1][3] = local_98.M[1][3];
  (this->InvViewProjectionMatrix).M[2][0] = local_98.M[2][0];
  (this->InvViewProjectionMatrix).M[2][1] = local_98.M[2][1];
  (this->InvViewProjectionMatrix).M[2][2] = local_98.M[2][2];
  (this->InvViewProjectionMatrix).M[2][3] = local_98.M[2][3];
  (this->InvViewProjectionMatrix).M[3][0] = local_98.M[3][0];
  (this->InvViewProjectionMatrix).M[3][1] = local_98.M[3][1];
  (this->InvViewProjectionMatrix).M[3][2] = local_98.M[3][2];
  (this->InvViewProjectionMatrix).M[3][3] = local_98.M[3][3];
  VectorMatrixMultiply(&local_98,&this->TranslatedViewMatrix,&this->ProjectionMatrix);
  (this->TranslatedViewProjectionMatrix).M[0][0] = local_98.M[0][0];
  (this->TranslatedViewProjectionMatrix).M[0][1] = local_98.M[0][1];
  (this->TranslatedViewProjectionMatrix).M[0][2] = local_98.M[0][2];
  (this->TranslatedViewProjectionMatrix).M[0][3] = local_98.M[0][3];
  (this->TranslatedViewProjectionMatrix).M[1][0] = local_98.M[1][0];
  (this->TranslatedViewProjectionMatrix).M[1][1] = local_98.M[1][1];
  (this->TranslatedViewProjectionMatrix).M[1][2] = local_98.M[1][2];
  (this->TranslatedViewProjectionMatrix).M[1][3] = local_98.M[1][3];
  (this->TranslatedViewProjectionMatrix).M[2][0] = local_98.M[2][0];
  (this->TranslatedViewProjectionMatrix).M[2][1] = local_98.M[2][1];
  (this->TranslatedViewProjectionMatrix).M[2][2] = local_98.M[2][2];
  (this->TranslatedViewProjectionMatrix).M[2][3] = local_98.M[2][3];
  (this->TranslatedViewProjectionMatrix).M[3][0] = local_98.M[3][0];
  (this->TranslatedViewProjectionMatrix).M[3][1] = local_98.M[3][1];
  (this->TranslatedViewProjectionMatrix).M[3][2] = local_98.M[3][2];
  (this->TranslatedViewProjectionMatrix).M[3][3] = local_98.M[3][3];
  VectorMatrixMultiply(&local_98,&this->InvProjectionMatrix,&this->InvTranslatedViewMatrix);
  (this->InvTranslatedViewProjectionMatrix).M[0][0] = local_98.M[0][0];
  (this->InvTranslatedViewProjectionMatrix).M[0][1] = local_98.M[0][1];
  (this->InvTranslatedViewProjectionMatrix).M[0][2] = local_98.M[0][2];
  (this->InvTranslatedViewProjectionMatrix).M[0][3] = local_98.M[0][3];
  (this->InvTranslatedViewProjectionMatrix).M[1][0] = local_98.M[1][0];
  (this->InvTranslatedViewProjectionMatrix).M[1][1] = local_98.M[1][1];
  (this->InvTranslatedViewProjectionMatrix).M[1][2] = local_98.M[1][2];
  (this->InvTranslatedViewProjectionMatrix).M[1][3] = local_98.M[1][3];
  (this->InvTranslatedViewProjectionMatrix).M[2][0] = local_98.M[2][0];
  (this->InvTranslatedViewProjectionMatrix).M[2][1] = local_98.M[2][1];
  (this->InvTranslatedViewProjectionMatrix).M[2][2] = local_98.M[2][2];
  (this->InvTranslatedViewProjectionMatrix).M[2][3] = local_98.M[2][3];
  (this->InvTranslatedViewProjectionMatrix).M[3][0] = local_98.M[3][0];
  (this->InvTranslatedViewProjectionMatrix).M[3][1] = local_98.M[3][1];
  (this->InvTranslatedViewProjectionMatrix).M[3][2] = local_98.M[3][2];
  (this->InvTranslatedViewProjectionMatrix).M[3][3] = local_98.M[3][3];
  return;
}

