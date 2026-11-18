// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c954e30

void __thiscall
`UE::Geometry::FTwistMeshOp::CalculateResult'::__l11::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  double extraout_XMM0_Qa;
  double dVar27;
  double extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double local_f8 [3];
  longlong local_e0;
  
  dVar17 = __real_3ff0000000000000;
  if ((-1 < param_1) &&
     (lVar13 = *(longlong *)((longlong)this + 8),
     param_1 < *(int *)(lVar13 + 8) * 0x200 + *(int *)(lVar13 + 0xc))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar13 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8) +
                           (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe) {
      lVar14 = *(longlong *)this;
      uVar12 = *(uint *)(*(longlong *)
                          (*(longlong *)(lVar13 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8) +
                        (ulonglong)(param_1 & 0x1ff) * 4);
      uVar23 = (ulonglong)(uVar12 & 0x1ff);
      lVar15 = *(longlong *)
                (*(longlong *)(*(longlong *)(lVar14 + 8) + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
      lVar21 = *(longlong *)(lVar13 + 0x48);
      pdVar1 = (double *)(lVar15 + uVar23 * 0x18);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      dVar30 = *(double *)(lVar15 + 0x10 + uVar23 * 0x18);
      uVar12 = param_1 * 3;
      dVar33 = *(double *)(lVar14 + 0xe0);
      uVar23 = (ulonglong)(uVar12 + 1 & 0x1ff);
      uVar24 = (ulonglong)(uVar12 + 1 >> 9);
      local_e0 = *(longlong *)(lVar21 + (ulonglong)(uVar12 >> 9) * 8);
      dVar5 = *(double *)(lVar14 + 0xe8);
      dVar27 = *(double *)(lVar14 + 0x100);
      uVar25 = (ulonglong)(uVar12 + 2 >> 9);
      dVar31 = *(double *)(lVar14 + 0x110);
      uVar26 = (ulonglong)(uVar12 + 2 & 0x1ff);
      fVar2 = *(float *)(*(longlong *)(lVar21 + uVar24 * 8) + uVar23 * 4);
      dVar6 = *(double *)(lVar14 + 0xf0);
      fVar3 = *(float *)(local_e0 + (ulonglong)(uVar12 & 0x1ff) * 4);
      fVar4 = *(float *)(*(longlong *)(lVar21 + uVar25 * 8) + uVar26 * 4);
      dVar7 = *(double *)(lVar14 + 0x108);
      dVar8 = *(double *)(lVar14 + 0xf8);
      dVar18 = dVar19 * *(double *)(lVar14 + 0x120) + dVar20 * *(double *)(lVar14 + 0x128) +
               dVar30 * *(double *)(lVar14 + 0x130) + *(double *)(lVar14 + 0x138);
      dVar9 = *(double *)(lVar14 + 0x118);
      lVar15 = *(longlong *)((longlong)this + 0x10);
      lVar22 = 0;
      local_f8[2] = 0.0;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      lVar21 = lVar22;
      do {
        local_f8[lVar21] =
             (double)fVar2 * *(double *)(lVar15 + 0x20 + lVar21 * 8) +
             (double)fVar4 * *(double *)(lVar15 + 0x40 + lVar21 * 8) +
             (double)fVar3 * *(double *)(lVar15 + lVar21 * 8) + local_f8[lVar21];
        lVar21 = lVar21 + 1;
      } while (lVar21 < 3);
      dVar32 = *(double *)((longlong)this + 0x18);
      dVar10 = *(double *)((longlong)this + 0x20);
      dVar11 = *(double *)((longlong)this + 0x28);
      dVar16 = __real_3ff0000000000000 / (dVar10 - dVar32);
      __libm_sse2_sincos_();
      dVar11 = dVar11 * dVar16;
      if ((dVar10 < dVar18) || (dVar18 < dVar32)) {
        dVar11 = 0.0;
      }
      dVar32 = extraout_XMM0_Qb * local_f8[0];
      dVar18 = extraout_XMM0_Qa * local_f8[0];
      dVar31 = local_f8[0] * (dVar19 * dVar27 + dVar20 * dVar7 + dVar30 * dVar31 + dVar9);
      dVar27 = extraout_XMM0_Qa * local_f8[1];
      dVar30 = local_f8[1] * (dVar19 * dVar33 + dVar20 * dVar5 + dVar30 * dVar6 + dVar8);
      dVar33 = local_f8[1] * extraout_XMM0_Qb;
      local_f8[0] = 0.0;
      local_f8[1] = 0.0;
      dVar30 = (dVar31 - dVar30) * dVar11 + local_f8[2];
      local_f8[2] = 0.0;
      do {
        local_f8[lVar22] =
             dVar30 * *(double *)(lVar14 + 0x120 + lVar22 * 8) +
             (dVar33 + dVar18) * *(double *)(lVar14 + 0x100 + lVar22 * 8) +
             (dVar32 - dVar27) * *(double *)(lVar14 + 0xe0 + lVar22 * 8) + local_f8[lVar22];
        lVar22 = lVar22 + 1;
      } while (lVar22 < 3);
      auVar28._0_8_ = local_f8[0] * local_f8[0];
      auVar28._8_8_ = 0;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = local_f8[1] * local_f8[1] + auVar28._0_8_ + local_f8[2] * local_f8[2];
      auVar29 = sqrtpd(auVar28,auVar29);
      if (auVar29._0_8_ <= 0.0) {
        local_f8[1] = 0.0;
        local_f8[2] = 0.0;
        local_f8[0] = 0.0;
      }
      else {
        dVar17 = dVar17 / auVar29._0_8_;
        local_f8[1] = local_f8[1] * dVar17;
        local_f8[2] = local_f8[2] * dVar17;
        local_f8[0] = local_f8[0] * dVar17;
      }
      *(float *)(local_e0 + (ulonglong)(uVar12 & 0x1ff) * 4) = (float)local_f8[0];
      *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + uVar24 * 8) + uVar23 * 4) =
           (float)local_f8[1];
      *(float *)(*(longlong *)(*(longlong *)(lVar13 + 0x48) + uVar25 * 8) + uVar26 * 4) =
           (float)local_f8[2];
    }
  }
  return;
}

// operator() @ 14c955e80

void __thiscall
`UE::Geometry::FTwistMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  double dVar8;
  double dVar9;
  TVector<double>_u_0 local_68 [4];
  
  if (-1 < param_1) {
    lVar2 = *(longlong *)this;
    this_00 = *(FDynamicMesh3 **)(lVar2 + 8);
    if (param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (this_00->VertexRefCounts).RefCounts.CurBlockUsed)) {
      uVar7 = (ulonglong)(param_1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)((uint)param_1 >> 9) * 8) + uVar7 * 2) - 1U) < 0xfffe) {
        lVar3 = *(longlong *)
                 ((this_00->Vertices).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar1 = (double *)(lVar3 + uVar7 * 0x18);
        dVar4 = *pdVar1;
        dVar9 = pdVar1[1];
        local_68[0]._16_8_ = *(double *)(lVar3 + 0x10 + uVar7 * 0x18);
        dVar8 = dVar4 * *(double *)(lVar2 + 0xe0) + dVar9 * *(double *)(lVar2 + 0xe8) +
                (double)local_68[0]._16_8_ * *(double *)(lVar2 + 0xf0) + *(double *)(lVar2 + 0xf8);
        dVar6 = dVar4 * *(double *)(lVar2 + 0x100) + dVar9 * *(double *)(lVar2 + 0x108) +
                (double)local_68[0]._16_8_ * *(double *)(lVar2 + 0x110) + *(double *)(lVar2 + 0x118)
        ;
        dVar5 = dVar4 * *(double *)(lVar2 + 0x120) + dVar9 * *(double *)(lVar2 + 0x128) +
                (double)local_68[0]._16_8_ * *(double *)(lVar2 + 0x130) + *(double *)(lVar2 + 0x138)
        ;
        dVar4 = dVar4 * *(double *)(lVar2 + 0x140) + dVar9 * *(double *)(lVar2 + 0x148) +
                (double)local_68[0]._16_8_ * *(double *)(lVar2 + 0x150) + *(double *)(lVar2 + 0x158)
        ;
        __libm_sse2_sincos_();
        pdVar1 = *(double **)((longlong)this + 8);
        dVar9 = extraout_XMM0_Qb * dVar8 - extraout_XMM0_Qa * dVar6;
        dVar8 = extraout_XMM0_Qb * dVar6 + extraout_XMM0_Qa * dVar8;
        local_68[0]._0_8_ =
             dVar4 * pdVar1[3] + dVar5 * pdVar1[2] + dVar8 * pdVar1[1] + dVar9 * *pdVar1;
        local_68[0]._8_8_ =
             dVar4 * pdVar1[7] + dVar5 * pdVar1[6] + dVar9 * pdVar1[4] + dVar8 * pdVar1[5];
        local_68[0]._16_8_ =
             dVar4 * pdVar1[0xb] + dVar5 * pdVar1[10] + dVar9 * pdVar1[8] + dVar8 * pdVar1[9];
        UE::Geometry::FDynamicMesh3::SetVertex
                  (this_00,param_1,(TVector<double> *)&local_68[0]._s_0,true);
      }
    }
  }
  return;
}

