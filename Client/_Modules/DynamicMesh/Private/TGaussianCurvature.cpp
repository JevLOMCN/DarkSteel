// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// operator() @ 14c6e4ca0

void __thiscall
`TGaussianCurvature<`UE::MeshCurvature::GaussianCurvature'::__l2::<lambda_1>_>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  TVector<double> *pTVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  ulonglong uVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 local_108 [16];
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  iVar17 = 0;
  uVar2 = *(undefined8 *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_108._8_4_ = *(undefined4 *)(lVar5 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_108._0_8_ = uVar2;
  local_108._0_4_ = (undefined4)uVar2;
  if (local_108._0_4_ != **(int **)((longlong)this + 8)) {
    iVar17 = ((int)((ulonglong)uVar2 >> 0x20) != **(int **)((longlong)this + 8)) + 1;
  }
  pTVar6 = *(TVector<double> **)((longlong)this + 0x18);
  dVar3 = (pTVar6->field0_0x0)._s_0.X;
  dVar23 = (pTVar6->field0_0x0)._s_0.Y;
  lVar5 = *(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x10);
  uVar16 = (ulonglong)(*(uint *)(local_108 + (longlong)(int)((iVar17 + 1U) % 3) * 4) & 0x1ff);
  lVar7 = *(longlong *)
           (lVar5 + (ulonglong)(*(uint *)(local_108 + (longlong)(int)((iVar17 + 1U) % 3) * 4) >> 9)
                    * 8);
  pdVar1 = (double *)(lVar7 + uVar16 * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  dVar4 = *(double *)(lVar7 + 0x10 + uVar16 * 0x18);
  local_c0[0]._s_0.Z = dVar4;
  dVar14 = dVar12 - dVar3;
  dVar25 = dVar4 - (pTVar6->field0_0x0)._s_0.Z;
  dVar21 = dVar13 - dVar23;
  uVar16 = (ulonglong)(*(uint *)(local_108 + (longlong)(int)((iVar17 + 2U) % 3) * 4) & 0x1ff);
  lVar5 = *(longlong *)
           (lVar5 + (ulonglong)(*(uint *)(local_108 + (longlong)(int)((iVar17 + 2U) % 3) * 4) >> 9)
                    * 8);
  local_d8._s_0.Z = *(double *)(lVar5 + 0x10 + uVar16 * 0x18);
  local_108 = *(undefined1 (*) [16])(lVar5 + uVar16 * 0x18);
  dVar11 = dVar21 * dVar21 + dVar14 * dVar14 + dVar25 * dVar25;
  if (SQRT(dVar11) <= 0.0) {
    dVar20 = 0.0;
    dVar26 = 0.0;
    dVar19 = 0.0;
    dVar11 = 0.0;
  }
  else {
    dVar19 = __real_3ff0000000000000 / SQRT(dVar11);
    dVar26 = dVar19 * dVar21;
    dVar20 = dVar19 * dVar25;
    dVar19 = dVar19 * dVar14;
  }
  dVar3 = local_108._0_8_ - dVar3;
  local_f8._8_4_ = local_108._8_4_;
  local_f8._s_0.X = local_108._8_8_;
  local_f8._12_4_ = local_108._12_4_;
  dVar23 = local_108._8_8_ - dVar23;
  dVar10 = local_d8._s_0.Z - (pTVar6->field0_0x0)._s_0.Z;
  dVar9 = dVar23 * dVar23 + dVar3 * dVar3 + dVar10 * dVar10;
  if (SQRT(dVar9) <= 0.0) {
    dVar18 = 0.0;
    dVar8 = 0.0;
    dVar22 = 0.0;
    dVar9 = 0.0;
  }
  else {
    dVar18 = __real_3ff0000000000000 / SQRT(dVar9);
    dVar22 = dVar18 * dVar3;
    dVar8 = dVar18 * dVar23;
    dVar18 = dVar18 * dVar10;
  }
  dVar26 = dVar8 * dVar26 + dVar22 * dVar19 + dVar18 * dVar20;
  dVar19 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar26) && (dVar19 = dVar26, __real_3ff0000000000000 <= dVar26)) {
    dVar19 = __real_3ff0000000000000;
  }
  local_d8._0_16_ = local_108;
  local_c0[0]._0_8_ = dVar12;
  local_c0[0]._8_8_ = dVar13;
  dVar26 = acos(dVar19);
  **(double **)((longlong)this + 0x20) = dVar26 + **(double **)((longlong)this + 0x20);
  bVar15 = UE::Geometry::VectorUtil::IsObtuse<double>
                     (pTVar6,(TVector<double> *)&local_c0[0]._s_0,(TVector<double> *)&local_d8._s_0)
  ;
  if (bVar15) {
    dVar3 = dVar3 * dVar14 + dVar23 * dVar21 + dVar10 * dVar25;
    dVar3 = SQRT(dVar9 * dVar11 - dVar3 * dVar3);
    if (__real_3ff921fb54442d18 < dVar26) {
      **(double **)((longlong)this + 0x28) =
           dVar3 * __real_3fd0000000000000 + **(double **)((longlong)this + 0x28);
      return;
    }
    **(double **)((longlong)this + 0x28) =
         dVar3 * __real_3fc0000000000000 + **(double **)((longlong)this + 0x28);
    return;
  }
  dVar12 = dVar12 - (double)local_108._0_8_;
  dVar13 = dVar13 - local_f8._s_0.X;
  dVar4 = dVar4 - local_d8._s_0.Z;
  uVar24 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = SUB84(dVar23,0) ^ uVar24;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar29 = (uint)((ulonglong)dVar23 >> 0x20) ^ uVar27;
  uVar30 = SUB84(dVar3,0) ^ uVar24;
  uVar31 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar27;
  uVar32 = SUB84(dVar10,0) ^ uVar24;
  uVar33 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar27;
  dVar23 = (double)CONCAT44(uVar29,uVar28) * dVar13 + (double)CONCAT44(uVar31,uVar30) * dVar12 +
           (double)CONCAT44(uVar33,uVar32) * dVar4;
  dVar3 = ((double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uVar29,uVar28) +
           (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30) +
          (double)CONCAT44(uVar33,uVar32) * (double)CONCAT44(uVar33,uVar32)) *
          (dVar13 * dVar13 + dVar12 * dVar12 + dVar4 * dVar4) - dVar23 * dVar23;
  if (0.0 <= dVar3) {
    if (__real_7fefffffffffffff <= dVar3) {
      dVar3 = __real_7fefffffffffffff;
    }
    if (__real_3e45798ee2308c3a <= dVar3) {
      dVar23 = dVar23 / SQRT(dVar3);
      goto LAB_14c6e50a6;
    }
  }
  dVar23 = 0.0;
LAB_14c6e50a6:
  dVar3 = **(double **)((longlong)this + 0x30);
  uVar32 = SUB84(dVar3,0);
  uVar33 = (uint)((ulonglong)dVar3 >> 0x20);
  uVar28 = uVar32 ^ uVar24;
  uVar29 = uVar33 ^ uVar27;
  uVar30 = uVar28;
  uVar31 = uVar29;
  if (((double)CONCAT44(uVar29,uVar28) <= dVar23) &&
     (uVar30 = uVar32, uVar31 = uVar33, dVar23 <= dVar3)) {
    uVar30 = SUB84(dVar23,0);
    uVar31 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  local_f8._12_4_ = (uint)((ulonglong)dVar21 >> 0x20) ^ uVar27;
  local_f8._8_4_ = SUB84(dVar21,0) ^ uVar24;
  local_d8._4_4_ = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar27;
  local_d8._0_4_ = SUB84(dVar12,0) ^ uVar24;
  local_f8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar27,SUB84(dVar25,0) ^ uVar24);
  local_d8._12_4_ = (uint)((ulonglong)dVar13 >> 0x20) ^ uVar27;
  local_d8._8_4_ = SUB84(dVar13,0) ^ uVar24;
  local_d8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar27,SUB84(dVar4,0) ^ uVar24);
  local_f8._4_4_ = (uint)((ulonglong)dVar14 >> 0x20) ^ uVar27;
  local_f8._0_4_ = SUB84(dVar14,0) ^ uVar24;
  dVar23 = UE::Geometry::VectorUtil::VectorCot<double>
                     ((TVector<double> *)&local_f8._s_0,(TVector<double> *)&local_d8._s_0);
  if (((double)CONCAT44(uVar29,uVar28) <= dVar23) &&
     (uVar28 = uVar32, uVar29 = uVar33, dVar23 <= dVar3)) {
    uVar28 = SUB84(dVar23,0);
    uVar29 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  **(double **)((longlong)this + 0x28) =
       (dVar9 * (double)CONCAT44(uVar29,uVar28) + dVar11 * (double)CONCAT44(uVar31,uVar30)) *
       __real_3fc0000000000000 + **(double **)((longlong)this + 0x28);
  return;
}

