// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 11

// operator() @ 14356acd0

void __thiscall
`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FDynamicMesh3 *this_00;
  longlong *plVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  char cVar18;
  char cVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float local_res8;
  float fStackX_c;
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  uint local_e8;
  uint uStack_e4;
  float local_d8;
  float fStack_d4;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  float local_a8;
  undefined4 local_a4;
  
  if (**(char **)this != '\0') {
    return;
  }
  if (param_1 == **(int **)((longlong)this + 8)) {
    return;
  }
  this_00 = *(FDynamicMesh3 **)((longlong)this + 0x10);
  puVar1 = (uint *)(*(longlong *)
                     ((this_00->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar28 = *puVar1;
  uVar26 = puVar1[1];
  uVar13 = (uint)*(ulonglong *)(puVar1 + 2);
  uVar14 = puVar1[3];
  uVar17 = *(ulonglong *)(puVar1 + 2);
  uVar29 = (uint)uVar17;
  if ((**(char **)((longlong)this + 0x18) != '\0') && ((this_00->TriangleGroups).bIsSet != false)) {
    iVar21 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,uVar13);
    if (uVar14 == 0xffffffff) {
      iVar22 = **(int **)((longlong)this + 0x20);
    }
    else {
      iVar22 = UE::Geometry::FDynamicMesh3::GetTriangleGroup
                         (*(FDynamicMesh3 **)((longlong)this + 0x10),uVar14);
    }
    if (((iVar21 != **(int **)((longlong)this + 0x20)) &&
        (iVar21 != **(int **)((longlong)this + 0x28))) ||
       ((iVar22 != **(int **)((longlong)this + 0x20) &&
        (iVar22 != **(int **)((longlong)this + 0x28))))) goto LAB_14356ae42;
  }
  plVar7 = *(longlong **)((longlong)this + 0x30);
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    plVar25 = (longlong *)plVar7[8];
    if ((longlong *)plVar7[8] == (longlong *)0x0) {
      plVar25 = plVar7 + 7;
    }
    iVar21 = *(int *)((longlong)plVar25 + (ulonglong)((int)plVar7[9] - 1U & param_1) * 4);
    if (iVar21 != -1) {
      do {
        if (*(int *)(*plVar7 + (longlong)iVar21 * 0xc) == param_1) {
          if (**(int **)((longlong)this + 0x38) == -1) {
            if ((uVar28 != **(uint **)((longlong)this + 0x40)) &&
               (bVar20 = uVar26 == **(uint **)((longlong)this + 0x40), uVar26 = 0xffffffff, bVar20))
            {
              uVar26 = uVar28;
            }
            uVar27 = (ulonglong)(uVar26 & 0x1ff);
            lVar8 = *(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10) +
                     (ulonglong)(uVar26 >> 9) * 8);
            pdVar2 = (double *)(lVar8 + uVar27 * 0x18);
            dVar15 = *pdVar2;
            dVar16 = pdVar2[1];
            dVar3 = *(double *)(lVar8 + 0x10 + uVar27 * 0x18);
            pdVar2 = *(double **)((longlong)this + 0x48);
            dVar36 = dVar16 - pdVar2[1];
            dVar33 = dVar15 - *pdVar2;
            dVar12 = dVar3 - pdVar2[2];
            dVar30 = SQRT(dVar36 * dVar36 + dVar33 * dVar33 + dVar12 * dVar12);
            if (dVar30 <= 0.0) {
LAB_14356b4f7:
              **(undefined1 **)this = 1;
              return;
            }
            pdVar2 = *(double **)((longlong)this + 0x50);
            dVar30 = __real_3ff0000000000000 / dVar30;
            dVar36 = dVar36 * dVar30;
            dVar12 = dVar12 * dVar30;
            dVar33 = dVar33 * dVar30;
            if ((double)CONCAT44((uint)((ulonglong)**(undefined8 **)((longlong)this + 0x58) >> 0x20)
                                 ^ __xmm_80000000000000008000000000000000._4_4_,
                                 (uint)**(undefined8 **)((longlong)this + 0x58) ^
                                 (uint)__xmm_80000000000000008000000000000000) <
                dVar36 * pdVar2[1] + dVar33 * *pdVar2 + dVar12 * pdVar2[2]) goto LAB_14356b4f7;
            **(int **)((longlong)this + 0x38) = param_1;
            pdVar2 = *(double **)((longlong)this + 0x48);
            pdVar9 = *(double **)((longlong)this + 0x60);
            fVar38 = (float)(((dVar16 - pdVar2[1]) * dVar36 + (dVar15 - *pdVar2) * dVar33 +
                             (dVar3 - pdVar2[2]) * dVar12) /
                            ((dVar16 - pdVar9[1]) * dVar36 + (dVar15 - *pdVar9) * dVar33 +
                            (dVar3 - pdVar9[2]) * dVar12));
            if ((**(char **)((longlong)this + 0x68) != '\0') &&
               (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x70) != '\0')) {
              lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x60);
              fVar31 = __real_3f800000 - fVar38;
              lVar10 = *(longlong *)(lVar8 + (ulonglong)(uVar26 >> 9) * 8);
              uVar4 = *(undefined8 *)(lVar10 + uVar27 * 0xc);
              uVar23 = (ulonglong)(**(uint **)((longlong)this + 0x40) & 0x1ff);
              lVar11 = *(longlong *)
                        (lVar8 + (ulonglong)(**(uint **)((longlong)this + 0x40) >> 9) * 8);
              uVar5 = *(undefined8 *)(lVar11 + uVar23 * 0xc);
              fVar35 = *(float *)(lVar11 + 8 + uVar23 * 0xc);
              uVar23 = (ulonglong)(**(uint **)((longlong)this + 0x70) & 0x1ff);
              lVar8 = *(longlong *)
                       (lVar8 + (ulonglong)(**(uint **)((longlong)this + 0x70) >> 9) * 8);
              uVar6 = *(undefined8 *)(lVar8 + uVar23 * 0xc);
              fVar34 = (float)uVar6 * fVar38 + (float)uVar4 * fVar31;
              fVar32 = (float)((ulonglong)uVar6 >> 0x20) * fVar38 +
                       (float)((ulonglong)uVar4 >> 0x20) * fVar31;
              fVar37 = *(float *)(lVar8 + 8 + uVar23 * 0xc) * fVar38 +
                       *(float *)(lVar10 + 8 + uVar27 * 0xc) * fVar31;
              fVar31 = SQRT(fVar32 * fVar32 + fVar34 * fVar34 + fVar37 * fVar37);
              if (fVar31 <= 0.0) {
                fVar32 = 0.0;
                fVar37 = 0.0;
                fVar31 = 0.0;
              }
              else {
                fVar31 = __real_3f800000 / fVar31;
                fVar37 = fVar37 * fVar31;
                fVar32 = fVar31 * fVar32;
                fVar31 = fVar31 * fVar34;
              }
              local_d8 = (float)uVar5;
              fStack_d4 = (float)((ulonglong)uVar5 >> 0x20);
              fVar34 = SQRT(local_d8 * local_d8 + fStack_d4 * fStack_d4 + fVar35 * fVar35);
              if (fVar34 <= 0.0) {
                fStack_d4 = 0.0;
                fVar35 = 0.0;
                local_d8 = 0.0;
              }
              else {
                fVar34 = __real_3f800000 / fVar34;
                fStack_d4 = fStack_d4 * fVar34;
                fVar35 = fVar35 * fVar34;
                local_d8 = local_d8 * fVar34;
              }
              if (fVar31 * local_d8 + fStack_d4 * fVar32 + fVar35 * fVar37 <
                  **(float **)((longlong)this + 0x78)) goto LAB_14356b294;
            }
            if (**(char **)((longlong)this + 0x80) == '\0') {
              return;
            }
            if ((**(char **)((longlong)this + 0x88) != '\0') &&
               (*(char *)(*(longlong *)((longlong)this + 0x10) + 0xb0) != '\0')) {
              lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0xa0);
              uVar4 = *(undefined8 *)
                       (*(longlong *)(lVar8 + (ulonglong)(uVar26 >> 9) * 8) +
                       (ulonglong)(uVar26 & 0x1ff) * 8);
              local_res18 = (float)uVar4;
              uVar5 = *(undefined8 *)
                       (*(longlong *)
                         (lVar8 + (ulonglong)(**(uint **)((longlong)this + 0x40) >> 9) * 8) +
                       (ulonglong)(**(uint **)((longlong)this + 0x40) & 0x1ff) * 8);
              local_res20 = (float)uVar5;
              uVar6 = *(undefined8 *)
                       (*(longlong *)
                         (lVar8 + (ulonglong)(**(uint **)((longlong)this + 0x70) >> 9) * 8) +
                       (ulonglong)(**(uint **)((longlong)this + 0x70) & 0x1ff) * 8);
              local_res8 = (float)uVar6;
              fStackX_c = (float)((ulonglong)uVar6 >> 0x20);
              fStackX_1c = (float)((ulonglong)uVar4 >> 0x20);
              local_res20 = local_res20 -
                            (local_res8 * fVar38 + local_res18 * (__real_3f800000 - fVar38));
              fStackX_24 = (float)((ulonglong)uVar5 >> 0x20);
              fStackX_24 = fStackX_24 -
                           (fStackX_c * fVar38 + fStackX_1c * (__real_3f800000 - fVar38));
              fVar35 = fStackX_24 * fStackX_24 + local_res20 * local_res20;
              if (**(float **)((longlong)this + 0x90) <= fVar35 &&
                  fVar35 != **(float **)((longlong)this + 0x90)) {
LAB_14356b294:
                **(undefined1 **)this = 1;
                return;
              }
            }
            if (**(char **)((longlong)this + 0x98) == '\0') {
              return;
            }
            plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x208);
            if (plVar7 == (longlong *)0x0) {
              return;
            }
            local_ac = (**(code **)(*plVar7 + 0xa8))();
            local_c0 = *(longlong *)((longlong)this + 0x10);
            uVar28 = **(uint **)((longlong)this + 8);
            uVar27 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(local_c0 + 0x1c0) + (ulonglong)(uVar28 >> 9) * 8)
                       + 8 + (ulonglong)(uVar28 & 0x1ff) * 0x10);
            local_b8 = **(undefined4 **)((longlong)this + 0x70);
            local_b4 = **(undefined4 **)((longlong)this + 0x40);
            local_a4 = **(undefined4 **)((longlong)this + 0x90);
            iVar21 = (int)(uVar27 >> 0x20);
            local_b0 = uVar26;
            local_a8 = fVar38;
            if (iVar21 == -1) {
              if (uVar14 != 0xffffffff) goto LAB_14356b363;
            }
            else {
              if (uVar14 == 0xffffffff) goto LAB_14356b363;
              cVar18 = (**(code **)(**(longlong **)(local_c0 + 0x208) + 0x80))
                                 (*(longlong **)(local_c0 + 0x208),uVar28);
              plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x208);
              cVar19 = (**(code **)(*plVar7 + 0x80))(plVar7,param_1);
              if (cVar18 != cVar19) goto LAB_14356b363;
              if (cVar18 != '\0') {
                lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130);
                uVar23 = (ulonglong)((uint)uVar27 & 0x1ff);
                lVar10 = *(longlong *)(lVar8 + ((uVar27 & 0xffffffff) >> 9) * 8);
                uVar4 = *(undefined8 *)(lVar10 + uVar23 * 0xc);
                lVar8 = *(longlong *)(lVar8 + ((uVar17 & 0xffffffff) >> 9) * 8);
                uVar5 = *(undefined8 *)(lVar8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
                local_e8 = (uint)uVar4;
                uVar28 = **(uint **)((longlong)this + 0x40);
                uStack_e4 = (uint)((ulonglong)uVar4 >> 0x20);
                uVar24 = uStack_e4;
                if ((local_e8 != uVar28) && (uVar24 = local_e8, uStack_e4 == uVar28)) {
                  uVar24 = *(uint *)(lVar10 + 8 + uVar23 * 0xc);
                }
                local_d8 = (float)uVar5;
                fStack_d4 = (float)((ulonglong)uVar5 >> 0x20);
                fVar38 = fStack_d4;
                if ((local_d8 != (float)uVar28) && (fVar38 = local_d8, fStack_d4 == (float)uVar28))
                {
                  fVar38 = (float)*(uint *)(lVar8 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
                }
                uVar28 = uVar14;
                if ((uVar24 == **(uint **)((longlong)this + 0x70)) != (fVar38 == (float)uVar26)) {
                  uVar28 = uVar13;
                  uVar29 = uVar14;
                }
                bVar20 = ``UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2
                         ::<lambda_1>::operator()'::__l43::<lambda_1>::operator()
                                   (&local_c0,iVar21,uVar29);
                uVar29 = uVar28;
                if (!bVar20) goto LAB_14356b363;
              }
            }
            bVar20 = ``UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::
                     <lambda_1>::operator()'::__l43::<lambda_1>::operator()
                               (&local_c0,(uint)uVar27,uVar29);
            if (bVar20) {
              return;
            }
LAB_14356b363:
            **(undefined1 **)this = 1;
            return;
          }
          goto LAB_14356ae42;
        }
        iVar21 = *(int *)(*plVar7 + 4 + (longlong)iVar21 * 0xc);
      } while (iVar21 != -1);
    }
  }
  if (*(int *)(*(longlong *)
                (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                (ulonglong)((uint)param_1 >> 9) * 8) + 0xc + (ulonglong)(param_1 & 0x1ff) * 0x10) !=
      -1) {
    plVar7 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0x208);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    cVar18 = (**(code **)(*plVar7 + 0x80))(plVar7,param_1);
    if (cVar18 == '\0') {
      return;
    }
  }
LAB_14356ae42:
  **(undefined1 **)this = 1;
  return;
}

// operator() @ 14356b510

void __thiscall
`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TVector<double>_u_0 *pTVar10;
  double *pdVar11;
  int iVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 local_128;
  undefined4 local_120;
  TVector<double>_u_0 local_118;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  
  if (**(char **)((longlong)this + 8) == '\0') {
    lVar3 = *(longlong *)
             (((*(FDynamicMesh3 **)this)->Triangles).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    local_128 = *(undefined8 *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    local_120 = *(undefined4 *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
    if (*(char *)((longlong)this + 0x38) == '\0') {
      pdVar11 = *(double **)((longlong)this + 0x20);
      local_118._s_0.X = *pdVar11;
      local_118._s_0.Y = pdVar11[1];
      pTVar10 = &local_118;
      local_118._s_0.Z = pdVar11[2];
    }
    else {
      pTVar10 = &UE::Geometry::FDynamicMesh3::GetTriNormal
                           (*(FDynamicMesh3 **)this,(TVector<double> *)&local_118._s_0,param_1)->
                 field0_0x0;
    }
    local_118._s_0.Z = (pTVar10->_s_0).Z;
    pdVar11 = &local_f8;
    dVar8 = (((TVector<double>_u_0 *)&(pTVar10->_s_0).X)->_s_0).X;
    dVar9 = (pTVar10->_s_0).Y;
    uVar1 = *(uint *)((longlong)this + 0x1c);
    puVar13 = (uint *)&local_128;
    iVar12 = 0;
    do {
      uVar2 = *puVar13;
      if (uVar2 == uVar1) {
        return;
      }
      if (uVar2 == *(uint *)((longlong)this + 0x18)) {
        puVar4 = *(undefined4 **)((longlong)this + 0x10);
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        uVar16 = puVar4[2];
        uVar17 = puVar4[3];
        dVar18 = *(double *)(puVar4 + 4);
      }
      else {
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uVar2 >> 9) * 8)
        ;
        puVar4 = (undefined4 *)(lVar3 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        uVar16 = puVar4[2];
        uVar17 = puVar4[3];
        dVar18 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar2 & 0x1ff) * 0x18);
      }
      *(undefined4 *)pdVar11 = uVar14;
      *(undefined4 *)((longlong)pdVar11 + 4) = uVar15;
      *(undefined4 *)(pdVar11 + 1) = uVar16;
      *(undefined4 *)((longlong)pdVar11 + 0xc) = uVar17;
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      pdVar11[2] = dVar18;
      pdVar11 = pdVar11 + 3;
    } while (iVar12 < 3);
    auVar25._0_8_ = local_d0 - local_e8;
    auVar25._8_8_ = 0;
    dVar20 = local_d8 - dStack_f0;
    dVar18 = local_e0 - local_f8;
    dVar22 = local_c8 - local_f8;
    dVar6 = local_c0 - dStack_f0;
    dVar7 = local_b8 - local_e8;
    dVar21 = dVar6 * auVar25._0_8_ - dVar7 * dVar20;
    dVar19 = dVar7 * dVar18 - dVar22 * auVar25._0_8_;
    dVar23 = dVar22 * dVar20 - dVar6 * dVar18;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar19 * dVar19 + dVar21 * dVar21 + dVar23 * dVar23;
    auVar26 = sqrtpd(auVar25,auVar26);
    dVar24 = auVar26._0_8_;
    if (dVar24 <= 0.0) {
      dVar5 = 0.0;
      dVar19 = 0.0;
      dVar21 = 0.0;
      dVar24 = 0.0;
    }
    else {
      dVar5 = __real_3ff0000000000000 / dVar24;
      dVar21 = dVar5 * dVar21;
      dVar19 = dVar5 * dVar19;
      dVar5 = dVar5 * dVar23;
    }
    if (0.0 < *(double *)((longlong)this + 0x28)) {
      dVar23 = dVar22 * dVar22 + dVar6 * dVar6 + dVar7 * dVar7;
      dVar18 = dVar18 * dVar18 + dVar20 * dVar20 + auVar25._0_8_ * auVar25._0_8_;
      if (dVar23 <= dVar18) {
        dVar23 = dVar18;
      }
      dVar18 = (local_c0 - local_d8) * (local_c0 - local_d8) +
               (local_c8 - local_e0) * (local_c8 - local_e0) +
               (local_b8 - local_d0) * (local_b8 - local_d0);
      if (dVar23 <= dVar18) {
        dVar23 = dVar18;
      }
      dVar24 = dVar24 / (dVar23 + __real_3e45798ee2308c3a);
      dVar18 = **(double **)((longlong)this + 0x30);
      if (dVar18 <= dVar24) {
        dVar24 = dVar18;
      }
      **(double **)((longlong)this + 0x30) = dVar24;
    }
    *(bool *)*(undefined8 *)((longlong)this + 8) =
         dVar19 * dVar9 + dVar21 * dVar8 + dVar5 * local_118._s_0.Z <= __real_3ee4f8b588e368f1;
  }
  return;
}

