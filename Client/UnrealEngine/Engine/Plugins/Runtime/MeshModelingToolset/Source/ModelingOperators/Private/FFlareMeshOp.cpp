// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 3

// operator() @ 14c954760

void __thiscall
`UE::Geometry::FFlareMeshOp::CalculateResult'::__l11::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_128 [3];
  undefined1 local_110 [16];
  double local_100;
  double local_f8;
  undefined1 local_f0 [16];
  double local_e0;
  
  dVar10 = __real_3ff0000000000000;
  if (param_1 < 0) {
    return;
  }
  lVar6 = *(longlong *)((longlong)this + 8);
  if (*(int *)(lVar6 + 8) * 0x200 + *(int *)(lVar6 + 0xc) <= param_1) {
    return;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x10) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return;
  }
  uVar4 = *(uint *)(*(longlong *)(*(longlong *)(lVar6 + 0x60) + (ulonglong)((uint)param_1 >> 9) * 8)
                   + (ulonglong)(param_1 & 0x1ff) * 4);
  uVar14 = (ulonglong)(uVar4 & 0x1ff);
  lVar7 = *(longlong *)this;
  lVar13 = *(longlong *)
            (*(longlong *)(*(longlong *)(lVar7 + 8) + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar4 = param_1 * 3;
  uVar17 = (ulonglong)(uVar4 + 1 >> 9);
  local_f0 = *(undefined1 (*) [16])(lVar13 + uVar14 * 0x18);
  uVar16 = (ulonglong)(uVar4 + 1 & 0x1ff);
  local_e0 = *(double *)(lVar13 + 0x10 + uVar14 * 0x18);
  lVar6 = *(longlong *)(lVar6 + 0x48);
  dVar23 = local_f0._0_8_;
  dVar19 = local_f0._8_8_;
  uVar18 = (ulonglong)(uVar4 + 2 >> 9);
  fVar1 = *(float *)(*(longlong *)(lVar6 + uVar17 * 8) + uVar16 * 4);
  uVar14 = (ulonglong)(uVar4 + 2 & 0x1ff);
  fVar2 = *(float *)(*(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8) +
                    (ulonglong)(uVar4 & 0x1ff) * 4);
  fVar3 = *(float *)(*(longlong *)(lVar6 + uVar18 * 8) + uVar14 * 4);
  local_f8 = dVar23 * *(double *)(lVar7 + 0xe0) + dVar19 * *(double *)(lVar7 + 0xe8) +
             local_e0 * *(double *)(lVar7 + 0xf0) + *(double *)(lVar7 + 0xf8);
  local_100 = dVar23 * *(double *)(lVar7 + 0x100) + dVar19 * *(double *)(lVar7 + 0x108) +
              local_e0 * *(double *)(lVar7 + 0x110) + *(double *)(lVar7 + 0x118);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  lVar15 = 0;
  local_128[2] = 0.0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  dVar19 = dVar23 * *(double *)(lVar7 + 0x120) + dVar19 * *(double *)(lVar7 + 0x128) +
           local_e0 * *(double *)(lVar7 + 0x130) + *(double *)(lVar7 + 0x138);
  local_110._8_4_ = local_f0._8_4_;
  local_110._0_8_ = dVar19;
  local_110._12_4_ = local_f0._12_4_;
  lVar13 = lVar15;
  do {
    local_128[lVar13] =
         (double)fVar1 * *(double *)(lVar6 + 0x20 + lVar13 * 8) +
         (double)fVar3 * *(double *)(lVar6 + 0x40 + lVar13 * 8) +
         (double)fVar2 * *(double *)(lVar6 + lVar13 * 8) + local_128[lVar13];
    lVar13 = lVar13 + 1;
  } while (lVar13 < 3);
  dVar23 = *(double *)((longlong)this + 0x20) - *(double *)((longlong)this + 0x18);
  iVar5 = *(int *)(lVar7 + 0x170);
  dVar27 = 0.0;
  dVar26 = 0.0;
  dVar9 = 0.0;
  dVar20 = 0.0;
  dVar11 = __real_3ff0000000000000 / dVar23;
  dVar25 = (dVar19 - *(double *)((longlong)this + 0x18)) * dVar11;
  if (__real_3ff0000000000000 <= dVar25) {
    dVar25 = __real_3ff0000000000000;
  }
  if (dVar25 <= 0.0) {
    dVar25 = 0.0;
  }
  if (iVar5 == 0) {
    __libm_sse2_sincos_();
    dVar27 = extraout_XMM0_Qa * *(double *)((longlong)this + 0x28);
    dVar9 = extraout_XMM0_Qb * *(double *)((longlong)this + 0x28);
    dVar26 = extraout_XMM0_Qa * *(double *)((longlong)this + 0x30);
    dVar20 = extraout_XMM0_Qb * *(double *)((longlong)this + 0x30);
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        if (__real_3fe0000000000000 <= dVar25) {
          dVar9 = dVar11 * __real_c000000000000000;
          dVar23 = __real_4000000000000000 / dVar23;
          dVar20 = (__real_3ff0000000000000 - dVar25) + (__real_3ff0000000000000 - dVar25);
        }
        else {
          dVar9 = dVar11 + dVar11;
          dVar20 = dVar25 + dVar25;
          dVar23 = dVar9;
        }
        dVar24 = dVar25 - __real_3fe0000000000000;
        dVar26 = *(double *)((longlong)this + 0x30) * dVar20 + __real_3ff0000000000000;
        dVar27 = *(double *)((longlong)this + 0x28) * dVar20 + __real_3ff0000000000000;
        if ((double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
            __real_3fa999999999999a) {
          dVar9 = dVar23 - (dVar23 + dVar23) *
                           (dVar24 * __real_4024000000000000 + __real_3fe0000000000000);
        }
        if (__real_3fa999999999999a <= dVar25) {
          if (__real_3fee666666666666 < dVar25) {
            dVar9 = (__real_bff0000000000000 -
                    (dVar25 - __real_3ff0000000000000) * __real_c034000000000000) * dVar11;
          }
        }
        else {
          dVar9 = (dVar25 * __real_4024000000000000 + __real_3fe0000000000000) * dVar23;
        }
        dVar20 = dVar9 * *(double *)((longlong)this + 0x30);
        dVar9 = dVar9 * *(double *)((longlong)this + 0x28);
      }
      else {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\MeshSpaceDeformerOps\\FlareMeshOp.cpp"
                            ,0xbd,L"");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      goto LAB_14c954c2d;
    }
    dVar26 = sin(dVar25 * __real_400921fb60000000);
    dVar20 = sin(dVar25 * __real_401921fb60000000);
    dVar9 = *(double *)((longlong)this + 0x28) * dVar20;
    dVar27 = *(double *)((longlong)this + 0x28) * dVar26 * dVar26;
    dVar26 = *(double *)((longlong)this + 0x30) * dVar26 * dVar26;
    dVar20 = *(double *)((longlong)this + 0x30) * dVar20;
    dVar19 = (double)local_110._0_8_;
  }
  dVar26 = dVar26 + dVar10;
  dVar27 = dVar27 + dVar10;
  dVar20 = dVar20 * dVar11 * __real_400921fb60000000;
  dVar9 = dVar9 * dVar11 * __real_400921fb60000000;
LAB_14c954c2d:
  if ((*(double *)((longlong)this + 0x20) <= dVar19 && dVar19 != *(double *)((longlong)this + 0x20))
     || (dVar19 < *(double *)((longlong)this + 0x18))) {
    dVar20 = 0.0;
    dVar9 = 0.0;
  }
  lVar6 = *(longlong *)this;
  dVar25 = dVar26 * dVar27 * local_128[2];
  dVar19 = dVar20 * dVar27 * local_100 * local_128[1];
  dVar23 = dVar9 * dVar26 * local_f8 * local_128[0];
  dVar26 = local_128[0] * dVar26;
  dVar27 = local_128[1] * dVar27;
  local_128[2] = 0.0;
  local_128[0] = 0.0;
  local_128[1] = 0.0;
  do {
    local_128[lVar15] =
         (dVar25 - (dVar19 + dVar23)) * *(double *)(lVar6 + 0x120 + lVar15 * 8) +
         dVar27 * *(double *)(lVar6 + 0x100 + lVar15 * 8) +
         dVar26 * *(double *)(lVar6 + 0xe0 + lVar15 * 8) + local_128[lVar15];
    lVar15 = lVar15 + 1;
  } while (lVar15 < 3);
  lVar6 = *(longlong *)((longlong)this + 8);
  auVar21._0_8_ = local_128[0] * local_128[0];
  auVar21._8_8_ = 0;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = local_128[1] * local_128[1] + auVar21._0_8_ + local_128[2] * local_128[2];
  auVar22 = sqrtpd(auVar21,auVar22);
  if (auVar22._0_8_ <= 0.0) {
    local_128[1] = 0.0;
    local_128[2] = 0.0;
    local_128[0] = 0.0;
  }
  else {
    dVar10 = dVar10 / auVar22._0_8_;
    local_128[1] = local_128[1] * dVar10;
    local_128[2] = local_128[2] * dVar10;
    local_128[0] = local_128[0] * dVar10;
  }
  *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
            (ulonglong)(uVar4 & 0x1ff) * 4) = (float)local_128[0];
  *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar17 * 8) + uVar16 * 4) =
       (float)local_128[1];
  *(float *)(*(longlong *)(*(longlong *)(lVar6 + 0x48) + uVar18 * 8) + uVar14 * 4) =
       (float)local_128[2];
  return;
}

// operator() @ 14c955b00

void __thiscall
`UE::Geometry::FFlareMeshOp::CalculateResult'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  
  dVar13 = __real_3ff0000000000000;
  lVar5 = *(longlong *)this;
  lVar6 = *(longlong *)(lVar5 + 8);
  if (param_1 < 0) {
    return;
  }
  if (*(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24) <= param_1) {
    return;
  }
  uVar15 = (ulonglong)(param_1 & 0x1ff);
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar6 + 0x28) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) + uVar15 * 2) - 1U)) {
    return;
  }
  dVar19 = 0.0;
  dVar11 = 0.0;
  lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar6 + uVar15 * 0x18);
  local_90 = *pdVar1;
  dStack_88 = pdVar1[1];
  local_80 = *(double *)(lVar6 + 0x10 + uVar15 * 0x18);
  iVar4 = *(int *)(lVar5 + 0x170);
  dVar8 = local_90 * *(double *)(lVar5 + 0x100);
  dVar16 = dStack_88 * *(double *)(lVar5 + 0xe8);
  dVar20 = local_80 * *(double *)(lVar5 + 0x110);
  dVar10 = local_90 * *(double *)(lVar5 + 0xe0);
  dVar17 = local_80 * *(double *)(lVar5 + 0xf0);
  dVar18 = dStack_88 * *(double *)(lVar5 + 0x108);
  dVar2 = *(double *)(lVar5 + 0xf8);
  dVar3 = *(double *)(lVar5 + 0x118);
  dVar12 = local_90 * *(double *)(lVar5 + 0x120) + dStack_88 * *(double *)(lVar5 + 0x128) +
           local_80 * *(double *)(lVar5 + 0x130) + *(double *)(lVar5 + 0x138);
  dVar9 = local_90 * *(double *)(lVar5 + 0x140) + dStack_88 * *(double *)(lVar5 + 0x148) +
          local_80 * *(double *)(lVar5 + 0x150) + *(double *)(lVar5 + 0x158);
  dVar21 = (dVar12 - *(double *)((longlong)this + 0x10)) /
           (*(double *)((longlong)this + 0x18) - *(double *)((longlong)this + 0x10));
  if (__real_3ff0000000000000 <= dVar21) {
    dVar21 = __real_3ff0000000000000;
  }
  if (dVar21 <= 0.0) {
    dVar21 = 0.0;
  }
  if (iVar4 == 0) {
    dVar21 = sin(dVar21 * __real_400921fb60000000);
LAB_14c955d52:
    dVar19 = dVar21 * *(double *)((longlong)this + 0x28);
    dVar21 = dVar21 * *(double *)((longlong)this + 0x20);
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\MeshSpaceDeformerOps\\FlareMeshOp.cpp"
                            ,0x116,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        goto LAB_14c955d69;
      }
      if (__real_3fe0000000000000 <= dVar21) {
        dVar21 = (__real_3ff0000000000000 - dVar21) + (__real_3ff0000000000000 - dVar21);
      }
      else {
        dVar21 = dVar21 + dVar21;
      }
      goto LAB_14c955d52;
    }
    dVar19 = sin(dVar21 * __real_400921fb60000000);
    dVar21 = dVar19 * *(double *)((longlong)this + 0x20) * dVar19;
    dVar19 = dVar19 * *(double *)((longlong)this + 0x28) * dVar19;
  }
  dVar11 = dVar21 + dVar13;
  dVar19 = dVar19 + dVar13;