// operator() @ 14c6e51b0

void __thiscall
`TGaussianCurvature<TFunctionRef<UE::Math::TVector<double>___cdecl(int)>_>'::__l2::<lambda_1>::
operator()(void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  TVector<double> *pTVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 extraout_XMM0 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  double dVar23;
  uint uVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  double local_res8;
  undefined4 local_res10 [2];
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0 [7];
  
  iVar13 = 0;
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
  local_108._s_0.X = *(double *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  local_108._8_4_ = *(undefined4 *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  uVar11 = local_108._s_0.X;
  if (local_108._0_4_ != **(int **)((longlong)this + 8)) {
    iVar13 = ((int)((ulonglong)local_108._s_0.X >> 0x20) != **(int **)((longlong)this + 8)) + 1;
  }
  local_res10[0] = *(undefined4 *)((longlong)&local_108 + (longlong)(int)((iVar13 + 1U) % 3) * 4);
  local_108._s_0.X = (double)uVar11;
  (*(code *)**(undefined8 **)((longlong)this + 0x10))
            (&local_f0,(*(undefined8 **)((longlong)this + 0x10))[1],local_res10);
  local_res10[0] = *(undefined4 *)((longlong)&local_108 + (longlong)(int)((iVar13 + 2U) % 3) * 4);
  (*(code *)**(undefined8 **)((longlong)this + 0x10))
            (&local_d8,(*(undefined8 **)((longlong)this + 0x10))[1],local_res10);
  pTVar3 = *(TVector<double> **)((longlong)this + 0x18);
  dVar10 = local_f0._s_0.Z - (pTVar3->field0_0x0)._s_0.Z;
  dVar1 = (pTVar3->field0_0x0)._s_0.X;
  dVar15 = (pTVar3->field0_0x0)._s_0.Y;
  dVar8 = local_f0._s_0.X - dVar1;
  dVar9 = local_f0._s_0.Y - dVar15;
  auVar16._0_8_ = dVar8 * dVar8;
  auVar16._8_8_ = 0;
  local_res8 = dVar9 * dVar9 + auVar16._0_8_ + dVar10 * dVar10;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = local_res8;
  auVar17 = sqrtpd(auVar16,auVar17);
  if (auVar17._0_8_ <= 0.0) {
    dVar20 = 0.0;
    local_res8 = 0.0;
    dVar25 = 0.0;
    dVar23 = 0.0;
  }
  else {
    dVar20 = __real_3ff0000000000000 / auVar17._0_8_;
    dVar23 = dVar20 * dVar8;
    dVar25 = dVar20 * dVar9;
    dVar20 = dVar20 * dVar10;
  }
  dVar1 = local_d8._s_0.X - dVar1;
  dVar15 = local_d8._s_0.Y - dVar15;
  dVar7 = local_d8._s_0.Z - (pTVar3->field0_0x0)._s_0.Z;
  auVar18._0_8_ = dVar1 * dVar1;
  auVar18._8_8_ = 0;
  dVar6 = dVar15 * dVar15 + auVar18._0_8_ + dVar7 * dVar7;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar6;
  auVar17 = sqrtpd(auVar18,auVar4);
  if (auVar17._0_8_ <= 0.0) {
    dVar19 = 0.0;
    dVar14 = 0.0;
    dVar21 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar19 = __real_3ff0000000000000 / auVar17._0_8_;
    dVar21 = dVar19 * dVar1;
    dVar14 = dVar19 * dVar15;
    dVar19 = dVar19 * dVar7;
  }
  dVar23 = dVar14 * dVar25 + dVar21 * dVar23 + dVar19 * dVar20;
  dVar20 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar23) && (dVar20 = dVar23, __real_3ff0000000000000 <= dVar23)) {
    dVar20 = __real_3ff0000000000000;
  }
  dVar20 = acos(dVar20);
  **(double **)((longlong)this + 0x20) = dVar20 + **(double **)((longlong)this + 0x20);
  bVar12 = UE::Geometry::VectorUtil::IsObtuse<double>
                     (pTVar3,(TVector<double> *)&local_f0._s_0,(TVector<double> *)&local_d8._s_0);
  if (bVar12) {
    dVar1 = dVar1 * dVar8 + dVar15 * dVar9 + dVar7 * dVar10;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6 * local_res8 - dVar1 * dVar1;
    auVar17 = sqrtpd(extraout_XMM0,auVar5);
    if (__real_3ff921fb54442d18 < dVar20) {
      **(double **)((longlong)this + 0x28) =
           auVar17._0_8_ * __real_3fd0000000000000 + **(double **)((longlong)this + 0x28);
      return;
    }
    **(double **)((longlong)this + 0x28) =
         auVar17._0_8_ * __real_3fc0000000000000 + **(double **)((longlong)this + 0x28);
    return;
  }
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar26 = SUB84(dVar15,0) ^ uVar22;
  uVar24 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar27 = (uint)((ulonglong)dVar15 >> 0x20) ^ uVar24;
  dVar25 = local_f0._s_0.X - local_d8._s_0.X;
  dVar15 = local_f0._s_0.Y - local_d8._s_0.Y;
  uVar28 = SUB84(dVar1,0) ^ uVar22;
  uVar29 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar24;
  dVar20 = local_f0._s_0.Z - local_d8._s_0.Z;
  uVar30 = SUB84(dVar7,0) ^ uVar22;
  uVar31 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar24;
  dVar23 = (double)CONCAT44(uVar27,uVar26) * dVar15 + (double)CONCAT44(uVar29,uVar28) * dVar25 +
           (double)CONCAT44(uVar31,uVar30) * dVar20;
  dVar1 = ((double)CONCAT44(uVar27,uVar26) * (double)CONCAT44(uVar27,uVar26) +
           (double)CONCAT44(uVar29,uVar28) * (double)CONCAT44(uVar29,uVar28) +
          (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30)) *
          (dVar15 * dVar15 + dVar25 * dVar25 + dVar20 * dVar20) - dVar23 * dVar23;
  if (0.0 <= dVar1) {
    if (__real_7fefffffffffffff <= dVar1) {
      dVar1 = __real_7fefffffffffffff;
    }
    if (__real_3e45798ee2308c3a <= dVar1) {
      dVar23 = dVar23 / SQRT(dVar1);
      goto LAB_14c6e556c;
    }
  }
  dVar23 = 0.0;
LAB_14c6e556c:
  dVar1 = **(double **)((longlong)this + 0x30);
  uVar30 = SUB84(dVar1,0);
  uVar31 = (uint)((ulonglong)dVar1 >> 0x20);
  uVar26 = uVar30 ^ uVar22;
  uVar27 = uVar31 ^ uVar24;
  uVar28 = uVar26;
  uVar29 = uVar27;
  if (((double)CONCAT44(uVar27,uVar26) <= dVar23) &&
     (uVar28 = uVar30, uVar29 = uVar31, dVar23 <= dVar1)) {
    uVar28 = SUB84(dVar23,0);
    uVar29 = (uint)((ulonglong)dVar23 >> 0x20);
  }
  local_108._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar24,SUB84(dVar25,0) ^ uVar22);
  local_108._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) ^ uVar24,SUB84(dVar15,0) ^ uVar22);
  local_108._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar24,SUB84(dVar20,0) ^ uVar22);
  local_c0[0]._0_8_ = CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar24,SUB84(dVar8,0) ^ uVar22);
  local_c0[0]._8_8_ = CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar24,SUB84(dVar9,0) ^ uVar22);
  local_c0[0]._16_8_ = CONCAT44((uint)((ulonglong)dVar10 >> 0x20) ^ uVar24,SUB84(dVar10,0) ^ uVar22)
  ;
  dVar15 = UE::Geometry::VectorUtil::VectorCot<double>
                     ((TVector<double> *)&local_c0[0]._s_0,(TVector<double> *)&local_108._s_0);
  if (((double)CONCAT44(uVar27,uVar26) <= dVar15) &&
     (uVar26 = uVar30, uVar27 = uVar31, dVar15 <= dVar1)) {
    uVar26 = SUB84(dVar15,0);
    uVar27 = (uint)((ulonglong)dVar15 >> 0x20);
  }
  **(double **)((longlong)this + 0x28) =
       ((double)CONCAT44(uVar27,uVar26) * dVar6 + (double)CONCAT44(uVar29,uVar28) * local_res8) *
       __real_3fc0000000000000 + **(double **)((longlong)this + 0x28);
  return;
}

