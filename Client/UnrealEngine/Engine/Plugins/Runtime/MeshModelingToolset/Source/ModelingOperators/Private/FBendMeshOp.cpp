// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c9539c0

void __thiscall
`UE::Geometry::FBendMeshOp::CalculateResult'::__l24::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double local_88 [16];
  
  if ((-1 < param_1) &&
     (lVar9 = *(longlong *)((longlong)this + 8),
     param_1 < *(int *)(lVar9 + 8) * 0x200 + *(int *)(lVar9 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar9 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar11 = param_1 * 3;
      lVar14 = *(longlong *)(lVar9 + 0x48);
      uVar8 = *(uint *)(*(longlong *)
                         (*(longlong *)(lVar9 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                       (ulonglong)(param_1 & 0x1ff) * 4);
      uVar16 = (ulonglong)(uVar8 & 0x1ff);
      lVar9 = *(longlong *)
               (*(longlong *)(*(longlong *)(*(longlong *)this + 8) + 0x10) +
               (ulonglong)(uVar8 >> 9) * 8);
      pdVar1 = (double *)(lVar9 + uVar16 * 0x18);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar22 = *(double *)(lVar9 + 0x10 + uVar16 * 0x18);
      fVar2 = *(float *)(*(longlong *)(lVar14 + (ulonglong)(uVar11 + 1 >> 9) * 8) +
                        (ulonglong)(uVar11 + 1 & 0x1ff) * 4);
      lVar15 = 0;
      fVar3 = *(float *)(*(longlong *)(lVar14 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 4);
      lVar9 = *(longlong *)((longlong)this + 0x18);
      fVar4 = *(float *)(*(longlong *)(lVar14 + (ulonglong)(uVar11 + 2 >> 9) * 8) +
                        (ulonglong)(uVar11 + 2 & 0x1ff) * 4);
      lVar14 = *(longlong *)((longlong)this + 0x10);
      dVar5 = *(double *)(lVar14 + 0x48);
      dVar21 = *(double *)(lVar14 + 0x40);
      dVar6 = *(double *)(lVar14 + 0x50);
      dVar7 = *(double *)(lVar14 + 0x58);
      dVar10 = dVar13 * *(double *)(lVar14 + 0x28) + dVar12 * *(double *)(lVar14 + 0x20) +
               dVar22 * *(double *)(lVar14 + 0x30) + *(double *)(lVar14 + 0x38);
      local_88[0] = 0.0;
      local_88[1] = 0.0;
      local_88[2] = 0.0;
      lVar14 = lVar15;
      do {
        local_88[lVar14] =
             (double)fVar2 * *(double *)(lVar9 + 0x20 + lVar14 * 8) +
             (double)fVar4 * *(double *)(lVar9 + 0x40 + lVar14 * 8) +
             (double)fVar3 * *(double *)(lVar9 + lVar14 * 8) + local_88[lVar14];
        lVar14 = lVar14 + 1;
      } while (lVar14 < 3);
      dVar23 = *(double *)((longlong)this + 0x28);
      if (dVar10 <= *(double *)((longlong)this + 0x28)) {
        dVar23 = dVar10;
      }
      if (dVar23 <= *(double *)((longlong)this + 0x20)) {
        dVar23 = *(double *)((longlong)this + 0x20);
      }
      __libm_sse2_sincos_();
      if ((*(char *)((longlong)this + 0x40) == '\0') && (dVar23 == dVar10)) {
        uVar17 = (undefined4)*(undefined8 *)((longlong)this + 0x38);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)((longlong)this + 0x38) >> 0x20);
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
      }
      lVar9 = *(longlong *)((longlong)this + 0x10);
      dVar23 = local_88[1] * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
      dVar10 = local_88[1] * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      dVar21 = __real_3ff0000000000000 -
               (dVar13 * dVar5 + dVar12 * dVar21 + dVar22 * dVar6 + dVar7) *
               (double)CONCAT44(uVar18,uVar17);
      dVar5 = dVar21 * local_88[0];
      dVar22 = dVar21 * (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * local_88[2];
      dVar21 = dVar21 * (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) * local_88[2];
      local_88[2] = 0.0;
      local_88[0] = 0.0;
      local_88[1] = 0.0;
      do {
        local_88[lVar15] =
             (dVar23 - dVar22) * *(double *)(lVar9 + 0x20 + lVar15 * 8) +
             (dVar21 + dVar10) * *(double *)(lVar9 + 0x40 + lVar15 * 8) +
             dVar5 * *(double *)(lVar9 + lVar15 * 8) + local_88[lVar15];
        lVar15 = lVar15 + 1;
      } while (lVar15 < 3);
      lVar9 = *(longlong *)((longlong)this + 8);
      auVar19._0_8_ = local_88[2] * local_88[2];
      auVar19._8_8_ = 0;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = local_88[1] * local_88[1] + local_88[0] * local_88[0] + auVar19._0_8_;
      auVar20 = sqrtpd(auVar19,auVar20);
      if (auVar20._0_8_ <= 0.0) {
        local_88[1] = 0.0;
        local_88[2] = 0.0;
        dVar22 = 0.0;
      }
      else {
        dVar22 = __real_3ff0000000000000 / auVar20._0_8_;
        local_88[1] = dVar22 * local_88[1];
        local_88[2] = dVar22 * local_88[2];
        dVar22 = dVar22 * local_88[0];
      }
      uVar8 = param_1 * 3;
      *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar8 >> 9) * 8) +
                (ulonglong)(uVar8 & 0x1ff) * 4) = (float)dVar22;
      *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                (ulonglong)(uVar8 + 1 & 0x1ff) * 4) = (float)local_88[1];
      *(float *)(*(longlong *)(*(longlong *)(lVar9 + 0x48) + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                (ulonglong)(uVar8 + 2 & 0x1ff) * 4) = (float)local_88[2];
    }
  }
  return;
}

// operator() @ 14c955840

void __thiscall
`UE::Geometry::FBendMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  TVector<double>_u_0 local_78 [4];
  
  lVar6 = *(longlong *)(*(longlong *)this + 8);
  if (param_1 < 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24) <= param_1) {
    return;
  }
  uVar13 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x28) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) + uVar13 * 2) - 1U)) {
    return;
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar7 = *(double **)((longlong)this + 8);
  pdVar1 = (double *)(lVar6 + uVar13 * 0x18);
  dVar11 = *pdVar1;
  dVar12 = pdVar1[1];
  local_78[0]._16_8_ = *(double *)(lVar6 + 0x10 + uVar13 * 0x18);
  dVar2 = pdVar7[9];
  dVar10 = dVar12 * pdVar7[1] + dVar11 * *pdVar7 +
           (double)local_78[0]._16_8_ * pdVar7[2] + pdVar7[3];
  dVar3 = pdVar7[8];
  dVar8 = dVar12 * pdVar7[5] + dVar11 * pdVar7[4] +
          (double)local_78[0]._16_8_ * pdVar7[6] + pdVar7[7];
  dVar14 = (double)local_78[0]._16_8_ * pdVar7[10];
  dVar4 = pdVar7[0xb];
  dVar9 = dVar12 * pdVar7[0xd] + dVar11 * pdVar7[0xc] +
          (double)local_78[0]._16_8_ * pdVar7[0xe] + pdVar7[0xf];
  if (*(char *)((longlong)this + 0x40) == '\0') {
LAB_14c95599f:
    uVar15 = (undefined4)*(undefined8 *)((longlong)this + 0x28);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)((longlong)this + 0x28) >> 0x20);
  }
  else {
    dVar5 = *(double *)((longlong)this + 0x28);
    uVar15 = SUB84(dVar5,0);
    uVar16 = (undefined4)((ulonglong)dVar5 >> 0x20);
    if (dVar8 <= dVar5) goto LAB_14c95599f;
  }
  __libm_sse2_sincos_();
  dVar2 = (dVar12 * dVar2 + dVar11 * dVar3 + dVar14 + dVar4) - *(double *)((longlong)this + 0x38);
  dVar3 = dVar2 * extraout_XMM0_Qb + *(double *)((longlong)this + 0x38);
  dVar2 = (double)CONCAT44(uVar16,uVar15) - dVar2 * extraout_XMM0_Qa;
  if (dVar8 < *(double *)((longlong)this + 0x20) || dVar8 == *(double *)((longlong)this + 0x20)) {
    if (*(double *)((longlong)this + 0x18) <= dVar8) goto LAB_14c955a11;
    dVar4 = *(double *)((longlong)this + 0x18);
  }
  else {
    dVar4 = *(double *)((longlong)this + 0x20);
  }
  dVar3 = dVar3 + (dVar8 - dVar4) * extraout_XMM0_Qa;
  dVar2 = dVar2 + (dVar8 - dVar4) * extraout_XMM0_Qb;
