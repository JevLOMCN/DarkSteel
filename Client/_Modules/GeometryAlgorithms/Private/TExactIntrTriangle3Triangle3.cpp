// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 2

// FindOrTestWithoutCoplanar<1> @ 14958d870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>
          (TTriangle3<double> *param_1,TTriangle3<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,bool *param_5)

{
  int iVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  TVector<double> *pTVar4;
  undefined8 uVar5;
  TTriangle3<double> *pTVar6;
  TTriangle3<double> *pTVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  TVector<double> *pTVar12;
  TVector<double> *pTVar13;
  TVector<double> *pTVar14;
  TVector<double>_u_0 *pTVar15;
  TVector<double>_u_0 *pTVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  TTriangle3<double> **ppTVar20;
  TTriangle3<double> **ppTVar21;
  longlong lVar22;
  int *piVar23;
  double dVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178 [8];
  TVector<double> *local_170;
  TVector<double> *local_168;
  bool *local_160;
  undefined4 local_158;
  int local_150 [6];
  TTriangle3<double> *local_138;
  TTriangle3<double> *local_130;
  TTriangle3<double> *local_128 [2];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  piVar23 = local_150 + 2;
  lVar17 = 0;
  local_150[0] = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  local_150[3] = 0;
  ppTVar20 = local_128;
  *param_5 = false;
  ppTVar21 = local_128 + 1;
  local_118._s_0.X = ___xmm_ffffffffffffffffffffffffffffffff;
  local_118._s_0.Y = _UNK_15060db28;
  local_130 = param_2;
  local_138 = param_1;
  local_160 = param_5;
  local_128[0] = param_1;
  local_128[1] = param_2;
  local_150[4] = 0;
  local_150[5] = 0;
  local_118._s_0.Z = -NAN;
  lVar22 = lVar17;
  local_170 = param_3;
  local_168 = param_4;
  do {
    pTVar6 = *ppTVar21;
    pTVar7 = *ppTVar20;
    local_100._s_0.X = pTVar6->V[0].field0_0x0._s_0.X;
    local_100._s_0.Y = pTVar6->V[0].field0_0x0._s_0.Y;
    local_b8 = pTVar7->V[0].field0_0x0._s_0.X;
    dStack_b0 = pTVar7->V[0].field0_0x0._s_0.Y;
    local_100._s_0.Z = pTVar6->V[0].field0_0x0._s_0.Z;
    local_e8._s_0.X = pTVar6->V[1].field0_0x0._s_0.X;
    local_e8._s_0.Y = pTVar6->V[1].field0_0x0._s_0.Y;
    local_a8 = pTVar7->V[0].field0_0x0._s_0.Z;
    local_e8._s_0.Z = pTVar6->V[1].field0_0x0._s_0.Z;
    local_d0 = pTVar6->V[2].field0_0x0._s_0.X;
    dStack_c8 = pTVar6->V[2].field0_0x0._s_0.Y;
    local_c0 = pTVar6->V[2].field0_0x0._s_0.Z;
    dVar24 = ExactPredicates::Orient3D(local_100.XYZ,local_e8.XYZ,&local_d0,&local_b8);
    if (dVar24 <= 0.0) {
      iVar11 = (0.0 <= dVar24) - 1;
    }
    else {
      iVar11 = 1;
    }
    dVar32 = pTVar6->V[1].field0_0x0._s_0.X;
    dVar8 = pTVar6->V[1].field0_0x0._s_0.Y;
    local_100._s_0.X = pTVar6->V[0].field0_0x0._s_0.X;
    local_100._s_0.Y = pTVar6->V[0].field0_0x0._s_0.Y;
    dVar24 = pTVar6->V[0].field0_0x0._s_0.Z;
    local_150[iVar11 + lVar22 + 1] = local_150[iVar11 + lVar22 + 1] + 1;
    local_e8._s_0.X = dVar32;
    local_e8._s_0.Y = dVar8;
    *(undefined4 *)((longlong)&local_118 + (iVar11 + lVar22) * 4 + 4) = 0;
    local_e8._s_0.Z = pTVar6->V[1].field0_0x0._s_0.Z;
    local_d0 = pTVar6->V[2].field0_0x0._s_0.X;
    dStack_c8 = pTVar6->V[2].field0_0x0._s_0.Y;
    local_b8 = pTVar7->V[1].field0_0x0._s_0.X;
    dStack_b0 = pTVar7->V[1].field0_0x0._s_0.Y;
    local_c0 = pTVar6->V[2].field0_0x0._s_0.Z;
    local_a8 = pTVar7->V[1].field0_0x0._s_0.Z;
    local_100._s_0.Z = dVar24;
    dVar24 = ExactPredicates::Orient3D(local_100.XYZ,local_e8.XYZ,&local_d0,&local_b8);
    if (dVar24 <= 0.0) {
      iVar11 = (0.0 <= dVar24) - 1;
    }
    else {
      iVar11 = 1;
    }
    dVar32 = pTVar6->V[1].field0_0x0._s_0.X;
    dVar8 = pTVar6->V[1].field0_0x0._s_0.Y;
    local_100._s_0.X = pTVar6->V[0].field0_0x0._s_0.X;
    local_100._s_0.Y = pTVar6->V[0].field0_0x0._s_0.Y;
    dVar24 = pTVar6->V[0].field0_0x0._s_0.Z;
    local_150[iVar11 + lVar22 + 1] = local_150[iVar11 + lVar22 + 1] + 1;
    local_e8._s_0.X = dVar32;
    local_e8._s_0.Y = dVar8;
    *(undefined4 *)((longlong)&local_118 + (iVar11 + lVar22) * 4 + 4) = 1;
    local_e8._s_0.Z = pTVar6->V[1].field0_0x0._s_0.Z;
    local_d0 = pTVar6->V[2].field0_0x0._s_0.X;
    dStack_c8 = pTVar6->V[2].field0_0x0._s_0.Y;
    local_b8 = pTVar7->V[2].field0_0x0._s_0.X;
    dStack_b0 = pTVar7->V[2].field0_0x0._s_0.Y;
    local_c0 = pTVar6->V[2].field0_0x0._s_0.Z;
    local_a8 = pTVar7->V[2].field0_0x0._s_0.Z;
    local_100._s_0.Z = dVar24;
    dVar24 = ExactPredicates::Orient3D(local_100.XYZ,local_e8.XYZ,&local_d0,&local_b8);
    if (dVar24 <= 0.0) {
      iVar11 = (0.0 <= dVar24) - 1;
    }
    else {
      iVar11 = 1;
    }
    local_150[iVar11 + lVar22 + 1] = local_150[iVar11 + lVar22 + 1] + 1;
    iVar19 = piVar23[-2];
    *(undefined4 *)((longlong)&local_118 + (iVar11 + lVar22) * 4 + 4) = 2;
    if (iVar19 == 3) {
      return false;
    }
    if (*piVar23 == 3) {
      return false;
    }
    if (piVar23[-1] == 3) {
      *local_160 = true;
      return false;
    }
    ppTVar20 = ppTVar20 + 1;
    ppTVar21 = ppTVar21 + -1;
    lVar22 = lVar22 + 3;
    piVar23 = piVar23 + 3;
  } while (lVar22 < 6);
  bVar9 = false;
  local_160 = (bool *)0x2;
  bVar10 = false;
  local_158 = 1;
  lVar22 = lVar17;
  do {
    iVar11 = *(int *)((longlong)&local_160 + lVar22 * 4);
    if (local_150[iVar11] == 1) {
      local_118._0_4_ = *(int *)((longlong)&local_118 + (longlong)iVar11 * 4);
      iVar19 = local_118._0_4_ + 1;
      iVar1 = local_118._0_4_ + 2;
      local_118._4_4_ =
           iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                    (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
      uVar18 = iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                       (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f
                            )) * -3;
      if ((iVar11 == 0) || ((iVar11 == 1 && (local_150[2] == 2)))) {
        bVar9 = true;
        lVar17 = 0;
      }
      goto LAB_14958db70;
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 < 3);
  uVar18 = local_118._8_4_;
LAB_14958db70:
  do {
    iVar11 = *(int *)((longlong)&local_160 + lVar17 * 4);
    if (local_150[(longlong)iVar11 + 3] == 1) {
      local_118._12_4_ = *(int *)((longlong)&local_118 + (longlong)iVar11 * 4 + 0xc);
      iVar19 = local_118._12_4_ + 1;
      iVar1 = local_118._12_4_ + 2;
      local_118._16_4_ =
           iVar19 + (iVar19 / 3 + (iVar19 >> 0x1f) +
                    (int)(((longlong)iVar19 / 3 + ((longlong)iVar19 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
      local_118._20_4_ =
           iVar1 + (iVar1 / 3 + (iVar1 >> 0x1f) +
                   (int)(((longlong)iVar1 / 3 + ((longlong)iVar1 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                   -3;
      if ((iVar11 == 0) || ((iVar11 == 1 && (local_150[5] == 2)))) {
        bVar10 = true;
      }
      goto LAB_14958dbe0;
    }
    lVar17 = lVar17 + 1;
  } while (lVar17 < 3);
LAB_14958dbe0:
  iVar11 = local_118._20_4_;
  if (bVar9) {
    iVar11 = local_118._16_4_;
    local_118._16_4_ = local_118._20_4_;
  }
  iVar19 = uVar18;
  if (bVar10) {
    iVar19 = local_118._4_4_;
    local_118._4_4_ = uVar18;
  }
  local_d0 = local_138->V[(int)local_118._0_4_].field0_0x0._s_0.X;
  dStack_c8 = local_138->V[(int)local_118._0_4_].field0_0x0._s_0.Y;
  pTVar13 = local_138->V + (int)local_118._0_4_;
  local_e8._s_0.X = local_138->V[(int)local_118._4_4_].field0_0x0._s_0.X;
  local_e8._s_0.Y = local_138->V[(int)local_118._4_4_].field0_0x0._s_0.Y;
  pTVar14 = local_138->V + (int)local_118._4_4_;
  local_c0 = (pTVar13->field0_0x0)._s_0.Z;
  pTVar12 = local_138->V + iVar19;
  local_e8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  pTVar2 = local_130->V + (int)local_118._12_4_;
  pTVar3 = local_130->V + (int)local_118._16_4_;
  local_100._s_0.X = local_130->V[iVar11].field0_0x0._s_0.X;
  local_100._s_0.Y = local_130->V[iVar11].field0_0x0._s_0.Y;
  pTVar4 = local_130->V + iVar11;
  local_100._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  local_118._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  local_118._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
  local_118._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  dVar24 = ExactPredicates::Orient3D(&local_d0,local_e8.XYZ,local_100.XYZ,local_118.XYZ);
  local_d0 = (pTVar13->field0_0x0)._s_0.X;
  dStack_c8 = (pTVar13->field0_0x0)._s_0.Y;
  local_c0 = (pTVar13->field0_0x0)._s_0.Z;
  if (0.0 < dVar24) {
    local_e8._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
    local_100._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    local_100._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
    local_e8._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    local_118._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    local_118._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
    local_100._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
    local_118._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    dVar24 = ExactPredicates::Orient3D(&local_d0,local_e8.XYZ,local_100.XYZ,local_118.XYZ);
    if (0.0 < dVar24) {
      return false;
    }
    local_d0 = (pTVar13->field0_0x0)._s_0.X;
    dStack_c8 = (pTVar13->field0_0x0)._s_0.Y;
    local_e8._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
    local_c0 = (pTVar13->field0_0x0)._s_0.Z;
    local_e8._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    local_100._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    local_100._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
    local_118._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    local_118._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
    local_100._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    local_118._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    dVar26 = ExactPredicates::Orient3D(&local_d0,local_e8.XYZ,local_100.XYZ,local_118.XYZ);
    dVar29 = (pTVar12->field0_0x0)._s_0.Z - (pTVar13->field0_0x0)._s_0.Z;
    dVar8 = (pTVar12->field0_0x0)._s_0.Y - (pTVar13->field0_0x0)._s_0.Y;
    dVar28 = (pTVar12->field0_0x0)._s_0.X - (pTVar13->field0_0x0)._s_0.X;
    dVar32 = (pTVar14->field0_0x0)._s_0.X - (pTVar13->field0_0x0)._s_0.X;
    dVar30 = (pTVar14->field0_0x0)._s_0.Y - (pTVar13->field0_0x0)._s_0.Y;
    dVar24 = (pTVar14->field0_0x0)._s_0.Z - (pTVar13->field0_0x0)._s_0.Z;
    dVar27 = dVar8 * dVar24 - dVar29 * dVar30;
    dVar29 = dVar32 * dVar29 - dVar28 * dVar24;
    dVar24 = dVar28 * dVar30 - dVar32 * dVar8;
    if (0.0 < dVar26) {
      dVar31 = (pTVar3->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      dVar32 = (pTVar3->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      dVar30 = (pTVar4->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      dVar28 = (pTVar4->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      dVar8 = (pTVar4->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      dVar26 = (pTVar3->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      local_118._s_0.X = dVar26 * dVar8 - dVar31 * dVar30;
      local_118._s_0.Y = dVar32 * dVar30 - dVar26 * dVar28;
      local_118._s_0.Z = dVar31 * dVar28 - dVar32 * dVar8;
      local_100._s_0.X = dVar27;
      local_100._s_0.Y = dVar29;
      local_100._s_0.Z = dVar24;
      pTVar14 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
                __l2::<lambda_1>::operator()
                          (local_178,(TVector<double> *)&local_e8._s_0,pTVar13,pTVar12,
                           (TVector<double> *)&local_118._s_0,pTVar2);
      pTVar16 = &local_118;
      dVar24 = (pTVar14->field0_0x0)._s_0.Y;
      (local_170->field0_0x0)._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      (local_170->field0_0x0)._s_0.Y = dVar24;
      uVar5 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 0x10);
      uVar18 = (undefined4)uVar5;
      uVar25 = (undefined4)((ulonglong)uVar5 >> 0x20);
      pTVar15 = &local_100;
    }
    else {
      local_118._s_0.X = dVar27;
      local_118._s_0.Y = dVar29;
      local_118._s_0.Z = dVar24;
      pTVar14 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
                __l2::<lambda_1>::operator()
                          (local_178,(TVector<double> *)&local_100._s_0,pTVar2,pTVar3,
                           (TVector<double> *)&local_118._s_0,pTVar13);
      pTVar16 = &local_100;
      dVar24 = (pTVar14->field0_0x0)._s_0.Y;
      (local_170->field0_0x0)._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      (local_170->field0_0x0)._s_0.Y = dVar24;
      uVar5 = *(undefined8 *)((longlong)&pTVar14->field0_0x0 + 0x10);
      uVar18 = (undefined4)uVar5;
      uVar25 = (undefined4)((ulonglong)uVar5 >> 0x20);
      pTVar15 = &local_118;
    }
    (local_170->field0_0x0)._s_0.Z = (double)CONCAT44(uVar25,uVar18);
    pTVar13 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
              __l2::<lambda_1>::operator()
                        (local_178,(TVector<double> *)&pTVar16->_s_0,pTVar2,pTVar4,
                         (TVector<double> *)&pTVar15->_s_0,pTVar13);
  }
  else {
    local_100._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    local_100._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
    local_e8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
    local_118._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    local_118._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
    local_e8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
    local_118._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    local_100._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    dVar24 = ExactPredicates::Orient3D(&local_d0,local_e8.XYZ,local_100.XYZ,local_118.XYZ);
    if (dVar24 < 0.0) {
      return false;
    }
    local_d0 = (pTVar13->field0_0x0)._s_0.X;
    dStack_c8 = (pTVar13->field0_0x0)._s_0.Y;
    local_e8._s_0.X = (pTVar12->field0_0x0)._s_0.X;
    local_e8._s_0.Y = (pTVar12->field0_0x0)._s_0.Y;
    local_c0 = (pTVar13->field0_0x0)._s_0.Z;
    local_e8._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
    local_118._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    local_118._s_0.Y = (pTVar2->field0_0x0)._s_0.Y;
    local_100._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    local_100._s_0.Y = (pTVar3->field0_0x0)._s_0.Y;
    local_118._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
    local_100._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
    dVar24 = ExactPredicates::Orient3D(&local_d0,local_e8.XYZ,local_100.XYZ,local_118.XYZ);
    if (0.0 <= dVar24) {
      dVar27 = (pTVar3->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      dVar28 = (pTVar3->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      dVar24 = (pTVar3->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      dVar26 = (pTVar4->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      dVar8 = (pTVar4->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      dVar32 = (pTVar4->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      local_118._s_0.X = dVar28 * dVar32 - dVar27 * dVar26;
      local_118._s_0.Y = dVar24 * dVar26 - dVar28 * dVar8;
      local_118._s_0.Z = dVar27 * dVar8 - dVar24 * dVar32;
      pTVar12 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
                __l2::<lambda_1>::operator()
                          (local_178,(TVector<double> *)&local_100._s_0,pTVar13,pTVar12,
                           (TVector<double> *)&local_118._s_0,pTVar2);
      pTVar16 = &local_100;
      dVar24 = (pTVar12->field0_0x0)._s_0.Y;
      (local_170->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
      (local_170->field0_0x0)._s_0.Y = dVar24;
      uVar5 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 0x10);
      uVar18 = (undefined4)uVar5;
      uVar25 = (undefined4)((ulonglong)uVar5 >> 0x20);
      pTVar15 = &local_118;
    }
    else {
      dVar31 = (pTVar14->field0_0x0)._s_0.Y - (pTVar13->field0_0x0)._s_0.Y;
      dVar26 = (pTVar14->field0_0x0)._s_0.Z - (pTVar13->field0_0x0)._s_0.Z;
      dVar24 = (pTVar14->field0_0x0)._s_0.X - (pTVar13->field0_0x0)._s_0.X;
      dVar29 = (pTVar12->field0_0x0)._s_0.Z - (pTVar13->field0_0x0)._s_0.Z;
      dVar8 = (pTVar12->field0_0x0)._s_0.X - (pTVar13->field0_0x0)._s_0.X;
      dVar32 = (pTVar12->field0_0x0)._s_0.Y - (pTVar13->field0_0x0)._s_0.Y;
      dVar30 = (pTVar4->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      dVar28 = (pTVar4->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      local_118._s_0.Y = dVar24 * dVar29 - dVar26 * dVar8;
      dVar27 = (pTVar3->field0_0x0)._s_0.Z - (pTVar2->field0_0x0)._s_0.Z;
      local_118._s_0.Z = dVar31 * dVar8 - dVar24 * dVar32;
      dVar8 = (pTVar4->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      local_118._s_0.X = dVar26 * dVar32 - dVar31 * dVar29;
      dVar24 = (pTVar3->field0_0x0)._s_0.X - (pTVar2->field0_0x0)._s_0.X;
      dVar32 = (pTVar3->field0_0x0)._s_0.Y - (pTVar2->field0_0x0)._s_0.Y;
      local_100._s_0.X = dVar27 * dVar8 - dVar32 * dVar30;
      local_100._s_0.Y = dVar24 * dVar30 - dVar28 * dVar27;
      local_100._s_0.Z = dVar28 * dVar32 - dVar24 * dVar8;
      pTVar12 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
                __l2::<lambda_1>::operator()
                          (local_178,(TVector<double> *)&local_e8._s_0,pTVar2,pTVar3,
                           (TVector<double> *)&local_118._s_0,pTVar13);
      pTVar16 = &local_118;
      dVar24 = (pTVar12->field0_0x0)._s_0.Y;
      (local_170->field0_0x0)._s_0.X = (pTVar12->field0_0x0)._s_0.X;
      (local_170->field0_0x0)._s_0.Y = dVar24;
      uVar5 = *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 0x10);
      uVar18 = (undefined4)uVar5;
      uVar25 = (undefined4)((ulonglong)uVar5 >> 0x20);
      pTVar15 = &local_100;
    }
    (local_170->field0_0x0)._s_0.Z = (double)CONCAT44(uVar25,uVar18);
    pTVar13 = `UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::
              __l2::<lambda_1>::operator()
                        (local_178,(TVector<double> *)&pTVar16->_s_0,pTVar13,pTVar14,
                         (TVector<double> *)&pTVar15->_s_0,pTVar2);
  }
  dVar24 = (pTVar13->field0_0x0)._s_0.Y;
  (local_168->field0_0x0)._s_0.X = (pTVar13->field0_0x0)._s_0.X;
  (local_168->field0_0x0)._s_0.Y = dVar24;
  (local_168->field0_0x0)._s_0.Z = (pTVar13->field0_0x0)._s_0.Z;
  return true;
}

// operator() @ 1495ad860

TVector<double> * __thiscall
`UE::Geometry::TExactIntrTriangle3Triangle3<double>::FindOrTestWithoutCoplanar<1>'::__l2::<lambda_1>
::operator()(void *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
            TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  dVar5 = ((param_2->field0_0x0)._s_0.Y - dVar2) * dVar4 +
          ((param_2->field0_0x0)._s_0.X - dVar1) * dVar7 +
          ((param_2->field0_0x0)._s_0.Z - dVar3) * dVar6;
  if (dVar5 == 0.0) {
    dVar7 = (dVar2 + (param_2->field0_0x0)._s_0.Y) * __real_3fe0000000000000;
    dVar2 = (dVar3 + (param_2->field0_0x0)._s_0.Z) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (dVar1 + (param_2->field0_0x0)._s_0.X) * __real_3fe0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  }
  else {
    dVar5 = (dVar7 * ((param_4->field0_0x0)._s_0.X - dVar1) +
             dVar4 * ((param_4->field0_0x0)._s_0.Y - dVar2) +
            dVar6 * ((param_4->field0_0x0)._s_0.Z - dVar3)) / dVar5;
    if (__real_3ff0000000000000 <= dVar5) {
      dVar5 = __real_3ff0000000000000;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar6 = __real_3ff0000000000000 - dVar5;
    dVar7 = (param_2->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar6 * dVar1 + dVar5 * (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 * dVar2 + dVar5 * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar6 * dVar3 + dVar5 * dVar4;
  }
  return __return_storage_ptr__;
}