// operator() @ 14356c3f0

void __thiscall
`UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  TVector<double>_u_0 local_28;
  
  if (((**(char **)this != '\0') && (*(int *)((longlong)this + 8) != param_1)) &&
     (*(int *)((longlong)this + 0xc) != param_1)) {
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (*(FDynamicMesh3 **)((longlong)this + 0x10),(TVector<double> *)&local_28._s_0,param_1)
    ;
    *(bool *)*(undefined8 *)this =
         *(double *)((longlong)this + 0x48) <=
         local_28._s_0.Y * *(double *)((longlong)this + 0x20) +
         local_28._s_0.X * *(double *)((longlong)this + 0x18) +
         local_28._s_0.Z * *(double *)((longlong)this + 0x28);
    if ((**(char **)this == '\0') && (*(char *)((longlong)this + 0x50) == '\0')) {
      **(char **)this =
           *(double *)((longlong)this + 0x48) <=
           local_28._s_0.Y * *(double *)((longlong)this + 0x38) +
           local_28._s_0.X * *(double *)((longlong)this + 0x30) +
           local_28._s_0.Z * *(double *)((longlong)this + 0x40);
    }
  }
  return;
}

// operator() @ 14356c4b0

void __thiscall
`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  char *pcVar2;
  TVector<double>_u_0 local_28;
  
  if (**(char **)((longlong)this + 0x20) != '\0') {
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (*(FDynamicMesh3 **)this,(TVector<double> *)&local_28._s_0,param_1);
    if (**(char **)((longlong)this + 0x18) == '\0') {
      pdVar1 = *(double **)((longlong)this + 0x10);
      *pdVar1 = local_28._s_0.X;
      pdVar1[1] = local_28._s_0.Y;
      pdVar1[2] = local_28._s_0.Z;
      **(undefined1 **)((longlong)this + 0x18) = 1;
      return;
    }
    pcVar2 = *(char **)((longlong)this + 0x20);
    if ((*pcVar2 != '\0') &&
       (pdVar1 = *(double **)((longlong)this + 0x10),
       *(double *)((longlong)this + 8) <=
       local_28._s_0.Y * pdVar1[1] + local_28._s_0.X * *pdVar1 + local_28._s_0.Z * pdVar1[2])) {
      *pcVar2 = '\x01';
      return;
    }
    *pcVar2 = '\0';
  }
  return;
}