// CalculateResult @ 14c96b8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FTwistMeshOp::CalculateResult(FTwistMeshOp *this,FProgressCancel *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_128 [32];
  code *local_108;
  FTwistMeshOp **local_100;
  FTwistMeshOp *local_f8;
  TMatrix<double> *local_f0;
  TMatrix<double> *local_e8;
  longlong local_e0;
  double local_d8;
  double local_d0;
  TMatrix<double> local_c8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  FMeshSpaceDeformerOp::CalculateResult((FMeshSpaceDeformerOp *)this,param_1);
  if ((this->_padding_ != 0) &&
     (((param_1 == (FProgressCancel *)0x0 || (bVar4 = FProgressCancel::Cancelled(param_1), !bVar4))
      && (dVar5 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)&this->_padding_),
         __real_3f1a36e2eb1c432d <=
         (double)(float)((uint)(float)dVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
    UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&this->_padding_,&local_c8);
    lVar1 = this->_padding_;
    lVar2 = this->_padding_;
    lVar3 = *(longlong *)(this->_padding_ + 0x208);
    dVar5 = this->TwistDegrees * __real_3f91df46a2529d39;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x38) < 1) {
        local_f0 = (TMatrix<double> *)0x0;
      }
      else {
        local_f0 = (TMatrix<double> *)**(longlong **)(lVar3 + 0x30);
      }
      local_e8 = &local_c8;
      local_100 = &local_f8;
      local_108 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FTwistMeshOp::CalculateResult'::__l11::<lambda_1>,void,int>
                  ::Call;
      local_f8 = this;
      local_e0 = lVar1;
      local_d8 = (double)lVar2;
      local_d0 = dVar5;
      ParallelFor(*(int *)((longlong)local_f0 + 8) * 0x200 + *(int *)((longlong)local_f0 + 0xc),
                  (TFunctionRef<void___cdecl(int)> *)&local_108,None);
    }
    if ((param_1 == (FProgressCancel *)0x0) || (bVar4 = FProgressCancel::Cancelled(param_1), !bVar4)
       ) {
      local_f0 = &local_c8;
      local_100 = &local_f8;
      local_108 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FTwistMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_f8 = this;
      local_e8 = (TMatrix<double> *)lVar1;
      local_e0 = lVar2;
      local_d8 = dVar5;
      ParallelFor(*(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),
                  (TFunctionRef<void___cdecl(int)> *)&local_108,None);
    }
  }
  return;
}