LAB_14c955d69:
  pdVar1 = *(double **)((longlong)this + 8);
  dVar19 = (dVar8 + dVar18 + dVar20 + dVar3) * dVar19;
  dVar11 = (dVar10 + dVar16 + dVar17 + dVar2) * dVar11;
  local_a8._s_0.X = dVar9 * pdVar1[3] + dVar12 * pdVar1[2] + dVar19 * pdVar1[1] + dVar11 * *pdVar1;
  local_a8._s_0.Y = dVar19 * pdVar1[5] + dVar11 * pdVar1[4] + dVar9 * pdVar1[7] + dVar12 * pdVar1[6]
  ;
  local_a8._s_0.Z =
       dVar19 * pdVar1[9] + dVar11 * pdVar1[8] + dVar9 * pdVar1[0xb] + dVar12 * pdVar1[10];
  UE::Geometry::FDynamicMesh3::SetVertex
            (*(FDynamicMesh3 **)(*(longlong *)this + 8),param_1,(TVector<double> *)&local_a8._s_0,
             true);
  return;
}

// CalculateResult @ 14c9640f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FFlareMeshOp::CalculateResult(FFlareMeshOp *this,FProgressCancel *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_158 [32];
  code *local_138;
  FFlareMeshOp **local_130;
  FFlareMeshOp *local_128;
  TMatrix<double> *local_120;
  TMatrix<double> *local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  FMeshSpaceDeformerOp::CalculateResult((FMeshSpaceDeformerOp *)this,param_1);
  if ((*(longlong *)&this->field_0x88 != 0) &&
     (((param_1 == (FProgressCancel *)0x0 || (bVar5 = FProgressCancel::Cancelled(param_1), !bVar5))
      && (dVar6 = UE::Math::TMatrix<double>::Determinant((TMatrix<double> *)&this->field_0xe0),
         __real_3f1a36e2eb1c432d <=
         (double)(float)((uint)(float)dVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff))))) {
    UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)&this->field_0xe0,&local_e8);
    uVar1 = *(undefined8 *)&this->field_0xd0;
    lVar3 = *(longlong *)(*(longlong *)&this->field_0x8 + 0x208);
    uVar2 = *(undefined8 *)&this->field_0xd8;
    dVar6 = this->FlarePercentX * __real_3f847ae147ae147b;
    dVar4 = this->FlarePercentY * __real_3f847ae147ae147b;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x38) < 1) {
        local_120 = (TMatrix<double> *)0x0;
      }
      else {
        local_120 = (TMatrix<double> *)**(longlong **)(lVar3 + 0x30);
      }
      local_118 = &local_e8;
      local_130 = &local_128;
      local_138 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FFlareMeshOp::CalculateResult'::__l11::<lambda_1>,void,int>
                  ::Call;
      local_128 = this;
      local_110 = uVar1;
      local_108 = (double)uVar2;
      local_100 = dVar6;
      local_f8 = dVar4;
      ParallelFor(*(int *)((longlong)local_120 + 8) * 0x200 + *(int *)((longlong)local_120 + 0xc),
                  (TFunctionRef<void___cdecl(int)> *)&local_138,None);
    }
    if ((param_1 == (FProgressCancel *)0x0) || (bVar5 = FProgressCancel::Cancelled(param_1), !bVar5)
       ) {
      local_120 = &local_e8;
      local_130 = &local_128;
      local_138 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FFlareMeshOp::CalculateResult'::__l2::<lambda_2>,void,int>
                  ::Call;
      local_128 = this;
      local_118 = (TMatrix<double> *)uVar1;
      local_110 = uVar2;
      local_108 = dVar6;
      local_100 = dVar4;
      ParallelFor(*(int *)(*(longlong *)&this->field_0x8 + 0x20) * 0x200 +
                  *(int *)(*(longlong *)&this->field_0x8 + 0x24),
                  (TFunctionRef<void___cdecl(int)> *)&local_138,None);
    }
  }
  return;
}