// operator() @ 143570220

void __thiscall
`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (**(char **)((longlong)this + 8) != '\0') {
    uVar14 = (ulonglong)(param_1 & 0x1ff);
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)this + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
    lVar6 = *(longlong *)(*(longlong *)this + 0x10);
    uVar4 = *(uint *)(lVar5 + uVar14 * 0xc);
    uVar15 = (ulonglong)(uVar4 & 0x1ff);
    lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
    pdVar1 = (double *)(lVar7 + uVar15 * 0x18);
    dVar20 = *pdVar1;
    dVar10 = pdVar1[1];
    dVar19 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
    uVar4 = *(uint *)(lVar5 + 4 + uVar14 * 0xc);
    uVar15 = (ulonglong)(uVar4 & 0x1ff);
    lVar7 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
    pdVar1 = (double *)(lVar7 + uVar15 * 0x18);
    dVar16 = *pdVar1;
    dVar17 = pdVar1[1];
    dVar2 = *(double *)(lVar7 + 0x10 + uVar15 * 0x18);
    uVar4 = *(uint *)(lVar5 + 8 + uVar14 * 0xc);
    dVar12 = dVar16 - dVar20;
    dVar11 = dVar17 - dVar10;
    dVar8 = dVar2 - dVar19;
    uVar14 = (ulonglong)(uVar4 & 0x1ff);
    lVar5 = *(longlong *)(lVar6 + (ulonglong)(uVar4 >> 9) * 8);
    pdVar1 = (double *)(lVar5 + uVar14 * 0x18);
    dVar13 = *pdVar1;
    dVar9 = pdVar1[1];
    dVar3 = *(double *)(lVar5 + 0x10 + uVar14 * 0x18);
    dVar20 = dVar13 - dVar20;
    dVar19 = dVar3 - dVar19;
    dVar13 = dVar13 - dVar16;
    dVar10 = dVar9 - dVar10;
    dVar9 = dVar9 - dVar17;
    dVar3 = dVar3 - dVar2;
    dVar18 = dVar19 * dVar11 - dVar10 * dVar8;
    dVar17 = dVar20 * dVar8 - dVar19 * dVar12;
    dVar16 = dVar10 * dVar12 - dVar20 * dVar11;
    dVar8 = dVar11 * dVar11 + dVar12 * dVar12 + dVar8 * dVar8;
    dVar2 = dVar9 * dVar9 + dVar13 * dVar13 + dVar3 * dVar3;
    dVar19 = dVar10 * dVar10 + dVar20 * dVar20 + dVar19 * dVar19;
    if (dVar19 <= dVar8) {
      dVar19 = dVar8;
    }
    if (dVar19 <= dVar2) {
      dVar19 = dVar2;
    }
    if (SQRT(dVar17 * dVar17 + dVar18 * dVar18 + dVar16 * dVar16) *
        (__real_3ff0000000000000 / (dVar19 + __real_3e45798ee2308c3a)) <
        *(double *)((longlong)this + 0x10)) {
      **(char **)((longlong)this + 8) = '\0';
    }
  }
  return;
}

// CollapseDegenerateEdges @ 14357b460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Geometry::FLocalPlanarSimplify::CollapseDegenerateEdges
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          bool param_3,double param_4,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_5
          )

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  longlong lVar6;
  FDynamicMeshAttributeSet *pFVar7;
  ForElementType<FSetElementId> FVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  ForElementType<FSetElementId> FVar17;
  ForAnyElementType FVar18;
  int iVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_res20 [8];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a8 [12];
  uint local_9c;
  longlong local_98;
  uint local_90;
  int local_8c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  double local_68;
  
  uVar11 = _UNK_15060db28;
  uVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  do {
    iVar19 = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::TIterator::TIterator
              ((TIterator *)local_a8,param_2);
    if (*(int *)(local_98 + 0x18) <= local_8c) break;
    do {
      iVar16 = local_8c;
      uVar3 = *(uint *)(*(longlong *)local_a8._0_8_ + (longlong)local_8c * 0xc);
      if ((-1 < (int)uVar3) &&
         ((int)uVar3 <
          (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U
                    ) < 0xfffe) {
          pFVar4 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
          uVar5 = *(ulonglong *)
                   (*(longlong *)
                     ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8)
                   + (ulonglong)(uVar3 & 0x1ff) * 0x10);
          uVar15 = (ulonglong)((uint)uVar5 & 0x1ff);
          uVar20 = uVar5 & 0xffffffff;
          lVar6 = *(longlong *)(pFVar4 + ((uVar5 & 0xffffffff) >> 9) * 8);
          pdVar1 = (double *)(lVar6 + uVar15 * 0x18);
          local_68 = *(double *)(lVar6 + 0x10 + uVar15 * 0x18);
          uVar15 = (ulonglong)((uint)(uVar5 >> 0x20) & 0x1ff);
          lVar6 = *(longlong *)(pFVar4 + (uVar5 >> 0x29) * 8);
          pdVar2 = (double *)(lVar6 + uVar15 * 0x18);
          dVar22 = *pdVar2 - *pdVar1;
          dVar23 = *(double *)(lVar6 + 0x10 + uVar15 * 0x18) - local_68;
          dVar24 = pdVar2[1] - pdVar1[1];
          if (dVar24 * dVar24 + dVar22 * dVar22 + dVar23 * dVar23 <= param_4 * param_4) {
            pFVar7 = (param_1->AttributeSet).Ptr;
            local_e8 = uVar5;
            if ((pFVar7 == (FDynamicMeshAttributeSet *)0x0) ||
               (cVar12 = (**(code **)(pFVar7->_padding_ + 0x90))(pFVar7,uVar5 >> 0x20,0),
               cVar12 == '\0')) {
              uVar20 = local_e8 >> 0x20;
              uVar21 = (undefined4)local_e8;
            }
            else {
              pFVar7 = (param_1->AttributeSet).Ptr;
              uVar21 = local_e8._4_4_;
              if ((pFVar7 != (FDynamicMeshAttributeSet *)0x0) &&
                 (cVar12 = (**(code **)(pFVar7->_padding_ + 0x90))(pFVar7,uVar20,0), cVar12 != '\0')
                 ) goto LAB_14357b643;
            }
            local_d8 = 0xffffffffffffffff;
            local_b8 = 0xffffffffffffffff;
            local_c8 = uVar10;
            uStack_c0 = uVar11;
            iVar14 = (**(code **)(param_1->_padding_ + 0x68))(param_1,uVar21,uVar20,local_e0);
            if (iVar14 == 0) {
              iVar19 = iVar19 + 1;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(local_80,iVar16);
              if (param_5 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
LAB_14357b811:
              }
              else {
                if (*(int *)&(param_5->Elements).field_0x8 !=
                    *(int *)&(param_5->Elements).field_0x34) {
                  FVar8 = (param_5->Hash).SecondaryData;
                  FVar17 = (ForElementType<FSetElementId>)&param_5->Hash;
                  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
                    FVar17 = FVar8;
                  }
                  iVar16 = *(int *)((longlong)FVar17 +
                                   ((longlong)param_5->HashSize - 1U & (longlong)(int)uStack_c0) * 4
                                   );
                  if (iVar16 != -1) {
                    do {
                      if (*(int *)(*(longlong *)&param_5->Elements + (longlong)iVar16 * 0xc) ==
                          (int)uStack_c0) {
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                                  (param_5,iVar16);
                        break;
                      }
                      iVar16 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar16 * 0xc
                                       );
                    } while (iVar16 != -1);
                  }
                }
                if ((uStack_c0._4_4_ != -1) &&
                   (*(int *)&(param_5->Elements).field_0x8 !=
                    *(int *)&(param_5->Elements).field_0x34)) {
                  FVar8 = (param_5->Hash).SecondaryData;
                  FVar17 = (ForElementType<FSetElementId>)&param_5->Hash;
                  if (FVar8 != (ForElementType<FSetElementId>)0x0) {
                    FVar17 = FVar8;
                  }
                  iVar16 = *(int *)((longlong)FVar17 +
                                   ((longlong)param_5->HashSize - 1U & (longlong)uStack_c0._4_4_) *
                                   4);
                  if (iVar16 != -1) {
                    do {
                      if (*(int *)(*(longlong *)&param_5->Elements + (longlong)iVar16 * 0xc) ==
                          uStack_c0._4_4_) {
                        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                                  (param_5,iVar16);
                        goto LAB_14357b811;
                      }
                      iVar16 = *(int *)(*(longlong *)&param_5->Elements + 4 + (longlong)iVar16 * 0xc
                                       );
                    } while (iVar16 != -1);
                  }
                }
              }
              if ((param_3) && (uStack_c0._4_4_ != -1)) {
                iVar16 = uStack_c0._4_4_;
                if ((local_f8.Data <= (FScriptContainerElement *)((longlong)&uStack_c0 + 4U)) &&
                   ((FScriptContainerElement *)((longlong)&uStack_c0 + 4U) <
                    local_f8.Data + (longlong)local_f0._4_4_ * 4)) {
                  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar13) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  iVar16 = uStack_c0._4_4_;
                }
                iVar14 = (int)local_f0;
                if ((int)local_f0 == local_f0._4_4_) {
                  iVar14 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_f8,(int *)((longlong)&local_f0 + 4));
                  iVar16 = uStack_c0._4_4_;
                }
                local_f0 = CONCAT44(local_f0._4_4_,iVar14 + 1);
                *(int *)(local_f8.Data + (longlong)iVar14 * 4) = iVar16;
              }
            }
          }
        }
      }
LAB_14357b643:
      local_90 = local_90 & ~local_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_a8 + 8));
    } while (local_8c < *(int *)(local_98 + 0x18));
  } while (iVar19 != 0);
  if (param_3) {
    iVar19 = (int)local_f0;
    pFVar4 = local_f8.Data + (longlong)(int)local_f0 * 4;
    FVar18.Data = local_f8.Data;
    while( true ) {
      if ((int)local_f0 != iVar19) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (FVar18.Data == pFVar4) break;
      if (*(int *)&(param_2->Elements).field_0x8 == *(int *)&(param_2->Elements).field_0x34) {
LAB_14357b8ed:
        FVar18.Data = FVar18.Data + 4;
      }
      else {
        FVar8 = (param_2->Hash).SecondaryData;
        FVar17 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar8 != (ForElementType<FSetElementId>)0x0) {
          FVar17 = FVar8;
        }
        iVar16 = *(int *)((longlong)FVar17 +
                         ((longlong)param_2->HashSize - 1U & (longlong)*(int *)FVar18.Data) * 4);
        if (iVar16 == -1) goto LAB_14357b8ed;
        do {
          if (*(int *)(*(longlong *)&param_2->Elements + (longlong)iVar16 * 0xc) ==
              *(int *)FVar18.Data) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(param_2,iVar16);
            goto LAB_14357b8ed;
          }
          iVar16 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar16 * 0xc);
        } while (iVar16 != -1);
        FVar18.Data = FVar18.Data + 4;
      }
    }
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// CollapseWouldChangeShapeOrUVs @ 14357b930

/* WARNING: Type propagation algorithm not settling */

bool __cdecl
UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs
          (FDynamicMesh3 *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          double param_3,int param_4,int param_5,TVector<double> *param_6,int param_7,
          TVector<double> *param_8,TVector<double> *param_9,bool param_10,bool param_11,
          bool param_12,bool param_13,float param_14,bool param_15,float param_16)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  int local_res10 [2];
  double local_res18;
  int local_res20 [2];
  int local_e8 [2];
  undefined8 local_e0;
  undefined1 **local_d8;
  undefined1 *local_d0;
  int *local_c8;
  FDynamicMesh3 *local_c0;
  bool *local_b8;
  int *local_b0;
  int *local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a0;
  int *local_98;
  int *local_90;
  TVector<double> *local_88;
  TVector<double> *local_80;
  double *local_78;
  TVector<double> *local_70;
  bool *local_68;
  int *local_60;
  float *local_58;
  bool *local_50;
  bool *local_48;
  float *local_40;
  bool *local_38;
  
  local_res8[0] = 0;
  local_e8[1] = 0xffffffff;
  uVar1 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_4 >> 9) * 8)
            + 8 + (ulonglong)(param_4 & 0x1ff) * 0x10);
  local_res18 = param_3;
  local_res20[0] = param_4;
  local_e0 = (code *)uVar1;
  local_e8[0] = FDynamicMesh3::GetTriangleGroup(param_1,(int)uVar1);
  local_res10[0] = -1;
  if (SUB84(uVar1,4) != -1) {
    local_res10[0] = FDynamicMesh3::GetTriangleGroup(param_1,local_e0._4_4_);
  }
  local_d0 = local_res8;
  local_c8 = local_res20;
  local_b8 = &param_10;
  local_b0 = local_e8;
  local_a8 = local_res10;
  local_98 = local_e8 + 1;
  local_90 = &param_5;
  local_88 = param_6;
  local_80 = param_9;
  local_78 = &local_res18;
  local_70 = param_8;
  local_68 = &param_15;
  local_60 = &param_7;
  local_58 = &param_16;
  local_50 = &param_11;
  local_48 = &param_12;
  local_40 = &param_14;
  local_38 = &param_13;
  local_d8 = &local_d0;
  local_e0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>,void,int>
             ::Call;
  local_c0 = param_1;
  local_a0 = param_2;
  FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
            (&param_1->VertexEdgeLists,param_5,(TFunctionRef<void___cdecl(int)> *)&local_e0);
  return (bool)local_res8[0];
}

// CollapseWouldHurtTriangleQuality @ 14357baa0

bool __cdecl
UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality
          (FDynamicMesh3 *param_1,TVector<double> *param_2,int param_3,TVector<double> *param_4,
          int param_5,TVector<double> *param_6,double param_7,bool param_8)

{
  double local_res8;
  char local_res18 [8];
  code *local_88;
  FDynamicMesh3 **local_80;
  FDynamicMesh3 *local_78;
  char *local_70;
  double local_68;
  FDynamicMesh3 *local_60;
  char *local_58;
  TVector<double> *local_50;
  int local_48;
  int local_44;
  TVector<double> *local_40;
  double local_38;
  double *local_30;
  bool local_28;
  
  local_58 = local_res18;
  local_50 = param_6;
  local_44 = param_5;
  local_30 = &local_res8;
  local_28 = param_8;
  local_80 = &local_60;
  local_88 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res8 = __real_7fefffffffffffff;
  local_38 = param_7;
  local_res18[0] = '\0';
  local_60 = param_1;
  local_48 = param_3;
  local_40 = param_2;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,param_3,(TFunctionRef<void___cdecl(int)> *)&local_88);
  if ((local_res18[0] == '\0') &&
     (local_res8 * __real_4000000000000000 * __real_3fe279a74590331d < param_7)) {
    local_70 = local_res18;
    local_68 = local_res8;
    local_80 = &local_78;
    local_res18[0] = '\x01';
    local_88 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>,void,int>
               ::Call;
    local_78 = param_1;
    FDynamicMesh3::EnumerateVertexTriangles
              (param_1,param_3,(TFunctionRef<void___cdecl(int)> *)&local_88);
  }
  return (bool)local_res18[0];
}

// IsDevelopableAlongEdge @ 1435b9f30

bool __cdecl
UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge
          (FDynamicMesh3 *param_1,int param_2,int param_3,double param_4,TVector<double> *param_5,
          bool *param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  TVector<double> *pTVar5;
  char local_res10 [8];
  TVector<double>_u_0 local_98;
  char *local_80;
  undefined8 local_78;
  FDynamicMesh3 *local_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  undefined1 local_30;
  
  uVar2 = *(undefined8 *)
           (*(longlong *)
             ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
            + 8 + (ulonglong)(param_2 & 0x1ff) * 0x10);
  pTVar5 = FDynamicMesh3::GetTriNormal(param_1,(TVector<double> *)&local_98._s_0,(int)uVar2);
  dVar3 = (pTVar5->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
  (param_5->field0_0x0)._s_0.Y = dVar3;
  (param_5->field0_0x0)._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
  *param_6 = true;
  iVar4 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar4 == -1) {
    local_50 = local_98._0_4_;
    uStack_4c = local_98._4_4_;
  }
  else {
    pTVar5 = FDynamicMesh3::GetTriNormal(param_1,(TVector<double> *)&local_98._s_0,iVar4);
    auVar1 = *(undefined1 (*) [16])&pTVar5->field0_0x0;
    local_98._8_4_ = auVar1._8_4_;
    local_98._12_4_ = auVar1._12_4_;
    local_98._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
    local_50 = auVar1._0_4_;
    uStack_4c = auVar1._4_4_;
    if (auVar1._8_8_ * (param_5->field0_0x0)._s_0.Y + auVar1._0_8_ * (param_5->field0_0x0)._s_0.X +
        local_98._s_0.Z * (param_5->field0_0x0)._s_0.Z < param_4) {
      *param_6 = false;
    }
  }
  local_68 = (param_5->field0_0x0)._s_0.X;
  dStack_60 = (param_5->field0_0x0)._s_0.Y;
  local_80 = local_res10;
  local_58 = (param_5->field0_0x0)._s_0.Z;
  local_30 = *param_6;
  local_98._s_0.X =
       (double)Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>,void,int>
               ::Call;
  local_res10[0] = '\x01';
  uStack_48 = local_98._8_4_;
  uStack_44 = local_98._12_4_;
  local_98._s_0.Y = (double)&local_80;
  local_78 = uVar2;
  local_70 = param_1;
  local_40 = local_98._s_0.Z;
  local_38 = param_4;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,param_3,(TFunctionRef<void___cdecl(int)> *)&local_98._s_0);
  if ((*param_6 == false) || (local_res10[0] == '\0')) {
    *param_6 = false;
  }
  else {
    *param_6 = true;
  }
  return (bool)local_res10[0];
}

// IsFlat @ 1435ba340

bool __cdecl
UE::Geometry::FLocalPlanarSimplify::IsFlat
          (FDynamicMesh3 *param_1,int param_2,double param_3,TVector<double> *param_4)

{
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  code *local_48;
  FDynamicMesh3 **local_40;
  FDynamicMesh3 *local_38;
  double local_30;
  TVector<double> *local_28;
  undefined1 *local_20;
  undefined1 *local_18;
  
  local_20 = local_res18;
  local_18 = local_res8;
  local_40 = &local_38;
  local_48 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
             ::Call;
  local_res18[0] = 0;
  local_res8[0] = 1;
  local_38 = param_1;
  local_30 = param_3;
  local_28 = param_4;
  FDynamicMesh3::EnumerateVertexTriangles
            (param_1,param_2,(TFunctionRef<void___cdecl(int)> *)&local_48);
  return (bool)local_res8[0];
}

// SimplifyAlongEdges @ 1435c4fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FLocalPlanarSimplify::SimplifyAlongEdges
          (FLocalPlanarSimplify *this,FDynamicMesh3 *param_1,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  uint *puVar16;
  double dVar17;
  TVector<double> *pTVar18;
  undefined8 uVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  undefined1 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ForElementType<FSetElementId> FVar24;
  uint *puVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  char cVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  double dVar38;
  undefined1 local_378 [8];
  undefined1 local_370 [8];
  undefined1 local_368 [8];
  FScriptContainerElement local_360 [8];
  undefined1 local_358 [8];
  FScriptContainerElement local_350 [8];
  int local_348;
  char local_344 [4];
  char local_340 [8];
  ForAnyElementType local_338;
  undefined1 local_330 [8];
  int local_328;
  uint local_320 [2];
  int local_318;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> *local_310;
  TArray<int,TSizedDefaultAllocator<32>_> local_308;
  FScriptContainerElement local_2f8 [4];
  int local_2f4;
  float local_2f0 [2];
  uint local_2e8;
  int local_2e4;
  uint local_2e0 [2];
  uint local_2d8;
  FScriptContainerElement *local_2d0;
  uint local_2c8 [2];
  undefined8 local_2c0;
  ForAnyElementType FStack_2b8;
  uint *local_2b0;
  double local_2a8;
  ForAnyElementType FStack_2a0;
  FScriptContainerElement *local_298;
  undefined1 *local_290;
  ForAnyElementType FStack_288;
  FScriptContainerElement *local_280;
  ulonglong local_278;
  uint *local_270;
  code *local_268;
  FDynamicMesh3 **local_260;
  TVector<double>_u_0 local_258;
  FDynamicMesh3 *local_240;
  uint *local_238;
  ForAnyElementType local_230;
  undefined8 local_228;
  FScriptContainerElement *pFStack_220;
  ForAnyElementType local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  uint *local_200;
  ForAnyElementType local_1f8;
  double *local_1f0;
  undefined1 *local_1e8;
  ForAnyElementType local_1e0;
  FScriptContainerElement *local_1d8;
  uint *local_1d0;
  float *local_1c8;
  undefined1 *local_1c0;
  ForAnyElementType local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  ForAnyElementType local_1a0;
  longlong local_198;
  undefined1 local_190 [20];
  uint auStack_17c [3];
  code *local_170;
  undefined8 *local_168;
  code *local_160;
  FDynamicMesh3 **local_158;
  code *local_150;
  FDynamicMesh3 **local_148;
  undefined1 local_140 [8];
  undefined8 local_138;
  int local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8 [9];
  
  local_310 = param_3;
  pFVar8 = (FScriptContainerElement *)
           cos(this->SimplificationAngleTolerance * __real_3f91df46a2529d39);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(param_2,&local_308);
  dVar17 = __real_3fe279a74590331d;
  puVar16 = __real_7fefffffffffffff;
  dVar15 = __real_4000000000000000;
  fVar14 = __real_3c8efa35;
  uVar13 = _UNK_15060db28;
  uVar12 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar11 = __real_3ff0000000000000;
  iVar29 = 0;
  local_348 = 0;
  local_318 = 0;
  do {
    uVar23 = (ulonglong)local_308.ArrayNum;
    local_2e8 = local_308.ArrayNum;
    FVar26.Data = local_308.AllocatorInstance.Data + uVar23 * 4;
    local_2d0 = local_308.AllocatorInstance.Data;
    local_338.Data = FVar26.Data;
    local_2e4 = iVar29;
LAB_1435c50d8:
    if (local_308.ArrayNum != (uint)uVar23) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_370);
    }
    if (local_2d0 != FVar26.Data) {
      local_2d8 = *(uint *)local_2d0;
      if ((-1 < (int)local_2d8) &&
         ((int)local_2d8 <
          (int)((param_1->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        pFVar27 = (FScriptContainerElement *)(ulonglong)(local_2d8 >> 9);
        iVar29 = local_348;
        local_1a0.Data = pFVar27;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (longlong)pFVar27 * 8) + (ulonglong)(local_2d8 & 0x1ff) * 2) - 1U)
            < 0xfffe) {
          pFVar4 = (param_1->Edges).Blocks.AllocatorInstance.Data;
          lVar30 = (ulonglong)(local_2d8 & 0x1ff) * 0x10;
          auVar2 = *(undefined1 (*) [16])(lVar30 + *(longlong *)(pFVar4 + (longlong)pFVar27 * 8));
          local_2a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          FStack_2a0.Data =
               (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_298 = (FScriptContainerElement *)
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_290 = (undefined1 *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          FStack_288.Data =
               (FScriptContainerElement *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_280 = (FScriptContainerElement *)
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar19 = *(undefined8 *)(lVar30 + *(longlong *)(pFVar4 + (longlong)pFVar27 * 8) + 8);
          local_330 = (undefined1  [8])uVar19;
          local_198 = lVar30;
          unique0x100016b6 = auVar2;
          pTVar18 = FDynamicMesh3::GetTriNormal
                              (param_1,(TVector<double> *)&local_258._s_0,(int)uVar19);
          bVar10 = true;
          uVar21 = 1;
          local_2a8 = (pTVar18->field0_0x0)._s_0.X;
          FStack_2a0.Data = (FScriptContainerElement *)(pTVar18->field0_0x0)._s_0.Y;
          local_298 = (FScriptContainerElement *)(pTVar18->field0_0x0)._s_0.Z;
          if (SUB84(uVar19,4) == -1) {
            local_210._0_4_ = (uint)local_2c0;
            local_210._4_4_ = local_2c0._4_4_;
            uStack_208._0_4_ = (int)FStack_2b8.Data;
            uStack_208._4_4_ = FStack_2b8.Data._4_4_;
          }
          else {
            pTVar18 = FDynamicMesh3::GetTriNormal
                                (param_1,(TVector<double> *)&local_258._s_0,local_330._4_4_);
            uVar21 = 1;
            auVar3 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
            local_2b0 = (uint *)(pTVar18->field0_0x0)._s_0.Z;
            local_210._0_4_ = auVar3._0_4_;
            local_210._4_4_ = auVar3._4_4_;
            uStack_208._0_4_ = auVar3._8_4_;
            uStack_208._4_4_ = auVar3._12_4_;
            if ((double)FStack_2a0.Data * auVar3._8_8_ + local_2a8 * auVar3._0_8_ +
                (double)local_298 * (double)local_2b0 < (double)pFVar8) {
              bVar10 = false;
              uVar21 = 0;
            }
          }
          local_240 = (FDynamicMesh3 *)(local_378 + 1);
          local_1f0 = (double *)CONCAT71(local_1f0._1_7_,uVar21);
          local_260 = &local_240;
          local_268 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_378[1] = '\x01';
          local_228 = (undefined1 *)local_2a8;
          pFStack_220 = FStack_2a0.Data;
          local_218.Data = local_298;
          local_238 = (uint *)uVar19;
          local_230.Data = (FScriptContainerElement *)param_1;
          local_200 = local_2b0;
          local_1f8.Data = pFVar8;
          FDynamicMesh3::EnumerateVertexTriangles
                    (param_1,auVar2._0_4_,(TFunctionRef<void___cdecl(int)> *)&local_268);
          if ((bVar10) && (local_378[1] != '\0')) {
            local_340[0] = '\x01';
          }
          else {
            local_340[0] = '\0';
          }
          local_344[0] = local_378[1];
          cVar31 = local_378[1] != '\0';
          puVar25 = *(uint **)(lVar30 + *(longlong *)
                                         ((param_1->Edges).Blocks.AllocatorInstance.Data +
                                         (longlong)pFVar27 * 8) + 8);
          local_330 = (undefined1  [8])puVar25;
          pTVar18 = FDynamicMesh3::GetTriNormal
                              (param_1,(TVector<double> *)&local_258._s_0,(int)puVar25);
          bVar10 = true;
          uVar21 = 1;
          local_290 = (undefined1 *)(pTVar18->field0_0x0)._s_0.X;
          FStack_288.Data = (FScriptContainerElement *)(pTVar18->field0_0x0)._s_0.Y;
          local_280 = (FScriptContainerElement *)(pTVar18->field0_0x0)._s_0.Z;
          if ((int)((ulonglong)puVar25 >> 0x20) == -1) {
            uVar33 = (uint)local_2c0;
            uVar34 = local_2c0._4_4_;
            uVar35 = (int)FStack_2b8.Data;
            uVar36 = FStack_2b8.Data._4_4_;
          }
          else {
            pTVar18 = FDynamicMesh3::GetTriNormal
                                (param_1,(TVector<double> *)&local_258._s_0,local_330._4_4_);
            uVar21 = 1;
            auVar3 = *(undefined1 (*) [16])&pTVar18->field0_0x0;
            local_2b0 = (uint *)(pTVar18->field0_0x0)._s_0.Z;
            uVar33 = auVar3._0_4_;
            uVar34 = auVar3._4_4_;
            uVar35 = auVar3._8_4_;
            uVar36 = auVar3._12_4_;
            if ((double)FStack_288.Data * auVar3._8_8_ + (double)local_290 * auVar3._0_8_ +
                (double)local_280 * (double)local_2b0 < (double)pFVar8) {
              bVar10 = false;
              uVar21 = 0;
            }
          }
          local_240 = (FDynamicMesh3 *)(local_378 + 1);
          local_1f0 = (double *)CONCAT71(local_1f0._1_7_,uVar21);
          local_260 = &local_240;
          local_268 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsDevelopableAlongEdge'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_378[1] = '\x01';
          local_228 = local_290;
          pFStack_220 = FStack_288.Data;
          local_218.Data = local_280;
          local_210 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                      CONCAT44(uVar34,uVar33);
          uStack_208 = (int *)CONCAT44(uVar36,uVar35);
          local_238 = puVar25;
          local_230.Data = (FScriptContainerElement *)param_1;
          local_200 = local_2b0;
          local_1f8.Data = pFVar8;
          FDynamicMesh3::EnumerateVertexTriangles
                    (param_1,auVar2._4_4_,(TFunctionRef<void___cdecl(int)> *)&local_268);
          if ((bVar10) && (local_378[1] != '\0')) {
            local_340[1] = 1;
          }
          else {
            local_340[1] = 0;
          }
          local_344[1] = local_378[1];
          if (local_378[1] != '\0') {
            cVar31 = cVar31 + '\x01';
          }
          FVar26.Data = local_338.Data;
          param_3 = local_310;
          iVar29 = local_348;
          if (cVar31 != '\0') {
            iVar28 = 0;
            puVar25 = auStack_17c;
            local_270 = puVar25;
            lVar30 = 0;
            do {
              if (local_344[lVar30] != '\0') {
                uVar33 = *puVar25;
                uVar34 = auStack_17c[lVar30 + -1];
                pFVar27 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
                local_278 = (ulonglong)uVar33;
                lVar5 = *(longlong *)(pFVar27 + (ulonglong)(uVar34 >> 9) * 8);
                pdVar1 = (double *)(lVar5 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
                local_f0 = *pdVar1;
                dStack_e8 = pdVar1[1];
                local_e0 = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar34 & 0x1ff) * 0x18);
                lVar5 = *(longlong *)(pFVar27 + (ulonglong)(uVar33 >> 9) * 8);
                pdVar1 = (double *)(lVar5 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
                local_258._s_0.X = *pdVar1;
                local_258._s_0.Y = pdVar1[1];
                dVar38 = local_258._s_0.X - local_f0;
                local_258._s_0.Z = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
                dVar9 = local_258._s_0.Y - dStack_e8;
                dVar37 = local_258._s_0.Z - local_e0;
                dVar32 = SQRT(dVar9 * dVar9 + dVar38 * dVar38 + dVar37 * dVar37);
                FVar26.Data = local_338.Data;
                param_3 = local_310;
                iVar29 = local_348;
                local_270 = puVar25;
                if (dVar32 <= 0.0) break;
                pFVar27 = (FScriptContainerElement *)this->TryToImproveTriQualityThreshold;
                local_238 = (uint *)local_378;
                dVar32 = dVar11 / dVar32;
                local_230.Data = (FScriptContainerElement *)&local_258;
                local_378[0] = '\0';
                local_228 = (undefined1 *)CONCAT44(uVar33,uVar34);
                pFStack_220 = (FScriptContainerElement *)(&local_2a8 + (longlong)iVar28 * 3);
                local_210 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_330;
                local_148 = &local_240;
                local_150 = Core::Private::Function::
                            TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>,void,int>
                            ::Call;
                local_330 = (undefined1  [8])puVar16;
                uStack_208 = (int *)CONCAT71(uStack_208._1_7_,local_340[lVar30] == '\0');
                local_108 = dVar32 * dVar38;
                local_100 = dVar32 * dVar9;
                local_f8 = dVar32 * dVar37;
                local_240 = param_1;
                local_218.Data = pFVar27;
                FDynamicMesh3::EnumerateVertexTriangles
                          (param_1,uVar34,(TFunctionRef<void___cdecl(int)> *)&local_150);
                if (local_378[0] == '\0') {
                  if ((double)local_330 * dVar15 * dVar17 < (double)pFVar27) {
                    FStack_2b8.Data = (FScriptContainerElement *)local_378;
                    local_2b0 = (uint *)local_330;
                    local_168 = &local_2c0;
                    local_378[0] = '\x01';
                    local_170 = Core::Private::Function::
                                TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>,void,int>
                                ::Call;
                    local_2c0 = param_1;
                    FDynamicMesh3::EnumerateVertexTriangles
                              (param_1,uVar34,(TFunctionRef<void___cdecl(int)> *)&local_170);
                    if (local_378[0] != '\0') goto LAB_1435c5806;
                  }
                  local_2f0[0] = cosf(this->NormalDistortTolerance * fVar14);
                  local_360[0] = (FScriptContainerElement)this->bPreserveVertexNormals;
                  local_370[0] = this->bPreserveOverlayUVs;
                  local_350[0] = (FScriptContainerElement)this->bPreserveVertexUVs;
                  local_368[0] = this->bPreserveTriangleGroups;
                  local_2e0[0] = (uint)local_278;
                  local_2c8[0] = local_2d8;
                  local_358[0] = 1;
                  local_378[0] = '\0';
                  local_2f4 = -1;
                  local_330._0_4_ = this->UVDistortTolerance * this->UVDistortTolerance;
                  uVar19 = *(undefined8 *)
                            (local_198 +
                            *(longlong *)
                             ((param_1->Edges).Blocks.AllocatorInstance.Data +
                             (longlong)local_1a0.Data * 8) + 8);
                  local_320[0] = uVar34;
                  local_190._0_8_ = uVar19;
                  local_190._8_8_ = pFVar8;
                  local_2f8 = (FScriptContainerElement  [4])
                              FDynamicMesh3::GetTriangleGroup(param_1,(uint)uVar19);
                  local_328 = -1;
                  if (SUB84(uVar19,4) != 0xffffffff) {
                    local_328 = FDynamicMesh3::GetTriangleGroup(param_1,local_190._4_4_);
                  }
                  local_240 = (FDynamicMesh3 *)local_378;
                  local_238 = local_2c8;
                  local_228 = local_368;
                  pFStack_220 = local_2f8;
                  local_218.Data = (FScriptContainerElement *)&local_328;
                  uStack_208 = &local_2f4;
                  local_200 = local_320;
                  local_1f8.Data = (FScriptContainerElement *)&local_f0;
                  local_1f0 = &local_108;
                  local_1e8 = local_190 + 8;
                  local_1e0.Data = (FScriptContainerElement *)&local_258;
                  local_1d8 = local_360;
                  local_1d0 = local_2e0;
                  local_1c8 = local_2f0;
                  local_1c0 = local_358;
                  local_1b8.Data = local_350;
                  local_1b0 = local_330;
                  local_1a8 = local_370;
                  local_158 = &local_240;
                  local_160 = Core::Private::Function::
                              TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>,void,int>
                              ::Call;
                  local_230.Data = (FScriptContainerElement *)param_1;
                  local_210 = param_2;
                  FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                            (&param_1->VertexEdgeLists,local_320[0],
                             (TFunctionRef<void___cdecl(int)> *)&local_160);
                  puVar25 = local_270;
                  if (local_378[0] == '\0') {
                    local_138 = 0xffffffffffffffff;
                    local_128 = uVar12;
                    uStack_120 = uVar13;
                    local_118 = 0xffffffffffffffff;
                    iVar28 = (**(code **)(param_1->_padding_ + 0x70))
                                       (param_1,local_278 & 0xffffffff,uVar34,0,local_140);
                    param_3 = local_310;
                    FVar26.Data = local_338.Data;
                    iVar29 = local_348;
                    if (iVar28 == 0) {
                      if (*(void **)local_310 != (void *)0x0) {
                        Core::Private::Function::CheckCallable(*(void **)local_310);
                        pcVar6 = *(code **)param_3;
                        plVar22 = *(longlong **)&param_3->field_0x28;
                        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
                          plVar22 = (longlong *)&param_3->field_0x10;
                        }
                        uVar19 = (**(code **)(*plVar22 + 8))();
                        (*pcVar6)(uVar19,local_140);
                      }
                      iVar29 = local_348 + 1;
                      local_348 = iVar29;
                      if (*(int *)&(param_2->Elements).field_0x8 ==
                          *(int *)&(param_2->Elements).field_0x34) goto LAB_1435c5921;
                      FVar7 = (param_2->Hash).SecondaryData;
                      FVar24 = (ForElementType<FSetElementId>)&param_2->Hash;
                      if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                        FVar24 = FVar7;
                      }
                      iVar28 = *(int *)((longlong)FVar24 +
                                       ((longlong)param_2->HashSize - 1U & (longlong)local_12c) * 4)
                      ;
                      if (iVar28 == -1) goto LAB_1435c5921;
                      goto LAB_1435c5900;
                    }
                    break;
                  }
                }
              }
LAB_1435c5806:
              puVar25 = puVar25 + -1;
              iVar28 = iVar28 + 1;
              lVar30 = lVar30 + 1;
              local_270 = puVar25;
              FVar26.Data = local_338.Data;
              param_3 = local_310;
              iVar29 = local_348;
            } while (iVar28 < 2);
          }
        }
      }
      goto LAB_1435c582c;
    }
    pTVar20 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(param_2,local_d8);
    if (&local_308 != pTVar20) {
      if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
      }
      local_308.AllocatorInstance.Data = (pTVar20->AllocatorInstance).Data;
      (pTVar20->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_308.ArrayNum = pTVar20->ArrayNum;
      local_308.ArrayMax = pTVar20->ArrayMax;
      pTVar20->ArrayNum = 0;
      pTVar20->ArrayMax = 0;
    }
    if (local_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8[0].AllocatorInstance.Data);
    }
    if ((iVar29 == local_2e4) || (local_318 = local_318 + 1, 0 < local_318)) {
      if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
      }
      if (*(longlong *)param_3 != 0) {
        plVar22 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar22 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
      return;
    }
  } while( true );
  while (iVar28 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar28 * 0xc),
        iVar28 != -1) {
LAB_1435c5900:
    if (*(int *)(*(longlong *)&param_2->Elements + (longlong)iVar28 * 0xc) == local_12c) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(param_2,iVar28);
      break;
    }
  }
LAB_1435c5921:
  if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
    FVar7 = (param_2->Hash).SecondaryData;
    FVar24 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FVar24 = FVar7;
    }
    iVar28 = *(int *)((longlong)FVar24 +
                     ((longlong)param_2->HashSize - 1U & (longlong)(int)uStack_120) * 4);
    if (iVar28 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_2->Elements + (longlong)iVar28 * 0xc) == (int)uStack_120) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(param_2,iVar28);
          break;
        }
        iVar28 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar28 * 0xc);
      } while (iVar28 != -1);
    }
  }
  FVar26.Data = local_338.Data;
  if ((uStack_120._4_4_ != -1) &&
     (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34)) {
    FVar7 = (param_2->Hash).SecondaryData;
    FVar24 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FVar24 = FVar7;
    }
    iVar28 = *(int *)((longlong)FVar24 +
                     ((longlong)param_2->HashSize - 1U & (longlong)uStack_120._4_4_) * 4);
    if (iVar28 != -1) {
      do {
        if (*(int *)(*(longlong *)&param_2->Elements + (longlong)iVar28 * 0xc) == uStack_120._4_4_)
        {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(param_2,iVar28);
          FVar26.Data = local_338.Data;
          break;
        }
        iVar28 = *(int *)(*(longlong *)&param_2->Elements + 4 + (longlong)iVar28 * 0xc);
      } while (iVar28 != -1);
    }
  }
LAB_1435c582c:
  uVar23 = (ulonglong)local_2e8;
  local_2d0 = local_2d0 + 4;
  goto LAB_1435c50d8;
}