LAB_14c955a11:
  pdVar1 = *(double **)((longlong)this + 0x10);
  local_78[0]._0_8_ = dVar3 * pdVar1[2] + dVar9 * pdVar1[3] + dVar2 * pdVar1[1] + dVar10 * *pdVar1;
  local_78[0]._8_8_ = dVar3 * pdVar1[6] + dVar9 * pdVar1[7] + dVar2 * pdVar1[5] + dVar10 * pdVar1[4]
  ;
  local_78[0]._16_8_ =
       dVar3 * pdVar1[10] + dVar9 * pdVar1[0xb] + dVar2 * pdVar1[9] + dVar10 * pdVar1[8];
  UE::Geometry::FDynamicMesh3::SetVertex
            (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,(TVector<double> *)&local_78[0]._s_0
             ,true);
  return;
}

// CalculateResult @ 14c960190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FBendMeshOp::CalculateResult(FBendMeshOp *this,FProgressCancel *param_1)

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
  double dVar20;
  double dVar21;
  TMatrix<double> *pTVar22;
  FBendMeshOp *pFVar23;
  FBendMeshOp *pFVar24;
  bool bVar25;
  bool bVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStackY_2b8 [32];
  <lambda_1> local_278;
  undefined1 local_270 [24];
  FBendMeshOp *local_258;
  TMatrix<double> *pTStack_250;
  double local_248;
  TMatrix<double> *apTStack_240 [2];
  double dStack_230;
  FBendMeshOp *local_228;
  FBendMeshOp *pFStack_220;
  undefined8 local_218;
  double dStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  FBendMeshOp *pFStack_1e0;
  code *local_1d8;
  FBendMeshOp **local_1d0;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  FMeshSpaceDeformerOp::CalculateResult((FMeshSpaceDeformerOp *)this,param_1);
  if ((this->_padding_ != 0) &&
     ((param_1 == (FProgressCancel *)0x0 || (bVar25 = FProgressCancel::Cancelled(param_1), !bVar25))
     )) {
    pFVar24 = __real_3ff0000000000000;
    lVar27 = 0;
    lVar28 = 4;
    dVar1 = (double)this->_padding_;
    dVar2 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    dVar5 = (double)this->_padding_;
    pTStack_250 = (TMatrix<double> *)0x0;
    pFStack_220 = (FBendMeshOp *)0x0;
    local_218 = 0;
    local_1e8 = 0;
    dVar6 = (double)this->_padding_;
    local_248 = 0.0;
    apTStack_240[0] = (TMatrix<double> *)0x0;
    apTStack_240[1] = (TMatrix<double> *)0x0;
    dStack_230 = 0.0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    dVar7 = (double)this->_padding_;
    local_258 = __real_3ff0000000000000;
    local_228 = __real_3ff0000000000000;
    dStack_210 = __real_bff0000000000000;
    pFStack_1e0 = __real_3ff0000000000000;
    local_1c8.M[0][0] = 0.0;
    local_1c8.M[0][1] = 0.0;
    local_1c8.M[0][2] = 0.0;
    local_1c8.M[0][3] = 0.0;
    local_1c8.M[1][0] = 0.0;
    local_1c8.M[1][1] = 0.0;
    local_1c8.M[1][2] = 0.0;
    local_1c8.M[1][3] = 0.0;
    local_1c8.M[2][0] = 0.0;
    local_1c8.M[2][1] = 0.0;
    local_1c8.M[2][2] = 0.0;
    local_1c8.M[2][3] = 0.0;
    local_1c8.M[3][0] = 0.0;
    local_1c8.M[3][1] = 0.0;
    local_1c8.M[3][2] = 0.0;
    local_1c8.M[3][3] = 0.0;
    do {
      dVar8 = *(double *)((longlong)&local_258 + lVar27);
      dVar9 = *(double *)((longlong)&pTStack_250 + lVar27);
      dVar10 = *(double *)((longlong)&local_248 + lVar27);
      dVar11 = *(double *)((longlong)apTStack_240 + lVar27);
      dVar12 = *(double *)((longlong)local_1c8.M[0] + lVar27 + 8);
      dVar13 = (double)this->_padding_;
      *(double *)((longlong)local_1c8.M[0] + lVar27) =
           dVar1 * dVar8 + *(double *)((longlong)local_1c8.M[0] + lVar27) + dVar2 * dVar9 +
           dVar4 * dVar11 + dVar3 * dVar10;
      dVar14 = (double)this->_padding_;
      dVar15 = (double)this->_padding_;
      dVar16 = *(double *)((longlong)local_1c8.M[0] + lVar27 + 0x10);
      dVar17 = (double)this->_padding_;
      dVar18 = (double)this->_padding_;
      *(double *)((longlong)local_1c8.M[0] + lVar27 + 8) =
           dVar5 * dVar8 + dVar12 + dVar6 * dVar9 + dVar13 * dVar11 + dVar7 * dVar10;
      dVar12 = (double)this->_padding_;
      dVar13 = (double)this->_padding_;
      dVar19 = *(double *)((longlong)local_1c8.M[0] + lVar27 + 0x18);
      dVar20 = (double)this->_padding_;
      dVar21 = (double)this->_padding_;
      *(double *)((longlong)local_1c8.M[0] + lVar27 + 0x10) =
           dVar14 * dVar8 + dVar16 + dVar15 * dVar9 + dVar17 * dVar11 + dVar18 * dVar10;
      *(double *)((longlong)local_1c8.M[0] + lVar27 + 0x18) =
           dVar12 * dVar8 + dVar19 + dVar13 * dVar9 + dVar20 * dVar11 + dVar21 * dVar10;
      lVar27 = lVar27 + 0x20;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar1 = UE::Math::TMatrix<double>::Determinant(&local_1c8);
    if (__real_38d1b717 <= (float)((uint)(float)dVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      UE::Math::TMatrix<double>::Inverse(&local_1c8,&local_148);
      dVar1 = this->BendDegrees * ___real_bf91df46a2529d39;
      if (__real_3f1a36e2e0000000 <=
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar2 = (double)this->_padding_;
        pTVar22 = (TMatrix<double> *)this->_padding_;
        bVar25 = dVar2 - (double)pTVar22 == 0.0;
        uVar29 = 0;
        uVar30 = 0;
        if (this->bLockBottom != false) {
          uVar29 = (int)pTVar22;
          uVar30 = (int)((ulonglong)pTVar22 >> 0x20);
        }
        pFVar23 = pFVar24;
        if (!bVar25) {
          pFVar23 = (FBendMeshOp *)(dVar1 / (dVar2 - (double)pTVar22));
        }
        if ((param_1 == (FProgressCancel *)0x0) ||
           (bVar26 = FProgressCancel::Cancelled(param_1), !bVar26)) {
          lVar27 = *(longlong *)(this->_padding_ + 0x208);
          if (lVar27 != 0) {
            if (*(int *)(lVar27 + 0x38) < 1) {
              pTStack_250 = (TMatrix<double> *)0x0;
            }
            else {
              pTStack_250 = (TMatrix<double> *)**(longlong **)(lVar27 + 0x30);
            }
            local_248 = (double)&local_1c8;
            apTStack_240[0] = &local_148;
            local_270._8_8_ = &local_258;
            local_270._0_8_ =
                 Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FBendMeshOp::CalculateResult'::__l24::<lambda_1>,void,int>
                 ::Call;
            local_228 = (FBendMeshOp *)CONCAT44(uVar30,uVar29);
            local_218 = CONCAT71(local_218._1_7_,bVar25);
            local_258 = this;
            apTStack_240[1] = pTVar22;
            dStack_230 = dVar2;
            pFStack_220 = pFVar23;
            dStack_210 = dVar1;
            ParallelFor(*(int *)(pTStack_250->M[0] + 1) * 0x200 +
                        *(int *)((longlong)pTStack_250->M[0] + 0xc),
                        (TFunctionRef<void___cdecl(int)> *)local_270,None);
          }
          if ((param_1 == (FProgressCancel *)0x0) ||
             (bVar26 = FProgressCancel::Cancelled(param_1), !bVar26)) {
            pTStack_250 = &local_1c8;
            local_248 = (double)&local_148;
            dStack_230 = (double)CONCAT44(uVar30,uVar29);
            local_218 = CONCAT71(local_218._1_7_,bVar25);
            local_1d8 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FBendMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>
                        ::Call;
            local_1d0 = &local_258;
            local_270._0_8_ = (void **)0x0;
            local_270._8_8_ = local_270._8_8_ & 0xffffffff00000000;
            local_258 = this;
            apTStack_240[0] = pTVar22;
            apTStack_240[1] = (TMatrix<double> *)dVar2;
            local_228 = pFVar23;
            pFStack_220 = (FBendMeshOp *)((double)pFVar24 / (double)pFVar23);
            dStack_210 = dVar1;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",
                       *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),1
                       ,(TFunctionRef<void___cdecl(int)> *)&local_1d8,local_278,None,
                       (TArrayView<std::nullptr_t,int> *)local_270);
          }
        }
      }
    }
  }
  return;
}

